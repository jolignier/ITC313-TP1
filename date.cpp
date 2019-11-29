
#include "date.hpp"
#include <iostream>

Date::Date(){

}

Date::Date(int day, int month, int year) {
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

int Date::getDaysInMonth(int m, int year) {
	int nb;

	switch (m) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			nb = 31;
			break;
		case 2:
			if (bissextile(year)) {
				nb = 29;
			} else {
				nb = 28;
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
		default:
			nb = 30;
			break;
	}
	return nb;
}

bool Date::bissextile(int year){
	if (year%400 == 0 || (year%4 == 0 && year%100 != 0)) {
		return true;
	} else {
		return false;
	}
}

bool Date::isEqual(Date d) {
	bool res = true;
	if (d.getDay() != m_day) {
		res = false;
	}
	if (d.getMonth() != m_month) {
		res = false;
	}
	if (d.getYear() != m_year) {
		res = false;
	}
	return res;
}
bool Date::isAnterior(Date d) {
	bool res = false;
	if (m_year < d.getYear()) {
		res = true;
	} else {
		if (m_year == d.getYear()){
			if (m_month < d.getMonth()) {
				res = true;
			} else {
				if (m_month == d.getMonth()) {
					if (m_day < d.getDay()) {
						res = true;
					} else {
						res = false;
					}

				}
			}
		}
	}
	return res;
}

int Date::getNbDays(Date d2) {
	int nbDays = 0;
    if (!d2.isAnterior(*this)) {

		int currentDay = m_day ;
		int currentMonth = m_month ;
		int currentYear = m_year ;
		Date date = Date(currentDay, currentMonth, currentYear);
	    while ( !date.isEqual(d2) ) {
			nbDays ++;
			currentDay++;
			if (currentDay > getDaysInMonth(currentMonth, currentYear) ) {
				currentDay = 1;
				currentMonth++;
			}
			if (currentMonth > 12) {
				currentMonth = 1;
				currentYear ++;
			}
			date = Date(currentDay,currentMonth, currentYear);
		}
	} else {
		nbDays = -1;
	}
	return nbDays;
}
