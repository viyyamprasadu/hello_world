/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "function_call.h"
int main()
{
    const int a = 13;
    int b=12,result,i;
    char c = 'a';
    printf("a = %d , b = %d , c = %c \n",a,b,c);
    //left shift a by 3 and set the 7th bit position of b
    //a= a << 3;
    b= b | (1<< 7);
    c= c & ~(1<<5);
    printf("a = %d , b = %d , c = %c\n",a,b,c);
    result = do_math(a,b,'*');
    printf("result = %d \n",result);
    struct Node *node1  = NULL, *node2 = NULL, *node3 = NULL;
    /*struct Node *head  = NULL;//, *node2 = NULL, *node3 = NULL;
    struct Node *head1 = NULL;
    struct Node *head2 = NULL;
    struct Node *head3 = NULL;
    struct Node *head4 = NULL;
    head  = (struct Node *)malloc(sizeof(Node));
    head1 = (struct Node *)malloc(sizeof(Node));
    head2 = (struct Node *)malloc(sizeof(Node));
    head3 = (struct Node *)malloc(sizeof(Node));
    head4 = (struct Node *)malloc(sizeof(Node));
    
    head->data  = 0;
    head1->data = 1;
    head2->data = 2;
    head3->data = 3;
    head4->data = 4;
    
    
	
    head->next  = head1;
    head1->next = head2;
    head2->next = head3;
    head3->next = head4;
    head4->next = NULL;
    display_List(head,5);*/
    node1 = (struct Node *)malloc(sizeof(Node));
    node2 = (struct Node *)malloc(sizeof(Node));
    node3 = (struct Node *)malloc(sizeof(Node));
    //n= (struct Node *)malloc(sizeof(Node));
    //n.data = 5;
    node1->data = a;
    node1->next = node2;
    node2->data = b;
    node2->next = node3;
    node3->data = a+b;
    node3->next = node1;
    printf(" node1->data = %d, node2->data = %d , node3->data = %d \n",node1->data,node2->data,node3->data);
    printf(" node1->next = %p, node2->next = %p , node3->next = %p , node1 = %p \n",node1->next,node2->next,node2->next->next,node1);
    return 0;
}
