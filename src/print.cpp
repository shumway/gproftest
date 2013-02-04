#include<iostream>
using namespace std;
void print(float fvar[],int nsize, float squares,float roots,float sumall,float art)
{
  cout<<"The output is\n";
  cout<<"squares ="<<squares<<endl<<"roots ="<<roots<<endl<<"Sqares + Roots ="<<sumall<<endl;
  cout<<"And the array setup is :\n";
  for(int k = 0; k<nsize;k++)
   {
     cout<<k<<"="<<fvar[k]<<endl;
   }
  cout<<"\nTime consumed by artificial function using time.h : "<<art<<" seconds\n";
}
