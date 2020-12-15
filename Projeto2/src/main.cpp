#include "headers/figurageometrica.h"
#include "headers/interpretador.h"
#include "headers/sculptor.h"
#include <iostream>

int main ()
{
    Sculptor* s1;

    Interpretador parser;

    std::vector<FiguraGeometrica*> figs;

    figs = parser.parse ("/home/newman/sculptor/Projeto2/escultura.txt");

    s1 = new Sculptor (parser.getDimx (), parser.getDimy (), parser.getDimz ());

    for (size_t i = 0; i < figs.size (); i++) {
        figs[i]->draw (*s1);
    }

    s1->writeOFF ((char*)"/home/newman/sculptor/Projeto2/escultura.off");

    for (size_t i = 0; i < figs.size (); i++) {
        delete figs[i];
    }
    delete s1;

    return 0;
}