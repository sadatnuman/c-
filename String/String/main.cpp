/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str1[]="Hello";
    char str2[]="World";
    cout<<strlen(str1)<<endl;
    cout<<strlen(str2)<<endl;
    int x=strcmp(str1,str2);
    cout<<x<<endl;
    strcpy(str1,str2);
    cout<<str1<<"  "<<str2<<endl;
    cout<<strcmp(str1,str2)<<endl;
    strcat(str1,str2);
    cout<<str1<<"  "<<str2<<endl;
    cout<<strcmp(str1,str2);
}
*/
#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50};
    int n = (sizeof(arr))/sizeof(arr[0]);
    cout<<n<<endl;
    for(int i=n;i>=0;i--)
    {
        arr[i]=arr[i-1];

    }
    arr[0]=5;
    n++;
    for(int i=n;i>=2;i--)
    {
        arr[i]=arr[i-1];

    }
    arr[2]=15;
    n++;
    arr[n++]=100;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }
}
