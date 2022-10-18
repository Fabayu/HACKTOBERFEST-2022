import React from 'react';
import './App.css'
// axios is used to make  a GET request by an API
import axios from 'axios';

class App extends React.Component{
    state = {  advice : ' '     };

    // Remember we need to call an API to generate a Random Advice
    // So, we will use Component Did Mount
    // Life cycle Method
    componentDidMount(){
      this.fetchAdvice();
    }
    fetchAdvice = () => {
        axios.get('https://api.adviceslip.com/advice')
        .then((response) => {
            const {advice} = response.data.slip;

           this.setState({ advice });
        })
        .catch((error) => {
           console.log(error);
        });
    }
    render(){
 
        return (
            
           <div className = "app">
               <div className = "card">
               <h1 className = "heading">{ this.state.advice }</h1>
               <button className = "button" onClick = {this.fetchAdvice}>
                   <span>Give Advice!</span>
               </button>
                   </div>  
               </div>
        );
    }
}

export default App