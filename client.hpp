//
//  client.hpp
//  ITC313-TP1
//
//  Created by <author> on 25/10/2019.
//
//

#ifndef client_hpp
#define client_hpp

#include <iostream>
#include <string>

class Client {
private:
    const int m_unique_id;
    std::string m_surname;
    std::string m_name;
    int m_fidelity;

public:
    Client(int id, std::string surname, std::string name);

    int getID() const;
    std::string getSurname() const;
    std::string getName() const;
    int getFidelity() const;

    void setSurname(std::string);
    void setName(std::string);
    void setFidelity(int);

    void addFidelity();
};


#endif /* client_hpp */
