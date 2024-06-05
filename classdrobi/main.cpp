#include <iostream>
using namespace std;

class Drob
{
	int x;
	int y;
	int check_true(int a, int b) {
		while (b != 0) {
			int q = b;
			b = a % b;
			a = q;
		}
		return a;
	}
public:
	Drob(){}
	Drob(int a, int b);
	void Print();
	Drob operator+ (Drob& b) 
	{
		return Drob(x * b.y + b.x * y, y * b.y);
	}
	Drob operator+ (int b) 
	{
		return Drob(x + b * y, y);
	}
	Drob operator- (Drob& b)
	{
		return Drob(x * b.y - b.x * y, y * b.y);
	}
	Drob operator- (int b)
	{
		return Drob(x - b * y, y);
	}
	Drob operator* (Drob& b)
	{
		return Drob(x * b.x, y * b.y);
	}
	Drob operator* (int b)
	{
		return Drob(x * b, y);
	}
	Drob operator/ (Drob& b)
	{
		return Drob(x * b.y, y * b.x);
	}
	Drob operator/ (int b)
	{
		return Drob(x, y * b);
	}

};
Drob::Drob(int a, int b)
{
	x = a;
	y = b;
}
void Drob::Print()
{
	cout << "Result: " << x << "/" << y << endl;
}
int main()
{
	Drob a(2, 3), b(1, 5), c;
	c = a * b;
	c.Print();
    c = a / b;
	c.Print();
	c = a + b;
    c.Print();
	c = a - b;
	c.Print();
	c = a * 2;
	c.Print();
	c = a / 2;
	c.Print();
	c = a + 2;
	c.Print();
	c = a - 2;
	c.Print();
}



