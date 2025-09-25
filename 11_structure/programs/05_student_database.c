/* c program that allows user to input specified no. of students and stores the data in a structured manner using an array of structures */

#include<stdio.h>

#include<string.h>

#include<stdlib.h>

struct student{

	int roll_no;

	char name[20];
	
	float marks;

};

void print(struct student v[], int n){
	
	for(int i = 0; i < n; i++)

		printf("\n%d   %s   %.2f\n", v[i].roll_no, v[i].name, v[i].marks);		
}

int main(void){

	int n, i, response, op, j;
	
	printf("Enter the no. of students : ");

	scanf("%d", &n);

	struct student *v = malloc(n * sizeof(struct student)), t;

	for(i = 0; i < n; i++){
	
		printf("\nEnter the roll number : ");

		scanf("%d", &v[i].roll_no);

		printf("\nEnter the name        : ");

		scanf(" %[^\n]", v[i].name);

		printf("\nEnter the marks       : ");

		scanf("%f", &v[i].marks);	
	}

	print(v, n);	


	printf("\nFor sorting press 1 and enter otherwise press any button\n");

	printf("\nEnter option : ");

	scanf("%d", &response);

	if(response == 1){
	
		printf("\nselect order for sorting \n");

		printf("\n1. roll number wise\n2. name wise\n3. mark wise\n");

		printf("\nEnter option : ");

		scanf("%d", &op);	
		
		switch(op){
		
			case 1 : 

				for(i = 0; i < n - 1; i++){
			
					for(j = 0; j < n - 1 - i; j++){
					
						if(v[j].roll_no > v[j+1].roll_no){
						
							t = v[j];
						
							v[j] = v[j+1];

							v[j+1] = t;
						}					
					
					}

				}

				break;


			case 2 : 

				for(i = 0; i < n - 1; i++){
				
					for(j = 0; j < n - 1 - i; j++){
					
						if(strcmp(v[j].name, v[j+1].name) > 0){
						
							t = v[j];

							v[j] = v[j+1];

							v[j+1] = t;						
						} 
					
					}
				
				}	

				break;

			
			case 3 : 

				for(i = 0; i < n - 1; i++){
				
					for(j = 0; j < n - 1 - i; j++){
					
						if(v[j].marks > v[j+1].marks){
						
							t = v[j];

							v[j] = v[j+1];

							v[j+1] = t;						
						}
					
					} 

				}

			default : 

				printf("\nInvalid option !!!\n");

				free(v);

				return 1;
		}

		print(v, n);		
	}
	
	free(v);

	return 0;
}
