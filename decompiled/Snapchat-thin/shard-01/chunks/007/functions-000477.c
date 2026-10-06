/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1013d96e0; end: 1013d9a8b;  */

void FUN_1013d96e0(long param_1,long param_2,long param_3)

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
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10c3900)) ||
       (func_0x000107c605b8(0xd00000000000001a,0x800000010ef3c700,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c52bc4();
    }
    else {
      uVar2 = 0xd00000000000001b;
      if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef10c38e0)) ||
         (func_0x000107c605b8(0xd00000000000001b,0x800000010ef3c720,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c53784();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef10eec60)) ||
           (func_0x000107c605b8(0xd000000000000014,0x800000010ef113a0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c56b34();
        }
        else {
          if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10ed550)) {
            uVar2 = 0;
            func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10e79a0)) {
                uVar2 = 0xd000000000000013;
                func_0x000107c605b8(0xd000000000000013,0x800000010ef18660,param_2,param_3,0);
                if ((uVar2 & 1) == 0) {
                  uVar2 = 0;
                  if (((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10ef4f0)) &&
                     (func_0x000107c605b8(0xd000000000000016,0x800000010ef10b10,param_2,param_3,0),
                     (uVar2 & 1) == 0)) {
                    func_0x000107c602fc(0x15);
                    func_0x000107c6142c(0xe000000000000000);
                    func_0x000107c5fb78(param_2,param_3);
                    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                        "NetworkHealthServices/SCNetworkHealthBannerEntryPoint.swift"
                                        ,0x3b,2,0x42,0);
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x1013d9a8c);
                    (*pcVar1)();
                  }
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c59b50();
                  goto LAB_1013d976c;
                }
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c529e0();
              goto LAB_1013d976c;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c53414();
        }
      }
    }
  }
LAB_1013d976c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1013d9a8c; end: 1013d9b37; -[SCNetworkHealthBannerEntryPoint setValue:forIvarName:] */

void FUN_1013d9a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1013d96e0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1013d9b38; end: 1013d9c0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d9b38(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d7b2a0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d7b2a8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d7b2b0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d7b2b8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d7b2c0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d7b2c8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d7b2d0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d7b2d8) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013d9c10; end: 1013d9c2f; -[SCNetworkHealthBannerEntryPoint init] */

void FUN_1013d9c10(void)

{
  FUN_1013d9b38();
  return;
}



/* Entry: 1013d9c30; end: 1013d9c63;  */

void FUN_1013d9c30(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013d9c64; end: 1013d9cfb; -[SCNetworkHealthBannerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d9c64(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d7b2a0);
  func_0x000107c61610(param_1 + _DAT_112d7b2a8);
  func_0x000107c61610(param_1 + _DAT_112d7b2b0);
  func_0x000107c61610(param_1 + _DAT_112d7b2b8);
  func_0x000107c61610(param_1 + _DAT_112d7b2c0);
  func_0x000107c61610(param_1 + _DAT_112d7b2c8);
  func_0x000107c61610(param_1 + _DAT_112d7b2d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d7b2d8));
  return;
}



/* Entry: 1013d9cfc; end: 1013d9d1b;  */

void FUN_1013d9cfc(void)

{
  func_0x000107c61168(&PTR_PTR_1127d0500);
  return;
}



/* Entry: 1013d9d1c; end: 1013d9d63;  */

long FUN_1013d9d1c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x000102c27c30();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  return unaff_x20;
}



/* Entry: 1013d9d64; end: 1013d9f07;  */

/* WARNING: Possible PIC construction at 0x0001013d9ec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013d9ee0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013d9ec8) */
/* WARNING: Removing unreachable block (ram,0x0001013d9ee4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d9d64(void)

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
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(lVar1 + _DAT_112f00948);
  uVar6 = ((undefined8 *)(lVar1 + _DAT_112f00948))[1];
  uVar12 = *(undefined8 *)(lVar1 + _DAT_112f00958);
  uVar11 = *(undefined8 *)(lVar1 + _DAT_112f00950);
  uVar14 = *(undefined8 *)(lVar1 + _DAT_112f00968);
  uVar3 = *(undefined8 *)(lVar1 + _DAT_112f00960);
  uVar7 = ((undefined8 *)(lVar1 + _DAT_112f00960))[1];
  uVar13 = *(undefined8 *)(lVar1 + _DAT_112f00970);
  uVar4 = *(undefined8 *)(lVar1 + _DAT_112f00978);
  uVar8 = ((undefined8 *)(lVar1 + _DAT_112f00978))[1];
  uVar5 = *(undefined8 *)(lVar1 + _DAT_112f00980);
  uVar9 = ((undefined8 *)(lVar1 + _DAT_112f00980))[1];
  func_0x000107c61434(uVar6);
  func_0x000107c615f0(uVar12);
  func_0x000107c615f0(uVar11);
  func_0x000100cafdc8(uVar3,uVar7);
  func_0x000107c615f0(uVar13);
  uVar10 = uVar14;
  func_0x000107c61174();
  func_0x000100cafdc8(uVar4,uVar8);
  func_0x000107c6157c(uVar9);
  func_0x000102c26d00(uVar2,uVar6,uVar12,uVar11,uVar3,uVar7,uVar14,uVar13,uVar4,uVar8,uVar5,uVar9);
  func_0x000107c61574(uVar9);
  func_0x000100cafdd8(uVar4,uVar8);
  func_0x000107c61170(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar13);
  return;
}



/* Entry: 1013d9f08; end: 1013d9f33;  */

