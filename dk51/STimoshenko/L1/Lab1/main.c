//
//
// Laboratorna1
//
// Created by Sorokin Dmytro on 10/03/16.
// Copyright � 2016 Timoshenko Serj. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include "Formula.h"//ϳ��������� �����

int main()
{
	float A, B, C;
	printf("PO3PAXYBATU 3HA4EHH9 BUPA3Y \n((A^2+B^2)/(B+5^C))+B!\n");//��������, �� ��� �����
	printf("3ADAITE A,B,C\n");//������ �������� ����� ������
	scanf_s("%f", &A);//������� �������� ���
	printf("A=%.3f\n", A);
	scanf_s("%f", &B);
	printf("B=%.3f\n", B);
	scanf_s("%f", &C);
	printf("C=%.3f\n", C);
	Form(A, B, C);//�������� �������(�������) ��� �������� ����������
	system("pause");

}
