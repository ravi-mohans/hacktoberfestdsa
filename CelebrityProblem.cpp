/*Problem Statement
There are ‘N’ people at a party. Each person has been assigned a unique id between 0 to 'N- 1’ (both inclusive). A celebrity is a person who is known to everyone but does not know anyone at the party. Your task is to find out the celebrity at the party. Print the id of the celebrity. If there is no celebrity at the party, then print -1.

Input:

MATRIX = { {0, 0, 1, 0},

           {0, 0, 1, 0},

           {0, 0, 0, 0},

           {0, 0, 1, 0} }

Output:id = 2

Explanation: The person with ID 2 does not know anyone, but everyone knows him*/

#include <bits/stdc++.h>
#include <list>
using namespace std;
#define N 4

bool MATRIX[N][N] = { { 0, 0, 1, 0 },{ 0, 0, 1, 0 },{ 0, 0, 0, 0 },{ 0, 0, 1, 0 } };

bool knows(int A, int B)
{
    return MATRIX[A][B];
   
}

int findCelebrity(int n) {
   
    int celebrity = -1;

    // Check one by one whether the person is a celebrity or not.
    for(int i = 0; i < n; i++) {
        bool knowAny = false, knownToAll = true;

        // Check whether person with id 'i' knows any other person.
        for(int j = 0; j < n; j++) {
            if(knows(i, j)) {
                knowAny = true;
                break;
            }
        }

        // Check whether person with id 'i' is known to all the other person.
        for(int j = 0; j < n; j++) {
            if(i != j and !knows(j, i)) {
                knownToAll = false;
                break;
            }
        }

        if(!knowAny && knownToAll) {
            celebrity = i;
            break;
        }
    }

    return celebrity;
}

// Driver code
int main()
{
int n = 4;
int id = findCelebrity(n);
id == -1 ? cout << "No celebrity" : cout << "Celebrity ID " << id;
return 0;
}
