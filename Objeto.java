class Objeto{
	//variable de la clase
	public static Double variableEstatica;

	//atributos
	private String nombre;

	//metodo constructor
	Objeto(){
		this.nombre="";
		//this.nombre=new String();
	}

	Objeto(String nombre){
		this.nombre=nombre;
	}

	Objeto(int n){
		this.nombre=String.valueOf (n) ;
	}

	

	//metodos
	public void setNombre(String nombre){
		this.nombre=nombre;
	}
	
	public String getNombre(){
		return nombre;
	}

}