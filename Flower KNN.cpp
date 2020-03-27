#include <stdio.h>
#include <math.h>
	
	
double cw(double b1,double b2, double a, double n);
double cz(double a, double b, double c, double d, double e, double f, double g,double h);
double ca(double z);


int main(){
	int epoch,i,j,t,d,k;
	double a;
	double z;
	double n,b1,b2;
	double fl[100][5], w[4];
	scanf("%d", &epoch);
	scanf("%lf", &n);
	for(i=0;i<4;i++)
		scanf("%lf", &w[i]);
	
	scanf("%d", &d);
	
	for(i=0;i<d; i++)
		scanf("%lf %lf %lf %lf %lf", &fl[i][0], &fl[i][1], &fl[i][2], &fl[i][3], &fl[i][4]);
	
	
	for(i=0;i<epoch; i++){
	
		for(t=0; t<d; t++){
			z=cz(w[0],fl[t][0], w[1], fl[t][1], w[2], fl[t][2], w[3], fl[t][3]);
			a=ca(z);
				for(j=0;j<4;j++){
				w[j]+=cw(fl[t][4], fl[t][j], a, n); }	
	
		}
	}
	
	printf("%.3f %.3f %.3f %.3f", w[0], w[1], w[2], w[3]);
	
	return 0;
}


double cz(double a, double b, double c, double d, double e, double f, double g,double h){
	double z;
	z=a*b+c*d+e*f+g*h;
	return z;
}
	
double ca(double z){
	double a;
	a=(1/(1+exp(-z)));
	
	return a;
}	
	
double cw(double b1,double b2, double a, double n){
	
	return(n*(b1-a)*a*(1-a)*b2);
}

/*10
0.01
0.04 0.03 0.02 0.01
5
5.1 3.5 1.4 0.2 1
4.9 3.0 1.4 0.2 1
5.7 2.8 4.5 1.3 0
4.9 2.4 3.3 1.0 0
5.0 3.5 1.6 0.6 1
*/
	
