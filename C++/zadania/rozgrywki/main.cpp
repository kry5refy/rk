#include <iostream>

using namespace std;

int main()
{
    int mecze[12][6]={
        //           a-b a-c b-c
                    {1,2,3,2,4,3};
                    {1,1,1,2,2,3};
                    {1,3,2,2,3,3};
                    {4,2,0,3,5,4};
                    {4,2,0,0,1,3};
                    {2,2,2,2,3,3};
                    {3,2,1,3,2,1};
                    {1,0,0,2,0,3};
                    {2,1,3,2,1,1};
                    {0,0,2,3,4,4};
    }
    // za wygran� 3 pkt, za remis 1, za przegran� 0
    /*Kto wygra�, ile bramek zdoby�a a,b,c, ile by�o
      remis�w, bilans bramek
    */
    cout << "Hello world!" << endl;
    return 0;
}
