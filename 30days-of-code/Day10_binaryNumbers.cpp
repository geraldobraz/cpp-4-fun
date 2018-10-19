#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int countNumbers(vector<int> binaryNumber)
{

    int count = 0, maxNumber = 0;

    for (int i = 0; i < binaryNumber.size(); i++){

        if (binaryNumber[i] == 1){

            count++;

            if (binaryNumber[i + 1] != 1){
                if (count >= maxNumber){
                    maxNumber = count;
                    count = 0;
                }else{
                    count = 0;
                }
            }
        }
    }

    return maxNumber;
}

std::vector<int> decimal2Binary(int dec)
{
    vector<int> binary(0), aux(0);
    do{
        aux.push_back(dec % 2);
        dec = dec / 2;

    } while (dec >= 1);
    aux.push_back(dec);

    for (int i = 1; i <= aux.size(); i++)
    {
        binary.push_back(aux[aux.size() - i]);
    }

    return binary;
}

int main()
{
    int n;
    cin >> n;
    cout << countNumbers(decimal2Binary(n)) << endl;

    return 0;
}