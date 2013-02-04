#include<time.h>

float artificialtime()
{
  float tstart = time(NULL); 
  float tend = tstart + 3.0;
  do
  { 
  int k = k + 1; 
  } while(time(NULL)<tend) ;
  float tactual = time(NULL) - tstart;
  return tactual;
}
