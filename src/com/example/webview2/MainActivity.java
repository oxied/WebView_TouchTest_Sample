package com.example.webview2;

import android.app.Activity;
import android.os.Bundle;
import android.view.Menu;
import android.view.View;
import android.webkit.WebView;
import android.webkit.WebViewClient;

import com.good.gd.GDAndroid;

public class MainActivity extends Activity {

	private WebView webView;

	@Override
	protected void onCreate(Bundle savedInstanceState) {
		super.onCreate(savedInstanceState);
		setContentView(R.layout.activity_main);

		GDAndroid.getInstance().activityInit(this);

		webView = (WebView) findViewById(R.id.webview);
		webView.loadUrl("http://bash.im/");
		webView.setWebViewClient(new WebViewClient() {
			@Override
			public boolean shouldOverrideUrlLoading(WebView view, String url) {
				view.loadUrl(url);
				return true;
			}
		});
	}

	@Override
	public boolean onCreateOptionsMenu(Menu menu) {
		// Inflate the menu; this adds items to the action bar if it is present.
		getMenuInflater().inflate(R.menu.main, menu);
		return true;
	}

	public void onShowWebviewClicked(View view) {
		if (webView.getVisibility() == View.VISIBLE) {
			webView.setVisibility(View.GONE);
		} else {
			webView.setVisibility(View.VISIBLE);
			webView.loadUrl("http://bash.im/");
		}
	}

}
