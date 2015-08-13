/* 
 * File:   Automata.cpp
 * Author: jorgezb
 * 
 * Created on 6 de agosto de 2015, 12:44
 */

#include "Automata.h"


Automata::Automata() {
    idEstado=0;
    InicializarRaizAutomata();    
    CrearAutomana();
}

void Automata::InicializarRaizAutomata()
{
    EstadoAutomata raizAutomata;
    raizAutomata.IdEstado=idEstado;
    this->Estados.push_back(raizAutomata);
    this->raiz=raizAutomata;
}

int Automata::ObtenerSiguienteIdAutomata()
{    
    this->idEstado++;
    return idEstado;
}


void Automata::CrearAutomana()
{    
    CrearEstado1();
    
    
    
    
    
    
}

void Automata::CrearEstado1()
{
    EstadoAutomata estado1;
    estado1.IdEstado=ObtenerSiguienteIdAutomata();
    estado1.EstablecerAceptacion();       
    this->Estados.push_back(estado1);  
    this->raiz.AgregarEstado('"',1);
    this->raiz.AgregarEstado('[',1);
    this->raiz.AgregarEstado(']',1);
    this->raiz.AgregarEstado('(',1);
    this->raiz.AgregarEstado(')',1);
    this->raiz.AgregarEstado('^',1);
    this->raiz.AgregarEstado('*',1);
    this->raiz.AgregarEstado('+',1);
    this->raiz.AgregarEstado(',',1);
    this->raiz.AgregarEstado('=',1);
    this->raiz.AgregarEstado('\'',1);
    this->raiz.AgregarEstado(':',1);   
}

EstadoAutomata Automata::ObtenerEstadoPorId(int idEstadoABuscar)
{
    typedef std::vector<EstadoAutomata > vector_type;
    for(vector_type::const_iterator it=Estados.begin();it != Estados.end();it++)
    {
        if(it->IdEstado == idEstadoABuscar){
            return *it;
        }
    }
    return 0;

}

Automata::~Automata() {
}

