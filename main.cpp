/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ziqi
 *
 * Created on January 9, 2019, 1:12 PM
 */

#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    vector<int> v{1,2,3,4,5,6,7,8};
    for (auto &i : v)     // for each element in v (note: i is a reference)
        i *= i;           // square the element value
    for (auto i : v)      // for each element in v
        cout << i << " "; // print the element
    cout << endl;
    auto a = v.begin();
    auto b = v.end();
    while (a != b) {
        cout << *a << endl;
        ++a;
    }
    
    return 0;
}

