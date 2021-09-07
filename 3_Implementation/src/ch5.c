#include <stdio.h>
#include <stdlib.h>

void backmain();

void ch5() {
  FILE *f5;
  f5 = fopen("array.txt", "r+");
  if (f5 == NULL) {
    printf("file cant be opened");
  }
  printf("\n\n");
  while (!feof(f5)) {
    printf("%c", fgetc(f5));
  }
  printf("\n\nCHOOSE THE TOPIC NO. TO READ OR OR PRESS 6 TO GO BACK TO MAIN "
         "MENU OR PRESS 0 TO EXIT\n\n");
  int ch;
  scanf("%d", &ch);
  switch (ch) {
  case 1: {
    FILE *f51;
    f51 = fopen("introdaction.txt", "r+");
    if (f51 == NULL) {
      printf("file cant be opened");
    }
    printf("\n\n");
    while (!feof(f51)) {
      printf("%c", fgetc(f51));
    }
  } break;
  case 2: {
    FILE *f52;
    f52 = fopen("array declaration.txt", "r+");
    if (f52 == NULL) {
      printf("file cant be opened");
    }
    printf("\n\n");
    while (!feof(f52)) {
      printf("%c", fgetc(f52));
    }
  } break;
  case 3: {
    FILE *f53;
    f53 = fopen("array ter.txt", "r+");
    if (f53 == NULL) {
      printf("file cant be opened");
    }
    printf("\n\n");
    while (!feof(f53)) {
      printf("%c", fgetc(f53));
    }
  } break;
  case 4: {
    FILE *f54;
    f54 = fopen("char array.txt", "r+");
    if (f54 == NULL) {
      printf("file cant be opened");
    }
    printf("\n\n");
    while (!feof(f54)) {
      printf("%c", fgetc(f54));
    }
  } break;
  case 5: {
    FILE *f55;
    f55 = fopen("one dimensional.txt", "r+");
    if (f55 == NULL) {
      printf("file cant be opened");
    }
    printf("\n\n");
    while (!feof(f55)) {
      printf("%c", fgetc(f55));
    }
  } break;
  case 6:
    system("cls");
    backmain();
    break;
  case 0:
    printf("\n\n\t\tTHANK YOU\n");
    exit(0);
  }
  printf("\nPRESS 1 FOR MAIN MENU, 2 FOR PREVIOUS LIST AND 0 FOR EXIT\n\n");
  int option;
  scanf("%d", &option);
  switch (option) {
  case 1:
    system("cls");
    backmain();
    break;
  case 2:
    ch5();
    break;
  case 0:
    exit(0);
    break;
  default:
    printf("INVALID CHOICE");
  }
}