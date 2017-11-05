#include <iostream>
#include <memory>
#include <uv.h>

using std::cout;
using std::endl;
using std::make_unique;
using std::unique_ptr;

int main() {
    unique_ptr<uv_loop_t> loop = make_unique<uv_loop_t>();
    uv_loop_init(loop.get());

    cout << "Now quitting." << endl;
    uv_run(loop.get(), UV_RUN_DEFAULT);

    uv_loop_close(loop.get());

    return 0;
}
