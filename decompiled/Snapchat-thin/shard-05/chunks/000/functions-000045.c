/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103a859f8; end: 103a85a03; -[SCSingleSnapPlayerFactoryServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a859f8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdc478;
  func_0x000107c61428(param_1 + _DAT_112fdc478,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a85a04; end: 103a85a0f; -[SCSingleSnapPlayerFactoryServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a85a04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdc478;
  func_0x000107c61428(param_1 + _DAT_112fdc478,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a85a10; end: 103a85a1b; -[SCSingleSnapPlayerFactoryServicesSaberServiceProvider operaActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a85a10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdc480;
  func_0x000107c61428(param_1 + _DAT_112fdc480,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a85a1c; end: 103a85a5f;  */

void FUN_103a85a1c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a85a60; end: 103a85a6b; -[SCSingleSnapPlayerFactoryServicesSaberServiceProvider setOperaActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a85a60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdc480;
  func_0x000107c61428(param_1 + _DAT_112fdc480,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a85a6c; end: 103a85abf;  */

void FUN_103a85a6c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a85ac0; end: 103a85cd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103a85ac0(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4de90();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103a847c0();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fdc258);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fdc488);
      *(long *)(unaff_x20 + _DAT_112fdc488) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "OperaActiveUserSessionScopeGraphBridge/SCSingleSnapPlayerFactoryServicesSaberServiceProvider.swift"
                      ,0x62,2,0x1f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a85bec);
  (*pcVar1)();
}



/* Entry: 103a85cd4; end: 103a85d07; -[SCSingleSnapPlayerFactoryServicesSaberServiceProvider provide] */

void FUN_103a85cd4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103a85ac0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a85d08; end: 103a85d3b; -[SCSingleSnapPlayerFactoryServicesSaberServiceProvider __safeProvide] */

void FUN_103a85d08(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103a85bec();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a85d3c; end: 103a85d7f; -[SCSingleSnapPlayerFactoryServicesSaberServiceProvider end] */

void FUN_103a85d3c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a85d80; end: 103a85f17;  */

void FUN_103a85d80(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0e6d050)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002e,0x800000010f192fb0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "OperaActiveUserSessionScopeGraphBridge/SCSingleSnapPlayerFactoryServicesSaberServiceProvider.swift"
                            ,0x62,2,0x34,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103a85f18);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c56ffc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103a85f18; end: 103a85fc3; -[SCSingleSnapPlayerFactoryServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103a85f18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_103a85d80(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103a85fc4; end: 103a86037; -[SCSingleSnapPlayerFactoryServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a85fc4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fdc478,0);
  func_0x000107c61614(param_1 + _DAT_112fdc480,0);
  *(undefined8 *)(param_1 + _DAT_112fdc488) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a86038; end: 103a8606b;  */

void FUN_103a86038(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a8606c; end: 103a860b3; -[SCSingleSnapPlayerFactoryServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8606c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fdc478);
  func_0x000107c61610(param_1 + _DAT_112fdc480);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fdc488));
  return;
}



/* Entry: 103a860b4; end: 103a860d3;  */

void FUN_103a860b4(void)

{
  func_0x000107c61168(&PTR_PTR_112fdc4d0);
  return;
}



/* Entry: 103a860d4; end: 103a860df; -[SCSingleSnapPlayerMediaServiceSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a860d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdc538;
  func_0x000107c61428(param_1 + _DAT_112fdc538,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a860e0; end: 103a860eb; -[SCSingleSnapPlayerMediaServiceSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a860e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdc538;
  func_0x000107c61428(param_1 + _DAT_112fdc538,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a860ec; end: 103a860f7; -[SCSingleSnapPlayerMediaServiceSaberServiceProvider operaActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a860ec(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdc540;
  func_0x000107c61428(param_1 + _DAT_112fdc540,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a860f8; end: 103a8613b;  */

void FUN_103a860f8(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a8613c; end: 103a86147; -[SCSingleSnapPlayerMediaServiceSaberServiceProvider setOperaActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8613c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdc540;
  func_0x000107c61428(param_1 + _DAT_112fdc540,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a86148; end: 103a8619b;  */

void FUN_103a86148(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a8619c; end: 103a863af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103a8619c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4de90();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103a848ec();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fdc260);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fdc548);
      *(long *)(unaff_x20 + _DAT_112fdc548) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "OperaActiveUserSessionScopeGraphBridge/SCSingleSnapPlayerMediaServiceSaberServiceProvider.swift"
                      ,0x5f,2,0x1f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a862c8);
  (*pcVar1)();
}



/* Entry: 103a863b0; end: 103a863e3; -[SCSingleSnapPlayerMediaServiceSaberServiceProvider provide] */

void FUN_103a863b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103a8619c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a863e4; end: 103a86417; -[SCSingleSnapPlayerMediaServiceSaberServiceProvider __safeProvide] */

void FUN_103a863e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103a862c8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a86418; end: 103a8645b; -[SCSingleSnapPlayerMediaServiceSaberServiceProvider end] */

void FUN_103a86418(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a8645c; end: 103a865f3;  */

void FUN_103a8645c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffd2) || (param_3 != -0x7ffffffef0e6d050)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002e,0x800000010f192fb0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "OperaActiveUserSessionScopeGraphBridge/SCSingleSnapPlayerMediaServiceSaberServiceProvider.swift"
                            ,0x5f,2,0x34,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103a865f4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c56ffc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103a865f4; end: 103a8669f; -[SCSingleSnapPlayerMediaServiceSaberServiceProvider setValue:forIvarName:] */

void FUN_103a865f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_103a8645c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103a866a0; end: 103a86713; -[SCSingleSnapPlayerMediaServiceSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a866a0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fdc538,0);
  func_0x000107c61614(param_1 + _DAT_112fdc540,0);
  *(undefined8 *)(param_1 + _DAT_112fdc548) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a86714; end: 103a86747;  */

void FUN_103a86714(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a86748; end: 103a8678f; -[SCSingleSnapPlayerMediaServiceSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a86748(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fdc538);
  func_0x000107c61610(param_1 + _DAT_112fdc540);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fdc548));
  return;
}



/* Entry: 103a86790; end: 103a867af;  */

void FUN_103a86790(void)

{
  func_0x000107c61168(&PTR_PTR_112fdc590);
  return;
}



/* Entry: 103a867b0; end: 103a86837;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103a867b0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100aa5260();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fdc5f8) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fdc600) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a86838);
  (*pcVar1)();
}



/* Entry: 103a86838; end: 103a86897; -[_TtC41PlaybackActiveUserSessionScopeGraphBridge56PlaybackActiveUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_103a86838(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlaybackActiveUserSessionScopeGraphBridge.PlaybackActiveUserSessionScopeGraphBridgeSaberEntryPoint"
                      ,0x62,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a86864);
  (*pcVar1)();
}



/* Entry: 103a86898; end: 103a868cf; -[_TtC41PlaybackActiveUserSessionScopeGraphBridge56PlaybackActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a868b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a868b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a86898(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fdc5f8));
  return;
}



/* Entry: 103a868d0; end: 103a868f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a868d0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fdc600),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fdc5f8));
  return;
}



/* Entry: 103a868f8; end: 103a86993;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103a868f8(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fdc960);
  *(undefined8 *)(unaff_x20 + _DAT_112fdc630) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fdc638) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 103a86994; end: 103a869f3; -[_TtC41PlaybackActiveUserSessionScopeGraphBridge41SCPlaybackLegacyHLSServiceSaberEntryPoint init] */

void FUN_103a86994(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlaybackActiveUserSessionScopeGraphBridge.SCPlaybackLegacyHLSServiceSaberEntryPoint"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a869c0);
  (*pcVar1)();
}



/* Entry: 103a869f4; end: 103a86a87; -[_TtC41PlaybackActiveUserSessionScopeGraphBridge41SCPlaybackLegacyHLSServiceSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a869f4(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fdc630));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fdc638));
  return;
}



/* Entry: 103a86a88; end: 103a86a8f;  */

undefined8 FUN_103a86a88(void)

{
  return 0;
}



/* Entry: 103a86a90; end: 103a86b2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103a86a90(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fdc970);
  *(undefined8 *)(unaff_x20 + _DAT_112fdc668) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fdc670) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 103a86b2c; end: 103a86b8b; -[_TtC41PlaybackActiveUserSessionScopeGraphBridge47SCPlaybackMediaResolutionServiceSaberEntryPoint init] */

void FUN_103a86b2c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlaybackActiveUserSessionScopeGraphBridge.SCPlaybackMediaResolutionServiceSaberEntryPoint"
                      ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a86b58);
  (*pcVar1)();
}



/* Entry: 103a86b8c; end: 103a86c1f; -[_TtC41PlaybackActiveUserSessionScopeGraphBridge47SCPlaybackMediaResolutionServiceSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a86b8c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fdc668));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fdc670));
  return;
}



/* Entry: 103a86c20; end: 103a86c27;  */

undefined8 FUN_103a86c20(void)

{
  return 0;
}



/* Entry: 103a86c28; end: 103a86cc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103a86c28(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fdc980);
  *(undefined8 *)(unaff_x20 + _DAT_112fdc6a0) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fdc6a8) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 103a86cc4; end: 103a86d23; -[_TtC41PlaybackActiveUserSessionScopeGraphBridge47VideoSuperResolutionModelServiceSaberEntryPoint init] */

void FUN_103a86cc4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlaybackActiveUserSessionScopeGraphBridge.VideoSuperResolutionModelServiceSaberEntryPoint"
                      ,0x59,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a86cf0);
  (*pcVar1)();
}



