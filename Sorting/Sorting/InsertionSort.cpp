//
//  InsertionSort.cpp
//  Sorting
//
//  Created by A on 12/19/17.
//  Copyright © 2017 Github. All rights reserved.
//
#include <iostream>
#include "InsertionSort.hpp"
using namespace std;

vector<int> InsertionSort::sort(vector <int> array) {
    size_t n = array.size();
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; (j > 0 && (array[j-1] > array[j])); j--) {
            int temp = array[j-1];
            array[j-1] = array[j];
            array[j] = temp;
        }
    }
    return array;
}
