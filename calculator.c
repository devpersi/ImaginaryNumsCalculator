#include <stdio.h>
#include <stdlib.h>

int main(){

	int firstreal, firstim, secondreal, secondim; //Autes einai oi metavlhtes pou tha xrhsimopoihsoume gia tous paragontes twn migadikwn mas
	float praksh1, praksh2, paronomasths; //Autes einai oi metavlhtes pou tha xrhsimopoihsoume gia syntomia sthn praksh ths diaireshs
	char keftes; //O keftes elegxei an o xrhsths thelei na epanalavei th diadikasia eksarxhs

	/* Emfanizontai merika mhnymata gia to kaloswrisma tou xrhsth kathws kai ena pause gia na dwthei xronos na ta diavasei */
	printf("Kalwshrthate sto calculator migadikwn, ergasia 1 gia to etos 2015-16\n");
	system("pause");

	/* Akolouthoun ta mhnymata pou tha vlepei o xrhsths kai oi entoles pou tha 
	diavasoun tis times twn migadikwn mas */
	do{
		printf("\nTha xreiastoun 4 arithmoi gia pragmatopoihsh praksewn\n\n");
		printf("Parakalw plhktrologhste to pragmatiko meros tou prwtou arithmou: \n");
		scanf("%d",&firstreal);
		printf("Parakalw plhktrologhste to fantastiko meros tou prwtou arithmou: \n");
		scanf("%d",&firstim);
		printf("Parakalw plhktrologhste to pragmatiko meros tou deuterou arithmou: \n");
		scanf("%d",&secondreal);
		printf("Parakalw plhktrologhste to fantastiko meros tou deuterou arithmou: \n");
		scanf("%d",&secondim);
		
		/* Akolouthoun oi entoles pou pragmatopoioun kai emfanizoun tis ousiastikes prakseis */
		printf("\nOi arithmoi sas einai %+d%+di kai %+d%+di\n\n", firstreal, firstim, secondreal, secondim);
		printf("Oi syzhgeis tous einai %+d%+di kai %+d%+di\n", firstreal, (-firstim), secondreal, (-secondim));
		printf("To athroisma tous einai %+d%+di\n", firstreal+secondreal, firstim+secondim);
		printf("H diafora tous einai %+d%+di\n", firstreal-secondreal, firstim-secondim);
		printf("To ginomeno tous einai %+d%+di\n", (firstreal*secondreal-firstim*secondim), (firstreal*secondim+secondreal*firstim));
		
		if(secondreal!=0 && secondim!=0){ // Sygkekrimena auth h synthiki elegxei an mporei na pragmatopoihthei diairesh
		praksh1 = (firstreal*secondreal)+(firstim*secondim); //Opws proanaferthike xrhsimopoioume alles metavlhtes sth diairesh
		praksh2 = (firstim*secondreal)-(firstreal*secondim); //Prokeimenou na yparxei ena sxetiko programming style
		paronomasths = (secondreal*secondreal)+(secondim*secondim); //Kai na mhn piasei mia entolh 2 othones
		printf("To phliko tous einai %+.2f%+.2fi\n\n", praksh1/paronomasths, praksh2/paronomasths);
		}
		else
			printf("H diairesh den ginetai\n");
		
		/*  Akolouthei to mhnyma pou rwtaei to xrhsth an thelei na epanalavei thn diadikasia twn praksewn
			Epeidh to sygkekrimeno programma emfanizei oles tis prakseis kai den rwtaei poies epithymei na pragmatopoihsei o xrhsths
			einai autonohto to gegonos oti oi prakseis tha ginoun me diaforetikous arithmous.
			Par'ol' auta, to sxolio auto symperilifthike sthn telikh ergasia */
		printf("Thelete na kanete alles prakseis me diaforetikous arithmous? (Y/N)\n");
		scanf("%c",&keftes);
		
		/*  Prokeimenou na kerdisoume (theoritika) porous apo thn ypologistikh isxy tou ypologisth,
			theoroume oti o xrhsths tha xrhsimopoihsei tous xarakthres pou proteinei to programma (Y/N)
			kai mono an den to kanei tha mpei ston epanalhptiko vrogxo mexri na tous xrhsimopoihsei. */
		if(keftes!='N' && keftes!='Y' && keftes!='n' && keftes!='y'){
			do{
				scanf("%c",&keftes);
			}while(keftes!='N' && keftes!='Y' && keftes!='n' && keftes!='y');
		}
		
	}while(keftes=='Y' || keftes=='y');

}
