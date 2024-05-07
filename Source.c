#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "input.txt"

#define MAX_ADDRESS_LENGTH 20
#define MAX_NAME_LENGTH 20
#define NUM_RECORDS 50

/* Name information */
struct Person {
	char first_name[MAX_NAME_LENGTH];
	char last_name[MAX_NAME_LENGTH];
};

/* Address information */
struct Address {
	char street[MAX_ADDRESS_LENGTH];
	char city[MAX_ADDRESS_LENGTH];
	char state[MAX_ADDRESS_LENGTH];
	char zipcode[MAX_ADDRESS_LENGTH];
};

struct Record {
	struct Person person;
	struct Address address;
};

int main(void) {
	/* Open file in read-only mode for processing */
	FILE* file = fopen("input.txt", "r");
	if (file == NULL) {
		printf("Error: Unable to open file. Terminating program.\n");
		return -1;
	}

	/* Create an array of Record objects, where each index contains a Name, Address, City/State, and Zipcode */
	struct Record* records_ptr[NUM_RECORDS];


	return 0;
}

