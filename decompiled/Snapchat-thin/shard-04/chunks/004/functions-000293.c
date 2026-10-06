/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103482a94; end: 103482a9f; -[SCLensCarouselCameraPaginationEntryPoint setLensConfigurationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103482a94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f70ff8;
  func_0x000107c61428(param_1 + _DAT_112f70ff8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103482aa0; end: 103482af3;  */

void FUN_103482aa0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103482af4; end: 103482e53;  */

/* WARNING: Possible PIC construction at 0x000103482c40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103482c54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103482c70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103482c80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103482d08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103482d38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103482d48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103482d58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103482dc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103482dd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103482de4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103482e24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103482dac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103482d9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103482db0) */
/* WARNING: Removing unreachable block (ram,0x000103482e28) */
/* WARNING: Removing unreachable block (ram,0x000103482dd8) */
/* WARNING: Removing unreachable block (ram,0x000103482dc8) */
/* WARNING: Removing unreachable block (ram,0x000103482d5c) */
/* WARNING: Removing unreachable block (ram,0x000103482de8) */
/* WARNING: Removing unreachable block (ram,0x000103482d4c) */
/* WARNING: Removing unreachable block (ram,0x000103482d3c) */
/* WARNING: Removing unreachable block (ram,0x000103482d0c) */
/* WARNING: Removing unreachable block (ram,0x000103482c84) */
/* WARNING: Removing unreachable block (ram,0x000103482c90) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x000103482c74) */
/* WARNING: Removing unreachable block (ram,0x000103482c58) */
/* WARNING: Removing unreachable block (ram,0x000103482c44) */
/* WARNING: Removing unreachable block (ram,0x000103482da0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103482af4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c3f0d0();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4af24();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4ae68();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c4afbc();
        func_0x000107c61180();
        if (unaff_x20 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar4;
        }
        else {
          lVar4 = 0;
          FUN_10346ed08();
          func_0x000107c613fc();
          *(undefined8 *)(lVar4 + 0x10) = 0;
          if (*(long *)(lVar3 + _DAT_11307d080) != 0) {
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174(lVar2);
            func_0x000107c61174();
            func_0x000107c61174(unaff_x20);
            func_0x000107c61174();
            func_0x000107c4aeb0(lVar2);
            func_0x000107c61180();
            FUN_10346eda4();
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



/* Entry: 103482e54; end: 103482e5b;  */

void FUN_103482e54(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(lVar3 + 0x50);
    lVar2 = *(long *)(lVar3 + 0x58);
    func_0x0001000a8868(lVar3 + 0x38,uVar1);
    (**(code **)(lVar2 + 8))(uVar1,lVar2);
    func_0x000107c61574(lVar3);
  }
  return;
}



/* Entry: 103482e5c; end: 103482e83; -[SCLensCarouselCameraPaginationEntryPoint begin] */

void FUN_103482e5c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103482af4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103482e84; end: 103482ec7; -[SCLensCarouselCameraPaginationEntryPoint end] */

void FUN_103482e84(undefined8 param_1)

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



/* Entry: 103482ec8; end: 1034831a3;  */

void FUN_103482ec8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef650)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10da5c0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000012,0x800000010ef25a40,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffd0) && (param_3 == -0x7ffffffef10da6a0)) ||
             (func_0x000107c605b8(0xd000000000000030,0x800000010ef25960,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            FUN_1034833cc(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c55c80();
          }
          else {
            uVar2 = 0xd000000000000021;
            if (((param_2 == -0x2fffffffffffffdf) && (param_3 == -0x7ffffffef0f247e0)) ||
               (func_0x000107c605b8(0xd000000000000021,0x800000010f0db820,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              FUN_1034833cc(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c55c28();
            }
            else {
              uVar2 = 0xd000000000000019;
              if (((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef10e0a30)) &&
                 (func_0x000107c605b8(0xd000000000000019,0x800000010ef1f5d0,param_2,param_3,0),
                 (uVar2 & 1) == 0)) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "SCLensCarouselIntegration/SCLensCarouselCameraPaginationEntryPoint.swift"
                                    ,0x48,2,0x36,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1034831a4);
                (*pcVar1)();
              }
              FUN_1034833cc(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c55cbc();
            }
          }
          goto LAB_103482f5c;
        }
      }
      FUN_1034833cc(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53004();
      goto LAB_103482f5c;
    }
  }
  FUN_1034833cc(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_103482f5c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1034831a4; end: 10348324f; -[SCLensCarouselCameraPaginationEntryPoint setValue:forIvarName:] */

void FUN_1034831a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_103482ec8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103483250; end: 1034832ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103483250(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f70fd8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f70fe0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f70fe8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f70ff0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f70ff8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f71000) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103483300; end: 10348331f; -[SCLensCarouselCameraPaginationEntryPoint init] */

void FUN_103483300(void)

{
  FUN_103483250();
  return;
}



/* Entry: 103483320; end: 103483353;  */

void FUN_103483320(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103483354; end: 1034833cb; -[SCLensCarouselCameraPaginationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103483354(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f70fd8);
  func_0x000107c61610(param_1 + _DAT_112f70fe0);
  func_0x000107c61610(param_1 + _DAT_112f70fe8);
  func_0x000107c61610(param_1 + _DAT_112f70ff0);
  func_0x000107c61610(param_1 + _DAT_112f70ff8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f71000));
  return;
}



/* Entry: 1034833cc; end: 1034833ef;  */

long * FUN_1034833cc(long *param_1,long param_2)

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



/* Entry: 1034833f0; end: 10348340f;  */

void FUN_1034833f0(void)

{
  func_0x000107c61168(&PTR_PTR_1128dd390);
  return;
}



/* Entry: 103483410; end: 10348341b; -[SCLensCarouselTalkPaginationEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103483410(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f71030;
  func_0x000107c61428(param_1 + _DAT_112f71030,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10348341c; end: 103483427; -[SCLensCarouselTalkPaginationEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10348341c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f71030;
  func_0x000107c61428(param_1 + _DAT_112f71030,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103483428; end: 103483433; -[SCLensCarouselTalkPaginationEntryPoint talkScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103483428(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f71038;
  func_0x000107c61428(param_1 + _DAT_112f71038,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103483434; end: 10348343f; -[SCLensCarouselTalkPaginationEntryPoint setTalkScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103483434(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f71038;
  func_0x000107c61428(param_1 + _DAT_112f71038,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103483440; end: 10348344b; -[SCLensCarouselTalkPaginationEntryPoint lensCarouselScopedLensCarouselManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103483440(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f71040;
  func_0x000107c61428(param_1 + _DAT_112f71040,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10348344c; end: 103483457; -[SCLensCarouselTalkPaginationEntryPoint setLensCarouselScopedLensCarouselManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10348344c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f71040;
  func_0x000107c61428(param_1 + _DAT_112f71040,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103483458; end: 103483463; -[SCLensCarouselTalkPaginationEntryPoint lensCarouselDataProvidingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103483458(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f71048;
  func_0x000107c61428(param_1 + _DAT_112f71048,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103483464; end: 10348346f; -[SCLensCarouselTalkPaginationEntryPoint setLensCarouselDataProvidingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103483464(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f71048;
  func_0x000107c61428(param_1 + _DAT_112f71048,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103483470; end: 10348347b; -[SCLensCarouselTalkPaginationEntryPoint lensConfigurationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103483470(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f71050;
  func_0x000107c61428(param_1 + _DAT_112f71050,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10348347c; end: 1034834bf;  */

void FUN_10348347c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1034834c0; end: 1034834cb; -[SCLensCarouselTalkPaginationEntryPoint setLensConfigurationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034834c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f71050;
  func_0x000107c61428(param_1 + _DAT_112f71050,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1034834cc; end: 10348351f;  */

void FUN_1034834cc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103483520; end: 10348387f;  */

/* WARNING: Possible PIC construction at 0x00010348366c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103483680: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010348369c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034836ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103483734: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103483764: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103483774: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103483784: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034837f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103483800: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103483810: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103483850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034837d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034837c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034837dc) */
/* WARNING: Removing unreachable block (ram,0x000103483854) */
/* WARNING: Removing unreachable block (ram,0x000103483804) */
/* WARNING: Removing unreachable block (ram,0x0001034837f4) */
/* WARNING: Removing unreachable block (ram,0x000103483788) */
/* WARNING: Removing unreachable block (ram,0x000103483814) */
/* WARNING: Removing unreachable block (ram,0x000103483778) */
/* WARNING: Removing unreachable block (ram,0x000103483768) */
/* WARNING: Removing unreachable block (ram,0x000103483738) */
/* WARNING: Removing unreachable block (ram,0x0001034836b0) */
/* WARNING: Removing unreachable block (ram,0x0001034836bc) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x0001034836a0) */
/* WARNING: Removing unreachable block (ram,0x000103483684) */
/* WARNING: Removing unreachable block (ram,0x000103483670) */
/* WARNING: Removing unreachable block (ram,0x0001034837cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103483520(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c5c6e8();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4af24();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c4ae68();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c4afbc();
        func_0x000107c61180();
        if (unaff_x20 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar4;
        }
        else {
          lVar4 = 0;
          FUN_10346f3d0();
          func_0x000107c613fc();
          *(undefined8 *)(lVar4 + 0x10) = 0;
          if (*(long *)(lVar3 + _DAT_11307d080) != 0) {
            func_0x000107c61174();
            func_0x000107c61174();
            func_0x000107c61174(lVar2);
            func_0x000107c61174();
            func_0x000107c61174(unaff_x20);
            func_0x000107c61174();
            func_0x000107c4aeb0(lVar2);
            func_0x000107c61180();
            FUN_10346eda4();
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



/* Entry: 103483880; end: 103483887;  */

void FUN_103483880(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(lVar3 + 0x50);
    lVar2 = *(long *)(lVar3 + 0x58);
    func_0x0001000a8868(lVar3 + 0x38,uVar1);
    (**(code **)(lVar2 + 8))(uVar1,lVar2);
    func_0x000107c61574(lVar3);
  }
  return;
}



/* Entry: 103483888; end: 1034838af; -[SCLensCarouselTalkPaginationEntryPoint begin] */

void FUN_103483888(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103483520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1034838b0; end: 1034838f3; -[SCLensCarouselTalkPaginationEntryPoint end] */

void FUN_1034838b0(undefined8 param_1)

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



/* Entry: 1034838f4; end: 103483bdb;  */

void FUN_1034838f4(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef650)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      uVar2 = 0;
      if (((param_2 == 0x706f63536b6c6174) && (param_3 == -0x16ffffffffffff9b)) ||
         (func_0x000107c605b8(0x706f63536b6c6174,0xe900000000000065,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        FUN_103483e04(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c59bbc();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffd0) && (param_3 == -0x7ffffffef10da6a0)) ||
           (func_0x000107c605b8(0xd000000000000030,0x800000010ef25960,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          FUN_103483e04(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c55c80();
        }
        else {
          uVar2 = 0xd000000000000021;
          if (((param_2 == -0x2fffffffffffffdf) && (param_3 == -0x7ffffffef0f247e0)) ||
             (func_0x000107c605b8(0xd000000000000021,0x800000010f0db820,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            FUN_103483e04(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c55c28();
          }
          else {
            uVar2 = 0xd000000000000019;
            if (((param_2 != -0x2fffffffffffffe7) || (param_3 != -0x7ffffffef10e0a30)) &&
               (func_0x000107c605b8(0xd000000000000019,0x800000010ef1f5d0,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "SCLensCarouselIntegration/SCLensCarouselTalkPaginationEntryPoint.swift"
                                  ,0x46,2,0x36,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x103483bdc);
              (*pcVar1)();
            }
            FUN_103483e04(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c55cbc();
          }
        }
      }
      goto LAB_103483988;
    }
  }
  FUN_103483e04(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_103483988:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 103483bdc; end: 103483c87; -[SCLensCarouselTalkPaginationEntryPoint setValue:forIvarName:] */

void FUN_103483bdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1034838f4(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 103483c88; end: 103483d37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103483c88(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f71030,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f71038,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f71040,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f71048,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f71050,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f71058) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103483d38; end: 103483d57; -[SCLensCarouselTalkPaginationEntryPoint init] */

void FUN_103483d38(void)

{
  FUN_103483c88();
  return;
}



/* Entry: 103483d58; end: 103483d8b;  */

void FUN_103483d58(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103483d8c; end: 103483e03; -[SCLensCarouselTalkPaginationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103483d8c(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f71030);
  func_0x000107c61610(param_1 + _DAT_112f71038);
  func_0x000107c61610(param_1 + _DAT_112f71040);
  func_0x000107c61610(param_1 + _DAT_112f71048);
  func_0x000107c61610(param_1 + _DAT_112f71050);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f71058));
  return;
}



/* Entry: 103483e04; end: 103483e27;  */

long * FUN_103483e04(long *param_1,long param_2)

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



/* Entry: 103483e28; end: 103483e47;  */

void FUN_103483e28(void)

{
  func_0x000107c61168(&PTR_PTR_1128dd470);
  return;
}



/* Entry: 103483e48; end: 103483e53; -[SCLensCarouselResetWorkflowEntrypoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103483e48(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f71088;
  func_0x000107c61428(param_1 + _DAT_112f71088,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103483e54; end: 103483e5f; -[SCLensCarouselResetWorkflowEntrypoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103483e54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f71088;
  func_0x000107c61428(param_1 + _DAT_112f71088,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103483e60; end: 103483e6b; -[SCLensCarouselResetWorkflowEntrypoint cameraFeatureScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103483e60(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f71090;
  func_0x000107c61428(param_1 + _DAT_112f71090,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103483e6c; end: 103483e77; -[SCLensCarouselResetWorkflowEntrypoint setCameraFeatureScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103483e6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f71090;
  func_0x000107c61428(param_1 + _DAT_112f71090,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103483e78; end: 103483e83; -[SCLensCarouselResetWorkflowEntrypoint lensCarouselScopedLensCarouselManagementServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103483e78(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f71098;
  func_0x000107c61428(param_1 + _DAT_112f71098,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103483e84; end: 103483e8f; -[SCLensCarouselResetWorkflowEntrypoint setLensCarouselScopedLensCarouselManagementServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103483e84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f71098;
  func_0x000107c61428(param_1 + _DAT_112f71098,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103483e90; end: 103483e9b; -[SCLensCarouselResetWorkflowEntrypoint internalResetServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103483e90(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f710a0;
  func_0x000107c61428(param_1 + _DAT_112f710a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103483e9c; end: 103483edf;  */

void FUN_103483e9c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103483ee0; end: 103483eeb; -[SCLensCarouselResetWorkflowEntrypoint setInternalResetServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103483ee0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f710a0;
  func_0x000107c61428(param_1 + _DAT_112f710a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103483eec; end: 103483f3f;  */

void FUN_103483eec(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103483f40; end: 10348421b;  */

/* WARNING: Possible PIC construction at 0x000103484004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103484020: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034840ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034841b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034841c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034841e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103484064: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103484054: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103484068) */
/* WARNING: Removing unreachable block (ram,0x0001034841e4) */
/* WARNING: Removing unreachable block (ram,0x0001034841cc) */
/* WARNING: Removing unreachable block (ram,0x0001034841bc) */
/* WARNING: Removing unreachable block (ram,0x0001034840f0) */
/* WARNING: Removing unreachable block (ram,0x000103484024) */
/* WARNING: Removing unreachable block (ram,0x000103484094) */
/* WARNING: Removing unreachable block (ram,0x000103484028) */
/* WARNING: Removing unreachable block (ram,0x0001034840b0) */
/* WARNING: Removing unreachable block (ram,0x000103484008) */
/* WARNING: Removing unreachable block (ram,0x000103484058) */

void FUN_103483f40(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c3f0d0();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4af24();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c498c4();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        FUN_1034701fc(0);
        func_0x000107c613fc();
        func_0x000107c4aeb0(lVar2);
        func_0x000107c61180();
        func_0x000107c4aeb4();
        func_0x000107c61180();
        lVar1 = lVar2;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10348421c; end: 10348423f;  */

void FUN_10348421c(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  puVar9 = PTR___NSConcreteStackBlock_11034bd00;
  ppuVar3 = &puStack_90;
  ppuVar4 = &puStack_90;
  ppuVar6 = &puStack_90;
  ppuVar7 = &puStack_90;
  pcStack_70 = (code *)0x103470424;
  puStack_68 = (undefined *)0x0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_10006eb60;
  puStack_78 = &UNK_110659cb8;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  pcStack_70 = (code *)0x103470428;
  puStack_68 = (undefined *)0x0;
  puStack_90 = puVar9;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_10006eb60;
  puStack_78 = &UNK_110659ce0;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  puVar5 = &UNK_110659d18;
  func_0x000107c613fc(&UNK_110659d18,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0x1034707a4;
  *(undefined8 *)(puVar5 + 0x18) = unaff_x20;
  pcStack_70 = FUN_1034707ac;
  puStack_90 = puVar9;
  uStack_88 = 0x42000000;
  puStack_80 = (undefined *)0x1034706f0;
  puStack_78 = &UNK_110659d30;
  puStack_68 = puVar5;
  func_0x000107c60bc4(&puStack_90);
  puVar1 = puStack_68;
  func_0x000107c6157c();
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar1);
  pcStack_70 = FUN_103470730;
  puStack_68 = (undefined *)0x0;
  puStack_90 = puVar9;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1016c919c;
  puStack_78 = &UNK_110659d58;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c4c7d0(param_1);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar3);
  uVar8 = 0;
  func_0x000107c61544(0,"",0x88,0x1e,0x2d,1);
  if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103470688);
    (*pcVar2)();
  }
  uVar8 = 0;
  func_0x000107c61544(0,"",0x88,0x20,0x26,1);
  func_0x000107c61574();
  if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10347068c);
    (*pcVar2)();
  }
  puVar9 = puVar5;
  func_0x000107c61544(puVar5,"",0x88,0x22,0x1c,1);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar9 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103470690);
    (*pcVar2)();
  }
  uVar8 = 0;
  func_0x000107c61544(0,"",0x88,0x27,0x27,1);
  if ((uVar8 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103470694);
  (*pcVar2)();
}



/* Entry: 103484240; end: 103484267; -[SCLensCarouselResetWorkflowEntrypoint begin] */

void FUN_103484240(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103483f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103484268; end: 1034842ab; -[SCLensCarouselResetWorkflowEntrypoint end] */

void FUN_103484268(undefined8 param_1)

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



/* Entry: 1034842ac; end: 10348451b;  */

void FUN_1034842ac(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10ef650)) {
    uVar2 = 0;
    func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0);
    if ((uVar2 & 1) == 0) {
      if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10da5c0)) {
        uVar2 = 0;
        func_0x000107c605b8(0xd000000000000012,0x800000010ef25a40,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffd0) && (param_3 == -0x7ffffffef10da6a0)) ||
             (func_0x000107c605b8(0xd000000000000030,0x800000010ef25960,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c55c80();
          }
          else {
            uVar2 = 0xd000000000000015;
            if (((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef0eac970)) &&
               (func_0x000107c605b8(0xd000000000000015,0x800000010f153690,param_2,param_3,0),
               (uVar2 & 1) == 0)) {
              func_0x000107c602fc(0x15);
              func_0x000107c6142c(0xe000000000000000);
              func_0x000107c5fb78(param_2,param_3);
              func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                  "SCLensCarouselIntegration/SCLensCarouselResetWorkflowEntrypoint.swift"
                                  ,0x45,2,0x35,0);
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10348451c);
              (*pcVar1)();
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c554a4();
          }
          goto LAB_103484340;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53004();
      goto LAB_103484340;
    }
  }
  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
  func_0x000107c605b0();
  func_0x000107c53720();
LAB_103484340:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10348451c; end: 1034845c7; -[SCLensCarouselResetWorkflowEntrypoint setValue:forIvarName:] */

void FUN_10348451c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1034842ac(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1034845c8; end: 103484663; -[SCLensCarouselResetWorkflowEntrypoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034845c8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112f71088,0);
  func_0x000107c61614(param_1 + _DAT_112f71090,0);
  func_0x000107c61614(param_1 + _DAT_112f71098,0);
  func_0x000107c61614(param_1 + _DAT_112f710a0,0);
  *(undefined8 *)(param_1 + _DAT_112f710a8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103484664; end: 103484697;  */

void FUN_103484664(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103484698; end: 1034846ff; -[SCLensCarouselResetWorkflowEntrypoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103484698(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f71088);
  func_0x000107c61610(param_1 + _DAT_112f71090);
  func_0x000107c61610(param_1 + _DAT_112f71098);
  func_0x000107c61610(param_1 + _DAT_112f710a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f710a8));
  return;
}



/* Entry: 103484700; end: 10348471f;  */

void FUN_103484700(void)

{
  func_0x000107c61168(&PTR_PTR_1128dd550);
  return;
}



/* Entry: 103484720; end: 10348473f; -[_TtC27SCLensCarouselFeaturesScope27SCLensCarouselFeaturesScope featureContainerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103484720(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112f710d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103484740; end: 10348476b; -[_TtC27SCLensCarouselFeaturesScope27SCLensCarouselFeaturesScope init] */

void FUN_103484740(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensCarouselFeaturesScope.SCLensCarouselFeaturesScope",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10348476c);
  (*pcVar1)();
}



/* Entry: 10348476c; end: 10348477b; -[_TtC27SCLensCarouselFeaturesScope27SCLensCarouselFeaturesScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10348476c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f710d8));
  return;
}



/* Entry: 10348477c; end: 1034847c7;  */

void FUN_10348477c(undefined8 param_1)

{
  func_0x0001000285a8(0x112f710e0,&UNK_10dbcd080);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_103484834,param_1);
  return;
}



/* Entry: 1034847c8; end: 103484833;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034847c8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_103484a2c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f710e8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103484834; end: 10348483b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103484834(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_103484a2c();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f710e8) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10348483c; end: 103484887;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10348483c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f710e8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103484888; end: 10348492b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103484888(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *aplStack_58 [2];
  undefined8 uStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  FUN_103484988();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112f710d8) = param_1;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c615f0(param_1);
  plVar4 = &lStack_40;
  func_0x000107c61154(plVar4,puVar1);
  aplStack_58[0] = plVar4;
  func_0x00010008a7c8(&uStack_48,aplStack_58);
  func_0x000100083b20(aplStack_58);
  func_0x000107c61574(uStack_48);
  func_0x000107c615e8(aplStack_58[0]);
  return plVar4;
}



/* Entry: 10348492c; end: 103484987; -[_TtC27SCLensCarouselFeaturesScope35SCLensCarouselFeaturesScopeServices buildWithFeatureContainerView:] */

void FUN_10348492c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103484888(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103484988; end: 1034849a7;  */

void FUN_103484988(void)

{
  func_0x000107c61168(&PTR_PTR_1128dd628);
  return;
}



/* Entry: 1034849a8; end: 1034849d3; -[_TtC27SCLensCarouselFeaturesScope35SCLensCarouselFeaturesScopeServices init] */

void FUN_1034849a8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensCarouselFeaturesScope.SCLensCarouselFeaturesScopeServices",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1034849d4);
  (*pcVar1)();
}



/* Entry: 1034849d4; end: 1034849d7;  */

void FUN_1034849d4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1034849d8; end: 103484a0b;  */

void FUN_1034849d8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103484a0c; end: 103484a2b; -[_TtC27SCLensCarouselFeaturesScope35SCLensCarouselFeaturesScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103484a0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f710e8));
  return;
}



/* Entry: 103484a2c; end: 103484a4b;  */

void FUN_103484a2c(void)

{
  func_0x000107c61168(&PTR_PTR_1128dd6e8);
  return;
}



/* Entry: 103484a4c; end: 103484a4f;  */

void FUN_103484a4c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103484a50; end: 103484a5f;  */

undefined1  [16] FUN_103484a50(void)

{
  return ZEXT816(0x11065adf0);
}



/* Entry: 103484a60; end: 103484a6f; -[_TtC33SCLegacyLensCarouselResetServices33SCLegacyLensCarouselResetServices resetEventsProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103484a60(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f71158));
  return;
}



/* Entry: 103484a70; end: 103484abb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103484a70(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f71158) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103484abc; end: 103484b1b; -[_TtC33SCLegacyLensCarouselResetServices33SCLegacyLensCarouselResetServices init] */

void FUN_103484abc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLegacyLensCarouselResetServices.SCLegacyLensCarouselResetServices",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103484ae8);
  (*pcVar1)();
}



/* Entry: 103484b1c; end: 103484b2b; -[_TtC33SCLegacyLensCarouselResetServices33SCLegacyLensCarouselResetServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103484b1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f71158));
  return;
}



/* Entry: 103484b2c; end: 103484b3b; -[_TtC33LensCarouselResetInternalServices35SCLensCarouselResetInternalServices resetNotifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103484b2c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f71188));
  return;
}



/* Entry: 103484b3c; end: 103484b87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103484b3c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f71188) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103484b88; end: 103484be7; -[_TtC33LensCarouselResetInternalServices35SCLensCarouselResetInternalServices init] */

void FUN_103484b88(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCarouselResetInternalServices.SCLensCarouselResetInternalServices",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103484bb4);
  (*pcVar1)();
}



/* Entry: 103484be8; end: 103484bf7; -[_TtC33LensCarouselResetInternalServices35SCLensCarouselResetInternalServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103484be8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f71188));
  return;
}



/* Entry: 103484bf8; end: 103484c67; +[_TtC32PreviewFilterIdToNameTransformer34SCPreviewFilterIdToNameTransformer filterIdFrom:filterType:] */

void FUN_103484bf8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x000107c5faec(param_3);
  lVar1 = param_2;
  FUN_103484da0();
  func_0x000107c6142c(param_2);
  if (lVar1 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fadc(param_3,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103484c68; end: 103484c6b;  */

undefined1  [16] FUN_103484c68(undefined **param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (param_3 - 3U < 2) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f273f8;
    uVar2 = param_2;
    func_0x000107c5faec();
    func_0x000107c5fb78(0x2d,0xe100000000000000);
    func_0x000107c5fb78(param_1,param_2);
    param_2 = uVar2;
    param_1 = ppuVar1;
  }
  else {
    func_0x000107c61434(param_2);
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 103484c6c; end: 103484ccf; +[_TtC32PreviewFilterIdToNameTransformer34SCPreviewFilterIdToNameTransformer filterNameFrom:filterType:] */

void FUN_103484c6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  FUN_103484ec4();
  func_0x000107c6142c(param_2);
  func_0x000107c5fadc(param_3,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103484cd0; end: 103484cd3;  */

undefined1  [16] FUN_103484cd0(undefined **param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  uVar2 = param_2;
  uVar3 = param_2;
  func_0x000107c61434();
  func_0x000107c5fb84();
  do {
    if (uVar3 == 0) {
      uVar2 = 0;
      func_0x000107c6142c(param_2);
      ppuVar5 = &PTR____CFConstantStringClassReference_110f273f8;
      func_0x000107c5faec();
      func_0x000107c5fb78(0x2d,0xe100000000000000);
      func_0x000107c5fb78(param_1,param_2);
      param_2 = uVar2;
      param_1 = ppuVar5;
LAB_1034850a4:
      auVar7._8_8_ = param_2;
      auVar7._0_8_ = param_1;
      return auVar7;
    }
    uVar4 = 0x39;
    func_0x000107c605b8(0x39,0xe100000000000000,0x30,0xe100000000000000,1);
    if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1034850c8);
      (*pcVar1)();
    }
    if ((uVar2 == 0x30) && (uVar3 == 0xe100000000000000)) {
LAB_103484fa8:
      uVar4 = 0x39;
      uVar6 = 0xe100000000000000;
      func_0x000107c605b8(0x39,0xe100000000000000,uVar2,uVar3,1);
      func_0x000107c6142c();
      if ((uVar4 & 1) != 0) {
LAB_103485094:
        func_0x000107c6142c(param_2);
        func_0x000107c61434(param_2);
        goto LAB_1034850a4;
      }
    }
    else {
      uVar4 = uVar2;
      uVar6 = uVar3;
      func_0x000107c605b8(uVar2,uVar3,0x30,0xe100000000000000,1);
      if ((uVar4 & 1) != 0) {
        func_0x000107c6142c(uVar3);
        goto LAB_103485094;
      }
      if ((uVar2 != 0x39) || (uVar3 != 0xe100000000000000)) goto LAB_103484fa8;
      func_0x000107c6142c();
    }
    func_0x000107c5fb84();
    uVar2 = uVar3;
    uVar3 = uVar6;
  } while( true );
}



/* Entry: 103484cd4; end: 103484d2f; +[_TtC32PreviewFilterIdToNameTransformer34SCPreviewFilterIdToNameTransformer filterNameFrom:] */

void FUN_103484cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  FUN_103484f4c();
  func_0x000107c6142c(param_2);
  func_0x000107c5fadc(param_3,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103484d30; end: 103484d6b; -[_TtC32PreviewFilterIdToNameTransformer34SCPreviewFilterIdToNameTransformer init] */

void FUN_103484d30(undefined8 param_1)

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



/* Entry: 103484d6c; end: 103484d9f;  */

void FUN_103484d6c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103484da0; end: 103484ec3;  */

undefined1  [16] FUN_103484da0(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_70 [16];
  undefined8 *puStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (param_3 - 3U < 2) {
    uVar2 = 0;
    uVar4 = param_2;
    func_0x000107c5faec();
    func_0x000107c5fbb4();
    func_0x000107c6142c(uVar4);
    if ((uVar2 & 1) != 0) {
      uStack_50 = 0x2d;
      uStack_48 = 0xe100000000000000;
      puStack_60 = &uStack_50;
      func_0x000107c61434(param_2);
      lVar3 = 0x7fffffffffffffff;
      func_0x0001014784b8(0x7fffffffffffffff,1,FUN_1034850e8,auStack_70,param_1,param_2);
      if (1 < *(ulong *)(lVar3 + 0x10)) {
        param_1 = *(undefined8 *)(lVar3 + 0x40);
        param_2 = *(undefined8 *)(lVar3 + 0x48);
        uVar4 = *(undefined8 *)(lVar3 + 0x50);
        uVar1 = *(undefined8 *)(lVar3 + 0x58);
        func_0x000107c61434(uVar1);
        func_0x000107c6142c(lVar3);
        func_0x000107c5fb2c(param_1,param_2,uVar4,uVar1);
        func_0x000107c6142c(uVar1);
        goto LAB_103484ea4;
      }
      func_0x000107c6142c();
    }
    param_1 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c61434(param_2);
  }
LAB_103484ea4:
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 103484ec4; end: 103484f4b;  */

undefined1  [16] FUN_103484ec4(undefined **param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (param_3 - 3U < 2) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f273f8;
    uVar2 = param_2;
    func_0x000107c5faec();
    func_0x000107c5fb78(0x2d,0xe100000000000000);
    func_0x000107c5fb78(param_1,param_2);
    param_2 = uVar2;
    param_1 = ppuVar1;
  }
  else {
    func_0x000107c61434(param_2);
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 103484f4c; end: 1034850c7;  */

undefined1  [16] FUN_103484f4c(undefined **param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  uVar2 = param_2;
  uVar3 = param_2;
  func_0x000107c61434();
  func_0x000107c5fb84();
  do {
    if (uVar3 == 0) {
      uVar2 = 0;
      func_0x000107c6142c(param_2);
      ppuVar5 = &PTR____CFConstantStringClassReference_110f273f8;
      func_0x000107c5faec();
      func_0x000107c5fb78(0x2d,0xe100000000000000);
      func_0x000107c5fb78(param_1,param_2);
      param_2 = uVar2;
      param_1 = ppuVar5;
LAB_1034850a4:
      auVar7._8_8_ = param_2;
      auVar7._0_8_ = param_1;
      return auVar7;
    }
    uVar4 = 0x39;
    func_0x000107c605b8(0x39,0xe100000000000000,0x30,0xe100000000000000,1);
    if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1034850c8);
      (*pcVar1)();
    }
    if ((uVar2 == 0x30) && (uVar3 == 0xe100000000000000)) {
LAB_103484fa8:
      uVar4 = 0x39;
      uVar6 = 0xe100000000000000;
      func_0x000107c605b8(0x39,0xe100000000000000,uVar2,uVar3,1);
      func_0x000107c6142c();
      if ((uVar4 & 1) != 0) {
LAB_103485094:
        func_0x000107c6142c(param_2);
        func_0x000107c61434(param_2);
        goto LAB_1034850a4;
      }
    }
    else {
      uVar4 = uVar2;
      uVar6 = uVar3;
      func_0x000107c605b8(uVar2,uVar3,0x30,0xe100000000000000,1);
      if ((uVar4 & 1) != 0) {
        func_0x000107c6142c(uVar3);
        goto LAB_103485094;
      }
      if ((uVar2 != 0x39) || (uVar3 != 0xe100000000000000)) goto LAB_103484fa8;
      func_0x000107c6142c();
    }
    func_0x000107c5fb84();
    uVar2 = uVar3;
    uVar3 = uVar6;
  } while( true );
}



/* Entry: 1034850c8; end: 1034850e7;  */

void FUN_1034850c8(void)

{
  func_0x000107c61168(&PTR_PTR_1128dd928);
  return;
}



/* Entry: 1034850e8; end: 10348513b;  */

uint FUN_1034850e8(long *param_1)

{
  uint uVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *param_1;
  if (lVar2 == **(long **)(unaff_x20 + 0x10) && param_1[1] == (*(long **)(unaff_x20 + 0x10))[1]) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8();
    uVar1 = (uint)lVar2 & 1;
  }
  return uVar1;
}



/* Entry: 10348513c; end: 1034853d7;  */

void FUN_10348513c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  return;
}



/* Entry: 1034853d8; end: 1034853df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1034853d8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + 0x10);
    func_0x000107c61174();
    func_0x000107c61574(lVar1);
    uVar5 = *(undefined8 *)(lVar3 + _DAT_113091b70);
    func_0x000107c615f0(uVar5);
    func_0x000107c61170(lVar3);
    uVar2 = uVar5;
    func_0x000107c41b80();
    func_0x000107c61180();
    func_0x000107c615e8(uVar5);
    func_0x000107c61428(unaff_x20 + 0x10,auStack_c8,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar1 == 0) {
      func_0x000107c61170(uVar2);
      uStack_90 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      lVar3 = *(long *)(lVar1 + 0x18);
      func_0x000107c61174();
      func_0x000107c61574(lVar1);
      uVar5 = *(undefined8 *)(lVar3 + _DAT_113012cf0);
      func_0x000107c6157c(uVar5);
      func_0x000107c61170(lVar3);
      func_0x0001000d224c(&uStack_b0);
      func_0x000107c61574(uVar5);
      if (lStack_98 != 0) {
        FUN_1034855d0(&uStack_b0,auStack_80);
        func_0x000107c61428(unaff_x20 + 0x10,&uStack_b0,0,0);
        lVar1 = unaff_x20 + 0x10;
        func_0x000107c61648();
        if (lVar1 != 0) {
          uVar5 = *(undefined8 *)(lVar1 + 0x20);
          func_0x000107c61174();
          func_0x000107c61574(lVar1);
          func_0x000107c61428(unaff_x20 + 0x10,auStack_e0,0,0);
          lVar1 = unaff_x20 + 0x10;
          func_0x000107c61648();
          if (lVar1 != 0) {
            uVar4 = *(undefined8 *)(lVar1 + 0x28);
            func_0x000107c61174();
            func_0x000107c61574(lVar1);
            lVar3 = 0;
            func_0x00010348cba0();
            lVar1 = lVar3;
            func_0x000107c613fc();
            *(undefined8 *)(lVar1 + 0x10) = uVar5;
            *(undefined8 *)(lVar1 + 0x18) = uVar4;
            FUN_1034855e8(auStack_80,lVar1 + 0x20);
            *(undefined8 *)(lVar1 + 0x48) = uVar2;
            param_1[3] = lVar3;
            param_1[4] = (long)&PTR_DAT_11065b668;
            *param_1 = lVar1;
            func_0x0001000834e4(auStack_80);
            return;
          }
          func_0x000107c61170(uVar2);
          uVar2 = uVar5;
        }
        func_0x000107c61170(uVar2);
        func_0x0001000834e4(auStack_80);
        goto LAB_1034853b4;
      }
      func_0x000107c61170(uVar2);
    }
    FUN_103485588(&uStack_b0);
  }
LAB_1034853b4:
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Entry: 1034853e0; end: 10348540b;  */

/* WARNING: Possible PIC construction at 0x0001034853ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001034853fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001034853f0) */
/* WARNING: Removing unreachable block (ram,0x000103485400) */

void FUN_1034853e0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10348540c; end: 103485467;  */

void FUN_10348540c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103485468; end: 103485507;  */

void FUN_103485468(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_11065b098;
  func_0x000107c613fc(&UNK_11065b098,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  func_0x0001000285a8(0x112f711e0,&UNK_10dbcd270);
  func_0x000107c613fc();
  pcVar2 = FUN_10348562c;
  func_0x0001000bdd8c(FUN_10348562c,puVar1);
  uVar3 = 0;
  FUN_1037dd5b0(0);
  func_0x000107c610f8();
  func_0x0001037dd4f4(pcVar2,uVar3);
  *param_1 = pcVar2;
  return;
}


