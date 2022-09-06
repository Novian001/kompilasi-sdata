#include "stdio.h"
#include "iostream"

using namespace std;
typedef struct node{
 int data;
 node *kiri;
 node *kanan;
};

node *akar=NULL;
addNode(node **akar, int isi) {
 if((*akar)==NULL){
 node *baru;
 baru= new node;
 baru->data = isi;
 baru->kiri = NULL;
 baru->kanan = NULL;
 (*akar)=baru;
 }
}

preOrder(node *akar) {
 if(akar !=NULL) {
 printf("%c ", akar->data);
 preOrder(akar->kiri);
 preOrder(akar->kanan);
 }
}

inOrder(node *akar) {
 if(akar !=NULL) {
 inOrder(akar->kiri);
 printf("%c ", akar->data);
 inOrder(akar->kanan);
 }
}

postOrder(node *akar) {
 if(akar !=NULL) {
 postOrder(akar->kiri);
 postOrder(akar->kanan);
 printf("%c ", akar->data);
 }
}

/*/levelorder(node *akar)
{
   int h,i;
   h=height(root);
   for(i=1;i<=h;i++)
   {
        print_given_level(root,i);
   }
}/*/

main(){
int abjad;
//printf("\n\n\tPosisi Awal Tree:\n\n");
//printf("\t       /\n\t      / \\\n\t     -   -\n\t     / \\  /\ \\\n\t   + * 90  105\n\t      / \\ \\\n\t    35 45 91\t\n\t     \\\     \\\n\t      37     95\n\t      \n\n");
addNode(&akar,abjad='/');
addNode(&akar->kiri,abjad='-');
addNode(&akar->kiri->kiri,abjad='+');
addNode(&akar->kiri->kiri,abjad='1');
addNode(&akar->kiri->kiri->kanan,abjad='*');
addNode(&akar->kiri->kiri->kanan->kiri,abjad='2');
addNode(&akar->kiri->kiri->kanan->kanan,abjad='9');
addNode(&akar->kiri->kanan,abjad='+');
addNode(&akar->kiri->kanan->kiri,abjad='4');
addNode(&akar->kiri->kanan->kanan,abjad='5');
addNode(&akar->kanan,abjad='-');
addNode(&akar->kanan->kiri,abjad='3');
addNode(&akar->kanan->kanan,abjad='*');
addNode(&akar->kanan->kanan->kiri,abjad='-');
addNode(&akar->kanan->kanan->kiri->kiri,abjad='6');
addNode(&akar->kanan->kanan->kiri->kanan,abjad='8');
addNode(&akar->kanan->kanan->kanan,abjad=90);
 printf("Tampilan PreOrder  : ");
 preOrder(akar);
 printf("\nTampilan InOrder   : ");
 inOrder(akar);
 printf("\nTampilan PostOrder : ");
 postOrder(akar);
}
