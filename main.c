/* 
    Singly linked list operations:
    Create, Insert(atBeg,afterPos,AtEnd),Del , Display, Count, Reverse
        
    
*/ 

#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node* link;  
};
struct node *head = NULL , *p=NULL;

void create(); 
void insert();
void del();
void display(); 
void length(); 
void reverse();

void main()
{
    int ch;
    while(1)
    {  printf("\n\nMenu: \n1.Create \t\n2.Insert \t\n3.Del \t\n4.Display \t\n5.Length \t\n6.Reverse\t\n7. Exit\t\n Enter Choice: ");
       scanf("%d",&ch);
        switch(ch)
       {
        case 1: create();
                break;
        case 2: insert();
                break;
        case 3: del();
                break;
        case 4: display();
                break;
        case 5: printf("\nLength : %d",length());
                break;
        case 6: reverse();
                break;
        case 7: exit(0);
        default: printf("Invalid Choice");
       }
    }
}

void create()
{  struct node* newnode;
   int num=0;
   newnode = (struct node*) malloc(sizeof(struct node));
   newnode->link = NULL;
   printf("Enter data : ");
   scanf("%d",&num);
   newnode->data=num;
   if(head==NULL)
    { 
      head= newnode;
      p= head;
    }
    else
    {
        p->link = newnode;
        p=newnode;
        
    }
}

void insert()
{  int pos=0;
   display();
   printf("Enter position after where data to be added(pos:0 for beg): ")
   scanf("%d",&pos);
   if (pos>length())
   {
       printf("Invalid position");
       
   }
   else
   {   struct node* newnode,temp;
       newnode = (struct node) malloc(sizeof(struct node));
       newnode->link = NULL;
       printf("Enter data : ");
       scanf("%d",&num);
       newnode->data=num;
       temp=head;
       if(pos==0)
       {    
           printf("Adding at beg");
           newnode->link=temp;
           head = newnode;
       }
       else if(pos==length())
       {
           printf("Adding at End");
           while(temp->link!=NULL)
           {
               temp=temp->link
           }
           temp->link = newnode;
       }
       else
       {   
           int i=1;
           printf("Adding after %d position",pos);
           while(i<pos)
           {
              temp=temp->link;
                i++;              
           }
           newnode->link = temp->link ;
           temp->link = newnode;
           
       }
   }
    
}

void del()
{
    
}

void display()
{
    struct node* temp;
    temp=head;
    printf("\nData in the linked list : ");
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->link;
    }
    
}

int length()
{  struct node* temp;
   int count=0;
   temp=head;
   while(temp!=NULL)
   {
       count++;
       temp=temp->link;
   }
   return count; 
}

void reverse()
{
    
}