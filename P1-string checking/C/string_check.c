
									//Program to check for character repetitions in a string


#include <stdio.h>
#include <string.h>


int check(char strings[]){										//Function to check for character repetitions
	int length=strlen(strings);									//Find string length
	int j=0;
	while(j<length){											//Loops to check if the condition satisfies
		char a=strings[j];
		for (int i = j+1; i < length; ++i)
		{
			if (a==strings[i])
			{
				return 1;										//Returns if repetition found
			}
		}
		j++;
	}
	return 0;													//Returns if repetition not found
}

void output(int flag){											//Function to print result
	if (flag==0)
	{
		printf("No repetition\n");
	}
	else{
		printf("repetition found\n");
	}
}



int main(int argc, char const *argv[])							//Main function
{
	char strings[50];
	int flag;
	printf("Enter the input string: ");
	scanf("%s",strings);										//Read string
	flag=check(strings);
	output(flag);
	return(0);
}