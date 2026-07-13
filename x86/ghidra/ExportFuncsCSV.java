// Export the analyzed function list as functions.csv (address,name,sizeBytes)
// in the exact format the Woody transpiler (transpile.py) consumes.
// @category Cossacks
import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import java.io.*;

public class ExportFuncsCSV extends GhidraScript {
    public void run() throws Exception {
        String out = System.getenv("FUNCS_OUT");
        if (out == null) out = "C:/cossacks_wasm/x86/functions.csv";
        FunctionManager fm = currentProgram.getFunctionManager();
        PrintWriter w = new PrintWriter(new FileWriter(out));
        w.println("address,name,sizeBytes");
        int n = 0;
        for (Function fn : fm.getFunctions(true)) {
            w.println(fn.getEntryPoint() + "," + fn.getName() + "," + fn.getBody().getNumAddresses());
            n++;
        }
        w.close();
        println("EXPORTED " + n + " functions to " + out);
    }
}
