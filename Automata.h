/* 
 * File:   Automata.h
 * Author: jorgezb
 *
 * Created on 6 de agosto de 2015, 12:44
 */

#ifndef AUTOMATA_H
#define	AUTOMATA_H
#include "EstadoAutomata.h"

class Automata {
public:
    Automata();
    virtual ~Automata();    
    EstadoAutomata ObtenerEstadoPorId(int idEstado);
    int ObtenerSiguienteIdAutomata();
    std::vector<EstadoAutomata> Estados;
private:
    EstadoAutomata raiz;
    int idEstado;
    void InicializarRaizAutomata();
    void CrearAutomana();
    void CrearEstado1();
};

#endif	/* AUTOMATA_H */

