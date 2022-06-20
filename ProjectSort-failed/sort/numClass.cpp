#include<bits/stdc++.h>
using namespace std;
struct stu{
	string name;
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
class num{
	private:
		
	public:
		string flag;
		vector<int > number;
		vector<stu > student;
		int size()
		{
			if(flag == "num")return (int)number.size();
			if(flag == "struct")return (int)student.size();
			return 0;
		}

		//如果是数字，a[i]返回第i项值；如果是struct则a[i]返回第i个学生的成绩
		int& operator[](int i)
		{
			if(flag == "num")return number[i];
			if(flag == "struct")return student[i].score;//我更想在这种情况下返回一个struct, 不知道行不行
		}

		void push(int n)
		{
			number.push_back(n);
			flag = "num";
		}
		void push(stu n)
		{
			student.push_back(n);
			flag = "struct";
		}

		


		void show()
		{
			if(flag == "num")
			{
				for(int i = 0; i <= (int)number.size() - 1; i++)
					cout << number[i] << " ";
			}
			else if(flag == "struct")
			{
				for(int i = 0; i <= (int)student.size() - 1; i++)
				{
					cout << student[i].name << " " << student[i].score << endl;
				}
			}
			else
			{
				cout << "error";
			}
		}		
};
/*



int main()
{
	num a;
	num b;
	stu n;
	for(int i = 1; i <= 100; i++)
	{	
		n.name = 'A';
		n.score = i;
		b.push(n);
		a.push(i);
	}
	a.show();
	b.show();
	return 0;
}
*/