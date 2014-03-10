#include <iostream>
#include <string>
using namespace std;

int main() {
        int N;
        cin >> N;
        int R, C;
        string s;
        getline(cin, s);
        for(int i=0; i<N; i++) {
                cin >> R >> C;
                int *zxcv = new int[R*C];
                bool *qwer = new bool[R*C];
                int x = 0, y = 0, dir = 0;
                getline(cin, s);
                for(int j=0; j<R*C; j++) {
                        zxcv[j] = 0;
                        qwer[j] = false;
                }
                for(int j=1, _j = s.length(); j<_j; j++) {
                        for(int q=0; q<5; q++) {
                                int z=0;
                                if(z!=' ') {
                                        z = ((s[j]-'A'+1) & (1<<(4-q))) == 0?0:1;
                                }
                                zxcv[y*C+x] = z;
                                qwer[y*C+x] = true;
                                if(dir==0) {
                                        x++;
                                        if(x==C||qwer[y*C+x]) {
                                                dir++;
                                                x--;
                                                y++;
                                        }
                                } else if(dir==1) {
                                        y++;
                                        if(y==R||qwer[y*C+x]) {
                                                dir++;
                                                y--;
                                                x--;
                                        }
                                } else if(dir==2) {
                                        x--;
                                        if(x<0||qwer[y*C+x]) {
                                                dir++;
                                                x++;
                                                y--;
                                        }
                                } else if(dir==3) {
                                        y--;
                                        if(y<0||qwer[y*C+x]) {
                                                dir=0;
                                                y++;
                                                x++;
                                        }
                                }
                        }
                }
                cout << i+1 << " ";
                for(int j=0; j<R*C; j++) {
                        cout << zxcv[j];
                }
                cout << endl;
                delete [] zxcv;
                delete [] qwer;
        }
}