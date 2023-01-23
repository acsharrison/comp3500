#include<stdio.h>
#include<math.h>
int main() {
   double arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
   double sum=0;
   double avg = 0;
   
   for(int i = 0; i < 10; i++) {
     
	sum = sum + arr[i];
	printf("arr[%d]=%.2f, sum=%.2f\n",
			i, arr[i], sum);
   }
   avg = sum / 10;
   printf("Average of array values is: %.2f\nf", avg);   
   
   return 0;
}
