# wprawki-cpp

0. Materiały
====== 

Stopniowo będę dodawał nowe rzeczy

 - http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/ Makefile
 - http://www.cplusplus.com/reference/ Dokumentacja bibliotek
 - http://www.learncpp.com/ Dobry manual i tutorial

1. Makefile i GPP
====== 

W katalogu ```zadanie1``` utwórz pliki ```Makefile``` i ```program.cpp```

Plik ```program.cpp``` ma być kompilowany do pliku wyjściowego ```program``` i wyświetlać "Hello world".

Program ma korzystać tylko z plików nagłówkowych  ```cstdio``` i ```cstdlib```

Plik makefile ma budować plik program.cpp i posiadać akcje:

 - make - buduje wszystkie pliki i uruchamia program
 - make run - uruchamia program
 - make all - buduje wszystkie pliki
 - make clean - kasuje pliki tymczasowe i wyjściowe

Czym jest Makefile dowiesz się z http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/
Zwróć uwagę na metody .PHONY - czym są i po co są
