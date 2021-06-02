#ifndef __ESTUDIANTE_H__
#define __ESTUDIANTE_H__

#include <string>

class Estudiante {

    std::string nombre;
    int cui;
    int edad;
    char sexo;
    std::string semestre;
public:
    Estudiante();
    Estudiante(std::string, int, int, char, std::string);
    void setCui(int);
    int getCui() const;
    void setEdad(int);
    int getEdad() const;
    void setNombre(std::string);
    std::string getNombre() const;
    char getSexo() const;
    void setSexo(char);
    void setSemestre(std::string);
    std::string getSemestre() const;
    friend std::ostream& operator << (std::ostream &out, Estudiante &Est);
};

Estudiante::Estudiante(){
    this->nombre = "";
    this->cui = 00000000;
    this->edad = 16;
    this->semestre = 1;
}

Estudiante::Estudiante(std::string nombre, int cui, int edad, char sexo, std::string semestre){
    this->nombre = nombre;
    this->cui = cui;
    this->edad = edad;
    this->sexo = sexo;
    this->semestre = semestre;
}
//edad
int Estudiante::getEdad() const{
    return edad;
}
void Estudiante::setEdad(int edad){
    this->edad=edad;
}
//cui
void Estudiante::setCui(int cui){
    this->cui=cui;
}
int Estudiante::getCui() const{
    return cui;
}
//nombre
void Estudiante::setNombre(std::string nombre){
    this->nombre = nombre;
}
std::string Estudiante::getNombre()const{
    return nombre;
}
//sexo
void Estudiante::setSexo(char sexo){
    this-> sexo= sexo;
}
char Estudiante::getSexo()const{
    return sexo;
}
//Semestre
void Estudiante::setSemestre(std::string semestre){
    this->semestre=semestre;
}
std::string Estudiante::getSemestre()const{
    return semestre;
}

std::ostream& operator << (std::ostream &out, Estudiante &Est){
    out<<Est.getNombre()<<", "
    <<Est.getEdad()<<", "
    <<Est.getSexo()<<", "
    <<Est.getCui()<<", "
    <<Est.getSemestre()<<";"<<std::endl;
    return out;
}

#endif
