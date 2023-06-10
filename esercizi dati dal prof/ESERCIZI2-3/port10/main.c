int max_port10(unsigned int val) {
    for (int i = 1; i > 0; i=10* i) {
        if (val / i > 0) {
            return i;

  }
    }
 }