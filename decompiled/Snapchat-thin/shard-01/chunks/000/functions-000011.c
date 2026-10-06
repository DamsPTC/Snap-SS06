/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100c0cfb4; end: 100c0cfd3; -[SCLensPresendUploadPluginEntryPoint init] */

void FUN_100c0cfb4(void)

{
  FUN_100c0cf04();
  return;
}



/* Entry: 100c0cfd4; end: 100c0d07f; -[SCLensPresendUploadPluginEntryPoint setValue:forIvarName:] */

void FUN_100c0cfd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100c0d080(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_100c0d3e8(auStack_50);
  return;
}



/* Entry: 100c0d080; end: 100c0d363;  */

void FUN_100c0d080(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_100c0d364(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffee) && (param_3 == -0x7ffffffef10da060)) ||
       (func_0x000107c605b8(0xd000000000000012,0x800000010ef25fa0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      FUN_100c0d364(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c57960();
    }
    else {
      if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10da040)) {
        uVar2 = 0xd000000000000013;
        func_0x000107c605b8(0xd000000000000013,0x800000010ef25fc0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0x5361746144636c69;
          if (((param_2 == 0x5361746144636c69) && (param_3 == -0x108c9a9c96898d9b)) ||
             (func_0x000107c605b8(0x5361746144636c69,0xef73656369767265,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            FUN_100c0d364(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c55250();
          }
          else {
            uVar2 = 0xd000000000000015;
            if (((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef10da020)) &&
               (func_0x000107c605b8(0xd000000000000015,0x800000010ef25fe0,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "LensPresendUploadPlugin/SCLensPresendUploadPluginEntryPoint.swift"
                                  ,0x41,2,0x36,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100c0d364);
              (*pcVar1)();
            }
            FUN_100c0d364(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c57974();
          }
          goto LAB_100c0d10c;
        }
      }
      FUN_100c0d364(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c57650();
    }
  }
LAB_100c0d10c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100c0d364; end: 100c0d387;  */

long * FUN_100c0d364(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 100c0d388; end: 100c0d393; -[SCLensPresendUploadPluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0d388(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5cf88;
  func_0x000107c61428(param_1 + _DAT_112d5cf88,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c0d394; end: 100c0d3e7;  */

void FUN_100c0d394(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c0d3e8; end: 100c0d407;  */

void FUN_100c0d3e8(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100c0d3fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 100c0d408; end: 100c0d47b; -[SCSCLensPromptDataServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0d408(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113028fe8,0);
  func_0x000107c61614(param_1 + _DAT_113028ff0,0);
  *(undefined8 *)(param_1 + _DAT_113028ff8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100c0d47c; end: 100c0d527; -[SCSCLensPromptDataServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100c0d47c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100c0d528(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100c0d528; end: 100c0d6bf;  */

void FUN_100c0d528(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e36f20)) {
      uVar2 = 0xd000000000000027;
      func_0x000107c605b8(0xd000000000000027,0x800000010f1c90e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "LensUserSessionScopeGraphBridge/SCSCLensPromptDataServicesSaberServiceProvider.swift"
                            ,0x54,2,0x81,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100c0d6c0);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c55ef0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100c0d6c0; end: 100c0d6cb; -[SCSCLensPromptDataServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0d6c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113028fe8;
  func_0x000107c61428(param_1 + _DAT_113028fe8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c0d6cc; end: 100c0d71f;  */

void FUN_100c0d6cc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c0d720; end: 100c0d72b; -[SCSCLensPromptDataServicesSaberServiceProvider setLensUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0d720(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113028ff0;
  func_0x000107c61428(param_1 + _DAT_113028ff0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c0d72c; end: 100c0d75f; -[SCSCLensPromptDataServicesSaberServiceProvider __safeProvide] */

void FUN_100c0d72c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100c0d760();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c0d760; end: 100c0d847;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0d760(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4b520();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100c0d8a4();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_113026780);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113028ff8);
      *(long *)(unaff_x20 + _DAT_113028ff8) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      func_0x000100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100c0d848; end: 100c0d853; -[SCSCLensPromptDataServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0d848(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113028fe8;
  func_0x000107c61428(param_1 + _DAT_113028fe8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c0d854; end: 100c0d897;  */

void FUN_100c0d854(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100c0d898; end: 100c0d8a3; -[SCSCLensPromptDataServicesSaberServiceProvider lensUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0d898(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113028ff0;
  func_0x000107c61428(param_1 + _DAT_113028ff0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c0d8a4; end: 100c0d91f;  */

void FUN_100c0d8a4(undefined8 param_1)

{
  if (lRam0000000113025190 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7cfcc8);
  return;
}



/* Entry: 100c0d920; end: 100c0d92b; -[SCLensPresendUploadPluginEntryPoint setPromptDataServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0d920(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5cf90;
  func_0x000107c61428(param_1 + _DAT_112d5cf90,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c0d92c; end: 100c0d99f; -[SCLensPreSendDataServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0d92c(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_113026ee8,0);
  func_0x000107c61614(param_1 + _DAT_113026ef0,0);
  *(undefined8 *)(param_1 + _DAT_113026ef8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100c0d9a0; end: 100c0da4b; -[SCLensPreSendDataServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100c0d9a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100c0da4c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100c0da4c; end: 100c0dbe3;  */

void FUN_100c0da4c(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e36f20)) {
      uVar2 = 0xd000000000000027;
      func_0x000107c605b8(0xd000000000000027,0x800000010f1c90e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "LensUserSessionScopeGraphBridge/SCLensPreSendDataServicesSaberServiceProvider.swift"
                            ,0x53,2,0x81,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100c0dbe4);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c55ef0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100c0dbe4; end: 100c0dbef; -[SCLensPreSendDataServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0dbe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113026ee8;
  func_0x000107c61428(param_1 + _DAT_113026ee8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c0dbf0; end: 100c0dc43;  */

void FUN_100c0dbf0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c0dc44; end: 100c0dc4f; -[SCLensPreSendDataServicesSaberServiceProvider setLensUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0dc44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_113026ef0;
  func_0x000107c61428(param_1 + _DAT_113026ef0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c0dc50; end: 100c0dc83; -[SCLensPreSendDataServicesSaberServiceProvider __safeProvide] */

void FUN_100c0dc50(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100c0dc84();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c0dc84; end: 100c0dd6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0dc84(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4b520();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100c0ddc8();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_1130265e0);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113026ef8);
      *(long *)(unaff_x20 + _DAT_113026ef8) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      func_0x000100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100c0dd6c; end: 100c0dd77; -[SCLensPreSendDataServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0dd6c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113026ee8;
  func_0x000107c61428(param_1 + _DAT_113026ee8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c0dd78; end: 100c0ddbb;  */

void FUN_100c0dd78(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100c0ddbc; end: 100c0ddc7; -[SCLensPreSendDataServicesSaberServiceProvider lensUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0ddbc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_113026ef0;
  func_0x000107c61428(param_1 + _DAT_113026ef0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c0ddc8; end: 100c0de43;  */

void FUN_100c0ddc8(undefined8 param_1)

{
  if (lRam0000000113022dd0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7ceb98);
  return;
}



/* Entry: 100c0de44; end: 100c0de4b;  */

void FUN_100c0de44(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100c0de4c; end: 100c0de9f;  */

void FUN_100c0de4c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x18);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100c0dea0; end: 100c0dea7;  */

void FUN_100c0dea0(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x0001001b9128();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_100c0df40();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_100c0dfcc();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 100c0dea8; end: 100c0df3f;  */

void FUN_100c0dea8(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x0001001b9128();
  func_0x000107c613fc();
  uVar1 = 0;
  FUN_100c0df40();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_100c0dfcc();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(uStack_48);
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  *param_1 = param_2;
  return;
}



/* Entry: 100c0df40; end: 100c0dfcb;  */

void FUN_100c0df40(undefined8 param_1)

{
  if (lRam0000000112de7ae8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e665574);
  return;
}



/* Entry: 100c0dfcc; end: 100c0e0e3;  */

code * FUN_100c0dfcc(void)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  
  lVar1 = 0;
  func_0x000100c0dfac();
  func_0x000107c613fc();
  func_0x0001000285a8(0x112de7aa8,&UNK_10d9b2710);
  func_0x000107c613fc();
  uVar2 = 1;
  func_0x00010008747c();
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  func_0x0001000285a8(0x112de7ab0,&UNK_10d9b2718);
  func_0x000107c613fc();
  func_0x000107c6157c(lVar1);
  pcVar3 = FUN_100c0f3f4;
  func_0x0001000bdd8c(FUN_100c0f3f4,lVar1);
  func_0x0001000285a8(0x112de7ab8,&UNK_10d9b2720);
  func_0x000107c613fc();
  func_0x000107c6157c(lVar1);
  puVar4 = &UNK_1019e0650;
  func_0x0001000bdd8c(&UNK_1019e0650,lVar1);
  uVar2 = 0;
  func_0x0001001b9aa4(0);
  func_0x000107c610f8();
  FUN_100c0e0f4(pcVar3,puVar4,uVar2);
  func_0x000107c61574(lVar1);
  return pcVar3;
}



/* Entry: 100c0e0e4; end: 100c0e0f3;  */

undefined1  [16] FUN_100c0e0e4(void)

{
  return ZEXT816(0x110767ec0);
}



/* Entry: 100c0e0f4; end: 100c0e157;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0e0f4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_113076e18) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113076e20) = param_2;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100c0e158; end: 100c0e163; -[SCLensPresendUploadPluginEntryPoint setPreSendDataServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0e158(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5cf98;
  func_0x000107c61428(param_1 + _DAT_112d5cf98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c0e164; end: 100c0e1d7; -[SCSCInLensCreationDataServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0e164(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_1130271e8,0);
  func_0x000107c61614(param_1 + _DAT_1130271f0,0);
  *(undefined8 *)(param_1 + _DAT_1130271f8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100c0e1d8; end: 100c0e283; -[SCSCInLensCreationDataServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100c0e1d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100c0e284(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100c0e284; end: 100c0e41b;  */

void FUN_100c0e284(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e36f20)) {
      uVar2 = 0xd000000000000027;
      func_0x000107c605b8(0xd000000000000027,0x800000010f1c90e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "LensUserSessionScopeGraphBridge/SCSCInLensCreationDataServicesSaberServiceProvider.swift"
                            ,0x58,2,0x81,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100c0e41c);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c55ef0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100c0e41c; end: 100c0e427; -[SCSCInLensCreationDataServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0e41c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130271e8;
  func_0x000107c61428(param_1 + _DAT_1130271e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c0e428; end: 100c0e47b;  */

void FUN_100c0e428(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c0e47c; end: 100c0e487; -[SCSCInLensCreationDataServicesSaberServiceProvider setLensUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0e47c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130271f0;
  func_0x000107c61428(param_1 + _DAT_1130271f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c0e488; end: 100c0e4bb; -[SCSCInLensCreationDataServicesSaberServiceProvider __safeProvide] */

void FUN_100c0e488(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100c0e4bc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c0e4bc; end: 100c0e5a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0e4bc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4b520();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100c0e600();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_113026600);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_1130271f8);
      *(long *)(unaff_x20 + _DAT_1130271f8) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      func_0x000100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100c0e5a4; end: 100c0e5af; -[SCSCInLensCreationDataServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0e5a4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130271e8;
  func_0x000107c61428(param_1 + _DAT_1130271e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c0e5b0; end: 100c0e5f3;  */

void FUN_100c0e5b0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100c0e5f4; end: 100c0e5ff; -[SCSCInLensCreationDataServicesSaberServiceProvider lensUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0e5f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130271f0;
  func_0x000107c61428(param_1 + _DAT_1130271f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c0e600; end: 100c0e67b;  */

void FUN_100c0e600(undefined8 param_1)

{
  if (lRam0000000113023110 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7ced28);
  return;
}



/* Entry: 100c0e67c; end: 100c0e687; -[SCLensPresendUploadPluginEntryPoint setIlcDataServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0e67c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5cfa0;
  func_0x000107c61428(param_1 + _DAT_112d5cfa0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c0e688; end: 100c0e6fb; -[SCSCLensPromptLoggingServicesSaberServiceProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0e688(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_1130290a8,0);
  func_0x000107c61614(param_1 + _DAT_1130290b0,0);
  *(undefined8 *)(param_1 + _DAT_1130290b8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100c0e6fc; end: 100c0e7a7; -[SCSCLensPromptLoggingServicesSaberServiceProvider setValue:forIvarName:] */

void FUN_100c0e6fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_100c0e7a8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100c0e7a8; end: 100c0e93f;  */

void FUN_100c0e7a8(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd9) || (param_3 != -0x7ffffffef0e36f20)) {
      uVar2 = 0xd000000000000027;
      func_0x000107c605b8(0xd000000000000027,0x800000010f1c90e0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "LensUserSessionScopeGraphBridge/SCSCLensPromptLoggingServicesSaberServiceProvider.swift"
                            ,0x57,2,0x81,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100c0e940);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c55ef0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100c0e940; end: 100c0e94b; -[SCSCLensPromptLoggingServicesSaberServiceProvider setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0e940(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130290a8;
  func_0x000107c61428(param_1 + _DAT_1130290a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c0e94c; end: 100c0e99f;  */

void FUN_100c0e94c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c0e9a0; end: 100c0e9ab; -[SCSCLensPromptLoggingServicesSaberServiceProvider setLensUserSessionScopeGraphBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0e9a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_1130290b0;
  func_0x000107c61428(param_1 + _DAT_1130290b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c0e9ac; end: 100c0e9df; -[SCSCLensPromptLoggingServicesSaberServiceProvider __safeProvide] */

void FUN_100c0e9ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100c0e9e0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c0e9e0; end: 100c0eac7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0e9e0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4b520();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      lVar3 = 0;
      FUN_100c0eb24();
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar2 + _DAT_113026788);
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_1130290b8);
      *(long *)(unaff_x20 + _DAT_1130290b8) = lVar3;
      func_0x000107c6157c();
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(uVar4);
      func_0x000100083b20(auStack_48);
      func_0x000107c61574(lVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 100c0eac8; end: 100c0ead3; -[SCSCLensPromptLoggingServicesSaberServiceProvider beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0eac8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130290a8;
  func_0x000107c61428(param_1 + _DAT_1130290a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c0ead4; end: 100c0eb17;  */

void FUN_100c0ead4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100c0eb18; end: 100c0eb23; -[SCSCLensPromptLoggingServicesSaberServiceProvider lensUserSessionScopeGraphBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0eb18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_1130290b0;
  func_0x000107c61428(param_1 + _DAT_1130290b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c0eb24; end: 100c0eb9f;  */

void FUN_100c0eb24(undefined8 param_1)

{
  if (lRam0000000113025260 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7cfd2c);
  return;
}



/* Entry: 100c0eba0; end: 100c0ebab; -[SCLensPresendUploadPluginEntryPoint setPromptLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0eba0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5cfa8;
  func_0x000107c61428(param_1 + _DAT_112d5cfa8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100c0ebac; end: 100c0ebd3; -[SCLensPresendUploadPluginEntryPoint begin] */

void FUN_100c0ebac(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100c0ebd4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c0ebd4; end: 100c0f0af;  */

/* WARNING: Possible PIC construction at 0x000100c0ed00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0ee24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0ef64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0ef80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0efa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0efd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0efe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0eff0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0f000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0f078: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0f088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0f068: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c0f08c) */
/* WARNING: Removing unreachable block (ram,0x000100c0f07c) */
/* WARNING: Removing unreachable block (ram,0x000100c0f004) */
/* WARNING: Removing unreachable block (ram,0x000100c0eff4) */
/* WARNING: Removing unreachable block (ram,0x000100c0efe4) */
/* WARNING: Removing unreachable block (ram,0x000100c0efd4) */
/* WARNING: Removing unreachable block (ram,0x000100c0efa8) */
/* WARNING: Removing unreachable block (ram,0x000100c0ef84) */
/* WARNING: Removing unreachable block (ram,0x000100c0ef68) */
/* WARNING: Removing unreachable block (ram,0x000100c0ee28) */
/* WARNING: Removing unreachable block (ram,0x000100c0ed04) */
/* WARNING: Removing unreachable block (ram,0x000100c0f06c) */

void FUN_100c0ebd4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5f804();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4f484();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4ec40();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar3 = unaff_x20;
        func_0x000107c4502c();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          func_0x000107c4f4bc();
          func_0x000107c61180();
          if (unaff_x20 != 0) {
            FUN_100c0f154();
            func_0x000107c613fc();
            func_0x0001000285a8(0x112d5cee8,&UNK_10d9238d0);
            func_0x000107c4f598();
            func_0x000107c61180();
            func_0x0001000bda74();
            lVar1 = lVar3;
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 100c0f0b0; end: 100c0f0d3;  */

void FUN_100c0f0b0(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c0f0d4; end: 100c0f0df; -[SCLensPresendUploadPluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0f0d4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5cf88;
  func_0x000107c61428(param_1 + _DAT_112d5cf88,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c0f0e0; end: 100c0f123;  */

void FUN_100c0f0e0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 100c0f124; end: 100c0f12f; -[SCLensPresendUploadPluginEntryPoint promptDataServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0f124(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5cf90;
  func_0x000107c61428(param_1 + _DAT_112d5cf90,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c0f130; end: 100c0f13b; -[SCLensPresendUploadPluginEntryPoint preSendDataServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0f130(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5cf98;
  func_0x000107c61428(param_1 + _DAT_112d5cf98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c0f13c; end: 100c0f147; -[SCLensPresendUploadPluginEntryPoint ilcDataServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0f13c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5cfa0;
  func_0x000107c61428(param_1 + _DAT_112d5cfa0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c0f148; end: 100c0f153; -[SCLensPresendUploadPluginEntryPoint promptLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0f148(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5cfa8;
  func_0x000107c61428(param_1 + _DAT_112d5cfa8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c0f154; end: 100c0f173;  */

void FUN_100c0f154(void)

{
  func_0x000107c61168(&PTR_PTR_112d5cf30);
  return;
}



/* Entry: 100c0f174; end: 100c0f17b; -[SCInLensCreationDataServices provider] */

undefined8 FUN_100c0f174(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c0f17c; end: 100c0f183; -[SCLensPromptLoggingServices grapheneLogger] */

undefined8 FUN_100c0f17c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100c0f184; end: 100c0f1a3;  */

void FUN_100c0f184(void)

{
  func_0x000107c61168(&PTR_PTR_1127af310);
  return;
}



/* Entry: 100c0f1a4; end: 100c0f2f3;  */

undefined * FUN_100c0f1a4(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  code *pcVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  
  puVar14 = *(undefined **)(param_1 + 0x10);
  puVar10 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar14 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d5ceb8,&UNK_10d9238a8);
    puVar10 = puVar14;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar16 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar16[-2];
      uVar5 = puVar16[-1];
      uVar3 = *puVar16;
      uVar6 = puVar16[1];
      uVar4 = puVar16[2];
      uVar7 = puVar16[3];
      uVar8 = *(undefined1 *)(puVar16 + 4);
      uVar15 = puVar16[5];
      func_0x000107c61434(uVar5);
      func_0x000107c61434(uVar6);
      func_0x000107c61434(uVar7);
      FUN_1010e798c(uVar15);
      uVar11 = uVar2;
      uVar12 = uVar5;
      func_0x000100029284();
      if ((uVar12 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100c0f2f0);
        (*pcVar9)();
      }
      uVar12 = uVar11 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar10 + uVar12 + 0x40) =
           *(ulong *)(puVar10 + uVar12 + 0x40) | 1L << (uVar11 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar10 + 0x30) + uVar11 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar5;
      puVar13 = (undefined8 *)(*(long *)(puVar10 + 0x38) + uVar11 * 0x30);
      *puVar13 = uVar3;
      puVar13[1] = uVar6;
      puVar13[2] = uVar4;
      puVar13[3] = uVar7;
      *(undefined1 *)(puVar13 + 4) = uVar8;
      puVar13[5] = uVar15;
      if (SCARRY8(*(long *)(puVar10 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100c0f2f4);
        (*pcVar9)();
      }
      puVar16 = puVar16 + 8;
      *(long *)(puVar10 + 0x10) = *(long *)(puVar10 + 0x10) + 1;
      puVar14 = puVar14 + -1;
    } while (puVar14 != (undefined *)0x0);
    func_0x000107c61574(puVar10);
  }
  return puVar10;
}



/* Entry: 100c0f2f4; end: 100c0f3f3;  */

undefined * FUN_100c0f2f4(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d5cec8,&UNK_10d9238b0);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100c0f3f0);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100c0f3f4);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 100c0f3f4; end: 100c0f41b;  */

void FUN_100c0f3f4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  param_1[3] = *unaff_x20;
  param_1[4] = &PTR_DAT_110428cf0;
  *param_1 = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 100c0f41c; end: 100c0f4af;  */

void FUN_100c0f41c(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 6) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 6) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Entry: 100c0f4b0; end: 100c0f59b; -[SCSendingLensRemoteAssetsUploadEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x000100c0f52c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0f53c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0f570: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c0f540) */
/* WARNING: Removing unreachable block (ram,0x000100c0f530) */
/* WARNING: Removing unreachable block (ram,0x000100c0f574) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c0f4b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c30b0;
  func_0x000107c610f4(PTR_PTR_1126c30b0);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + _DAT_112731f98;
    func_0x000107c61148(param_1);
  }
  func_0x000107c4fe34(param_1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126c3050;
  func_0x000107c61160(PTR_PTR_1126c3050);
  func_0x000107c49114(puVar1,param_2,param_1,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 100c0f59c; end: 100c0f637; -[SCSendingRemoteAssetsUploadManager initWithUploadManager:referenceConverter:] */

undefined8
FUN_100c0f59c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c470d0();
  func_0x000107c49118(param_1,param_2,param_3,param_4,puVar1);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
  return param_1;
}



/* Entry: 100c0f638; end: 100c0f703; -[SCSendingRemoteAssetsUploadManager initWithUploadManager:referenceConverter:performer:] */

undefined1 *
FUN_100c0f638(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_1126ec4c8;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c0f704; end: 100c0f7bb;  */

/* WARNING: Possible PIC construction at 0x000100c0f758: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c0f75c) */

void FUN_100c0f704(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c611ec(*(long *)(param_1 + 0x20) + 0x50);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c518f4(uVar2);
  func_0x000107c61180();
  func_0x000107c3c968(uVar1,param_2,uVar2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100c0f7bc; end: 100c0f9a7;  */

/* WARNING: Possible PIC construction at 0x000100c0f88c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0f8cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0f908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c0f970: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c0f90c) */
/* WARNING: Removing unreachable block (ram,0x000100c0f910) */
/* WARNING: Removing unreachable block (ram,0x000100c0f8d0) */
/* WARNING: Removing unreachable block (ram,0x000100c0f994) */
/* WARNING: Removing unreachable block (ram,0x000100c0f8dc) */
/* WARNING: Removing unreachable block (ram,0x000100c0f890) */
/* WARNING: Removing unreachable block (ram,0x000100c0f974) */
/* WARNING: Removing unreachable block (ram,0x000100c0f97c) */

void FUN_100c0f7bc(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5bd00(*(undefined8 *)(param_1 + 0x28));
  func_0x000107c49a90(*(undefined8 *)(param_1 + 0x28));
  func_0x000107c3fc50(uVar5);
  uVar3 = *(ulong *)(param_1 + 0x20);
  func_0x000107c61164(uVar3,PTR_s_cloudSync_didChangeEntrySyncStat_1125ad280);
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)(param_1 + 0x28);
    func_0x000107c5bd00();
    if (lVar4 == 4) {
      iVar2 = (int)*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xf8);
      func_0x000107c504bc();
      if (iVar2 != 0) {
        uVar1 = *(undefined8 *)(param_1 + 0x20);
        func_0x000107eedfd4(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0xf8));
        func_0x000107c61180();
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0xf8);
        func_0x000107eee018(uVar5);
        func_0x000107c61180();
        func_0x000107c3fc4c(uVar1);
        goto code_r0x000107c61170;
      }
    }
  }
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  func_0x000107c4cb88(uVar5);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c4a598();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 100c0f9a8; end: 100c0f9af; -[SCCloudSync status] */

undefined8 FUN_100c0f9a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



/* Entry: 100c0f9b0; end: 100c0f9c3; -[SCCloudSync isBackingUpNow] */

byte FUN_100c0f9b0(long param_1)

{
  return *(byte *)(param_1 + 0x120) & 1;
}



/* Entry: 100c0f9c4; end: 100c0fa2b;  */

void FUN_100c0f9c4(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = 0x112d393f0;
  func_0x00010002969c(0x112d393f0,&UNK_10d903bb0);
  lVar2 = 0;
  func_0x000107c606cc(0,uVar4,uVar1,PTR___ss5ErrorWS_11034ee10);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  (**(code **)(unaff_x20 + 0x18))
            (*(undefined8 *)(unaff_x20 + 0x20),
             unaff_x20 + (uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 100c0fa2c; end: 100c0fa3b; -[SCMergedGalleryDataSource cloudSync:didChangeStatus:isBackingUpNow:mayUpload:requiresUpgrade:] */

void FUN_100c0fa2c(void)

{
  return;
}



/* Entry: 100c0fa3c; end: 100c0fc87;  */

void FUN_100c0fa3c(long *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  ulong *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar11 = *param_1;
  lVar13 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if ((char)lVar13 == '\x01') {
      func_0x000107c61574(param_2);
    }
    else {
      puVar12 = (ulong *)(lVar11 + 0x38);
      uVar16 = -1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
      uVar15 = 0xffffffffffffffff;
      if (-uVar16 < 0x40) {
        uVar15 = ~(-1L << (-uVar16 & 0x3f));
      }
      uVar15 = uVar15 & *puVar12;
      func_0x000107c61434(lVar11);
      lVar13 = 0;
      lVar14 = lVar13;
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      while( true ) {
        while (uVar15 != 0) {
          uVar1 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
          uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
          uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
          uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
          uVar15 = uVar15 - 1 & uVar15;
          func_0x0001007bbd18(*(long *)(lVar11 + 0x30) +
                              LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 0x28 + lVar13 * 0xa00,
                              &uStack_a0);
          uStack_c8 = uStack_98;
          uStack_d0 = uStack_a0;
          uStack_b8 = uStack_88;
          uStack_c0 = uStack_90;
          uStack_b0 = uStack_80;
          uVar5 = 0x112e38b20;
          func_0x0001000285a8(0x112e38b20,&UNK_10da23630);
          plVar6 = &lStack_a8;
          func_0x000107c6147c(plVar6,&uStack_d0,PTR___ss11AnyHashableVN_11034e448,uVar5,6);
          lVar2 = lStack_a8;
          lVar14 = lVar13;
          if ((((ulong)plVar6 & 1) != 0) && (lStack_a8 != 0)) {
            puVar8 = puVar9;
            func_0x000107c61550();
            if (((int)puVar8 == 0) ||
               (((long)puVar9 < 0 || (puVar8 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)))) {
              if ((ulong)puVar9 >> 0x3e == 0) {
                puVar7 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
              }
              else {
                puVar7 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
                if ((undefined *)0x7fffffffffffffff < puVar9) {
                  puVar7 = puVar9;
                }
                func_0x000107c60480(puVar7);
              }
              puVar8 = (undefined *)0x0;
              func_0x00010095c84c(0,puVar7 + 1,1,puVar9);
            }
            uVar10 = (ulong)puVar8 & 0xffffffffffffff8;
            uVar1 = *(ulong *)(uVar10 + 0x10);
            puVar9 = puVar8;
            if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar1) {
              puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
              func_0x00010095c84c(puVar9,uVar1 + 1,1,puVar8);
              uVar10 = (ulong)puVar9 & 0xffffffffffffff8;
            }
            *(ulong *)(uVar10 + 0x10) = uVar1 + 1;
            *(long *)(uVar10 + uVar1 * 8 + 0x20) = lVar2;
          }
        }
        bVar4 = SCARRY8(lVar13,1);
        lVar13 = lVar13 + 1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100c0fc88);
          (*pcVar3)();
        }
        if ((long)(0x3f - uVar16 >> 6) <= lVar13) break;
        uVar15 = puVar12[lVar13];
      }
      func_0x000100ba5608(lVar11,puVar12,~uVar16,lVar14,0);
      FUN_100c1109c(puVar9);
      func_0x000107c61574(param_2);
      func_0x000107c6142c(puVar9);
    }
  }
  return;
}



/* Entry: 100c0fc88; end: 100c0fc97;  */

void FUN_100c0fc88(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c28a730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126de620,PTR_s_updateStrategyFromInternalNamesp_1126803f0,param_2);
  return;
}



/* Entry: 100c0fc98; end: 100c0fe2b; +[SCMixerUpdateStrategyMetadata updateStrategyFromInternalNamespaceData:] */

void FUN_100c0fc98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar1 = PTR_PTR_1126de620;
  func_0x000107c61174(param_3);
  func_0x000107c610f4();
  uVar2 = param_3;
  func_0x000107c518f4(param_3);
  func_0x000107c61180();
  uVar3 = param_3;
  func_0x000107c3d128(param_3);
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c40808();
  uVar5 = param_3;
  func_0x000107c5d094(param_3);
  func_0x000107c61180();
  uVar6 = param_3;
  func_0x000107c4aa88(param_3);
  func_0x000107c61180();
  uVar7 = param_3;
  func_0x000107c43184(param_3);
  func_0x000107c61180();
  uVar8 = param_3;
  func_0x000107c4cfcc(param_3);
  func_0x000107c61180();
  uVar9 = uVar8;
  func_0x000107c4062c();
  func_0x000107c61180();
  uVar10 = param_3;
  func_0x000107c4cfcc();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  uVar11 = uVar10;
  func_0x000107c4e304();
  func_0x000107c61180();
  func_0x000107c484ac(puVar1,param_2,uVar2,uVar4,uVar5,uVar6,uVar7,uVar9,uVar11);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100c0fe2c; end: 100c0fe33; -[SCMixerInternalNamespaceData scheduleNamespace] */

undefined8 FUN_100c0fe2c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c0fe34; end: 100c0fe3b; -[SCMixerInternalNamespaceData activeItems] */

undefined8 FUN_100c0fe34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100c0fe3c; end: 100c0fe43; -[SCMixerInternalNamespaceData ttl] */

undefined8 FUN_100c0fe3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100c0fe44; end: 100c0fe4b; -[SCMixerInternalNamespaceData lastUpdateDate] */

undefined8 FUN_100c0fe44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


