//
//
//  Laboratorna1
//
//  Created by Sorokin Dmytro on 07/03/16.
//  Copyright � 2016 Sorokin Dmytro. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include "Untitled1.h"
#include "Untitle2.h"



int doAnswer (float aParam, float bParam, float cParam)
{
    float factorial,power,answer;
    factorial=doFactorial(bParam);//������ ��������
    power=doPower(cParam);//������ ������
    //printf ("\nFactorial B= %f Power 5= %f\n",factorial,power);//���������� ��������
    if ((bParam+power)!=0)//�������� �� "�����"
    {
            answer=(((aParam*aParam+bParam*bParam)/(bParam+power))+factorial);
            printf ("Answer=%f",answer);
    }
        else
            printf ("Perezadaite znacheniya, znamenatel raven 0");
    return (answer);
}
