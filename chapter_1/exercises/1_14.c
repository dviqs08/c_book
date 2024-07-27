#include <stdio.h>

/* prints a histogram of different chars in input */

int main()
{
	int c;
	int nupper[26];
	int nlower[26];

	for (int i = 0; i < 52; ++i) nupper[i] = nlower[i] = 0;

  while ((c = getchar()) != EOF) 
		// uppercase 
		if (c >= 'A' && c <= 'Z')
			++nupper[c-'A']; 
		// lowercase
		else if (c >= 'a' && c <= 'z')
			++nlower[c-'a'];

	//uppercase 
	for (int i = 0; i < 26; ++i) {
		printf("%c: ", i + 65);
		for (int j = 0; j < nupper[i]; ++j) {
			printf("-");
		}
		printf("\n");
	}

	//lowercase
	for (int i = 0; i < 26; ++i) {
		printf("%c: ", i + 97);
		for (int j = 0; j < nlower[i]; ++j) {
			printf("-");
		}
		printf("\n");
	}
}
