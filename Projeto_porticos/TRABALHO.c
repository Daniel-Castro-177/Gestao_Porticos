#include <stdio.h>
#include <string.h>
#include <datetimeapi.h>
struct Portico
{
    // int num;
    float preco_ligeiro;
    float preco_pesado;
    float preco_motociclo;
};

struct Passagem
{
    int num_portico;
    char classe[30];
    char matricula[30];
    char data[30];
    char hora[30];
};
struct Portico portico[20];
struct Passagem passagem[20];

void adicionar_portico_0();
void mostrar_info_1();
void mostrar_info_2();
void alterar_3();
void adicionar_passagem_4();
void listar_passagens_5();
void listar_passagens_6();
void pesquisar_matricula_7();
void mostrar_n_veiculos_13();
void media_porticos_15();
void menu();
void voltar_menu();
void total_por_portico_8();
void portico_com_mais_passagens_14();
void total_gasto_por_classe_10();
void total_portico_dia_12();

void mostrar_info_1()
{

    for (int i = 0; i < 20; i++)
    {
        if (portico[i].preco_ligeiro != 0.00)
        {

            printf("***Pórtico número: %d \n", i + 1);
            printf("  *Preço Ligeiro: %0.2f"
                   "€ \n",
                   portico[i].preco_ligeiro);
            printf("  *Preço Motociclo: %0.2f"
                   "€ \n",
                   portico[i].preco_motociclo);
            printf("  *Preço Pesado: %0.2f"
                   "€ \n",
                   portico[i].preco_pesado);
            printf("\n");
            printf("\n");
        }
    }
    voltar_menu();
}

void menu()
{

    int opc;
    printf("------------------------------MENU------------------------------- \n");
    printf("0- Adicionar um pórtico \n");                                            // FEITO
    printf("1- Mostrar todas as informações dos pórticos \n");                       // FEITO I
    printf("2- Preço de um pórtico por classe de veículo \n");                       // FEITO I
    printf("3- Alterar os preços de um determinado pórtico \n");                     // FEITO I
    printf("4- Inserir a passagem de um veículo \n");                                // FEITO
    printf("5- Mostrar todas as passagens de todos os veículos \n");                 // FEITO
    printf("6- Mostrar as passagens num determinado pórtico \n");                    // FEITO
    printf("7- Listar todas as passagens de um veículo num determinado pórtico \n"); // FEITO
    printf("8- Mostrar o total armazenado por pórtico \n");                          // FEITO
    printf("9- Mostrar o total gasto por veículo em todos os pórticos ao longo dos tempos \n");
    printf("10- Mostrar o total gasto por uma determinada classe de veículos \n"); // FEITO
    printf("11- Mostrar, para cada classe de veículos, o total de veículos que passaram num determinado pórtico \n");
    printf("12- Mostrar o total que um pórtico faturou num dia \n");                  // FEITO
    printf("13- Mostrar o número de veiculos que passou em cada um dos pórticos \n"); // FEITO
    printf("14- Mostrar o pórtico com mais passagens \n");                            // FEITO
    printf("15- Mostrar a média de passagens nos pórticos \n");                       // FEITO
    printf("Selecione a opção \n");

    //  printf("--------------------MENU PRINCIPAL--------------------");
    //   printf("1- Guardar dados \n");
    // printf("2- Editar \n");
    // printf("3- Listar \n");
    // printf("4- Pesquisar \n");

    scanf("%d", &opc);

    /*   switch (opc)
      {
      case 1:
          guardar_dados();
          break;
      case 2:
          editar();
          break;
      case 3:
          listar();
          break;
      case 4:
          pesquisar();
          break;
      default:
          break;
      }*/

    switch (opc)
    {
    case 0:
        adicionar_portico_0();
        break;
    case 1:
        mostrar_info_1();
        break;
    case 2:
        mostrar_info_2();
        break;
    case 3:
        alterar_3();
        break;
    case 4:
        adicionar_passagem_4();
        break;
    case 5:
        listar_passagens_5();
        break;
    case 6:
        listar_passagens_6();
        break;
    case 7:
        pesquisar_matricula_7();
        break;
    case 8:
        total_por_portico_8();
        break;
    case 10:
        total_gasto_por_classe_10();
        break;
    case 12:
        total_portico_dia_12();
        break;
    case 13:
        mostrar_n_veiculos_13();
        break;
    case 14:
        portico_com_mais_passagens_14();
        break;
    case 15:
        media_porticos_15();
        break;
    default:
        break;
    }
}

