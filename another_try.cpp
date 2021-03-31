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
int binarytodecimal();
int decimaltobinary();
int hextobinary();
int hextodecimal();
int decimaltohex();
int hextooct();
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
	int binnum, decnum=0, i=1,rem;
    cout<<"\nEnter binary number: ";
    cin>>binnum;
    while(binnum!=0)
    {
        rem = binnum%10;
        decnum = decnum + (rem*i);
        i = i*2;
        binnum = binnum/10;
    }
    cout<<"\nDecimal equivalent value is: "<<decnum;
int aa;
cout<<endl<<"Do you want to continue [Yes - 1, No - 0]: ";
cin>>aa;
if(aa == 1) {
	binarytodecimal();
} else if(aa == 0) {
	main();
}
}
int decimaltobinary() {
    int decimalnum, binarynum[20], i=0;
    cout<<"Enter decimal number: ";
    cin>>decimalnum;
    while(decimalnum!=0)
    {
        binarynum[i] = decimalnum%2;
        i++;
        decimalnum = decimalnum/2;
    }
    cout<<"\nBinary equivalent value is: ";
	for(i=(i-1); i>=0; i--)
        cout<<binarynum[i];
int aa;
cout<<endl<<"Do you want to continue [Yes - 1, No - 0]: ";
cin>>aa;
if(aa == 1) {
	decimaltobinary();
} else if(aa == 0) {
	main();
}
}
int hextobinary(){
    //double number1;
    char hex[17], bin[65] = "";
    int i =0;
    cout<<("\nEnter hexadecimal number: ");
    cin>>hex;
    for(i=0; hex[i]!='\0'; i++){
        switch(hex[i])
        {
        case'0':
            strcat(bin, "0000");
            break;
        case '1':
            strcat(bin,"0001");
            break;
        case '2':
            strcat(bin, "0010");
            break;
        case '3':
            strcat(bin, "0011");
            break;
        case '4':
            strcat(bin, "010");
            break;
        case '5':
            strcat(bin, "0101");
            break;
        case '6':
            strcat(bin, "0110");
            break;
        case '7':
            strcat(bin, "0111");
            break;
        case '8':
            strcat(bin, "1000");
            break;
        case '9':
            strcat(bin, "1001");
            break;
        case 'A':
        case 'a':
            strcat(bin, "1010");
            break;
        case 'B':
        case 'b':
            strcat(bin, "1011");
            break;
        case 'C':
        case 'c':
            strcat(bin, "1100");
            break;
        case 'D':
        case 'd':
            strcat(bin, "1101");
            break;
        case 'E':
        case 'e':
            strcat(bin, "1110");
            break;
        case 'F':
        case 'f':
            strcat(bin, "1111");
            break;

    }
        }


    //printf("Hexadecimal number = %s\n", hex);
    cout<<"Binary equivalent value is: "<< bin;
int aa;
cout<<endl<<"Do you want to continue [Yes - 1, No - 0]: ";
cin>>aa;
if(aa == 1) {
	hextobinary();
} else if(aa == 0) {
	main();
}
}

int hextodecimal() {
int decimalnum=0, rem, i=0, len=0;
    char hexdecnum[20];
    cout<<"Enter hexadecimal number ";
    cin>>hexdecnum;
    while(hexdecnum[i]!='\0'){
    len++;
    i++;
    }
    len--;
    i=0;
    while(len>=0){
        rem = hexdecnum[len];
        if(rem>=48 && rem<=57)
            rem = rem-48;
        else if(rem>=65 && rem<=70)
            rem = rem-55;
        else if(rem>=97 && rem<=102)
            rem = rem-87;
        else{
            cout<<"\nInvalid hex degit";
            cout<<endl;
            return 0;
            }
        decimalnum = decimalnum +(rem*pow(16,i));
        len--;
        i++;
    }
    cout<<"\nDecimal equivalent value is : "<<decimalnum;

int aa;
cout<<endl<<"Do you want to continue [Yes - 1, No - 0]: ";
cin>>aa;
if(aa == 1) {
	hextodecimal();
} else if(aa == 0) {
	main();
}
}


