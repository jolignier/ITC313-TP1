#ifndef _DATE_HPP_
#define _DATE_HPP_

#include <string>


class Date {
private:
  int m_mounth;
  int m_day;
  int m_year;


public:
  Date (int day, int mounth, int year);

  int getMounth();
  int getDay();
  int getYear();
  Date nextDay();
  std::string toString();

  // virtual ~Date ();
};

#endif
