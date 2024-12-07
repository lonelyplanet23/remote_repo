long long fastPower(long long base, long long power, long long mod)
{
    long long result = 1;
    while(power > 0)
    {
        if(power & 1)
        {
            result = result * base % mod;
        }
        power >>= 1;
        base = (base * base) % mod;
    }
    return result;
}
int gcd(int a,int b)
{
    return b == 0 ? a : gcd(b, a % b);
}