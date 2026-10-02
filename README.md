# Práctica 1: Playlist de música

Programación Orientada a Objetos · Ingeniería Mecatrónica · Tercer semestre

Llena cada espacio conforme avances en las fases de [PRACTICA.md](PRACTICA.md).

## Fase 1. Entender el problema

**1.1 El problema con mis propias palabras**

---

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

---

## Cierre y reflexión

**6.1 ¿Qué aprendiste en esta práctica?**

---

**6.2 ¿Qué cambiarías de tu proceso la próxima vez?**

---