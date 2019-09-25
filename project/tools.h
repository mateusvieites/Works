using namespace std;

class tools{
	private:
		string nome;
		int codigo;
	public:
		tools();
		tools(string nome,int codigo);
		~tools();
		gravar(string nome, int codigo);
		excluir(int id);
		consultarDados();
};

tools::tools(){
	
}

tools::tools(string nome, int codigo){
	this->nome = nome;
	this->codigo = codigo;
}

tools::~tools(){
	
}

void tools::gravar(string nome, int codigo){
	
}

void tools::excluir(int id){
	
}

void tools::colsultarDados(){
	
}
