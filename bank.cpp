#include <iostream>
using namespace std;
 
int main()
{

 
  int arr1[a], arr2[a], index = 0;
  for (k = 0; k < a; k++) {
    arr1[k] = 0;
  }
  int need[a][b];
  for (i = 0; i < a; i++) {
    for (j = 0; j < b; j++)
      need[i][j] = matrixmax[i][j] - matrixallo[i][j];
  }
  int l = 0;
  for (k = 0; k < 5; k++) {
    for (i = 0; i < a; i++) {
      if (arr1[i] == 0) {
        int flag = 0;
        for (j = 0; j < b; j++) {
          if (need[i][j] > resource[j]){
            flag = 1;
            break;
          }
        }
        if (flag == 0) {
          arr2[index++] = i;
          for (l = 0; l < b; l++)
            resource[l] += matrixallo[i][l];
          arr1[i] = 1;
        }
      }
    }
  }
  int flag = 1;
  for(int i = 0;i<a;i++){
        if(arr1[i]==0){
        flag = 0;
        cout << "The sequence is not safe";
        break;
      }
  }
  if(flag==1){
    cout << "safe sequence:" << endl;
      for (i = 0; i < a - 1; i++)
        cout << " P" << arr2[i] << " ->";
      cout << " P" << arr2[a - 1] <<endl;
  }
    return (0);
}
