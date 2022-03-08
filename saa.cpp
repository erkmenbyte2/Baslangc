#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void quicksort(int dizi[]) {
	
	int boyut = sizeof(dizi)/sizeof(dizi[1]);
	
	int pivot = dizi[boyut];
	
	int i;
	
	
	for(int a;a<boyut-1;a++) {
		
		if(dizi[a] < dizi[boyut]) {
			i++;
			//swap işlemi
			int temp;
			temp=dizi[i];
			dizi[i]=dizi[a];
			dizi[a]=dizi[i];
		
		
		}
		int temp1;
		temp1=dizi[i];
		dizi[i]=dizi[boyut];
		dizi[boyut]=temp1;
	}
	for(int a;a<i;a++) {
		
		
	}	
}
int main(int argc, char** argv) {
	return 0;
}
