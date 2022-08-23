#include"Duration.h"

// Duration constructors .
Duration::Duration() {
	
	m_hours = 0;
	m_minutes = 0;
	m_seconds = 0;
	m_total = durationTotal(m_hours, m_minutes, m_seconds);
}

Duration::Duration(int hours, int minutes, int seconds) {
	
	setDuration(hours, minutes, seconds);
}

void Duration::setDuration(int hours, int minutes, int seconds) {
	
	m_hours = hours;
	m_minutes = minutes;
	m_seconds = seconds;
	m_total = durationTotal(hours, minutes, seconds);
	
}

// converts duration to seconds for comparison
int Duration::durationTotal(int hours, int minutes, int seconds) {
	
	int total = (hours * 60 * 60) + (minutes * 60) + seconds;
	return total;
}

// Relational operator overloarding .
bool Duration::operator==(const Duration & D) 
{
	if (m_total == D.m_total) 
	{
		return true;
	}
	else 
	{
		return false;
	
	}
	
}
bool Duration::operator!=(const Duration& D) 
{
	if (m_total != D.m_total) 
	{
		return true;	
	}
	else 
	{
		return false;
	}
	
}

bool Duration::operator >(const Duration & D) 
{
	if (m_total > D.m_total) {
		return true;
	}
	else {
		return false;
	
	}
	
}

bool Duration::operator <(const Duration& D) 
{
	if (m_total < D.m_total) {
		return true;
		
	}
	else {
		return false;
	}
	
}

bool Duration::operator >=(const Duration & D) {
	if (m_total >= D.m_total) {
		return true;
	}
	else {
		return false;
		
	}
	
}

bool Duration::operator <=(const Duration& D) {
	if (m_total <= D.m_total) {
		return true;
		
	}
	else {
		return false;
	}
	
}

// Output and input operator overloading .
ostream & operator << (ostream & out, const Duration & D)
{
	out << D.m_hours << ":" << D.m_minutes << ":" << D.m_seconds;
	return out;
	
}

istream & operator >> (istream & in, Duration & D)
{
	cout << "Enter hours: ";
	in >> D.m_hours;
	cout << "Enter minutes: ";
	in >> D.m_minutes;
	cout << "Enter seconds: ";
	in >> D.m_seconds;
	
	return in;
	
}

// Test harness
void testDuration()
{

	cout << "---Duration Test ---" << endl;
	cout << " " << endl;

	Duration d1 = Duration(1, 23, 54);
	Duration d2 = Duration();
	Duration d3;

	// cin >> d3;
	d2.setDuration(2, 12, 39);

	cout << "d1: " << d1 << endl;
	cout << "d2: " << d2 << endl;
	// cout << "d3: " << d3 << endl;
	cout << " " << endl;

	cout << "Duration total for d1: " << d1.getTotal() << endl;
	cout << " " << endl;

	cout << " Comparing d1 < d2: " << (d1 < d2) << endl;
	cout << " Comparing d1 > d2: " << (d1 > d2) << endl;
	cout << " Comparing d1 == d2: " << (d1 == d2) << endl;
	cout << " Comparing d1 != d2: " << (d1 != d2) << endl;
	cout << " Comparing d1 <= d2: " << (d1 <= d2) << endl;
	cout << " Comparing d1 >= d2: " << (d1 >= d2) << endl;
	cout << " " << endl;

}
