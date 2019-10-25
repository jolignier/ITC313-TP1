//
//  chambre.h
//  ITC313-TP1
//
//  Created by Jonathan Lignier on 25/10/2019.
//
//

#ifndef chambre_h
#define chambre_h

#include <stdio.h>
#include <string>

using namespace std;

class Chambre {
    private:
        int m_id;
        string m_type;
        double m_prix;
    public:
        Chambre(int id, string type, double prix);
        int getId();
        string getType();
        double getPrix();
        void modifierChambre(int id, string type, double prix);
    protected:

};


#endif // chambre_h
