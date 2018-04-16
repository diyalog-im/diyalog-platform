package im.diyalog.ionicplugin;

import android.app.Activity;
import android.os.Bundle;

public class DiyalogChatActivity extends Activity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        String package_name = getApplication().getPackageName();
        setContentView(getApplication().getResources().getIdentifier("diyalog_chat_layout", "layout", package_name));
    }
}
