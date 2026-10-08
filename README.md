# Práctica 1: Playlist de música

Programación Orientada a Objetos · Ingeniería Mecatrónica · Tercer semestre

Llena cada espacio conforme avances en las fases de [PRACTICA.md](PRACTICA.md).

## Fase 1. Entender el problema

**1.1 El problema con mis propias palabras**

[Inserta aquí tu respuesta]

**1.2 Sustantivos (posibles clases) y verbos (posibles métodos)**

Sustantivos: _____

Verbos: _____

**1.3 Relaciones** (completa con "es un", "tiene un" o "usa un")

*   Una canción _____ pista.
*   Un podcast _____ pista.
*   Una pista _____ duración.
*   Una playlist _____ canción.

## Fase 2. Diseñar la solución

**2.1 Diagrama de clases**

![Diagrama de clases](diseno_solucion.png)

**2.2 Justificación de cada relación**

| Relación | Tipo | ¿Por qué? |
| --- | --- | --- |
| Cancion - Pista | _____ | _____ |
| Podcast - Pista | _____ | _____ |
| Pista - Duracion | _____ | _____ |
| Playlist - Cancion | _____ | _____ |
| Playlist - Podcast | _____ | _____ |

## Fase 3. Implementar

**3.1 Bitácora de dudas**

| # | Duda | Cómo la resolví | Fuente |
| --- | --- | --- | --- |
| 1 | _____ | _____ | _____ |
| 2 | _____ | _____ | _____ |
| 3 | _____ | _____ | _____ |

**3.2 Experimentos guiados**

Experimento 1, orden de construcción y destrucción: _____

Experimento 2, ¿quién es dueño de quién?: _____

Experimento 3, un objeto en dos playlists: _____

## Fase 4. Probar y mejorar

**4.1 Tabla de pruebas**

| # | Caso | Resultado esperado | Resultado obtenido | ¿Pasa? |
| --- | --- | --- | --- | --- |
| 1 | Duración normal `Duracion(3, 45)` | 3:45 | _____ | _____ |
| 2 | Segundos mayores a 59 `Duracion(0, 75)` | 1:15 | _____ | _____ |
| 3 | Valores negativos `Duracion(-2, 10)` | 0:00 | _____ | _____ |
| 4 | Título vacío | "Sin título" | _____ | _____ |
| 5 | Playlist vacía | 0:00 y 0 pistas | _____ | _____ |
| 6 | Canción duplicada | La segunda vez devuelve `false` | _____ | _____ |
| 7 | Puntero nulo | Devuelve `false` | _____ | _____ |
| 8 | Total con 2 canciones y 1 podcast | Suma correcta en m:ss | _____ | _____ |

**4.2 Bitácora de mejoras**

| # | Falla o mejora detectada | Qué cambié | Por qué |
| --- | --- | --- | --- |
| 1 | _____ | _____ | _____ |
| 2 | _____ | _____ | _____ |

Retos opcionales que intenté: _____

## Fase 5. Publicar en GitHub

**5.1 Enlace a mi fork**

[Inserta aquí el enlace a tu fork]

## Cierre y reflexión

**6.1 ¿Qué aprendiste en esta práctica?**

[Inserta aquí tu respuesta]

**6.2 ¿Qué cambiarías de tu proceso la próxima vez?**

[Inserta aquí tu respuesta]
# Práctica 1: Playlist de música

Programación Orientada a Objetos · Ingeniería Mecatrónica · Tercer semestre

## Fase 1. Entender el problema

**1.1 El problema con mis propias palabras**

El programa consiste en crear una aplicación para administrar playlists de música y podcasts. 
Cada pista tiene un título y una duración, mientras que las canciones y los podcasts tienen 
información adicional. Las playlists pueden contener canciones y podcasts, permitiendo 
agregarlos, mostrar su información y calcular la duración total.

**1.2 Sustantivos (posibles clases) y verbos (posibles métodos)**

Sustantivos:
Canción, Podcast, Pista, Duración, Playlist, título, artista, género, anfitrión, episodio.

Verbos:
agregar, mostrar, reproducir, calcular, obtener, establecer, contar, sumar.

**1.3 Relaciones**

* Una canción **es una** pista.
* Un podcast **es una** pista.
* Una pista **tiene una** duración.
* Una playlist **usa** canciones.
* Una playlist **usa** podcasts.

## Fase 2. Diseñar la solución

**2.1 Diagrama de clases**

![Diagrama de clases](c:\Users\HUAWEI\Documents\diagrama_clases.png)

**2.2 Justificación de cada relación**

