#include "date.h"

Date::Date() {
	day = month = 1;
	year = 2014;
}

Date::Date(int day) {
	this->day = day;
	month = day;
	year = 2024;
}

void Date::display() {
	cout << "\n\n\t" << day << "-" << month << "-" << year;
}