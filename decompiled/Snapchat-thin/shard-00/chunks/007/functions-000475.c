/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100979fac; end: 10097a007; -[_TtC10GTMAppAuth15KeychainWrapper keychainAttributes] */

void FUN_100979fac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_100979f8c(0);
  FUN_10097a008();
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  func_0x000107c5fe08();
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10097a008; end: 10097a04b;  */

void FUN_10097a008(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam00000001130a54f0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_100979f8c(0xff);
  puVar2 = PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8;
  func_0x000107c61520(PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8,uVar1);
  puRam00000001130a54f0 = puVar2;
  return;
}



/* Entry: 10097a04c; end: 10097a12b; -[GTMKeychainStore initWithItemName:keychainAttributes:keychainHelper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10097a04c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_60;
  long lStack_58;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  uVar4 = 0;
  FUN_100979f8c(0);
  uVar5 = uVar4;
  FUN_10097a008();
  func_0x000107c5fe10(param_4,uVar4,uVar5);
  *(undefined8 *)(param_1 + _DAT_1130a5510) = 0;
  *(undefined8 *)(param_1 + _DAT_1130a5518) = 0;
  puVar1 = (undefined8 *)(param_1 + _DAT_1130a5500);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_1130a5508) = param_4;
  *(undefined8 *)(param_1 + _DAT_1130a54f8) = param_5;
  puVar2 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar3;
  func_0x000107c615f0(param_5);
  func_0x000107c61154(&lStack_60,puVar2);
  return;
}



/* Entry: 10097a12c; end: 10097a387; -[GIDSignIn initWithKeychainStore:] */

undefined8 * FUN_10097a12c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  puStack_68 = PTR_PTR_1126e3640;
  puVar2 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x000107c4c12c();
    func_0x000107c61180();
    if (puVar3 != (undefined *)0x0) {
      puVar4 = PTR_PTR_1126a7220;
      func_0x000107c40124();
      func_0x000107c61180();
      uVar10 = puVar2[7];
      puVar2[7] = puVar4;
      func_0x000107c61170(uVar10);
    }
    puVar5 = puVar2;
    func_0x000107c49de4();
    if ((int)puVar5 != 0) {
      func_0x000107c4fe78(puVar2);
    }
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar6 = PTR_PTR_1126ae4b0;
    func_0x000107c4444c();
    func_0x000107c61180();
    func_0x000107c5c1f8(puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar7 = PTR_PTR_1126ae4b0;
    func_0x000107c4445c();
    func_0x000107c61180();
    func_0x000107c5c1f8(puVar6);
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    puVar7 = PTR_PTR_1126ae348;
    func_0x000107c610f4();
    puVar8 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x000107c3ac40(PTR__OBJC_CLASS___NSURL_1126ae598);
    func_0x000107c61180();
    puVar9 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x000107c3ac40(PTR__OBJC_CLASS___NSURL_1126ae598);
    func_0x000107c61180();
    func_0x000107c45898();
    uVar10 = puVar2[2];
    puVar2[2] = puVar7;
    func_0x000107c61170(uVar10);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar8);
    func_0x000107c6119c(puVar2 + 5,param_3);
    puVar7 = PTR_PTR_1126ae438;
    func_0x000107c610f4(PTR_PTR_1126ae438);
    func_0x000107c47080();
    uVar10 = puVar2[2];
    func_0x000107c5cb80(uVar10);
    func_0x000107c61180();
    func_0x000107c4ceb8(puVar7);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(uVar1);
  return puVar2;
}



/* Entry: 10097a388; end: 10097a49f; +[GIDSignIn configurationFromBundle:] */

void FUN_10097a388(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR_PTR_1126a7220;
  func_0x000107c61174(param_3);
  func_0x000107c400f4(puVar1,param_2,param_3,&PTR____CFConstantStringClassReference_110daaa18);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126a7220;
  func_0x000107c400f4(PTR_PTR_1126a7220,param_2,param_3,
                      &PTR____CFConstantStringClassReference_110daaa38);
  func_0x000107c61180();
  puVar3 = PTR_PTR_1126a7220;
  func_0x000107c400f4(PTR_PTR_1126a7220,param_2,param_3,
                      &PTR____CFConstantStringClassReference_110daaa58);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126a7220;
  func_0x000107c400f4(PTR_PTR_1126a7220,param_2,param_3,
                      &PTR____CFConstantStringClassReference_110daaa78);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar1 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126ae470;
    func_0x000107c610f4(PTR_PTR_1126ae470);
    func_0x000107c45e5c();
  }
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10097a4a0; end: 10097a50b; +[GIDSignIn configValueFromBundle:forKey:] */

void FUN_10097a4a0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  
  func_0x000107c4d9bc(param_3,param_2,param_4);
  func_0x000107c61180();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c61158(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar2 = param_3;
  func_0x000107c6115c(param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x000107c61174(param_3);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10097a50c; end: 10097a623; -[GIDConfiguration initWithClientID:serverClientID:hostedDomain:openIDRealm:] */

undefined1 *
FUN_10097a50c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  puStack_48 = PTR_PTR_1126e3610;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10097a624; end: 10097a687; -[GIDSignIn isFreshInstall] */

uint FUN_10097a624(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x000107c5ba34();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3ebc0();
  if (((ulong)puVar2 & 1) == 0) {
    func_0x000107c52de0(puVar1,param_2,1,&PTR____CFConstantStringClassReference_110daa9b8);
  }
  func_0x000107c61170(puVar1);
  return (uint)puVar2 ^ 1;
}



/* Entry: 10097a688; end: 10097a693; +[GIDSignInPreferences googleAuthorizationServer] */

undefined ** FUN_10097a688(void)

{
  return &PTR____CFConstantStringClassReference_110daac58;
}



/* Entry: 10097a694; end: 10097a69f; +[GIDSignInPreferences googleTokenServer] */

undefined ** FUN_10097a694(void)

{
  return &PTR____CFConstantStringClassReference_110daac78;
}



/* Entry: 10097a6a0; end: 10097a6b3; -[OIDServiceConfiguration initWithAuthorizationEndpoint:tokenEndpoint:] */

void FUN_10097a6a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010bff5a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithAuthorizationEndpoint_to_1125db068,param_3,param_4,0,0,0,0);
  return;
}



