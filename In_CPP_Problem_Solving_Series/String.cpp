#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  string str1,str2;
  cin>>str1;
  cin>>str2;
  
  int sizestr1 = str1.size();
  int sizestr2 = str2.size();
    cout<<sizestr1<<" "<<sizestr2<<endl;
   
   string newstr1 = str1 + str2;
   cout<<newstr1<<endl;
    
   string newstr3="";
   string newstr4 = "";
   
   
   for(int i = 1;i<sizestr1;i++){

       newstr3 += str1[i];
   }
   for(int i = 1 ;i<sizestr2;i++){
    
       newstr4 +=str2[i];
   }
   
   newstr3 = str2[0] + newstr3;
   newstr4 = str1[0] + newstr4;
   
   cout<<newstr3<<" "<<newstr4;
   
    return 0;
}