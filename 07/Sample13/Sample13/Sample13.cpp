#include <iostream>
using namespace std;

//�Լ� ���ø�
template <class T>
T maxt(T x, T y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main()
{
    int a, b;
    double da, db;

    cout << "���� 2���� �Է��Ͻʽÿ�.\n";
    cin >> a >> b;

    cout << "�Ҽ� 2���� �Է��Ͻʽÿ�.\n";
    cin >> da >> db;

    int ans1 = maxt(a, b);
    double ans2 = maxt(da, db);

    cout << "�Է¹��� ������ �ִ� ���� " << ans1 << " �Դϴ�.\n";
    cout << "�Է¹��� �Ҽ��� �ִ� ���� " << ans2 << " �Դϴ�.\n";

    return 0;
}