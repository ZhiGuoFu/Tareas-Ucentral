class ObjetoApp{
	public static void main(String[]args){
		Objeto.variableEstatica=Math.PI;

		Objeto obj1 = new Objeto();
		obj1.setNombre("Animal");
		System.out.println(obj1.getNombre());

		Objeto obj2 = new Objeto("Mesa");
		System.out.println(obj2.getNombre());

		Objeto obj3 = new Objeto(5);
		System.out.println(obj3.getNombre());
	}
}