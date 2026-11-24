#include<iostream>
using namespace std;
class array{
	public:
		int size=6;
		int sub=0;
		int sum=0;
		int arr[6];
		void inputdata()
		{
		cout<<"enter 6 numbers";
		for(int i=0;i<6;i++)
		cin>>arr[i];
		cout<<endl;
		}
		void display(){
			cout<<"you entered"<<endl;
			for(int i=0;i<6;i++)
			cout<<arr[i]<<"\n";
			cout<<endl;
	}
	    int calculatesum(){
	    	sum=0;
	    	for(int i=0;i<6;i++)
	    	sum+=arr[i];
	        return sum;
			}
	    void calculatesub(){
	    	sub=arr[0];
	    	for(int i=1;i<6;i++)
	    	sub-=arr[i];
	    	cout<<"sub"<<sub<<endl;
			}
		void calculatemax()
		{
		    int max = arr[0];
			for(int i=1;i<6;i++)
			{
				if(max<arr[i])
				{
				max=arr[i];
				}
			}
			cout<<"max"<<max<<"\t";
		}	void calculatemin()
		{
			int min = arr[0];
			for(int i=1;i<=6;i++)
			{
				if(min>arr[i])
			{
					min=arr[i];
					}
			}cout<<"min"<<min<<"\t";
		}void calculateeven()
		{   int sum=0;
			int even =0;
			for(int i=0;i<6;i++)
			{
				if(arr[i]%2==0)
				even++;
				sum+=arr[i];
			}cout<<"even"<<even<<"\t";
			cout<<"sum"<<sum;
		}
		void calculateodd()
		{
			int odd=0;
			for(int i=0;i<6;i++)
			{
				if(arr[i]%2!=0)
				odd++;
			}cout<<"odd"<<odd<<"\t";
		}
		void calculateavg()
		{
			int size=6;
			float avg =(float)calculatesum()/size;
			cout<<"avg"<<avg;
		}void countnumbers(){
			int positive=0;
			int negative=0;
			int zero=0;
			for(int i=0;i<6;i++)
			{
				if(arr[i]>0)
				positive++;
				else if(arr[i]<0)
				negative++;
				else
				zero++;
			}cout<<"pos"<<positive<<"negative"<<negative<<"zero"<<zero;
		}
		void search(){
			int key;
			cout<<"Enter number to search";
			cin>>key;
			bool found = false;
			for(int i=0;i<6;i++)
			{
			if(arr[i] == key){
				cout<<"Element found";
				found=true;
				break;
			}}if(found){
				cout<<"Elements found";}
				else{
				cout<<"not found";
			}
		}
		void findfrequency()
		{   int key;
			int count=0;
			cout<<"Enter key for which you want to find frequancy "<<"\t";
			cin>>key;
			for(int i=0;i<6;i++)
			{
				if(arr[i]==key)
			{
					count++;}
			}cout<<"frequency"<<count;
			if(count<0)
			{
				cout<<"element never exist";
			}
		}
		void sortasc()
		{   
			for(int i=0;i<6;i++)
			{for(int j=0;j<5;j++)
				{
				if(arr[j]>arr[j+1])
				swap(arr[j],arr[j+1]);}
			}cout<<"ascending order";
			for(int i=0;i<6;i++){
			cout<<arr[i];}
		}
		void sortdsc()
		{   
			for(int i=0;i<6;i++)
			{for(int j=0;j<5;j++)
			{
					if(arr[j]<arr[j+1])
				swap(arr[j],arr[j+1]);}
			}cout<<"descending order";
			for(int i=0;i<6;i++){
			cout<<arr[i]<<" ";}
		}
		void insertion()
		{
			int size=6;
			arr[6]=50;
			size++;
			cout<<arr[6];
		}
	};
	int main()
	{
		array a1;
		a1.inputdata();
		a1.display();
		a1.calculatesum();
		a1.calculatesub();
		a1.calculatemax();
		a1.calculatemin();
		a1.calculateeven();
		a1.calculateodd();
		a1.calculateavg();
		a1.countnumbers();
		a1.search();
		a1.findfrequency();
		a1.sortasc();
		a1.sortdsc();
		a1.insertion();
		return 0;
	}
		