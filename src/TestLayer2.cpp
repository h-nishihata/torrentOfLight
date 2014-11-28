#include "TestLayer2.h"

string holes;

//--------------------------------------------------------------------------------------------------------------
void TestLayer2::update(){
    
}
//--------------------------------------------------------------------------------------------------------------
void TestLayer2::draw(){
    
    ofTranslate(0, 900);
    ofRotateX(180);
    
    
    ofEnableSmoothing();
    ofEnableAlphaBlending();
    ofBackgroundGradient(ofColor(200,50,200,240), ofColor(255,255,0,190), OF_GRADIENT_LINEAR);
    /*
    RED        ofBackgroundGradient(ofColor(255,0,0,240),ofColor(255,255,0,190), OF_GRADIENT_LINEAR);
    ORANGE     ofBackgroundGradient(ofColor(255,100,0,240),ofColor(255,255,0,190), OF_GRADIENT_LINEAR);
    PURPLE     ofBackgroundGradient(ofColor(200,50,200,240), ofColor(255,255,0,190), OF_GRADIENT_LINEAR);
    */
    
}