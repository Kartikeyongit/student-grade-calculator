#include <bits/stdc++.h>
using namespace std;
int main(){
int n;cin>>n;
vector<int>a(n);int sum=0;
for(int i=0;i<n;i++){cin>>a[i];sum+=a[i];}
double perc=(sum*1.0)/(n);
char grade;
if(perc>=90)grade='A';
else if(perc>=80)grade='B';
else if(perc>=70)grade='C';
else if(perc>=60)grade='D';
else grade='F';
cout<<sum<<" "<<perc<<" "<<grade;
}
