/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1010dcee0; end: 1010dcf47;  */

/* WARNING: Removing unreachable block (ram,0x0001010dcf28) */

void FUN_1010dcee0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5fae8();
    func_0x000107c61170(lVar1);
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Entry: 1010dcf48; end: 1010dcfbb;  */

void FUN_1010dcf48(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x28) = uVar1;
    *(undefined8 *)(param_2 + 0x30) = uVar2;
    func_0x000107c61434(uVar2);
    func_0x000107c61574(param_2);
    func_0x000107c6142c(uVar3);
  }
  return;
}



/* Entry: 1010dcfbc; end: 1010dd0b3;  */

void FUN_1010dcfbc(ulong param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lStack_48;
  
  lVar3 = *(long *)(unaff_x20 + 0x30);
  if ((lVar3 != 0) &&
     (((uVar1 = *(ulong *)(unaff_x20 + 0x28), uVar1 == param_1 && lVar3 == param_2 ||
       (func_0x000107c605b8(uVar1,lVar3,param_1,param_2,0), (uVar1 & 1) != 0)) &&
      (lVar3 = *(long *)(unaff_x20 + 0x18), lVar3 != 0)))) {
    func_0x000104501ac4(0);
    lVar2 = lVar3;
    func_0x000107c615f0(lVar3);
    func_0x000104500f4c();
    func_0x000107c3e02c(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(lVar2);
  }
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c4ff5c(lStack_48);
    func_0x000107c615e8(lStack_48);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1010dd0b4; end: 1010dd10f;  */

void FUN_1010dd0b4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010dd110; end: 1010dd11b;  */

void FUN_1010dd110(ulong param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lStack_48;
  
  lVar3 = *(long *)(unaff_x20 + 0x30);
  if ((lVar3 != 0) &&
     (((uVar1 = *(ulong *)(unaff_x20 + 0x28), uVar1 == param_1 && lVar3 == param_2 ||
       (func_0x000107c605b8(uVar1,lVar3,param_1,param_2,0), (uVar1 & 1) != 0)) &&
      (lVar3 = *(long *)(unaff_x20 + 0x18), lVar3 != 0)))) {
    func_0x000104501ac4(0);
    lVar2 = lVar3;
    func_0x000107c615f0(lVar3);
    func_0x000104500f4c();
    func_0x000107c3e02c(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(lVar2);
  }
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c4ff5c(lStack_48);
    func_0x000107c615e8(lStack_48);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1010dd11c; end: 1010dd2b3;  */

undefined1  [16] FUN_1010dd11c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffd4;
  func_0x000107c5fadc(0xd00000000000002c,0x800000010ef25b40);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef25b70);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010dd1e8);
  (*pcVar1)();
}



/* Entry: 1010dd2b4; end: 1010dd2bf; -[SCLensErrorNotificationEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010dd2b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5c8a0;
  func_0x000107c61428(param_1 + _DAT_112d5c8a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010dd2c0; end: 1010dd2cb; -[SCLensErrorNotificationEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010dd2c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5c8a0;
  func_0x000107c61428(param_1 + _DAT_112d5c8a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010dd2cc; end: 1010dd2d7; -[SCLensErrorNotificationEntryPoint cameraFeatureScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010dd2cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5c8a8;
  func_0x000107c61428(param_1 + _DAT_112d5c8a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010dd2d8; end: 1010dd2e3; -[SCLensErrorNotificationEntryPoint setCameraFeatureScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010dd2d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5c8a8;
  func_0x000107c61428(param_1 + _DAT_112d5c8a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010dd2e4; end: 1010dd2ef; -[SCLensErrorNotificationEntryPoint notificationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010dd2e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5c8b0;
  func_0x000107c61428(param_1 + _DAT_112d5c8b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010dd2f0; end: 1010dd2fb; -[SCLensErrorNotificationEntryPoint setNotificationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010dd2f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5c8b0;
  func_0x000107c61428(param_1 + _DAT_112d5c8b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010dd2fc; end: 1010dd307; -[SCLensErrorNotificationEntryPoint lensErrorHandlingService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010dd2fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5c8b8;
  func_0x000107c61428(param_1 + _DAT_112d5c8b8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010dd308; end: 1010dd313; -[SCLensErrorNotificationEntryPoint setLensErrorHandlingService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010dd308(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5c8b8;
  func_0x000107c61428(param_1 + _DAT_112d5c8b8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010dd314; end: 1010dd31f; -[SCLensErrorNotificationEntryPoint lensConfigurationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010dd314(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5c8c0;
  func_0x000107c61428(param_1 + _DAT_112d5c8c0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010dd320; end: 1010dd32b; -[SCLensErrorNotificationEntryPoint setLensConfigurationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010dd320(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5c8c0;
  func_0x000107c61428(param_1 + _DAT_112d5c8c0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010dd32c; end: 1010dd337; -[SCLensErrorNotificationEntryPoint lensCarouselScopedLensCarouselManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010dd32c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5c8c8;
  func_0x000107c61428(param_1 + _DAT_112d5c8c8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010dd338; end: 1010dd343; -[SCLensErrorNotificationEntryPoint setLensCarouselScopedLensCarouselManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010dd338(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5c8c8;
  func_0x000107c61428(param_1 + _DAT_112d5c8c8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010dd344; end: 1010dd34f; -[SCLensErrorNotificationEntryPoint lensContentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010dd344(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5c8d0;
  func_0x000107c61428(param_1 + _DAT_112d5c8d0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010dd350; end: 1010dd35b; -[SCLensErrorNotificationEntryPoint setLensContentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010dd350(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5c8d0;
  func_0x000107c61428(param_1 + _DAT_112d5c8d0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010dd35c; end: 1010dd367; -[SCLensErrorNotificationEntryPoint lensRemovalServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010dd35c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5c8d8;
  func_0x000107c61428(param_1 + _DAT_112d5c8d8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010dd368; end: 1010dd3ab;  */

void FUN_1010dd368(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1010dd3ac; end: 1010dd3b7; -[SCLensErrorNotificationEntryPoint setLensRemovalServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010dd3ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5c8d8;
  func_0x000107c61428(param_1 + _DAT_112d5c8d8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010dd3b8; end: 1010dd40b;  */

void FUN_1010dd3b8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010dd40c; end: 1010ddb1b;  */

/* WARNING: Possible PIC construction at 0x0001010dd544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010dd560: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010dd790: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010dd918: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010dd928: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010dd968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010dd978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010dd988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010ddaac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010ddabc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010ddacc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010ddadc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010dda58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010dda68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010dda78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010dda28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010dda38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010dda48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010dda08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010dda18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010dd9e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010dd9c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010dd9b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010dd9cc) */
/* WARNING: Removing unreachable block (ram,0x0001010dd9ec) */
/* WARNING: Removing unreachable block (ram,0x0001010dda1c) */
/* WARNING: Removing unreachable block (ram,0x0001010dda0c) */
/* WARNING: Removing unreachable block (ram,0x0001010dda4c) */
/* WARNING: Removing unreachable block (ram,0x0001010dda3c) */
/* WARNING: Removing unreachable block (ram,0x0001010dda2c) */
/* WARNING: Removing unreachable block (ram,0x0001010dda7c) */
/* WARNING: Removing unreachable block (ram,0x0001010dda6c) */
/* WARNING: Removing unreachable block (ram,0x0001010dda5c) */
/* WARNING: Removing unreachable block (ram,0x0001010ddae0) */
/* WARNING: Removing unreachable block (ram,0x0001010ddad0) */
/* WARNING: Removing unreachable block (ram,0x0001010ddac0) */
/* WARNING: Removing unreachable block (ram,0x0001010ddab0) */
/* WARNING: Removing unreachable block (ram,0x0001010dd98c) */
/* WARNING: Removing unreachable block (ram,0x0001010ddae8) */
/* WARNING: Removing unreachable block (ram,0x0001010dd97c) */
/* WARNING: Removing unreachable block (ram,0x0001010dd96c) */
/* WARNING: Removing unreachable block (ram,0x0001010dd92c) */
/* WARNING: Removing unreachable block (ram,0x0001010dd91c) */
/* WARNING: Removing unreachable block (ram,0x0001010dd794) */
/* WARNING: Removing unreachable block (ram,0x0001010dd8bc) */
/* WARNING: Removing unreachable block (ram,0x0001010dd8d0) */
/* WARNING: Removing unreachable block (ram,0x0001010dd564) */
/* WARNING: Removing unreachable block (ram,0x0001010ddaa8) */
/* WARNING: Removing unreachable block (ram,0x0001010dd568) */
/* WARNING: Removing unreachable block (ram,0x0001010dd548) */
/* WARNING: Removing unreachable block (ram,0x0001010dd9bc) */

void FUN_1010dd40c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar1 = unaff_x20;
  func_0x000107c3f0d0();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4d840();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar2 = unaff_x20;
      func_0x000107c4b090();
      func_0x000107c61180();
      if (lVar2 != 0) {
        lVar2 = unaff_x20;
        func_0x000107c4afbc();
        func_0x000107c61180();
        if (lVar2 == 0) {
          func_0x000107c61170(lVar3);
          lVar3 = lVar1;
        }
        else {
          lVar2 = unaff_x20;
          func_0x000107c4af24();
          func_0x000107c61180();
          if (lVar2 == 0) {
            func_0x000107c61170(lVar3);
            lVar3 = lVar1;
          }
          else {
            lVar1 = unaff_x20;
            func_0x000107c4afe4();
            func_0x000107c61180();
            if (lVar1 != 0) {
              func_0x000107c4b3bc();
              func_0x000107c61180();
              if (unaff_x20 != 0) {
                lVar3 = 0;
                func_0x0001010dc3a0();
                func_0x000107c613fc();
                *(undefined8 *)(lVar3 + 0x10) = 0;
                *(undefined8 *)(lVar3 + 0x18) = 0;
                func_0x000107c4aeb0(lVar2);
                func_0x000107c61180();
                func_0x000107c4aeb4();
                func_0x000107c61180();
                lVar3 = lVar2;
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1010ddb1c; end: 1010ddb3f;  */

void FUN_1010ddb1c(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c4b1cc();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 1010ddb40; end: 1010ddb67; -[SCLensErrorNotificationEntryPoint begin] */

void FUN_1010ddb40(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1010dd40c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1010ddb68; end: 1010de02b; -[SCLensErrorNotificationEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010ddb68(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar1 = param_1;
  func_0x000107c614f0();
  puVar5 = *(undefined1 **)(param_1 + _DAT_112d5c8e0);
  if (puVar5 == (undefined1 *)0x0) {
    func_0x000107c61174(param_1);
  }
  else {
    lVar2 = param_1;
    func_0x000107c61174(param_1);
    puVar3 = puVar5;
    func_0x000107c6157c();
    FUN_1010dc28c();
    func_0x000107c61574(puVar5);
    if (puVar3 != (undefined1 *)0x0) goto LAB_1010ddbfc;
  }
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_end_1125c29d0);
  func_0x000107c61180();
  lVar2 = param_1;
  puVar3 = (undefined1 *)plVar4;
LAB_1010ddbfc:
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1010de02c; end: 1010de0d7; -[SCLensErrorNotificationEntryPoint setValue:forIvarName:] */

void FUN_1010de02c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  func_0x0001010ddc1c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_1010de304(auStack_50);
  return;
}



/* Entry: 1010de0d8; end: 1010de1c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010de0d8(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d5c8a0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5c8a8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5c8b0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5c8b8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5c8c0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5c8c8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5c8d0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d5c8d8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d5c8e0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1010de1c4; end: 1010de1e3; -[SCLensErrorNotificationEntryPoint init] */

void FUN_1010de1c4(void)

{
  FUN_1010de0d8();
  return;
}



/* Entry: 1010de1e4; end: 1010de217;  */

void FUN_1010de1e4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1010de218; end: 1010de2bf; -[SCLensErrorNotificationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010de218(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d5c8a0);
  func_0x000107c61610(param_1 + _DAT_112d5c8a8);
  func_0x000107c61610(param_1 + _DAT_112d5c8b0);
  func_0x000107c61610(param_1 + _DAT_112d5c8b8);
  func_0x000107c61610(param_1 + _DAT_112d5c8c0);
  func_0x000107c61610(param_1 + _DAT_112d5c8c8);
  func_0x000107c61610(param_1 + _DAT_112d5c8d0);
  func_0x000107c61610(param_1 + _DAT_112d5c8d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d5c8e0));
  return;
}



/* Entry: 1010de2c0; end: 1010de2e3;  */

long * FUN_1010de2c0(long *param_1,long param_2)

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



/* Entry: 1010de2e4; end: 1010de303;  */

void FUN_1010de2e4(void)

{
  func_0x000107c61168(&PTR_PTR_1127af040);
  return;
}



/* Entry: 1010de304; end: 1010de363;  */

void FUN_1010de304(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001010de318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1010de364; end: 1010de3a3;  */

void FUN_1010de364(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x0001044e4d64(0);
  func_0x000107c610f8();
  func_0x0001044e4b78(param_2,uVar1);
  *param_3 = param_2;
  return;
}



/* Entry: 1010de3a4; end: 1010de657;  */

void FUN_1010de3a4(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  
  FUN_100f0c488();
  func_0x000107c61534();
  *(undefined8 *)(param_1 + 0x18) = 9;
  *(undefined8 *)(param_1 + 0x10) = 4;
  if (lRam0000000112d5c9c8 != -1) {
    func_0x000107c61568(0x112d5c9c8,0x1010de324);
  }
  *(undefined8 *)(param_1 + 0x20) = uRam00000001137ff1f0;
  lVar1 = lRam0000000112d5c9d0;
  func_0x000107c61174();
  if (lVar1 != -1) {
    func_0x000107c61568(0x112d5c9d0,0x1010de334);
  }
  *(undefined8 *)(param_1 + 0x28) = uRam00000001137ff1e8;
  lVar1 = lRam0000000112d5c9d8;
  func_0x000107c61174();
  if (lVar1 != -1) {
    func_0x000107c61568(0x112d5c9d8,0x1010de344);
  }
  *(undefined8 *)(param_1 + 0x30) = uRam00000001137ff1e0;
  lVar1 = lRam0000000112d5c9e0;
  func_0x000107c61174();
  if (lVar1 != -1) {
    func_0x000107c61568(0x112d5c9e0,0x1010de354);
  }
  uVar6 = uRam00000001137ff1d8;
  *(undefined8 *)(param_1 + 0x38) = uRam00000001137ff1d8;
  func_0x0001000285a8(0x112d4ad10,&UNK_10d937bb0);
  lVar3 = 4;
  func_0x000107c602e8();
  lVar1 = lVar3 + 0x38;
  func_0x000107c61174(uVar6);
  uVar12 = 0;
  do {
    if ((param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(param_1 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1010de5f8);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)(param_1 + 0x20 + uVar12 * 8);
      func_0x000107c61174();
    }
    else {
      uVar4 = uVar12;
      FUN_100f060ac(uVar12,param_1);
    }
    uVar5 = *(ulong *)(lVar3 + 0x28);
    func_0x000107c60114();
    uVar10 = -1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar7 = uVar5 >> 6;
    uVar8 = *(ulong *)(lVar1 + uVar7 * 8);
    uVar9 = 1L << (uVar5 & 0x3f);
    if ((uVar9 & uVar8) != 0) {
      func_0x0001044e4d64(0);
      do {
        uVar8 = *(ulong *)(*(long *)(lVar3 + 0x30) + uVar5 * 8);
        func_0x000107c61174();
        uVar7 = uVar8;
        func_0x000107c60118();
        func_0x000107c61170(uVar8);
        if ((uVar7 & 1) != 0) {
          func_0x000107c61170(uVar4);
          goto LAB_1010de4b8;
        }
        uVar5 = uVar5 + 1 & ~uVar10;
        uVar7 = uVar5 >> 6;
        uVar8 = *(ulong *)(lVar1 + uVar7 * 8);
        uVar9 = 1L << (uVar5 & 0x3f);
      } while ((uVar9 & uVar8) != 0);
    }
    *(ulong *)(lVar1 + uVar7 * 8) = uVar9 | uVar8;
    *(ulong *)(*(long *)(lVar3 + 0x30) + uVar5 * 8) = uVar4;
    if (SCARRY8(*(long *)(lVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1010de5f4);
      (*pcVar2)();
    }
    *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
LAB_1010de4b8:
    uVar12 = uVar12 + 1;
    if (uVar12 == 4) {
      func_0x000107c61588(param_1);
      uVar11 = *(undefined8 *)(param_1 + 0x10);
      uVar6 = 0;
      func_0x0001044e4d64(0);
      func_0x000107c61408(param_1 + 0x20,uVar11,uVar6);
      lRam00000001137ff1f8 = lVar3;
      return;
    }
  } while( true );
}



/* Entry: 1010de658; end: 1010de6bb;  */

ulong FUN_1010de658(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (5 < uVar1) {
    uVar1 = 6;
  }
  return uVar1;
}



/* Entry: 1010de6bc; end: 1010df517;  */

undefined * FUN_1010de6bc(ulong param_1,undefined **param_2)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  double *pdVar10;
  double dVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  char *pcVar19;
  undefined **ppuVar20;
  uint uVar21;
  ulong uVar22;
  long lVar23;
  undefined *puVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined *puStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  double dStack_b8;
  undefined8 uStack_b0;
  
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1010df518);
    (*pcVar1)();
  }
  uVar3 = param_1;
  FUN_1010dffec();
  uVar21 = (uint)uVar3 & 0xff;
  if (uVar21 == 1) {
    func_0x0001000d224c(&puStack_e8);
    func_0x0001000a8868(&puStack_e8,puStack_d0);
    (**(code **)((long)pcStack_c8 + 0x10))(puStack_d0,pcStack_c8);
    func_0x0001000834e4(&puStack_e8);
    uVar16 = 1;
    uVar17 = 0;
    uVar18 = 0;
    goto LAB_1010de950;
  }
  uVar4 = param_1;
  if (uVar21 == 6) {
    puStack_e8 = (undefined *)0x0;
    uStack_e0 = 0xe000000000000000;
    func_0x000107c602fc(0x13);
    func_0x000107c6142c(uStack_e0);
    puStack_e8 = (undefined *)0xd000000000000011;
    uStack_e0 = 0x800000010ef25cd0;
    func_0x000107c428b4(param_1);
LAB_1010de79c:
    func_0x000107c61180();
    uVar3 = uVar4;
    func_0x000107c5faec();
    func_0x000107c61170(uVar4);
    func_0x000107c5fb78(uVar3,param_2);
    func_0x000107c6142c(param_2);
    uVar8 = uStack_e0;
    func_0x000103dac9b4(param_1,5,puVar2,puStack_e8,uStack_e0);
    goto LAB_1010de7ec;
  }
  if (uVar21 == 4) {
    func_0x0001000d224c(&puStack_e8);
    FUN_1010e04c0(param_1,puVar2);
    func_0x000107c61574(puStack_e8);
    return puVar2;
  }
  func_0x0001000d224c(&puStack_e8);
  puVar7 = puStack_e8;
  if (puStack_e8 != (undefined *)0x0) {
    puVar5 = puStack_e8;
    func_0x000107c4b3f8();
    func_0x000107c61180();
    func_0x000107c615e8(puVar7);
    if (puVar5 != (undefined *)0x0) {
      puVar6 = puVar5;
      func_0x000107c5faec();
      ppuVar14 = param_2;
      func_0x000107c61170(puVar5);
      func_0x0001000d224c(&puStack_e8);
      puVar7 = puStack_e8;
      if (puStack_e8 != (undefined *)0x0) {
        puVar5 = puStack_e8;
        func_0x000107c4b474();
        func_0x000107c61180();
        func_0x000107c615e8(puVar7);
        if (puVar5 != (undefined *)0x0) {
          puVar7 = puVar5;
          func_0x000107c5faec();
          ppuVar15 = ppuVar14;
          func_0x000107c61170(puVar5);
          uVar8 = param_1;
          func_0x000107c3eb80();
          func_0x000107c61180();
          if (uVar8 == 0) {
            uVar22 = 0;
            ppuVar15 = (undefined **)0xf000000000000000;
          }
          else {
            uVar22 = uVar8;
            func_0x000107c5ee30();
            func_0x000107c61170(uVar8);
          }
          uVar8 = uVar22;
          func_0x000103dacd78(uVar22,ppuVar15);
          func_0x0001000b44c0(uVar22,ppuVar15);
          if (uVar8 == 0) {
            func_0x000107c6142c(param_2);
            func_0x000107c6142c(ppuVar14);
            uVar18 = 0x800000010ef25d20;
            uVar16 = 3;
            uVar17 = 0xd000000000000014;
            goto LAB_1010de950;
          }
          ppuVar20 = (undefined **)0xeb00000000586465;
          lVar23 = 0x7a696c616d726f6e;
          dVar25 = 0.5;
          if (*(long *)(uVar8 + 0x10) != 0) {
            func_0x000107c61434(uVar8);
            lVar9 = lVar23;
            func_0x000100029284(0x7a696c616d726f6e);
            if (((ulong)ppuVar20 & 1) == 0) {
              func_0x000107c6142c(uVar8);
              ppuVar15 = ppuVar20;
            }
            else {
              func_0x0001000bb420(*(long *)(uVar8 + 0x38) + lVar9 * 0x20,&puStack_e8);
              func_0x000107c6142c(uVar8);
              pdVar10 = &dStack_b8;
              ppuVar15 = &puStack_e8;
              func_0x000107c6147c(pdVar10,ppuVar15,PTR___sypN_11034f1a8 + 8,
                                  PTR___s12CoreGraphics7CGFloatVN_1103513a8,6);
              dVar25 = dStack_b8;
              if ((int)pdVar10 == 0) {
                dVar25 = 0.5;
              }
            }
          }
          dVar26 = 0.8;
          if (*(long *)(uVar8 + 0x10) != 0) {
            func_0x000107c61434(uVar8);
            ppuVar15 = (undefined **)0xeb00000000596465;
            lVar9 = lVar23;
            func_0x000100029284(0x7a696c616d726f6e);
            if (((ulong)ppuVar15 & 1) == 0) {
              func_0x000107c6142c(uVar8);
            }
            else {
              func_0x0001000bb420(*(long *)(uVar8 + 0x38) + lVar9 * 0x20,&puStack_e8);
              func_0x000107c6142c(uVar8);
              pdVar10 = &dStack_b8;
              ppuVar15 = &puStack_e8;
              func_0x000107c6147c(pdVar10,ppuVar15,PTR___sypN_11034f1a8 + 8,
                                  PTR___s12CoreGraphics7CGFloatVN_1103513a8,6);
              dVar26 = dStack_b8;
              if ((int)pdVar10 == 0) {
                dVar26 = 0.8;
              }
            }
          }
          if (*(long *)(uVar8 + 0x10) == 0) {
            dVar28 = 0.3;
          }
          else {
            func_0x000107c61434(uVar8);
            ppuVar15 = (undefined **)0xef68746469576465;
            func_0x000100029284(0x7a696c616d726f6e);
            if (((ulong)ppuVar15 & 1) == 0) {
              func_0x000107c6142c(uVar8);
              dVar28 = 0.3;
            }
            else {
              func_0x0001000bb420(*(long *)(uVar8 + 0x38) + lVar23 * 0x20,&puStack_e8);
              func_0x000107c6142c(uVar8);
              pdVar10 = &dStack_b8;
              ppuVar15 = &puStack_e8;
              func_0x000107c6147c(pdVar10,ppuVar15,PTR___sypN_11034f1a8 + 8,
                                  PTR___s12CoreGraphics7CGFloatVN_1103513a8,6);
              dVar28 = dStack_b8;
              if ((int)pdVar10 == 0) {
                dVar28 = 0.3;
              }
            }
          }
          if (*(long *)(uVar8 + 0x10) == 0) {
            dVar11 = 0.3;
          }
          else {
            func_0x000107c61434(uVar8);
            lVar23 = -0x2ffffffffffffff0;
            ppuVar15 = (undefined **)0x800000010ef25530;
            func_0x000100029284(0xd000000000000010);
            if (((ulong)ppuVar15 & 1) == 0) {
              func_0x000107c6142c(uVar8);
              dVar11 = 0.3;
            }
            else {
              func_0x0001000bb420(*(long *)(uVar8 + 0x38) + lVar23 * 0x20,&puStack_e8);
              func_0x000107c6142c(uVar8);
              pdVar10 = &dStack_b8;
              ppuVar15 = &puStack_e8;
              func_0x000107c6147c(pdVar10,ppuVar15,PTR___sypN_11034f1a8 + 8,
                                  PTR___s12CoreGraphics7CGFloatVN_1103513a8,6);
              dVar11 = dStack_b8;
              if ((int)pdVar10 == 0) {
                dVar11 = 0.3;
              }
            }
          }
          dVar30 = 0.0;
          if (*(long *)(uVar8 + 0x10) == 0) {
            uVar21 = 1;
          }
          else {
            func_0x000107c61434(uVar8);
            lVar23 = 0x6e6f697461746f72;
            ppuVar15 = (undefined **)0xef73656572676544;
            func_0x000100029284(0x6e6f697461746f72);
            if (((ulong)ppuVar15 & 1) == 0) {
              func_0x000107c6142c(uVar8);
              uVar21 = 1;
            }
            else {
              func_0x0001000bb420(*(long *)(uVar8 + 0x38) + lVar23 * 0x20,&puStack_e8);
              func_0x000107c6142c(uVar8);
              pdVar10 = &dStack_b8;
              ppuVar15 = &puStack_e8;
              func_0x000107c6147c(pdVar10,ppuVar15,PTR___sypN_11034f1a8 + 8,
                                  PTR___s12CoreGraphics7CGFloatVN_1103513a8,6);
              dVar30 = dStack_b8;
              if ((uint)pdVar10 == 0) {
                dVar30 = 0.0;
              }
              uVar21 = (uint)pdVar10 ^ 1;
            }
          }
          dVar29 = 1.0;
          if (*(long *)(uVar8 + 0x10) != 0) {
            func_0x000107c61434(uVar8);
            lVar23 = 0x656c616373;
            ppuVar15 = (undefined **)0xe500000000000000;
            func_0x000100029284(0x656c616373);
            if (((ulong)ppuVar15 & 1) == 0) {
              func_0x000107c6142c(uVar8);
            }
            else {
              func_0x0001000bb420(*(long *)(uVar8 + 0x38) + lVar23 * 0x20,&puStack_e8);
              func_0x000107c6142c(uVar8);
              pdVar10 = &dStack_b8;
              ppuVar15 = &puStack_e8;
              func_0x000107c6147c(pdVar10,ppuVar15,PTR___sypN_11034f1a8 + 8,
                                  PTR___s12CoreGraphics7CGFloatVN_1103513a8,6);
              if (((ulong)pdVar10 & 1) != 0) {
                dVar29 = dStack_b8;
              }
            }
          }
          if (dVar30 == 0.0) {
            uVar21 = 1;
          }
          dVar27 = 0.0;
          if ((uVar21 & 1) == 0) {
            dVar27 = (dVar30 * 3.141592653589793) / 180.0;
          }
          uVar21 = (uint)uVar3 & 0xff;
          if (uVar21 < 3) {
            if ((uVar3 & 0xff) == 0) {
              func_0x0001000d224c(&puStack_e8);
              puVar5 = puStack_e8;
              if (puStack_e8 == (undefined *)0x0) {
                puVar24 = (undefined *)0x0;
LAB_1010df100:
                func_0x0001000d224c(&puStack_e8);
                puVar5 = puStack_e8;
                if (puStack_e8 != (undefined *)0x0) {
                  if (*(long *)(uVar8 + 0x10) != 0) {
                    func_0x000107c61434(uVar8);
                    lVar23 = 0x644972657375;
                    uVar3 = 0;
                    func_0x000100029284(0x644972657375);
                    if ((uVar3 & 1) == 0) {
                      func_0x000107c6142c(uVar8);
                    }
                    else {
                      func_0x0001000bb420(*(long *)(uVar8 + 0x38) + lVar23 * 0x20,&puStack_e8);
                      func_0x000107c6142c(uVar8);
                      puVar12 = PTR___sypN_11034f1a8;
                      pdVar10 = &dStack_b8;
                      func_0x000107c6147c(pdVar10,&puStack_e8,PTR___sypN_11034f1a8 + 8,
                                          PTR___sSSN_11034da80,6);
                      dVar28 = dStack_b8;
                      if (((ulong)pdVar10 & 1) != 0) {
                        if (*(long *)(uVar8 + 0x10) != 0) {
                          func_0x000107c61434(uVar8);
                          lVar23 = 0x656c797473;
                          uVar3 = 0;
                          func_0x000100029284(0x656c797473);
                          if ((uVar3 & 1) == 0) {
                            func_0x000107c6142c(uVar8);
                          }
                          else {
                            func_0x0001000bb420(*(long *)(uVar8 + 0x38) + lVar23 * 0x20,&puStack_e8)
                            ;
                            func_0x000107c6142c(uVar8);
                            pdVar10 = &dStack_b8;
                            func_0x000107c6147c(pdVar10,&puStack_e8,puVar12 + 8,PTR___sSuN_11034e220
                                                ,6);
                            if (((ulong)pdVar10 & 1) != 0) goto LAB_1010df3b0;
                          }
                        }
                        dStack_b8 = 4.94065645841247e-324;
LAB_1010df3b0:
                        dVar11 = dVar28;
                        func_0x000107c5fadc(dVar28,uStack_b0);
                        uVar17 = 0;
                        func_0x0001000295c4(0);
                        func_0x000107c5ffdc();
                        puVar12 = &UNK_110382fa0;
                        func_0x000107c613fc(&UNK_110382fa0,0x18,7);
                        func_0x000107c61644(puVar12 + 0x10);
                        puVar13 = &UNK_110382fc8;
                        func_0x000107c613fc(&UNK_110382fc8,0x80,7);
                        *(undefined **)(puVar13 + 0x10) = puVar12;
                        *(ulong *)(puVar13 + 0x18) = param_1;
                        *(undefined **)(puVar13 + 0x20) = puVar2;
                        *(double *)(puVar13 + 0x28) = dVar28;
                        *(undefined8 *)(puVar13 + 0x30) = uStack_b0;
                        *(double *)(puVar13 + 0x38) = dVar25;
                        *(double *)(puVar13 + 0x40) = dVar26;
                        *(double *)(puVar13 + 0x48) = dVar29;
                        *(undefined **)(puVar13 + 0x50) = puVar6;
                        *(undefined ***)(puVar13 + 0x58) = param_2;
                        *(undefined **)(puVar13 + 0x60) = puVar7;
                        *(undefined ***)(puVar13 + 0x68) = ppuVar14;
                        *(double *)(puVar13 + 0x70) = dStack_b8;
                        *(double *)(puVar13 + 0x78) = dVar27;
                        pcStack_c8 = FUN_1010e0394;
                        puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
                        uStack_e0 = 0x42000000;
                        uStack_d8 = 0x101043a98;
                        puStack_d0 = &UNK_110382fe0;
                        ppuVar15 = &puStack_e8;
                        puStack_c0 = puVar13;
                        func_0x000107c60bc4(ppuVar15);
                        puVar7 = puStack_c0;
                        func_0x000107c61174(puVar2);
                        func_0x000107c61434(param_2);
                        func_0x000107c61434(ppuVar14);
                        func_0x000107c61174(param_1);
                        func_0x000107c61574(puVar7);
                        func_0x000107c5b49c(puVar5);
                        func_0x000107c6142c(param_2);
                        func_0x000107c6142c(ppuVar14);
                        func_0x000107c6142c(uVar8);
                        func_0x000107c60bd0(ppuVar15);
                        func_0x000107c61170(puVar24);
                        func_0x000107c615e8(puVar5);
                        func_0x000107c61170(dVar11);
                        func_0x000107c61170(uVar17);
                        return puVar2;
                      }
                    }
                  }
                  func_0x000103dac9b4(param_1,3,puVar2,0xd000000000000014,0x800000010ef25d20);
                  func_0x000107c61170(puVar24);
                  func_0x000107c615e8(puVar5);
                  goto LAB_1010df270;
                }
                pcVar19 = "Error on client. Please report issue";
                uVar17 = 0xd000000000000024;
                uVar16 = 10;
              }
              else {
                puVar24 = puStack_e8;
                func_0x000107c40f64();
                func_0x000107c61180();
                func_0x000107c615e8(puVar5);
                if ((puVar24 == (undefined *)0x0) ||
                   (puVar5 = puVar24, func_0x000107c4a63c(), ((ulong)puVar5 & 1) == 0))
                goto LAB_1010df100;
                pcVar19 = "Automention is not supported for this lens";
                uVar17 = 0xd00000000000002a;
                uVar16 = 4;
              }
              func_0x000103dac9b4(param_1,uVar16,puVar2,uVar17,
                                  (ulong)(pcVar19 + -0x20) | 0x8000000000000000);
              func_0x000107c61170(puVar24);
              goto LAB_1010df270;
            }
            if (uVar21 != 2) {
LAB_1010defc8:
              func_0x000107c6142c(param_2);
              func_0x000107c6142c(ppuVar14);
              func_0x000107c6142c(uVar8);
              puStack_e8 = (undefined *)0x0;
              uStack_e0 = 0xe000000000000000;
              func_0x000107c602fc(0x13);
              func_0x000107c6142c(uStack_e0);
              puStack_e8 = (undefined *)0xd000000000000011;
              uStack_e0 = 0x800000010ef25cd0;
              func_0x000107c428b4(param_1);
              param_2 = ppuVar15;
              goto LAB_1010de79c;
            }
            if (*(long *)(uVar8 + 0x10) == 0) {
LAB_1010df0cc:
              pcVar19 = " Please report issue";
              uVar17 = 0xd000000000000014;
              goto LAB_1010df0f0;
            }
            func_0x000107c61434(uVar8);
            lVar23 = 0x6e6f697473657571;
            uVar3 = 0;
            func_0x000100029284(0x6e6f697473657571);
            if ((uVar3 & 1) == 0) {
LAB_1010df0c4:
              func_0x000107c6142c(uVar8);
              goto LAB_1010df0cc;
            }
            func_0x0001000bb420(*(long *)(uVar8 + 0x38) + lVar23 * 0x20,&puStack_e8);
            func_0x000107c6142c(uVar8);
            pdVar10 = &dStack_b8;
            func_0x000107c6147c(pdVar10,&puStack_e8,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6)
            ;
            if (((ulong)pdVar10 & 1) == 0) goto LAB_1010df0cc;
            func_0x0001000d224c(&puStack_e8);
            ppuVar15 = &puStack_e8;
            func_0x0001000a8868(ppuVar15,puStack_d0);
            (**(code **)((long)pcStack_c8 + 0x18))
                      (ppuVar15,dVar25,dVar26,dVar28,dVar11,dVar27,dStack_b8,uStack_b0,0,0,puVar6,
                       param_2,puVar7,ppuVar14,puStack_d0,pcStack_c8);
            func_0x000107c6142c(uStack_b0);
            func_0x0001000834e4(&puStack_e8);
            func_0x000103dac9b4(param_1,1,puVar2,0,0);
            func_0x000107c6142c(param_2);
          }
          else {
            if (uVar21 == 3) {
              FUN_1010df518(dVar26,param_1,puVar2,puVar6,param_2,puVar7,ppuVar14,uVar8);
            }
            else {
              if (uVar21 != 5) goto LAB_1010defc8;
              if (*(long *)(uVar8 + 0x10) == 0) goto LAB_1010df0cc;
              func_0x000107c61434(uVar8);
              lVar23 = 0x6e6f697473657571;
              uVar3 = 0;
              func_0x000100029284(0x6e6f697473657571);
              if ((uVar3 & 1) == 0) goto LAB_1010df0c4;
              func_0x0001000bb420(*(long *)(uVar8 + 0x38) + lVar23 * 0x20,&puStack_e8);
              func_0x000107c6142c(uVar8);
              pdVar10 = &dStack_b8;
              func_0x000107c6147c(pdVar10,&puStack_e8,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,
                                  6);
              if (((ulong)pdVar10 & 1) == 0) goto LAB_1010df0cc;
              if (dVar11 <= dVar28) {
                dVar30 = dVar11 / dVar28;
              }
              else {
                dVar30 = dVar28 / dVar11;
              }
              if (((((0.05 <= dVar25) && (0.05 <= dVar26)) && (dVar25 <= 0.95)) &&
                  ((dVar26 <= 0.95 && (dVar28 * dVar11 <= 0.4)))) && (0.125 <= dVar30)) {
                func_0x0001000d224c(&puStack_e8);
                func_0x0001000a8868(&puStack_e8,puStack_d0);
                (**(code **)((long)pcStack_c8 + 0x20))
                          (dVar25,dVar26,dVar28,dVar11,dVar27,dStack_b8,uStack_b0,puVar6,param_2,
                           puVar7,ppuVar14,puStack_d0,pcStack_c8);
                func_0x000107c6142c(uStack_b0);
                func_0x0001000834e4(&puStack_e8);
                func_0x000103dac9b4(param_1,1,puVar2,0,0);
                goto LAB_1010df270;
              }
              func_0x000107c6142c(uStack_b0);
              pcVar19 = "Body is invalid json";
              uVar17 = 0xd00000000000006b;
LAB_1010df0f0:
              func_0x000103dac9b4(param_1,3,puVar2,uVar17,(ulong)pcVar19 | 0x8000000000000000);
            }
LAB_1010df270:
            func_0x000107c6142c(param_2);
          }
          func_0x000107c6142c(ppuVar14);
LAB_1010de7ec:
          func_0x000107c6142c(uVar8);
          return puVar2;
        }
      }
      func_0x000107c6142c(param_2);
    }
  }
  uVar17 = 0xd000000000000024;
  uVar18 = 0x800000010ef25cf0;
  uVar16 = 10;
LAB_1010de950:
  func_0x000103dac9b4(param_1,uVar16,puVar2,uVar17,uVar18);
  return puVar2;
}



/* Entry: 1010df518; end: 1010dfc77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010df518(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  long extraout_x8;
  char *pcVar15;
  code *pcVar16;
  uint uVar17;
  long lVar18;
  undefined1 *puVar19;
  byte abStack_180 [8];
  ulong auStack_178 [5];
  undefined1 auStack_150 [8];
  long lStack_148;
  uint uStack_13c;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  byte bStack_d0;
  undefined7 uStack_cf;
  ulong uStack_c8;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 auStack_80 [2];
  
  lVar2 = 0;
  uStack_110 = param_4;
  uStack_108 = param_6;
  func_0x000107c5f804();
  lVar18 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar19 = auStack_150 + lVar1;
  func_0x0001000d224c(auStack_80);
  if (*(long *)(param_8 + 0x10) == 0) {
LAB_1010df6fc:
    pcVar15 = " Please report issue";
    uVar14 = 0xd000000000000014;
    uVar12 = 3;
  }
  else {
    func_0x000107c61434(param_8);
    lVar3 = 0x546e6f6974706163;
    uVar10 = 0xeb00000000747865;
    func_0x000100029284(0x546e6f6974706163);
    if ((uVar10 & 1) == 0) {
      func_0x000107c6142c(param_8);
      goto LAB_1010df6fc;
    }
    func_0x0001000bb420(*(long *)(param_8 + 0x38) + lVar3 * 0x20,&puStack_100);
    func_0x000107c6142c(param_8);
    puVar4 = &uStack_a8;
    ppuVar9 = &puStack_100;
    func_0x000107c6147c(puVar4,ppuVar9,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)puVar4 & 1) == 0) goto LAB_1010df6fc;
    uVar10 = uStack_a8 & 0xffffffffffff;
    if ((uStack_a0 & 0x2000000000000000) != 0) {
      uVar10 = uStack_a0 >> 0x38 & 0xf;
    }
    if (uVar10 == 0) {
      func_0x000107c6142c();
      FUN_1010e04c0(param_2,param_3);
      goto LAB_1010df728;
    }
    uStack_120 = uStack_a8;
    uStack_118 = uStack_a0;
    func_0x0001000d224c(&puStack_100);
    if (puStack_100 != (undefined *)0x0) {
      puStack_138 = puStack_100;
      uStack_130 = param_7;
      uStack_128 = param_5;
      func_0x0001000d224c(&uStack_a8);
      uVar10 = param_2;
      func_0x000107c5b6c0();
      func_0x000107c61180();
      uVar5 = uVar10;
      func_0x000107c5faec();
      ppuVar11 = ppuVar9;
      func_0x000107c61170(uVar10);
      if (lRam0000000112d5c9d8 != -1) {
        ppuVar11 = (undefined **)0x1010de344;
        func_0x000107c61568(0x112d5c9d8);
      }
      uVar10 = (ulong)*(byte *)(lRam00000001137ff1e0 + _DAT_113080f70);
      func_0x0001044e388c();
      if ((uVar5 == uVar10) && (ppuVar9 == ppuVar11)) {
        lStack_148 = CONCAT44(lStack_148._4_4_,1);
        ppuVar13 = ppuVar11;
      }
      else {
        ppuVar13 = ppuVar9;
        func_0x000107c605b8(uVar5,ppuVar9,uVar10,ppuVar11,0);
        lStack_148 = CONCAT44(lStack_148._4_4_,(int)uVar5);
      }
      func_0x000107c6142c(ppuVar9);
      func_0x000107c6142c(ppuVar11);
      uVar10 = param_2;
      func_0x000107c5b6c0();
      func_0x000107c61180();
      uVar5 = uVar10;
      func_0x000107c5faec();
      ppuVar9 = ppuVar13;
      func_0x000107c61170(uVar10);
      if (lRam0000000112d5c9e0 != -1) {
        ppuVar9 = (undefined **)0x1010de354;
        func_0x000107c61568(0x112d5c9e0);
      }
      uVar10 = (ulong)*(byte *)(lRam00000001137ff1d8 + _DAT_113080f70);
      func_0x0001044e388c();
      if ((uVar5 == uVar10) && (ppuVar13 == ppuVar9)) {
        uVar17 = 1;
      }
      else {
        func_0x000107c605b8(uVar5,ppuVar13,uVar10,ppuVar9,0);
        uVar17 = (uint)uVar5;
      }
      func_0x000107c6142c(ppuVar13);
      func_0x000107c6142c(ppuVar9);
      if (*(long *)(param_8 + 0x10) == 0) {
LAB_1010df8f4:
        uStack_13c = 0;
      }
      else {
        func_0x000107c61434(param_8);
        uVar10 = 0;
        lVar3 = -0x2fffffffffffffee;
        func_0x000100029284(0xd000000000000012);
        if ((uVar10 & 1) == 0) {
          func_0x000107c6142c(param_8);
          goto LAB_1010df8f4;
        }
        func_0x0001000bb420(*(long *)(param_8 + 0x38) + lVar3 * 0x20,&puStack_100);
        func_0x000107c6142c(param_8);
        pbVar6 = &bStack_d0;
        func_0x000107c6147c(pbVar6,&puStack_100,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
        if (((ulong)pbVar6 & 1) == 0) goto LAB_1010df8f4;
        uStack_13c = (uint)bStack_d0;
      }
      uVar17 = (uint)lStack_148 | uVar17;
      lVar3 = param_8;
      FUN_1010e0c00();
      lStack_148 = lVar3;
      if (*(long *)(param_8 + 0x10) != 0) {
        func_0x000107c61434(param_8);
        lVar3 = 0x644972657375;
        uVar10 = 0;
        func_0x000100029284(0x644972657375);
        if ((uVar10 & 1) == 0) {
          func_0x000107c6142c(param_8);
        }
        else {
          func_0x0001000bb420(*(long *)(param_8 + 0x38) + lVar3 * 0x20,&puStack_100);
          func_0x000107c6142c(param_8);
          pbVar6 = &bStack_d0;
          func_0x000107c6147c(pbVar6,&puStack_100,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
          uVar14 = uStack_128;
          if (((ulong)pbVar6 & 1) != 0) {
            uVar5 = CONCAT71(uStack_cf,bStack_d0);
            uVar10 = uVar5 & 0xffffffffffff;
            if ((uStack_c8 & 0x2000000000000000) != 0) {
              uVar10 = uStack_c8 >> 0x38 & 0xf;
            }
            if ((uVar10 != 0) && ((uVar17 & 1) == 0)) {
              func_0x000107c5fadc(uVar5,uStack_c8);
              func_0x000107c6142c(uStack_c8);
              func_0x0001000295c4(0);
              (**(code **)(lVar18 + 0x68))
                        (puVar19,*(undefined4 *)
                                  PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0
                         ,lVar2);
              puVar7 = puVar19;
              func_0x000107c5fff0(puVar19);
              (**(code **)(lVar18 + 8))(puVar19,lVar2);
              FUN_1010e040c(&uStack_a8,&bStack_d0);
              puVar8 = &UNK_110383040;
              func_0x000107c613fc(&UNK_110383040,0x90,7);
              *(ulong *)(puVar8 + 0x10) = param_2;
              *(undefined8 *)(puVar8 + 0x18) = param_3;
              FUN_1010e0450(&bStack_d0,puVar8 + 0x20);
              uVar12 = uStack_130;
              *(undefined8 *)(puVar8 + 0x48) = uStack_110;
              *(undefined8 *)(puVar8 + 0x50) = uVar14;
              *(undefined8 *)(puVar8 + 0x58) = uStack_108;
              *(undefined8 *)(puVar8 + 0x60) = uStack_130;
              *(ulong *)(puVar8 + 0x68) = uStack_120;
              *(ulong *)(puVar8 + 0x70) = uStack_118;
              *(undefined8 *)(puVar8 + 0x78) = param_1;
              puVar8[0x80] = (char)uStack_13c;
              *(long *)(puVar8 + 0x88) = lStack_148;
              pcStack_e0 = FUN_1010e0468;
              puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
              uStack_f8 = 0x42000000;
              uStack_f0 = 0x101043a98;
              puStack_e8 = &UNK_110383058;
              ppuVar9 = &puStack_100;
              puStack_d8 = puVar8;
              func_0x000107c60bc4(ppuVar9);
              puVar8 = puStack_d8;
              func_0x000107c61174(param_2);
              func_0x000107c61174(param_3);
              func_0x000107c61434(uVar14);
              func_0x000107c61434(uVar12);
              func_0x000107c61574(puVar8);
              puVar8 = puStack_138;
              func_0x000107c5b49c(puStack_138);
              func_0x000107c615e8(puVar8);
              func_0x000107c61574(auStack_80[0]);
              func_0x000107c60bd0(ppuVar9);
              func_0x000107c61170(uVar5);
              func_0x000107c61170(puVar7);
              goto LAB_1010dfaa8;
            }
            func_0x000107c6142c();
          }
        }
      }
      uVar14 = uStack_90;
      func_0x0001000a8868(&uStack_a8);
      uVar10 = param_2;
      func_0x000107c4b1dc();
      func_0x000107c61180();
      uVar5 = uVar10;
      func_0x000107c5faec();
      func_0x000107c61170(uVar10);
      pcVar16 = *(code **)(lStack_88 + 0x10);
      *(undefined8 *)((long)auStack_178 + lVar1 + 0x18) = uStack_90;
      *(long *)((long)auStack_178 + lVar1 + 0x20) = lStack_88;
      lVar2 = lStack_148;
      *(undefined8 *)((long)auStack_178 + lVar1 + 8) = uVar14;
      *(long *)((long)auStack_178 + lVar1 + 0x10) = lVar2;
      *(ulong *)((long)auStack_178 + lVar1) = uVar5;
      abStack_180[lVar1] = (byte)uVar17 & 1;
      uVar10 = uStack_118;
      (*pcVar16)(param_1,uStack_110,uStack_128,uStack_108,uStack_130,uStack_120,uStack_118,0,
                 uStack_13c);
      func_0x000107c6142c(uVar10);
      func_0x000107c6142c(uVar14);
      func_0x000107c6142c(lVar2);
      func_0x000103dac9b4(param_2,1,param_3,0,0);
      func_0x000107c615e8(puStack_138);
      func_0x000107c61574(auStack_80[0]);
LAB_1010dfaa8:
      func_0x0001000834e4(&uStack_a8);
      return;
    }
    func_0x000107c6142c(uStack_118);
    pcVar15 = "No Such endpoint ";
    uVar14 = 0xd000000000000024;
    uVar12 = 10;
  }
  func_0x000103dac9b4(param_2,uVar12,param_3,uVar14,(ulong)pcVar15 | 0x8000000000000000);
LAB_1010df728:
  func_0x000107c61574(auStack_80[0]);
  return;
}



/* Entry: 1010dfc78; end: 1010dfcd3; -[_TtC43SCLensPreviewConfigurationApiRequestHandler34LensPreviewConfigApiRequestHandler handleRequest:] */

void FUN_1010dfc78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_1);
  FUN_1010de6bc(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1010dfcd4; end: 1010dfcd7; -[_TtC43SCLensPreviewConfigurationApiRequestHandler34LensPreviewConfigApiRequestHandler reset] */

void FUN_1010dfcd4(void)

{
  return;
}



/* Entry: 1010dfcd8; end: 1010dff8f;  */

void FUN_1010dfcd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  undefined8 param_14,undefined8 param_15,long param_16)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  code *pcVar5;
  ulong uStack_108;
  undefined8 uStack_f0;
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 auStack_a0 [32];
  
  puVar4 = auStack_a0;
  func_0x000107c61428(param_7 + 0x10,puVar4,0,0);
  param_7 = param_7 + 0x10;
  func_0x000107c61648();
  if (param_7 != 0) {
    if (param_6 == 0) {
      if (param_5 != 0) {
        func_0x000107c61174();
        uVar1 = param_5;
        func_0x000107c5db08();
        func_0x000107c61180();
        if (uVar1 == 0) {
          func_0x000107c61170(param_5);
        }
        else {
          uVar2 = uVar1;
          func_0x000107c5faec();
          func_0x000107c61170(uVar1);
          uVar1 = param_5;
          FUN_100bf119c();
          if ((uVar1 & 1) != 0) {
            func_0x0001000d224c(auStack_c8);
            uStack_f0 = uStack_b0;
            func_0x0001000a8868();
            uVar1 = param_5;
            func_0x000107c42120();
            func_0x000107c61180();
            if (uVar1 == 0) {
              uStack_108 = 0;
              uStack_f0 = 0;
            }
            else {
              uStack_108 = uVar1;
              func_0x000107c5faec();
              func_0x000107c61170(uVar1);
            }
            if (param_16 != -1) {
              puVar3 = &UNK_110383018;
              func_0x000107c613fc(&UNK_110383018,0x20,7);
              *(undefined8 *)(puVar3 + 0x10) = param_8;
              *(undefined8 *)(puVar3 + 0x18) = param_9;
              pcVar5 = *(code **)(lStack_a8 + 8);
              func_0x000107c61174(param_8);
              func_0x000107c61174(param_9);
              (*pcVar5)(param_1,param_2,param_3,param_4,param_10,param_11,uVar2,puVar4,uStack_108,
                        uStack_f0,param_12,param_13,param_14,param_15,param_16 + 1,0x1010e03f8,
                        puVar3,uStack_b0,lStack_a8);
              func_0x000107c6142c(puVar4);
              func_0x000107c61574(puVar3);
              func_0x000107c61574(param_7);
              func_0x000107c61170(param_5);
              func_0x000107c6142c(uStack_f0);
              func_0x0001000834e4(auStack_c8);
              return;
            }
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1010dff90);
            (*pcVar5)();
          }
          func_0x000107c61170(param_5);
          func_0x000107c6142c(puVar4);
        }
      }
      func_0x000103dac9b4(param_8,1,param_9,0x7266206120746f6e,0xec000000646e6569);
      func_0x000107c61574(param_7);
      return;
    }
    func_0x000107c61574();
  }
  func_0x000103dac9b4(param_8,10,param_9,0xd000000000000024,0x800000010ef25cf0);
  return;
}



/* Entry: 1010dff90; end: 1010dffeb;  */

void FUN_1010dff90(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010dffec; end: 1010e0393;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1010dffec(ulong param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  uVar3 = param_1;
  func_0x000107c428b4();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  FUN_1010de658();
  uVar1 = (uint)uVar4;
  if ((uVar1 & 0xff) == 6) {
    return 6;
  }
  uVar3 = param_1;
  func_0x000107c5b6c0();
  func_0x000107c61180();
  uVar2 = uVar3;
  func_0x000107c5faec();
  lVar5 = param_2;
  func_0x000107c61170(uVar3);
  if (lRam0000000112d5c9d8 != -1) {
    lVar5 = 0x1010de344;
    func_0x000107c61568(0x112d5c9d8);
  }
  uVar3 = (ulong)*(byte *)(lRam00000001137ff1e0 + _DAT_113080f70);
  func_0x0001044e388c();
  lVar6 = param_2;
  if (uVar2 == uVar3 && param_2 == lVar5) {
LAB_1010e0180:
    lVar7 = lVar5;
    func_0x000107c6142c(lVar6);
    func_0x000107c6142c(lVar5);
  }
  else {
    func_0x000107c605b8(uVar2,param_2,uVar3,lVar5,0);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(lVar5);
    lVar7 = lVar6;
    if ((uVar2 & 1) == 0) {
      uVar3 = param_1;
      func_0x000107c5b6c0();
      func_0x000107c61180();
      uVar2 = uVar3;
      func_0x000107c5faec();
      lVar5 = lVar6;
      func_0x000107c61170(uVar3);
      if (lRam0000000112d5c9e0 != -1) {
        lVar5 = 0x1010de354;
        func_0x000107c61568(0x112d5c9e0);
      }
      uVar3 = (ulong)*(byte *)(lRam00000001137ff1d8 + _DAT_113080f70);
      func_0x0001044e388c();
      if (uVar2 != uVar3 || lVar6 != lVar5) {
        lVar7 = lVar6;
        func_0x000107c605b8(uVar2,lVar6,uVar3,lVar5,0);
        func_0x000107c6142c(lVar6);
        func_0x000107c6142c(lVar5);
        if (((uVar1 - 3 & 0xff) < 2) && ((uVar2 & 1) != 0)) {
          return uVar4;
        }
        goto LAB_1010e01a0;
      }
      goto LAB_1010e0180;
    }
  }
  if ((uVar1 - 3 & 0xff) < 2) {
    return uVar4;
  }
LAB_1010e01a0:
  uVar3 = param_1;
  func_0x000107c5b6c0();
  func_0x000107c61180();
  uVar2 = uVar3;
  func_0x000107c5faec();
  lVar5 = lVar7;
  func_0x000107c61170(uVar3);
  if (lRam0000000112d5c9c8 != -1) {
    lVar5 = 0x1010de324;
    func_0x000107c61568(0x112d5c9c8);
  }
  uVar3 = (ulong)*(byte *)(lRam00000001137ff1f0 + _DAT_113080f70);
  func_0x0001044e388c();
  if ((uVar2 == uVar3) && (lVar7 == lVar5)) {
    lVar6 = lVar5;
    func_0x000107c6142c(lVar7);
    func_0x000107c6142c(lVar5);
    if ((uVar1 & 0xff) != 5) {
      return uVar4;
    }
  }
  else {
    lVar6 = lVar7;
    func_0x000107c605b8(uVar2,lVar7,uVar3,lVar5,0);
    func_0x000107c6142c(lVar7);
    func_0x000107c6142c(lVar5);
    if (((uVar1 & 0xff) != 5) && ((uVar2 & 1) != 0)) {
      return uVar4;
    }
  }
  func_0x000107c5b6c0();
  func_0x000107c61180();
  uVar3 = param_1;
  func_0x000107c5faec();
  lVar5 = lVar6;
  func_0x000107c61170(param_1);
  if (lRam0000000112d5c9d0 != -1) {
    lVar5 = 0x1010de334;
    func_0x000107c61568(0x112d5c9d0);
  }
  uVar4 = (ulong)*(byte *)(lRam00000001137ff1e8 + _DAT_113080f70);
  func_0x0001044e388c();
  if ((uVar3 == uVar4) && (lVar6 == lVar5)) {
    func_0x000107c6142c(lVar6);
    func_0x000107c6142c(lVar5);
    if ((uVar1 & 0xff) == 5) {
      return 5;
    }
  }
  else {
    func_0x000107c605b8(uVar3,lVar6,uVar4,lVar5,0);
    func_0x000107c6142c(lVar6);
    func_0x000107c6142c(lVar5);
    if (((uVar1 & 0xff) == 5) && ((uVar3 & 1) != 0)) {
      return 5;
    }
  }
  return 6;
}



/* Entry: 1010e0394; end: 1010e03db;  */

void FUN_1010e0394(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1010dfcd8(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x78),param_1,param_2,
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x50),
                *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Entry: 1010e03dc; end: 1010e040b;  */

void FUN_1010e03dc(long param_1,long param_2)

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



/* Entry: 1010e040c; end: 1010e044f;  */

long FUN_1010e040c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1010e0450; end: 1010e0467;  */

undefined8 * FUN_1010e0450(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 1010e0468; end: 1010e04b7;  */

void FUN_1010e0468(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1010e0a60(*(undefined8 *)(unaff_x20 + 0x78),param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),unaff_x20 + 0x20,*(undefined8 *)(unaff_x20 + 0x48)
                ,*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined1 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 1010e04b8; end: 1010e04bf;  */

void FUN_1010e04b8(long param_1,long param_2)

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



/* Entry: 1010e04c0; end: 1010e06ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010e04c0(ulong param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  lVar5 = param_2;
  func_0x0001000d224c(auStack_88);
  uVar4 = param_1;
  func_0x000107c5b6c0();
  func_0x000107c61180();
  uVar3 = uVar4;
  func_0x000107c5faec();
  lVar6 = lVar5;
  func_0x000107c61170(uVar4);
  if (lRam0000000112d5c9d8 != -1) {
    lVar6 = 0x1010de344;
    func_0x000107c61568(0x112d5c9d8);
  }
  uVar4 = (ulong)*(byte *)(lRam00000001137ff1e0 + _DAT_113080f70);
  func_0x0001044e388c();
  if (uVar3 == uVar4 && lVar5 == lVar6) {
    uVar1 = 1;
    lVar7 = lVar6;
  }
  else {
    lVar7 = lVar5;
    func_0x000107c605b8(uVar3,lVar5,uVar4,lVar6,0);
    uVar1 = (uint)uVar3;
  }
  func_0x000107c6142c(lVar5);
  func_0x000107c6142c(lVar6);
  uVar4 = param_1;
  func_0x000107c5b6c0();
  func_0x000107c61180();
  uVar3 = uVar4;
  func_0x000107c5faec();
  lVar6 = lVar7;
  func_0x000107c61170(uVar4);
  if (lRam0000000112d5c9e0 != -1) {
    lVar6 = 0x1010de354;
    func_0x000107c61568(0x112d5c9e0);
  }
  uVar4 = (ulong)*(byte *)(lRam00000001137ff1d8 + _DAT_113080f70);
  func_0x0001044e388c();
  if (uVar3 == uVar4 && lVar7 == lVar6) {
    uVar2 = 1;
  }
  else {
    func_0x000107c605b8(uVar3,lVar7,uVar4,lVar6,0);
    uVar2 = (uint)uVar3;
  }
  func_0x000107c6142c(lVar7);
  func_0x000107c6142c(lVar6);
  uVar8 = uStack_70;
  FUN_1010e109c(auStack_88,uStack_70);
  uVar4 = param_1;
  func_0x000107c4b1dc(param_1);
  func_0x000107c61180();
  uVar3 = uVar4;
  func_0x000107c5faec();
  func_0x000107c61170(uVar4);
  (**(code **)(lStack_68 + 0x18))((uVar1 | uVar2) & 1,uVar3,uVar8,uStack_70,lStack_68);
  func_0x000107c6142c(uVar8);
  func_0x000103dac9b4(param_1,1,param_2,0,0);
  func_0x0001010e10c0(auStack_88);
  return;
}



/* Entry: 1010e06f0; end: 1010e0703;  */

bool FUN_1010e06f0(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1010e0704; end: 1010e085b;  */

void FUN_1010e0704(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x656d616e72657375;
  if (cVar3 != '\x01') {
    uVar1 = 0x64695f72657375;
  }
  uVar2 = 0xe800000000000000;
  if (cVar3 != '\x01') {
    uVar2 = 0xe700000000000000;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1010e085c; end: 1010e08d3;  */

void FUN_1010e085c(undefined1 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  lVar3 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(uVar2);
  uVar4 = 1;
  if (lVar3 != 1) {
    uVar4 = 2;
  }
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1010e08d4; end: 1010e094f;  */

void FUN_1010e08d4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar1 = 0x656d616e72657375;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x64695f72657375;
  }
  uVar2 = 0xe800000000000000;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe700000000000000;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 1010e0950; end: 1010e09cb;  */

void FUN_1010e0950(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined1 uVar3;
  
  lVar2 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_3);
  uVar3 = 1;
  if (lVar2 != 1) {
    uVar3 = 2;
  }
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = uVar3;
  }
  *param_1 = uVar1;
  return;
}



/* Entry: 1010e09cc; end: 1010e09e3;  */

undefined1  [16] FUN_1010e09cc(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1010e09e4; end: 1010e0a33;  */

void FUN_1010e09e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1010e14f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1010e0a34; end: 1010e0a5f;  */

void FUN_1010e0a34(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_1010e1368();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  return;
}



/* Entry: 1010e0a60; end: 1010e0bab;  */

undefined1  [16]
FUN_1010e0a60(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
             long param_6,undefined8 param_7,undefined8 param_8,undefined1 *param_9,long param_10,
             undefined8 param_11,undefined *param_12,byte param_13,undefined4 param_14,
             undefined *param_15)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 auStack_168 [2];
  undefined8 auStack_158 [4];
  long lStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  undefined *puStack_108;
  undefined1 **ppuStack_100;
  undefined *puStack_f8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined1 *puStack_b0;
  undefined *puStack_a8;
  uint uStack_9c;
  undefined *puStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  if (param_3 == 0) {
    puStack_98 = param_15;
    uStack_9c = (uint)param_13;
    puStack_80 = param_12;
    uStack_88 = param_11;
    lStack_90 = param_10;
    uVar6 = *(undefined8 *)(param_6 + 0x18);
    lVar9 = *(long *)(param_6 + 0x20);
    uVar2 = uVar6;
    puStack_b0 = param_9;
    FUN_1010e109c();
    lVar10 = param_4;
    puStack_a8 = (undefined *)param_6;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    lVar1 = lVar10;
    func_0x000107c5faec();
    func_0x000107c61170(lVar10);
    puStack_c8 = puStack_98;
    puStack_e0 = (undefined *)((ulong)puStack_e0 & 0xffffffffffffff00);
    lStack_d8 = lVar1;
    puStack_d0 = (undefined *)uVar2;
    puStack_c0 = (undefined *)uVar6;
    lStack_b8 = lVar9;
    (**(code **)(lVar9 + 0x10))
              (param_1,param_7,param_8,puStack_b0,lStack_90,uStack_88,puStack_80,param_2,
               uStack_9c & 1);
    func_0x000107c6142c(uVar2);
    uVar6 = 1;
    puVar8 = (undefined *)0x0;
    lVar9 = 0;
  }
  else {
    lVar9 = -0x7ffffffef10da310;
    uVar6 = 10;
    puVar8 = (undefined *)0xd000000000000024;
  }
  puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (lVar9 != 0) {
    puStack_80 = PTR___sSSN_11034da80;
    puStack_98 = puVar8;
    lStack_90 = lVar9;
    func_0x000100102924(&puStack_98,&uStack_78);
    func_0x000107c61434(lVar9);
    puVar8 = puVar4;
    func_0x000107c61558(puVar4);
    puStack_98 = puVar4;
    uVar6 = 0x6567617373656d;
    func_0x0001001029e8(&uStack_78,0x6567617373656d,0xe700000000000000,puVar8);
    puVar4 = puStack_98;
  }
  lVar9 = param_4;
  func_0x000107c50374();
  func_0x000107c61180();
  if (lVar9 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar6);
  }
  func_0x000107c4e33c();
  func_0x000107c61180();
  puVar14 = PTR___sSSSHsWP_11034da90;
  puVar8 = PTR___sSSN_11034da80;
  lVar1 = param_4;
  func_0x000107c5f9e8();
  func_0x000107c61170(param_4);
  puVar11 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x000107c61168();
  puVar13 = puVar4;
  func_0x000107c5f9dc(puVar4,puVar8,PTR___sypN_11034f1a8 + 8,puVar14);
  uStack_78 = 0;
  func_0x000107c41300();
  func_0x000107c61180();
  func_0x000107c61170(puVar13);
  uVar6 = uStack_78;
  func_0x000107c61174(uStack_78);
  if (puVar11 == (undefined *)0x0) {
    uVar2 = uVar6;
    func_0x000107c5ed30();
    func_0x000107c61170(uVar6);
    func_0x000107c61654();
    func_0x000107c614ac(uVar2);
    puVar14 = (undefined *)0x0;
    puVar8 = (undefined *)0xf000000000000000;
  }
  else {
    puVar14 = puVar11;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar11);
  }
  lVar3 = lVar1;
  puVar11 = PTR___sSSN_11034da80;
  func_0x000107c5f9dc(lVar1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(lVar1);
  if ((ulong)puVar8 >> 0x3c < 0xf) {
    puVar13 = puVar14;
    func_0x000107c5ee20(puVar14,puVar8);
    func_0x0001000b44c0(puVar14,puVar8);
  }
  else {
    puVar13 = (undefined *)0x0;
    puVar8 = puVar11;
  }
  puVar14 = PTR_PTR_1126b0278;
  func_0x000107c610f8();
  func_0x000107c48368();
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(puVar13);
  func_0x000107c4d664(param_5);
  func_0x000107c6142c(puVar4);
  puVar11 = puVar14;
  func_0x000107c61170(puVar14);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    auVar15._8_8_ = puVar8;
    auVar15._0_8_ = puVar11;
    return auVar15;
  }
  func_0x000107c60e78();
  puStack_a8 = &UNK_103dacc60;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  puStack_d0 = puVar14;
  puStack_c8 = (undefined *)lVar3;
  puStack_c0 = puVar4;
  lStack_b8 = param_5;
  puStack_b0 = &stack0xfffffffffffffff0;
  func_0x000107c61168();
  puVar5 = (undefined8 *)PTR___sSSN_11034da80;
  func_0x000107c5f9dc(puVar11,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                     );
  puStack_e0 = (undefined *)0x0;
  func_0x000107c41300();
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  puVar4 = puStack_e0;
  func_0x000107c61174();
  if (puVar8 == (undefined *)0x0) {
    puVar8 = puVar4;
    func_0x000107c5ed30();
    func_0x000107c61170(puVar4);
    func_0x000107c61654();
    puVar4 = puVar8;
    func_0x000107c614ac(puVar8);
    puVar11 = (undefined *)0x0;
    puVar12 = (undefined8 *)0xf000000000000000;
    puVar7 = puVar5;
  }
  else {
    puVar11 = puVar8;
    func_0x000107c5ee30();
    puVar4 = puVar8;
    puVar7 = puVar5;
    func_0x000107c61170(puVar8);
    puVar12 = puVar5;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    auVar16._8_8_ = puVar12;
    auVar16._0_8_ = puVar11;
    return auVar16;
  }
  func_0x000107c60e78();
  puStack_f8 = &SUB_103dacd78;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_130 = puVar13;
  lStack_128 = lVar9;
  puStack_120 = puVar14;
  puStack_118 = puVar8;
  puStack_110 = puVar12;
  puStack_108 = puVar11;
  ppuStack_100 = &puStack_b0;
  if ((ulong)puVar7 >> 0x3c < 0xf) {
    puVar8 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
    func_0x000107c61168();
    func_0x00010006c00c(puVar4,puVar7);
    puVar14 = puVar4;
    func_0x000107c5ee20(puVar4,puVar7);
    auStack_158[0] = 0;
    func_0x000107c3ab8c();
    func_0x000107c61180();
    func_0x000107c61170(puVar14);
    uVar6 = auStack_158[0];
    if (puVar8 != (undefined *)0x0) {
      func_0x000107c61174();
      func_0x000107c60234(auStack_158,puVar8);
      func_0x0001000b44c0(puVar4,puVar7);
      func_0x000107c615e8(puVar8);
      uVar6 = 0x112d472a8;
      func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
      puVar5 = auStack_168;
      puVar7 = auStack_158;
      func_0x000107c6147c(puVar5,puVar7,PTR___sypN_11034f1a8 + 8,uVar6,6);
      if ((int)puVar5 == 0) {
        auStack_168[0] = 0;
      }
      goto code_r0x000103dacebc;
    }
    uVar2 = auStack_158[0];
    func_0x000107c61174();
    func_0x000107c5ed30(uVar6);
    func_0x000107c61170(uVar2);
    func_0x000107c61654();
    func_0x0001000b44c0(puVar4,puVar7);
    func_0x000107c614ac(uVar6);
  }
  auStack_168[0] = 0;
code_r0x000103dacebc:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_138) {
    func_0x000107c60e78(auStack_168[0]);
    return ZEXT816(0x11070f3e8);
  }
  auVar17._8_8_ = puVar7;
  auVar17._0_8_ = auStack_168[0];
  return auVar17;
}



/* Entry: 1010e0bac; end: 1010e0bff;  */

void FUN_1010e0bac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010e0c00; end: 1010e109b;  */

/* WARNING: Removing unreachable block (ram,0x0001010e0da4) */

long * FUN_1010e0c00(long *param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  long extraout_x8;
  ulong uVar17;
  undefined *puStack_100;
  ulong uStack_f8;
  long *plStack_f0;
  long *plStack_e8;
  ulong uStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  long *plStack_b0;
  long lStack_a8;
  long alStack_90 [3];
  ulong uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar7 = (long *)0x0;
  func_0x000107c5eb9c();
  lStack_c8 = plVar7[-1];
  plVar8 = plVar7;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c8 + 0x40));
  uStack_d0 = (long)&puStack_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_1[2] != 0) {
    func_0x000107c61434(param_1);
    lVar9 = 0x736e6f69746e656d;
    param_2 = 0xe800000000000000;
    func_0x000100029284(0x736e6f69746e656d);
    if ((param_2 & 1) == 0) {
LAB_1010e104c:
      plVar8 = param_1;
      func_0x000107c6142c();
    }
    else {
      func_0x0001000bb420(param_1[7] + lVar9 * 0x20,&plStack_b0);
      func_0x000107c6142c(param_1);
      func_0x000100102924(&plStack_b0,alStack_90);
      puVar10 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x000107c61168();
      plVar8 = alStack_90;
      FUN_1010e109c(plVar8,uStack_78);
      func_0x000107c605b0();
      plStack_b0 = (long *)0x0;
      func_0x000107c41300();
      func_0x000107c61180();
      func_0x000107c615e8(plVar8);
      plVar8 = plStack_b0;
      func_0x000107c61174(plStack_b0);
      if (puVar10 == (undefined *)0x0) {
        plVar7 = plVar8;
        func_0x000107c5ed30();
        func_0x000107c61170(plVar8);
        func_0x000107c61654();
        func_0x000107c614ac(plVar7);
        param_2 = uStack_78;
      }
      else {
        puVar11 = puVar10;
        param_2 = uStack_78;
        plStack_f0 = plVar7;
        func_0x000107c5ee30();
        func_0x000107c61170(puVar10);
        uVar12 = 0;
        func_0x000107c5eb24();
        func_0x000107c613fc();
        func_0x000107c5eb20();
        uVar13 = 0x112d5cb58;
        func_0x0001000285a8(0x112d5cb58,&UNK_10d923558);
        uVar14 = uVar13;
        FUN_1010e10e0();
        func_0x000107c5eb1c(&plStack_b0,uVar13,puVar11,param_2,uVar13,uVar14);
        func_0x000107c61574(uVar12);
        plVar8 = plStack_b0;
        uStack_e0 = plStack_b0[2];
        if (uStack_e0 != 0) {
          uVar17 = 0;
          plVar8 = plStack_b0 + 7;
          plStack_e8 = plStack_b0;
          puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
          plVar7 = plStack_f0;
          puStack_100 = puVar11;
          uStack_f8 = param_2;
          do {
            if ((ulong)plStack_e8[2] <= uVar17) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x1010e1098);
              (*pcVar6)();
            }
            lStack_d8 = plVar8[-3];
            lVar9 = plVar8[-2];
            plVar1 = (long *)plVar8[-1];
            lVar3 = *plVar8;
            plStack_b0 = plVar1;
            lStack_a8 = lVar3;
            func_0x000107c61434(lVar9);
            lVar15 = lVar3;
            func_0x000107c61434(lVar3);
            uVar2 = uStack_d0;
            func_0x000107c5eb88(uStack_d0);
            FUN_100e8b654();
            uVar16 = uVar2;
            puVar11 = PTR___sSSN_11034da80;
            func_0x000107c601f0(uVar2,PTR___sSSN_11034da80,lVar15);
            (**(code **)(lStack_c8 + 8))(uVar2,plVar7);
            func_0x000107c6142c(puVar11);
            uVar2 = uVar16 & 0xffffffffffff;
            if (((ulong)puVar11 & 0x2000000000000000) != 0) {
              uVar2 = (ulong)puVar11 >> 0x38 & 0xf;
            }
            if (uVar2 == 0) {
              func_0x000107c6142c(lVar9);
              func_0x000107c6142c(lVar3);
            }
            else {
              puVar11 = puVar10;
              func_0x000107c61558();
              puStack_c0 = puVar10;
              if (((ulong)puVar11 & 1) == 0) {
                func_0x0001010e28c4(0,*(long *)(puVar10 + 0x10) + 1,1);
              }
              uVar2 = *(ulong *)(puStack_c0 + 0x10);
              if (*(ulong *)(puStack_c0 + 0x18) >> 1 <= uVar2) {
                func_0x0001010e28c4(1 < *(ulong *)(puStack_c0 + 0x18),uVar2 + 1,1);
              }
              *(ulong *)(puStack_c0 + 0x10) = uVar2 + 1;
              *(long *)(puStack_c0 + uVar2 * 0x20 + 0x20) = lStack_d8;
              *(long *)(puStack_c0 + uVar2 * 0x20 + 0x28) = lVar9;
              *(long **)(puStack_c0 + uVar2 * 0x20 + 0x30) = plVar1;
              *(long *)(puStack_c0 + uVar2 * 0x20 + 0x38) = lVar3;
              puVar10 = puStack_c0;
              plVar7 = plStack_f0;
            }
            uVar17 = uVar17 + 1;
            plVar8 = plVar8 + 4;
          } while (uStack_e0 != uVar17);
          func_0x000107c6142c(plStack_e8);
          lVar9 = *(long *)(puVar10 + 0x10);
          if (lVar9 == 0) {
            func_0x000107c61574(puVar10);
            param_1 = (long *)PTR___swiftEmptyArrayStorage_11034f1c8;
          }
          else {
            plStack_b0 = (long *)PTR___swiftEmptyArrayStorage_11034f1c8;
            func_0x0001010e2890(0,lVar9,0);
            plVar8 = (long *)(puVar10 + 0x38);
            param_1 = plStack_b0;
            do {
              lStack_c8 = plVar8[-3];
              lVar15 = plVar8[-2];
              lVar3 = plVar8[-1];
              lVar4 = *plVar8;
              uVar17 = param_1[2];
              uVar2 = param_1[3];
              plStack_b0 = param_1;
              func_0x000107c61434(lVar15);
              func_0x000107c61434(lVar4);
              if (uVar2 >> 1 <= uVar17) {
                func_0x0001010e2890(1 < uVar2,uVar17 + 1,1);
                param_1 = plStack_b0;
              }
              plVar8 = plVar8 + 4;
              param_1[2] = uVar17 + 1;
              param_1[uVar17 * 4 + 4] = lStack_c8;
              param_1[uVar17 * 4 + 5] = lVar15;
              param_1[uVar17 * 4 + 6] = lVar3;
              param_1[uVar17 * 4 + 7] = lVar4;
              lVar9 = lVar9 + -1;
            } while (lVar9 != 0);
            func_0x000107c61574(puVar10);
          }
          lVar9 = param_1[2];
          func_0x00010006c090(puStack_100);
          plVar8 = alStack_90;
          func_0x0001010e10c0();
          param_2 = uStack_f8;
          if (lVar9 != 0) goto LAB_1010e1058;
          goto LAB_1010e104c;
        }
        func_0x00010006c090(puVar11);
        func_0x000107c6142c(plVar8);
      }
      plVar8 = alStack_90;
      func_0x0001010e10c0();
    }
  }
  param_1 = (long *)0x0;
LAB_1010e1058:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    func_0x000107c60e78();
    uVar5 = *(uint *)(*(long *)(param_2 - 8) + 0x50);
    if ((uVar5 >> 0x11 & 1) != 0) {
      uVar17 = (ulong)uVar5 & 0xff;
      plVar8 = (long *)(*plVar8 + (uVar17 + 0x10 & (uVar17 ^ 0xffffffffffffffff)));
    }
    return plVar8;
  }
  return param_1;
}



/* Entry: 1010e109c; end: 1010e10df;  */

long * FUN_1010e109c(long *param_1,long param_2)

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



/* Entry: 1010e10e0; end: 1010e114f;  */

void FUN_1010e10e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112d5cb60 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d5cb58;
  func_0x00010002969c(0x112d5cb58,&UNK_10d923558);
  uVar2 = uVar1;
  FUN_1010e1150();
  puVar3 = PTR___sSayxGSesSeRzlMc_11034dd10;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sSayxGSesSeRzlMc_11034dd10,uVar1,&uStack_28);
  puRam0000000112d5cb60 = puVar3;
  return;
}



