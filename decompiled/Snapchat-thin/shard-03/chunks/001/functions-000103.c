/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10251a8b4; end: 10251a91f;  */

void FUN_10251a8b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10251a920,uVar1,uVar2);
  return;
}



/* Entry: 10251a920; end: 10251a967;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251a920(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  lVar1 = *(long *)(lVar1 + _DAT_112ea38a0);
  if (lVar1 != 0) {
    func_0x000107c42018(lVar1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010251a964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10251a968; end: 10251a9c7; -[_TtC19MapChatLocationTray25MapChatLocationTrayRouter didEndSendToWorkflowForDropIdentifier:withSuccess:] */

void FUN_10251a968(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_10251a774(param_3,param_2,param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10251a9c8; end: 10251a9df; -[_TtC19MapChatLocationTray25MapChatLocationTrayRouter mapLocationSearchTrayDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251a9c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ea38b0);
  *(undefined8 *)(param_1 + _DAT_112ea38b0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10251a9e0; end: 10251aaab; -[_TtC19MapChatLocationTray25MapChatLocationTrayRouter mapLocationSearchTrayDidSelectLocationWithCoordinates:placeSelectionUpdate:] */

/* WARNING: Possible PIC construction at 0x00010251aa74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010251aa78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251a9e0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  
  lVar2 = *(long *)(param_3 + _DAT_112ea38d8);
  if (lVar2 != 0) {
    lVar3 = ((long *)(param_3 + _DAT_112ea38d8))[1];
    lVar1 = lVar2;
    func_0x000107c614f0(lVar2);
    pcVar4 = *(code **)(lVar3 + 0xc0);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_3);
    func_0x000107c615f0(lVar2);
    (*pcVar4)(param_1,param_2,param_5,lVar1,lVar3);
    func_0x000107c615e8(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_5);
    return;
  }
  return;
}



/* Entry: 10251aaac; end: 10251aaf7;  */

void FUN_10251aaac(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  plVar2 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x10251adc0;
  plVar2[2] = lVar3;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar3 = lVar1;
  func_0x000107c5fce8();
  plVar2[3] = lVar3;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10251a920,lVar1,lVar3);
  return;
}



/* Entry: 10251aaf8; end: 10251ab67;  */

void FUN_10251aaf8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10251adc4;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10251ab68; end: 10251ab77;  */

undefined1  [16] FUN_10251ab68(void)

{
  return ZEXT816(0x11051bea0);
}



/* Entry: 10251ab78; end: 10251ab97;  */

void FUN_10251ab78(void)

{
  func_0x000107c61168(&PTR_PTR_11284ba30);
  return;
}



/* Entry: 10251ab98; end: 10251ac23;  */

void FUN_10251ab98(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10251ac24;
  plVar7[9] = lVar1;
  plVar7[10] = lVar4;
  plVar7[7] = lVar5;
  plVar7[8] = lVar3;
  plVar7[5] = lVar6;
  plVar7[6] = lVar2;
  lVar5 = 0;
  func_0x000107c5fcec();
  lVar6 = lVar5;
  func_0x000107c5fce8();
  plVar7[0xb] = lVar6;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar7[0xc] = lVar5;
  plVar7[0xd] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102517ef4,lVar5,lVar6);
  return;
}



/* Entry: 10251ac24; end: 10251ac9b;  */

void FUN_10251ac24(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010251ac5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10251ac9c; end: 10251ad27;  */

void FUN_10251ac9c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x10251adc8;
  plVar7[9] = lVar1;
  plVar7[10] = lVar4;
  plVar7[7] = lVar5;
  plVar7[8] = lVar3;
  plVar7[5] = lVar6;
  plVar7[6] = lVar2;
  lVar5 = 0;
  func_0x000107c5fcec();
  lVar6 = lVar5;
  func_0x000107c5fce8();
  plVar7[0xb] = lVar6;
  func_0x000100eea164();
  func_0x000107c5fca8();
  plVar7[0xc] = lVar5;
  plVar7[0xd] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102517ef4,lVar5,lVar6);
  return;
}



/* Entry: 10251ad28; end: 10251ad6b;  */

void FUN_10251ad28(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ea39b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126dab40;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ea39b8 = puVar1;
  return;
}



/* Entry: 10251ad6c; end: 10251ad73;  */

void FUN_10251ad6c(char *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  if (*param_1 == '\0') {
    func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
    lVar2 = lVar3 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      FUN_102518914();
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61428(lVar3 + 0x10,auStack_60,0,0);
    lVar3 = lVar3 + 0x10;
    func_0x000107c61618();
    if (lVar3 == 0) {
      return;
    }
    FUN_1025189a4(uVar1);
  }
  else {
    func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
    lVar3 = lVar3 + 0x10;
    func_0x000107c61618();
    if (lVar3 == 0) {
      return;
    }
    FUN_102519620(uVar1);
  }
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 10251ad74; end: 10251ada3;  */

void FUN_10251ad74(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 10251ada4; end: 10251adcb;  */

void FUN_10251ada4(long param_1,long param_2)

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



/* Entry: 10251adcc; end: 10251ae7b;  */

void FUN_10251adcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  func_0x000107c614f0();
  FUN_10251c340(param_1,param_2,param_3,param_4,param_5,param_7,param_8,param_9,param_10,param_11,
                param_12,param_13,param_14,param_15);
  return;
}



/* Entry: 10251ae7c; end: 10251aebf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251ae7c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ea39c0;
  func_0x000107c61428(unaff_x20 + _DAT_112ea39c0,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Entry: 10251aec0; end: 10251af13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251aec0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ea39c0;
  func_0x000107c61428(unaff_x20 + _DAT_112ea39c0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 10251af14; end: 10251af53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10251af14(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112ea39c0;
  func_0x000107c61428(unaff_x20 + _DAT_112ea39c0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_10251af54;
  return auVar2;
}



/* Entry: 10251af54; end: 10251af57;  */

void FUN_10251af54(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 10251af58; end: 10251afc7; -[_TtC19MapChatLocationTray33MapChatLocationTrayViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251af58(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112ea39c8) = 0;
  *(undefined8 *)(param_1 + _DAT_112ea39c0) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "MapChatLocationTray/MapChatLocationTrayViewController.swift",0x3b,2,0x3a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10251afc8);
  (*pcVar1)();
}



/* Entry: 10251afc8; end: 10251afcf;  */

undefined8 FUN_10251afc8(void)

{
  return 0;
}



/* Entry: 10251afd0; end: 10251b0b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10251afd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  double dVar4;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ea39c8);
  if (lVar2 == 0) {
    dVar4 = -1.0;
  }
  else {
    func_0x000107c61174();
    lVar3 = lVar2;
    func_0x000107c5dbc0();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c5e07c();
      func_0x000107c615e8(lVar3);
    }
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10251b0b4);
      (*pcVar1)();
    }
    func_0x000107c3ec60();
    func_0x000107c61170(unaff_x20);
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    dVar4 = 1.79769313486232e+308;
    func_0x000107c5b098(lVar2);
    func_0x000107c61170(lVar2);
    dVar4 = dVar4 + 50.0;
  }
  return dVar4;
}



/* Entry: 10251b0b4; end: 10251b167;  */

/* WARNING: Possible PIC construction at 0x00010251b0f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010251b0f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251b0b4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ea39c8);
  if (lVar1 == 0) {
    return;
  }
  func_0x000107c61174();
  lVar2 = lVar1;
  FUN_10251ba60();
  if (lVar2 != 0) {
    func_0x000107c5a588(lVar1,param_2,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10251b168; end: 10251b483;  */

/* WARNING: Possible PIC construction at 0x00010251b1c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010251b258: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010251b278: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010251b2c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010251b2e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010251b338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010251b358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010251b380: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010251b3c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010251b3e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010251b42c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010251b3e4) */
/* WARNING: Removing unreachable block (ram,0x00010251b3c4) */
/* WARNING: Removing unreachable block (ram,0x00010251b384) */
/* WARNING: Removing unreachable block (ram,0x00010251b480) */
/* WARNING: Removing unreachable block (ram,0x00010251b398) */
/* WARNING: Removing unreachable block (ram,0x00010251b35c) */
/* WARNING: Removing unreachable block (ram,0x00010251b33c) */
/* WARNING: Removing unreachable block (ram,0x00010251b2ec) */
/* WARNING: Removing unreachable block (ram,0x00010251b47c) */
/* WARNING: Removing unreachable block (ram,0x00010251b320) */
/* WARNING: Removing unreachable block (ram,0x00010251b2cc) */
/* WARNING: Removing unreachable block (ram,0x00010251b27c) */
/* WARNING: Removing unreachable block (ram,0x00010251b478) */
/* WARNING: Removing unreachable block (ram,0x00010251b2b0) */
/* WARNING: Removing unreachable block (ram,0x00010251b25c) */
/* WARNING: Removing unreachable block (ram,0x00010251b1c4) */
/* WARNING: Removing unreachable block (ram,0x00010251b474) */
/* WARNING: Removing unreachable block (ram,0x00010251b240) */
/* WARNING: Removing unreachable block (ram,0x00010251b430) */

void FUN_10251b168(long param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  FUN_10251b484();
  if (param_1 == 0) {
    return;
  }
  func_0x000107c61174();
  func_0x000107c5a050();
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c3d89c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10251b474);
  (*pcVar1)();
}



