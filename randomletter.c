randomletter() {

	int k;
	int i;

	#define MAX_STRING 80
	char contains[9] = {'Ar','sek','do','twor','zoart','did','ittwice','jojo','piz'};
	char searchValue[MAX_STRING]="";
	k = rand() % 9 + 1;

	for (i=0; i<k ;i++) {
	searchValue[i] = contains[rand() % 9];
}
	
	lr_save_string(searchValue,"SearchValue");
	return 0;
}
