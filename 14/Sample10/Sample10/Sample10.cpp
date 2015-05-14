#include <iostream>
using namespace std;

//Base0Ŭ���� ����
class Base0{
    protected:
        int bs0;
    public:
        Base0(int b0=0){bs0=b0;}
        void showBs0();
};

//Base1Ŭ���� ����
class Base1 : public virtual Base0{
    protected:
        int bs1;
    public:
        Base1(int b1=0){bs1=b1;}
        void showBs1();
};

//Base2Ŭ���� ����
class Base2 : public virtual Base0{
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

//Base0Ŭ���� ��� �Լ��� ����
void Base0::showBs0()
{
    cout << "bs0�� " << bs0 << " �Դϴ�.\n";
}

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

    drv.showBs0();
	
    return 0;
}