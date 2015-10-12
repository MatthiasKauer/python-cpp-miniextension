import cos_module
import mylib.cswig_cos.cswig_cos as cswig
import mylib.cppswig_factorial.fact as cppfact
import mylib.cppswig_stack.mystack as cppmystack

def main():
    print("calling Python extension cos_module", cos_module.cos_func(1.0))
    print("Callign C swig module: ", cswig.cos_func(0.0))
    print("Calling C++11 swig module: ", cppfact.factorial(8))

    print("Callign C++ (not 11!!) swig module: ")
    ms = cppmystack.intMystack();
    for i in range(7):
        ms.put(i)
    ms.print_stack()
