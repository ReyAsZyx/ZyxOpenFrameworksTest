#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    camWidth = 640;
    camHeight = 480;

    myVideoGrabber.initGrabber (camWidth, camHeight);

    invertedVideoData = new unsigned char [camWidth * camHeight * 3];
    myTexture.allocate (camWidth, camHeight, GL_RGB);
}

//--------------------------------------------------------------
void ofApp::update(){

    myVideoGrabber.update();

    if(myVideoGrabber.isFrameNew()) {

        unsigned char* pixelData = myVideoGrabber.getPixels();

        int nTotalBytes = camWidth * camHeight * 3;

        for(int i=0; i<nTotalBytes; i++) {
            invertedVideoData[i] = 255 - pixelData[i];
        }

        myTexture.loadData(invertedVideoData, camWidth, camHeight, GL_RGB);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofBackground (0, 0, 0 );
    ofSetColor( 255, 255, 255 );

    myVideoGrabber.draw(0,0);
    myTexture.draw(650, 0);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
