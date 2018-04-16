
### What is cordova plugin
Cordova plugin contains JavaScript code and Native code that communicates with each other to pass data between the web and native functions.

### How to create create cordova plugin
You can easily create cordova plugin with below configure steps:

### Configuration Steps
**Step 1:** We need to install plugman to create cordova plugin. Install plugman via below npm command.

```sh 
/workspace/MyIonicApp$ sudo npm -g install plugman
```

**Step 2:** Then create a new plugin via the following command:

```sh 
/workspace/MyIonicApp$ plugman create -name DiyalogChat -plugin_id im.diyalog.ionicplugin -plugin_version 1.0.0
```
Once done, in the root folder of project there is a new folder generated, whose name is DiyalogChat.

**Step 3:** I need to develop a plugin used for Android platform, so enable the created plugin with Android platform via command:

```sh 
/workspace/MyIonicApp$ cd DiyalogChat/
/workspace/MyIonicApp/DiyalogChat$ plugman platform add --platform_name android
```
Once done, a DiyalogChat.java source file is created, which is used to performing native API call.

**Step 4:** Perform the following command to generate a descriptor file, package.json for created plugin. Just press enter key again and again to simply use the default value.

```sh 
/workspace/MyIonicApp/DiyalogChat$ plugman createpackagejson ./
name: (im.diyalog.ionicplugin) 
```
Once done, the package.json file is generated within plugin folder

**Step 5:** Add this plugin to ionic sample application.

```sh 
/workspace/MyIonicApp/DiyalogChat$ cd ..
/workspace/MyIonicApp$ cordova plugin add DiyalogChat/
```
Once done, in config.xml in the root folder, our plugin is added. 

```sh 
<plugin name="im.diyalog.ionicplugin" spec="DiyalogChat" />
```

Now you can use DiyalogChat plugin in another application also, just copy folder DiyalogChat folder from root folder of the project.








