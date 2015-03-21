
/*
 * 5
 * 1 2 1 1 3
 *
 * 1 1 2 3 1
 */
#include <iostream>
using namespace std;

int num;

int main()
{
    cin >> num ;
    int a[num];
    for (int i=0; i<num;i++){
        cin >> a[i];
    }

    cout << num << endl;
    
    int count[num];

    for (int j=0; j<num; j++){
        for (int k=j+1; k<num; k++){
            if (a[k]==a[j])
                count[j]++;

        }
    }

    for (int i=0; i<num; i++){
        cout << count[i] << endl;

    }
    return 0;

}
