#include <stdio.h>

main()
{
	double t = 0;
	double dt = 0.1;
	double u= 2;
	double du;
	double a=1;
	int times = 20;
	printf("%lf  %lf\n", t, u);

	FILE *f;
	errno_t b;

	for (t = dt; t <= times; t = t + dt)
	{ 
		b = fopen_s(&f, "euler-1.csv","a");
		fprintf(f, "%f,%f\n", t, u);
		fclose(f);

		du = a * u*(1 - u)*dt;
		u = u + du;
		printf("%lf %lf\n", t, u);
		
	}
}


/* http://ryuiki.agbi.tsukuba.ac.jp/~nishida/lecture/numerical/class13.html*/