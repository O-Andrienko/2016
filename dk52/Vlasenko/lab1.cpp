// lab1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
#include <math.h>

#include "stepan.h"
#include "stepan2.h"
#include "module.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float A, B, C, Q, Q1, Q2, U;
	Q2 = 0;
	cout << "������� �������� �: ";
	cin >> A;
	cout << "������� �������� B: ";
	cin >> B;
	cout << "������� �������� C (�� ����� ���� �����): ";
	cin >> C;
	if (C == 0)
	{
		cout << "� �� ������ � �� ����� ���� �����! ������." << endl;
		system("pause");
		return 0;
	}	
	else
	{
		U = A*C - B;
		Q1 = module(U) / stepan(C);
	}
	for (int i = 0; i <= A; i++)
	{
		Q2 =  Q2 + stepan2(i);
	}
	Q = Q1 * Q2;
	cout << "��������� ��������� �������: " << Q << endl;
	system("pause");
    return 0;
}