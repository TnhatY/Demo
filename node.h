#pragma once
#include <iostream>
using namespace std;


struct Node {
	int data;
	Node* next;
	Node* prev;
};
Node* makeNode(int v) {
	Node* newNode = new Node();
	newNode->data = v;
	newNode->next = NULL;
	newNode->prev = NULL;
	return newNode;
}
