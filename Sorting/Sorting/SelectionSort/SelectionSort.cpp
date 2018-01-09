//
//  SelectionSort.cpp
//  Sorting
//
//  Created by A on 12/20/17.
//  Copyright © 2017 Github. All rights reserved.
//

#include "SelectionSort.hpp"
#include "iostream"

using namespace std;

vector<int> SelectionSort::sort(vector<int> array) {
    size_t n = array.size();
    int i, j, min = 0, minIndex = 0;
    for (i = 0; i < n-1; i ++) {
        // consider (i+1)th element as minimum and store its index
        min = array[i+1];
        minIndex = i + 1;
        for(j = i + 1; j <= n-1; j++) {
            // for every element greater than i, iterate to find the smallest
            if(array[j] < min) {
                min = array[j];
                minIndex = j;
            }
        }
        if(array[i] > min) {
            // swap only if ith element is greater than min
            int temp = array[i];
            array[i] = min;
            array[minIndex] = temp;
        }
    }
    return array;
}
