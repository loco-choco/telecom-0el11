//
// GesteurMedia.h
// Created on 23/09/2025
//

#include <fstream>
#include <fstream>
#include <string>
#include "Media.h"

#ifndef GESTEURMEDIA_H
#define GESTEURMEDIA_H

class GesteurMedia {

public:
    GesteurMedia() {}
    ~GesteurMedia() {}

    void CreerPhoto(std::string nom);
    void CreerVideo(std::string nom);
    void CreerFilm(std::string nom);
    void CreerGroupe(std::string nom);

    const Media GetMedia(std::string nom);

    const std::string GetPathName();
    void SetPathName(std::string pathname);

    const virtual void Log(std::ostream & flux);
    const virtual void Jouer() = 0;
};

#endif