| Relación | Tipo | ¿Por qué? |
| --- | --- | --- |
| Canción - Pista | Herencia | Una canción es un tipo específico de pista y reutiliza sus atributos y métodos. |
| Podcast - Pista | Herencia | Un podcast también es una pista y puede reutilizar título y duración. |
| Pista - Duración | Composición | Cada pista contiene una duración que forma parte de su información. |
| Playlist - Canción | Agregación | La playlist utiliza canciones que pueden existir independientemente de ella. |
| Playlist - Podcast | Agregación | La playlist utiliza podcasts que también pueden existir independientemente. |

## Fase 3. Implementar

**3.1 Bitácora de dudas**

| # | Duda | Cómo la resolví | Fuente |
| --- | --- | --- | --- |
| 1 | ¿Cómo validar los minutos y segundos de una duración? | Validé los valores en el constructor para mantener siempre un estado válido. | Apuntes de clase / C++ |
| 2 | ¿Cómo funciona la herencia entre Podcast y Pista? | Hice que Podcast heredara públicamente de Pista y reutilicé el constructor de la clase base. | Apuntes de POO / C++ |
| 3 | ¿Cómo evitar canciones o podcasts duplicados en una playlist? | Recorrí el vector y comparé los punteros antes de agregar un elemento. | Apuntes de clase / C++ |

**3.2 Experimentos guiados**

Experimento 1, orden de construcción y destrucción:

Primero se construye la clase base Pista y después la clase derivada Podcast. 
Al destruirse, el orden es inverso: primero Podcast y después Pista.

Experimento 2, ¿quién es dueño de quién?:

La Playlist no es dueña de las canciones ni de los podcasts. Solamente guarda punteros 
a objetos que existen independientemente.

Experimento 3, un objeto en dos playlists:

El mismo objeto canción puede agregarse a dos playlists diferentes porque ambas playlists 
guardan un puntero al mismo objeto. Al ser agregación, ninguna playlist debe eliminarlo.

## Fase 4. Probar y mejorar

**4.1 Tabla de pruebas**

| # | Caso | Resultado esperado | Resultado obtenido | ¿Pasa? |
| --- | --- | --- | --- | --- |
| 1 | Duración normal `Duracion(3, 45)` | 3:45 | 3:45 | Sí |
| 2 | Segundos mayores a 59 `Duracion(0, 75)` | 1:15 | 1:15 | Sí |
| 3 | Valores negativos `Duracion(-2, 10)` | 0:00 | 0:00 | Sí |
| 4 | Título vacío | `"Sin título"` | `"Sin título"` | Sí |
| 5 | Playlist vacía | 0:00 y 0 pistas | 0:00 y 0 pistas | Sí |
| 6 | Canción duplicada | La segunda devuelve `false` | `false` | Sí |
| 7 | Puntero nulo | Devuelve `false` | `false` | Sí |
| 8 | Total con 2 canciones y 1 podcast | Suma correcta en m:ss | Suma correcta | Sí |

**4.2 Bitácora de mejoras**

| # | Falla o mejora detectada | Qué cambié | Por qué |
| --- | --- | --- | --- |
| 1 | Duraciones con valores inválidos | Validé minutos y segundos en el constructor | Para garantizar que Duracion siempre tenga un estado válido. |
| 2 | Posibilidad de duplicar pistas | Verifiqué si el puntero ya existe antes de agregarlo | Para evitar elementos repetidos dentro de una playlist. |

Retos opcionales que intenté:

Validación de datos, prevención de duplicados y reutilización de objetos mediante agregación.

## Fase 5. Publicar en GitHub

**5.1 Enlace a mi fork**

[Inserta aquí el enlace a tu fork]

## Cierre y reflexión

**6.1 ¿Qué aprendiste en esta práctica?**

Aprendí a aplicar los conceptos de programación orientada a objetos mediante clases, 
encapsulamiento, herencia, composición y agregación. También aprendí a separar las 
declaraciones de las clases en archivos `.h` y sus implementaciones en archivos `.cpp`.

Además, comprendí cómo utilizar constructores, listas de inicialización, métodos `const`, 
vectores de punteros y cómo evitar duplicados dentro de una colección.

**6.2 ¿Qué cambiarías de tu proceso la próxima vez?**

La próxima vez organizaría primero todas las clases y sus relaciones antes de comenzar 
a implementar. También probaría cada clase individualmente después de completar sus 
métodos, en lugar de esperar hasta terminar todo el proyecto. Esto permitiría detectar 
los errores más rápido y facilitaría la depuración.
