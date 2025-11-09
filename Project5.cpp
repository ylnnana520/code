<!DOCTYPE html>            
<button class="btn" onclick="appendNumber('5')">5</button>            
<button class="btn" onclick="appendNumber('6')">6</button>            
<button class="btn operator" onclick="appendOperator('*')">×</button>            
<button class="btn" onclick="appendNumber('1')">1</button>            
<button class="btn" onclick="appendNumber('2')">2</button>            
<button class="btn" onclick="appendNumber('3')">3</button>            
<button class="btn operator" onclick="appendOperator('-')">−</button>            
<button class="btn" onclick="appendNumber('0')">0</button>            
<button class="btn" onclick="appendDot()">.</button>            
<button class="btn operator" onclick="appendOperator('+')">+</button>            
<button class="btn equals" onclick="calculate()">=</button>            
<button class="btn clear" onclick="clearDisplay()">C</button>        
</div>    
</div>    
<script>        
const display = document.getElementById('display');        
let currentInput = '';        
let lastOperator = '';        
let shouldReset = false;
        function appendNumber(num) {            
if (shouldReset) {                
currentInput = '';                
shouldReset = false;            
}            
currentInput += num;            
updateDisplay();        
}
        function appendOperator(op) {            
if (currentInput === '') return;            
if (/[+\-*/.]$/.test(currentInput)) {                
currentInput = currentInput.slice(0, -1) + op;            
} else {                
currentInput += op;            
}            
shouldReset = false;            
updateDisplay();        
}
        function appendDot() {            
if (shouldReset) {                
currentInput = '';                
shouldReset = false;            
}            
const parts = currentInput.split(/[+\-*/]/);            
const lastPart = parts[parts.length - 1];            
if (lastPart.includes('.')) return;            
currentInput += '.';            
updateDisplay();        
}
        function calculate() {            
try {                
if (currentInput === '') return;                
if (/[+\-*/.]$/.test(currentInput)) {                    
currentInput = currentInput.slice(0, -1);                
}                
let result = eval(currentInput);                
display.value = result;                
currentInput = result.toString();                
shouldReset = true;            
} catch (e) {                
display.value = 'Error';                
currentInput = '';                
shouldReset = true;            
}        
}
        function clearDisplay() {            
currentInput = '';            
updateDisplay();        
}
        function updateDisplay() {            
display.value = currentInput;        
}    
</script>
</body>
</html>