void FUN_1013d9f08(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1013d9f34; end: 1013d9f7b;  */

void FUN_1013d9f34(void)

{
  FUN_1013d9d64();
  return;
}



/* Entry: 1013d9f7c; end: 1013d9f9b;  */

void FUN_1013d9f7c(void)

{
  func_0x000107c61168(&PTR_PTR_112d7b348);
  return;
}



/* Entry: 1013d9f9c; end: 1013d9fe3; -[SCDescriptiveRevealPresenterEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d9f9c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7b3b0;
  func_0x000107c61428(param_1 + _DAT_112d7b3b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013d9fe4; end: 1013da03b; -[SCDescriptiveRevealPresenterEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013d9fe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7b3b0;
  func_0x000107c61428(param_1 + _DAT_112d7b3b0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013da03c; end: 1013da0f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013da03c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = 0;
    FUN_1013d9f7c();
    func_0x000107c613fc();
    uVar3 = 0;
    func_0x000102c27c30();
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c453e4();
    *(long *)(lVar2 + 0x10) = lVar1;
    *(undefined8 *)(lVar2 + 0x18) = uVar3;
    FUN_1013d9d64();
    func_0x000107c61170(lVar1);
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d7b3b8);
    *(long *)(unaff_x20 + _DAT_112d7b3b8) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar3);
    return;
  }
  return;
}



/* Entry: 1013da0f4; end: 1013da11b; -[SCDescriptiveRevealPresenterEntryPoint begin] */

void FUN_1013da0f4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1013da03c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013da11c; end: 1013da2d7; -[SCDescriptiveRevealPresenterEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013da11c(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lStack_40;
  long lStack_38;
  
  plVar2 = &lStack_40;
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar3 = *(long *)(param_1 + _DAT_112d7b3b8);
  if (lVar3 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c6157c(lVar3);
    func_0x000102c275d8();
    func_0x000107c61574(lVar3);
  }
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_end_1125c29d0);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar2);
  return;
}



/* Entry: 1013da2d8; end: 1013da383; -[SCDescriptiveRevealPresenterEntryPoint setValue:forIvarName:] */

void FUN_1013da2d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  func_0x0001013da1b8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1013da384; end: 1013da3e3; -[SCDescriptiveRevealPresenterEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013da384(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d7b3b0,0);
  *(undefined8 *)(param_1 + _DAT_112d7b3b8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013da3e4; end: 1013da417;  */

void FUN_1013da3e4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013da418; end: 1013da44f; -[SCDescriptiveRevealPresenterEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013da418(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d7b3b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d7b3b8));
  return;
}



/* Entry: 1013da450; end: 1013da46f;  */

void FUN_1013da450(void)

{
  func_0x000107c61168(&PTR_PTR_1127d05f0);
  return;
}



/* Entry: 1013da470; end: 1013da4bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013da470(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d7b3e8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013da4bc; end: 1013da4db;  */

void FUN_1013da4bc(void)

{
  func_0x000107c61168(&PTR_PTR_1127d06b0);
  return;
}



/* Entry: 1013da4dc; end: 1013da533; -[SCSearchCallLauncher initWithCallLauncher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013da4dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_112d7b3e8) = param_3;
  lVar2 = param_1;
  FUN_1013da4bc();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 1013da534; end: 1013da5c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013da534(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d7b3e8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000104522c9c(0);
    func_0x00010452281c(param_1,param_2);
    func_0x000107c5ba70(lVar1);
    func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1013da5c8; end: 1013da70f; -[SCSearchCallLauncher launchUserCallWithUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013da5c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000107c5faec(param_3);
  lVar2 = *(long *)(param_1 + _DAT_112d7b3e8);
  func_0x000107c61174(param_1);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar1 = 0;
    func_0x000104522c9c(0);
    func_0x00010452281c(param_3,param_2,uVar1);
    func_0x000107c5ba70(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(param_3);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1013da710; end: 1013da7c3; -[SCSearchCallLauncher launchUserVideoCallWithUserId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013da710(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000107c5faec(param_3);
  lVar2 = *(long *)(param_1 + _DAT_112d7b3e8);
  func_0x000107c61174(param_1);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    uVar1 = 0;
    func_0x000104522c9c(0);
    func_0x00010452281c(param_3,param_2,uVar1);
    func_0x000107c5ba70(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(param_3);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1013da7c4; end: 1013da81f; -[SCSearchCallLauncher init] */

void FUN_1013da7c4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SearchV2Swift.SearchCallLauncher",0x20,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013da7f0);
  (*pcVar1)();
}



/* Entry: 1013da820; end: 1013da82f; -[SCSearchCallLauncher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013da820(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d7b3e8));
  return;
}



/* Entry: 1013da830; end: 1013daa57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1013da830(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puVar7;
  
  lVar1 = _DAT_112d7b420;
  puVar5 = *(undefined **)(unaff_x20 + _DAT_112d7b420);
  puVar7 = puVar5;
  if (puVar5 == (undefined *)0x1) {
    lVar2 = unaff_x20 + _DAT_112d7b418;
    func_0x000107c61618();
    if (lVar2 == 0) {
      puVar7 = (undefined *)0x0;
    }
    else {
      puVar3 = PTR_PTR_1126aead8;
      func_0x000107c610f8(PTR_PTR_1126aead8);
      func_0x000107c4807c();
      puVar4 = PTR_PTR_1126b27d8;
      func_0x000107c61168(PTR_PTR_1126b27d8);
      func_0x000107c61174(puVar3);
      func_0x000107c4d620(puVar4);
      puVar7 = PTR_PTR_1126b4370;
      func_0x000107c610f8();
      func_0x000107c48f54();
      func_0x000107c61170(lVar2);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar4);
    }
    uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar7;
    func_0x000107c61174(puVar7);
    FUN_1013db140(uVar6);
  }
  func_0x0001013db150(puVar5);
  return puVar7;
}



/* Entry: 1013daa58; end: 1013daaff; -[SCSearchCreateChatPagePresenter initWithCreateChatScopeExposer:chatScopeExposer:chatScopeServices:presentingViewController:] */

