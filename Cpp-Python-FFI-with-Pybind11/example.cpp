#include <pybind11/pybind11.h>
namespace py = pybind11;
PYBIND11_MODULE(example, m) {
    m.def("add", [](int a, int b){ return a + b; });
}
