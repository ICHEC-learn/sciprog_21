int isMagicSquare(int ** square, const int n) {


    if(n < 0) {
        return 0;
    }

    int M = (n * (n*n + 1))/2;

    int i, j;

    for(i = 0; i < n; i++) {
        int rowSum = 0;
        int colSum = 0;
        for(j = 0; j < n; j++) {
            rowSum += square[i][j];
            colSum += square[j][i];
        }
        if(rowSum != M || colSum != M) {
            return 0;
        }
    }

    int diagSum = 0;
    int secDiagSum = 0;
    for(i = 0; i < n; i++) {
        diagSum += square[i][i];
        secDiagSum += square[i][n-i-1];
    }
    if(diagSum != M || secDiagSum != M) {
        return 0;
    }


    return 1;
}

