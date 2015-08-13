/* 
 * File:   EstadoAutomata.cpp
 * Author: jorgezb
 * 
 * Created on 28 de julio de 2015, 23:57
 */

#include "EstadoAutomata.h"

EstadoAutomata::EstadoAutomata()
{
    _esEstadoAceptacion=false;
    IdEstado=0;
    SiguientesEstados.clear();    
}

EstadoAutomata::EstadoAutomata(int idEstado) {
    _esEstadoAceptacion=false;
    IdEstado=idEstado;
    SiguientesEstados.clear();   
}

EstadoAutomata::~EstadoAutomata() {
}

void EstadoAutomata::EstablecerAceptacion()
{
    _esEstadoAceptacion=true;
}
bool EstadoAutomata::EsEstadoAceptacion()
{
    return _esEstadoAceptacion;
}
void EstadoAutomata::AgregarEstado(char entrada,int idEstado)
{
    //EstadoAutomata *nuevEstado=new EstadoAutomata(idEstado);
    SiguientesEstados.push_back(std::make_pair(entrada,idEstado));
}

int EstadoAutomata::ObtenerSiguienteEstado(char entrada)
{
    typedef std::vector<std::pair<char ,int> > vector_type;
    for(vector_type::const_iterator it=SiguientesEstados.begin();it != SiguientesEstados.end();it++)
    {
        if(it->first == entrada){
            return it->second;
        }
    }
}

int EstadoAutomata::ObtenerCantidadSiguientesEstado()
{
    return SiguientesEstados.size();
}

