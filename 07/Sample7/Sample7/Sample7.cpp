#include <iostream>
using namespace std;

//sum�Լ��� ����
int sum(int x, int y)
{
    return x + y;
}

int main()
{
    int num1, num2, ans;

    cout << "ù ��° ������ �Է��Ͻʽÿ�.\n";
    cin >> num1;

    cout << "�� ��° ������ �Է��Ͻʽÿ�.\n";
    cin >> num2;

    ans = sum(num1, num2);

    cout << "�� ���� ���� " << ans << " �Դϴ�.\n";

    return 0;
}