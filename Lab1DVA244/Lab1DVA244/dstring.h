#define _CRT_SECURE_NO_WARNINGS
#ifndef DSTRING_H
#define DSTRING_H
#include <stdio.h>

typedef char* DString;

/* Returnerar en strang som innehaller samma text som textstrangen 'str'.
  Den returnerade strangen ar dynamiskt allokerad (dvs, p� heapen) */
DString dstring_initialize(const char* str);

/* Slar ihop originalstrangen med source
  Returnera 0 om det inte gick att allokera tillrackligt med minne
  f�r att sla ihop strangarna, annars 1 */
int dstring_concatenate(DString* destination, DString source);

/* Forkortar *destination sa att den innehaller hogst truncatedLength tecken
  Om 'truncatedLength' ar langre an strangens langd hander ingenting */
void dstring_truncate(DString* destination, unsigned int truncatedLength);

/* Skriver strangen till en textfil.
   Textfilen forvantas redan vara oppnad och fortsatter vara oppnad efter anropet */
void dstring_print(DString stringToPrint, FILE* textfile);

/* Frigor minnet f�r en dynamisk strang och satter strangen (*stringToDelete) till NULL */
void dstring_delete(DString* stringToDelete);

#endif
