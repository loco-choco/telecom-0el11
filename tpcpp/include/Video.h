//
// Video.h
// Created on 23/09/2025
//

#include "Media.h"
#include <string>

#ifndef VIDEO_H
#define VIDEO_H

class Video : public Media{
    int duree;
public:
    Video(): Media(), duree{0}{}
    Video(int duree, std::string pathname): Media("Video", pathname), duree{duree}{}

    const int GetDuree(){return duree;}
    void SetDuree(int duree){this->duree = duree;}

    const void Log(std::ostream & flux){
        flux << "Video" << "@" << GetPathName()
             << " Duree:" << duree << std::endl;
        flux.flush();
    }
    const void Jouer() {
        std::string cmd = "mpv " + GetPathName() + " &";
        system(cmd.data());
    };
};
#endif // VIDEO_H
