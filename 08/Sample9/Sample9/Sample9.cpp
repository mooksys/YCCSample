#include <iostream>
using namespace std;

//swap�Լ� ����
void swap(int& x, int& y);

int main()
{
    int num1 = 5;
    int num2 = 10;
	
    cout << "���� num1�� ���� " << num1 << " �Դϴ�.\n";
    cout << "���� num2�� ���� "<< num2 << " �Դϴ�.\n";
    cout << "���� num1 �� num2�� ���� ��ȯ�մϴ�.\n";

    swap(num1, num2);

    cout << "���� num1�� ���� " << num1 << " �Դϴ�.\n";
    cout << "���� num2�� ���� "<< num2 << " �Դϴ�.\n";

    return 0;
}

//swap�Լ��� ����
void swap(int& x, int& y)
{
    int tmp;

    tmp = x;
    x = y;
    y = tmp;
}