/* Entry: 10251b484; end: 10251b84f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251b484(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ea39e0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8();
    if (lVar2 != 0) {
      FUN_10251ba60();
      if (lVar1 == 0) {
        func_0x000107c615e8(lVar2);
      }
      else {
        puVar3 = PTR_PTR_1126aa9d8;
        func_0x000107c610f8(PTR_PTR_1126aa9d8);
        func_0x000107c453e4();
        puVar4 = puVar3;
        func_0x000107c52168();
        FUN_10251b980();
        func_0x000107c53e94(puVar3);
        func_0x000107c615e8(puVar4);
        lVar5 = *(long *)(unaff_x20 + _DAT_112ea3a00);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar5 == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = lVar5;
          func_0x000107c4c1dc();
          func_0x000107c61180();
          func_0x000107c615e8(lVar5);
        }
        func_0x000107c52604(puVar3);
        func_0x000107c615e8(lVar10);
        lVar5 = *(long *)(unaff_x20 + _DAT_112ea3a08);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar5 == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = lVar5;
          func_0x000107c4c1dc();
          func_0x000107c61180();
          func_0x000107c615e8(lVar5);
        }
        func_0x000107c56b20(puVar3);
        func_0x000107c615e8(lVar10);
        lVar5 = *(long *)(unaff_x20 + _DAT_112ea3a10);
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar5 == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = lVar5;
          func_0x000107c4c1dc();
          func_0x000107c61180();
          func_0x000107c615e8(lVar5);
        }
        func_0x000107c52188(puVar3);
        func_0x000107c615e8(lVar10);
        uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112ea39d0);
        lVar5 = ((undefined8 *)(unaff_x20 + _DAT_112ea39d0))[1];
        func_0x000107c614f0(uVar9);
        func_0x000107c5477c(puVar3);
        puVar4 = &UNK_11051bf90;
        func_0x000107c613fc(&UNK_11051bf90,0x18,7);
        func_0x000107c61614(puVar4 + 0x10);
        pcStack_70 = FUN_10251c5e8;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        uStack_80 = 0x10251b938;
        puStack_78 = &UNK_11051bfa8;
        ppuVar6 = &puStack_90;
        puStack_68 = puVar4;
        func_0x000107c60bc4(ppuVar6);
        func_0x000107c61574(puStack_68);
        func_0x000107c53a68(puVar3);
        func_0x000107c60bd0(ppuVar6);
        uVar7 = uVar9;
        (**(code **)(lVar5 + 0x20))(uVar9,lVar5);
        func_0x000107c59240(puVar3);
        func_0x000107c61170(uVar7);
        uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112ea39d8);
        lVar10 = ((undefined8 *)(unaff_x20 + _DAT_112ea39d8))[1];
        func_0x000107c614f0(uVar7);
        uVar8 = uVar7;
        (**(code **)(lVar10 + 0x40))();
        func_0x000107c54480(puVar3);
        func_0x000107c61170(uVar8);
        (**(code **)(lVar10 + 0x30))(uVar7,lVar10);
        func_0x000107c591c4(puVar3);
        (**(code **)(lVar5 + 0x38))(uVar9,lVar5);
        func_0x000107c57410(puVar3);
        func_0x000107c61170(uVar9);
        if (((undefined8 *)(unaff_x20 + _DAT_112ea3a20))[1] == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112ea3a20);
          func_0x000107c5fadc(uVar9);
        }
        func_0x000107c542c8(puVar3);
        func_0x000107c61170(uVar9);
        func_0x000107c610f8(PTR_PTR_1126aa9e0);
        func_0x000107c49520();
        func_0x000107c5a050();
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(lVar1);
        func_0x000107c61170(puVar3);
      }
    }
  }
  return;
}



/* Entry: 10251b850; end: 10251b97f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10251b850(uint param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = *(long *)(param_2 + _DAT_112ea39e0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    if (lVar2 != 0) {
      func_0x000107c615e8(lVar2);
      uVar3 = *(undefined8 *)(param_2 + _DAT_112ea39d0);
      lVar1 = ((undefined8 *)(param_2 + _DAT_112ea39d0))[1];
      func_0x000107c614f0(uVar3);
      uVar4 = (ulong)(param_1 & 1);
      (**(code **)(lVar1 + 0x28))(uVar4,uVar3,lVar1);
      goto LAB_10251b910;
    }
  }
  uVar4 = 0;
LAB_10251b910:
  func_0x000107c61170(param_2);
  return uVar4;
}



/* Entry: 10251b980; end: 10251ba5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251b980(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ea39f8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c409cc();
    func_0x000107c61180();
    lVar1 = _DAT_112ea39c0;
    func_0x000107c61428(unaff_x20 + _DAT_112ea39c0,auStack_58,1,0);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c615f0(lVar3);
    func_0x000107c615e8(uVar4);
    if (lVar3 == 0) {
      func_0x000107c615e8(lVar2);
    }
    else {
      func_0x000107c40978(lVar3);
      func_0x000107c61180();
      func_0x000107c615e8(lVar3);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 10251ba60; end: 10251bf07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10251ba60(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ea39f0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return (undefined *)0x0;
  }
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ea39e8);
  uVar6 = ((undefined8 *)(unaff_x20 + _DAT_112ea39e8))[1];
  uVar2 = uVar8;
  func_0x000107c5fadc(uVar8,uVar6);
  lVar3 = lVar1;
  func_0x000107c4c39c();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ea39d0);
  lVar7 = ((undefined8 *)(unaff_x20 + _DAT_112ea39d0))[1];
  func_0x000107c614f0(uVar2);
  (**(code **)(lVar7 + 0x30))();
  puVar4 = PTR_PTR_1126aa9f0;
  func_0x000107c610f8(PTR_PTR_1126aa9f0);
  func_0x000107c5fadc(uVar8,uVar6);
  uVar5 = 0;
  FUN_10251c60c(0,0x112ea3a78,&PTR_PTR_1126aa9e8);
  uVar6 = uVar2;
  func_0x000107c5fc48(uVar2,uVar5);
  func_0x000107c6142c(uVar2);
  func_0x000107c49228(puVar4);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar6);
  if (lVar3 == 0) {
    func_0x000107c5a2f4(puVar4);
  }
  else {
    lVar7 = ((undefined8 *)(lVar3 + _DAT_112fcd628))[1];
    if (lVar7 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(lVar3 + _DAT_112fcd628);
      func_0x000107c61434(lVar7);
      func_0x000107c5fadc(uVar8,lVar7);
      func_0x000107c6142c(lVar7);
    }
    func_0x000107c5a2f4(puVar4);
    func_0x000107c61170(uVar8);
    lVar7 = ((undefined8 *)(lVar3 + _DAT_112fcd630))[1];
    if (lVar7 != 0) {
      uVar8 = *(undefined8 *)(lVar3 + _DAT_112fcd630);
      func_0x000107c61434(lVar7);
      func_0x000107c5fadc(uVar8,lVar7);
      func_0x000107c6142c(lVar7);
      goto LAB_10251bc30;
    }
  }
  uVar8 = 0;
LAB_10251bc30:
  func_0x000107c5a3e4(puVar4);
  func_0x000107c61170(uVar8);
  func_0x00010251bcc0();
  uVar6 = 0;
  FUN_10251c60c(0,0x112ea3a58,&PTR_PTR_1126aa9d0);
  uVar2 = uVar8;
  func_0x000107c5fc48(uVar8,uVar6);
  func_0x000107c6142c(uVar8);
  func_0x000107c58d94(puVar4);
  func_0x000107c615e8(lVar1);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar2);
  return puVar4;
}



/* Entry: 10251bf08; end: 10251c10f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10251bf08(void)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  
  uVar4 = 0x112d38c88;
  FUN_10251c280(0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d4a820,&UNK_10d910f30);
  func_0x000107c613fc();
  *(undefined8 *)(uVar4 + 0x18) = 3;
  *(undefined8 *)(uVar4 + 0x10) = 1;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ecc();
  *(undefined **)(uVar4 + 0x20) = puVar2;
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c46ecc();
  uVar6 = uVar4 & 0xffffffffffffff8;
  uVar1 = *(ulong *)(uVar6 + 0x10);
  uVar5 = uVar4;
  if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    func_0x000101d1802c(uVar5,uVar1 + 1,1,uVar4);
    uVar6 = uVar5 & 0xffffffffffffff8;
  }
  *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
  *(undefined **)(uVar6 + uVar1 * 8 + 0x20) = puVar2;
  uVar4 = *(ulong *)(unaff_x20 + _DAT_112ea39d0);
  uVar1 = ((ulong *)(unaff_x20 + _DAT_112ea39d0))[1];
  func_0x000107c614f0();
  uVar3 = uVar4;
  (**(code **)(uVar1 + 0x40))();
  if ((uVar3 & 1) != 0) {
    uVar3 = uVar4;
    (**(code **)(uVar1 + 0x58))(uVar4,uVar1);
    if (((uVar3 & 1) != 0) &&
       (uVar3 = uVar4, (**(code **)(uVar1 + 0x50))(uVar4,uVar1), (uVar3 & 1) != 0)) {
      (**(code **)(uVar1 + 0x48))(uVar4,uVar1);
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c46ecc();
    uVar4 = uVar5;
    if (uVar5 >> 0x3e != 0) {
      if (0x7fffffffffffffff < uVar5) {
        uVar6 = uVar5;
      }
      func_0x000107c60480(uVar6);
      uVar4 = 0;
      func_0x000101d1802c(0,uVar6 + 1,1,uVar5);
      uVar6 = uVar4 & 0xffffffffffffff8;
    }
    uVar1 = *(ulong *)(uVar6 + 0x10);
    uVar5 = uVar4;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
      uVar5 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      func_0x000101d1802c(uVar5,uVar1 + 1,1,uVar4);
      uVar6 = uVar5 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
    *(undefined **)(uVar6 + uVar1 * 8 + 0x20) = puVar2;
  }
  return uVar5;
}



/* Entry: 10251c110; end: 10251c16b; -[_TtC19MapChatLocationTray33MapChatLocationTrayViewController initWithNibName:bundle:] */

