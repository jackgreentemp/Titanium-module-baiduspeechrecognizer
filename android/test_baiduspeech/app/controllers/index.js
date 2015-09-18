var speechrecognizerModule = require("com.babyplan.baiduspeechrecognizer");
// var speechrecognizerModule = require("com.module.test");

function doClick(e) {
	// baiduspeech.start();
	// var speechrecognizer = speechrecognizerModule.createBaiduspeechandroid({});
	var speechrecognizer = speechrecognizerModule.createExample();
	// Ti.API.info(speechrecognizer.lang_tag);
	// speechrecognizer.lang_tag = "my";
	// Ti.API.info(speechrecognizer.lang_tag);
	speechrecognizer.start(function(e){
		// Ti.API.info(JSON.stringify(e));
		// Ti.API.info(e.results[0]);
		$.label.text = e.results[0];
	});
}

function test(){
	var speechrecognizerModule = require('jp.isisredirect.speechrecognizer');
	Ti.API.info("module is => " + JSON.stringify(speechrecognizerModule));
	var speechrecognizer = speechrecognizerModule.createSpeechRecognizer();
	Ti.API.info("proxy is => " + JSON.stringify(speechrecognizer));
	speechrecognizer.addEventListener(speechrecognizerModule.READYFORSPEECH, function(e) {
	    // notify to user that Recognize is ready 
	    Ti.API.info(JSON.stringify(e));  
	});
	speechrecognizer.addEventListener(speechrecognizerModule.BEGINNINGOFSPEECH, function(e) {
	    // notify to user that Recognizer detected user's voice
	    Ti.API.info(JSON.stringify(e));   
	});
	speechrecognizer.addEventListener(speechrecognizerModule.RESULTS, function(e) {
	    // recognized results in e.results
	    Ti.API.info(JSON.stringify(e));  
	});
	speechrecognizer.start();
}

$.win.open();
