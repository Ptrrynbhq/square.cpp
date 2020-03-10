#include <iostream>
using namespace std;
int main() {
  
  int theSize=0;
  cout<<"enter the size of the square: " <<endl;
  cin>>theSize;

  for(int rows=0;rows!=theSize;rows++) {
      for(int cols=0;cols!=theSize;cols++) {
          if(rows==0 || rows==theSize-1 || cols==0 ||cols==theSize-1) cout<<"* ";
          else cout<<"  ";

      }
      cout<<endl;
  

  }
  return 0;


}