/* Entry: 103a86d24; end: 103a86db7; -[_TtC41PlaybackActiveUserSessionScopeGraphBridge47VideoSuperResolutionModelServiceSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a86d24(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fdc6a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fdc6a8));
  return;
}



/* Entry: 103a86db8; end: 103a86dbf;  */

undefined8 FUN_103a86db8(void)

{
  return 0;
}



/* Entry: 103a86dc0; end: 103a86e23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a86dc0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fdc958);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a86e24; end: 103a86e2b;  */

void FUN_103a86e24(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a86e2c; end: 103a86ecb;  */

void FUN_103a86e2c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a86ecc; end: 103a86eeb;  */

void FUN_103a86ecc(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a86eec; end: 103a86f4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a86eec(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fdc968);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a86f50; end: 103a86f57;  */

void FUN_103a86f50(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a86f58; end: 103a86ff7;  */

void FUN_103a86f58(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a86ff8; end: 103a87017;  */

void FUN_103a86ff8(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a87018; end: 103a8707b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103a87018(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fdc978);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 103a8707c; end: 103a87083;  */

void FUN_103a8707c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103a87084; end: 103a87123;  */

void FUN_103a87084(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103a87124; end: 103a87143;  */

void FUN_103a87124(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 103a87144; end: 103a871f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a87144(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fdc958) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fdc960) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fdc968) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fdc970) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fdc978) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112fdc980) = param_6;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a871f8; end: 103a87257; -[_TtC41PlaybackActiveUserSessionScopeGraphBridge49PlaybackActiveUserSessionScopeGraphBridgeServices init] */

void FUN_103a871f8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlaybackActiveUserSessionScopeGraphBridge.PlaybackActiveUserSessionScopeGraphBridgeServices"
                      ,0x5b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a87224);
  (*pcVar1)();
}



