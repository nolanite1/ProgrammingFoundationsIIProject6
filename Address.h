/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Address.h
 * Author: sai2468
 *
 * Created on February 25, 2019, 1:03 PM
 */
#include <iostream>
using namespace std;
#ifndef ADDRESS_H
#define ADDRESS_H
class Address {
public:
    Address();
    Address(float latitude, float longitude, int house_number, string street_name);
    Address(const Address& orig);
    virtual ~Address();
    float getLatitude();
    float getLongitude();
    int getHouseNumber();
    string getStreetName();
    void setLatitude(float latitude);
    void setLongitude(float longitude);
    void setHouseNumber(int house_number);
    void setStreetName(string street_name);
    void print();
    Address * Left;
    Address * Right;
private:
    float latitude;
    float longitude;
    int house_number;
    string street_name;
    //float Value;
};

#endif /* ADDRESS_H */

