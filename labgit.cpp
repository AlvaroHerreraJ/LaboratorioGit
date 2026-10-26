#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream archivoEntrada("input/input.txt");
    ofstream archivoSalida("output/archivoSalida.txt");
    
    if (archivoEntrada.is_open() && archivoSalida.is_open()) {
        cout << "Archivos abiertos correctamente." << endl;
        string linea;
        while (getline(archivoEntrada, linea)) {
            archivoSalida << linea << endl;
        }
        cout << "Archivo procesado y copiado a output/archivoSalida.txt" << endl;
        archivoEntrada.close();
        archivoSalida.close();
    } else {
        cout << "Error al abrir los archivos" << endl;
    }

    return 0;
}