# CTestExample

Dieses Projekt demonstriert die Verwendung von **CMake** und **CTest**, um eine einfache C++-Bibliothek zu erstellen und zu testen. Die Bibliothek implementiert grundlegende mathematische Funktionen wie Addition und Multiplikation.

---

## Projektstruktur

```
CTestExample/
│-- CMakeLists.txt             # Haupt-CMake-Konfigurationsdatei
│-- LICENSE                    # Lizenzdatei (z.B. MIT License)
│-- .gitignore                 # Git Ignore-Datei
│-- README.md                  # Beschreibung des Repos
│-- include/
│   └── MathFunctions.h        # Header-Datei mit der Klassendefinition
│-- src/
│   └── MathFunctions.cpp      # Implementierung der Funktionen
│-- tests/
│   │-- CMakeLists.txt         # CMake für Tests
│   └── test_math.cpp          # Testdatei für die Funktionen
│-- example/
│   └── main.cpp               # Beispiel zur Nutzung der Bibliothek
```

---

## Anforderungen

- **CMake** Version 3.13 oder neuer
- Ein C++-Compiler (z.B. GCC, Clang, MSVC)

---

## Bauen des Projekts

1. **Projekt konfigurieren**:
   ```bash
   mkdir build
   cd build
   cmake ..
   ```

2. **Projekt bauen**:
   ```bash
   cmake --build .
   ```

---

## Tests ausführen

Die Tests werden mit **CTest** ausgeführt, das in CMake integriert ist.

1. **Nach dem Build** führe die Tests aus:
   ```bash
   ctest
   ```

2. **Erwartete Ausgabe** bei erfolgreichem Testlauf:
   ```plaintext
   Test project /path/to/build
       Start 1: MathTests
   1/1 Test #1: MathTests .......................   Passed    0.01 sec

   100% tests passed, 0 tests failed out of 1
   ```

---

## Beispielprogramm

Ein Beispielprogramm zur Nutzung der Bibliothek befindet sich im `example/`-Verzeichnis:

### Inhalt von `example/main.cpp`

```cpp
#include "MathFunctions.h"
#include <iostream>

int main() {
    std::cout << "2 + 3 = " << add(2, 3) << std::endl;
    std::cout << "2 * 3 = " << multiply(2, 3) << std::endl;
    return 0;
}
```

### Beispiel ausführen

Nach dem Bauen des Projekts führe das Beispielprogramm aus:

```bash
./example/MyApp
```

**Erwartete Ausgabe**:
```plaintext
2 + 3 = 5
2 * 3 = 6
```

---

## Lizenz

Dieses Projekt steht unter der **MIT License**. Siehe [LICENSE](./LICENSE) für Details.

---

## Autor

**Dein Name**  
[MaxClerkwell](https://github.com/MaxClerkwell)
