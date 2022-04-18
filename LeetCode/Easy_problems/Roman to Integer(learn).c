int romanToInt(char * s){
    //int len = strlen( s );
    
    //int *keyList = calloc( 0, sizeof(int)*('X'+1) );
    //int *keyList = malloc( sizeof(int)*('X'+1) );
    //memset( keyList, 0, sizeof(int)*('X'+1) );
    int keyList[ 'X' + 1] = { 0 };
    
    keyList[ 'I' ] = 1;
    keyList[ 'V' ] = 5;
    keyList[ 'X' ] = 10;
    keyList[ 'L' ] = 50;
    keyList[ 'C' ] = 100;
    keyList[ 'D' ] = 500;
    keyList[ 'M' ] = 1000;
    
    int result = 0;
    
    for( int i = 0; s[i] != '\0'; i++ )
    {
        if( keyList[ s[ i ] ] < keyList[ s[ i + 1 ] ] )
        {
            result-=keyList[ s[ i ] ];
        }else
        {
            result+=keyList[ s[ i ] ];
        }
    }
    
    return result;
}
