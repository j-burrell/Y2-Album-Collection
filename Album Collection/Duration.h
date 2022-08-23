#pragma once
#include <iostream >
using namespace std;

class Duration {
private:
	int m_hours;
	int m_minutes;
	int m_seconds;
	int m_total;
	
public:
	Duration();
	Duration(int hours, int minutes, int seconds);
	
	void setDuration(int hours, int minutes, int seconds);
	int durationTotal(int hours, int minutes, int seconds);

	// relational operators
	bool operator==(const Duration & D);
	bool operator!=(const Duration & D);
	bool operator >(const Duration& D);
	bool operator <(const Duration & D);
	bool operator >=(const Duration& D);
	bool operator <=(const Duration & D);
	friend ostream & operator <<(ostream & out, const Duration & D);
	friend istream& operator >>(istream& in, Duration& D);
	
	int getHours() { return m_hours; }
	int getMinutes() { return m_minutes; }
	int getSeconds() { return m_seconds; }
	int getTotal() { return m_total; }
};

void testDuration();

