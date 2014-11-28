#include "ofApp.h"

bool start_mov;

//--------------------------------------------------------------------------------------------------------------
void ofApp::setup(){
    
    receiver.setup( PORT );
    ofSetVerticalSync(true);
    ofBackgroundGradient(ofColor(255,80,0),ofColor(100,100,5), OF_GRADIENT_CIRCULAR);
    mng.setup(1440,900);
    
    layer1 = mng.createLayer<TestLayer1>();
    layer2 = mng.createLayer<TestLayer2>();
    layer3 = mng.createLayer<TestLayer3>();
    
    layer1->setVisible(true);
    layer1->setAlpha(255);
    
    layer2->setVisible(true);
    layer2->setAlpha(255);
    
    layer3->setVisible(true);
    layer3->setAlpha(255);
    
    start_mov = false;
    state = "";
    
}

//--------------------------------------------------------------------------------------------------------------
void ofApp::update(){
    
    mng.update();
    while(receiver.hasWaitingMessages()){
        
        ofxOscMessage m;
        receiver.getNextMessage(&m);
        
        if (m.getAddress() == "/start_mov"){
            start_mov = true;
        }
        
        if (m.getAddress() == "/blobs"){
            state = m.getArgAsString(0) ;
        }
        
        if (m.getAddress() == "/holes"){
            holes = m.getArgAsString(0) ;
        }
        
    }
    
}

//--------------------------------------------------------------------------------------------------------------
void ofApp::draw(){
    
    ofEnableAlphaBlending();
    mng.draw();
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
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
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    
}
