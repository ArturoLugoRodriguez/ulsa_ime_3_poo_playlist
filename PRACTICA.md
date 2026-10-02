# Práctica 1: Playlist de música

Programación Orientada a Objetos · Ingeniería Mecatrónica · Tercer semestre

## Sobre esta práctica

**El problema.** Una aplicación de música organiza canciones y podcasts en playlists. Cada pista tiene título y duración. Las canciones tienen además artista y género, y los podcasts tienen anfitrión y número de episodio. Una playlist tiene nombre, reúne pistas que ya existen en la biblioteca y reporta su duración total.

**Qué se practica.** Clases y objetos, encapsulamiento, constructores con lista de inicialización, métodos `const`, herencia (IS-A), composición y agregación (HAS-A).

**Idea central.** Distinguir tres relaciones: "es un" (herencia), "tiene un y lo crea" (composición) y "usa uno que ya existe" (agregación).

**Repositorio base.** `ulsa_ime_3_poo_playlist`. Harás un fork y trabajarás en tu copia.

**Entregable.** El enlace a tu fork en Google Classroom, con el código de `include/` y `src/`, `README.md` y `diseno_solucion.png` completos.

| Fase | Qué haces | Secciones del README |
|---|---|---|
| 0 | Preparar el entorno | Ninguna |
| 1 | Entender el problema | 1.1, 1.2, 1.3 |
| 2 | Diseñar la solución | 2.1, 2.2 |
| 3 | Implementar | 3.1, 3.2 |
| 4 | Probar y mejorar | 4.1, 4.2 |
| 5 | Publicar en GitHub | 5.1 |
| Cierre | Reflexión | 6.1, 6.2 |

## Fase 0. Preparar el entorno

1. Entra al repositorio base y presiona **Fork** para crear tu copia.
2. Clona tu fork en tu computadora.
   - Con terminal: `git clone <url-de-tu-fork>`
   - Con GitHub Desktop: *File > Clone repository*, elige tu fork y una carpeta local.
3. Abre la carpeta en VS Code y revisa su estructura:

```
ulsa_ime_3_poo_playlist/
├── include/        Interfaces de las clases (.h)
│   ├── Duracion.h
│   ├── Pista.h
│   ├── Cancion.h
│   ├── Podcast.h
│   └── Playlist.h
├── src/            Implementaciones (.cpp) y programa principal
│   ├── Duracion.cpp
│   ├── Pista.cpp
│   ├── Cancion.cpp
│   ├── Podcast.cpp
│   ├── Playlist.cpp
│   └── main.cpp
├── .gitignore
├── PRACTICA.md
└── README.md
```

4. Desde la raíz del repositorio, compila y ejecuta la plantilla para confirmar que tu entorno funciona:

```
g++ -Wall -Wextra -std=c++17 -Iinclude src/*.cpp -o playlist
./playlist
```

> **Nota técnica.** `-Iinclude` le indica al compilador en qué carpeta buscar los archivos `.h`, y `src/*.cpp` compila todas las implementaciones juntas. Si olvidas un `.cpp`, obtendrás un error de "undefined reference".

> **Nota técnica.** `-Wall -Wextra` activa las advertencias del compilador. Una advertencia casi siempre señala un error que aún no has notado. La meta es compilar con cero advertencias.

> **Nota técnica.** El repositorio incluye la carpeta `.vscode` con una configuración que desactiva el autocompletado y los asistentes de IA. No la modifiques: en esta práctica importa que el código lo escribas y lo entiendas tú.

## Fase 1. Entender el problema

Antes de escribir código, lee el problema dos veces y llena el README.

- **1.1** Explica el problema con tus propias palabras.
- **1.2** Subraya los sustantivos del enunciado y lista los que podrían ser clases. Subraya los verbos y lista los que podrían ser métodos.
- **1.3** Completa cada frase con "es un", "tiene un" o "usa un".

> **Nota técnica.** Pregunta clave para distinguir composición de agregación: si el objeto contenedor desaparece, ¿la parte debe desaparecer también? Si la respuesta es sí, es composición. Si la parte sigue teniendo sentido por su cuenta, es agregación.

## Fase 2. Diseñar la solución

En esta práctica las clases ya están definidas. Tu trabajo es dibujarlas y completarlas.

| Clase | Responsabilidad | Relación |
|---|---|---|
| `Duracion` | Guardar minutos y segundos válidos | Parte de `Pista` |
| `Pista` | Datos comunes: título y duración | Clase base. Tiene una `Duracion` (composición) |
| `Cancion` | Agrega artista y género | Es una `Pista` (herencia) |
| `Podcast` | Agrega anfitrión y número de episodio | Es una `Pista` (herencia) |
| `Playlist` | Agrupar pistas y calcular la duración total | Usa canciones y podcasts existentes (agregación) |

