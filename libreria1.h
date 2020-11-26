using namespace std;

struct lacteos{
  string nombre1;
  string clase1;
  string distribuidora1;
  float cantidad1;
  float precio1;
  float referencia1; 
};

struct carnes{
  string nombre2;
  string tipo2;
  string distribuidora2;
  float cantidad2;
  float precio2;
  float referencia2;
  float precio_libra;
  void precioporlibra(float precio2){precio_libra=precio2/cantidad2;};
};

struct dulces{
  string nombre3;
  string tipo3;
  string distribuidora3;
  float cantidad3;
  float precio3;
  float referencia3;
  float precio_unidad;
  void preciounidad(float precio3){precio_unidad=precio3/cantidad3;};
};

struct bebidas{
  string nombre4;
  string tipo4;
  string distribuidora4;
  float cantidad4;
  float precio4;
  float referencia4;
  float preciouni_bebida;
  void preciounibebida(float precio4){preciouni_bebida=precio4/cantidad4;};
};

