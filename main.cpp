/* Victor Martinez's Star Matrix! */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
        int rowInput;
        int colInput;
        vector <vector <char> > stars;
        cout<<"Enter rows and columns of stars"<<endl;
        cin>>rowInput;
        cin>>colInput;
        if(rowInput <= 0 || colInput <= 0)
        {
            return 0;
        }
        //Initialize the number of rows
        stars.resize(rowInput);
        //Creates the Star Matrix
        for(int r = 0; r < stars.size(); r++)
        {
            stars[r].resize(colInput);
                for(int c = 0;c < stars[r].size(); c++)
                {
                    stars[r][c] = '*';
                    cout<<stars[r][c];
                }
            cout<<endl;
        }




        return 0;
}