void FUN_10251c110(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapChatLocationTray.MapChatLocationTrayViewController",0x35,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10251c13c);
  (*pcVar1)();
}



/* Entry: 10251c16c; end: 10251c25b; -[_TtC19MapChatLocationTray33MapChatLocationTrayViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010251c188: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010251c18c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251c16c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ea39d0));
  return;
}



/* Entry: 10251c25c; end: 10251c27f;  */

void FUN_10251c25c(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112ea3a70;
  plVar5 = (long *)&UNK_10dab6290;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10251c60c(0,0x112ea3a78,&PTR_PTR_1126aa9e8);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10251c280; end: 10251c2f7;  */

void FUN_10251c280(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10251c60c(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10251c2f8; end: 10251c33f;  */

void FUN_10251c2f8(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112ea3a50;
  plVar5 = (long *)&UNK_10dab6278;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_10251c60c(0,0x112ea3a58,&PTR_PTR_1126aa9d0);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10251c340; end: 10251c3bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10251c340(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                    undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 in_stack_00000040;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  FUN_10251c5c8();
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112ea39c8) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ea39c0) = 0;
  *(long *)(lVar3 + _DAT_112ea39e0) = param_1;
  *(undefined8 *)(lVar3 + _DAT_112ea39f0) = param_2;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112ea39e8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112ea39d0);
  *puVar1 = param_5;
  puVar1[1] = in_stack_00000040;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112ea39d8);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(undefined8 *)(lVar3 + _DAT_112ea39f8) = param_8;
  *(undefined8 *)(lVar3 + _DAT_112ea3a00) = param_9;
  *(undefined8 *)(lVar3 + _DAT_112ea3a08) = param_10;
  *(undefined8 *)(lVar3 + _DAT_112ea3a10) = param_11;
  *(undefined8 *)(lVar3 + _DAT_112ea3a18) = param_12;
  puVar1 = (undefined8 *)(lVar3 + _DAT_112ea3a20);
  *puVar1 = param_13;
  puVar1[1] = param_14;
  lVar4 = param_1;
  FUN_10251c5c8();
  puVar2 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_70 = lVar3;
  lStack_68 = lVar4;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  plVar5 = &lStack_70;
  func_0x000107c61154(plVar5,puVar2,0,0);
  func_0x000107c61180();
  FUN_10251b168();
  func_0x000107c61170(plVar5);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  return plVar5;
}



/* Entry: 10251c3bc; end: 10251c5c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10251c3bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                    undefined8 param_13,undefined8 param_14,long param_15,undefined4 param_16,
                    undefined4 param_17,undefined8 param_18)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  long lStack_70;
  undefined8 uStack_68;
  
  *(undefined8 *)(param_15 + _DAT_112ea39c8) = 0;
  *(undefined8 *)(param_15 + _DAT_112ea39c0) = 0;
  *(undefined8 *)(param_15 + _DAT_112ea39e0) = param_1;
  *(undefined8 *)(param_15 + _DAT_112ea39f0) = param_2;
  puVar1 = (undefined8 *)(param_15 + _DAT_112ea39e8);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(param_15 + _DAT_112ea39d0);
  *puVar1 = param_5;
  puVar1[1] = param_18;
  puVar1 = (undefined8 *)(param_15 + _DAT_112ea39d8);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(undefined8 *)(param_15 + _DAT_112ea39f8) = param_8;
  *(undefined8 *)(param_15 + _DAT_112ea3a00) = param_9;
  *(undefined8 *)(param_15 + _DAT_112ea3a08) = param_10;
  *(undefined8 *)(param_15 + _DAT_112ea3a10) = param_11;
  *(undefined8 *)(param_15 + _DAT_112ea3a18) = param_12;
  puVar1 = (undefined8 *)(param_15 + _DAT_112ea3a20);
  *puVar1 = param_13;
  puVar1[1] = param_14;
  uVar3 = param_1;
  FUN_10251c5c8();
  puVar2 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_70 = param_15;
  uStack_68 = uVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  plVar4 = &lStack_70;
  func_0x000107c61154(plVar4,puVar2,0,0);
  func_0x000107c61180();
  FUN_10251b168();
  func_0x000107c61170(plVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  return plVar4;
}



/* Entry: 10251c5c8; end: 10251c5e7;  */

void FUN_10251c5c8(void)

{
  func_0x000107c61168(&PTR_PTR_11284bc08);
  return;
}



/* Entry: 10251c5e8; end: 10251c60b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_10251c5e8(uint param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return 0;
  }
  lVar2 = *(long *)(lVar1 + _DAT_112ea39e0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar3 != 0) {
      func_0x000107c615e8(lVar3);
      uVar4 = *(undefined8 *)(lVar1 + _DAT_112ea39d0);
      lVar2 = ((undefined8 *)(lVar1 + _DAT_112ea39d0))[1];
      func_0x000107c614f0(uVar4);
      uVar5 = (ulong)(param_1 & 1);
      (**(code **)(lVar2 + 0x28))(uVar5,uVar4,lVar2);
      goto LAB_10251b910;
    }
  }
  uVar5 = 0;
LAB_10251b910:
  func_0x000107c61170(lVar1);
  return uVar5;
}



/* Entry: 10251c60c; end: 10251c64b;  */

void FUN_10251c60c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 10251c64c; end: 10251c737;  */

long FUN_10251c64c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x0001000c6518(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x0001025223ac();
  func_0x0001000834e4(param_1);
  return lVar1;
}



/* Entry: 10251c738; end: 10251c97b;  */

/* WARNING: Possible PIC construction at 0x00010251c91c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010251c920) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251c738(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar6 = &puStack_a0;
  ppuVar9 = &puStack_a0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ea3a80);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112ea3a88);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c42194(*(undefined8 *)(unaff_x20 + _DAT_112ea3a90));
    lVar4 = lVar2;
    func_0x000107c4ec88(lVar2);
    func_0x000107c61180();
    puVar8 = &UNK_11051bfe0;
    puVar5 = puVar8;
    func_0x000107c613fc(&UNK_11051bfe0,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_1025224c8;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_101114e90;
    puStack_88 = &UNK_11051bff8;
    puStack_78 = puVar5;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c61574(puStack_78);
    lVar7 = lVar4;
    func_0x000107c5c320(lVar4);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar4);
    func_0x000107c3e924(lVar7);
    func_0x000107c61170(lVar7);
    func_0x000107c4e640(lVar3);
    func_0x000107c61180();
    func_0x000107c613fc(&UNK_11051bfe0,0x18,7);
    func_0x000107c61614(puVar8 + 0x10);
    pcStack_80 = (code *)0x1025224ec;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_10103b94c;
    puStack_88 = &UNK_11051c020;
    puStack_78 = puVar8;
    func_0x000107c60bc4(&puStack_a0);
    func_0x000107c61574(puStack_78);
    lVar4 = lVar3;
    func_0x000107c5c320(lVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61170(lVar3);
    func_0x000107c3e924(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 10251c97c; end: 10251c97f;  */

