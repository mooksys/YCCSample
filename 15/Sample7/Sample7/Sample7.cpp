#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "1 ~ 9 ������ ���ڸ� �Է��Ͻʽÿ�.\n";
    cin >> num;

    try{
        if(num <= 0)
            throw "0 ������ ���� �ԷµǾ����ϴ�";
        if(num >= 10)
            throw "10 �̻��� ���� �ԷµǾ����ϴ�";

        cout << num << "�Դϴ�.\n";
    }

    catch(char* err){
        cout << "����: " << err << '\n';
        return 1;
    }
    return 0;
}