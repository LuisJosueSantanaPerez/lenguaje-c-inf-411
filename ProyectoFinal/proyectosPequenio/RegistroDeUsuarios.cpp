#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <string>

struct Usuario {
    std::string nombre;
    std::string contrasena;
};

// Función para cargar usuarios desde un archivo
std::vector<Usuario> cargarUsuarios(const std::string& nombreArchivo) {
    std::vector<Usuario> usuarios;
    std::ifstream archivo(nombreArchivo);
    if (archivo.is_open()) {
        Usuario usuario;
        while (archivo >> usuario.nombre >> usuario.contrasena) {
            usuarios.push_back(usuario);
        }
        archivo.close();
    }
    return usuarios;
}

// Función para guardar usuarios en un archivo
void guardarUsuarios(const std::vector<Usuario>& usuarios, const std::string& nombreArchivo) {
    std::ofstream archivo(nombreArchivo);
    if (archivo.is_open()) {
        for (const auto& usuario : usuarios) {
            archivo << usuario.nombre << " " << usuario.contrasena << std::endl;
        }
        archivo.close();
    }
}

// Función para agregar un nuevo usuario
void agregarUsuario(std::vector<Usuario>& usuarios, const Usuario& nuevoUsuario) {
    auto it = std::find_if(usuarios.begin(), usuarios.end(), [&](const Usuario& u) {
        return u.nombre == nuevoUsuario.nombre;
    });
    if (it == usuarios.end()) {
        usuarios.push_back(nuevoUsuario);
        std::cout << "Usuario agregado exitosamente." << std::endl;
    } else {
        std::cout << "El nombre de usuario ya existe." << std::endl;
    }
}

// Función para eliminar un usuario
void eliminarUsuario(std::vector<Usuario>& usuarios, const std::string& nombreUsuario) {
    auto it = std::remove_if(usuarios.begin(), usuarios.end(), [&](const Usuario& u) {
        return u.nombre == nombreUsuario;
    });
    if (it != usuarios.end()) {
        usuarios.erase(it, usuarios.end());
        std::cout << "Usuario eliminado exitosamente." << std::endl;
    } else {
        std::cout << "Usuario no encontrado." << std::endl;
    }
}

// Función para modificar la contraseña de un usuario
void modificarUsuario(std::vector<Usuario>& usuarios, const std::string& nombreUsuario, const std::string& nuevaContrasena) {
    auto it = std::find_if(usuarios.begin(), usuarios.end(), [&](const Usuario& u) {
        return u.nombre == nombreUsuario;
    });
    if (it != usuarios.end()) {
        it->contrasena = nuevaContrasena;
        std::cout << "Contraseña actualizada exitosamente." << std::endl;
    } else {
        std::cout << "Usuario no encontrado." << std::endl;
    }
}

// Función para buscar un usuario
void buscarUsuario(const std::vector<Usuario>& usuarios, const std::string& nombreUsuario) {
    auto it = std::find_if(usuarios.begin(), usuarios.end(), [&](const Usuario& u) {
        return u.nombre.find(nombreUsuario) != std::string::npos;
    });
    if (it != usuarios.end()) {
        std::cout << "Usuario encontrado: " << it->nombre << std::endl;
    } else {
        std::cout << "Usuario no encontrado." << std::endl;
    }
}

// Función para mostrar todos los usuarios
void mostrarUsuarios(const std::vector<Usuario>& usuarios) {
    if (usuarios.empty()) {
        std::cout << "No hay usuarios registrados." << std::endl;
    } else {
        std::cout << "Lista de usuarios registrados:" << std::endl;
        for (const auto& usuario : usuarios) {
            std::cout << "Nombre de usuario: " << usuario.nombre << std::endl;
        }
    }
}

int main() {
    std::vector<Usuario> usuarios = cargarUsuarios("usuarios.txt");
    int opcion;
    std::string nombre, contrasena;

    do {
        std::cout << "\nMenú de Registro de Usuarios:" << std::endl;
        std::cout << "1. Agregar usuario" << std::endl;
        std::cout << "2. Eliminar usuario" << std::endl;
        std::cout << "3. Modificar contraseña de usuario" << std::endl;
        std::cout << "4. Buscar usuario" << std::endl;
        std::cout << "5. Mostrar todos los usuarios" << std::endl;
        std::cout << "6. Salir" << std::endl;
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                std::cout << "Ingrese nombre de usuario: ";
                std::cin >> nombre;
                std::cout << "Ingrese contraseña: ";
                std::cin >> contrasena;
                agregarUsuario(usuarios, {nombre, contrasena});
                guardarUsuarios(usuarios, "usuarios.txt");
                break;
            case 2:
                std::cout << "Ingrese nombre de usuario a eliminar: ";
                std::cin >> nombre;
                eliminarUsuario(usuarios, nombre);
                guardarUsuarios(usuarios, "usuarios.txt");
                break;
            case 3:
                std::cout << "Ingrese nombre de usuario: ";
                std::cin >> nombre;
                std::cout << "Ingrese nueva contraseña: ";
                std::cin >> contrasena;
                modificarUsuario(usuarios, nombre, contrasena);
                guardarUsuarios(usuarios, "usuarios.txt");
                break;
            case 4:
                std::cout << "Ingrese nombre de usuario a buscar: ";
                std::cin >> nombre;
                buscarUsuario(usuarios, nombre);
                break;
            case 5:
                mostrarUsuarios(usuarios); // Llamada a la nueva función
                break;
            case 6:
                std::cout << "Saliendo del programa." << std::endl;
                break;
            default:
                std::cout << "Opción no válida." << std::endl;
        }
    } while (opcion != 6);

    return 0;
}
