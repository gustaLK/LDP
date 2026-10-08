int valid (int *seq, char *resp, int fim){
    int i;

    for(i=0; i<fim; i++){
        if(*(seq+i) != *(resp+i)-'0')
            return 1;
    }

    return 0;
}
