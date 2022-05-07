function solution(){
    let text = "";
    for (let i = 0; i < 10; i++) {
        if (i === 3) { 
        text = console.log("You are here ")
        break; 
        }
        text = "  " + i + " ";
        console.log(text)
    }

    console.log("--------------------")

    let str = "";
    for (let i = 0; i < 10; i++) {
        if (i === 3) { 
        str = console.log("I am here ")
        continue; 
        }
        str = "  " + i + " ";
        console.log(str)
    }
}

const sol = solution();