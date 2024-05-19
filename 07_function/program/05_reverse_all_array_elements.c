/* write a program in c using function to reverse all elements of array, store results in another array 

Ex : input  : a[6] = {12, 42, 123, 34, 78, 414};

     output : b[6] = {21, 24, 321, 43, 87, 414};
*/

#include<stdio.h>

void rev_fun(int *a, int *b, int n){

        int rev;

        for(int i = 0; i < n; i++){

                int num = a[i];

                rev = 0;

                while(num){

                        rev = (rev * 10) + (num % 10);

                        num /= 10;
                }

                b[i] = rev;
        }

}

int main(void){

        int a[10], b[10], n;

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

        rev_fun(a, b, n);

        printf("\nb[%d] = ", n);

        for(int i = 0; i < n; i++)

                printf("%d ", b[i]);

        printf("\n");

        return 0;
}
