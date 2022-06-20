template <typename T>
void QuickSort(T begin, T end)
{
    if(begin >= end)return;
    int n = end - begin;
    int i = 0, j = n;
    auto tmp = *(begin + i);
    while(i < j)
    {
        while(*(begin + j) >= tmp && i < j)j--;
        *(begin + i) = *(begin + j);       
        while(*(begin + i) <= tmp && i < j)i++;
        *(begin + j) = *(begin + i);
    }
    *(begin + i) = tmp;
    QuickSort(begin, begin + i - 1);
    QuickSort(begin + i + 1, end);
}