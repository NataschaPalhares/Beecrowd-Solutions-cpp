#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    int ev1, ev2, at, d, aux;
    
    double prob;

    cin >> ev1 >> ev2 >> at >> d;
    
    while (ev1 !=0 && ev2 !=0 && at != 0 && d != 0) {
            
      aux = ev1;
      ev1 = 0;
      while(aux > 0){
        aux -= d;
        ev1++;
      }
      
      aux = ev2;
      ev2 = 0;
      while(aux > 0){
        aux -= d;
        ev2++;
      }

      double dice;
           
      if(at == 3){
        prob = (double)ev1 / (double)(ev1 + ev2);
      }
      else{
        dice = 1.0 - ((6 - at)/6.0);
        dice = (1 - dice)/dice;
        prob = (1.0 - pow(dice,ev1)) / (1.0 - pow(dice,ev1 + ev2));
      }           
            
      cout << fixed << setprecision(1) << (prob * 100) << endl;

      cin >> ev1 >> ev2 >> at >> d;
    }

    return 0;
}    
