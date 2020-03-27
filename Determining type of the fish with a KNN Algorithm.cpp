#include <stdio.h>
#include <math.h>

int main(){
	
	int result=0,num,a,i,j,k;
	float fish[100][4], x[4];
	scanf("%d",&a);
	scanf("%f %f", &fish[0][0], &fish[0][1]);//Unknown fish//
	fish[0][3]=0;
	for(i=1; i<=a; i++)
		scanf("%f %f %f", &fish[i][0], &fish[i][1], &fish[i][2]);//Gets the set of fish //
	for(i=1; i<=a; i++)
		fish[i][3]=sqrt(pow((fish[i][0]-fish[0][0]),2)+pow((fish[i][1]-fish[0][1]),2));	//Calculates the distance//		
	for(k=0;k<a;k++){
		for(i=0; i<a; i++){
			if(fish[i][3]>fish[i+1][3]){ 
				for(j=0;j<=3;j++){
					x[j]=fish[i+1][j];
					fish[i+1][j]=fish[i][j];
					fish[i][j]=x[j];
					}
			}
		}
	}
	
	for(i=1;i<=3;i++){
	num=fish[i][2];
	if(num==1) result++;
}
	if(result>=2) printf("Salmon\n");
	else printf("Sea Bass\n");
	for(i=1;i<=3;i++)
	printf("%.2f %.2f\n",fish[i][0], fish[i][1]);
	
return 0;
}
/*5
60.56 7.24
82.44 9.88 0
72.53 5.43 1
52.68 8.45 1
99.34 6.32 0
85.40 7.50 1*/
