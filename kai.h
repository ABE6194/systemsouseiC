int kai(int a, int b, int c)
{ 
	int d,x1,x2;
	d = b*b-4*a*c;
	
	if (d > 0)
	{
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);

		printf("x=%d,%d", x1, x2);

	}
	else if (d == 0)
	{
		x1 = (-b) / 2 * a;
	     printf("x=%d", x1);
	}
	else
	  printf("À”‰ğ‚È‚µ");
}
