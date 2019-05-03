
#include <iostream>

using namespace std;

int main(int argc, const char *argv[])
{

    int rowOne = stoi(argv[1]);
    int colOne = stoi(argv[2]);

    int rowTwo = stoi(argv[3]);
    int colTwo = stoi(argv[4]);

    if (colOne == rowTwo)
    {
        //creating matrix 1
        int **mOne;
        mOne = new int *[rowOne];
        for (int i = 0; i < rowOne; i++)
        {
            *(mOne + i) = new int[colOne];
        }

        //filling matrix 1 with numbers from 1-9
        int count = 1;
        for (int i = 0; i < rowOne; i++)
        {
            for (int j = 0; j < colOne; j++)
            {
                *(*(mOne + i) + j) = count;
                count++;
            }
        }

        //printing contents of matrix 1
        cout<<"Matrix 1"<<endl;
        for (int i = 0; i < rowOne; i++)
        {
            for (int j = 0; j < colOne; j++)
            {
                cout << *(*(mOne + i) + j) << " ";
            }
            cout << "\n";
        }

        cout << "\n";
        //creating matrix 2
        int **mTwo;
        mTwo = new int *[rowTwo];
        for (int i = 0; i < rowTwo; i++)
        {
            *(mTwo + i) = new int[colTwo];
        }

        //filling matrix 2 with numbers from 9-1
        int counter = rowTwo * colTwo;
        for (int i = 0; i < rowTwo; i++)
        {
            for (int j = 0; j < colTwo; j++)
            {
                *(*(mTwo + i) + j) = counter;
                counter--;
            }
        }

        //printing contents of matrix 2
        cout<<"Matrix 2"<<endl;
        for (int i = 0; i < rowTwo; i++)
        {
            for (int j = 0; j < colTwo; j++)
            {
                cout << *(*(mTwo + i) + j) << " ";
            }
            cout << "\n";
        }
        cout << "\n";
        //creating matrix 3
        int **mThree;
        mThree = new int *[rowOne];
        for (int i = 0; i < rowOne; i++)
        {
            *(mThree + i) = new int[colTwo];
        }
        //fill third matrix with the miltiplied result of matrix 1 and 2 
        int sum;
        for (int i = 0; i < rowOne; i++)
        {
            for (int j = 0; j < colTwo; j++)
            {
                sum = 0;
                for (int k = 0; k < colOne; k++)
                {
                    sum += (*(*(mOne + i) + k)) * (*(*(mTwo + k) + j));
                }
                *(*(mThree + i) + j) = sum;
            }
        }
        //printing matrix 1 * 2 
        cout<<"Matrix 1 * Matrix 2"<<endl;
        for (int i = 0; i < rowOne; i++)
        {
            for (int j = 0; j < colTwo; j++)
            {
                cout << *(*(mThree + i) + j) << " ";
                
            }
            cout<<"\n";
        }
    }
    else
    {
        cout << "Those matrix dimensions are not valid, the number of columns in the first matrix does not equal the number of rows in the second matrix." << endl;
    }

    return 0;
}
