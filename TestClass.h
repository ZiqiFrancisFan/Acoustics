/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TestClass.h
 * Author: ziqi
 *
 * Created on January 10, 2019, 5:27 PM
 */

#ifndef TESTCLASS_H
#define TESTCLASS_H

#include <iostream>
using namespace std;
class testClass {
    friend testClass test(testClass t); 
private:
    double s;
public:
    testClass() = default;
    testClass(const testClass &):s(5) {cout << "Copy constructor used." << endl;}
};

testClass test(testClass t) {
    return t;
}



#endif /* TESTCLASS_H */

