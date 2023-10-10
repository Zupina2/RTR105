#include<stdio.h>
int main(void)
{
char c1; //Šī ir diskrēta mainīga deklarešana - noteikta izmera atmiņas 
	// apgabals  (char -> 1 byte) tiks sasaist\its ar noteiktu
	// identifikatoru (c1)
	// atmiņā nav vakums => šajā rezervētaja atmiņas apgabalā būs
	// kaut kāda 0 un 1 kombinacija, kas palikus i pec kādas iepriekejās programmas
printf("c1 Mainīga vertiba uzreiz pec deklarēšanas (simbols): %c\n",c1);
printf("c1 Mainīga vertiba uzreiz pec deklarēšanas (dec): %d\n",c1);
printf("c1 Mainīga vertiba uzreiz pec deklarēšanas (hex): %x\n",c1);
printf("c1 Mainīga vertiba uzreiz pec deklarēšanas (oct): %o\n",c1);
// mainīgā "loma" ir - mainīties ...
//c1 = 'A';//
//visbiežāk šo izmaiņu veiksim ar NB! piešķiršanas operāciju - =
//pieš'ķiršanas operācijai ir ir gandrīz viszemēkā prioritāte
// (tā tiek izpildīta viena no pēdējām)
//labajā pusē izrēķinātais lieliums (vērtība) tiek izmitināta 
//atmiņas apgabalā, kas ir saistīts ar kreisiajā pusē pieiminēto
// identifikatoru

printf("c1 Mainīga vertiba uzreiz pec piešķiršanas (simbols): %c\n",c1);
printf("c1 Mainīga vertiba uzreiz pec piešķiršanas (dec): %d\n",c1);
printf("c1 Mainīga vertiba uzreiz pec piešķiršanas (hex): %x\n",c1);
printf("c1 Mainīga vertiba uzreiz pec piešķiršanas (oct): %o\n",c1);

int birth_year  = 2000; //sī ir mainīgā definēšana
			//(atmiņas apgabala  saistīšanas ar identifikatoru)
			//mainīgajiem identifikatoiem, jeb vārdiem vēlams
			//izvēlēties mnemoniskus nosaukumus - nosaukuma
			// vārds vai tekts atspulguļo nolūku, kuram šis mainīgais ir paredzēts
			//identifikators nevar sākties ar ciparu, atsarpi
			// var satur\et = [A...Za...z][0...9][_]
printf("\n");
printf("birth_year Mainīga vertiba uzreiz pec piešķiršanas (simbols): %c\n",birth_year);
printf("birth_year Mainīga vertiba uzreiz pec piešķiršanas (dec): %d\n",birth_year);
printf("birth_year Mainīga vertiba uzreiz pec piešķiršanas (hex): %x\n",birth_year);
printf("birth_year Mainīga vertiba uzreiz pec piešķiršanas (oct): %o\n",birth_year);



return 0;
}

