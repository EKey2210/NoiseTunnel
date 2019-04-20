#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    ofBackground(0);
    ofEnableBlendMode(OF_BLENDMODE_ADD);
    
    this->mesh.addVertex(vec3(-1.0f,-1.0f,0.0));
    this->mesh.addVertex(vec3(-1.0f,1.0f,0.0));
    this->mesh.addVertex(vec3(1.0f,1.0f,0.0));
    this->mesh.addVertex(vec3(1.0f,-1.0f,0.0));
    
    this->mesh.addTexCoord(vec2(-1.0,-1.0));
    this->mesh.addTexCoord(vec2(-1.0,1.0));
    this->mesh.addTexCoord(vec2(1.0,1.0));
    this->mesh.addTexCoord(vec2(1.0,-1.0));
    
    ofIndexType indices[6] = {0,1,2,2,3,0};
    this->mesh.addIndices(indices,6);
    this->shader.load("Vertex.vert","Fragment.frag");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    this->shader.begin();
    this->shader.setUniform2f("resolution", ofGetWidth(), ofGetHeight());
    this->shader.setUniform1f("time",ofGetElapsedTimef());
    //    this->mesh.drawWireframe();
    this->mesh.draw();
    this->shader.end();
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
