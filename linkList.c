#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
};

typedef struct node node;

node* taoNode(int val){
	node *newNode = (node*)malloc(sizeof(node));
	newNode->data = val;
	newNode->next = NULL;
	return newNode;
}
void themBack(node **head, int x){
	node *newNode = taoNode(x);
	node *temp = *head;
	if(temp == NULL){
		*head = newNode; return;
	}
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = newNode;
}
void themDau(node **head, int x){
	node *newNode = taoNode(x);
	newNode->next = *head;
	*head = newNode;
}
void duyet(node *head){
	while(head != NULL){
		printf("%d ", head->data);
		head = head->next;
	}
}
void xoadau(node **head){
	if(*head == NULL) return;
	node *temp = *head;
	*head = temp->next;
	free(temp);
}
int main(){
	node *head = NULL;
	themBack(&head, 2);
	themBack(&head, 5);
	themDau(&head, 4);
	xoadau(&head);
	duyet(head);
	return 0;
}