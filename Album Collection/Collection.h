#pragma once
#include"Duration.h"
#include"Track.h"
#include"Album.h"
#include<vector>
#include<string>
#include<iostream>
using namespace std;

class Collection {
private:
	vector <Album > m_collection;
	
public:
	
	Collection();
	
	void addAlbum(Album album);
	
	friend ostream & operator <<(ostream & out, const Collection & C);
	
	vector <Album > getCollection() { return m_collection; }
	
};

void testCollection();

