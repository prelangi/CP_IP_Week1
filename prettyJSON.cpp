vector<string> Solution::prettyJSON(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    vector<string> result;
    if (A.length() == 0) 
        return result;
    
    //remove spaces
    A.erase(remove(A.begin(), A.end(), ' '), A.end());

    string indent = "";
    string curr = "";
    int i = 0, len = A.length();
    
    while (i < len)
    {
        curr.push_back(A[i]);
        switch(A[i])
        {
            case ',':
                result.push_back(curr);
                curr = indent;
                i++;
                break;

            case ':':
                i++;
                if (A[i] == '{' || A[i] == '[')
                {
                    result.push_back(curr);
                    curr = indent;
                }
                break;

            case '{':
            case '[':

                i++;
                result.push_back(curr);
                if (i < len && (A[i] != '}' || A[i] != ']'))
                {
                    indent.push_back('\t');
                }
                curr = indent;
                break;

            case '}':
            case ']':
                i++;
                if (i < len && A[i] == ',') break;
                result.push_back(curr);
                if (i < len && (A[i] == '}' || A[i] == ']'))
                {
                    if (!indent.empty()) indent.pop_back();
                }
                curr = indent;
                break;

            default : 
                i++;
                if (i < len && (A[i] == '}' || A[i] == ']'))
                {
                    result.push_back(curr);
                    if (!indent.empty()) indent.pop_back();
                    curr = indent;
                }
        }
    }
    return result;
}
