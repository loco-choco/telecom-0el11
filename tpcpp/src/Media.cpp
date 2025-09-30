//
// Media.cpp
// Created on 23/09/2025
//

#include <string>
#include <iostream>
#include <fstream>
#include "Media.h"


Media::Media(std::string nom, std::string pathname):nom{nom},pathname{pathname} {

}

Media::~Media() {

}

const std::string Media::GetNom(){return this->nom;}
void Media::SetNom(std::string nom){this->nom = nom;}
const std::string Media::GetPathName(){return this->pathname;}
void Media::SetPathName(std::string pathname){this->pathname = pathname;}


const void Media::Log(std::ostream & flux){
    flux << nom << "@" << pathname << std::endl;
    flux.flush();
}
