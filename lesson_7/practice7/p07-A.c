#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#define ll long long
#define N 100001
#define Deint(x) printf(#x" = %d\n", x)
#define Dell(x) printf(#x" = %lld\n", x)
#define Delf(x) printf(#x" = %lf\n", x)
#define Deull(x) printf(#x" = %llu\n", x)
#define Destr(x) printf(#x" = %s\n", x)
#define Deint(x) printf(#x" = %d\n", x)
#define Dechar(x) printf(#x" = %c\n", x)
#define De printf("debug\n")
#define loop(l,r) for(int i = l; i <= r; i++)
double eps = 1e-9;
char poem[][105] = {
    "Do not go gentle into that good night,",
    "Old age should burn and rave at close of day;",
    "Rage, rage against the dying of the light.",
    "Though wise men at their end know dark is right,",
    "Because their words had forked no lightning they",
    "Do not go gentle into that good night.",
    "Good men, the last wave by, crying how bright",
    "Their frail deeds might have danced in a green bay,",
    "Rage, rage against the dying of the light.",
    "Wild men who caught and sang the sun in flight,",
    "And learn, too late, they grieved it on its way,",
    "Do not go gentle into that good night.",
    "Grave men, near death, who see with blinding sight",
    "Blind eyes could blaze like meteors and be gay,",
    "Rage, rage against the dying of the light.",
    "And you, my father, there on the sad height,",
    "Curse, bless me now with your fierce tears, I pray.",
    "Do not go gentle into that good night.",
    "Rage, rage against the dying of the light."
};
int main()
{
    int n;
    while(~scanf("%d", &n))
    {
        puts(poem[n-1]);
    }
    return 0;
}