// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


void foo(int a) {
	cout << &a << endl;
}


int main()
{
	int per = 5;
	cout << &per << endl;
	foo(per);
	
	
	
	
	//cout << sizeof(arr) << endl;
	//cout << sizeof(arr[3]) << endl;
	//cout << sizeof(arr) / sizeof(arr[0])<< "qanak"<< endl;
    

}
