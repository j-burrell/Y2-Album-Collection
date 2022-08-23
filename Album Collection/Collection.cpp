#include "Collection.h"

// Constructor
Collection::Collection() {};

void Collection::addAlbum(Album album) {
	
	m_collection.push_back(album);
	
}

ostream & operator <<(ostream & out, const Collection & C) {
	out << " Collection contains the following albums: " << endl;
	cout << " " << endl;
	for (int i = 0; i < signed(C.m_collection.size()); i++) {
		out << " -----------------" << endl;
		out << C.m_collection[i];
		out << " -----------------" << endl;
		
	}
	return out;
	
}

// Test harness
void testCollection() {
	
	cout << "---Collection Test ---" << endl;
	cout << " " << endl;

	// Album 1
	Duration d1 = Duration(0, 3, 22);
	Duration d2 = Duration(0, 3, 46);
	Duration d3 = Duration(0, 3, 53);
	
	Track t1 = Track("Foxy Lady", d1);
	Track t2 = Track("Manic Depression ", d2);
	Track t3 = Track("Red House", d3);
	
	Album a1 = Album();
	a1.setAlbum("The Jimi Hendrix Experience ", "Are you Experienced ?");
	a1.addTrack(t1);
	a1.addTrack(t2);
	a1.addTrack(t3);
	
	// Album 2
	
	Duration d4 = Duration(0, 1, 30);
	Duration d5 = Duration(0, 2, 43);
	Duration d6 = Duration(0, 3, 36);
	
	Track t4 = Track("Speak to Me", d4);
	Track t5 = Track("Breathe", d5);
	Track t6 = Track("On the Run", d6);
	
	Album a2 = Album();
	a2.setAlbum("Pink Floyd", "Dark Side of the Moon");
	a2.addTrack(t4);
	a2.addTrack(t5);
	a2.addTrack(t6);
	
	Collection c1 = Collection();
	c1.addAlbum(a1);
	c1.addAlbum(a2);
	
	cout << c1;
	cout << " " << endl;
}

