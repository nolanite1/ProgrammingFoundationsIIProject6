/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Address.cpp
 * Author: sai2468
 * 
 * Created on February 25, 2019, 1:03 PM
 */

#include "Address.h"

Address::Address() {
}
Address::Address(float latitude, float longitude, int house_number, string street_name){
    this->latitude = latitude;
    this->longitude = longitude;
    this->house_number = house_number;
    this->street_name = street_name;
}
Address::Address(const Address& orig) {
    latitude = orig.latitude;
    longitude = orig.longitude;
    house_number = orig.house_number;
    street_name = orig.street_name;
}

Address::~Address() {
}
float Address::getLatitude(){
    return latitude;
}
float Address::getLongitude(){
    return longitude;
}
int Address::getHouseNumber(){
    return house_number;
}
string Address::getStreetName(){
    return street_name;
}
void Address::setLatitude(float latitude){
    this->latitude = latitude;
}
void Address::setLongitude(float longitude){
    this->longitude = longitude; 
}
void Address::setHouseNumber(int house_number){
    this->house_number = house_number;
}
void Address::setStreetName(string street_name){
    this->street_name = street_name;
}
void Address::print(){
    cout << "Latitude: " << latitude << endl;
    cout << "Longitude :" << longitude << endl;
    cout << "Number: " << house_number << endl;
    cout << "Street: " << street_name << endl;
}
//float Address::Value = latitude + longitude + house_number + street_name;
