// ========== INITIALIZE CODE EDITOR ==========
let editor;

document.addEventListener("DOMContentLoaded", function () {
  // Initialize CodeMirror
  editor = CodeMirror.fromTextArea(document.getElementById("code-editor"), {
    mode: "text/x-csrc",
    theme: "dracula",
    lineNumbers: true,
    autoCloseBrackets: true,
    matchBrackets: true,
    indentUnit: 4,
    tabSize: 4,
    indentWithTabs: false,
    lineWrapping: true,
  });

  // Set initial code
  editor.setValue(`#include <stdio.h>

int main() {
    printf("Hello, CSE115 Student!\\n");
    printf("Welcome to C Programming!\\n");
    return 0;
}`);
});

// ========== CODE EXAMPLES ==========
const codeExamples = {
  hello: `#include <stdio.h>

int main() {
    printf("Hello, World!\\n");
    printf("Welcome to C Programming!\\n");
    return 0;
}`,

  input: `#include <stdio.h>

int main() {
    int age;
    char name[50];
    
    printf("Enter your name: ");
    scanf("%s", name);
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("\\nHello %s!\\n", name);
    printf("You are %d years old.\\n", age);
    
    return 0;
}`,

  array: `#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    
    printf("Array elements: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
        sum += arr[i];
    }
    
    printf("\\nSum = %d\\n", sum);
    printf("Average = %.2f\\n", (float)sum / 5);
    
    return 0;
}`,

  loop: `#include <stdio.h>

int main() {
    int n;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("\\nCounting from 1 to %d:\\n", n);
    for(int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    
    printf("\\n\\nMultiplication table of %d:\\n", n);
    for(int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\\n", n, i, n * i);
    }
    
    return 0;
}`,

  function: `#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if(n <= 1) return 1;
    return n * factorial(n - 1);
}

// Function to check prime
int isPrime(int n) {
    if(n <= 1) return 0;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("\\nFactorial of %d = %d\\n", num, factorial(num));
    
    if(isPrime(num))
        printf("%d is a Prime number\\n", num);
    else
        printf("%d is NOT a Prime number\\n", num);
    
    return 0;
}`,

  pointer: `#include <stdio.h>

int main() {
    int x = 10;
    int *ptr = &x;  // Pointer to x
    
    printf("Value of x: %d\\n", x);
    printf("Address of x: %p\\n", &x);
    printf("Value of ptr: %p\\n", ptr);
    printf("Value at ptr (*ptr): %d\\n", *ptr);
    
    // Modify using pointer
    *ptr = 20;
    printf("\\nAfter *ptr = 20:\\n");
    printf("Value of x: %d\\n", x);
    
    // Array with pointer
    int arr[] = {1, 2, 3, 4, 5};
    int *p = arr;
    
    printf("\\nArray using pointer:\\n");
    for(int i = 0; i < 5; i++) {
        printf("*(p + %d) = %d\\n", i, *(p + i));
    }
    
    return 0;
}`,

  string: `#include <stdio.h>

// Function to find string length
int myStrlen(char *s) {
    int len = 0;
    while(*s != '\\0') {
        len++;
        s++;
    }
    return len;
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);
    
    printf("\\nYour string: %s\\n", str);
    printf("Length: %d\\n", myStrlen(str));
    
    // Check palindrome
    int len = myStrlen(str);
    int isPalin = 1;
    for(int i = 0; i < len/2; i++) {
        if(str[i] != str[len-1-i]) {
            isPalin = 0;
            break;
        }
    }
    
    if(isPalin)
        printf("'%s' is a Palindrome!\\n", str);
    else
        printf("'%s' is NOT a Palindrome\\n", str);
    
    return 0;
}`,

  struct: `#include <stdio.h>

// Define structure
struct Student {
    int id;
    char name[50];
    float cgpa;
};

int main() {
    struct Student s1;
    
    printf("Enter Student ID: ");
    scanf("%d", &s1.id);
    
    printf("Enter Name: ");
    scanf("%s", s1.name);
    
    printf("Enter CGPA: ");
    scanf("%f", &s1.cgpa);
    
    printf("\\n===== Student Record =====\\n");
    printf("ID: %d\\n", s1.id);
    printf("Name: %s\\n", s1.name);
    printf("CGPA: %.2f\\n", s1.cgpa);
    
    if(s1.cgpa >= 3.5)
        printf("Status: Dean's List! 🌟\\n");
    else if(s1.cgpa >= 3.0)
        printf("Status: Good Standing\\n");
    else
        printf("Status: Needs Improvement\\n");
    
    return 0;
}`,
};

// ========== LOAD EXAMPLE ==========
function loadExample() {
  const select = document.getElementById("examples");
  const example = codeExamples[select.value];

  if (example && editor) {
    editor.setValue(example);
    document.getElementById("input-area").value = "";
    document.getElementById("output").innerHTML =
      '<span class="placeholder">Your output will appear here...</span>';
    document.getElementById("output").className = "output-area";
  }

  select.value = "";
}

// ========== CLEAR CODE ==========
function clearCode() {
  if (editor) {
    editor.setValue(`#include <stdio.h>

int main() {
    // Write your code here
    
    return 0;
}`);
  }
  document.getElementById("input-area").value = "";
  document.getElementById("output").innerHTML =
    '<span class="placeholder">Your output will appear here...</span>';
  document.getElementById("output").className = "output-area";
  document.getElementById("status").textContent = "Ready to compile";
  document.getElementById("status").className = "status";
  document.getElementById("execution-time").textContent = "";
}

