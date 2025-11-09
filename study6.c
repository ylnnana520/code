#include <stdio.h>
#include <stdlib.h>
FILE *stream;
int main( void ) {
    int i = 10;
    double fp = 1.5;
    char s[] = "this is a string";
    char c = '\n';
    FILE *fid = fopen( "D:\\新建文件夹 (4)\\fprintf.out", "w" );
    fprintf( fid, "%s%c", s, c );
    fprintf( fid, "%d\n", i );
    fprintf( fid, "%f\n", fp );
    fclose( fid );
    system( "type D:\\新建文件夹 (4)\\fprintf.out" );
    return 0;
}