/* Entry: 1010e1150; end: 1010e118f;  */

void FUN_1010e1150(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5cb68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d923570;
  func_0x000107c61520(&UNK_10d923570,&UNK_1103830e8);
  puRam0000000112d5cb68 = puVar1;
  return;
}



/* Entry: 1010e1190; end: 1010e121f;  */

long FUN_1010e1190(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1010e1220; end: 1010e128b;  */

undefined8 * FUN_1010e1220(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1010e128c; end: 1010e12cf;  */

undefined8 * FUN_1010e128c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1010e12d0; end: 1010e1367;  */

int FUN_1010e12d0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1010e1368; end: 1010e14ef;  */

/* WARNING: Removing unreachable block (ram,0x0001010e14a8) */
/* WARNING: Removing unreachable block (ram,0x0001010e1430) */

undefined1 * FUN_1010e1368(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar2 = 0x112d5cb70;
  func_0x0001000285a8(0x112d5cb70,&UNK_10d923598);
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puVar4 = *(undefined1 **)(param_1 + 0x20);
  lVar3 = param_1;
  FUN_1010e109c(param_1,uVar1);
  FUN_1010e14f0();
  func_0x000107c606e0(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_110383180,&UNK_110383180,lVar3,
                      uVar1,puVar4);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    puVar4 = &uStack_51;
    func_0x000107c604f4(puVar4,lVar2);
    uStack_52 = 1;
    func_0x000107c604f4(&uStack_52,lVar2);
    (**(code **)(lVar5 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar2);
    func_0x0001010e10c0(param_1);
  }
  else {
    func_0x0001010e10c0(param_1);
  }
  return puVar4;
}



/* Entry: 1010e14f0; end: 1010e152f;  */

void FUN_1010e14f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5cb78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d92369c;
  func_0x000107c61520(&UNK_10d92369c,&UNK_110383180);
  puRam0000000112d5cb78 = puVar1;
  return;
}



/* Entry: 1010e1530; end: 1010e1697;  */

int FUN_1010e1530(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1010e15ac;
        goto LAB_1010e1590;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1010e1590:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1010e15ac:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1010e1698; end: 1010e16d7;  */

void FUN_1010e1698(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5cb80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d923674;
  func_0x000107c61520(&UNK_10d923674,&UNK_110383180);
  puRam0000000112d5cb80 = puVar1;
  return;
}



/* Entry: 1010e16d8; end: 1010e16db;  */

void FUN_1010e16d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5cb88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9235d4;
  func_0x000107c61520(&UNK_10d9235d4,&UNK_110383180);
  puRam0000000112d5cb88 = puVar1;
  return;
}



/* Entry: 1010e16dc; end: 1010e171b;  */

void FUN_1010e16dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5cb88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9235d4;
  func_0x000107c61520(&UNK_10d9235d4,&UNK_110383180);
  puRam0000000112d5cb88 = puVar1;
  return;
}



