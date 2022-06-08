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
		n.name = 'A';
		n.score = i;
		b.push(n);
		a.push(i);
	}
	a = BubbleSort(a);
    b = BubbleSort(b);
    a.show();
    b.show();
    return 0;	
}