/* Entry: 10097a6b4; end: 10097a833; -[OIDServiceConfiguration initWithAuthorizationEndpoint:tokenEndpoint:issuer:registrationEndpoint:endSessionEndpoint:discoveryDocument:] */

undefined1 *
FUN_10097a6b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  puStack_58 = PTR_PTR_1126e3548;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_7;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_8;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10097a834; end: 10097a8ab; -[GIDAuthStateMigration initWithKeychainStore:] */

undefined1 * FUN_10097a834(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126e35f8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x000107c6119c((undefined1 *)((long)puVar2 + 8),param_3);
  }
  func_0x000107c61170(uVar1);
  return (undefined1 *)puVar2;
}



/* Entry: 10097a8ac; end: 10097a8b3; -[OIDServiceConfiguration tokenEndpoint] */

undefined8 FUN_10097a8ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10097a8b4; end: 10097a9c7; -[GIDAuthStateMigration migrateIfNeededWithTokenURL:callbackPath:keychainName:isFreshInstall:] */

/* WARNING: Removing unreachable block (ram,0x00010097a970) */

void FUN_10097a8b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x000107c5ba34();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3ebc0();
  if (((ulong)puVar2 & 1) == 0) {
    if ((param_6 & 1) == 0) {
      lVar3 = param_1;
      func_0x000107c42cf8(param_1,param_2,param_3,param_4);
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c4a90c(param_1);
        func_0x000107c61180();
        func_0x000107c51668();
        func_0x000107c61170(param_1);
      }
      func_0x000107c61170(lVar3);
    }
    func_0x000107c52de0(puVar1,param_2,1,&PTR____CFConstantStringClassReference_110daa1d8);
  }
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10097a9c8; end: 10097a9d3; -[GIDAuthStateMigration .cxx_destruct] */

void FUN_10097a9c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10097a9d4; end: 10097a9f3;  */

void FUN_10097a9d4(void)

{
  func_0x000107c61168(&PTR_PTR_112da3f40);
  return;
}



/* Entry: 10097a9f4; end: 10097aa3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10097a9f4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_1130525f0) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10097aa40; end: 10097aabb;  */

void FUN_10097aa40(undefined8 param_1)

{
  if (lRam0000000112da3b90 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e63c7f8);
  return;
}



/* Entry: 10097aabc; end: 10097aae3;  */

void FUN_10097aabc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 10097aae4; end: 10097abab;  */

void FUN_10097aae4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  
  ppuVar2 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puStack_40 = &UNK_1014a6b98;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1014a6ba0;
  puStack_48 = &UNK_1103c7e10;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c3e4fc(puVar1,param_2,ppuVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  FUN_100098c78(0);
  func_0x000107c610f8();
  FUN_10097abc0(puVar1);
  return;
}



/* Entry: 10097abac; end: 10097abbf;  */

