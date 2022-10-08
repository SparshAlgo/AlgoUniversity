graph = [[]]
vertices = int(input())
edges = int(input())
def addEdge(i,j):
    graph[i].append(j)
    graph[j].append(i)

def printGraph():
    for i in range(vertices):
        print(i, end=" => ")
        for j in graph[i]:
            print("{}, ".format(j), end="")
        print()

def removeEdge(i,j):
    graph[i].remove(j)
    graph[j].remove(i)

for i in range(vertices):
    graph.append([])
for i in range(edges):
    v1,v2 = map(int,(input().split()))
    graph[v1].append(v2)
    graph[v2].append(v1)

addEdge(0,1)
addEdge(0,3)
printGraph()
removeEdge(0,4)
printGraph()