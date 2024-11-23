#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;

vector<string> cargarLista() {
    vector<string> lista;
    ifstream archivo("lista_compras.txt");
    string item;
    while (getline(archivo, item)) {
        lista.push_back(item);
    }
    archivo.close();
    return lista;
}

void guardarLista(const vector<string>& lista) {
    ofstream archivo("lista_compras.txt");
    for (const auto& item : lista) {
        archivo << item << endl;
    }
    archivo.close();
}

void mostrarLista(const vector<string>& lista) {
    cout << "Lista de Compras:" << endl;
    for (size_t i = 0; i < lista.size(); ++i) {
        cout << i + 1 << ". " << lista[i] << endl;
    }
}

void agregarArticulo(vector<string>& lista) {
    string item;
    cout << "Ingrese el nombre del artículo: ";
    cin.ignore();
    getline(cin, item);
    lista.push_back(item);
    guardarLista(lista);
    cout << "Artículo agregado." << endl;
}

void buscarArticulo(const vector<string>& lista) {
    string subcadena;
    cout << "Ingrese el texto a buscar: ";
    cin.ignore();
    getline(cin, subcadena);
    bool encontrado = false;
    for (size_t i = 0; i < lista.size(); ++i) {
        if (lista[i].find(subcadena) != string::npos) {
            cout << i + 1 << ". " << lista[i] << endl;
            encontrado = true;
        }
    }
    if (!encontrado) {
        cout << "No se encontraron artículos que coincidan con la búsqueda." << endl;
    }
}

void eliminarArticulo(vector<string>& lista) {
    string item;
    cout << "Ingrese el nombre del artículo a eliminar: ";
    cin.ignore();
    getline(cin, item);
    auto it = find(lista.begin(), lista.end(), item);
    if (it != lista.end()) {
        lista.erase(it);
        guardarLista(lista);
        cout << "Artículo eliminado." << endl;
    } else {
        cout << "Artículo no encontrado." << endl;
    }
}

void actualizarArticulo(vector<string>& lista) {
    string item, nuevoItem;
    cout << "Ingrese el nombre del artículo a actualizar: ";
    cin.ignore();
    getline(cin, item);
    auto it = find(lista.begin(), lista.end(), item);
    if (it != lista.end()) {
        cout << "Ingrese el nuevo nombre del artículo: ";
        getline(cin, nuevoItem);
        *it = nuevoItem;
        guardarLista(lista);
        cout << "Artículo actualizado." << endl;
    } else {
        cout << "Artículo no encontrado." << endl;
    }
}

int main() {
    vector<string> listaCompras = cargarLista();
    int opcion;

    do {
        cout << "\nMenú de Lista de Compras:" << endl;
        cout << "1. Agregar artículo" << endl;
        cout << "2. Mostrar lista" << endl;
        cout << "3. Buscar artículo" << endl;
        cout << "4. Eliminar artículo" << endl;
        cout << "5. Actualizar artículo" << endl;
        cout << "6. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                agregarArticulo(listaCompras);
                break;
            case 2:
                mostrarLista(listaCompras);
                break;
            case 3:
                buscarArticulo(listaCompras);
                break;
            case 4:
                eliminarArticulo(listaCompras);
                break;
            case 5:
                actualizarArticulo(listaCompras);
                break;
            case 6:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opción no válida." << endl;
        }
    } while (opcion != 6);

    return 0;
}
