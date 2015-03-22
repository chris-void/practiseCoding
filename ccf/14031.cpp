#include <iostream>
using namespace std;


int main()
{
    int N;
    cin >> N;
    int a[N];
    int count=0;
    
    for (int i=0; i<N; i++){
        cin >> a[i];
    }
    /*
    for(int i=0; i<N; i++)
        cout << a[i];
    */
    
    for (int i=0; i<N; i++){
        for (int j=; j<N; j++){
            if (a[i]+a[j] == 0)
                count ++;
            
        }
    }

    cout << endl << count <<endl;
    
    return 0;
}
