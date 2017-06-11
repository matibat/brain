// brain.h

class Brain {
private:
  memoryData** memory;               // Memory data
  class Neuron {
  private:
    float [] synapsies;
    int      synapsiesc;
    Neuron   output;
  public:
    Neuron();
    float    getValue(float*);
    void     synapsis(float*);
  }
  class Synapsis {
  private:
    float    flux;
    Neuron   input;
    Neuron   output;
  public:
    Synapsis();
    float parseValue();
  }


public:
  Brain();                           // Constructor

  void       train(char*, char*)     // Read data to improve predictions
  void       loadMemory(memoryData); // Memory can be replaced
  memoryData getMemory();            // Get memory data
  char**     getValue(char**);       // Brain recives and returns a vector
}

