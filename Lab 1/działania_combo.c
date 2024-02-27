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
   Przy wykonywaniu ka¿dej, z tych operacji arytmetycznych,  w sytuacji, w której wynikiem jakiejkolwiek, z tych kombinacji zmiennych,
   (przy jakiejkolwiek operacji), jest liczba rzeczywista, to wszystkie wyniki s¹ poprawne, z jednym wyj¹tkiem.
   Jedyny nieoczywisty przypadek, to taki, w którym dodajemy, odejmujemy lub mno¿ymy dwie liczby ca³kowite (x i y), których
   wynikiem, jest liczba rzeczywista (c). Wtedy, do wartoœci wyniku ca³kowitego, zostaje przypisana czêœæ dziesiêtna (,00...) i otrzymujemy
   finalny wynik: (np.c = x * y => c = 12.000000). Wynik zostaje przekszta³cony, do postaci zmiennoprzecinkowej, poniewa¿
   zmienna c, jest liczb¹ zmiennoprzecinkow¹ i jednoczeœnie, wynikiem tych dzia³añ, przez co wynik tych operacji, wyœwietlany jest, jako liczba zmiennoprzecinkowa.
   Odstêpstwo od tej regu³y, jest w prypadku, dzielenia dwóch liczb ca³kowitych (x i y), z wynikiem zmiennoprzecinkowym(c).
   Wtedy uciêcie nastêpuje od razu w trakcie pocz¹tkowego wyniku dzia³ania, gdy¿ dodajemy dwie liczby ca³kowite, wiêc czêœæ dziesiêtna, zostaje uciêta i mamy wynik 0,
   nastêpnie ten wynik pocz¹tkowy, przekszta³acany jest, do postaci zmiennoprzecinkowej, w tym przypadku liczby 0, co wynika ze zmiennej c, która jest liczb¹ zmiennoprzecinkow¹, st¹d
   c = 0.000000 - co jest b³êdnym wynikiem.
   */



  /*
   Z kolei, w razie wykonywania jakiejkolwiek z tych operacji arytmetycznych, z wynikiem ca³kowitym (z), na dwóch liczbach, gdzie
   przynajmniej jedna, z tych liczb, jest liczb¹ rzeczywist¹, to dostajemy niepoprawne wartoœci (oczywiœcie, przy tych liczbach, które przypisa³em do zmiennych, gdy¿ te wyniki mog¹ byæ poprawne).
   Jedynie, w przypadku, w którym dodajemy, odejmujemy i mno¿ymy, dwie liczby ca³kowite (x i y), to dostajemy poprawne wartoœci,
   gdy¿ wykonujemy te operacje matematyczne, na liczbach ca³kowitych (x i y), których wynik, wyœwietlany jest, jako liczba ca³kowita(z).
   Gdy jednak pojawia siê, choæ jedna, liczba rzeczywista, to jest ona przyczyn¹ niepoprawnych wyników, poniewa¿
   czêœæ dziesiêtna zostaje wyciêta, a wynik pocz¹tkowy zostaje zaokr¹glny w dó³ (nawet jeœli powinna byæ zaokr¹glona w górê
   np. z = x / y => z = 3/4 = 0 - co jest b³êdem), dzieje siê to z powodu zmiennej 'z', która jest liczb¹ ca³kowit¹ i wynikiem jednoczeœnie,
   przez co wynik te¿ musi byæ liczb¹ ca³kowit¹, w tym przypadku liczb¹ 0.
   Nie bez powodu pos³u¿y³em siê przyk³adem dzielenia, wy¿ej, gdy¿ w tej operacji, w razie wyniku ca³kowitego(z),
   po podzieleniu dwóch liczb ca³kowitych (x / y), otrzymujemy wynik niepoprawny, w przeciwieñstwie, do tego samego przypadku dzia³ania, na dwóch liczbach ca³kowitych(x i y) i na wynikach zarówno zmiennoprzecinkowych(c), jak i ca³kowitych(z),
   z wy³¹czeniem wyniku rzeczywistego dzielenia liczb x i y, który omówi³em wczeœniej.
   Przyczyna jest taka sama 3/4=0.75, nastêpnie czêœæ dziesiêtna, jest ucinana, a liczba zostaje zaokr¹glona, do ni¿szej wartoœci, co wynika ze zmiennej z, które jest liczb¹ ca³kowit¹,
   st¹d: z = 0).
  */
