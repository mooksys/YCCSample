#include <iostream>
using namespace std;

//Base1Ŭ������ ����

class Base1{
    protected:
        int bs1;
    public:
        Base1(int b1=0){bs1=b1;}
        void showBs1();
};

//Base2Ŭ������ ����
class Base2{
    protected:
        int bs2;
    public:
        Base2(int b2=0){bs2=b2;}
        void showBs2();
};

//DerivedŬ���� ����
class Derived : public Base1, public Base2{
    protected:
        int dr;
    public:
        Derived(int d=0){dr=d;}
        void showDr();
};

//Base1Ŭ���� ��� �Լ��� ����
void Base1::showBs1()
{
    cout << "bs1�� " << bs1 << " �Դϴ�.\n";
}

//Base2Ŭ���� ��� �Լ��� ����
void Base2::showBs2()
{
    cout << "bs2�� " << bs2 << " �Դϴ�.\n";
}

//DerivedŬ���� ��� �Լ��� ����
void Derived::showDr()
{
    cout << "dr�� " << dr << " �Դϴ�.\n";
}

int main()
{
    Derived drv;

    drv.showBs1();
    drv.showBs2();
    drv.showDr();
	
    return 0;
}