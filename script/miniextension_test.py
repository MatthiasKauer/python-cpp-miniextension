import cos_module
import cswig_cos.cswig_cos as cswig
import cppswig_factorial.ccpswig_factorial as cppfact


def main():
    print("calling Python extension cos_module", cos_module.cos_func(1.0))
    print(cswig.cos_func(0.0))
    print(cppfact.factorial(8)
