/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1010a0008; end: 1010a004b;  */

void FUN_1010a0008(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1010a004c; end: 1010a0057; -[SCCameraGamesURIPluginEntryPoint setLensURISaberPluginScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010a004c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d59a60;
  func_0x000107c61428(param_1 + _DAT_112d59a60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010a0058; end: 1010a00ab;  */

void FUN_1010a0058(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010a00ac; end: 1010a0537;  */

/* WARNING: Possible PIC construction at 0x0001010a01b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010a03ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010a03fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010a0470: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010a04c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010a04d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010a04e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010a04f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010a02b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010a023c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010a024c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010a021c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010a01fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010a01ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010a0200) */
/* WARNING: Removing unreachable block (ram,0x0001010a0220) */
/* WARNING: Removing unreachable block (ram,0x0001010a0250) */
/* WARNING: Removing unreachable block (ram,0x0001010a0240) */
/* WARNING: Removing unreachable block (ram,0x0001010a04f4) */
/* WARNING: Removing unreachable block (ram,0x0001010a04e4) */
/* WARNING: Removing unreachable block (ram,0x0001010a04d4) */
/* WARNING: Removing unreachable block (ram,0x0001010a04c4) */
/* WARNING: Removing unreachable block (ram,0x0001010a0474) */
/* WARNING: Removing unreachable block (ram,0x0001010a0400) */
/* WARNING: Removing unreachable block (ram,0x0001010a0494) */
/* WARNING: Removing unreachable block (ram,0x0001010a049c) */
/* WARNING: Removing unreachable block (ram,0x0001010a0414) */
/* WARNING: Removing unreachable block (ram,0x0001010a04ac) */
/* WARNING: Removing unreachable block (ram,0x0001010a0420) */
/* WARNING: Removing unreachable block (ram,0x0001010a0534) */
/* WARNING: Removing unreachable block (ram,0x0001010a0428) */
/* WARNING: Removing unreachable block (ram,0x0001010a047c) */
/* WARNING: Removing unreachable block (ram,0x0001010a0434) */
/* WARNING: Removing unreachable block (ram,0x0001010a0480) */
/* WARNING: Removing unreachable block (ram,0x0001010a0444) */
/* WARNING: Removing unreachable block (ram,0x0001010a03f0) */
/* WARNING: Removing unreachable block (ram,0x0001010a01bc) */
/* WARNING: Removing unreachable block (ram,0x0001010a0274) */
/* WARNING: Removing unreachable block (ram,0x0001010a01c0) */
/* WARNING: Removing unreachable block (ram,0x0001010a02bc) */
/* WARNING: Removing unreachable block (ram,0x0001010a03a4) */
/* WARNING: Removing unreachable block (ram,0x0001010a0388) */
/* WARNING: Removing unreachable block (ram,0x0001010a03a8) */
/* WARNING: Removing unreachable block (ram,0x0001010a01f0) */

void FUN_1010a00ac(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3f284();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c3f2a4();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c40080();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4ae78();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar4 = unaff_x20;
        func_0x000107c4aea8();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          func_0x000107c4b4e4();
          func_0x000107c61180();
          if (unaff_x20 == 0) {
            func_0x000107c61170(lVar1);
            lVar1 = lVar2;
          }
          else {
            func_0x000107c4b38c();
            func_0x000107c61180();
            FUN_10109faa0();
            func_0x000107c613fc();
            func_0x000107c4ac68(lVar3);
            func_0x000107c61180();
            func_0x000107c5c734();
            func_0x000107c61180();
            lVar1 = lVar3;
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1010a0538; end: 1010a055b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010a0538(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_1130385c0);
    func_0x000107c61174();
    func_0x000107c61170(lVar1);
    lVar1 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 != 0) {
      func_0x000107c403cc(lVar1);
      func_0x000107c61180();
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 1010a055c; end: 1010a0583; -[SCCameraGamesURIPluginEntryPoint begin] */

void FUN_1010a055c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1010a00ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1010a0584; end: 1010a05c7; -[SCCameraGamesURIPluginEntryPoint end] */

void FUN_1010a0584(undefined8 param_1)

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



/* Entry: 1010a05c8; end: 1010a0983;  */

void FUN_1010a05c8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0x49556172656d6163;
  if ((param_2 == 0x49556172656d6163 && param_3 == -0x12ffff9a8f909cad) ||
     (func_0x000107c605b8(0x49556172656d6163,0xed000065706f6353,param_2,param_3,0), (uVar2 & 1) != 0
     )) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c530ec();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10ecf90)) ||
       (func_0x000107c605b8(0xd000000000000010,0x800000010ef13070,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53104();
    }
    else {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffee) && (param_3 == -0x7ffffffef10ef650)) ||
         (func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53720();
      }
      else {
        if ((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef10e43b0)) {
          uVar2 = 0xd00000000000001b;
          func_0x000107c605b8(0xd00000000000001b,0x800000010ef1bc50,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10dc9c0)) ||
               (func_0x000107c605b8(0xd00000000000001a,0x800000010ef23640,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c55c50();
            }
            else {
              if ((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef10dc9a0)) {
                uVar2 = 0xd00000000000001b;
                func_0x000107c605b8(0xd00000000000001b,0x800000010ef23660,param_2,param_3,0);
                if ((uVar2 & 1) == 0) {
                  uVar2 = 0xd00000000000001f;
                  if (((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef10dc980)) &&
                     (func_0x000107c605b8(0xd00000000000001f,0x800000010ef23680,param_2,param_3,0),
                     (uVar2 & 1) == 0)) {
                    func_0x000107c602fc(0x15);
                    func_0x000107c6142c(0xe000000000000000);
                    func_0x000107c5fb78(param_2,param_3);
                    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                        "LensURIPluginScopeEntryPoint/SCCameraGamesURIPluginEntryPoint.swift"
                                        ,0x43,2,0x42,0);
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x1010a0984);
                    (*pcVar1)();
                  }
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c55edc();
                  goto LAB_1010a065c;
                }
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c55e34();
            }
            goto LAB_1010a065c;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c55c30();
      }
    }
  }
LAB_1010a065c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1010a0984; end: 1010a0a2f; -[SCCameraGamesURIPluginEntryPoint setValue:forIvarName:] */

void FUN_1010a0984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1010a05c8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1010a0a30; end: 1010a0b07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010a0a30(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d59a30,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d59a38,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d59a40,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d59a48,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d59a50,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d59a58,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d59a60,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d59a68) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1010a0b08; end: 1010a0b27; -[SCCameraGamesURIPluginEntryPoint init] */

void FUN_1010a0b08(void)

{
  FUN_1010a0a30();
  return;
}



/* Entry: 1010a0b28; end: 1010a0b5b;  */

void FUN_1010a0b28(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1010a0b5c; end: 1010a0bf3; -[SCCameraGamesURIPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010a0b5c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d59a30);
  func_0x000107c61610(param_1 + _DAT_112d59a38);
  func_0x000107c61610(param_1 + _DAT_112d59a40);
  func_0x000107c61610(param_1 + _DAT_112d59a48);
  func_0x000107c61610(param_1 + _DAT_112d59a50);
  func_0x000107c61610(param_1 + _DAT_112d59a58);
  func_0x000107c61610(param_1 + _DAT_112d59a60);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d59a68));
  return;
}



/* Entry: 1010a0bf4; end: 1010a0c13;  */

void FUN_1010a0bf4(void)

{
  func_0x000107c61168(&PTR_PTR_1127adc98);
  return;
}