void FUN_10251c97c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 10251c980; end: 10251ca63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251c980(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar3 = _DAT_112ea3a98;
  if (param_2 != 0) {
    func_0x000107c61428(param_2 + _DAT_112ea3a98,auStack_60,0,0);
    lVar3 = *(long *)(param_2 + lVar3);
    if (lVar3 != 0) {
      lVar1 = *(long *)(lVar3 + _DAT_112ea39c8);
      if (lVar1 != 0) {
        func_0x000107c61174();
        func_0x000107c61174();
        lVar2 = lVar3;
        FUN_10251ba60();
        if (lVar2 != 0) {
          func_0x000107c61174();
          func_0x000107c5a588(lVar1);
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          lVar1 = lVar2;
        }
        func_0x000107c61170(lVar1);
        func_0x000107c61170(param_2);
        param_2 = lVar3;
      }
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10251ca64; end: 10251cc17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251ca64(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  ppuVar4 = &puStack_c0;
  ppuVar5 = &puStack_c0;
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar6 = _DAT_112ea3a98;
  if (param_2 != 0) {
    func_0x000107c61428(param_2 + _DAT_112ea3a98,auStack_90,0,0);
    lVar6 = *(long *)(param_2 + lVar6);
    if (lVar6 != 0) {
      puVar2 = &UNK_11051c5a8;
      func_0x000107c613fc(&UNK_11051c5a8,0x20,7);
      *(long *)(puVar2 + 0x10) = param_2;
      *(long *)(puVar2 + 0x18) = lVar6;
      puVar3 = &UNK_11051c5d0;
      func_0x000107c613fc(&UNK_11051c5d0,0x20,7);
      *(undefined8 *)(puVar3 + 0x10) = 0x102522c54;
      *(undefined **)(puVar3 + 0x18) = puVar2;
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_a0 = FUN_102522c5c;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0x42000000;
      puStack_b0 = &UNK_10103b938;
      puStack_a8 = &UNK_11051c5e8;
      puStack_98 = puVar3;
      func_0x000107c60bc4(&puStack_c0);
      puVar3 = puStack_98;
      func_0x000107c61174(lVar6);
      func_0x000107c61174();
      func_0x000107c61174(param_2);
      func_0x000107c61574(puVar3);
      pcStack_a0 = FUN_10251ccac;
      puStack_98 = (undefined *)0x0;
      puStack_c0 = puVar1;
      uStack_b8 = 0x42000000;
      puStack_b0 = &UNK_10103b93c;
      puStack_a8 = &UNK_11051c610;
      func_0x000107c60bc4(&puStack_c0);
      func_0x000107c61574(puStack_98);
      func_0x000107c4c600(param_1);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61574(puVar2);
      func_0x000107c61170(param_2);
      param_2 = lVar6;
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10251cc18; end: 10251ccab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251cc18(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 uStack_31;
  
  uStack_31 = param_1 != 1;
  func_0x0001002a64a8(&uStack_31);
  lVar1 = *(long *)(param_3 + _DAT_112ea39c8);
  if (lVar1 != 0) {
    func_0x000107c61174();
    lVar2 = lVar1;
    FUN_10251ba60();
    if (lVar2 != 0) {
      func_0x000107c5a588(lVar1);
      func_0x000107c61170(lVar1);
      lVar1 = lVar2;
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10251ccac; end: 10251ccaf;  */

void FUN_10251ccac(void)

{
  return;
}



/* Entry: 10251ccb0; end: 10251cd07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251ccb0(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c42194(*(undefined8 *)(unaff_x20 + _DAT_112ea3a90));
  lVar1 = _DAT_112ea3aa0;
  uVar2 = 0;
  if (*(long *)(unaff_x20 + _DAT_112ea3aa0) != 0) {
    func_0x000107c4218c();
    uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  func_0x000107c61170(uVar2);
  func_0x000100c82230();
  return;
}



/* Entry: 10251cd08; end: 10251d647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10251cd08(void)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  uVar10 = 0;
  lVar11 = *(long *)(unaff_x20 + _DAT_112ea3ab8);
  uVar12 = *(ulong *)(lVar11 + 0x10);
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    puVar8 = (undefined8 *)(lVar11 + 0x28 + uVar10 * 0x10);
    do {
      if (uVar12 == uVar10) {
        return puVar7;
      }
      if (*(ulong *)(lVar11 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10251ce7c);
        (*pcVar3)();
      }
      uVar10 = uVar10 + 1;
      lVar4 = puVar8[-1];
      uVar2 = *puVar8;
      func_0x000107c61434(uVar2);
      func_0x00010251ce7c(lVar4,uVar2);
      func_0x000107c6142c(uVar2);
      puVar8 = puVar8 + 2;
    } while (lVar4 == 0);
    puVar6 = puVar7;
    func_0x000107c61550();
    if ((((int)puVar6 == 0) || ((long)puVar7 < 0)) ||
       (puVar6 = puVar7, ((ulong)puVar7 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar7 >> 0x3e == 0) {
        puVar5 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar5 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar7) {
          puVar5 = puVar7;
        }
        func_0x000107c60480(puVar5);
      }
      puVar6 = (undefined *)0x0;
      FUN_102521a00(0,puVar5 + 1,1,puVar7,FUN_10251c25c,0x112ea3a78,&PTR_PTR_1126aa9e8);
    }
    uVar9 = (ulong)puVar6 & 0xffffffffffffff8;
    uVar1 = *(ulong *)(uVar9 + 0x10);
    puVar7 = puVar6;
    if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar1) {
      puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
      FUN_102521a00(puVar7,uVar1 + 1,1,puVar6,FUN_10251c25c,0x112ea3a78,&PTR_PTR_1126aa9e8);
      uVar9 = (ulong)puVar7 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar9 + 0x10) = uVar1 + 1;
    *(long *)(uVar9 + uVar1 * 8 + 0x20) = lVar4;
  } while( true );
}



/* Entry: 10251d648; end: 10251d927;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251d648(long param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112ea3ac0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c4b88c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    if (lVar4 != 0) {
      func_0x000107c4077c(lVar4);
      func_0x000107c61170(lVar4);
      lVar3 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x18) = 2;
      *(undefined8 *)(lVar3 + 0x10) = 1;
      uVar7 = ((undefined8 *)(unaff_x20 + _DAT_112ea3ac8))[1];
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(unaff_x20 + _DAT_112ea3ac8);
      *(undefined8 *)(lVar3 + 0x28) = uVar7;
      lStack_e8 = lVar3;
      uStack_e0 = param_2;
      if ((param_3 & 1) == 0) {
        func_0x0001000285a8(0x112ea3738,&UNK_10dab5ea0);
        func_0x000107c61434(uVar7);
        plVar5 = &lStack_e8;
        func_0x000100854cb0();
        func_0x000107c61574(lVar3);
        func_0x0001000285a8(0x112ea31b8,&UNK_10dab5680);
        uStack_d0 = 0;
        uStack_d8 = 0x4028000000000000;
        uStack_c0 = 0x4049000000000000;
        plStack_c8 = (long *)0x4051800000000000;
        uStack_b0 = 0x4049000000000000;
        uStack_b8 = 0x4034000000000000;
        uStack_a8 = uStack_a8 & 0xffffffffffffff00;
        plVar6 = &lStack_e8;
        lStack_e8 = param_1;
        func_0x000100854cb0();
      }
      else {
        func_0x000107c61434(uVar7);
        plVar5 = &lStack_e8;
        func_0x0001006c71a4();
        func_0x000107c61574(lVar3);
        uStack_d0 = 0;
        uStack_d8 = 0x4028000000000000;
        uStack_c0 = 0x4049000000000000;
        plStack_c8 = (long *)0x4051800000000000;
        uStack_b0 = 0x4049000000000000;
        uStack_b8 = 0x4034000000000000;
        uStack_a8 = uStack_a8 & 0xffffffffffffff00;
        plVar6 = &lStack_e8;
        lStack_e8 = param_1;
        func_0x0001006c71a4();
      }
      lStack_e8 = 0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_d0 = CONCAT71(uStack_d0._1_7_,param_3) & 0xffffffffffffff01;
      uStack_b8 = 0x4049000000000000;
      uStack_c0 = 0x4051800000000000;
      uStack_a8 = 0x4049000000000000;
      uStack_b0 = 0x4034000000000000;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_78 = 0;
      uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ea3ad0) + _DAT_112ed0cb8);
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = uStack_d0;
      uStack_160 = 0;
      uStack_148 = 0x4051800000000000;
      uStack_138 = 0x4034000000000000;
      uStack_140 = 0x4049000000000000;
      uStack_130 = 0x4049000000000000;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_100 = 0;
      plStack_150 = plVar6;
      plStack_128 = plVar5;
      plStack_c8 = plVar6;
      plStack_a0 = plVar5;
      func_0x000107c6157c();
      func_0x000107c6157c(plVar5);
      func_0x000107c6157c(uVar7);
      func_0x00010008a7c8(&uStack_f0,&uStack_170);
      func_0x000107c61574(uVar7);
      func_0x000100083b20(&uStack_170);
      func_0x000107c61574(uStack_f0);
      plVar2 = plStack_150;
      uVar1 = uStack_158;
      func_0x0001000a8868(&uStack_170,uStack_158);
      (*(code *)plVar2[2])(uVar1,plVar2);
      func_0x000107c61574(plVar5);
      func_0x000107c61574(plVar6);
      FUN_102514a34(&lStack_e8);
      func_0x0001000834e4(&uStack_170);
    }
  }
  return;
}



/* Entry: 10251d928; end: 10251db83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251d928(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ea3a80);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4ec80();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c615e8(lVar1);
    }
    else {
      func_0x000107c5aa6c();
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 10251db84; end: 10251dc4b;  */

/* WARNING: Possible PIC construction at 0x00010251dc04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010251dc08) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251db84(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112ea3ac0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
    return;
  }
  lVar5 = lVar4;
  func_0x000107c4b88c();
  func_0x000107c61180();
  if (lVar5 != 0) {
    lVar1 = unaff_x20 + _DAT_112ea3ae8;
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    lVar3 = *(long *)(lVar1 + 0x20);
    func_0x0001000a8868(lVar1,uVar2);
    func_0x000107c4077c(lVar5);
    (**(code **)(lVar3 + 0x28))(uVar2,lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar4);
  return;
}



/* Entry: 10251dc4c; end: 10251dfe7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251dc4c(uint param_1,undefined *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long unaff_x20;
  ulong *puVar15;
  ulong uVar16;
  long lVar17;
  undefined *puStack_88;
  undefined1 auStack_78 [24];
  
  lVar13 = _DAT_112ea3a98;
  func_0x000107c61428(unaff_x20 + _DAT_112ea3a98,auStack_78,0,0);
  lVar13 = *(long *)(unaff_x20 + lVar13);
  if (lVar13 == 0) {
    func_0x0001000285a8(0x112d6cfe8,&UNK_10d92fd10);
    func_0x00010283c73c(0);
    return;
  }
  if (param_2 == (undefined *)0x0) {
    puStack_88 = PTR_PTR_1126aead8;
    func_0x000107c610f8();
    func_0x000107c61174(lVar13);
    func_0x000107c4807c();
  }
  else {
    func_0x000107c61174(lVar13);
    puStack_88 = param_2;
  }
  lVar17 = *(long *)(unaff_x20 + _DAT_112ea3ab8);
  uVar16 = *(ulong *)(lVar17 + 0x10);
  uVar1 = *(ulong *)(unaff_x20 + _DAT_112ea3ac8);
  uVar4 = ((ulong *)(unaff_x20 + _DAT_112ea3ac8))[1];
  func_0x000107c615f0(param_2);
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar16 != 0) {
    uVar12 = 0;
    do {
      puVar15 = (ulong *)(lVar17 + 0x28 + uVar12 * 0x10);
      uVar14 = uVar12;
      while( true ) {
        if (*(ulong *)(lVar17 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10251dfe8);
          (*pcVar9)();
        }
        uVar2 = puVar15[-1];
        uVar5 = *puVar15;
        if ((uVar2 != uVar1 || uVar5 != uVar4) &&
           (uVar12 = uVar2, func_0x000107c605b8(uVar2,uVar5,uVar1,uVar4,0), (uVar12 & 1) == 0))
        break;
        uVar14 = uVar14 + 1;
        puVar15 = puVar15 + 2;
        if (uVar16 == uVar14) goto joined_r0x00010251ded4;
      }
      func_0x000107c61434(uVar5);
      puVar11 = puVar8;
      func_0x000107c61558();
      if (((ulong)puVar11 & 1) == 0) {
        func_0x000100403514(0,*(long *)(puVar8 + 0x10) + 1,1);
      }
      uVar3 = *(ulong *)(puVar8 + 0x10);
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar3) {
        func_0x000100403514(1 < *(ulong *)(puVar8 + 0x18),uVar3 + 1,1);
      }
      uVar12 = uVar14 + 1;
      *(ulong *)(puVar8 + 0x10) = uVar3 + 1;
      *(ulong *)(puVar8 + uVar3 * 0x10 + 0x20) = uVar2;
      *(ulong *)(puVar8 + uVar3 * 0x10 + 0x28) = uVar5;
    } while (uVar16 - 1 != uVar14);
  }
joined_r0x00010251ded4:
  if ((param_1 & 1) == 0) {
    func_0x000107c61574(puVar8);
    lVar17 = ((undefined8 *)(unaff_x20 + _DAT_112ea3af0))[1];
    func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112ea3af0));
    (**(code **)(lVar17 + 0x58))();
    func_0x000107c61170(lVar13);
    goto LAB_10251dfbc;
  }
  if (*(long *)(puVar8 + 0x10) == 0) {
LAB_10251de84:
    lVar17 = unaff_x20 + _DAT_112ea3ae8;
    uVar6 = *(undefined8 *)(lVar17 + 0x18);
    lVar7 = *(long *)(lVar17 + 0x20);
    func_0x0001000a8868(lVar17,uVar6);
    (**(code **)(lVar7 + 0x18))(puVar8,1,1,puStack_88,0,uVar6,lVar7);
    puVar11 = puVar8;
  }
  else {
    lVar17 = *(long *)(puVar8 + 0x20);
    uVar6 = *(undefined8 *)(puVar8 + 0x28);
    func_0x000107c61434(uVar6);
    func_0x00010251d174(lVar17,uVar6);
    func_0x000107c6142c(uVar6);
    if (lVar17 != 0) goto LAB_10251de84;
    puVar10 = &UNK_11051c080;
    func_0x000107c613fc(&UNK_11051c080,0x20,7);
    *(long *)(puVar10 + 0x10) = unaff_x20;
    *(undefined **)(puVar10 + 0x18) = puVar8;
    func_0x000107c61174();
    func_0x000107c6157c(puVar8);
    puVar11 = (undefined *)0x50;
    func_0x0001001ca524(0x50,0,0x3c,4,0,0,&UNK_10dab62a8,puVar10,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar8);
    func_0x000107c61574(puVar10);
  }
  func_0x000107c61574(puVar11);
  FUN_10283c69c();
  func_0x000107c61170(lVar13);
LAB_10251dfbc:
  func_0x000107c615e8(puStack_88);
  return;
}



/* Entry: 10251dfe8; end: 10251e153;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251dfe8(undefined8 param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  
  uVar7 = *(ulong *)(unaff_x20 + _DAT_112ea3a80);
  uVar4 = uVar7;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (uVar4 != 0) {
    uVar5 = uVar4;
    func_0x000107c4ec80();
    func_0x000107c61180();
    if (uVar5 == 0) {
      func_0x000107c615e8(uVar4);
    }
    else {
      uVar6 = uVar5;
      func_0x000107c5aa6c();
      func_0x000107c615e8(uVar4);
      func_0x000107c61170(uVar5);
      if (uVar6 == 1) {
        func_0x000107c5c734();
        func_0x000107c61180();
        if (uVar7 != 0) {
          uVar4 = uVar7;
          func_0x000107c4ec80();
          func_0x000107c61180();
          if (uVar4 == 0) {
            func_0x000107c615e8(uVar7);
          }
          else {
            uVar5 = uVar4;
            func_0x000107c443c8();
            func_0x000107c615e8(uVar7);
            func_0x000107c61170(uVar4);
            if ((uVar5 & 1) != 0) goto LAB_10251e0bc;
          }
        }
        if ((param_2 & 1) == 0) {
          lVar1 = unaff_x20 + _DAT_112ea3ae8;
          uVar2 = *(undefined8 *)(lVar1 + 0x18);
          lVar3 = *(long *)(lVar1 + 0x20);
          func_0x0001000a8868(lVar1,uVar2);
          (**(code **)(lVar3 + 0x10))(param_3,uVar2,lVar3);
          return;
        }
      }
    }
  }
LAB_10251e0bc:
  lVar1 = unaff_x20 + _DAT_112ea3ae8;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 0x18))(param_1,param_2 & 1,0,param_3,0,uVar2,lVar3);
  return;
}



/* Entry: 10251e154; end: 10251e16b;  */

void FUN_10251e154(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10251e16c,0,0);
  return;
}



/* Entry: 10251e16c; end: 10251e237;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251e16c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x18);
  lVar5 = *(long *)(lVar4 + 0x10);
  *(long *)(unaff_x22 + 0x20) = lVar5;
  if (lVar5 == 1) {
    lVar5 = *(long *)(lVar4 + 0x20);
    uVar2 = *(undefined8 *)(lVar4 + 0x28);
    func_0x000107c61434(uVar2);
    func_0x00010251d174(lVar5,uVar2);
    func_0x000107c6142c(uVar2);
    if (lVar5 == 0) {
      puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x10) + _DAT_112ea3b28);
      FUN_10251e31c(*puVar1,puVar1[1],*(undefined8 *)(*(long *)(unaff_x22 + 0x10) + _DAT_112ea3b20))
      ;
                    /* WARNING: Could not recover jumptable at 0x00010251e234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
  }
  plVar3 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10251e238;
  plVar3[10] = *(long *)(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10251e4a4,0,0);
  return;
}



/* Entry: 10251e238; end: 10251e287;  */

void FUN_10251e238(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x30) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10251e288,0,0);
  return;
}



/* Entry: 10251e288; end: 10251e31b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251e288(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x30) == '\x01' && *(long *)(unaff_x22 + 0x20) == 1) {
    lVar3 = *(long *)(*(long *)(unaff_x22 + 0x18) + 0x20);
    uVar2 = *(undefined8 *)(*(long *)(unaff_x22 + 0x18) + 0x28);
    func_0x000107c61434(uVar2);
    func_0x00010251d174(lVar3,uVar2);
    func_0x000107c6142c(uVar2);
    if (lVar3 == 0) {
      puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x10) + _DAT_112ea3b28);
      FUN_10251e31c(*puVar1,puVar1[1],*(undefined8 *)(*(long *)(unaff_x22 + 0x10) + _DAT_112ea3b20))
      ;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010251e318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10251e31c; end: 10251e48b;  */

/* WARNING: Possible PIC construction at 0x00010251e428: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010251e438: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010251e42c) */
/* WARNING: Removing unreachable block (ram,0x00010251e43c) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251e31c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ea3b48);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  FUN_10251f5c0();
  if (param_3 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c51e00(lVar1);
    func_0x000107c61170(param_1);
    puVar2 = &UNK_11051c3a0;
    func_0x000107c613fc(&UNK_11051c3a0,0x18,7);
    *(long *)(puVar2 + 0x10) = unaff_x20;
    puVar3 = &UNK_11051c3c8;
    func_0x000107c613fc(&UNK_11051c3c8,0x20,7);
    *(undefined **)(puVar3 + 0x10) = &UNK_10dab6390;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    func_0x000107c61174();
    func_0x0001001ca524(0x50,0,0x3c,4,0,0,&UNK_10dab6398,puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 10251e48c; end: 10251e4a3;  */

void FUN_10251e48c(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10251e4a4,0,0);
  return;
}



/* Entry: 10251e4a4; end: 10251e597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251e4a4(void)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined *puVar6;
  long unaff_x22;
  long lVar7;
  
  lVar7 = *(long *)(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x58;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10251e598;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,0);
  plVar2 = (long *)0x1;
  func_0x00010061b458();
  puVar3 = &UNK_11051c3f0;
  func_0x000107c613fc(&UNK_11051c3f0,0x18,7);
  *(long *)(puVar3 + 0x10) = lVar1;
  pcVar4 = FUN_102522b1c;
  puVar6 = puVar3;
  (**(code **)(*plVar2 + 0x60))(FUN_102522b1c);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(plVar2);
  pcVar5 = pcVar4;
  func_0x000107c614f0(pcVar4);
  (**(code **)(puVar6 + 0x18))(*(undefined8 *)(lVar7 + _DAT_112ea3aa8),pcVar5,puVar6);
  func_0x000107c615e8(pcVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 10251e598; end: 10251e5d7;  */

void FUN_10251e598(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10251e5d8,0,0);
  return;
}



/* Entry: 10251e5d8; end: 10251e5e3;  */

void FUN_10251e5d8(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010251e5e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0x58));
  return;
}



/* Entry: 10251e5e4; end: 10251e7bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251e5e4(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar4 = _DAT_112ea3a98;
  func_0x000107c61428(unaff_x20 + _DAT_112ea3a98,auStack_68,0,0);
  lVar4 = *(long *)(unaff_x20 + lVar4);
  if (lVar4 != 0) {
    puVar8 = *(undefined **)(unaff_x20 + _DAT_112ea3a80);
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (puVar8 == (undefined *)0x0) {
      func_0x000107c61170(lVar4);
    }
    else {
      puVar5 = puVar8;
      func_0x000107c4ec80();
      func_0x000107c61180();
      if (puVar5 != (undefined *)0x0) {
        puVar6 = puVar5;
        func_0x000107c443c8();
        if (((ulong)puVar6 & 1) == 0) {
          func_0x0001000285a8(0x112d6cfe8,&UNK_10d92fd10);
          func_0x00010283c73c(1);
          func_0x000107c61170(lVar4);
          func_0x000107c615e8(puVar8);
        }
        else {
          puVar6 = PTR_PTR_1126aead8;
          func_0x000107c610f8(PTR_PTR_1126aead8);
          func_0x000107c4807c();
          lVar1 = unaff_x20 + _DAT_112ea3ae8;
          uVar2 = *(undefined8 *)(lVar1 + 0x18);
          lVar3 = *(long *)(lVar1 + 0x20);
          func_0x0001000a8868(lVar1,uVar2);
          (**(code **)(lVar3 + 0x20))(puVar6,uVar2,lVar3);
          puVar7 = puVar5;
          func_0x000107c5aa6c();
          if (puVar7 == (undefined *)0x1) {
            func_0x0001000285a8(0x112d6cfe8,&UNK_10d92fd10);
            func_0x00010283c73c(0);
          }
          else {
            func_0x00010283c69c();
          }
          func_0x000107c61170(lVar4);
          func_0x000107c615e8(puVar8);
          func_0x000107c61170(puVar5);
          puVar5 = puVar6;
        }
        func_0x000107c61170(puVar5);
        return;
      }
      func_0x000107c61170(lVar4);
      func_0x000107c615e8(puVar8);
    }
  }
  func_0x0001000285a8(0x112d6cfe8,&UNK_10d92fd10);
  func_0x00010283c73c(0);
  return;
}



/* Entry: 10251e7c0; end: 10251e86f;  */

void FUN_10251e7c0(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10251e810;
  plVar1[0x11] = 2;
  plVar1[0x12] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10251ec60,0,0);
  return;
}



/* Entry: 10251e870; end: 10251e917;  */

void FUN_10251e870(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  if (*(long *)(unaff_x22 + 0x28) == 1) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
    func_0x000107c4d664(uVar3);
    func_0x000107c61170(puVar1);
    func_0x000107c3fedc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010251e8d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10251e918;
  lVar4 = *(long *)(unaff_x22 + 0x10);
  *(undefined4 *)(plVar2 + 0x13) = 0;
  plVar2[0x10] = 2;
  plVar2[0x11] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10251ee44,0,0);
  return;
}



