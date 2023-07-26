#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a, b;
    cin>>a;
    cin>>b;
    
    for(int i = a;i<=b;i++){
        if(i == 1){
            
            cout<<"one";
            cout<<endl;
        }
        else if(i == 2){
            cout<<"two";
            cout<<endl;
        }
        else if(i == 3){
            cout<<"three";
            cout<<endl;
            
        }
        else if(i == 4){
            cout <<"four";
            cout<<endl;
            
        }
        else if(i==5){
            cout<<"five";
            cout<<endl;
            
        }
        else if(i ==6){
            cout<<"six";
            cout<<endl;
        }
        else if(i == 7){
            cout<<"seven";
            cout<<endl;
        }
        else if (i == 8){
            cout<<"eight";
            cout<<endl;
        }
        else if(i == 9){
            cout<<"nine";
            cout<<endl;
        }
        
        else if(i%2 == 0 ){
            cout<<"even";
            cout<<endl;
        }
        else if(i % 2 !=0){
            cout <<"odd";
            cout<<endl;
        }
        
    }
    return 0;
}
