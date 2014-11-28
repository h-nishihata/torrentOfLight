#include "TestLayer1.h"

//--------------------------------------------------------------------------------------------------------------
void TestLayer1::update(){
    
}

//--------------------------------------------------------------------------------------------------------------
void TestLayer1::draw(){
    
     ofTranslate(0, 900);
     ofRotateX(180);
     
     ofBackground(0,0,0);
     
     ofSetColor(0,0,0,0);
     
     ofBeginShape();
     ofVertex(10, 40);
     ofVertex(ofGetWidth()-10, 40);
     ofVertex(ofGetWidth()-10, ofGetHeight()/2);
     ofVertex(10, ofGetHeight()/2);
     ofEndShape();
     
     //    ofBeginShape();
     //        ofVertex(10, ofGetHeight()/2);
     //        ofVertex(ofGetWidth()-10, ofGetHeight()/2);
     //        ofVertex(ofGetWidth()-10, ofGetHeight()-40);
     //        ofVertex(10, ofGetHeight()-40);
     //    ofEndShape();
     
}