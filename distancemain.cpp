#include <iostream>
#include "distanceclass.cpp"
#include "distanceclass.h"
using namespace std;
int main()

{
     int num;
    mark Ar[];
   

int center(mark Ar[], int a)
    {
            float Xsum = 0.0, Ysum = 0.0;
           loat average_x, average_y; ////
        

for (int i = 0; i < a; i++)
        {
            Xsum= Xsum + Ar[i].get_pointX();
            Ysumy=Ysum + Ar[i].get_pointY();
        }


    average_x = Xsum / a;
    average_y = Ysum / a;

        mark P(average_x, average_y);

        return P;
    }

    void close(mark N[], int s, mark M[], int i, mark p)
    {

        mark center_a = center(N, s); 
        mark center_b = center(M, i); //


        float distanceA = centerA.distance(p);//
            float distanceB = centerB.distance(p);

        if (distanceA < distanceB)
        {
            cout << "It belongs with A." << endl;//
        }
        else
        {
                cout << "It belongs with B." << endl;//
        }
    }
    return 0;
}