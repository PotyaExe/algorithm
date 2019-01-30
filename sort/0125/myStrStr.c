#include <stdio.h>

int myStrStr(char s[], char t[]);

int main(void)
{
  char s[100 + 1];
  char t[20 + 1];
  char dummy;

  printf("Input source text: ");
  scanf("%s%c", s, &dummy);

  printf("Input target text: ");
  scanf("%s%c", t, &dummy);

  printf("%d\n", myStrStr(s, t));

  return 0;
}

int myStrStr(char s[], char t[])
{
  int i, j;
  for (i = 0; s[i] != '\0'; i++) {
    for (j = 0; s[i+j] == t[j]; j++) {
      if (t[j + 1] == '\0') return 1;
      if (s[(i+j) + 1] == '\0') return 0;
    }
  } 
  return 0;
}


  
