# include <stdio.h>
# include <math.h>

main()
{	double u[101], du[101];
	int x;
	double t;
	double dt = 0.001;
	double dx = 1;
	double c = 1;
	double end = 10;

	FILE *f;
	errno_t b;

	/* ‰ŠúğŒ */
	for (x = 0; x <= 100; x++)
	{
		u[x] = exp(-(x - 50.0)*(x - 50.0) / 200);
	}


	/* ‹«ŠEğŒ */
	u[0] = 0; u[100] = 0;

	for (t = 0; t<end; t = t + dt)
	{
		for (x = 1; x <= 99; x++)
		{
			du[x] = (c*(u[x + 1] - 2 * u[x] + u[x - 1]) / (dx*dx))*dt;
		}
		
		for (x = 1; x <= 99; x++)
		{
			u[x] = u[x] + du[x];
		}
	}

	/* Œ‹‰Ê‚Ìo—Í */
	for (x = 0; x < 100; x++)
	{
		printf("%lf\n", u[x]);

		b = fopen_s(&f, "diffuse.csv", "a");
		fprintf(f, "%f\n", u[x]);
		fclose(f);

	}

	
}
