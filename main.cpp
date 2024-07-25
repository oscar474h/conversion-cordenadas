#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int opcion;
    double r, theta, x, y;
    cout << "Digite una opción:" << endl;
    cout << "1. Polares a Rectangulares" << endl;
    cout << "2. Rectangulares a Polares" << endl;
    cin >> opcion;
    if (opcion == 1) {
        cout << "Digite r : ";
        cin >> r;
        cout << "Digite theta en radianes: ";
        cin >> theta;
        x = r*cos(theta);
        y = r*sin(theta);
        cout << "Coordenadas rectangulares: (" << x << ", " << y << ")" << endl;
    } 
    else if (opcion == 2) {
        cout << "Ingresa x: ";
        cin >> x;
        cout << "Ingresa y: ";
        cin >> y;
        r = sqrt(x*x+y*y);  
        theta = atan2(y,x);
        cout << "Coordenadas polares: (" << r << ", " << theta << " rad)" << endl;
    } 
    else {
        cout << "Opcion invalida" << endl;
    }
    return 0;
}
