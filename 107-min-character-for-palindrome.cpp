
int minCharsforPalindrome(string str)
{
    int n = str.size();
    int i = 0;
    int j =( n - 1);
    int count2 = 0;
    int temp = j;
    in ptr =0;
    while (i < j)
    {
        if (str[i] == str[j])
        {
            i++;
            j--;
        }

        else
        {

            temp--;
            j = temp;
            count2++;
            ptr++;
            i = 0;
        }
    }

    return count2;
}
