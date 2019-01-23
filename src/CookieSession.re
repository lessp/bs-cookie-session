[@bs.deriving abstract]
type cookieSession = {
  name: string,
  keys: list(string),
  secret: string,
};

[@bs.module]
external makeCookieSession: cookieSession => Express.Middleware.t =
  "cookie-session";

let make = (~name, ~keys, ~secret) =>
  makeCookieSession(cookieSession(~name, ~keys, ~secret));