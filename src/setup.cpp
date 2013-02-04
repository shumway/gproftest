#include<iostream>
#include<cstdlib>
using namespace std;

float setup(float fvar[], int nsize)
{ 
  char option;
  cout<<"Chose method for scalar field"<<endl<<"1. Random \n2. Manual \n3. First N natural numbers\n";
  cin>>option; 

  switch(option)

  {
    case '1':
      {
         for(int i = 0;i<nsize;i++)
         {
           fvar[i] = rand(); 
         }
         break;
      }
    case '2':
      {
         for(int i = 0;i<nsize;i++)
         {
           cin>>fvar[i]; 
         }
         break;
      }
    case '3':
      {
         for(int i = 0;i<nsize;i++)
         {
           fvar[i] = i; 
         }
         break;
      }
  }
}