int decimaltohex(){
int decimalnum, rem, i=0;
    char hexadecimalnum[50];
    cout<<"Enter decimal number: ";
    cin>>decimalnum;
    while(decimalnum!=0){
    rem = decimalnum%16;
    if(rem<10)
        rem = rem+48;
    else
        rem = rem+55;
    hexadecimalnum[i] =  rem;
    i++;
    decimalnum = decimalnum/16;
    }
    cout<<"\nHexadecimal equivalent value is: ";
    for(i=i-1; i>=0; i--)
        cout<<hexadecimalnum[i];

int aa;
cout<<endl<<"Do you want to continue [Yes - 1, No - 0]: ";
cin>>aa;
if(aa == 1) {
	decimaltohex();
} else if(aa == 0) {
	main();
}
}
int octtobinary(){
    {
    int octalNum, rev=0, rem, chk=0;
    char binaryNum[40] = "";
    cout<<"Enter Octal number: ";
    cin>>octalNum;
    while(octalNum!=0)
    {
        rem = octalNum%10;
        if(rem>7)
        {
            chk++;
            break;
        }
        rev = (rev*10) + rem;
        octalNum = octalNum/10;
    }
    if(chk==0)
    {
        octalNum = rev;
        cout<<"\nBinary equivalent value is: ";
        while(octalNum!=0)
        {
            rem = octalNum%10;
            switch(rem)
            {
                case 0: strcat(binaryNum, "000");
                    break;
                case 1: strcat(binaryNum, "001");
                    break;
                case 2: strcat(binaryNum, "010");
                    break;
                case 3: strcat(binaryNum, "011");
                    break;
                case 4: strcat(binaryNum, "100");
                    break;
                case 5: strcat(binaryNum, "101");
                    break;
                case 6: strcat(binaryNum, "110");
                    break;
                case 7: strcat(binaryNum, "111");
                    break;
            }
            octalNum = octalNum/10;
        }
        cout<<binaryNum;
    }
    else
        cout<<"\nInvalid Octal Digit!";
    cout<<endl;
int aa;
cout<<endl<<"Do you want to continue [Yes - 1, No - 0]: ";
cin>>aa;
if(aa == 1) {
	octtobinary();
} else if(aa == 0) {
	main();
}
}
}
int hextooct(){
int hextooct(char[]);
int hextooct();

    char hexnum[10], octnum;
    cout<<"\nEnter hexadecimal number: ";
    cin>>hexnum;
    octnum= hextooct(hexnum);
    if(octnum==0)
        cout<<"\ninvalid hex digit ";
    else
        cout<<"\nOctal equivalent value is: "<<hextooct(hexnum)<<endl;
        //return 0;
int aa;
cout<<endl<<"Do you want to continue [Yes - 1, No - 0]: ";
cin>>aa;
if(aa == 1) {
	hextooct();
} else if(aa == 0) {
	main();
}
}
int hextooct(char hexnum[]){
int i, len=0, decnum=0, octnum=0;
    len =strlen(hexnum);
    len--;
    for(i=0; hexnum[i]!='\0'; i++, len--){
        if (hexnum[i]>='0' && hexnum[i]<='9')
            decnum= decnum + (hexnum[i]-48)*pow(16,len);
        else if(hexnum[i]>='A' && hexnum[i]<='F')
            decnum = decnum + (hexnum[i]-55)*pow(16,len);
        else if(hexnum[i]>='a' && hexnum[i]<='f')
            decnum = decnum + (hexnum[i]-87)*pow(16,len);
        else
            return 0;
    }
     i=1;
    while(decnum!=0){
    octnum = octnum + (decnum%8)*i;
    i=i*10;
    decnum = decnum/8;
    }
    return octnum;
}

int binarytohex() {
    int binarynum, hex=0, mul=1, chk=1, rem, i=0;
    char hexdecnum[20];
    cout<<"Enter binary number: ";
    cin>>binarynum;
    while(binarynum!=0)
    {
        rem = binarynum%10;
        hex  = hex + (rem*mul);
        if(chk%4==0)
        {
            if(hex<0)
                hexdecnum[i] = hex+48;
            else
                hexdecnum[i] = hex+55;
            mul = 1;
            hex = 0;
            chk = 1;
            i++;
        }
        else
        {
            mul = mul*2;
            chk++;
        }
        binarynum = binarynum/10;
    }
    if(chk!=1)
        hexdecnum[i] = hex+48;
    if(chk==1)
        i--;
    cout<<"\nHexadecimal equivalent value is: ";
    for(i=i; i>=0; i--)
        cout<<hexdecnum[i];
int aa;
cout<<endl<<"Do you want to continue [Yes - 1, No - 0]: ";
cin>>aa;
if(aa == 1) {
	binarytohex();
} else if(aa == 0) {
	main();
}

}
int decimaltooct(){
    int decimalnum, octalnum[50], i=0;
    cout<<"Enter decimal number: ";
    cin>>decimalnum;
    while(decimalnum!=0)
    {
        octalnum[i] = decimalnum%8;
        i++;
        decimalnum = decimalnum/8;
    }
    cout<<"\nOctal equivalent value is: ";
    for(i=(i-1); i>=0; i--)
        cout<<octalnum[i];
int aa;
cout<<endl<<"Do you want to continue [Yes - 1, No - 0]: ";
cin>>aa;
if(aa == 1) {
	decimaltooct();
} else if(aa == 0) {
	main();
}
}

