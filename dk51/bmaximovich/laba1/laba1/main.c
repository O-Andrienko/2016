//  main.c 
//  laba1
// 
//  Created by Bogdan Maximovich on 8/03/16. 
//  Copyright (C) 2016 Bogdan Maximovich. All rights reserved. 


#include "Header.h"



int main(int argc, char *argv[])
{
	int a, b, c; //������ ���������� ��� ������ ���� int
	printf("Enter A\n"); // �������� ����������� ��� ����� �
	scanf_s("%d", &a); // �������  ������ � ��������� ��� �� ������� �� ����� �. %d - ��������� ���� ���� int
	printf("Enter B\n");
	scanf_s("%d", &b);
	printf("Enter C\n");
	scanf_s("%d", &c);
	double q = f(a, b, c); //��� ����� � ��������� ������ 
	printf("Result: %f\n", q);
	system("pause");
}