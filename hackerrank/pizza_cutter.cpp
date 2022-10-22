/*
//Pizza Cutter
//Time limit:1000 mili seconds
//Memory limit: 256 MB

//The slicematic is a pizza cutting robot. The robot takes a series of degree offsets as inputs and uses these to slice the pizza along the diameter starting at each offset.
//Your task is to count the number of pieces of pizza that will result after the robot is done cutting. The image below shows some example offsets. 
//The first image results in 4 pieces, and the second has 6 pieces.

//Notes:

//As shown in the image above, the slicematic robot can take degree values that are more than 360360 degrees.
//The positive degree value represents clockwise rotation, as shown in the images. The robot can also take a negative value as a degree, representing counterclockwise rotation.
//If the robot makes two equivalent slicing offsets, e.g., 00 and 180180, only one cut will be made.
//All slices will intersect in the center of the pizza.

//Standard input
//The first line of input contains a single integer TT, the number of test cases.

//Each test case is a single line of space-separated integers. The testcase begins with an integer NN, which is the number of slicing offsets in the test, followed by NN integers, D_1D 
//1
​
// , D_2D 
//2
​
// , ..., D_nD 
//n
​
//, each describing an offset the robot will use to slice a pizza.

//Standard output
//For each test case, output a single line containing the number of pieces of pizza that will result after the slicematic makes all of the slices.

//Input	
4
2 0 90
3 45 180 630
3 90 -90 270
0
Output	
4
6
2
1
Explanation
There are 44 test cases.

Case 11: This corresponds to the first image above where there are two cuts at 00 degrees and 9090 degrees. This results in 44 pieces of pizza.

Case 22: This corresponds to the second image above where there are three cuts at 4545, 180180, and 630630 degrees. This results in 66 pieces of pizza.

//Case 33: Here all of the offsets, 9090, -90−90, and 270270, correspond to the same cut of the pizza. Thus, there are two slices.

Case 44: Here there are no cuts made by the robot, so there is only one piece of pizza.

*/
#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int t,cnt;
    int *n;
    int **d;
    int *c;
    cin >> t;
    n = new int[t];
    d = new int *[t];
    c = new int[t];

    for (int i = 0; i < t; i++)
    {
        c[i] = 0;
        cin >> n[i];
        d[i] = new int[n[i]];
        for (int j = 0; j < n[i]; j++)
        {
            cin >> d[i][j];
            if (d[i][j] > 360)
            {
                while (d[i][j] > 360)
                {
                    d[i][j] -= 360;
                }
            }
        }
    }
    cout<<endl;

    for (int i = 0; i < t; i++)
    {
        if(n[i]==0)
            c[i]=1;
        else
        {
            for (int j = 0; j < n[i]; j++)
            {
                cnt=0;
                c[i] += 2;
                for (int k = j+1; k < n[i]; k++)
                {
                    if(d[i][j] == d[i][k] || d[i][j] == (-d[i][k]) || (360-d[i][j]) == (d[i][k]) || (360-d[i][j]) == (-d[i][k]) || (360+d[i][j]) == (-d[i][k]) || (360+d[i][j]) == (d[i][k]) || (180-d[i][j]) == (-d[i][k]) || (180+d[i][j]) == (d[i][k]))
                        cnt++;
                }
                cout<<cnt;
                if(cnt>=1)
                    c[i] -= 2;
            }
        }
        cout<<c[i];
        cout<<endl;
    }
    return 0;
}