#include <iostream>
#include <mysql.h>

using namespace std;

int main() {

    MYSQL *conn = mysql_init(NULL);

    if(conn == NULL){
        cout << "Error al inicializar MySQL" << endl;
        system("pause");
        return 1;
    }

    MYSQL *resultado = mysql_real_connect(
        conn,
        "localhost",
        "root",
        "",
        "banca",
        3306,
        NULL,
        0
    );

    if(resultado){
        cout << "Conexion exitosa" << endl;
    }
    else{
        cout << "Error de conexion: "
             << mysql_error(conn) << endl;
    }

    mysql_close(conn);

    system("pause");
    return 0;
}