//
// GroupePhoto.h
// Created on 23/09/2025
//

#include <string>
#include <memory>
#include <iostream>
#include <list>
#include "Photo.h"

#ifndef GROUPEPHOTO_H
#define GROUPEPHOTO_H

class GroupePhoto : public std::list<std::shared_ptr<Photo>> {
    std::string nom;
public:
    GroupePhoto(): std::list<std::shared_ptr<Photo>>(), nom{"default"} {}
    GroupePhoto(std::string nom): std::list<std::shared_ptr<Photo>>(), nom{nom} {}

    const std::string GetNom();

    void Log(std::ostream & flux){
        flux << "GroupePhoto: " << nom << std::endl;
        for (std::shared_ptr<Photo> p : *this) {
            flux << "\t";
            p->Log(flux);
        }
        flux.flush();
    }
};

#endif
