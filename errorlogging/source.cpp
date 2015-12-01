#include"filelog.h"
#include<iostream>

using namespace std;

int main() {
filelog log("test");
if (log.bad()) {
cout << "There was an error writing to the file" << endl;
system("pause");
}
log.info("Passed the line \"Filelog log(\"test\")\"");
log.warning("The program is almost done executing");
log.error("The program is now finished");


}


