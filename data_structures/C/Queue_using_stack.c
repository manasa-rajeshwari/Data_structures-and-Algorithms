#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void push1(int);
void push2(int);
int pop1();
int pop2();
void enqueue();
void dequeue();
void display();
void create();
int st1[100],st2[100];
int top1=-1,top2=-1;
int count =0;
int main() {
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int i,n;
	printf("Enter no.of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		enqueue();
	dequeue();
	dequeue();
	display();
return 0;
}
void create(){
	top1=top2=-1;
}
void push1(int data)
{
	st1[++top1]=data;
}
int pop1()
{
	return(st1[top1--]);
}
void push2(int data)
{
	st2[++top2]=data;
}
int pop2()
{
	return(st2[top2--]);
}
void enqueue()
{
	int data,i;
	scanf("%d",&data);
	push1(data);
	count++;
}
void dequeue()
{
	int i;
	for(i=0;i<=count;i++)
	{
		push2(pop1());
	}
	pop2();
	count--;
	for(i=0;i<=count;i++)
	{
		push1(pop2());
	}
}
void display()
{
	int i;
	for(i=0;i<=top1;i++)
	{
		printf("%d ",st1[i]);
	}
}


