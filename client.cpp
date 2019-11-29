//
//  client.cpp
//  ITC313-TP1
//
//  Created by <author> on 25/10/2019.
//
//

#include "client.hpp"

Client::Client(int id, std::string surname, std::string name) : m_unique_id(id) {
  this->m_surname = surname;
  this->m_name = name;
}

int Client::getID() const {
  return this->m_unique_id;
}
std::string Client::getSurname() const {
  return this->m_surname;
}
std::string Client::getName() const {
  return this->m_name;
}
int Client::getFidelity() const {
  return this->m_fidelity;
}

void Client::setSurname(std::string surname) {
  this->m_surname = surname;
}
void Client::setName(std::string name) {
  this->m_name = name;
}
void Client::setFidelity(int fidelity) {
  this->m_fidelity = fidelity;
}

void Client::addFidelity() {
  this->m_fidelity++;
}
