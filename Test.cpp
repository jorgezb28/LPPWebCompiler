#include <gtest/gtest.h>
#include "EstadoAutomata.h"
#include "Automata.h"

TEST(Pruebas, test1 ){
    ASSERT_TRUE(5==3+2);
}

TEST(EstadoAutomata, ConstructoEstadoAutomata )
{
    EstadoAutomata *nuevoEstado= new EstadoAutomata(0);
    ASSERT_FALSE(nuevoEstado->EsEstadoAceptacion());   
}

TEST(EstadoAutomata, EstablecerEstadoAceptacion )
{
    EstadoAutomata *nuevoEstado= new EstadoAutomata(0);
    nuevoEstado->EstablecerAceptacion();
    ASSERT_TRUE(nuevoEstado->EsEstadoAceptacion());
}

TEST(EstadoAutomata, AgregarEstado )
{   
    EstadoAutomata *EstdoInicial= new EstadoAutomata(0);    
    EstdoInicial->AgregarEstado('"',1);
    ASSERT_TRUE(EstdoInicial->ObtenerCantidadSiguientesEstado()>0);
}

TEST(EstadoAutomata, ObtenerSiguienteEstado )
{   
    EstadoAutomata *EstadoInicial= new EstadoAutomata(0);    
    EstadoInicial->AgregarEstado('"',1);
    //EstadoAutomata *siguienteObtenido=EstdoInicial->ObtenerSiguienteEstado("digito");
    
    ASSERT_TRUE(EstadoInicial->ObtenerSiguienteEstado('"') ==1);
}

TEST(Automana,InicializarAtutomata)
{
    Automata *miAutomata=new Automata();
    ASSERT_TRUE(miAutomata->Estados.size() > 0);
    ASSERT_TRUE(miAutomata->Estados.front().EsEstadoAceptacion() == false);
    ASSERT_TRUE(miAutomata->Estados.front().IdEstado == 0);    
}

TEST(Automata,EntradasEstado1)
{
    Automata *miAutomata=new Automata();
    EstadoAutomata estadoOtenido=miAutomata->ObtenerEstadoPorId(0);
    ASSERT_TRUE(estadoOtenido.ObtenerSiguienteEstado('"') == 1);
}