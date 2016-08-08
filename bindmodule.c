#include <Python.h>

static PyObject* bind_wait(PyObject* self)
{
    Py_RETURN_NONE;
}

static char bind_wait_docs[] = "None\n";

static PyMethodDef bind_methods[] = {
    {"bind_wait", (PyCFunction)bind_wait, METH_NOARGS, bind_wait_docs},
    { NULL, NULL, 0, NULL }
};

PyMODINIT_FUNC initbind(void)
{
    (void)Py_InitModule("bind_wait", bind_methods);
}