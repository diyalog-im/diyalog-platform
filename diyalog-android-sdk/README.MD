# Android SDK of Diyalog Messaging Platform

Diyalog SDK is used for enabling messaging for your application. It is a multi-platform communication Messaging SDK for mobile and web. It is easy to integrate, save development cost and delight users with a stable, secure and customization messaging. 

### SDK Supports
Diyalog SDK supported with Android 4.0.3(API level 15) & Above

### Features

  - One-to-One Chat 
  - Group Chat
  - Send text message
  - Send Media file (Audio, Video, Image)
  - Send Location
  - Share Contact
  - Audio Call

### Configuration Steps
**Step 1:** Open your Project level build.gradle file and add below mentioned maven repository Url in build.grdle file.<br />

```sh
repositories {
    jcenter()
    mavenCentral()
    ...
    maven {
        credentials {
            username mavenUser
            password mavenPassword
        }
        url 'http://mavenrepo.diyalog.im:18081/repository/maven-releases/'
    }
}
```

**You will need credential for access our private repository. We will create a user for your company.
Please contact us to get mavenUser and mavenPassword for accessing repository.**
		
**Step 2:** Open module level build.grdle file. <br />

**a. set compile and target sdk version to 26 and above**

```sh
compileSdkVersion 26
    defaultConfig {
        --
        minSdkVersion 15
        targetSdkVersion 26
        --
	multiDexEnabled true
    }
    dexOptions {
        javaMaxHeapSize "2g"
    }
    lintOptions {
        abortOnError false
    }
```

**b. Add below mentioned dependency**

 ```sh
 implementation "im.diyalog:DiyalogEngine:0.0.1"
```



**Step 3:** Open your project AndroidManifest.xml file and add below line of code inside <application> tag.

```sh
<meta-data
	android:name="com.google.android.geo.API_KEY"
	android:value="YOUR_API_KEY_HERE" />
```

**Note** : Replace **YOUR\_API\_KEY\_HERE** with your actual **Map API** key which you will get from your google Api console
To get Map API key please check this

**Link :** **https://developers.google.com/maps/documentation/android-api/signup**

**Step 4:** Create Application class and extend it with **DiyalogEngineApplication**. And override **onConfigureDiyalogEngine()** method.
Inside that method set below configure.<br />
**a. Set Server End Point:**
```sh
DiyalogEngine.diyalogInstance().setEndpoints(new String[]{"YOUR_SERVER_URL_HERE"});
```
**b. Set push ID:** You need to set push ID to get push notification while application is closed.
```sh
DiyalogEngine.diyalogInstance().setPushId(YOUR_PUSH_ID_HERE);
```
**Note** : Replace **YOUR_PUSH_ID** with your actual **Push ID** key which you will get from your google console

**c. Set Custom theme color:**
```sh
DiyalogStyle style = DiyalogEngine.diyalogInstance().style;
style.setMainColor(Color.parseColor("#42f47a"));    
```

**Note:** Diyalog SDK gives you many customization in the chat views. You can learn details about styling Diyalog in **[styling document.](diyalog-style/README.md)** 

**d. Set Configurable following parameter :**

-  Set enable/disable audio call funcation
-  Set Application name
-  Invite URL
-  Help line number
-  Privacy policy text/URL
-  Terms and condition text/URL
-  Enable back button on Chat home screen.

### Full Code:
```sh
public class DiyalogApplication extends DiyalogEngineApplication {
	@Override
	public void onConfigureDiyalogEngine() {


		// set here your end point
		DiyalogEngine.diyalogInstance().setEndpoints(new String[]{"YOUR_SERVER_URL_HERE "});

		// set here your end point
                DiyalogEngine.diyalogInstance().setPushId(YOUR_PUSH_ID);

		// set here you application theme color
		DiyalogStyle style = DiyalogEngine.diyalogInstance().style;
		style.setMainColor(Color.parseColor("#FFFF4081"));
	}
}
```
Do not forget to mention application class  in **AndroidManifest.xml** inside **<application>** tag using **android:name** property.

**Step 5:** Now you have done with integration steps, Add below code for open chat screen from your application.  This will first check user authentication is completed or not, First time it will ask for login screen and after authentication complete it will open chat screen. Follow below steps

- **a.** import messenger class **“import static im.diyalog.sdk.util.DiyalogEngineMessenger.messenger;”**
- **b.** And code for start chat screen<br />

```sh
btnStartChat.setOnClickListener(new View.OnClickListener() {
	@Override
	public void onClick(View v) {
		 
           if (messenger().getAuthState() != AuthState.LOGGED_IN) {

            long lastActiveAuthID = messenger().getPreferences().getLongOfKey(Authentication.KEY_LAST_ACTIVEUSER_AUTH_ID);
            if (lastActiveAuthID == 0)
            {
                Bundle authExtras = new Bundle();
                authExtras.putInt(AuthActivity.SIGN_TYPE_KEY, AuthActivity.SIGN_TYPE_IN);
                authExtras.putInt(AuthActivity.USER_TYPE_KEY, AuthActivity.USER_TYPE_PERSONAL);
                DiyalogEngine.diyalogInstance().getActivityManager().startAuthActivity(MainActivity.this, authExtras);
                finish();
            }
            else {

                messenger().autoLogin(lastActiveAuthID);
                messenger().switchAccount();
                messenger().killAppStateActor();

                DiyalogEngine.diyalogInstance().createDiyalog(getApplication());
                DiyalogEngine.diyalogInstance().startMessagingApp(this);
                finish();
            }
            return;


        }

        DiyalogEngine.diyalogInstance().startMessagingApp(this);
        finish();
	}
});
```


