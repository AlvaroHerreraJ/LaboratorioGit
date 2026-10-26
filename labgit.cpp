#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream archivoEntrada("input/input.txt");
    
    if (archivoEntrada.is_open()) {
        cout << "Archivo de entrada abierto correctamente." << endl;
        string linea;
        while (getline(archivoEntrada, linea)) {
            cout << "Leido: " << linea << endl;
        }
        archivoEntrada.close();
    } else {
        cout << "Error al abrir el archivo de entrada." << endl;
    }

    return 0;
}