/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sai2468
 *
 * Created on April 24, 2019, 9:46 PM
 */

#include <cstdlib>
#include <iostream>
#include "tree.h"
#include "Address.h"
#include <vector>
#include <string>
using namespace std;

/*
 * 
 */

int main(int argc, char** argv) {
    BinaryTree tree;
    string response = "";
    vector<Address>myList;
    string command ="";
    cout << "Enter command(insert,search,delete,quit): ";
    getline(cin,command);
    if(command=="insert"){
   // Local variables
   float lat = 0;
   float lon = 0;
   int num = 0;
   string street = "";
   char ch = ' ';
   vector<string>street_vector;
   int count = 0;

   // Open input file
   ifstream din;
   din.open("input.txt");

   // Loop reading address information
   while (din >> lat >> lon >> num)
   {
      // Skip space after num
      din.get(ch);
      
      // Read rest of line 
      getline(din, street);
      myList.push_back(Address(lat,lon,num,street));
      // Add to end of street vector
      street_vector.push_back(street);
//      myList.at(count).print();
      count++;
      }
   for(int k=0;k<myList.size();k++){
       tree.Insert(myList.at(k).getStreetName()+to_string(myList.at(k).getHouseNumber()),myList.at(k).getLatitude(),myList.at(k).getLongitude());
//       tree.Print();
   }  
    }
    do{
   cout << "Enter command: " << endl;
   getline(cin, command);
    if(command=="search"){
        do{
        int house = 0;
        string streetname = "";
        cout << "Enter house number: " << endl;
        cin >> house;
        cin.ignore();
        cout << "Enter street name: " << endl;
        getline(cin,streetname);
        string search_value = streetname + to_string(house);
        //cout << search_value;
        tree.Search(search_value);
        cout << "Do you want to search again? ";
        getline(cin,response);
        }while(response=="yes");
        
    }
    else if(command=="delete"){
        int house = 0;
        string streetname = "";
        cout << "Enter house number: " <<endl;
        cin >> house;
        cout << "Enter street name: " << endl;
        cin.ignore();
        getline(cin,streetname);
        string delete_value = streetname + to_string(house);
        cout << delete_value;
        tree.Delete(delete_value);
        cout << "Do you want to delete again? ";
        getline(cin,response);
    }while(response=="yes");
    }while(command!="quit");
    
//    for(int k=0;k<myList.size();k++){
//        cout << myList.at(k).getStreetName() << endl;
//    }
    return 0;
}

