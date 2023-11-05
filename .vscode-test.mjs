import { defineConfig } from "@vscode/test-cli";

export default defineConfig({
  files: "out/tests/**/*.test.js",
  mocha: {
    ui: "tdd",
    timeout: 20000,
  }
});