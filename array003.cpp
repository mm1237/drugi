 //  profesor informatike Milan Milivojevic pripremio zadatak
////mmklub.rs
//ovaj program prebrojava parove koji kod  kojih je tekuci broj veci od prethodnika
 
 
 #include <iostream>
 using namespace std;

 int KolikoimaParova(const int nizn[],const int brojElem) 
 {

  int i=1,br=0;
  while(i<brojElem)
  {
  if(nizn[i]>nizn[i-1])
    ++br;
    ++i;
  }
 return br;
 }
////////////////////////////
//funkciji prosledjujem adresu niza  i broj elemenata
//
////////////////////////
 int main() {
 int niz[] = {1, 2, 1, 4, 5, 9, 7};
 cout << "broj parova je: " << KolikoimaParova(niz,7) << endl;
 return 0;
 }
 
 //promenite podatke analizirajte program osmislite pitanja
