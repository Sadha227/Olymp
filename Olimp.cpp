#include <iostream>

using namespace std;

int myMin(int r, int g, int b);
int myMax(int winR, int winG, int winB);
int win(int A, int C, int r, int g, int b);

int main()
{
	int t, A, C, r, g, b;
	cin >> t;
	cin >> A >> C;
	cin >> r >> g >> b;
	for (int i = 0; i < t; i++)
	{
		int wimR = win(A, C, r+1, b, g);
		int wimG = win(A, C, r, b, g+1);
		int wimB = win(A, C, r, b+1, g);
	}
	 
}
int myMin(int r, int g, int b)
{
	int min;
	if (r < b && r < g)
		min = r;
	else if (g < b && g < r)
		min g;
	else
		min = b;
	return min;
}

int myMax(int winR, int winG, int winB)
{
	int max;
	if (winR > winB && winR > winG)
		max = winR;
	else if (winG > winB && winG > winR)
		max = winG;
	else
		max = winB;
	return max;
}

int win(int A, int C, int r, int g, int b)
{
	return A * (r * r + b * b + g * g) + C * myMin(r,g,b);
}
