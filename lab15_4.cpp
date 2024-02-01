#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &, int &, int &, int &);

int main()
{
	int a = 50, b = 100, c = 500, d = 1000;

	srand(time(0));

	for (int i = 0; i < 10; i++)
	{
		shuffle(a, b, c, d);
		cout << a << " " << b << " " << c << " " << d << "\n";
	}

	return 0;
}

void shuffle(int &a, int &b, int &c, int &d)
{
	for (int i = 0; i < 10; i++)
	{
		int x = rand() % 3;
		int temp;

		if (x == 0)
		{
			temp = a;
			a = b;
			b = temp;
		}
		if (x == 1)
		{
			temp = b;
			b = c;
			c = temp;
		}
		if (x == 2)
		{
			temp = c;
			c = d;
			d = temp;
		}
	}
}