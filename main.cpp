//
//  main.cpp
//  ITC313-TP1
//
//  Created by Jonathan Lignier on 25/10/2019.
//
//

#include <iostream>
#include <string>
#include "chambre.h"
#include "date.hpp"

using namespace std;

int main() {

    Chambre c1(1, DOUBLE, 150.99);

    std::cout << c1.getId() << std::endl;
    cout << c1.getPrix() << endl;
    cout << c1.getType() << endl;

    c1.modifierChambre(2, SIMPLE, 100);

    cout << "Après modification" << endl;

    cout << c1.getId() << endl;
    cout << c1.getPrix() << endl;
    cout << c1.getType() << endl;

    Date deb(25,12,2019);
    Date fin(03,03,2020);
    Date fin2(25,12,2020);
    cout << "Il y a " << deb.getNbDays(fin) <<" jours d'écart entre les deux dates" << endl;
    cout << "Il y a " << deb.getNbDays(fin2) <<" jours d'écart entre les deux dates" << endl;
    return 0;
}
