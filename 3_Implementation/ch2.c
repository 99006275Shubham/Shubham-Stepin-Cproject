#include <stdio.h>
#include <stdlib.h>

void backmain();

void ch2() {
  FILE *f2;
  f2 = fopen("operators.txt", "r+");
  if (f2 == NULL) {
    printf("file cant be opened");
  }
  printf("\n\n");
  while (!feof(f2)) {
    printf("%c", fgetc(f2));
  }
  printf("\n\nCHOOSE THE TOPIC NO. TO READ OR OR PRESS 6 TO GO BACK TO MAIN "
         "MENU OR PRESS 0 TO EXIT\n\n");
  int ch;
  scanf("%d", &ch);
  switch (ch) {
  case 1: {

    FILE *f21;
    f21 = fopen("comma operators.txt", "r+");
    if (f21 == NULL) {
      printf("file cant be opened");
    }
    printf("\n\n");
    while (!feof(f21)) {
      printf("%c", fgetc(f21));
    }
    int choice;
    scanf("%d", &choice);
    if (choice == 1) {
      printf("Result = %d", 2 == 3 ? 4 : 5);
    } else if (choice == 2) {
      printf("\nyour wish,thanks\n");
    }
  } break;
  case 2: {
    FILE *f22;
    f22 = fopen("arthmic operator.txt", "r+");
    if (f22 == NULL) {
      printf("file cant be opened");
    }
    printf("\n\n");
    while (!feof(f22)) {
      printf("%c", fgetc(f22));
    }
    int choice;
    scanf("%d", &choice);
    if (choice == 1) {
      int a, z, x = 10, y = 20;
      z = x * y++;
      a = x * y;
      printf("\n%d %d", z, a);
    } else if (choice == 2) {
      printf("\nyour wish,thanks\n");
    }
  } break;
  case 3: {
    FILE *f23;
    f23 = fopen("relation operator.txt", "r+");
    if (f23 == NULL) {
      printf("file cant be opened");
    }
    printf("\n\n");
    while (!feof(f23)) {
      printf("%c", fgetc(f23));
    }
    int choice;
    scanf("%d", &choice);
    if (choice == 1) {
      printf("\nCondition : Return Values\n");
      printf("\n10!=10 : %5d", 10 != 10);
      printf("\n10==10 : %5d", 10 == 10);
      printf("\n10>=10 : %5d", 10 >= 10);
      printf("\n10<=100: %5d", 10 <= 100);
      printf("\n10!=9 : %5d", 10 != 9);
    } else if (choice == 2) {
      printf("\nyour wish,thanks\n");
    }
  } break;
  case 4: {
    FILE *f24;
    f24 = fopen("assiment operator and expression.txt", "r+");
    if (f24 == NULL) {
      printf("file cant be opened");
    }
    printf("\n\n");
    while (!feof(f24)) {
      printf("%c", fgetc(f24));
    }
    int choice;
    scanf("%d", &choice);
    if (choice == 1) {
      int a, b;
      printf("Enter Any Integer either above 5 or below 5 :-");
      scanf("%d", &a);
      b = (a > 5 ? 3 : 4);
      printf("Calculated Value of b is :- %d", b);
    } else if (choice == 2) {
      printf("\nyour wish,thanks\n");
    }
  } break;
  case 5: {
    FILE *f25;
    f25 = fopen("logical operator.txt", "r+");
    if (f25 == NULL) {
      printf("file cant be opened");
    }
    printf("\n\n");
    while (!feof(f25)) {
      printf("%c", fgetc(f25));
    }
    int choice;
    scanf("%d", &choice);
    if (choice == 1) {
      printf("\nCondition : Return Values\n");
      printf("\n5>3 && 5<10 : %5d", 5 > 3 && 5 < 10);
      printf("\n 8>5 || 8<2 : %5d", 8 > 5 || 8 < 2);
      printf("\n !(8==8) : %5d", !(8 == 8));
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
  printf("\n\nPRESS 1 FOR MAIN MENU, 2 FOR PREVIOUS LIST AND 0 FOR EXIT\n\n");
  int option;
  scanf("%d", &option);
  switch (option) {
  case 1:
    system("cls");
    backmain();
    break;
  case 2:
    ch2();
    break;
  case 0:
    exit(0);
    break;
  default:
    printf("INVALID CHOICE");
  }
}