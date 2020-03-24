 //  profesor informatike Milan Milivojevic pripremio zadatak
////mmklub.rs
//ovaj program sabira parne brojeve niza
 
 
 #include <iostream>
 using namespace std;

 bool traziBr(const int nizn[], const int tr,const int brojElem) 
 {
 long sum = 0;
  int i=0;
  while(i<brojElem)
  {
  if(nizn[i]==tr)
    return true;
    ++i;
  }
 return false;
 }
////////////////////////////
//funkciji prosledjujem adresu niza  i broj elemenata
//0 predstavlja logicku istinu true
//1 predstavlja logicku neistinu false
////////////////////////
 int main() {
 int niz[] = {1, 2, 3, 4, 5, 6, 7};
 cout << "Trazeni broj postoji " << traziBr(niz, 0,7) << endl;
 return 0;
 }
 
 //promenite podatke analizirajte program osmislite pitanja
