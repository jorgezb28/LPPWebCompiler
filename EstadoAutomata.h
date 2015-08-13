/* 
 * File:   EstadoAutomata.h
 * Author: jorgezb
 *
 * Created on 28 de julio de 2015, 23:57
 */

#ifndef ESTADOAUTOMATA_H
#define	ESTADOAUTOMATA_H
#include<vector>
#include <string>
using std::string; 

class EstadoAutomata {
public:
    EstadoAutomata();
    EstadoAutomata(int idEstado);
    virtual ~EstadoAutomata();
    
    bool EsEstadoAceptacion();
    void EstablecerAceptacion();
    
    void AgregarEstado(char entrada,int idEstado);
    int ObtenerSiguienteEstado(char entrada);
    
    int ObtenerCantidadSiguientesEstado();
    int IdEstado;
    
private:
    std::vector< std::pair < char , int > > SiguientesEstados;
    bool _esEstadoAceptacion;
    

};

#endif	/* ESTADOAUTOMATA_H */

