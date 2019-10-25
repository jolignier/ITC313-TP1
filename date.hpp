#ifndef _DATE_HPP_
#define _DATE_HPP_

#include <string>


class Date {
private:
  int m_month;
  int m_day;
  int m_year;


public:
  Date (int day, int month, int year);

  int getMonth();
  int getDay();
  int getYear();
};

#endif
