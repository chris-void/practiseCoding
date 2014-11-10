#include<iostream>
using namespace std;

class LongCalc
{
public :
	char str1[];
	char str2[];
	int n1;
	int n2;
	int outcome;
	process();



	process(string str1, string str2, int a)
	{
		sscanf(str1,"%d",&n1);
		sscanf(str2,"%d",&n2);
		if (a == "1")
			outcome = n1+n2;
		else if (a == "2")
			outcome = n1-n2;
		else if (a =="3")
			outcome = n1*n2;
		else if (a == "4") 
			outcome = n1/n2;
		else 
			printf ("wrong input");

		cout >> outcome>>endl;
	}

}

int main ()
{
	process("100", "50", 1);
	process("100000000000000000000000000000000",
	"400000000000000000000000000000000", 1);
	process("3", "4", 2);
	process("29", "465", 3);
	process("15", "2", 4);	
