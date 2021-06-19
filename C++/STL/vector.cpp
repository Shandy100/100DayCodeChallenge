#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool f(int x,int y)
{
    return x>y;
}

int main()
{ 
//     int n;
// cin>>n;
// vector<int> A(n,0)); //initalize array of size n with 0 as default
    
    vector<int> A={10,11,12,13}; // input a vector
    cout<<A[1]<<endl;
    sort(A.begin(),A.end());  //O(NlogN) //sort in ascending
    
    //  for (auto x : A)
    //     cout << x << " "; // sorted vector
    
    bool present = binary_search(A.begin(),A.end(),3); //False-0
    // cout<<present;
    present = binary_search(A.begin(),A.end(),4); //False-0
    // cout<< present;
    
    A.push_back(100);
    present= binary_search(A.begin(),A.end(),1100);
    // cout<<present; //True
//10,11,12,13
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);
    //10,11,12,13,100,100,100,100,100,123
    for(int x:A)
    cout<<x<<" ";
vector<int>::iterator it=lower_bound(A.begin(),A.end(),100); //>= //iterator sort of pointer
vector<int>::iterator it2=upper_bound(A.begin(),A.end(),100); //>
//  auto it5=lower_bound(A.begin(),A.end(),100); //>= //iterator sort of pointer
//    auto it6=upper_bound(A.begin(),A.end(),100); //>
// cout<< *it5<<"      "<<*it6<<endl; //100 //123
// cout<<it5-it6<<endl;//5
cout<<"\n";
cout<< *it<<" "<<*it2<<endl; //100 //123
cout<<it2-it<<endl;//5
   


    sort(A.begin(),A.end(),greater<int>());
    for(int x:A)
    cout<<x<<" ";
    cout<<endl;

    for(int &x:A)
    {x++;
    cout<<x<<" ";}

    cout<<endl;
    
    // sort(A.begin(),A.end(),f);
    // vector<int>::iterator it3;
    // for(it3 = A.begin();it3!= A.end();it3++)
    // {
    //     cout<<*it3<<" ";
    // }
cout<<"\n";
 

    

    
    return 0;
}