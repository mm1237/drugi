 //  profesor informatike Milan Milivojevic pripremio zadatak
////mmklub.rs
//ovaj program sabira parne brojeve niza
 
 
 #include <iostream>
 using namespace std;

 long sumParnih(const int nizn[], const int brojElem) 
 {
 long sum = 0;
  int i=0;
  while(i<brojElem)
  {if(nizn[i]%2==0)
   sum=sum+nizn[i];
   ++i;
  }
 return sum;
 }
////////////////////////////
//funkciji prosledjujem adresu niza  i broj elemenata
//
////////////////////////
 int main() {
 int niz[] = {1, 2, 3, 4, 5, 6, 7};
 cout << "Suma parnih je: " << sumParnih(niz, 7) << endl;
 return 0;
 }