int main()

{

    portico[0].preco_ligeiro = 0.30;
    portico[0].preco_motociclo = 0.20;
    portico[0].preco_pesado = 0.50;

    portico[1].preco_ligeiro = 0.25;
    portico[1].preco_motociclo = 0.10;
    portico[1].preco_pesado = 0.30;

    /*    portico[2].preco_ligeiro = 0.40;
       portico[2].preco_motociclo = 0.30;
       portico[2].preco_pesado = 1.00;

       portico[3].preco_ligeiro = 0.05;
       portico[3].preco_motociclo = 0.10;
       portico[3].preco_pesado = 0.25; */

    passagem[0].num_portico = 1;
    strcpy(passagem[0].classe, "pesado");
    strcpy(passagem[0].matricula, "AA-00-AA");
    strcpy(passagem[0].data, "31/12/2023");
    strcpy(passagem[0].hora, "17:00");

    passagem[1].num_portico = 1;
    strcpy(passagem[1].classe, "ligeiro");
    strcpy(passagem[1].matricula, "AA-11-AA");
    strcpy(passagem[1].data, "01/12/2023");
    strcpy(passagem[1].hora, "17:01");

    passagem[2].num_portico = 3;
    strcpy(passagem[2].classe, "pesado");
    strcpy(passagem[2].matricula, "AA-22-AA");
    strcpy(passagem[2].data, "01/12/2023");
    strcpy(passagem[2].hora, "17:02");

    passagem[3].num_portico = 1;
    strcpy(passagem[3].classe, "pesado");
    strcpy(passagem[3].matricula, "AA-33-AA");
    strcpy(passagem[3].data, "01/12/2023");
    strcpy(passagem[3].hora, "17:55");
    menu();
}

void mostrar_info_2()
{
    int p;
    char c[20];
    printf("Indique o pórtico que pretende pesquisar: ");
    scanf("%d", &p);

    printf("Indique a classe pretendida: ");
    scanf("%s", &c);

    for (int i = 0; i < p; i++)
    {

        if (strcmp(c, "ligeiro") == 0)

        {
            p = p - 1;
            printf("O preço da passagem no pórtico selecionado tendo em conta a classe de veiculo é: %0.2f"
                   "€.",
                   portico[p].preco_ligeiro);
            i = 5;
        }
        else if (strcmp(c, "motociclo") == 0)

        {
            p = p - 1;
            printf("O preço da passagem no pórtico selecionado tendo em conta a classe de veiculo é: %0.2f"
                   "€.",
                   portico[p].preco_motociclo);
            i = 5;
        }
        else if (strcmp(c, "pesado") == 0)

        {
            p = p - 1;
            printf("O preço da passagem no pórtico selecionado tendo em conta a classe de veiculo é: %0.2f"
                   "€.",
                   portico[p].preco_pesado);
            i = 5;
        }
    }
    voltar_menu();
}