/* Entry: 103a87258; end: 103a8732b; -[_TtC41PlaybackActiveUserSessionScopeGraphBridge49PlaybackActiveUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a87274: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a87294: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a872b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a87298) */
/* WARNING: Removing unreachable block (ram,0x000103a87278) */
/* WARNING: Removing unreachable block (ram,0x000103a872b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a87258(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fdc960));
  return;
}



/* Entry: 103a8732c; end: 103a87363;  */

undefined1  [16] FUN_103a8732c(void)

{
  return ZEXT816(0x1106c6ec8);
}



/* Entry: 103a87364; end: 103a873a7; -[SCPlaybackActiveUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_103a87364(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a873a8; end: 103a873db;  */

void FUN_103a873a8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a873dc; end: 103a87423; -[SCPlaybackActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a87408: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a8740c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a873dc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fdc9d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fdc9e0));
  return;
}



/* Entry: 103a87424; end: 103a87443;  */

void FUN_103a87424(void)

{
  func_0x000107c61168(&PTR_PTR_11291bb68);
  return;
}



/* Entry: 103a87444; end: 103a87487; -[SCSCPlaybackLegacyHLSServiceSaberEntryPoint end] */

void FUN_103a87444(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a87488; end: 103a874bb;  */

void FUN_103a87488(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a874bc; end: 103a87513; -[SCSCPlaybackLegacyHLSServiceSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a874f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a874fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a874bc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fdca18);
  func_0x000107c61610(param_1 + _DAT_112fdca20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fdca28));
  return;
}



/* Entry: 103a87514; end: 103a87533;  */

void FUN_103a87514(void)

{
  func_0x000107c61168(&PTR_PTR_11291bc30);
  return;
}



/* Entry: 103a87534; end: 103a87577; -[SCSCPlaybackMediaResolutionServiceSaberEntryPoint end] */