/* Entry: 10251e918; end: 10251e9b7;  */

void FUN_10251e918(byte param_1)

{
  long *plVar1;
  code *pcVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar3 = *unaff_x22;
  lVar4 = *unaff_x22;
  *(long *)(lVar3 + 0x40) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x38));
  if (unaff_x20 == 0) {
    plVar1 = (long *)0x70;
    func_0x000107c615b8();
    *(long **)(lVar3 + 0x48) = plVar1;
    *plVar1 = lVar4;
    plVar1[1] = (long)FUN_10251e9b8;
    lVar4 = *(long *)(lVar3 + 0x10);
    plVar1[10] = *(long *)(lVar3 + 0x28);
    plVar1[0xb] = lVar4;
    *(byte *)((long)plVar1 + 0x6c) = param_1 & 1;
    pcVar2 = FUN_10251f040;
  }
  else {
    pcVar2 = (code *)0x10251eb94;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 10251e9b8; end: 10251ea23;  */

void FUN_10251e9b8(undefined4 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x50) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x48));
  if (unaff_x20 == 0) {
    *(undefined4 *)(lVar2 + 0x70) = param_1;
    pcVar1 = FUN_10251ea24;
  }
  else {
    pcVar1 = (code *)0x10251ebd0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10251ea24; end: 10251eaab;  */

void FUN_10251ea24(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c4d664(uVar3);
  func_0x000107c61170(puVar1);
  func_0x000107c3fedc(uVar3);
  plVar2 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x58) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10251eaac;
  lVar4 = *(long *)(unaff_x22 + 0x10);
  plVar2[0x11] = 2;
  plVar2[0x12] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10251ec60,0,0);
  return;
}