void alterar_3()
{

    int p;
    char c[20];
    float price;
    float preco_final;
    printf("Indique o pórtico ao qual deseja fazer alterações: ");
    scanf("%d", &p);

    printf("Indique a classe de veiculo à qual deseja alterar o preço: ");
    scanf("%s", c);

    printf("Indique o novo preço: ");
    scanf("%f", &price);

    for (int i = 0; i = p; i++)
    {
        if (strcmp(c, "ligeiro") == 0)
        {
            i = i - 1;
            portico[i].preco_ligeiro = price;

            break;
        }

        if (strcmp(c, "motociclo") == 0)
        {
            i = i - 1;
            portico[i].preco_motociclo = price;

            break;
        }
        if (strcmp(c, "pesado") == 0)
        {
            i = i - 1;
            portico[i].preco_pesado = price;

            break;
        }
    }

    voltar_menu();
}

void listar_passagens_5()
{
    for (int i = 0; i < 20; i++)
    {
        if (passagem[i].num_portico != 0)
        {
            printf("Pórtico da passagem: %d \n", passagem[i].num_portico);
            printf("Classe: %s \n", passagem[i].classe);
            printf("Matrícula: %s \n", passagem[i].matricula);
            printf("Data: %s \n", passagem[i].data);
            printf("Hora: %s \n", passagem[i].hora);
            printf("\n");
            printf("\n");
        }
    }
    voltar_menu();
}

void listar_passagens_6()
{
    int p;

    printf("Indique o pórtico que pretende pesquisar: ");
    scanf("%d", &p);

    for (int i = 0; i < 20; i++)
    {
        if (passagem[i].num_portico == p)
        {
            printf("\n");
            printf("\n");
            printf("Número do pórtico: %d \n", passagem[i].num_portico);
            printf("Classe: %s \n", passagem[i].classe);
            printf("Matricula: %s \n", passagem[i].matricula);
            printf("Data: %s \n", passagem[i].data);
            printf("Hora: %s \n", passagem[i].hora);
            printf("\n");
        }
    }

    voltar_menu();
}

void adicionar_portico_0()
{
    float p_ligeiro;
    float p_motociclo;
    float p_pesado;
    //  p = 3.00;

    printf("Indique o preço de ligeiros do novo pórtico: \n");
    scanf("%f", &p_ligeiro);
    printf("Indique o preço de motociclos do novo pórtico: \n");
    scanf("%f", &p_motociclo);

    printf("Indique o preço de pesados do novo pórtico: \n");
    scanf("%f", &p_pesado);

    for (int i = 0; i < 20; i++)
    {
        if (portico[i].preco_ligeiro == 0.00)
        {
            portico[i].preco_ligeiro = p_ligeiro;
            portico[i].preco_motociclo = p_motociclo;
            portico[i].preco_pesado = p_pesado;

            break;
        }
    }
    voltar_menu();
}

void pesquisar_matricula_7()
{
    int portico;
    char matricula[10];
    int soma = 0;
    printf("Indique o carro que quer pesquisar: ");
    scanf("%s", &matricula);

    printf("Indique o pórtico que deseja pesquisar: ");
    scanf("%d", &portico);
    for (int i = 0; i < 5; i++)
    {

        if (strcmp(matricula, passagem[i].matricula) == 0 && portico == passagem[i].num_portico)
        {
            soma = soma + 1;
        }
    }
    printf("O carro que pesquisou passou %d vezes pelo portico %d", soma, portico);

    voltar_menu();
}

void mostrar_n_veiculos_13()
{

    int soma_portico1 = 0;
    int soma_portico2 = 0;
    int soma_portico3 = 0;
    int soma_portico4 = 0;

    for (int i = 0; i < 20; i++)
    {
        if (passagem[i].num_portico == 1)
        {

            soma_portico1 = soma_portico1 + 1;
        }
        if (passagem[i].num_portico == 2)
        {
            soma_portico2 = soma_portico2 + 1;
        }
        if (passagem[i].num_portico == 3)
        {
            soma_portico3 = soma_portico3 + 1;
        }
        if (passagem[i].num_portico == 4)
        {
            soma_portico4 = soma_portico4 + 1;
        }
    }
    printf("Pórtico 1: %d \n", soma_portico1);
    printf("Pórtico 2: %d \n", soma_portico2);
   if (portico[2].preco_ligeiro != 0)
   { 
    printf("Pórtico 3: %d \n", soma_portico3);
    }
     if (portico[3].preco_ligeiro != 0)
   { 
    printf("Pórtico 4: %d \n", soma_portico4);
}
    voltar_menu();
}

