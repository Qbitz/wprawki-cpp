#include <cstdio>

int main(int argc, char** argv){
	if(argc!=3) {
		printf("Niepoprawna liczba argumentów\n");
		return 1;
	}

	printf("Witamy %s na %s \n", argv[1], argv[2]);
	return 0;
}