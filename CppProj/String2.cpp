#define _CRT_SECURE_NO_WARNINGS
#include "String2.h"
#include <cstring>
#include <cctype>
using std::cin;
using std::cout;

int String::num_strings = 0;

int String::HowMany()
{
    return num_strings;
}

String::String(const char* s)
{
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    num_strings++;
}

String::String()
{
    len = 4;
    str = new char[1];
    str[0] = '\0';
    num_strings++;
}

String::String(const String& st)
{
    num_strings++;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
}

String::~String()
{
    --num_strings;
    delete[]str;
}

String& String::operator=(const String& st)
{
    if (this == &st)
        return *this;
    delete[]str;
    len = st.len;
    str = new char[len + 1];
    std::strcpy(str, st.str);
    return *this;
}

String& String::operator=(const char* s)
{
    delete[]str;
    len = std::strlen(s);
    str = new char[len + 1];
    std::strcpy(str, s);
    return *this;
}

char& String::operator[](int i)
{
    return str[i];
}

const char& String::operator[](int i) const
{
    return str[i];
}

bool operator<(const String& st1, const String& st2)
{
    return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>(const String& st1, const String& st2)
{
    return st2 < st1;
}

bool operator==(const String& st1, const String& st2)
{
    return (std::strcmp(st1.str, st2.str) == 0);
}

ostream& operator<<(ostream& os, const String& st)
{
    os << st.str;
    return os;
}

istream& operator>>(istream& is, String& st)
{
    char temp[String::CINLIM];
    is.get(temp, String::CINLIM);
    if (is)
    {
        st = temp;
    }
    while (is && is.get() != '\n')
        continue;
    return is;
}

String operator+(const String& st1, const String& st2)
{
    char* str1 = new char[st1.len + st2.len + 1];

    strcpy(str1, st1.str);
    strcat(str1, st2.str);

    String s(str1);
    delete[] str1;

    return s;
}


void String::stringup()
{
    for (int i = 0; i < len; i++)
    {
        str[i] = toupper(str[i]);
    }
}

void String::stringlow()
{
    for (int i = 0; i < len; i++)
    {
        str[i] = tolower(str[i]);
    }
}

int String::has(const char s)
{
    int cnt = 0;

    for (int i = 0; i < len; i++)
    {
        if (str[i] == s)
        {
            cnt++;
        }
    }
    return cnt;
}