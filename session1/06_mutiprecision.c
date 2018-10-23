#include <stdio.h>

int  main() {

  char ch;
  int i=0;
  float f=0;
  double lf=0;

  scanf("%c", &ch);
  scanf("%d", &i);
  scanf("%f", &f);
  scanf("%lf", &lf);

  printf("%c %d %f %lf\n",ch, i, f, lf);

  return 0;
}
