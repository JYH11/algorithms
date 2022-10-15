#include <iostream>

using namespace std;

int main() {
	int hour, minute, second, need, day;
	cin >> hour >> minute >> second;
	cin >> need;

	second += need;
	minute += second / 60;
	hour += minute / 60;

	cout << hour % 24 << " " << minute % 60 << " " << second % 60;

	return 0;
}