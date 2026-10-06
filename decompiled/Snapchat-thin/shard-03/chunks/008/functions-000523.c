/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102ccfe84; end: 102ccfecf;  */

void FUN_102ccfe84(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  lVar2 = param_2[2];
  func_0x0001002ed07c(0);
  uVar1 = (ulong)((uint)(lVar2 != 1) & (uint)uVar3);
  func_0x000107c6010c();
  *param_1 = uVar1;
  return;
}



/* Entry: 102ccfed0; end: 102ccfedb; -[SCOperaPauseController shouldShowOverlayChangedObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ccfed0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  pcVar3 = FUN_102ccff78;
  uVar1 = param_1;
  FUN_102ccfdd4();
  func_0x000107c61174(param_1);
  func_0x0001000c2068(uVar1);
  uVar2 = 0;
  func_0x0001002ed07c(0);
  func_0x0001000bfde0(FUN_102ccff78,0,uVar2);
  func_0x000107c61574(uVar1);
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
  func_0x000107c61574(pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102ccfedc; end: 102ccff77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102ccfedc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  FUN_102ccfdd4();
  func_0x000107c61174(param_1);
  func_0x0001000c2068(uVar1);
  uVar2 = 0;
  func_0x0001002ed07c(0);
  func_0x0001000bfde0(param_3,0,uVar2);
  func_0x000107c61574(uVar1);
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102ccff78; end: 102ccffc3;  */

void FUN_102ccff78(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if (param_2[2] != 1) {
    uVar1 = (uint)((ulong)*param_2 >> 8) & 1;
  }
  uVar3 = (ulong)uVar1;
  uVar2 = 0;
  func_0x0001002ed07c(0);
  func_0x000107c6010c(uVar3,uVar2);
  *param_1 = uVar3;
  return;
}



/* Entry: 102ccffc4; end: 102cd0033; -[SCOperaPauseController isPaused] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102ccffc4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102ccefc0();
  func_0x000107c61170(param_1);
  if (param_3 == 1) {
    uVar1 = 0;
  }
  else {
    FUN_102cd0034(uVar1,param_2,param_3);
  }
  return (uint)uVar1 & 1;
}



/* Entry: 102cd0034; end: 102cd0047;  */

