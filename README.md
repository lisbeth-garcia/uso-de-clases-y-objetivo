
# DOCUMENTACIÓN DE LA ACTIVIDAD C2-2

# PARTICIPANTES 👀

- GARCIA LOPEZ LISBETH ESPERANZA
- MEJIA HURTADO PIERINA NAOMI
- ESPINAL MARIN DIANA MONSERRAT
- CAJIAO CASIERRA FERNANDO ALEXANDER
- MERO ALBAN CARLOS ANDRES

# DESCRIPCIÓN DE LAS PARTICIPACIONES🤔✍

# 🎀Garcia Lopez Lisbeth Esperanza🦋
Buen uso del programa GITHUB al momento de realizar la debida creación del repositorio de trabajo e incluir a los distintos colaboradores para la realización de aquella, y así llevar a cabo las solicitudes de extracción, encargada de ingresar los datos personales de una persona la cual seria llamada mediante la funcion creada de mostrar.

# 🌸Mejia Hurtado Pierina Naomi✨
Implemento las variables adecuadas al momento de realizar la parte que le tocaba del trabajo asignado y supo ser explicita en su comentario de modificaciones.

# 🍂Espinal Marin Diana Monserratt🌺
Gran uso de los conocimientos antes adquiridos para la realización de su respectivo trabajo, aplicando una investigación muy clara acerca de los índices corporales de una persona para dar un mensaje de alerta si este resultado sobrepasa el índice normal.

# 🌟Cajiao Casierra Fernando Alexander🌚
Control completo referente al uso de metodos necesarios para realizar un guardado de datos dentro de un archivo txt sin presentar ningún problema dentro del codigo que se realizo.

# 😎Mero Alban Carlos Andres🤎
Utilizo bien su conocimiento previo sobre la programación y llevando a realizar una buena argumentación al momento de realizar las solicitudes de extracción de demodificaciones en el codigo.

# COMPOSICIÓN✍

