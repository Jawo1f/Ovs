#include <stdio.h>
#include <iostream>
#include <cmath>
#include "quadraticEquation.hpp"

using namespace std;

int main(){
	double a,b,c;
	cout << "Введите a\n";
	cin >> a;
	cout << "Введите b\n";
	cin >> b;
	cout << "Введите c\n";
	cin >> c;

	quadraticEquation(a,b,c);
	return 0;
};