undefined8
FUN_1013daa58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  uVar1 = param_3;
  FUN_1013db034(param_3,param_4,param_5,param_6);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  return uVar1;
}



/* Entry: 1013dab00; end: 1013dab47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013dab00(long param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1013da830();
  if (param_1 != 0) {
    func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112d7b428),param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1013dab48; end: 1013dab93; -[SCSearchCreateChatPagePresenter presentCreateGroupPage] */

/* WARNING: Possible PIC construction at 0x0001013dab80: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013dab48(long param_1,undefined8 param_2)

{
  long lVar1;
  
  func_0x000107c61174();
  lVar1 = param_1;
  FUN_1013da830();
  if (lVar1 != 0) {
    func_0x000107c42c1c(*(undefined8 *)(param_1 + _DAT_112d7b428),param_2,lVar1);
    param_1 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013dab94; end: 1013dab9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013dab94(void)

{
  long unaff_x20;
  
  func_0x000107c4ffe8(*(undefined8 *)(unaff_x20 + _DAT_112d7b428));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 1013daba0; end: 1013dabab; -[SCSearchCreateChatPagePresenter createChatScopeDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013daba0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d7b428);
  func_0x000107c61174();
  func_0x000107c4ffe8(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1013dabac; end: 1013dac9b;  */

