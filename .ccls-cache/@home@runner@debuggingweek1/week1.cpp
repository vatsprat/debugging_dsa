#include <bits/stdc++.h>>
#include <vector>
#include <math.h>
using namespace std;

int main() 
{
  // Question1
 //  int i=0;
	// i=i+1;
	// cout<<i;
	// i=i+1;
	// cout<<++i;

  
 //  Question 2
 //  short i=2300, j=4322;
	// cout<<"i+j="<<(i+j); 

  
  // print square pattern
  // int n;
  // cin>>n;
  // for(int row=0;row<n;row++)
  //   {
  //     for(int col=0;col<n;col++)
  //       {
  //         cout<<"* ";
  //       }
  //     cout<<endl;


  
 //  prime number
	// int n;
	// cin >> n;
	// bool isPrime = true;
 //  for(int i=2;i<n;i++){
 //      if(n%i == 0){
 //          isPrime = false;
 //        break;
 //      }
 //  }
	// if(isPrime){
	// 	cout<<"Prime"<<endl;	
	// }
	// else{
	// 	cout<<"Not Prime"<<endl;	
	// }
 //  return 0;



  // Numeric hollow half inverted pyramid
  // int n;
  // cin>>n;
  // for(int row=1;row<=n;row++)
  //   {
  //     for(int col=row;col<=n;col++)
  //       {
  //         if(row==1)
  //         {
  //           cout<<col<<" ";

            
  //         }
  //         else
  //         {if (col == row)
  //           cout<<col<<" ";
  //         else if (col == n)
  //           cout<<col<<" ";
  //         else
  //           cout<<"  ";}
  //       }
      
  //     cout<<endl;
  //   }

  // int n;
  //   cin>>n;
  //   for(int i=0;i<n;++i)
  //   {
  //       for(int j=i+1;j<=n;j++){
  //           if(j==i+1 || j == n - i - 1 || i == 0){
  //               cout<<j;
  //           }
  //           else{
  //               cout<<" ";
  //           }
  //       }
  //       cout<<endl;
  //   }
  // return 0;


  //print pattern
  // int n;
  // cin>>n;
  // for(int row=0;row<n;row++)
  //   {
  //     //print spaces
  //     int space =0;
  //     for(space=0;space<n-row-1;space++)
  //       {
  //         cout<<" ";
  //       }
  //     // for(int num=row+1;num<=n-space;num++)
  //     //   {
  //     //     cout<<num;
  //     //   }
  //     cout<<endl;
      
  //   }


  
  //print hollow square
  // int n;
  // cin>>n;
  // for(int row=0;row<n;row++)
  //   {
  //     if(row==0 || row==n-1)
  //     {
  //       for(int col=0;col<n;col++)
  //         {
  //           cout<<"*";
  //         }
  //     }
  //     else
  //     {
  //       cout<<"*";
  //       for(int col=0;col<n-2;col++)
  //         {
  //           cout<<" ";
  //         }
  //       cout<<"*";
  //     }
  //     cout<<endl;
  //   }


  //hollow inverted half pyramid
  // int n;
  // cin>>n;
  // for(int row=0;row<n;row++)
  //   {
  //     for(int col=0;col<n;col++)
  //       {
  //         if(row==0 || col==0 || col==(n-row-1))
  //         {
  //           cout<<"* ";
  //         }
  //         else cout<<"  ";
  //       }
  //     cout<<endl;
  //   }


  //hollow full pyramid
  // int n;
  // cin>>n;
  // for(int row=0;row<n;row++)
  //   {
  //     for(int col=0;col<n-row-1;col++)
  //       {
  //         cout<<" ";
  //       }
  //     for(int star=0;star<(((row)*2)+1);star=star+1)
        
  //       { if(star==0 || star==(row*2) || row==n-1) cout<<"*";
          
  //         else cout<<" ";
          
  //       }
  //     cout<<endl;
  //   }
  
  //alphabet palindrome pyramid
  // int n;
  // cin>>n;
  // for(int row=0;row<n;row++)
  //   {
  //     for(int col=0;col<=(2*row+1)/2;col++)
  //       { 
  //           cout<<char(col+65);
          
         
  //       }
  //     for(int col=(2*row+1)/2;col>=1;col--)
  //       {
  //         cout<<char(col+65-1);
  //       }
  //     cout<<endl;
  //   }

  //numeric full pyramid
  // int n;
  // cin>>n;
  // for(int row=0;row<n;row++)
  //   {
  //     for(int i=0;i<n-row-1;i++)
  //       {
  //         cout<<" ";
  //       }
  //     for(int i=0;i<row+1;i++)
  //       {
  //         cout<<row+i+1;
  //       }
  //     for(int i=row;i>=1;i--)
  //       {
  //         cout<<row+i;
  //       }
  //     cout<<endl;
  //   }

  //number of set bits
  // int n;
  // cin>>n;
  // int count=0;
  // while(n!=0)
  //   {
  //     if((n & 1) == 1)
  //     {
  //       count++;
      
  //     }
  //      n = n >> 1;
  //   }
  // cout << count;
  // return 0;

  //decimal to binary
//   int n;
//   cin>>n;
//   int ans =0;
//   int i=0;
//   while(n!=0)
//     {
//         int bit = n & 1;
//         ans = (bit * pow(10,i))+ ans;
//         i++;
//         n=n>>1;
        
    


      
//     }
//     cout<<ans;
//     return 0;

  //decimal to binary brute force
  // int n;
  // cin>>n;
  // vector<int> ans;
  // while(n!=0)
  //   {
  //     ans.push_back(n%2);
  //     n=n>>1;
      
  //   }
  
  // reverse(ans.begin(),ans.end());
  // for(int i=0;i<ans.size();i++)
  //   {
  //     cout<<ans[i];
  //   }
  // return 0;
  
  
  //binary to decimal
  
  
    
  



  

  }