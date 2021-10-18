/* 
	Author:			Emma Gillespie
	Date:				September 26th 2021
	Description:	Prints user input as Title case or reversed title case
*/

#include<stdio.h>

int main() {

	//Variables
	char userArr[41] = {'\0'}; 
	int flag = 1;
	char choice;
	
	while (flag == 1) {
		// Give user choice and set variable choice
		printf("===========================================================\n");
		printf("Please choose an operation from the menu below:\n");
		printf("\t1. Reverse Titlecase\n\t2. Titlecase\n\tq. Quit\n\n\tChoice: ");
		scanf(" %c", &choice);
		
		if (choice == 'q') {
			flag = 0;
		} else {
			// Get user input for the string
			printf("Enter a string length <= 40: ");
			scanf(" %[^\n]s", &userArr);
			
			if (choice == '1') { // Choice for capitalized
			
				for (int count = 0; count < sizeof(userArr) -1; count++) { // Checks each char in user input
					if (userArr[count] >= 97 && userArr[count] <= 122) { // Turns all lower case to upper
						userArr[count] = userArr[count] - 32;
					}
					
					// Filters to turn appropriate upper case to lower case
					if (count == 0) {
						userArr[count] = userArr[count] + 32;
					}
					
					if (userArr[count - 1] == 32 && ((userArr[count] >= 97 && userArr[count] <= 122) || (userArr[count] >= 65 && userArr[count] <= 90))) {
						userArr[count] =  userArr[count] + 32;
					}
				}
			
				printf("Capitalized string: \n%s\n", userArr);
			} else if (choice == '2') { // Choice for title case
			
				for (int count = 0; count < sizeof(userArr) -1; count++) { // Checks each char in user input
					if (userArr[count] >= 65 && userArr[count] <= 90) { // Turns all upper to lower case
						userArr[count] = userArr[count] + 32;
					}
					
					// Filters to turn appropriate lower class to upper class
					if (count == 0) {
						userArr[count] = userArr[count] - 32;
					}
					
					if (userArr[count - 1] == 32 && ((userArr[count] >= 97 && userArr[count] <= 122) || (userArr[count] >= 65 && userArr[count] <= 90))) {
						userArr[count] =  userArr[count] - 32;
					}
				}
			
				printf("Title Cased String: \n%s\n", userArr);
			}
		}
	}
	
	return 0;
}
