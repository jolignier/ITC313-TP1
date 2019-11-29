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
#include "reservation.h"
#include "date.hpp"
#include "client.hpp"
#include "hotel.hpp"

using namespace std;

int main() {

    Chambre c1(2, SIMPLE, 10);

    vector<Chambre> chambres;
    chambres.push_back(c1);
    Hotel h1(15, "La Cloche", "Dijon", chambres);

    Date deb(25,12,2019);
    Date fin(03,03,2020);

    Client jeanpierre(27,"Jean-Pierre", "Polnaref" );

    Reservation r1(1, deb, fin, 15 ,2, 27);

    r1.calculMontant(c1, 0);

    cout << "Jean pierre va payer : " << r1.getMontantTotal() << endl;

    r1.calculMontant(c1, 15);

    cout << "Jean pierre le client fidèle va payer : " << r1.getMontantTotal() << endl;

    return 0;
}
