#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n1;
    cout<<"enter the size of the array: ";
    cin>>n1;

    int arr1[n1];
    for (int i=0;i<n1;i++)
    {
        cout<<"enter the "<<i<<" element : ";
        cin>>arr1[i];
    }
    
    int n = sizeof(arr1)/sizeof(arr1[0]);

    for (int i = 0; i < n - 1; i++)
    {
        bool flag = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr1[j] > arr1[j + 1])
            {
                flag = true;
                int temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
            }
        }
        if(!flag) break;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;

    return 0;
}
