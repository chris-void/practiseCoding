/*
 *input:
 * 0-670-82162-4
 *output:
 * Right
 *
 *input:
 * 0-670-82162-0
 *output:
 * 0-670-82168-4
 *
 * */
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char buf[100];
    
    char str[13];
    int a[13];
        
    cin >> str;
    /*
    for (int i=0; i<13; i++){
        a[i] = (int)(str[i]);
    }
    */
    
    int outcome = 0;
    int num=0;

    int i=0;
    while ( str[i] != '\0' )
        {
            if (isdigit(str[i]))
                buf[i] = str[i];
            else buf[i] = ' ';
            ++i;
        }

    buf[i] = '\0';

    
    cout << buf<<endl<<endl;

    
    for (int i=0; i<13; i++)
        sscanf(buf[i], "%d", &a[i]);
    

    //sscanf (buf,"%d %d %d", &a[0], &a[1], &a[2]);

    //printf ("%d %d %d\n", a[0], a[1], a[2]);
    

    num = a[0]*1 + a[2]*2 + a[3]*3 + a[4]*4 + a[6]*5 + a[7]*6 + a[8]*7 + a[9]*8 + a[10]*9;

    cout << str<<endl;
    //cout << str[0]<<endl;
    //cout << str[2]<<endl;
    
    
    cout << a[0]<<endl;
    
    for (int i=0; i<13; i++)
        cout << a[i] << endl;
    
    //outcome = mod(num);
    
    
    cout << num << endl;
    cout << num%11 << endl;
    
    //cout << str<< endl;
    
}
