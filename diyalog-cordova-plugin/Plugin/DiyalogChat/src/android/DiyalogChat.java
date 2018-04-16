package im.diyalog.ionicplugin;

import org.apache.cordova.CordovaPlugin;
import org.apache.cordova.CallbackContext;

import org.json.JSONArray;
import org.json.JSONException;

import android.content.Context;
import android.content.Intent;

import org.apache.cordova.CordovaInterface;
import org.apache.cordova.CordovaWebView;

/**
 * This class echoes a string called from JavaScript.
 */
public class DiyalogChat extends CordovaPlugin {

  public void initialize(CordovaInterface cordova, CordovaWebView webView) {
       super.initialize(cordova, webView);
   }

  @Override
  public boolean execute(String action, JSONArray args, CallbackContext callbackContext) throws JSONException {

      if (action.equals("coolMethod")) {
          this.coolMethod(callbackContext);
           return true;
      }
      return false;
  }

  private void coolMethod(CallbackContext callbackContext) {

      Context context = cordova.getActivity().getApplicationContext();

      if(context!=null){
          cordova.getActivity().runOnUiThread(new Runnable() {
                 public void run() {
                       Intent intent = new Intent(context, DiyalogChatActivity.class);
                       cordova.getActivity().startActivity(intent);

                 }
           });
           callbackContext.success("Success");
      }else{
            callbackContext.error("Expected one non-empty string argument.");
      }
  }
}
