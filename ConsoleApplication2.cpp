// ConsoleApplication2.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

struct author {
	char f_name[16];
	char s_name[16];
	int course;
};

int main()
{
	author* student = (author*)malloc(sizeof(author));
	free(student);

    return 0;
}