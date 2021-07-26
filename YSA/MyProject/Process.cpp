#include "Process.h"

/*int YPoint(int x, double* w, int factor = 1) {
	return (int)((double)(-1 * (double)factor * w[2] - w[0] * x) / (double)(w[1]));
}*/

int YPoint(int x, double* w, int factor)
{
	return (int)((double)(-1 * (double)factor * w[2] - w[0] * x) / (double)(w[1]));
}


int YPoint2(int x, double** ww, int factor)
{
	return (int)((double)(-1 * (double)factor * ww[2][2] - ww[2][0] * x) / (double)(ww[2][1]));
}