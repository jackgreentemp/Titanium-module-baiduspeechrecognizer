# Titanium modules 百度语音
###功能
目前仅支持百度语音在线识别功能，具体介绍参见[百度语音官网](http://yuyin.baidu.com/ "百度语音官网")
###内容
- [模块工程](https://github.com/jackgreentemp/Titanium-module-baiduspeechrecognizer/tree/master/android/baiduspeechrecognizerandroid "模块工程")
- [模块测试工程](https://github.com/jackgreentemp/Titanium-module-baiduspeechrecognizer/tree/master/android/test_baiduspeech "模块测试工程")

###模块配置
打开/android/timodule.xml，将百度语音注册后的APP信息填入相应字段
```xml
<meta-data android:name="com.baidu.speech.APP_ID" android:value="999999"/>
<meta-data android:name="com.baidu.speech.API_KEY" android:value="8MAxI5o7VjKSZOKeBzS4XtxO"/>
<meta-data android:name="com.baidu.speech.SECRET_KEY" android:value="Ge5GXVdGQpaxOmLzc8fOM8309ATCz9Ha"/>
```
###模块调用
```javascript
var speechrecognizerModule = require("com.babyplan.baiduspeechrecognizer");
var speechrecognizer = speechrecognizerModule.createExample();
speechrecognizer.start(function(e){
		// Ti.API.info(JSON.stringify(e));
		// Ti.API.info(e.results[0]);
		$.label.text = e.results[0];
	});
```