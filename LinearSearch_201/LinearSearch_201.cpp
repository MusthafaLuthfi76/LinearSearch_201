#include <iostream>
using namespace std;

int arr[20];                                //Array to be search
int n;                                      //Number of element in the array
int i;                                      //Index of array element

void input()
{
    while (true)
    {
        cout << "Enter the number of elements in the Array = ";
        cin >> n;
        if ((n > 0) && (n <= 20))
            break;
        else
            cout << "\nArray should have minimum 1 and maximum 20 elements.\n\n";
    }

    //Accept array elements
    cout << "\n--------------------\n";
    cout << " Enter array elements \n";
    cout << "-------------------- \n";
    for (i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }
}

void LinearSearch()
{
    char ch;
    int comparisson;                        //Number of Comparrison

    do
    {
        //Accept the number to be searched
        cout << "\nEnter the element you want to search : ";        //Langkah 1
        int item;
        cin >> item;
    }
}

int main()
{
    std::cout << "Hello World!\n";
}
