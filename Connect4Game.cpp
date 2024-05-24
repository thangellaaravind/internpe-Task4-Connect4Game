#include<iostream>
using namespace std ;
char arr[6][7]={{',',',',',',',',',',',',','}, {',',',',',',',',',',',',','},{',',',',',',',',',',',',','},{',',',',',',',',',',',',','},{',',',',',',',',',',',',','},{',',',',',',',',',',',',','}};
	int c1=6;
	int c2=6;
	int c3=6;
	int c4=6;
	int c5=6;
	int c6=6;
	int c7=6;
int insert(int x)
{
	if(x==1){
		if (c1>0) {
			c1--;
			return c1;
		}
		else
		return -1;
	}
	else if(x==2){
		if (c2>0){
			c2--;
			return c2;
		}
		else
		return -1;
	}
	else if(x==3){
		if (c3>0){
			c3--;
			return c3;
		}
		else
		return -1;
	} 
	else if(x==4){
		if (c4>0)
		{
			c4--;
			return c4;
		}
		else
		return -1;
	}
	else if(x==5){
		if (c5>0){
			c5--;
			return c5;
		}
		else
		return -1;	
	}
	else if(x==6){	
		if (c6>0){
			c6--;
			return c6;
		}
		else
		return -1;
	}
	else if(x==7){
		if (c7>0){
			c7--;
			return c7;
		}
		else
		return -1;	
	}
	else 
	return -1;
	
}

bool win_p1_row (int a)
{
	int count=0;
		for(int j=0; j<7;j++){
			if (arr[a][j]=='X')
			{
				count++;
				if (count==4)
				return true ;
			}
			else
			count =0;
		}
		return false;
		
}

bool win_p1_dai1 (int a , int b)//2nd case to win p1
{
	int count=0;
	b--;
	if (a>=b)
	{
		a-=b;
		b=0;
		while(a<6)
		{
			if (arr[a][b]=='X')
			{
				count++;
				if (count==4)
				return true ;
			}
			else
			count =0;
			a++;
			b++;
		}
	}
	else
	{
		b-=a;
		a=0;
		while(b<7)
		{
			if (arr[a][b]=='X')
			{
				count++;
				if (count==4)
				return true ;
			}
			else
			count =0;
			a++;
			b++;
		}
	}
		return false;
		
}

bool win_p1_dai2 (int a , int b)
{
	int count=0;
	b--;
	int c =a+b;
	if (c<7 && c>2)
	{
		b=c;
		a=0;
		while(a<6)
		{
			if (arr[a][b]=='X')
			{
				count++;
				if (count==4)
				return true ;
			}
			else
			count =0;
			a++;
			b--;
		}
	}
	else if (c>6 && c<9)
	{
		b=6;
		a=c-6;
		while(a<6)
		{
			if (arr[a][b]=='X')
			{
				count++;
				if (count==4)
				return true ;
			}
			else
			count =0;
			a++;
			b--;
		}
	}
		return false;
		
}

bool win_p1_col (int a)
{
	int count=0;
	a--;
		for(int j=0; j<6;j++)
		{
			if (arr[j][a]=='X')
			{
				count++;
				if (count==4)
				return true ;
			}
			else
			count =0;
		}
		return false;
		
}

bool win_p2_row (int a)
{
	int count=0;
	
		for(int j=0; j<7;j++)
		{
			if (arr[a][j]=='O')
			{
				count++;
				if (count==4)
				return true ;
			}
			else
			count =0;
		}
		return false;
		
}

bool win_p2_col (int a)
{
	int count=0;
	a--;
		for(int j=0; j<6;j++)
		{
			if (arr[j][a]=='O')
			{
				count++;
				if (count==4)
				return true ;
			}
			else
			count =0;
		}
		return false;
		
}

