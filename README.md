# Práctica 1: Playlist de música

Programación Orientada a Objetos · Ingeniería Mecatrónica · Tercer semestre

Llena cada espacio conforme avances en las fases de [PRACTICA.md](PRACTICA.md).

## Fase 1. Entender el problema

**1.1 El problema con mis propias palabras**

---

**1.2 Sustantivos (posibles clases) y verbos (posibles métodos)**

Sustantivos: \_\_\_\_\_

Verbos: \_\_\_\_\_

**1.3 Relaciones** (completa con "es un", "tiene un" o "usa un")

*   Una canción \_\_\_\_\_ pista.
*   Un podcast \_\_\_\_\_ pista.
*   Una pista \_\_\_\_\_ duración.
*   Una playlist \_\_\_\_\_ canción.

## Fase 2. Diseñar la solución

**2.1 Diagrama de clases**

![Diagrama de clases](diseno_solucion.png)

**2.2 Justificación de cada relación**

| Relación | Tipo | ¿Por qué? |
| --- | --- | --- |
| Cancion - Pista | \_\_\_\_\_ | \_\_\_\_\_ |
| Podcast - Pista | \_\_\_\_\_ | \_\_\_\_\_ |
| Pista - Duracion | \_\_\_\_\_ | \_\_\_\_\_ |
| Playlist - Cancion | \_\_\_\_\_ | \_\_\_\_\_ |
| Playlist - Podcast | \_\_\_\_\_ | \_\_\_\_\_ |

## Fase 3. Implementar

**3.1 Bitácora de dudas**

| # | Duda | Cómo la resolví | Fuente |
| --- | --- | --- | --- |
| 1 | \_\_\_\_\_ | \_\_\_\_\_ | \_\_\_\_\_ |
| 2 | \_\_\_\_\_ | \_\_\_\_\_ | \_\_\_\_\_ |
| 3 | \_\_\_\_\_ | \_\_\_\_\_ | \_\_\_\_\_ |

**3.2 Experimentos guiados**

Experimento 1, orden de construcción y destrucción: \_\_\_\_\_

Experimento 2, ¿quién es dueño de quién?: \_\_\_\_\_

Experimento 3, un objeto en dos playlists: \_\_\_\_\_

## Fase 4. Probar y mejorar

**4.1 Tabla de pruebas**

| # | Caso | Resultado esperado | Resultado obtenido | ¿Pasa? |
| --- | --- | --- | --- | --- |
| 1 | Duración normal `Duracion(3, 45)` | 3:45 | \_\_\_\_\_ | \_\_\_\_\_ |
| 2 | Segundos mayores a 59 `Duracion(0, 75)` | 1:15 | \_\_\_\_\_ | \_\_\_\_\_ |
| 3 | Valores negativos `Duracion(-2, 10)` | 0:00 | \_\_\_\_\_ | \_\_\_\_\_ |
| 4 | Título vacío | "Sin título" | \_\_\_\_\_ | \_\_\_\_\_ |
| 5 | Playlist vacía | 0:00 y 0 pistas | \_\_\_\_\_ | \_\_\_\_\_ |
| 6 | Canción duplicada | La segunda vez devuelve `false` | \_\_\_\_\_ | \_\_\_\_\_ |
| 7 | Puntero nulo | Devuelve `false` | \_\_\_\_\_ | \_\_\_\_\_ |
| 8 | Total con 2 canciones y 1 podcast | Suma correcta en m:ss | \_\_\_\_\_ | \_\_\_\_\_ |

**4.2 Bitácora de mejoras**

| # | Falla o mejora detectada | Qué cambié | Por qué |
| --- | --- | --- | --- |
| 1 | \_\_\_\_\_ | \_\_\_\_\_ | \_\_\_\_\_ |
| 2 | \_\_\_\_\_ | \_\_\_\_\_ | \_\_\_\_\_ |

Retos opcionales que intenté: \_\_\_\_\_

## Fase 5. Publicar en GitHub

**5.1 Enlace a mi fork**

---

## Cierre y reflexión

**6.1 ¿Qué aprendiste en esta práctica?**

---

**6.2 ¿Qué cambiarías de tu proceso la próxima vez?**

---