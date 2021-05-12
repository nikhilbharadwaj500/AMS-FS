//HEADER FILES
#include<stdio.h>//Use for standard I/O Operation
#include<windows.h>
#include<conio.h>//Use for delay(),getch(),gotoxy(),etc.
#include<ctype.h>//se for toupper(), tolower(),etc
#include<string.h>//Use for strcmp(),strcpy(),strlen(),etc
#include<stdlib.h>

char ans=0; 
int ok;
int b, valid=0;
//FUNCTION DECLERATIONS
void WelcomeScreen(void);//WelcomeScreen function decleration
void Title(void);//Title function decleration
void AttendanceMenu(void);//AttendanceMenu function declaration
void MainMenu(void);//MainMenu function decleration
void StudentMenu(void);//StudentMenu function decleration
void OneMenu(void);//FirstMenu function decleration
void SecondMenu(void);//SecondMenu function decleration
void ThirdMenu(void);//ThirdMenu function decleration
void FourthMenu(void);//FourthMenu function decleration
void FifthMenu(void);//FifthMenu function decleration
void SixthMenu(void);//SixthMenu function decleration
void SeventhMenu(void);//SeventhMenu function decleration
void EighthMenu(void);//EighthMenu function decleration
void OneAttendanceMenu(void);//OneAttendanceMenu function decleration
void TwoAttendanceMenu(void);//TwoAttendanceMenu function decleration
void ThreeAttendanceMenu(void);//ThreeAttendanceMenu function decleration
void FourAttendanceMenu(void);//FourAttendanceMenu function decleration
void FiveAttendanceMenu(void);//FifAttendanceMenu function decleration
void SixAttendanceMenu(void);//SixAttendanceMenu function decleration
void SevenAttendanceMenu(void);//SevenAttendanceMenu function decleration
void EightAttendanceMenu(void);//EightAttendanceMenu function decleration
void OneAttendance_Add(void);
void OneAttendance_List(void);
void OneAttendance_Search(void);
void OneAttendance_Edit(void);
void OneAttendance_Delete(void);
void TwoAttendance_Add(void);
void TwoAttendance_List(void);
void TwoAttendance_Search(void);
void TwoAttendance_Edit(void);
void TwoAttendance_Delete(void);
void ThreeAttendance_Add(void);
void ThreeAttendance_List(void);
void ThreeAttendance_Search(void);
void ThreeAttendance_Edit(void);
void ThreeAttendance_Delete(void);
void FourAttendance_Add(void);
void FourAttendance_List(void);
void FourAttendance_Search(void);
void FourAttendance_Edit(void);
void FourAttendance_Delete(void);
void FiveAttendance_Add(void);
void FiveAttendance_List(void);
void FiveAttendance_Search(void);
void FiveAttendance_Edit(void);
void FiveAttendance_Delete(void);
void SixAttendance_Add(void);
void SixAttendance_List(void);
void SixAttendance_Search(void);
void SixAttendance_Edit(void);
void SixAttendance_Delete(void);
void SevenAttendance_Add(void);
void SevenAttendance_List(void);
void SevenAttendance_Search(void);
void SevenAttendance_Edit(void);
void SevenAttendance_Delete(void);
void EightAttendance_Add(void);
void EightAttendance_List(void);
void EightAttendance_Search(void);
void EightAttendance_Edit(void);
void EightAttendance_Delete(void);