void FUN_10097abac(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10097abc0; end: 10097ac0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10097abc0(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113052260) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10097ac0c; end: 10097ac37;  */

void FUN_10097ac0c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10097ac38; end: 10097ac3f;  */

void FUN_10097ac38(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10097ac40; end: 10097ac93;  */

void FUN_10097ac40(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10097ac94; end: 10097ac9b;  */

void FUN_10097ac94(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_10009281c();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_10097ad34();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_10097adc0();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10097ac9c; end: 10097ad33;  */

void FUN_10097ac9c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_10009281c();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_10097ad34();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_10097adc0();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  *param_1 = param_2;
  return;
}



/* Entry: 10097ad34; end: 10097adbf;  */

void FUN_10097ad34(undefined8 param_1)

{
  if (lRam0000000112da5e48 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e63dee4);
  return;
}



/* Entry: 10097adc0; end: 10097ae23;  */

void FUN_10097adc0(void)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = 0;
  func_0x00010097ada0();
  func_0x000107c613fc();
  puVar2 = PTR_PTR_1126a72c8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  FUN_100092858(0);
  func_0x000107c610f8();
  FUN_10097b71c(lVar1,&PTR_DAT_1103ca098);
  return;
}



/* Entry: 10097ae24; end: 10097aef7; -[GTLRPeopleServiceService init] */

undefined1 * FUN_10097ae24(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined **ppuStack_30;
  long lStack_28;
  
  puVar1 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_38 = PTR_PTR_1126e3500;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  puVar2 = (undefined *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c57f10(puVar1);
    func_0x000107c52c14(puVar1);
    ppuStack_30 = &PTR____CFConstantStringClassReference_110da7f58;
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c3e17c();
    func_0x000107c61180();
    func_0x000107c57758(puVar1);
    func_0x000107c61170();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return (undefined1 *)puVar1;
  }
  func_0x000107c60e78();
  ppuVar3 = &puStack_80;
  puStack_78 = PTR_PTR_1126e34e8;
  puStack_80 = puVar2;
  func_0x000107c61154(&puStack_80,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined **)0x0) {
    pcVar4 = "com.google.GTLRServiceParse";
    func_0x000107c60f50("com.google.GTLRServiceParse",0);
    uVar7 = *(undefined8 *)((long)ppuVar3 + 0x78);
    *(char **)((long)ppuVar3 + 0x78) = pcVar4;
    func_0x000107c61170(uVar7);
    func_0x000107c6119c((undefined1 *)((long)ppuVar3 + 0x48),PTR___dispatch_main_q_11034be20);
    pcVar4 = "com.google.GTLRServiceRequestCreation";
    func_0x000107c60f50("com.google.GTLRServiceRequestCreation",0);
    uVar7 = *(undefined8 *)((long)ppuVar3 + 0x28);
    *(char **)((long)ppuVar3 + 0x28) = pcVar4;
    func_0x000107c61170(uVar7);
    puVar2 = PTR_PTR_1126ae130;
    func_0x000107c610f4();
    func_0x000107c453e4();
    uVar7 = *(undefined8 *)((long)ppuVar3 + 0x68);
    *(undefined **)((long)ppuVar3 + 0x68) = puVar2;
    func_0x000107c61170(uVar7);
    puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x000107c610f4(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    func_0x000107c453e4();
    func_0x000107c56330();
    func_0x000107c56954(puVar2);
    func_0x000107c58fb8(*(undefined8 *)((long)ppuVar3 + 0x68));
    puVar5 = (undefined1 *)ppuVar3;
    func_0x000107c3fa1c(ppuVar3);
    func_0x000107c4a928();
    func_0x000107c61180();
    puVar6 = PTR_PTR_1126ae138;
    func_0x000107c50624();
    func_0x000107c61180();
    uVar7 = *(undefined8 *)((long)ppuVar3 + 0xb0);
    *(undefined **)((long)ppuVar3 + 0xb0) = puVar6;
    func_0x000107c61170(uVar7);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar2);
  }
  return (undefined1 *)ppuVar3;
}



/* Entry: 10097aef8; end: 10097b03f; -[GTLRService init] */

undefined1 * FUN_10097aef8(undefined8 param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126e34e8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    pcVar2 = "com.google.GTLRServiceParse";
    func_0x000107c60f50("com.google.GTLRServiceParse",0);
    uVar6 = *(undefined8 *)((long)puVar1 + 0x78);
    *(char **)((long)puVar1 + 0x78) = pcVar2;
    func_0x000107c61170(uVar6);
    func_0x000107c6119c((undefined1 *)((long)puVar1 + 0x48),PTR___dispatch_main_q_11034be20);
    pcVar2 = "com.google.GTLRServiceRequestCreation";
    func_0x000107c60f50("com.google.GTLRServiceRequestCreation",0);
    uVar6 = *(undefined8 *)((long)puVar1 + 0x28);
    *(char **)((long)puVar1 + 0x28) = pcVar2;
    func_0x000107c61170(uVar6);
    puVar3 = PTR_PTR_1126ae130;
    func_0x000107c610f4();
    func_0x000107c453e4();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined **)((long)puVar1 + 0x68) = puVar3;
    func_0x000107c61170(uVar6);
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x000107c610f4(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    func_0x000107c453e4();
    func_0x000107c56330();
    func_0x000107c56954(puVar3);
    func_0x000107c58fb8(*(undefined8 *)((long)puVar1 + 0x68));
    puVar4 = (undefined1 *)puVar1;
    func_0x000107c3fa1c(puVar1);
    func_0x000107c4a928();
    func_0x000107c61180();
    puVar5 = PTR_PTR_1126ae138;
    func_0x000107c50624();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)((long)puVar1 + 0xb0);
    *(undefined **)((long)puVar1 + 0xb0) = puVar5;
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10097b040; end: 10097b167; -[GTMSessionFetcherService init] */

undefined1 * FUN_10097b040(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e35c0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c610fc();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    func_0x000107c61170(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c610fc();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = 10;
    *(undefined8 *)((long)puVar1 + 0xd0) = 0x404e000000000000;
    puVar2 = PTR_PTR_1126ae3f8;
    func_0x000107c610f4();
    func_0x000107c47d98(*(undefined8 *)((long)puVar1 + 0xd0));
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c6119c((undefined1 *)((long)puVar1 + 0x30),PTR___dispatch_main_q_11034be20);
    puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x000107c610fc();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c56330(*(undefined8 *)((long)puVar1 + 0x38));
    func_0x000107c56954(*(undefined8 *)((long)puVar1 + 0x38));
    *(undefined4 *)((long)puVar1 + 0x28) = 0;
    if (lRam00000001136a1cc0 != -1) {
      FUN_10097b1e4();
    }
    func_0x000107c6119c((undefined1 *)((long)puVar1 + 0x48),uRam00000001136a1cc8);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10097b168; end: 10097b1e3; -[GTMSessionFetcherSessionDelegateDispatcher initWithParentService:sessionDiscardInterval:] */

undefined1 *
FUN_10097b168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e35c8;
  uStack_40 = param_2;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x28) = param_1;
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_4);
  }
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10097b1e4; end: 10097b23b;  */

void FUN_10097b1e4(void)

{
  FUN_10002a2fc(0x1136a1cc0,&PTR___NSConcreteGlobalBlock_1107c03b8);
  return;
}



/* Entry: 10097b23c; end: 10097b2b3; -[GTMStandardUserAgentProvider initWithBundle:] */

undefined1 * FUN_10097b23c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126e35b8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    func_0x000107c6119c((undefined1 *)((long)puVar2 + 8),param_3);
  }
  func_0x000107c61170(uVar1);
  return (undefined1 *)puVar2;
}



/* Entry: 10097b2b4; end: 10097b4ab; -[SCSnapchattersDataCoordinator handleSnapchatterFetchDataRequestAndSyncIncoming:incomingSyncScenario:completionQueue:completionHandler:] */

