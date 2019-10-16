#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define STR 25
int main() {
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int num;
	char col[STR];
	int i=0,j,k=0;
	int temp;
	int reminder;
	printf("Enter column number of Spread Sheet:");
	scanf("%d",&num);
	while(num>0){
		reminder = num%26;
		if (reminder==0)
		{
			col[i++] = 'Z';
			num = (num/26)-1;
		}
		else
		{
			col[i++] = (reminder-1) + 'A';
			num = num/26;
		}
	}
	col[i] = '\0';
	j=0;
	k=strlen(col)-1;
	while(j<k)
	{
		temp=col[j];
		col[j]=col[k];
		col[k]=temp;
		j++;
		k--;
	}
	printf("%s\n",col);
	return 0;
}
