// main.cpp

using namespace std;

// Defining Brain class
static Brain::Brain(char inputc, char *inputs, char outputc, char *outputs) {
  // TODO: read arguments
  
  // Set input and output layers
  

  return 0
}
void Brain::loadMemory(memoryData data) {
  // TODO: verify integrity of dimensions
  Brain::data = data;
}

// Defining Brain::Neuron class
static Brain::Neuron::Neuron(axon) {
  this->axon = axon;
}
float Brain::Neuron::getValue() {
  float value = 0;
  for(int index = 0; index <= this->synapsiesc; index++) {
    value += this->synapsies[index];
  }
  return sigmoid(value);
}
void Brain::Neuron::reciveData(float input) {
  this->synapsies[this->synapsiesc += 1];
}


// Defining Brain::Synapsis class
static Brain::Synapsis::Synapsis(Neuron* n1, Neuron* n2) {
  this->input = n1;
  this->output = n2;
}
void Brain::Synapsis::do() {
  *(this->output).reciveData(*(this->input).getValue());
}