void FUN_102cd0034(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102cd0048; end: 102cd00bb; -[SCOperaPauseController shouldShowOverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_102cd0048(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102ccefc0();
  func_0x000107c61170(param_1);
  if (param_3 == 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1 >> 8 & 1;
    FUN_102cd0034(uVar1,param_2,param_3);
  }
  return uVar2;
}



/* Entry: 102cd00bc; end: 102cd01b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd00bc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 ***pppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  undefined8 **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar7 = *(long *)(unaff_x20 + _DAT_112f0ae50);
  func_0x000107c61428(lVar7 + 0x10,&ppuStack_58,0x21,0);
  func_0x000107c61434(param_3);
  uVar1 = *(undefined8 *)(lVar7 + 0x10);
  func_0x000107c61558(uVar1);
  uVar6 = *(undefined8 *)(lVar7 + 0x10);
  *(undefined8 *)(lVar7 + 0x10) = 0x8000000000000000;
  uVar5 = 0x101;
  if ((param_1 & 1) == 0) {
    uVar5 = 1;
  }
  uVar3 = 0;
  uVar4 = 0;
  FUN_102cd0bd4(uVar5,0,0,param_2,param_3,uVar1);
  func_0x000107c6142c(param_3);
  *(undefined8 *)(lVar7 + 0x10) = uVar6;
  pppuVar2 = &ppuStack_58;
  func_0x000107c614a8();
  FUN_102ccefc0();
  ppuStack_58 = pppuVar2;
  uStack_50 = uVar3;
  uStack_48 = uVar4;
  func_0x0001002a64a8(&ppuStack_58);
  FUN_102cd0034(pppuVar2,uVar3,uVar4);
  return;
}



/* Entry: 102cd01b4; end: 102cd0213; -[SCOperaPauseController pauseWithOverlay:reason:] */

void FUN_102cd01b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_102cd00bc(param_3,param_4,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102cd0214; end: 102cd035f; -[SCOperaPauseController pauseWithOverlay:reason:caller:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd0214(long param_1,undefined8 param_2,int param_3,undefined8 param_4,long param_5)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 **ppuStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  func_0x000107c5faec(param_4);
  if (param_5 == 0) {
    param_5 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    func_0x000107c5faec();
  }
  lVar6 = *(long *)(param_1 + _DAT_112f0ae50);
  func_0x000107c61428(lVar6 + 0x10,&ppuStack_68,0x21,0);
  func_0x000107c61434(uVar2);
  uVar7 = *(undefined8 *)(lVar6 + 0x10);
  func_0x000107c61174(param_1);
  func_0x000107c61558(uVar7);
  uVar5 = *(undefined8 *)(lVar6 + 0x10);
  *(undefined8 *)(lVar6 + 0x10) = 0x8000000000000000;
  uVar4 = 0x101;
  if (param_3 == 0) {
    uVar4 = 1;
  }
  uVar3 = uVar2;
  FUN_102cd0bd4(uVar4,param_5,uVar2,param_4,param_2,uVar7);
  *(undefined8 *)(lVar6 + 0x10) = uVar5;
  pppuVar1 = &ppuStack_68;
  func_0x000107c614a8();
  FUN_102ccefc0();
  ppuStack_68 = pppuVar1;
  lStack_60 = param_5;
  uStack_58 = uVar3;
  func_0x0001002a64a8(&ppuStack_68);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar2);
  FUN_102cd0034(pppuVar1,param_5,uVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102cd0360; end: 102cd0407;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102cd0360(long param_1,ulong param_2)

{
  undefined1 uVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112f0ae50);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0x20,0);
  lVar2 = *(long *)(lVar2 + 0x10);
  if (*(long *)(lVar2 + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c61434(lVar2);
    func_0x000100029284();
    if ((param_2 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined1 *)(*(long *)(lVar2 + 0x38) + param_1 * 0x18);
    }
    func_0x000107c6142c(lVar2);
  }
  func_0x000107c614a8(auStack_48);
  return uVar1;
}



/* Entry: 102cd0408; end: 102cd053f; -[SCOperaPauseController isPausedFor:] */

uint FUN_102cd0408(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_102cd0360(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 102cd0540; end: 102cd05c3; -[SCOperaPauseController callersDescriptionFor:] */

void FUN_102cd0540(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_2;
  func_0x000102cd0470(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c5fadc(param_3,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 102cd05c4; end: 102cd06af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd05c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 ***pppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined8 **ppuStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar6 = *(long *)(unaff_x20 + _DAT_112f0ae50);
  func_0x000107c61428(lVar6 + 0x10,&ppuStack_58,0x21,0);
  func_0x000107c61434(param_2);
  uVar1 = *(undefined8 *)(lVar6 + 0x10);
  func_0x000107c61558(uVar1);
  uVar5 = *(undefined8 *)(lVar6 + 0x10);
  *(undefined8 *)(lVar6 + 0x10) = 0x8000000000000000;
  uVar3 = 0;
  uVar4 = 0;
  FUN_102cd0bd4(0,0,0,param_1,param_2,uVar1);
  func_0x000107c6142c(param_2);
  *(undefined8 *)(lVar6 + 0x10) = uVar5;
  pppuVar2 = &ppuStack_58;
  func_0x000107c614a8();
  FUN_102ccefc0();
  ppuStack_58 = pppuVar2;
  uStack_50 = uVar3;
  uStack_48 = uVar4;
  func_0x0001002a64a8(&ppuStack_58);
  FUN_102cd0034(pppuVar2,uVar3,uVar4);
  return;
}



/* Entry: 102cd06b0; end: 102cd070b; -[SCOperaPauseController resumeWithReason:] */

void FUN_102cd06b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_102cd05c4(param_3,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102cd070c; end: 102cd07d3; -[SCOperaPauseController addParentPauseController:] */

/* WARNING: Possible PIC construction at 0x000102cd07b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cd07b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd070c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_1;
  FUN_102ccefc0();
  uVar2 = uVar1;
  FUN_102ccfdd4();
  func_0x0001000c2068();
  func_0x000102ccf330(uVar1,param_2,param_3,uVar2,0x746e65726170,0xe600000000000000);
  func_0x000107c61574(uVar2);
  FUN_102cd0034(uVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cd07d4; end: 102cd0807; -[SCOperaPauseController reset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd07d4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102ccf770();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cd0808; end: 102cd085f; -[SCOperaPauseController description] */

void FUN_102cd0808(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102cd0860();
  func_0x000107c61170(param_1);
  func_0x000107c5fadc(uVar1,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102cd0860; end: 102cd0a57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102cd0860(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar7 = 0x65736c6166;
  FUN_102ccf8e4();
  uStack_70 = 10;
  uStack_68 = 0xe100000000000000;
  uStack_80 = 0x90a;
  uStack_78 = 0xe200000000000000;
  uStack_60 = param_1;
  uStack_58 = param_2;
  func_0x000100e8b654();
  puVar3 = &uStack_70;
  puVar5 = &uStack_80;
  lVar6 = 0;
  func_0x000107c601fc(puVar3,puVar5,0,0,0,1,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                      PTR___sSSN_11034da80,param_1,param_1,param_1);
  func_0x000107c6142c(param_2);
  uStack_60 = 0;
  uStack_58 = 0xe000000000000000;
  func_0x000107c602fc(0x51);
  uVar4 = 0xd000000000000021;
  func_0x000107c5fb78(0xd000000000000021,0x800000010f1082c0);
  FUN_102ccefc0();
  if ((lVar6 == 1) || (FUN_102cd0034(), (uVar4 & 1) == 0)) {
    uVar9 = 0xe500000000000000;
    uVar8 = uVar7;
  }
  else {
    uVar9 = 0xe400000000000000;
    uVar8 = 0x65757274;
  }
  func_0x000107c5fb78(uVar8,uVar9);
  func_0x000107c6142c(uVar9);
  uVar2 = 0;
  func_0x000107c5fb78(0xd000000000000016,0x800000010f1082f0);
  FUN_102ccefc0();
  if ((lVar6 == 1) || (FUN_102cd0034(), (uVar2 >> 8 & 1) == 0)) {
    uVar8 = 0xe500000000000000;
  }
  else {
    uVar8 = 0xe400000000000000;
    uVar7 = 0x65757274;
  }
  func_0x000107c5fb78(uVar7,uVar8);
  func_0x000107c6142c(uVar8);
  func_0x000107c5fb78(0xd000000000000012,0x800000010f108310);
  func_0x000107c5fb78(puVar3,puVar5);
  func_0x000107c6142c(puVar5);
  func_0x000107c5fb78(0x290a,0xe200000000000000);
  auVar1._8_8_ = uStack_58;
  auVar1._0_8_ = uStack_60;
  return auVar1;
}



/* Entry: 102cd0a58; end: 102cd0b2f; -[SCOperaPauseController init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd0a58(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112f0ae50;
  lVar3 = 0x112f0ad98;
  func_0x0001000285a8(0x112f0ad98,&UNK_10db3df30);
  func_0x000107c613fc();
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102ccec38();
  *(undefined **)(lVar3 + 0x10) = puVar4;
  FUN_102cced58();
  *(undefined **)(lVar3 + 0x18) = puVar5;
  uVar6 = 0x112f0ada0;
  func_0x0001000285a8(0x112f0ada0,&UNK_10db3e000);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x30) = uVar6;
  *(code **)(lVar3 + 0x20) = FUN_102ccfd64;
  *(long *)(param_1 + lVar1) = lVar3;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102cd0b30; end: 102cd0b63;  */

void FUN_102cd0b30(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102cd0b64; end: 102cd0bd3; -[SCOperaPauseController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd0b64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f0ae50));
  return;
}



/* Entry: 102cd0bd4; end: 102cd0d23;  */

void FUN_102cd0bd4(undefined4 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5,uint param_6)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  lVar2 = param_4;
  uVar4 = param_5;
  func_0x000100029284();
  lVar6 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar5 = lVar6 + uVar8;
  if (SCARRY8(lVar6,uVar8)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102cd0cd0);
    (*pcVar1)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar5) {
    FUN_102cd0fb4(lVar5,param_6 & 1);
    uVar8 = param_5;
    func_0x000100029284();
    lVar2 = param_4;
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102cd0c80);
      (*pcVar1)();
    }
  }
  else if ((param_6 & 1) == 0) {
    FUN_102cd2584();
    lVar5 = *unaff_x20;
    goto joined_r0x000102cd0ce4;
  }
  lVar5 = *unaff_x20;
joined_r0x000102cd0ce4:
  if ((uVar4 & 1) != 0) {
    pbVar7 = (byte *)(*(long *)(lVar5 + 0x38) + lVar2 * 0x18);
    uVar3 = *(undefined8 *)(pbVar7 + 0x10);
    *pbVar7 = (byte)param_1 & 1;
    pbVar7[1] = (byte)((uint)param_1 >> 8) & 1;
    *(undefined8 *)(pbVar7 + 8) = param_2;
    *(undefined8 *)(pbVar7 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
    return;
  }
  func_0x000102cd0b74();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_5);
  return;
}



/* Entry: 102cd0d24; end: 102cd0e73;  */

void FUN_102cd0d24(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102cd0dfc);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    func_0x000102cd1280(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102cd0dc4);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000102cd2718();
    lVar6 = *unaff_x20;
    goto joined_r0x000102cd0e10;
  }
  lVar6 = *unaff_x20;
joined_r0x000102cd0e10:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102cd0e74);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 102cd0e74; end: 102cd0fb3;  */

void FUN_102cd0e74(undefined4 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102cd0f3c);
    (*pcVar2)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar6) {
    FUN_102cd151c(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar7 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar7 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102cd0f0c);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x000102cd2888();
    lVar6 = *unaff_x20;
    goto joined_r0x000102cd0f50;
  }
  lVar6 = *unaff_x20;
joined_r0x000102cd0f50:
  if ((uVar4 & 1) != 0) {
    *(undefined4 *)(*(long *)(lVar6 + 0x38) + uVar3 * 4) = param_1;
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined4 *)(*(long *)(lVar6 + 0x38) + uVar3 * 4) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102cd0fb4);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 102cd0fb4; end: 102cd151b;  */

void FUN_102cd0fb4(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  bool bVar8;
  code *pcVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined1 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *unaff_x20;
  ulong uVar19;
  ulong *puVar20;
  long lVar21;
  long lVar22;
  undefined1 auStack_a8 [72];
  
  lVar21 = *unaff_x20;
  lVar1 = *(long *)(lVar21 + 0x18);
  if (*(long *)(lVar21 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar10 = 0x112f0ae48;
  func_0x0001000285a8(0x112f0ae48,&UNK_10db3dfe0);
  lVar11 = lVar21;
  func_0x000107c60490(lVar21,lVar1,param_2,uVar10);
  if (*(long *)(lVar21 + 0x10) == 0) {
LAB_102cd124c:
    func_0x000107c61574(lVar21);
    *unaff_x20 = lVar11;
    return;
  }
  puVar20 = (ulong *)(lVar21 + 0x40);
  uVar16 = 1L << ((ulong)*(byte *)(lVar21 + 0x20) & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if ((*(byte *)(lVar21 + 0x20) & 0x3f) < 6) {
    uVar19 = ~(-1L << (uVar16 & 0x3f));
  }
  uVar19 = uVar19 & *puVar20;
  lVar1 = lVar11 + 0x40;
  lVar13 = 0;
  do {
    if (uVar19 == 0) {
      do {
        lVar22 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x102cd127c);
          (*pcVar9)();
        }
        if ((long)(uVar16 + 0x3f >> 6) <= lVar22) {
          if ((param_2 & 1) != 0) {
            uVar19 = 1L << ((ulong)*(byte *)(lVar21 + 0x20) & 0x3f);
            if ((*(byte *)(lVar21 + 0x20) & 0x3f) < 6) {
              *puVar20 = -1L << (uVar19 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar20,uVar19 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar21 + 0x10) = 0;
          }
          goto LAB_102cd124c;
        }
        uVar19 = puVar20[lVar22];
        lVar13 = lVar13 + 1;
      } while (uVar19 == 0);
      uVar12 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar19 = uVar19 - 1 & uVar19;
    }
    else {
      uVar12 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar19 = uVar19 - 1 & uVar19;
      lVar22 = lVar13;
    }
    uVar12 = LZCOUNT(uVar12) | lVar22 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar21 + 0x30) + uVar12 * 0x10);
    uVar10 = *puVar2;
    uVar4 = puVar2[1];
    puVar14 = (undefined1 *)(*(long *)(lVar21 + 0x38) + uVar12 * 0x18);
    uVar6 = *puVar14;
    uVar7 = puVar14[1];
    uVar3 = *(undefined8 *)(puVar14 + 8);
    uVar5 = *(undefined8 *)(puVar14 + 0x10);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar5);
      func_0x000107c61434(uVar4);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar11 + 0x28));
    puVar14 = auStack_a8;
    func_0x000107c5fb58(puVar14,uVar10,uVar4);
    func_0x000107c606a8();
    uVar18 = -1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar17 = (ulong)puVar14 & (uVar18 ^ 0xffffffffffffffff);
    uVar15 = uVar17 >> 6;
    uVar12 = -1L << (uVar17 & 0x3f) & (*(ulong *)(lVar1 + uVar15 * 8) ^ 0xffffffffffffffff);
    if (uVar12 == 0) {
      bVar8 = false;
      uVar12 = 0x3f - uVar18 >> 6;
      do {
        uVar17 = uVar15 + 1;
        if ((uVar17 == uVar12) && (bVar8)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x102cd1280);
          (*pcVar9)();
        }
        uVar15 = 0;
        if (uVar17 != uVar12) {
          uVar15 = uVar17;
        }
        bVar8 = (bool)(uVar17 == uVar12 | bVar8);
        uVar17 = *(ulong *)(lVar1 + uVar15 * 8);
      } while (uVar17 == 0xffffffffffffffff);
      uVar17 = ~uVar17;
      uVar12 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar15 << 6;
    }
    else {
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar17 & 0x7fffffffffffffc0;
    }
    uVar15 = uVar12 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar15) = 1L << (uVar12 & 0x3f) | *(ulong *)(lVar1 + uVar15);
    puVar2 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar12 * 0x10);
    *puVar2 = uVar10;
    puVar2[1] = uVar4;
    puVar14 = (undefined1 *)(*(long *)(lVar11 + 0x38) + uVar12 * 0x18);
    *puVar14 = uVar6;
    puVar14[1] = uVar7;
    *(undefined8 *)(puVar14 + 8) = uVar3;
    *(undefined8 *)(puVar14 + 0x10) = uVar5;
    *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + 1;
    lVar13 = lVar22;
  } while( true );
}



