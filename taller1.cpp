#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << " ===== PROCESO DE ADMISION - CENTRO DE SALUD =====\n\n";

  
    string nombre;
    string direccion;
    string telefono;
    string correo;

    
    int edad;

    
    char genero;
    char estrato;
    char alergiaConocida;

  
    float peso;
    float altura;
    float imc;

    
    bool alergias;

    
    cout << " Por favor ingresa el nombre completo del paciente: ";
    getline(cin, nombre);

    cout << " Por favor ingresa la direccion de residencia: ";
    getline(cin, direccion);

    cout << " Por favor ingresa el numero de telefono: ";
    getline(cin, telefono);

    cout << " Por favor ingresa el correo electronico: ";
    cin >> correo;

    cout << " Por favor ingresa la edad: ";
    cin >> edad;

    cout << " Por favor ingresa el genero (M/F/O): ";
    cin >> genero;

    cout << " Por favor ingrese el estrato socioeconomico (1-6): ";
    cin >> estrato;

    cout << " Por favor ingresa el peso en kg (ej: 56.5): ";
    cin >> peso;

    cout << " Por favor ingresa la altura en metros (ej: 1.50): ";
    cin >> altura;

    cout << " Tiene alergias conocidas? (S/N): ";
    cin >> alergiaConocida;

    
    alergias = (alergiaConocida == 'S' || alergiaConocida == 's') ? true : false;

    imc = peso / (altura * altura);

    cout << "\n ===== FICHA MEDICA DEL PACIENTE =====\n";
    cout << " -Nombre: " << nombre << "\n";
    cout << " -Edad: " << edad << " años\n";
    cout << " -Genero: " << genero << "\n";
    cout << " -Estrato: " << estrato << "\n";
    cout << " -Direccion: " << direccion << "\n";
    cout << " -Telefono: " << telefono << "\n";
    cout << " -Correo: " << correo << "\n";
    cout << " -¿Tiene alergias?: " << (alergias ? "Sí" : "No") << "\n";

    cout << "\n ===== RESULTADOS =====\n";
    cout << " -Peso: " << peso << " kg\n";
    cout << " -Altura: " << altura << " metros\n";
    cout << " -IMC Calculado: " << imc << "\n";
    
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
