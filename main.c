#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
        
        int result = rand() % 100 + 1;
        int guess = 0;
        printf("I have in mind a number in between 1 and 100, can you find it?\n");
        while (guess != result){
                scanf("%d", &guess);
                if(guess >= 1 && guess <= 100){
                        if (guess > result){
			printf("The number to guess is lower\n");
		}
			else if (result > guess){
				printf("The number to guess is higher\n");
			}
		}
		else{
			printf("Erreur\n");
			return 1;
		}
	}
	printf("You just found the number, it was indeed %d\n", guess);
	return 0;
}