/* Entry: 102cd151c; end: 102cd17b3;  */

void FUN_102cd151c(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  bool bVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  long lVar15;
  ulong uVar16;
  ulong *puVar17;
  long lVar18;
  undefined4 uVar19;
  undefined1 auStack_b8 [72];
  
  lVar15 = *unaff_x20;
  lVar1 = *(long *)(lVar15 + 0x18);
  if (*(long *)(lVar15 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112f0ae38;
  func_0x0001000285a8(0x112f0ae38,&UNK_10db3dfd0);
  lVar7 = lVar15;
  func_0x000107c60490(lVar15,lVar1,param_2,uVar6);
  if (*(long *)(lVar15 + 0x10) == 0) {
LAB_102cd177c:
    func_0x000107c61574(lVar15);
    *unaff_x20 = lVar7;
    return;
  }
  puVar17 = (ulong *)(lVar15 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar16 = uVar16 & *puVar17;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar18 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102cd17b0);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1) != 0) {
            uVar16 = 1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
            if ((*(byte *)(lVar15 + 0x20) & 0x3f) < 6) {
              *puVar17 = -1L << (uVar16 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar17,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar15 + 0x10) = 0;
          }
          goto LAB_102cd177c;
        }
        uVar16 = puVar17[lVar18];
        lVar10 = lVar10 + 1;
      } while (uVar16 == 0);
      uVar9 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar9 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar18 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar18 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar19 = *(undefined4 *)(*(long *)(lVar15 + 0x38) + uVar9 * 4);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
    }
    func_0x000107c6068c(auStack_b8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_b8;
    func_0x000107c5fb58(puVar8,uVar6,uVar3);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x102cd17b4);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar4 = (bool)(uVar13 == uVar9 | bVar4);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar6;
    puVar2[1] = uVar3;
    *(undefined4 *)(*(long *)(lVar7 + 0x38) + uVar9 * 4) = uVar19;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar18;
  } while( true );
}



/* Entry: 102cd17b4; end: 102cd1833;  */

undefined * FUN_102cd17b4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112d64d38;
    func_0x0001000285a8(0x112d64d38,&UNK_10d929e40);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x11;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(long *)(puVar2 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  return puVar2;
}



/* Entry: 102cd1834; end: 102cd1947;  */

undefined *
FUN_102cd1834(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102cd1948);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,PTR___sSSN_11034da80);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 102cd1948; end: 102cd1a97;  */

