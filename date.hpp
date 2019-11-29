#ifndef _DATE_HPP_
#define _DATE_HPP_

#include <string>


class Date {
    private:
        int m_month;
        int m_day;
        int m_year;

        bool bissextile(int year);
    public:
        Date();
        Date(int day, int month, int year);

        int getMonth();
        int getDay();
        int getYear();
        bool isEqual(Date d);
        bool isAnterior(Date d);
        int getDaysInMonth(int m, int year);
        int getNbDays(Date d2);

};

#endif
