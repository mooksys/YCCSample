#include <iostream>
using namespace std;

int main()
{
    int res;

    cout << "������ �Է��Ͻʽÿ�.(1 ~ 5)\n";

    cin >> res;

    switch(res){
        case 1:
        case 2:
            cout << "���� �� ����սô�.\n";
            break;
        case 3:
        case 4:
            cout << "�� ���̽��� �� ����սô�.\n";
            break;
        case 5:
            cout << "�ſ� ����մϴ�.\n";
            break;
        default:
            cout << "1 ~ 5 ������ ������ �Է��Ͻʽÿ�.\n";
            break;
    }

    return 0;
}