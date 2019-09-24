using namespace std;

class tools{
	private:
		string nome;
		int codigo;
	public:
		tools();
		tools(string nome,int codigo);
		~tools();
};

tools::tools(){
	
}

tools::tools(string nome, int codigo){
	this->nome = nome;
	this->codigo = codigo;
}

tools::~tools(){
	
}
