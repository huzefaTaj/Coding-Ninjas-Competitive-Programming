/*
Calculate Grundy Number
Send Feedback
Calculate the Grundy Number for the given 'n' in the game.
The game starts with a number- ‘n’ and the player to move divides the number- ‘n’ with 2, 3 or 6 and then takes the floor. If the integer becomes 0, it is removed. The last player to move wins. Which player wins the game?
Input Format:
First line of input contains an integer T, representing the number of test cases.
Next T lines contain an integer n.
Constraints:
1 <= T <= 10^4
1 <= N <= 10^6
Output Format:
Print the Grundy Number(n) for each test case in a new line.
Sample Input 1:
1
10
Sample Output 1:
0
*/



#include<bits/stdc++.h>
using namespace std;

int mex(int a, int b, int c){
    unordered_set<int>s;
    s.insert(a);
    s.insert(b);
    s.insert(c);
    for(int i=0; i<max(a, max(b,c))+2; i++){
        if(s.count(i)==0)
            return i;
    }
}

int grundy(int n){
    if(n<=0)
        return 0;
    return mex(grundy(n/2), grundy(n/3), grundy(n/6));
}
int main(){
    int t;cin>>t;while(t--){
    int n;
    cin>>n;
    cout<<grundy(n);}
    return 0;
}