void adicionar_passagem_4()
{
    int portic;
    char classe[20];
    char matricula[20];
    char data[20];
    char hora[20];

    printf("Indique o pórtico da nova passagem: ");
    scanf("%d", &portic);
    printf("Indique a classe da nova passagem: ");
    scanf("%s", &classe);
    printf("Indique a matricula do carro da nova passagem: ");
    scanf("%s", &matricula);
    printf("Indique a data da nova passagem: ");
    scanf("%s", &data);
    printf("Indique a hora da nova passagem: ");
    scanf("%s", &hora);

    for (int i = 0; i < 20; i++)
    {
        if (passagem[i].num_portico == 0)
        {
            passagem[i].num_portico = portic;
            strcpy(passagem[i].classe, classe);
            strcpy(passagem[i].matricula, matricula);
            strcpy(passagem[i].data, data);
            strcpy(passagem[i].hora, hora);

            break;
        }
    }
    voltar_menu();
}

void media_porticos_15()
{

    int soma_portico1 = 0;
    int soma_portico2 = 0;
    int soma_portico3 = 0;
    int soma_portico4 = 0;
    float media_portico1 = 0.00;
    float media_portico2 = 0.00;
    float media_portico3 = 0.00;
    float media_portico4 = 0.00;
    float total;

    for (int i = 0; i < 20; i++)
    {
        if (passagem[i].num_portico != 0)
        {
            if (passagem[i].num_portico == 1)
            {

                soma_portico1 = soma_portico1 + 1;
                total = total + 1;
            }
            if (passagem[i].num_portico == 2)
            {
                soma_portico2 = soma_portico2 + 1;
                total = total + 1;
            }
            if (passagem[i].num_portico == 3)
            {
                soma_portico3 = soma_portico3 + 1;
                total = total + 1;
            }
            if (passagem[i].num_portico == 4)
            {
                soma_portico4 = soma_portico4 + 1;
                total = total + 1;
            }
        }
    }
    media_portico1 = soma_portico1 / total;
    media_portico2 = soma_portico2 / total;
    media_portico3 = soma_portico3 / total;
    media_portico4 = soma_portico4 / total;

    printf("Média do pórtico 1: %0.2f \n", media_portico1);
    printf("Média do pórtico 2: %0.2f \n", media_portico2);
    if (portico[2].preco_ligeiro != 0)
    {
        printf("Média do pórtico 3: %0.2f \n", media_portico3);
    }
    if (portico[3].preco_ligeiro != 0)
    {
        printf("Média do pórtico 4: %0.2f \n", media_portico4);
    }
    voltar_menu();
}