void FUN_10097b2b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c4c614(param_3);
  puVar1 = PTR_PTR_1126b15e8;
  func_0x000107c43280(PTR_PTR_1126b15e8);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126daff8;
  func_0x000107c610f4(PTR_PTR_1126daff8);
  func_0x000107c463ac();
  func_0x000107c4d664(*(undefined8 *)(param_1 + 0x90));
  func_0x000107c41d54(*(undefined8 *)(param_1 + 0x10));
  func_0x000107c61144(auStack_68,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x000107c4f7c0(uVar3);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_70,auStack_68);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c430b0(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 10097b4ac; end: 10097b55f; -[SCSnapchattersFetchDataRequest matchFetchFriends:handleSoJuFriendsResponseDictionary:handleSyncFriendsData:] */

/* WARNING: Possible PIC construction at 0x00010097b540: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010097b544) */

void FUN_10097b4ac(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 2) {
    if (param_5 == 0) goto LAB_10097b53c;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    pcVar3 = *(code **)(param_5 + 0x10);
    param_4 = param_5;
  }
  else {
    if (lVar2 != 1) {
      if ((lVar2 == 0) && (param_3 != 0)) {
        (**(code **)(param_3 + 0x10))
                  (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
      }
      goto LAB_10097b53c;
    }
    if (param_4 == 0) goto LAB_10097b53c;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    pcVar3 = *(code **)(param_4 + 0x10);
  }
  (*pcVar3)(param_4,uVar1);
LAB_10097b53c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10097b560; end: 10097b563;  */

void FUN_10097b560(void)

{
  return;
}



/* Entry: 10097b564; end: 10097b5f7; -[GTMSessionFetcherService setSessionDelegateQueue:] */

/* WARNING: Possible PIC construction at 0x00010097b5c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010097b5d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010097b5c4) */
/* WARNING: Removing unreachable block (ram,0x00010097b5d4) */

void FUN_10097b564(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c611a4();
  if (param_3 == (undefined *)0x0) {
    param_3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x000107c4c188();
    func_0x000107c61180();
  }
  else {
    func_0x000107c61174();
  }
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10097b5f8; end: 10097b603; +[GTLRService kindStringToClassMap] */

void FUN_10097b5f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf71e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSDictionary_1126ae670,PTR_s_dictionary_1125ba130);
  return;
}



/* Entry: 10097b604; end: 10097b64f; +[GTLRObjectClassResolver resolverWithKindMap:] */

void FUN_10097b604(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c610f4(param_1);
  func_0x000107c470ac();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10097b650; end: 10097b6ff; -[GTLRObjectClassResolver initWithKindMap:surrogates:] */

undefined1 *
FUN_10097b650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174();
  func_0x000107c61174();
  puStack_38 = PTR_PTR_1126e34d0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10097b700; end: 10097b707; -[GTLRService setRootURLString:] */

void FUN_10097b700(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10097b708; end: 10097b70f; -[GTLRService setBatchPath:] */

void FUN_10097b708(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10097b710; end: 10097b71b; -[GTLRService setPrettyPrintQueryParameterNames:] */

void FUN_10097b710(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x80,param_3);
  return;
}



/* Entry: 10097b71c; end: 10097b777;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10097b71c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112de05f0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10097b778; end: 10097b7fb;  */

void FUN_10097b778(undefined8 param_1)

{
  if (lRam0000000112de04b8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e660788);
  return;
}



/* Entry: 10097b7fc; end: 10097b84b;  */

void FUN_10097b7fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  return;
}



/* Entry: 10097b84c; end: 10097b92b;  */

void FUN_10097b84c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar2 = &UNK_11041fb58;
  func_0x000107c613fc(&UNK_11041fb58,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  puStack_40 = &UNK_10198c868;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_10198c870;
  puStack_48 = &UNK_11041fb70;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  FUN_1001f6574(0);
  func_0x000107c610f8();
  FUN_10097b964(puVar1);
  return;
}



/* Entry: 10097b92c; end: 10097b94f;  */

void FUN_10097b92c(void)

{
  long unaff_x20;
  
  func_0x000107c61640(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10097b950; end: 10097b963;  */

void FUN_10097b950(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10097b964; end: 10097b9af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10097b964(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_1130218b8) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10097b9b0; end: 10097b9fb;  */

void FUN_10097b9b0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10097b9fc; end: 10097ba03;  */

void FUN_10097b9fc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10097ba04; end: 10097ba57;  */

void FUN_10097ba04(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x40);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10097ba58; end: 10097ba67;  */

void FUN_10097ba58(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_1002096b8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  FUN_10097bc48(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar6);
  uVar7 = uStack_68;
  func_0x000107c61174();
  uVar8 = uVar7;
  FUN_10097bccc();
  *(undefined8 *)(lVar1 + 0x10) = uVar8;
  uVar9 = uVar8;
  func_0x000107c6157c();
  FUN_10097bd1c();
  func_0x000107c61574(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  *(undefined8 *)(lVar1 + 0x40) = uVar9;
  *param_1 = lVar1;
  return;
}



/* Entry: 10097ba68; end: 10097bc47;  */

void FUN_10097ba68(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_1002096b8();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  FUN_10097bc48(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar5 = uStack_90;
  func_0x000107c61174(uStack_90);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar6;
  FUN_10097bccc();
  *(undefined8 *)(param_2 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  FUN_10097bd1c();
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(param_2 + 0x40) = uVar8;
  *param_1 = param_2;
  return;
}



/* Entry: 10097bc48; end: 10097bccb;  */

void FUN_10097bc48(undefined8 param_1)

{
  if (lRam0000000112de0328 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e660678);
  return;
}



/* Entry: 10097bccc; end: 10097bd1b;  */

void FUN_10097bccc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c61170();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  return;
}



/* Entry: 10097bd1c; end: 10097bde3;  */

void FUN_10097bd1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  
  ppuVar2 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puStack_40 = &UNK_10198ab2c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_10198ad7c;
  puStack_48 = &UNK_11041f7e0;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c3e4fc(puVar1,param_2,ppuVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  FUN_100209744(0);
  func_0x000107c610f8();
  FUN_10097bdf8(puVar1);
  return;
}



/* Entry: 10097bde4; end: 10097bdf7;  */

void FUN_10097bde4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10097bdf8; end: 10097be43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10097bdf8(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113021848) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10097be44; end: 10097be8f;  */

void FUN_10097be44(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10097be90; end: 10097c0e3; -[SCFriendingConfigsUpdateEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10097be90(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c61160();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11272a754);
  *(undefined **)(param_1 + _DAT_11272a754) = puVar1;
  func_0x000107c61170(uVar7);
  func_0x000107c61144(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x10097c328;
  puStack_78 = &UNK_1108b69a0;
  func_0x000107c6111c(auStack_70,auStack_68);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11272a758);
  *(undefined **)(param_1 + _DAT_11272a758) = puVar1;
  func_0x000107c61170(uVar7);
  func_0x000107c3b070(param_1);
  lVar2 = param_1 + _DAT_11272a75c;
  func_0x000107c61148(lVar2);
  lVar3 = lVar2;
  func_0x000107c5da68();
  func_0x000107c61180();
  func_0x000107c49e24();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c3caec(param_1);
  puVar6 = PTR_PTR_1126aeec0;
  puVar1 = PTR_PTR_1126ae960;
  puVar4 = PTR_PTR_1126bd748;
  func_0x000107c4033c(PTR_PTR_1126bd748);
  func_0x000107c61180();
  func_0x000107c43a0c(puVar1);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126ae970;
  func_0x000107c5d9b8(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_98,auStack_68);
  func_0x000107c3e2d8();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(param_1 + _DAT_11272a760);
  *(undefined **)(param_1 + _DAT_11272a760) = puVar6;
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar4);
  func_0x000107c61120(auStack_98);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
  return;
}



/* Entry: 10097c0e4; end: 10097c253; -[SCFriendingConfigsUpdateEntryPoint _checkWhetherToSyncContactOnLegacyFlow] */

/* WARNING: Possible PIC construction at 0x00010097c130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010097c168: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010097c1a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010097c1f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010097c208: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010097c1f8) */
/* WARNING: Removing unreachable block (ram,0x00010097c1a4) */
/* WARNING: Removing unreachable block (ram,0x00010097c1e4) */
/* WARNING: Removing unreachable block (ram,0x00010097c16c) */
/* WARNING: Removing unreachable block (ram,0x00010097c134) */
/* WARNING: Removing unreachable block (ram,0x00010097c23c) */
/* WARNING: Removing unreachable block (ram,0x00010097c140) */
/* WARNING: Removing unreachable block (ram,0x00010097c20c) */
/* WARNING: Removing unreachable block (ram,0x00010097c210) */
/* WARNING: Removing unreachable block (ram,0x00010097c228) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10097c0e4(long param_1)

{
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_11272a75c;
    func_0x000107c61148(param_1);
  }
  func_0x000107c5da68(param_1);
  func_0x000107c61180();
  func_0x000107c49e14();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10097c254; end: 10097c2eb; -[SCFriendingConfigsUpdateEntryPoint _triggerFriendingConfigsUpdateUponRegistration:] */

void FUN_10097c254(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (param_3 != 0) {
    func_0x000107c61144(auStack_28);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    puStack_40 = &UNK_10582dd48;
    puStack_38 = &UNK_1108434b0;
    func_0x000107c6111c(auStack_30,auStack_28);
    func_0x000100c749e0(0x40a00000,"APPSTORE",&puStack_50);
    func_0x000107c61120(auStack_30);
    func_0x000107c61120(auStack_28);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be14cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchSuggestion_112562cd0);
  return;
}



/* Entry: 10097c2ec; end: 10097c367; -[SCFriendingConfigsUpdateEntryPoint _fetchSuggestion] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10097c2ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272a758);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c5d078();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10097c368; end: 10097c8af; -[SCFriendingConfigsUpdateEntryPoint _createUpdateTrigger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10097c368(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [16];
  
  func_0x000107c61144(auStack_70,param_1);
  lVar1 = param_1 + _DAT_11272a768;
  func_0x000107c61148();
  lVar2 = lVar1;
  func_0x000107c4e604();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c4e60c();
  func_0x000107c61180();
  uVar24 = *(undefined8 *)(param_1 + _DAT_11272a76c);
  *(long *)(param_1 + _DAT_11272a76c) = lVar4;
  func_0x000107c61170(uVar24);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  puVar5 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_78,auStack_70);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  puVar6 = PTR_PTR_1126beed0;
  func_0x000107c610f4();
  lVar26 = (long)_DAT_11272a770;
  lVar1 = param_1 + lVar26;
  func_0x000107c61148(lVar1);
  lVar4 = lVar1;
  func_0x000107c5b504();
  func_0x000107c61180();
  lVar2 = param_1 + _DAT_11272a774;
  func_0x000107c61148(lVar2);
  lVar7 = lVar2;
  func_0x000107c5dac4();
  func_0x000107c61180();
  lVar25 = (long)_DAT_11272a778;
  lVar3 = param_1 + lVar25;
  func_0x000107c61148(lVar3);
  lVar8 = lVar3;
  func_0x000107c444a4();
  func_0x000107c61180();
  func_0x000107c4886c();
  uVar24 = *(undefined8 *)(param_1 + _DAT_11272a77c);
  *(undefined **)(param_1 + _DAT_11272a77c) = puVar6;
  func_0x000107c61170(uVar24);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_11272a780;
  func_0x000107c61148();
  lVar9 = lVar1;
  func_0x000107c4ac60();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = param_1 + _DAT_11272a784;
  func_0x000107c61148();
  lVar10 = lVar1;
  func_0x000107c43558();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  puVar6 = PTR_PTR_1126beed8;
  func_0x000107c610f4();
  lVar1 = param_1 + _DAT_11272a78c;
  func_0x000107c61148();
  lVar11 = lVar1;
  func_0x000107c3fa04();
  func_0x000107c61180();
  lVar2 = param_1 + _DAT_11272a790;
  func_0x000107c61148();
  lVar12 = lVar2;
  func_0x000107c3de48();
  func_0x000107c61180();
  lVar3 = param_1 + _DAT_11272a794;
  func_0x000107c61148();
  lVar13 = lVar3;
  func_0x000107c42eac();
  func_0x000107c61180();
  lVar4 = param_1 + lVar26;
  func_0x000107c61148();
  lVar14 = lVar4;
  func_0x000107c5b4b4();
  func_0x000107c61180();
  lVar26 = param_1 + lVar26;
  func_0x000107c61148();
  lVar15 = lVar26;
  func_0x000107c5b4bc();
  func_0x000107c61180();
  lVar7 = param_1 + _DAT_11272a764;
  func_0x000107c61148();
  puVar16 = PTR_PTR_1126aeea8;
  func_0x000107c61160();
  lVar8 = param_1 + _DAT_11272a798;
  func_0x000107c61148();
  lVar17 = lVar8;
  func_0x000107c40108();
  func_0x000107c61180();
  lVar18 = param_1 + _DAT_11272a79c;
  func_0x000107c61148();
  lVar19 = lVar18;
  func_0x000107c4030c();
  func_0x000107c61180();
  lVar20 = param_1 + _DAT_11272a7a0;
  func_0x000107c61148();
  lVar21 = lVar20;
  func_0x000107c40344();
  func_0x000107c61180();
  lVar22 = param_1 + _DAT_11272a7a8;
  func_0x000107c61148();
  lVar23 = lVar22;
  func_0x000107c40344();
  func_0x000107c61180();
  param_1 = param_1 + lVar25;
  func_0x000107c61148();
  lVar25 = param_1;
  func_0x000107c444a4();
  func_0x000107c61180();
  func_0x000107c45db8();
  func_0x000107c61170(lVar25);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar15);
  func_0x000107c61170(lVar26);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(puVar5);
  func_0x000107c61120(auStack_78);
  func_0x000107c61120(auStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10097c8b0; end: 10097c8b7; -[SCSnapchatterServices snapchattersloggingEventRepository] */

undefined8 FUN_10097c8b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10097c8b8; end: 10097cb3b; -[SCFriendingFetchSuggestionsLogger initWithSnapchattersLoggingEventRepository:userTrackedLogger:grapheneRegistry:] */

undefined8 *
FUN_10097c8b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_78 = PTR_PTR_1126ea890;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61144(auStack_88,puVar1);
    uVar4 = puVar1[1];
    func_0x000107c5c734(uVar4);
    func_0x000107c61180();
    uVar2 = uVar4;
    func_0x000107c432e0();
    func_0x000107c61180();
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    puStack_a0 = &UNK_10582e4b4;
    puStack_98 = &UNK_1108b6a70;
    func_0x000107c6111c(auStack_90,auStack_88);
    uVar5 = uVar2;
    func_0x000107c5c320(uVar2);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar4);
    uVar4 = puVar1[1];
    func_0x000107c5c734(uVar4);
    func_0x000107c61180();
    uVar2 = uVar4;
    func_0x000107c5b4d8();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_b8,auStack_88);
    uVar5 = uVar2;
    func_0x000107c5c320(uVar2);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar4);
    func_0x000107c61120(auStack_b8);
    func_0x000107c61120(auStack_90);
    func_0x000107c61120(auStack_88);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10097cb3c; end: 10097cb43;  */

void FUN_10097cb3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_target_112678178);
  return;
}



/* Entry: 10097cb44; end: 10097cb4b; -[SCSnapchattersDataCoordinator fetchSuggestionLoggingDataObservable] */

void FUN_10097cb44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaaab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x70),PTR_s_fetchSuggestionLoggingDataObserv_1125c8450);
  return;
}



