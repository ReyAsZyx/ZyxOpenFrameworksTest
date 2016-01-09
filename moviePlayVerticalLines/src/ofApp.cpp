#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    video.loadMovie("sample_iTunes.mov");
    video.play();

}

//--------------------------------------------------------------
void ofApp::update(){

    video.update();
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofPixels &pixels = video.getPixelsRef();

    int w = pixels.getWidth();
    int h = pixels.getHeight();

    for(int x=0; x<w; x++) {
        ofColor color = pixels.getColor(x, h/2);

        ofSetColor(color);
        ofLine(x, 0, x, h);
    }

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
