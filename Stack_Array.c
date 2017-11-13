#include <stdio.h>
#define max 10

void push(int arr[],int val);
void pop(int arr[]);
void display(int arr[]);

int arr[max];
int top=-1;

int main()
{
int option,val;


do
{
	printf("\nPress 1 For Push: ");
	printf("\nPress 2 For pop: ");
	printf("\nPress 3 For display: ");
	printf("\nPress 4 for Quit: ");
	scanf("\n%d",&option);

	switch(option)
	{
		case 1: printf("\nEnter The value: ");
				scanf("\n%d",&val);
				push(arr,val);
				break;
		case 2: pop(arr);
				break;
		case 3: display(arr);
				break;
	}
}while(option!=4);

return 0;
}

//pushing The Elements into The stack

void push(int arr[],int val)
{
	if(top==max-1)
		printf("\nStack is Full ");
	else
	{
		top++;
		arr[top]=val;

	}
}

//pop the elements from Stack

void pop(int arr[])
{
	if(top==-1)
		printf("\nStack is Underflow");
	else
	{
		arr[top]=NULL;
		top--;
	}
}

//display the Stack

void display(int arr[])
{
	if(top==-1)
		printf("\nStack is Empty ");
	else
	{
		for (int i = top; i >=0 ; i--)
		{
			printf("\n%d",arr[i]);
		}
	}
}