void FUN_103a87534(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a87578; end: 103a875ab;  */

void FUN_103a87578(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a875ac; end: 103a87603; -[SCSCPlaybackMediaResolutionServiceSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a875e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a875ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a875ac(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fdca60);
  func_0x000107c61610(param_1 + _DAT_112fdca68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fdca70));
  return;
}



/* Entry: 103a87604; end: 103a87623;  */

void FUN_103a87604(void)

{
  func_0x000107c61168(&PTR_PTR_11291bd00);
  return;
}



/* Entry: 103a87624; end: 103a87667; -[SCVideoSuperResolutionModelServiceSaberEntryPoint end] */

void FUN_103a87624(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a87668; end: 103a8769b;  */

void FUN_103a87668(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a8769c; end: 103a876f3; -[SCVideoSuperResolutionModelServiceSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103a876d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a876dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8769c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fdcaa8);
  func_0x000107c61610(param_1 + _DAT_112fdcab0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fdcab8));
  return;
}



/* Entry: 103a876f4; end: 103a87713;  */

void FUN_103a876f4(void)

{
  func_0x000107c61168(&PTR_PTR_11291bdd0);
  return;
}



/* Entry: 103a87714; end: 103a8771f; -[SCPlaybackPlayerServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a87714(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdcaf0;
  func_0x000107c61428(param_1 + _DAT_112fdcaf0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a87720; end: 103a8772b; -[SCPlaybackPlayerServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a87720(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdcaf0;
  func_0x000107c61428(param_1 + _DAT_112fdcaf0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a8772c; end: 103a87737; -[SCPlaybackPlayerServicesSaberServiceProvider playbackActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8772c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdcaf8;
  func_0x000107c61428(param_1 + _DAT_112fdcaf8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a87738; end: 103a8777b;  */

void FUN_103a87738(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a8777c; end: 103a87787; -[SCPlaybackPlayerServicesSaberServiceProvider setPlaybackActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a8777c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdcaf8;
  func_0x000107c61428(param_1 + _DAT_112fdcaf8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a87788; end: 103a877db;  */

void FUN_103a87788(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a877dc; end: 103a879ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103a877dc(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_48;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4e8dc();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x000103a86e50();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fdc958);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fdcb00);
      *(long *)(unaff_x20 + _DAT_112fdcb00) = lVar4;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar4);
      func_0x000107c61574(uVar5);
      func_0x000100083b20(&uStack_48);
      func_0x000107c61574(lVar4);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar3);
      return uStack_48;
    }
    func_0x000107c61170(lVar2);
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "PlaybackActiveUserSessionScopeGraphBridge/SCPlaybackPlayerServicesSaberServiceProvider.swift"
                      ,0x5c,2,0x21,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103a87908);
  (*pcVar1)();
}



/* Entry: 103a879f0; end: 103a87a23; -[SCPlaybackPlayerServicesSaberServiceProvider provide] */

void FUN_103a879f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103a877dc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a87a24; end: 103a87a57; -[SCPlaybackPlayerServicesSaberServiceProvider __safeProvide] */

void FUN_103a87a24(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000103a87908();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103a87a58; end: 103a87a9b; -[SCPlaybackPlayerServicesSaberServiceProvider end] */

void FUN_103a87a58(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a87a9c; end: 103a87c33;  */

void FUN_103a87a9c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffcf) || (param_3 != -0x7ffffffef0e6cb20)) {
      uVar2 = 0xd000000000000031;
      func_0x000107c605b8(0xd000000000000031,0x800000010f1934e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "PlaybackActiveUserSessionScopeGraphBridge/SCPlaybackPlayerServicesSaberServiceProvider.swift"
                            ,0x5c,2,0x36,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x103a87c34);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c574b8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103a87c34; end: 103a87cdf; -[SCPlaybackPlayerServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_103a87c34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_103a87a9c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103a87ce0; end: 103a87d53; -[SCPlaybackPlayerServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a87ce0(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fdcaf0,0);
  func_0x000107c61614(param_1 + _DAT_112fdcaf8,0);
  *(undefined8 *)(param_1 + _DAT_112fdcb00) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103a87d54; end: 103a87d87;  */

void FUN_103a87d54(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103a87d88; end: 103a87dcf; -[SCPlaybackPlayerServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a87d88(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fdcaf0);
  func_0x000107c61610(param_1 + _DAT_112fdcaf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fdcb00));
  return;
}



/* Entry: 103a87dd0; end: 103a87def;  */

void FUN_103a87dd0(void)

{
  func_0x000107c61168(&PTR_PTR_112fdcb48);
  return;
}



/* Entry: 103a87df0; end: 103a87dfb; -[SCSCPlaybackMediaPrefetchServiceSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a87df0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdcbb0;
  func_0x000107c61428(param_1 + _DAT_112fdcbb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a87dfc; end: 103a87e07; -[SCSCPlaybackMediaPrefetchServiceSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a87dfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fdcbb0;
  func_0x000107c61428(param_1 + _DAT_112fdcbb0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103a87e08; end: 103a87e13; -[SCSCPlaybackMediaPrefetchServiceSaberServiceProvider playbackActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103a87e08(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fdcbb8;
  func_0x000107c61428(param_1 + _DAT_112fdcbb8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103a87e14; end: 103a87e57;  */

void FUN_103a87e14(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


