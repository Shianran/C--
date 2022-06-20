template <typename T>
void BubbleSort(T begin, T end)
{
    int n = (end - begin);
    //std::cout << *begin;
    for(int i = 0; i <= n - 1; i++)
    {
        for(int j = 0; j <= n - i - 1; j++)
        {
            if(*(begin + j) > *(begin + j + 1))
            {
                auto tmp = *(begin + j + 1);
                *(begin + j + 1) = *(begin + j);
                *(begin + j) = tmp;
            }
            
        }
    }
    
}