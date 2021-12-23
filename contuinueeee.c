/*
* continue refers to a statement in C, which, when executed, skips the rest of the code of the loop for the current iteration and then goes on to execute the next iteration.
* continue is always used with loops only
*/

#include <stdio.h>

int main(){
	int i;
	
	//for loop
	for(i= 0; i<5; ++i){
		if(i ==2){
			continue;
		}
		printf("%d\t", i);
	}
	
	printf("Rest of the code...\n");
	
	//while
	i = 0;
	while(i < 5){//1  2	3	4	5
		if(i == 2){
			++i;
			continue;
		}
		printf("%d\t", i);
		++i;
	}
	
	printf("Rest of the code...\n");
	
	//while
	i = 0;
	do {//1  2	3	4	5
		if(i == 2){
			++i;
			continue;
		}
		printf("%d\t", i);
		++i;
	}while(i < 5);
	
	printf("Rest of the code...\n");
	
	return 0;
}