/* Entry: 10251eaac; end: 10251eb17;  */

void FUN_10251eaac(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x60) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x58));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x68) = param_1;
    pcVar1 = FUN_10251eb18;
  }
  else {
    pcVar1 = (code *)0x10251ec0c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10251eb18; end: 10251ec47;  */

void FUN_10251eb18(void)

{
  long unaff_x22;
  
  FUN_10251f194(*(long *)(unaff_x22 + 0x68) == 1,*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010251eb54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10251ec48; end: 10251ec5f;  */

void FUN_10251ec48(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0x90) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10251ec60,0,0);
  return;
}



/* Entry: 10251ec60; end: 10251edaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251ec60(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x22;
  undefined8 *puVar4;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x90) + _DAT_112ea3a88);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x98) = lVar1;
  if (lVar1 != 0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x80;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_10251edb0;
    lVar2 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar2,0);
    puVar3 = &UNK_11051c558;
    func_0x000107c613fc(&UNK_11051c558,0x18,7);
    puVar4 = (undefined8 *)(unaff_x22 + 0x50);
    *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    *(long *)(puVar3 + 0x10) = lVar2;
    *(undefined8 *)(unaff_x22 + 0x70) = 0x102522c3c;
    *(undefined **)(unaff_x22 + 0x78) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_1010ca3e8;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11051c570;
    func_0x000107c60bc4(puVar4);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c4318c(lVar1);
    func_0x000107c60bd0(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  FUN_102522be4();
  func_0x000107c613f8(&UNK_11051c6b8,lVar1,0,0);
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x00010251edac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10251edb0; end: 10251ee27;  */

void FUN_10251edb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10251edf0,0,0);
  return;
}



