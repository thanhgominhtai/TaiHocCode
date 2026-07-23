#include<stdio.h>
#include<stdlib.h>
struct node{
	char ma[20], ten[50];
	double gpa;
	struct node *next;
};
typedef struct node node;

node* makeNode(){
	node *newNode = (node*)malloc(sizeof(node));
	getchar();
	gets(newNode->ma);
	gets(newNode->ten);
	scanf("%lf", &newNode->gpa);
	newNode->next = NULL;
	return newNode;
}

void pushFront(node **head){
	node *newNode = makeNode();
	newNode->next = (*head);
	(*head) = newNode;
}

int main(){
	
}