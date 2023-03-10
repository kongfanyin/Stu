#pragma once
#ifndef STU_H_
#define STU_H_
#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<valarray>
using std::string;
using std::endl;
using std::cout;
using std::cin;
using std::ios_base;

class Stu
{
private:
	typedef std::valarray<double> Arraydb;
	string name;
	Arraydb score;

	//读取分数的私有方法
	std::ostream & arr_out(std::ostream &os)const;
public:
	Stu():name("null student"),score(){}
	explicit Stu(const std::string & s) :name(s),score() {}
	explicit Stu(int n) :name("nully"), score(0) {}
	Stu(const string &s, int n) :name(s), score(n) {}
	Stu(const string &s, const Arraydb & a):name(s),score(a){}
	Stu(const char* str, const double* ds, int n) :name(str), score(ds, n){}

	~Stu() {};
	double average()const;
	const string & Name()const;
	double& operator[](int i);
	double operator[](int i)const;

	//friend methods
	friend std::istream & operator>>(std::istream &is,Stu &st);//1 word
	friend std::istream & getline(std::istream &is, Stu &st);//1 line

	//output
	friend std::ostream & operator<<(std::ostream &os, const Stu &st);

};



#endif // !STU_H_
