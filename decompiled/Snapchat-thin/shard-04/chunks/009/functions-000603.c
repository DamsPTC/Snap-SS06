/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1039cc380; end: 1039cc3c3; -[SCSCVoiceoverServicesSaberServiceProvider end] */

void FUN_1039cc380(undefined8 param_1)

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



/* Entry: 1039cc3c4; end: 1039cc55b;  */

void FUN_1039cc3c4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef0e7a890)) {
      uVar2 = 0xd00000000000002f;
      func_0x000107c605b8(0xd00000000000002f,0x800000010f185770,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CreateActiveUserSessionScopeGraphBridge/SCSCVoiceoverServicesSaberServiceProvider.swift"
                            ,0x57,2,0x3a,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1039cc55c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53a5c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1039cc55c; end: 1039cc607; -[SCSCVoiceoverServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1039cc55c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1039cc3c4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1039cc608; end: 1039cc67b; -[SCSCVoiceoverServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cc608(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fc54c8,0);
  func_0x000107c61614(param_1 + _DAT_112fc54d0,0);
  *(undefined8 *)(param_1 + _DAT_112fc54d8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039cc67c; end: 1039cc6af;  */

void FUN_1039cc67c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039cc6b0; end: 1039cc6f7; -[SCSCVoiceoverServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cc6b0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fc54c8);
  func_0x000107c61610(param_1 + _DAT_112fc54d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fc54d8));
  return;
}



/* Entry: 1039cc6f8; end: 1039cc717;  */

void FUN_1039cc6f8(void)

{
  func_0x000107c61168(&PTR_PTR_112fc5520);
  return;
}



/* Entry: 1039cc718; end: 1039cc723; -[SCUnifiedToolbarServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cc718(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc5588;
  func_0x000107c61428(param_1 + _DAT_112fc5588,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039cc724; end: 1039cc72f; -[SCUnifiedToolbarServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cc724(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc5588;
  func_0x000107c61428(param_1 + _DAT_112fc5588,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039cc730; end: 1039cc73b; -[SCUnifiedToolbarServicesSaberServiceProvider createActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cc730(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc5590;
  func_0x000107c61428(param_1 + _DAT_112fc5590,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039cc73c; end: 1039cc77f;  */

void FUN_1039cc73c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1039cc780; end: 1039cc78b; -[SCUnifiedToolbarServicesSaberServiceProvider setCreateActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cc780(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc5590;
  func_0x000107c61428(param_1 + _DAT_112fc5590,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039cc78c; end: 1039cc7df;  */

void FUN_1039cc78c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039cc7e0; end: 1039cc9f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1039cc7e0(void)

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
    func_0x000107c40914();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001039c96fc();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fc4f98);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fc5598);
      *(long *)(unaff_x20 + _DAT_112fc5598) = lVar4;
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
                      "CreateActiveUserSessionScopeGraphBridge/SCUnifiedToolbarServicesSaberServiceProvider.swift"
                      ,0x5a,2,0x25,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039cc90c);
  (*pcVar1)();
}



/* Entry: 1039cc9f4; end: 1039cca27; -[SCUnifiedToolbarServicesSaberServiceProvider provide] */

void FUN_1039cc9f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1039cc7e0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039cca28; end: 1039cca5b; -[SCUnifiedToolbarServicesSaberServiceProvider __safeProvide] */

void FUN_1039cca28(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001039cc90c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039cca5c; end: 1039cca9f; -[SCUnifiedToolbarServicesSaberServiceProvider end] */

void FUN_1039cca5c(undefined8 param_1)

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



/* Entry: 1039ccaa0; end: 1039ccc37;  */

void FUN_1039ccaa0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd1) || (param_3 != -0x7ffffffef0e7a890)) {
      uVar2 = 0xd00000000000002f;
      func_0x000107c605b8(0xd00000000000002f,0x800000010f185770,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CreateActiveUserSessionScopeGraphBridge/SCUnifiedToolbarServicesSaberServiceProvider.swift"
                            ,0x5a,2,0x3a,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1039ccc38);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53a5c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1039ccc38; end: 1039ccce3; -[SCUnifiedToolbarServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1039ccc38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1039ccaa0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1039ccce4; end: 1039ccd57; -[SCUnifiedToolbarServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ccce4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fc5588,0);
  func_0x000107c61614(param_1 + _DAT_112fc5590,0);
  *(undefined8 *)(param_1 + _DAT_112fc5598) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039ccd58; end: 1039ccd8b;  */

void FUN_1039ccd58(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039ccd8c; end: 1039ccdd3; -[SCUnifiedToolbarServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ccd8c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fc5588);
  func_0x000107c61610(param_1 + _DAT_112fc5590);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fc5598));
  return;
}



/* Entry: 1039ccdd4; end: 1039ccdf3;  */

void FUN_1039ccdd4(void)

{
  func_0x000107c61168(&PTR_PTR_112fc55e0);
  return;
}



/* Entry: 1039ccdf4; end: 1039cce7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1039ccdf4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  func_0x000100aa1378();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112fc5648) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112fc5650) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039cce7c);
  (*pcVar1)();
}



/* Entry: 1039cce7c; end: 1039ccedb; -[_TtC41CreatorsActiveUserSessionScopeGraphBridge56CreatorsActiveUserSessionScopeGraphBridgeSaberEntryPoint init] */

void FUN_1039cce7c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreatorsActiveUserSessionScopeGraphBridge.CreatorsActiveUserSessionScopeGraphBridgeSaberEntryPoint"
                      ,0x62,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039ccea8);
  (*pcVar1)();
}



