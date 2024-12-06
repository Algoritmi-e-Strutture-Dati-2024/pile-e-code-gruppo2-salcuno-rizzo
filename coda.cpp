#include <iostream>
template <typename T>
class Coda{
  private:
    ListaPuntatori<T> lista;
  public:
    void enqueue(T elem){
      //usiamo la lista per aggiungere 
      lista.inslista(elem, lista.lunghezza() + 1);
    }
    T dequeue(){
        if(lista.listavuota(){
          return lista.lung==0;
        }else{
          //legge il valore in testa e lo rimuove
          T valore = lista.leggilista(1); 
          lista.canclista(1);
          return valore;
    }
    T front() const{
        if(lista.listavuota(){
          return lista.lung==0;
        }else{
          return lista.leggilista(1);
        }
    }
    bool isEmpty() const{
      return lista.listavuota();
    }
    int size() const{
      return lista.lunghezza();
    }
   }
