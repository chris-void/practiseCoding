#include <iostream>
#include <vector>
#include <cstdio>
#include <sstream>
#include <queue>
#include <map>
#include <string>
#include <algorithm>

using namespace std;

class BinarySearchable
{
public:
    int howMany(vector<int> s){
            int ret = 0;
            for (int i=0; i<s.size(); ++i)
            {
                bool ok = true;
                for (int j = 0; j<i; ++j)
                {
                    if (s[j] > s[i]){
                        ok = false;
                        break;
                    }
                }
                if (ok ) ret++;
            }
            return ret;
    }

    //Cut Here
public:
    void run_test(int Case)
        {
            if ( (Case == -1) || (Case == 0) )
                test_case_0;
            if ( (Case == -1) || (Case == 1) )
                test_case_1;
            if ( (Case == -1) || (Case == 2) )
                 test_case_2;
            if ( (Case == -1) || (Case == 3) )
                 test_case_3;
            if ( (Case == -1) || (Case == 4) )
                test_case_4;
        }

private:
    template <typename T> string print_array(const vector <T> &V)
        {
            ostringstream os;
            os << "{";
            for (typename vector <T>::const int ){
                
                




