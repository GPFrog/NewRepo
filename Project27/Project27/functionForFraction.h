#pragma once

void reduce(int &numer, int &denom)
{
	int cnt = 1;
	while (cnt <= numer)
	{
		if (numer % cnt == 0 && denom % cnt == 0)
		{
			numer = numer / cnt;
			denom = denom / cnt;
			cnt = 1;
		}
		cnt++;
	}
}
