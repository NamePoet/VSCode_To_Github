#include <iostream>
using namespace std;
int main(){
	int x;
	cin>>x;
	int ans=0;
	x/=160;
	ans+=x;
	int sum=x%10;
	int b=x/10*3;
	while(b>=5){
		b-=5;
		sum++;
		ans++;
		while(sum>=10){
			sum-=10;
			b+=3;
		}
	}
	cout<<ans<<endl;
	return 0;
}
