/*
A personalized tour operator, which provides budget chauffeur service to international travelers, has asked for our help. They need to find the minimum cost to travel along each path used by their drivers.

The cost of each route is determined by the following rules:

A driver always begins by paying for a full tank of fuel at the starting point of the journey.
At each subsequent station, the driver can either stop and completely fill the tank, or continue driving to the next station, if they have enough fuel to reach it. When a driver stops at a station, there is a 500 unit refreshment charge. Note that there is no refreshment charge at the starting station.
Standard input
The first line of input contains an integer tt, giving the number of testcases.

The first line of each test case contains three space-separated integers, s,c,r_0s,c,r 
0
​
 , where ss is the number of stations on this route, cc is the capacity of the fuel tank in litres, and r_0r 
0
​
  is the cost of fuel at the origin's station in units per litre.

The following ss lines describe the stations on the route, ending with a station that is located at the destination. The ith line contains two space-separated integers, f_i,r_if 
i
​
 ,r 
i
​
 , where f_if 
i
​
  is the amount of fuel needed to travel from the previous station to the ith station in litres and r_ir 
i
​
  is the cost of fuel at the ith station in units/litre.

Standard output
For each testcase, output a single integer that represents the minimum possible cost for the trip.

Constraints and notes
1 \leq t \leq 101≤t≤10
1 \leq s \leq 10^41≤s≤10 
4
 
1 \leq c \leq 10^41≤c≤10 
4
 
1 \leq f_i \leq c1≤f 
i
​
 ≤c
1 \leq r_i \leq 10^51≤r 
i
​
 ≤10 
5
 
The last station listed will always be at the destination.

When getting fuel at a station, the driver must fill the tank.

Input		
1
3 35 230
15 240
18 225
24 240

Output
15975

Explanation
The driver must start by filling the tank at the origin. Since the tank's capacity is 35 litres, and the cost of fuel at the origin is 230 units/litre, it costs 8050 units to do so.

It takes 15 litres to travel to the second station, and 18 more litres to travel to the third station. Thus, with this much fuel, the vehicle can easily reach the third station where the cost of fuel is cheaper than second station.

At station 3, the vehicle's tank has 2 litres of remaining fuel. To fill the tank, the driver adds 33 more litres at a cost of 225 units/litre. In addition to the 7425 unit charge for fuel, there is also the driver's refreshment charge of 500 units.

After filling the tank at station 3, the driver has enough fuel to reach the destination, since this requires just 24 more litres.

Thus, the minimum cost is 15975 units (35 * 230 + 33 * 225 + 50035∗230+33∗225+500).
*/
#include <iostream>
using namespace std;

int main()
{
    long int t, *s, *c, *cf, *cost, rf, rem;
    long int **f, **r;
    cin >> t;
    cost = new long int[t];
    s = new long int[t];
    c = new long int[t];
    cf = new long int[t];
    f = new long int *[t];
    r = new long int *[t];
    for (int j = 0; j < t; j++)
    {
        cin >> s[j] >> c[j] >> cf[j];
        f[j] = new long int[s[j]];
        r[j] = new long int[s[j]];
        cost[j] = c[j] * cf[j];
        rem = c[j];
        for (int i = 0; i < s[j]; i++)
            cin >> f[j][i] >> r[j][i];
        for (int i = 0; i < s[j] - 1; i++)
        {
            rem = rem - f[j][i];
            if (rem < f[j][i])
            {
                rf = 35 - rem;
                cost[j] += (rf * r[j][i]) + 500;
                rem = c[j];
            }
        }
    }
    for (int j = 0; j < t; j++)
        cout << cost[j] << endl;
    return 0;
}