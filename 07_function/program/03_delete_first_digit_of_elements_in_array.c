/* write a program in c using function to delete first digits of all elements in array
 
Ex : input  : a[6] = {12, 142, 1234, 314, 78, 414};

     output : b[6] = {2, 42, 234, 34, 8, 14}; 
*/

#include<stdio.h>

void del_fun(int *a, int n){

	for(int i = 0; i < n; i++){
	
		int num = a[i];

		int div = 1;

		while(num >= 10){
		
			num /= 10;		

			div *= 10;
		}

		a[i] = a[i] % div;
	}

}

int main(void){

	int a[10], n;

        printf("\nEnter the no.of elements : ");

        scanf("%d", &n);

        for(int i = 0; i < n; i++){

                printf("\nEnter the %d element : ", i);

                scanf("%d", &a[i]);
        }

        printf("\na[%d] = ", n);

        for(int i = 0; i < n; i++)

                printf("%d ",a[i]);

        printf("\n");

        del_fun(a, n);

        printf("\na[%d] = ", n);

        for(int i = 0; i < n; i++)

                printf("%d ", a[i]);

        printf("\n");

        return 0;

}
