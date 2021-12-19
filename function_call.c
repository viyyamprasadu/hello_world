#include<stdio.h>
#include "function_call.h"

int do_math(int x, int y, char ch);
{
    if(ch == '+') return x+y;
    if(ch == '-') return x-y;
    if(ch == '*') return x*y;
    if(ch == '/') return x/y;
}

void display_List(struct Node *head,int n)
{
    static int i=0;
	printf("display the list : %d\n",head->data);
	n--;
	i++;
	if(n >0)
		display_List(head+i,n);
}