void total_por_portico_8()
{
    float total_portico1 = 0;
    float total_portico2 = 0;
    float total_portico3 = 0;
    float total_portico4 = 0;

    for (int i = 0; i < 20; i++)
    {
        if (passagem[i].num_portico == 1 && strcmp(passagem[i].classe, "ligeiro") == 0)
        {
            total_portico1 = total_portico1 + portico[0].preco_ligeiro;
        }
        if (passagem[i].num_portico == 1 && strcmp(passagem[i].classe, "motociclo") == 0)
        {
            total_portico1 = total_portico1 + portico[0].preco_motociclo;
        }
        if (passagem[i].num_portico == 1 && strcmp(passagem[i].classe, "pesado") == 0)
        {
            total_portico1 = total_portico1 + portico[0].preco_pesado;
        }

        if (passagem[i].num_portico == 2 && strcmp(passagem[i].classe, "ligeiro") == 0)
        {
            total_portico2 = total_portico2 + portico[1].preco_ligeiro;
        }
        if (passagem[i].num_portico == 2 && strcmp(passagem[i].classe, "motociclo") == 0)
        {
            total_portico2 = total_portico2 + portico[1].preco_motociclo;
        }
        if (passagem[i].num_portico == 2 && strcmp(passagem[i].classe, "pesado") == 0)
        {
            total_portico2 = total_portico2 + portico[1].preco_pesado;
        }

        if (passagem[i].num_portico == 3 && strcmp(passagem[i].classe, "ligeiro") == 0)
        {
            total_portico3 = total_portico3 + portico[2].preco_ligeiro;
        }
        if (passagem[i].num_portico == 3 && strcmp(passagem[i].classe, "motociclo") == 0)
        {
            total_portico3 = total_portico3 + portico[2].preco_motociclo;
        }
        if (passagem[i].num_portico == 3 && strcmp(passagem[i].classe, "pesado") == 0)
        {
            total_portico3 = total_portico3 + portico[2].preco_pesado;
        }

        if (passagem[i].num_portico == 4 && strcmp(passagem[i].classe, "ligeiro") == 0)
        {
            total_portico4 = total_portico4 + portico[3].preco_ligeiro;
        }
        if (passagem[i].num_portico == 4 && strcmp(passagem[i].classe, "motociclo") == 0)
        {
            total_portico4 = total_portico4 + portico[3].preco_motociclo;
        }
        if (passagem[i].num_portico == 4 && strcmp(passagem[i].classe, "pesado") == 0)
        {
            total_portico4 = total_portico4 + portico[3].preco_pesado;
        }
    }

    printf("Total faturado pelo pórtico 1: %0.2f€. \n", total_portico1);
    printf("Total faturado pelo pórtico 2: %0.2f€. \n", total_portico2);
    if (portico[2].preco_ligeiro != 0)
    {
        printf("Total faturado pelo pórtico 3: %0.2f€. \n", total_portico3);
    }
    if (portico[4].preco_ligeiro != 0)
    {
        printf("Total faturado pelo pórtico 4: %0.2f€. \n", total_portico4);
    }

    voltar_menu();
}

void voltar_menu()
{
    int opc;
    printf("\n");
    printf("\n");
    printf("0- Voltar ao menu \n");
    //  scanf("%d", opc);

    printf("99- Sair \n");
    scanf("%d", &opc);

    switch (opc)
    {
    case 0:
        menu();
        break;
    case 99:
        break;

    default:
        break;
    }
}

void portico_com_mais_passagens_14()
{
    int soma_portico1 = 0;
    int soma_portico2 = 0;
    int soma_portico3 = 0;
    int soma_portico4 = 0;
    int max;

    for (int i = 0; i < 20; i++)
    {
        if (passagem[i].num_portico == 1)
        {

            soma_portico1 = soma_portico1 + 1;
        }
        if (passagem[i].num_portico == 2)
        {
            soma_portico2 = soma_portico2 + 1;
        }
        if (passagem[i].num_portico == 3)
        {
            soma_portico3 = soma_portico3 + 1;
        }
        if (passagem[i].num_portico == 4)
        {
            soma_portico4 = soma_portico4 + 1;
        }
    }

    if (soma_portico1 > soma_portico2 && soma_portico1 > soma_portico3 && soma_portico1 > soma_portico4)

    {
        max = soma_portico1;
        printf("\n");
        printf("\n");

        printf("O pórtico com mais passagens é o pórtico 1 com %d passagens. \n", max);
    }
    else if (soma_portico2 > soma_portico1 && soma_portico2 > soma_portico3 && soma_portico2 > soma_portico4)
    {
        max = soma_portico2;
        printf("\n");
        printf("\n");
        printf("O pórtico com mais passagens é o pórtico 2 com %d passagens. \n", max);
    }

    else if (soma_portico3 > soma_portico1 && soma_portico3 > soma_portico2 && soma_portico3 > soma_portico4)
    {
        max = soma_portico3;
        if (portico[2].preco_ligeiro != 0)
        {
            printf("\n");
            printf("\n");
            printf("O pórtico com mais passagens é o pórtico 3 com %d passagens. \n", max);
        }
    }

    else if (soma_portico4 > soma_portico1 && soma_portico4 > soma_portico2 && soma_portico4 > soma_portico3)
    {
        max = soma_portico4;
        if (portico[3].preco_ligeiro != 0)
        {
            printf("\n");
            printf("\n");
            printf("O pórtico com mais passagens é o pórtico 4 com %d passagens. \n", max);
        }
    }

    voltar_menu();
}

