#include <iostream>
#include "doublylinkedlist.h"
#include "node.h"
using namespace std;

int main() {
	doublylinkedlist listA;
	listA.add(3);
	listA.add(2);
	listA.add(6);
	listA.add(4);
	listA.add(4);
	cout << "Danh sach ban dau\n";
	listA.print();
	
	listA.insertHead(100);//thêm 100 vào đầu
	listA.insert(10, 3);// thêm 10 vào vị trí 3
	listA.insertTail(0); //thêm 0 vào cuối
	cout << "Danh sach sau khi them\n";
	listA.print();

	cout << "Node tai vi tri 3 la: ";
	cout << listA.getValue(3) << "\n\n";// lấy giá trị của node ở vị trí 3

	listA.removeAt(2);// xoá node ở vị trí 2
	listA.removeTail();// xoá node ở vị trí cuối
	cout << "Danh sach sau khi xoa\n";
	listA.print();
	cout << "Danh sach sau khi xoa nhung Node co gia tri bang 4\n";
	listA.removeAll(4);// xoá tất cả những node có giá trị bằng 4
	listA.print();
	cout << "Danh sach sau khi xoa het tat ca Node\n";
	listA.clear();
	listA.print();
}
