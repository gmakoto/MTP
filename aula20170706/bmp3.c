#include <stdio.h>
#include <stdlib.h>
#include <math.h>;
typedef unsigned char Byte;
typedef unsigned short Word;
typedef unsigned int Dword;
typedef
    struct RGB {Byte B, G, R;}
    RGB;

int main()
{
    FILE * arquivo, *destino;
    RGB pixel;
    Byte byte; Word word; Dword dword;
    Byte flag, Lixo = 0;
    int WPX, HPX, BPP, NCP, NIC, i, j, PAL, AUX;
    arquivo = fopen("patriotsnovo.bmp", "rb");
    destino = fopen("patriotsnovonovo.bmp", "wb");
    printf("========================\n");
    if(!arquivo)
    {
        fprintf(stderr, "Arquivo inexistente!\n");
        return(EXIT_FAILURE);
    }
    fread(&byte, sizeof(Byte), 1, arquivo);
    fwrite(&byte, sizeof(Byte), 1, destino);
    fread(&byte, sizeof(Byte), 1, arquivo);
    fwrite(&byte, sizeof(Byte), 1, destino);
    fread(&dword, sizeof(Dword), 1, arquivo);
    fwrite(&dword, sizeof(Dword), 1, destino);
    fread(&word, sizeof(Word), 1, arquivo);
    fwrite(&word, sizeof(Word), 1, destino);
    fread(&word, sizeof(Word), 1, arquivo);
    fwrite(&word, sizeof(Word), 1, destino);
    fread(&dword, sizeof(Dword), 1, arquivo);
    fwrite(&dword, sizeof(Dword), 1, destino);
    fread(&dword, sizeof(Dword), 1, arquivo);
    fwrite(&dword, sizeof(Dword), 1, destino);
    fread(&dword, sizeof(Dword), 1, arquivo);
    fwrite(&dword, sizeof(Dword), 1, destino);
    WPX = dword;
    fread(&dword, sizeof(Dword), 1, arquivo);
    fwrite(&dword, sizeof(Dword), 1, destino);
    HPX = dword;
    fread(&word, sizeof(Word), 1, arquivo);
    fwrite(&word, sizeof(Word), 1, destino);
    fread(&word, sizeof(Word), 1, arquivo);
    fwrite(&word, sizeof(Word), 1, destino);
    BPP = word;
    fread(&dword, sizeof(Dword), 1, arquivo);
    fwrite(&dword, sizeof(Dword), 1, destino);
    fread(&dword, sizeof(Dword), 1, arquivo);
    fwrite(&dword, sizeof(Dword), 1, destino);
    fread(&dword, sizeof(Dword), 1, arquivo);
    fwrite(&dword, sizeof(Dword), 1, destino);
    fread(&dword, sizeof(Dword), 1, arquivo);
    fwrite(&dword, sizeof(Dword), 1, destino);
    fread(&dword, sizeof(Dword), 1, arquivo);
    fwrite(&dword, sizeof(Dword), 1, destino);
    fread(&dword, sizeof(Dword), 1, arquivo);
    fwrite(&dword, sizeof(Dword), 1, destino);
    PAL = floor((BPP*WPX + 31.)/32.)*4;
    AUX = PAL - WPX*3;
    for(j = 0; j < HPX; j++)
    {
        for (i = 0; i< WPX; i++)
        {
            fread(&pixel, sizeof(RGB), 1, arquivo);
            if(pixel.R == 36 && pixel.G == 13 && pixel.B == 77)
            {
                pixel.R = 27;
                pixel.G = 228;
                pixel.B = 228;
            }
            fwrite(&pixel, sizeof(RGB), 1, destino);
        }
        if(AUX > 0)
        {
            fseek(arquivo, AUX, SEEK_CUR);
            for(i = 0; i < AUX; i++)
                fwrite(&Lixo, sizeof(Byte), 1, destino);
        }
    }
    fclose(arquivo);
    fclose(destino);
    return 0;

}
