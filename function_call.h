#include<stdio.h>

typedef struct Node
{
  int data;
  struct Node *next;
}Node;

int do_math(int , int, char);
void display_List(struct Node *,int);
