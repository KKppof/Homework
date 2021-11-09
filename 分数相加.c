/*no.1:add two fractions
#include <stdio.h>
int main(){
	int num1,denom1,num2,denom2,result_num,result_denom;
	printf("Enter first fraction:");
	scanf("%d/%d",&num1,&denom1);
	printf("Enter second fraction:");
	scanf("%d/%d",&num2,&denom2);
	result_num = num1*denom2+num2*denom1;
	result_denom = denom1 * denom2;
	printf("The sum is %d/%d",result_num,result_denom);
	return 0;
	
} 
*/
/*p38-1
#include <stdio.h>
int main(){
	int x, y, z;
	printf("Enter a date (mm/dd/yyyy):");
	scanf("%d/%d/%d",&x,&y,&z);
	printf("You entered the date %d%02d%02d",z,x,y);
	return 0;
}
*/
/*p38-2
#include <stdio.h>
int main(){
	int number = 0;
	float price = 0;
	printf("Enter item number:");
	scanf("%d",&number);
	printf("Enter unit price:");
	scanf("%f",&price);
	printf("Enter a date (mm/dd/yyyy):");
	int x , y , z;
	scanf("%d/%d/%d",&x,&y,&z);
	if(price<=9999.99){
	printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");
	printf("%-d\t$%.2f\t%02d/%02d/%-d",number,price,x,y,z);
	return 0;
	}
}
*/
/*p38-4
#include <stdio.h>
int main(){
	int x,y,z;
	printf("Enter phone number[(xxx) xxx-xxxx]:");
	scanf("(%d) %d-%d",&x,&y,&z);
	printf("You entered %d.%d.%d",x,y,z);	
	return 0;
}
*/

*/
//p43-upc.c
#include <stdio.h>
int main(void){
	int d,i1,i2,i3,i4,i5,j1,j2,j3,j4,j5,first_sum,second_sum,total;
	printf("Enter the first (single) digit:");
	scanf("%1d",&d);
	printf("Enter first group of five digits:");
	scanf("%1d%1d%1d%1d%1d",&i1,&i2,&i3,&i4,&i5);
	printf("Enter second group of five digits:");
	scanf("%1d%1d%1d%1d%1d",&j1,&j2,&j3,&j4,&j5);
	first_sum=d+i2+i4+j1+j3+j5;
	second_sum=i1+i3+i5+j2+j4;
	total = first_sum * 3 + second_sum - 1;
	printf("Check digit:%d\n",9-(total%10));
	return 0;
}


