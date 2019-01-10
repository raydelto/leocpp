#include <string>

class Perro
{
    public:
        Perro(std::string nombre);
        ~Perro();
        void Ladrar();
        std::string GetNombre() { return _nombre; }
        void SetNombre(std::string nombre) { _nombre = nombre; }
        int GetEdad() { return _edad; }
        void SetEdad(int edad) { _edad = edad; }

    private:
        std::string _nombre;
        int _edad;
};
