//
//  reservation.cpp
//  ITC313-TP1
//
//  Created by Jonathan Lgnier on 25/10/2019.
//
//

#include "reservation.h"

Reservation::Reservation(int id, dateDeb, Date dateFin, int idHotel, int idChambre, int idClient, double montantTotal)  {
    this->m_id = id;
    this->m_dateDeb = dateDeb;
    this->m_dateFin = dateFin;
    this->m_idHotel = idHotel;
    this->m_idChambre = idChambre;
    this->m_idClient = idClient;
    this->m_montantTotal = montantTotal;

}
int Reservation::getId() {
    return this->m_id;
}

Date Reservation::getDateDeb() {
    return this->m_dateDeb;
}

Date Reservation::getDateFin() {
    return this->m_dateFin;
}

int Reservation::getIdHotel() {
    return this->m_idHotel;
}

int Reservation::getIdChambre() {
    return this->m_idChambre;
}

int Reservation::getIdClient() {
    return this->m_idClient;
}

double Reservation::getMontantTotal() {
    return this->m_montantTotal;
}

void Reservation::setDates(Date dateDeb, Date dateFin) {
    this->m_dateDeb = dateDeb;
    this->m_datefin = dateFin;
}

void Reservation::setNumeroChambre(int num) {
    this->m_idChambre = num;
}
// La réduction est un pourcentage entre 0 et 1
double Reservation::calculMontant(Chambre c, double reduction) {
    int nbNuits = m_dateFin - m_dateDeb;
    double prix = nbNuits * c->getPrix();
    this->m_montantTotal = prix - reduction*prix ;
}
