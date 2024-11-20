#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "n=? ";
    cin >> n ;
  
    for (int f = 1 ; f<=n ; f++){
	
	 for (int e = n-1 ; e>=f ; e--){
	      cout << " ";
	 }
         for (int j = 1; j <= f ; j++) {
	      cout << "#";
         }
    
	 cout << " " ;

         for (int i = 1 ; i<=f ;i++){
	      cout << "#";
	 }
	 cout << "\n" ;
	}
}
