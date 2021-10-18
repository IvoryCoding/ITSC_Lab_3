/* 
	Author:			Emma Gillespie
	Date:				September 26th 2021
	Description:	Turns 8 bit binary into hex value
*/

#include<stdio.h>

int main() {

	//Variables
	char binInput[8];
	int num = 0;
	int flag = 1;
	int countBreak;
	
	while (flag == 1) { // loop with a flag
		printf("============================================\n");
		printf("Please enter an 8 bit binary number: ");
			
		scanf(" %s", binInput); // Stores user input
		
		for (int count = 0; count < 8; count++) {
			if (binInput[count] == '0' || binInput[count] == '1') {
				flag = 1;
			} else {
				printf("bit %d (2) is not a binary digit", count);
				flag = 0;
				break;
			}
		
			num <<= 1; // Shifts bit 1 to the left
			num += binInput[count] - '0'; // sets num + array value - 48 (dec value of 0 in ascii)
		}
		
		if (flag == 1) {
			printf("Decimal equivalent: %d --> hex: 0x%x\n\n", num, num); // Prints dec and hex value
			num = 0;
		}
	}
	
	return 0;
}
