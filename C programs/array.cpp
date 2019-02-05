#include <iostream>

double getavg(int arr[], int size);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double avg;
	int balance[5] = { 36, 100, 64, 10,90};
	int *p;
	p=balance;
	
	avg = getavg(balance ,5);
	printf("The average of balance is %lf\n ",avg);
	
	//printing the value using pointers
	
	int i;
	
	for(i=0;i<5;i++){
		printf("*(p + %d) : %d\n",i, *(p + i));
	}
	
	// using addresses of alance
	
	for(i=0;i<5;i++){
		printf("*(balance + %d) : %d\n", i, *(balance + i));
	}
	
	return 0;
}

double getavg(int arr[], int size){
	int i;
	double avg, sum;
	
	for(i=0;i<size;i++)
	{
		sum +=arr[i];
	}
	
	avg=sum/size;
	
	return avg;
	
}
