//
//  main.cpp
//  ITC313-TP1
//
//  Created by Jonathan Lignier on 25/10/2019.
//
//

#include "chambre.h"
#include "reservation.h"
#include "date.hpp"
#include "client.hpp"
#include "hotel.hpp"

#include <iostream>
#include <string>
#include <array>


using namespace std;

bool checkDate(int day, int month, int year) {
    bool res = true;
    Date date;
    if (month > 12) {
        res = false;
    } else {
        if (day > date.getDaysInMonth(month,year))
            res = false;
    }

    return res;
}

int main() {

    // Création des chambres
    vector<Chambre> chambres = {
        Chambre (1, SINGLE, 100),
        Chambre (2, SINGLE, 100),
        Chambre (3, SINGLE, 100),

        Chambre (4, DOUBLE, 125),
        Chambre (5, DOUBLE, 125),
        Chambre (6, DOUBLE, 125),
        Chambre (7, DOUBLE, 125),
        Chambre (8, DOUBLE, 125),

        Chambre (9, SUITE, 210),
        Chambre (10, SUITE, 210)
    };





    vector<Client> clients = {
        Client(1, "Alain", "TERIEUR"),
        Client(2, "Barack", "ARFITE"),
        Client(3, "Cecile", "ANCIEUX"),
        Client(4, "Douglas", "O'CHOCOLA"),
        Client(5, "Eddy", "MALOU"),
        Client(6, "Firmin", "PEUTAGEUL"),
        Client(7, "Gerard", "MENVUSSA"),
        Client(8, "Abdel", "OBOISDORMAN"),
        Client(9, "Jean", "REPRENDRAIBIENUNEUTITPEUOUIMERCI"),
        Client(10, "Justine", "PTITEGOUTE"),
        Client(11, "Mellissa", "PTITEGOUTE"),
        Client(12, "Corine", "PTITEGOUTE")
    };



    return 0;
}
