bool isCircle(char* movesCircle) {
    int movex,movey,i,m;
    movex=movey=i=0;
    m=strlen(movesCircle);
   
    for (i = 0; i < m; i++){
         if(movesCircle[i] == 'U'){
             movex++;
         }
        if(movesCircle[i] == 'D'){
             movex--;
         }
        if(movesCircle[i] == 'L'){
             movey++;
         }
        if(movesCircle[i] == 'R'){
             movey--;
         }
    }
    
    if(movex == 0 && movey==0){
        return true;
    }
    return false;
    
}