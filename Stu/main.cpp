

#include"stu.h"

void set(Stu &st, int n);
const int puplis = 3;
const int quizzes = 5;


int main(char argc, char** argv)
{
	Stu ada[puplis] = { Stu(quizzes),Stu(quizzes),Stu(quizzes) };
	int i;
	for ( i = 0; i < puplis; i++)
	{
		set(ada[i], quizzes);
	}
	cout << "\nStudent List: \n";
	for (i = 0; i < puplis; i++)
	{
		cout << "average: " << ada[i].average() << endl;
	}
	cout << "\nResults: ";
	for (i = 0; i < puplis; i++)
	{
		cout << endl << ada[i];
		cout << "average: " << ada[i].average() << endl;
	}
	cout <<"Done.\n";
	return 0;
}

void set(Stu & st, int n)
{
	cout << "pls enter the student's name: \n";
	getline(cin,st);
	cout << "please enter " << n << "quiz score: \n";
	for (int i = 0; i < n; i++)
	{
		cin >> st[i];
	}
	while (cin.get()!='\n')
	{
		continue;
	}
}
