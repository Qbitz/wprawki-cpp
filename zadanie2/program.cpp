#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

int main(int argc, char** argv){
	int h = 0;
	char* c = new char[20];
	
	printf("Podaj wysokość trójkąta:\n");
	scanf("%d", &h);

	int w = h*h+h;
	char* str = new char[w];
	
	printf("Podaj znak za pomocą którego narysowany będzie trójkat:\n");
	scanf("%s", c);

	printf("Wybrano wysokosc %d i znak %s (rozmiar %d)\n", h, c, w);

	printf("Generuje trójkąt!\n");
	for (int i=0; i<h; i++) {
		for (int j=0; j<i; j++) {
			if(i==0 && j==0) {
				strcpy(str, c);
			}
			else {
				strcat(str, c);
			}
		}
		strcat(str, "\n");
	}
	printf("%s", str);
	return 0;
}