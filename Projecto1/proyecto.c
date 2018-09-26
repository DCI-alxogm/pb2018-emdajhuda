#include <stdio.h>
#include <math.h>
int main()
{
	FILE* data;
	FILE* mercurio;
	FILE* venus;
	FILE* tierra;
	FILE* marte;
	FILE* jupiter;
	FILE* saturno;
	FILE* urano;
	FILE* neptuno;
	FILE* pluton;

	int te, a, i, j;
	float h;
	double x[9], y[9], z[9], r[9], x0[9], y0[9], z0[9], vx[9], vy[9], vz[9], vx0[9], vy0[9], vz0[9];

a=te/h;
G=4*(pow(3.1416,2);

	data = fopen("informacion.txt", "r");
		fscanf(data, "%i", &te);
		fscanf(data, "%f", &h);
for (j=0; j<=8; j++)
	{
		fscanf(data, "%lf %lf %lf %lf %lf %lf", x0[j], y0[j], z0[j], vx0[j], vy0[j], vz0[j]);
	}
	fclose(data);

	mercurio = fopen("mercurio.txt", "w");
for (j=0; j<=a; i++)
	{

		r[0]=sqrt((pow(x0[0],2)+pow(y0[0],2)+pow(z0[0],2)),2);
		x[0]=x0[0]+(vx0[0]*h);
		y[0]=y0[0]+(vy0[0]*h);
		z[0]=z0[0]+(vz0[0]*h);

		vx[0]=vx0[0]-((h*G*x0[0])/pow(r[0],3));
		vy[0]=vy0[0]-((h*G*y0[0])/pow(r[0],3));
		vz[0]=vz0[0]-((h*G*z0[0])/pow(r[0],3));

		fprinf(mercurio , "%lf\t %lf\t %lf\t %lf\t %lf\t %lf\n", x[0], y[0], z[0], vx[0], vy[0], vz[0]);

		x0[0]=x[0];
		y0[0]=y[0];
		z0[0]=z[0];
		vx0[0]=vx[0];
		vy0[0]=vy[0];
		vz0[0]=vz[0];
	}
	fclose(mercurio);

	venus = fopen("venus.txt", "w");
for (j=0; j<=a; i++)
	{

		r[1]=sqrt((pow(x0[1],2)+pow(y0[1],2)+pow(z0[1],2)),2);
		x[1]=x0[1]+(vx0[1]*h);
		y[1]=y0[1]+(vy0[1]*h);
		z[1]=z0[1]+(vz0[1]*h);

		vx[1]=vx0[1]-((h*G*x0[1])/pow(r[1],3));
		vy[1]=vy0[1]-((h*G*y0[1])/pow(r[1],3));
		vz[1]=vz0[1]-((h*G*z0[1])/pow(r[1],3));

		fprinf(venus , "%lf\t %lf\t %lf\t %lf\t %lf\t %lf\n", x[1], y[1], z[1], vx[1], vy[1], vz[1]);

		x0[1]=x[1];
		y0[1]=y[1];
		z0[1]=z[1];
		vx0[1]=vx[1];
		vy0[1]=vy[1];
		vz0[1]=vz[1];
	}
	fclose(venus);

	tierra = fopen("tierra.txt", "w");
for (j=0; j<=a; i++)
	{

		r[2]=sqrt((pow(x0[2],2)+pow(y0[2],2)+pow(z0[2],2)),2);
		x[2]=x0[2]+(vx0[2]*h);
		y[2]=y0[2]+(vy0[2]*h);
		z[2]=z0[2]+(vz0[2]*h);

		vx[2]=vx0[2]-((h*G*x0[2])/pow(r[2],3));
		vy[2]=vy0[2]-((h*G*y0[2])/pow(r[2],3));
		vz[2]=vz0[2]-((h*G*z0[2])/pow(r[2],3));

		fprinf(tierra , "%lf\t %lf\t %lf\t %lf\t %lf\t %lf\n", x[2], y[2], z[2], vx[2], vy[2], vz[2]);

		x0[2]=x[2];
		y0[2]=y[2];
		z0[2]=z[2];
		vx0[2]=vx[2];
		vy0[2]=vy[2];
		vz0[2]=vz[2];
	}
	fclose(tierra);

	marte = fopen("marte.txt", "w");
for (j=0; j<=a; i++)
	{

		r[3]=sqrt((pow(x0[3],2)+pow(y0[3],2)+pow(z0[3],2)),2);
		x[3]=x0[3]+(vx0[3]*h);
		y[3]=y0[3]+(vy0[3]*h);
		z[3]=z0[3]+(vz0[3]*h);

		vx[3]=vx0[3]-((h*G*x0[3])/pow(r[3],3));
		vy[3]=vy0[3]-((h*G*y0[3])/pow(r[3],3));
		vz[3]=vz0[3]-((h*G*z0[3])/pow(r[3],3));

		fprinf(marte , "%lf\t %lf\t %lf\t %lf\t %lf\t %lf\n", x[3], y[3], z[3], vx[3], vy[3], vz[3]);

		x0[3]=x[3];
		y0[3]=y[3];
		z0[3]=z[3];
		vx0[3]=vx[3];
		vy0[3]=vy[3];
		vz0[3]=vz[3];
	}
	fclose(marte);

	jupiter = fopen("jupiter.txt", "w");
for (j=0; j<=a; i++)
	{

		r[4]=sqrt((pow(x0[4],2)+pow(y0[4],2)+pow(z0[4],2)),2);
		x[4]=x0[4]+(vx0[4]*h);
		y[4]=y0[4]+(vy0[4]*h);
		z[4]=z0[4]+(vz0[4]*h);

		vx[4]=vx0[4]-((h*G*x0[4])/pow(r[4],3));
		vy[4]=vy0[4]-((h*G*y0[4])/pow(r[4],3));
		vz[4]=vz0[4]-((h*G*z0[4])/pow(r[4],3));

		fprinf(jupiter , "%lf\t %lf\t %lf\t %lf\t %lf\t %lf\n", x[4], y[4], z[4], vx[4], vy[4], vz[4]);

		x0[4]=x[4];
		y0[4]=y[4];
		z0[4]=z[4];
		vx0[4]=vx[4];
		vy0[4]=vy[4];
		vz0[4]=vz[4];
	}
	fclose(jupiter);

	saturno = fopen("saturno.txt", "w");
for (j=0; j<=a; i++)
	{

		r[5]=sqrt((pow(x0[5],2)+pow(y0[5],2)+pow(z0[5],2)),2);
		x[5]=x0[5]+(vx0[5]*h);
		y[5]=y0[5]+(vy0[5]*h);
		z[5]=z0[5]+(vz0[5]*h);

		vx[5]=vx0[5]-((h*G*x0[5])/pow(r[5],3));
		vy[5]=vy0[5]-((h*G*y0[5])/pow(r[5],3));
		vz[5]=vz0[5]-((h*G*z0[5])/pow(r[5],3));

		fprinf(saturno , "%lf\t %lf\t %lf\t %lf\t %lf\t %lf\n", x[5], y[5], z[5], vx[5], vy[5], vz[5]);

		x0[5]=x[5];
		y0[5]=y[5];
		z0[5]=z[5];
		vx0[5]=vx[5];
		vy0[5]=vy[5];
		vz0[5]=vz[5];
	}
	fclose(saturno);

	urano = fopen("urano.txt", "w");
for (j=0; j<=a; i++)
	{

		r[6]=sqrt((pow(x0[6],2)+pow(y0[6],2)+pow(z0[6],2)),2);
		x[6]=x0[6]+(vx0[6]*h);
		y[6]=y0[6]+(vy0[6]*h);
		z[6]=z0[6]+(vz0[6]*h);

		vx[6]=vx0[6]-((h*G*x0[6])/pow(r[6],3));
		vy[6]=vy0[6]-((h*G*y0[6])/pow(r[6],3));
		vz[6]=vz0[6]-((h*G*z0[6])/pow(r[6],3));

		fprinf(urano , "%lf\t %lf\t %lf\t %lf\t %lf\t %lf\n", x[6], y[6], z[6], vx[6], vy[6], vz[6]);

		x0[6]=x[6];
		y0[6]=y[6];
		z0[6]=z[6];
		vx0[6]=vx[6];
		vy0[6]=vy[6];
		vz0[6]=vz[6];
	}
	fclose(urano);

	neptuno = fopen("neptuno.txt", "w");
for (j=0; j<=a; i++)
	{

		r[7]=sqrt((pow(x0[7],2)+pow(y0[7],2)+pow(z0[7],2)),2);
		x[7]=x0[7]+(vx0[7]*h);
		y[7]=y0[7]+(vy0[7]*h);
		z[7]=z0[7]+(vz0[7]*h);

		vx[7]=vx0[7]-((h*G*x0[7])/pow(r[7],3));
		vy[7]=vy0[7]-((h*G*y0[7])/pow(r[7],3));
		vz[7]=vz0[7]-((h*G*z0[7])/pow(r[7],3));

		fprinf(neptuno , "%lf\t %lf\t %lf\t %lf\t %lf\t %lf\n", x[7], y[7], z[7], vx[7], vy[7], vz[7]);

		x0[7]=x[7];
		y0[7]=y[7];
		z0[7]=z[7];
		vx0[7]=vx[7];
		vy0[7]=vy[7];
		vz0[7]=vz[7];
	}
	fclose(neptuno);

	pluton = fopen("pluton.txt", "w");
for (j=0; j<=a; i++)
	{

		r[8]=sqrt((pow(x0[8],2)+pow(y0[8],2)+pow(z0[8],2)),2);
		x[8]=x0[8]+(vx0[8]*h);
		y[8]=y0[8]+(vy0[8]*h);
		z[8]=z0[8]+(vz0[8]*h);

		vx[8]=vx0[8]-((h*G*x0[8])/pow(r[8],3));
		vy[8]=vy0[8]-((h*G*y0[8])/pow(r[8],3));
		vz[8]=vz0[8]-((h*G*z0[8])/pow(r[8],3));

		fprinf(pluton , "%lf\t %lf\t %lf\t %lf\t %lf\t %lf\n", x[8], y[8], z[1], vx[8], vy[8], vz[8]);

		x0[8]=x[8];
		y0[8]=y[8];
		z0[8]=z[8];
		vx0[8]=vx[8];
		vy0[8]=vy[8];
		vz0[8]=vz[8];
	}
	fclose(pluton);
}
return 0;
