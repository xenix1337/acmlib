/*
 * Opis: Szybki hash 2 intów.
 */
int cantor(int a, int b) {
   return (a + b + 1) * (a + b) / 2 + b;
}