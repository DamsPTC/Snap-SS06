// Cibles vérifiées dans le Mach-O 14.25.0.48, SHA-256 a1f0ad6907587bee27f9700d05106da5beec4650acb0493e2409ff99cbfbf390.
// Adresses avant ASLR, documentation seulement : résolution par nom au runtime.
// 0x1053087b8; v24@0:8@?16
SS06_LOGONLY_TARGET("SCDeviceCheckFeature", "_appleDeviceCheckTokenWithCompletionHandler:", DeviceCheck, "v@", NULL)
// 0x105388d40; @32@0:8@16@24
SS06_LOGONLY_TARGET("SCArgosImpl", "generateAttestationPayload:requestParameters:", Argos, "@@@", NULL)
// 0x105388f6c; @32@0:8@16@24
SS06_LOGONLY_TARGET("SCPreLoginAttestationImpl", "generateAttestationPayloadForLogin:requestPath:", Attestation, "@@@", NULL)
// 0x105388f74; @32@0:8@16@24
SS06_LOGONLY_TARGET("SCPreLoginAttestationImpl", "generateAttestationPayloadForRegister:requestPath:", Attestation, "@@@", NULL)
// 0x105388f7c; @36@0:8@16@24i32
SS06_LOGONLY_TARGET("SCPreLoginAttestationImpl", "generateAttestationPayloadForLoginOrRegistration:requestPath:requestType:", AttestationTyped, "@@@i", NULL)
// 0x105389030; @36@0:8@16@24i32
SS06_LOGONLY_TARGET("SCPreLoginAttestationImpl", "_getAttestationPayload:path:requestType:", AttestationTyped, "@@@i", NULL)
// 0x105406ff8; v40@0:8@16@24@?32
SS06_LOGONLY_TARGET("UNISCJanusRegistrationService", "registerWithUsernamePasswordWithRequest:callOptionsBuilder:handler:", RPC, "v@@@", "/snapchat.janus.api.RegistrationService/RegisterWithUsernamePassword")
// 0x1054070dc; v40@0:8@16@24@?32
SS06_LOGONLY_TARGET("UNISCJanusRegistrationService", "appRegisterAnswerChallengeWithRequest:callOptionsBuilder:handler:", RPC, "v@@@", "/snapchat.janus.api.RegistrationService/AppRegisterAnswerChallenge")
// 0x1054071c0; v40@0:8@16@24@?32
SS06_LOGONLY_TARGET("UNISCJanusRegistrationService", "webRegisterWithRequest:callOptionsBuilder:handler:", RPC, "v@@@", "/snapchat.janus.api.RegistrationService/WebRegister")
// 0x1054072a4; v40@0:8@16@24@?32
SS06_LOGONLY_TARGET("UNISCJanusRegistrationService", "webRegisterVerifyChallengeWithRequest:callOptionsBuilder:handler:", RPC, "v@@@", "/snapchat.janus.api.RegistrationService/WebRegisterVerifyChallenge")
// 0x105407388; v40@0:8@16@24@?32
SS06_LOGONLY_TARGET("UNISCJanusRegistrationService", "webRegisterRequestChallengeWithRequest:callOptionsBuilder:handler:", RPC, "v@@@", "/snapchat.janus.api.RegistrationService/WebRegisterRequestChallenge")
// 0x10540746c; v40@0:8@16@24@?32
SS06_LOGONLY_TARGET("UNISCJanusRegistrationService", "registerWithGoogleWithRequest:callOptionsBuilder:handler:", RPC, "v@@@", "/snapchat.janus.api.RegistrationService/RegisterWithGoogle")
// 0x105407550; v40@0:8@16@24@?32
SS06_LOGONLY_TARGET("UNISCJanusRegistrationService", "getPreferredVerificationMethodWithRequest:callOptionsBuilder:handler:", RPC, "v@@@", "/snapchat.janus.api.RegistrationService/GetPreferredVerificationMethod")
// 0x105407634; v40@0:8@16@24@?32
SS06_LOGONLY_TARGET("UNISCJanusRegistrationService", "checkEmailWithRequest:callOptionsBuilder:handler:", RPC, "v@@@", "/snapchat.janus.api.RegistrationService/CheckEmail")
// 0x105407718; v40@0:8@16@24@?32
SS06_LOGONLY_TARGET("UNISCJanusRegistrationService", "requestPhoneVerificationCodeWithRequest:callOptionsBuilder:handler:", RPC, "v@@@", "/snapchat.janus.api.RegistrationService/RequestPhoneVerificationCode")
// 0x1054077fc; v40@0:8@16@24@?32
SS06_LOGONLY_TARGET("UNISCJanusRegistrationService", "verifyPhoneWithCodeWithRequest:callOptionsBuilder:handler:", RPC, "v@@@", "/snapchat.janus.api.RegistrationService/VerifyPhoneWithCode")
// 0x1054078e0; v40@0:8@16@24@?32
SS06_LOGONLY_TARGET("UNISCJanusRegistrationService", "registerWithPhoneEmailWithRequest:callOptionsBuilder:handler:", RPC, "v@@@", "/snapchat.janus.api.RegistrationService/RegisterWithPhoneEmail")
// 0x1054079c4; v40@0:8@16@24@?32
SS06_LOGONLY_TARGET("UNISCJanusRegistrationService", "registerOAuthWithRequest:callOptionsBuilder:handler:", RPC, "v@@@", "/snapchat.janus.api.RegistrationService/RegisterOAuth")
// 0x10540aa80; v40@0:8@16@24@?32
SS06_LOGONLY_TARGET("UNISCJanusLoginService", "fetchLoginOptionsWithRequest:callOptionsBuilder:handler:", RPC, "v@@@", "/snapchat.janus.api.LoginService/FetchLoginOptions")
// 0x10540ab64; v40@0:8@16@24@?32
SS06_LOGONLY_TARGET("UNISCJanusLoginService", "appLoginWithRequest:callOptionsBuilder:handler:", RPC, "v@@@", "/snapchat.janus.api.LoginService/AppLogin")
// 0x10540ac48; v40@0:8@16@24@?32
SS06_LOGONLY_TARGET("UNISCJanusLoginService", "appLoginAnswerChallengeWithRequest:callOptionsBuilder:handler:", RPC, "v@@@", "/snapchat.janus.api.LoginService/AppLoginAnswerChallenge")
// 0x10540ad2c; v40@0:8@16@24@?32
SS06_LOGONLY_TARGET("UNISCJanusLoginService", "loginWithPasswordWithRequest:callOptionsBuilder:handler:", RPC, "v@@@", "/snapchat.janus.api.LoginService/LoginWithPassword")
// 0x10540ae10; v40@0:8@16@24@?32
SS06_LOGONLY_TARGET("UNISCJanusLoginService", "loginWith1TLv1WithRequest:callOptionsBuilder:handler:", RPC, "v@@@", "/snapchat.janus.api.LoginService/LoginWith1TLv1")
// 0x10540aef4; v40@0:8@16@24@?32
SS06_LOGONLY_TARGET("UNISCJanusLoginService", "loginWith1TLv3WithRequest:callOptionsBuilder:handler:", RPC, "v@@@", "/snapchat.janus.api.LoginService/LoginWith1TLv3")
// 0x10540afd8; v40@0:8@16@24@?32
SS06_LOGONLY_TARGET("UNISCJanusLoginService", "sendLoginCodeWithRequest:callOptionsBuilder:handler:", RPC, "v@@@", "/snapchat.janus.api.LoginService/SendLoginCode")
// 0x10540b0bc; v40@0:8@16@24@?32
SS06_LOGONLY_TARGET("UNISCJanusLoginService", "sendODLVCodeWithRequest:callOptionsBuilder:handler:", RPC, "v@@@", "/snapchat.janus.api.LoginService/SendODLVCode")
// 0x10540b1a0; v40@0:8@16@24@?32
SS06_LOGONLY_TARGET("UNISCJanusLoginService", "sendTwoFACodeWithRequest:callOptionsBuilder:handler:", RPC, "v@@@", "/snapchat.janus.api.LoginService/SendTwoFACode")
// 0x10540b284; v40@0:8@16@24@?32
SS06_LOGONLY_TARGET("UNISCJanusLoginService", "sendChannelVerificationCodeWithRequest:callOptionsBuilder:handler:", RPC, "v@@@", "/snapchat.janus.api.LoginService/SendChannelVerificationCode")
// 0x10540b368; v40@0:8@16@24@?32
SS06_LOGONLY_TARGET("UNISCJanusLoginService", "verifyLoginCodeWithRequest:callOptionsBuilder:handler:", RPC, "v@@@", "/snapchat.janus.api.LoginService/VerifyLoginCode")
// 0x10540b44c; v40@0:8@16@24@?32
SS06_LOGONLY_TARGET("UNISCJanusLoginService", "verifyODLVWithRequest:callOptionsBuilder:handler:", RPC, "v@@@", "/snapchat.janus.api.LoginService/VerifyODLV")
// 0x10540b530; v40@0:8@16@24@?32
SS06_LOGONLY_TARGET("UNISCJanusLoginService", "verifyTwoFAWithRequest:callOptionsBuilder:handler:", RPC, "v@@@", "/snapchat.janus.api.LoginService/VerifyTwoFA")
// 0x10540b614; v40@0:8@16@24@?32
SS06_LOGONLY_TARGET("UNISCJanusLoginService", "verifyChannelWithRequest:callOptionsBuilder:handler:", RPC, "v@@@", "/snapchat.janus.api.LoginService/VerifyChannel")
// 0x10540b6f8; v40@0:8@16@24@?32
SS06_LOGONLY_TARGET("UNISCJanusLoginService", "reactivateAccountWithRequest:callOptionsBuilder:handler:", RPC, "v@@@", "/snapchat.janus.api.LoginService/ReactivateAccount")
// 0x1006255a8; @48@0:8@16@24@32@40
SS06_LOGONLY_TARGET("SCNGrpcUnifiedGrpcService", "unaryCall:request:callOptionsBuilder:handler:", Transport, "@@@@@", NULL)

