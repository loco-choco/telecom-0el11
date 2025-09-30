//
// GroupeMedia.h
// Created on 23/09/2025
//

#include <string>
#include <memory>
#include <iostream>
#include <list>
#include "Media.h"

#ifndef GROUPEMEDIA_H
#define GROUPEMEDIA_H

class GroupeMedia : public std::list<std::shared_ptr<Media>> {
    std::string nom;
public:
    GroupeMedia(): std::list<std::shared_ptr<Media>>(), nom{"default"} {}
    GroupeMedia(std::string nom): std::list<std::shared_ptr<Media>>(), nom{nom} {}

    const std::string GetNom();

    void Log(std::ostream & flux){
        flux << "GroupeMedia: " << nom << std::endl;
        for (std::shared_ptr<Media> m : *this) {
            flux << "\t";
            m->Log(flux);
        }
        flux.flush();
    }
};

#endif
