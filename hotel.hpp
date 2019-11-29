//
//  Hotel.cpp.hpp
//  TP1
//
//  Created by <Valentin_JOLY> on 25/10/2019.
//
//

#ifndef Hotel_hpp
#define Hotel_hpp

#include <string>
#include <vector>
#include "chambre.h"

class Hotel {
private:

    int m_unique_id;
    std::string m_name;
    std::string m_city;
    std::vector<Chambre> m_liste_chambre;

public:
    Hotel(int, std::string, std::string, std::vector<Chambre>);

    int getID() const;
    std::string getName() const;
    std::string getCity() const;
    std::vector<Chambre> getListeChambre() const;

    void setID(int);
    void setName(std::string);
    void setCity(std::string);
    void setListeChambre(std::vector<Chambre>);
};


#endif /* Hotel_hpp */
