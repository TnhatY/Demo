#include <bits/stdc++.h>
#include "doublylinkedlist.h"
#include "node.h"
using namespace std;

int main() {
	doublylinkedlist listA;
	listA.add(3);
	listA.add(2);
	listA.add(6);
	listA.add(4);
	listA.print();
	cout << listA.getNode(2)->data;
}