#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "version.h"


int main (int argc, char * argv[])
{
  if (argc < 2)
  {
    fprintf(stdout, "%s Version %d.%d\n", argv[0], DEMO_VERSION_MAJOR,
                                                   DEMO_VERSION_MINOR);
    fprintf(stdout, "Usage: %s number\n", argv[0]);
    return -1;
  }

  double value = atof(argv[1]);
  double result = sqrt(value);
  fprintf(stdout, "The square root of %g is %g\n", value, result);

  return 0;
}
