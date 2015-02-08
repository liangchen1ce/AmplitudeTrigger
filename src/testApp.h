#ifndef _TEST_APP
#define _TEST_APP


#include "ofMain.h"
#include "ofxParticleEmitter.h"
#include "ofxAudioUnit.h"
#include "ofxAudioUnitMidi.h"

class testApp : public ofBaseApp
{
	
public:
	
	void	setup();
	void	update();
	void	draw();
	void	exit();
	
	void	keyPressed( int key );
	void	keyReleased( int key );
	void	mouseMoved( int x, int y );
	void	mouseDragged( int x, int y, int button );
	void	mousePressed( int x, int y, int button );
	void	mouseReleased( int x, int y, int button );
	void	windowResized( int w, int h );
    
    ofxAudioUnitSampler sampler;
    ofxAudioUnitFilePlayer filePlayer;
    ofxAudioUnitNetReceive netReceive;
    ofxAudioUnitMidiReceiver midiReceiver;
    ofxAudioUnitInput input;
    
    ofxAudioUnitOutput output;
    
    ofxAudioUnitTap tap;
    ofPolyline oscLineLeft, oscLineRight;
    
    ofxAudioUnit * activeUnit;
	
protected:
	
	ofxParticleEmitter		m_emitter;
	
};

#endif
	