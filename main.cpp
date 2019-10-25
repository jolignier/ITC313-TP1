//
//  main.cpp
//  ITC313-TP1
//
//  Created by Jonathan Lignier on 25/10/2019.
//
//

#include <iostream>
#include "chambre.h"

using namespace std;

int main() {

    Chambre c1(1,"Double", 150.99);

    std::cout << c1.getId() << std::endl;
    cout << c1.getPrix() << endl;
    cout << c1.getType() << endl;

    c1.modifierChambre(2,"Single", 100);

    cout << "Après modification" << endl;

    cout << c1.getId() << endl;
    cout << c1.getPrix() << endl;
    cout << c1.getType() << endl;
    return 0;
}
