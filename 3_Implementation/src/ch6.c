#include <stdio.h>
#include <conio.h>

void backmain();

void ch6() {
  FILE *f6;
  f6 = fopen("pointer.txt", "r+");
  if (f6 == NULL) {
    printf("file cant be opened");
  }
  printf("\n\n");
  while (!feof(f6)) {
    printf("%c", fgetc(f6));
  }
  printf("\n\nCHOOSE THE TOPIC NO. TO READ OR OR PRESS 6 TO GO BACK TO MAIN "
         "MENU OR PRESS 0 TO EXIT\n\n");
  int ch;
  scanf("%d", &ch);
  switch (ch) {
  case 1: {
    FILE *f61;
    f61 = fopen("wh pointer.txt", "r+");
    if (f61 == NULL) {
      printf("file cant be opened");
    }
    printf("\n\n");
    while (!feof(f61)) {
      printf("%c", fgetc(f61));
    }
  } break;
  case 2: {
    FILE *f62;
    f62 = fopen("fea pointer.txt", "r+");
    if (f62 == NULL) {
      printf("file cant be opened");
    }
    printf("\n\n");
    while (!feof(f62)) {
      printf("%c", fgetc(f62));
    }
  } break;
  case 3: {
    FILE *f63;
    f63 = fopen("point add.txt", "r+");
    if (f63 == NULL) {
      printf("file cant be opened");
    }
    printf("\n\n");
    while (!feof(f63)) {
      printf("%c", fgetc(f63));
    }
  } break;
  case 4: {
    FILE *f64;
    f64 = fopen("point del.txt", "r+");
    if (f64 == NULL) {
      printf("file cant be opened");
    }
    printf("\n\n");
    while (!feof(f64)) {
      printf("%c", fgetc(f64));
    }
  } break;
  case 5: {
    FILE *f65;
    f65 = fopen("point opp.txt", "r+");
    if (f65 == NULL) {
      printf("file cant be opened");
    }
    printf("\n\n");
    while (!feof(f65)) {
      printf("%c", fgetc(f65));
    }
  } break;
  case 6:
    system("cls");
    backmain();
    break;
  case 0:
    printf("\n\n\t\tTHANK YOU \n");
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
    ch6();
    break;
  case 0:
    exit(0);
    break;
  default:
    printf("INVALID CHOICE");
  }
}