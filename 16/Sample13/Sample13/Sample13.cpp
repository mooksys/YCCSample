#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ifstream fin("test1.txt");
    if(!fin){
        cout << "������ �� �� �����ϴ�.\n";
        return 1;
    }

    char str1[16];
    char str2[16];
    fin >> str1 >> str2;
    cout << "���Ͽ� ��ϵ� 2���� ���ڿ���\n";
    cout << str1 << " �Դϴ�.\n";
    cout << str2 << " �Դϴ�.\n";

    fin.close();
	
    return 0;
}