/** Binding for the cookie-session library */
let make:
  (~name: string, ~keys: list(string), ~secret: string) =>
  Express.Middleware.t;