#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int num = 0;

    cout << "ù ��° ���ڸ� �Է��Ͻʽÿ�.\n";
    cin >> num;
    sum += num;
    cout << "�� ��° ���ڸ� �Է��Ͻʽÿ�.\n";
    cin >> num;
    sum += num;
    cout << "�� ��° ���ڸ� �Է��Ͻʽÿ�.\n";
    cin >> num;
    sum += num;

    cout << "3�� ������ ���� " << sum << "�Դϴ�\n";

    return 0;
}