long FUN_102cd1948(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  
  puVar7 = (ulong *)(param_4 + 0x38);
  uVar8 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if (-uVar8 < 0x40) {
    uVar9 = ~(-1L << (-uVar8 & 0x3f));
  }
  uVar9 = uVar9 & *puVar7;
  if (param_2 == (undefined8 *)0x0) {
    lVar11 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar11 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102cd1a98);
      (*pcVar3)();
    }
    lVar6 = 0;
    lVar10 = 0;
    uVar12 = 0x3f - uVar8 >> 6;
    lVar11 = lVar6;
    while( true ) {
      while (uVar9 == 0) {
        bVar4 = SCARRY8(lVar11,1);
        lVar11 = lVar11 + 1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102cd1a94);
          (*pcVar3)();
        }
        if ((long)uVar12 <= lVar11) {
          uVar9 = 0;
          if ((long)uVar12 <= lVar6 + 1) {
            uVar12 = lVar6 + 1;
          }
          lVar11 = uVar12 - 1;
          param_3 = lVar10;
          goto LAB_102cd1a58;
        }
        uVar9 = puVar7[lVar11];
      }
      lVar10 = lVar10 + 1;
      uVar2 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 - 1 & uVar9;
      puVar1 = (undefined8 *)
               (*(long *)(param_4 + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 0x10 +
               lVar11 * 0x400);
      uVar5 = puVar1[1];
      uVar13 = *puVar1;
      param_2[1] = puVar1[1];
      *param_2 = uVar13;
      if (lVar10 == param_3) break;
      func_0x000107c61434(uVar5);
      lVar6 = lVar11;
      param_2 = param_2 + 2;
    }
    func_0x000107c61434(uVar5);
  }
LAB_102cd1a58:
  *param_1 = param_4;
  param_1[1] = (long)puVar7;
  param_1[2] = ~uVar8;
  param_1[3] = lVar11;
  param_1[4] = uVar9;
  return param_3;
}



/* Entry: 102cd1a98; end: 102cd1ab7;  */

void FUN_102cd1a98(void)

{
  func_0x000107c61168(&PTR_PTR_11289e200);
  return;
}



/* Entry: 102cd1ab8; end: 102cd1abf;  */

void FUN_102cd1ab8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 102cd1ac0; end: 102cd1b83;  */

undefined2 * FUN_102cd1ac0(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 102cd1b84; end: 102cd1c83;  */

int FUN_102cd1b84(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102cd1c84; end: 102cd1eff;  */

undefined1  [16]
FUN_102cd1c84(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
             undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined1 auVar19 [16];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  lVar4 = 0x112d64d38;
  func_0x0001000285a8(0x112d64d38,&UNK_10d929e40);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 4;
  *(undefined8 *)(lVar4 + 0x10) = 2;
  if ((param_1 & 1) == 0) {
    param_2 = 0;
    param_3 = 0;
  }
  else {
    func_0x000107c61434(param_3);
  }
  *(undefined8 *)(lVar4 + 0x20) = param_2;
  *(undefined8 *)(lVar4 + 0x28) = param_3;
  if ((param_4 & 1) == 0) {
    param_5 = 0;
    param_6 = 0;
  }
  else {
    func_0x000107c61434(param_6);
  }
  *(undefined8 *)(lVar4 + 0x30) = param_5;
  *(undefined8 *)(lVar4 + 0x38) = param_6;
  lVar5 = lVar4;
  func_0x0001011bfa94();
  func_0x000107c61588(lVar4);
  uVar18 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  func_0x000107c61408((undefined8 *)(lVar4 + 0x20),2,uVar18);
  ppuVar14 = *(undefined ***)(lVar5 + 0x10);
  if (ppuVar14 == (undefined **)0x0) {
    func_0x000107c6142c(lVar5);
    ppuVar6 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    ppuVar6 = ppuVar14;
    FUN_102cd17b4(ppuVar14,0);
    ppuVar7 = &puStack_c8;
    FUN_102cd1948(ppuVar7,ppuVar6 + 4,ppuVar14,lVar5);
    FUN_102cd1f00(puStack_c8,uStack_c0,uStack_b8,uStack_b0,uStack_a8);
    if (ppuVar7 != ppuVar14) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102cd1da8);
      (*pcVar3)();
    }
  }
  puVar2 = PTR__swift_bridgeObjectRelease_11034f258;
  puVar16 = (undefined *)0x0;
  puVar17 = ppuVar6[2];
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    lVar4 = (long)puVar16 * 0x10 + 0x28;
    do {
      lVar5 = lVar4;
      if (puVar17 == puVar16) {
        func_0x000107c61574(ppuVar6);
        uVar18 = 0x112d38270;
        puStack_c8 = puVar10;
        func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
        uVar11 = uVar18;
        func_0x00010011d734();
        uVar12 = 0x3a;
        uVar13 = 0xe100000000000000;
        func_0x000107c5fa80(0x3a,0xe100000000000000,uVar18,uVar11);
        func_0x000107c6142c(puVar10);
        auVar19._8_8_ = uVar13;
        auVar19._0_8_ = uVar12;
        return auVar19;
      }
      if (ppuVar6[2] <= puVar16) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102cd1f00);
        (*pcVar3)();
      }
      puVar16 = puVar16 + 1;
      lVar15 = *(long *)((long)ppuVar6 + lVar5);
      lVar4 = lVar5 + 0x10;
    } while (lVar15 == 0);
    uVar18 = *(undefined8 *)((long)ppuVar6 + lVar5 + -8);
    func_0x000107c61434(lVar15);
    puVar8 = puVar10;
    func_0x000107c61558();
    puVar9 = puVar10;
    if (((ulong)puVar8 & 1) == 0) {
      puVar9 = (undefined *)0x0;
      FUN_102cd1834(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10,puVar2);
    }
    uVar1 = *(ulong *)(puVar9 + 0x10);
    puVar10 = puVar9;
    if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
      puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
      FUN_102cd1834(puVar10,uVar1 + 1,1,puVar9,puVar2);
    }
    *(ulong *)(puVar10 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar10 + uVar1 * 0x10 + 0x20) = uVar18;
    *(long *)(puVar10 + uVar1 * 0x10 + 0x28) = lVar15;
  } while( true );
}



/* Entry: 102cd1f00; end: 102cd1f23;  */

