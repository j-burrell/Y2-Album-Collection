#pragma once
#include"Duration.h"
#include<string>
#include<iostream>
using namespace std;

class Track {
private:
	string m_title;
	Duration m_duration;
	
public:

	Track();
	Track(string title, Duration duration);
	
	void setTrack(string title, Duration duration);
	
	friend ostream & operator <<(ostream & out, const Track & T);
	friend istream & operator >>(istream & in, Track & D);
	string getTitle() { return m_title; }
	Duration getDuration() { return m_duration; }
	
};

void testTrack();

