bool isPalindrome(int x)
{
    long long result = 0;
    int r, q;

    if (x < 0)
        return false;

    q = x;

    while (q != 0)
    {
        r = q % 10;
        result = result * 10 + r;
        q = q / 10;
    }

    return result == x;
}