void total_gasto_por_classe_10()
{
    float total;
    char c[20];
    printf("Indique a classe que pretende pesquisar: ");
    scanf("%s", c);

    for (int i = 0; i < 20; i++)
    {
        if (passagem[i].num_portico == 1 && strcmp(c, "ligeiro") == 0 && strcmp(passagem[i].classe, c) == 0)
        {
            total = total + portico[0].preco_ligeiro;
        }
        if (passagem[i].num_portico == 1 && strcmp(c, "motociclo") == 0 && strcmp(passagem[i].classe, c) == 0)
        {
            total = total + portico[0].preco_motociclo;
        }
        if (passagem[i].num_portico == 1 && strcmp(c, "pesado") == 0 && strcmp(passagem[i].classe, c) == 0)
        {
            total = total + portico[0].preco_pesado;
        }

        if (passagem[i].num_portico == 2 && strcmp(c, "ligeiro") == 0 && strcmp(passagem[i].classe, c) == 0)
        {
            total = total + portico[1].preco_ligeiro;
        }
        if (passagem[i].num_portico == 2 && strcmp(c, "motociclo") == 0 && strcmp(passagem[i].classe, c) == 0)
        {
            total = total + portico[1].preco_motociclo;
        }
        if (passagem[i].num_portico == 2 && strcmp(c, "pesado") == 0 && strcmp(passagem[i].classe, c) == 0)
        {
            total = total + portico[1].preco_pesado;
        }

        if (passagem[i].num_portico == 3 && strcmp(c, "ligeiro") == 0 && strcmp(passagem[i].classe, c) == 0)
        {
            total = total + portico[2].preco_ligeiro;
        }
        if (passagem[i].num_portico == 3 && strcmp(c, "motociclo") == 0 && strcmp(passagem[i].classe, c) == 0)
        {
            total = total + portico[2].preco_motociclo;
        }
        if (passagem[i].num_portico == 3 && strcmp(c, "pesado") == 0 && strcmp(passagem[i].classe, c) == 0)
        {
            total = total + portico[2].preco_pesado;
        }

        if (passagem[i].num_portico == 4 && strcmp(c, "ligeiro") == 0 && strcmp(passagem[i].classe, c) == 0)
        {
            total = total + portico[3].preco_ligeiro;
        }
        if (passagem[i].num_portico == 4 && strcmp(c, "motociclo") == 0 && strcmp(passagem[i].classe, c) == 0)
        {
            total = total + portico[3].preco_motociclo;
        }
        if (passagem[i].num_portico == 4 && strcmp(c, "pesado") == 0 && strcmp(passagem[i].classe, c) == 0)
        {
            total = total + portico[3].preco_pesado;
        }
    }

    printf("A classe %s gastou %0.2f€ no total.", c, total);

    voltar_menu();
}

