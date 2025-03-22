//
// Created by Asmita Tamang on 3/21/25.
//

#include "operator.h"
#include "creatMovie.h"
#include <iostream>
using namespace std;

ostream& operator<<(ostream& stream, const Movie& movie) {
    stream  << "Title : " << movie.title
    << "\nDate:"<< movie.date.releaseYear << "/" << movie.date.releaseMonth << "/" << movie.date.releaseDay
    << "\nPopular : " << boolalpha << movie.isPopular;
    return (stream);
}
