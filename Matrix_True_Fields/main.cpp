#include <bits/stdc++.h>
using namespace std;

int solve(vector<vector<bool> > fields);
void showMatrix(vector<vector<bool> > fields);
vector<vector<bool> > createMatrix(int m, int n);

int main()
{
    //give size of matrix
    int m=5;
    int n=5;

    //create matrix m x n of 0's
   vector<vector<bool> > fields = createMatrix(m,n);

    //modify values in matrix
    //four corners
    fields[0][0]=1;
    fields[m-1][0]=1;
    fields[0][n-1]=1;
    fields[m-1][n-1]=1;

    fields[0][1]=1;
    fields[m-1][1]=1;
    fields[1][1]=0;


    //displays modified matrix for visual purposes
    showMatrix(fields);

    //counts the fields that are True
    cout << solve(fields)<< endl;
    return 0;
}

vector<vector<bool> > createMatrix(int m, int n)
{
     vector<vector<bool> > fields;
    for(int i=0;i<m;i++)
    {
        fields.push_back(vector<bool>());
    }

    for(int i=0;i<m;i++)
    {
         for(int j=0;j<n;j++)
        {
            fields[i].push_back(NULL);
        }
    }
    return fields;
}

void showMatrix(vector<vector<bool> > fields)
{
    int m=fields.size(), n =fields[0].size();
    for(int i=0; i<m;i++)
    {
        cout<<"[";
        for(int j=0;j<n;j++)
        {
            cout<<fields[i][j]<<",";
        }
        cout<<"]"<<endl;
    }
}
int solve(vector<vector<bool> > fields)
{

	set<pair<int,int> > cells;
	cells.clear();
	set<pair<int,int> >::iterator it;
	int v1 = fields.size();
	int v2 = fields[0].size();
	int count = 0;
	for(int i=0;i<v1;i++)
	{
		for(int j=0;j<v2;j++)
		{
			bool countOk = true;
			if(fields[i][j] == true)
			{
				int x,y;
				//for i going below length
				x=i-1;
				if(countOk == true && x>=0 )
				{
				    //check if cell on top had true by checking whether cell index is in set, cells
					it = cells.find(make_pair(x,j));
					if(it!=cells.end())
					{
						countOk =  false;
					}
				}
				//for i going over length
				x=i+1;
				if(countOk == true && x<v1)
				{
                    //check if cell on bottom had true by checking whether cell index is in set, cells
					it = cells.find(make_pair(x,j));
					if(it!=cells.end())
					{
						countOk =  false;
					}
				}
				//for j going below length
				y=j-1;
				if(countOk == true && y>=0 )
				{
				    //check if cell on left had true by checking whether cell index is in set, cells
					it = cells.find(make_pair(i,y));
					if(it!=cells.end())
					{
						countOk =  false;
					}
				}
				//for j going over length
				y=y+1;
				if(countOk == true && y<v2 )
				{
				    //check if cell on right had true by checking whether cell index is in set, cells
					it = cells.find(make_pair(i,y));
					if(it!=cells.end())
					{
                        countOk =  false;
					}
				}
				//insert current cell since it had a true value
                cells.insert(make_pair(i,j));

				//if countok is false then the true cell is not connected
				if(countOk)
                {
					count++;}
			}
		}
	}

	return  count;
}
