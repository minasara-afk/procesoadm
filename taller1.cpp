#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << " ===== SISTEMA DE ADMISION - CENTRO DE SALUD =====\n\n";

    // ===== DATOS =====
    cout << " Por favor ingresa el nombre completo (nombres y apellidos): ";
    string nombre;
    getline(cin, nombre);

    cout << " Por favor ingresa direccion de residencia: ";
    string direccion;
    getline(cin, direccion);

    cout << " Por favor ingresa numero de telefono: ";
    string telefono;
    getline(cin, telefono);

    cout << " Por favor ingresa el correo electronico: ";
    string correo;
    cin >> correo;

    cout << " Por favor ingresa la edad: ";
    int edad;
    cin >> edad;

    cout << " Por favor ingresa el genero (M/F/O): ";
    char genero;
    cin >> genero;

    cout << " Por favor ingresa el estrato socioeconomico (1-6): ";
    char estrato;
    cin >> estrato;

    cout << " Por favor ingresa el peso en kg (ej: 55.5): ";
    float peso;
    cin >> peso;

    cout << " Por favor ingresa la altura en metros (ej: 1.50): ";
    float altura;
    cin >> altura;

    cout << " Tiene alergias conocidas? (S/N): ";
    char alergiaConocida;
    cin >> alergiaConocida;

    // ===== OPERACIONES =====
    bool alergias = (alergiaConocida == 'S' || alergiaConocida == 's');
    float imc = peso / (altura * altura);

    // ===== MOSTRAR DATOS =====
    cout << "\n ===== FICHA MEDICA DEL PACIENTE =====\n";
    cout << " -Nombre: " << nombre << "\n";
    cout << " -Edad: " << edad << " años\n";
    cout << " -Genero: " << genero << "\n";
    cout << " -Estrato: " << estrato << "\n";
    cout << " -Direccion: " << direccion << "\n";
    cout << " -Telefono: " << telefono << "\n";
    cout << " -Correo: " << correo << "\n";
    cout << " -¿Tiene alergias?: " << (alergias ? "Sí" : "No") << "\n";

    cout << "\n ===== CALCULOS DEL IMC =====\n";
    cout << " -Peso: " << peso << " kg\n";
    cout << " -Altura: " << altura << " metros\n";
    cout << " -IMC Calculado: " << imc << "\n";
    
    // Clasificación IMC
    cout << " -El paciente tiene: ";
    if (imc < 18.5) {
        cout << "bajo peso\n\n";
    } else if (imc >= 18.5 && imc <= 24.9) {
        cout << "peso normal\n\n";
    } else {
        cout << "sobrepeso\n\n";
    }

    return 0;
}
