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
	cout << "Danh sach ban dau\n";
	listA.print();
	
	listA.insertHead(100);//thêm 100 vào đầu
	listA.insert(10, 3);// thêm 10 vào vị trí 3
	listA.insertTail(0); //thêm 0 vào cuối
	cout << "Danh sach sau khi them\n";
	listA.print();

	cout << "Node dau tien: ";
	cout<<listA.getValue(0)<<endl;// lấy giá trị của node đầu tiên

	listA.removeAt(2);// xoá node ở vị trí 2
	listA.removeTail();// xoá node ở vị trí cuối
	cout << "Danh sach sau khi xoa\n";
	listA.print();
	cout << "Danh sach sau khi xoa het phan tu\n";
	listA.removeAll();// xoá toàn bộ danh sách
	listA.print();
	
}