// ========== RUN CODE ==========
async function runCode() {
  const code = editor
    ? editor.getValue()
    : document.getElementById("code-editor").value;
  const input = document.getElementById("input-area").value;
  const outputDiv = document.getElementById("output");
  const statusDiv = document.getElementById("status");
  const runBtn = document.getElementById("run-btn");
  const execTime = document.getElementById("execution-time");

  // Update UI - Loading state
  runBtn.innerHTML = '<span class="spinner"></span> Running...';
  runBtn.classList.add("loading");
  statusDiv.textContent = "Compiling and running...";
  statusDiv.className = "status running";
  outputDiv.innerHTML = "Compiling your code...";
  outputDiv.className = "output-area";

  const startTime = performance.now();

  try {
    // Use JDoodle API (Free tier)
    const response = await fetch("https://api.jdoodle.com/v1/execute", {
      method: "POST",
      headers: {
        "Content-Type": "application/json",
      },
      body: JSON.stringify({
        clientId: "fbd2e78dd0f8f8f6e47dfa6e9b63a3a2", // Demo key
        clientSecret:
          "af13f89eadc62f9c2d8a1a64f33e91a0a34d3e8f0b2c4d5e6f7a8b9c0d1e2f3a4", // Demo key
        script: code,
        stdin: input,
        language: "c",
        versionIndex: "5",
      }),
    });

    // If JDoodle fails, try Wandbox as backup
    if (!response.ok) {
      throw new Error("Primary API failed");
    }

    const result = await response.json();
    const endTime = performance.now();
    const duration = ((endTime - startTime) / 1000).toFixed(2);

    execTime.textContent = `Execution time: ${duration}s`;

    if (
      result.error ||
      (result.output && result.output.toLowerCase().includes("error"))
    ) {
      // Compilation Error
      outputDiv.textContent =
        result.output || result.error || "Compilation error occurred";
      outputDiv.className = "output-area error";
      statusDiv.textContent = "❌ Compilation Error";
      statusDiv.className = "status error";
    } else {
      // Success!
      outputDiv.textContent = result.output || "(No output)";
      outputDiv.className = "output-area success";
      statusDiv.textContent = "✅ Compiled Successfully!";
      statusDiv.className = "status success";

      // Trigger celebration!
      triggerCelebration();
    }
  } catch (error) {
    // Try backup API (Wandbox)
    try {
      const wandboxResponse = await fetch(
        "https://wandbox.org/api/compile.json",
        {
          method: "POST",
          headers: {
            "Content-Type": "application/json",
          },
          body: JSON.stringify({
            code: code,
            compiler: "gcc-head-c",
            stdin: input,
          }),
        }
      );

      const wandboxResult = await wandboxResponse.json();
      const endTime = performance.now();
      const duration = ((endTime - startTime) / 1000).toFixed(2);

      execTime.textContent = `Execution time: ${duration}s`;

      if (wandboxResult.compiler_error || wandboxResult.signal) {
        outputDiv.textContent =
          wandboxResult.compiler_error ||
          wandboxResult.program_error ||
          "Compilation error";
        outputDiv.className = "output-area error";
        statusDiv.textContent = "❌ Compilation Error";
        statusDiv.className = "status error";
      } else {
        outputDiv.textContent = wandboxResult.program_output || "(No output)";
        outputDiv.className = "output-area success";
        statusDiv.textContent = "✅ Compiled Successfully!";
        statusDiv.className = "status success";
        triggerCelebration();
      }
    } catch (backupError) {
      // Both APIs failed - show helpful message
      outputDiv.innerHTML = `<strong>⚠️ Unable to connect to compiler service</strong>

This could be due to:
• Network connectivity issues
• API rate limiting (try again in a minute)
• Browser blocking cross-origin requests

<strong>💡 Alternatives:</strong>
• Try using <a href="https://www.onlinegdb.com/online_c_compiler" target="_blank">OnlineGDB</a>
• Or <a href="https://www.programiz.com/c-programming/online-compiler/" target="_blank">Programiz C Compiler</a>

Copy your code and test it there!`;
      outputDiv.className = "output-area error";
      statusDiv.textContent = "⚠️ Connection Failed";
      statusDiv.className = "status error";
    }
  }

  // Reset button
  runBtn.innerHTML = '<span class="btn-icon">▶</span> Run Code';
  runBtn.classList.remove("loading");
}

// ========== CELEBRATION EFFECTS ==========
function triggerCelebration() {
  // Show overlay
  document.getElementById("celebration").classList.remove("hidden");

  // Fire confetti!
  const duration = 3000;
  const end = Date.now() + duration;

  // Confetti burst from both sides
  const colors = ["#3fb950", "#58a6ff", "#f0f6fc", "#d29922", "#a371f7"];

  (function frame() {
    confetti({
      particleCount: 3,
      angle: 60,
      spread: 55,
      origin: { x: 0, y: 0.7 },
      colors: colors,
    });
    confetti({
      particleCount: 3,
      angle: 120,
      spread: 55,
      origin: { x: 1, y: 0.7 },
      colors: colors,
    });

    if (Date.now() < end) {
      requestAnimationFrame(frame);
    }
  })();

  // Center burst
  confetti({
    particleCount: 100,
    spread: 70,
    origin: { y: 0.6 },
    colors: colors,
  });
}

function closeCelebration() {
  document.getElementById("celebration").classList.add("hidden");
}

// Close celebration on escape key
document.addEventListener("keydown", function (e) {
  if (e.key === "Escape") {
    closeCelebration();
  }
});

// ========== KEYBOARD SHORTCUT ==========
document.addEventListener("keydown", function (e) {
  // Ctrl+Enter or Cmd+Enter to run
  if ((e.ctrlKey || e.metaKey) && e.key === "Enter") {
    e.preventDefault();
    runCode();
  }
});