void FUN_102cd1f00(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 102cd1f24; end: 102cd1fbf; -[SCOperaVolumeController volumeChangedObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd1f24(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar1 = param_1;
  FUN_102cd1fc0();
  func_0x000107c61174(param_1);
  func_0x0001000c2068(uVar1);
  uVar2 = 0;
  func_0x0001002ed07c(0);
  pcVar3 = FUN_102cd2028;
  func_0x0001000bfde0(FUN_102cd2028,0,uVar2);
  func_0x000107c61574(uVar1);
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
  func_0x000107c61574(pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102cd1fc0; end: 102cd2027;  */

void FUN_102cd1fc0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puStack_18;
  
  if (puRam0000000112f0aea0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112dec5a0;
  func_0x00010002969c(0x112dec5a0,&UNK_10db3e070);
  puStack_18 = PTR___sSfSQsWP_11034de08;
  puVar2 = PTR___sxSgSQsSQRzlMc_11034f190;
  func_0x000107c61520(PTR___sxSgSQsSQRzlMc_11034f190,uVar1,&puStack_18);
  puRam0000000112f0aea0 = puVar2;
  return;
}



/* Entry: 102cd2028; end: 102cd2077;  */

void FUN_102cd2028(undefined8 *param_1,float *param_2)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  float fVar4;
  
  fVar4 = *param_2;
  cVar1 = *(char *)(param_2 + 1);
  uVar2 = 0;
  func_0x0001002ed07c();
  dVar3 = 1.0;
  if (cVar1 != '\x01') {
    dVar3 = (double)fVar4;
  }
  func_0x000107c60108(dVar3);
  *param_1 = uVar2;
  return;
}



/* Entry: 102cd2078; end: 102cd20cb; -[SCOperaVolumeController volume] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_102cd2078(ulong param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102ccf1e4();
  func_0x000107c61170(param_1);
  uVar2 = 0x3f800000;
  if ((uVar1 & 0xff00000000) != 0x100000000) {
    uVar2 = (int)uVar1;
  }
  return uVar2;
}



/* Entry: 102cd20cc; end: 102cd218b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd20cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined4 uStack_58;
  undefined1 uStack_54;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112f0ae98);
  func_0x000107c61428(lVar4 + 0x10,&uStack_58,0x21,0);
  uVar1 = *(undefined8 *)(lVar4 + 0x10);
  func_0x000107c61558(uVar1);
  uVar3 = *(undefined8 *)(lVar4 + 0x10);
  *(undefined8 *)(lVar4 + 0x10) = 0x8000000000000000;
  FUN_102cd0e74(param_1,param_2,param_3,uVar1);
  *(undefined8 *)(lVar4 + 0x10) = uVar3;
  puVar2 = &uStack_58;
  func_0x000107c614a8();
  func_0x000102ccf1e4();
  uStack_58 = SUB84(puVar2,0);
  uStack_54 = (undefined1)((ulong)puVar2 >> 0x20);
  func_0x0001002a64a8(&uStack_58);
  return;
}



/* Entry: 102cd218c; end: 102cd21f7; -[SCOperaVolumeController setVolume:tag:] */

void FUN_102cd218c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_2);
  FUN_102cd20cc(param_1,param_4,param_3);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102cd21f8; end: 102cd22b3; -[SCOperaVolumeController stopVolumeEffectWithTag:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd21f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 uStack_58;
  undefined1 uStack_54;
  
  func_0x000107c5faec(param_3);
  func_0x000107c61428(*(long *)(param_1 + _DAT_112f0ae98) + 0x10,&uStack_58,0x21,0);
  func_0x000107c61174(param_1);
  FUN_102cd24c8(param_3,param_2);
  puVar1 = &uStack_58;
  func_0x000107c614a8();
  func_0x000102ccf1e4();
  uStack_58 = SUB84(puVar1,0);
  uStack_54 = (undefined1)((ulong)puVar1 >> 0x20);
  func_0x0001002a64a8(&uStack_58);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return;
}



/* Entry: 102cd22b4; end: 102cd238b; -[SCOperaVolumeController init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd22b4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112f0ae98;
  lVar3 = 0x112f0ada8;
  func_0x0001000285a8(0x112f0ada8,&UNK_10db3df40);
  func_0x000107c613fc();
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102ccee54();
  *(undefined **)(lVar3 + 0x10) = puVar4;
  FUN_102cced58();
  *(undefined **)(lVar3 + 0x18) = puVar5;
  uVar6 = 0x112f0adb0;
  func_0x0001000285a8(0x112f0adb0,&UNK_10db3e080);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(lVar3 + 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x30) = uVar6;
  *(undefined8 *)(lVar3 + 0x20) = 0x102cd1f10;
  *(long *)(param_1 + lVar1) = lVar3;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102cd238c; end: 102cd23bf;  */

void FUN_102cd238c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102cd23c0; end: 102cd23cf; -[SCOperaVolumeController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd23c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f0ae98));
  return;
}



/* Entry: 102cd23d0; end: 102cd24c7;  */

ulong FUN_102cd23d0(long param_1,ulong param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  byte *pbVar5;
  long *unaff_x20;
  long lVar6;
  
  lVar6 = *unaff_x20;
  func_0x000107c61434(lVar6);
  func_0x000100029284();
  func_0x000107c6142c(lVar6);
  if ((param_2 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    iVar3 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar6 = *unaff_x20;
    if (iVar3 == 0) {
      FUN_102cd2584();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar6 + 0x30) + param_1 * 0x10 + 8));
    pbVar5 = (byte *)(*(long *)(lVar6 + 0x38) + param_1 * 0x18);
    bVar1 = *pbVar5;
    bVar2 = pbVar5[1];
    FUN_102cd29f0(param_1,lVar6);
    *unaff_x20 = lVar6;
    uVar4 = 0x100;
    if (bVar2 == 0) {
      uVar4 = 0;
    }
    uVar4 = uVar4 | bVar1;
  }
  return uVar4;
}



/* Entry: 102cd24c8; end: 102cd2583;  */

ulong FUN_102cd24c8(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar2 = *unaff_x20;
  func_0x000107c61434(lVar2);
  func_0x000100029284();
  func_0x000107c6142c(lVar2);
  if ((param_2 & 1) == 0) {
    uVar3 = 0x100000000;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x000102cd2888();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_1 * 0x10 + 8));
    uVar3 = (ulong)*(uint *)(*(long *)(lVar2 + 0x38) + param_1 * 4);
    func_0x000102cd2bac(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Entry: 102cd2584; end: 102cd29ef;  */

void FUN_102cd2584(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *unaff_x20;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  func_0x0001000285a8(0x112f0ae48,&UNK_10db3dfe0);
  lVar16 = *unaff_x20;
  lVar9 = lVar16;
  func_0x000107c6048c();
  if (*(long *)(lVar16 + 0x10) != 0) {
    lVar1 = lVar16 + 0x40;
    uVar11 = (1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar9 != lVar16 || lVar1 + uVar11 * 8 <= lVar9 + 0x40U) {
      func_0x000107c610b8(lVar9 + 0x40U,lVar1,uVar11 << 3);
    }
    lVar17 = 0;
    *(undefined8 *)(lVar9 + 0x10) = *(undefined8 *)(lVar16 + 0x10);
    uVar12 = 1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
    uVar11 = 0xffffffffffffffff;
    if ((*(byte *)(lVar16 + 0x20) & 0x3f) < 6) {
      uVar11 = ~(-1L << (uVar12 & 0x3f));
    }
    uVar11 = uVar11 & *(ulong *)(lVar16 + 0x40);
    if (uVar11 == 0) goto LAB_102cd2660;
    do {
      uVar13 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      while( true ) {
        uVar13 = LZCOUNT(uVar13) | lVar17 << 6;
        lVar15 = uVar13 * 0x10;
        puVar2 = (undefined8 *)(*(long *)(lVar16 + 0x30) + lVar15);
        uVar5 = puVar2[1];
        lVar14 = uVar13 * 0x18;
        puVar3 = (undefined1 *)(*(long *)(lVar16 + 0x38) + lVar14);
        uVar6 = *puVar3;
        uVar7 = puVar3[1];
        puVar4 = (undefined8 *)(*(long *)(lVar9 + 0x30) + lVar15);
        uVar10 = *(undefined8 *)(puVar3 + 0x10);
        uVar19 = *(undefined8 *)(puVar3 + 0x10);
        uVar18 = *(undefined8 *)(puVar3 + 8);
        *puVar4 = *puVar2;
        puVar4[1] = uVar5;
        puVar3 = (undefined1 *)(*(long *)(lVar9 + 0x38) + lVar14);
        *puVar3 = uVar6;
        puVar3[1] = uVar7;
        *(undefined8 *)(puVar3 + 0x10) = uVar19;
        *(undefined8 *)(puVar3 + 8) = uVar18;
        func_0x000107c61434(uVar10);
        func_0x000107c61434(uVar5);
        if (uVar11 != 0) break;
LAB_102cd2660:
        do {
          lVar14 = lVar17 + 1;
          if (SCARRY8(lVar17,1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x102cd2718);
            (*pcVar8)();
          }
          if ((long)(uVar12 + 0x3f >> 6) <= lVar14) goto LAB_102cd26f0;
          uVar11 = *(ulong *)(lVar1 + lVar14 * 8);
          lVar17 = lVar17 + 1;
        } while (uVar11 == 0);
        uVar13 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
        uVar11 = uVar11 - 1 & uVar11;
        lVar17 = lVar14;
      }
    } while( true );
  }
LAB_102cd26f0:
  func_0x000107c61574(lVar16);
  *unaff_x20 = lVar9;
  return;
}



/* Entry: 102cd29f0; end: 102cd2d5b;  */

void FUN_102cd29f0(ulong param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar4 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar8 = param_1 + 1 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0) {
    uVar4 = ~uVar4;
    uVar9 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar4);
    uVar9 = uVar9 + 1 & uVar4;
    do {
      puVar6 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar8 * 0x10);
      uVar10 = *puVar6;
      uVar11 = puVar6[1];
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      func_0x000107c61434(uVar11);
      puVar3 = auStack_a8;
      func_0x000107c5fb58(puVar3,uVar10,uVar11);
      func_0x000107c606a8();
      func_0x000107c6142c(uVar11);
      uVar5 = (ulong)puVar3 & uVar4;
      if ((long)param_1 < (long)uVar9) {
        if (uVar5 < uVar9) {
LAB_102cd2af0:
          if ((long)param_1 < (long)uVar5) goto LAB_102cd2a78;
        }
        puVar6 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 0x10);
        puVar7 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar8 * 0x10);
        if (((long)param_1 < (long)uVar8) || (puVar7 + 2 <= puVar6 || param_1 != uVar8)) {
          uVar10 = *puVar7;
          puVar6[1] = puVar7[1];
          *puVar6 = uVar10;
        }
        puVar6 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 0x18);
        puVar7 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar8 * 0x18);
        if ((((long)param_1 < (long)uVar8) || (puVar7 + 3 <= puVar6)) || (param_1 != uVar8)) {
          uVar11 = puVar7[1];
          uVar10 = *puVar7;
          puVar6[2] = puVar7[2];
          puVar6[1] = uVar11;
          *puVar6 = uVar10;
          param_1 = uVar8;
        }
      }
      else if (uVar9 <= uVar5) goto LAB_102cd2af0;
