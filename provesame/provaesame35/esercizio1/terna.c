#include <stdbool.h>

bool is_terna_pitagorica(unsigned int v[3]) {
    if ((v[0] * v[0]) == (v[1] * v[1]) + (v[2] * v[2])) {
        return true;

 }
    if ((v[1] * v[1]) == (v[0] * v[0]) + (v[2] * v[2])) {
        return true;

    }
    if ((v[2] * v[2]) == (v[0] * v[0]) + (v[1] * v[1])) {
        return true;

    }
    return false;
}