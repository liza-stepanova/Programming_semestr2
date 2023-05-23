#include "Templates/Array.h"
#include "Templates/Min.h"
#include "string"

int main() {
    cout << Templates::Min(6, 4) << " ";

    Templates::Array<string> annn{3, "kksnd"};
    annn.push("dhhsh");
    annn.push("hdujjsk");
    cout << annn.getValue(2) << "\n";
    annn.print();

    return 0;
}