/* Entry: 1010a0c14; end: 1010a0c1f; -[SCPlayGamesURIPluginEntryPoint playGamesScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010a0c14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d59a98;
  func_0x000107c61428(param_1 + _DAT_112d59a98,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010a0c20; end: 1010a0c2b; -[SCPlayGamesURIPluginEntryPoint setPlayGamesScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010a0c20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d59a98;
  func_0x000107c61428(param_1 + _DAT_112d59a98,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010a0c2c; end: 1010a0c37; -[SCPlayGamesURIPluginEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010a0c2c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d59aa0;
  func_0x000107c61428(param_1 + _DAT_112d59aa0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010a0c38; end: 1010a0c43; -[SCPlayGamesURIPluginEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010a0c38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d59aa0;
  func_0x000107c61428(param_1 + _DAT_112d59aa0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010a0c44; end: 1010a0c4f; -[SCPlayGamesURIPluginEntryPoint lensCarouselLoggerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010a0c44(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d59aa8;
  func_0x000107c61428(param_1 + _DAT_112d59aa8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010a0c50; end: 1010a0c5b; -[SCPlayGamesURIPluginEntryPoint setLensCarouselLoggerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010a0c50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d59aa8;
  func_0x000107c61428(param_1 + _DAT_112d59aa8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010a0c5c; end: 1010a0c67; -[SCPlayGamesURIPluginEntryPoint lensProcessingUsageServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010a0c5c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d59ab0;
  func_0x000107c61428(param_1 + _DAT_112d59ab0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010a0c68; end: 1010a0c73; -[SCPlayGamesURIPluginEntryPoint setLensProcessingUsageServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010a0c68(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d59ab0;
  func_0x000107c61428(param_1 + _DAT_112d59ab0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010a0c74; end: 1010a0c7f; -[SCPlayGamesURIPluginEntryPoint lensURISaberPluginScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010a0c74(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d59ab8;
  func_0x000107c61428(param_1 + _DAT_112d59ab8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010a0c80; end: 1010a0cc3;  */

