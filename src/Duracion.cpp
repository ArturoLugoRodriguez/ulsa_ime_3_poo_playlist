// Implementación de la clase Duracion.

#include "Duracion.h"

#include <iostream>

Duracion::Duracion(int min, int seg) : minutos(min), segundos(seg) {
    // TODO 1.1: valida y normaliza.
    //   - Si min o seg son negativos, la duración queda en 0:00.
    //   - Si seg es mayor a 59, convierte el excedente en minutos
    //     (0 min 75 seg debe quedar como 1:15).
    // Pregunta: ¿por qué conviene validar aquí y no en main?
}

int Duracion::getMinutos() const { return minutos; }

int Duracion::getSegundos() const { return segundos; }

// TODO 1.2: implementa  int Duracion::totalSegundos() const
//   Devuelve la duración completa expresada en segundos.

// TODO 1.3: implementa  void Duracion::imprimir() const
//   Imprime con el formato m:ss (por ejemplo 3:05, no 3:5).
