#include<iostream>
#include<string.h>

using namespace std;

class roman
{
private:
char Num[6];
int sum;
public:
void print(char Num[6]);
int convert(char Num[6],int len);
int printDecimal(int sum);
};

void roman::print(char Num[6])
{
cout<<endl;
cout << "Roman Numeral form: " << Num << endl;
}

int roman::convert(char Num[6],int len)
{
int total=0, sum;
int count;
for(int i = 0; i < len; i++)
{
switch(Num[i])
{
case 'M':
count = 1000;
break;
case 'm':
count = 1000;
break;
case 'D':
count = 500;
break;
case 'd':
count = 500;
break;
case 'C':
count = 100;
break;
case 'c':
count = 100;
break;
case 'L':
count = 50;
break;
case 'l':
count = 50;
break;
case 'X':
count = 10;
break;
case 'x':
count = 10;
break;
case 'V':
count = 5;
break;
case 'v':
count = 5;
break;
case 'I':
count = 1;
break;
case 'i':
count = 1;
break;
}
total = total + count;
sum = total;
}
cout<<"Decimal number is "<<sum;
return sum;
}

int roman::printDecimal(int sum)
{
cout << "Here is your number in Decimal form: " << sum << endl;
return sum;
}
int main()
{
roman r;
char Num[6];
char choice;
int sum;

cout << " Please enter your Roman Numeral: " << endl;
cin >> Num;
cout << endl;
int l = strlen(Num);
cout << "Do you want the Roman Numeral or the Decimal?" << endl;
cout << "Press [D] for Decimal!" << endl << "Press [R] for Roman Numeral!" << endl;
cin >> choice;
if (choice == 'D' || choice == 'd')
r.convert(Num,l);
else if (choice == 'R' || choice == 'r')
r.print(Num);


return 0;
}
