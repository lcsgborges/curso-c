#include <stdio.h> 
#include <stdlib.h>
#include <qrencode.h>

int main() {
    char *data = "https://github.com/lcsgborges"; 


    const char *output_file = "/home/lcsgg/Documents/curso-c/projects/p3-qrcode/qrcode.pbm";   
    int version = 0;   
    int margin = 4;    
    int scale = 3;     

    
    QRcode *qrcode = QRcode_encodeString(data, version, QR_ECLEVEL_L, QR_MODE_8, 1);
    if (!qrcode) {
        fprintf(stderr, "Erro ao gerar o QR Code\n");
        return 1;
    }

    
    FILE *fp = fopen(output_file, "wb");
    if (!fp) {
        fprintf(stderr, "Erro ao criar o arquivo de saída\n");
        QRcode_free(qrcode);
        return 1;
    }

    fprintf(fp, "P1\n%d %d\n", qrcode->width + margin * 2, qrcode->width + margin * 2);

    for (int y = -margin; y < qrcode->width + margin; y++) {
        for (int x = -margin; x < qrcode->width + margin; x++) {
            if (x >= 0 && y >= 0 && x < qrcode->width && y < qrcode->width) {
                fputc(qrcode->data[y * qrcode->width + x] & 1 ? '1' : '0', fp);
            } else {
                fputc('0', fp); 
            }
            fputc(' ', fp);
        }
        fputc('\n', fp);
    }

    fclose(fp);
    QRcode_free(qrcode);

    printf("QR Code gerado e salvo em: %s\n", output_file);

    return 0;
}
