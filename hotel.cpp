//
//  Hotel.cpp.cpp
//  TP1
//
//  Created by <author> on 25/10/2019.
//
//

#include "hotel.hpp"
#include "chambre.h"


Hotel::Hotel(std::string id, std::string name, std::string city, std::vector<Chambre> chambres)  {
  this->m_unique_id = id;
  this->m_name = name;
  this->m_city = city;
  this->m_liste_chambre = chambres;
}

std::string Hotel::getID() const {
  return m_unique_id;
}
std::string Hotel::getName() const {
  return m_name;
}
std::string Hotel::getCity() const {
  return m_city;
}
std::vector<Chambre> Hotel::getListeChambre() const {
  return m_liste_chambre;
}

void Hotel::setID(std::string uniqueID) {
  this->m_unique_id = uniqueID;
}
void Hotel::setName(std::string name){
  this->m_name = name;
}
void Hotel::setCity(std::string city){
  this->m_city = city;
}
void Hotel::setListeChambre(std::vector<Chambre> chambres){
  this->m_liste_chambre = chambres;
}
