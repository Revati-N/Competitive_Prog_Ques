#include <iostream>
#include <cstdio>
using namespace std;

void print_out(int start, int end){
    const char *array[]={
        "one", "two", "three", "four", "five", "six",
        "seven", "eight", "nine"
    };

    for(int i = start; i <= end; i++){
        if(i>=1 && i <=9){cout << array[i-1];}
        else if (i>9){
            if(i%2 ==0){cout <<"even";}
            else {cout << "odd";}
        }
        cout<<endl;
    }
}

int main()
{
    int a,b;
    cin >> a >> b;
    print_out(a,b);
    return 0;
}
