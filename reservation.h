//
//  reservation.h
//  ITC313-TP1
//
//  Created by Jonathan Lgnier on 25/10/2019.
//
//

#ifndef reservation_h
#define reservation_h

#include <stdio.h>
#include "date.hpp"

class Reservation {

    private:
        int m_id;
        Date m_dateDeb;
        Date m_datefin;
        int m_idHotel;
        int m_idChambre;
        int m_idClient;
        double m_montantTotal;

    public:
        Reservation(int id, Date dateDeb, Date dateFin, int idHotel, int idChambre, int idClient, double montantTotal);

        int getId();
        Date getDateDeb();
        Date getDateFin();
        int getIdHotel();
        int getIdChambre();
        int getIdClient();

        double getMontantTotal();
        void setDates(Date d1, Date d2);
        void setNumeroChambre(int num);
        double calculMontant(Chambre c, double reduction);

    protected:

};


#endif /* reservation_h */
