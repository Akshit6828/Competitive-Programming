// Enter your name as a comment for program identification
// Program assignment Age.cpp
// Enter your class section, and time

/* The program Age.cpp prompts the user to input today's
   date and his/her birth date, then calculates and displays
   the user's age. The program utilizes user-defined functions.*/
/* Dates are entered in integer format for month and year. */
/* An age, described in months and years is displayed. */

//header files
/* use the correct preprocessor directives for input/output */
#include <iostream>
#include <string>
using namespace std;

// user-defined function prototypes
/* the function getValue returns an integer value
   entered by the user in response to the prompt 
   in the string message */

/* the function getLetter returns a character value
   entered by the user in response to the prompt
   in the string message */


/* the function getValue returns an integer value
   entered by the user in response to the prompt 
   in the string message */
int getValue(string message)
{
	// declare variables
	// declare an integer value to enter a value
	int value;

	// prompt the user with the message passed to the function
	cout << message;
	// read in the value entered
	cin >> value;
	// return the value 
	return value;
}

/* the function getLetter returns a character value
   entered by the user in response to the prompt
   in the string message */
char getLetter(string message)
{
	// declare variables
	// declare a character value to enter a value
	char letter;

	// prompt the user with the message passed to the function
	cout << message;
	// read in the value entered
	cin >> letter;
	// return the value
	return letter;
}


int main()
{
	// declare variables
	/* declare integer variables thisYear, thisMonth,
	   year, month, ageYear, and ageMonth.  declare a character 
	   variable again to indicate if the process is
	   to continue. */
	int thisYear, thisMonth, year, month, ageYear, ageMonth;
	char again = 'y';
	
	// display program instructions
	cout << "This program asks you to enter today's year in 4 digits,\n"
         << "and today's month number.\n\n"
		 << "Then you will be asked to enter your birth in 4 digits,\n"
		 << "and your birth month in 2 digits.\n\n"
		 << "The program will calculate and display your age in years and months.\n";
	
	// assign to thisYear the value returned from a call to getValue	
    thisYear=getValue("Enter todays year in 4 digit");
	// assign to thisMonth the value returned from a call to getValue
	thisMonth=getValue("Enter todays month in number");

	// loop until the user indicates to end
	while (again == 'y')
	{
		// assign to year the value returned from a call to getValue
		year=getValue("Enter your Birth year in 4-digit :");
		// assign to month the value returned from a call to getValue
		month=getValue("Enter youe Birth month number :");

		// assign age the value of thisYear - year
		ageYear = thisYear - year;
		ageMonth = thisMonth - month;
		
		/* test to see is thisMonth is less than month
		if true
			subtract 1 from age and add 12 to month
		*/
		if (thisMonth < month)
		{
			ageYear--;
			ageMonth += 12;
		}

		// display the age in years and months
		cout << "\nYou are " << ageYear << " years and " << ageMonth << " months old.\n";

		// assign to again the value returned from getLetter
		
		// convert the value of again to lowercase
		again = tolower(again);
	
	}

return 0;
}

