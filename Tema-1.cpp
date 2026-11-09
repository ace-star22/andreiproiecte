// Problema 1
#include <iostream> 
using namespace std;

int main() {
 int n;
    cout << "Introdu un numar natural: ";
    cin >> n;
if(n % 2 == 0 ) {
  cout << n << " este numar par";
}
else {
  cout << n << " nu este numar par";
}
  return 0;
}

// Problema 2
#include <iostream> 
using namespace std;

int main() {
int a, b;
cout << "Introdu primul factor: ";
cin >> a;
    if(a >= 1000000000) {
        cout << "Introdu un numar mai mic de 1000000000: ";
        cin >> a;
    }
cout << "Introdu al doilea factor: ";
cin >> b;
    if(b >= 1000000000){
        cout << "Introdu un numar mai mic de 1000000000: ";
        cin >> b;
    }
cout << "Suma = " << a + b;
  return 0;
}

// Problema 3
#include <iostream> 
using namespace std;

int main() {
int a, b;
cout << "Introdu descazutul: ";
cin >> a;
    if(a >= 2000000000) {
        cout << "Introdu un numar mai mic de 2000000000: ";
        cin >> a;
    }
cout << "Introdu scazatorul: ";
cin >> b;
    if(b >= 2000000000){
        cout << "Introdu un numar mai mic de 2000000000: ";
        cin >> b;
    }
cout << "Diferenta = " << a - b;
  return 0;
}
