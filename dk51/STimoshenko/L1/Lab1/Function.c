//
//
// Laboratorna1
//
// Created by Sorokin Dmytro on 10/03/16.
// Copyright � 2016 Timoshenko Serj. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include "Function.h"

float doFCTRL(float B);
float doPWR(float C);


float doFCTRL(float B)//���� ��� ���������� ���������
{
	
		int i;
		int k = 1;
		for (i = B; i != 1; i--)
		{
			k = k*i;
		}
		return (k);
	
}

float doPWR(float C)//���� ��� ���������� ������
{
	int i;
	int k = 1;
	for (i = 0; i != C; i++)
		k = k * 5;
	return (k);
}