#include <iostream>
#include <math.h>
#pragma once
using namespace std;
#ifndef __MAX_H__
#define __MAX_H__

void SortBigtoSmall(float *L, int m)
{
	for (int i = 0; i < m - 1; i++)
	{
		for (int j = 0; j < m - i; j++)
		{
			if (L[i] < L[i + 1])
			{
				float temp;
				temp = L[i];
				L[i] = L[i + 1];
				L[i + 1] = temp;
			}
		}

	}
}
void ChooseSide(float *L, int m)
{
	int i = 0, j, flag = 0;
	while (i < m)
	{
		for (j = 2; j + i < m; j++)
		{
			if (L[i] < L[i + 1] + L[i + j])
			{
				cout << "选择的边长为:" << L[i] << L[i + 1] << L[i + j] << endl;
				cout << "最大周长为:" << L[i] + L[i + 1] + L[i + j] << endl;
				flag = 1;
				break;
			}
		}
	}
	if (flag == 0)
		cout << "0" << endl;
}
void MaxArea(float *L, int m)
{
	int i = 0, j;
	float Area, p, AreaMax = 0;
	while (i < m)
	{
		for (j = 2; j + i < m; j++)
		{
			if (L[i] < L[i + 1] + L[i + j])
			{
				p = (L[i] + L[i + 1] + L[i + j]) / 2.0;
				Area = sqrt(p*(p - L[i])*(p - L[i + 1])*(p - L[i + j]));
				if (Area > AreaMax)
					AreaMax = Area;
			}
		}
	}
	cout << "最大面积为:" << AreaMax << endl;
}
#endif