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

int i1, i2=0, i3 = 0x13, i4 = 025;

int modified_birth_year = birth_year >> 1;
printf("\n");
printf("modified_birth_year Mainīga vertiba uzreiz pec piešķiršanas (simbols): %c\n",modified_birth_year);
printf("modified_birth_year Mainīga vertiba uzreiz pec piešķiršanas (dec): %d\n",modified_birth_year);
printf("modified_birth_year Mainīga vertiba uzreiz pec piešķiršanas (hex): %x\n",modified_birth_year);
printf("modified_birth_year Mainīga vertiba uzreiz pec piešķiršanas (oct): %o\n",modified_birth_year);

char c = 10;
int i = -4569;
float f = 3.e-16;
double d = 4.789e39;

printf("c=%d (piešķirtas atmiņas izmērs baitos - %ld,n,\n\t\t",c, sizeof(c));
printf("atrašanās vieta atmiņā -%p)\n",&c);
printf("i=%d (piešķirtas atmiņas izmērs baitos - %ld,\n\t\t",i, sizeof(i));
printf("atrašanās vieta atmiņā -%p)\n",&i);
printf("f=%.2e (piešķirtas atmiņas izmērs baitos - %ld,\n\t\t",f, sizeof(f));
printf("atrašanās vieta atmiņā -%p)\n",&f);
printf("d=%3e (piešķirtas atmiņas izmērs baitos -%ld,\n\t\t",d, sizeof(d));
printf("atrašanās vieta atmiņā -%p)\n",&d);


int *i_adrese = &i;
printf("i mainīgā adrese - %p\n",i_adrese);
int *i_adreses_kopija = i_adrese;
printf("i adreses kopija -%p\n", i_adreses_kopija);
printf("i mainīgā vērtība, izgūta pielietojot tā adresi - %d\n",*i_adrese);
printf("i mainīgā vērtība, izgīta pielietojot tā adreses kopju - %d\n",*i_adreses_kopija);

int **i_adreses_adrese=&i_adrese;
printf("i adreses adrese - %p\n",i_adreses_adrese);
printf("i adreses adrese izmērs baitos - %ld\n",sizeof(i_adreses_adrese));

return 0;
}

