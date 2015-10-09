
/*  Example of wrapping cos function from math.h with the Python-C-API. */

#include <Python.h>
#include <math.h>


/*  wrapped cosine function */
static PyObject* cos_func(PyObject* self, PyObject* args)
{
    double value;
    double answer;

    /*  parse the input, from python float to c double */
    if (!PyArg_ParseTuple(args, "d", &value))
        return NULL;
    /* if the above function returns -1, an appropriate Python exception will
     * have been set, and the function simply returns NULL
     */

    /* call cos from libm */
    answer = cos(value);

    /*  construct the output from cos, from c double to python float */
    return Py_BuildValue("f", answer);
}

/*  define functions in module */
static PyMethodDef CosMethods[] =
{
     {"cos_func", cos_func, METH_VARARGS, "evaluate the cosine"},
     {NULL, NULL, 0, NULL}
};
#if PY_MAJOR_VERSION >= 3
//see http://python3porting.com/cextensions.html for porting
    static struct PyModuleDef moduledef = {
        PyModuleDef_HEAD_INIT,
        "cos_module",     /* m_name */
        "This is a module",  /* m_doc */
        -1,                  /* m_size */
        CosMethods,    /* m_methods */
        NULL,                /* m_reload */
        NULL,                /* m_traverse */
        NULL,                /* m_clear */
        NULL,                /* m_free */
    };
#endif

/* module initialization */
PyMODINIT_FUNC

#if PY_MAJOR_VERSION >= 3
PyInit_cos_module(void){
    return PyModule_Create(&moduledef);
}
#else
initcos_module(void)
{
     (void) Py_InitModule("cos_module", CosMethods);
}
#endif
