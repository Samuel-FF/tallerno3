// Este codigo ha sido generado por el modulo psexport 20150822-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se leyó otra variable con >>.

int main() {
	float n1;
	float n2;
	float n3;
	cout << "ingrese 3 numeros" << endl;
	cin >> n1;
	cin >> n2;
	cin >> n3;
	if (n1>n2 && n1>n3) {
		cout << "el mayor de los 3 numeros es " << n1 << endl;
	} else {
		if (n2>n1 && n2>n3) {
			cout << "el mayor de los 3 numeros es " << n2 << endl;
		} else {
			if (n3>n1 && n3>n2) {
				cout << "el mayor de los 3 numeros es " << n3 << endl;
			} else {
				cout << "duda existencial" << endl;
			}
		}
	}
	return 0;
}

