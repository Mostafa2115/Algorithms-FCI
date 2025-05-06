int n;
    cin >> n;
    int arr[n];
    int maxx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > maxx)
            maxx = arr[i];
    }
    int freq[maxx + 1]{0};
    for (int i = 0; i < n; i++)
        freq[arr[i]]++;
    for (int i = 1; i <= maxx; i++)
        freq[i] += freq[i - 1];
    int new_arr[n];
    for (int i = n - 1; i >= 0; i--)
    {
        new_arr[freq[arr[i]] - 1] = arr[i];
        freq[arr[i]]--;
    }
    for (int i = 0; i < n; i++)
        cout << new_arr[i] << " ";
