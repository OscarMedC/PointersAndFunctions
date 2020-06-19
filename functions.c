#include "functions.h"

void swap(int* a, int* b) {
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}

void swap_pointer(int** a, int** b) {
	int* temp = NULL;
	temp = *a;
	*a = *b;
	*b = temp;
}

int stringLength(char* string) {
	int l = 0;
	while (*string != '\0') {
		if (*string != ' ') {
			l++;
		}
		string++;
	}
	return l;
}