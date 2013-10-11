#include "testApp.h"




bool mouseIsDown;
bool mouseIsOver;
int ballX;
int ballY;



//--------------------------------------------------------------
void testApp::setup(){
	ofSetFrameRate(24);
	ofSetWindowShape(580, 600);
	ofBackground(255, 255, 255);
	ofEnableSmoothing();
	ofEnableAlphaBlending();
    ofSetCircleResolution(100);
	ofSetBackgroundAuto(false);
    
    background.loadImage("ban.png");
    lie.loadImage("lie.png");
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    ofSetColor(255);
    
    
    background.draw(0, 0);
    
    lie.draw(ballX-210, ballY-180,300,300);
    
    
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
	
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
   // mouseIsDown=true;
    
   
    ballX = x;
	ballY = y;
   
    
   
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){
    
}