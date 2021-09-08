#include <stdio.h>
#include <conio.h>

void list() {
  FILE *ls;
  ls = fopen("index.txt", "r+");
  if (ls == NULL) {
    printf("file cant be opened");
  }
  printf("\n\n");
  while (!feof(ls)) {
    printf("%c", fgetc(ls));
  }
}