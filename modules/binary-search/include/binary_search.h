// Copyright 2018 Pozdeeva Varvara

#ifndef MODULES_BINARY_SEARCH_INCLUDE_COMPLEX_CALCULATOR_H_
#define MODULES_BINARY_SEARCH_INCLUDE_COMPLEX_CALCULATOR_H_

#include <iostream>

class BinarySearch {
 private:
     int* masiv;
     int size;
     int center;
 public:
     BinarySearch(int mas[], int size);
     ~BinarySearch();
     int Search(int num);
};

#endif //MODULES_BINARY_SEARCH_INCLUDE_COMPLEX_CALCULATOR_H_
