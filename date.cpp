
#include "date.hpp"
#include <iostream>

Date::Date(){

}

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

int Date::getNbDays(Date d2) {
    // Supposing that d2 is the oldest date

	int nbDays = d2.getDay()- m_day;

	int currentMonth = d2.getMonth();
	int currentYear = d2.getYear();

    while (!(currentMonth == m_month && currentYear == m_year)) {
        std::cout << nbDays << std::endl;
		nbDays += getDaysInMonth(currentMonth, currentYear);

        if (currentMonth == 12) {
			currentMonth = 1;
			currentYear++;

		} else {
			currentMonth++;
		}
	}

	return nbDays;
}
