#include<bits/stdc++.h>
class stu{
    public:
        std::string name;
        int Chinese;
        int Math;
        int English;
        int Physics;
        int Chemistry;   
           
        int score;

        bool operator < (const stu &s) const { return score < s.score; }
        bool operator > (const stu &s) const { return score >  s.score; }
        bool operator <= (const stu &s) const { return score <= s.score; }
        bool operator >= (const stu &s) const { return score >= s.score; }
        bool operator == (const stu &s) const { return score == s.score; }
        bool operator != (const stu &s) const { return score != s.score; }

};

std::istream &operator >> (std::istream &input, stu &a)
{
    input >> a.name >> a.Chinese >> a.Math >> a.English >> a.Physics >> a.Chemistry;
    a.score = a.Chinese + a.English + a.Math + a.Chemistry + a.Physics;
    return input;
}
std::ostream &operator << (std::ostream &output, stu &a)
{
    output << a.name << " " << a.score;
    return output;
}

template <typename T>
void exchange(T a, T b)
{
    auto tmp = *a;
    *a = *b;
    *b = tmp;
    return;
}

