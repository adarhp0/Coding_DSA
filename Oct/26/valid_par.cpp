class Solution
{
public:
    bool isValid(string s)
    {
        char b11 = '(', b12 = ')', b21 = '{', b22 = '}', b31 = '[', b32 = ']';
        int f11 = 0, f12 = 0, f21 = 0, f22 = 0, f31 = 0, f32 = 0;
        int fl = 1, n = s.length();

        for (int i = 0; i < n; i++)
        {
            char ch = s[i];
            cout << "ch" << ch << endl;
            if (f11 == 0 && f21 == 0 && f31 == 0)
            { //cout<<f11<<endl;
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
                    else if (ch == b31)
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
                cout << "opem" << endl;
                if (ch == b11 || ch == b21 || ch == b31)
                {
                    fl = 0;
                    cout << "sec";
                    break;
                }
                else
                {
                    if (ch == b12 && f11 == 1)
                    {
                        cout << "1" << endl;
                        fl = 1;
                        f11 = 0;
                        f21 = 0;
                        f31 = 0;
                    }
                    else if (ch == b22 && f21 == 1)
                    {
                        cout << "2" << endl;
                        fl = 1;
                        f11 = 0;
                        f21 = 0;
                        f31 = 0;
                    }
                    else if (ch == b32 && f31 == 1)
                    {
                        cout << "3" << endl;
                        fl = 1;
                        f11 = 0;
                        f21 = 0;
                        f31 = 0;
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