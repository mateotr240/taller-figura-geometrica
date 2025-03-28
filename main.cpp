#include <iostream>

using namespace std;

int main()
{
    int cantidad;
    float vertices[100][3];
    int caras[100][10];
    int a = 0;
    int b = 0;
    int opcion;

    while (true) {
        cout << "Menu" << endl;
        cout << "1. Ingresar vertices" << endl;
        cout << "2. Ingresar caras" << endl;
        cout << "3. Imprimir figura" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        if (opcion == 1) { 
            cout << "¿Cuántos vértices quieres ingresar? ";
            cin >> cantidad;

            for (int i = 0; i < cantidad && a < 10; i++) {
                cout << "Introduce X: "; cin >> vertices[a][0];
                cout << "Introduce Y: "; cin >> vertices[a][1];
                cout << "Introduce Z: "; cin >> vertices[a][2];
                a++;
            }
        }

        else if (opcion == 2) { 
            if (a < 3) {
                cout << "se requieren minimo 3 vertices para formar una cara";
            } else {
                cout << "¿Cuántos vértices forman la cara? ";
                cin >> cantidad;

                if (cantidad < 3 || cantidad > a) {
                    cout << "se necesita minimo 3 vertices para hacer una cara";
                } else {
                    for (int i = 0; i < cantidad; i++) {
                        cout << "ingresa el numero del vertice (empezando de 0) " << i + 1 << ": ";
                        cin >> caras[b][i];
                    }
                    caras[b][cantidad] = -1; 
                    b++;
                }
            }
        }

        else if (opcion == 3) { 
            for (int i = 0; i < a; i++) {
                cout << "v" << i << ": (" << vertices[i][0] << ", " << vertices[i][1] << ", " << vertices[i][2] << ")\n";
            }
            for (int i = 0; i < b; i++) {
                cout << "F: ";
                for (int j = 0; caras[i][j] != -1; j++) {
                    cout << "v" << caras[i][j] << " ";
                }
                cout << endl;
            }
        }

        else if (opcion == 4) { 
            break;
        }

    }

    return 0;
}

