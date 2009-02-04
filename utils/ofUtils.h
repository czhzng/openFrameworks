#ifndef _OF_UTIL
#define _OF_UTIL

#include "ofConstants.h"

#ifdef TARGET_WIN32	 // for ofLaunchBrowser
	#include <shellapi.h>
#endif


int 	ofNextPow2(int input);

void	ofResetElapsedTimeCounter();		// this happens on the first frame
float 	ofGetElapsedTimef();
int		ofGetElapsedTimeMillis();
int 	ofGetFrameNum();

float	ofCalcFrameRate();

int 	ofGetSeconds();
int 	ofGetMinutes();
int 	ofGetHours();

unsigned long ofGetSystemTime( );			// system time in milliseconds;

int     ofGetYear();
int     ofGetMonth();
int     ofGetDay();
int     ofGetWeekday();

void 	ofLaunchBrowser(string url);

void	ofEnableDataPath();
void	ofDisableDataPath();
string 	ofToDataPath(string path, bool absolute=false);

string  ofToString(double value, int precision = 7);
string  ofToString(int  value);

string 	ofGetVersionInfo();

void	ofSaveScreen(string filename);
void	ofSaveFrame();

//--------------------------------------------------
void ofSetLogLevel(int logLevel);
void ofLog(int logLevel, string message);
void ofLog(int logLevel, const char* format, ...);
void ofSetConsoleColor(int color);
void ofRestoreConsoleColor();

#endif


