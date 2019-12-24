#include <iostream>
using namespace std;

int main() {
	unsigned long x = 0, y = 0, counter = 0, x1 = 0, y1 = 0, max = 0, temp = 0,hold=0;
	while (cin>>x>>y) {
		max = 0;
		x1 = x;
		y1 = y;
		if (x > y) {
			temp = x;
			x = y;
			y = temp;
		}
		while (x <= y) {
			hold = x;
			counter = 1;
			while (1 != hold) {
				if (hold % 2 == 0)
					hold /= 2;
				else
					hold = hold * 3 + 1;
				counter++;
			}
			x++;
			if (counter > max)
				max = counter;
		}
		cout<<x1<<" "<< y1<<" "<< max<<endl;
	}
	return 0;
}
