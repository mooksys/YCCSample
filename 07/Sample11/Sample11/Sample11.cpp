#include <iostream>
using namespace std;

//buy�Լ� ����
void buy(int x = 10);

//buy�Լ� ȣ��
int main()
{
    cout << "ó�� ���Ű��� 100���� �Դϴ�.\n";
    buy(100);

    cout << "�� ��° ���Ű��� �⺻���� �Դϴ�.\n";
    buy();

    return 0;
}

//buy�Լ� ����
void buy(int x)
{
    cout << x << "���� ¥�� ������ �����߽��ϴ�.\n";
}