LAB_102cd2a78:
      uVar8 = uVar8 + 1 & uVar4;
    } while ((*(ulong *)(lVar1 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0);
  }
  uVar4 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar4) = *(ulong *)(lVar1 + uVar4) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102cd2bac);
  (*pcVar2)();
}



/* Entry: 102cd2d5c; end: 102cd2d7b;  */

void FUN_102cd2d5c(void)

{
  func_0x000107c61168(&PTR_PTR_11289e2b8);
  return;
}



/* Entry: 102cd2d7c; end: 102cd2de7; -[SCOperaPresentedViewControllerMonitor isViewControllerPresentedObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd2d7c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010109e534();
  func_0x000107c61174(param_1);
  func_0x0001000c2068(uVar1);
  uVar2 = uVar1;
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102cd2de8; end: 102cd2ec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102cd2de8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  puVar4 = auStack_60;
  func_0x000107c610f8();
  lVar2 = _DAT_112f0aee0;
  func_0x000107c61614(unaff_x20 + _DAT_112f0aee0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f0aee8) = 0;
  lVar1 = _DAT_112f0aed8;
  uVar3 = 0x112f0aed0;
  func_0x0001000285a8(0x112f0aed0,&UNK_10db3e0b0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  *(undefined8 *)(unaff_x20 + _DAT_112f0aef0) = param_1;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  func_0x000107c61170(param_2);
  return puVar4;
}



/* Entry: 102cd2ec8; end: 102cd2faf; -[SCOperaPresentedViewControllerMonitor initWithViewController:timeInterval:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102cd2ec8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lStack_60;
  long lStack_58;
  
  plVar5 = &lStack_60;
  lVar3 = param_2;
  func_0x000107c614f0();
  lVar2 = _DAT_112f0aee0;
  func_0x000107c61614(param_2 + _DAT_112f0aee0,0);
  *(undefined8 *)(param_2 + _DAT_112f0aee8) = 0;
  lVar1 = _DAT_112f0aed8;
  func_0x0001000285a8(0x112f0aed0,&UNK_10db3e0b0);
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar4 = param_4;
  func_0x0001000c2754();
  *(undefined8 *)(param_2 + lVar1) = uVar4;
  func_0x000107c61604(param_2 + lVar2,param_4);
  *(undefined8 *)(param_2 + _DAT_112f0aef0) = param_1;
  lStack_60 = param_2;
  lStack_58 = lVar3;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  func_0x000107c61170(param_4);
  return (undefined1 *)plVar5;
}



/* Entry: 102cd2fb0; end: 102cd30a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd2fb0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  puVar1 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
  func_0x000107c61168();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0aef0);
  puVar2 = &UNK_1105bf1b0;
  func_0x000107c613fc(&UNK_1105bf1b0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_50 = FUN_102cd30a8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100fef460;
  puStack_58 = &UNK_1105bf1c8;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c61574(puStack_48);
  func_0x000107c51924(uVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0aee8);
  *(undefined **)(unaff_x20 + _DAT_112f0aee8) = puVar1;
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 102cd30a8; end: 102cd30f7;  */

void FUN_102cd30a8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102cd30f8();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102cd30f8; end: 102cd31e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd30f8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uStack_38;
  
  lVar3 = _DAT_112f0aee0;
  lVar1 = unaff_x20 + _DAT_112f0aee0;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4f078();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c61170(lVar2);
      lVar3 = unaff_x20 + lVar3;
      func_0x000107c61618();
      if (lVar3 != 0) {
        lVar1 = lVar3;
        func_0x000107c4f078();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        uVar4 = 0;
        if (lVar1 != 0) {
          lVar3 = lVar1;
          func_0x000107c49aa0();
          func_0x000107c61170(lVar1);
          uVar4 = (ulong)((uint)lVar3 ^ 1);
        }
        goto LAB_102cd3194;
      }
    }
  }
  uVar4 = 0;
LAB_102cd3194:
  func_0x0001002ed07c(0);
  func_0x000107c6010c();
  uStack_38 = uVar4;
  func_0x0001002a64a8(&uStack_38);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 102cd31e4; end: 102cd31ff;  */

void FUN_102cd31e4(long param_1,long param_2)

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



/* Entry: 102cd3200; end: 102cd3227; -[SCOperaPresentedViewControllerMonitor startObserving] */

