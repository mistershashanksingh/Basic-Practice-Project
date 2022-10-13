import cirq

a = cirq.NamedQubit("a")
b = cirq.NamedQubit("b")

circuit = cirq.Circuit(cirq.H(a), cirq.CNOT(a, b), cirq.measure(a, b))

print(circuit)
print("\n Movements of circuit is below")
for i, movement in enumerate(circuit):
    print('Move {}: {}'.format(i, movement))
