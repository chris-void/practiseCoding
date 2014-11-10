/** Def: IntegerGenerator 
  * 
  * test case:
    0) { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9}	"16"
		Returns: "17"
		With all digits available, the next number is 17.
    1)	{ 0, 1, 2, 3, 4, 5, 6, 8, 9 }	"16"
		Returns: "18"
		The digit 7 is no longer allowed, so the next smallest valid integer is 18.
	2)	{ 3, 5, 8 }		"548"
		Returns: "INVALID INPUT"
		The current number may not contain disallowed digits.
	3)	{ 5, 3, 4 }		"033"
		Returns: "INVALID INPUT"
		Leading zeros aren't allowed either.
	4)	{ 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 }    "999"
		Returns: "1000"	
	5)	{ 0, 1, 2, 3, 4, 5 }		"0"
		Returns: "INVALID INPUT"
		The generator only works with positive integers.
	6)	{ 1 }		"1"
		Returns: "11"
   *
   **/

#include <stdio.h>
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <sstream>
#include <string>
#include <map> 
#include <queue> 
#include <vector> 
#include <cstring>

using namespace std;

class IntegerGenerator
{
	public:
	string nextInteger(vector <int> allowed, string current)
	{
		if (current[0] == '0')
			return "INVALID INPUT";
		
		vector <int> cur;
		for (int i=0; i < current.size(); i++){
			cur.push_back(current[i]-'0');
		}

		for (int i=0; i<cur.size(); i++ ){
			bool found = false;
			for (int j=0; j<allowed.size(); j++){
				if (cur[i] == alowed[j]){
					found = true;
					break;
				}
			}
			if (!found)
				return "INVALID INPUT";
		}

		sort(allowed.begin(), allowed.end() );

	 	string a = "9999999999999999";
		bool found = false;
		for (int i=cur.size()-1; i>=0 && !found; --i){
			for (int j=0; j<allowed.size() && !found; ++j){
				if (cur[i] < allowed[j]){
					for (int k = i+1; k<current.size(); ++k){
						current[k] = allowed[0]+'0';
					}
					current[i] = allowed[j]+'0';
					a = current;
					found = true;
				}
			}
		}

		int x,y;
		if (allowed[0] == 0){
			x = 0;
			y = allowed[1];
		} 
		else{
			x = allowed[0];
			y = allowed[0];
		}

		string ret;
		ret += y +'0';
		for(int i=0; i<cur.size(); ++i){
			ret += x+'0';
		}
		cout << ret << " " << a << endl;
		if (ret.size() < a.size() )
			return ret;
		if (ret.size() > a.size() )
			return a;
		return min(ret,a);
	}

	public:
	void run_test(int Case)
	{
		if ( (Case == -1) || (Case == 0) )
			test_case_0();
		if ( (Case == -1) || (Case == 1) )
			test_case_1();
		if ( (Case == -1) || (Case == 2) )
			 test_case_2();
		if ( (Case == -1) || (Case == 3) )
			 test_case_3();
		if ( (Case == -1) || (Case == 4) )
			test_case_4();
	    if ( (Case == -1) || (Case == 5) )
	        test_case_5();
		if ( (Case == -1) || (Case == 6) )
			test_case_6();
	}

	private:
	template <typenmame T> string print_array(const vector<T> &V){
		ostringstream os;
		os << "{";
		for ()















		
