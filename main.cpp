#include <iostream>
using namespace std;

int main() {
   float a=0,b=0;
   int opzione=0;
   cin>>a>>b>>opzione;
   switch(opzione){
      case 0:
         cout<<((b*a)/2)<<endl;
         break;
      case 1:
         cout<<(a*a)<<endl;
         break;
      case 2:
         cout<<(a*b)<<endl;
         break;
      default:
         cout<<"Opzione non valida"<<endl;
   }     
   return 0;
}
