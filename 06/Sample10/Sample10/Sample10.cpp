#include <iostream>
using namespace std;

int main()
{
    int res;

    cout << "�� ��° �ݺ��ÿ� ������ ���� �����ðڽ��ϱ�?(1 ~ 10)\n";

    cin >> res;

    for(int i = 1; i <= 10; i++){
        cout << i << "��° ó���Դϴ�.\n";
        if (i == res)
            break;
    }
    
    return 0;
}