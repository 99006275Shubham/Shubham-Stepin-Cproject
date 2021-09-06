#include<stdio.h>
#include<conio.h>
#include<process.h>
int ch1(),ch2(),ch3(),ch4(),ch5(),ch6(),list(),backmain();
backmain()
{
	printf("\t\t\t\t\tPROGRAMMING IN C\n");
	printf("\t\t\t\t\t*****************\n\n");
		list();
	printf("\n\nCHOOSE TO THE TOPIC NO. YOU WANT TO GO TO.. OR PRESS 0 TO EXIT\n\n");
	int n;
	scanf("%d",&n);
	switch(n)
	{
		case 1: ch1();
		break;
		case 2: ch2();
		break;
		case 3: ch3();
		break;
		case 4: ch4();
		break;
		case 5: ch5();
		break;
		case 6:ch6();
		break;
		case 0: exit(0);
		break;
		default : printf("INVALID INPUT\n");
	}
}
list()
{
	FILE *ls;
	ls=fopen("index.txt","r+");
	if(ls==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(ls))
	{
		printf("%c",fgetc(ls));
	}
}
ch1()
{
	FILE *f1;
	f1=fopen("basics of C.txt","r+");
	if(f1==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(f1))
	{
		printf("%c",fgetc(f1));
	}
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

ch2()
{
	FILE *f2;
	f2=fopen("operators.txt","r+");
	if(f2==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(f2))
	{
		printf("%c",fgetc(f2));
	}
	printf("\n\nCHOOSE THE TOPIC NO. TO READ OR OR PRESS 6 TO GO BACK TO MAIN MENU OR PRESS 0 TO EXIT\n\n");	int ch;
	scanf("%d",&ch);
		switch(ch)
	{
	     case 1:  {
			
		          FILE *f21;
	              f21=fopen("comma operators.txt","r+");
	              if(f21==NULL)
	              {
	             	printf("file cant be opened");
	              }
	              printf("\n\n");
                 	while(!feof(f21))
                  {
		          printf("%c",fgetc(f21));
	              }
                int choice;
	             scanf("%d",&choice);
	              if(choice==1)
				  {
				  	printf("Result = %d",2==3 ? 4 : 5 );
                  }
                  else if(choice==2)
                  {
                  	printf("\nyour wish,thanks\n");
				  }
        }
	              break;
	    case 2:   {
		          FILE *f22;
	              f22=fopen("arthmic operator.txt","r+");
	              if(f22==NULL)
	              {
	             	printf("file cant be opened");
	              }
	              printf("\n\n");
                 	while(!feof(f22))
                  {
		          printf("%c",fgetc(f22));
	              }
	              int choice;
	             scanf("%d",&choice);
	              if(choice==1)
				  {
				  	int a,z,x=10,y=20;
                    z=x*y++;
                    a=x*y;
                    printf("\n%d %d",z,a);
                  }
                  else if(choice==2)
                  {
                  	printf("\nyour wish,thanks\n");
				  }
	              }
	              break; 
	    case 3: {
		          FILE *f23;
	              f23=fopen("relation operator.txt","r+");
	              if(f23==NULL)
	              {
	             	printf("file cant be opened");
	              }
	              printf("\n\n");
                 	while(!feof(f23))
                  {
		          printf("%c",fgetc(f23));
	              }
	              int choice;
	             scanf("%d",&choice);
	              if(choice==1)
				  {
				  	printf("\nCondition : Return Values\n");
				  	printf("\n10!=10 : %5d",10!=10);
				  	printf("\n10==10 : %5d",10==10);
				  	printf("\n10>=10 : %5d",10>=10);
				  	printf("\n10<=100: %5d",10<=100);
                    printf("\n10!=9 : %5d",10!=9);
                  }
                  else if(choice==2)
                  {
                  	printf("\nyour wish,thanks\n");
				  }
	              }
	              break;
		case 4:    {
		          FILE *f24;
	              f24=fopen("assiment operator and expression.txt","r+");
	              if(f24==NULL)
	              {
	             	printf("file cant be opened");
	              }
	              printf("\n\n");
                 	while(!feof(f24))
                  {
		          printf("%c",fgetc(f24));
	              }
	              int choice;
	             scanf("%d",&choice);
	              if(choice==1)
				  {
				  	int a,b;
                    printf("Enter Any Integer either above 5 or below 5 :-");
                    scanf("%d", &a);
                    b=(a>5 ? 3 : 4);
                    printf("Calculated Value of b is :- %d",b);
                  }
                  else if(choice==2)
                  {
                  	printf("\nyour wish,thanks\n");
				  }
	              }
	              break; 
		case 5:   {
		          FILE *f25;
	              f25=fopen("logical operator.txt","r+");
	              if(f25==NULL)
	              {
	             	printf("file cant be opened");
	              }
	              printf("\n\n");
                 	while(!feof(f25))
                  {
		          printf("%c",fgetc(f25));
	              }
	              int choice;
	             scanf("%d",&choice);
	              if(choice==1)
				  {
				  	printf("\nCondition : Return Values\n" );
                    printf("\n5>3 && 5<10 : %5d",5>3 && 5<10);
                    printf("\n 8>5 || 8<2 : %5d",8>5 || 8<2);
                    printf("\n !(8==8) : %5d",!(8==8));
                  }
                  else if(choice==2)
                  {
                  	printf("\nyour wish,thanks\n");
				  }
	              }
	              break; 
	    case 6: system("cls");
		backmain();
	    break;
	    case 0 : printf("\n\n\t\tTHANK YOU\n");
	             exit(0);
	}
	printf("\n\nPRESS 1 FOR MAIN MENU, 2 FOR PREVIOUS LIST AND 0 FOR EXIT\n\n");
	int option;
	scanf("%d",&option);
	switch(option)
	{
		case 1: system("cls");
		backmain();
		break;
		case 2: ch2();
		break;
		case 0: exit(0);
		break;
		default : printf("INVALID CHOICE");
	}
}

ch3()
{
		FILE *f3;
	f3=fopen("operators.txt","r+");
	if(f3==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(f3))
	{
		printf("%c",fgetc(f3));
	}
	printf("\n\nCHOOSE THE TOPIC NO. TO READ OR OR PRESS 6 TO GO BACK TO MAIN MENU OR PRESS 0 TO EXIT\n\n");
	int ch;
	scanf("%d",&ch);
		switch(ch)
	{
	     case 1:  {
		          FILE *f31;
	              f31=fopen("if statement.txt","r+");
	              if(f31==NULL)
	              {
	             	printf("file cant be opened");
	              }
	              printf("\n\n");
                 	while(!feof(f31))
                  {
		          printf("%c",fgetc(f31));
	              }
	              int choice;
	             scanf("%d",&choice);
	              if(choice==1)
				  {
				    int v;
					printf("Enter the number :");
					scanf("%d", &v);
					if(v<10)
					printf("\nNumber entered is less than 10");
                  }
                  else if(choice==2)
                  {
                  	printf("\nyour wish,thanks\n");
				  }
	              }
	              break;
	    case 2:   {
		          FILE *f32;
	              f32=fopen("if else statement.txt","r+");
	              if(f32==NULL)
	              {
	             	printf("file cant be opened");
	              }
	              printf("\n\n");
                 	while(!feof(f32))
                  {
		          printf("%c",fgetc(f32));
	              }
	              int choice;
	             scanf("%d",&choice);
	              if(choice==1)
				  {
				    int s,d;
					printf("\n Enter a Number :");
					scanf("%d",&s);
					d=s%10;
					if(d==5)
					{
					  s=s/10;
					    printf("\n Square = %d%d",s*s++,d*d);
					}
					else  printf("\n Invalid Number");
				}
                  else if(choice==2)
                  {
                  	printf("\nyour wish,thanks\n");
				  }
	              }
	              break; 
	    case 3: {
		          FILE *f33;
	              f33=fopen("if else ld.txt","r+");
	              if(f33==NULL)
	              {
	             	printf("file cant be opened");
	              }
	              printf("\n\n");
                 	while(!feof(f33))
                  {
		          printf("%c",fgetc(f33));
	              }
	              }
	              break;
		case 4:    {
		          FILE *f24;
	              f24=fopen("the break.txt","r+");
	              if(f24==NULL)
	              {
	             	printf("file cant be opened");
	              }
	              printf("\n\n");
                 	while(!feof(f24))
                  {
		          printf("%c",fgetc(f24));
	              }
	              int choice;
	             scanf("%d",&choice);
	              if(choice==1)
				  {
				    int initial,final,consumed;
					float total;
					printf("\n Initial & Final Readings :");
					scanf("%d %d", &initial, &final);
					consumed = final-initial;
					if(consumed>=200 && consumed<=500)
					total=consumed * 3.50;
					else if(consumed>=100 && consumed<=199)
					total= consumed * 2.50;
					else if(consumed<100)
					total=consumed*1.50;
					printf("Total bill for %d unit is %f",consumed,total);
                 }
                  else if(choice==2)
                  {
                  	printf("\nyour wish,thanks\n");
				  }
	              }
	              break; 
		case 5:   {
		          FILE *f25;
	              f25=fopen("switch statement.txt","r+");
	              if(f25==NULL)
	              {
	             	printf("file cant be opened");
	              }
	              printf("\n\n");
                 	while(!feof(f25))
                  {
		          printf("%c",fgetc(f25));
	              }
	              int choice;
	              scanf("%d",&choice);
	              if(choice==1)
	              {
	              	int a,b,c,ch;
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
					if(ch<=6 & ch>0)
					{
					   printf("Enter Two Numbers :");
					   scanf("%d %d",&a,&b);
					}
					   switch ( ch)
					      {
						        case 1 :
								      c=a+b;
									  printf("\n Addtion : %d",c);
									        break;
								case 2 :
								      c=a-b;
									   printf("\n Subtraction : %d",c);
									         break;
						       case 3 :
							          c=a*b;
									        printf("\n Multiplication : %d",c);
											      break;
								case 4 :
								      c=a/b;
									        printf("\n Division : %d",c);
											      break;
								case 5 :
								      c=a%b;
									    printf("\n Remainder : %d",c);
										      break;
								case 6 :
								      if(a>b)
									        printf("\n\t %d (a) is larger than %d (b).",a,b);
									else if(b>a)
									      printf("\n\t %d (b) is larger than %d (a).",b,a);
									else
									      printf("\n\t %d (a) & %d (b) are same.",a,b);
										        break;
								case 0 :
								      printf("\n Terminated by choice");
									  break;
								default :
								      printf("\n Invalid Choice");
								}
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
		case 2: ch3();
		break;
		case 0: exit(0);
		break;
		default : printf("INVALID CHOICE");
	}
}

ch4()
{	FILE *f4;
	f4=fopen("loop control.txt","r+");
	if(f4==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(f4))
	{
		printf("%c",fgetc(f4));
	}
	printf("\n\nCHOOSE THE TOPIC NO. TO READ OR OR PRESS 6 TO GO BACK TO MAIN MENU OR PRESS 0 TO EXIT\n\n");
	int ch;
	scanf("%d",&ch);
		switch(ch)
	{
	     case 1:  {
		          FILE *f41;
	              f41=fopen("what is loop.txt","r+");
	              if(f41==NULL)
	              {
	             	printf("file cant be opened");
	              }
	              printf("\n\n");
                 	while(!feof(f41))
                  {
		          printf("%c",fgetc(f41));
	              }
	              }
	              break;
	    case 2:   {
		          FILE *f42;
	              f42=fopen("for loop.txt","r+");
	              if(f42==NULL)
	              {
	             	printf("file cant be opened");
	              }
	              printf("\n\n");
                 	while(!feof(f42))
                  {
		          printf("%c",fgetc(f42));
	              }
	              int choice;
	             scanf("%d",&choice);
	              if(choice==1)
				  {
				    int i;
					for(i=1;i<=5;i++)
					printf("\n Number: %5d it�s Square: %5d",i,i*i);
                  }
                  else if(choice==2)
                  {
                  	printf("\nyour wish,thanks\n");
				  }
	              }
	              break; 
	    case 3: {
		          FILE *f43;
	              f43=fopen("nested for.txt","r+");
	              if(f43==NULL)
	              {
	             	printf("file cant be opened");
	              }
	              printf("\n\n");
                 	while(!feof(f43))
                  {
		          printf("%c",fgetc(f43));
	              }
	              int choice;
	             scanf("%d",&choice);
	              if(choice==1)
				  {
				    int i,j,n,k;
					scanf("%d",&n);
					printf("\n");
					for(i=1;i<=n;i++)
					{
							for(j=n;j>i;j--)
							{
										printf(" ");
							}
							for(k=1;k<=i;k++)
							{
							    printf("*");
							}
							printf("\n");
							}
					}
                  else if(choice==2)
                  {
                  	printf("\nyour wish,thanks\n");
				  }
	              }
	              break;
		case 4:    {
		          FILE *f44;
	              f44=fopen("while loop.txt","r+");
	              if(f44==NULL)
	              {
	             	printf("file cant be opened");
	              }
	              printf("\n\n");
                 	while(!feof(f44))
                  {
		          printf("%c",fgetc(f44));
	              }
	              int choice;
	             scanf("%d",&choice);
	              if(choice==1)
				  {
				    int a=1,sum=0;
					while(a<=10)
					{
					  printf("%3d",a);
					    sum=sum+a;
						  a++;
					}
					printf("\n Sum of 10 numbers :%d",sum);
					}
                  else if(choice==2)
                  {
                  	printf("\nyour wish,thanks\n");
				  }
	              }
	              break; 
		case 5:   {
		          FILE *f45;
	              f45=fopen("do while.txt","r+");
	              if(f45==NULL)
	              {
	             	printf("file cant be opened");
	              }
	              printf("\n\n");
                 	while(!feof(f45))
                  {
		          printf("%c",fgetc(f45));
	              }
	              int choice;
	             scanf("%d",&choice);
	              if(choice==1)
				  {
				    int i=1;
					do
					{
					  printf("\n This is a program of do while loop.");
					    i++;
					}while(i<=5);
					
				}
                  else if(choice==2)
                  {
                  	printf("\nyour wish,thanks\n");
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
		case 2: ch4();
		break;
		case 0: exit(0);
		break;
		default : printf("INVALID CHOICE");
	}
	
}

ch5()
{
	FILE *f5;
	f5=fopen("array.txt","r+");
	if(f5==NULL)
	{
		printf("file cant be opened");
	}
	printf("\n\n");
	while(!feof(f5))
	{
		printf("%c",fgetc(f5));
	}
	printf("\n\nCHOOSE THE TOPIC NO. TO READ OR OR PRESS 6 TO GO BACK TO MAIN MENU OR PRESS 0 TO EXIT\n\n");
	int ch;
	scanf("%d",&ch);
		switch(ch)
	{
	     case 1:  {
		          FILE *f51;
	              f51=fopen("introdaction.txt","r+");
	              if(f51==NULL)
	              {
	             	printf("file cant be opened");
	              }
	              printf("\n\n");
                 	while(!feof(f51))
                  {
		          printf("%c",fgetc(f51));
	              }
	              }
	              break;
	    case 2:   {
		          FILE *f52;
	              f52=fopen("array declaration.txt","r+");
	              if(f52==NULL)
	              {
	             	printf("file cant be opened");
	              }
	              printf("\n\n");
                 	while(!feof(f52))
                  {
		          printf("%c",fgetc(f52));
	              }
	              }
	              break; 
	    case 3: {
		          FILE *f53;
	              f53=fopen("array ter.txt","r+");
	              if(f53==NULL)
	              {
	             	printf("file cant be opened");
	              }
	              printf("\n\n");
                 	while(!feof(f53))
                  {
		          printf("%c",fgetc(f53));
	              }
	              }
	              break;
		case 4:    {
		          FILE *f54;
	              f54=fopen("char array.txt","r+");
	              if(f54==NULL)
	              {
	             	printf("file cant be opened");
	              }
	              printf("\n\n");
                 	while(!feof(f54))
                  {
		          printf("%c",fgetc(f54));
	              }
	              }
	              break; 
		case 5:   {
		          FILE *f55;
	              f55=fopen("one dimensional.txt","r+");
	              if(f55==NULL)
	              {
	             	printf("file cant be opened");
	              }
	              printf("\n\n");
                 	while(!feof(f55))
                  {
		          printf("%c",fgetc(f55));
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
		case 2: ch5();
		break;
		case 0: exit(0);
		break;
		default : printf("INVALID CHOICE");
	}
}

ch6()
{	FILE *f6;
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


main()
{
	backmain();
}
