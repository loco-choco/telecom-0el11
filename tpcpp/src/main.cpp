//
// main.cpp
// Created on 21/10/2018
//

#include <iostream>
#include <memory>
#include "Media.h"
#include "Photo.h"
#include "Video.h"
#include "Film.h"
#include "GroupeVideo.h"
#include "GroupePhoto.h"
#include "GroupeMedia.h"

int main(int argc, const char* argv[])
{
    std::shared_ptr<Photo> p = std::make_shared<Photo>(10,10,"/cal/exterieurs/filho-25/Téléchargements/cat.jpeg");
    std::shared_ptr<Video> v = std::make_shared<Video>(10,"/cal/exterieurs/filho-25/Téléchargements/cat.jpeg");

    int chaps[3] = {10,20,30};
    std::shared_ptr<Film> f = std::make_shared<Film>(chaps, 3, 100,"/cal/exterieurs/filho-25/Téléchargements/cat.jpeg");

    GroupeVideo* gv = new GroupeVideo("Cat");
    gv->push_front(f);
    gv->push_front(v);
    gv->Log(std::cout);

    GroupePhoto* gp = new GroupePhoto("Cat2");
    gp->push_front(p);
    gp->Log(std::cout);

    GroupeMedia* gm = new GroupeMedia("Cat3");
    gm->push_front(p);
    gm->push_front(f);
    gm->push_front(v);
    gm->Log(std::cout);

    return 0;
}