void LoginScreen(void);//LoginScreen function decleration
void One_Add(void);
void One_List(void);
void One_View(void);
void One_Search(void);
void One_Edit(void);
void One_Delete(void);
void Two_Add(void);
void Two_List(void);
void Two_View(void);
void Two_Search(void);
void Two_Edit(void);
void Two_Delete(void);
void Three_Add(void);
void Three_List(void);
void Three_View(void);
void Three_Search(void);
void Three_Edit(void);
void Three_Delete(void);
void Four_Add(void);
void Four_List(void);
void Four_View(void);
void Four_Search(void);
void Four_Edit(void);
void Four_Delete(void);
void Five_Add(void);
void Five_List(void);
void Five_View(void);
void Five_Search(void);
void Five_Edit(void);
void Five_Delete(void);
void Six_Add(void);
void Six_List(void);
void Six_View(void);
void Six_Search(void);
void Six_Edit(void);
void Six_Delete(void);
void Seven_Add(void);
void Seven_List(void);
void Seven_View(void);
void Seven_Search(void);
void Seven_Edit(void);
void Seven_Delete(void);
void Eight_Add(void);
void Eight_List(void);
void Eight_View(void);
void Eight_Search(void);
void Eight_Edit(void);
void Eight_Delete(void);
void ex_it(void);//exit function declaration
//Defines gotoxy() for ANSI C compilers.
void gotoxy(short x, short y)
{
	COORD pos = {x, y};//sets co-ordinates in (x,y).
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

//for Students
struct student
{
 char fname[20];//for student first name
 char lname[20];//for student last name
 char registration[20];//for Registration No number
 char gender;//gender of student
 char age[10];//for age info

 char phone[20];//phone no
 
}s;//Variable of student type

//for attendance
struct attendance
{
	char fname[20];
	char lname[20];
	char usn[20];
	char att1[20];
	char att2[20];
	char att3[20];
	char att4[20];
	char att5[20];
	char att6[20];
	char att7[20];
	char att8[20];
}a;

main(void)
{
	
    WelcomeScreen();//Use to call WelcomeScreen function
    system("cls");
	Title();//Use to call Title function
	LoginScreen();//Use to call Menu function

}
/* ************************************************* Welcome Screen ********************************************* */
void WelcomeScreen(void) //function for welcome screen
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
	printf("        =                  EWIT                     =");
	gotoxy(25,12);
	printf("        =             ISE DEPARTMENT                =");
	gotoxy(25,13);
	printf("        =               ATTENDANCE                  =");
	gotoxy(25,14);
	printf("        =            MANAGEMENT SYSTEM              =");
	gotoxy(25,15);
	printf("        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
	gotoxy(25,16);
	printf("  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
	gotoxy(25,17);
	printf("  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
	gotoxy(28,22);
	printf(" Enter any key to continue.....");
	getch();
	
}
/* ************************************************* Title Screen ********************************************* */
void Title(void)//function for title screen
{
	printf("\n\n\t\t----------------------------------------------------------------------------------");
	printf("\n\t\t\t\t      	             ISE DEPARTMENT         ");
	printf("\n\t\t----------------------------------------------------------------------------------");
}
/* ************************************************* Main Menu ********************************************* */
void MainMenu(void)//function decleration
{
	system("cls");
	int choose;
	Title();// call Title function
	
	printf("\n\n\n\n\t\t\t\t1. Student Information\n");
	printf("\n\t\t\t\t2. Attendance Information\n");
	printf("\n\t\t\t\t3. Exit\n");
	printf("\n\n\n \n\t\t\t\tChoose from 1 to 3:");
	scanf("%i", &choose);
	
	switch(choose)//switch to differeht case
	{
	

    case 1:
    		StudentMenu();
    		break;
	case 2:
			AttendanceMenu();//View_rec function is call
    		break;
	case 3:
			ex_it();//ex_it function is call
    		break;

	default:
		printf("\t\t\tInvalid entry. Please enter right option :)");
		getch();//holds screen
	}//end of switch
		
	
}


/* ************************************************* Student Menu ********************************************* */
void StudentMenu(void)//function decleration
{
	system("cls");
	int choose;
	Title();// call Title function
	printf("\n\n\n\n\n\t\t\t\t1. 1st Sem\n");
	printf("\n\t\t\t\t2. 2nd Sem\n");
	printf("\n\t\t\t\t3. 3rd Sem \n");
	printf("\n\t\t\t\t4. 4th Sem \n");
	printf("\n\t\t\t\t5. 5th Sem\n");
	printf("\n\t\t\t\t6. 6th Sem\n");
	printf("\n\t\t\t\t7. 7th Sem\n");
	printf("\n\t\t\t\t8. 8th Sem\n");
	printf("\n\t\t\t\t9. Back to main menu\n");
	printf("\n\n\n \n\t\t\t\tChoose from 1 to 9:");
	scanf("%i", &choose);
	
	switch(choose)//switch to different case
	{
	
	case 1:
			OneMenu();//Add_rec function is called
    		break;
    case 2:
    		SecondMenu();
    		break;
	case 3:
			ThirdMenu();//View_rec function is call
    		break;
    case 4:
			FourthMenu();//Edit_rec function is call
			break;
	case 5:
			FifthMenu();//Dlt_rec function is call
			break;
	case 6:
			SixthMenu();//ex_it function is call
    		break;
    case 7:
			SeventhMenu();//ex_it function is call
    		break;
    case 8:
			EighthMenu();//ex_it function is call
    		break;
    case 9:
			MainMenu();//ex_it function is call
    		break;

	default:
		printf("\t\t\tInvalid entry. Please enter right option :)");
		getch();//holds screen
	}//end of switch
		
	
}
/* ************************************************* First Sem Menu ********************************************* */
void OneMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("First Sem Records");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add Students");
		gotoxy(20,7);
		printf("2. View Students");
		gotoxy(20,9);
		printf("3. Search Students");
		gotoxy(20,11);
		printf("4. Edit Students Record");
		gotoxy(20,13);
		printf("5. Delete Students");
		gotoxy(20,15);
		printf("6. Back to Student Main menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-6]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						One_Add();
						break;
				case 2:
			    		One_View();
						break;
				case 3:
						One_Search();
						break;
				case 4:
						One_Edit();
						break;
				case 5:
						One_Delete();
						break;
				case 6:
						StudentMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
}
void One_Add(void)
{
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("one.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW STUDENT                     ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ***************************************** Registration ********************************************************************** */	
     
    printf("\n\t\t\tUSN:");
    scanf(" %s",s.registration);


/* ******************************************* First Name ************************************************************** */	    

	A:
	printf("\n\t\t\tFirst Name: ");
	scanf("%s",s.fname);
	s.fname[0]=toupper(s.fname[0]);
	if(strlen(s.fname)>20||strlen(s.fname)<2)
	{
		printf("\n\t Invalid :( \t The max range for first name is 20 and min range is 2 :)");
		goto A;
	}
	else
	{
		for (b=0;b<strlen(s.fname);b++)
		{
			if (isalpha(s.fname[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t First name contain Invalid character :(  Enter again :)");
			goto A;
		}
	}
/* ******************************************* Last Name ************************************************************** */	    
	printf("\n\t\t\tLast Name: ");
    scanf("%s",s.lname);
    
/* ******************************************* Gender ************************************************************** */	    

    	do
		{
	    printf("\n\t\t\tGender[F/M]: ");
		scanf(" %c",&s.gender);
		if(toupper(s.gender)=='M'|| toupper(s.gender)=='F')
		{
			ok =1;
		}
		else 
		{
		ok =0;
		}
        if(!ok)
	    {
	    	printf("\n\t\t Gender contain Invalid character :(  Enter either F or M :)");
    	}
	 }	while(!ok);
/* ***************************************** Age ********************************************************************** */	
    N:
	printf("\n\t\t\tAge:");
    scanf(" %s",s.age);
     if(strlen(s.age)>2)
     {
     	printf("\n\t Invalid :( \t The max range for age is 2 )");
		goto N;
	 }

/* ******************************************* Contact no. ***************************************** */
do
{
	D:
    printf("\n\t\t\tContact no: ");
    scanf("%s",s.phone);
    if(strlen(s.phone)>10||strlen(s.phone)!=10)
	{
		printf("\n\t Sorry :( Invalid. Contact no. must contain 10 numbers. Enter again :)");
		goto D;
	}
	else
	{
		for (b=0;b<strlen(s.phone);b++)
		{
			if (!isalpha(s.phone[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t Contact no. contain Invalid character :(  Enter again :)");
			goto D;
		}
	}
}while(!valid);

	fprintf(ek,"%s %s %s %c %s %s \n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	One_Add();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	One_List();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void One_List(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("one.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!1st Sem Students Record !!!!!!!!!!!!!\n");
		gotoxy(1,8);
		printf("USN");
		gotoxy(20,8);
		printf("Full Name");
		gotoxy(45,8);
		printf("Gender");
		gotoxy(55,8);
		printf("Age");
		gotoxy(65,8);
		printf("Phone No.");
		gotoxy(1,9);
		printf("=================================================================================================================");
		row=10;
		while(fscanf(ek,"%s %s %s %c %s %s   \n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(20,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(45,row);
			printf("%c",s.gender);
			gotoxy(55,row);
			printf("%s",s.age);
			gotoxy(65,row);
			printf("%s",s.phone);
			row++;
		}
		fclose(ek);
		OneAttendance_Add();
}
void One_View(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("one.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!1st Sem Students Record !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("USN");
		gotoxy(20,15);
		printf("Full Name");
		gotoxy(45,15);
		printf("Gender");
		gotoxy(55,15);
		printf("Age");
		gotoxy(65,15);
		printf("Phone No.");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %c %s %s   \n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(20,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(45,row);
			printf("%c",s.gender);
			gotoxy(55,row);
			printf("%s",s.age);
			gotoxy(65,row);
			printf("%s",s.phone);
			row++;
		}
		fclose(ek);
		getch();
		OneMenu();
}
void One_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("one.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Students Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %c %s %s \n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
	{
		if(strcmp(s.registration,name)==0)
		{
		gotoxy(1,15);
		printf("USN");
		gotoxy(20,15);
		printf("Full Name");
		gotoxy(45,15);
		printf("Gender");
		gotoxy(55,15);
		printf("Age");
		gotoxy(65,15);
		printf("Phone No.");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
				gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(20,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(45,row);
			printf("%c",s.gender);
			gotoxy(55,row);
			printf("%s",s.age);
			gotoxy(65,row);
			printf("%s",s.phone);
			break;
		}
	   }
	   if(strcmp(s.registration,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        One_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		OneMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void One_Edit(void)
{
	FILE *ek, *ft;
  	int i,b, valid=0;
  	char ch;
  	char name[20];

  	system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("one.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		OneMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Students Record !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter Student USN : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			OneMenu();
		}
		while(fscanf(ek,"%s %s %s %c %s %s   \n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
		{
			if(strcmp(s.registration, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%s \t%c \t%s \t%s \n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
				gotoxy(12,22);
				printf("Enter New Registration Number: ");
				scanf(" %s",s.registration);	  
				gotoxy(12,24);
				printf("Enter New First Name: ");
				scanf("%s",s.fname);
				gotoxy(12,26);
				printf("Enter Last Name: ");
				scanf("%s",s.lname);
				gotoxy(12,28);
				printf("Enter Gender: ");
				scanf(" %c",&s.gender);
				s.gender=toupper(s.gender);
				gotoxy(12,30);
				printf("Enter age: ");
				scanf(" %s",s.age);
				gotoxy(12,32);
				printf("Enter Contact no: ");
				scanf("%s",s.phone);
			    printf("\nPress U charecter for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
				printf("\n\n\t\t\tStudent record updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	    fclose(ft);
	    fclose(ek);
	    remove("one.txt");
   	    rename("temp2.txt","one.txt");
		getch();
		OneMenu();		
}
void One_Delete()
{
	char name[20];
	int found=0;
	system("cls");
	Title();// call Title function
	FILE *ek, *ft;
	ft=fopen("temp.txt","w+");
	ek=fopen("one.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Students Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);
	
	while (fscanf(ek,"%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
	{
		if (strcmp(s.registration,name)!=0)
		fprintf(ft,"%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
		else 
		{
			printf("%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
		getch();
		OneMenu();
	}
	else
	{
		fclose(ek);
		fclose(ft);
		remove("one.txt");
		rename("temp.txt","one.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		OneMenu();
	}
}	

/* ************************************************* Second Sem Menu ********************************************* */
void SecondMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Second Sem Records");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add Students");
		gotoxy(20,7);
		printf("2. View Students");
		gotoxy(20,9);
		printf("3. Search Students");
		gotoxy(20,11);
		printf("4. Edit Students Record");
		gotoxy(20,13);
		printf("5. Delete Students");
		gotoxy(20,15);
		printf("6. Back to Student Main menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-6]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						Two_Add();
						break;
				case 2:
			    		Two_View();
						break;
				case 3:
						Two_Search();
						break;
				case 4:
						Two_Edit();
						break;
				case 5:
						Two_Delete();
						break;
				case 6:
						StudentMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
}

void Two_Add(void)
{
system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("two.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW STUDENT                     ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ***************************************** Registration ********************************************************************** */	
     
    printf("\n\t\t\tUSN:");
    scanf(" %s",s.registration);

/* ******************************************* First Name ************************************************************** */	    

	A:
	printf("\n\t\t\tFirst Name: ");
	scanf("%s",s.fname);
	s.fname[0]=toupper(s.fname[0]);
	if(strlen(s.fname)>20||strlen(s.fname)<2)
	{
		printf("\n\t Invalid :( \t The max range for first name is 20 and min range is 2 :)");
		goto A;
	}
	else
	{
		for (b=0;b<strlen(s.fname);b++)
		{
			if (isalpha(s.fname[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t First name contain Invalid character :(  Enter again :)");
			goto A;
		}
	}
/* ******************************************* Last Name ************************************************************** */	    
	printf("\n\t\t\tLast Name: ");
    scanf("%s",s.lname);
    
/* ******************************************* Gender ************************************************************** */	    

    	do
		{
	    printf("\n\t\t\tGender[F/M]: ");
		scanf(" %c",&s.gender);
		if(toupper(s.gender)=='M'|| toupper(s.gender)=='F')
		{
			ok =1;
		}
		else 
		{
		ok =0;
		}
        if(!ok)
	    {
	    	printf("\n\t\t Gender contain Invalid character :(  Enter either F or M :)");
    	}
	 }	while(!ok);
/* ***************************************** Age ********************************************************************** */	
   N:
	printf("\n\t\t\tAge:");
    scanf(" %s",s.age);
     if(strlen(s.age)>2)
     {
     	printf("\n\t Invalid :( \t The max range for age is 2 )");
		goto N;
	 }

/* ******************************************* Contact no. ***************************************** */
do
{
	D:
    printf("\n\t\t\tContact no: ");
    scanf("%s",s.phone);
    if(strlen(s.phone)>10||strlen(s.phone)!=10)
	{
		printf("\n\t Sorry :( Invalid. Contact no. must contain 10 numbers. Enter again :)");
		goto D;
	}
	else
	{
		for (b=0;b<strlen(s.phone);b++)
		{
			if (!isalpha(s.phone[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t Contact no. contain Invalid character :(  Enter again :)");
			goto D;
		}
	}
}while(!valid);

	fprintf(ek,"%s %s %s %c %s %s \n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	Two_Add();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	Two_List();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void Two_List(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("two.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!2nd Sem Students Record !!!!!!!!!!!!!\n");
			gotoxy(1,8);
		printf("USN");
		gotoxy(20,8);
		printf("Full Name");
		gotoxy(45,8);
		printf("Gender");
		gotoxy(55,8);
		printf("Age");
		gotoxy(65,8);
		printf("Phone No.");
		gotoxy(1,9);
		printf("=================================================================================================================");
		row=10;
		while(fscanf(ek,"%s %s %s %c %s %s   \n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(20,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(45,row);
			printf("%c",s.gender);
			gotoxy(55,row);
			printf("%s",s.age);
			gotoxy(65,row);
			printf("%s",s.phone);
			row++;
		}
		fclose(ek);
		TwoAttendance_Add();	
}
void Two_View(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("two.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!2nd Sem Students Record !!!!!!!!!!!!!\n");
			gotoxy(1,15);
		printf("USN");
		gotoxy(20,15);
		printf("Full Name");
		gotoxy(45,15);
		printf("Gender");
		gotoxy(55,15);
		printf("Age");
		gotoxy(65,15);
		printf("Phone No.");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %c %s %s   \n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(20,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(45,row);
			printf("%c",s.gender);
			gotoxy(55,row);
			printf("%i",s.age);
			gotoxy(65,row);
			printf("%s",s.phone);
			row++;
		}
		fclose(ek);
		getch();
		SecondMenu();	
}
void Two_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("two.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Students Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %c %s %s \n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
	{
		if(strcmp(s.registration,name)==0)
		{
		gotoxy(1,15);
		printf("USN");
		gotoxy(20,15);
		printf("Full Name");
		gotoxy(45,15);
		printf("Gender");
		gotoxy(55,15);
		printf("Age");
		gotoxy(65,15);
		printf("Phone No.");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
				gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(20,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(45,row);
			printf("%c",s.gender);
			gotoxy(55,row);
			printf("%s",s.age);
			gotoxy(65,row);
			printf("%s",s.phone);
			break;
		}
	   }
	   if(strcmp(s.registration,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        Two_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		SecondMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void Two_Edit(void)
{
FILE *ek, *ft;
  	int i,b, valid=0;
  	char ch;
  	char name[20];

  	system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("two.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		SecondMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Students Record !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter Student USN : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			SecondMenu();
		}
		while(fscanf(ek,"%s %s %s %c %s %s   \n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
		{
			if(strcmp(s.registration, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%s \t%c \t%s \t%s \n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
				gotoxy(12,22);
				printf("Enter New Registration Number: ");
				scanf(" %s",s.registration);	  
				gotoxy(12,24);
				printf("Enter New First Name: ");
				scanf("%s",s.fname);
				gotoxy(12,26);
				printf("Enter Last Name: ");
				scanf("%s",s.lname);
				gotoxy(12,28);
				printf("Enter Gender: ");
				scanf(" %c",&s.gender);
				s.gender=toupper(s.gender);
				gotoxy(12,30);
				printf("Enter age: ");
				scanf(" %s",s.age);
				gotoxy(12,32);
				printf("Enter Contact no: ");
				scanf("%s",s.phone);
			    printf("\nPress U charecter for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
				printf("\n\n\t\t\tStudent record updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	    fclose(ft);
	    fclose(ek);
	    remove("two.txt");
   	    rename("temp2.txt","two.txt");
		getch();
		SecondMenu();		
}
void Two_Delete()
{
	char name[20];
	int found=0;
	system("cls");
	Title();// call Title function
	FILE *ek, *ft;
	ft=fopen("temp.txt","w+");
	ek=fopen("two.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Students Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);
	
	while (fscanf(ek,"%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
	{
		if (strcmp(s.registration,name)!=0)
		fprintf(ft,"%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
		else 
		{
			printf("%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
		getch();
		SecondMenu();
	}
	else
	{
		fclose(ek);
		fclose(ft);
		remove("two.txt");
		rename("temp.txt","two.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		SecondMenu();
	}
}

/* ************************************************* Third Sem Menu ********************************************* */
void ThirdMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Third Sem Records");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add Students");
		gotoxy(20,7);
		printf("2. View Students");
		gotoxy(20,9);
		printf("3. Search Students");
		gotoxy(20,11);
		printf("4. Edit Students Record");
		gotoxy(20,13);
		printf("5. Delete Students");
		gotoxy(20,15);
		printf("6. Back to Student Main menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-6]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						Three_Add();
						break;
				case 2:
			    		Three_View();
						break;
				case 3:
						Three_Search();
						break;
				case 4:
						Three_Edit();
						break;
				case 5:
						Three_Delete();
						break;
				case 6:
						StudentMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
	
}
void Three_Add(void)
{
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("three.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW STUDENT                     ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ***************************************** Registration ********************************************************************** */	
     
    printf("\n\t\t\tUSN:");
    scanf(" %s",s.registration);

/* ******************************************* First Name ************************************************************** */	    

	A:
	printf("\n\t\t\tFirst Name: ");
	scanf("%s",s.fname);
	s.fname[0]=toupper(s.fname[0]);
	if(strlen(s.fname)>20||strlen(s.fname)<2)
	{
		printf("\n\t Invalid :( \t The max range for first name is 20 and min range is 2 :)");
		goto A;
	}
	else
	{
		for (b=0;b<strlen(s.fname);b++)
		{
			if (isalpha(s.fname[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t First name contain Invalid character :(  Enter again :)");
			goto A;
		}
	}
/* ******************************************* Last Name ************************************************************** */	    
	printf("\n\t\t\tLast Name: ");
    scanf("%s",s.lname);
    
/* ******************************************* Gender ************************************************************** */	    

    	do
		{
	    printf("\n\t\t\tGender[F/M]: ");
		scanf(" %c",&s.gender);
		if(toupper(s.gender)=='M'|| toupper(s.gender)=='F')
		{
			ok =1;
		}
		else 
		{
		ok =0;
		}
        if(!ok)
	    {
	    	printf("\n\t\t Gender contain Invalid character :(  Enter either F or M :)");
    	}
	 }	while(!ok);
/* ***************************************** Age ********************************************************************** */	
    N:
	printf("\n\t\t\tAge:");
    scanf(" %s",s.age);
     if(strlen(s.age)>2)
     {
     	printf("\n\t Invalid :( \t The max range for age is 2 )");
		goto N;
	 }

/* ******************************************* Contact no. ***************************************** */
do
{
	D:
    printf("\n\t\t\tContact no: ");
    scanf("%s",s.phone);
    if(strlen(s.phone)>10||strlen(s.phone)!=10)
	{
		printf("\n\t Sorry :( Invalid. Contact no. must contain 10 numbers. Enter again :)");
		goto D;
	}
	else
	{
		for (b=0;b<strlen(s.phone);b++)
		{
			if (!isalpha(s.phone[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t Contact no. contain Invalid character :(  Enter again :)");
			goto D;
		}
	}
}while(!valid);

	fprintf(ek,"%s %s %s %c %s %s \n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	Three_Add();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	Three_List();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void Three_List(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("three.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!3rd Sem Students Record !!!!!!!!!!!!!\n");
		gotoxy(1,8);
		printf("USN");
		gotoxy(20,8);
		printf("Full Name");
		gotoxy(45,8);
		printf("Gender");
		gotoxy(55,8);
		printf("Age");
		gotoxy(65,8);
		printf("Phone No.");
		gotoxy(1,9);
		printf("=================================================================================================================");
		row=10;
		while(fscanf(ek,"%s %s %s %c %s %s   \n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(20,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(45,row);
			printf("%c",s.gender);
			gotoxy(55,row);
			printf("%s",s.age);
			gotoxy(65,row);
			printf("%s",s.phone);
			row++;
		}
		fclose(ek);
		ThreeAttendance_Add();
}
void Three_View(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("three.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!3rd Sem Students Record !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("USN");
		gotoxy(20,15);
		printf("Full Name");
		gotoxy(45,15);
		printf("Gender");
		gotoxy(55,15);
		printf("Age");
		gotoxy(65,15);
		printf("Phone No.");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %c %s %s   \n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(20,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(45,row);
			printf("%c",s.gender);
			gotoxy(55,row);
			printf("%s",s.age);
			gotoxy(65,row);
			printf("%s",s.phone);
			row++;
		}
		fclose(ek);
		getch();
		ThirdMenu();
}
void Three_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("three.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Students Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %c %s %s \n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
	{
		if(strcmp(s.registration,name)==0)
		{
		gotoxy(1,15);
		printf("USN");
		gotoxy(20,15);
		printf("Full Name");
		gotoxy(45,15);
		printf("Gender");
		gotoxy(55,15);
		printf("Age");
		gotoxy(65,15);
		printf("Phone No.");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
				gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(20,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(45,row);
			printf("%c",s.gender);
			gotoxy(55,row);
			printf("%s",s.age);
			gotoxy(65,row);
			printf("%s",s.phone);
			break;
		}
	   }
	   if(strcmp(s.registration,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        Three_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		ThirdMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void Three_Edit(void)
{
	FILE *ek, *ft;
  	int i,b, valid=0;
  	char ch;
  	char name[20];

  	system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("three.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		ThirdMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Students Record !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter Student USN : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			ThirdMenu();
		}
		while(fscanf(ek,"%s %s %s %c %s %s   \n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
		{
			if(strcmp(s.registration, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%s \t%c \t%s \t%s \n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
				gotoxy(12,22);
				printf("Enter New Registration Number: ");
				scanf(" %s",s.registration);	  
				gotoxy(12,24);
				printf("Enter New First Name: ");
				scanf("%s",s.fname);
				gotoxy(12,26);
				printf("Enter Last Name: ");
				scanf("%s",s.lname);
				gotoxy(12,28);
				printf("Enter Gender: ");
				scanf(" %c",&s.gender);
				s.gender=toupper(s.gender);
				gotoxy(12,30);
				printf("Enter age: ");
				scanf(" %s",s.age);
				gotoxy(12,32);
				printf("Enter Contact no: ");
				scanf("%s",s.phone);
			    printf("\nPress U charecter for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
				printf("\n\n\t\t\tStudent record updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	    fclose(ft);
	    fclose(ek);
	    remove("three.txt");
   	    rename("temp2.txt","three.txt");
		getch();
		ThirdMenu();		
}
void Three_Delete()
{
	char name[20];
	int found=0;
	system("cls");
	Title();// call Title function
	FILE *ek, *ft;
	ft=fopen("temp.txt","w+");
	ek=fopen("three.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Students Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);
	
	while (fscanf(ek,"%s %s %s %c %s %s\n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
	{
		if (strcmp(s.registration,name)!=0)
		fprintf(ft,"%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
		else 
		{
			printf("%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
		getch();
		ThirdMenu();
	}
	else
	{
		fclose(ek);
		fclose(ft);
		remove("three.txt");
		rename("temp.txt","three.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		ThirdMenu();
	}
}

/* ************************************************* Fourth Sem Menu ********************************************* */
void FourthMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Fourth Sem Records");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add Students");
		gotoxy(20,7);
		printf("2. View Students");
		gotoxy(20,9);
		printf("3. Search Students");
		gotoxy(20,11);
		printf("4. Edit Students Record");
		gotoxy(20,13);
		printf("5. Delete Students");
		gotoxy(20,15);
		printf("6. Back to Student Main menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-6]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						Four_Add();
						break;
				case 2:
			    		Four_View();
						break;
				case 3:
						Four_Search();
						break;
				case 4:
						Four_Edit();
						break;
				case 5:
						Four_Delete();
						break;
				case 6:
						StudentMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
	
}
void Four_Add(void)
{
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("four.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW STUDENT                     ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ***************************************** Registration ********************************************************************** */	
     
    printf("\n\t\t\tUSN:");
    scanf(" %s",s.registration);

/* ******************************************* First Name ************************************************************** */	    

	A:
	printf("\n\t\t\tFirst Name: ");
	scanf("%s",s.fname);
	s.fname[0]=toupper(s.fname[0]);
	if(strlen(s.fname)>20||strlen(s.fname)<2)
	{
		printf("\n\t Invalid :( \t The max range for first name is 20 and min range is 2 :)");
		goto A;
	}
	else
	{
		for (b=0;b<strlen(s.fname);b++)
		{
			if (isalpha(s.fname[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t First name contain Invalid character :(  Enter again :)");
			goto A;
		}
	}
/* ******************************************* Last Name ************************************************************** */	    
	printf("\n\t\t\tLast Name: ");
    scanf("%s",s.lname);
    
/* ******************************************* Gender ************************************************************** */	    

    	do
		{
	    printf("\n\t\t\tGender[F/M]: ");
		scanf(" %c",&s.gender);
		if(toupper(s.gender)=='M'|| toupper(s.gender)=='F')
		{
			ok =1;
		}
		else 
		{
		ok =0;
		}
        if(!ok)
	    {
	    	printf("\n\t\t Gender contain Invalid character :(  Enter either F or M :)");
    	}
	 }	while(!ok);
/* ***************************************** Age ********************************************************************** */	
    N:
	printf("\n\t\t\tAge:");
    scanf(" %s",s.age);
     if(strlen(s.age)>2)
     {
     	printf("\n\t Invalid :( \t The max range for age is 2 )");
		goto N;
	 }
/* ******************************************* Contact no. ***************************************** */
do
{
	D:
    printf("\n\t\t\tContact no: ");
    scanf("%s",s.phone);
    if(strlen(s.phone)>10||strlen(s.phone)!=10)
	{
		printf("\n\t Sorry :( Invalid. Contact no. must contain 10 numbers. Enter again :)");
		goto D;
	}
	else
	{
		for (b=0;b<strlen(s.phone);b++)
		{
			if (!isalpha(s.phone[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t Contact no. contain Invalid character :(  Enter again :)");
			goto D;
		}
	}
}while(!valid);

	fprintf(ek,"%s %s %s %c %s %s \n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	Four_Add();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	Four_List();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void Four_List(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("four.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!4th Sem Students Record !!!!!!!!!!!!!\n");
			gotoxy(1,8);
		printf("USN");
		gotoxy(20,8);
		printf("Full Name");
		gotoxy(45,8);
		printf("Gender");
		gotoxy(55,8);
		printf("Age");
		gotoxy(65,8);
		printf("Phone No.");
		gotoxy(1,9);
		printf("=================================================================================================================");
		row=10;
		while(fscanf(ek,"%s %s %s %c %s %s   \n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(20,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(45,row);
			printf("%c",s.gender);
			gotoxy(55,row);
			printf("%s",s.age);
			gotoxy(65,row);
			printf("%s",s.phone);
			row++;
		}
		fclose(ek);
		FourAttendance_Add();
}
void Four_View(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("four.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!4th Sem Students Record !!!!!!!!!!!!!\n");
			gotoxy(1,15);
		printf("USN");
		gotoxy(20,15);
		printf("Full Name");
		gotoxy(45,15);
		printf("Gender");
		gotoxy(55,15);
		printf("Age");
		gotoxy(65,15);
		printf("Phone No.");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %c %s %s   \n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(20,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(45,row);
			printf("%c",s.gender);
			gotoxy(55,row);
			printf("%s",s.age);
			gotoxy(65,row);
			printf("%s",s.phone);
			row++;
		}
		fclose(ek);
		getch();
		FourthMenu();
}
void Four_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("four.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Students Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %c %s %s \n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
	{
		if(strcmp(s.registration,name)==0)
		{
		gotoxy(1,15);
		printf("USN");
		gotoxy(20,15);
		printf("Full Name");
		gotoxy(45,15);
		printf("Gender");
		gotoxy(55,15);
		printf("Age");
		gotoxy(65,15);
		printf("Phone No.");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
				gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(20,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(45,row);
			printf("%c",s.gender);
			gotoxy(55,row);
			printf("%s",s.age);
			gotoxy(65,row);
			printf("%s",s.phone);
			break;
		}
	   }
	   if(strcmp(s.registration,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        Four_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		FourthMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void Four_Edit(void)
{
	FILE *ek, *ft;
  	int i,b, valid=0;
  	char ch;
  	char name[20];

  	system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("four.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		FourthMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Students Record !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter Student USN : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			FourthMenu();
		}
		while(fscanf(ek,"%s %s %s %c %s %s   \n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
		{
			if(strcmp(s.registration, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%s \t%c \t%s \t%s \n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
				gotoxy(12,22);
				printf("Enter New Registration Number: ");
				scanf(" %s",s.registration);	  
				gotoxy(12,24);
				printf("Enter New First Name: ");
				scanf("%s",s.fname);
				gotoxy(12,26);
				printf("Enter Last Name: ");
				scanf("%s",s.lname);
				gotoxy(12,28);
				printf("Enter Gender: ");
				scanf(" %c",&s.gender);
				s.gender=toupper(s.gender);
				gotoxy(12,30);
				printf("Enter age: ");
				scanf(" %s",s.age);
				gotoxy(12,32);
				printf("Enter Contact no: ");
				scanf("%s",s.phone);
			    printf("\nPress U charecter for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
				printf("\n\n\t\t\tStudent record updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	    fclose(ft);
	    fclose(ek);
	    remove("four.txt");
   	    rename("temp2.txt","four.txt");
		getch();
		FourthMenu();		
}
void Four_Delete()
{
	char name[20];
	int found=0;
	system("cls");
	Title();// call Title function
	FILE *ek, *ft;
	ft=fopen("temp.txt","w+");
	ek=fopen("four.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Students Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);
	
	while (fscanf(ek,"%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
	{
		if (strcmp(s.registration,name)!=0)
		fprintf(ft,"%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
		else 
		{
			printf("%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
		getch();
		FourthMenu();
	}
	else
	{
		fclose(ek);
		fclose(ft);
		remove("four.txt");
		rename("temp.txt","four.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		FourthMenu();
	}
}

/* ************************************************* Fifth Sem Menu ********************************************* */
void FifthMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Fifth Sem Records");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add Students");
		gotoxy(20,7);
		printf("2. View Students");
		gotoxy(20,9);
		printf("3. Search Students");
		gotoxy(20,11);
		printf("4. Edit Students Record");
		gotoxy(20,13);
		printf("5. Delete Students");
		gotoxy(20,15);
		printf("6. Back to Student Main menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-6]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						Five_Add();
						break;
				case 2:
			    		Five_View();
						break;
				case 3:
						Five_Search();
						break;
				case 4:
						Five_Edit();
						break;
				case 5:
						Five_Delete();
						break;
				case 6:
						StudentMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
	
}
void Five_Add(void)
{
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("five.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW STUDENT                     ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ***************************************** Registration ********************************************************************** */	
     
    printf("\n\t\t\tUSN:");
    scanf(" %s",s.registration);

/* ******************************************* First Name ************************************************************** */	    

	A:
	printf("\n\t\t\tFirst Name: ");
	scanf("%s",s.fname);
	s.fname[0]=toupper(s.fname[0]);
	if(strlen(s.fname)>20||strlen(s.fname)<2)
	{
		printf("\n\t Invalid :( \t The max range for first name is 20 and min range is 2 :)");
		goto A;
	}
	else
	{
		for (b=0;b<strlen(s.fname);b++)
		{
			if (isalpha(s.fname[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t First name contain Invalid character :(  Enter again :)");
			goto A;
		}
	}
/* ******************************************* Last Name ************************************************************** */	    
	printf("\n\t\t\tLast Name: ");
    scanf("%s",s.lname);
    
/* ******************************************* Gender ************************************************************** */	    

    	do
		{
	    printf("\n\t\t\tGender[F/M]: ");
		scanf(" %c",&s.gender);
		if(toupper(s.gender)=='M'|| toupper(s.gender)=='F')
		{
			ok =1;
		}
		else 
		{
		ok =0;
		}
        if(!ok)
	    {
	    	printf("\n\t\t Gender contain Invalid character :(  Enter either F or M :)");
    	}
	 }	while(!ok);
/* ***************************************** Age ********************************************************************** */	
   N:
	printf("\n\t\t\tAge:");
    scanf(" %s",s.age);
     if(strlen(s.age)>2)
     {
     	printf("\n\t Invalid :( \t The max range for age is 2 )");
		goto N;
	 }

/* ******************************************* Contact no. ***************************************** */
do
{
	D:
    printf("\n\t\t\tContact no: ");
    scanf("%s",s.phone);
    if(strlen(s.phone)>10||strlen(s.phone)!=10)
	{
		printf("\n\t Sorry :( Invalid. Contact no. must contain 10 numbers. Enter again :)");
		goto D;
	}
	else
	{
		for (b=0;b<strlen(s.phone);b++)
		{
			if (!isalpha(s.phone[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t Contact no. contain Invalid character :(  Enter again :)");
			goto D;
		}
	}
}while(!valid);

	fprintf(ek,"%s %s %s %c %s %s \n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	Five_Add();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	Five_List();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void Five_List(void)
{
 	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("five.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!5th Sem Students Record !!!!!!!!!!!!!\n");
		gotoxy(1,8);
		printf("USN");
		gotoxy(20,8);
		printf("Full Name");
		gotoxy(45,8);
		printf("Gender");
		gotoxy(55,8);
		printf("Age");
		gotoxy(65,8);
		printf("Phone No.");
		gotoxy(1,9);
		printf("=================================================================================================================");
		row=10;
		while(fscanf(ek,"%s %s %s %c %s %s   \n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(20,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(45,row);
			printf("%c",s.gender);
			gotoxy(55,row);
			printf("%s",s.age);
			gotoxy(65,row);
			printf("%s",s.phone);
			row++;
		}
		fclose(ek);
		FiveAttendance_Add();	
}
void Five_View(void)
{
 	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("five.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!5th Sem Students Record !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("USN");
		gotoxy(20,15);
		printf("Full Name");
		gotoxy(45,15);
		printf("Gender");
		gotoxy(55,15);
		printf("Age");
		gotoxy(65,15);
		printf("Phone No.");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %c %s %s   \n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(20,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(45,row);
			printf("%c",s.gender);
			gotoxy(55,row);
			printf("%s",s.age);
			gotoxy(65,row);
			printf("%s",s.phone);
			row++;
		}
		fclose(ek);
		getch();
		FifthMenu();	
}
void Five_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("five.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Students Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %c %s %s \n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
	{
		if(strcmp(s.registration,name)==0)
		{
		gotoxy(1,15);
		printf("USN");
		gotoxy(20,15);
		printf("Full Name");
		gotoxy(45,15);
		printf("Gender");
		gotoxy(55,15);
		printf("Age");
		gotoxy(65,15);
		printf("Phone No.");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
				gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(20,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(45,row);
			printf("%c",s.gender);
			gotoxy(55,row);
			printf("%s",s.age);
			gotoxy(65,row);
			printf("%s",s.phone);
			break;
		}
	   }
	   if(strcmp(s.registration,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        Five_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		FifthMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void Five_Edit(void)
{
	FILE *ek, *ft;
  	int i,b, valid=0;
  	char ch;
  	char name[20];

  	system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("five.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		FifthMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Students Record !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter Student USN : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			FifthMenu();
		}
		while(fscanf(ek,"%s %s %s %c %s %s   \n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
		{
			if(strcmp(s.registration, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%s \t%c \t%s \t%s \n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
				gotoxy(12,22);
				printf("Enter New Registration Number: ");
				scanf(" %s",s.registration);	  
				gotoxy(12,24);
				printf("Enter New First Name: ");
				scanf("%s",s.fname);
				gotoxy(12,26);
				printf("Enter Last Name: ");
				scanf("%s",s.lname);
				gotoxy(12,28);
				printf("Enter Gender: ");
				scanf(" %c",&s.gender);
				s.gender=toupper(s.gender);
				gotoxy(12,30);
				printf("Enter age: ");
				scanf(" %s",s.age);
				gotoxy(12,32);
				printf("Enter Contact no: ");
				scanf("%s",s.phone);
			    printf("\nPress U charecter for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
				printf("\n\n\t\t\tStudent record updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	    fclose(ft);
	    fclose(ek);
	    remove("five.txt");
   	    rename("temp2.txt","five.txt");
		getch();
		FifthMenu();		
}
void Five_Delete()
{
	char name[20];
	int found=0;
	system("cls");
	Title();// call Title function
	FILE *ek, *ft;
	ft=fopen("temp.txt","w+");
	ek=fopen("five.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Students Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);
	
	while (fscanf(ek,"%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
	{
		if (strcmp(s.registration,name)!=0)
		fprintf(ft,"%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
		else 
		{
			printf("%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
		getch();
		FifthMenu();
	}
	else
	{
		fclose(ek);
		fclose(ft);
		remove("five.txt");
		rename("temp.txt","five.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		FifthMenu();
	}
}

/* ************************************************* Sixth Sem Menu ********************************************* */
void SixthMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Sixth Sem Records");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add Students");
		gotoxy(20,7);
		printf("2. View Students");
		gotoxy(20,9);
		printf("3. Search Students");
		gotoxy(20,11);
		printf("4. Edit Students Record");
		gotoxy(20,13);
		printf("5. Delete Students");
		gotoxy(20,15);
		printf("6. Back to Student Main menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-6]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						Six_Add();
						break;
				case 2:
			    		Six_View();
						break;
				case 3:
						Six_Search();
						break;
				case 4:
						Six_Edit();
						break;
				case 5:
						Six_Delete();
						break;
				case 6:
						StudentMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
	
}
void Six_Add(void)
{
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("six.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW STUDENT                     ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ***************************************** Registration ********************************************************************** */	
     
    printf("\n\t\t\tUSN:");
    scanf(" %s",s.registration);

/* ******************************************* First Name ************************************************************** */	    

	A:
	printf("\n\t\t\tFirst Name: ");
	scanf("%s",s.fname);
	s.fname[0]=toupper(s.fname[0]);
	if(strlen(s.fname)>20||strlen(s.fname)<2)
	{
		printf("\n\t Invalid :( \t The max range for first name is 20 and min range is 2 :)");
		goto A;
	}
	else
	{
		for (b=0;b<strlen(s.fname);b++)
		{
			if (isalpha(s.fname[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t First name contain Invalid character :(  Enter again :)");
			goto A;
		}
	}
/* ******************************************* Last Name ************************************************************** */	    
	printf("\n\t\t\tLast Name: ");
    scanf("%s",s.lname);
    
/* ******************************************* Gender ************************************************************** */	    

    	do
		{
	    printf("\n\t\t\tGender[F/M]: ");
		scanf(" %c",&s.gender);
		if(toupper(s.gender)=='M'|| toupper(s.gender)=='F')
		{
			ok =1;
		}
		else 
		{
		ok =0;
		}
        if(!ok)
	    {
	    	printf("\n\t\t Gender contain Invalid character :(  Enter either F or M :)");
    	}
	 }	while(!ok);
/* ***************************************** Age ********************************************************************** */	
    N:
	printf("\n\t\t\tAge:");
    scanf(" %s",s.age);
     if(strlen(s.age)>2)
     {
     	printf("\n\t Invalid :( \t The max range for age is 2 )");
		goto N;
	 }

/* ******************************************* Contact no. ***************************************** */
do
{
	D:
    printf("\n\t\t\tContact no: ");
    scanf("%s",s.phone);
    if(strlen(s.phone)>10||strlen(s.phone)!=10)
	{
		printf("\n\t Sorry :( Invalid. Contact no. must contain 10 numbers. Enter again :)");
		goto D;
	}
	else
	{
		for (b=0;b<strlen(s.phone);b++)
		{
			if (!isalpha(s.phone[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t Contact no. contain Invalid character :(  Enter again :)");
			goto D;
		}
	}
}while(!valid);

	fprintf(ek,"%s %s %s %c %s %s \n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	Six_Add();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	Six_List();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void Six_List(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("six.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!6th Sem Students Record !!!!!!!!!!!!!\n");
		gotoxy(1,8);
		printf("USN");
		gotoxy(20,8);
		printf("Full Name");
		gotoxy(45,8);
		printf("Gender");
		gotoxy(55,8);
		printf("Age");
		gotoxy(65,8);
		printf("Phone No.");
		gotoxy(1,9);
		printf("=================================================================================================================");
		row=10;
		while(fscanf(ek,"%s %s %s %c %s %s   \n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(20,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(45,row);
			printf("%c",s.gender);
			gotoxy(55,row);
			printf("%s",s.age);
			gotoxy(65,row);
			printf("%s",s.phone);
			row++;
		}
		fclose(ek);
		SixAttendance_Add();
}
void Six_View(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("six.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!6th Sem Students Record !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("USN");
		gotoxy(20,15);
		printf("Full Name");
		gotoxy(45,15);
		printf("Gender");
		gotoxy(55,15);
		printf("Age");
		gotoxy(65,15);
		printf("Phone No.");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %c %s %s   \n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(20,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(45,row);
			printf("%c",s.gender);
			gotoxy(55,row);
			printf("%s",s.age);
			gotoxy(65,row);
			printf("%s",s.phone);
			row++;
		}
		fclose(ek);
		getch();
		SixthMenu();
}
void Six_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("six.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Students Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
printf("\n Enter Student USN to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %c %s %s \n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
	{
		if(strcmp(s.registration,name)==0)
		{
		gotoxy(1,15);
		printf("USN");
		gotoxy(20,15);
		printf("Full Name");
		gotoxy(45,15);
		printf("Gender");
		gotoxy(55,15);
		printf("Age");
		gotoxy(65,15);
		printf("Phone No.");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
				gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(20,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(45,row);
			printf("%c",s.gender);
			gotoxy(55,row);
			printf("%s",s.age);
			gotoxy(65,row);
			printf("%s",s.phone);
			break;
		}
	   }
	   if(strcmp(s.registration,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        Six_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		SixthMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void Six_Edit(void)
{
	FILE *ek, *ft;
  	int i,b, valid=0;
  	char ch;
  	char name[20];

  	system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("six.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		SixthMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Students Record !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter Student USN : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			SixthMenu();
		}
		while(fscanf(ek,"%s %s %s %c %s %s   \n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
		{
			if(strcmp(s.registration, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%s \t%c \t%s \t%s \n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
				gotoxy(12,22);
				printf("Enter New Registration Number: ");
				scanf(" %s",s.registration);	  
				gotoxy(12,24);
				printf("Enter New First Name: ");
				scanf("%s",s.fname);
				gotoxy(12,26);
				printf("Enter Last Name: ");
				scanf("%s",s.lname);
				gotoxy(12,28);
				printf("Enter Gender: ");
				scanf(" %c",&s.gender);
				s.gender=toupper(s.gender);
				gotoxy(12,30);
				printf("Enter age: ");
				scanf(" %s",s.age);
				gotoxy(12,32);
				printf("Enter Contact no: ");
				scanf("%s",s.phone);
			    printf("\nPress U charecter for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
				printf("\n\n\t\t\tStudent record updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	    fclose(ft);
	    fclose(ek);
	    remove("six.txt");
   	    rename("temp2.txt","six.txt");
		getch();
		SixthMenu();		
}
void Six_Delete()
{
	char name[20];
	int found=0;
	system("cls");
	Title();// call Title function
	FILE *ek, *ft;
	ft=fopen("temp.txt","w+");
	ek=fopen("six.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Students Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);
	
	while (fscanf(ek,"%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
	{
		if (strcmp(s.registration,name)!=0)
		fprintf(ft,"%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
		else 
		{
			printf("%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
		getch();
		SixthMenu();
	}
	else
	{
		fclose(ek);
		fclose(ft);
		remove("six.txt");
		rename("temp.txt","six.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		SixthMenu();
	}
}

/* ************************************************* Seventh Sem Menu ********************************************* */
void SeventhMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Seventh Sem Records");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add Students");
		gotoxy(20,7);
		printf("2. View Students");
		gotoxy(20,9);
		printf("3. Search Students");
		gotoxy(20,11);
		printf("4. Edit Students Record");
		gotoxy(20,13);
		printf("5. Delete Students");
		gotoxy(20,15);
		printf("6. Back to Student Main menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-6]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						Seven_Add();
						break;
				case 2:
			    		Seven_View();
						break;
				case 3:
						Seven_Search();
						break;
				case 4:
						Seven_Edit();
						break;
				case 5:
						Seven_Delete();
						break;
				case 6:
						StudentMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
	
}
void Seven_Add(void)
{
system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("seven.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW STUDENT                     ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ***************************************** Registration ********************************************************************** */	
     
    printf("\n\t\t\tUSN:");
    scanf(" %s",s.registration);

/* ******************************************* First Name ************************************************************** */	    

	A:
	printf("\n\t\t\tFirst Name: ");
	scanf("%s",s.fname);
	s.fname[0]=toupper(s.fname[0]);
	if(strlen(s.fname)>20||strlen(s.fname)<2)
	{
		printf("\n\t Invalid :( \t The max range for first name is 20 and min range is 2 :)");
		goto A;
	}
	else
	{
		for (b=0;b<strlen(s.fname);b++)
		{
			if (isalpha(s.fname[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t First name contain Invalid character :(  Enter again :)");
			goto A;
		}
	}
/* ******************************************* Last Name ************************************************************** */	    
	printf("\n\t\t\tLast Name: ");
    scanf("%s",s.lname);
    
/* ******************************************* Gender ************************************************************** */	    

    	do
		{
	    printf("\n\t\t\tGender[F/M]: ");
		scanf(" %c",&s.gender);
		if(toupper(s.gender)=='M'|| toupper(s.gender)=='F')
		{
			ok =1;
		}
		else 
		{
		ok =0;
		}
        if(!ok)
	    {
	    	printf("\n\t\t Gender contain Invalid character :(  Enter either F or M :)");
    	}
	 }	while(!ok);
/* ***************************************** Age ********************************************************************** */	
    N:
	printf("\n\t\t\tAge:");
    scanf(" %s",s.age);
     if(strlen(s.age)>2)
     {
     	printf("\n\t Invalid :( \t The max range for age is 2 )");
		goto N;
	 }
/* ******************************************* Contact no. ***************************************** */
do
{
	D:
    printf("\n\t\t\tContact no: ");
    scanf("%s",s.phone);
    if(strlen(s.phone)>10||strlen(s.phone)!=10)
	{
		printf("\n\t Sorry :( Invalid. Contact no. must contain 10 numbers. Enter again :)");
		goto D;
	}
	else
	{
		for (b=0;b<strlen(s.phone);b++)
		{
			if (!isalpha(s.phone[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t Contact no. contain Invalid character :(  Enter again :)");
			goto D;
		}
	}
}while(!valid);

	fprintf(ek,"%s %s %s %c %s %s \n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	Seven_Add();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	Seven_List();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void Seven_List(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("seven.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!7th Sem Students Record !!!!!!!!!!!!!\n");
		gotoxy(1,8);
		printf("USN");
		gotoxy(20,8);
		printf("Full Name");
		gotoxy(45,8);
		printf("Gender");
		gotoxy(55,8);
		printf("Age");
		gotoxy(65,8);
		printf("Phone No.");
		gotoxy(1,9);
		printf("=================================================================================================================");
		row=10;
		while(fscanf(ek,"%s %s %s %c %s %s   \n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(20,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(45,row);
			printf("%c",s.gender);
			gotoxy(55,row);
			printf("%s",s.age);
			gotoxy(65,row);
			printf("%s",s.phone);
			row++;
		}
		fclose(ek);
		SevenAttendance_Add();
}
void Seven_View(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("seven.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!7th Sem Students Record !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("USN");
		gotoxy(20,15);
		printf("Full Name");
		gotoxy(45,15);
		printf("Gender");
		gotoxy(55,15);
		printf("Age");
		gotoxy(65,15);
		printf("Phone No.");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %c %s %s   \n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(20,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(45,row);
			printf("%c",s.gender);
			gotoxy(55,row);
			printf("%s",s.age);
			gotoxy(65,row);
			printf("%s",s.phone);
			row++;
		}
		fclose(ek);
		getch();
		SeventhMenu();
}
void Seven_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("seven.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Students Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %c %s %s \n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
	{
		if(strcmp(s.registration,name)==0)
		{
		gotoxy(1,15);
		printf("USN");
		gotoxy(20,15);
		printf("Full Name");
		gotoxy(45,15);
		printf("Gender");
		gotoxy(55,15);
		printf("Age");
		gotoxy(65,15);
		printf("Phone No.");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
				gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(20,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(45,row);
			printf("%c",s.gender);
			gotoxy(55,row);
			printf("%s",s.age);
			gotoxy(65,row);
			printf("%s",s.phone);
			break;
		}
	   }
	   if(strcmp(s.registration,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        Seven_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		SeventhMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void Seven_Edit(void)
{
	FILE *ek, *ft;
  	int i,b, valid=0;
  	char ch;
  	char name[20];

  	system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("seven.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		SeventhMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Students Record !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter Student USN : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			SeventhMenu();
		}
		while(fscanf(ek,"%s %s %s %c %s %s   \n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
		{
			if(strcmp(s.registration, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%s \t%c \t%s \t%s \n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
				gotoxy(12,22);
				printf("Enter New Registration Number: ");
				scanf(" %s",s.registration);	  
				gotoxy(12,24);
				printf("Enter New First Name: ");
				scanf("%s",s.fname);
				gotoxy(12,26);
				printf("Enter Last Name: ");
				scanf("%s",s.lname);
				gotoxy(12,28);
				printf("Enter Gender: ");
				scanf(" %c",&s.gender);
				s.gender=toupper(s.gender);
				gotoxy(12,30);
				printf("Enter age: ");
				scanf(" %s",s.age);
				gotoxy(12,32);
				printf("Enter Contact no: ");
				scanf("%s",s.phone);
			    printf("\nPress U charecter for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
				printf("\n\n\t\t\tStudent record updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	    fclose(ft);
	    fclose(ek);
	    remove("seven.txt");
   	    rename("temp2.txt","seven.txt");
		getch();
		SeventhMenu();		
}
void Seven_Delete()
{
	char name[20];
	int found=0;
	system("cls");
	Title();// call Title function
	FILE *ek, *ft;
	ft=fopen("temp.txt","w+");
	ek=fopen("seven.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Students Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);
	
	while (fscanf(ek,"%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
	{
		if (strcmp(s.registration,name)!=0)
		fprintf(ft,"%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
		else 
		{
			printf("%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
		getch();
		SeventhMenu();
	}
	else
	{
		fclose(ek);
		fclose(ft);
		remove("seven.txt");
		rename("temp.txt","seven.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		SeventhMenu();
	}
}

/* ************************************************* Eight Sem Menu ********************************************* */
void EighthMenu(void)//function decleration
{
int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Eighth Sem Records");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. Add Students");
		gotoxy(20,7);
		printf("2. View Students");
		gotoxy(20,9);
		printf("3. Search Students");
		gotoxy(20,11);
		printf("4. Edit Students Record");
		gotoxy(20,13);
		printf("5. Delete Students");
		gotoxy(20,15);
		printf("6. Back to Student Main menu");
		gotoxy(20,17);
		printf("Please Enter a choice[1-6]:");
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
						Eight_Add();
						break;
				case 2:
			    		Eight_View();
						break;
				case 3:
						Eight_Search();
						break;
				case 4:
						Eight_Edit();
						break;
				case 5:
						Eight_Delete();
						break;
				case 6:
						StudentMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
}
void Eight_Add(void)
{
	system("cls");
	Title();// call Title function
	char ans;
	FILE*ek;//file pointer
	ek=fopen("eight.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD NEW STUDENT                     ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ***************************************** Registration ********************************************************************** */	
     
    printf("\n\t\t\tUSN:");
    scanf(" %s",s.registration);

/* ******************************************* First Name ************************************************************** */	    

	A:
	printf("\n\t\t\tFirst Name: ");
	scanf("%s",s.fname);
	s.fname[0]=toupper(s.fname[0]);
	if(strlen(s.fname)>20||strlen(s.fname)<2)
	{
		printf("\n\t Invalid :( \t The max range for first name is 20 and min range is 2 :)");
		goto A;
	}
	else
	{
		for (b=0;b<strlen(s.fname);b++)
		{
			if (isalpha(s.fname[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t First name contain Invalid character :(  Enter again :)");
			goto A;
		}
	}
/* ******************************************* Last Name ************************************************************** */	    
	printf("\n\t\t\tLast Name: ");
    scanf("%s",s.lname);
    
/* ******************************************* Gender ************************************************************** */	    

    	do
		{
	    printf("\n\t\t\tGender[F/M]: ");
		scanf(" %c",&s.gender);
		if(toupper(s.gender)=='M'|| toupper(s.gender)=='F')
		{
			ok =1;
		}
		else 
		{
		ok =0;
		}
        if(!ok)
	    {
	    	printf("\n\t\t Gender contain Invalid character :(  Enter either F or M :)");
    	}
	 }	while(!ok);
/* ***************************************** Age ********************************************************************** */	
    N:
	printf("\n\t\t\tAge:");
    scanf(" %s",s.age);
     if(strlen(s.age)>2)
     {
     	printf("\n\t Invalid :( \t The max range for age is 2 )");
		goto N;
	 }

/* ******************************************* Contact no. ***************************************** */
do
{
	D:
    printf("\n\t\t\tContact no: ");
    scanf("%s",s.phone);
    if(strlen(s.phone)>10||strlen(s.phone)!=10)
	{
		printf("\n\t Sorry :( Invalid. Contact no. must contain 10 numbers. Enter again :)");
		goto D;
	}
	else
	{
		for (b=0;b<strlen(s.phone);b++)
		{
			if (!isalpha(s.phone[b]))
			{
				valid=1;
			}
			else
			{
				valid=0;
				break;
			}
		}
		if(!valid)
		{
			printf("\n\t\t Contact no. contain Invalid character :(  Enter again :)");
			goto D;
		}
	}
}while(!valid);

	fprintf(ek,"%s %s %s %c %s %s \n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
    printf("\n\n\t\t\t.... Information Record Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	Eight_Add();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	Eight_List();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void Eight_List(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("eight.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!8th Sem Students Record !!!!!!!!!!!!!\n");
			gotoxy(1,8);
		printf("USN");
		gotoxy(20,8);
		printf("Full Name");
		gotoxy(45,8);
		printf("Gender");
		gotoxy(55,8);
		printf("Age");
		gotoxy(65,8);
		printf("Phone No.");
		gotoxy(1,9);
		printf("=================================================================================================================");
		row=10;
		while(fscanf(ek,"%s %s %s %c %s %s   \n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(20,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(45,row);
			printf("%c",s.gender);
			gotoxy(55,row);
			printf("%s",s.age);
			gotoxy(65,row);
			printf("%s",s.phone);
			row++;
		}
		fclose(ek);
		EightAttendance_Add();
}
void Eight_View(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("eight.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!8th Sem Students Record !!!!!!!!!!!!!\n");
			gotoxy(1,15);
		printf("USN");
		gotoxy(20,15);
		printf("Full Name");
		gotoxy(45,15);
		printf("Gender");
		gotoxy(55,15);
		printf("Age");
		gotoxy(65,15);
		printf("Phone No.");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %c %s %s   \n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(20,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(45,row);
			printf("%c",s.gender);
			gotoxy(55,row);
			printf("%s",s.age);
			gotoxy(65,row);
			printf("%s",s.phone);
			row++;
		}
		fclose(ek);
		getch();
		EighthMenu();
}
void Eight_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("eight.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Students Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %c %s %s \n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
	{
		if(strcmp(s.registration,name)==0)
		{
		gotoxy(1,15);
		printf("USN");
		gotoxy(20,15);
		printf("Full Name");
		gotoxy(45,15);
		printf("Gender");
		gotoxy(55,15);
		printf("Age");
		gotoxy(65,15);
		printf("Phone No.");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
				gotoxy(1,row);
			printf("%s",s.registration);
			gotoxy(20,row);
			printf("%s %s",s.fname,s.lname);
			gotoxy(45,row);
			printf("%c",s.gender);
			gotoxy(55,row);
			printf("%s",s.age);
			gotoxy(65,row);
			printf("%s",s.phone);
			break;
		}
	   }
	   if(strcmp(s.registration,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        Eight_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		EighthMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void Eight_Edit(void)
{
FILE *ek, *ft;
  	int i,b, valid=0;
  	char ch;
  	char name[20];

  	system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("eight.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		EighthMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Students Record !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter Student USN : ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			EighthMenu();
		}
		while(fscanf(ek,"%s %s %s %c %s %s   \n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
		{
			if(strcmp(s.registration, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s \t%s \t%s \t%c \t%s \t%s \n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
				gotoxy(12,22);
				printf("Enter New Registration Number: ");
				scanf(" %s",s.registration);	  
				gotoxy(12,24);
				printf("Enter New First Name: ");
				scanf("%s",s.fname);
				gotoxy(12,26);
				printf("Enter Last Name: ");
				scanf("%s",s.lname);
				gotoxy(12,28);
				printf("Enter Gender: ");
				scanf(" %c",&s.gender);
				s.gender=toupper(s.gender);
				gotoxy(12,30);
				printf("Enter age: ");
				scanf(" %s",s.age);
				gotoxy(12,32);
				printf("Enter Contact no: ");
				scanf("%s",s.phone);
			    printf("\nPress U charecter for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
				printf("\n\n\t\t\tStudent record updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %c %s %s\n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	    fclose(ft);
	    fclose(ek);
	    remove("eight.txt");
   	    rename("temp2.txt","eight.txt");
		getch();
		EighthMenu();		
}
void Eight_Delete()
{
	char name[20];
	int found=0;
	system("cls");
	Title();// call Title function
	FILE *ek, *ft;
	ft=fopen("temp.txt","w+");
	ek=fopen("eight.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Students Record !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);
	
	while (fscanf(ek,"%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,&s.gender,s.age,s.phone)!=EOF)
	{
		if (strcmp(s.registration,name)!=0)
		fprintf(ft,"%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
		else 
		{
			printf("%s %s %s %c %s  %s\n",s.registration,s.fname,s.lname,s.gender,s.age,s.phone);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
		getch();
		EighthMenu();
	}
	else
	{
		fclose(ek);
		fclose(ft);
		remove("eight.txt");
		rename("temp.txt","eight.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		EighthMenu();
	}
}

/* ************************************************* Attendance Menu ********************************************* */

void AttendanceMenu(void)//function decleration
{
	system("cls");
	int choose;
	Title();// call Title function
	printf("\n\n\n\n\n\t\t\t\t1. 1st Sem\n");
	printf("\n\t\t\t\t2. 2nd Sem\n");
	printf("\n\t\t\t\t3. 3rd Sem \n");
	printf("\n\t\t\t\t4. 4th Sem \n");
	printf("\n\t\t\t\t5. 5th Sem\n");
	printf("\n\t\t\t\t6. 6th Sem\n");
	printf("\n\t\t\t\t7. 7th Sem\n");
	printf("\n\t\t\t\t8. 8th Sem\n");
	printf("\n\t\t\t\t9. Back to main menu\n");
	printf("\n\n\n \n\t\t\t\tChoose from 1 to 9:");
	scanf("%i", &choose);
	
	switch(choose)//switch to different case
	{
	
	case 1:
			OneAttendanceMenu();
    		break;
    case 2:
    		TwoAttendanceMenu();
    		break;
	case 3:
			ThreeAttendanceMenu();
    		break;
    case 4:
			FourAttendanceMenu();
			break;
	case 5:
			FiveAttendanceMenu();
			break;
	case 6:
			SixAttendanceMenu();
    		break;
    case 7:
			SevenAttendanceMenu();
    		break;
    case 8:
			EightAttendanceMenu();
    		break;
    case 9:
			MainMenu();
    		break;

	default:
		printf("\t\t\tInvalid entry. Please enter right option :)");
		getch();//holds screen
	}//end of switch
		
	
}

/* ************************************************* First Sem Attendance Menu ********************************************* */
void OneAttendanceMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("First Sem Attendance Records");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. View Students Attendance");
		gotoxy(20,7);
		printf("2. Search Students Attendance");
		gotoxy(20,9);
		printf("3. Edit Students Attendance");	
		gotoxy(20,11);
		printf("4. Delete Students Attendance");
		gotoxy(20,13);
		printf("5. Back to Student Main menu");
		gotoxy(20,15);
		printf("Please Enter a choice[1-5]:");
	
		
		scanf("%i",&choice);
		switch(choice)
			{
				case 1:
			    		OneAttendance_List();
						break;
				case 2:
						OneAttendance_Search();
						break;
				case 3:
						OneAttendance_Edit();
						break;
				case 4:
						OneAttendance_Delete();
						break;
				case 5:
						AttendanceMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
}
void OneAttendance_Add(void)
{
	
	
	char ans;
	FILE*ek;//file pointer
	ek=fopen("attendance1.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD ATTENDANCE                      ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ***************************************** Registration ********************************************************************** */	
     
    printf("\n\t\t\tUSN:");
    scanf(" %s",a.usn);
/* ******************************************* Name ************************************************************** */	    

	printf("\n\t\t\tName: ");
	scanf("%s %s",a.fname,a.lname);
/* ***************************************** SUBJECT1 ATTENDANCE   ********************************************************************** */	
    printf("\n\t\t\tSubject 1 Attendance:");
    scanf(" %s",a.att1);
/* ***************************************** SUBJECT2 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 2 Attendance:");
    scanf(" %s",a.att2);
/* ***************************************** SUBJECT3 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 3 Attendance:");
    scanf(" %s",a.att3);
/* ***************************************** SUBJECT4 ATTENDANCE   ********************************************************************** */	
    printf("\n\t\t\tSubject 4 Attendance:");
    scanf(" %s",a.att4);
/* ***************************************** SUBJECT5 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 5 Attendance:");
    scanf(" %s",a.att5);
/* ***************************************** SUBJECT6 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 6 Attendance:");
    scanf(" %s",a.att6);
/* ***************************************** SUBJECT7 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 7 Attendance:");
    scanf(" %s",a.att7);
/* ***************************************** SUBJECT8 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 8 Attendance:");
    scanf(" %s",a.att8);

	fprintf(ek," %s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
    printf("\n\n\t\t\t.... Attendance Recorded Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	One_List();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	MainMenu();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void OneAttendance_List(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("attendance1.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!1st Sem Students Attendance !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("USN");
		gotoxy(20,15);
		printf("Name");
		gotoxy(45,15);
		printf("SUB1");
		gotoxy(53,15);
		printf("SUB2");
		gotoxy(60,15);
		printf("SUB3");
		gotoxy(67,15);
		printf("SUB4");
		gotoxy(74,15);
		printf("SUB5");
		gotoxy(81,15);
		printf("SUB6");
		gotoxy(88,15);
		printf("SUB7");
		gotoxy(95,15);
		printf("SUB8");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",a.usn);
			gotoxy(20,row);
			printf("%s %s",a.fname,a.lname);
			gotoxy(45,row);
			printf("%s",a.att1);
			gotoxy(53,row);
			printf("%s",a.att2);
			gotoxy(60,row);
			printf("%s",a.att3);
			gotoxy(67,row);
			printf("%s",a.att4);
			gotoxy(74,row);
			printf("%s",a.att5);
			gotoxy(81,row);
			printf("%s",a.att6);
			gotoxy(88,row);
			printf("%s",a.att7);
			gotoxy(95,row);
			printf("%s",a.att8);
			
			row++;
		}
		fclose(ek);
		getch();
		OneAttendanceMenu();
}
void OneAttendance_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("attendance1.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Students Attendance !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Students USN to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8)!=EOF)
	{
		if(strcmp(a.usn,name)==0)
		{
		gotoxy(1,15);
		printf("USN");
		gotoxy(20,15);
		printf("Name");
		gotoxy(45,15);
		printf("SUB1");
		gotoxy(53,15);
		printf("SUB2");
		gotoxy(60,15);
		printf("SUB3");
		gotoxy(67,15);
		printf("SUB4");
		gotoxy(74,15);
		printf("SUB5");
		gotoxy(81,15);
		printf("SUB6");
		gotoxy(88,15);
		printf("SUB7");
		gotoxy(95,15);
		printf("SUB8");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
			gotoxy(1,row);
			printf("%s",a.usn);
			gotoxy(20,row);
			printf("%s %s",a.fname,a.lname);
			gotoxy(45,row);
			printf("%s",a.att1);
			gotoxy(53,row);
			printf("%s",a.att2);
			gotoxy(60,row);
			printf("%s",a.att3);
			gotoxy(67,row);
			printf("%s",a.att4);
			gotoxy(74,row);
			printf("%s",a.att5);
			gotoxy(81,row);
			printf("%s",a.att6);
			gotoxy(88,row);
			printf("%s",a.att7);
			gotoxy(95,row);
			printf("%s",a.att8);
			break;
		}
	   }
	   if(strcmp(a.usn,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        OneAttendance_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		OneAttendanceMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void OneAttendance_Edit(void)
{
	FILE *ek, *ft;
  	int i,b, valid=0;
  	char ch;
  	char name[20];

  	system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("attendance1.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		OneAttendanceMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Students Attendance !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter the Student USN: ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			OneAttendanceMenu();
		}
		while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s   \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8)!=EOF)
		{
			if(strcmp(a.usn, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s %s %s %s %s %s %s %s %s %s %s   \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
				gotoxy(12,22);
				printf("Enter USN: ");
				scanf(" %s",a.usn);	   
				gotoxy(12,24);
				printf("Enter Name: ");
				scanf("%s %s",a.fname,a.lname); 
				gotoxy(12,26);
				printf("Enter Subject1 Attendance : ");
				scanf(" %s",a.att1);
				gotoxy(12,28);
				printf("Enter Subject2 Attendance : ");
				scanf(" %s",a.att2);
				gotoxy(12,30);
				printf("Enter Subject3 Attendance : ");
				scanf(" %s",a.att3);
				gotoxy(12,32);
				printf("Enter Subject4 Attendance : ");
				scanf(" %s",a.att4);
				gotoxy(12,34);
				printf("Enter Subject5 Attendance : ");
				scanf(" %s",a.att5);
				gotoxy(12,36);
				printf("Enter Subject6 Attendance : ");
				scanf(" %s",a.att6);
				gotoxy(12,38);
				printf("Enter Subject7 Attendance : ");
				scanf(" %s",a.att7);
				gotoxy(12,40);
				printf("Enter Subject8 Attendance : ");
				scanf(" %s",a.att8);
			    printf("\nPress U charecter for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %s %s %s %s %s %s %s %s   \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
				printf("\n\n\t\t\tStudent Attendance updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %s %s %s %s %s %s %s %s   \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	    fclose(ft);
	    fclose(ek);
	    remove("attendance1.txt");
   	    rename("temp2.txt","attendance1.txt");
		getch();
		OneAttendanceMenu();		
}
void OneAttendance_Delete()
{
	char name[20];
	int found=0;
	system("cls");
	Title();// call Title function
	FILE *ek, *ft;
	ft=fopen("temp.txt","w+");
	ek=fopen("attendance1.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Students Attendance !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);
	
	while (fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8)!=EOF)
	{
		if (strcmp(a.usn,name)!=0)
		fprintf(ft,"%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
		else 
		{
			printf("%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
		getch();
		OneAttendanceMenu();
	}
	else
	{
		fclose(ek);
		fclose(ft);
		remove("attendance1.txt");
		rename("temp.txt","attendance1.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		OneAttendanceMenu();
	}
}	

/* ************************************************* Second Sem Attendance Menu ********************************************* */
void TwoAttendanceMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Second Sem Attendance Records");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. View Students Attendance");
		gotoxy(20,7);
		printf("2. Search Students Attendance");
		gotoxy(20,9);
		printf("3. Edit Students Attendance");	
		gotoxy(20,11);
		printf("4. Delete Students Attendance");
		gotoxy(20,13);
		printf("5. Back to Student Main menu");
		gotoxy(20,15);
		printf("Please Enter a choice[1-5]:");
		scanf("%i",&choice);
		switch(choice)
			{
				
				case 1:
			    		TwoAttendance_List();
						break;
				case 2:
						TwoAttendance_Search();
						break;
				case 3:
						TwoAttendance_Edit();
						break;
				case 4:
						TwoAttendance_Delete();
						break;
				case 5:
						AttendanceMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
}

void TwoAttendance_Add(void)
{
	
	
	char ans;
	FILE*ek;//file pointer
	ek=fopen("attendance2.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD ATTENDANCE                      ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");	
/* ***************************************** Registration ********************************************************************** */	
     
    printf("\n\t\t\tUSN:");
    scanf(" %s",a.usn);
/* ******************************************* Name ************************************************************** */	    

	printf("\n\t\t\tName: ");
	scanf("%s %s",a.fname,a.lname);
/* ***************************************** SUBJECT1 ATTENDANCE   ********************************************************************** */	
    printf("\n\t\t\tSubject 1 Attendance:");
    scanf(" %s",a.att1);
/* ***************************************** SUBJECT2 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 2 Attendance:");
    scanf(" %s",a.att2);
/* ***************************************** SUBJECT3 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 3 Attendance:");
    scanf(" %s",a.att3);
/* ***************************************** SUBJECT4 ATTENDANCE   ********************************************************************** */	
    printf("\n\t\t\tSubject 4 Attendance:");
    scanf(" %s",a.att4);
/* ***************************************** SUBJECT5 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 5 Attendance:");
    scanf(" %s",a.att5);
/* ***************************************** SUBJECT6 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 6 Attendance:");
    scanf(" %s",a.att6);
/* ***************************************** SUBJECT7 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 7 Attendance:");
    scanf(" %s",a.att7);
/* ***************************************** SUBJECT8 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 8 Attendance:");
    scanf(" %s",a.att8);

	fprintf(ek," %s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
    printf("\n\n\t\t\t.... Attendance Recorded Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	Two_List();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	MainMenu();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void TwoAttendance_List(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("attendance2.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!2nd Sem Students Attendance !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("USN");
		gotoxy(20,15);
		printf("Name");
		gotoxy(45,15);
		printf("SUB1");
		gotoxy(53,15);
		printf("SUB2");
		gotoxy(60,15);
		printf("SUB3");
		gotoxy(67,15);
		printf("SUB4");
		gotoxy(74,15);
		printf("SUB5");
		gotoxy(81,15);
		printf("SUB6");
		gotoxy(88,15);
		printf("SUB7");
		gotoxy(95,15);
		printf("SUB8");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",a.usn);
			gotoxy(20,row);
			printf("%s %s",a.fname,a.lname);
			gotoxy(45,row);
			printf("%s",a.att1);
			gotoxy(53,row);
			printf("%s",a.att2);
			gotoxy(60,row);
			printf("%s",a.att3);
			gotoxy(67,row);
			printf("%s",a.att4);
			gotoxy(74,row);
			printf("%s",a.att5);
			gotoxy(81,row);
			printf("%s",a.att6);
			gotoxy(88,row);
			printf("%s",a.att7);
			gotoxy(95,row);
			printf("%s",a.att8);
			
			row++;
		}
		fclose(ek);
		getch();
		TwoAttendanceMenu();	
}
void TwoAttendance_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("attendance2.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Students Attendance !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Students USN to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8)!=EOF)
	{
		if(strcmp(a.usn,name)==0)
		{
		gotoxy(1,15);
		printf("USN");
		gotoxy(20,15);
		printf("Name");
		gotoxy(45,15);
		printf("SUB1");
		gotoxy(53,15);
		printf("SUB2");
		gotoxy(60,15);
		printf("SUB3");
		gotoxy(67,15);
		printf("SUB4");
		gotoxy(74,15);
		printf("SUB5");
		gotoxy(81,15);
		printf("SUB6");
		gotoxy(88,15);
		printf("SUB7");
		gotoxy(95,15);
		printf("SUB8");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
			gotoxy(1,row);
			printf("%s",a.usn);
			gotoxy(20,row);
			printf("%s %s",a.fname,a.lname);
			gotoxy(45,row);
			printf("%s",a.att1);
			gotoxy(53,row);
			printf("%s",a.att2);
			gotoxy(60,row);
			printf("%s",a.att3);
			gotoxy(67,row);
			printf("%s",a.att4);
			gotoxy(74,row);
			printf("%s",a.att5);
			gotoxy(81,row);
			printf("%s",a.att6);
			gotoxy(88,row);
			printf("%s",a.att7);
			gotoxy(95,row);
			printf("%s",a.att8);
			break;
		}
	   }
	   if(strcmp(a.usn,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        TwoAttendance_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		TwoAttendanceMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void TwoAttendance_Edit(void)
{
	FILE *ek, *ft;
  	int i,b, valid=0;
  	char ch;
  	char name[20];

  	system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("attendance2.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		TwoAttendanceMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Students Attendance !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   printf("Enter the Student USN: ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			OneAttendanceMenu();
		}
		while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s   \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8)!=EOF)
		{
			if(strcmp(a.usn, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s %s %s %s %s %s %s %s %s %s %s   \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
					gotoxy(12,22);
				printf("Enter USN: ");
				scanf(" %s",a.usn);	   
				gotoxy(12,24);
				printf("Enter Name: ");
				scanf("%s %s",a.fname,a.lname); 
				gotoxy(12,26);
				printf("Enter Subject1 Attendance : ");
				scanf(" %s",a.att1);
				gotoxy(12,28);
				printf("Enter Subject2 Attendance : ");
				scanf(" %s",a.att2);
				gotoxy(12,30);
				printf("Enter Subject3 Attendance : ");
				scanf(" %s",a.att3);
				gotoxy(12,32);
				printf("Enter Subject4 Attendance : ");
				scanf(" %s",a.att4);
				gotoxy(12,34);
				printf("Enter Subject5 Attendance : ");
				scanf(" %s",a.att5);
				gotoxy(12,36);
				printf("Enter Subject6 Attendance : ");
				scanf(" %s",a.att6);
				gotoxy(12,38);
				printf("Enter Subject7 Attendance : ");
				scanf(" %s",a.att7);
				gotoxy(12,40);
				printf("Enter Subject8 Attendance : ");
				scanf(" %s",a.att8);
			    printf("\nPress U charecter for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %s %s %s %s %s %s %s %s   \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
				printf("\n\n\t\t\tStudent Attendance updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %s %s %s %s %s %s %s %s   \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	    fclose(ft);
	    fclose(ek);
	    remove("attendance2.txt");
   	    rename("temp2.txt","attendance2.txt");
		getch();
		TwoAttendanceMenu();		
}
void TwoAttendance_Delete()
{
	char name[20];
	int found=0;
	system("cls");
	Title();// call Title function
	FILE *ek, *ft;
	ft=fopen("temp.txt","w+");
	ek=fopen("attendance2.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Students Attendance !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);
	
	while (fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8)!=EOF)
	{
		if (strcmp(a.usn,name)!=0)
		fprintf(ft,"%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
		else 
		{
			printf("%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
		getch();
		TwoAttendanceMenu();
	}
	else
	{
		fclose(ek);
		fclose(ft);
		remove("attendance2.txt");
		rename("temp.txt","attendance2.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		TwoAttendanceMenu();
	}
}

/* ************************************************* Third Sem Attendance Menu ********************************************* */
void ThreeAttendanceMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Third Sem Attendance Records");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. View Students Attendance");
		gotoxy(20,7);
		printf("2. Search Students Attendance");
		gotoxy(20,9);
		printf("3. Edit Students Attendance");	
		gotoxy(20,11);
		printf("4. Delete Students Attendance");
		gotoxy(20,13);
		printf("5. Back to Student Main menu");
		gotoxy(20,15);
		printf("Please Enter a choice[1-5]:");
		scanf("%i",&choice);
		switch(choice)
			{
			
				case 1:
			    		ThreeAttendance_List();
						break;
				case 2:
						ThreeAttendance_Search();
						break;
				case 3:
						ThreeAttendance_Edit();
						break;
				case 4:
						ThreeAttendance_Delete();
						break;
				case 5:
						AttendanceMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
	
}
void ThreeAttendance_Add(void)
{


	char ans;
	FILE*ek;//file pointer
	ek=fopen("attendance3.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD ATTENDANCE                      ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ***************************************** Registration ********************************************************************** */	
     
    printf("\n\t\t\tUSN:");
    scanf(" %s",a.usn);
/* ******************************************* Name ************************************************************** */	    

	printf("\n\t\t\tName: ");
	scanf("%s %s",a.fname,a.lname);
/* ***************************************** SUBJECT1 ATTENDANCE   ********************************************************************** */	
    printf("\n\t\t\tSubject 1 Attendance:");
    scanf(" %s",a.att1);
/* ***************************************** SUBJECT2 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 2 Attendance:");
    scanf(" %s",a.att2);
/* ***************************************** SUBJECT3 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 3 Attendance:");
    scanf(" %s",a.att3);
/* ***************************************** SUBJECT4 ATTENDANCE   ********************************************************************** */	
    printf("\n\t\t\tSubject 4 Attendance:");
    scanf(" %s",a.att4);
/* ***************************************** SUBJECT5 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 5 Attendance:");
    scanf(" %s",a.att5);
/* ***************************************** SUBJECT6 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 6 Attendance:");
    scanf(" %s",a.att6);
/* ***************************************** SUBJECT7 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 7 Attendance:");
    scanf(" %s",a.att7);
/* ***************************************** SUBJECT8 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 8 Attendance:");
    scanf(" %s",a.att8);

	fprintf(ek," %s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
    printf("\n\n\t\t\t.... Attendance Recorded Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	Three_List();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	MainMenu();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void ThreeAttendance_List(void)
{
int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("attendance3.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!3rd Sem Students Attendance !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("USN");
		gotoxy(20,15);
		printf("Name");
		gotoxy(45,15);
		printf("SUB1");
		gotoxy(53,15);
		printf("SUB2");
		gotoxy(60,15);
		printf("SUB3");
		gotoxy(67,15);
		printf("SUB4");
		gotoxy(74,15);
		printf("SUB5");
		gotoxy(81,15);
		printf("SUB6");
		gotoxy(88,15);
		printf("SUB7");
		gotoxy(95,15);
		printf("SUB8");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",a.usn);
			gotoxy(20,row);
			printf("%s %s",a.fname,a.lname);
			gotoxy(45,row);
			printf("%s",a.att1);
			gotoxy(53,row);
			printf("%s",a.att2);
			gotoxy(60,row);
			printf("%s",a.att3);
			gotoxy(67,row);
			printf("%s",a.att4);
			gotoxy(74,row);
			printf("%s",a.att5);
			gotoxy(81,row);
			printf("%s",a.att6);
			gotoxy(88,row);
			printf("%s",a.att7);
			gotoxy(95,row);
			printf("%s",a.att8);
			
			row++;
		}
		fclose(ek);
		getch();
		ThreeAttendanceMenu();
}
void ThreeAttendance_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("attendance3.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Students Attendance !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Students USN to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8)!=EOF)
	{
		if(strcmp(a.usn,name)==0)
		{
		gotoxy(1,15);
		printf("USN");
		gotoxy(20,15);
		printf("Name");
		gotoxy(45,15);
		printf("SUB1");
		gotoxy(53,15);
		printf("SUB2");
		gotoxy(60,15);
		printf("SUB3");
		gotoxy(67,15);
		printf("SUB4");
		gotoxy(74,15);
		printf("SUB5");
		gotoxy(81,15);
		printf("SUB6");
		gotoxy(88,15);
		printf("SUB7");
		gotoxy(95,15);
		printf("SUB8");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
			gotoxy(1,row);
			printf("%s",a.usn);
			gotoxy(20,row);
			printf("%s %s",a.fname,a.lname);
			gotoxy(45,row);
			printf("%s",a.att1);
			gotoxy(53,row);
			printf("%s",a.att2);
			gotoxy(60,row);
			printf("%s",a.att3);
			gotoxy(67,row);
			printf("%s",a.att4);
			gotoxy(74,row);
			printf("%s",a.att5);
			gotoxy(81,row);
			printf("%s",a.att6);
			gotoxy(88,row);
			printf("%s",a.att7);
			gotoxy(95,row);
			printf("%s",a.att8);
			break;
		}
	   }
	   if(strcmp(a.usn,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        ThreeAttendance_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		ThreeAttendanceMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void ThreeAttendance_Edit(void)
{
	FILE *ek, *ft;
  	int i,b, valid=0;
  	char ch;
  	char name[20];

  	system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("attendance3.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		ThreeAttendanceMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Students Attendance !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   printf("Enter the Student USN: ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			OneAttendanceMenu();
		}
		while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s   \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8)!=EOF)
		{
			if(strcmp(a.usn, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s %s %s %s %s %s %s %s %s %s %s   \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
					gotoxy(12,22);
				printf("Enter USN: ");
				scanf(" %s",a.usn);	   
				gotoxy(12,24);
				printf("Enter Name: ");
				scanf("%s %s",a.fname,a.lname); 
				gotoxy(12,26);
				printf("Enter Subject1 Attendance : ");
				scanf(" %s",a.att1);
				gotoxy(12,28);
				printf("Enter Subject2 Attendance : ");
				scanf(" %s",a.att2);
				gotoxy(12,30);
				printf("Enter Subject3 Attendance : ");
				scanf(" %s",a.att3);
				gotoxy(12,32);
				printf("Enter Subject4 Attendance : ");
				scanf(" %s",a.att4);
				gotoxy(12,34);
				printf("Enter Subject5 Attendance : ");
				scanf(" %s",a.att5);
				gotoxy(12,36);
				printf("Enter Subject6 Attendance : ");
				scanf(" %s",a.att6);
				gotoxy(12,38);
				printf("Enter Subject7 Attendance : ");
				scanf(" %s",a.att7);
				gotoxy(12,40);
				printf("Enter Subject8 Attendance : ");
				scanf(" %s",a.att8);
			    printf("\nPress U charecter for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %s %s %s %s %s %s %s %s   \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
				printf("\n\n\t\t\tStudent Attendance updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %s %s %s %s %s %s %s %s   \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	    fclose(ft);
	    fclose(ek);
	    remove("attendance3.txt");
   	    rename("temp2.txt","attendance3.txt");
		getch();
		ThreeAttendanceMenu();
}
void ThreeAttendance_Delete()
{
	char name[20];
	int found=0;
	system("cls");
	Title();// call Title function
	FILE *ek, *ft;
	ft=fopen("temp.txt","w+");
	ek=fopen("attendance3.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Students Attendance !!!!!!!!!!!!!\n");
	gotoxy(12,8);
printf("\n Enter Student USN to delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);
	
	while (fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8)!=EOF)
	{
		if (strcmp(a.usn,name)!=0)
		fprintf(ft,"%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
		else 
		{
			printf("%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
		getch();
		ThreeAttendanceMenu();
	}
	else
	{
		fclose(ek);
		fclose(ft);
		remove("attendance3.txt");
		rename("temp.txt","attendance3.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		ThreeAttendanceMenu();
	}
}

/* ************************************************* Fourth Sem Attendance Menu ********************************************* */
void FourAttendanceMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Fourth Sem Attendance Records");
		printf("\n------------------------------------------------------------------------------------------------");
	gotoxy(20,5);
		printf("1. View Students Attendance");
		gotoxy(20,7);
		printf("2. Search Students Attendance");
		gotoxy(20,9);
		printf("3. Edit Students Attendance");	
		gotoxy(20,11);
		printf("4. Delete Students Attendance");
		gotoxy(20,13);
		printf("5. Back to Student Main menu");
		gotoxy(20,15);
		printf("Please Enter a choice[1-5]:");
		scanf("%i",&choice);
		switch(choice)
			{
				
				case 1:
			    		FourAttendance_List();
						break;
				case 2:
						FourAttendance_Search();
						break;
				case 3:
						FourAttendance_Edit();
						break;
				case 4:
						FourAttendance_Delete();
						break;
				case 5:
						AttendanceMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
	
}
void FourAttendance_Add(void)
{
	
	
	char ans;
	FILE*ek;//file pointer
	ek=fopen("attendance4.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD ATTENDANCE                      ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ***************************************** Registration ********************************************************************** */	
     
    printf("\n\t\t\tUSN:");
    scanf(" %s",a.usn);
/* ******************************************* Name ************************************************************** */	    

	printf("\n\t\t\tName: ");
	scanf("%s %s",a.fname,a.lname);

/* ***************************************** SUBJECT1 ATTENDANCE   ********************************************************************** */	
    printf("\n\t\t\tSubject 1 Attendance:");
    scanf(" %s",a.att1);
/* ***************************************** SUBJECT2 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 2 Attendance:");
    scanf(" %s",a.att2);
/* ***************************************** SUBJECT3 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 3 Attendance:");
    scanf(" %s",a.att3);
/* ***************************************** SUBJECT4 ATTENDANCE   ********************************************************************** */	
    printf("\n\t\t\tSubject 4 Attendance:");
    scanf(" %s",a.att4);
/* ***************************************** SUBJECT5 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 5 Attendance:");
    scanf(" %s",a.att5);
/* ***************************************** SUBJECT6 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 6 Attendance:");
    scanf(" %s",a.att6);
/* ***************************************** SUBJECT7 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 7 Attendance:");
    scanf(" %s",a.att7);
/* ***************************************** SUBJECT8 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 8 Attendance:");
    scanf(" %s",a.att8);

	fprintf(ek," %s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
    printf("\n\n\t\t\t.... Attendance Recorded Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	Four_List();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	MainMenu();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void FourAttendance_List(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("attendance4.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!4th Sem Students Attendance !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("USN");
		gotoxy(20,15);
		printf("Name");
		gotoxy(45,15);
		printf("SUB1");
		gotoxy(53,15);
		printf("SUB2");
		gotoxy(60,15);
		printf("SUB3");
		gotoxy(67,15);
		printf("SUB4");
		gotoxy(74,15);
		printf("SUB5");
		gotoxy(81,15);
		printf("SUB6");
		gotoxy(88,15);
		printf("SUB7");
		gotoxy(95,15);
		printf("SUB8");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",a.usn);
			gotoxy(20,row);
			printf("%s %s",a.fname,a.lname);
			gotoxy(45,row);
			printf("%s",a.att1);
			gotoxy(53,row);
			printf("%s",a.att2);
			gotoxy(60,row);
			printf("%s",a.att3);
			gotoxy(67,row);
			printf("%s",a.att4);
			gotoxy(74,row);
			printf("%s",a.att5);
			gotoxy(81,row);
			printf("%s",a.att6);
			gotoxy(88,row);
			printf("%s",a.att7);
			gotoxy(95,row);
			printf("%s",a.att8);
			
			row++;
		}
		fclose(ek);
		getch();
		FourAttendanceMenu();
}
void FourAttendance_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("attendance4.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Students Attendance !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Students USN to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8)!=EOF)
	{
		if(strcmp(a.usn,name)==0)
		{
		gotoxy(1,15);
		printf("USN");
		gotoxy(20,15);
		printf("Name");
		gotoxy(45,15);
		printf("SUB1");
		gotoxy(53,15);
		printf("SUB2");
		gotoxy(60,15);
		printf("SUB3");
		gotoxy(67,15);
		printf("SUB4");
		gotoxy(74,15);
		printf("SUB5");
		gotoxy(81,15);
		printf("SUB6");
		gotoxy(88,15);
		printf("SUB7");
		gotoxy(95,15);
		printf("SUB8");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
			gotoxy(1,row);
			printf("%s",a.usn);
			gotoxy(20,row);
			printf("%s %s",a.fname,a.lname);
			gotoxy(45,row);
			printf("%s",a.att1);
			gotoxy(53,row);
			printf("%s",a.att2);
			gotoxy(60,row);
			printf("%s",a.att3);
			gotoxy(67,row);
			printf("%s",a.att4);
			gotoxy(74,row);
			printf("%s",a.att5);
			gotoxy(81,row);
			printf("%s",a.att6);
			gotoxy(88,row);
			printf("%s",a.att7);
			gotoxy(95,row);
			printf("%s",a.att8);
			break;
		}
	   }
	   if(strcmp(a.usn,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        FourAttendance_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		FourAttendanceMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void FourAttendance_Edit(void)
{
	FILE *ek, *ft;
  	int i,b, valid=0;
  	char ch;
  	char name[20];

  	system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("attendance4.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		FourAttendanceMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Students Attendance !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter the Student USN: ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			OneAttendanceMenu();
		}
		while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s   \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8)!=EOF)
		{
			if(strcmp(a.usn, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s %s %s %s %s %s %s %s %s %s %s   \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
					gotoxy(12,22);
				printf("Enter USN: ");
				scanf(" %s",a.usn);	   
				gotoxy(12,24);
				printf("Enter Name: ");
				scanf("%s %s",a.fname,a.lname); 
				gotoxy(12,26);
				printf("Enter Subject1 Attendance : ");
				scanf(" %s",a.att1);
				gotoxy(12,28);
				printf("Enter Subject2 Attendance : ");
				scanf(" %s",a.att2);
				gotoxy(12,30);
				printf("Enter Subject3 Attendance : ");
				scanf(" %s",a.att3);
				gotoxy(12,32);
				printf("Enter Subject4 Attendance : ");
				scanf(" %s",a.att4);
				gotoxy(12,34);
				printf("Enter Subject5 Attendance : ");
				scanf(" %s",a.att5);
				gotoxy(12,36);
				printf("Enter Subject6 Attendance : ");
				scanf(" %s",a.att6);
				gotoxy(12,38);
				printf("Enter Subject7 Attendance : ");
				scanf(" %s",a.att7);
				gotoxy(12,40);
				printf("Enter Subject8 Attendance : ");
				scanf(" %s",a.att8);
			    printf("\nPress U charecter for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %s %s %s %s %s %s %s %s   \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
				printf("\n\n\t\t\tStudent Attendance updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %s %s %s %s %s %s %s %s   \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	    fclose(ft);
	    fclose(ek);
	    remove("attendance4.txt");
   	    rename("temp2.txt","attendance4.txt");
		getch();
		FourAttendanceMenu();
}
void FourAttendance_Delete()
{
	char name[20];
	int found=0;
	system("cls");
	Title();// call Title function
	FILE *ek, *ft;
	ft=fopen("temp.txt","w+");
	ek=fopen("attendance4.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Students Attendance !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);
	
	while (fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8)!=EOF)
	{
		if (strcmp(a.usn,name)!=0)
		fprintf(ft,"%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
		else 
		{
			printf("%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
		getch();
		FourAttendanceMenu();
	}
	else
	{
		fclose(ek);
		fclose(ft);
		remove("attendance4.txt");
		rename("temp.txt","attendance4.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		FourAttendanceMenu();
	}
}

/* ************************************************* Fifth Sem Attendance Menu ********************************************* */
void FiveAttendanceMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Fifth Sem Attendance Records");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. View Students Attendance");
		gotoxy(20,7);
		printf("2. Search Students Attendance");
		gotoxy(20,9);
		printf("3. Edit Students Attendance");	
		gotoxy(20,11);
		printf("4. Delete Students Attendance");
		gotoxy(20,13);
		printf("5. Back to Student Main menu");
		gotoxy(20,15);
		printf("Please Enter a choice[1-5]:");
		scanf("%i",&choice);
		switch(choice)
			{
		
				case 1:
			    		FiveAttendance_List();
						break;
				case 2:
						FiveAttendance_Search();
						break;
				case 3:
						FiveAttendance_Edit();
						break;
				case 4:
						FiveAttendance_Delete();
						break;
				case 5:
						AttendanceMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
	
}
void FiveAttendance_Add(void)
{

	
	char ans;
	FILE*ek;//file pointer
	ek=fopen("attendance5.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD ATTENDANCE                      ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ***************************************** Registration ********************************************************************** */	
     
    printf("\n\t\t\tUSN:");
    scanf(" %s",a.usn);
/* ******************************************* Name ************************************************************** */	    

	printf("\n\t\t\tName: ");
	scanf("%s %s",a.fname,a.lname);

/* ***************************************** SUBJECT1 ATTENDANCE   ********************************************************************** */	
    printf("\n\t\t\tSubject 1 Attendance:");
    scanf(" %s",a.att1);
/* ***************************************** SUBJECT2 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 2 Attendance:");
    scanf(" %s",a.att2);
/* ***************************************** SUBJECT3 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 3 Attendance:");
    scanf(" %s",a.att3);
/* ***************************************** SUBJECT4 ATTENDANCE   ********************************************************************** */	
    printf("\n\t\t\tSubject 4 Attendance:");
    scanf(" %s",a.att4);
/* ***************************************** SUBJECT5 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 5 Attendance:");
    scanf(" %s",a.att5);
/* ***************************************** SUBJECT6 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 6 Attendance:");
    scanf(" %s",a.att6);
/* ***************************************** SUBJECT7 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 7 Attendance:");
    scanf(" %s",a.att7);
/* ***************************************** SUBJECT8 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 8 Attendance:");
    scanf(" %s",a.att8);

	fprintf(ek," %s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
    printf("\n\n\t\t\t.... Attendance Recorded Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	Five_List();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	MainMenu();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void FiveAttendance_List(void)
{
 	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("attendance5.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!5th Sem Students Attendance !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("USN");
		gotoxy(20,15);
		printf("Name");
		gotoxy(45,15);
		printf("SUB1");
		gotoxy(53,15);
		printf("SUB2");
		gotoxy(60,15);
		printf("SUB3");
		gotoxy(67,15);
		printf("SUB4");
		gotoxy(74,15);
		printf("SUB5");
		gotoxy(81,15);
		printf("SUB6");
		gotoxy(88,15);
		printf("SUB7");
		gotoxy(95,15);
		printf("SUB8");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",a.usn);
			gotoxy(20,row);
			printf("%s %s",a.fname,a.lname);
			gotoxy(45,row);
			printf("%s",a.att1);
			gotoxy(53,row);
			printf("%s",a.att2);
			gotoxy(60,row);
			printf("%s",a.att3);
			gotoxy(67,row);
			printf("%s",a.att4);
			gotoxy(74,row);
			printf("%s",a.att5);
			gotoxy(81,row);
			printf("%s",a.att6);
			gotoxy(88,row);
			printf("%s",a.att7);
			gotoxy(95,row);
			printf("%s",a.att8);
			
			row++;
		}
		fclose(ek);
		getch();
		FiveAttendanceMenu();	
}
void FiveAttendance_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("attendance5.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Students Attendance !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Students USN to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8)!=EOF)
	{
		if(strcmp(a.usn,name)==0)
		{
		gotoxy(1,15);
		printf("USN");
		gotoxy(20,15);
		printf("Name");
		gotoxy(45,15);
		printf("SUB1");
		gotoxy(53,15);
		printf("SUB2");
		gotoxy(60,15);
		printf("SUB3");
		gotoxy(67,15);
		printf("SUB4");
		gotoxy(74,15);
		printf("SUB5");
		gotoxy(81,15);
		printf("SUB6");
		gotoxy(88,15);
		printf("SUB7");
		gotoxy(95,15);
		printf("SUB8");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
			gotoxy(1,row);
			printf("%s",a.usn);
			gotoxy(20,row);
			printf("%s %s",a.fname,a.lname);
			gotoxy(45,row);
			printf("%s",a.att1);
			gotoxy(53,row);
			printf("%s",a.att2);
			gotoxy(60,row);
			printf("%s",a.att3);
			gotoxy(67,row);
			printf("%s",a.att4);
			gotoxy(74,row);
			printf("%s",a.att5);
			gotoxy(81,row);
			printf("%s",a.att6);
			gotoxy(88,row);
			printf("%s",a.att7);
			gotoxy(95,row);
			printf("%s",a.att8);
			break;
		}
	   }
	   if(strcmp(a.usn,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        FiveAttendance_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		FiveAttendanceMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void FiveAttendance_Edit(void)
{
	FILE *ek, *ft;
  	int i,b, valid=0;
  	char ch;
  	char name[20];

  	system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("attendance5.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		FiveAttendanceMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Students Attendance !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   printf("Enter the Student USN: ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			OneAttendanceMenu();
		}
		while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s   \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8)!=EOF)
		{
			if(strcmp(a.usn, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s %s %s %s %s %s %s %s %s %s %s   \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
					gotoxy(12,22);
				printf("Enter USN: ");
				scanf(" %s",a.usn);	   
				gotoxy(12,24);
				printf("Enter Name: ");
				scanf("%s %s",a.fname,a.lname); 
				gotoxy(12,26);
				printf("Enter Subject1 Attendance : ");
				scanf(" %s",a.att1);
				gotoxy(12,28);
				printf("Enter Subject2 Attendance : ");
				scanf(" %s",a.att2);
				gotoxy(12,30);
				printf("Enter Subject3 Attendance : ");
				scanf(" %s",a.att3);
				gotoxy(12,32);
				printf("Enter Subject4 Attendance : ");
				scanf(" %s",a.att4);
				gotoxy(12,34);
				printf("Enter Subject5 Attendance : ");
				scanf(" %s",a.att5);
				gotoxy(12,36);
				printf("Enter Subject6 Attendance : ");
				scanf(" %s",a.att6);
				gotoxy(12,38);
				printf("Enter Subject7 Attendance : ");
				scanf(" %s",a.att7);
				gotoxy(12,40);
				printf("Enter Subject8 Attendance : ");
				scanf(" %s",a.att8);
			    printf("\nPress U charecter for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %s %s %s %s %s %s %s %s   \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
				printf("\n\n\t\t\tStudent Attendance updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %s %s %s %s %s %s %s %s   \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	    fclose(ft);
	    fclose(ek);
	    remove("attendance5.txt");
   	    rename("temp2.txt","attendance5.txt");
		getch();
		FiveAttendanceMenu();
}
void FiveAttendance_Delete()
{
	char name[20];
	int found=0;
	system("cls");
	Title();// call Title function
	FILE *ek, *ft;
	ft=fopen("temp.txt","w+");
	ek=fopen("attendance5.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Students Attendance !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);
	
	while (fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8)!=EOF)
	{
		if (strcmp(a.usn,name)!=0)
		fprintf(ft,"%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
		else 
		{
			printf("%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
		getch();
		FiveAttendanceMenu();
	}
	else
	{
		fclose(ek);
		fclose(ft);
		remove("attendance5.txt");
		rename("temp.txt","attendance5.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		FiveAttendanceMenu();
	}
}

/* ************************************************* Sixth Sem Attendance Menu ********************************************* */
void SixAttendanceMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Sixth Sem Attendance Records");
		printf("\n------------------------------------------------------------------------------------------------");
	gotoxy(20,5);
		printf("1. View Students Attendance");
		gotoxy(20,7);
		printf("2. Search Students Attendance");
		gotoxy(20,9);
		printf("3. Edit Students Attendance");	
		gotoxy(20,11);
		printf("4. Delete Students Attendance");
		gotoxy(20,13);
		printf("5. Back to Student Main menu");
		gotoxy(20,15);
		printf("Please Enter a choice[1-5]:");
		scanf("%i",&choice);
		switch(choice)
			{
				
				case 1:
			    		SixAttendance_List();
						break;
				case 2:
						SixAttendance_Search();
						break;
				case 3:
						SixAttendance_Edit();
						break;
				case 4:
						SixAttendance_Delete();
						break;
				case 5:
						AttendanceMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
	
}
void SixAttendance_Add(void)
{
	
	
	char ans;
	FILE*ek;//file pointer
	ek=fopen("attendance6.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD ATTENDANCE                      ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ***************************************** Registration ********************************************************************** */	
     
    printf("\n\t\t\tUSN:");
    scanf(" %s",a.usn);
/* ******************************************* Name ************************************************************** */	    

	printf("\n\t\t\tName: ");
	scanf("%s %s",a.fname,a.lname);

/* ***************************************** SUBJECT1 ATTENDANCE   ********************************************************************** */	
    printf("\n\t\t\tSubject 1 Attendance:");
    scanf(" %s",a.att1);
/* ***************************************** SUBJECT2 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 2 Attendance:");
    scanf(" %s",a.att2);
/* ***************************************** SUBJECT3 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 3 Attendance:");
    scanf(" %s",a.att3);
/* ***************************************** SUBJECT4 ATTENDANCE   ********************************************************************** */	
    printf("\n\t\t\tSubject 4 Attendance:");
    scanf(" %s",a.att4);
/* ***************************************** SUBJECT5 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 5 Attendance:");
    scanf(" %s",a.att5);
/* ***************************************** SUBJECT6 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 6 Attendance:");
    scanf(" %s",a.att6);
/* ***************************************** SUBJECT7 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 7 Attendance:");
    scanf(" %s",a.att7);
/* ***************************************** SUBJECT8 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 8 Attendance:");
    scanf(" %s",a.att8);

	fprintf(ek," %s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
    printf("\n\n\t\t\t.... Attendance Recorded Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	Six_List();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	MainMenu();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void SixAttendance_List(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("attendance6.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!6th Sem Students Attendance !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("USN");
		gotoxy(20,15);
		printf("Name");
		gotoxy(45,15);
		printf("SUB1");
		gotoxy(53,15);
		printf("SUB2");
		gotoxy(60,15);
		printf("SUB3");
		gotoxy(67,15);
		printf("SUB4");
		gotoxy(74,15);
		printf("SUB5");
		gotoxy(81,15);
		printf("SUB6");
		gotoxy(88,15);
		printf("SUB7");
		gotoxy(95,15);
		printf("SUB8");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",a.usn);
			gotoxy(20,row);
			printf("%s %s",a.fname,a.lname);
			gotoxy(45,row);
			printf("%s",a.att1);
			gotoxy(53,row);
			printf("%s",a.att2);
			gotoxy(60,row);
			printf("%s",a.att3);
			gotoxy(67,row);
			printf("%s",a.att4);
			gotoxy(74,row);
			printf("%s",a.att5);
			gotoxy(81,row);
			printf("%s",a.att6);
			gotoxy(88,row);
			printf("%s",a.att7);
			gotoxy(95,row);
			printf("%s",a.att8);
			
			row++;
		}
		fclose(ek);
		getch();
		SixAttendanceMenu();
}
void SixAttendance_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("attendance6.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Students Attendance !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Students USN to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8)!=EOF)
	{
		if(strcmp(a.usn,name)==0)
		{
		gotoxy(1,15);
		printf("USN");
		gotoxy(20,15);
		printf("Name");
		gotoxy(45,15);
		printf("SUB1");
		gotoxy(53,15);
		printf("SUB2");
		gotoxy(60,15);
		printf("SUB3");
		gotoxy(67,15);
		printf("SUB4");
		gotoxy(74,15);
		printf("SUB5");
		gotoxy(81,15);
		printf("SUB6");
		gotoxy(88,15);
		printf("SUB7");
		gotoxy(95,15);
		printf("SUB8");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
			gotoxy(1,row);
			printf("%s",a.usn);
			gotoxy(20,row);
			printf("%s %s",a.fname,a.lname);
			gotoxy(45,row);
			printf("%s",a.att1);
			gotoxy(53,row);
			printf("%s",a.att2);
			gotoxy(60,row);
			printf("%s",a.att3);
			gotoxy(67,row);
			printf("%s",a.att4);
			gotoxy(74,row);
			printf("%s",a.att5);
			gotoxy(81,row);
			printf("%s",a.att6);
			gotoxy(88,row);
			printf("%s",a.att7);
			gotoxy(95,row);
			printf("%s",a.att8);
			break;
		}
	   }
	   if(strcmp(a.usn,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        SixAttendance_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		SixAttendanceMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void SixAttendance_Edit(void)
{
	FILE *ek, *ft;
  	int i,b, valid=0;
  	char ch;
  	char name[20];

  	system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("attendance6.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		SixAttendanceMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Students Attendance !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   printf("Enter the Student USN: ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			OneAttendanceMenu();
		}
		while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s   \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8)!=EOF)
		{
			if(strcmp(a.usn, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s %s %s %s %s %s %s %s %s %s %s   \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
				gotoxy(12,22);
				printf("Enter USN: ");
				scanf(" %s",a.usn);	   
				gotoxy(12,24);
				printf("Enter Name: ");
				scanf("%s %s",a.fname,a.lname); 
				gotoxy(12,26);
				printf("Enter Subject1 Attendance : ");
				scanf(" %s",a.att1);
				gotoxy(12,28);
				printf("Enter Subject2 Attendance : ");
				scanf(" %s",a.att2);
				gotoxy(12,30);
				printf("Enter Subject3 Attendance : ");
				scanf(" %s",a.att3);
				gotoxy(12,32);
				printf("Enter Subject4 Attendance : ");
				scanf(" %s",a.att4);
				gotoxy(12,34);
				printf("Enter Subject5 Attendance : ");
				scanf(" %s",a.att5);
				gotoxy(12,36);
				printf("Enter Subject6 Attendance : ");
				scanf(" %s",a.att6);
				gotoxy(12,38);
				printf("Enter Subject7 Attendance : ");
				scanf(" %s",a.att7);
				gotoxy(12,40);
				printf("Enter Subject8 Attendance : ");
				scanf(" %s",a.att8);
			    printf("\nPress U charecter for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %s %s %s %s %s %s %s %s   \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
				printf("\n\n\t\t\tStudent Attendance updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %s %s %s %s %s %s %s %s   \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	    fclose(ft);
	    fclose(ek);
	    remove("attendance6.txt");
   	    rename("temp2.txt","attendance6.txt");
		getch();
		SixAttendanceMenu();
}
void SixAttendance_Delete()
{
	char name[20];
	int found=0;
	system("cls");
	Title();// call Title function
	FILE *ek, *ft;
	ft=fopen("temp.txt","w+");
	ek=fopen("attendance6.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Students Attendance !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);
	
	while (fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8)!=EOF)
	{
		if (strcmp(a.usn,name)!=0)
		fprintf(ft,"%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
		else 
		{
			printf("%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
		getch();
		SixAttendanceMenu();
	}
	else
	{
		fclose(ek);
		fclose(ft);
		remove("attendance6.txt");
		rename("temp.txt","attendance6.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		SixAttendanceMenu();
	}
}

/* ************************************************* Seventh Sem Attendance Menu ********************************************* */
void SevenAttendanceMenu(void)//function decleration
{
	int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Seventh Sem Attendance Records");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. View Students Attendance");
		gotoxy(20,7);
		printf("2. Search Students Attendance");
		gotoxy(20,9);
		printf("3. Edit Students Attendance");	
		gotoxy(20,11);
		printf("4. Delete Students Attendance");
		gotoxy(20,13);
		printf("5. Back to Student Main menu");
		gotoxy(20,15);
		printf("Please Enter a choice[1-5]:");
		scanf("%i",&choice);
		switch(choice)
			{
				
				case 1:
			    		SevenAttendance_List();
						break;
				case 2:
						SevenAttendance_Search();
						break;
				case 3:
						SevenAttendance_Edit();
						break;
				case 4:
						SevenAttendance_Delete();
						break;
				case 5:
						AttendanceMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
	
}
void SevenAttendance_Add(void)
{

	
	char ans;
	FILE*ek;//file pointer
	ek=fopen("attendance7.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD ATTENDANCE                      ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ***************************************** Registration ********************************************************************** */	
     
    printf("\n\t\t\tUSN:");
    scanf(" %s",a.usn);
/* ******************************************* Name ************************************************************** */	    

	printf("\n\t\t\tName: ");
	scanf("%s %s",a.fname,a.lname);
/* ***************************************** SUBJECT1 ATTENDANCE   ********************************************************************** */	
    printf("\n\t\t\tSubject 1 Attendance:");
    scanf(" %s",a.att1);
/* ***************************************** SUBJECT2 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 2 Attendance:");
    scanf(" %s",a.att2);
/* ***************************************** SUBJECT3 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 3 Attendance:");
    scanf(" %s",a.att3);
/* ***************************************** SUBJECT4 ATTENDANCE   ********************************************************************** */	
    printf("\n\t\t\tSubject 4 Attendance:");
    scanf(" %s",a.att4);
/* ***************************************** SUBJECT5 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 5 Attendance:");
    scanf(" %s",a.att5);
/* ***************************************** SUBJECT6 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 6 Attendance:");
    scanf(" %s",a.att6);
/* ***************************************** SUBJECT7 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 7 Attendance:");
    scanf(" %s",a.att7);
/* ***************************************** SUBJECT8 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 8 Attendance:");
    scanf(" %s",a.att8);

	fprintf(ek," %s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
    printf("\n\n\t\t\t.... Attendance Recorded Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	Seven_List();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	MainMenu();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void SevenAttendance_List(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("attendance7.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!7th Sem Students Attendance !!!!!!!!!!!!!\n");
	gotoxy(1,15);
		printf("USN");
		gotoxy(20,15);
		printf("Name");
		gotoxy(45,15);
		printf("SUB1");
		gotoxy(53,15);
		printf("SUB2");
		gotoxy(60,15);
		printf("SUB3");
		gotoxy(67,15);
		printf("SUB4");
		gotoxy(74,15);
		printf("SUB5");
		gotoxy(81,15);
		printf("SUB6");
		gotoxy(88,15);
		printf("SUB7");
		gotoxy(95,15);
		printf("SUB8");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",a.usn);
			gotoxy(20,row);
			printf("%s %s",a.fname,a.lname);
			gotoxy(45,row);
			printf("%s",a.att1);
			gotoxy(53,row);
			printf("%s",a.att2);
			gotoxy(60,row);
			printf("%s",a.att3);
			gotoxy(67,row);
			printf("%s",a.att4);
			gotoxy(74,row);
			printf("%s",a.att5);
			gotoxy(81,row);
			printf("%s",a.att6);
			gotoxy(88,row);
			printf("%s",a.att7);
			gotoxy(95,row);
			printf("%s",a.att8);
			row++;
		}
		fclose(ek);
		getch();
		SevenAttendanceMenu();
}
void SevenAttendance_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("attendance7.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Students Attendance !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Students USN to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8)!=EOF)
	{
		if(strcmp(a.usn,name)==0)
		{
		gotoxy(1,15);
		printf("USN");
		gotoxy(20,15);
		printf("Name");
		gotoxy(45,15);
		printf("SUB1");
		gotoxy(53,15);
		printf("SUB2");
		gotoxy(60,15);
		printf("SUB3");
		gotoxy(67,15);
		printf("SUB4");
		gotoxy(74,15);
		printf("SUB5");
		gotoxy(81,15);
		printf("SUB6");
		gotoxy(88,15);
		printf("SUB7");
		gotoxy(95,15);
		printf("SUB8");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
			gotoxy(1,row);
			printf("%s",a.usn);
			gotoxy(20,row);
			printf("%s %s",a.fname,a.lname);
			gotoxy(45,row);
			printf("%s",a.att1);
			gotoxy(53,row);
			printf("%s",a.att2);
			gotoxy(60,row);
			printf("%s",a.att3);
			gotoxy(67,row);
			printf("%s",a.att4);
			gotoxy(74,row);
			printf("%s",a.att5);
			gotoxy(81,row);
			printf("%s",a.att6);
			gotoxy(88,row);
			printf("%s",a.att7);
			gotoxy(95,row);
			printf("%s",a.att8);
			break;
		}
	   }
	   if(strcmp(a.usn,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        SevenAttendance_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		SevenAttendanceMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void SevenAttendance_Edit(void)
{
	FILE *ek, *ft;
  	int i,b, valid=0;
  	char ch;
  	char name[20];

  	system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("attendance7.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		SevenAttendanceMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Students Attendance !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   	printf("Enter the Student USN: ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			OneAttendanceMenu();
		}
		while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s   \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8)!=EOF)
		{
			if(strcmp(a.usn, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s %s %s %s %s %s %s %s %s %s %s   \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
					gotoxy(12,22);
				printf("Enter USN: ");
				scanf(" %s",a.usn);	   
				gotoxy(12,24);
				printf("Enter Name: ");
				scanf("%s %s",a.fname,a.lname); 
				gotoxy(12,26);
				printf("Enter Subject1 Attendance : ");
				scanf(" %s",a.att1);
				gotoxy(12,28);
				printf("Enter Subject2 Attendance : ");
				scanf(" %s",a.att2);
				gotoxy(12,30);
				printf("Enter Subject3 Attendance : ");
				scanf(" %s",a.att3);
				gotoxy(12,32);
				printf("Enter Subject4 Attendance : ");
				scanf(" %s",a.att4);
				gotoxy(12,34);
				printf("Enter Subject5 Attendance : ");
				scanf(" %s",a.att5);
				gotoxy(12,36);
				printf("Enter Subject6 Attendance : ");
				scanf(" %s",a.att6);
				gotoxy(12,38);
				printf("Enter Subject7 Attendance : ");
				scanf(" %s",a.att7);
				gotoxy(12,40);
				printf("Enter Subject8 Attendance : ");
				scanf(" %s",a.att8);
			    printf("\nPress U charecter for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %s %s %s %s %s %s %s %s   \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
				printf("\n\n\t\t\tStudent Attendance updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %s %s %s %s %s %s %s %s   \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	    fclose(ft);
	    fclose(ek);
	    remove("attendance7.txt");
   	    rename("temp2.txt","attendance7.txt");
		getch();
		SevenAttendanceMenu();
}
void SevenAttendance_Delete()
{
	char name[20];
	int found=0;
	system("cls");
	Title();// call Title function
	FILE *ek, *ft;
	ft=fopen("temp.txt","w+");
	ek=fopen("attendance7.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Students Attendance !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);
	
	while (fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8)!=EOF)
	{
		if (strcmp(a.usn,name)!=0)
		fprintf(ft,"%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
		else 
		{
			printf("%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
		getch();
		SevenAttendanceMenu();
	}
	else
	{
		fclose(ek);
		fclose(ft);
		remove("attendance7.txt");
		rename("temp.txt","attendance7.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		SevenAttendanceMenu();
	}
}

/* ************************************************* Eight Sem Attendance Menu ********************************************* */
void EightAttendanceMenu(void)//function decleration
{
int choice;
	system("cls");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,2);
		printf("Eighth Sem Attendance Records");
		printf("\n------------------------------------------------------------------------------------------------");
		gotoxy(20,5);
		printf("1. View Students Attendance");
		gotoxy(20,7);
		printf("2. Search Students Attendance");
		gotoxy(20,9);
		printf("3. Edit Students Attendance");	
		gotoxy(20,11);
		printf("4. Delete Students Attendance");
		gotoxy(20,13);
		printf("5. Back to Student Main menu");
		gotoxy(20,15);
		printf("Please Enter a choice[1-5]:");
		scanf("%i",&choice);
		switch(choice)
			{
				
				case 1:
			    		EightAttendance_List();
						break;
				case 2:
						EightAttendance_Search();
						break;
				case 3:
						EightAttendance_Edit();
						break;
				case 4:
						EightAttendance_Delete();
						break;
				case 5:
						AttendanceMenu();
						break;
				
				default:
					printf("Wrong Entry!!");
					exit(0);
					
						
			}
}
void EightAttendance_Add(void)
{
	
	
	char ans;
	FILE*ek;//file pointer
	ek=fopen("attendance8.txt","a");//open file in write mode
	printf("\n\t\t*******************************************************");
	printf("\n\t                     ADD ATTENDANCE                      ");
	printf("\n\t\t*******************************************************");
	printf("\n\n\t\t  ENTER THE DETAILS BELOW:");
/* ***************************************** Registration ********************************************************************** */	
     
    printf("\n\t\t\tUSN:");
    scanf(" %s",a.usn);
/* ******************************************* Name ************************************************************** */	    

	printf("\n\t\t\tName: ");
	scanf("%s %s",a.fname,a.lname);

/* ***************************************** SUBJECT1 ATTENDANCE   ********************************************************************** */	
    printf("\n\t\t\tSubject 1 Attendance:");
    scanf(" %s",a.att1);
/* ***************************************** SUBJECT2 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 2 Attendance:");
    scanf(" %s",a.att2);
/* ***************************************** SUBJECT3 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 3 Attendance:");
    scanf(" %s",a.att3);
/* ***************************************** SUBJECT4 ATTENDANCE   ********************************************************************** */	
    printf("\n\t\t\tSubject 4 Attendance:");
    scanf(" %s",a.att4);
/* ***************************************** SUBJECT5 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 5 Attendance:");
    scanf(" %s",a.att5);
/* ***************************************** SUBJECT6 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 6 Attendance:");
    scanf(" %s",a.att6);
/* ***************************************** SUBJECT7 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 7 Attendance:");
    scanf(" %s",a.att7);
/* ***************************************** SUBJECT8 ATTENDANCE  ********************************************************************** */	
    printf("\n\t\t\tSubject 8 Attendance:");
    scanf(" %s",a.att8);

	fprintf(ek," %s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
    printf("\n\n\t\t\t.... Attendance Recorded Successful ...");
    fclose(ek);//ek file is closed
    sd:
    getch();
    printf("\n\n\t\t\tDo you want to add more[Y/N]?? ");
    scanf(" %c",&ans);
    if (toupper(ans)=='Y')
	{
    	Eight_List();
	}
    else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
    	MainMenu();
	}
    else
    {
        printf("\n\t\tInvalid Input\n");
        goto sd;
    }
}
void EightAttendance_List(void)
{
	int row;
	system("cls");
	Title();
	FILE *ek;
	ek=fopen("attendance8.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!!8th Sem Students Attendance !!!!!!!!!!!!!\n");
		gotoxy(1,15);
		printf("USN");
		gotoxy(20,15);
		printf("Name");
		gotoxy(45,15);
		printf("SUB1");
		gotoxy(53,15);
		printf("SUB2");
		gotoxy(60,15);
		printf("SUB3");
		gotoxy(67,15);
		printf("SUB4");
		gotoxy(74,15);
		printf("SUB5");
		gotoxy(81,15);
		printf("SUB6");
		gotoxy(88,15);
		printf("SUB7");
		gotoxy(95,15);
		printf("SUB8");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
		while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8)!=EOF)
		{
			gotoxy(1,row);
			printf("%s",a.usn);
			gotoxy(20,row);
			printf("%s %s",a.fname,a.lname);
			gotoxy(45,row);
			printf("%s",a.att1);
			gotoxy(53,row);
			printf("%s",a.att2);
			gotoxy(60,row);
			printf("%s",a.att3);
			gotoxy(67,row);
			printf("%s",a.att4);
			gotoxy(74,row);
			printf("%s",a.att5);
			gotoxy(81,row);
			printf("%s",a.att6);
			gotoxy(88,row);
			printf("%s",a.att7);
			gotoxy(95,row);
			printf("%s",a.att8);
			row++;
		}
		fclose(ek);
		getch();
		EightAttendanceMenu();
}
void EightAttendance_Search(void)
{
	int row;
	char name[20];
	system("cls");
	Title();// call Title function
	FILE *ek;
	ek=fopen("attendance8.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Search Students Attendance !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Students USN to be searched:");
	scanf("%s",name);
	fflush(stdin);
	name[0]=toupper(name[0]);
	while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8)!=EOF)
	{
		if(strcmp(a.usn,name)==0)
		{
		gotoxy(1,15);
		printf("USN");
		gotoxy(20,15);
		printf("Name");
		gotoxy(45,15);
		printf("SUB1");
		gotoxy(53,15);
		printf("SUB2");
		gotoxy(60,15);
		printf("SUB3");
		gotoxy(67,15);
		printf("SUB4");
		gotoxy(74,15);
		printf("SUB5");
		gotoxy(81,15);
		printf("SUB6");
		gotoxy(88,15);
		printf("SUB7");
		gotoxy(95,15);
		printf("SUB8");
		gotoxy(1,16);
		printf("=================================================================================================================");
		row=17;
			gotoxy(1,row);
			printf("%s",a.usn);
			gotoxy(20,row);
			printf("%s %s",a.fname,a.lname);
			gotoxy(45,row);
			printf("%s",a.att1);
			gotoxy(53,row);
			printf("%s",a.att2);
			gotoxy(60,row);
			printf("%s",a.att3);
			gotoxy(67,row);
			printf("%s",a.att4);
			gotoxy(74,row);
			printf("%s",a.att5);
			gotoxy(81,row);
			printf("%s",a.att6);
			gotoxy(88,row);
			printf("%s",a.att7);
			gotoxy(95,row);
			printf("%s",a.att8);
			break;
		}
	   }
	   if(strcmp(a.usn,name)!=0)
	   {
		gotoxy(5,10);
		printf("Record not found!");
		getch();
	   }
	fclose(ek);
	L:
	getch();
	printf("\n\n\t\t\tDo you want to view more[Y/N]??");
    scanf("%c",&ans);
    if (toupper(ans)=='Y')
    {
        EightAttendance_Search();
    }
	else if(toupper(ans)=='N')
	{
		printf("\n\t\t Thank you :) :)");
    	getch();
		EightAttendanceMenu();
    }
	else
    {
    	printf("\n\tInvalid Input.\n");
    	goto L;
    }
}
void EightAttendance_Edit(void)
{
	FILE *ek, *ft;
  	int i,b, valid=0;
  	char ch;
  	char name[20];

  	system("cls");
  	Title();// call Title window
 		ft=fopen("temp2.txt","w+");
	   ek=fopen("attendance8.txt","r");
	   if(ek==NULL)
	   {
		printf("\n\t Can not open file!! ");
		getch();
		EightAttendanceMenu();
	   }
       	printf("\n\n\t\t\t!!!!!!!!!!!!!! Edit Students Attendance !!!!!!!!!!!!!\n");
	   	gotoxy(12,13);
	   printf("Enter the Student USN: ");
	   	scanf(" %s",name);
	   	fflush(stdin);
	   	name[0]=toupper(name[0]);
		gotoxy(12,15);
		
		if(ft==NULL)
		{
			printf("\n Can not open file");
			getch();
			OneAttendanceMenu();
		}
		while(fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s   \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8)!=EOF)
		{
			if(strcmp(a.usn, name)==0)
			{
				valid=1;
				gotoxy(25,17);
				printf("*** Existing Record ***");
				gotoxy(10,19);
				printf("%s %s %s %s %s %s %s %s %s %s %s   \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
					gotoxy(12,22);
				printf("Enter USN: ");
				scanf(" %s",a.usn);	   
				gotoxy(12,24);
				printf("Enter Name: ");
				scanf("%s %s",a.fname,a.lname); 
				gotoxy(12,26);
				printf("Enter Subject1 Attendance : ");
				scanf(" %s",a.att1);
				gotoxy(12,28);
				printf("Enter Subject2 Attendance : ");
				scanf(" %s",a.att2);
				gotoxy(12,30);
				printf("Enter Subject3 Attendance : ");
				scanf(" %s",a.att3);
				gotoxy(12,32);
				printf("Enter Subject4 Attendance : ");
				scanf(" %s",a.att4);
				gotoxy(12,34);
				printf("Enter Subject5 Attendance : ");
				scanf(" %s",a.att5);
				gotoxy(12,36);
				printf("Enter Subject6 Attendance : ");
				scanf(" %s",a.att6);
				gotoxy(12,38);
				printf("Enter Subject7 Attendance : ");
				scanf(" %s",a.att7);
				gotoxy(12,40);
				printf("Enter Subject8 Attendance : ");
				scanf(" %s",a.att8);
			    printf("\nPress U charecter for the Updating operation : ");
				ch=getche();
				if(ch=='u' || ch=='U')
				{
				fprintf(ft,"%s %s %s %s %s %s %s %s %s %s %s   \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
				printf("\n\n\t\t\tStudent Attendance updated successfully...");
				}					
			}
			else
			{
			fprintf(ft,"%s %s %s %s %s %s %s %s %s %s %s   \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);	
			}
		 }
		 if(!valid) printf("\n\t\tNO RECORD FOUND...");
	    fclose(ft);
	    fclose(ek);
	    remove("attendance8.txt");
   	    rename("temp2.txt","attendance8.txt");
		getch();
		EightAttendanceMenu();
}
void EightAttendance_Delete()
{
	char name[20];
	int found=0;
	system("cls");
	Title();// call Title function
	FILE *ek, *ft;
	ft=fopen("temp.txt","w+");
	ek=fopen("attendance8.txt","r");
	printf("\n\n\t\t\t!!!!!!!!!!!!!! Delete Students Attendance !!!!!!!!!!!!!\n");
	gotoxy(12,8);
	printf("\n Enter Student USN to delete: ");
	fflush(stdin);
	gets(name);
	name[0]=toupper(name[0]);
	
	while (fscanf(ek,"%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8)!=EOF)
	{
		if (strcmp(a.usn,name)!=0)
		fprintf(ft,"%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
		else 
		{
			printf("%s %s %s %s %s %s %s %s %s %s %s \n",a.usn,a.fname,a.lname,a.att1,a.att2,a.att3,a.att4,a.att5,a.att6,a.att7,a.att8);
			found=1;
		}
	}//while loop ends
	if(found==0)
	{
		printf("\n\n\t\t\t Record not found....");
		getch();
		EightAttendanceMenu();
	}
	else
	{
		fclose(ek);
		fclose(ft);
		remove("attendance8.txt");
		rename("temp.txt","attendance8.txt");
		printf("\n\n\t\t\t Record deleted successfully :) ");
		getch();
		EightAttendanceMenu();
	}
}



/* ************************************************* Exit Screen ********************************************* */
void ex_it(void)//function to exit
{
	system("cls");
	Title();// call Title function
	printf("\n\n\n\n\n\t\t\tTHANK YOU FOR VISITING :)");
	getch();//holds screen
	
}
/* ************************************************* Login Screen ********************************************* */
void LoginScreen(void)//function for login screen
{
//list of variables	
int i=0,e=0	;
char Username[15];
char Password[15];
char c= ' ';
char original_Username[25]="ewit";
char original_Password[15]="ewit";

	do
	{
		printf("\n\n\n\n\t\t\t\tEnter your Username and Password :)");
		printf("\n\n\n\t\t\t\t\tUSERNAME:");
		scanf("%s",&Username);
	
		printf("\n\n\t\t\t\t\tPASSWORD:");
		while(i<10)
		{
	    	Password[i]=getch();
	    	c=Password[i];
	    	if(c==13) break;
	    	else printf("*");
	    	i++;
		}
		Password[i]='\0';
		if (strcmp(Username,original_Username)==0 && strcmp(Password,original_Password)==0)
		{
			printf("\n\n\n\t\t\t\t\t...Login Successfull...");
			getch();
			MainMenu();//call MainMenu function
			break;
		}
		else
		{
			printf("\n\t\t\tPassword in incorrect:( Try Again :)");
			e++;
			system("cls");
			Title();
			LoginScreen();
		}

	}
	while(e<=2);
	system("cls");
}	




