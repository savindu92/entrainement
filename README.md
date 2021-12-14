# entrainement

#include <stdio.h>			 	  				   	     
#include <stdlib.h>			 	  				   	     
			 	  				   	     
int result;			 	  				   	     
result = rand() % 100 + 1;			 	  				   	     
			 	  				   	     
printf("I have in mind a number in between 1 and 100, can you find it ?");			 	  				   	     
			 	  				   	     
int number_to_guess;			 	  				   	     
scanf("%d",number_to_guess);			 	  				   	     
			 	  				   	     
while(number_to_guess != result){			 	  				   	     
    if(number_to_guess < result){			 	  				   	     
        printf("The number to guess is higher")			 	  				   	     
    }			 	  				   	     
    else if(number_to_guess > result){			 	  				   	     
        printf("The number to guess is lower")			 	  				   	     
    }			 	  				   	     
    else if(number_to_guess = result){			 	  				   	     
        printf("You just found the number , it was indeed %d", result);			 	  				   	     
    }			 	  				   	     
}			 	  				   	     
return 0;			 	  				   	     
