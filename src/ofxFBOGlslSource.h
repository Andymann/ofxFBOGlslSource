//
//  GlslSource.h
//  ofxPiMApper_010
//
//  Created by Andy Fischer on 12.07.19.
//

#ifndef GlslSource_h
#define GlslSource_h

#pragma once

#include "ofMain.h"
#include "FboSource.h"
#include "ofxGLSLSandbox.h"

class ofxFBOGlslSource : public ofx::piMapper::FboSource {
public:
    void setup();
    void update();
    void draw();
    
    void loadShader(const string& pName, const string& shaderfile);
    
    ofxGLSLSandbox *glslSandbox;
    
    std::vector<ofRectangle> rects;
    std::vector<float> rectSpeeds;
};

#endif /* GlslSource_h */
