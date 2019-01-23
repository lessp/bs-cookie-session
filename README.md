# bs-cookie-session

Barebones BuckleScript-bindings for [cookie-session](https://github.com/expressjs/cookie-session) to be used with [bs-express](https://github.com/reasonml-community/bs-express/)

These bindings are currently very barebones, so feel free to contribute!

# Getting started

## Example

```ocaml
open Express;

let app = express();

App.use(
  app,
  CookieSession.make(
    ~name="name",
    ~keys=["key1", "key2"],
    ~secret="somesecret",
  ),
);

// etc
```

## Installation

```bash
npm i -S bs-cookie-session
```

## Configuring

Add bs-cookie-session as a dependency to your `bsconfig.json`

```json
"bs-dependencies": [
  "bs-express",
  // other dependencies
],
```

# License

MIT
