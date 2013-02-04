#include<math.h>

float sqroot(float fvar[], int nsize)
{
  float sum; 
  sum = 0.0;
  for (int i=0; i<=nsize;i++)
  {     
    sum = sum + fvar[i]*fvar[i] ;
  }
  return(sqrt(sum));
}
