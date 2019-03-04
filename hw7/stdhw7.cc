/**********************************************
Cameron Coventry          HW7

CS3560                03/03/19

Finds the standard deviation  of a set using varadic Arguments

Implementation file
***********************************************/

#include <iostream>
#include <cstdarg>
#include <cmath>
#include "stdhw7.h"

using namespace std;



double stddev(int n, ...)
{
  va_list args;
  va_start(args, n);
  int num[n];
  double runtot= 0;
  double deviation= 0;
  double mean;

  for(int i = 0; i < n; ++i)
  {
    int getnums = va_arg(args, int);

  num[i] = getnums;
  }

  for(int i = 0; i < n; ++i)
  {
    runtot += num[i];
  }
  mean = runtot / n;

  for(size_t i = 0; i <= n - 1; ++i)
  {
    deviation = deviation + (num[i] - mean) * (num[i]- mean);
  }
  deviation = deviation / n;

  if(deviation == 0)
  {
    cout<<" The standard deviation is zero."<<endl;
  }
  cout<<"Total: "<< runtot <<endl<<"# of terms: "<< n <<endl<<"Mean: "<< mean <<endl<<endl<<"Standard Deviation: "<<endl;
  deviation = sqrt(deviation);
  return(deviation);

  va_end(args);


}
