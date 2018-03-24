
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main()
{

 int n;
 cout<< "how big do you want the array?" << endl;
 cin >> n;



 int array[n];

 srand((unsigned)time(0));

    for(int i=0; i<n; i++){
        array[i] = (rand()%2);

        cout << array[i] << endl;

 }


 return 0;
}
