#include <iostream>
using namespace std;

//CarŬ���� ����
class Car{
	private:
		int num;
		double gas;
	public:
		Car();
		void setCar(int n, double g);
		void show();
};

//RacingCarŬ���� ����
class RacingCar : public Car{
	private:
		int course;
	public:
		RacingCar();
		void setCourse(int c);
};

//CarŬ���� ��� �Լ��� ����
Car::Car()
{
	num = 0;
	gas = 0.0;
	cout << "�ڵ����� ����������ϴ�.\n";
}
void Car::setCar(int n, double g)
{
	num = n;
	gas = g;
	cout << "���� ��ȣ�� " << num << " ����, ���ᷮ�� " << gas << " ���� �ٲپ����ϴ�.\n";
}
void Car::show()
{
	cout << "���� ��ȣ�� " << num << " �Դϴ�.\n";
	cout << "���ᷮ�� " << gas << " �Դϴ�.\n";
}

//RacingCarŬ���� ��� �Լ��� ����
RacingCar::RacingCar()
{
	course = 0;
	cout << "���̽� ī�� ����������ϴ�.\n";
}
void RacingCar::setCourse(int c)
{
	course = c;
	cout << "�ڽ� ��ȣ�� " << course  << " �� ���߽��ϴ�.\n";
}

int main()
{
	RacingCar rccar1;
	rccar1.setCar(1234, 20.5);
	rccar1.setCourse(5);
	return 0;
}