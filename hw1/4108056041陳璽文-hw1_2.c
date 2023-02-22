#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//using namespace std;

#define TRUE 1


int main()
{
	int choice, key, i, j;
	char ciphertext[100];
	key = 1;
	printf("please enter ciphertext : \n");
	gets(ciphertext);
	//printf("%s 		%d\n", ciphertext, strlen(ciphertext));
	for(j = 0; j < 25 ; j++) {
		printf("key = %d : ", j+1);
		
		for(i = 0; i < strlen(ciphertext); i++) {
			if(ciphertext[i] >= 'A' && ciphertext[i] <= 'Z') {
				ciphertext[i] -= key;
				if(ciphertext[i] < 'A') {
					ciphertext[i] += 26;
				}
			}
			else if(ciphertext[i] >= 'a' && ciphertext[i] <= 'z') {
				ciphertext[i] -= key;
				if(ciphertext[i] < 'a') {
					ciphertext[i] += 26;
				}
			}
			printf("%c", ciphertext[i]);
		}
		printf("\n");
	}

	system("PAUSE");
	return 0;
}



	
	/* 
	scanf("% %[A-z]", &str);
	fflush(stdin);
	
	//fgets();
	*/ 



