/* write a c program to get warning at compile time, output and run time error */

int main(){	// without adding stdio.h and using printf will generate implicit declaration warning  

	printf("%d\n", 10/0);	// 10/0 gives floating point exception run time error

}
