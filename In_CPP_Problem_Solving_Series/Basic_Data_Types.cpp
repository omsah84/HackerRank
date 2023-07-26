#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int i;
    long l;
    char c;
    float f;
    double d;
    
    // cin>>i>>l>>c>>f>>d;
    scanf("%d %ld %c %f %lf", &i, &l ,&c, &f, &d);
    
    // cout<<i<<" "<<l<<" "<<c<<" "<<f<<" "<<d;
    cout<< i<<endl;
    cout<<l<<endl;
    cout<<c<<endl;
    printf("%.3f",f);
    cout<<endl;
    printf("%.9lf",d);
    
    return 0;
}
