class Solution
{
public:
    bool isValid(string s)
    {
        char b11 = '(', b12 = ')', b21 = '{', b22 = '}', b31 = '[', b32 = ']';
        int f11 = 0, f12 = 0, f21 = 0, f22 = 0, f31 = 0, f32 = 0;
        int fl = 1, n = s.length();

        for (int i = 0; i < n - 1; i++)
        {
            char ch = s[i];
            //cout<<"ch"<<ch<<endl;
            if (f11 == 0 || f21 == 0 || f31 == 0)
            {
                if (ch == b11 || ch == b21 || ch == b31)
                {
                    if (ch == b11)
                    {
                        f11 = 1;
                    }
                    else if (ch == b21)
                    {
                        f21 = 1;
                    }
                    {
                        f31 = 1;
                    }
                }
                else
                {
                    fl = 0;
                    cout << "fir";
                    break;
                }
            }
            else
            {
                if (ch == b11 || ch == b21 || ch == b31)
                {
                    fl = 0;
                    cout << "sec";
                    break;
                }
                else
                {
                    if (ch == b12 and f11 == 1)
                    {
                        fl = 1;
                    }
                    else if (ch == b22 and f21 == 1)
                    {
                        fl = 1;
                    }
                    else if (ch == b32 and f31 == 1)
                    {
                        fl = 1;
                    }
                    else
                    {
                        fl = 0;
                        cout << "thi";
                        break;
                    }
                }
            }
        }
        if (fl == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};