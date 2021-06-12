#include<stdio.h>
#define MAX 5
int front,rear;

char q[MAX];
void insert();
void delete();
void display();

void main()
{
	int choice;
	while(1)
	{
		printf("\nCIRCULAR QUEUE OPERATION\n");
		printf("\n1.insert");
		printf("\t2.delete");
		printf("\t3.display");
		printf("\t4.exit");
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:insert();
				break;
			case 2:delete();
				break;
			case 3:display();
				break;
			case 4:return;
			default:printf("Invalid choice");
		}
	}
}
void insert()
{
	char item;
	if(front==(rear+1)%MAX)
	{
		printf("\nQueue is overflow\n");
		return;
	}
	rear=(rear+1)%MAX;
        printf("Enter the character:");
	fflush(stdin);
 	scanf("%c",&item);
        q[rear]=item;
}
void delete()
{
  if(front==rear)
  {
	printf("\n Queue is UNDERFLOW\n");
	return;
  }
 front=(front+1)%MAX;
 printf("\n Deleted character is:%c",q[front]);
 return;
}
void display()
{
	int i;
	if(front==rear)
	{
		printf("queue is empty\n");
		return;
	}
	printf("Elements are :\n");
	for(i=(front+1)%MAX; i!=rear; i=(i+1)%MAX)
	{
		printf("%c\t",q[i]);
	}
	printf("%c\n",q[i]);
}


