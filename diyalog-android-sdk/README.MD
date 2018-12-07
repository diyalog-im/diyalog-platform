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

In Diyalog SDK we have used firebase messaging platform for sending push notification. We have used firebase services in sdk. If in main application has also firebase push notification then client need to follow below steps to configure FCM push notification.


### Configuration Steps
**Step 1:** Open module level build.grdle file. <br />

**a. Add below dependency**

```sh
     implementation 'com.google.firebase:firebase-messaging:12.0.1' <br />
     implementation 'com.google.firebase:firebase-core:12.0.1' <br />
```



**Step 2:** Client need to extend firebase register class with **DiyalogFirebaseInstanceIDService** in stead of FirebaseInstanceIdService. It will Override **onTokenRefresh** method with device token parameter. client can find device token here, and he can use into main application when require.<br />

```sh
public class MyFirebaseInstanceIDService extends DiyalogFirebaseInstanceIDService {
    private static final String TAG = MyFirebaseInstanceIDService.class.getSimpleName();


    @Override
    protected void onTokenRefresh(String token) {
        Log.d(TAG, "Token loaded: " + token);

    }


}
```

**Step 3:** Client need to extend firebase push receiver class with **DiyalogFirebaseMessagingService** in stead of FirebaseMessagingService. you need to Override **onMessageReceived** method with RemoteMessage(Push payload) data. Client need to check remote message data for application or sdk.<br />

```sh
public class MyFirebaseMessagingService extends DiyalogFirebaseMessagingService {
    private static final String TAG = MyFirebaseMessagingService.class.getSimpleName();

    @Override
    public void onMessageReceived(RemoteMessage remoteMessage) { 

        String seq_ID = remoteMessage.getData().get("seq");
        if(seq_ID!=null) {
            // push received for diyalog sdk
            processPushMessage(remoteMessage); 	    //show notification of Diyalog sdk
        }else{
            // push received for Main application, client can add their logic here to show main application push notification
        }
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

 

