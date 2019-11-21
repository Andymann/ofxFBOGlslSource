//
//  GlslSource.cpp
//  ofxPiMApper_010
//
//  Created by Andy Fischer on 12.07.19.
//
#include <stdio.h>
#include <ofxFBOGlslSource.h>
bool bHasShader =false;

void ofxFBOGlslSource::setup(){
    // Give our source a decent name
    //int iRand = rand();
    //name = "GLSL Source";// + ofToString(iRand);
    //name = "GLSL";
    // Allocate our FBO source, decide how big it should be
    //allocate(1920, 1080);
    //allocate(1024, 768);
    
    // create new ofxGLSLSandbox instance
    //glslSandbox = new ofxGLSLSandbox();
    
    // setup shader width and height
    //glslSandbox->setResolution(1024, 768);
    
    // load fragment shader file (must put in bin/data folder)
    //glslSandbox->loadFile("shader");
    
}

// Don't do any drawing here
void ofxFBOGlslSource::update(){
    
}

// No need to take care of fbo.begin() and fbo.end() here.
// All within draw() is being rendered into fbo;
void ofxFBOGlslSource::draw(){
    
    // draw shader
    if( bHasShader){
        glslSandbox->draw();
    }
    
    
}

void ofxFBOGlslSource::loadShader(const string& pName, const string& shaderfile){
    // create new ofxGLSLSandbox instance
    //glslSandbox = new ofxGLSLSandbox(1024, 768);
    name = pName;
    // setup shader width and height
    allocate(1024, 768);
    glslSandbox = new ofxGLSLSandbox();
    glslSandbox->setResolution(1024, 768);
    //glslSandbox->loadFile("shader");
    glslSandbox->loadFile(shaderfile);
    bHasShader = true;
    
}
