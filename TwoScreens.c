#include <stdio.h>
#include <string.h>
int longest_common_prefix(char *s, char *t)
{
    int lcp = 0;
    while (s[lcp] && t[lcp] && s[lcp] == t[lcp])
    {
        lcp++;
    }
    return lcp;
}

int main()
{
    int q;
    scanf("%d", &q);

    while (q--)
    {
        char s[101], t[101];
        scanf("%s %s", s, t);

        int lcp = longest_common_prefix(s, t);
        int s_len = strlen(s);
        int t_len = strlen(t);

        int result;
        if (lcp == 0)
        {
            result = s_len + t_len;
        }
        else
        {
            result = lcp + 1 + (s_len - lcp) + (t_len - lcp);
        }

        printf("%d\n", result);
    }

    return 0;
}
