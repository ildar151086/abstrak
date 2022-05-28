/*
������� ����������� ������� ����� � �����������
�������� � �������. ������� ����������� ������:
�������������, ����, ������������� �����������,
�������� �� ������ ��������� �������. ��� ������-
�� ���������� ������ ������ �� ����������� �����,
������� ������������� ������ ��������� ��������.
������� ��������: S=(a+b)h/2.
*/
#include <iostream>

const int PI = 3.1415;

class Area{
public:
	void virtual area() = 0;
	virtual ~Area() {};
};

class Rect : public Area {
	float length;
	float wiegth;
public:
	Rect(float x = 0, float y = 0) {
		length = x;
		wiegth = y;
	}
	void area() {
		std::cout << " ������� ��������������: " << length * wiegth << std::endl;
	}
};

class �ircle : public Area {
	float radius;
public:
	�ircle(float x = 0) {
		radius = x;
	}
	void area() {
		std::cout << " ������� �����: " << PI * radius * radius << std::endl;
	}
};


class TriangleRight: public Area {
	float height;
	float base;
public:
	TriangleRight(float x = 0, float y = 0) {
		height = x;
		base = y;
	}
	void area() {
		std::cout << " ������� �������������� ������������: " << (float)1 / 2 * height * base << std::endl;
	}
};

class Trapezoid : public Area {
	float a;
	float b;
	float h;
public:
	Trapezoid(float x = 0, float y = 0, float z = 0) {
		a = x;
		b = y;
		h = z;
	}
	void area() {
		std::cout << " ������� ��������: " << (a + b) * h / 2 << std::endl;
	}
};


