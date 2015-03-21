/*
 *input:
 * 6
 * 10 1 10 20 30 20
 *output:
 * 10
 */

#include <iostream>
using namespace std;

int num;

int main()
{
    cin >> num;
    
    int a[num];
    int count[num];

    for (int i=0;i<num;i++)
        count[i] = 0;
    
    for (int i=0; i<num; i++){
        cin >> a[i];
    }

    for (int j=0; j<num ; j++){
        for (int k=0; k<num; k++){
            if(a[j] == a[k])
                count[j]++;
        }
    }

    
    for (int i=0; i<num; i++)
        cout << count[i] << endl;
    
    
    return 0;
}
