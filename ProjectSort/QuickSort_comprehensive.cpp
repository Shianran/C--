
template <typename T>

void QuickSort_comprehensive(T begin, T end)
{
    //if (begin >= end)return;
    int n = end - begin;
    if (begin + 10 >= end)//���ݽ���ʱ�л�����������
    {
        InsertionSort(begin, end, n);
    }
    else
    {
        //int n = end - begin;
        int i = 1, j = n;

        int h = 0;

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

        auto tmp = *(begin + h);

        while (i <= j)
        {
            /*
              while (*(begin + j) >= tmp && i < j)j--;
              *(begin + i) = *(begin + j);
              while (*(begin + i) <= tmp && i < j)i++;
              *(begin + j) = *(begin + i);
            */
            if (*(begin + i) < tmp)//ʹ�����зֿ��Ŵ��������ظ�Ԫ��
            {
                h++;
                exchange((begin + i), (begin + h));
                i++;
            }
            else if (*(begin + i) == tmp)
            {
                i++;
            }
            else if (*(begin + i) > tmp)
            {
                exchange((begin + i), (begin + j));
                j--;
            }

        }
        exchange((begin), (begin + h));
        //*(begin + i) = tmp;
        //QuickSort(begin, begin + i - 1);

        QuickSort_comprehensive(begin, begin + h);
        QuickSort_comprehensive(begin + i, end);
    }
}

