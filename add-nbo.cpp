#include <stdio.h>
#include <stdint.h>
#include <iostream>
#include <netinet/in.h>

using namespace std;

int main(int argc, char **argv){
	FILE *fp1;
	FILE *fp2;
	uint32_t num1,num2,sum;

	fp1 = fopen(argv[1],"rb");
	fp2 = fopen(argv[2],"rb");

	if (fp1 == NULL || fp2 == NULL) {
        	printf("Error opening file");
        	return -1;
    	}

	fread(&num1, sizeof(num1), 1, fp1);
	fread(&num2, sizeof(num2), 1, fp2);

	num1 = ntohl(num1);
	num2 = ntohl(num2);

	sum = num1 + num2;
	
	//cout << num1 << " " << num2 << " " << sum << endl;
	
	printf("%u(0x%x) + %u(0x%x) = %u(0x%x)",num1,num1,num2,num2,sum,sum);

	fclose(fp1);
	fclose(fp2);

	return 0;

}
