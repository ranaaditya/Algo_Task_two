//size of  int or long int is  -2,147,483,648 to  2,147,483,647.
//size of long long int is 92,23,37,20,36,85,47,75,808


#include <iostream>
using namespace std;
//defining own macros ...
#define ll long long int 

void game() {

	ll n;
	int a, b, t;
	cout << "enter the size of the array :";
	cin >> n;
	ll array[n];
	for (ll i = 0; i < n; i++) {
		array[i] = i+1;
	}


	int q;
	cout << "enter the number of queries :";
	cin >> q;
//entering the queries ...

	for (int i = 0; i < q; i++) {
		
		cout << " enter the starting index in query " << i+1 << " : ";
		cin >> a;

		cout << "enter the ending index of the query " << i+1 << " : ";
		cin >> b;
		cout << "enter the element to add";
		cin >> t;

//updating the array ...
			for (ll k = a - 1; k < b ; k++) {
				array[k] += t;
			}
			

		
	

	}
          //finding the maximum element in the resultant array...

	ll max = array[0];
	for (int j = 0; j < n; j++) {
		if (max < array[j])
		{
			max = array[j];

		}
	}
	cout << endl<<max;                   //displaying the final result....
	

}

int main()
{
	game();

	return 0;

}



