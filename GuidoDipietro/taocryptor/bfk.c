#include <stdio.h>
#include <ctype.h>

#define THE_GAME_IS_ON
#define p putchar
#define _(_) return(_)
#define main() main(){p(34);_(!x());}bpaul()
#define g(_) (_>=48&&_<=57)
char taoyu[] =
  "+9>3+3>2.1>3+29>11+3>11+3>1+3>4+6>6+7>5+2>4.1>4+28>11+3>2+4>2+5>8+5>7+6>7+1>4.1>4+29>5+12>4+5>10+3>3+10>7+1>4.1" 
  ">6+43>6+4>6+10>2+8>11.2>6+42>3+34>11.2>6+79>11.3>5+79>11.3>2.1>2+79>8+1>3.2>2.1>2+79>3.1>4+1>3.2>1.2>2+79>3.1>4"
  "+1>3.2>1.2>2+79>3.1>4+1>3.2>1.2>2+79>4.1>3+1>2.3>1.2>2+79>4.1>3+1>3.2>1.2>2+79>4.1>3+1>3.2>1.2>2+79>4.1>3+1>3.2"
  ">1.2>2+80>3.1>3+1>4.1>1.2>2+80>3.1>7.2>1.3>1+80>3.1>5.1>1.2>2.2>1+73-1>5+1>3.1>7.2>2.2>1+73-1>2.3+1>3.1>7.2>2.2"
  ">3+71-1>4+2>3.1>11.2>1+2>1+1>1+7>1+14>4+42-1.1>4+1>3.1>11.2>1+2>1+4>3+7.2>1+9>16+28-1.1>4+1>3.1>11.1>2+1>1+1>3+"
  "10.2>1+11>21+22-1.1>2+3>15.1>3+30>20+17>1+1>2+1.2>2+3>15.2>1+32>17+21>1+2.9>13.1>5+63>1+5>1.9>1.1>11.18>1+6>7+3"
  "4>3.1>1+3>2.12>9.11+1>1+1>1+1>1+1>1+4>8.2>1+4>13+16>3+1>2+2>8+1>3.2>9.2>1.10>1.1>3.1+3>9.2>2+3>16+16>1+1>1+1>3+"
  "7>4.1>9.3>1+11>4+3>8.4>1+3>18+13>3+2>3+7>3.2>9.3>2+18>5.1>1.4>1+3>19+11>4+2>1.1>1+7>3.2>9.3>2+11>2+8>6+2>1+3>19"
  "+11>1+2>1+3>1+8>4.1>9.3>2+9>4+6>2+1>6+1>2+2>18+14>2+12>3.2>9.3>2+6>1+1>2+1>3+3>14+2>1.1>16+28>4.1>9.3>2+8>1+3>2"
  "+2>1+4>2.1>2+3>2+2>18+19>1+8>4.1>9.3>2+7>3+1>3+2>7.1>5.1>1+2>12+1>5+28>4.2>8.3>2+8>4-1+3>7.1>4.3+1>1+1>11+2>4+1"
  "5>1+12>17+11>1.2-1>2+1>7.1>4.3+1>6+1>3.1>1+1>2+1>2+29>17+4.1+6>1.2-2>9.2>2.4>6+5>1-4.1>2+30>7+1>10+2.1+6>1.1>1-"
  "1.2>12.3>6+4>1+3-3>1+32>7+1>8.1+3.1+6>2.2-2>7+1>3.1>1.2>1.1+1>2+5>2+2-3>2+30>8+1>6+4>1+1>1+6>2.1-2>14.2>1+3>1+9"
  "-3>2+30>8+1>6+4>2+7>2.1-2>6+3>7+14>3+33>7+1>6+4>2+7>1+4>16+13>2.3+17>1+14>7+1>6+5>1+11>17+12>2.1-1.1-1+18>1+13>"
  "7+1>6+2>1+2>1+12>4+1>10+1>1+11>3.1>1.1+16>1+1>1+13>7+1>5+3>2+14>4+1>10+5>1+4>1+1>1+1>2.1>1.1>8+8>1+1>2+12>7+2>5"
  "+1>3+12>1+1>5+1>11+2>4+1>9.1>8+8>1+1>1+13>15+1>3+1>1+7>1+1>1+1>6+2>23+1>13+5>1+2>1+12>14+2>1+1>1+6>1+2>1+1>1+1>"
  "7+3>36+4>2+1>2+11>14+2>2.1+1>1+4>1+2>1+1>1+2>57+8>17.2>2+4>1+2>1+1>2+1>16.1>41+6>18.2>2+4>1+2>1+1>2+1>15.3+1>2."
  "2>8+1>48.1>1.2>2+4>1+2>1+1>2+1.1>14.3+4>2.3>53.1>1.1>3+11.2>12.2>1.2>1+6>1.4>1.1>48.1>1.1>5+2>1+6.2>15.2>1+7.4>"
  "1.1>56+8.4>13.3-1+8.7>16.1>38+7.5>11.5+8.1-1.9>15.4>30.1>1+7.6>1.14+8>1.1-2.16>4.1>1.2>24.1>7.1+7>1.21>1+8.2-1."
  "21>1.4>22.1>7.1+7>1.21>1+8>1.8>1.2>1.11>1.4>17.4>10+7>1.21>1+8>1.8>1.2>1.16>10.13>3.4>1+7.19-1.3+7>1.29>10.13>3"
  ".4>1+7.19-1.3+7>1.29>9.20>2+7.23+7>1.29>8.20>3+7.23+7>1.29>4.24>4+5>1.4>1.19+6>1.27>5.4>1.20>4+5>1.3>2.19+6>1.2"
  "6>3.7>1.19>5+5>1.3>2.19+6>1.24>1.1>3.8>2.17>5+5>1.4>2.18+6.25>1.1>3.8>2.16>6+5>1.3>3.18+6>1.26>4.2>6.17>7+4>1.2"
  ">4.4>1.1>1.11+6>1.26>2.1>9.16>8+4>7.4>1+1>2.10+6>2.28>9.1>1.14>1.1>6+4>6.8>1.3>1.6>1+4>3.28>9.1>1.14>1.2>5+4>7."
  "5>4.2>1.7+4>3.28>9.18>7+3>7.5>4.2>1.7+4>4.27>7.20>7+3>7.5>5.4>1.4+4>4.27>4.1>1.22>6+4>6.5>5.4>2.3+4>4.28>3.1>1."
  "23>5+4>6.5>5.5>1.3+4>4.27>3.4>1.21>5+4>6.5>6.2>1.1>3.1>1+4>5.25>3.4>1.21>5+4>6.5>6.2>1.1>3.1>1+4>5.25>1.1>1.1>3"
  ".22>4+5>6.4>7.4>5+4>5.25>1.1>1.2>1.23>4+4>7.4>3.1>3.4>5+4>5.25>5.2>1.21>5+3>7.3>5+1>2.4>5+4>5.26>1.27>5+3>7.2>1"
  "+1>1+3>4.3>5+4>5.54>5+4>5.3>1+2.1+3>3.3>4.1+2>1+1>5.54>5+2.1+1>6.3>1+1.1+3>4.2>6+3>5.54>5+2.1>7.3>1+1>2+2>4.3>5"
  "+2>6.25>1.28>5+2.1>7.3>2+1>1+1>5.3>5+2>6.54>5+2.1>7.2>12.3>3+3>6.41>2.11>5+2.1>7.3>7+1>3.3>3+3>6.26>1.27>5+2>2+"
  "1>6.1+1.2>10.4>1+3>2+1>3.53>6+2>8.2>1.3>3.1>5.4>1+4>6.24>2.26>5+3>8.1>1.2>1.1>2.1>6.2>3+4>6.25>1.26>5+3>7.1>1.1"
  ">1.1>1.1>1.1>7.3>3+3>6.52>5+3>7.1>1.5>6+2>7+3>6.30>1.5>1.15>5+2>8.3>1.1>9+1>7+3>6.24>1.2>3.22>5+2>15.1>15+2>6.24";

char* tao = taoyu;
t,a,o,y,u;

  x(){for
  (;*tao;
  tao++){
  t!='`'?
  :(tao--
  ,'`');t
  =g(*tao

        )?( /* eat my seeds */

           '`'
            ):( /*o no the seeds not again*/

                        a=*tao);
                        for(o^=o
                        ;g(*tao)       ;tao++){
                        o*=1+9;o       +=(*tao-          '0');}
                        for(;o;o       =~-o)p(a          );}p(
                                                         34);_
                                                         (a);}

main() {

    printf("For Bpaul, by Tao");
    return THE_GAME_IS_ON;

}