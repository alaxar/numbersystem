/* 
---------------------------------------------------
	Writer: Alazar Demessie
	Purpose: Test
	Language: C++
	Task: Number Converter to various Systems
	Type: Opensource
---------------------------------------------------
*/
#include <iostream>
#include <cmath>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
using namespace std;

const int D = 2;
const float LIMIT = 0.5;
//function declaration
int binarytodecimal(int b1);
int decimaltobinary();
int hextobinary(int h1);
int hextodecimal(int hd1);
int decimaltohex(int dh1);
void banner(void);
void menu(void);
int main() {

	banner();
	menu();
	
}

void banner(void) {

	cout<<"************************************"<<endl;
	cout<<"********** Number Conveter *********"<<endl;
	cout<<"   Made by ALAZAR for test purpose  "<<endl;
	cout<<"************ CONVERSION ************"<<endl;
	cout<<"************************************"<<endl;
}

int binarytodecimal() {
	int A = 0;
	cout<<"\nEnter the length of the binary: ";
	cin>>A;
	int ar[A];
	int size_t = (int)sizeof(ar) / sizeof(ar[ 0]);
	int i;
	int exponent = 0;
	int base = 2;
	int result = 0;
	int powertorise;
	int B = 0;
	for(i = size_t-1; i <= size_t-1; i--) {
		if(i < 0 ) break;
		cout<<"\nEnter "<<i<<" bit: ";
		cin>>B;
		ar[i] = B;
		int binaryarray = ar[i];
		//cout<<"[*] "<<binaryarray<<" to the power of "<<pow(base, exponent)<<endl;
		powertorise = pow(base, exponent);
		exponent++;
		if(binaryarray > 0) {
			result += powertorise;	
		}
	}
cout<<"\nThe Decimal Equivalent is: "<<result<<endl<<endl;
binarytodecimal();
}
int decimaltobinary() {
	// variable declaration
	double number1;
	int i;
	float sum;
	// accepting data from the user
	cout<<"\nEnter base 10 number ranging from 1 - 12: ";
	cin>>number1;
	if((number1 < 0)){
		cout<<"\nPlease enter a number\n";
	} else {
		do {		// do while the number1 meets the condition
			float n;
			number1 = number1 / D; // 13
			n = double(number1); // 6.5
			if (number1 < LIMIT) break;
			int integer = int(number1); // 6
			double decimal = number1 - integer;// 6.5 - 6
			if(decimal >= LIMIT) {
				cout<<"\nBinary value is: 1\n";
			} else {
				cout<<"\nBinary value is: 0\n";			
			}
		} while( number1 != 0);
}
int aa;
cout<<endl<<"Do you want to continue [Yes - 1, No - 0]: ";
cin>>aa;
if(aa == 1) {
	decimaltobinary();
} else if(aa == 0) {
	main();
}	
}
int hextobinary(int h1) {
	
}
int hextodecimal() {
	
}
int decimaltohex(int dh1) {
	
}
int binarytohex() {
		int result = 0, result2 = 0, i,powertorise, f, ff, exponent = 3, exponent2 = 3;
	int arr[8];
	int size_t = (int)(sizeof(arr)) / sizeof(arr[0]);
	int t = 4, t2 = 4;
	int z,j,y;
	int B=0, BB=0;
	for(i = 0; i < 4; i++ ) {
		if(i < 0 ) break;
		cout<<"\nEnter "<<i<<" bit: ";
		cin>>B;
		arr[i] = B;
		z = arr[i];
		cout<<z<<" ";
		int binaryarray = arr[i];
		//cout<<"[*] "<<binaryarray<<" to the power of "<<pow(2, exponent)<<endl;
		powertorise = pow(2, exponent);
		exponent--;
		if(binaryarray > 0) {
			result += powertorise;
			//cout<<result;
		}
	}
	cout<<" = "<<std::hex<<result<<endl;
	for(j = 4; j < 8; j++) {
		if(i < 0 ) break;
		cout<<"\nEnter the next "<<i<<" bit: ";
		cin>>BB;
		arr[j] = BB;
		y = arr[j];
		cout<<y<<" ";
		int binaryarray = arr[j];
		//cout<<"[*] "<<binaryarray<<" to the power of "<<pow(2, exponent2)<<endl;
		powertorise = pow(2, exponent2);
		exponent2--;
		if(binaryarray > 0) {
			result2 += powertorise;	
		}
	}
	cout<<" = "<<std::hex<<result2<<endl;
	cout<<endl<<"The Hexadecimal equivalent is: "<<result<<result2<<endl;
	binarytohex();
}
void menu(void) {
	int choice;
	cout<<"1. Decimal to Binary"<<endl;
	cout<<"2. Binary to Decimal"<<endl;
	cout<<"3. Hexadecimal to Binary"<<endl;
	cout<<"4. Hexadecimal to Decimal"<<endl;
	cout<<"5. Decimal to Hexadecimal"<<endl;
	cout<<"6. Octal to binary"<<endl;
	cout<<"7. Binary to Hexadecimal"<<endl;
	cout<<"7. Exit"<<endl<<endl;
	cout<<endl<<"Enter the number of your choice: ";
	cin>>choice;
	if(choice == 1) {
		decimaltobinary();
	} else if(choice == 2) {
		binarytodecimal();
	} else if(choice == 3) {
		
	} else if(choice == 4) {
		hextodecimal();
	} else if(choice == 5) {
		
 	} else if(choice == 6) {
 		
	} else if(choice == 7) {
		binarytohex();
	} else {
		main();
		system("cls");
	}
}