/* Entry: 10097cb4c; end: 10097cb73; -[SCSnapchattersSuggestRequestCoordinator fetchSuggestionLoggingDataObservable] */

void FUN_10097cb4c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10097cb74; end: 10097cb9b; -[SCSnapchattersDataCoordinator snapchattersLoggingDataObservable] */

void FUN_10097cb74(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10097cb9c; end: 10097cba3; -[SCFriendingContactSyncServices contactSyncer] */

undefined8 FUN_10097cb9c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10097cba4; end: 10097cbb3; -[FriendingFacebookContactSyncServices contactSyncer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10097cba4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113021848));
  return;
}



/* Entry: 10097cbb4; end: 10097cf23; -[SCFriendingConfigsUpdateTrigger initWithCircumstanceEngine:appStartExperimentReader:featureSettingsService:discrepancyHandler:snapchatterDataMutator:snapchattersDataTracker:userStorageServices:timeProvider:performer:configsProvider:contactPermissionInfoProvider:contactSyncer:facebookContactSyncer:friendingPhoneContactBookStoreService:grapheneRegistry:findFriendsEligibilityChecker:] */

undefined8 *
FUN_10097cbb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  puStack_70 = PTR_PTR_1126ea888;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[7];
    puVar1[7] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[1];
    puVar1[1] = param_8;
    func_0x000107c61170(uVar2);
    uVar2 = puVar1[1];
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    func_0x000107c3d740();
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[2];
    puVar1[2] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[3];
    puVar1[3] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[8];
    puVar1[8] = param_4;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126beee8;
    func_0x000107c610f4();
    uVar2 = param_9;
    func_0x000107c4ec80(param_9);
    func_0x000107c61180();
    func_0x000107c3c79c();
    func_0x000107c4689c();
    uVar4 = puVar1[6];
    puVar1[6] = puVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_15);
    uVar2 = puVar1[9];
    puVar1[9] = param_15;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126beef0;
    func_0x000107c610f4();
    func_0x000107c45dec();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10097cf24; end: 10097cf2b; -[SCFriendingConfigsUpdateTrigger _shouldRemoveUserLevelPermission] */

