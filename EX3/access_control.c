#include <stdio.h>
int main (void){ 

	int  fingerprint = 0;
	int  retinal = 0;
	int  ID = 0;

	printf("Does the fingerprint got matched: (1 or 0) ");
	scanf("%d", &fingerprint);

	printf("Does the retinal scan got matched: (1 or 0) ");
	scanf("%d", &retinal);

	printf("Does the ID card got matched: (1 or 0) ");
	scanf("%d", &ID);

	if(retinal && ID ==1 || fingerprint && ID ==1 || fingerprint && retinal ==1 || fingerprint && retinal && ID ==1)
	{
		printf("Access Granted");

	}
	
	else{
	
		printf("Access Denied");
	}

        return 0;

}

	 	