/* Entry: 1010e171c; end: 1010e171f;  */

void FUN_1010e171c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5cb90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9235ac;
  func_0x000107c61520(&UNK_10d9235ac,&UNK_110383180);
  puRam0000000112d5cb90 = puVar1;
  return;
}



/* Entry: 1010e1720; end: 1010e175f;  */

void FUN_1010e1720(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d5cb90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9235ac;
  func_0x000107c61520(&UNK_10d9235ac,&UNK_110383180);
  puRam0000000112d5cb90 = puVar1;
  return;
}



/* Entry: 1010e1760; end: 1010e17f3;  */

undefined8
FUN_1010e1760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_1010e1910(param_1,param_3,param_4,param_5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  return uVar1;
}



/* Entry: 1010e17f4; end: 1010e1863;  */

/* WARNING: Possible PIC construction at 0x0001010e1844: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010e1848) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010e17f4(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_3 + _DAT_112fcab58);
  lVar1 = 0;
  func_0x0001010e0be0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = uVar2;
  *(undefined8 *)(lVar1 + 0x20) = param_4;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar2);
  return;
}



/* Entry: 1010e1864; end: 1010e18e7;  */

/* WARNING: Possible PIC construction at 0x0001010e18bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010e18cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010e18c0) */
/* WARNING: Removing unreachable block (ram,0x0001010e18d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010e1864(long *param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_3 + _DAT_112fcab48);
  lVar1 = 0;
  func_0x0001010dffcc();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  *(undefined8 *)(lVar1 + 0x18) = param_5;
  *(undefined8 *)(lVar1 + 0x20) = param_4;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar2);
  return;
}



/* Entry: 1010e18e8; end: 1010e190f;  */