/* Entry: 1039ccedc; end: 1039ccf13; -[_TtC41CreatorsActiveUserSessionScopeGraphBridge56CreatorsActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039ccef8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039ccefc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ccedc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fc5648));
  return;
}



/* Entry: 1039ccf14; end: 1039ccf3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ccf14(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112fc5650),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112fc5648));
  return;
}



/* Entry: 1039ccf3c; end: 1039ccfd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1039ccf3c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar2 = auStack_40;
  func_0x000107c610f8();
  uVar3 = *(undefined8 *)(param_2 + _DAT_112fc5a20);
  *(undefined8 *)(unaff_x20 + _DAT_112fc5680) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112fc5688) = param_3;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(auStack_40,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 1039ccfd8; end: 1039cd037; -[_TtC41CreatorsActiveUserSessionScopeGraphBridge41SCSnapProMessagingServicesSaberEntryPoint init] */

void FUN_1039ccfd8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreatorsActiveUserSessionScopeGraphBridge.SCSnapProMessagingServicesSaberEntryPoint"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039cd004);
  (*pcVar1)();
}



/* Entry: 1039cd038; end: 1039cd0cb; -[_TtC41CreatorsActiveUserSessionScopeGraphBridge41SCSnapProMessagingServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cd038(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112fc5680));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fc5688));
  return;
}



/* Entry: 1039cd0cc; end: 1039cd0d3;  */

undefined8 FUN_1039cd0cc(void)

{
  return 0;
}



/* Entry: 1039cd0d4; end: 1039cd137;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039cd0d4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fc5a08);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039cd138; end: 1039cd13f;  */

