#include "header.h"

vector<int> vecRev(vector<int> vec1)
{
    vector<int> ans(vec1.size());
    for (int i = vec1.size(); i > 0; i--)
        ans.insert(ans.begin(), vec1[i]);
    return ans;
}
