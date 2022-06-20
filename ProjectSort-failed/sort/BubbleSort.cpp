num BubbleSort(num a)
{
    //if(a.flag == "num")
    //{
        int n = a.size() - 1;
        for(int i = 0; i <= n - 1; i++)
        {
            for(int j = 0; j <= n - i - 1; j++)
            {
                if(a[j] > a[j + 1])
                {
                    if(a.flag == "num")swap(a.number[j], a.number[j + 1]);
                    if(a.flag == "struct")swap(a.student[j], a.student[j + 1]);
                }//swap(a.number[j], a.number[j + 1]);
            }
        }
        return a;
    //}
    /*
    if(a.flag == "struct")
    {
        int n = a.size() - 1;
        for(int i = 0; i <= n - 1; i++)
        {
            for(int j = 0; j <= n - i - 1; j++)
            {
                if(a.student[j].score > a.student[j + 1].score)swap(a.student[j], a.student[j + 1]);
            }
        }
        return a;
    }
    */
}