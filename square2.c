#include <stdio.h>
int main(){
	int i , n;
	printf("This programe prints a table of squares.\n");
	printf("Enter number of entries in table:");
	scanf("%d",&n);
	i = 1;
	for(;i<=n;i++){
		printf("%10d%10d\n",n,i*i);
	}
	return 0;
}
