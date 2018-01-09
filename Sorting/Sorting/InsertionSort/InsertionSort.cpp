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
        for(int j = i+1; j > 0; j--) {
            if(array[j-1] > array[j]) {
                int temp = array[j-1];
                array[j-1] = array[j];
                array[j] = temp;
            } else
                break;
        }
    }
    return array;
}

vector<int> InsertionSort::sort_recursive(vector <int> array) {
//    cout << endl << "Initial array: ";
//    vector <int> :: iterator it;
//    for (it = array.begin(); it != array.end(); ++it)
//        cout << *it << '\t';
    size_t n = array.size();
    if (n == 1) {
        return array;
    } else {
        int temp = array[n-1];
        array.resize(n-1);

        vector<int> result = sort_recursive(array);
        result.push_back(temp);
        
        for (size_t i = n-1; i > 0; i--) {
            if(temp < result[i-1]) {
                result[i] = result[i-1];
                result[i-1] = temp;
            } else
                break;
        }
//        cout << endl << "after recursion ";
//        vector <int> :: iterator j;
//        for (j = result.begin(); j != result.end(); ++j)
//            cout << *j << '\t';
        
        return result;
    }
}
