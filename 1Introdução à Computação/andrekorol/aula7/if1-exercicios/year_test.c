#include <stdio.h>
#include <time.h>

// int year(void){
//     time_t now;
//     if ( time(&now) != (time_t)(-1) ) {
//         struct tm *mytime = localtime(&now);
//         if (mytime) {
//             char year[5];
//             if ( strftime(year, sizeof year, "%Y", mytime) ) {
//                 return time;
//             }
//         }
//     }
// }


int main(int argc, char const *argv[]) {
    int idade;
    while (idade < 18) {
        printf("Entre a idade: \n");
        scanf(" %d", &idade);
    }
    printf("%d anos\n", idade);
    time_t rawtime;
    struct tm *timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    int current_year = 1900 + timeinfo->tm_year;
    printf("%d\n", current_year);
    printf("%f\n", 10.0 / 100.0);
    return 0;
}
