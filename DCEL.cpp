/*
x1,y1 x2,y2 x3,y3  ............... xn,yn
*/

struct Vertex{
    int x;
    int y;
    Edge* halfEdge;
    
}

struct Edge{
    Vertex* v1;
    Edge* twinEdge;
    Edge* prev;
    Edge* next;
    Face* left;
   // 
}

struct Face{
    Edge* incidentEdge;
}

class DCEL{
    vector<Vertex*> vertices;
    vector<Face*> faces;
    vector<Edge*> edges;


    //helper functions
    addVertex(int x1,int y1){
        // create new vertex obj
        // add to list of vertices
        // if it is a first one leave it like that
        // else add edge with target vertex as last vertex in vertices
    }


    addEdge(Vertex* v1,Vertex* v2){
        // v1 will be the target
        // create twin edge with v2 as target
        // edges[-1].next = curr edge
        // curr edge.prev = edges[-1]
        // similar for twin
    }

    addFace(Edge* incident){
        // create new face and add to faces.
    }
}


int main(){
    /*
x1,y1 x2,y2 x3,y3  ............... xn,yn
*/ -> vertices
DCEL* dcel = new DCEL();
    for(vertex : vertices ){
        dcel->addVertex(vertex);
    }
    addFace(dcel->edges[0]);
    addFace(dcel->edges[0]->twin);
}

