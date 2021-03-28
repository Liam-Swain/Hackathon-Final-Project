#ifndef STOCK_H
#define STOCK_H




typedef struct Stock
{
    char name[50];
    char ticker[20];
    double price;
    char change[20];
    double open;
    double high;
    double low;
    int volume;
}Stock;


#endif
