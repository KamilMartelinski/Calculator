  const calculator = () => {

    const readline = require('readline').createInterface({ //prompt
      input: process.stdin,
      output: process.stdout
    });

    const calculate = (x) => { //calculating the output
      try{
        return eval(x);
      }
      catch(error){
        return "the input isnt correct"; //error handling
      }
    }
    
    readline.question('Enter a math problem:   ', mathProblem => { //getting input and displaying output
      console.log(`the solution is: ${calculate(mathProblem)}`);
      readline.close();
    });  
  }

  calculator(); //only works with node