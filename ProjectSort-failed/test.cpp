#include<bits/stdc++.h>
#include "sort/MySort.h"
using namespace std;
int main()
{
    num a;
	num b;
	stu n;
	for(int i = 100; i >= 1; i--)
	{	
		n.name = 'A' + i%26;
		n.score = i;
		b.push(n);
		a.push(i);
	}
	//cout << a[3] << endl;
	//cout << b[4] << endl;
	a = BubbleSort(a);
    b = BubbleSort(b);
    //a.show();
    b.show();
	system("pause");
    return 0;	
}