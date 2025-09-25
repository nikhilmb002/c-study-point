/* write a c program using recursion to check the given number is strong or not 
 
Ex: num = 145	output : yes strong

*/

#include<stdio.h>

int factorial(int num){

        if(num == 0)

                return 1;
        else
                return num * factorial(num - 1);

}

int rec_fun_strong(int num){

        if(num == 0)

                return 0;

        else{

                int rem = num % 10;

                return factorial(rem) + rec_fun_strong(num / 10);

        }

}

int main(){

        int num, flag;

        printf("\nEnter the number : ");

        scanf("%d", &num);

        flag = rec_fun_strong(num);

        flag == num ? printf("\nYes strong\n") : printf("\nNo strong\n");
}