void FUN_1010e18e8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 1010e1910; end: 1010e1e23;  */

undefined8 FUN_1010e1910(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  code *pcVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 unaff_x20;
  long lVar18;
  
  func_0x0001000285a8(0x112d5a608,&UNK_10d921390);
  func_0x000107c4af30();
  func_0x000107c61180();
  uVar7 = param_4;
  func_0x0001000bda74();
  func_0x000107c61170(param_4);
  func_0x000107c5b4b0();
  func_0x000107c61180();
  if (param_3 == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1010e1e24);
    (*pcVar6)();
  }
  func_0x0001000285a8(0x112d5cc88,&UNK_10d923740);
  lVar8 = param_3;
  func_0x0001000bda74();
  func_0x000107c61170(param_3);
  puVar9 = &UNK_110383278;
  func_0x000107c613fc(&UNK_110383278,0x28,7);
  *(long *)(puVar9 + 0x10) = lVar8;
  *(undefined8 *)(puVar9 + 0x18) = param_2;
  *(undefined8 *)(puVar9 + 0x20) = uVar7;
  func_0x0001000285a8(0x112d5cc90,&UNK_10d9237d0);
  func_0x000107c613fc();
  func_0x000107c6157c(lVar8);
  func_0x000107c61174();
  func_0x000107c6157c(uVar7);
  pcVar6 = FUN_1010e1e44;
  func_0x0001000bdd8c(FUN_1010e1e44,puVar9);
  puVar9 = &UNK_1103832a0;
  func_0x000107c613fc(&UNK_1103832a0,0x30,7);
  *(long *)(puVar9 + 0x10) = lVar8;
  *(undefined8 *)(puVar9 + 0x18) = param_2;
  *(code **)(puVar9 + 0x20) = pcVar6;
  *(undefined8 *)(puVar9 + 0x28) = uVar7;
  func_0x0001000285a8(0x112d4adb8,&UNK_10d923750);
  func_0x000107c613fc();
  func_0x000107c6157c(lVar8);
  func_0x000107c61174(param_2);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(pcVar6);
  uVar10 = 0x1010e1e50;
  func_0x0001000bdd8c(0x1010e1e50,puVar9);
  uVar11 = 0x112d4adc0;
  func_0x0001000285a8(0x112d4adc0,&UNK_10d911470);
  pcVar12 = FUN_1010e18e8;
  func_0x0001000cb480(FUN_1010e18e8,0,uVar11);
  pcVar13 = pcVar12;
  func_0x0001003a5b88();
  func_0x000107c61574(pcVar12);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100403514(0,6,0);
  lVar18 = 0;
  do {
    uVar16 = 0x7061635f65646968;
    bVar3 = *(byte *)(lVar18 + 0x112d5ccc0);
    uVar11 = 0xec0000006e6f6974;
    if (bVar3 != 4) {
      uVar16 = 0xd000000000000011;
      uVar11 = 0x800000010ef25c90;
    }
    uVar15 = 0x6e6f6974706163;
    if (bVar3 != 3) {
      uVar15 = uVar16;
    }
    uVar16 = 0xe700000000000000;
    if (bVar3 != 3) {
      uVar16 = uVar11;
    }
    uVar11 = 0xee006e6f69746e65;
    uVar4 = 0x6d5f65766f6d6572;
    if (bVar3 != 1) {
      uVar11 = 0x800000010ef25c60;
      uVar4 = 0xd000000000000010;
    }
    uVar1 = 0xef72656b63697473;
    uVar5 = 0x5f6e6f69746e656d;
    if (bVar3 != 0) {
      uVar1 = uVar11;
      uVar5 = uVar4;
    }
    if (bVar3 < 3) {
      uVar16 = uVar1;
      uVar15 = uVar5;
    }
    uVar2 = *(ulong *)(puVar9 + 0x10);
    if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar2) {
      func_0x000100403514(1 < *(ulong *)(puVar9 + 0x18),uVar2 + 1,1);
    }
    lVar18 = lVar18 + 1;
    *(ulong *)(puVar9 + 0x10) = uVar2 + 1;
    *(undefined8 *)(puVar9 + uVar2 * 0x10 + 0x20) = uVar15;
    *(undefined8 *)(puVar9 + uVar2 * 0x10 + 0x28) = uVar16;
  } while (lVar18 != 6);
  puVar14 = puVar9;
  func_0x000100403a6c(puVar9);
  func_0x000107c61574(puVar9);
  lVar18 = lRam0000000112d5c9e8;
  func_0x000107c61174(pcVar13);
  if (lVar18 != -1) {
    func_0x000107c61568(0x112d5c9e8,FUN_1010de3a4);
  }
  uVar11 = uRam00000001137ff1f8;
  puVar9 = PTR_PTR_1126b0260;
  func_0x000107c610f8(PTR_PTR_1126b0260);
  uVar15 = 0;
  func_0x0001044e4d64(0);
  uVar16 = uVar15;
  FUN_100f06a9c();
  func_0x000107c5fe08(uVar11,uVar15,uVar16);
  puVar17 = puVar14;
  func_0x000107c5fe08(puVar14,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c6142c(puVar14);
  func_0x000107c48360(puVar9);
  func_0x000107c61170(pcVar13);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(puVar17);
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61574(uVar7);
  func_0x000107c61574(lVar8);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(uVar10);
  func_0x000107c61170(pcVar13);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(param_1);
  return unaff_x20;
}



