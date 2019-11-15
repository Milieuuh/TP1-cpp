/** 
* File:     chambre.h 
* Author:   Lucie BOUCQUEMONT
* Date:     24/10/2019 
* Summary:  Déclaration de la classe Chambre
*/

#ifndef _chambre_h
#define _chambre_h

#include <iostream>
#include <string>

using namespace std;

enum m_type_Chambre { simple, confort, suite};

class Chambre{
  public:
    Chambre();
    Chambre(int id, m_type_Chambre type, double prix=0);
    
    double getPrixChambre();
    m_type_Chambre getTypeChambre();
    int getIdChambre();
    
    void setPrixChambre(double prix);
    void setTypeChambre(m_type_Chambre type);
    void setChambre(m_type_Chambre type, double prix);
  
    string toString();
  
  private:
    int m_id_Chambre;    
    double m_prix_Chambre;
    m_type_Chambre m_type;

};


#endif // _chambre_h
