#include<bits/stdc++.h>
#include "node.h"
using namespace std;
struct doublylinkedlist {
	Node* Head = NULL;
	Node* Tail = NULL;

	// thêm node vào danh sách liên kết 
	// mặc định thêm vào cuối tương đương với hàm insertTail
	void add(int v) {
		Node* newNode = makeNode(v);
		if (Head == NULL) {
			Head = newNode;
			Tail = newNode;
		}
		else {
			Tail->next = newNode;
			newNode->prev = Tail;
			Tail = newNode;
		}
	}

	// thêm nhiều node cùng lúc (mặc định thêm lần lượt vào cuối)
	void addRange() {
		int k;
		cout << "Nhap so phan tu muon them: ";
		cin >> k;
		for (int i = 0; i < k; i++)
		{
			cout << "phan tu thu: ", i + 1;
			int x; cin >> x;
			add(x);
		}
	}
	// lấy ra node ở vị trí bấy lỳ
	Node* getNode(int ind) {
		int i = 0;
		Node* tmp = Head;
		while (tmp != NULL && ind != i) {
			tmp = tmp->next;
			i++;
		}
		return tmp;
	}
	// lấy giá trị của node ở vị trí index
	int getValue(int ind) {
		Node* tmp = Head;
		for (int i = 0; i < ind; i++)
		{
			tmp = tmp->next;
		}
		return tmp->data;
	}

	// thêm node vào đầu danh sách
	void insertHead(int v) {
		Node* newNode = makeNode(v);
		if (!Head) {
			Head = newNode;
			Tail = newNode;
		}
		else {
			Head->prev = newNode;
			newNode->next = Head;
			Head = newNode;
		}
	}
	// thêm node vào cuối
	void insertTail(int v) {
		Node* newNode = makeNode(v);
		if (Head == NULL) {
			Head = newNode;
			Tail = newNode;
		}
		else {
			Tail->next = newNode;
			newNode->prev = Tail;
			Tail = newNode;
		}
	}
	// thêm node vào vị trí bất kỳ
	void insert(int v, int ind) {
		if (ind == 0) {
			insertHead(v);
		}
		else if (ind == getSize() - 1)
			insertTail(v);
		else {
			Node* tmp = Head;
			for (int i = 0; i < ind; i++) {
				tmp = tmp->next;
			}
			Node* newNode = makeNode(v);
			tmp->prev->next = newNode;
			newNode->prev = tmp->prev;
			newNode->next = tmp;
			tmp->prev = newNode;
		}
	}

	// in danh sách liên kết
	void print() {
		Node* tmp = Head;
		if (!Head) {
			cout << "Empty\n";
		}
		else {
			while (tmp != NULL) {
				cout << tmp->data << " ";
				tmp = tmp->next;
			}
			cout << "\n";
		}

	}

	// duyệt ngược danh sách
	void reversePrint() {
		Node* tmp = Tail;
		if (!Tail) {
			cout << "Empty\n";
		}
		else {
			while (tmp != NULL) {
				cout << tmp->data << " ";
				tmp = tmp->prev;
			}
			cout << "\n";
		}

	}

	// trả về số phần tử của danh sách liên kết
	int getSize() {
		int d = 0;
		Node* tmp = Head;
		while (tmp != NULL)
		{
			d++;
			tmp = tmp->next;
		}
		return d;
	}

	// xoá node đầu danh sách
	void removeHead() {
		if (!Head) {
			cout << "Empty\n";
			return;
		}
		Head = Head->next;
		Head->prev = NULL;
	}
	// xoá node cuối danh sách
	void removeTail() {
		if (!Tail) {
			cout << "Empty\n";
			return;
		}
		Tail = Tail->prev;
		Tail->next = NULL;
	}

	// xoá node ở vị trí bất kỳ
	void removeAt(int ind) {
		if (!Head) {
			cout << "Empty\n";
		}
		else if (ind == 0)
			removeHead();
		else if (ind == getSize() - 1)
			removeTail();
		else {
			Node* tmp = Head;
			for (int i = 0; i < ind; i++)
				tmp = tmp->next;
			tmp->prev->next = tmp->next;
			tmp->prev->prev = tmp->prev;
			delete tmp;
		}
	}
	// xoá toàn bộ danh sách
	void removeAll() {
		if (!Head)
			cout << "Empty\n";
		else {
			Head->next = NULL;
			Head = NULL;
			Tail = NULL;
		}
	}

};