void FUN_1010a0c80(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1010a0cc4; end: 1010a0ccf; -[SCPlayGamesURIPluginEntryPoint setLensURISaberPluginScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010a0cc4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d59ab8;
  func_0x000107c61428(param_1 + _DAT_112d59ab8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010a0cd0; end: 1010a0d23;  */

void FUN_1010a0cd0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010a0d24; end: 1010a1163;  */

/* WARNING: Possible PIC construction at 0x0001010a1028: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010a1038: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010a10ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010a10fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010a110c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010a111c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010a0fb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010a0fa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010a0fb4) */
/* WARNING: Removing unreachable block (ram,0x0001010a1120) */
/* WARNING: Removing unreachable block (ram,0x0001010a1110) */
/* WARNING: Removing unreachable block (ram,0x0001010a1100) */
/* WARNING: Removing unreachable block (ram,0x0001010a10b0) */
/* WARNING: Removing unreachable block (ram,0x0001010a103c) */
/* WARNING: Removing unreachable block (ram,0x0001010a10d0) */
/* WARNING: Removing unreachable block (ram,0x0001010a10d8) */
/* WARNING: Removing unreachable block (ram,0x0001010a1050) */
/* WARNING: Removing unreachable block (ram,0x0001010a10e8) */
/* WARNING: Removing unreachable block (ram,0x0001010a105c) */
/* WARNING: Removing unreachable block (ram,0x0001010a1160) */
/* WARNING: Removing unreachable block (ram,0x0001010a1064) */
/* WARNING: Removing unreachable block (ram,0x0001010a10b8) */
/* WARNING: Removing unreachable block (ram,0x0001010a1070) */
/* WARNING: Removing unreachable block (ram,0x0001010a10bc) */
/* WARNING: Removing unreachable block (ram,0x0001010a1080) */
/* WARNING: Removing unreachable block (ram,0x0001010a102c) */
/* WARNING: Removing unreachable block (ram,0x0001010a0fa4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010a0d24(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = unaff_x20;
  func_0x000107c4e88c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4aea8();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c4b4e4();
      func_0x000107c61180();
      if (lVar4 != 0) {
        func_0x000107c4b38c();
        func_0x000107c61180();
        FUN_10109ff4c();
        func_0x000107c613fc();
        uVar8 = *(undefined8 *)(lVar1 + _DAT_11306fb28);
        lVar4 = ((undefined8 *)(lVar1 + _DAT_11306fb28))[1];
        func_0x000107c614f0(uVar8);
        (**(code **)(lVar4 + 8))();
        puStack_c8 = (undefined *)0x0;
        uStack_c0 = 0;
        uStack_b8 = 0xc000000000000000;
        pcStack_a8 = (code *)0x0;
        puStack_b0 = (undefined *)0x0;
        uStack_98 = 0;
        puStack_a0 = (undefined *)0x0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        uStack_68 = 0;
        uStack_70 = 0;
        ppuVar5 = &puStack_c8;
        func_0x0001006c71a4(ppuVar5);
        func_0x000107c61574(uVar8);
        pcVar6 = FUN_10109fe3c;
        func_0x0001000bfde0(FUN_10109fe3c,0,PTR___sSbN_11034dd40);
        func_0x000107c61574(ppuVar5);
        puVar7 = PTR___sSbSQsWP_11034dd50;
        func_0x0001000c2068();
        func_0x000107c61574(pcVar6);
        uVar8 = 0;
        func_0x0001002ed07c(0);
        pcVar6 = FUN_10109fe58;
        func_0x0001000bfde0(FUN_10109fe58,0,uVar8);
        func_0x000107c61574();
        func_0x0001004575f0();
        func_0x000107c61574(pcVar6);
        puVar9 = PTR_PTR_1126ae720;
        func_0x000107c61168();
        puVar10 = &UNK_11037f2c8;
        func_0x000107c613fc(&UNK_11037f2c8,0x18,7);
        func_0x000107c61614(puVar10 + 0x10,lVar1);
        pcStack_a8 = FUN_1010a1164;
        puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c0 = 0x42000000;
        uStack_b8 = 0x100f11710;
        puStack_b0 = &UNK_11037f2e0;
        ppuVar5 = &puStack_c8;
        puStack_a0 = puVar10;
        func_0x000107c60bc4(ppuVar5);
        func_0x000107c61574(puStack_a0);
        func_0x000107c3e4fc();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c3dff0(lVar2);
        func_0x000107c61180();
        uVar8 = *(undefined8 *)(lVar1 + _DAT_11306fac0);
        if (unaff_x20 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined8 *)(unaff_x20 + _DAT_11306fc30);
          func_0x000107c61174(uVar11);
        }
        func_0x000107c61174(uVar8);
        func_0x000107c4af30(lVar3);
        func_0x000107c61180();
        func_0x000103361f80(puVar7,lVar2,puVar9,uVar8,uVar11,lVar3);
        lVar1 = lVar2;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1010a1164; end: 1010a1187;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1010a1164(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_11306faa8);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(lVar1);
  }
  return uVar2;
}



/* Entry: 1010a1188; end: 1010a11af; -[SCPlayGamesURIPluginEntryPoint begin] */

void FUN_1010a1188(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1010a0d24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1010a11b0; end: 1010a11f3; -[SCPlayGamesURIPluginEntryPoint end] */

void FUN_1010a11b0(undefined8 param_1)

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



/* Entry: 1010a11f4; end: 1010a14d7;  */

void FUN_1010a11f4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x656d614779616c70 && param_3 == -0x11ff9a8f909cac8d) ||
     (func_0x000107c605b8(0x656d614779616c70,0xee0065706f635373,param_2,param_3,0), (uVar2 & 1) != 0
     )) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5747c();
  }
  else {
    if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef650)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10dc9c0)) ||
           (func_0x000107c605b8(0xd00000000000001a,0x800000010ef23640,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c55c50();
        }
        else {
          uVar2 = 0xd00000000000001b;
          if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef10dc9a0)) ||
             (func_0x000107c605b8(0xd00000000000001b,0x800000010ef23660,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c55e34();
          }
          else {
            uVar2 = 0xd00000000000001f;
            if (((param_2 != -0x2fffffffffffffe1) || (param_3 != -0x7ffffffef10dc980)) &&
               (func_0x000107c605b8(0xd00000000000001f,0x800000010ef23680,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "LensURIPluginScopeEntryPoint/SCPlayGamesURIPluginEntryPoint.swift"
                                  ,0x41,2,0x3a,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1010a14d8);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c55edc();
          }
        }
        goto LAB_1010a1288;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c53720();
  }
LAB_1010a1288:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1010a14d8; end: 1010a1583; -[SCPlayGamesURIPluginEntryPoint setValue:forIvarName:] */

void FUN_1010a14d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1010a11f4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1010a1584; end: 1010a1633;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010a1584(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d59a98,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d59aa0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d59aa8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d59ab0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d59ab8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d59ac0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1010a1634; end: 1010a1653; -[SCPlayGamesURIPluginEntryPoint init] */

void FUN_1010a1634(void)

{
  FUN_1010a1584();
  return;
}



/* Entry: 1010a1654; end: 1010a1687;  */

void FUN_1010a1654(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1010a1688; end: 1010a16ff; -[SCPlayGamesURIPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010a1688(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d59a98);
  func_0x000107c61610(param_1 + _DAT_112d59aa0);
  func_0x000107c61610(param_1 + _DAT_112d59aa8);
  func_0x000107c61610(param_1 + _DAT_112d59ab0);
  func_0x000107c61610(param_1 + _DAT_112d59ab8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d59ac0));
  return;
}



/* Entry: 1010a1700; end: 1010a171f;  */

void FUN_1010a1700(void)

{
  func_0x000107c61168(&PTR_PTR_1127add88);
  return;
}



/* Entry: 1010a1720; end: 1010a1733;  */

bool FUN_1010a1720(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1010a1734; end: 1010a192f;  */

void FUN_1010a1734(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar4 = 0x4972656b63697473;
  uVar1 = 0xe900000000000064;
  if (cVar3 != '\x01') {
    uVar4 = 0xd000000000000012;
    uVar1 = 0x800000010ef23880;
  }
  uVar2 = 0x6449726174617661;
  if (cVar3 != '\0') {
    uVar2 = uVar4;
  }
  uVar4 = 0xe800000000000000;
  if (cVar3 != '\0') {
    uVar4 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar4);
  func_0x000107c6142c(uVar4);
  func_0x000107c606a8();
  return;
}



/* Entry: 1010a1930; end: 1010a19fb;  */

void FUN_1010a1930(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  cVar3 = *unaff_x20;
  uVar4 = 0x4972656b63697473;
  uVar1 = 0xe900000000000064;
  if (cVar3 != '\x01') {
    uVar4 = 0xd000000000000012;
    uVar1 = 0x800000010ef23880;
  }
  uVar2 = 0x6449726174617661;
  if (cVar3 != '\0') {
    uVar2 = uVar4;
  }
  uVar4 = 0xe800000000000000;
  if (cVar3 != '\0') {
    uVar4 = uVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar4;
  return;
}



/* Entry: 1010a19fc; end: 1010a1a1f;  */

void FUN_1010a19fc(undefined1 *param_1,undefined1 param_2)

{
  func_0x0001010a3554();
  *param_1 = param_2;
  return;
}



/* Entry: 1010a1a20; end: 1010a1a37;  */

undefined1  [16] FUN_1010a1a20(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1010a1a38; end: 1010a1a87;  */

void FUN_1010a1a38(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1010a39dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1010a1a88; end: 1010a1acb;  */

void FUN_1010a1a88(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  FUN_1010a35b8(&uStack_48);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_40;
    *param_1 = uStack_48;
    param_1[3] = uStack_30;
    param_1[2] = uStack_38;
    *(undefined1 *)(param_1 + 4) = uStack_28;
  }
  return;
}



/* Entry: 1010a1acc; end: 1010a1ad3;  */

undefined8 FUN_1010a1acc(void)

{
  return 1;
}



/* Entry: 1010a1ad4; end: 1010a1b73;  */

void FUN_1010a1ad4(void)

{
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(0);
  func_0x000107c606a8();
  return;
}



/* Entry: 1010a1b74; end: 1010a1b8b;  */

undefined1  [16] FUN_1010a1b74(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe800000000000000;
  auVar1._0_8_ = 0x697255616964656d;
  return auVar1;
}



/* Entry: 1010a1b8c; end: 1010a1c0f;  */

void FUN_1010a1b8c(byte *param_1,long param_2,long param_3)

{
  byte bVar1;
  
  bVar1 = 0x6d;
  if (param_2 == 0x697255616964656d && param_3 == -0x1800000000000000) {
    func_0x000107c6142c(param_3);
    bVar1 = 0;
  }
  else {
    func_0x000107c605b8(0x697255616964656d,0xe800000000000000,param_2,param_3,0);
    func_0x000107c6142c(param_3);
    bVar1 = (bVar1 ^ 0xff) & 1;
  }
  *param_1 = bVar1;
  return;
}



/* Entry: 1010a1c10; end: 1010a1c27;  */

undefined1  [16] FUN_1010a1c10(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 1010a1c28; end: 1010a1c77;  */

void FUN_1010a1c28(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x0001010a43a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 1010a1c78; end: 1010a1d67;  */

void FUN_1010a1c78(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar6;
  
  lVar5 = 0x112d59bf8;
  func_0x0001000285a8(0x112d59bf8,&UNK_10d9209b8);
  lVar6 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar2);
  func_0x0001010a43a4();
  func_0x000107c606ec(&stack0xffffffffffffffa0 + -extraout_x8,&UNK_11037f7d0,&UNK_11037f7d0,param_1,
                      uVar2,uVar4);
  func_0x000107c6053c(uVar1,uVar3);
  (**(code **)(lVar6 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,lVar5);
  return;
}



/* Entry: 1010a1d68; end: 1010a1dbb;  */

void FUN_1010a1d68(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000107c5eea4(0);
  func_0x000100028750();
  func_0x000100028790(uVar1,0x1137ff180);
  func_0x000107c5ee80(uVar1,0x4072c00000000000);
  return;
}



/* Entry: 1010a1dbc; end: 1010a1ecb;  */

long FUN_1010a1dbc(long *param_1,code *param_2,code *param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar4);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    (*param_2)();
    func_0x000107c613fc();
    (*param_3)();
    uVar3 = *(undefined8 *)(unaff_x20 + lVar4);
    *(long *)(unaff_x20 + lVar4) = lVar1;
    func_0x000107c6157c();
    func_0x000107c61574(uVar3);
    lVar2 = 0;
  }
  func_0x000107c6157c(lVar2);
  return lVar1;
}



/* Entry: 1010a1ecc; end: 1010a2533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010a1ecc(undefined8 param_1,undefined8 *param_2,code *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long extraout_x8;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_a0 [8];
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar3 = 0;
  pcStack_98 = param_3;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar4 = *(long *)(unaff_x20 + _DAT_112d59b10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x000107c5d7e0(param_1);
    func_0x000107c61180();
    func_0x000107c5edb4(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000107c61170(param_1);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar7 = PTR_PTR_1126b1ce0;
    func_0x000107c610f8(PTR_PTR_1126b1ce0);
    puVar8 = puVar7;
    func_0x000107c5ed90();
    uVar9 = 0xd00000000000001c;
    func_0x000107c5fadc(0xd00000000000001c,0x800000010ef237c0);
    puVar10 = puVar6;
    func_0x000107c5f9dc(puVar6,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c4913c(puVar7);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(puVar10);
    (*pcStack_98)(puVar7);
    func_0x000107c6142c(puVar6);
    func_0x000107c61170(puVar7);
    (**(code **)(lVar11 + 8))(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar3);
  }
  else {
    puVar8 = PTR_PTR_1126afd38;
    func_0x000107c610f8(PTR_PTR_1126afd38);
    func_0x000107c453e4();
    uVar9 = *param_2;
    uVar1 = param_2[1];
    func_0x000107c5fadc(uVar9,uVar1);
    puVar6 = puVar8;
    func_0x000107c5e458(puVar8);
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    func_0x000107c61170(puVar6);
    uVar9 = param_2[2];
    uVar2 = param_2[3];
    func_0x000107c5fadc(uVar9,uVar2);
    puVar6 = puVar8;
    func_0x000107c5e780(puVar8);
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    func_0x000107c61170(puVar6);
    puVar10 = puVar8;
    func_0x000107c3ecc8(puVar8);
    func_0x000107c61180();
    puVar6 = &UNK_11037f448;
    func_0x000107c613fc(&UNK_11037f448,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    puVar7 = &UNK_11037f470;
    func_0x000107c613fc(&UNK_11037f470,0x58,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(undefined8 *)(puVar7 + 0x18) = param_1;
    uVar9 = *param_2;
    uVar13 = param_2[3];
    uVar12 = param_2[2];
    *(undefined8 *)(puVar7 + 0x28) = param_2[1];
    *(undefined8 *)(puVar7 + 0x20) = uVar9;
    *(undefined8 *)(puVar7 + 0x38) = uVar13;
    *(undefined8 *)(puVar7 + 0x30) = uVar12;
    puVar7[0x40] = *(undefined1 *)(param_2 + 4);
    *(code **)(puVar7 + 0x48) = pcStack_98;
    *(undefined8 *)(puVar7 + 0x50) = param_4;
    uStack_70 = 0x1010a3f0c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_1010a2bbc;
    puStack_78 = &UNK_11037f488;
    ppuVar5 = &puStack_90;
    puStack_68 = puVar7;
    func_0x000107c60bc4(ppuVar5);
    puVar6 = puStack_68;
    func_0x000107c61174(param_1);
    func_0x000107c61434(uVar1);
    func_0x000107c61434(uVar2);
    func_0x000107c6157c(param_4);
    func_0x000107c61574(puVar6);
    func_0x000107c4329c(lVar4);
    func_0x000107c61180();
    func_0x000107c615e8();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(lVar4);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar10);
  }
  return;
}



/* Entry: 1010a2534; end: 1010a25af; -[_TtC26LensBitmojiImageURIHandler26LensBitmojiImageURIHandler handleWithRequest:completion:] */

/* WARNING: Possible PIC construction at 0x0001010a2598: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010a259c) */

void FUN_1010a2534(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c60bc4(param_4);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1010a3a1c(param_3,param_1,param_4);
  func_0x000107c60bd0(param_4);
  func_0x000107c60bd0(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1010a25b0; end: 1010a25b3; -[_TtC26LensBitmojiImageURIHandler26LensBitmojiImageURIHandler reset] */

void FUN_1010a25b0(void)

{
  return;
}



/* Entry: 1010a25b4; end: 1010a2643;  */

void FUN_1010a25b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_58,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    FUN_1010a2644(param_5,param_6,param_1,param_7,param_8);
    func_0x000107c61170(param_4);
  }
  return;
}



/* Entry: 1010a2644; end: 1010a2bbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010a2644(undefined8 param_1,undefined8 *param_2,long param_3,code *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar12;
  long unaff_x20;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [16];
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar3 = unaff_x20;
  puVar11 = param_2;
  pcStack_c0 = param_4;
  uStack_b8 = param_5;
  func_0x000107c614f0();
  lVar2 = 0;
  lStack_d8 = lVar3;
  func_0x000107c5ede0();
  lVar15 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar16 = (long)&puStack_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar14 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar13 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = *(long *)(unaff_x20 + _DAT_112d59b18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x000107c5d7e0(param_1);
    func_0x000107c61180();
    func_0x000107c5edb4(lVar16);
    func_0x000107c61170(param_1);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar7 = PTR_PTR_1126b1ce0;
    func_0x000107c610f8(PTR_PTR_1126b1ce0);
    puVar8 = puVar7;
    func_0x000107c5ed90();
    uVar9 = 0xd000000000000017;
    func_0x000107c5fadc(0xd000000000000017,0x800000010ef237e0);
    puVar10 = puVar6;
    func_0x000107c5f9dc(puVar6,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c4913c(puVar7);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(puVar10);
    (*pcStack_c0)(puVar7);
    func_0x000107c6142c(puVar6);
    func_0x000107c61170(puVar7);
    pcVar12 = *(code **)(lVar15 + 8);
  }
  else {
    lStack_e0 = lVar2;
    lStack_d0 = lVar4;
    uStack_c8 = param_1;
    if (param_3 != 0) {
      func_0x000107c60bb8();
      func_0x000107c61180();
      if (param_3 != 0) {
        lVar2 = param_3;
        func_0x000107c5ee30();
        func_0x000107c61170(param_3);
        uStack_a8 = param_2[1];
        puStack_b0 = (undefined *)*param_2;
        puStack_70 = puStack_b0;
        uStack_68 = uStack_a8;
        func_0x000100402194(&puStack_70,auStack_80);
        func_0x000107c5fb78(0x2d,0xe100000000000000);
        func_0x000107c5fb78(param_2[2],param_2[3]);
        uVar9 = uStack_a8;
        puVar6 = puStack_b0;
        puVar7 = PTR_PTR_1126b1060;
        func_0x000107c610f8();
        puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
        func_0x000107c47d08();
        puStack_f0 = puVar7;
        func_0x000107c61170(puVar8);
        puVar7 = PTR_PTR_1126b08b8;
        func_0x000107c610f8();
        func_0x000107c5fadc(puVar6,uVar9);
        func_0x000107c6142c(uVar9);
        func_0x000107c4766c();
        func_0x000107c61170(puVar6);
        puStack_e8 = puVar11;
        lStack_e0 = lVar2;
        func_0x000107c5ee20(lVar2,puVar11);
        if (lRam0000000112d59b60 != -1) {
          func_0x000107c61568(0x112d59b60,FUN_1010a1d68);
        }
        lVar4 = lVar3;
        func_0x000100028790(lVar3,0x1137ff180);
        lVar15 = lVar13;
        (**(code **)(lVar14 + 0x10))(lVar13,lVar4,lVar3);
        func_0x000107c5ee70();
        (**(code **)(lVar14 + 8))(lVar13,lVar3);
        puVar6 = &UNK_11037f4c0;
        func_0x000107c613fc(&UNK_11037f4c0,0x50,7);
        uVar1 = uStack_b8;
        uVar9 = uStack_c8;
        lVar3 = lStack_d0;
        puVar8 = puStack_f0;
        *(long *)(puVar6 + 0x10) = lStack_d0;
        *(undefined **)(puVar6 + 0x18) = puVar7;
        *(undefined **)(puVar6 + 0x20) = puStack_f0;
        *(long *)(puVar6 + 0x28) = unaff_x20;
        *(undefined8 *)(puVar6 + 0x30) = uStack_c8;
        *(code **)(puVar6 + 0x38) = pcStack_c0;
        *(undefined8 *)(puVar6 + 0x40) = uStack_b8;
        *(long *)(puVar6 + 0x48) = lStack_d8;
        pcStack_90 = FUN_1010a3f38;
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0x42000000;
        puStack_a0 = &UNK_100ab47f8;
        puStack_98 = &UNK_11037f4d8;
        ppuVar5 = &puStack_b0;
        puStack_88 = puVar6;
        func_0x000107c60bc4(ppuVar5);
        puVar6 = puStack_88;
        func_0x000107c615f0(lVar3);
        func_0x000107c61174(puVar7);
        func_0x000107c61174(puVar8);
        func_0x000107c61174();
        func_0x000107c61174(uVar9);
        func_0x000107c6157c(uVar1);
        func_0x000107c61574(puVar6);
        func_0x000107c5168c(lVar3);
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar7);
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar15);
        func_0x00010006c090(lStack_e0,puStack_e8);
        func_0x000107c615e8(lVar3);
        return;
      }
    }
    uVar9 = uStack_c8;
    func_0x000107c5d7e0(uStack_c8);
    func_0x000107c61180();
    func_0x000107c5edb4(lVar16);
    func_0x000107c61170(uVar9);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
    puVar7 = PTR_PTR_1126b1ce0;
    func_0x000107c610f8(PTR_PTR_1126b1ce0);
    puVar8 = puVar7;
    func_0x000107c5ed90();
    uVar9 = 0xd000000000000018;
    func_0x000107c5fadc(0xd000000000000018,0x800000010ef23800);
    puVar10 = puVar6;
    func_0x000107c5f9dc(puVar6,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    func_0x000107c4913c(puVar7);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(puVar10);
    (*pcStack_c0)(puVar7);
    func_0x000107c615e8(lStack_d0);
    func_0x000107c6142c(puVar6);
    func_0x000107c61170(puVar7);
    pcVar12 = *(code **)(lVar15 + 8);
    lVar2 = lStack_e0;
  }
  (*pcVar12)(lVar16,lVar2);
  return;
}



/* Entry: 1010a2bbc; end: 1010a2c57;  */

/* WARNING: Possible PIC construction at 0x0001010a2c30: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010a2c34) */

void FUN_1010a2bbc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  (*pcVar1)(param_2,param_3,param_4);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1010a2c58; end: 1010a2ed7;  */

void FUN_1010a2c58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_d0 [16];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uStack_78 = param_4[1];
  uStack_80 = *param_4;
  uStack_88 = param_4[3];
  uStack_90 = param_4[2];
  puVar3 = &UNK_11037f560;
  func_0x000107c613fc(&UNK_11037f560,0x58,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  uVar9 = *param_4;
  uVar11 = param_4[3];
  uVar10 = param_4[2];
  *(undefined8 *)(puVar3 + 0x28) = param_4[1];
  *(undefined8 *)(puVar3 + 0x20) = uVar9;
  *(undefined8 *)(puVar3 + 0x38) = uVar11;
  *(undefined8 *)(puVar3 + 0x30) = uVar10;
  puVar3[0x40] = *(undefined1 *)(param_4 + 4);
  *(undefined8 *)(puVar3 + 0x48) = param_5;
  *(undefined8 *)(puVar3 + 0x50) = param_6;
  puVar4 = &UNK_11037f588;
  func_0x000107c613fc(&UNK_11037f588,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x1010a400c;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x1010a403c;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  uStack_b0 = 0x1010a45c8;
  puStack_a8 = &UNK_11037f5a0;
  ppuVar5 = &puStack_c0;
  puStack_98 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar6 = puStack_98;
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000100402194(&uStack_80,auStack_d0);
  func_0x000100402194(&uStack_90,auStack_d0);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_11037f5d8;
  func_0x000107c613fc(&UNK_11037f5d8,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = param_3;
  *(undefined8 *)(puVar6 + 0x18) = param_5;
  *(undefined8 *)(puVar6 + 0x20) = param_6;
  *(undefined8 *)(puVar6 + 0x28) = param_7;
  puVar7 = &UNK_11037f600;
  func_0x000107c613fc(&UNK_11037f600,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_1010a405c;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  uStack_a0 = 0x1010a45bc;
  puStack_c0 = puVar1;
  uStack_b8 = 0x42000000;
  uStack_b0 = 0x100e27b38;
  puStack_a8 = &UNK_11037f618;
  ppuVar8 = &puStack_c0;
  puStack_98 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar1 = puStack_98;
  func_0x000107c61174(param_3);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x68,0x9c,0x21,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1010a2ed4);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x68,0xa3,0x18,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1010a2ed8);
  (*pcVar2)();
}



/* Entry: 1010a2ed8; end: 1010a3097;  */

void FUN_1010a2ed8(long param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  lVar1 = 0;
  uStack_90 = param_4;
  pcStack_88 = param_3;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar7 = (long)&uStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5d7e0(param_2);
  func_0x000107c61180();
  func_0x000107c5edb4(lVar7);
  func_0x000107c61170(param_2);
  if (param_1 == 0) {
    uStack_70 = 0x800000010ef23860;
    uStack_78 = 0xd000000000000011;
  }
  else {
    func_0x000107c614cc(param_1,auStack_68,auStack_80);
    func_0x000107c60640(uStack_78,uStack_70);
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar3 = PTR_PTR_1126b1ce0;
  func_0x000107c610f8(PTR_PTR_1126b1ce0);
  puVar4 = puVar3;
  func_0x000107c5ed90();
  func_0x000107c5fadc(uStack_78,uStack_70);
  puVar5 = puVar2;
  func_0x000107c5f9dc(puVar2,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c4913c(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uStack_78);
  func_0x000107c61170(puVar5);
  (*pcStack_88)(puVar3);
  func_0x000107c6142c(uStack_70);
  func_0x000107c6142c(puVar2);
  func_0x000107c61170(puVar3);
  (**(code **)(lVar6 + 8))(lVar7,lVar1);
  return;
}



/* Entry: 1010a3098; end: 1010a30e3;  */

void FUN_1010a3098(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1010a30e4; end: 1010a347b;  */

/* WARNING: Removing unreachable block (ram,0x0001010a31ec) */

void FUN_1010a30e4(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long *plVar10;
  long lVar11;
  undefined8 in_x5;
  code *in_x6;
  long extraout_x8;
  undefined1 *puVar12;
  long lVar13;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  long lStack_70;
  long lStack_68;
  
  lVar1 = 0;
  lVar11 = param_2;
  pcStack_80 = in_x6;
  func_0x000107c5ede0();
  lVar13 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar12 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if ((param_1 & 1) != 0) {
    func_0x000107c50764();
    func_0x000107c61180();
    if (param_2 != 0) {
      lVar2 = param_2;
      func_0x000107c4407c();
      func_0x000107c61180();
      if (lVar2 != 0) {
        lVar3 = lVar2;
        func_0x000107c5faec();
        func_0x000107c61170(lVar2);
        puVar4 = &DAT_112d59b00;
        FUN_1010a1dbc(&DAT_112d59b00,PTR___s10Foundation11JSONEncoderCMa_1103503e0,
                      PTR___s10Foundation11JSONEncoderCACycfc_1103503d8);
        puVar5 = puVar4;
        lStack_70 = lVar3;
        lStack_68 = lVar11;
        func_0x0001010a3f68();
        puVar7 = &UNK_11037f6a8;
        plVar6 = &lStack_70;
        func_0x000107c5eb4c(plVar6,&UNK_11037f6a8,puVar5);
        func_0x000107c61574(puVar4);
        func_0x000107c6142c(lVar11);
        func_0x000107c5d7e0(in_x5);
        func_0x000107c61180();
        func_0x000107c5edb4(puVar12);
        func_0x000107c61170(in_x5);
        uStack_88 = 200;
        puStack_98 = puVar7;
        func_0x00010006c00c(plVar6,puVar7);
        puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
        func_0x0001001830b8();
        puVar5 = PTR_PTR_1126b1ce0;
        puStack_90 = puVar4;
        func_0x000107c610f8(PTR_PTR_1126b1ce0);
        puVar9 = puVar5;
        func_0x000107c5ed90();
        func_0x000107c5f9dc(puVar4,PTR___sSSN_11034da80,PTR___sSSN_11034da80,
                            PTR___sSSSHsWP_11034da90);
        plVar10 = plVar6;
        func_0x000107c5ee20(plVar6,puVar7);
        func_0x000107c4913c(puVar5);
        func_0x000107c61170(puVar9);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(plVar10);
        (*pcStack_80)(puVar5);
        func_0x000107c6142c(puStack_90);
        func_0x000107c61170(puVar5);
        puVar4 = puStack_98;
        func_0x00010006c090(plVar6,puStack_98);
        func_0x000107c615e8(param_2);
        func_0x00010006c090(plVar6,puVar4);
        goto LAB_1010a330c;
      }
      func_0x000107c615e8(param_2);
    }
  }
  func_0x000107c5d7e0(in_x5);
  func_0x000107c61180();
  func_0x000107c5edb4(puVar12);
  func_0x000107c61170(in_x5);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar7 = PTR_PTR_1126b1ce0;
  func_0x000107c610f8(PTR_PTR_1126b1ce0);
  puVar5 = puVar7;
  func_0x000107c5ed90();
  uVar8 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef23820);
  puVar9 = puVar4;
  func_0x000107c5f9dc(puVar4,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c4913c(puVar7);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar9);
  (*pcStack_80)(puVar7);
  func_0x000107c6142c(puVar4);
  func_0x000107c61170(puVar7);
LAB_1010a330c:
  (**(code **)(lVar13 + 8))(puVar12,lVar1);
  return;
}



/* Entry: 1010a347c; end: 1010a34db; -[_TtC26LensBitmojiImageURIHandler26LensBitmojiImageURIHandler init] */

void FUN_1010a347c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensBitmojiImageURIHandler.LensBitmojiImageURIHandler",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010a34a8);
  (*pcVar1)();
}



/* Entry: 1010a34dc; end: 1010a35b7; -[_TtC26LensBitmojiImageURIHandler26LensBitmojiImageURIHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001010a3538: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010a353c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010a34dc(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d59b08));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d59b10));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d59b18));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d59af0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d59af8));
  return;
}



/* Entry: 1010a35b8; end: 1010a3787;  */

/* WARNING: Removing unreachable block (ram,0x0001010a36ec) */
/* WARNING: Removing unreachable block (ram,0x0001010a3744) */
/* WARNING: Removing unreachable block (ram,0x0001010a3758) */
/* WARNING: Removing unreachable block (ram,0x0001010a3684) */

void FUN_1010a35b8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long extraout_x8;
  long unaff_x21;
  long lVar8;
  undefined1 *puStack_70;
  undefined1 *puStack_68;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  
  lVar3 = 0x112d59b50;
  func_0x0001000285a8(0x112d59b50,&UNK_10d920818);
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar4 = param_2;
  func_0x0001000a8868(param_2,uVar1);
  FUN_1010a39dc();
  func_0x000107c606e0((long)&puStack_70 - extraout_x8,&UNK_11037f740,&UNK_11037f740,lVar4,uVar1,
                      uVar2);
  if (unaff_x21 == 0) {
    uStack_51 = 0;
    puVar5 = &uStack_51;
    lVar4 = lVar3;
    func_0x000107c604f4();
    uStack_52 = 1;
    puVar6 = &uStack_52;
    lVar7 = lVar3;
    puStack_68 = puVar5;
    func_0x000107c604f4();
    uStack_53 = 2;
    puVar5 = &uStack_53;
    puStack_70 = puVar6;
    func_0x000107c604f8(puVar5,lVar3);
    (**(code **)(lVar8 + 8))((long)&puStack_70 - extraout_x8,lVar3);
    func_0x0001000834e4(param_2);
    *param_1 = puStack_68;
    param_1[1] = lVar4;
    param_1[2] = puStack_70;
    param_1[3] = lVar7;
    *(byte *)(param_1 + 4) = (byte)puVar5 & 1;
  }
  else {
    func_0x0001000834e4(param_2);
  }
  return;
}



/* Entry: 1010a3788; end: 1010a37e7;  */

void FUN_1010a3788(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d59b20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9207ec;
  func_0x000107c61520(&UNK_10d9207ec,&UNK_11037f3f0);
  puRam0000000112d59b20 = puVar1;
  return;
}



/* Entry: 1010a37e8; end: 1010a387f;  */

long FUN_1010a37e8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1010a3880; end: 1010a38f3;  */

undefined8 * FUN_1010a3880(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 1010a38f4; end: 1010a393f;  */

undefined8 * FUN_1010a38f4(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Entry: 1010a3940; end: 1010a39db;  */

int FUN_1010a3940(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1010a39dc; end: 1010a3a1b;  */

void FUN_1010a39dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d59b58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d920960;
  func_0x000107c61520(&UNK_10d920960,&UNK_11037f740);
  puRam0000000112d59b58 = puVar1;
  return;
}



/* Entry: 1010a3a1c; end: 1010a3efb;  */

/* WARNING: Removing unreachable block (ram,0x0001010a3d28) */

void FUN_1010a3a1c(undefined **param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar11;
  code *pcVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  byte bStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  byte bStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  puVar14 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = (long)puVar14 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar2 = &UNK_11037f420;
  lVar9 = 0x18;
  func_0x000107c613fc(&UNK_11037f420,0x18,7);
  *(long *)(puVar2 + 0x10) = param_3;
  puStack_e0 = puVar2;
  func_0x000107c60bc4(param_3);
  ppuVar3 = param_1;
  func_0x000107c5d7e0();
  func_0x000107c61180();
  func_0x000107c5edb4(lVar13 - extraout_x12_00);
  func_0x000107c61170();
  func_0x000107c5edc8();
  pcVar12 = *(code **)(lVar11 + 8);
  lVar11 = lVar1;
  (*pcVar12)(lVar13 - extraout_x12_00);
  if (lVar9 != 0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110dd6d58;
    func_0x000107c5faec();
    if (ppuVar3 == ppuVar4 && lVar9 == lVar11) {
      lVar10 = lVar11;
      func_0x000107c6142c(lVar9);
      func_0x000107c6142c(lVar11);
    }
    else {
      lVar10 = lVar9;
      func_0x000107c605b8(ppuVar3,lVar9,ppuVar4,lVar11,0);
      func_0x000107c6142c(lVar9);
      func_0x000107c6142c(lVar11);
      if (((ulong)ppuVar3 & 1) == 0) goto LAB_1010a3d44;
    }
    ppuVar3 = param_1;
    uStack_e8 = param_2;
    func_0x000107c4ce5c();
    func_0x000107c61180();
    ppuVar4 = ppuVar3;
    func_0x000107c5faec();
    lVar11 = lVar10;
    func_0x000107c61170(ppuVar3);
    if ((ppuVar4 == (undefined **)0x544547) && (lVar10 == -0x1d00000000000000)) {
      func_0x000107c6142c(0xe300000000000000);
    }
    else {
      lVar11 = lVar10;
      func_0x000107c605b8(ppuVar4,lVar10,0x544547,0xe300000000000000,0);
      func_0x000107c6142c(lVar10);
      if (((ulong)ppuVar4 & 1) == 0) goto LAB_1010a3d44;
    }
    ppuVar3 = param_1;
    func_0x000107c5d7e0();
    func_0x000107c61180();
    func_0x000107c5edb4(lVar13);
    func_0x000107c61170();
    func_0x000107c5edc4();
    lVar9 = lVar1;
    (*pcVar12)(lVar13,lVar1);
    if ((ppuVar3 == (undefined **)0xd000000000000016) && (lVar11 == -0x7ffffffef10dc8a0)) {
      func_0x000107c6142c(0x800000010ef23760);
    }
    else {
      lVar9 = lVar11;
      func_0x000107c605b8(ppuVar3,lVar11,0xd000000000000016,0x800000010ef23760,0);
      func_0x000107c6142c(lVar11);
      if (((ulong)ppuVar3 & 1) == 0) goto LAB_1010a3d44;
    }
    ppuVar3 = param_1;
    func_0x000107c3eb80();
    func_0x000107c61180();
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar4 = ppuVar3;
      func_0x000107c5ee30();
      func_0x000107c61170(ppuVar3);
      puVar2 = &DAT_112d59af8;
      FUN_1010a1dbc(&DAT_112d59af8,PTR___s10Foundation11JSONDecoderCMa_110350350,
                    PTR___s10Foundation11JSONDecoderCACycfc_110350348);
      puVar5 = puVar2;
      FUN_1010a3788();
      func_0x000107c5eb1c(&uStack_d0,&UNK_11037f3f0,ppuVar4,lVar9,&UNK_11037f3f0,puVar5);
      func_0x000107c61574(puVar2);
      puVar2 = puStack_e0;
      bStack_80 = bStack_b0;
      uStack_98 = uStack_c8;
      uStack_a0 = uStack_d0;
      uStack_88 = uStack_b8;
      uStack_90 = uStack_c0;
      if ((bStack_b0 & 1) == 0) {
        func_0x0001010a2220(param_1,&uStack_a0,FUN_1010a3efc,puStack_e0);
      }
      else {
        FUN_1010a1ecc();
      }
      func_0x00010006c090(ppuVar4,lVar9);
      uStack_68 = uStack_98;
      uStack_70 = uStack_a0;
      func_0x000100bcb1dc(&uStack_70);
      uStack_c8 = uStack_88;
      uStack_d0 = uStack_90;
      func_0x000100bcb1dc(&uStack_d0);
      goto LAB_1010a3e50;
    }
  }
LAB_1010a3d44:
  func_0x000107c5d7e0(param_1);
  func_0x000107c61180();
  func_0x000107c5edb4(puVar14);
  func_0x000107c61170(param_1);
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar5 = PTR_PTR_1126b1ce0;
  func_0x000107c610f8(PTR_PTR_1126b1ce0);
  puVar6 = puVar5;
  func_0x000107c5ed90();
  uVar7 = 0x2064696c61766e69;
  func_0x000107c5fadc(0x2064696c61766e69,0xef74736575716572);
  puVar8 = puVar2;
  func_0x000107c5f9dc(puVar2,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c4913c(puVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(puVar8);
  (**(code **)(param_3 + 0x10))(param_3,puVar5);
  func_0x000107c6142c(puVar2);
  func_0x000107c61170(puVar5);
  (*pcVar12)(puVar14,lVar1);
  puVar2 = puStack_e0;
LAB_1010a3e50:
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 1010a3efc; end: 1010a3f37;  */

void FUN_1010a3efc(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001010a3f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 1010a3f38; end: 1010a3fa7;  */

void FUN_1010a3f38(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1010a30e4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 1010a3fa8; end: 1010a3fbb;  */

void FUN_1010a3fa8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_d0 [16];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar6 = &UNK_11037f560;
  func_0x000107c613fc(&UNK_11037f560,0x58,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar9;
  uVar14 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(puVar6 + 0x28) = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(puVar6 + 0x20) = uVar14;
  *(undefined8 *)(puVar6 + 0x38) = uVar16;
  *(undefined8 *)(puVar6 + 0x30) = uVar15;
  puVar6[0x40] = *(undefined1 *)(unaff_x20 + 0x40);
  *(undefined8 *)(puVar6 + 0x48) = uVar2;
  *(undefined8 *)(puVar6 + 0x50) = uVar3;
  puVar7 = &UNK_11037f588;
  func_0x000107c613fc(&UNK_11037f588,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x1010a400c;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x1010a403c;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  uStack_b0 = 0x1010a45c8;
  puStack_a8 = &UNK_11037f5a0;
  ppuVar8 = &puStack_c0;
  puStack_98 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar10 = puStack_98;
  func_0x000107c61174(uVar1);
  func_0x000107c61174();
  func_0x000100402194(&uStack_80,auStack_d0);
  func_0x000100402194(&uStack_90,auStack_d0);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar10);
  puVar10 = &UNK_11037f5d8;
  func_0x000107c613fc(&UNK_11037f5d8,0x30,7);
  *(undefined8 *)(puVar10 + 0x10) = uVar9;
  *(undefined8 *)(puVar10 + 0x18) = uVar2;
  *(undefined8 *)(puVar10 + 0x20) = uVar3;
  *(undefined8 *)(puVar10 + 0x28) = uVar13;
  puVar11 = &UNK_11037f600;
  func_0x000107c613fc(&UNK_11037f600,0x20,7);
  *(code **)(puVar11 + 0x10) = FUN_1010a405c;
  *(undefined **)(puVar11 + 0x18) = puVar10;
  uStack_a0 = 0x1010a45bc;
  puStack_c0 = puVar4;
  uStack_b8 = 0x42000000;
  uStack_b0 = 0x100e27b38;
  puStack_a8 = &UNK_11037f618;
  ppuVar12 = &puStack_c0;
  puStack_98 = puVar11;
  func_0x000107c60bc4(ppuVar12);
  puVar4 = puStack_98;
  func_0x000107c61174(uVar9);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(puVar11);
  func_0x000107c61574(puVar4);
  func_0x000107c4c754(param_1);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61574(puVar6);
  puVar6 = puVar7;
  func_0x000107c61544(puVar7,"",0x68,0x9c,0x21,1);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1010a2ed4);
    (*pcVar5)();
  }
  puVar6 = puVar11;
  func_0x000107c61544(puVar11,"",0x68,0xa3,0x18,1);
  func_0x000107c61574(puVar11);
  if (((ulong)puVar6 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1010a2ed8);
  (*pcVar5)();
}



/* Entry: 1010a3fbc; end: 1010a405b;  */

void FUN_1010a3fbc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1010a405c; end: 1010a406f;  */

void FUN_1010a405c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  pcStack_88 = *(code **)(unaff_x20 + 0x18);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar8 = (long)&uStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5d7e0(uVar2);
  func_0x000107c61180();
  func_0x000107c5edb4(lVar8);
  func_0x000107c61170(uVar2);
  if (param_1 == 0) {
    uStack_70 = 0x800000010ef23860;
    uStack_78 = 0xd000000000000011;
  }
  else {
    func_0x000107c614cc(param_1,auStack_68,auStack_80);
    func_0x000107c60640(uStack_78,uStack_70);
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar4 = PTR_PTR_1126b1ce0;
  func_0x000107c610f8(PTR_PTR_1126b1ce0);
  puVar5 = puVar4;
  func_0x000107c5ed90();
  func_0x000107c5fadc(uStack_78,uStack_70);
  puVar6 = puVar3;
  func_0x000107c5f9dc(puVar3,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  func_0x000107c4913c(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uStack_78);
  func_0x000107c61170(puVar6);
  (*pcStack_88)(puVar4);
  func_0x000107c6142c(uStack_70);
  func_0x000107c6142c(puVar3);
  func_0x000107c61170(puVar4);
  (**(code **)(lVar7 + 8))(lVar8,lVar1);
  return;
}



/* Entry: 1010a4070; end: 1010a40df;  */

undefined8 * FUN_1010a4070(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 1010a40e0; end: 1010a42db;  */

int FUN_1010a40e0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1010a42dc; end: 1010a431b;  */

void FUN_1010a42dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d59b70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d920910;
  func_0x000107c61520(&UNK_10d920910,&UNK_11037f740);
  puRam0000000112d59b70 = puVar1;
  return;
}



/* Entry: 1010a431c; end: 1010a431f;  */

void FUN_1010a431c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d59b78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d920870;
  func_0x000107c61520(&UNK_10d920870,&UNK_11037f740);
  puRam0000000112d59b78 = puVar1;
  return;
}



/* Entry: 1010a4320; end: 1010a435f;  */

void FUN_1010a4320(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d59b78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d920870;
  func_0x000107c61520(&UNK_10d920870,&UNK_11037f740);
  puRam0000000112d59b78 = puVar1;
  return;
}



/* Entry: 1010a4360; end: 1010a4363;  */

void FUN_1010a4360(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d59b80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d920848;
  func_0x000107c61520(&UNK_10d920848,&UNK_11037f740);
  puRam0000000112d59b80 = puVar1;
  return;
}



/* Entry: 1010a4364; end: 1010a43e3;  */

void FUN_1010a4364(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d59b80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d920848;
  func_0x000107c61520(&UNK_10d920848,&UNK_11037f740);
  puRam0000000112d59b80 = puVar1;
  return;
}



/* Entry: 1010a43e4; end: 1010a44d3;  */

uint FUN_1010a43e4(uint *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  iVar1 = 2;
  if (0xffff < param_2 + 1U) {
    iVar1 = 4;
  }
  if (param_2 + 1U < 0x100) {
    iVar1 = 1;
  }
  if (iVar1 != 4) {
    if (iVar1 == 2) {
      return (uint)(ushort)*param_1;
    }
    return (uint)(byte)*param_1;
  }
  return *param_1;
}



/* Entry: 1010a44d4; end: 1010a4513;  */

void FUN_1010a44d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d59c08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d920a50;
  func_0x000107c61520(&UNK_10d920a50,&UNK_11037f7d0);
  puRam0000000112d59c08 = puVar1;
  return;
}



/* Entry: 1010a4514; end: 1010a4517;  */

void FUN_1010a4514(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d59c10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9209e8;
  func_0x000107c61520(&UNK_10d9209e8,&UNK_11037f7d0);
  puRam0000000112d59c10 = puVar1;
  return;
}



/* Entry: 1010a4518; end: 1010a4557;  */

void FUN_1010a4518(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d59c10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9209e8;
  func_0x000107c61520(&UNK_10d9209e8,&UNK_11037f7d0);
  puRam0000000112d59c10 = puVar1;
  return;
}



/* Entry: 1010a4558; end: 1010a455b;  */

void FUN_1010a4558(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d59c18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9209c0;
  func_0x000107c61520(&UNK_10d9209c0,&UNK_11037f7d0);
  puRam0000000112d59c18 = puVar1;
  return;
}



/* Entry: 1010a455c; end: 1010a459b;  */

void FUN_1010a455c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d59c18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9209c0;
  func_0x000107c61520(&UNK_10d9209c0,&UNK_11037f7d0);
  puRam0000000112d59c18 = puVar1;
  return;
}



/* Entry: 1010a459c; end: 1010a45cb;  */

void FUN_1010a459c(long param_1,long param_2)

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



/* Entry: 1010a45cc; end: 1010a47d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1010a45cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 unaff_x20;
  long lStack_70;
  long lStack_68;
  
  plVar5 = &lStack_70;
  func_0x000107c613fc();
  uVar8 = param_2;
  func_0x000107c5bd7c();
  func_0x000107c61180();
  uVar1 = param_3;
  func_0x000107c51d00();
  func_0x000107c61180();
  uVar2 = param_4;
  func_0x000107c40430();
  func_0x000107c61180();
  lVar3 = 0;
  func_0x0001010a37c8();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112d59af0) = 0;
  *(undefined8 *)(lVar4 + _DAT_112d59af8) = 0;
  *(undefined8 *)(lVar4 + _DAT_112d59b00) = 0;
  *(undefined8 *)(lVar4 + _DAT_112d59b08) = uVar8;
  *(undefined8 *)(lVar4 + _DAT_112d59b10) = uVar1;
  *(undefined8 *)(lVar4 + _DAT_112d59b18) = uVar2;
  puVar9 = PTR_s_init_1125d9248;
  lStack_70 = lVar4;
  lStack_68 = lVar3;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  ppuVar6 = &PTR____CFConstantStringClassReference_110dd6d58;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110dd6d58);
  puVar7 = PTR_PTR_1126b1cb0;
  func_0x000107c610f8(PTR_PTR_1126b1cb0);
  func_0x000107c61174(plVar5);
  func_0x000107c5fadc(ppuVar6,puVar9);
  func_0x000107c6142c(puVar9);
  uVar8 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef23740);
  func_0x000107c46c6c(puVar7);
  func_0x000107c61170(plVar5);
  func_0x000107c61170(ppuVar6);
  func_0x000107c61170(uVar8);
  uVar8 = param_1;
  func_0x000107c5d7e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(plVar5);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(uVar8);
  return unaff_x20;
}



/* Entry: 1010a47d4; end: 1010a47ef;  */

void FUN_1010a47d4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010a47f0; end: 1010a480f;  */

void FUN_1010a47f0(void)

{
  func_0x000107c61168(&PTR_PTR_112d59c60);
  return;
}



/* Entry: 1010a4810; end: 1010a481b; -[SCLensBitmojiImageURIHandlerEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010a4810(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d59cb8;
  func_0x000107c61428(param_1 + _DAT_112d59cb8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010a481c; end: 1010a4827; -[SCLensBitmojiImageURIHandlerEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010a481c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d59cb8;
  func_0x000107c61428(param_1 + _DAT_112d59cb8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010a4828; end: 1010a4833; -[SCLensBitmojiImageURIHandlerEntryPoint stickerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010a4828(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d59cc0;
  func_0x000107c61428(param_1 + _DAT_112d59cc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010a4834; end: 1010a483f; -[SCLensBitmojiImageURIHandlerEntryPoint setStickerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010a4834(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d59cc0;
  func_0x000107c61428(param_1 + _DAT_112d59cc0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010a4840; end: 1010a484b; -[SCLensBitmojiImageURIHandlerEntryPoint selfieServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010a4840(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d59cc8;
  func_0x000107c61428(param_1 + _DAT_112d59cc8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


