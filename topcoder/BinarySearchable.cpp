#include <iostream>
#include <vector>



using namespace std;

class BinarySearchable
{
public:
    int howMany(vector<int> s){
            int ret = 0;
            for (int i=0; i<s.size; i++)
            {
                bool ok = true;
                for (int j = 0; j<i; j++)
                {
                    if 




