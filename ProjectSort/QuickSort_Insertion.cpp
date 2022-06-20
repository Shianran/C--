
template <typename T>

void QuickSort_Insertion(T begin, T end)
{
    //if (begin >= end)return;
    int n = end - begin;
    if (begin + 10 >= end)//���ݽ���ʱ�л�����������
    {
        InsertionSort(begin, end, n);
    }
    else
    {
        int i = 0, j = n;
        auto tmp = *(begin + i);
        while (i < j)
        {
            while (*(begin + j) >= tmp && i < j)j--;
            *(begin + i) = *(begin + j);
            while (*(begin + i) <= tmp && i < j)i++;
            *(begin + j) = *(begin + i);
        }
        *(begin + i) = tmp;
        QuickSort_Insertion(begin, begin + i - 1);
        QuickSort_Insertion(begin + i + 1, end);
    }
}