/* Entry: 1010e1e24; end: 1010e1e43;  */

void FUN_1010e1e24(void)

{
  func_0x000107c61168(&PTR_PTR_112d5cc30);
  return;
}



/* Entry: 1010e1e44; end: 1010e1e5b;  */

/* WARNING: Possible PIC construction at 0x0001010e1844: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010e1848) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010e1e44(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_112fcab58);
  lVar2 = 0;
  func_0x0001010e0be0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar1;
  *(undefined8 *)(lVar2 + 0x18) = uVar4;
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar4);
  return;
}



/* Entry: 1010e1e5c; end: 1010e269b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1010e1e5c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
             undefined8 param_6,long param_7,ulong param_8)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  code *pcVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  long lVar21;
  undefined8 unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c613fc();
  uVar6 = param_8;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (uVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1010e2698);
    (*pcVar5)();
  }
  uVar7 = 0xd000000000000023;
  lVar21 = -0x7ffffffef10da220;
  func_0x000107c5fadc(0xd000000000000023);
  uVar8 = uVar6;
  func_0x000107c3ebd4();
  func_0x000107c615e8(uVar6);
  func_0x000107c61170(uVar7);
  if ((int)uVar8 != 0) {
LAB_1010e1f14:
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    uVar6 = param_8;
LAB_1010e1f50:
    func_0x000107c61170(uVar6);
    return unaff_x20;
  }
  plVar9 = *(long **)(param_3 + _DAT_113074ea0);
  func_0x000107c40534();
  func_0x000107c61180();
  plVar10 = plVar9;
  func_0x000107c5faec();
  func_0x000107c61170();
  func_0x000100b9a7ec();
  if (plVar10 == (long *)*plVar9 && lVar21 == plVar9[1]) {
    func_0x000107c6142c(lVar21);
  }
  else {
    func_0x000107c605b8(plVar10,lVar21,(long *)*plVar9,plVar9[1],0);
    func_0x000107c6142c(lVar21);
    if (((ulong)plVar10 & 1) == 0) goto LAB_1010e1f14;
  }
  lVar21 = _DAT_112ff4f58;
  func_0x000107c61428(param_7 + _DAT_112ff4f58,auStack_78,0,0);
  uVar6 = param_7 + lVar21;
  func_0x000107c61618();
  if (uVar6 != 0) {
    uVar8 = uVar6;
    func_0x000107c3da60();
    func_0x000107c61180();
    uVar11 = uVar8;
    func_0x000107c49bc8();
    func_0x000107c61170(uVar8);
    if ((uVar11 & 1) != 0) {
      uVar8 = uVar6;
      func_0x000107c3da60();
      func_0x000107c61180();
      uVar11 = uVar8;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      if (uVar11 != 0) {
        uVar8 = uVar11;
        func_0x000107c499e8();
        if ((uVar8 & 1) != 0) {
          lVar21 = param_7 + lVar21;
          func_0x000107c61618();
          if (lVar21 == 0) {
            func_0x000107c61170(param_7);
            func_0x000107c61170(param_4);
            func_0x000107c61170(param_3);
          }
          else {
            lVar12 = lVar21;
            func_0x000107c3da64();
            func_0x000107c61180();
            func_0x000107c61170(lVar21);
            if (lVar12 != 0) {
              lVar21 = param_5;
              func_0x000107c5b4b0();
              func_0x000107c61180();
              if (lVar21 == 0) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x1010e269c);
                (*pcVar5)();
              }
              func_0x0001000285a8(0x112d5cc88,&UNK_10d923740);
              lVar13 = lVar21;
              func_0x0001000bda74();
              func_0x000107c61170(lVar21);
              puVar14 = &UNK_1103832d0;
              func_0x000107c613fc(&UNK_1103832d0,0x28,7);
              *(long *)(puVar14 + 0x10) = lVar13;
              *(undefined8 *)(puVar14 + 0x18) = param_4;
              *(long *)(puVar14 + 0x20) = lVar12;
              func_0x0001000285a8(0x112d5cc90,&UNK_10d9237d0);
              func_0x000107c613fc();
              func_0x000107c6157c(lVar13);
              func_0x000107c61174();
              func_0x000107c61174();
              pcVar5 = FUN_1010e276c;
              func_0x0001000bdd8c(FUN_1010e276c,puVar14);
              puVar14 = &UNK_1103832f8;
              func_0x000107c613fc(&UNK_1103832f8,0x30,7);
              *(long *)(puVar14 + 0x10) = lVar13;
              *(undefined8 *)(puVar14 + 0x18) = param_4;
              *(code **)(puVar14 + 0x20) = pcVar5;
              *(long *)(puVar14 + 0x28) = lVar12;
              func_0x0001000285a8(0x112d4adb8,&UNK_10d923750);
              func_0x000107c613fc();
              func_0x000107c6157c(lVar13);
              func_0x000107c61174();
              func_0x000107c61174();
              func_0x000107c6157c(pcVar5);
              pcVar15 = FUN_1010e285c;
              func_0x0001000bdd8c(FUN_1010e285c,puVar14);
              uVar7 = 0x112d4adc0;
              func_0x0001000285a8(0x112d4adc0,&UNK_10d911470);
              uVar16 = 0x1010e2868;
              func_0x0001000cb480(0x1010e2868,0,uVar7);
              uVar7 = uVar16;
              func_0x0001003a5b88();
              func_0x000107c61574(uVar16);
              puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
              func_0x000100403514(0,6,0);
              lVar21 = 0;
              do {
                uVar19 = 0x7061635f65646968;
                bVar2 = *(byte *)(lVar21 + 0x112d5ccc0);
                uVar16 = 0xec0000006e6f6974;
                if (bVar2 != 4) {
                  uVar19 = 0xd000000000000011;
                  uVar16 = 0x800000010ef25c90;
                }
                uVar18 = 0x6e6f6974706163;
                if (bVar2 != 3) {
                  uVar18 = uVar19;
                }
                uVar19 = 0xe700000000000000;
                if (bVar2 != 3) {
                  uVar19 = uVar16;
                }
                uVar16 = 0xee006e6f69746e65;
                uVar3 = 0x6d5f65766f6d6572;
                if (bVar2 != 1) {
                  uVar16 = 0x800000010ef25c60;
                  uVar3 = 0xd000000000000010;
                }
                uVar1 = 0xef72656b63697473;
                uVar4 = 0x5f6e6f69746e656d;
                if (bVar2 != 0) {
                  uVar1 = uVar16;
                  uVar4 = uVar3;
                }
                if (bVar2 < 3) {
                  uVar19 = uVar1;
                  uVar18 = uVar4;
                }
                uVar8 = *(ulong *)(puVar14 + 0x10);
                if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar8) {
                  func_0x000100403514(1 < *(ulong *)(puVar14 + 0x18),uVar8 + 1,1);
                }
                lVar21 = lVar21 + 1;
                *(ulong *)(puVar14 + 0x10) = uVar8 + 1;
                *(undefined8 *)(puVar14 + uVar8 * 0x10 + 0x20) = uVar18;
                *(undefined8 *)(puVar14 + uVar8 * 0x10 + 0x28) = uVar19;
              } while (lVar21 != 6);
              puVar17 = puVar14;
              func_0x000100403a6c(puVar14);
              func_0x000107c61574(puVar14);
              lVar21 = lRam0000000112d5c9e8;
              func_0x000107c61174(uVar7);
              if (lVar21 != -1) {
                func_0x000107c61568(0x112d5c9e8,FUN_1010de3a4);
              }
              uVar16 = uRam00000001137ff1f8;
              puVar14 = PTR_PTR_1126b0260;
              func_0x000107c610f8(PTR_PTR_1126b0260);
              uVar18 = 0;
              func_0x0001044e4d64(0);
              uVar19 = uVar18;
              FUN_100f06a9c();
              func_0x000107c5fe08(uVar16,uVar18,uVar19);
              puVar20 = puVar17;
              func_0x000107c5fe08(puVar17,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
              func_0x000107c6142c(puVar17);
              func_0x000107c48360(puVar14);
              func_0x000107c61170(uVar7);
              func_0x000107c61170(uVar16);
              func_0x000107c61170(puVar20);
              uVar16 = param_1;
              func_0x000107c4e9e4(param_1);
              func_0x000107c61180();
              func_0x000107c4fba8();
              func_0x000107c61170(uVar6);
              func_0x000107c615e8(uVar11);
              func_0x000107c61170(lVar12);
              func_0x000107c61574(lVar13);
              func_0x000107c61574(pcVar5);
              func_0x000107c61574(pcVar15);
              func_0x000107c61170(uVar7);
              func_0x000107c61170(puVar14);
              func_0x000107c61170(uVar16);
              func_0x000107c61170(param_3);
              func_0x000107c61170(param_7);
              func_0x000107c61170(param_1);
              func_0x000107c61170(param_2);
              func_0x000107c61170(param_4);
              func_0x000107c61170(param_5);
              func_0x000107c61170(param_6);
              goto LAB_1010e2460;
            }
            func_0x000107c61170(param_4);
            func_0x000107c61170(param_3);
            func_0x000107c61170(param_7);
          }
          func_0x000107c615e8(uVar11);
          func_0x000107c61170(param_1);
          func_0x000107c61170(param_2);
          func_0x000107c61170(param_5);
          func_0x000107c61170(param_6);
          func_0x000107c61170(param_8);
          goto LAB_1010e1f50;
        }
        func_0x000107c61170(uVar6);
        func_0x000107c615e8(uVar11);
        goto LAB_1010e2428;
      }
    }
    func_0x000107c61170(uVar6);
  }
LAB_1010e2428:
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
LAB_1010e2460:
  func_0x000107c61170(param_8);
  return unaff_x20;
}



/* Entry: 1010e269c; end: 1010e276b;  */

