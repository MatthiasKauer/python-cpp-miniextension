import cos_module
print("calling Python extension cos_module", cos_module.cos_func(1.0))

import cswig_cos.cswig_cos as cswig
print(cswig.cos_func(0.0))
