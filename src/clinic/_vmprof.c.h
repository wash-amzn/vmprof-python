/*[clinic input]
preserve
[clinic start generated code]*/

PyDoc_STRVAR(_vmprof_enable__doc__,
"enable($module, /, fd, interval, memory=0, lines=0)\n"
"--\n"
"\n"
"Enable profiling");

#define _VMPROF_ENABLE_METHODDEF    \
    {"enable", (PyCFunction)_vmprof_enable, METH_FASTCALL, _vmprof_enable__doc__},

static PyObject *
_vmprof_enable_impl(PyObject *module, int fd, double interval, int memory,
                    int lines);

static PyObject *
_vmprof_enable(PyObject *module, PyObject **args, Py_ssize_t nargs, PyObject *kwnames)
{
    PyObject *return_value = NULL;
    static const char * const _keywords[] = {"fd", "interval", "memory", "lines", NULL};
    static _PyArg_Parser _parser = {"id|ii:enable", _keywords, 0};
    int fd;
    double interval;
    int memory = 0;
    int lines = 0;

    if (!_PyArg_ParseStack(args, nargs, kwnames, &_parser,
        &fd, &interval, &memory, &lines)) {
        goto exit;
    }
    return_value = _vmprof_enable_impl(module, fd, interval, memory, lines);

exit:
    return return_value;
}

PyDoc_STRVAR(_vmprof_disable__doc__,
"disable($module, /)\n"
"--\n"
"\n"
"Disable profiling");

#define _VMPROF_DISABLE_METHODDEF    \
    {"disable", (PyCFunction)_vmprof_disable, METH_NOARGS, _vmprof_disable__doc__},

static PyObject *
_vmprof_disable_impl(PyObject *module);

static PyObject *
_vmprof_disable(PyObject *module, PyObject *Py_UNUSED(ignored))
{
    return _vmprof_disable_impl(module);
}

PyDoc_STRVAR(_vmprof_write_all_code_objects__doc__,
"write_all_code_objects($module, /)\n"
"--\n"
"\n"
"Write eagerly all the IDs of code objects");

#define _VMPROF_WRITE_ALL_CODE_OBJECTS_METHODDEF    \
    {"write_all_code_objects", (PyCFunction)_vmprof_write_all_code_objects, METH_NOARGS, _vmprof_write_all_code_objects__doc__},

static PyObject *
_vmprof_write_all_code_objects_impl(PyObject *module);

static PyObject *
_vmprof_write_all_code_objects(PyObject *module, PyObject *Py_UNUSED(ignored))
{
    return _vmprof_write_all_code_objects_impl(module);
}

PyDoc_STRVAR(_vmprof_sample_stack_now__doc__,
"sample_stack_now($module, /)\n"
"--\n"
"\n"
"Sample the current stack trace of the Python process.");

#define _VMPROF_SAMPLE_STACK_NOW_METHODDEF    \
    {"sample_stack_now", (PyCFunction)_vmprof_sample_stack_now, METH_NOARGS, _vmprof_sample_stack_now__doc__},

static PyObject *
_vmprof_sample_stack_now_impl(PyObject *module);

static PyObject *
_vmprof_sample_stack_now(PyObject *module, PyObject *Py_UNUSED(ignored))
{
    return _vmprof_sample_stack_now_impl(module);
}

PyDoc_STRVAR(_vmprof_testing_enable__doc__,
"testing_enable($module, /)\n"
"--\n"
"\n"
"Setup the library specifically for testing.");

#define _VMPROF_TESTING_ENABLE_METHODDEF    \
    {"testing_enable", (PyCFunction)_vmprof_testing_enable, METH_NOARGS, _vmprof_testing_enable__doc__},

static PyObject *
_vmprof_testing_enable_impl(PyObject *module);

static PyObject *
_vmprof_testing_enable(PyObject *module, PyObject *Py_UNUSED(ignored))
{
    return _vmprof_testing_enable_impl(module);
}

PyDoc_STRVAR(_vmprof_testing_disable__doc__,
"testing_disable($module, /)\n"
"--\n"
"\n"
"Tear down the library after testing has been completed");

#define _VMPROF_TESTING_DISABLE_METHODDEF    \
    {"testing_disable", (PyCFunction)_vmprof_testing_disable, METH_NOARGS, _vmprof_testing_disable__doc__},

static PyObject *
_vmprof_testing_disable_impl(PyObject *module);

static PyObject *
_vmprof_testing_disable(PyObject *module, PyObject *Py_UNUSED(ignored))
{
    return _vmprof_testing_disable_impl(module);
}
/*[clinic end generated code: output=ca4916bff9a9b121 input=a9049054013a1b77]*/