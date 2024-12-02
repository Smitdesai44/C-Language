#include<stdio.h>

struct date 
{
    int dd;
    int mm;
    int yyyy;
};

int compare(struct date , struct date);

int compare(struct date d1, struct date d2)
{
    if((d1.dd == d2.dd) && (d1.mm == d2.mm) && (d1.yyyy == d2.yyyy))
    {
        return 0;
    }

    if(d1.dd > d2.dd)
    {
        return 1;
    }
    else if(d1.dd < d2.dd)
    {
        return -1;
    }

    if(d1.mm > d2.mm)
    {
        return 1;
    }
    else if(d1.mm < d2.mm)
    {
        return -1;
    }

    if(d1.yyyy > d2.yyyy)
    {
        return 1;
    }
    else if(d1.yyyy < d2.yyyy)
    {
        return -1;
    }
}

int main()
{
    struct date d1 = {4 , 4 , 2002};
    struct date d2 = {4 , 3 , 2002};

    printf("%d",compare(d1, d2));
    return 0;
}