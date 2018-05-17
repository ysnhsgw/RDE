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

	for (t = dt; t <= times; t = t + dt)
	{ 
		du = a * u*(1 - u)*dt;
		u = u + du;
		printf("%lf  %lf\n", t, u);
	}
}


/* http://ryuiki.agbi.tsukuba.ac.jp/~nishida/lecture/numerical/class13.html*/