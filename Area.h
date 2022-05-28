/*
Создать абстрактный базовый класс с виртуальной
функцией — площадь. Создать производные классы:
прямоугольник, круг, прямоугольный треугольник,
трапеция со своими функциями площади. Для провер-
ки определить массив ссылок на абстрактный класс,
которым присваиваются адреса различных объектов.
Площадь трапеции: S=(a+b)h/2.
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
		std::cout << " Площадь прямоугольника: " << length * wiegth << std::endl;
	}
};

class Сircle : public Area {
	float radius;
public:
	Сircle(float x = 0) {
		radius = x;
	}
	void area() {
		std::cout << " Площадь круга: " << PI * radius * radius << std::endl;
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
		std::cout << " Площадь прямоугольного треугольника: " << (float)1 / 2 * height * base << std::endl;
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
		std::cout << " Площадь трапеции: " << (a + b) * h / 2 << std::endl;
	}
};


