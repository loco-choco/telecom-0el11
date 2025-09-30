//
// GroupeVideo.h
// Created on 23/09/2025
//

#include <string>
#include <memory>
#include <iostream>
#include <list>
#include "Video.h"

#ifndef GROUPEVIDEO_H
#define GROUPEVIDEO_H

class GroupeVideo : public std::list<std::shared_ptr<Video>> {
    std::string nom;
public:
    GroupeVideo(): std::list<std::shared_ptr<Video>>(), nom{"default"} {}
    GroupeVideo(std::string nom): std::list<std::shared_ptr<Video>>(), nom{nom} {}

    const std::string GetNom();

    void Log(std::ostream & flux){
        flux << "GroupeVideo: " << nom << std::endl;
        for (std::shared_ptr<Video> v : *this) {
            flux << "\t";
            v->Log(flux);
        }
        flux.flush();
    }
};

#endif
