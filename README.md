<h3>How to use</h3>
<ul>
<li>Compile the C profile: gcc -m64 -o libpycall2.so -shared -fPIC demo.c</li>
<li>Run the python profile.</li>
</ul>
<h3>Benchmark</h3>
<br>We use a 21003*2100 numpy array in the experiment, the second time subtracts the first time is the time that ctypes used, and the third time subtracts the second time is the time that Python used</br>
![Example image2](https://github.com/HuiyanWen/ctypes_python_c/blob/master/1.png)