byte FUN_10097cf24(long param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c61174();
  if (lRam00000001136c6d88 != -1) {
    FUN_10002a2fc(0x1136c6d88,&PTR___NSConcreteGlobalBlock_110968228);
  }
  if ((bRam00000001136c6d52 & 1) == 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10097d06c;
    puStack_30 = &UNK_110842e18;
    func_0x000107c61174(uVar1);
    uStack_28 = uVar1;
    if (lRam00000001136c6d58 != -1) {
      FUN_10002a2fc(0x1136c6d58,&puStack_48);
    }
    bVar2 = bRam00000001136c6d50;
    func_0x000107c61170(uStack_28);
  }
  else {
    bVar2 = 0;
  }
  func_0x000107c61170(uVar1);
  return bVar2 & 1;
}



/* Entry: 10097cf2c; end: 10097d06b;  */

byte FUN_10097cf2c(undefined8 param_1)

{
  byte bVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  if (lRam00000001136c6d88 != -1) {
    FUN_10002a2fc(0x1136c6d88,&PTR___NSConcreteGlobalBlock_110968228);
  }
  if ((bRam00000001136c6d52 & 1) == 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_10097d06c;
    puStack_30 = &UNK_110842e18;
    func_0x000107c61174(param_1);
    uStack_28 = param_1;
    if (lRam00000001136c6d58 != -1) {
      FUN_10002a2fc(0x1136c6d58,&puStack_48);
    }
    bVar1 = bRam00000001136c6d50;
    func_0x000107c61170(uStack_28);
  }
  else {
    bVar1 = 0;
  }
  func_0x000107c61170(param_1);
  return bVar1 & 1;
}



