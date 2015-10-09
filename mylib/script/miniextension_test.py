import cos_module
import mylib.cswig_cos.cswig_cos as cswig
import mylib.cppswig_factorial.fact as cppfact


def main():
    print("calling Python extension cos_module", cos_module.cos_func(1.0))
    print("Callign C swig module: ", cswig.cos_func(0.0))
    print("Calling C++11 swig module: ", cppfact.factorial(8))
