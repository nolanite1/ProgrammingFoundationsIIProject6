//-----------------------------------------------------------
//  Purpose:    Header file for the BinaryTree class.
//  Author:     John Gauch
//-----------------------------------------------------------

#include <iostream>
#include <fstream>
using namespace std;

//-----------------------------------------------------------
// BinaryTree data node definition
//-----------------------------------------------------------
class Node
{
 public:
   string Value;
   float latitude;
   float longitude;
   int house_number;
   string street_name;
   Node *Left;
   Node *Right;
   float setLatitude();
   float setLongitude();
};

//-----------------------------------------------------------
// Define the BinaryTree class interface 
//-----------------------------------------------------------
class BinaryTree
{
 public:
   // Constructor functions
   BinaryTree();
  ~BinaryTree();

   // General binary tree operations
   bool Search(string Value);
   bool Insert(string Value,float latitude,float longitude);
   bool Delete(string Value);
   void Print();

 private:
   // Helper functions
   void DestroyHelper(Node * Tree);
   bool SearchHelper(string Value, Node * Tree);
   bool InsertHelper(string Value, Node * &Tree,float latitude,float longitude);
   bool DeleteNode(Node * &Tree);
   bool DeleteHelper(string Value, Node * &Tree);
   void PrintHelper(Node * Tree);

   // Tree pointer
   Node *Root;
};

