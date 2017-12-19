//
//  AddIntArrays.cpp
//  AddIntArrays
//
//  Created by A on 12/19/17.
//  Copyright © 2017 Github. All rights reserved.
//

#include "AddIntArrays.hpp"

int* AddIntArrays::add(int* a, int* b, int n) {
    int* c = (int*)malloc(sizeof(int)*(n+1));
    int sum;
    int carry = 0;
    for (int i = n-1; i >= 0; i--) {
        cout << endl;
        sum = a[i] + b[i];
        c[i+1] = sum % 10 + carry;
        if(sum > 9) {
            carry = 1;
            c[i] = 1;
        } else {
            carry = 0;
            c[i] = 0;
        }
        for (int i = 0; i < n+1; i++)
            cout << c[i] << "\t";
    }
    return c;
}