void total_portico_dia_12()
{
    int portic;
    char data[20];
    float total_p1;

    float total_p2;
    float total_p3;
    float total_p4;

    printf("Indique o pórtico que pretende pesquisar: ");
    scanf("%d", &portic);

    printf("Indique a data que deseja pesquisar: ");
    scanf("%s", data);

    for (int i = 0; i < 20; i++)
    {
        if (strcmp(passagem[i].classe, "ligeiro") == 0 && portic == 1 && passagem[i].num_portico == 1 && strcmp(passagem[i].data, data) == 0)
        {
            total_p1 = total_p1 + portico[0].preco_ligeiro;
        }
        if (strcmp(passagem[i].classe, "motociclo") == 0 && portic == 1 && passagem[i].num_portico == 1 && strcmp(passagem[i].data, data) == 0)
        {
            total_p1 = total_p1 + portico[0].preco_motociclo;
        }
        if (strcmp(passagem[i].classe, "pesado") == 0 && portic == 1 && passagem[i].num_portico == 1 && strcmp(passagem[i].data, data) == 0)
        {
            total_p1 = total_p1 + portico[0].preco_pesado;
        }

        if (strcmp(passagem[i].classe, "ligeiro") == 0 && portic == 2 && passagem[i].num_portico == 2 && strcmp(passagem[i].data, data) == 0)
        {
            total_p2 = total_p2 + portico[1].preco_ligeiro;
        }
        if (strcmp(passagem[i].classe, "motociclo") == 0 && portic == 2 && passagem[i].num_portico == 2 && strcmp(passagem[i].data, data) == 0)
        {
            total_p2 = total_p2 + portico[1].preco_motociclo;
        }
        if (strcmp(passagem[i].classe, "pesado") == 0 && portic == 2 && passagem[i].num_portico == 2 && strcmp(passagem[i].data, data) == 0)
        {
            total_p2 = total_p2 + portico[1].preco_pesado;
        }

        if (strcmp(passagem[i].classe, "ligeiro") == 0 && portic == 3 && passagem[i].num_portico == 3 && strcmp(passagem[i].data, data) == 0)
        {
            total_p3 = total_p3 + portico[2].preco_ligeiro;
        }
        if (strcmp(passagem[i].classe, "motociclo") == 0 && portic == 3 && passagem[i].num_portico == 3 && strcmp(passagem[i].data, data) == 0)
        {
            total_p3 = total_p3 + portico[2].preco_motociclo;
        }
        if (strcmp(passagem[i].classe, "pesado") == 0 && portic == 3 && passagem[i].num_portico == 3 && strcmp(passagem[i].data, data) == 0)
        {
            total_p3 = total_p3 + portico[2].preco_pesado;
        }

        if (strcmp(passagem[i].classe, "ligeiro") == 0 && portic == 4 && passagem[i].num_portico == 4 && strcmp(passagem[i].data, data) == 0)
        {
            total_p4 = total_p4 + portico[3].preco_ligeiro;
        }
        if (strcmp(passagem[i].classe, "motociclo") == 0 && portic == 4 && passagem[i].num_portico == 4 && strcmp(passagem[i].data, data) == 0)
        {
            total_p4 = total_p4 + portico[3].preco_motociclo;
        }
        if (strcmp(passagem[i].classe, "pesado") == 0 && portic == 4 && passagem[i].num_portico == 4 && strcmp(passagem[i].data, data) == 0)
        {
            total_p4 = total_p4 + portico[3].preco_pesado;
        }
    }

    if (portic == 1)
    {
        printf("O pórtico 1 faturou %0.2f€ no dia %s.", total_p1, data);
    }

    if (portic == 2)
    {
        printf("O pórtico 2 faturou %0.2f€ no dia %s.", total_p2, data);
    }
    if (portic == 3)
    {
        printf("O pórtico 3 faturou %0.2f€ no dia %s.", total_p3, data);
    }
    if (portic == 4)
    {
        printf("O pórtico 4 faturou %0.2f€ no dia %s.", total_p4, data);
    }

    voltar_menu();
}

/*
printf("Indique o pórtico");

switch (portico)
{
case: 1 to 4
scanf("%d" , portico);

    break;

default:
printf("Indique um pórtico válido");
    break;
}
 */