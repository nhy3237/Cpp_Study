// Strngbad.h ����
#pragma once
#include <iostream>
using std::ostream;
using std::istream;

class String
{
private:
	char* str;
	int len;
	static int num_strings;
	static const int CINLIM = 80;

public:
	// �����ڿ� ��Ÿ �޼���
	String(const char* s);
	String();
	String(const String& st);
	~String();
	int length() const { return len; }

	// �����ε� ������ �޼���
	String& operator=(const String& st);
	String& operator=(const char *s);
	char& operator[](int i);
	const char& operator[](int i) const;

	// �����ε� ������ ������
	friend bool operator<(const String& st1, const String& st2);
	friend bool operator>(const String& st1, const String& st2);
	friend bool operator==(const String& st1, const String& st2);
	friend ostream& operator<<(ostream& os, const String& st);
	friend istream& operator>>(istream& is, String& st);

	// static �Լ�
	static int HowMany();
};