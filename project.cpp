
#include"database.h"

int main()
{
	vector<database> v1 ;
	database obj1 ;
	
	int choice = 0 ;
	
	while(choice != 8 )
	{
		printf("\n\t\t\t\tCONESTOGA COLLEGE\n" ) ;
		printf("\n\t\t\tENGINEERING DEPARTMENT DATABASE\n\n\n" ) ;
		printf("1. ADD STUDENT.\t\t\t\t\t" ) ;
		printf("2. DELETE STUDENT.\n\n" ) ;
		printf("3. DELETE ENTIRE STUDENT DATABASE.\t\t" ) ;
		printf("4. SEARCH STUDENT.\n\n" ) ;
		printf("5. DISPLAY ENTIRE STUDENT DATABASE.\t\t" ) ;
		printf("6. LOAD DATABASE FROM FILE.\n\n" ) ;
		printf("7. ADD RANDOM VALUE FOR TESTING.\t\t" ) ;
		printf("8. EXIT.\n\n") ;
		printf("What would you like to do?\n\n\n") ;

		choice = getch() ;

		switch( choice )
		{
		case 49:
			obj1.add_student( v1 ) ;
			obj1.ClearScreen() ;
		case 53:
			//obj1.Display_student(v1) ;
			break ;
		}
	}
	return 0 ;
}