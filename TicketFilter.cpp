#include "TicketFilter.h"
#include <Windows.h>
#include <iostream>
#include <cstdio>

using namespace std;

TicketFilter::TicketFilter() {
  transport = NO;
}

TicketFilter::~TicketFilter() {
  //dtor
}

void TicketFilter::enterTransport(void)
{
    SetConsoleCP(65001); //��� UTF-8
    SetConsoleOutputCP(65001);

    transport = NO;
    int in = 0;
    while(!in)
    {

        printf("Enter transport, \n");
        printf("[1] train\n");
        printf("[2] plane\n");
        printf("[3] submarine\n");

        cin >> in;
    }
    switch(in)
    {
        case 1:
            transport = TRAIN;
            cout << "train" << endl;
            break;
        case 2:
            transport = AIRPLANE;
            cout << "airplane" << endl;
            break;
        case 3:
            transport = SUBMARINE;
            cout << "submarine" << endl;
            break;
        default:
            break;
    }
    return;
}

void TicketFilter::enterPrice()
{
    SetConsoleCP(65001); //��� UTF-8
    SetConsoleOutputCP(65001);

    printf("Enter min price\n");
    cin >> price.from;
    cout << "entered: " << price.from << endl;
    printf("Enter max price\n");
    cin >> price.to;
    cout << "entered: " << price.to << endl;
    return;
}

void TicketFilter::enterTime()
{

    SetConsoleCP(65001); //��� UTF-8
    SetConsoleOutputCP(65001);

    printf("Enter min hour\n");
    cin >> time.from.hour;
    cout << "entered: " << time.from.hour << endl;
    printf("Enter max hour\n");
    cin >> time.to.hour;
    cout << "entered: " << time.to.hour << endl;
    return;
}

void TicketFilter::enterDestination()
{

    return;
}