/* Entry: 10251ee28; end: 10251ee43;  */

void FUN_10251ee28(undefined8 param_1,undefined4 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined4 *)(unaff_x22 + 0x98) = param_2;
  *(undefined8 *)(unaff_x22 + 0x80) = param_1;
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10251ee44,0,0);
  return;
}



/* Entry: 10251ee44; end: 10251efab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251ee44(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x22;
  undefined8 *puVar4;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x88) + _DAT_112ea3a88);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0x90) = lVar1;
  if (lVar1 != 0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x9c;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_10251efac;
    lVar2 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar2,0);
    puVar3 = &UNK_11051c508;
    func_0x000107c613fc(&UNK_11051c508,0x18,7);
    puVar4 = (undefined8 *)(unaff_x22 + 0x50);
    *puVar4 = PTR___NSConcreteStackBlock_11034bd00;
    *(long *)(puVar3 + 0x10) = lVar2;
    *(code **)(unaff_x22 + 0x70) = FUN_102522c24;
    *(undefined **)(unaff_x22 + 0x78) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x60) = &UNK_100288f10;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_11051c520;
    func_0x000107c60bc4(puVar4);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x78));
    func_0x000107c503ac(lVar1);
    func_0x000107c60bd0(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  FUN_102522be4();
  func_0x000107c613f8(&UNK_11051c6b8,lVar1,0,0);
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x00010251efa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 10251efac; end: 10251f023;  */

void FUN_10251efac(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10251efec,0,0);
  return;
}



/* Entry: 10251f024; end: 10251f03f;  */

void FUN_10251f024(undefined1 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x6c) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10251f040,0,0);
  return;
}



/* Entry: 10251f040; end: 10251f11b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251f040(void)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  long unaff_x22;
  
  bVar1 = *(long *)(unaff_x22 + 0x50) == 3;
  uVar4 = 2;
  if (bVar1) {
    uVar4 = 0;
  }
  if (!bVar1 && *(char *)(unaff_x22 + 0x6c) != '\0') {
    lVar2 = *(long *)(*(long *)(unaff_x22 + 0x58) + _DAT_112ea3ac0);
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0x60) = lVar2;
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c4b88c();
      func_0x000107c61180();
      if (lVar3 == 0) {
        *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x68;
        *(long *)(unaff_x22 + 0x10) = unaff_x22;
        *(code **)(unaff_x22 + 0x18) = FUN_10251f11c;
        func_0x000107c61448(unaff_x22 + 0x10,0);
        FUN_10251f244();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
        return;
      }
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(lVar3);
    }
    uVar4 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010251f0d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar4);
  return;
}



/* Entry: 10251f11c; end: 10251f193;  */

void FUN_10251f11c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10251f15c,0,0);
  return;
}



/* Entry: 10251f194; end: 10251f243;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251f194(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ea3b08);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126d54e0;
    func_0x000107c610f8(PTR_PTR_1126d54e0);
    func_0x000107c453e4();
    func_0x000107c59558();
    func_0x000107c520d8(puVar2);
    func_0x000107c5a0f8(puVar2);
    func_0x000107c4bfb0(lVar1);
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 10251f244; end: 10251f44f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251f244(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar6 = &puStack_a0;
  ppuVar7 = &puStack_a0;
  puVar3 = &UNK_11051c440;
  func_0x000107c613fc(&UNK_11051c440,0x11,7);
  puVar3[0x10] = 0;
  lVar2 = _DAT_112ea3aa0;
  if (*(long *)(param_2 + _DAT_112ea3aa0) != 0) {
    func_0x000107c4218c();
  }
  uVar4 = param_3;
  func_0x000107c4b930();
  func_0x000107c61180();
  puVar5 = &UNK_11051c468;
  func_0x000107c613fc(&UNK_11051c468,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = param_3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_102522bd4;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1020d0110;
  puStack_88 = &UNK_11051c480;
  puStack_78 = puVar5;
  func_0x000107c60bc4(&puStack_a0);
  puVar5 = puStack_78;
  func_0x000107c615f0(param_3);
  func_0x000107c61574(puVar5);
  uVar8 = uVar4;
  func_0x000107c43494();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170(uVar4);
  uVar4 = uVar8;
  func_0x000107c435e4();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  uVar8 = uVar4;
  func_0x000107c5ca44(0x3ff0000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  puVar5 = &UNK_11051c4b8;
  func_0x000107c613fc(&UNK_11051c4b8,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar3;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  pcStack_80 = (code *)0x102522bdc;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_1000f6b44;
  puStack_88 = &UNK_11051c4d0;
  puStack_78 = puVar5;
  func_0x000107c60bc4(&puStack_a0);
  puVar5 = puStack_78;
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar5);
  uVar4 = uVar8;
  func_0x000107c5c318();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61170(uVar8);
  uVar8 = *(undefined8 *)(param_2 + lVar2);
  *(undefined8 *)(param_2 + lVar2) = uVar4;
  func_0x000107c61574(puVar3);
  func_0x000107c61170(uVar8);
  return;
}



/* Entry: 10251f450; end: 10251f48f;  */

bool FUN_10251f450(undefined8 param_1,long param_2)

{
  func_0x000107c4b88c();
  func_0x000107c61180();
  if (param_2 != 0) {
    func_0x000107c61170(param_2);
  }
  return param_2 != 0;
}



/* Entry: 10251f490; end: 10251f5bf;  */

void FUN_10251f490(long param_1,long param_2)

{
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    **(undefined4 **)(*(long *)(param_2 + 0x40) + 0x28) = 1;
    func_0x000107c6144c(param_2);
    func_0x000107c61428(param_1 + 0x10,auStack_60,1,0);
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  return;
}



