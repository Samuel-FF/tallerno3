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
	float n;
	cout << "ingrese un numero del 1 al 7" << endl;
	cin >> n;
	if (n==1) {
		cout << "hoy es lunes" << endl;
	} else {
		if (n==2) {
			cout << "hoy es martes" << endl;
		} else {
			if (n==3) {
				cout << "hoy es miercoles" << endl;
			} else {
				if (n==4) {
					cout << "hoy es jueves" << endl;
				} else {
					if (n==5) {
						cout << "hoy es viernes" << endl;
					} else {
						if (n==6) {
							cout << "hoy es sabado" << endl;
						} else {
							if (n==7) {
								cout << "hoy es domingo" << endl;
							} else {
								cout << "no existe" << endl;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

