#include <stdio.h>
#include <conio.h>

void backmain();

void ch4() {
  FILE *f4;
  f4 = fopen("loop control.txt", "r+");
  if (f4 == NULL) {
    printf("file cant be opened");
  }
  printf("\n\n");
  while (!feof(f4)) {
    printf("%c", fgetc(f4));
  }
  printf("\n\nCHOOSE THE TOPIC NO. TO READ OR OR PRESS 6 TO GO BACK TO MAIN "
         "MENU OR PRESS 0 TO EXIT\n\n");
  int ch;
  scanf("%d", &ch);
  switch (ch) {
  case 1: {
    FILE *f41;
    f41 = fopen("what is loop.txt", "r+");
    if (f41 == NULL) {
      printf("file cant be opened");
    }
    printf("\n\n");
    while (!feof(f41)) {
      printf("%c", fgetc(f41));
    }
  } break;
  case 2: {
    FILE *f42;
    f42 = fopen("for loop.txt", "r+");
    if (f42 == NULL) {
      printf("file cant be opened");
    }
    printf("\n\n");
    while (!feof(f42)) {
      printf("%c", fgetc(f42));
    }
    int choice;
    scanf("%d", &choice);
    if (choice == 1) {
      int i;
      for (i = 1; i <= 5; i++)
        printf("\n Number: %5d it�s Square: %5d", i, i * i);
    } else if (choice == 2) {
      printf("\nyour wish,thanks\n");
    }
  } break;
  case 3: {
    FILE *f43;
    f43 = fopen("nested for.txt", "r+");
    if (f43 == NULL) {
      printf("file cant be opened");
    }
    printf("\n\n");
    while (!feof(f43)) {
      printf("%c", fgetc(f43));
    }
    int choice;
    scanf("%d", &choice);
    if (choice == 1) {
      int i, j, n, k;
      scanf("%d", &n);
      printf("\n");
      for (i = 1; i <= n; i++) {
        for (j = n; j > i; j--) {
          printf(" ");
        }
        for (k = 1; k <= i; k++) {
          printf("*");
        }
        printf("\n");
      }
    } else if (choice == 2) {
      printf("\nyour wish,thanks\n");
    }
  } break;
  case 4: {
    FILE *f44;
    f44 = fopen("while loop.txt", "r+");
    if (f44 == NULL) {
      printf("file cant be opened");
    }
    printf("\n\n");
    while (!feof(f44)) {
      printf("%c", fgetc(f44));
    }
    int choice;
    scanf("%d", &choice);
    if (choice == 1) {
      int a = 1, sum = 0;
      while (a <= 10) {
        printf("%3d", a);
        sum = sum + a;
        a++;
      }
      printf("\n Sum of 10 numbers :%d", sum);
    } else if (choice == 2) {
      printf("\nyour wish,thanks\n");
    }
  } break;
  case 5: {
    FILE *f45;
    f45 = fopen("do while.txt", "r+");
    if (f45 == NULL) {
      printf("file cant be opened");
    }
    printf("\n\n");
    while (!feof(f45)) {
      printf("%c", fgetc(f45));
    }
    int choice;
    scanf("%d", &choice);
    if (choice == 1) {
      int i = 1;
      do {
        printf("\n This is a program of do while loop.");
        i++;
      } while (i <= 5);

    } else if (choice == 2) {
      printf("\nyour wish,thanks\n");
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
    ch4();
    break;
  case 0:
    exit(0);
    break;
  default:
    printf("INVALID CHOICE");
  }
}