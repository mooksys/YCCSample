#include <iostream>
using namespace std;

//buy�Լ��� ����
void buy(int x, int y)
{
    cout << x << " ���� ¥��, " << y << " ���� ¥�� ������ �����߽��ϴ�.\n";
}

//buy�Լ� ȣ��
int main()
{
    int num1, num2;

    cout << "�����Ͻô� ������ ������ ���Դϱ�?\n";
    cin >> num1;

    cout << "�����Ͻô� ������ ������ ���Դϱ�?\n";
    cin >> num2;

    buy(num1, num2);

    return 0;
}