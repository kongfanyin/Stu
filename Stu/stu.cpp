#include "stu.h"

std::ostream & Stu::arr_out(std::ostream & os) const
{
	int i;
	int lim = score.size();
	if (lim>0)
	{
		for (i = 0; i < lim; i++)
		{
			os << score[i] << " ";
			if (i % 5 == 4)
			{
				os << endl;
			}
			if (i%5!=0)
			{
				os << endl;
			}
		}
	}
	else
	{
		os << "empty array.\n";
	}


	return os;
}

double Stu::average() const
{
	if (score.size() > 0)
		return score.sum() / score.size;
	else
	{
		return 0;
	}
}

const string & Stu::Name() const
{
	return name;
}

double & Stu::operator[](int i)
{
	return score[i];
}

double Stu::operator[](int i) const
{
	return score[i];
}

std::istream & operator>>(std::istream & is, Stu & st)
{
	is >> st.name;
	return is;
}

std::istream & getline(std::istream & is, Stu & st)
{
	getline(is, st.name);
	return is;
}

std::ostream & operator<<(std::ostream & os, const Stu & st)
{
	os <<"score for "<< st.name<<":\n";
	st.arr_out(os);
	return os;
}
