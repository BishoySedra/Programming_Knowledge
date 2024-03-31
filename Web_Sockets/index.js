import Express from "express";
import { Server } from "socket.io";
import { createServer } from "http";

// create an instance of express
const app = Express();

// enable json parsing
app.use(Express.json());

// enable static files for the public folder
app.use(Express.static("public"));

// create a server instance
const server = createServer(app);

// create a new instance of socket.io by passing the server object
const io = new Server(server);

app.get("/", (req, res) => {
  // send the index.html file
  res.sendFile("index.html");
});

// listen for connection event
io.on("connection", (socket) => {
  //   console.log("A user connected", socket.id);

  socket.on("chat message", (msg) => {
    console.log("message: ", msg);
  });

  socket.emit("show", "Hello from server");
});

server.listen(3000, () => {
  console.log("Server is running on port 3000");
});
