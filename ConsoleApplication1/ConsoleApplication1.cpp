// ConsoleApplication1.cpp : Defines the entry point for the console application.
//
#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include <iostream>
#include <cstdio>
using namespace std;
int razmer, i;
double kolchetn,summ,sredn;
double arr[1000];
int main()
{
	cout << "Vvedite razmer massiva:";
cin >> razmer;
cout << "Vvedite massiv:" << endl;
for (i = 0; i < razmer; i++) {
	cout << i << ":";
	cin >> arr[i];
	cout << endl;
	}
kolchetn = 0;
for (i = 0; i < razmer;i++) {
	if (i % 2== 0) {
		summ = summ + arr[i];
		kolchetn = ++kolchetn;
	}
}
sredn = summ / kolchetn;
cout << "Srednee arifmeticheskoe - " << sredn << endl;
system("pause");
    return 0;
}

