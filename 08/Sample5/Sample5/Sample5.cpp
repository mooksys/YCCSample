#include <iostream>
using namespace std;

int main()
{
    int a;
    int* pA;
	
    a = 5;
    pA = &a;
	
    cout << "���� a�� ���� " << a << " �Դϴ�.\n";

    *pA = 50;

    cout << "*pA��50�� �����߽��ϴ�.\n";
    cout << "���� a�� ���� " << a << " �Դϴ�.\n";

    return 0;
}