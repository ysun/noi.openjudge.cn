#include <stdio.h>

int  main() {

  char ch;

  #define PATTON_DIAMOND "\
  %c\n\
 %c%c%c\n\
%c%c%c%c%c\n\
 %c%c%c\n\
  %c\n"

  scanf("%c", &ch);

//  printf("  %c  \n",ch);
//  printf(" %c%c%c \n",ch, ch,ch);
//  printf("%c%c%c%c%c\n",ch,ch,ch,ch,ch);

printf(PATTON_DIAMOND, ch,ch,ch, ch,ch,ch, ch,ch,ch, ch,ch,ch,ch);
  return 0;
}
