#include <stdio.h>

int main(){

int pvmonster;
int attack;
pvmonster=100;
attack=22;

printf("Vous infligez 22 points de degats \n");
do {
	pvmonster=pvmonster-attack;
	printf("Le monstre a %d",pvmonster);
	printf(" points de vie\n");
	}
	while (pvmonster>0);
	printf(" monstre éliminé");
	return 0;
}