int binarytooct(){
    int binarynum, octaldigit=0, octalnum[20];
    int i=0, mul=1, chk=1, rem;
    cout<<"Enter binary number: ";
    cin>>binarynum;
    while(binarynum!=0)
    {
        rem = binarynum%10;
        octaldigit = octaldigit + (rem*mul);
        if(chk%3==0)
        {
            octalnum[i] = octaldigit;
            mul=1;
            octaldigit = 0;
            chk = 1;
            i++;
        }
        else
        {
            mul = mul*2;
            chk++;
        }
        binarynum = binarynum/10;
    }
    if(chk!=1)
        octalnum[i] = octaldigit;
    cout<<"\nOctal equivalent value is: ";
    for(i=i; i>=0; i--)
        cout<<octalnum[i];
int aa;
cout<<endl<<"Do you want to continue [Yes - 1, No - 0]: ";
cin>>aa;
if(aa == 1) {
	binarytooct();
} else if(aa == 0)
    main();
}
int octtodecimal(){
    int octalnum, decimalnum=0, i=0, rem;
    cout<<"Enter octal number: ";
    cin>>octalnum;
    while(octalnum!=0)
    {
        rem = octalnum%10;
        decimalnum = decimalnum + (rem*pow(8,i));
        i++;
        octalnum = octalnum/10;
    }
    cout<<"\nDecimal equivalent vlaue is: "<<decimalnum;
int aa;
cout<<endl<<"Do you want to continue [Yes - 1, No - 0]: ";
cin>>aa;
if(aa == 1) {
	octtodecimal();
} else if(aa == 0)
    main();
}
int octtohexdec(){
    int octalnum, rev=0, rem, chk=0, hex=0, mul=1, i=0, k=0;
    char binarynum[40]="", hexnum[40];
    cout<<"Enter ocatl number: ";
    cin>>octalnum;
    while(octalnum!=0)
    {
        rem = octalnum%10;
        if(rem>7)
        {
            chk++;
            break;
        }
        rev = (rev*10)+rem;
        octalnum = octalnum/10;
    }
    if(chk==0)
    {
        octalnum = rev;
        while(octalnum!=0)
        {
            rem=octalnum%10;
            switch(rem)
            {
                case 0: strcat(binarynum, "000");
                    break;
                case 1: strcat(binarynum, "001");
                    break;
                case 2: strcat(binarynum, "010");
                    break;
                case 3: strcat(binarynum, "011");
                    break;
                case 4: strcat(binarynum, "100");
                    break;
                case 5: strcat(binarynum, "101");
                    break;
                case 6: strcat(binarynum, "110");
                    break;
                case 7: strcat(binarynum, "111");
                    break;
            }
            octalnum = octalnum/10;
        }
        while(binarynum[k]!='\0')
            k++;
        chk=1;
        k--;
        while(k>=0)
        {
            if(binarynum[k]=='0')
                rem=0;
            else
                rem=1;
            hex = hex +(rem*mul);
            if(chk%4==0)
            {
                if(hex<10)
                    hexnum[i] = hex+48;
                else
                    hexnum[i] = hex+55;
                mul = 1;
                hex = 0;
                chk = 1;
                i++;
            }
            else
            {
                mul = mul*2;
                chk++;
            }
            k--;
        }
        if(chk!=1)
            hexnum[i]=hex+48;
        if(chk==1)
            i--;
        cout<<"\nHexadecimal equivalent value is: ";
        chk=0;
        for(i=i; i>=0; i--)
        {
            if(hexnum[i]=='0' && chk==0)
            {
                chk++;
                continue;
            }
            else
                cout<<hexnum[i];
        }
    }
    else
        cout<<"\nEnter valid octal digit"<<rem;
int aa;
cout<<endl<<"Do you want to continue [Yes - 1, No - 0]: ";
cin>>aa;
if(aa == 1) {
	octtohexdec();
} else if(aa == 0)
    main();
}
void menu(void) {
	int choice;
	cout<<"1.  Decimal to Binary"<<endl;
	cout<<"2.  Decimal to Octal "<<endl;
	cout<<"3.  Decimal to Hexadecimal"<<endl;
	cout<<"4.  Hexadecimal to Binary"<<endl;
	cout<<"5.  Hexadecimal to Decimal"<<endl;
	cout<<"6.  Hexadecimal to Octal"<<endl;
	cout<<"7.  Binary to Decimal"<<endl;
	cout<<"8.  Binary to Octal"<<endl;
	cout<<"9.  Binary to Hexadecimal"<<endl;
	cout<<"10. Octal to Binary"<<endl;
	cout<<"11. Octal to decimal"<<endl;
	cout<<"12. Octal to hexadecimal"<<endl;
	//cout<<"13. Exit"<<endl<<endl;
	cout<<endl<<"Enter the number of your choice: ";
	cin>>choice;
	if(choice == 1) {
        decimaltobinary();
	} else if(choice == 2) {
        decimaltooct();
	} else if(choice == 3){
        decimaltohex();
    } else if(choice == 4) {
        hextobinary();
	} else if(choice == 5) {
        hextodecimal();
    } else if(choice == 6) {
        hextooct();
    } else if(choice == 7) {
        binarytodecimal();
	} else if(choice ==8){
        binarytooct();
	}else if(choice==9){
        binarytohex();
	}else if(choice==10){
        octtobinary();
	}else if(choice==11){
        octtodecimal();
	}else if(choice==12){
        octtohexdec();
	}else {
		main();
		system("cls");
	}
}
