#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> s;
    n = s.size();
    // cout<<n<<endl;
    int cons = 1;
    int diff=1;
    for (int i = 1; i < n; i++)
    {

        if (s[i] == s[i - 1]){
            cons++;
        }


        else if (s[i] != s[i - 1])
        {
            diff++;
            if (cons == 1)
                continue;
            if ((cons % 2) != 0)
            {
                for (int j = cons - 1; j > 0; j = j - 2)
                {
                    s[i - j] = s[i];
                }
            }
            else
            {
                if (s[i] != s[i - cons - 1])
                {
                    for (int j = cons; j > 0; j = j - 2)
                    {
                        s[i - j] = s[i];
                    }
                }
                else
                {
                    for (int j = cons; j > 0; j = j - 2)
                    {
                        if (j == cons && (s[i-j]+1)!=s[i])
                        {
                            s[i - j] = s[i - j] + 1;
                        }
                        else if (j == cons && (s[i-j]+1)==s[i]){
                            s[i-j]=s[i-j]+2;
                        }
                        else
                        {
                            s[i - j] = s[i];
                        }
                        // cout<<s[i-j]<<endl;
                    }
                }
            }
            cons = 1;
        }
         if(i==n-1 && cons>1 && diff>1){
            // cout<<"hello"<<endl;
            for(int j=2;j<=(cons);j=j+2){
                s[i-cons+j]=s[i-cons];
            }
        }else if(diff==1 && i==n-1){
            for(int j=1;j<n;j=j+2){
                s[j]=s[j]+1;
            }
        }
        
        //  cout << s << endl;
    }
    cout << s;
    return 0;
}