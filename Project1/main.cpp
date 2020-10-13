#include <iostream>
#include "max.h"
#include <math.h>
using namespace std;

main()
{
	int m;
	cin >> m;

	float L[10];
	for (int i = 0; i < m; i++)
	{
		cin >> L[0];
	}
	/*给边长排序 从最长的边长开始选择可以构成三角形的三条边a*/
	SortBigtoSmall(L, m);
	ChooseSide(L, m);
}