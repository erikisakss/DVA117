#include "dstring.h"
#include <string.h>
#include <stdlib.h>
#include <assert.h>


DString dstring_initialize(const char* str)
{
	// Precondition: str ar ej NULL - testas med en assert
	assert(str != NULL);
	/* Tips:
	   - Allokera (t.ex. med malloc) tillrackligt med minne for att fa plats med str,
		 glom inte att det maste finnas plats för \0 (nolltermineringen).
		 Glom inte att testa sa att allokeringen lyckades
	   - Det är tillatet att använda inbyggda strangfunktioner (som t.ex strcpy())
	   - Kom ihag att anvanda assert() */
	char* temp = (char*)malloc(sizeof(char) * (strlen(str) + 1));
	if (temp != NULL)
	{

		strcpy(temp, str);
		temp[strlen(temp)] = '\0';
		return temp;
	}

	else
	{
		printf("Failed to allocate memory!");
	}
	// Postcondition: returvardet innehaller samma strang som 'str' - behöver inte testas med assert

	return NULL;
}

int dstring_concatenate(DString* destination, DString source)
{
	// Precondition: destination är ej NULL
	// Precondition: *destination ar ej NULL
	// Precondition: source ar ej NULL
	// Preconditions testas med asserts.
	assert(destination != NULL);
	assert(*destination != NULL);
	assert(source != NULL);
	/* Tips:
	   - Tank på att *destination redan ar en dynamiskt allokerad strang
	   - Tank på att vi kommer att behova allokera mer minne for att fa plats med den har langre strangen.
		 Minnet som *destination pekar pa behover utokas (realloc), hur stort ska det "nya" minnet bli?
		 Glom inte att nolltermineringen maste fa plats.
		 Nar du allokerar minne dynamiskt maste du alltid testa sa att allokeringen lyckades innan du
		 borjar jobba med minnet.
	   - Det ar tillatet att anvanda inbyggda funktioner (som t.ex. strcat()).
	*/

	char* temp = (char*)realloc(*destination, sizeof(char) * (strlen(*destination) + strlen(source) + 1));
	if (temp != NULL)
	{
		strcat(temp, source);
		temp[strlen(temp)] = '\0';
		*destination = temp;
		return 1;
	}


	// Postcondition: *destination innehaller den gamla strangen ihopslagen med source - behöver inte testas med assert.
	return 0; // Ersatt denna rad. Den ar just nu med for att programmet ska kompilera, vad ar det som ska returneras?.
}

void dstring_truncate(DString* destination, unsigned int truncatedLength)
{
	// Precondition: destination är ej NULL, *destination ar ej NULL
	// längden (truncateLength) får inte vara negativ
	// Preconditions testas med asserts

	assert(destination != NULL);
	assert(*destination != NULL);
	assert(truncatedLength > 0);

	/* Tips:
	   - Anvand realloc for att frigora det overflodiga minnet
		 (realloc frigor forst minnet och allokerar sedan nytt for den angivna storleken)
	   - glom inte nolltermineringen
	 Vad händer om truncateLength är längre än vad strängen är?*/

	if (truncatedLength < destination)
	{
		char* temp = (char*)realloc(*destination, sizeof(char) * (truncatedLength + 1));


		if (temp != NULL)
		{
			temp[truncatedLength] = '\0';
			*destination = temp;
		}


	}

	else
	{
		printf("Failed to reallocate memory!");
	}
	// Postcondition: *destination ar inte langre an 'truncatedLength' tecken - behöver inte testas med assert
}

void dstring_print(DString str, FILE* textfile)
{
	// Precondition: textfile ar inte NULL - maste testas innan du forsoker skriva till filen
	assert(textfile != NULL);
	/*Tank på att filpekaren kopplas till filen innan funktionen anropas*/
	fprintf(textfile, str);
	/* filpekaren far inte stangas, filen ska fungera som vanligt efter anropet */
}

void dstring_delete(DString* stringToDelete)
{
	// Precondition: stringToDelete ar inte NULL
	assert(stringToDelete != NULL);
	free(*stringToDelete);
	*stringToDelete = NULL;
	// Postcondition: *stringToDelete ar NULL och minnet ar frigjort - behöver inte testas med assert
}
