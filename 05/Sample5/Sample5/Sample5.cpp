#include <iostream>
using namespace std;

int main()
{
    int res;

    cout << "������ �Է��Ͻʽÿ�.\n";

    cin >> res;

    switch (res){
        case 1:
            cout << "1�� �Է� �Ǿ����ϴ�.\n";
            break;
        case 2:
            cout << "2�� �ԷµǾ����ϴ�.\n";
            break;
        default:
            cout << "1 �Ǵ� 2�� �Է��Ͻʽÿ�.\n";
            break;
    }

    return 0;
}