/* Entry: 10097d06c; end: 10097d09b;  */

void FUN_10097d06c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c3ebd4(uVar1,param_2,&PTR____CFConstantStringClassReference_110e78b18,0,0);
  uRam00000001136c6d50 = (char)uVar1;
  return;
}



/* Entry: 10097d09c; end: 10097d3bf; -[SCFriendingContactSyncGRPCTrigger initWithFeatureSettingsService:userPreferences:performer:contactPermissionInfoProvider:configsProvider:contactSyncer:friendingPhoneContactBookStoreService:grapheneRegistry:circumstanceEngine:shouldRemoveUserLevelPermission:] */

undefined8 *
FUN_10097d09c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined1 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  puStack_80 = PTR_PTR_1126ea868;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    func_0x000107c61170(uVar2);
    *(undefined1 *)(puVar1 + 0xc) = param_12;
    func_0x000107c61144(auStack_90,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_10097d928;
    puStack_a0 = &UNK_11084ae38;
    func_0x000107c6111c(auStack_98,auStack_90);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c6111c(auStack_c0,auStack_90);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_9;
    func_0x000107c61170(uVar2);
    *(undefined1 *)(puVar1 + 0xe) = 0;
    func_0x000107c3c014(puVar1);
    func_0x000107c61120(auStack_c0);
    func_0x000107c61120(auStack_98);
    func_0x000107c61120(auStack_90);
  }
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 10097d3c0; end: 10097d467; -[SCFriendingContactSyncGRPCTrigger _observeFeatureSetting] */

void FUN_10097d3c0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c61144(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c4e524(uVar1);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
  return;
}



/* Entry: 10097d468; end: 10097d633; -[SCFriendingSuggestedFriendUpdateTimestampTrigger initWithCircumstanceEngine:featureSettingsService:snapchatterDataMutator:userStorageServices:timeProvider:performer:appStartExperimentReader:findFriendsEligibilityChecker:] */

undefined1 *
FUN_10097d468(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  puStack_68 = PTR_PTR_1126ea870;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_7;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined8 *)((long)puVar1 + 0x80) = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined8 *)((long)puVar1 + 0x88) = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c3ce10(puVar1);
  }
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10097d634; end: 10097d67b; -[SCFriendingSuggestedFriendUpdateTimestampTrigger _warmup] */

void FUN_10097d634(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c5e0d4();
  func_0x000107c61170(uVar1);
  func_0x000107c3c240(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010be66ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__observeSuggestionFetchKey_112577558);
  return;
}



/* Entry: 10097d67c; end: 10097d74f; -[SCFriendingSuggestedFriendUpdateTimestampTrigger _recoverValuesFromStorage] */

void FUN_10097d67c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c4ec80();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4a9ac();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c4c0a8();
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c4ec80();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4aa48();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c4c0a8();
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_1 + 0x50);
  return;
}



/* Entry: 10097d750; end: 10097d7b3; -[SCPreferences lastClientFetchSuggestionTimestampInSeconds] */

void FUN_10097d750(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x000107c4d9e8(param_1,param_2,&PTR____CFConstantStringClassReference_110eeefb8);
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c61158(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_1;
  func_0x000107c6115c(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10097d7b4; end: 10097d927;  */

void FUN_10097d7b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_58 [8];
  
  lVar1 = param_1 + 0x20;
  func_0x000107c61148();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
    uVar3 = *(undefined8 *)(lVar1 + 0x50);
    func_0x000107c5c734(uVar3);
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(lVar1 + 0x58);
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c5a790(puVar5);
    func_0x000107c61180();
    uVar6 = *(undefined8 *)(lVar1 + 0x20);
    func_0x000107c4f7c0(uVar6);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_58,param_1 + 0x20);
    uVar7 = uVar2;
    func_0x000107c4da68();
    func_0x000107c61180();
    uVar8 = *(undefined8 *)(lVar1 + 0x18);
    *(undefined8 *)(lVar1 + 0x18) = uVar7;
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar2);
    func_0x000107c61120(auStack_58);
  }
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 10097d928; end: 10097d9df;  */