# Integrate Firebase Messaging Push notification with Diyalog SDK

In Diyalog SDK we have used firebase messaging platform for sending push notification. so we have used firebase services in sdk. Client need to configure as below into main application.

## Configuration Steps on firebase console

### To create a Firebase project

**Step 1:** Create a Firebase project in the [Firebase console](https://console.firebase.google.com/), if you don't have any project then Click **Add project**. If you already have an existing Google project associated with your mobile app, select it from the **Project name** drop down menu. Otherwise, enter a project name to create a new project 

**Step 2:** Follow the remaining steps and click **Create project** (or **Add Firebase** if you have existing project) for your project. When the process completes, you'll be taken to the project overview.

### Now that you have a project, you can add your Android app to it

**Step 1:** Click **Add Firebase to your Android app** and follow the setup steps. If you're importing an existing Google project, this may happen automatically and you can just download the config file.

**Step 2:** When prompted, enter your app's package name. It's important to enter the package name your app is using; this can only be set when you add an app to your Firebase project.

**Step 3:** During the process, you'll download a **google-services.json** file. You can download this file again at any time.

**Step 4:** After you add the initialization code, run your app to send verification to the Firebase console that you've successfully installed Firebase.


## Configuration Steps for android project 

### You need to perform a few basic steps to prepare your Android Studio project. 

**Step 1:** Add **google-services.json** file to application level project. (usually the app/google-services.json)
**Step 2:** Add rules to your root-level build.gradle file, to include the google-services plugin and the Google's Maven repository.

```sh
buildscript {
    // ...
    dependencies {
        // ...
        classpath 'com.google.gms:google-services:4.1.0' // google-services plugin
    }
}

allprojects {
    // ...
    repositories {
        // ...
        google() // Google's Maven repository
    }
}
```

**Step 3:** Then, in your module Gradle file (usually the app/build.gradle), add the apply plugin line at the bottom of the file to enable the Gradle plugin. You should also add the dependencies for the Firebase SDKs.

```sh
apply plugin: 'com.android.application'

android {
  // ...
}

dependencies {
  // ...
    implementation 'com.google.firebase:firebase-messaging:12.0.1'
    implementation 'com.google.firebase:firebase-core:12.0.1'
     
}

// ADD THIS AT THE BOTTOM
apply plugin: 'com.google.gms.google-services'
```

**Step 4:** Now, client require to Pass sender ID/project ID to sdk from main application as below. client need to pass this pushID before Initialize() sdk. Client can register pushID into application class.

```sh
 DiyalogEngine.diyalogInstance().setPushId(214910017039L);
```

Done. Above steps are enough for generating push notification, if main application has no any FCM integration.


## Main application has firebase push notification
If in main application has also firebase push notification then client need to follow additinal below steps to configure FCM push notification.


### Configuration Steps

**Step 1:** Client need send device token to diyalog sdk from main application's FirebaseInstanceIdService class.<br />

```sh
 public class MyFirebaseInstanceIDService extends FirebaseInstanceIdService {
    private static final String TAG = DiyalogFirebaseInstanceIDService.class.getSimpleName();

    @Override
    public void onTokenRefresh() {
        super.onTokenRefresh();

        String refreshedToken = FirebaseInstanceId.getInstance().getToken();
        Log.d(TAG, "Token loaded Application:" + refreshedToken);

        DiyalogEngine.diyalogInstance().storeDeviceToken(getApplicationContext(),refreshedToken);
    }
}
```

**Step 3:** Client need to pass push payload data(RemoteMessage) to diyalog sdk from application's  FirebaseMessagingService.<br />

```sh
public class MyFirebaseMessagingService extends FirebaseMessagingService {
    private static final String TAG = MyFirebaseMessagingService.class.getSimpleName();

    @Override
    public void onMessageReceived(RemoteMessage remoteMessage) { 

            //show notification of Diyalog sdk
            DiyalogMessageService firebaseservice = new DiyalogMessageService(getApplication());
            firebaseservice.processPushMessage(remoteMessage);	    
        
    }
}

```
		

**Step 4:** Open your project AndroidManifest.xml file and register firebase service as below line of code inside <application> tag.

```sh

       <!--FCM push notification-->
        <service android:name=".MyFirebaseInstanceIDService">
            <intent-filter>
                <action android:name="com.google.firebase.INSTANCE_ID_EVENT" />
            </intent-filter>
        </service>

        <service android:name=".MyFirebaseMessagingService">
            <intent-filter>
                <action android:name="com.google.firebase.MESSAGING_EVENT" />
            </intent-filter>
        </service>

```

Done.  :)


