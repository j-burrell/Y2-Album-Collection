#include "Album.h"

// Duration constructors .
Album::Album() {
	
	m_title = "-";
	m_artist = "-";
}


Album::Album(string title, string artist) {
	
	setAlbum(title, artist);
	
}

void Album::setAlbum(string title, string artist) {
	
	m_title = title;
	m_artist = artist;
	
}

void Album::addTrack(Track track) {
	
	m_tracks.push_back(track);
}

// Output operator overloading .
ostream & operator << (ostream & out, const Album & A)
{
	out << A.m_title << " - " << A.m_artist << "\n";
	for (int i = 0; i < signed(A.m_tracks.size()); i++) {
		out << A.m_tracks[i] << "\n";
	}
	return out;
}

// Test harness
void testAlbum() {
	
	cout << "---Album Test ---" << endl;
	cout << " " << endl;
	
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
	
	cout << a1;
	cout << " " << endl;
	
}
