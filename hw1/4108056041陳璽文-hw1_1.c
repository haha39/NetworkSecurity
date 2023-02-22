#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//using namespace std;

#define TRUE 1


int main()
{
	int choice, key, i;
	char plaintext[100], ciphertext[100];
	
	while(TRUE) {
		printf("enter 0 to encrypt, enter 1 to decrypt, enter 2 to exit : \n");
		scanf("%d", &choice);
		fflush(stdin);
		if(choice == 2) {
			break;
		}
		printf("please enter key : \n");
		scanf("%d", &key);
		fflush(stdin);		
		if(choice == 0) {
			printf("please enter plaintext : \n");
			gets(plaintext);
			//printf("%s 		%d\n", plaintext, strlen(plaintext));
			for(i = 0; i < strlen(plaintext); i++) {
				if(plaintext[i] >= 'A' && plaintext[i] <= 'Z') {
					plaintext[i] += key;
					if(plaintext[i] > 'Z') {
						plaintext[i] -= 26;
					}
				}
				else if(plaintext[i] >= 'a' && plaintext[i] <= 'z') {
					plaintext[i] += key;
					if(plaintext[i] > 'z') {
						plaintext[i] -= 26;
					}
				}
				printf("%c", plaintext[i]);
			}
			printf("\n\n");
		}
		else {
			printf("please enter ciphertext : \n");
			gets(ciphertext);
			//printf("%s 		%d\n", ciphertext, strlen(ciphertext));
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
			printf("\n\n");	
		}	
	}

	system("PAUSE");
	return 0;
}



	
	/* 
	scanf("% %[A-z]", &str);
	fflush(stdin);
	
	//fgets();
	*/ 



