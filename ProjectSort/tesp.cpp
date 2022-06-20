#include<bits/stdc++.h>
#include "MySort.h"
using namespace std;
int main()
{
    stu a[105];
    for(int i = 10; i >= 0; i--)
    {
        a[10 - i].score = i;
        a[10 - i].name = 'A' + i;
    }
    QuickSort_comprehensive(a, a + 6);
    for(int i = 0; i <= 10; i++)cout << a[i] << endl;
    system("pause");
    return 0;
}