//circular queue
#include<stdio.h>
#include<stdlib.h>
#define N 5
int queue[5];
int front=-1;
int rear=-1;
void enqueue()
{
	int item;
	printf("enter the item you want to incert:");
	scanf("%d",&item);
	if((rear+1)%N==front)
	{
		printf("overflow");
	}
	else if(rear==-1 && front==-1)
	{
		rear=front=0;
		queue[rear]=item;
	}
	else
	{
		rear=(rear+1)%N;
		queue[rear]=item;
	}
}
void dequeue()
{
	if(rear==-1 && front==-1)
	{
		printf("under floew");
	}
	else if(front==rear)
	{
		printf("the dequed element is:%d",queue[front]);
		front=rear=-1;
	}
	else
	{
		front=(front+1)%N;
	}
}
	void display()
	{
		int i=front;
		while(i!=rear)
		{
			printf(" the elements are:%d\n",queue[i]);
			i=(i+1)%N;
			printf("the elements are:%d",queue[rear]);
		}
	}
	void peek()
	{
		printf("the peek element is %d:",queue[front]);
	}
	void search() {
 int x,i,j;
 printf("Enter the element to search : ");
 scanf("%d",&x);
 if(front<=rear) {
 int f1=0;
 for(i=front;i<=rear;i++) {
 if(queue[i]==x) {
 printf("Element found at position %d",i);
 f1=1;
 break;
 }
 }
 if(f1==0)
 printf("Element not found");
 }
 else {
 int f=0;
 for(i=front;j=1,i<N;i++,j++) {
 if(queue[i]==x) {
 f=1;
 printf("Element found at position : %d",j);
 break;
 }
 }
 if(f==0) {
 int f2=0;
 for(i=0;i<=rear;i++) {
 if(queue[i]==x) {
 printf("Element found at position : %d",i+N-1);
 f2=1;
 break;
 }
}
 if(f2==0)
 printf("Element not found");
 }
 }
}

int main()
{
	int ch;
	do
	{
	printf("enter the options:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:enqueue();
		break;
		case 2:dequeue();
		break;
		case 3:display();
		break;
		case 4:peek();
		break;
		case 5:search();
		break;
		default : printf("eneter the invalid condition");
	}	
	}
	while(ch!=5);
	return 0;
}
		
	



