ld bisection()
{
    ld lo = 0, hi = 1;
    while (lo + EPS < hi)
    {
        ld x = (lo + hi) / 2;
        if (fun(lo) * fun(x) <= 0)
        {
            hi = x;
        }
        else
        {
            lo = x;
        }
    }
    return (lo + hi) / 2;
}
