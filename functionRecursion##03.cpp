 
#include <iostream>

using namespace std;
//  profesor informatike Milan Milivojevic pripremio zadatak
///////////////////////////////////

 void ispisi(int k) 
{   int i=0;
    if (k>0)
        {
         while(i<k)
         	{
         		cout<<"*";
         		++i;
			 }
	cout<<endl;	 
    ispisi(k-1);
		    
		    while(i-k<k)
         	{
         		cout<<"*";
         	    ++i;
			 }
			
			 cout<<endl;
        

        }
    return ;
}
///
 int main()
 {
 	int f=9;
    ispisi(f) ;
     
 	return 0;
 	
}
	 // testirati promeniti podatke 
	 //postaviti pitanja ako nesto nije jasno
	 //

