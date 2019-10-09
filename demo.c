#include <stdio.h>  
#include <stdlib.h>  
#include <math.h>
void mysum(double center1[], double center2[], double center3[], double center4[], double center5[], double center6[], double center7[], double center8[], double center9[], double center10[], double feature[])
//void mysum(double center1[], double feature[])
{
	//printf("%d\n", sizeof(center) / sizeof(center[0]));
    
	for(int i=0;i<2100;i++){
		int dist = 0;
		for(int j=0;j<2100;j++){
			dist += pow(center1[i*2100+j]-feature[j], 2);
			
			switch(i%2100)
			{
				case '0':
					dist += pow(center1[i*2100+j]-feature[j], 2);
					if(i == 1)
						printf("*** = 0");
					break;
				case '1':
					dist += pow(center2[i*2100+j]-feature[j], 2);
					if(i == 1+2100)
						printf("*** = 1");
					break;
				case '2':
					dist += pow(center3[i*2100+j]-feature[j], 2);
					if(i == 1+2100*2)
						printf("*** = 2");
					break;
				
				case '3':
					dist += pow(center4[i*2100+j]-feature[j], 2);
					if(i == 1+2100*3)
						printf("*** = 3");
					break;
				case '4':
					dist += pow(center5[i*2100+j]-feature[j], 2);
					if(i == 1+2100*4)
						printf("*** = 4");
					break;
				case '5':
					dist += pow(center6[i*2100+j]-feature[j], 2);
					if(i == 1+2100*5)
						printf("*** = 5");
					break;
				case '6':
					dist += pow(center7[i*2100+j]-feature[j], 2);
					if(i == 1+2100*6)
						printf("*** = 6");
					break;
				case '7':
					dist += pow(center8[i*2100+j]-feature[j], 2);
					if(i == 1+2100*7)
						printf("*** = 7");
					break;
				case '8':
					dist += pow(center9[i*2100+j]-feature[j], 2);
					if(i == 1+2100*8)
						printf("*** = 8");
					break;
				case '9':
					dist += pow(center10[i*2100+j]-feature[j], 2);
					if(i == 1+2100*9)
						printf("*** = 9");
					break;			
			}
			
		}
	}
}
