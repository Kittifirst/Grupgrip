#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *, int *, int *, int *); // Modify input arguments to pointer

int main()
{
	int a = 50, b = 100, c = 500, d = 1000;

	srand(time(0));

	for (int i = 0; i < 10; i++)
	{
		shuffle(&a, &b, &c, &d); // Modify input arguments to pointer
		cout << a << " " << b << " " << c << " " << d << "\n";
	}

	return 0;
}

void shuffle(int *a, int *b, int *c, int *d)
{
	int mr[] = {*a, *b, *c, *d};
	int n = sizeof(mr) / sizeof(mr[0]);

	for (int i = 0; i < n; i++)
	{
		int random = rand() % n;
		swap(mr[i], mr[random]);
	}

	*a = mr[0];
	*b = mr[1];
	*c = mr[2];
	*d = mr[3];
}