/* WARNING: Possible PIC construction at 0x0001010e2710: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010e2714) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010e269c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + _DAT_112fcab58);
  puVar1 = &UNK_110383360;
  func_0x000107c613fc(&UNK_110383360,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x0001000285a8(0x112d5cd70,&UNK_10d9237c0);
  func_0x000107c613fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar2);
  return;
}



/* Entry: 1010e276c; end: 1010e2777;  */

/* WARNING: Possible PIC construction at 0x0001010e2710: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010e2714) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010e276c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_112fcab58);
  puVar1 = &UNK_110383360;
  func_0x000107c613fc(&UNK_110383360,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  func_0x0001000285a8(0x112d5cd70,&UNK_10d9237c0);
  func_0x000107c613fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar3);
  return;
}



/* Entry: 1010e2778; end: 1010e285b;  */

/* WARNING: Possible PIC construction at 0x0001010e27f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010e283c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010e27f8) */
/* WARNING: Removing unreachable block (ram,0x0001010e2840) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010e2778(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + _DAT_112fcab48);
  puVar1 = &UNK_110383338;
  func_0x000107c613fc(&UNK_110383338,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x0001000285a8(0x112d5cd70,&UNK_10d9237c0);
  func_0x000107c613fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar2);
  return;
}



/* Entry: 1010e285c; end: 1010e288f;  */