#Descripcion Del Proyecto
El proyecto cuenta con dos archivos anteriormente dichos (inicio.cpp y 
colaboradores.h)
![](https://raw.githubusercontent.com/luisolis20/prueba/main/bandicam%202021-07-21%2019-34-49-275.jpg)

###El primer archivo (inicio.cpp) cuenta con librerias de varios tipos:
>Una de entrada y salida (iostream), esa es una nuestra libreria estandar. Una que manipula archivos desde el programa (fstream). Una que generaliza cadenas alfanumericas para albergar cadenas de objetos (string). Una que asigna un bloque de tamaño de bytes de memoria (malloc). Una que contiene los prototipos de las funciones, macros, y tipos para utilidades de uso general (stdlib).

Cada una de estas librerias va acompañada por un (#include), ademas se le añade el "using namespace std" para no escribir std en cada linea de cod; tambien se añadio
un "#include" para hacer el llamdado al otro archivo (colaboardores.h)

En en cod lo podemos apreciar de la siguiente manera:
![](https://raw.githubusercontent.com/luisolis20/prueba/main/bandicam%202021-07-21%2019-24-18-464.jpg) 

###Dentro de este archivo (inicio.cpp) tenemos una funcion principal "int main":
Dentro de esta funcion primero  declaramos  variables de tipo entero (int) y de tipo flotante (float) que nos trasladan los datos del otro archivo, ademas se hace el llamado a la clase que se encuentra en el otro archivo (colaboradores.h).
 
>Cuando se hace el llamado a una clase se coloca  primero el nombre de la  clase y luego se coloca un apodo u otro nombre, ejem: "Persona motato;"

![](https://raw.githubusercontent.com/luisolis20/prueba/main/bandicam%202021-07-21%2019-39-47-835.jpg)

Dentro de esta funcion principal luego creamos un menu de inicio que le permitira al usuario escoger una opcion. Cada opcion tiene un proceso:

|*Opcion| **Proceso que realiza*                  |
| ------------- | ------------------------------ |
| 1 | Hace el llamado a la función y a la clase (motato.ingresar)(motato.mostrar), esta opción permite al usuario llenar sus datos personales y luego los muestra     |
| 2   |Hace el llamado a la clase y a la funcion (motato.caledad)(motato.mostraed), esta opción permite al usuario ingresar la fecha actual y luego hacer el cálculo de la edad y mostrarla
| 3 | Hace el llamado a la clase y a la funcion (motato.calimc), esta opción le permite al usuario calcular su índice de masa corporal con su peso y su altura, en caso de que su IMC sea normal se mostrará un mensaje "felicitaciones"
| 4 | Hace el llamado a la clase y a la función (motato.guardar), esta opcion le permite al usuario crear un archivo txt y guardar los datos ingresados.
| 5 |Hace el llamado a la clase y a la función (motato.rym),esta opción permite al usuario recuperar los datos guardados en el archivo txt y mostrarlo por pantalla

![](https://raw.githubusercontent.com/luisolis20/prueba/main/bandicam%202021-07-21%2020-48-53-179.jpg)

###En el segundo archivo (colaboradores.h) se encuentran la clase (class persona) y las funciones.
>En la clase persona se declaran los datos privados, estos datos privados son los que no se pueden ser alterados
![](https://raw.githubusercontent.com/luisolis20/prueba/main/bandicam%202021-07-21%2021-07-52-244.jpg)

###Tambien se declaran datos publicos:
>Dentro de estos datos publicos se hacen las funciones y los procesos para cada una de las opciones del menu.
Ahi se encuentran diversos tipos de funciones cada una de ellas hace un proceso distinto:

*La primera funcion (void ingresar)*: En ella se va ingresar los datos personales y se usa el gentline para ingresar los nombres y apellidos con espacios.
![](https://raw.githubusercontent.com/luisolis20/prueba/main/bandicam%202021-07-21%2021-30-48-922.jpg)

*La segunda función(void mostrar):*En ella se va a mostrar los datos ingresados anteriormente en la primera funcion y utilizamos un \t para poder mostrar los datos en forma de una tabla.

![](https://raw.githubusercontent.com/luisolis20/prueba/main/bandicam%202021-07-21%2021-27-13-551.jpg)
# FUNCIONES IMPLEMENTADAS 😁
- Para comenzar necesecitamos abrir nuestro repositorio de "github", ubicado en la carpeta llamada "inicio.cpp" y copiamos todo el codigo antes editado.
![](https://raw.githubusercontent.com/luisolis20/prueba/main/bandicam%202021-07-22%2020-56-25-096.jpg)

![](https://user-images.githubusercontent.com/86032081/126852099-ed4de22d-cf26-42d8-9a26-de2ebecf15f2.png)


- Una vez que hayamos copiado nuestro codigo tenemos que dirigirnos a nuestro programa "dev-c++" y generamos un nuevo archivo usando la convinacion de "ctrl+n" y con eso pegaremos nuestro codigo de "github".
![](https://raw.githubusercontent.com/luisolis20/prueba/main/bandicam%202021-07-22%2021-14-52-891.jpg)

![](https://user-images.githubusercontent.com/86032081/126849565-840fec19-7775-4ec3-bfa6-0d87775aa6c0.JPG)

- Necesitamos guardar nuestro proceso e irnos al icono de gruardar y se nos abrira una nueva ventana donde colocaremos el nombre del archivo como "inicio.cpp" y damos clic en guardar.
![](https://raw.githubusercontent.com/luisolis20/prueba/main/bandicam%202021-07-22%2021-39-53-866.jpg)

- Regresamos nuevamente a nuestros archivos en "github" y seleccionamos la carpeta de "colaboradores.h" y copiamos todo el codigo que se encuentra almacenado.
![](https://raw.githubusercontent.com/luisolis20/images/main/bandicam%202021-07-22%2020-56-31-173.jpg)
![](https://user-images.githubusercontent.com/86032081/126851128-26e3e298-ffbd-44bb-8a97-f8c9bd72a162.png)

- Abrimos otra vez nuestro programa "dev-c++" y utilizamos el comando "ctrl+n" y se nos abrira una nueva pestaña, una vez ahi pegamos el codigo que copiamos anteriormente y salvamos nuevamente nuestro programa, seleccionando el icono de "guardar" donde se nos abrira la pestaña para poner el nimbre de nuestro archivo y lo titularemos como: "colaboradores.h"
![](https://raw.githubusercontent.com/luisolis20/images/main/bandicam%202021-07-22%2022-03-45-524.jpg)
![](https://raw.githubusercontent.com/luisolis20/images/main/bandicam%202021-07-22%2022-04-28-356.jpg)
![](https://user-images.githubusercontent.com/86032081/126851443-f14bf90a-9caa-4329-a80f-8eca5e93d81b.JPG))

![](https://raw.githubusercontent.com/luisolis20/images/main/bandicam%202021-07-22%2021-39-53-866.jpg)

# EJECUCION DEL PROGRAMA 
El usuario debe darle al botón de compilar y ejecutar para verificar si no hay ningún error.
![](https://i.ibb.co/TbcnX7k/Descarga.png)

Si no hay a la vez inmediatamente se le abrirá un menú que se llama datos personales.
![](https://i.ibb.co/8gQWYj8/IMG-20210722-WA0012.jpg)

1. En el primero punto saldrá “Ingresar sus datos personales” por ende el usuario debe ingresar su datos. 
![](https://i.ibb.co/nQBsyXp/Sin-t-tulo.jpg)

2. Una vez dado sus datos personales el programa como segundo punto mostrará su edad dado que en el primer punto diste tu fecha de nacimiento y el programa te pide la fecha actual la cual resta ambas y da tu edad. 
3. Como tercer punto el programa mostrará tu índice corporal igualmente como diste tus datos personales en el primer punto el programa te va a decir si estás obeso o flaco.
4. El cuarto punto guardará tus datos
5. el último este ayuda a que tú los recuperes, al mismo tiempo lo mostrará por pantalla. 
6. El último punto es salir del programa
