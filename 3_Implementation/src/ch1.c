#include <stdio.h>
#include <stdlib.h>

void backmain();

void ch1() {
  FILE *f1;
  f1 = fopen("basics of C.txt", "r+");
  if (f1 == NULL) {
    printf("file cant be opened");
  }
  printf("\n\n");
  while (!feof(f1)) {
    printf("%c", fgetc(f1));
  }
  printf("\n\nCHOOSE THE TOPIC NO. TO READ OR OR PRESS 6 TO GO BACK TO MAIN "
         "MENU OR PRESS 0 TO EXIT\n\n");
  int ch;
  scanf("%d", &ch);
  switch (ch) {
  case 1: {
    FILE *f11;
    f11 = fopen("introC.txt", "r+");
    if (f11 == NULL) {
      printf("file cant be opened");
    }
    printf("\n\n");
    while (!feof(f11)) {
      printf("%c", fgetc(f11));
    }
  }

  break;
  case 2: {
    FILE *f12;
    f12 = fopen("language.txt", "r+");
    if (f12 == NULL) {
      printf("file cant be opened");
    }
    printf("\n\n");
    while (!feof(f12)) {
      printf("%c", fgetc(f12));
    }
  } break;
  case 3: {
    FILE *f13;
    f13 = fopen("assembler.txt", "r+");
    if (f13 == NULL) {
      printf("file cant be opened");
    }
    printf("\n\n");
    while (!feof(f13)) {
      printf("%c", fgetc(f13));
    }
  } break;
  case 4: {
    FILE *f14;
    f14 = fopen("structure.txt", "r+");
    if (f14 == NULL) {
      printf("file cant be opened");
    }
    printf("\n\n");
    while (!feof(f14)) {
      printf("%c", fgetc(f14));
    }
  } break;
  case 5: {
    FILE *f15;
    f15 = fopen("programming rules.txt", "r+");
    if (f15 == NULL) {
      printf("file cant be opened");
    }
    printf("\n\n");
    while (!feof(f15)) {
      printf("%c", fgetc(f15));
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
    ch1();
    break;
  case 0:
    exit(0);
    break;
  default:
    printf("INVALID CHOICE");
  }
}