bool win_p2_dai1 (int a , int b)
{
	int count=0;
	b--;
	if (a>=b)
	{
		a-=b;
		b=0;
		while(a<6)
		{
			if (arr[a][b]=='O')
			{
				count++;
				if (count==4)
				return true ;
			}
			else
			count =0;
			a++;
			b++;
		}
	}
	else
	{
		b-=a;
		a=0;
		while(b<7)
		{
			if (arr[a][b]=='O')
			{
				count++;
				if (count==4)
				return true ;
			}
			else
			count =0;
			a++;
			b++;
		}
	}
		return false;
		
}

bool win_p2_dai2 (int a , int b)
{
	int count=0;
	b--;
	int c =a+b;
	if (c<7 && c>2)
	{
		b=c;
		a=0;
		while(a<6)
		{
			if (arr[a][b]=='O')
			{
				count++;
				if (count==4)
				return true ;
			}
			else
			count =0;
			a++;
			b--;
		}
	}
	else if (c>6 && c<9)
	{
		b=6;
		a=c-6;
		while(a<6)
		{
			if (arr[a][b]=='O')
			{
				count++;
				if (count==4)
				return true ;
			}
			else
			count =0;
			a++;
			b--;
		}
	}
		return false;
		
}

void board(int a, int b, char x)
{
	arr[a][b-1]=x;
	for(int f=1; f<8;f++)
	{
		cout<<f<<'|';
	}
	cout<<endl;
	for(int i=0;i<6;i++)
	{
		for(int j =0;j<7;j++)
		{
			cout<<arr[i][j]<<'|';
		}
		cout<<endl;
	}
}
int main()
{
	cout<<"Welcome To Connect4 Game !!"<<endl;
	for(int f=1; f<8;f++)
	{
		cout<<f<<'|';
	}
	cout<<endl;
	for(int i=0;i<6;i++)
	{
		for(int j =0;j<7;j++)
		{
			cout<<arr[i][j]<<'|';
		}
		cout<<endl;
	}
	int c=0;
	while(c<21)
	{
		int p1=0, p2=0;
		int col=0;
		int k=0;
		while(p1<1)
		{
			cout<<"Player1"<<endl<<"Enter colmn: ";
			col=0;
			cin>>col;
			 k=insert(col);
			while (k==-1)
			{
				cout<< "invalid place, Play Again: ";
				cin>>col;
				k=insert(col);
			}
			board(k,col,'X');
			
			p1++;
		}
		if (win_p1_row (k)==true)
			{
				cout<<"Congratulations!"<<endl<<"Player 1 won the Game!!";
				break;
			}
		
		if (win_p1_col (col)==true)
			{
			cout<<"Congratulations!"<<endl<<"Player 1 won the Game!!";
				break;
			}
			
		if (win_p1_dai1 (k,col)==true)
		{
			cout<<"Congratulations!"<<endl<<"Player 1 won the Game!!";
			break;
		}
		if (win_p1_dai2 (k,col)==true)
		{
			cout<<"Congratulations!"<<endl<<"Player 1 won the Game!!";
			break;
		}
			
		while(p2<1)
		{
			cout<<"Player2"<<endl<<"Enter colmn: ";
			col=0;
			cin>>col;
			k=insert(col);
			while (k==-1)
			{
				cout<< "invalid place, Play Again: ";
				cin>>col;
				k=insert(col);
			}
			board(k,col,'O');
			p2++;
		}
		
		if (win_p2_row (k)==true)
			{
				cout<<"Congratulations!"<<endl<<"Player 2 won the Game!!";
				break;
			}
		if (win_p2_col (col)==true)
			{
			cout<<"Congratulations!"<<endl<<"Player 2 won the Game!!";
				break;
			}
		if (win_p2_dai1 (k,col)==true)
		{
			cout<<"Congratulations!"<<endl<<"Player 2 won the Game!!";
			break;
		}
		if (win_p2_dai2 (k,col)==true)
		{
			cout<<"Congratulations!"<<endl<<"Player 2 won the Game!!";
			break;
		}
		c++;
		if (c==21)
		{
			cout<<"Sorry! No Winner";
		}
	}
}