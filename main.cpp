#include <iostream>
using namespace std;

//funzione per calcolo del fattoriale ricorsivamente
int fattoriale_ricorsivo(int n)
{
    int fatt;
    if (n == 1)    //caso base
        fatt=1;
    else
        fatt=n*fattoriale_ricorsivo(n-1);   //passo ricorsivo
  return (fatt);
}

//funzione per il calcolo del fibonacci ricorsivamente
int fibonacci_ricorsivo(int n)
{
    int fib;
    if((n==1)||(n==2))  //caso base
        fib=1;
    else     //passo ricorsivo
        fib=fibonacci_ricorsivo(n-1)+fibonacci_ricorsivo(n-2);
  return (fib);
}

//chiediamo all'utente cosa preferisce fare
int main()
{
    int scelta=0; //var per scelta
    int i; //var per scelta utente
    int n; //var per numero
    while(scelta!=-1)
  {

        cout << "inserisci 1 se vuoi calcolare il fattoriale oppure 0 se vuoi calcolare il fibonacci\n";
        cin>>n;
        while(n!=0 && n!=1)
        {
               cout<<"hai inserito un numero non valido, riprova\n";
               cin>>n;
        }
        if(n==1)
        {
               cout<<"hai scelto il fattoriale, inserisci il numero che vuoi calcolare\n";
               cin>>i;
               cout<<"il fattoriale di "<<i<<" e' "<<fattoriale_ricorsivo(i);
               cout<<"\n";
         }else
          {
               cout<<"hai scelto il fibonacci, inserisci il numero che vuoi calcolare\n";
               cin>>i;
               cout<<i<<" numero di fibonacci di "<<i<<" e' "<<fibonacci_ricorsivo(i);
               cout<<"\n";
          }
          cout<<"inserisci un numero qualsiasi se vuoi fare altro altrimenti -1 per uscire\n";
          cin>>scelta;
          }//fine while

         }//fine main
