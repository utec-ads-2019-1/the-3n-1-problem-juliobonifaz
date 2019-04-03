#include <iostream>

using namespace std;

// mi laptop no quiere correr mi codigo

int main() {

    int count = 0;

    int MAXcount = 0;

    int cambio = 0;
    int temp = 0;


    string espacios= " ";
    string in;
    getline (cin, in);

    size_t found = in.find(espacios);
    if (found != string::npos) // encontrar el espacio en blanco
        cambio = found;

    int int2 = stoi(in.substr (0,cambio));
    int int3 = stoi(in.substr (cambio));

    cout  << int2 << " " << int3 << " ";

    if ( int2 > int3){
        temp = int2;
        int2 = int3;
        int3 = temp;
    }


    for (int i = int2; i <= int3 ; ++i) {
        temp = i ;
        while (temp != 1){
            if (temp % 2 ==0){

                temp = temp + temp +temp +1;
            }
            else{
                temp= temp/2;
            }
            count = count +1;
        }
        if (count > MAXcount) {
            MAXcount = count;
        }
    }
    cout << MAXcount;







    return 0;
}