void FUN_10097d928(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,&UNK_10f2feefe);
    func_0x000107c61180();
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10097d9e0; end: 10097d9eb; -[SCFeatureSettingsService contactBookSyncEnabledServerParam] */

undefined ** FUN_10097d9e0(void)

{
  return &PTR____CFConstantStringClassReference_110eeec78;
}



/* Entry: 10097d9ec; end: 10097da4f; -[SCPreferences lastServerSuggestionTimestampInMilliseconds] */

void FUN_10097d9ec(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x000107c4d9e8(param_1,param_2,&PTR____CFConstantStringClassReference_110eeefd8);
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c61158(PTR__OBJC_CLASS___NSNumber_1126ae570);
  uVar3 = param_1;
  func_0x000107c6115c(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  func_0x000107c61174(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10097da50; end: 10097da6b; -[SCFeatureSettingsService contactBookSyncVersionServerParam] */

undefined ** FUN_10097da50(void)

{
  return &PTR____CFConstantStringClassReference_110eeecd8;
}



/* Entry: 10097da6c; end: 10097dc9b; -[SCFriendingSuggestedFriendUpdateTimestampTrigger _observeSuggestionFetchKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10097da6c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined1 *puStack_d8;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined **ppuStack_50;
  long lStack_48;
  
  ppuVar9 = &puStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c4ec80(uVar1);
  func_0x000107c61180();
  uVar11 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d94c(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c56bcc(uVar11);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x000107c610f4();
  ppuStack_50 = &PTR____CFConstantStringClassReference_110eeeed8;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61180();
  func_0x000107c45788();
  func_0x000107c61170(puVar3);
  func_0x000107c61144(auStack_58,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c4ec80();
  func_0x000107c61180();
  uVar11 = uVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar5 = 0x15;
  func_0x000107c60f2c(0x15,0);
  func_0x000107c61180();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  puStack_70 = &UNK_10582d434;
  puStack_68 = &UNK_1108531d0;
  func_0x000107c6111c(auStack_60,auStack_58);
  uVar1 = uVar11;
  puVar3 = puVar2;
  uVar8 = uVar5;
  func_0x000107c4da1c();
  func_0x000107c61180();
  uVar10 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar4);
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  func_0x000107c60e78();
  func_0x000107c61120(auStack_60);
  func_0x000107c61120(auStack_58);
  func_0x000107c60bd8();
  func_0x000107c61174(puVar3);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(ppuVar9);
  puVar6 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x000107c3ac50();
  func_0x000107c61180();
  puVar7 = puVar6;
  func_0x000107c3ac54();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  puVar6 = PTR_PTR_1126e0358;
  func_0x000107c610f4(PTR_PTR_1126e0358);
  func_0x000107c47b9c();
  uVar11 = *(undefined8 *)(puVar2 + _DAT_11278e9fc);
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_1009da258;
  puStack_100 = &UNK_110d25410;
  puStack_f8 = puVar2;
  puStack_f0 = puVar3;
  puStack_e8 = puVar7;
  uStack_e0 = uVar8;
  puStack_d8 = (undefined1 *)ppuVar9;
  func_0x000107c61174(ppuVar9);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(puVar7);
  func_0x000107c61174(puVar3);
  FUN_10007380c(uVar11,&puStack_118);
  func_0x000107c61170(puStack_d8);
  func_0x000107c61170(uStack_e0);
  func_0x000107c61170(puStack_e8);
  func_0x000107c61170(puStack_f0);
  func_0x000107c61170(ppuVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10097dc9c; end: 10097de43; -[SCDocPreferences observe:callbackQueue:changeHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10097dc9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x000107c3ac50();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000107c3ac54();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  puVar1 = PTR_PTR_1126e0358;
  func_0x000107c610f4(PTR_PTR_1126e0358);
  func_0x000107c47b9c();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11278e9fc);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1009da258;
  puStack_80 = &UNK_110d25410;
  lStack_78 = param_1;
  uStack_70 = param_3;
  puStack_68 = puVar2;
  uStack_60 = param_4;
  uStack_58 = param_5;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar2);
  func_0x000107c61174(param_3);
  FUN_10007380c(uVar3,&puStack_98);
  func_0x000107c61170(uStack_58);
  func_0x000107c61170(uStack_60);
  func_0x000107c61170(puStack_68);
  func_0x000107c61170(uStack_70);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10097de44; end: 10097df0f; -[SCPreferencesObservationContext initWithObservedKeys:observationToken:delegate:] */

undefined1 *
FUN_10097de44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_112706558;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 0x10),param_5);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10097df10; end: 10097df5b;  */

void FUN_10097df10(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x28));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x30));
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),7);
  return;
}



/* Entry: 10097df5c; end: 10097df63; -[SCFriendingConfigsUpdateTrigger tryFetchSuggestedFriends] */

void FUN_10097df5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27cd30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_tryFetchSuggestedFriends_11267cd70);
  return;
}



/* Entry: 10097df64; end: 10097e00b; -[SCFriendingSuggestedFriendUpdateTimestampTrigger tryFetchSuggestedFriends] */

void FUN_10097df64(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x000107c61144(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c4e590(uVar1);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
  return;
}



/* Entry: 10097e00c; end: 10097e013; +[SCAttributedFriendingTask contactSync] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10097e00c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar2 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_11309b3a8) = 5;
  *(undefined8 *)(lVar2 + _DAT_11309b3b0) = 0;
  puVar1 = (undefined8 *)(lVar2 + _DAT_11309b3b8);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lStack_30 = lVar2;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10097e014; end: 10097e0bf;  */

void FUN_10097e014(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}