Dibuja el diagrama de clases con atributos, métodos y las tres relaciones. Se sugiere usar **draw.io** (https://app.diagrams.net), que es gratuito, funciona en el navegador sin crear cuenta y también tiene versión de escritorio.

1. Crea un diagrama en blanco y activa la biblioteca de figuras **UML** en el panel izquierdo (*Más figuras > UML*).
2. Usa la figura **Clase** para cada clase, con sus tres secciones: nombre, atributos y métodos.
3. Conecta las clases con las flechas de herencia, composición y agregación.
4. Exporta con *Archivo > Exportar como > PNG* y guarda el archivo como `diseno_solucion.png` en la raíz del repositorio.

Si prefieres otra herramienta o hacerlo a mano y fotografiarlo, también es válido, siempre que el archivo final tenga ese nombre y sea legible.

- **2.1** Verifica que la imagen se vea en el README.
- **2.2** Justifica en una línea cada relación del diagrama.

> **Nota técnica.** En UML la herencia se dibuja con una flecha de triángulo vacío que apunta a la clase base. La composición lleva un rombo relleno del lado del contenedor y la agregación un rombo vacío.

> **Nota técnica.** Guarda también el archivo editable de draw.io (`.drawio`) en tu computadora. Si tu diseño cambia durante la implementación, podrás actualizar el diagrama y volver a exportarlo en lugar de dibujarlo de nuevo.

> **Nota técnica.** Diseñar antes de programar ahorra trabajo: corregir un diagrama toma minutos, corregir código ya escrito toma mucho más.

## Fase 3. Implementar

Completa los `TODO` en este orden y compila después de terminar cada clase. En cada una, primero declara los métodos en su archivo `.h` de `include/` y después impleméntalos en su archivo `.cpp` de `src/`.

1. **`Duracion`**: constructor que valida y normaliza, `totalSegundos()` e `imprimir()`.
2. **`Pista`**: regla del título vacío, `setTitulo()` y `mostrarInfo()`.
3. **`Cancion` y `Podcast`**: constructor que llama al de `Pista`, accedentes propios y `mostrar()`.
4. **`Playlist`**: `agregarCancion()`, `agregarPodcast()`, `cantidadPistas()`, `duracionTotal()` y `mostrar()`.
5. **`main.cpp`**: crea la biblioteca de pistas y dos playlists, y muestra su contenido.

Las plantillas incluyen preguntas en los comentarios. Respóndelas para ti mismo antes de escribir el código de cada `TODO`.

> **Nota de C++.** La interfaz (`.h`) dice qué puede hacer una clase y la implementación (`.cpp`) dice cómo lo hace. Quien usa la clase solo necesita leer el `.h`. En el `.cpp`, cada método se escribe con el nombre de su clase y el operador `::`, por ejemplo `Duracion::totalSegundos()`.

> **Nota de C++.** Cada `.h` está envuelto en `#ifndef`, `#define` y `#endif`. Esa guarda de inclusión evita que la clase se declare dos veces cuando varios archivos incluyen el mismo encabezado.

> **Nota de C++.** Declara primero los atributos privados y después la interfaz pública. Todo método que no modifica el objeto lleva `const` al final. Así el compilador te avisa si lo cambias por accidente.

> **Nota de C++.** Usa lista de inicialización en los constructores. En una clase derivada es la única forma de elegir qué constructor de la clase base se ejecuta.

```cpp
// En src/Cancion.cpp
Cancion::Cancion(const std::string& titulo, int min, int seg,
                 const std::string& artista, const std::string& genero)
    : Pista(titulo, min, seg), artista(artista), genero(genero) {}
```

> **Nota de C++.** Pasa los `std::string` como `const std::string&` para no copiarlos en cada llamada.

> **Nota de C++.** La playlist guarda `std::vector<Cancion*>`: punteros a canciones que no le pertenecen. Por eso nunca hace `delete` sobre ellas. Usa `nullptr`, no `NULL` ni `0`, para representar un puntero vacío.

> **Nota técnica.** Los atributos privados de `Pista` no son accesibles desde `Cancion`, aunque `Cancion` sea una `Pista`. La clase derivada usa la interfaz pública de su base, igual que cualquier otro código.

> **Nota técnica.** Con lo visto hasta la Unidad III, la playlist necesita un contenedor para canciones y otro para podcasts. Anota en tu bitácora de dudas qué pasaría si mañana hubiera diez tipos de pista.

### Experimentos guiados

Realiza los tres y anota lo que observaste en la sección 3.2 del README.

1. **Orden de construcción.** Agrega un `std::cout` en los constructores de `Duracion`, `Pista` y `Cancion`, y un destructor con mensaje en cada una. Crea una canción y observa en qué orden aparecen los mensajes al crearla y al destruirla.
2. **¿Quién es dueño de quién?** Crea una canción en `main` y una playlist dentro de un bloque `{ }`. Al cerrar el bloque, la playlist se destruye. ¿La canción sigue existiendo? ¿Por qué?
3. **Un objeto, dos playlists.** Agrega la misma canción a dos playlists, cambia su título con `setTitulo()` y muestra ambas. ¿Qué observas? ¿Qué te dice sobre la diferencia entre guardar una copia y guardar un puntero?

Llena también la sección 3.1.

- **3.1** Bitácora de dudas: cada duda que surja, cómo la resolviste y qué fuente consultaste.
- **3.2** Resultados de los tres experimentos.

## Fase 4. Probar y mejorar

Ejecuta cada caso desde `main.cpp` y completa la tabla de la sección 4.1 del README.

| # | Caso | Entrada | Resultado esperado |
|---|---|---|---|
| 1 | Duración normal | `Duracion(3, 45)` | 3:45 |
| 2 | Segundos mayores a 59 | `Duracion(0, 75)` | 1:15 |
| 3 | Valores negativos | `Duracion(-2, 10)` | 0:00 |
| 4 | Título vacío | Canción con título `""` | "Sin título" |
| 5 | Playlist vacía | `duracionTotal()` y `cantidadPistas()` | 0:00 y 0 pistas |
| 6 | Canción duplicada | Agregar dos veces la misma canción | La segunda vez devuelve `false` |
| 7 | Puntero nulo | `agregarCancion(nullptr)` | Devuelve `false` |
| 8 | Total mixto | 2 canciones y 1 podcast | Suma correcta en m:ss |

- **4.1** Tabla de pruebas con el resultado obtenido en cada caso.
- **4.2** Bitácora de mejoras: qué fallas encontraste, qué cambiaste y por qué.

> **Nota técnica.** Una prueba que falla es información valiosa. Regístrala antes de corregir el código y vuelve a ejecutar todos los casos después de cada corrección, porque un arreglo puede romper algo que ya funcionaba.

> **Nota técnica.** Los casos límite (cero, negativo, vacío, duplicado, nulo) son donde más errores aparecen. Acostúmbrate a preguntarte cuáles son los de cada método que escribas.

### Retos opcionales (insatisfacción positiva)

Tu programa funciona. ¿Qué más podría hacer? Elige los que te interesen y anótalos en la sección 4.2.

- Ordenar la playlist por duración.
- Buscar todas las canciones de un artista.
- Quitar una pista de la playlist sin destruirla.
- Mostrar la pista más larga y la más corta.
- Proponer una mejora propia que no esté en esta lista.

## Fase 5. Publicar en GitHub

1. Ejecuta `git status` y verifica que el ejecutable `playlist` no aparezca. El archivo `.gitignore` debe excluirlo.
2. Haz commits pequeños con mensajes que describan el cambio, por ejemplo "Agrega validación en Duracion".
3. Sube los cambios.
   - Con terminal: `git add .`, `git commit -m "mensaje"` y `git push`
   - Con GitHub Desktop: escribe el mensaje, presiona **Commit to main** y luego **Push origin**.
4. Abre tu fork en el navegador y confirma que el README muestra el diagrama y todas tus respuestas.

- **5.1** Pega el enlace a tu fork. Es el mismo que entregarás en Google Classroom.

> **Nota técnica.** Un repositorio guarda código fuente, no archivos generados. El ejecutable se puede volver a crear compilando, por eso no se sube.

## Cierre y reflexión

Responde en el README con honestidad. No hay respuestas correctas.

- **6.1** ¿Qué aprendiste en esta práctica?
- **6.2** ¿Qué cambiarías de tu proceso la próxima vez?

## Lista de verificación

- [ ] El programa compila sin errores ni advertencias.
- [ ] Cada clase tiene su interfaz en `include/` y su implementación en `src/`.
- [ ] Todos los atributos son privados y los accedentes son `const`.
- [ ] Las clases derivadas llaman al constructor de `Pista` en la lista de inicialización.
- [ ] La playlist no destruye las pistas que contiene.
- [ ] Los tres experimentos guiados están documentados.
- [ ] Los ocho casos de prueba están documentados.
- [ ] `diseno_solucion.png` está en el repositorio y se ve en el README.
- [ ] Todas las secciones numeradas del README están llenas.
- [ ] El ejecutable no está en el repositorio.
- [ ] El enlace al fork está entregado en Google Classroom.