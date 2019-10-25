//
//  chambre.cpp
//  ITC313-TP1
//
//  Created by Jonathan Lignier on 25/10/2019.
//
//

#include "chambre.h"

Chambre::Chambre(int id, string type, double prix)  {
    this->m_id = id;
    this->m_type = type;
    this->m_prix = prix;
}

int Chambre::getId() {
    return m_id;
}


string Chambre::getType() {
    return m_type;
}


double Chambre::getPrix() {
    return m_prix;
}

void Chambre::modifierChambre(int id, string type, double prix) {
    this->m_id = id;
    this->m_type = type;
    this->m_prix = prix;
}
