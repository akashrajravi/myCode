#include<bits/stdc++.h>
int main()
{
    double x,y,u,v,xt,yt,div,sq;
    scanf("%lf%lf%lf%lf",&x,&y,&u,&v);
    if(x<=0 || y<=0 || u<=0 || v<=0)
    printf("Invalid Input\n");
    else
    {
        //((y*(pow(u,2)*pow(v,2))-((x*u*v)-y*(pow(v,2))))/(pow(u,2)+pow(v,2)));
        //(pow(u,2)+pow(v,2))
        //(pow((y*(pow(u,2)+pow(v,2))-(v*(x*u+y*v))),2)+(pow((x*(pow(u,2)*pow(v,2))-u*(u*x+y*v)),2)))/(pow(u,2)+pow(v,2));
        //div=(v*v+u*u);
        //yt=pow((y*div-v*(x*u+y*v)),2);
        //xt=pow((x*div-u*(x*u+y*v)),2);
        //sq=sqrt(pow((x*div-u*(x*u+y*v)),2)+pow((y*div-v*(x*u+y*v)),2));
        if(!(sqrt(pow((x*(v*v+u*u)-u*(x*u+y*v)),2)+pow((y*(v*v+u*u)-v*(x*u+y*v)),2))/(v*v+u*u)))
        printf("0.0\n");
        else
        printf("%.11lf\n",(sqrt(pow((x*(v*v+u*u)-u*(x*u+y*v)),2)+pow((y*(v*v+u*u)-v*(x*u+y*v)),2))/(v*v+u*u)));
    }
    return 0;
}
