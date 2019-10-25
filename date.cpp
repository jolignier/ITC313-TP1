
#include "date.hpp"


Date::Date (int day, int month, int year) {
	m_month = month;
	m_day = day;
	m_year = year;
}

int Date::getMonth() {
	return m_month;
}

int Date::getDay() {
	return m_day;
}

int Date::getYear() {
	return m_year;
}
