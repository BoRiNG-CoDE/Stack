	//Stack Implementaion using Linked List

#include <stdio.h>
#include <malloc.h>

struct stack
{
	int data;
	struct stack *next;	
};

struct stack *top=NULL;
struct stack *push(struct stack *,int);
struct stack *pop(struct stack *);
struct stack *display(struct stack *);

int main()
{
	int option,val;
	do
	{
		printf("\nPress 1 for PUSH: ");
		printf("\nPress 2 for POP: ");
		printf("\nPress 3 for Display: ");
		printf("\nPress 4 for Quit: ");
		scanf("\n%d",&option);

		switch(option)
		{
			case 1 : printf("\nEnter The Number: ");
						scanf("\n%d",&val);
					top=push(top,val);
					break;
			case 2: top=pop(top);
					break;
			case 3: top=display(top);
					break;
		}
	} while (option!=4);

	return 0;
}

//push the elements into the Stack

struct stack *push(struct stack *top,int val)
{
	struct stack *new_node;
	new_node=(struct stack *)malloc(sizeof(struct stack));
		new_node->data=val;
		
	if(top==NULL)
	{
		new_node->next=NULL;
		top=new_node;
	}
	else
	{

		new_node->next=top;
		top=new_node;
	}
	return top;
}

//pop the elemets from the Stack

struct stack *pop(struct stack *top)
{
	struct stack *ptr;
	ptr=top;
	if(top==NULL)
		printf("\nStack is UnderFlow");
	else
	{
		top=top->next;
		printf("\nThe Value is Deleted",ptr->data );
		free(ptr);
	}

	return top;
}

//display The Stack

struct stack *display(struct stack *top)
{
	struct stack *ptr;
	ptr=top;
	if(ptr==NULL)
		printf("\nStack is EMPTY: ");
	else
	{
		while(ptr!=NULL)
		{
			printf("\n%d",ptr->data);
			ptr=ptr->next;
		}
	}
	return top;
}