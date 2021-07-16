#include <stdio.h>
#include <stdlib.h>

void push1(int);
void push2(int);
int pop1();
int pop2();
void queue();
void enqueue();
void dequeue();

int st1[100], st2[100];
int top1 = -1;
int top2 = -1;
int count = 0;

void main()
{
    int x,a=0;

    printf("\n Enqeue data into Queue");
    printf("\n Dequeue data from Queue");
    queue();
    while(1)
    {
        printf("\n enter choice");
        scanf("%d",&x);
        switch(x)
        {

            case 1:
                enqueue();
            break;
            case 2:
                dequeue();
            break;
            case 3:
                print();
            break;
            case 4:
                exit(0);

            default:
                printf("error");
        }
    }
}
void queue()
{
    top1 = top2 =-1;
}

void push1(int data)
{
//    top1++;
    st1[++top1] = data;
}

int pop1()
{
    return(st1[top1--]);
//    --top1;
}

void push2(int data)
{
//    top2++;
    st2[++top2] = data;
}

int pop2()
{
    return(st2[top2--]);
//    --top2;
}

void enqueue()

{
    int data, i;

    printf("\n enter the data");
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
    for (i=0;i<=count;i++)
    {
        push1(pop2());
    }
}

void print()
{
    int i;
    for (i=0; i<= top1;i++)
    {
        printf(" %d ",st1[i]);
    }
//    printf("\n stack2");
//    for (i=0; i<= top2;i++)
//    {
//        printf("%d",st2[i]);
 //   }
}






