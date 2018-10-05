//
// Created by Owntrolf on 2018-10-05.
//

#include "Matrix.hpp"

std::vector<std::vector<int>> int2d;

Matrix::Matrix()
{
    int2d.resize(1);
    int2d[0].resize(1);
    int2d[0][0] = 0;
}

Matrix::Matrix(int size)
{
    int2d.resize(size);
    for(int i = 0; i < size; i++)
    {
        int2d[i].resize(size);
    }

    for(int i1 = 0; i1 < size; i1++)
    {
        for(int i2 = 0; i2 < size; i2++)
        {
            int2d[i1][i2] = 0;
        }
    }

}

Matrix::Matrix(int** array, int size)
{
    int2d.resize(size);
    for(int i = 0; i < size; i++)
    {
        int2d[i].resize(size);
    }

    for(int i1 = 0; i1 < size; i1++)
    {
        for(int i2 = 0; i2 < size; i2++)
        {
            int2d[i1][i2] = array[i1][i2];
        }
    }


}





