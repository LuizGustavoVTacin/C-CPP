# Anotações extras de C

## Configurando o VSCode para compilar bibliotecas em C

### Biblioteca `math.h`

1. Abrir `tasks.json`
2. Adicionar o parâmetro `-lm` no campo `args`
3. Abrir `launch.json`
4. Adicionar `Compile arquivo.c` no preLaunchTask 