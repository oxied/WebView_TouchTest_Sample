package com.example.webview2;

import java.util.Map;

import android.app.Application;

import com.good.gd.GDAndroid;
import com.good.gd.GDStateListener;

public class WebViewApplication extends Application implements GDStateListener {

	@Override
	public void onCreate() {
		GDAndroid.getInstance().setGDStateListener(this);
	}

	@Override
	public void onAuthorized() {
	}

	@Override
	public void onLocked() {
	}

	@Override
	public void onUpdateConfig(Map<String, Object> arg0) {
	}

	@Override
	public void onUpdatePolicy(Map<String, Object> arg0) {
	}

	@Override
	public void onUpdateServices() {
	}

	@Override
	public void onWiped() {
	}

}
