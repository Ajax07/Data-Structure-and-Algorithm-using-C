#include <stdlib.h>
#include<stdio.h>
#include<string.h>


// dlt on the basis of the emp id

struct node{
    char name[20];
    int id;
    struct node* next;
    }node;

struct node* head;

void Insert(int x, char name[20])
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->id = x;
    strcpy(temp->name,name);
    temp ->next = head;
    head = temp;
}

void Delete(int n)
{
   struct node* temp1 = head;
   int i;
   for(i=0;i<n-2;i++)
        temp1 = temp1->next;
   struct node* temp2 = temp1->next;
   temp1->next = temp2->next;
   free(temp2);
}

void Print()
{
    struct node* temp =head;
    printf("list is:");
    while(temp!=NULL)
    {
        printf("\n %s",temp->name);
        printf("\n %d",temp->id);
        printf("\n");
        temp= temp->next;
    }
}

int main(){
    head = NULL;
    printf("how many numbers of employee \n");
    int n,i,x,N;
    char name[20];
    scanf("%d",&n);
    while(1)
    {
        printf("\n enter choice");
        scanf("%d",&x);
        switch(x)
        {

            case 1:{
                for(i=0;i<n;i++){
                    printf("enter the empID \n");
                    scanf("%d",&x);
                    printf("enter the Name \n");
                    scanf("%s",name);
                    Insert(x,name);
                   // Print();
                    }
            break;
                }
            case 2:
                Print();
                break;
            case 3:{
                printf("enter a position to dlt\n");
                scanf("%d",&N);
                Delete(N);
                break;
            }
            case 4:
                exit(0);
            break;

}
    }
}
