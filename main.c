#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void help(){
    printf("if you want to rewrite file into brainrot terms use these arguments: from 'file name with file extension'\n");
    printf("if you want to rewrite brainrot terms into file use these arguments: to 'file name with file extension'");
}

int main(int argc, char *argv[])
{
    if(argc != 3){
        help();
        return EXIT_FAILURE;
    } 

    char brainrot[256][35] = {"KaiCenatKaiCenat ", "KaiCenatSkibidi ", "KaiCenatRizz ", "KaiCenatGyatt ", "KaiCenatOhio ", "KaiCenatBabyGronk ", "KaiCenatSussy ", "KaiCenatErmWhatTheSigma ", "KaiCenatGrindset ", "KaiCenatGriddy ", "KaiCenatFanumTax ", "KaiCenatLooksMaxxing ", "KaiCenatGooning ", "KaiCenatBussin ", "KaiCenatEdging ", "KaiCenatMewing \n", "SkibidiKaiCenat ", "SkibidiSkibidi ", "SkibidiRizz ", "SkibidiGyatt ", "SkibidiOhio ", "SkibidiBabyGronk ", "SkibidiSussy ", "SkibidiErmWhatTheSigma ", "SkibidiGrindset ", "SkibidiGriddy ", "SkibidiFanumTax ", "SkibidiLooksMaxxing ", "SkibidiGooning ", "SkibidiBussin ", "SkibidiEdging ", "SkibidiMewing \n", "RizzKaiCenat ", "RizzSkibidi ", "RizzRizz ", "RizzGyatt ", "RizzOhio ", "RizzBabyGronk ", "RizzSussy ", "RizzErmWhatTheSigma ", "RizzGrindset ", "RizzGriddy ", "RizzFanumTax ", "RizzLooksMaxxing ", "RizzGooning ", "RizzBussin ", "RizzEdging ", "RizzMewing \n", "GyattKaiCenat ", "GyattSkibidi ", "GyattRizz ", "GyattGyatt ", "GyattOhio ", "GyattBabyGronk ", "GyattSussy ", "GyattErmWhatTheSigma ", "GyattGrindset ", "GyattGriddy ", "GyattFanumTax ", "GyattLooksMaxxing ", "GyattGooning ", "GyattBussin ", "GyattEdging ", "GyattMewing \n", "OhioKaiCenat ", "OhioSkibidi ", "OhioRizz ", "OhioGyatt ", "OhioOhio ", "OhioBabyGronk ", "OhioSussy ", "OhioErmWhatTheSigma ", "OhioGrindset ", "OhioGriddy ", "OhioFanumTax ", "OhioLooksMaxxing ", "OhioGooning ", "OhioBussin ", "OhioEdging ", "OhioMewing \n", "BabyGronkKaiCenat ", "BabyGronkSkibidi ", "BabyGronkRizz ", "BabyGronkGyatt ", "BabyGronkOhio ", "BabyGronkBabyGronk ", "BabyGronkSussy ", "BabyGronkErmWhatTheSigma ", "BabyGronkGrindset ", "BabyGronkGriddy ", "BabyGronkFanumTax ", "BabyGronkLooksMaxxing ", "BabyGronkGooning ", "BabyGronkBussin ", "BabyGronkEdging ", "BabyGronkMewing \n", "SussyKaiCenat ", "SussySkibidi ", "SussyRizz ", "SussyGyatt ", "SussyOhio ", "SussyBabyGronk ", "SussySussy ", "SussyErmWhatTheSigma ", "SussyGrindset ", "SussyGriddy ", "SussyFanumTax ", "SussyLooksMaxxing ", "SussyGooning ", "SussyBussin ", "SussyEdging ", "SussyMewing \n", "ErmWhatTheSigmaKaiCenat ", "ErmWhatTheSigmaSkibidi ", "ErmWhatTheSigmaRizz ", "ErmWhatTheSigmaGyatt ", "ErmWhatTheSigmaOhio ", "ErmWhatTheSigmaBabyGronk ", "ErmWhatTheSigmaSussy ", "ErmWhatTheSigmaErmWhatTheSigma ", "ErmWhatTheSigmaGrindset ", "ErmWhatTheSigmaGriddy ", "ErmWhatTheSigmaFanumTax ", "ErmWhatTheSigmaLooksMaxxing ", "ErmWhatTheSigmaGooning ", "ErmWhatTheSigmaBussin ", "ErmWhatTheSigmaEdging ", "ErmWhatTheSigmaMewing \n", "GrindsetKaiCenat ", "GrindsetSkibidi ", "GrindsetRizz ", "GrindsetGyatt ", "GrindsetOhio ", "GrindsetBabyGronk ", "GrindsetSussy ", "GrindsetErmWhatTheSigma ", "GrindsetGrindset ", "GrindsetGriddy ", "GrindsetFanumTax ", "GrindsetLooksMaxxing ", "GrindsetGooning ", "GrindsetBussin ", "GrindsetEdging ", "GrindsetMewing \n", "GriddyKaiCenat ", "GriddySkibidi ", "GriddyRizz ", "GriddyGyatt ", "GriddyOhio ", "GriddyBabyGronk ", "GriddySussy ", "GriddyErmWhatTheSigma ", "GriddyGrindset ", "GriddyGriddy ", "GriddyFanumTax ", "GriddyLooksMaxxing ", "GriddyGooning ", "GriddyBussin ", "GriddyEdging ", "GriddyMewing \n", "FanumTaxKaiCenat ", "FanumTaxSkibidi ", "FanumTaxRizz ", "FanumTaxGyatt ", "FanumTaxOhio ", "FanumTaxBabyGronk ", "FanumTaxSussy ", "FanumTaxErmWhatTheSigma ", "FanumTaxGrindset ", "FanumTaxGriddy ", "FanumTaxFanumTax ", "FanumTaxLooksMaxxing ", "FanumTaxGooning ", "FanumTaxBussin ", "FanumTaxEdging ", "FanumTaxMewing \n", "LooksMaxxingKaiCenat ", "LooksMaxxingSkibidi ", "LooksMaxxingRizz ", "LooksMaxxingGyatt ", "LooksMaxxingOhio ", "LooksMaxxingBabyGronk ", "LooksMaxxingSussy ", "LooksMaxxingErmWhatTheSigma ", "LooksMaxxingGrindset ", "LooksMaxxingGriddy ", "LooksMaxxingFanumTax ", "LooksMaxxingLooksMaxxing ", "LooksMaxxingGooning ", "LooksMaxxingBussin ", "LooksMaxxingEdging ", "LooksMaxxingMewing \n", "GooningKaiCenat ", "GooningSkibidi ", "GooningRizz ", "GooningGyatt ", "GooningOhio ", "GooningBabyGronk ", "GooningSussy ", "GooningErmWhatTheSigma ", "GooningGrindset ", "GooningGriddy ", "GooningFanumTax ", "GooningLooksMaxxing ", "GooningGooning ", "GooningBussin ", "GooningEdging ", "GooningMewing \n", "BussinKaiCenat ", "BussinSkibidi ", "BussinRizz ", "BussinGyatt ", "BussinOhio ", "BussinBabyGronk ", "BussinSussy ", "BussinErmWhatTheSigma ", "BussinGrindset ", "BussinGriddy ", "BussinFanumTax ", "BussinLooksMaxxing ", "BussinGooning ", "BussinBussin ", "BussinEdging ", "BussinMewing \n", "EdgingKaiCenat ", "EdgingSkibidi ", "EdgingRizz ", "EdgingGyatt ", "EdgingOhio ", "EdgingBabyGronk ", "EdgingSussy ", "EdgingErmWhatTheSigma ", "EdgingGrindset ", "EdgingGriddy ", "EdgingFanumTax ", "EdgingLooksMaxxing ", "EdgingGooning ", "EdgingBussin ", "EdgingEdging ", "EdgingMewing \n", "MewingKaiCenat ", "MewingSkibidi ", "MewingRizz ", "MewingGyatt ", "MewingOhio ", "MewingBabyGronk ", "MewingSussy ", "MewingErmWhatTheSigma ", "MewingGrindset ", "MewingGriddy ", "MewingFanumTax ", "MewingLooksMaxxing ", "MewingGooning ", "MewingBussin ", "MewingEdging ", "MewingMewing \n"};
    
    if(strcmp(argv[1], "from") == 0){

        FILE* file = fopen(argv[2], "rb");
        if (!file) {
            perror("File opening failed");
            return EXIT_FAILURE;
        }

        FILE* copy = fopen("brainrot.txt", "w");
        if (!copy) {
            perror("File opening failed");
            return EXIT_FAILURE;
        }
        fseek(file, 0, SEEK_END);
        long file_size = ftell(file);
        fseek(file, 0, SEEK_SET);
        char* data = malloc(file_size);
        if(data == NULL){
            printf("Memory allocation failed");
            return EXIT_FAILURE;
        }
        fread(data, 1, file_size, file);
        fclose(file);

        for(int i = 0; i < file_size; i++){
            fprintf(copy, "%s", brainrot[data[i]+128]);
        }
        fprintf(copy, "Q");

        fclose(copy);
        free(data);
        return 0;
    }

    if(strcmp(argv[1], "to") == 0){
        FILE* file = fopen("brainrot.txt", "r");
        if (!file) {
            perror("File opening failed");
            return EXIT_FAILURE;
        }
        FILE* copy = fopen(argv[2], "wb");
        if (!copy) {
            perror("File opening failed");
            return EXIT_FAILURE;
        }
        fseek(file, 0, SEEK_END);
        long file_size = ftell(file);
        fseek(file, 0, SEEK_SET);
        char* source = malloc(file_size);
        if(source == NULL){
            printf("Memory allocation failed");
            return EXIT_FAILURE;
        }
        fread(source, 1, file_size, file);
        fclose(file);

        int j = 0;
        char string[35];
        for(long i = 0; i < file_size; i++){
            if(source[i] == ' '){
                string[j] = ' ';
                if(source[i+1] == '\n'){
                    string[j+1] = '\n';
                    i++;
                }
                j = 0;
                for(int k = 0; k < 256; k++){
                    if(strcmp(string, brainrot[k]) == 0){
                        fprintf(copy, "%c", k-128);
                    }
                }
                memset(string, '\0', 35);
                continue;
            }
            if(source[i] == 'Q'){
                break;
            }
            string[j] = source[i];
            j++;
        }
        free(source);
        fclose(copy);
        return 0;
    }
    printf("wrong argument");
    return 0;
}