/* Entry: 10251f5c0; end: 10251f7d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10251f5c0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long extraout_x8;
  long unaff_x20;
  undefined *puVar6;
  long lVar7;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  func_0x000102522c7c(0,0x112d4e810,&PTR_PTR_1126b0cd8);
  lVar2 = *(long *)(unaff_x20 + _DAT_112ea3ac8);
  lVar5 = ((long *)(unaff_x20 + _DAT_112ea3ac8))[1];
  func_0x000107c61434(lVar5);
  func_0x000103c1912c(lVar2,lVar5);
  if (lVar2 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126b1a40;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5e7ec();
    func_0x000107c61180();
    func_0x000107c61170();
    puVar6 = puVar3;
    func_0x000107c5e4a4();
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x00010011df08();
    func_0x000107c61180();
    if (puVar6 == (undefined *)0x0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar5);
    }
    puVar4 = puVar3;
    func_0x000107c5e870(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar4);
    func_0x000107c5eea0(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c5ee70();
    (**(code **)(lVar7 + 8))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
    puVar6 = puVar3;
    func_0x000107c5e5b0(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar6);
    func_0x000108605f20(param_1,lVar2);
    func_0x000107c61180();
    func_0x000107c61174();
    puVar6 = puVar3;
    func_0x000107c5e500(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar6);
    puVar6 = puVar3;
    func_0x000107c3ecc8(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(param_1);
  }
  return puVar6;
}



/* Entry: 10251f7d8; end: 10251f843;  */

void FUN_10251f7d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10251f844,uVar1,uVar2);
  return;
}



/* Entry: 10251f844; end: 10251f8a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251f844(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  lVar1 = lVar1 + _DAT_112ea3ae8;
  uVar2 = *(undefined8 *)(lVar1 + 0x18);
  lVar3 = *(long *)(lVar1 + 0x20);
  func_0x0001000a8868(lVar1,uVar2);
  (**(code **)(lVar3 + 0x38))(uVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010251f8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10251f8a8; end: 10251fa17;  */

/* WARNING: Possible PIC construction at 0x00010251f9ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010251f9bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010251f9b0) */
/* WARNING: Removing unreachable block (ram,0x00010251f9c0) */
/* WARNING: Removing unreachable block (ram,0x000107c61170) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251f8a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ea3b48);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + _DAT_112ea3b20);
  FUN_10251f5c0();
  if (lVar3 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c5fadc(0,0xe000000000000000);
    lVar3 = 0x112d38280;
    func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 2;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112ea3b28))[1];
    *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(unaff_x20 + _DAT_112ea3b28);
    *(undefined8 *)(lVar3 + 0x28) = uVar1;
    func_0x000107c61434();
    func_0x000107c5fc48(lVar3,PTR___sSSN_11034da80);
    func_0x000107c61574(lVar3);
    func_0x000107c51e1c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 10251fa18; end: 10251fa77; -[_TtC19MapChatLocationTray31MapChatLocationTrayWorkflowImpl init] */

void FUN_10251fa18(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapChatLocationTray.MapChatLocationTrayWorkflowImpl",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10251fa44);
  (*pcVar1)();
}



/* Entry: 10251fa78; end: 10251fcb3; -[_TtC19MapChatLocationTray31MapChatLocationTrayWorkflowImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010251fb8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010251fb90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251fa78(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ea3ac8 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea3b20));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ea3b28 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ea3ab8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea3b08));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea3b30));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea3b38));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea3ac0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea3a88));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea3a80));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea3ad0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea3b40));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea3b48));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea3b50));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ea3b58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ea3b60));
  return;
}



/* Entry: 10251fcb4; end: 10251fd07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251fcb4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ea3a98;
  func_0x000107c61428(unaff_x20 + _DAT_112ea3a98,auStack_48,1,0);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10251fd08; end: 10251fd6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10251fd08(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112ea3a98;
  func_0x000107c61428(unaff_x20 + _DAT_112ea3a98,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x102522e3c;
  return auVar2;
}



/* Entry: 10251fd70; end: 10251fd77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251fd70(long param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long *plStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112ea3ac0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c4b88c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    if (lVar4 != 0) {
      func_0x000107c4077c(lVar4);
      func_0x000107c61170(lVar4);
      lVar3 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x18) = 2;
      *(undefined8 *)(lVar3 + 0x10) = 1;
      uVar7 = ((undefined8 *)(unaff_x20 + _DAT_112ea3ac8))[1];
      *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(unaff_x20 + _DAT_112ea3ac8);
      *(undefined8 *)(lVar3 + 0x28) = uVar7;
      lStack_e8 = lVar3;
      uStack_e0 = param_2;
      if ((param_3 & 1) == 0) {
        func_0x0001000285a8(0x112ea3738,&UNK_10dab5ea0);
        func_0x000107c61434(uVar7);
        plVar5 = &lStack_e8;
        func_0x000100854cb0();
        func_0x000107c61574(lVar3);
        func_0x0001000285a8(0x112ea31b8,&UNK_10dab5680);
        uStack_d0 = 0;
        uStack_d8 = 0x4028000000000000;
        uStack_c0 = 0x4049000000000000;
        plStack_c8 = (long *)0x4051800000000000;
        uStack_b0 = 0x4049000000000000;
        uStack_b8 = 0x4034000000000000;
        uStack_a8 = uStack_a8 & 0xffffffffffffff00;
        plVar6 = &lStack_e8;
        lStack_e8 = param_1;
        func_0x000100854cb0();
      }
      else {
        func_0x000107c61434(uVar7);
        plVar5 = &lStack_e8;
        func_0x0001006c71a4();
        func_0x000107c61574(lVar3);
        uStack_d0 = 0;
        uStack_d8 = 0x4028000000000000;
        uStack_c0 = 0x4049000000000000;
        plStack_c8 = (long *)0x4051800000000000;
        uStack_b0 = 0x4049000000000000;
        uStack_b8 = 0x4034000000000000;
        uStack_a8 = uStack_a8 & 0xffffffffffffff00;
        plVar6 = &lStack_e8;
        lStack_e8 = param_1;
        func_0x0001006c71a4();
      }
      lStack_e8 = 0;
      uStack_e0 = 0;
      uStack_d8 = 0;
      uStack_d0 = CONCAT71(uStack_d0._1_7_,param_3) & 0xffffffffffffff01;
      uStack_b8 = 0x4049000000000000;
      uStack_c0 = 0x4051800000000000;
      uStack_a8 = 0x4049000000000000;
      uStack_b0 = 0x4034000000000000;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_80 = 0;
      uStack_88 = 0;
      uStack_78 = 0;
      uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ea3ad0) + _DAT_112ed0cb8);
      uStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = uStack_d0;
      uStack_160 = 0;
      uStack_148 = 0x4051800000000000;
      uStack_138 = 0x4034000000000000;
      uStack_140 = 0x4049000000000000;
      uStack_130 = 0x4049000000000000;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_100 = 0;
      plStack_150 = plVar6;
      plStack_128 = plVar5;
      plStack_c8 = plVar6;
      plStack_a0 = plVar5;
      func_0x000107c6157c();
      func_0x000107c6157c(plVar5);
      func_0x000107c6157c(uVar7);
      func_0x00010008a7c8(&uStack_f0,&uStack_170);
      func_0x000107c61574(uVar7);
      func_0x000100083b20(&uStack_170);
      func_0x000107c61574(uStack_f0);
      plVar2 = plStack_150;
      uVar1 = uStack_158;
      func_0x0001000a8868(&uStack_170,uStack_158);
      (*(code *)plVar2[2])(uVar1,plVar2);
      func_0x000107c61574(plVar5);
      func_0x000107c61574(plVar6);
      FUN_102514a34(&lStack_e8);
      func_0x0001000834e4(&uStack_170);
    }
  }
  return;
}



/* Entry: 10251fd78; end: 10251fdeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10251fd78(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x0001004575f0();
  uVar1 = param_1;
  func_0x000107c5cb24();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 10251fdec; end: 10251fe6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251fdec(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ea3a80);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4ec80();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c615e8(lVar1);
    }
    else {
      func_0x000107c443c8();
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 10251fe6c; end: 10251fe93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251fe6c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ea3a80);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c4ec80();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c615e8(lVar1);
    }
    else {
      func_0x000107c5aa6c();
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 10251fe94; end: 10251ff33;  */

/* WARNING: Possible PIC construction at 0x00010251ff18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010251ff1c) */

void FUN_10251fe94(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  puVar1 = &UNK_11051c300;
  func_0x000107c613fc(&UNK_11051c300,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  func_0x000107c61174();
  func_0x000107c61434(param_1);
  func_0x0001001ca524(0x50,0,0x3c,4,0,0,&UNK_10dab6350,puVar1,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10251ff34; end: 10251ff37;  */

/* WARNING: Possible PIC construction at 0x00010251f578: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010251f57c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251ff34(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ea3b08);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1126c59c8;
    func_0x000107c610f8(PTR_PTR_1126c59c8);
    func_0x000107c453e4();
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c5626c(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10251ff38; end: 10251ffa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10251ff38(undefined1 param_1)

{
  undefined1 uStack_21;
  
  uStack_21 = param_1;
  func_0x0001002a64a8(&uStack_21);
  return;
}


