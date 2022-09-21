#pragma once
int max(int a, int b)
{
	return a > b ? a : b;
}

int maxx(int a, int b, int c) {
	int x,y,z;
	x = a > b ? a : b;
	y = b > c ? b : c;
	z = x > y ? x : y;
	return z;
}