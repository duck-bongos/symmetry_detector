#include <math.h>

double sq(int num)
{
  int ans = num * num;
  return (double)ans;
}

double sqrt(int num)
{
  double ans = pow((double)num, 0.5);
  return ans;
}
