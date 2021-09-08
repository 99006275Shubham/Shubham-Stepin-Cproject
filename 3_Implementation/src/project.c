#include <stdio.h>
#include <conio.h>

// Function Declaration
void ch1(), ch2(), ch3(), ch4(), ch5(), ch6(), list(), backmain();

// Function Definations
void backmain() {
  printf("\t\t\t\t\tPROGRAMMING IN C\n");
  printf("\t\t\t\t\t*****************\n\n");
  list();
  printf(
      "\n\nCHOOSE TO THE TOPIC NO. YOU WANT TO GO TO.. OR PRESS 0 TO EXIT\n\n");
  int n;
  scanf("%d", &n);
  switch (n) {
  case 1:
    ch1();
    break;
  case 2:
    ch2();
    break;
  case 3:
    ch3();
    break;
  case 4:
    ch4();
    break;
  case 5:
    ch5();
    break;
  case 6:
    ch6();
    break;
  case 0:
    exit(0);
    break;
  default:
    printf("INVALID INPUT\n");
  }
}

int main() { backmain(); }
