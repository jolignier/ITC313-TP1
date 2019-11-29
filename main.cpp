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

int main() {

    // Création des chambres
    array<Chambre, 10> chambres;

    Chambre c1(1, SINGLE, 100);
    Chambre c2(2, SINGLE, 100);
    Chambre c3(3, SINGLE, 100);

    Chambre c4(4, DOUBLE, 125);
    Chambre c5(5, DOUBLE, 125);
    Chambre c6(6, DOUBLE, 125);
    Chambre c7(7, DOUBLE, 125);
    Chambre c8(8, DOUBLE, 125);

    Chambre c9(9, SUITE, 210);
    Chambre c10(10, SUITE, 210);

    // Remplissage du tableau de chambres
    chambres.fill(c1);
    chambres.fill(c2);
    chambres.fill(c3);
    chambres.fill(c4);
    chambres.fill(c5);
    chambres.fill(c6);
    chambres.fill(c7);
    chambres.fill(c8);
    chambres.fill(c9);
    chambres.fill(c10);


    array<Client, 11> clients;

    clients.fill(Client(1, "Alain", "TERIEUR"));
    clients.fill(Client(2, "Barack", "ARFITE"));
    clients.fill(Client(3, "Cecile", "ANCIEUX"));
    clients.fill(Client(4, "Douglas", "O'CHOCOLA"));
    clients.fill(Client(5, "Eddy", "MALOU"));
    clients.fill(Client(6, "Firmin", "PEUTAGEUL"));
    clients.fill(Client(7, "Gerard", "MENVUSSA"));
    clients.fill(Client(8, "Abdel", "OBOISDORMAN"));
    clients.fill(Client(9, "Jean", "REPRENDRAIBIENUNEUTITPEUOUIMERCI"));
    clients.fill(Client(10, "Justine", "PTITEGOUTE"));
    clients.fill(Client(11, "Mellissa", "PTITEGOUTE"));
    clients.fill(Client(12, "Corine", "PTITEGOUTE"));


    return 0;
}
