#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int& rA = a;

    cout << "���� a�� ���� " << a << " �Դϴ�.\n";
    cout <<"���� rA�� ���� " << rA << " �Դϴ�.\n";

    rA = 50;

    cout << "rA��50�� �����߽��ϴ�.\n";
    cout << "����rA�� ����" << rA << "(��)�� ����Ǿ����ϴ�.\n";
    cout <<"���� a�� ���� " << a <<"(��)�� ����Ǿ����ϴ�.\n";
    cout << "���� a�� �ּҴ� " << &a << " �Դϴ�.\n";
    cout << "���� rA�� �ּҵ� " << &rA << " �Դϴ�.\n";

    return 0;
}