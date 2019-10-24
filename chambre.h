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

using namespaces std;

class Chambre{
  public:
    Chambre();
    Chambre(int id, string type, double prix);
    
    double getPrixChambre();
    string getTypeChambre();
    int getIdChambre();
    
    void setPrixChambre(double prix);
    void setTypeChambre(string type);
  
    string ToString();
  
  private:
    int m_id_Chambre;
    string m_type_Chambre;
    double m_prix_Chambre;

}


#endif // _chambre_h