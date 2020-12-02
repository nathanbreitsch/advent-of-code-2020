#include <stdio.h>

int solve(int* inputBuffer, int inputSize){
  for (int i = 0; i < inputSize; i++) {
    for (int j = i + 1; j < inputSize; j++){
      if (inputBuffer[i] + inputBuffer[j] == 2020){
        return inputBuffer[i] * inputBuffer[j];
      }
    }
  }
  return -1;
}

int main(){
  FILE* file = fopen("./input.txt", "r");
  int inputBuffer[200];
  int inputSize = 0;
  while(inputSize < 200 && !feof(file) && 
        fscanf(file, "%d", &inputBuffer[inputSize])){
    inputSize++;
  }

  int solution = solve(inputBuffer, inputSize);
  printf("%d", solution);

  return 0;
}
