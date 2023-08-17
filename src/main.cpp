#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
//	ofSetupOpenGL(1024,768,OF_WINDOW);			// <-------- setup the GL context
//
//	// this kicks off the running of my app
//	// can be OF_WINDOW or OF_FULLSCREEN
//	// pass in width and height too:
//	ofRunApp(new ofApp());
    
    /*-- code from ps3eye-example start --*/
    ofGLWindowSettings settings;
    settings.setSize(640, 480);
    ofCreateWindow(settings);
    return ofRunApp(std::make_shared<ofApp>());
    /*-- code from ps3eye-example end --*/

}
