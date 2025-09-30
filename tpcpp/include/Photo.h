//
// Photo.h
// Created on 23/09/2025
//

#include "Media.h"

#include <iostream>
#include <string>

#ifndef PHOTO_H
#define PHOTO_H
class Photo : public Media{
    float latitude;
    float longitude;
public:
    Photo():  Media(), latitude{0},longitude{0}{}
    Photo(float latitude,float longitude, std::string pathname):
        Media("photo", pathname), latitude{latitude}, longitude{longitude}{}

    const float GetLatitude(){return latitude;}
    void SetLatitude(float latitude){this->latitude = latitude;}
    const float GetLongitude(){return longitude;}
    void SetLongitude(float longitude){this->longitude = longitude;}

    const void Log(std::ostream & flux){
        flux << "Photo" << "@" << GetPathName()
             << " Lat:" << latitude
             << " Lon:" << longitude << std::endl;
        flux.flush();
    }
    const void Jouer() {
        std::string cmd = "imagej " + GetPathName() + " &";
        system(cmd.data());
    };
};
#endif // PHOTO_H
