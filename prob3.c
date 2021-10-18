/* 
	Author:			Emma Gillespie
	Date:				2021/10/17
	Description:	Enter values for two arrays and display information for them
*/

#include<stdio.h>

int main() {

	int intArr[6] = {0};
	char charArr[7] = {'\0'};
	
	for (int count = 0; count < 6; count++) {
		printf("Enter an Integer number %d: ", count +1);
		scanf(" %d", &intArr[count]);
	}
	
	// Code for char array
	printf("Enter an 6 letter max string: ");
	scanf(" %s", charArr);
	
	printf("Element\t\t Address\t Hexadecimal Value\t Value:\t\n");
	printf("==================================================================\n");
	// Prints Integer array
	for (int count = 0; count < 6; count++) {
		printf("Integer[%d]\t %p\t %x\t\t %d\n", count+1, &intArr[count], &intArr[count], &intArr[count]);
	}
	
	printf("==================================================================\n");
	//Prints Char array
	for (int count = 0; count < 6; count++) {
		printf("Char[%d]\t\t %p\t %x\t\t %c\n", count+1, &charArr[count], &charArr[count], &charArr[count]);
	}
	
	printf("==================================================================\n");

	return 0;
}
