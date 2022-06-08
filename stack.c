#include<stdio.h>
#include<stdlib.h>
#define n 5
int top=-1;
int stack[n];

	void push(int val)
	{
	if(isfull())
	{
	printf("\n Overflow");
	}
	else
	{
	top++;
	stack[top]=val;
	printf("%d\n",stack[top]);
	}
	}
	void pop()
	{
	if(isempty())
	{
	printf("\n Underflow");
	}
	else
	{
	printf("%d\n",stack[top]);
	stack[top]=-1;
	top--;
	}
	}
	int isfull()
	{
	if(top==n-1)
	{
	return 1;
	}
	else
	{
	return 0;
	}
	}
	int isempty()
	{
	if(top==-1)
	{
	return 1;
	}
	else
	{
	return 0;
	}
	}
	void findtop()
	{
	printf("\n Top position %d",top);
	printf("\n Top Value %d",stack[top]);
	}
	void display()
	{
	int i,x;
	x=top;
	for(i=x;i>=0;i--)
	{
	printf("\n%d\n",stack[i]);
	}
	}
	
	
	void main()
	{
	int ch,s;
		while(1)
		{
		printf("\n1.Append \n2.Delete \n3.Topvalue \n4.Display\n5.Exit");
		printf("\nEnter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:
		{
		printf("\n Enter the data:");
		scanf("%d",&s);
		push(s);
		break;
		}
		case 2:
		{
		pop();
		break;
		}
		case 3:
		{
		findtop();
		break;
		}
		case 4:
		{
		display();
		break;
		}
		default:
		{
		printf("Wrong Option");
		break;
		}
		case 5:
		{
		exit(0);
		}
		}
		}
