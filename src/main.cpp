//============================================================================
//   Edited Main.cpp
//============================================================================

#include<iostream>
#include<math.h>
#include "sqroot.h"
#include "setup.h"
#include "sumsquares.h"
#include "print.h"
#include "artificialtime.h"
using namespace std;

int main() 
{
  int nsize;
  cout<<"Enter calc array size:";
  cin>>nsize;
  float fvar[nsize];
  setup(fvar, nsize);
  float squares=sumsquares(fvar,nsize);
  float roots=sqroot(fvar,nsize);
  float sumall = squares + roots;
  float art = artificialtime();
  print(fvar, nsize, squares,roots,sumall,art);
  
}