/* WARNING: Possible PIC construction at 0x0001010e27f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010e283c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010e27f8) */
/* WARNING: Removing unreachable block (ram,0x0001010e2840) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010e285c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_112fcab48);
  puVar2 = &UNK_110383338;
  func_0x000107c613fc(&UNK_110383338,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  func_0x0001000285a8(0x112d5cd70,&UNK_10d9237c0);
  func_0x000107c613fc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar3);
  return;
}



/* Entry: 1010e2890; end: 1010e28f7;  */

void FUN_1010e2890(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1010e28f8();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1010e28f8; end: 1010e29ff;  */

undefined *
FUN_1010e28f8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1010e2a00);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar5 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar5) {
    uVar4 = uVar5;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar4 != 0) {
    func_0x0001000285a8(param_5,param_6);
    func_0x000107c613fc();
    puVar3 = param_5;
    func_0x000107c610a4();
    puVar6 = puVar3 + -1;
    if (0x1f < (long)puVar3) {
      puVar6 = puVar3 + -0x20;
    }
    *(ulong *)(param_5 + 0x10) = uVar5;
    *(long *)(param_5 + 0x18) = ((long)puVar6 >> 5) << 1;
    puVar6 = param_5;
  }
  puVar3 = puVar6 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar3,puVar1,uVar5,param_7);
  }
  else {
    if (puVar6 != param_4 || puVar1 + uVar5 * 0x20 <= puVar3) {
      func_0x000107c610b8(puVar3,puVar1,uVar5 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar6;
}



/* Entry: 1010e2a00; end: 1010e2a8f;  */

void FUN_1010e2a00(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1010e2a90; end: 1010e2abf;  */

void FUN_1010e2a90(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 1010e2ac0; end: 1010e2ac3;  */

void FUN_1010e2ac0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 1010e2ac4; end: 1010e2acf; -[SCLensPreviewConfigurationApiRequestHandlerEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010e2ac4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5cd78;
  func_0x000107c61428(param_1 + _DAT_112d5cd78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010e2ad0; end: 1010e2adb; -[SCLensPreviewConfigurationApiRequestHandlerEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010e2ad0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5cd78;
  func_0x000107c61428(param_1 + _DAT_112d5cd78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010e2adc; end: 1010e2ae7; -[SCLensPreviewConfigurationApiRequestHandlerEntryPoint cameraUIScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010e2adc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d5cd80;
  func_0x000107c61428(param_1 + _DAT_112d5cd80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010e2ae8; end: 1010e2af3; -[SCLensPreviewConfigurationApiRequestHandlerEntryPoint setCameraUIScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010e2ae8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d5cd80;
  func_0x000107c61428(param_1 + _DAT_112d5cd80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}


