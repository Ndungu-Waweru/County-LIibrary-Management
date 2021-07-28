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

	

                              
	