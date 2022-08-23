#include"Track.h"

// Track constructor .
Track::Track() {
	
	m_title = "";
	m_duration = Duration();
};

Track::Track(string title, Duration duration) {
	
	setTrack(title, duration);
}

void Track::setTrack(string title, Duration duration) {
	
	m_title = title;
	m_duration = duration;
	
}

// Output and input operator overloading .
ostream & operator << (ostream & out, const Track & T)
{
	out << T.m_title << " - " << T.m_duration;
	return out;
	
}

istream & operator >> (istream & in, Track & T)
{
	cout << "Enter title: ";
	in >> T.m_title;
	cout << "Enter duration: ";
	in >> T.m_duration;
	
	return in;
}

// Test harness
void testTrack() {
	
	cout << "---Track Test ---\n";
	cout << " " << endl;
	Duration d1 = Duration(0, 3, 22);
	Duration d2 = Duration(0, 3, 46);
	
	Track t1 = Track("Foxy Lady", d1);
	Track t2;
	
	t2.setTrack("Manic Depression ", d2);
	cout << "t1: " << t1 << endl;
	cout << "t2: " << t2 << endl;
	cout << " " << endl;
	
}

