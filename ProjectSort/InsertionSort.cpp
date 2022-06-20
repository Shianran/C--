template <typename T>

void InsertionSort(T begin, T end, int n)
{
    int i;
    int j;

    for (i = 0; i < n; i++)
    {
        auto tmp = *(begin + i + 1);

        for (j = i + 1; j >= 0 && tmp < *(begin + j - 1); j--)
        {
            *(begin + j) = *(begin + j - 1);
        }
        *(begin + j) = tmp;
    }
}