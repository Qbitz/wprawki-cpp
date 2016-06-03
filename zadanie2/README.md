# Zadanie 2 - Rysowanie trójkątów

Sttryuktura taka jak w zadaniu 1

Program ma wczytać ze standardowego wejścia ilość wierszy i znak, który ma być rysowany (funkcja ```scanf```)

Działanie programu
======

```
P "Rusujemy trojkaty!"
P "Podaj wysokosc trojkata:"
U 6           // liczba calkowita wieksza od 0 i mniejsza lub rowna 20 - blad i koniec jesli bledna wartosc
P "Podaj znak za pomoca ktorego narysowany bedzie trojkat:"
U o           // jeden znak - blad i koniec jesli bledna wartosc
P "Generuje trojkat"
P "Skonczylem generowac trojkat"
P "Czy chcesz wyswietlic trojkat [Y/n]?"
U Y           // program dziala dokuki uzytkownik nie poda Y lub n jesli poda innny znak lub pusta linijke wypisuje ponownie poprzedni konunikat
P "Czy chcesz zapisac trojkat to pliku [Y/n]?"
U Y           // program dziala dokuki uzytkownik nie poda Y lub n jesli poda innny znak lub pusta linijke wypisuje ponownie poprzedni konunikat
P "Podaj nazwe pliku:"
U asd.out     U Y           // program dziala dokuki uzytkownik nie poda poprawnej nazwy pliku. Probujesz go  utworzyc i jesli sie nie udallo wypisuje ponownie poprzedni konunikat
P "Zapisałem  do pliku"
P "Koniec programu"
```

Stary opis
======

Następnie ma do stringa zapisać wygenerowany trójkąt

Po wygenerowaniu trójkątu do stringa ma zapytać czy wyświetlić go na ekran czy zapisać do pliku.

Jeśli użytkownik wybrał opcję zapisu do pliku program wczytuje ze standardowego wejścia nazwę pliku.

Jeśli wypisanie na ekran wyświetlasz trójkąt.

Koniec programu
