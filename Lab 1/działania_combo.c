#include <stdio.h>

int main(void) {

    float a = 1.1, b = 2.2, c;
    int x = 3, y = 4, z;

    c = a + b;
    printf("%f \n", c);
    c = x + y;
    printf("%f \n", c);
    c = a + y;
    printf("%f \n", c);
    c = x + b;
    printf("%f \n", c);
    printf("\n");

    z = a + b;
    printf("%d \n", z);
    z = x + y;
    printf("%d \n", z);
    z = a + y;
    printf("%d \n", z);
    z = x + b;
    printf("%d \n", z);
    printf("\n");

    c = a - b;
    printf("%f \n", c);
    c = x - y;
    printf("%f \n", c);
    c = a - y;
    printf("%f \n", c);
    c = x - b;
    printf("%f \n", c);
    printf("\n");

    z = a - b;
    printf("%d \n", z);
    z = x - y;
    printf("%d \n", z);
    z = a - y;
    printf("%d \n", z);
    z = x - b;
    printf("%d \n", z);
    printf("\n");

    c = a * b;
    printf("%f \n", c);
    c = x * y;
    printf("%f \n", c);
    c = a * y;
    printf("%f \n", c);
    c = x * b;
    printf("%f \n", c);
    printf("\n");

    z = a * b;
    printf("%d \n", z);
    z = x * y;
    printf("%d \n", z);
    z = a * y;
    printf("%d \n", z);
    z = x * b;
    printf("%d \n", z);
    printf("\n");

    c = a / b;
    printf("%f \n", c);
    c = x / y;
    printf("%f \n", c);
    c = a / y;
    printf("%f \n", c);
    c = x / b;
    printf("%f \n", c);
    printf("\n");

    z = a / b;
    printf("%d \n", z);
    z = x / y;
    printf("%d \n", z);
    z = a / y;
    printf("%d \n", z);
    z = x / b;
    printf("%d \n", z);
    printf("\n");


    return 0;

}



   /*
   Przy wykonywaniu ka�dej, z tych operacji arytmetycznych,  w sytuacji, w kt�rej wynikiem jakiejkolwiek, z tych kombinacji zmiennych,
   (przy jakiejkolwiek operacji), jest liczba rzeczywista, to wszystkie wyniki s� poprawne, z jednym wyj�tkiem.
   Jedyny nieoczywisty przypadek, to taki, w kt�rym dodajemy, odejmujemy lub mno�ymy dwie liczby ca�kowite (x i y), kt�rych
   wynikiem, jest liczba rzeczywista (c). Wtedy, do warto�ci wyniku ca�kowitego, zostaje przypisana cz�� dziesi�tna (,00...) i otrzymujemy
   finalny wynik: (np.c = x * y => c = 12.000000). Wynik zostaje przekszta�cony, do postaci zmiennoprzecinkowej, poniewa�
   zmienna c, jest liczb� zmiennoprzecinkow� i jednocze�nie, wynikiem tych dzia�a�, przez co wynik tych operacji, wy�wietlany jest, jako liczba zmiennoprzecinkowa.
   Odst�pstwo od tej regu�y, jest w prypadku, dzielenia dw�ch liczb ca�kowitych (x i y), z wynikiem zmiennoprzecinkowym(c).
   Wtedy uci�cie nast�puje od razu w trakcie pocz�tkowego wyniku dzia�ania, gdy� dodajemy dwie liczby ca�kowite, wi�c cz�� dziesi�tna, zostaje uci�ta i mamy wynik 0,
   nast�pnie ten wynik pocz�tkowy, przekszta�acany jest, do postaci zmiennoprzecinkowej, w tym przypadku liczby 0, co wynika ze zmiennej c, kt�ra jest liczb� zmiennoprzecinkow�, st�d
   c = 0.000000 - co jest b��dnym wynikiem.
   */



  /*
   Z kolei, w razie wykonywania jakiejkolwiek z tych operacji arytmetycznych, z wynikiem ca�kowitym (z), na dw�ch liczbach, gdzie
   przynajmniej jedna, z tych liczb, jest liczb� rzeczywist�, to dostajemy niepoprawne warto�ci (oczywi�cie, przy tych liczbach, kt�re przypisa�em do zmiennych, gdy� te wyniki mog� by� poprawne).
   Jedynie, w przypadku, w kt�rym dodajemy, odejmujemy i mno�ymy, dwie liczby ca�kowite (x i y), to dostajemy poprawne warto�ci,
   gdy� wykonujemy te operacje matematyczne, na liczbach ca�kowitych (x i y), kt�rych wynik, wy�wietlany jest, jako liczba ca�kowita(z).
   Gdy jednak pojawia si�, cho� jedna, liczba rzeczywista, to jest ona przyczyn� niepoprawnych wynik�w, poniewa�
   cz�� dziesi�tna zostaje wyci�ta, a wynik pocz�tkowy zostaje zaokr�glny w d� (nawet je�li powinna by� zaokr�glona w g�r�
   np. z = x / y => z = 3/4 = 0 - co jest b��dem), dzieje si� to z powodu zmiennej 'z', kt�ra jest liczb� ca�kowit� i wynikiem jednocze�nie,
   przez co wynik te� musi by� liczb� ca�kowit�, w tym przypadku liczb� 0.
   Nie bez powodu pos�u�y�em si� przyk�adem dzielenia, wy�ej, gdy� w tej operacji, w razie wyniku ca�kowitego(z),
   po podzieleniu dw�ch liczb ca�kowitych (x / y), otrzymujemy wynik niepoprawny, w przeciwie�stwie, do tego samego przypadku dzia�ania, na dw�ch liczbach ca�kowitych(x i y) i na wynikach zar�wno zmiennoprzecinkowych(c), jak i ca�kowitych(z),
   z wy��czeniem wyniku rzeczywistego dzielenia liczb x i y, kt�ry om�wi�em wcze�niej.
   Przyczyna jest taka sama 3/4=0.75, nast�pnie cz�� dziesi�tna, jest ucinana, a liczba zostaje zaokr�glona, do ni�szej warto�ci, co wynika ze zmiennej z, kt�re jest liczb� ca�kowit�,
   st�d: z = 0).
  */
