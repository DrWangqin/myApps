#include "testApp.h"

float pmousex;
float pmousey;

void testApp::setup(){
    ofBackground(255, 255, 255);
     
    ofSetFrameRate(100);
   
    
    for (int i = 0; i < NUM; i++){
        time[i]= ofRandom(1);
    }
    
}


   

//--------------------------------------------------------------
void testApp::update(){
   
    
    
    
    posx =pmousex;
    posy =pmousey;
    float nextposx=mouseX;
    float nextposy=mouseY;
    
    //compare the X and Y value difference of the two closest positions
    float dx= nextposx-posx;
    float dy= nextposy-posy;
    
    //calculate the angle (in radians) between the two positions
    angle = atan2(dy, dx);
    
    pmousex=mouseX;
    pmousey=mouseY;
    
    
}

//--------------------------------------------------------------
void testApp::draw(){
    
    ofEnableAlphaBlending();
    ofSetRectMode(OF_RECTMODE_CENTER);
    
    
    ofEnableAlphaBlending();
    ofSetColor(0,0,0,100);
    for(int i=0; i<NUM; i++){
        float nextposx=mouseX;
        float dx= nextposx-posx;
        float nextposy=mouseY;
        float dy= nextposy-posy;
        
        time[i]+=0.1;
        angle=ofNoise(time[i])*3-1.5+ofNoise(time[i])*dx*dy*0.5;
        
    }
    
    
    
    ofPushMatrix();
    ofTranslate(posx, posy);
    ofRotateZ(angle * RAD_TO_DEG);  //turn the radians value to degree value by "RAD_TO_DEG",  set up the rotation of the fly
    

    ofSetColor(0, 0, 0,200);
    
	ofTriangle(-12, 0, -35, 25, 0, 0);
    ofTriangle(-35, 20, -35, 25, -10, 35);
    
    ofTriangle(12, 0, 35, 25, 0, 0);
    ofTriangle(35, 20, 35, 25, 10, 35);
    
    ofTriangle(-12, 0, -30, -20, 0, 0);
    ofTriangle(-35, -20, -30, -20, -10, -35);
    
    ofTriangle(12, 0, 30, -20, 0, 0);
    ofTriangle(35, -20, 30, -20, 10, -35);
    
    
    
    
    
    for(int i=0;i<30;i++){
        ofSetColor(0,0,0,50-i);
        ofEllipse(0, 0, 20+i, 13+i);
    }
    
    ofSetColor(255, 255, 255);
    ofCircle(-8, -5, 4);
    ofCircle(8, -5, 4);
    
    ofSetColor(0, 0, 0);
    ofCircle(-8, -5, 2);
    ofCircle(8, -5, 2);
    
    
    
    
    
    
    //ofSetColor(0);
    //ofRect( 0,0, 40,10); // this rectangle shows the same idea   
    
    ofPopMatrix();
    
   
    
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