void FUN_102cd3200(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102cd2fb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cd3228; end: 102cd324f; -[SCOperaPresentedViewControllerMonitor viewControllerWillAppear] */

void FUN_102cd3228(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102cd30f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cd3250; end: 102cd32b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd3250(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = _DAT_112f0aee8;
  uVar2 = 0;
  if (*(long *)(unaff_x20 + _DAT_112f0aee8) != 0) {
    func_0x000107c498f8();
    uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  func_0x000107c61170(uVar2);
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102cd32b8; end: 102cd32db; -[SCOperaPresentedViewControllerMonitor dealloc] */

void FUN_102cd32b8(void)

{
  func_0x000107c61174();
  FUN_102cd3250();
  return;
}



/* Entry: 102cd32dc; end: 102cd3323; -[SCOperaPresentedViewControllerMonitor .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd32dc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f0aee0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0aee8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f0aed8));
  return;
}



/* Entry: 102cd3324; end: 102cd3343;  */

void FUN_102cd3324(void)

{
  func_0x000107c61168(&PTR_PTR_11289e370);
  return;
}



/* Entry: 102cd3344; end: 102cd3347; -[SCOperaPresentedViewControllerMonitor viewControllerDidAppear] */

void FUN_102cd3344(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102cd30f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cd3348; end: 102cd334b; -[SCOperaPresentedViewControllerMonitor checkNow] */

void FUN_102cd3348(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102cd30f8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cd334c; end: 102cd3403; +[SCOperaPageTraits isLongform:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102cd334c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_3 != 0) {
    uVar3 = *(undefined8 *)(param_3 + _DAT_11307abc8);
    puVar1 = PTR_PTR_1126b2340;
    func_0x000107c61168(PTR_PTR_1126b2340);
    func_0x000107c61174(param_3);
    func_0x00010018cc3c(uVar3);
    uVar2 = uVar3;
    func_0x000107c5f9dc();
    func_0x000107c6142c(uVar3);
    func_0x000107c4a00c(puVar1);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_3);
    return puVar1;
  }
  return (undefined *)0x0;
}



/* Entry: 102cd3404; end: 102cd343f; -[SCOperaPageTraits init] */

void FUN_102cd3404(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102cd3440; end: 102cd3493;  */

void FUN_102cd3440(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102cd3494; end: 102cd34bb; +[SCOperaViewControllerPauseReason external] */

void FUN_102cd3494(void)

{
  func_0x000107c5fadc(0x6c616e7265747845,0xe800000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102cd34bc; end: 102cd34ef; +[SCOperaViewControllerPauseReason resignedActive] */

void FUN_102cd34bc(void)

{
  func_0x000107c5fadc(0x64656e6769736552,0xee00657669746341);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102cd34f0; end: 102cd3523; +[SCOperaViewControllerPauseReason appBackgrounded] */

void FUN_102cd34f0(void)

{
  func_0x000107c5fadc(0x676b636142707041,0xef6465646e756f72);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102cd3524; end: 102cd354f; +[SCOperaViewControllerPauseReason audioInterruptionBegan] */

void FUN_102cd3524(void)

{
  func_0x000107c5fadc(0xd000000000000016,0x800000010f1083b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102cd3550; end: 102cd357f; +[SCOperaViewControllerPauseReason presentedVC] */

void FUN_102cd3550(void)

{
  func_0x000107c5fadc(0x65746e6573657250,0xeb00000000435664);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102cd3580; end: 102cd35af; +[SCOperaViewControllerPauseReason notPresented] */

void FUN_102cd3580(void)

{
  func_0x000107c5fadc(0x6573657250746f4e,0xec0000006465746e);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102cd35b0; end: 102cd35e3; +[SCOperaViewControllerPauseReason removedFromParentVC] */

void FUN_102cd35b0(void)

{
  func_0x000107c5fadc(0x65736572506c694e,0xef4356676e69746e);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102cd35e4; end: 102cd3617; +[SCOperaViewControllerPauseReason internalEventsRequest] */

void FUN_102cd35e4(void)

{
  func_0x000107c5fadc(0x6c616e7265746e49,0xee0073746e657645);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102cd3618; end: 102cd3643; +[SCOperaViewControllerPauseReason didFullyDisappear] */

void FUN_102cd3618(void)

{
  func_0x000107c5fadc(0xd000000000000011,0x800000010f1083d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102cd3644; end: 102cd366f; +[SCOperaViewControllerPauseReason silentDisappear] */

void FUN_102cd3644(void)

{
  func_0x000107c5fadc(0xd000000000000011,0x800000010f1083f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102cd3670; end: 102cd369b; +[SCOperaViewControllerPauseReason shakeToReportStarted] */

void FUN_102cd3670(void)

{
  func_0x000107c5fadc(0xd000000000000014,0x800000010f108410);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102cd369c; end: 102cd36c7; +[SCOperaViewControllerPauseReason modalPresentationBegan] */

void FUN_102cd369c(void)

{
  func_0x000107c5fadc(0xd000000000000016,0x800000010f108430);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102cd36c8; end: 102cd3703; -[SCOperaViewControllerPauseReason init] */

void FUN_102cd36c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102cd3704; end: 102cd3737;  */

void FUN_102cd3704(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102cd3738; end: 102cd373b; -[SCOperaViewControllerPauseReason .cxx_destruct] */

void FUN_102cd3738(void)

{
  return;
}



/* Entry: 102cd373c; end: 102cd377b;  */

void FUN_102cd373c(void)

{
  func_0x000107c61168(&PTR_PTR_11289e4f8);
  return;
}



/* Entry: 102cd377c; end: 102cd381f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102cd377c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uStack_50 = *(undefined8 *)(unaff_x20 + _DAT_112f0af70);
  uVar1 = 0x112f0af78;
  uStack_48 = param_1;
  uStack_40 = param_2;
  func_0x0001000285a8(0x112f0af78,&UNK_10db3e180);
  func_0x000100087bd4(&lStack_38,0x102cd4de4,auStack_60,uVar1);
  if (lStack_38 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(lStack_38 + 0x10);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = ((long *)(lStack_38 + 0x10))[lVar2 * 2];
    }
    func_0x000107c6142c();
  }
  return lVar2;
}



/* Entry: 102cd3820; end: 102cd3887; -[_TtC24OperaTrackerServiceUtils25OperaItemLoadStateTracker currentLoadStateForItemId:] */

undefined8 FUN_102cd3820(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_102cd377c(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return param_3;
}



/* Entry: 102cd3888; end: 102cd38eb; -[_TtC24OperaTrackerServiceUtils25OperaItemLoadStateTracker clear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd3888(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f0af70);
  func_0x000107c61174();
  func_0x000100087bd4(0x102cd4e5c,uVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102cd38ec; end: 102cd3a4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd38ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_58;
  
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f0af70);
  uVar2 = 0x112f0af78;
  uStack_80 = uVar5;
  uStack_78 = param_2;
  uStack_70 = param_3;
  func_0x0001000285a8(0x112f0af78,&UNK_10db3e180);
  func_0x000100087bd4(&lStack_58,0x102cd4df8,auStack_90,uVar2);
  if (lStack_58 == 0) {
LAB_102cd3998:
    uStack_80 = uVar5;
    uStack_78 = param_2;
    uStack_70 = param_3;
    func_0x000100087bd4(&lStack_58,0x102cd4e0c,auStack_90,uVar2);
    if (lStack_58 != 0) {
      func_0x000107c6142c();
    }
    lVar3 = 0x112f0af80;
    func_0x0001000285a8(0x112f0af80,&UNK_10db3e188);
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    *(undefined8 *)(lVar3 + 0x20) = 1;
    *(undefined8 *)(lVar3 + 0x28) = param_1;
    uStack_80 = uVar5;
    uStack_78 = param_2;
    uStack_70 = param_3;
    lStack_68 = lVar3;
    func_0x000100087bd4(0x102cd41e8,auStack_90,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(lVar3);
  }
  else {
    lVar3 = *(long *)(lStack_58 + 0x10) + 1;
    lVar4 = 0x20;
    do {
      lVar3 = lVar3 + -1;
      if (lVar3 == 0) {
        func_0x000107c6142c();
        goto LAB_102cd3998;
      }
      piVar1 = (int *)(lStack_58 + lVar4);
      lVar4 = lVar4 + 0x10;
    } while (*piVar1 != 1);
    func_0x000107c6142c();
  }
  return;
}



/* Entry: 102cd3a50; end: 102cd3a5b; -[_TtC24OperaTrackerServiceUtils25OperaItemLoadStateTracker didCreateItemAtTime:itemId:] */

void FUN_102cd3a50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_2);
  FUN_102cd38ec(param_1,param_4,param_3);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102cd3a5c; end: 102cd3c33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd3a5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  ulong uStack_58;
  
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f0af70);
  uVar3 = 0x112f0af78;
  uStack_80 = uVar10;
  uStack_78 = param_2;
  uStack_70 = param_3;
  func_0x0001000285a8(0x112f0af78,&UNK_10db3e180);
  func_0x000100087bd4(&uStack_58,0x102cd4e20,auStack_90,uVar3);
  if (uStack_58 == 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uStack_80 = uVar10;
    uStack_78 = param_2;
    uStack_70 = param_3;
    func_0x000100087bd4(FUN_102cd4d6c,auStack_90,PTR___sytN_11034f1b0 + 8);
    return;
  }
  lVar9 = *(long *)(uStack_58 + 0x10);
  func_0x000107c61434(uStack_58);
  lVar8 = lVar9 + 1;
  lVar7 = 0x20;
  while (lVar8 = lVar8 + -1, lVar8 != 0) {
    piVar1 = (int *)(uStack_58 + lVar7);
    lVar7 = lVar7 + 0x10;
    if (*piVar1 == 3) goto LAB_102cd3b58;
  }
  lVar9 = lVar9 + 1;
  lVar8 = 0x20;
  do {
    lVar9 = lVar9 + -1;
    if (lVar9 == 0) {
      func_0x000107c6142c(uStack_58);
      uVar4 = uStack_58;
      func_0x000107c61558();
      uVar5 = uStack_58;
      if ((uVar4 & 1) == 0) {
        uVar5 = 0;
        FUN_102cd4204(0,*(long *)(uStack_58 + 0x10) + 1,1,uStack_58);
      }
      uVar4 = *(ulong *)(uVar5 + 0x10);
      uVar6 = uVar5;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
        uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_102cd4204(uVar6,uVar4 + 1,1,uVar5);
      }
      *(ulong *)(uVar6 + 0x10) = uVar4 + 1;
      lVar8 = uVar6 + uVar4 * 0x10;
      *(undefined8 *)(lVar8 + 0x20) = 3;
      *(undefined8 *)(lVar8 + 0x28) = param_1;
      uStack_80 = uVar10;
      uStack_78 = param_2;
      uStack_70 = param_3;
      puStack_68 = (undefined *)uVar6;
      func_0x000100087bd4(0x102cd4d80,auStack_90,PTR___sytN_11034f1b0 + 8);
      func_0x000107c6142c(uVar6);
      return;
    }
    puVar2 = (ulong *)(uStack_58 + lVar8);
    lVar8 = lVar8 + 0x10;
  } while (*puVar2 < 4);
LAB_102cd3b58:
  func_0x000107c61430(uStack_58,2);
  return;
}



/* Entry: 102cd3c34; end: 102cd3c3f; -[_TtC24OperaTrackerServiceUtils25OperaItemLoadStateTracker didLoadMediaMetadataAtTime:itemId:] */

void FUN_102cd3c34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_2);
  FUN_102cd3a5c(param_1,param_4,param_3);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102cd3c40; end: 102cd3e17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd3c40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  ulong uStack_58;
  
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f0af70);
  uVar3 = 0x112f0af78;
  uStack_80 = uVar10;
  uStack_78 = param_2;
  uStack_70 = param_3;
  func_0x0001000285a8(0x112f0af78,&UNK_10db3e180);
  func_0x000100087bd4(&uStack_58,0x102cd4e34,auStack_90,uVar3);
  if (uStack_58 == 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uStack_80 = uVar10;
    uStack_78 = param_2;
    uStack_70 = param_3;
    func_0x000100087bd4(0x102cd4d94,auStack_90,PTR___sytN_11034f1b0 + 8);
    return;
  }
  lVar9 = *(long *)(uStack_58 + 0x10);
  func_0x000107c61434(uStack_58);
  lVar8 = lVar9 + 1;
  lVar7 = 0x20;
  while (lVar8 = lVar8 + -1, lVar8 != 0) {
    piVar1 = (int *)(uStack_58 + lVar7);
    lVar7 = lVar7 + 0x10;
    if (*piVar1 == 2) goto LAB_102cd3d3c;
  }
  lVar9 = lVar9 + 1;
  lVar8 = 0x20;
  do {
    lVar9 = lVar9 + -1;
    if (lVar9 == 0) {
      func_0x000107c6142c(uStack_58);
      uVar4 = uStack_58;
      func_0x000107c61558();
      uVar5 = uStack_58;
      if ((uVar4 & 1) == 0) {
        uVar5 = 0;
        FUN_102cd4204(0,*(long *)(uStack_58 + 0x10) + 1,1,uStack_58);
      }
      uVar4 = *(ulong *)(uVar5 + 0x10);
      uVar6 = uVar5;
      if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar4) {
        uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
        FUN_102cd4204(uVar6,uVar4 + 1,1,uVar5);
      }
      *(ulong *)(uVar6 + 0x10) = uVar4 + 1;
      lVar8 = uVar6 + uVar4 * 0x10;
      *(undefined8 *)(lVar8 + 0x20) = 2;
      *(undefined8 *)(lVar8 + 0x28) = param_1;
      uStack_80 = uVar10;
      uStack_78 = param_2;
      uStack_70 = param_3;
      puStack_68 = (undefined *)uVar6;
      func_0x000100087bd4(0x102cd4da8,auStack_90,PTR___sytN_11034f1b0 + 8);
      func_0x000107c6142c(uVar6);
      return;
    }
    puVar2 = (ulong *)(uStack_58 + lVar8);
    lVar8 = lVar8 + 0x10;
  } while (*puVar2 < 3);
LAB_102cd3d3c:
  func_0x000107c61430(uStack_58,2);
  return;
}



/* Entry: 102cd3e18; end: 102cd3e23; -[_TtC24OperaTrackerServiceUtils25OperaItemLoadStateTracker didRequestLoadingMediaAtTime:itemId:] */

void FUN_102cd3e18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_2);
  FUN_102cd3c40(param_1,param_4,param_3);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102cd3e24; end: 102cd3e8f;  */

void FUN_102cd3e24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_2);
  (*param_5)(param_1,param_4,param_3);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102cd3e90; end: 102cd3f0f; -[_TtC24OperaTrackerServiceUtils25OperaItemLoadStateTracker didFinishLoadingMediaAtTime:itemId:error:] */

/* WARNING: Possible PIC construction at 0x000102cd3eec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102cd3ef0) */

void FUN_102cd3e90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_5);
  FUN_102cd4acc(param_1,param_4,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 102cd3f10; end: 102cd3faf; -[_TtC24OperaTrackerServiceUtils25OperaItemLoadStateTracker init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd3f10(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112f0af70;
  lVar3 = 0;
  func_0x000102cd375c();
  func_0x000107c613fc();
  *(undefined **)(lVar3 + 0x10) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  uVar4 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(lVar3 + 0x18) = uVar4;
  *(long *)(param_1 + lVar1) = lVar3;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102cd3fb0; end: 102cd3fe3;  */

void FUN_102cd3fb0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102cd3fe4; end: 102cd3ff3; -[_TtC24OperaTrackerServiceUtils25OperaItemLoadStateTracker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102cd3fe4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f0af70));
  return;
}



/* Entry: 102cd3ff4; end: 102cd401f;  */

void FUN_102cd3ff4(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}


