.PHONY: clean doxygen

CXX=g++
RM=rm

# receita para gerar o binário final 
Vec3_testar: Vec3.o Vec3_testar.o
	$(CXX) Vec3_testar.o Vec3.o -o Vec3_testar

# receita para gerar o (arquivo objeto) Vec3.o
Vec3.o: Vec3.cc Vec3.h
	$(CXX) -o Vec3.o -c Vec3.cc

# receita para gerar o (arquivo objeto) Vec3_testar.o
Vec3_testar.o: Vec3_testar.cc Vec3.h
	$(CXX) -o Vec3_testar.o -c Vec3_testar.cc

# receita para apagar arquivos (geralmente são arquivos gerados
# no processo de desenvolvimento)
clean:
	$(RM) -f Vec3_testar
	$(RM) -f Vec3.o
	$(RM) -f Vec3_testar.o

# receita para gerar a documentação, o arquivo Doxyfile está
# configurado para gerar um diretório chamado docs
doc:
	doxygen

# receita para apagar o conteúdo do diretório de documentação
cleandoc:
	$(RM) -fR docs
