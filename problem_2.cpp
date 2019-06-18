//size of  int or long int is  -2,147,483,648 to  2,147,483,647.
//size of long long int is 92,23,37,20,36,85,47,75,808


#include <iostream>
using namespace std;
//defining own macros ...
#define ll long long int 
void update (ll arr[],int n,int low,int high,int val){

arr[low-1]+=val;
if(high!=n)
arr[high]-=val;
}

void game() {

	ll n;
	int a, b, t;
	cout << "enter the size of the array :";
	cin >> n;
	ll array[n];
	ll arr[n+1];
	
	
	for (ll i = 0; i < n; i++) {
		array[i] = i+1;
	}
	arr[0]=array[0];
	arr[n]=0;
	for(ll i=1;i<=n;i++)
	arr[i]=array[i]-array[i-1];


	int q;
	cout << "enter the number of queries :";
	cin >> q;

	for (int i = 0; i < q; i++) {
		
		cout << " enter the starting index in query " << i+1 << " : ";
		cin >> a;

		cout << "enter the ending index of the query " << i+1 << " : ";
		cin >> b;
		cout << "enter the element to add";
		cin >> t;


			update(arr,n,a,b,t);
			

		
	

	}
	
	for(ll i=0;i<n;i++){
	    if(i==0)
	    array[i]=arr[0];
	    
	    else 
	    array[i]=arr[i]+array[i-1];
	    
	}
	
	
          //finding the maximum element...

	ll max = array[0];
	for (int j = 0; j < n; j++) {
		if (max < array[j])
		{
			max = array[j];

		}
	}
	cout << endl<<max;
	

}

int main()
{
	game();

	return 0;

}



