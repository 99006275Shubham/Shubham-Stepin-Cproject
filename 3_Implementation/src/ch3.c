#include <stdio.h>
#include <stdlib.h>

void backmain();

void ch3() {
  FILE *f3;
  f3 = fopen("operators.txt", "r+");
  if (f3 == NULL) {
    printf("file cant be opened");
  }
  printf("\n\n");
  while (!feof(f3)) {
    printf("%c", fgetc(f3));
  }
  printf("\n\nCHOOSE THE TOPIC NO. TO READ OR OR PRESS 6 TO GO BACK TO MAIN "
         "MENU OR PRESS 0 TO EXIT\n\n");
  int ch;
  scanf("%d", &ch);
  switch (ch) {
  case 1: {
    FILE *f31;
    f31 = fopen("if statement.txt", "r+");
    if (f31 == NULL) {
      printf("file cant be opened");
    }
    printf("\n\n");
    while (!feof(f31)) {
      printf("%c", fgetc(f31));
    }
    int choice;
    scanf("%d", &choice);
    if (choice == 1) {
      int v;
      printf("Enter the number :");
      scanf("%d", &v);
      if (v < 10)
        printf("\nNumber entered is less than 10");
    } else if (choice == 2) {
      printf("\nyour wish,thanks\n");
    }
  } break;
  case 2: {
    FILE *f32;
    f32 = fopen("if else statement.txt", "r+");
    if (f32 == NULL) {
      printf("file cant be opened");
    }
    printf("\n\n");
    while (!feof(f32)) {
      printf("%c", fgetc(f32));
    }
    int choice;
    scanf("%d", &choice);
    if (choice == 1) {
      int s, d;
      printf("\n Enter a Number :");
      scanf("%d", &s);
      d = s % 10;
      if (d == 5) {
        s = s / 10;
        printf("\n Square = %d%d", s * s++, d * d);
      } else
        printf("\n Invalid Number");
    } else if (choice == 2) {
      printf("\nyour wish,thanks\n");
    }
  } break;
  case 3: {
    FILE *f33;
    f33 = fopen("if else ld.txt", "r+");
    if (f33 == NULL) {
      printf("file cant be opened");
    }
    printf("\n\n");
    while (!feof(f33)) {
      printf("%c", fgetc(f33));
    }
  } break;
  case 4: {
    FILE *f24;
    f24 = fopen("the break.txt", "r+");
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
      int initial, final, consumed;
      float total;
      printf("\n Initial & Final Readings :");
      scanf("%d %d", &initial, &final);
      consumed = final - initial;
      if (consumed >= 200 && consumed <= 500)
        total = consumed * 3.50;
      else if (consumed >= 100 && consumed <= 199)
        total = consumed * 2.50;
      else if (consumed < 100)
        total = consumed * 1.50;
      printf("Total bill for %d unit is %f", consumed, total);
    } else if (choice == 2) {
      printf("\nyour wish,thanks\n");
    }
  } break;
  case 5: {
    FILE *f25;
    f25 = fopen("switch statement.txt", "r+");
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
      int a, b, c, ch;
      printf("\t =================");
      printf("\n\t MENU");
      printf("\n\t =================");
      printf("\n\t[1] ADDITION");
      printf("\n\t[2] SUBTRACTION");
      printf("\n\t[3] MULTIPLICATION");
      printf("\n\t[4] DIVISION");
      printf("\n\t[5] REMAINDER");
      printf("\n\t[6] LARGER OUT OF TWO");
      printf("\n\t=================");
      printf("\n\n\t ENTER YOUR CHOICE :");
      scanf("%d", &ch);
      if (ch <= 6 & ch > 0) {
        printf("Enter Two Numbers :");
        scanf("%d %d", &a, &b);
      }
      switch (ch) {
      case 1:
        c = a + b;
        printf("\n Addtion : %d", c);
        break;
      case 2:
        c = a - b;
        printf("\n Subtraction : %d", c);
        break;
      case 3:
        c = a * b;
        printf("\n Multiplication : %d", c);
        break;
      case 4:
        c = a / b;
        printf("\n Division : %d", c);
        break;
      case 5:
        c = a % b;
        printf("\n Remainder : %d", c);
        break;
      case 6:
        if (a > b)
          printf("\n\t %d (a) is larger than %d (b).", a, b);
        else if (b > a)
          printf("\n\t %d (b) is larger than %d (a).", b, a);
        else
          printf("\n\t %d (a) & %d (b) are same.", a, b);
        break;
      case 0:
        printf("\n Terminated by choice");
        break;
      default:
        printf("\n Invalid Choice");
      }
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
    ch3();
    break;
  case 0:
    exit(0);
    break;
  default:
    printf("INVALID CHOICE");
  }
}