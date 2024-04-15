#include <stdio.h>
#include <stdint.h>
#include <iostream>

using namespace std;

int main(int argc, char **argv){
	FILE *fp1;
	FILE *fp2;
	uint32_t num1,num2;

	fp1 = fopen(argv[1],"rb");
	fp2 = fopen(argv[2],"rb");

	fscanf(fp1,"%u",&num1);
	fscanf(fp2,"%u",&num2);

	num1 = ntohl(num1);
	num2 = ntohl(num2);
	
	cout << num1 << " " << num2 << endl;

	fclose(fp1);
	fclose(fp2);

	return 0;

}
