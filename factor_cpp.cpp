#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int response;
    while(true){
        cout << "\nenter number to factorize(0 to end): " << endl;
        cout << "> ";
        cin >> response;
        if(response == 0){
            exit(0);
        }
        int square_r = round(sqrt(response));
        for(int i = 1; i < square_r; i++){
            if(response % i == 0){
                cout << i << " x " <<  response / i  << endl;
            }
        }
    }


    return 0;
}
