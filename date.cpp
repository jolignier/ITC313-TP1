
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

Date Date::nextDay() {

	if (m_month == 12 && m_day == 31) {
		m_day = 1;
		m_month = 1;
		m_year++;
	}

	else if (m_month % 2 == 1 && m_day == 31) {
		m_day = 1;
		m_month++;
	}

	else if (m_month == 2 && m_day == 29 && m_year % 4 == 0) {
		m_day = 1;
		m_month++;
	}

	else if (m_month == 2 && m_day == 28 && m_year % 4 != 0) {
		m_day = 1;
		m_month++;
	}

	else if (m_month % 2 == 0 && m_day == 30) {
		m_day = 1;
		m_month++;
	}

	else {
		m_day++;
	}
}

std::string Date::toString() {

}
