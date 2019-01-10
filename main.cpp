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
#include "TestClass.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    testClass a;
    //testClass b(a);
    testClass b(test(a));
    
    return 0;
}

