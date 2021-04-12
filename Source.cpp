#include <iostream>
#include "Deque.h"
#include "Deque_int.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	Deque<int> d;
	d.PushFront(4);
	d.PushBack(1);
	d.PushFront(11);
	d.PushBack(7);
	d.PushBack(2);

	cout << d;
	cout << "������ ������� c ������ : " << d.PeekFront() << endl
		<< 	"������ ������� � ����� : " << d.PeekBack() << endl
		<< "����� ��������� : " << d.GetSize() << endl;

	Deque_int d_i;
	d_i.PushFront(4);
	d_i.PushBack(1);
	d_i.PushFront(11);
	d_i.PushBack(7);
	d_i.PushBack(2);

	cout << d_i;
	cout << "������ ������� c ������ : " << d_i.PeekFront() << endl
		<< "������ ������� � ����� : " << d_i.PeekBack() << endl
		<< "����� ��������� : " << d_i.GetSize() << endl;

	return 0;
}