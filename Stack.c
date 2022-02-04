#include<stdio.h>
#include<stdlib.h>
void stackpush(int);
void stackpop();
void display();
struct node
{ int data;
  struct node *next;
}*top=NULL;
int main()
{
  int e,ch=0,c=0;
  struct node *newnode=malloc(sizeof(struct node));
  do
  {
      printf("\nMENU\n1.PUSH\n2.POP\n3.Display\nEnter your choice ");
      scanf("%d",&c);
      switch(c)
      {
          case 1 :  printf("Enter an element ");
                    scanf("%d",&e);
                    stackpush(e);
                    printf("Do you want to continue (0/1)");
                    scanf("%d",&ch);
                    break;
          case 2 : stackpop();
                   break;
          case 3 : display();
                    break;
          default: printf("\nWrong choice\n");
                   break;
      }
    }while(ch==1);
  return 0;
}
void stackpush(int e)
{
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=e;
    if(top==NULL)
    {
        top=newnode;
        newnode->next=NULL;
    }
    else
    {
        struct node *temp=malloc(sizeof(struct node));
        temp=top;
        top=newnode;
        newnode->next=temp;

    }
}
void stackpop()
{
    struct node *temp;
    temp=top;
    if(top==NULL)
    {
        printf("Stack empty");
    }
    else if(top!=NULL && temp->next==NULL)
    {
        top=NULL;
        free(temp);
    }
    else
    {
        top=temp->next;
        free(temp);
    }
}
void display()
{
    struct node *temp;
    temp=top;
    if(top==NULL)
    {
        printf("\nStack empty ");
    }
    else
    {
        while(temp->next!=NULL)
        {
            printf("%d->",temp->data);
            temp=temp->next;
        }
        printf("%d",&temp->data);
    }
}


