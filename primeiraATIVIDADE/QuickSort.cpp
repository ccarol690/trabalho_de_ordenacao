#include <iostream>
using namespace std;
void mudar(int vetor[],int i, int j){
    int aux=vetor[i];
    vetor[i]=vetor[j];
    vetor[j]=aux;
}
int partiVet(int vet[],int esq,int dir){
    int i=esq-1;
    int pivo=vet[dir];
    for(int j=esq;j<dir;j++){
        if(vet[j]<=pivo){
            i++;
            mudar(vet,i,j);
        }
    }
    mudar(vet,i+1,dir);
    return i+1;
}
void quick(int vet[],int esq,int dir){
    if(esq<dir){
        int pivo=partiVet(vet,esq,dir);
        quick(vet,esq,pivo-1);
        quick(vet,pivo+1,dir);

    }
}
void mostrar(int vet[], int tam){
    for (int k=0;k<tam;k++){
        cout<<vet[k]<<endl;
    }
    cout<<endl;
}
int main(){
    int Vet[] = {9,10,-1,3,6,2,1,-3,1,0,-2,15,8,-7,0};
    quick(Vet,0,15);
    mostrar(Vet,15);
    return 0;
}