void FUN_1039cd138(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039cd140; end: 1039cd1df;  */

void FUN_1039cd140(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039cd1e0; end: 1039cd1ff;  */

void FUN_1039cd1e0(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039cd200; end: 1039cd263;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039cd200(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fc5a10);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039cd264; end: 1039cd26b;  */

void FUN_1039cd264(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039cd26c; end: 1039cd30b;  */

void FUN_1039cd26c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039cd30c; end: 1039cd32b;  */

void FUN_1039cd30c(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039cd32c; end: 1039cd38f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039cd32c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fc5a18);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039cd390; end: 1039cd397;  */

void FUN_1039cd390(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039cd398; end: 1039cd437;  */

void FUN_1039cd398(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039cd438; end: 1039cd457;  */

void FUN_1039cd438(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039cd458; end: 1039cd4bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1039cd458(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  uVar1 = *(undefined8 *)(param_2 + _DAT_112fc5a28);
  func_0x000107c6157c(uVar1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  return unaff_x20;
}



/* Entry: 1039cd4bc; end: 1039cd4c3;  */

void FUN_1039cd4bc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1039cd4c4; end: 1039cd563;  */

void FUN_1039cd4c4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039cd564; end: 1039cd583;  */

void FUN_1039cd564(void)

{
  func_0x000100083b20();
  return;
}



/* Entry: 1039cd584; end: 1039cd61f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cd584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fc5a08) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fc5a10) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fc5a18) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112fc5a20) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112fc5a28) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039cd620; end: 1039cd67f; -[_TtC41CreatorsActiveUserSessionScopeGraphBridge49CreatorsActiveUserSessionScopeGraphBridgeServices init] */

void FUN_1039cd620(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CreatorsActiveUserSessionScopeGraphBridge.CreatorsActiveUserSessionScopeGraphBridgeServices"
                      ,0x5b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039cd64c);
  (*pcVar1)();
}



/* Entry: 1039cd680; end: 1039cd743; -[_TtC41CreatorsActiveUserSessionScopeGraphBridge49CreatorsActiveUserSessionScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039cd69c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039cd6bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039cd6a0) */
/* WARNING: Removing unreachable block (ram,0x0001039cd6c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cd680(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fc5a20));
  return;
}



/* Entry: 1039cd744; end: 1039cd77b;  */

undefined1  [16] FUN_1039cd744(void)

{
  return ZEXT816(0x1106b9618);
}



/* Entry: 1039cd77c; end: 1039cd7bf; -[SCCreatorsActiveUserSessionScopeGraphBridgeSaberEntryPoint end] */

void FUN_1039cd77c(undefined8 param_1)

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



/* Entry: 1039cd7c0; end: 1039cd7f3;  */

void FUN_1039cd7c0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039cd7f4; end: 1039cd83b; -[SCCreatorsActiveUserSessionScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039cd820: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039cd824) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cd7f4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fc5a80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fc5a88));
  return;
}



/* Entry: 1039cd83c; end: 1039cd85b;  */

void FUN_1039cd83c(void)

{
  func_0x000107c61168(&PTR_PTR_1129115f0);
  return;
}



/* Entry: 1039cd85c; end: 1039cd89f; -[SCSCSnapProMessagingServicesSaberEntryPoint end] */

void FUN_1039cd85c(undefined8 param_1)

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



/* Entry: 1039cd8a0; end: 1039cd8d3;  */

void FUN_1039cd8a0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039cd8d4; end: 1039cd92b; -[SCSCSnapProMessagingServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001039cd910: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039cd914) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cd8d4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fc5ac0);
  func_0x000107c61610(param_1 + _DAT_112fc5ac8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fc5ad0));
  return;
}



/* Entry: 1039cd92c; end: 1039cd94b;  */

void FUN_1039cd92c(void)

{
  func_0x000107c61168(&PTR_PTR_1129116b8);
  return;
}



/* Entry: 1039cd94c; end: 1039cd957; -[SCSCCreatorsMessagingServicesScopeSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cd94c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc5b08;
  func_0x000107c61428(param_1 + _DAT_112fc5b08,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039cd958; end: 1039cd963; -[SCSCCreatorsMessagingServicesScopeSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cd958(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc5b08;
  func_0x000107c61428(param_1 + _DAT_112fc5b08,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039cd964; end: 1039cd96f; -[SCSCCreatorsMessagingServicesScopeSaberServiceProvider creatorsActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cd964(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc5b10;
  func_0x000107c61428(param_1 + _DAT_112fc5b10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039cd970; end: 1039cd9b3;  */

void FUN_1039cd970(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1039cd9b4; end: 1039cd9bf; -[SCSCCreatorsMessagingServicesScopeSaberServiceProvider setCreatorsActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cd9b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc5b10;
  func_0x000107c61428(param_1 + _DAT_112fc5b10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039cd9c0; end: 1039cda13;  */

void FUN_1039cd9c0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039cda14; end: 1039cdc27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1039cda14(void)

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
    func_0x000107c40d20();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001039cd164();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fc5a08);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fc5b18);
      *(long *)(unaff_x20 + _DAT_112fc5b18) = lVar4;
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
                      "CreatorsActiveUserSessionScopeGraphBridge/SCSCCreatorsMessagingServicesScopeSaberServiceProvider.swift"
                      ,0x66,2,0x20,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039cdb40);
  (*pcVar1)();
}



