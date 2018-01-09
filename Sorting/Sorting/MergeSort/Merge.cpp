//
//  Merge.cpp
//  Sorting
//
//  Created by A on 1/1/18.
//  Copyright © 2018 Github. All rights reserved.
//

#include "Merge.hpp"
#include "iostream"

vector<int> Merge::merge(vector <int> array, int p, int q, int r) {
    
    vector<int> L, R, Q;
    for (int i = p; i < q; i++)
        L.push_back(array.at(i));
    for (int i = q; i <= r; i++)
        R.push_back(array.at(i));

    size_t n  = array.size();
    size_t n1 = L.size();
    size_t n2 = R.size();
    
    int i = 0, j = 0, flag_iExhausted = 0, flag_jExhausted = 0;
    for (int k = 0; k < n; k++) {
        if (L[i] < R[j]) {
            Q.push_back(L[i]);
            i++;
            if(i == n1) {
                flag_iExhausted = 1;
                break;
            }
        } else {
            Q.push_back(R[j]);
            j++;
            if(j == n2) {
                flag_jExhausted = 1;
                break;
            }
        }
    }
    if (flag_iExhausted) {
        for (int k = j; k < n2; k++)
            Q.push_back(R[k]);
    }
    if (flag_jExhausted) {
        for (int k = i; k < n1; k++)
            Q.push_back(L[k]);
    }
    
    return Q;
}
