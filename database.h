
#include<stdio.h>
#include<Windows.h>
#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<conio.h>

using namespace std ;

#pragma warning(disable:4996)

class database
{
protected:
		char first_name[256] ;
		char last_name[256] ;
		char age[256] ;
		int age_int ;
		char gender[256] ;
		char course[256] ;
		char registration_date[256] ;

public:

	void add_student( vector<database> &v2 )
	{
		
		//CLEAR SCREEN BEFORE PROCESSING FURTHER.

		int length = 0 ;
		int check = 0 ;
		int loop1 = 0;
		int user_gender = 0 ;

		database *var1 ;
		var1 = new database ;

		if( var1 == NULL )
		{
			cout << "Out of memory" << endl ; 
		}
		else
		{
			ClearScreen() ;
			cout << "\tENTER STUDENT INFORMATION" << endl << endl ;
			cout << "Enter Your First Name : " ;
			gets( (var1->first_name) ) ;
		
			cout << "Enter Your Last Name : " ;
			gets( var1->last_name) ;
		
			while( check == 0 )
			{
				cout << "Enter Your Age : " ;
				gets( var1->age ) ;

				length = strlen( var1->age ) ; 
				for( loop1 = 0 ; loop1 < length ; loop1++ )
				{
					if( isdigit( var1->age[loop1] ) == 0 )
					{
						cout << "\t\tINPUT ONLY DIGITS" << endl ;
						check = 0 ;
						break ;
					}
				}
	
				if( loop1 == length )
				{
					check = 1 ;
				}
			}
		
			var1->age_int = atoi(var1->age) ;
			if( ( var1->age_int < 1 ) || ( var1->age_int > 100 ) )
			{
				printf("Enter a valid range\n") ;
			}
			else
			{
				check = 1 ;
			}
			check = 0 ;
	
			while( check == 0 )
			{
				cout << "Choose Your Gender : " <<endl ;
				printf("1.  Male\n" ) ;
				printf("2.  Female\n" ) ;
				user_gender = getch() ;
				switch( user_gender ) 
				{
				case 49:
					strcpy( var1->gender , "Male" ) ;
					check = 1 ;
					break ;
				case 50:
					strcpy( var1->gender , "Female" ) ;
					check = 1 ;
					break ;
				default :
					printf("Enter a valid option\n") ;
				}
			}
		}

		v2.push_back( *var1 ) ;

		cout << "Student's Information is Added In The Database." << endl ;
	}


	void Display_student(vector<database> &v)
	{
		vector<database>::iterator i = v.begin() ;
		cout << "First name is : " << i->first_name << endl ;
		cout << "First name is : " << i->last_name << endl ;
		cout << "First name is : " << i->age << endl ;
		cout << "First name is : " << i->gender << endl ;
	}

	void SetPos( int x, int y )
	{
		static HANDLE hout = GetStdHandle(STD_OUTPUT_HANDLE) ;

		COORD pos = {y,x} ;
		SetConsoleCursorPosition(hout,pos ) ;  //	Sets the Coordinate position.
	}



	void ClearScreen()
	{
		SetPos(0,0) ;
		for( int i = 1 ; i <= 25 ; i++ )
		{
			for( int j = 1 ; j < 80 ;j++ )
			{
				printf(" " ) ;
			}
			printf("\n") ;
		}
	 
		SetPos(0,0) ;
	}
};