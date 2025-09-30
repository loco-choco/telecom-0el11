//
// Media.h
// Created on 23/09/2025
//

#include <iostream>
#include <fstream>
#include <string>

#ifndef MEDIA_H
#define MEDIA_H

class Media {
    std::string nom;
    std::string pathname;
public:
    Media(): nom{"default"},pathname{} {}
    Media(std::string nom, std::string pathname);
    virtual ~Media();

    const std::string GetNom();
    void SetNom(std::string nom);
    const std::string GetPathName();
    void SetPathName(std::string pathname);

    const virtual void Log(std::ostream & flux);
    const virtual void Jouer() = 0;
};

#endif
