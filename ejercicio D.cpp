// Este codigo ha sido generado por el modulo psexport 20150822-w32 de PSeInt.
// Es posible que el codigo generado no sea completamente correcto. Si encuentra
// errores por favor reportelos en el foro (http://pseint.sourceforge.net).

#include<iostream>
using namespace std;

// Para leer variables de texto se utiliza el operador << del objeto cin, que
// lee solo una palabra. Para leer una linea completa (es decir, incluyendo los
// espacios en blanco) se debe utilzar getline (ej, reemplazar cin>>x por
// getline(cin,x)), pero obliga a agregar un cin.ignore() si antes del getline
// se ley� otra variable con >>.

int main() {
	string n;
	cout << "ingrese una letra" << endl;
	cin >> n;
	if (n=="a" || n=="e" || n=="i" || n=="o" || n=="u") {
		cout << "es una vocal" << endl;
		cout << "es minuscula" << endl;
	} else {
		if (n=="A" || n=="E" || n=="I" || n=="O" || n=="U") {
			cout << "es una vocal" << endl;
			cout << "es mayuscula" << endl;
		} else {
			cout << "no es una vocal" << endl;
		}
	}
	return 0;
}

