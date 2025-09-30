//
// Film.h
// Created on 23/09/2025
//

#include "Video.h"
#include <string>

#ifndef FILM_H
#define FILM_H

class Film : public Video{
    int* chapitres;
    int nombreChapitres;
public:
    Film(): Video(), chapitres{nullptr}, nombreChapitres{0}{}
    Film(int* chapitres, int nombre, int duree, std::string pathname): Video(duree, pathname),chapitres{nullptr}, nombreChapitres{nombre}{
        this->chapitres = new int[nombre];
        for (int i = 0; i < nombre; ++i) {
           this->chapitres[i] = chapitres[i];
        }
        this->nombreChapitres = nombre;
    }
    ~Film(){
        if(chapitres != nullptr) delete [] chapitres;
    }

    const int GetNombreChapitres(){return nombreChapitres;}
    const int GetChapitre(int num){
        if(num < 0 || num >= nombreChapitres) return -1;
        return chapitres[num];
    }

    const void ToString(std::ostream & flux){
        flux << "Film" << "@" << GetPathName()
             << " Duree:" << GetDuree();

        for (int i = 0; i < nombreChapitres; ++i) {
           flux << " Chap:" << i << " Duree:"  << this->chapitres[i];
        }
        flux << std::endl;
        flux.flush();
    }


};
#endif // FILM_H
