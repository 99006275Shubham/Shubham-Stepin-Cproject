#include "stdio.h"
#include <conio.h>

// Book Structure
struct Book {
  FILE *file;   // For reading files
  int bookMark; // For book mark functionality
} CProgramming;

// Function Declarations
void welcomeMessage();   // For showing welcome message
void bookContent();      // For showing book content
void readAndPrintFile(); // For reading files

// Start of the Program
int main() {
  welcomeMessage();
  bookContent();
  return 0;
}

// Function Definition
void welcomeMessage() {
  printf("Welcome to C Language E-Book !!");
  return;
}

void bookContent() {
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

void readAndPrintFile() {
  FILE *f1;
  f1 = fopen("basics of C.txt", "r+");
  if (f1 == NULL) {
    printf("file cant be opened");
  }
  printf("\n\n");
  while (!feof(f1)) {
    printf("%c", fgetc(f1));
  }
}


void getAndReadFile (){
  printf("\n\nCHOOSE THE TOPIC NO. TO READ OR OR PRESS 6 TO GO BACK TO MAIN MENU OR PRESS 0 TO EXIT\n\n");
	int ch;
	scanf("%d",&ch);
	switch(ch)
	{
	     case 1:  {
		          FILE *f11;
	              f11=fopen("introC.txt","r+");
	              if(f11==NULL)
	              {
	             	printf("file cant be opened");
	              }
	              printf("\n\n");
                 	while(!feof(f11))
                  {
		          printf("%c",fgetc(f11));
	              }
	              }
	              
	              break;
	    case 2:   {
		          FILE *f12;
	              f12=fopen("language.txt","r+");
	              if(f12==NULL)
	              {
	             	printf("file cant be opened");
	              }
	              printf("\n\n");
                 	while(!feof(f12))
                  {
		          printf("%c",fgetc(f12));
	              }
	              }
	              break; 
	    case 3: {
		          FILE *f13;
	              f13=fopen("assembler.txt","r+");
	              if(f13==NULL)
	              {
	             	printf("file cant be opened");
	              }
	              printf("\n\n");
                 	while(!feof(f13))
                  {
		          printf("%c",fgetc(f13));
	              }
	              }
	              break;
		case 4:    {
		          FILE *f14;
	              f14=fopen("structure.txt","r+");
	              if(f14==NULL)
	              {
	             	printf("file cant be opened");
	              }
	              printf("\n\n");
                 	while(!feof(f14))
                  {
		          printf("%c",fgetc(f14));
	              }
	              }
	              break; 
		case 5:   {
		          FILE *f15;
	              f15=fopen("programming rules.txt","r+");
	              if(f15==NULL)
	              {
	             	printf("file cant be opened");
	              }
	              printf("\n\n");
                 	while(!feof(f15))
                  {
		          printf("%c",fgetc(f15));
	              }
	              }
	              break; 
	    case 6: system("cls"); 
		backmain();
	    break;
	    case 0 : printf("\n\n\t\tTHANK YOU\n");
	             exit(0);
	}
	printf("\nPRESS 1 FOR MAIN MENU, 2 FOR PREVIOUS LIST AND 0 FOR EXIT\n\n");
	int option;
	scanf("%d",&option);
	switch(option)
	{
		case 1: system("cls");
		backmain();
		break;
		case 2: ch1();
		break;
		case 0: exit(0);
		break;
		default : printf("INVALID CHOICE");
	}
}



void getReadFromTHis(){
  	FILE *f6;
	f6=fopen("pointer.txt","r+");
	if(f6==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(f6))
	{
		printf("%c",fgetc(f6));
	}
	printf("\n\nCHOOSE THE TOPIC NO. TO READ OR OR PRESS 6 TO GO BACK TO MAIN MENU OR PRESS 0 TO EXIT\n\n");
	int ch;
	scanf("%d",&ch);
		switch(ch)
	{
	     case 1:  {
		          FILE *f61;
	              f61=fopen("wh pointer.txt","r+");
	              if(f61==NULL)
	              {
	             	printf("file cant be opened");
	              }
	              printf("\n\n");
                 	while(!feof(f61))
                  {
		          printf("%c",fgetc(f61));
	              }
	              }
	              break;
	    case 2:   {
		          FILE *f62;
	              f62=fopen("fea pointer.txt","r+");
	              if(f62==NULL)
	              {
	             	printf("file cant be opened");
	              }
	              printf("\n\n");
                 	while(!feof(f62))
                  {
		          printf("%c",fgetc(f62));
	              }
	              }
	              break; 
	    case 3: {
		          FILE *f63;
	              f63=fopen("point add.txt","r+");
	              if(f63==NULL)
	              {
	             	printf("file cant be opened");
	              }
	              printf("\n\n");
                 	while(!feof(f63))
                  {
		          printf("%c",fgetc(f63));
	              }
	              }
	              break;
		case 4:    {
		          FILE *f64;
	              f64=fopen("point del.txt","r+");
	              if(f64==NULL)
	              {
	             	printf("file cant be opened");
	              }
	              printf("\n\n");
                 	while(!feof(f64))
                  {
		          printf("%c",fgetc(f64));
	              }
	              }
	              break; 
		case 5:   {
		          FILE *f65;
	              f65=fopen("point opp.txt","r+");
	              if(f65==NULL)
	              {
	             	printf("file cant be opened");
	              }
	              printf("\n\n");
                 	while(!feof(f65))
                  {
		          printf("%c",fgetc(f65));
	              }
	              }
	              break; 
	    case 6: system("cls");
		backmain();
	    break;
	    case 0 : printf("\n\n\t\tTHANK YOU \n");
	             exit(0);
	}
	printf("\nPRESS 1 FOR MAIN MENU, 2 FOR PREVIOUS LIST AND 0 FOR EXIT\n\n");
	int option;
	scanf("%d",&option);
	switch(option)
	{
		case 1: system("cls");
		backmain();
		break;
		case 2: ch6();
		break;
		case 0: exit(0);
		break;
		default : printf("INVALID CHOICE");
	}
}