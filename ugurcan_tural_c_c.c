#include <stdio.h>

int main()
{
    srand(time(NULL)); 
    int skorev = rand() % 5 + 1;
    int skordep = rand() % 5 + 1;
    //printf("%d",randomsayi);
    int secim;
    char karakter;
    printf("--- SANAL FUTBOL OYUNUNA HOŞGELDİNİZ ---\n");
    do
    {
    printf("Fenerbahçe ? - ? Galasaray");
    printf("\nMaçı Hangi Takım Kazanır?");
    
    printf("\nLütfen Tercihinizi Yapınız (1/0/2) : ");
    scanf("%d" , &secim);
    
    
    if (secim == 0 || secim == 1 || secim == 2)
    {
        printf("\n--------MAÇ SONUCU--------\n");
        printf("Fenerbahçe %d - %d Galasaray",skorev,skordep);
        printf("\n");
        printf("--------- GOLLER ---------\n");
    
        int goldakikasi = rand() % 80 + 10;
        for (int i=1; i<=skorev; i++) 
        {
            int rasgeleev = rand() % 5 + 1;
            if (rasgeleev == 1 )
                { printf("Mesut Özil '%d \n" , goldakikasi); goldakikasi = rand() %goldakikasi + 1;}
            if (rasgeleev == 2 )
                { printf("Enner Valencia '%d \n" , goldakikasi); goldakikasi = rand() %goldakikasi + 1;}
            if (rasgeleev == 3 )
                { printf("Bright Osayi Samuel '%d \n" , goldakikasi); goldakikasi = rand() %goldakikasi + 1;}
            if (rasgeleev == 4 )
                { printf("İrfan Can Kahveci '%d \n" , goldakikasi); goldakikasi = rand() %goldakikasi + 1;}
            if (rasgeleev == 5 )
                { printf("Miguel Crespo '%d \n" , goldakikasi); goldakikasi = rand() %goldakikasi + 1;}
        }
        
        int goldakikasidep = 1 + rand() % 90;
        for (int i=1; i<=skordep; i++) 
        {
            int rasgeledep = rand() % 5 + 1;
            if (rasgeledep == 1 )
                { printf("                  Kerem Aktürkoğlu '%d \n" , goldakikasidep); goldakikasidep = rand() %goldakikasidep + 1;}
            if (rasgeledep == 2 )
                { printf("                  Morutan '%d \n" , goldakikasidep); goldakikasidep = rand() %goldakikasidep + 1;}
            if (rasgeledep == 3 )
                { printf("                  Mustafa Muhammed '%d \n" , goldakikasidep); goldakikasidep = rand() %goldakikasidep + 1;}
            if (rasgeledep == 4 )
                { printf("                  Cicaldau '%d \n" , goldakikasidep); goldakikasidep = rand() %goldakikasidep + 1;}
            if (rasgeledep == 5 )
                { printf("                  Marcao '%d \n" , goldakikasidep); goldakikasidep = rand() %goldakikasidep + 1;}
        }
        
        
        printf("\n");
        printf("-------- MAÇ ÖZETİ -------\n");
        
        int toplaoynama = rand() % 60 + 40;
        printf("%% %d Topla Oynama %% %d \n", toplaoynama, 100 - toplaoynama);
        
        int evsutu = rand() % 10;
        evsutu += skorev;
        
        int depsutu = rand() % 10;
        depsutu += skordep;
        
        printf("  %d   Toplam Şut    %d ", evsutu , depsutu);
        printf("\n--------------------------");
        
        if (secim == 1 && skorev > skordep)
        {
            printf("\nTEBRİKLER KAZANANI DOĞRU BİLDİNİZ!\nÇOK YAŞA FENERBAHÇE!");
            printf("\n\nTekrar Oynamak İster Misiniz?(E/H): ");
            scanf(" %c" , &karakter);
        }
        else if (secim == 0 && skorev == skordep)
        {
            printf("\nTEBRİKLER KAZANANI DOĞRU BİLDİNİZ!\nDOSTLUK KAZANDI :)");
            printf("\n\nTekrar Oynamak İster Misiniz?(E/H): ");
            scanf(" %c" , &karakter);
        }
        else if (secim == 2 && skorev < skordep)
        {
            printf("\nTEBRİKLER KAZANANI DOĞRU BİLDİNİZ!\nÇOK YAŞA GALATASARAY!");
            printf("\n\nTekrar Oynamak İster Misiniz?(E/H): ");
            scanf(" %c" , &karakter);
        }
        else
        {
            printf("\nMaalesef yanlış tahminde bulundunuz :(");
            printf("\n\nTekrar Oynamak İster Misiniz?(E/H): ");
            scanf(" %c" , &karakter);
        }
    }
    else
    {
        printf("Lütfen Geçerli Bir Tahmin Yapınız!\n");
    }
    
    }
    while (karakter == 'E' || karakter == 'e');
    
    return 0;
}
