#include <stdio.h>
#include <stdlib.h>
void main ()
{
	struct node 
	{
		int data;
		struct node *next;
	};
	struct node *head=NULL, *pos=NULL, *tail=NULL;
	int ch,i=0,entry,a;
	while(1)
	{
		printf("\n 1.Insert\n 2.Display\n 3.Exit\n 4.Count\n 5.Search an element\n");
		printf("\n Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			 {
			 	printf("\n enter data:");
			 	scanf("%d",&entry);
			 	if (head==NULL)
			 	{
			 		head=(struct node*)malloc(sizeof (struct node));
			 		head->data=entry;
			 		pos= head;
					tail= head;
					i++;
					
				}
				else
				{
					tail->next=(struct node*) malloc(sizeof (struct node));
					tail=tail->next;
					tail->data=entry;
					i++;
				}
				break;
			}
			case 2:
			{
				pos=head;
				printf("Elements are:");
				while (pos!=NULL)
				{
					printf("\t%d", pos->data);
					pos=pos->next;
				}
				break;
			}
			case 3:
			{
				printf("\n Good bye\n");
				exit (0);
			}
			case 4:
			{
			 	printf("\n The count is :%d",i);
			 }
			 case 5:
			 {
			 	printf("\nEnter the element to be searched:\n");
				scanf("%d",&a);
				pos=head;
				
				{
			 	if(pos->data==a)
			 	{
			 		printf("The element is present\n");
			 	}
			 	else
			 	{
			 		printf ("The element is not present\n");
				}
				}
		}
}	
}
}
