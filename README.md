# Material zur Vorlesung Informatik 2

Dieses Repo enthält Material zur Vorlesung Informatik 2 im Kurs TEL23A an der DHBW Mannheim.

## Verwendung

* Folien befinden sich im Ordner [`slides`](slides).
* Zeichnungen aus der Vorlesung befinden sich im Ordner [`scribbles`](scribbles).
* Code zur Vorlesung befindet sich in [`src`](src).

## Bauen des Codes

* Wir Verwenden in der Vorlesung die Programmiersprache `C++`.
* Das Projekt wird mittels [CMake](https://cmake.org/) gebaut,
  einem Buildsystem, das in der `C++`-Welt weit verbreitet ist.
* Am einfachsten lässt es sich mit einer
  _integrierten Entwicklungsumgebung_ (IDE) verwenden.
  Gute IDEs sind:
  * [Microsoft Visual Studio](https://visualstudio.microsoft.com/de/):
    Eine konstenlos verfügbare, sehr verbreitete Umgebung für Windows.
  * [CLion](https://www.jetbrains.com/clion/):
    Für Studierende ebenfalls kostenlos verfügbar, funktioniert auch unter MacOS.
* Alternativ funktioniert das Projekt auch mit
  [Visual Studio Code](https://code.visualstudio.com/).
  Hier ist aber mehr Eigenarbeit gefordert, es müssen einige Tools
  selbst installiert werden:
  * Ein `C++`-Compiler bzw. eine Build-Umgebung, z.B. [MinGW64](https://www.mingw-w64.org/).
  * [CMake](https://cmake.org/) als Build-System.
* **Anmerkung**: Eine portable Build-Umgebung basierend auf VsCode 
  ist in Arbeit und folgt in Kürze.
