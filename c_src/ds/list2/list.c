#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void initList(List *plist)
{
	plist->ptr = malloc(sizeof(Node));
	//plist->ptr->data =  ;		//dumy
	plist->ptr->next = NULL;
	
}

void cleanupList(List *plist)
{
	Node *p = plist->ptr;
	while (p ) {
		Node *tmp = p;
		p = p->next;
		
		free(tmp);
	}
}

void printList(const List *plist)
{
	Node *p = plist->ptr->next;
	printf("[");
	while (p ) {
		printf("%d", p->data);
		printf((p->next ) ? ", " : "");
		p = p->next;
	}
	printf("]\n");
}

void insertFirstNode(List *plist, int data)
{
	Node *p = malloc(sizeof(Node));
	p->data = data;
	p->next = plist->ptr->next;
	plist->ptr->next = p;
}

void insertNode(List *plist, int prevData, int data)
{
	Node *p = plist->ptr->next;
	while (p ) {
		if (p->data == prevData) {
			break;
		}
		p = p->next;
	}
	
	if (p ) {
		Node *p2 = malloc(sizeof(Node));
		p2->data = data;
		p2->next = p->next;
		p->next = p2;
	} else {
		//
	}
}

void deleteNode(List *plist, int data)
{
	Node *p1 = plist->ptr->next;
	Node *p2 = plist->ptr;
	
	while (p1 ) {
		if (p1->data == data)
			break;
		
		p1 = p1->next;
		p2 = p2->next;
	}
	
	if (p1 ) {
		p2->next = p1->next;
		free(p1);
	} else {
		//
	}
}
