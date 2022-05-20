// Matrix Flatten.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>


using namespace std;

#define LENGTH 2
#define WIDTH  3
#define HEIGHT 4


int matrix[LENGTH][WIDTH][HEIGHT]= {
      { {0,1,2,3}, {4,5,6,7}, {8,9,10,11} },
      { {12,13,14,15}, {16,17,18,19}, {20,21,22,23} }
};
int vector[LENGTH * WIDTH * HEIGHT];

 void convertMatrix()
{
     int y = 0;
    
    for (int i = 0; i < LENGTH; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            for (int k = 0; k < HEIGHT; k++)
            {
                vector[y++] = matrix[i][j][k];
            }
        }

    }

}

 int getVectorIndex(int i, int j, int k)
 {
     int y = i * WIDTH * HEIGHT + j * HEIGHT + k;
     return y;
 }



int main()
{
    convertMatrix();
    for (int i = 0; i < LENGTH * WIDTH * HEIGHT; i++)
    {
        cout << vector[i] << ",";
    }
    cout << endl;

    cout << vector[getVectorIndex(0, 2, 1)]<<endl;
   
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
