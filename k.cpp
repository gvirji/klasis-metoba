#include <iostream>

using namespace std;
#include <iostream>

using namespace std;

#include <iostream>

using namespace std;

class martkutxedi {
        public:

 
 int sigane=3;
 int sigrdze=4;
 int perimetri(); 
        
 
}martkutxedi2 ;
int martkutxedi:: perimetri() {
         int p=sigane+sigrdze;
         return p;
         }
int main(){
        
martkutxedi martkutxedi1;
cout<<"shemoiyvanet pirveli martkutxedis monacemebi\n";
cin>>martkutxedi1.sigrdze>>martkutxedi1.sigane;



 cout<<"martkutxedis sigrdze "<<martkutxedi1.sigrdze <<endl;
  cout<<"martkutxedis sigane "<<martkutxedi1.sigane <<endl;

cout<<martkutxedi1.perimetri()<<endl;
cout<<"shemoiyvanet meore martkutxedis monacemebi\n";
cin>>martkutxedi2.sigrdze>>martkutxedi2.sigane;



 cout<<"martkutxedis sigrdze "<<martkutxedi2.sigrdze <<endl;
  cout<<"martkutxedis sigane "<<martkutxedi2.sigane <<endl;

cout<<martkutxedi2.perimetri()<<endl;
if(martkutxedi1.perimetri()>martkutxedi2.perimetri()){
        cout<<"martkutxedi1 aris meti"<<endl;}
        else  cout<<"martkutxedi2 aris meti"<<endl;
    return 0;
}
