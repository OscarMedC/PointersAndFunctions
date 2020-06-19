#include "functions.h"

int main() {

	// Deklarerar variabler
	int a = 5, b = 10;
	int* ptrA = NULL;
	int* ptrB = NULL;

	printf("Print the original values\n");
	printf("------------------------------------------\n");
	// Skriver ut variablernas värden
	printf("Value of a: %d\nValue of b: %d\n", a, b);
	// Skriver ut variablernas address i minnet
	printf("Address of a: %p\nAddress of b: %p\n\n", &a, &b);
	printf("Lets initialize the pointers\n");
	printf("------------------------------------------\n");
	// Skriver ut pekarnas innehåll 
	printf("Address of pointer a: %p\nAddress of pointer b: %p\n", ptrA, ptrB);

	printf("Sets new addresses for the pointers\n");
	// Sätter pekarnas innehåll till variablerna a och b's addresser i minnet.
	ptrA = &a;
	ptrB = &b;
	// Skriver ut pekarnas innehåll som är densamma som variablernas
	printf("Address of pointer a: %p\nAddress of pointer b: %p\n\n", ptrA, ptrB);

	// Byter värden på a och b
	printf("Lets swap a and b!\n");
	printf("------------------------------------------\n");
	swap(&a, &b);
	printf("Swapped values for a and b\n");
	printf("Value of a: %d\nValue of b: %d\n\n", a, b);

	// Byter pekarnas addresser
	printf("Lets swap the addresses of ptrA and ptrB\n");
	printf("------------------------------------------\n");
	swap_pointer(&ptrA, &ptrB);
	printf("Address of pointer a: %p\nAddress of pointer b: %p\n\n", ptrA, ptrB);

	// Text
	printf("Lets play with some text!\n");
	printf("------------------------------------------\n");
	// Dessa två är två olika sätt at skriva samma sak 
	char nOne[6] = "Oscar\0";
	char nTwo[] = "Oscar";
	printf("My name is %s\n", nOne);
	printf("My name is %s\n\n", nTwo);

	printf("Lets iterate through an char array on step at a time!\n");
	printf("------------------------------------------\n");
	// Skriver ut samma sak 
	for (int i = 0; i < 5; i++) {
		printf("%c", nOne[i]);
	}
	printf("\n");
	int i = 0;
	while (nTwo[i] != '\0') {
		printf("%c", nTwo[i]);
		i++;
	}

	printf("\n");

	char* cPtr = "Hello World!";
	char* cPtrTwo = "Hello My Old Friend!";

	while (*cPtr != '\0') {
		printf("%c", *cPtr);
		cPtr++;
	}

	printf("\n");

	printf("There is %d characters in %s\n", stringLength(cPtrTwo), cPtrTwo);









	return 0;
}