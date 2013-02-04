//============================================================================
// Name        : TestCodes.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<math.h>
using namespace std;
float sumsquares(float,float,float);
float sqroot(float,float,float);
float vector(float fv1[],const int nsize);
int main() 
{
  float l,m,n,squares,roots;
  cout<<"Enter x,y,z";
  cin>>l>>m>>n;
  squares=sumsquares(l,m,n);
  roots=sqroot(l,m,n);
  
  float sumall = squares + roots;
  const int max = 10;
  float fv1[max];
  vector(fv1,max);
  cout<<"The output is";
  cout<<squares<<endl<<roots<<endl<<sumall<<endl;
  cout<<"And";
  for(int k = 0; k<max;k++)
   {
     cout<<k<<"="<<fv1[k]<<endl;
   }
}


float sqroot(float x,float y, float z)
{ 
  return(sqrt(x*x + y*y +z*z));
}

float vector(float fv1[],const int nsize)
{
  float k = 1.0;
  for(int i =0; i<nsize ; i++)
  {

  fv1[i] = k;
  k = k + 1.2;
  
}
}
