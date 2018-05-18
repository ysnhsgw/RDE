#include <stdio.h>

/*
main() 
{
	double u=5;
	double t=0;
	double du;
	double dt=0.1;
	double k1,k2,k3,k4;
	double a = 2;
	int times=30;

	printf("%lf  %lf\n", t, u);

	FILE *f;
	errno_t b;

	printf("%lf  %lf\n", t, u);

	for (t = dt; t <= times; t = t + dt)
	{
		k1 = a * u*(1 - u);
		k2 = a * ((k1*dt) / 2)*(1 - (k1*dt) / 2);
		k3 = a * ((k2*dt) / 2)*(1 - (k2*dt) / 2);
		k4 = a * ((k3*dt) / 2)*(1 - (k3*dt) / 2);
		du = dt * (k1 + k2 + k3 + k4) / 6;
		u = u + du;
		printf("%lf  %lf\n",t,u);

		b = fopen_s(&f, "RK-1.csv", "a");
		fprintf(f, "%f,%f\n", t, u);
		fclose(f);
	}
}

*/


