#include<bits/stdc++.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        char d[2];
        int fm,bm,t,fbs,bbs,cnt=0,x;
        std::cin>>d>>fm>>bm>>t>>fbs>>bbs;
        if(d[0]=='F')
        {
            if(fm==bm)
            {
                if(fm>=fbs)
                    std::cout<<fbs*t<<" F\n";
                //printf("%d F\n",fbs*t);
                else
                std::cout<<"Hurray\n";
            }
            else if(fm>=fbs)
            {
               std::cout<<fbs*t<<" F\n";
            }
            else
            {
                if(fm>bm)
                {
                    while(fbs>=fm)
                    {
                        cnt+=fm;
                        fbs-=fm;
                        fbs+=bm;
                        cnt+=bm;
                        if(fbs<=fm)
                            break;
                    }
                    if(fbs)
                        cnt+=fbs;
                    printf("%d F\n",cnt*t);
                }
                else
                {
                    cnt=fm;
                    bbs+=fm;
                    while(bbs>=bm)
                    {
                        cnt+=bm;
                        bbs-=bm;
                        bbs+=fm;
                        cnt+=fm;
                        if(bbs<=bm)
                            break;
                    }
                    if(bbs)
                        cnt+=bbs;
                    printf("%d B\n",cnt*t);
                }
            }
        }
        else if(d[0]=='B')
        {
            if(fm==bm)
            {
                if(fm>=fbs)
                printf("%d B\n",fbs*t);
                else
                printf("Hurray\n");
            }
            else if(bm>=bbs)
            {
                printf("%d B\n",bbs*t);
            }
            else
            {
                if(bm>fm)
                {
                    while(bbs>=bm)
                    {
                        cnt+=bm;
                        bbs-=bm;
                        if(bbs<=bm)
                            break;
                        cnt+=fm;
                        bbs-=fm;
                    }
                    if(bbs)
                        cnt+=bbs;
                    printf("%d B\n",cnt*t);
                }
                else
                {
                    cnt=bm;
                    fbs+=bm;
                    while(fbs>=fm)
                    {
                        cnt+=fm;
                        fbs-=fm;
                        fbs+=bm;
                        cnt+=bm;
                        if(fbs<=fm)
                            break;
                    }
                    if(fbs)
                        cnt+=fbs;
                    printf("%d F\n",cnt*t);
                }
            }
        }
    }
    return 0;
}