/* Entry: 1039cdc28; end: 1039cdc5b; -[SCSCCreatorsMessagingServicesScopeSaberServiceProvider provide] */

void FUN_1039cdc28(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1039cda14();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039cdc5c; end: 1039cdc8f; -[SCSCCreatorsMessagingServicesScopeSaberServiceProvider __safeProvide] */

void FUN_1039cdc5c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001039cdb40();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039cdc90; end: 1039cdcd3; -[SCSCCreatorsMessagingServicesScopeSaberServiceProvider end] */

void FUN_1039cdc90(undefined8 param_1)

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



/* Entry: 1039cdcd4; end: 1039cde6b;  */

void FUN_1039cdcd4(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffcf) || (param_3 != -0x7ffffffef0e7a090)) {
      uVar2 = 0xd000000000000031;
      func_0x000107c605b8(0xd000000000000031,0x800000010f185f70,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CreatorsActiveUserSessionScopeGraphBridge/SCSCCreatorsMessagingServicesScopeSaberServiceProvider.swift"
                            ,0x66,2,0x35,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1039cde6c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53b20();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1039cde6c; end: 1039cdf17; -[SCSCCreatorsMessagingServicesScopeSaberServiceProvider setValue:forIvarName:] */

void FUN_1039cde6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1039cdcd4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1039cdf18; end: 1039cdf8b; -[SCSCCreatorsMessagingServicesScopeSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cdf18(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fc5b08,0);
  func_0x000107c61614(param_1 + _DAT_112fc5b10,0);
  *(undefined8 *)(param_1 + _DAT_112fc5b18) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039cdf8c; end: 1039cdfbf;  */

void FUN_1039cdf8c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039cdfc0; end: 1039ce007; -[SCSCCreatorsMessagingServicesScopeSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039cdfc0(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fc5b08);
  func_0x000107c61610(param_1 + _DAT_112fc5b10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fc5b18));
  return;
}



/* Entry: 1039ce008; end: 1039ce027;  */

void FUN_1039ce008(void)

{
  func_0x000107c61168(&PTR_PTR_112fc5b60);
  return;
}



/* Entry: 1039ce028; end: 1039ce033; -[SCSCCreatorsSubscriptionStoreServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ce028(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc5bc8;
  func_0x000107c61428(param_1 + _DAT_112fc5bc8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039ce034; end: 1039ce03f; -[SCSCCreatorsSubscriptionStoreServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ce034(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc5bc8;
  func_0x000107c61428(param_1 + _DAT_112fc5bc8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039ce040; end: 1039ce04b; -[SCSCCreatorsSubscriptionStoreServicesSaberServiceProvider creatorsActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ce040(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc5bd0;
  func_0x000107c61428(param_1 + _DAT_112fc5bd0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039ce04c; end: 1039ce08f;  */

void FUN_1039ce04c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1039ce090; end: 1039ce09b; -[SCSCCreatorsSubscriptionStoreServicesSaberServiceProvider setCreatorsActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ce090(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc5bd0;
  func_0x000107c61428(param_1 + _DAT_112fc5bd0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039ce09c; end: 1039ce0ef;  */

void FUN_1039ce09c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039ce0f0; end: 1039ce303;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1039ce0f0(void)

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
    func_0x000107c40d20();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001039cd290();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fc5a10);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fc5bd8);
      *(long *)(unaff_x20 + _DAT_112fc5bd8) = lVar4;
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
                      "CreatorsActiveUserSessionScopeGraphBridge/SCSCCreatorsSubscriptionStoreServicesSaberServiceProvider.swift"
                      ,0x69,2,0x20,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039ce21c);
  (*pcVar1)();
}



/* Entry: 1039ce304; end: 1039ce337; -[SCSCCreatorsSubscriptionStoreServicesSaberServiceProvider provide] */

void FUN_1039ce304(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1039ce0f0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039ce338; end: 1039ce36b; -[SCSCCreatorsSubscriptionStoreServicesSaberServiceProvider __safeProvide] */

void FUN_1039ce338(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001039ce21c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039ce36c; end: 1039ce3af; -[SCSCCreatorsSubscriptionStoreServicesSaberServiceProvider end] */

void FUN_1039ce36c(undefined8 param_1)

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



/* Entry: 1039ce3b0; end: 1039ce547;  */

void FUN_1039ce3b0(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffcf) || (param_3 != -0x7ffffffef0e7a090)) {
      uVar2 = 0xd000000000000031;
      func_0x000107c605b8(0xd000000000000031,0x800000010f185f70,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "CreatorsActiveUserSessionScopeGraphBridge/SCSCCreatorsSubscriptionStoreServicesSaberServiceProvider.swift"
                            ,0x69,2,0x35,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1039ce548);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53b20();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1039ce548; end: 1039ce5f3; -[SCSCCreatorsSubscriptionStoreServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_1039ce548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1039ce3b0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1039ce5f4; end: 1039ce667; -[SCSCCreatorsSubscriptionStoreServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ce5f4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112fc5bc8,0);
  func_0x000107c61614(param_1 + _DAT_112fc5bd0,0);
  *(undefined8 *)(param_1 + _DAT_112fc5bd8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039ce668; end: 1039ce69b;  */

void FUN_1039ce668(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039ce69c; end: 1039ce6e3; -[SCSCCreatorsSubscriptionStoreServicesSaberServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ce69c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fc5bc8);
  func_0x000107c61610(param_1 + _DAT_112fc5bd0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fc5bd8));
  return;
}



/* Entry: 1039ce6e4; end: 1039ce703;  */

void FUN_1039ce6e4(void)

{
  func_0x000107c61168(&PTR_PTR_112fc5c20);
  return;
}



/* Entry: 1039ce704; end: 1039ce70f; -[SCSCImpalaCreatorNotificationsServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ce704(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc5c88;
  func_0x000107c61428(param_1 + _DAT_112fc5c88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039ce710; end: 1039ce71b; -[SCSCImpalaCreatorNotificationsServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ce710(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc5c88;
  func_0x000107c61428(param_1 + _DAT_112fc5c88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039ce71c; end: 1039ce727; -[SCSCImpalaCreatorNotificationsServicesSaberServiceProvider creatorsActiveUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ce71c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fc5c90;
  func_0x000107c61428(param_1 + _DAT_112fc5c90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1039ce728; end: 1039ce76b;  */

void FUN_1039ce728(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1039ce76c; end: 1039ce777; -[SCSCImpalaCreatorNotificationsServicesSaberServiceProvider setCreatorsActiveUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039ce76c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fc5c90;
  func_0x000107c61428(param_1 + _DAT_112fc5c90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039ce778; end: 1039ce7cb;  */

void FUN_1039ce778(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039ce7cc; end: 1039ce9df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1039ce7cc(void)

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
    func_0x000107c40d20();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = 0;
      func_0x0001039cd3bc();
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar3 + _DAT_112fc5a18);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112fc5c98);
      *(long *)(unaff_x20 + _DAT_112fc5c98) = lVar4;
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
                      "CreatorsActiveUserSessionScopeGraphBridge/SCSCImpalaCreatorNotificationsServicesSaberServiceProvider.swift"
                      ,0x6a,2,0x20,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039ce8f8);
  (*pcVar1)();
}



/* Entry: 1039ce9e0; end: 1039cea13; -[SCSCImpalaCreatorNotificationsServicesSaberServiceProvider provide] */

void FUN_1039ce9e0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1039ce7cc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1039cea14; end: 1039cea47; -[SCSCImpalaCreatorNotificationsServicesSaberServiceProvider __safeProvide] */

void FUN_1039cea14(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001039ce8f8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