void FUN_1013dabac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  func_0x000107c5d17c();
  func_0x000107c61180();
  puVar1 = &UNK_1103af978;
  func_0x000107c613fc(&UNK_1103af978,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_1103af9a0;
  func_0x000107c613fc(&UNK_1103af9a0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  pcStack_40 = FUN_1013db0fc;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000b0c7c;
  puStack_48 = &UNK_1103af9b8;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c41864(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(param_1);
  return;
}



/* Entry: 1013dac9c; end: 1013dae03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013dac9c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112d7b418;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000104523254(0);
      func_0x000107c610f8();
      uVar3 = 0xe;
      func_0x000104522fdc(0xe,0,2);
      puVar4 = PTR_PTR_1126b3530;
      func_0x000107c610f8(PTR_PTR_1126b3530);
      func_0x000107c4807c();
      func_0x000104520f00(param_2,uVar3,lVar1,puVar4);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(puVar4);
      func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
      param_1 = param_1 + 0x10;
      func_0x000107c61618();
      lVar1 = param_2;
      if (param_1 != 0) {
        uVar3 = *(undefined8 *)(param_1 + _DAT_112d7b430);
        func_0x000107c61174(uVar3);
        func_0x000107c61170(param_1);
        func_0x000107c42c1c(uVar3);
        func_0x000107c61170(uVar3);
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1013dae04; end: 1013dae6f; -[SCSearchCreateChatPagePresenter createChatScope:wantsToDismissWithNewChat:] */

/* WARNING: Possible PIC construction at 0x0001013dae50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013dae54) */

void FUN_1013dae04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1013dabac(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1013dae70; end: 1013daea3;  */

void FUN_1013dae70(undefined8 param_1)

{
  func_0x000107c5d17c();
  func_0x000107c61180();
  func_0x000107c41864();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1013daea4; end: 1013daeeb; -[SCSearchCreateChatPagePresenter createChatScopeWantsToDismiss:] */

void FUN_1013daea4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c5d17c();
  func_0x000107c61180();
  func_0x000107c41864();
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1013daeec; end: 1013daef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013daeec(void)

{
  long unaff_x20;
  
  func_0x000107c4ffe8(*(undefined8 *)(unaff_x20 + _DAT_112d7b430));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 1013daef8; end: 1013daf1b;  */

void FUN_1013daef8(undefined8 param_1,long *param_2)

{
  long unaff_x20;
  
  func_0x000107c4ffe8(*(undefined8 *)(unaff_x20 + *param_2));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 1013daf1c; end: 1013daf27; -[SCSearchCreateChatPagePresenter chatScopeDidDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013daf1c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d7b430);
  func_0x000107c61174();
  func_0x000107c4ffe8(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1013daf28; end: 1013daf6f;  */

void FUN_1013daf28(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + *param_4);
  func_0x000107c61174();
  func_0x000107c4ffe8(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1013daf70; end: 1013dafcb; -[SCSearchCreateChatPagePresenter init] */

void FUN_1013daf70(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SearchV2Swift.SearchCreateChatPagePresenter",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013daf9c);
  (*pcVar1)();
}



/* Entry: 1013dafcc; end: 1013db033; -[SCSearchCreateChatPagePresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013dafe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013db008: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013dafec) */
/* WARNING: Removing unreachable block (ram,0x0001013db00c) */
/* WARNING: Removing unreachable block (ram,0x0001013db140) */
/* WARNING: Removing unreachable block (ram,0x0001013db14c) */
/* WARNING: Removing unreachable block (ram,0x0001013db148) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013dafcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d7b428));
  return;
}



/* Entry: 1013db034; end: 1013db0fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013db034(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = _DAT_112d7b418;
  func_0x000107c61614(unaff_x20 + _DAT_112d7b418,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d7b420) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112d7b428) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d7b430) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d7b438) = param_3;
  func_0x000107c61604(unaff_x20 + lVar2,param_4);
  FUN_1013db120();
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61154(&stack0xffffffffffffffb0,puVar1);
  return;
}



/* Entry: 1013db0fc; end: 1013db11f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013db0fc(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar6 + 0x10,auStack_68,0,0);
  lVar1 = lVar6 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112d7b418;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000104523254(0);
      func_0x000107c610f8();
      uVar3 = 0xe;
      func_0x000104522fdc(0xe,0,2);
      puVar4 = PTR_PTR_1126b3530;
      func_0x000107c610f8(PTR_PTR_1126b3530);
      func_0x000107c4807c();
      func_0x000104520f00(lVar5,uVar3,lVar1,puVar4);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(puVar4);
      func_0x000107c61428(lVar6 + 0x10,auStack_80,0,0);
      lVar6 = lVar6 + 0x10;
      func_0x000107c61618();
      lVar1 = lVar5;
      if (lVar6 != 0) {
        uVar3 = *(undefined8 *)(lVar6 + _DAT_112d7b430);
        func_0x000107c61174(uVar3);
        func_0x000107c61170(lVar6);
        func_0x000107c42c1c(uVar3);
        func_0x000107c61170(uVar3);
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1013db120; end: 1013db13f;  */

void FUN_1013db120(void)

{
  func_0x000107c61168(&PTR_PTR_1127d0780);
  return;
}



/* Entry: 1013db140; end: 1013db15f;  */

void FUN_1013db140(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1013db160; end: 1013db2a3;  */

/* WARNING: Possible PIC construction at 0x0001013db25c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013db26c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013db260) */
/* WARNING: Removing unreachable block (ram,0x0001013db270) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013db160(long param_1,int param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112d7b468);
  if (lVar3 != 0) {
    if (param_2 == 0) {
      if ((param_1 == 0x11) && (lVar4 = *(long *)(unaff_x20 + _DAT_112d7b478), lVar4 != 0)) {
        func_0x000107c615f0(lVar3);
        lVar1 = lVar4;
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar1 != 0) {
          func_0x000107c610f8(PTR_PTR_1126e28b0);
          func_0x000107c453e4();
          func_0x000107c4bf8c(lVar1);
          func_0x000107c5c734();
          func_0x000107c61180();
          lVar3 = lVar1;
          if (lVar4 != 0) {
            puVar2 = PTR_PTR_1126b79b8;
            func_0x000107c610f8(PTR_PTR_1126b79b8);
            func_0x000107c453e4();
            func_0x000107c5718c();
            func_0x000107c555d4(puVar2);
            func_0x000107c4bf8c(lVar4);
            lVar3 = lVar4;
          }
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
        return;
      }
    }
    else if ((param_2 == 2) && (param_1 - 9U < 2)) {
                    /* WARNING: Could not recover jumptable at 0x00010c0ab490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(lVar3,PTR_s_logOdlvVerifyingPageView_112608730);
      return;
    }
  }
  return;
}



/* Entry: 1013db2a4; end: 1013db2e7; -[_TtC22COSLoggingServicesImpl21COSLoggingServiceImpl logOnCOSChallengeReceivedWithChallengeType:networkContext:] */

void FUN_1013db2a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  FUN_1013db160(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013db2e8; end: 1013db42b;  */

/* WARNING: Possible PIC construction at 0x0001013db3ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013db408: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013db3cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013db40c) */
/* WARNING: Removing unreachable block (ram,0x0001013db3b0) */
/* WARNING: Removing unreachable block (ram,0x0001013db3d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013db2e8(long param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  if (param_3 == 2) {
    if (param_1 - 0xeU < 2) {
      lVar3 = *(long *)(unaff_x20 + _DAT_112d7b470);
      if (lVar3 != 0) {
        lVar2 = param_2;
        func_0x000107c61174();
        FUN_1013dba14(param_2);
        lVar1 = lVar3;
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar1 != 0) {
          if (lVar2 != 0) {
            func_0x000107c5fadc(param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
            return;
          }
          func_0x000107c4bc88(lVar1);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(lVar3);
        return;
      }
    }
    else if ((param_1 - 9U < 2) && (*(long *)(unaff_x20 + _DAT_112d7b468) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c0ab3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(long *)(unaff_x20 + _DAT_112d7b468),PTR_s_logOdlvLogin_1126086f8);
      return;
    }
  }
  return;
}



/* Entry: 1013db42c; end: 1013db48f; -[_TtC22COSLoggingServicesImpl21COSLoggingServiceImpl logOnCOSChallengeAttemptedWithChallengeType:loggingData:networkContext:] */

void FUN_1013db42c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_1013db2e8(param_3,param_4,param_5);
  func_0x000107c615e8(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013db490; end: 1013db75f;  */

/* WARNING: Possible PIC construction at 0x0001013db620: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013db648: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013db660: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013db73c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013db6c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013db740) */
/* WARNING: Removing unreachable block (ram,0x0001013db664) */
/* WARNING: Removing unreachable block (ram,0x0001013db64c) */
/* WARNING: Removing unreachable block (ram,0x0001013db624) */
/* WARNING: Removing unreachable block (ram,0x0001013db6cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013db490(long param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  int param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x20;
  
  if (param_6 == 0) {
    if (((param_1 == 0x11) && (2 < param_4 + 1U)) &&
       (lVar4 = *(long *)(unaff_x20 + _DAT_112d7b478), lVar4 != 0)) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar4 != 0) {
        puVar5 = PTR_PTR_1126b79b8;
        func_0x000107c610f8(PTR_PTR_1126b79b8);
        func_0x000107c453e4();
        func_0x000107c5718c();
        func_0x000107c555d4(puVar5);
        func_0x000107c4bf8c(lVar4);
        func_0x000107c615e8(lVar4);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(puVar5);
        return;
      }
    }
  }
  else if (param_6 == 2) {
    if (param_1 - 0xeU < 2) {
      puVar5 = *(undefined **)(unaff_x20 + _DAT_112d7b470);
      if (puVar5 != (undefined *)0x0) {
        func_0x000107c61174();
        FUN_1013dba14(param_5);
        puVar3 = puVar5;
        func_0x000107c5c734();
        func_0x000107c61180();
        if (puVar3 != (undefined *)0x0) {
          if (param_2 != 0) {
            func_0x000107c61434(param_2);
            func_0x000107c5fadc(param_5,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
            return;
          }
          func_0x000107c4bc84(puVar3);
          if (param_4 == 0) {
            func_0x000107c4bc90(puVar3);
          }
          else {
            func_0x000107c4bc8c(puVar3);
          }
          func_0x000107c615e8(puVar3);
          puVar5 = (undefined *)0x0;
        }
        goto code_r0x000107c61170;
      }
    }
    else if ((param_1 - 9U < 2) && (lVar4 = *(long *)(unaff_x20 + _DAT_112d7b468), lVar4 != 0)) {
      uVar1 = 1;
      if (param_1 != 10) {
        uVar1 = 2;
      }
      uVar2 = 0;
      if (param_1 != 9) {
        uVar2 = uVar1;
      }
      if (param_4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c0ab3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(lVar4,PTR_s_logOdlvLoginFailure__112608700);
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00010c0ab3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(lVar4,PTR_s_logOdlvLoginSuccess__112608708,uVar2);
      return;
    }
  }
  return;
}



/* Entry: 1013db760; end: 1013db7eb; -[_TtC22COSLoggingServicesImpl21COSLoggingServiceImpl logOnCOSChallengeResultedWithChallengeType:grpcStatusCode:protoStatusCode:challengeStatusCode:loggingData:networkContext:] */

void FUN_1013db760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  func_0x000107c615f0(param_7);
  func_0x000107c61174(param_1);
  FUN_1013db490(param_3,param_4,param_5,param_6,param_7,param_8);
  func_0x000107c615e8(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013db7ec; end: 1013db873;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013db7ec(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d7b478);
  if (lVar1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126b79b8;
      func_0x000107c610f8(PTR_PTR_1126b79b8);
      func_0x000107c453e4();
      func_0x000107c5718c();
      func_0x000107c555d4(puVar2,param_2,1);
      func_0x000107c4bf8c(lVar1,param_2,puVar2);
      func_0x000107c615e8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(puVar2);
      return;
    }
  }
  return;
}



/* Entry: 1013db874; end: 1013db923; -[_TtC22COSLoggingServicesImpl21COSLoggingServiceImpl logOnPasskeyEnrollmentCancelled] */

void FUN_1013db874(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1013db7ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013db924; end: 1013db94b; -[_TtC22COSLoggingServicesImpl21COSLoggingServiceImpl logOnPasskeyEnrollmentRetried] */

void FUN_1013db924(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x0001013db89c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013db94c; end: 1013db9ab; -[_TtC22COSLoggingServicesImpl21COSLoggingServiceImpl init] */

void FUN_1013db94c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("COSLoggingServicesImpl.COSLoggingServiceImpl",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013db978);
  (*pcVar1)();
}



/* Entry: 1013db9ac; end: 1013db9f3; -[_TtC22COSLoggingServicesImpl21COSLoggingServiceImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013db9d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013db9dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013db9ac(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d7b468));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d7b470));
  return;
}



/* Entry: 1013db9f4; end: 1013dba13;  */

void FUN_1013db9f4(void)

{
  func_0x000107c61168(&PTR_PTR_1127d08c0);
  return;
}



/* Entry: 1013dba14; end: 1013dbbb3;  */

undefined1  [16] FUN_1013dba14(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined1 auVar4 [16];
  
  if (param_1 == 0) {
    return ZEXT816(0);
  }
  uVar1 = param_1;
  puVar3 = PTR_s_respondsToSelector__11262c7e0;
  func_0x000107c61150(param_1,PTR_s_respondsToSelector__11262c7e0,PTR_s_email_1125c0f58);
  func_0x000107c615f0(param_1);
  if ((uVar1 & 1) != 0) {
    uVar1 = param_1;
    func_0x000107c4248c();
    func_0x000107c61180();
    if (uVar1 == 0) goto LAB_1013dba9c;
    uVar2 = uVar1;
    func_0x000107c5faec();
    func_0x000107c61170(uVar1);
    uVar1 = uVar2 & 0xffffffffffff;
    if (((ulong)puVar3 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)puVar3 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      func_0x000107c6142c(puVar3);
      goto LAB_1013dba9c;
    }
LAB_1013dbaf4:
    func_0x000107c615e8(param_1);
    goto LAB_1013dbb94;
  }
LAB_1013dba9c:
  uVar1 = param_1;
  puVar3 = PTR_s_respondsToSelector__11262c7e0;
  func_0x000107c61150(param_1,PTR_s_respondsToSelector__11262c7e0,PTR_s_phoneNumber_11261c5f8);
  if ((uVar1 & 1) != 0) {
    uVar1 = param_1;
    func_0x000107c4e6c0();
    func_0x000107c61180();
    if (uVar1 != 0) {
      uVar2 = uVar1;
      func_0x000107c5faec();
      func_0x000107c61170(uVar1);
      uVar1 = uVar2 & 0xffffffffffff;
      if (((ulong)puVar3 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)puVar3 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) goto LAB_1013dbaf4;
      func_0x000107c6142c(puVar3);
    }
  }
  uVar1 = param_1;
  puVar3 = PTR_s_respondsToSelector__11262c7e0;
  func_0x000107c61150(param_1,PTR_s_respondsToSelector__11262c7e0,PTR_s_accountIdentifier_112598ed8)
  ;
  if ((uVar1 & 1) == 0) {
LAB_1013dbb84:
    func_0x000107c615e8(param_1);
  }
  else {
    uVar1 = param_1;
    func_0x000107c3cf2c();
    func_0x000107c61180();
    if (uVar1 == 0) goto LAB_1013dbb84;
    uVar2 = uVar1;
    func_0x000107c5faec();
    func_0x000107c61170(uVar1);
    func_0x000107c615e8(param_1);
    uVar1 = uVar2 & 0xffffffffffff;
    if (((ulong)puVar3 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)puVar3 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) goto LAB_1013dbb94;
    func_0x000107c6142c(puVar3);
  }
  uVar2 = 0;
  puVar3 = (undefined *)0x0;
LAB_1013dbb94:
  auVar4._8_8_ = puVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}



/* Entry: 1013dbbb4; end: 1013dbcdb;  */

void FUN_1013dbbb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Entry: 1013dbcdc; end: 1013dbce3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013dbcdc(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112dae5c8);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if (lVar2 == 0) {
    lVar2 = 0;
    lVar4 = *(long *)(unaff_x20 + 0x20);
  }
  else {
    func_0x000107c4c038();
    func_0x000107c61180();
    lVar4 = *(long *)(unaff_x20 + 0x20);
  }
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar4 + _DAT_113083800);
    func_0x000107c61174(uVar5);
  }
  lVar3 = 0;
  FUN_1013db9f4();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112d7b468) = uVar1;
  *(long *)(lVar4 + _DAT_112d7b470) = lVar2;
  *(undefined8 *)(lVar4 + _DAT_112d7b478) = uVar5;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013dbce4; end: 1013dbd1b;  */

void FUN_1013dbce4(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1013dbd1c; end: 1013dbd37;  */

void FUN_1013dbd1c(long param_1,long param_2)

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



/* Entry: 1013dbd38; end: 1013dbd5b;  */

/* WARNING: Possible PIC construction at 0x0001013dbd44: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013dbd48) */

void FUN_1013dbd38(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 1013dbd5c; end: 1013dbdaf;  */

void FUN_1013dbd5c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1013dbdb0; end: 1013dbe37;  */

void FUN_1013dbdb0(undefined8 param_1)

{
  if (lRam0000000112d7b4d0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e633c0c);
  return;
}



/* Entry: 1013dbe38; end: 1013dbf13;  */

void FUN_1013dbe38(undefined8 *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  
  ppuVar2 = &puStack_70;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uStack_50 = 0x1013dbf1c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1013dbce4;
  puStack_58 = &UNK_1103afa60;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  uVar3 = 0;
  FUN_1014114a8(0);
  func_0x000107c610f8();
  func_0x000101411394(puVar1,uVar3);
  *param_1 = puVar1;
  return;
}



/* Entry: 1013dbf14; end: 1013dbf1f;  */

void FUN_1013dbf14(long param_1,long param_2)

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



/* Entry: 1013dbf20; end: 1013dbf2b; -[SCCOSLoggingServicesProvider odlvLoggerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013dbf20(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7b590;
  func_0x000107c61428(param_1 + _DAT_112d7b590,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013dbf2c; end: 1013dbf37; -[SCCOSLoggingServicesProvider setOdlvLoggerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013dbf2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7b590;
  func_0x000107c61428(param_1 + _DAT_112d7b590,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013dbf38; end: 1013dbf43; -[SCCOSLoggingServicesProvider loginLoggerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013dbf38(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7b598;
  func_0x000107c61428(param_1 + _DAT_112d7b598,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013dbf44; end: 1013dbf4f; -[SCCOSLoggingServicesProvider setLoginLoggerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013dbf44(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7b598;
  func_0x000107c61428(param_1 + _DAT_112d7b598,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013dbf50; end: 1013dbf5b; -[SCCOSLoggingServicesProvider systemBlizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013dbf50(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7b5a0;
  func_0x000107c61428(param_1 + _DAT_112d7b5a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013dbf5c; end: 1013dbf9f;  */

void FUN_1013dbf5c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1013dbfa0; end: 1013dbfab; -[SCCOSLoggingServicesProvider setSystemBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013dbfa0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7b5a0;
  func_0x000107c61428(param_1 + _DAT_112d7b5a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013dbfac; end: 1013dbfff;  */

void FUN_1013dbfac(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013dc000; end: 1013dc173;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1013dc000(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  long lStack_48;
  
  ppuVar5 = &puStack_70;
  lVar1 = unaff_x20;
  func_0x000107c4dacc();
  func_0x000107c61180();
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    func_0x000107c61174();
    lVar2 = unaff_x20;
    func_0x000107c4c03c();
    func_0x000107c61180();
    lVar3 = unaff_x20;
    func_0x000107c5c5ec();
    func_0x000107c61180();
    lVar4 = 0;
    FUN_1013dbdb0();
    func_0x000107c613fc();
    *(long *)(lVar4 + 0x10) = lVar1;
    *(long *)(lVar4 + 0x18) = lVar2;
    *(long *)(lVar4 + 0x20) = lVar3;
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d7b5a8);
    *(long *)(unaff_x20 + _DAT_112d7b5a8) = lVar4;
    func_0x000107c6157c();
    func_0x000107c61574(uVar7);
    puVar6 = PTR_PTR_1126ae720;
    func_0x000107c61168(PTR_PTR_1126ae720);
    pcStack_50 = FUN_1013dc174;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    pcStack_60 = FUN_1013dbce4;
    puStack_58 = &UNK_1103afaa0;
    lStack_48 = lVar4;
    func_0x000107c60bc4(&puStack_70);
    lVar2 = lStack_48;
    func_0x000107c6157c(lVar4);
    func_0x000107c61574(lVar2);
    func_0x000107c3e4fc(puVar6);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    uVar7 = 0;
    FUN_1014114a8(0);
    func_0x000107c610f8();
    func_0x000101411394(puVar6,uVar7);
    func_0x000107c61170(lVar1);
    func_0x000107c61574(lVar4);
  }
  return puVar6;
}



/* Entry: 1013dc174; end: 1013dc197;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013dc174(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_40;
  long lStack_38;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112dae5c8);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if (lVar2 == 0) {
    lVar2 = 0;
    lVar4 = *(long *)(unaff_x20 + 0x20);
  }
  else {
    func_0x000107c4c038();
    func_0x000107c61180();
    lVar4 = *(long *)(unaff_x20 + 0x20);
  }
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar4 + _DAT_113083800);
    func_0x000107c61174(uVar5);
  }
  lVar3 = 0;
  FUN_1013db9f4();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112d7b468) = uVar1;
  *(long *)(lVar4 + _DAT_112d7b470) = lVar2;
  *(undefined8 *)(lVar4 + _DAT_112d7b478) = uVar5;
  lStack_40 = lVar4;
  lStack_38 = lVar3;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013dc198; end: 1013dc223; -[SCCOSLoggingServicesProvider provide] */

void FUN_1013dc198(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_1013dc000();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "COSLoggingServicesImpl/SCCOSLoggingServicesProvider.swift",0x39,2,0x1e,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013dc224);
  (*pcVar1)();
}



/* Entry: 1013dc224; end: 1013dc257; -[SCCOSLoggingServicesProvider __safeProvide] */

void FUN_1013dc224(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1013dc000();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1013dc258; end: 1013dc29b; -[SCCOSLoggingServicesProvider end] */

void FUN_1013dc258(undefined8 param_1)

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



/* Entry: 1013dc29c; end: 1013dc497;  */

void FUN_1013dc29c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == -0x2fffffffffffffee && param_3 == -0x7ffffffef10c3720) ||
     (func_0x000107c605b8(0xd000000000000012,0x800000010ef3c8e0,param_2,param_3,0), (uVar2 & 1) != 0
     )) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c56c04();
  }
  else {
    if ((param_2 != -0x2fffffffffffffed) || (param_3 != -0x7ffffffef10ed630)) {
      uVar2 = 0xd000000000000013;
      func_0x000107c605b8(0xd000000000000013,0x800000010ef129d0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10ef4f0)) &&
           (func_0x000107c605b8(0xd000000000000016,0x800000010ef10b10,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "COSLoggingServicesImpl/SCCOSLoggingServicesProvider.swift",0x39,2,
                              0x35,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1013dc498);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c59b50();
        goto LAB_1013dc32c;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c56104();
  }
LAB_1013dc32c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1013dc498; end: 1013dc543; -[SCCOSLoggingServicesProvider setValue:forIvarName:] */

void FUN_1013dc498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1013dc29c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1013dc544; end: 1013dc5cb; -[SCCOSLoggingServicesProvider init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013dc544(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d7b590,0);
  func_0x000107c61614(param_1 + _DAT_112d7b598,0);
  func_0x000107c61614(param_1 + _DAT_112d7b5a0,0);
  *(undefined8 *)(param_1 + _DAT_112d7b5a8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1013dc5cc; end: 1013dc5ff;  */

void FUN_1013dc5cc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1013dc600; end: 1013dc657; -[SCCOSLoggingServicesProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013dc600(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d7b590);
  func_0x000107c61610(param_1 + _DAT_112d7b598);
  func_0x000107c61610(param_1 + _DAT_112d7b5a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d7b5a8));
  return;
}



/* Entry: 1013dc658; end: 1013dc677;  */

void FUN_1013dc658(void)

{
  func_0x000107c61168(&PTR_PTR_112d7b5f0);
  return;
}



/* Entry: 1013dc678; end: 1013dc87b;  */

void FUN_1013dc678(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = 0x7461745377656976;
  func_0x000107c5fadc(0x7461745377656976,0xe900000000000065);
  func_0x000107c5dc2c();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  if (unaff_x20 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c60234(&uStack_70,unaff_x20);
    func_0x000107c615e8(unaff_x20);
  }
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  lStack_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    func_0x00010006e7f4(&uStack_50);
  }
  else {
    uVar1 = 0;
    FUN_1013dcfac(0,0x112d7b738,&PTR_PTR_1126a6cc8);
    puVar2 = auStack_78;
    func_0x000107c6147c(puVar2,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if (((ulong)puVar2 & 1) != 0) {
      return;
    }
  }
  func_0x000107c610f8(PTR_PTR_1126a6cc8);
  func_0x000107c453e4();
  return;
}



/* Entry: 1013dc87c; end: 1013dc93b;  */

/* WARNING: Possible PIC construction at 0x0001013dc8b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013dc90c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013dc8b4) */
/* WARNING: Removing unreachable block (ram,0x0001013dc928) */
/* WARNING: Removing unreachable block (ram,0x0001013dc8dc) */
/* WARNING: Removing unreachable block (ram,0x0001013dc910) */

void FUN_1013dc87c(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1013dc93c; end: 1013dc9fb;  */

/* WARNING: Possible PIC construction at 0x0001013dc968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013dc994: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013dc96c) */
/* WARNING: Removing unreachable block (ram,0x0001013dc998) */
/* WARNING: Removing unreachable block (ram,0x0001013dc9a0) */
/* WARNING: Removing unreachable block (ram,0x0001013dc9c4) */
/* WARNING: Removing unreachable block (ram,0x0001013dc9e8) */

void FUN_1013dc93c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(uVar1);
  FUN_1013dc678();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1013dc9fc; end: 1013dcb0f;  */

void FUN_1013dc9fc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long extraout_x8;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar3 = 0;
  func_0x000107c5eb9c();
  lVar9 = *(long *)(lVar3 + -8);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)&uStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_60 = param_1;
  uStack_58 = param_2;
  func_0x000107c5eb88(lVar8);
  FUN_100e8b654();
  lVar5 = lVar8;
  puVar7 = PTR___sSSN_11034da80;
  func_0x000107c601f0(lVar8,PTR___sSSN_11034da80,lVar4);
  (**(code **)(lVar9 + 8))(lVar8,lVar3);
  uVar6 = 0;
  FUN_1013dcfec(0,lVar5,puVar7,0,0);
  func_0x000107c6142c(puVar7);
  if ((*(byte *)(unaff_x20 + 0x28) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + 0x28) = 1;
    pcVar1 = *(code **)(unaff_x20 + 0x18);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
    func_0x000107c6157c(uVar2);
    (*pcVar1)(uVar6);
    func_0x000107c61574(uVar2);
  }
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 1013dcb10; end: 1013dccb7;  */

/* WARNING: Possible PIC construction at 0x0001013dcb78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013dcbc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013dcbf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013dcbc4) */
/* WARNING: Removing unreachable block (ram,0x0001013dcb7c) */
/* WARNING: Removing unreachable block (ram,0x0001013dcbf8) */
/* WARNING: Removing unreachable block (ram,0x0001013dcbfc) */
/* WARNING: Removing unreachable block (ram,0x0001013dcc04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013dcb10(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(param_1 + _DAT_1130937e0);
  lVar7 = ((undefined8 *)(param_1 + _DAT_1130937e0))[1];
  func_0x0001013dd13c(uVar4);
  if (lVar7 == 0) {
    lVar6 = unaff_x20 + 0x30;
    func_0x000107c61618();
    if (lVar6 != 0) {
      FUN_1013dd7a4();
      goto code_r0x000107c61170;
    }
    uVar4 = 0;
    lVar7 = 0;
    func_0x0001013dd13c(0);
    func_0x000107c6142c(0);
    if (lVar7 == 0) {
      lVar6 = *(long *)(unaff_x20 + 0x10);
      func_0x000107c61174(lVar6);
      FUN_1013dc678();
      goto code_r0x000107c61170;
    }
  }
  uVar5 = *(undefined8 *)(param_1 + _DAT_1130937d8);
  lVar6 = ((undefined8 *)(param_1 + _DAT_1130937d8))[1];
  func_0x0001013dd288(uVar5);
  uVar1 = 0;
  if (lVar6 != 0) {
    uVar1 = uVar5;
  }
  lVar2 = -0x2000000000000000;
  if (lVar6 != 0) {
    lVar2 = lVar6;
  }
  lVar6 = 0;
  func_0x0001013dcfec(0,uVar1,lVar2,uVar4,lVar7);
  func_0x000107c6142c(lVar2);
  func_0x000107c6142c(lVar7);
  if ((*(byte *)(unaff_x20 + 0x28) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + 0x28) = 1;
    pcVar3 = *(code **)(unaff_x20 + 0x18);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
    func_0x000107c6157c(uVar4);
    (*pcVar3)(lVar6);
    func_0x000107c61574(uVar4);
  }
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar6);
  return;
}



/* Entry: 1013dccb8; end: 1013dcceb;  */

void FUN_1013dccb8(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61610(unaff_x20 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1013dccec; end: 1013dcdd7;  */

undefined8 FUN_1013dccec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c5fadc();
  func_0x000107c5dc2c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (unaff_x20 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    func_0x000107c60234(&uStack_70,unaff_x20);
    func_0x000107c615e8(unaff_x20);
  }
  uStack_48 = uStack_68;
  uStack_50 = uStack_70;
  lStack_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    func_0x00010006e7f4(&uStack_50);
  }
  else {
    uVar1 = 0;
    FUN_1013dcfac(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    puVar2 = &uStack_78;
    func_0x000107c6147c(puVar2,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if (((ulong)puVar2 & 1) != 0) {
      uVar1 = uStack_78;
      func_0x000107c3ebcc(uStack_78);
      func_0x000107c61170(uStack_78);
      return uVar1;
    }
  }
  return 0;
}



/* Entry: 1013dcdd8; end: 1013dcf3b;  */

undefined1  [16] FUN_1013dcdd8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar1 = 0;
  func_0x000107c5eb9c();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)&uStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c5dc2c();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (unaff_x20 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c60234(&uStack_80,unaff_x20);
    func_0x000107c615e8(unaff_x20);
  }
  uStack_58 = uStack_78;
  uStack_60 = uStack_80;
  lStack_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&uStack_60);
  }
  else {
    puVar2 = &uStack_90;
    func_0x000107c6147c(puVar2,&uStack_60,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)puVar2 & 1) != 0) {
      uStack_60 = uStack_90;
      uStack_58 = uStack_88;
      func_0x000107c5eb88(lVar5);
      FUN_100e8b654();
      lVar3 = lVar5;
      puVar4 = PTR___sSSN_11034da80;
      func_0x000107c601f0(lVar5,PTR___sSSN_11034da80,puVar2);
      (**(code **)(lVar6 + 8))(lVar5,lVar1);
      func_0x000107c6142c(uStack_88);
      goto LAB_1013dcf24;
    }
  }
  lVar3 = 0;
  puVar4 = (undefined *)0x0;
LAB_1013dcf24:
  auVar7._8_8_ = puVar4;
  auVar7._0_8_ = lVar3;
  return auVar7;
}


