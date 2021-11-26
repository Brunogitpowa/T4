##### TO DO 1 parte #####
Hemos creado el programa Hola mundo y compilado.    
- gcc hola.c -     
En este caso nos crea un archivo llamado a.out que es el executable.      
Por defecto nos lo crea con este nombre pero podemos cambiar el nombre compilandolo con este otro comando.    
- gcc hola.c -o hola - De esta manera nos crea el ejecutable de antes pero con el nombre hola mas facil de identificar.     
Gcc tambien tiene la opcion de de usarlo añadiendo un -Wall y  -g para que muestre todos los Warnings durante la compilacion.      

##### TO DO 2 parte #####        
Creamos y compilamos el programa calculadora. En este caso directamente lo hacemos directamente con -o para que nos alga ya con el nombre que deseamos.       
- gcc calculadora.c -o calculadora -      
Y lo ejecutamos para ver que todo esta correcto.     
- ./calculadora -    
Modificamos el programa para que ademas nos indice cual es major añadiendo la funcion major.      

##### TO DO 3 parte #####

Creamos el fichero make y introducimos los objetivos.      
una vez introducidos las tareas ejecutamos en la consola.    
- make calcula - y automaticamente deveria ejecutar las dos instrucciones que consistiria en compilar.    
Lo que conseguimos con Makefile es que con "calc.h" que son las cabeceras "calc.c" las funciones y "calcula.c" que vendrian ha ser las operaciones en este caso.     
Daremos a Make la orden de ejecutar los comandos para conseguir la compilacion completa con un solo paso.


