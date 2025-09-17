#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	char str[]="devkaran Lodhi Ji";
	int len=(sizeof(str)/sizeof(str[0]))-1;
	cout<<len<<endl;
	cout<<str<<endl;
	
	for(int i=0;i<len/2;i++)
	{
		char temp[10]=str[i];
		str[i]=str[len-i-1];
		str[len-i-1]=temp[i];
	}
	
	cout<<str<<endl;
	
	return 0;
}
