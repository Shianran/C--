
template <typename T>

void QuickSort_middle(T begin, T end)
{
    //if (begin >= end)return;
    int n = end - begin;
    if (begin >= end)
    {
        return;
    }
    else
    {
        int i = 0, j = n;

        auto middle = begin + n / 2;//ȡ��λ����Ϊ��׼Ԫ��ʹ��׼Ԫ��ѡȡ�����

        if (&begin > &end)
        {
            exchange(begin, end);
        }
        if (&middle > &end)
        {
            exchange(middle, end);
        }
        if (&middle > &begin)
        {
            exchange(middle, begin);
        }


        auto tmp = *(begin + i);
        while (i < j)
        {
            while (*(begin + j) >= tmp && i < j)j--;
            *(begin + i) = *(begin + j);
            while (*(begin + i) <= tmp && i < j)i++;
            *(begin + j) = *(begin + i);
        }
        *(begin + i) = tmp;
        QuickSort_middle(begin, begin + i - 1);
        QuickSort_middle(begin + i + 1, end);
    }
}


