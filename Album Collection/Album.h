#pragma once
#include"Duration.h"
#include"Track.h"
#include<vector >
#include<string >
#include<iostream >
using namespace std;

class Album {
private:
	string m_artist;
	string m_title;
	vector <Track > m_tracks;
	
public:
	Album();
	Album(string title, string artist);
	
	void setAlbum(string title, string artist);
	void addTrack(Track track);
	friend ostream & operator <<(ostream & out, const Album & A);
	string getArtist() { return m_artist; }
	string getTitle() { return m_title; }
	
};

void testAlbum();
