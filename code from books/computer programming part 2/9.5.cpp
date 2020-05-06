#include<bits/stdc++.H>
using namespace std;
enum COLOR {RED,GREEN,BLUE};

int main()
{
    enum COLOR selected_color;

    int num;

    printf("Enter 1 for RED,2 for GREEN,3 for BLUE:  ");
    cin>>num;
    if(num == 1)
    {
        selected_color = RED;
    }
    else if(num == 2)
    {
        selected_color = GREEN;
    }
    else if(num == 3)
    {
        selected_color = BLUE;
    }
    printf("selected_color: %d ",selected_color);

    return 0;
}
