/************************
 Project:Library        *
 Author:Daniel Waweru   *
 Date:19/7/2021         *
 License:MIT            *
 Compiler:C99           *
************************/

#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

void welcome(); // to display the welcome screen
void login(); // to display the login screen
void mainmenu(); // to display the main menu
void add_books(); // to display the add books screen
void delete_books();// to display the delete function
void edit_books(); // to display the edit function
void search_books(); // to display the search function
void view_books();// too display the view books function



int wrong=1, count;//global variable for login function of int type
int i=0, valid=0;
char choice=0 ;

char answer;
int target=0,found=0;

struct books// to call in program
{
	int books_id; // declare the integer data type
	char b_name[20];// declare the character data type
	char a_name[20];// declare the charecter data type
	char s_name[20];// declare the character data type
	char add[15];// declare the character data type
	int days;// declare the integer data type
	int yr; // declare the integer data type
	
}m;
void gotoxy(short x, short y)// declare the gotoxy function
{
	COORD pos ={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

void main() // declare main functions
{
	welcome(); // call welcome screen
	login(); //call login screen
}
// welcomr function
void welcome()
{

	gotoxy(25,6);
printf("  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
gotoxy(25,7);
printf("  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
gotoxy(25,8);
printf("        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
gotoxy(25,9);
printf("        =                 WELCOME                   =");
gotoxy(25,10);
printf("        =                   TO                      =");
gotoxy(25,11);
printf("        =                 LIBRARY                   =");
gotoxy(25,12);
printf("        =               MANAGEMENT                  =");
gotoxy(25,13);
printf("        =                 SYSTEM                    =");
gotoxy(25,14);
printf("        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
gotoxy(25,15);
printf("  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
gotoxy(25,16);
printf("  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
gotoxy(28,22);
printf(" Enter any key to continue.....");
getch();
}
// login function
void login()
{
	system("cls");
	int L=0;
	char a[30], b[30];
	system("cls");
	
		
	
	printf("------------------------------------------------------------------------------------------------\n");
	printf("\t\t\t\t\tLogin Screen");
	printf("\n------------------------------------------------------------------------------------------------");
	do
	{
		printf("\n\t\t\t\tEnter Username and Password");
	
		printf("\n\t\t\t\tUsername:");
		scanf("%s" ,a);
	
		printf("\n\t\t\t\tPassword:");
		scanf("%s" ,b);
		if((strcmp(a,"waweru")==0)&& (strcmp(b,"9824")==0))
		{
			printf("\n\t\t\t\tLogged Into System.");
			printf("\n\t\t\t\tPress any key to go next.....");
			printf("\n------------------------------------------------------------------------------------------------");
			getch();
			mainmenu();
		}
		else
		{
			
			printf("\t\t\t\tLogin Failed Enter Again Username & Password Again\n\n");
			L++;
		}
	}
		while(L<=3);	
	if(L>3){
		system("cls");
		gotoxy(40,15);
		printf("Sorry,Unknown User.");
		getch();
		system("cls");
	}
	
}
// mainmenu function
void mainmenu(void)
	{
		int choice;
	
		system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("MAIN MENU");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add Books");
		gotoxy(20,7);
		printf("2. Search Books");
		gotoxy(20,9);
		printf("3. View Books");
		gotoxy(20,11);
		printf("4. Edit Book's Record");
		gotoxy(20,13);
		printf("5. Delete Books");
		gotoxy(20,15);
		printf("6. Close Application");
		gotoxy(20,17);
		printf("Please Enter a choice[1-6]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
				add_books();
				break;
				case 2:
			    search_books();
				break;
				case 3:
				view_books();
				break;
				case 4:
				edit_books();
				break;
				case 5:
				delete_books();
				case 6:
				exit(0);
				break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
}
		


	

                              
	
