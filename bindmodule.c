#include <Python.h>

static PyObject* x_wait(PyObject* self)
{
    Py_RETURN_NONE;
}

static PyObject* first_n(PyObject* self, PyObject* args)
{
    int n;

    if (!PyArg_ParseTuple(args, "i", &n))
        return NULL;

    long sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += i;
    }

    return Py_BuildValue("i", sum);
}

static PyMethodDef bind_methods[] = {
    {"x_wait", (PyCFunction)x_wait, METH_NOARGS, "None"},
    {"first_n", (PyCFunction)first_n, METH_VARARGS, "None"},
    { NULL, NULL, 0, NULL }
};

PyMODINIT_FUNC initbind(void)
{
    (void)Py_InitModule("bind", bind_methods);
}