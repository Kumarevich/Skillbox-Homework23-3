#include <iostream>

#define SUMMER

#if defined SUMMER
int main() {
    std::cout << "SUMMER";
    return 0;
}
#endif

#if defined AUTUMN
int main() {
    std::cout << "AUTUMN";
    return 0;
}
#endif

#if defined WINTER
int main() {
    std::cout << "WINTER";
    return 0;
}
#endif

#if defined SPRING
int main() {
    std::cout << "SPRING";
    return 0;
}
#endif