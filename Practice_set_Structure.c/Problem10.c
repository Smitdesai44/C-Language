// program 9 using typedef

// This program works to compare a dates

// it prints "0" when dates(dd , mm , yyyy) are equal
// it prints "1" when "d1.dd > d2.dd"
// it prints "-1" when "d1.dd < d2.dd"


#include<stdio.h>

typedef struct date 
{
    int dd;
    int mm;
    int yyyy;
}DT;

int compare(DT , DT);

int compare(DT d1, DT d2)
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
    DT d1 = {4 , 4 , 2002};
    DT d2 = {4 , 4 , 2002};

    printf("%d",compare(d1, d2));
    return 0;
}