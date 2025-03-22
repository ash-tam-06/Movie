//
// Created by Asmita Tamang on 3/21/25.
//
#ifndef CREATMOVIE_H
#define CREATMOVIE_H
#include <iostream>

struct Date {
    short releaseYear;
    short releaseMonth;
    short releaseDay;
};
struct Movie {
    std::string title;
    Date date;
    bool isPopular;
};

Movie creatMovie();



#endif //CREATMOVIE_H
