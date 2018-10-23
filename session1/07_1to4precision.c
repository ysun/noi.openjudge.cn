#include <stdio.h>

int  main() {

  char ch;
  int i=0;
  float f=0;
  double lf=0;

  scanf("%lf", &lf);

  printf("%f\n",lf);
  printf("%0.5f\n",lf);
  printf("%e\n",lf);
  printf("%g\n",lf);

  return 0;
}
