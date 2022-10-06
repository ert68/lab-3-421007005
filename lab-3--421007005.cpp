 #include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<" enter the number  of arry \n";
    cin>>a;
    
    int *b=new int ;
         
    for( int s=0;s<a;s++)
    {
        cout<<"  enter the numbers  in arry \n";
        cin>>b[s];
    }
    
    cout<<" output \n";
    for( int s =0;s<a;s++)
    {
        cout<<b[s]<<endl;          //  <- cout<<*b;
    }
    	return 0;
}


