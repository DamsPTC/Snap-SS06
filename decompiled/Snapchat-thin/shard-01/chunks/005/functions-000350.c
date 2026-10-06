/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101168978; end: 101168983; -[SCMapPlaceSuggestAttributeTrayEntryPoint setValdiBlizzardLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101168978(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d60ab8;
  func_0x000107c61428(param_1 + _DAT_112d60ab8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101168984; end: 1011689d7;  */

void FUN_101168984(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1011689d8; end: 10116906b;  */

/* WARNING: Possible PIC construction at 0x000101168b1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101168b7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101168bb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101168c58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101168e50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101168e7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101168e8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101168ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101168eb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101168edc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101169004: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101169014: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101169024: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101169034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101168fd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101168fe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101168ffc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101168f70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101168f80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101168f50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101168f30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101168f20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101168f34) */
/* WARNING: Removing unreachable block (ram,0x000101168f54) */
/* WARNING: Removing unreachable block (ram,0x000101168f84) */
/* WARNING: Removing unreachable block (ram,0x000101168f74) */
/* WARNING: Removing unreachable block (ram,0x000101169000) */
/* WARNING: Removing unreachable block (ram,0x000101168fec) */
/* WARNING: Removing unreachable block (ram,0x000101168fdc) */
/* WARNING: Removing unreachable block (ram,0x000101169038) */
/* WARNING: Removing unreachable block (ram,0x000101169028) */
/* WARNING: Removing unreachable block (ram,0x000101169018) */
/* WARNING: Removing unreachable block (ram,0x000101168ee0) */
/* WARNING: Removing unreachable block (ram,0x000101169008) */
/* WARNING: Removing unreachable block (ram,0x000101168ee4) */
/* WARNING: Removing unreachable block (ram,0x000101169004) */
/* WARNING: Removing unreachable block (ram,0x000101168ebc) */
/* WARNING: Removing unreachable block (ram,0x000101168ea8) */
/* WARNING: Removing unreachable block (ram,0x000101168e90) */
/* WARNING: Removing unreachable block (ram,0x000101168e80) */
/* WARNING: Removing unreachable block (ram,0x000101168e54) */
/* WARNING: Removing unreachable block (ram,0x000101168c5c) */
/* WARNING: Removing unreachable block (ram,0x000101168bb4) */
/* WARNING: Removing unreachable block (ram,0x000101168bb8) */
/* WARNING: Removing unreachable block (ram,0x000101168fa8) */
/* WARNING: Removing unreachable block (ram,0x000101168fb8) */
/* WARNING: Removing unreachable block (ram,0x000101168bdc) */
/* WARNING: Removing unreachable block (ram,0x000101168b80) */
/* WARNING: Removing unreachable block (ram,0x000101168fc8) */
/* WARNING: Removing unreachable block (ram,0x000101168b84) */
/* WARNING: Removing unreachable block (ram,0x000101168b20) */
/* WARNING: Removing unreachable block (ram,0x000101168b2c) */
/* WARNING: Removing unreachable block (ram,0x000101168fd8) */
/* WARNING: Removing unreachable block (ram,0x000101168b54) */
/* WARNING: Removing unreachable block (ram,0x000101168f24) */

void FUN_1011689d8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c3d1c4();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c40014();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c4d840();
      func_0x000107c61180();
      if (lVar4 != 0) {
        lVar4 = unaff_x20;
        func_0x000107c3ffd4();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          func_0x000107c5dbac();
          func_0x000107c61180();
          if (unaff_x20 == 0) {
            func_0x000107c61170(lVar1);
            lVar1 = lVar2;
          }
          else {
            lVar5 = 0;
            FUN_10116837c();
            func_0x000107c613fc();
            *(long *)(lVar5 + 0x10) = lVar1;
            *(undefined8 *)(lVar5 + 0x18) = 0;
            func_0x000107c61174(lVar1);
            func_0x000107c61174();
            func_0x000107c61174(unaff_x20);
            func_0x000107c61174(lVar4);
            func_0x000107c61174();
            func_0x000107c61174(lVar3);
            func_0x000107c61174(lVar2);
            func_0x000107c5dbd4(lVar3);
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



/* Entry: 10116906c; end: 101169093; -[SCMapPlaceSuggestAttributeTrayEntryPoint begin] */

void FUN_10116906c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1011689d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101169094; end: 1011690d7; -[SCMapPlaceSuggestAttributeTrayEntryPoint end] */

void FUN_101169094(undefined8 param_1)

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



/* Entry: 1011690d8; end: 10116941f;  */

void FUN_1011690d8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    FUN_10116966c(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffea) || (param_3 != -0x7ffffffef10ef1d0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000016,0x800000010ef10e30,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ed9b0)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef10eec60)) ||
               (func_0x000107c605b8(0xd000000000000014,0x800000010ef113a0,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              FUN_10116966c(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c56b34();
            }
            else {
              uVar2 = 0;
              if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10d76d0)) ||
                 (func_0x000107c605b8(0xd00000000000001a,0x800000010ef28930,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                FUN_10116966c(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c536ac();
              }
              else {
                uVar2 = 0;
                if (((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef10e4100)) &&
                   (func_0x000107c605b8(0xd00000000000001c,0x800000010ef1bf00,param_2,param_3,0),
                   (uVar2 & 1) == 0)) {
                  func_0x000107c602fc(0x15);
                  func_0x000107c6142c(0xe000000000000000);
                  func_0x000107c5fb78(param_2,param_3);
                  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                      "MapPlaceSuggestAttributeTrayImplementation/SCMapPlaceSuggestAttributeTrayEntryPoint.swift"
                                      ,0x59,2,0x3a,0);
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x101169420);
                  (*pcVar1)();
                }
                FUN_10116966c(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c5a46c();
              }
            }
            goto LAB_101169164;
          }
        }
        FUN_10116966c(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c536e0();
        goto LAB_101169164;
      }
    }
    FUN_10116966c(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52228();
  }
LAB_101169164:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101169420; end: 1011694cb; -[SCMapPlaceSuggestAttributeTrayEntryPoint setValue:forIvarName:] */

void FUN_101169420(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1011690d8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_1011696b0(auStack_50);
  return;
}



/* Entry: 1011694cc; end: 10116958f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011694cc(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d60a90,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d60a98,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d60aa0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d60aa8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d60ab0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d60ab8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d60ac0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101169590; end: 1011695af; -[SCMapPlaceSuggestAttributeTrayEntryPoint init] */

void FUN_101169590(void)

{
  FUN_1011694cc();
  return;
}



/* Entry: 1011695b0; end: 1011695e3;  */

void FUN_1011695b0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1011695e4; end: 10116966b; -[SCMapPlaceSuggestAttributeTrayEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1011695e4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d60a90);
  func_0x000107c61610(param_1 + _DAT_112d60a98);
  func_0x000107c61610(param_1 + _DAT_112d60aa0);
  func_0x000107c61610(param_1 + _DAT_112d60aa8);
  func_0x000107c61610(param_1 + _DAT_112d60ab0);
  func_0x000107c61610(param_1 + _DAT_112d60ab8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d60ac0));
  return;
}



/* Entry: 10116966c; end: 10116968f;  */

long * FUN_10116966c(long *param_1,long param_2)

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



/* Entry: 101169690; end: 1011696af;  */

void FUN_101169690(void)

{
  func_0x000107c61168(&PTR_PTR_1127b1b80);
  return;
}



/* Entry: 1011696b0; end: 1011696cf;  */

void FUN_1011696b0(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001011696c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1011696d0; end: 10116989b;  */

/* WARNING: Possible PIC construction at 0x00010116977c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116978c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101169780) */
/* WARNING: Removing unreachable block (ram,0x000101169790) */

void FUN_1011696d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_110389150;
  func_0x000107c613fc(&UNK_110389150,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  uVar2 = 0x112d60af8;
  func_0x0001000285a8(0x112d60af8,&UNK_10d926ee0);
  func_0x000107c613fc();
  pcVar3 = FUN_1011698f0;
  func_0x0001000841fc(FUN_1011698f0,puVar1,uVar2);
  func_0x000100084214(&UNK_10d926eb0,0x29,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 10116989c; end: 1011698ab;  */

undefined1  [16] FUN_10116989c(void)

{
  return ZEXT816(0x110389130);
}



/* Entry: 1011698ac; end: 1011698ef;  */

void FUN_1011698ac(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1011698f0; end: 1011698ff;  */

void FUN_1011698f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uStack_58;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *param_2;
  func_0x0001000285a8(0x112d60b00,&UNK_10d926ee8);
  puVar3 = &uStack_58;
  uStack_58 = uVar7;
  func_0x0001000838ec(puVar3);
  FUN_10116a894(uVar4,puVar3,uVar1,uVar5,uVar2,uVar6);
  func_0x000100082720("MapScreenshotBannerPresenterServiceProvider",0x2b,2);
  uVar5 = uVar4;
  FUN_10116a764();
  func_0x000107c61574(puVar3);
  func_0x000107c61574(uVar4);
  func_0x000100082720("MapScreenshotBannerPresenterEntryPointProvider",0x2e,2);
  *param_1 = uVar5;
  return;
}



/* Entry: 101169900; end: 101169b23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101169900(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  code *pcVar8;
  undefined1 *puVar9;
  long unaff_x20;
  undefined1 auStack_a8 [8];
  undefined8 auStack_98 [5];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c610f8();
  func_0x0001000285a8(0x112d60b08,&UNK_10d926ef0);
  puVar2 = auStack_98;
  auStack_98[0] = param_2;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d60b10,&UNK_10d926ef8);
  puVar3 = auStack_98;
  auStack_98[0] = param_3;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d60b18,&UNK_10d926f00);
  puVar4 = auStack_98;
  auStack_98[0] = param_4;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d60b20,&UNK_10dd04910);
  puVar5 = auStack_98;
  auStack_98[0] = param_5;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  puVar6 = auStack_98;
  auStack_98[0] = param_6;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d60af0,&UNK_10d926e70);
  puVar7 = &UNK_110389178;
  func_0x000107c613fc(&UNK_110389178,0x38,7);
  *(undefined8 **)(puVar7 + 0x10) = puVar5;
  *(undefined8 **)(puVar7 + 0x18) = puVar2;
  *(undefined8 **)(puVar7 + 0x20) = puVar6;
  *(undefined8 **)(puVar7 + 0x28) = puVar3;
  *(undefined8 **)(puVar7 + 0x30) = puVar4;
  pcVar8 = FUN_101169b24;
  func_0x0001000823a8(FUN_101169b24,puVar7);
  func_0x000100083b20(auStack_98);
  func_0x000107c61574(pcVar8);
  uVar1 = auStack_98[0];
  uStack_70 = param_1;
  func_0x00010008a7c8(&uStack_68,&uStack_70);
  func_0x000107c61574(uVar1);
  func_0x000100083b20(auStack_98);
  func_0x000107c61574(uStack_68);
  FUN_101169b24(auStack_98,unaff_x20 + _DAT_112d60b30);
  puVar9 = auStack_a8;
  func_0x000107c61154(puVar9,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  return puVar9;
}



/* Entry: 101169b24; end: 101169b3f;  */

/* WARNING: Possible PIC construction at 0x00010116977c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116978c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101169780) */
/* WARNING: Removing unreachable block (ram,0x000101169790) */

void FUN_101169b24(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar4 = &UNK_110389150;
  func_0x000107c613fc(&UNK_110389150,0x38,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  *(undefined8 *)(puVar4 + 0x30) = uVar7;
  uVar5 = 0x112d60af8;
  func_0x0001000285a8(0x112d60af8,&UNK_10d926ee0);
  func_0x000107c613fc();
  pcVar6 = FUN_1011698f0;
  func_0x0001000841fc(FUN_1011698f0,puVar4,uVar5);
  func_0x000100084214(&UNK_10d926eb0,0x29,2);
  *param_1 = pcVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101169b40; end: 101169b83;  */

void FUN_101169b40(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101169b84; end: 101169b93;  */

/* WARNING: Possible PIC construction at 0x00010116977c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116978c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101169780) */
/* WARNING: Removing unreachable block (ram,0x000101169790) */

void FUN_101169b84(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar4 = &UNK_110389150;
  func_0x000107c613fc(&UNK_110389150,0x38,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  *(undefined8 *)(puVar4 + 0x30) = uVar7;
  uVar5 = 0x112d60af8;
  func_0x0001000285a8(0x112d60af8,&UNK_10d926ee0);
  func_0x000107c613fc();
  pcVar6 = FUN_1011698f0;
  func_0x0001000841fc(FUN_1011698f0,puVar4,uVar5);
  func_0x000100084214(&UNK_10d926eb0,0x29,2);
  *param_1 = pcVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101169b94; end: 101169bf3; -[_TtC47MapScreenshotBannerScopedFactoryServiceProvider56MapScreenshotScopedFactoryServiceProviderSaberEntryPoint init] */

void FUN_101169b94(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapScreenshotBannerScopedFactoryServiceProvider.MapScreenshotScopedFactoryServiceProviderSaberEntryPoint"
                      ,0x68,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101169bc0);
  (*pcVar1)();
}



/* Entry: 101169bf4; end: 101169c0f; -[_TtC47MapScreenshotBannerScopedFactoryServiceProvider56MapScreenshotScopedFactoryServiceProviderSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101169bf4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_112d60b30))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d60b30));
  return;
}



/* Entry: 101169c10; end: 101169c2f;  */

void FUN_101169c10(void)

{
  func_0x000107c61168(&PTR_PTR_1127b1c68);
  return;
}



/* Entry: 101169c30; end: 101169c3b; -[SCMapScreenshotScopedFactoryServiceProviderSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101169c30(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d60b60;
  func_0x000107c61428(param_1 + _DAT_112d60b60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101169c3c; end: 101169c47; -[SCMapScreenshotScopedFactoryServiceProviderSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101169c3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d60b60;
  func_0x000107c61428(param_1 + _DAT_112d60b60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101169c48; end: 101169c53; -[SCMapScreenshotScopedFactoryServiceProviderSaberEntryPoint sCSendFlowScopeBuilderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101169c48(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d60b68;
  func_0x000107c61428(param_1 + _DAT_112d60b68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101169c54; end: 101169c5f; -[SCMapScreenshotScopedFactoryServiceProviderSaberEntryPoint setSCSendFlowScopeBuilderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101169c54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d60b68;
  func_0x000107c61428(param_1 + _DAT_112d60b68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101169c60; end: 101169c6b; -[SCMapScreenshotScopedFactoryServiceProviderSaberEntryPoint sCSnapDocEditorServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101169c60(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d60b70;
  func_0x000107c61428(param_1 + _DAT_112d60b70,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101169c6c; end: 101169c77; -[SCMapScreenshotScopedFactoryServiceProviderSaberEntryPoint setSCSnapDocEditorServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101169c6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d60b70;
  func_0x000107c61428(param_1 + _DAT_112d60b70,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101169c78; end: 101169c83; -[SCMapScreenshotScopedFactoryServiceProviderSaberEntryPoint sCUserBlizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101169c78(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d60b78;
  func_0x000107c61428(param_1 + _DAT_112d60b78,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101169c84; end: 101169c8f; -[SCMapScreenshotScopedFactoryServiceProviderSaberEntryPoint setSCUserBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101169c84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d60b78;
  func_0x000107c61428(param_1 + _DAT_112d60b78,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101169c90; end: 101169c9b; -[SCMapScreenshotScopedFactoryServiceProviderSaberEntryPoint sIGNotificationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101169c90(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d60b80;
  func_0x000107c61428(param_1 + _DAT_112d60b80,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101169c9c; end: 101169cdf;  */

void FUN_101169c9c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101169ce0; end: 101169ceb; -[SCMapScreenshotScopedFactoryServiceProviderSaberEntryPoint setSIGNotificationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101169ce0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d60b80;
  func_0x000107c61428(param_1 + _DAT_112d60b80,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101169cec; end: 101169d3f;  */

void FUN_101169cec(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101169d40; end: 101169d87; -[SCMapScreenshotScopedFactoryServiceProviderSaberEntryPoint scopeExposerSCSendFlowScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101169d40(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d60b88;
  func_0x000107c61428(param_1 + _DAT_112d60b88,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101169d88; end: 101169deb; -[SCMapScreenshotScopedFactoryServiceProviderSaberEntryPoint setScopeExposerSCSendFlowScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101169d88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d60b88;
  func_0x000107c61428(param_1 + _DAT_112d60b88,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101169dec; end: 10116a13b;  */

/* WARNING: Possible PIC construction at 0x00010116a048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116a058: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116a068: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116a084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116a104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116a114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116a0e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116a0c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116a0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010116a0c8) */
/* WARNING: Removing unreachable block (ram,0x00010116a0e8) */
/* WARNING: Removing unreachable block (ram,0x00010116a118) */
/* WARNING: Removing unreachable block (ram,0x00010116a108) */
/* WARNING: Removing unreachable block (ram,0x00010116a06c) */
/* WARNING: Removing unreachable block (ram,0x00010116a05c) */
/* WARNING: Removing unreachable block (ram,0x00010116a04c) */
/* WARNING: Removing unreachable block (ram,0x00010116a0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101169dec(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined *puVar9;
  code *pcVar10;
  long unaff_x20;
  long lStack_a8;
  long lStack_a0;
  long alStack_98 [5];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c51288();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c512dc();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c514f0();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar3 = unaff_x20;
        func_0x000107c51598();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          func_0x000107c51980();
          func_0x000107c61180();
          if (unaff_x20 == 0) {
            func_0x000107c61170(lVar1);
            lVar1 = lVar2;
          }
          else {
            lVar3 = 0;
            FUN_101169c10();
            lVar2 = lVar3;
            func_0x000107c610f8();
            func_0x0001000285a8(0x112d60b08,&UNK_10d926ef0);
            plVar4 = alStack_98;
            func_0x0001000838ec();
            func_0x0001000285a8(0x112d60b10,&UNK_10d926ef8);
            plVar5 = alStack_98;
            func_0x0001000838ec();
            func_0x0001000285a8(0x112d60b18,&UNK_10d926f00);
            plVar6 = alStack_98;
            func_0x0001000838ec();
            func_0x0001000285a8(0x112d60b20,&UNK_10dd04910);
            plVar7 = alStack_98;
            func_0x0001000838ec();
            func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
            plVar8 = alStack_98;
            alStack_98[0] = unaff_x20;
            func_0x0001000838ec();
            func_0x0001000285a8(0x112d60af0,&UNK_10d926e70);
            puVar9 = &UNK_1103891c0;
            func_0x000107c613fc(&UNK_1103891c0,0x38,7);
            *(long **)(puVar9 + 0x10) = plVar7;
            *(long **)(puVar9 + 0x18) = plVar4;
            *(long **)(puVar9 + 0x20) = plVar8;
            *(long **)(puVar9 + 0x28) = plVar5;
            *(long **)(puVar9 + 0x30) = plVar6;
            pcVar10 = FUN_10116a13c;
            func_0x0001000823a8(FUN_10116a13c,puVar9);
            func_0x000100083b20(alStack_98);
            func_0x000107c61574(pcVar10);
            func_0x00010008a7c8(&uStack_68,auStack_70);
            func_0x000107c61574(alStack_98[0]);
            func_0x000100083b20(alStack_98);
            func_0x000107c61574(uStack_68);
            FUN_101169b24(alStack_98,lVar2 + _DAT_112d60b30);
            lStack_a8 = lVar2;
            lStack_a0 = lVar3;
            func_0x000107c61154(&lStack_a8,PTR_s_init_1125d9248);
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



/* Entry: 10116a13c; end: 10116a14b;  */

/* WARNING: Possible PIC construction at 0x00010116977c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116978c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101169780) */
/* WARNING: Removing unreachable block (ram,0x000101169790) */

void FUN_10116a13c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar4 = &UNK_110389150;
  func_0x000107c613fc(&UNK_110389150,0x38,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar1;
  *(undefined8 *)(puVar4 + 0x18) = uVar2;
  *(undefined8 *)(puVar4 + 0x20) = uVar5;
  *(undefined8 *)(puVar4 + 0x28) = uVar3;
  *(undefined8 *)(puVar4 + 0x30) = uVar7;
  uVar5 = 0x112d60af8;
  func_0x0001000285a8(0x112d60af8,&UNK_10d926ee0);
  func_0x000107c613fc();
  pcVar6 = FUN_1011698f0;
  func_0x0001000841fc(FUN_1011698f0,puVar4,uVar5);
  func_0x000100084214(&UNK_10d926eb0,0x29,2);
  *param_1 = pcVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 10116a14c; end: 10116a173; -[SCMapScreenshotScopedFactoryServiceProviderSaberEntryPoint begin] */

void FUN_10116a14c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101169dec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10116a174; end: 10116a1b7; -[SCMapScreenshotScopedFactoryServiceProviderSaberEntryPoint end] */

void FUN_10116a174(undefined8 param_1)

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



/* Entry: 10116a1b8; end: 10116a4ff;  */

void FUN_10116a1b8(long param_1,long param_2,long param_3)

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
    if (((param_2 == -0x2fffffffffffffe2) && (param_3 == -0x7ffffffef10d7580)) ||
       (func_0x000107c605b8(0xd00000000000001e,0x800000010ef28a80,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58830();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10d7560)) {
        uVar2 = 0xd000000000000017;
        func_0x000107c605b8(0xd000000000000017,0x800000010ef28aa0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10d7540)) ||
             (func_0x000107c605b8(0xd000000000000016,0x800000010ef28ac0,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c58a98();
          }
          else {
            if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10d7520)) {
              uVar2 = 0xd000000000000017;
              func_0x000107c605b8(0xd000000000000017,0x800000010ef28ae0,param_2,param_3,0);
              if ((uVar2 & 1) == 0) {
                uVar2 = 0xd00000000000001b;
                if (((param_2 != -0x2fffffffffffffe5) || (param_3 != -0x7ffffffef10d7500)) &&
                   (func_0x000107c605b8(0xd00000000000001b,0x800000010ef28b00,param_2,param_3,0),
                   (uVar2 & 1) == 0)) {
                  func_0x000107c602fc(0x15);
                  func_0x000107c6142c(0xe000000000000000);
                  func_0x000107c5fb78(param_2,param_3);
                  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                      "MapScreenshotBannerScopedFactoryServiceProvider/SCMapScreenshotScopedFactoryServiceProviderSaberEntryPoint.swift"
                                      ,0x70,2,0x3e,0);
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x10116a500);
                  (*pcVar1)();
                }
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c58c78();
                goto LAB_10116a244;
              }
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c58b40();
          }
          goto LAB_10116a244;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c58884();
    }
  }
LAB_10116a244:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10116a500; end: 10116a5ab; -[SCMapScreenshotScopedFactoryServiceProviderSaberEntryPoint setValue:forIvarName:] */

void FUN_10116a500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10116a1b8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10116a5ac; end: 10116a667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116a5ac(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d60b60,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d60b68,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d60b70,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d60b78,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d60b80,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d60b88) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d60b90) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10116a668; end: 10116a687; -[SCMapScreenshotScopedFactoryServiceProviderSaberEntryPoint init] */

void FUN_10116a668(void)

{
  FUN_10116a5ac();
  return;
}



/* Entry: 10116a688; end: 10116a6bb;  */

void FUN_10116a688(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10116a6bc; end: 10116a743; -[SCMapScreenshotScopedFactoryServiceProviderSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010116a728: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010116a72c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116a6bc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d60b60);
  func_0x000107c61610(param_1 + _DAT_112d60b68);
  func_0x000107c61610(param_1 + _DAT_112d60b70);
  func_0x000107c61610(param_1 + _DAT_112d60b78);
  func_0x000107c61610(param_1 + _DAT_112d60b80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d60b88));
  return;
}



/* Entry: 10116a744; end: 10116a763;  */

void FUN_10116a744(void)

{
  func_0x000107c61168(&PTR_PTR_1127b1d28);
  return;
}



/* Entry: 10116a764; end: 10116a7af;  */

void FUN_10116a764(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60bc0,&UNK_10d926fb0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10116a88c,param_1);
  return;
}



/* Entry: 10116a7b0; end: 10116a88b;  */

void FUN_10116a7b0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  puVar1 = &UNK_1103895d8;
  func_0x000107c613fc(&UNK_1103895d8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uStack_48;
  uVar3 = uStack_48;
  func_0x000107c61174(uStack_48);
  uVar2 = 0x10;
  func_0x0001001ca524(0x10,0,0x3c,4,0,0,&UNK_10d9270e8,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
  uVar3 = 0;
  FUN_10116d4b4();
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110389440;
  func_0x000100083b20(param_1);
  return;
}



/* Entry: 10116a88c; end: 10116a893;  */

void FUN_10116a88c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  puVar1 = &UNK_1103895d8;
  func_0x000107c613fc(&UNK_1103895d8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uStack_48;
  uVar3 = uStack_48;
  func_0x000107c61174(uStack_48);
  uVar2 = 0x10;
  func_0x0001001ca524(0x10,0,0x3c,4,0,0,&UNK_10d9270e8,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
  uVar3 = 0;
  FUN_10116d4b4();
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110389440;
  func_0x000100083b20(param_1);
  return;
}



/* Entry: 10116a894; end: 10116a95b;  */

void FUN_10116a894(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d60bc8,&UNK_10d926fb8);
  puVar1 = &UNK_1103892c0;
  func_0x000107c613fc(&UNK_1103892c0,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(FUN_10116aaf0,puVar1);
  return;
}



/* Entry: 10116a95c; end: 10116aaef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116a95c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  plVar5 = &lStack_a0;
  func_0x000100083b20(&uStack_68);
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  lVar2 = 0;
  FUN_10116d4b4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112d60bd0) = 0;
  *(undefined8 *)(lVar3 + _DAT_112d60bd8) = 0;
  lVar1 = _DAT_112d60be0;
  lVar4 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar3 + lVar1,1,1,lVar4);
  *(undefined8 *)(lVar3 + _DAT_112d60be8) = 0;
  *(undefined8 *)(lVar3 + _DAT_112d60bf0) = 0;
  *(undefined8 *)(lVar3 + _DAT_112d60bf8) = 0;
  *(undefined8 *)(lVar3 + _DAT_112d60c00) = uStack_68;
  *(undefined8 *)(lVar3 + _DAT_112d60c08) = uStack_70;
  *(undefined8 *)(lVar3 + _DAT_112d60c10) = uStack_78;
  *(undefined8 *)(lVar3 + _DAT_112d60c18) = uStack_80;
  *(undefined8 *)(lVar3 + _DAT_112d60c20) = uStack_88;
  *(undefined8 *)(lVar3 + _DAT_112d60c28) = uStack_90;
  lStack_a0 = lVar3;
  lStack_98 = lVar2;
  func_0x000107c61154(&lStack_a0,PTR_s_init_1125d9248);
  *param_1 = plVar5;
  return;
}



/* Entry: 10116aaf0; end: 10116aaff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116aaf0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  plVar5 = &lStack_a0;
  func_0x000100083b20(&uStack_68,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                      ,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  lVar2 = 0;
  FUN_10116d4b4();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112d60bd0) = 0;
  *(undefined8 *)(lVar3 + _DAT_112d60bd8) = 0;
  lVar1 = _DAT_112d60be0;
  lVar4 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar3 + lVar1,1,1,lVar4);
  *(undefined8 *)(lVar3 + _DAT_112d60be8) = 0;
  *(undefined8 *)(lVar3 + _DAT_112d60bf0) = 0;
  *(undefined8 *)(lVar3 + _DAT_112d60bf8) = 0;
  *(undefined8 *)(lVar3 + _DAT_112d60c00) = uStack_68;
  *(undefined8 *)(lVar3 + _DAT_112d60c08) = uStack_70;
  *(undefined8 *)(lVar3 + _DAT_112d60c10) = uStack_78;
  *(undefined8 *)(lVar3 + _DAT_112d60c18) = uStack_80;
  *(undefined8 *)(lVar3 + _DAT_112d60c20) = uStack_88;
  *(undefined8 *)(lVar3 + _DAT_112d60c28) = uStack_90;
  lStack_a0 = lVar3;
  lStack_98 = lVar2;
  func_0x000107c61154(&lStack_a0,PTR_s_init_1125d9248);
  *param_1 = plVar5;
  return;
}



/* Entry: 10116ab00; end: 10116ac27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116ab00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d60bd0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d60bd8) = 0;
  lVar1 = _DAT_112d60be0;
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(unaff_x20 + lVar1,1,1,lVar2);
  *(undefined8 *)(unaff_x20 + _DAT_112d60be8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d60bf0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d60bf8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d60c00) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d60c08) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d60c10) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d60c18) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d60c20) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112d60c28) = param_6;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10116ac28; end: 10116aca3;  */

void FUN_10116ac28(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar1,*(undefined8 *)(param_1 + 0x38));
  **(undefined8 **)(*(long *)(*plVar1 + 0x40) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)();
  return;
}



/* Entry: 10116aca4; end: 10116ad37;  */

/* WARNING: Possible PIC construction at 0x00010116ad14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010116ad18) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116aca4(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
  func_0x000107c61168(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30);
  func_0x000107c5aa1c();
  func_0x000107c61180();
  func_0x000107c5d344();
  func_0x000107c61170(puVar1);
  lVar3 = *(long *)(unaff_x20 + _DAT_112d60bf0);
  if (lVar3 == 0) {
    lVar3 = 0;
    *(undefined8 *)(unaff_x20 + _DAT_112d60bf0) = 0;
  }
  else {
    lVar2 = lVar3;
    func_0x000107c614f0(lVar3);
    func_0x000107c615f0(lVar3);
    func_0x000107c6001c(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
  return;
}



/* Entry: 10116ad38; end: 10116ad8f; -[_TtC33MapScreenshotBannerImplementation28MapScreenshotBannerPresenter dealloc] */

void FUN_10116ad38(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61174();
  FUN_10116aca4();
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61154(&uStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10116ad90; end: 10116ae67; -[_TtC33MapScreenshotBannerImplementation28MapScreenshotBannerPresenter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010116adac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116adcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116adec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116ae0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116ae2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010116ae10) */
/* WARNING: Removing unreachable block (ram,0x00010116adf0) */
/* WARNING: Removing unreachable block (ram,0x00010116add0) */
/* WARNING: Removing unreachable block (ram,0x00010116adb0) */
/* WARNING: Removing unreachable block (ram,0x00010116ae30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116ad90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d60c00));
  return;
}



/* Entry: 10116ae68; end: 10116aeff;  */

void FUN_10116ae68(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  plVar1 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x30) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10116aeb0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10116d2bc,0,0);
  return;
}



/* Entry: 10116af00; end: 10116b067;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116af00(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  lVar1 = _DAT_112eb7950;
  if (*(char *)(unaff_x22 + 0x38) == '\x01') {
    lVar5 = *(long *)(unaff_x22 + 0x28);
    uVar4 = *(undefined8 *)(*(long *)(lVar5 + _DAT_112d60c28) + _DAT_113083868);
    lVar2 = 0;
    FUN_10116db38();
    func_0x000107c613fc();
    lVar1 = _DAT_112d60cc0;
    func_0x000107c61174();
    func_0x000107c5eea0(lVar2 + lVar1);
    lVar1 = _DAT_112d60cc8;
    puVar3 = PTR_PTR_1126a6450;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar2 + lVar1) = puVar3;
    *(undefined8 *)(lVar2 + 0x10) = uVar4;
    uVar4 = *(undefined8 *)(lVar5 + _DAT_112d60bf8);
    *(long *)(lVar5 + _DAT_112d60bf8) = lVar2;
    func_0x000107c61574(uVar4);
    FUN_10116b068();
    FUN_10116b378();
    if (*(long *)(lVar5 + _DAT_112d60bd8) == 0) {
      puVar3 = PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30;
      func_0x000107c61168(PTR__OBJC_CLASS___PHPhotoLibrary_1126aed30);
      func_0x000107c5aa1c();
      func_0x000107c61180();
      func_0x000107c4fbcc();
      func_0x000107c61170(puVar3);
      FUN_10116bae4();
    }
    else {
      FUN_10116b634();
    }
  }
  else {
    lVar2 = *(long *)(*(long *)(unaff_x22 + 0x28) + _DAT_112d60c08);
    func_0x000107c61428(lVar2 + _DAT_112eb7950,unaff_x22 + 0x10,0,0);
    lVar2 = lVar2 + lVar1;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c4c3dc();
      func_0x000107c615e8(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010116b064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10116b068; end: 10116b377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116b068(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar7;
  code *pcVar8;
  long lVar9;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar6 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar7 = (long)puVar6 - extraout_x12;
  puVar2 = PTR__OBJC_CLASS___PHFetchOptions_1126cb260;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = puVar2;
  FUN_10116d23c();
  func_0x000107c613fc();
  *(undefined8 *)(puVar3 + 0x18) = 3;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  puVar4 = PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8;
  func_0x000107c610f8();
  uVar5 = 0x6e6f697461657263;
  func_0x000107c5fadc(0x6e6f697461657263,0xec00000065746144);
  func_0x000107c47040();
  func_0x000107c61170(uVar5);
  *(undefined **)(puVar3 + 0x20) = puVar4;
  uVar5 = 0;
  FUN_10116d700(0,0x112d60c88,&PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8);
  puVar4 = puVar3;
  func_0x000107c5fc48(puVar3,uVar5);
  func_0x000107c61574(puVar3);
  func_0x000107c5952c(puVar2);
  func_0x000107c61170(puVar4);
  func_0x000107c54964(puVar2);
  func_0x000107c5eea0(puVar6);
  func_0x000107c5ee6c(lVar7,0xbff0000000000000);
  pcVar8 = *(code **)(lVar9 + 8);
  (*pcVar8)(puVar6,lVar1);
  func_0x000107c5ee70();
  (*pcVar8)(lVar7,lVar1);
  FUN_10116d700(0,0x112d60c90,&PTR__OBJC_CLASS___NSPredicate_1126b06d0);
  lVar1 = 0x112d36008;
  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 4;
  *(undefined8 *)(lVar1 + 0x10) = 2;
  uVar5 = 0;
  FUN_10116d700(0,0x112d60c98,&PTR__OBJC_CLASS___NSDate_1126ae770);
  *(undefined8 *)(lVar1 + 0x38) = uVar5;
  uVar5 = 0x112d60ca0;
  func_0x00010116d740(0x112d60ca0,0x112d60c98,&PTR__OBJC_CLASS___NSDate_1126ae770,
                      PTR___sSo8NSObjectCs7CVarArg10ObjectiveCMc_11034fac8);
  puVar4 = PTR___sSus7CVarArgsWP_11034e248;
  puVar3 = PTR___sSuN_11034e220;
  *(undefined1 **)(lVar1 + 0x20) = puVar6;
  *(undefined **)(lVar1 + 0x60) = puVar3;
  *(undefined **)(lVar1 + 0x68) = puVar4;
  *(undefined8 *)(lVar1 + 0x40) = uVar5;
  *(undefined8 *)(lVar1 + 0x48) = 4;
  func_0x000107c61174(puVar6);
  uVar5 = 0xd00000000000002f;
  func_0x000107c5ff38(0xd00000000000002f,0x800000010ef28be0,lVar1);
  func_0x000107c57664(puVar2);
  func_0x000107c61170(uVar5);
  puVar3 = PTR__OBJC_CLASS___PHAsset_1126bd898;
  func_0x000107c61168();
  func_0x000107c61174(puVar2);
  func_0x000107c42fd0();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar6);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d60be8);
  *(undefined **)(unaff_x20 + _DAT_112d60be8) = puVar3;
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 10116b378; end: 10116b633;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116b378(void)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long extraout_x8;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&puStack_90 - extraout_x8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d60be8);
  if (lVar2 != 0) {
    func_0x000107c43638();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c40c4c();
      func_0x000107c61180();
      bVar1 = lVar3 == 0;
      if (bVar1) {
        func_0x000107c5eea4();
      }
      else {
        func_0x000107c5ee94(lVar8);
        func_0x000107c61170(lVar3);
        lVar3 = 0;
        func_0x000107c5eea4();
      }
      (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar8,bVar1,1);
      lVar3 = _DAT_112d60be0;
      func_0x000107c61428(unaff_x20 + _DAT_112d60be0,&puStack_90,0x21,0);
      func_0x000100ed9cbc(lVar8,unaff_x20 + lVar3);
      func_0x000107c614a8(&puStack_90);
      puVar4 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
      func_0x000107c61168(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
      func_0x000107c415e0();
      func_0x000107c61180();
      puVar5 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
      func_0x000107c610f8(PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68);
      func_0x000107c453e4();
      func_0x000107c59b44();
      uVar9 = *(undefined8 *)PTR__PHImageManagerMaximumSize_1103481c8;
      uVar10 = *(undefined8 *)(PTR__PHImageManagerMaximumSize_1103481c8 + 8);
      puVar6 = &UNK_110389498;
      func_0x000107c613fc(&UNK_110389498,0x18,7);
      *(long *)(puVar6 + 0x10) = unaff_x20;
      pcStack_70 = FUN_10116d58c;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      pcStack_80 = FUN_100f9eee0;
      puStack_78 = &UNK_1103894b0;
      ppuVar7 = &puStack_90;
      puStack_68 = puVar6;
      func_0x000107c60bc4(ppuVar7);
      puVar6 = puStack_68;
      func_0x000107c61174(puVar5);
      func_0x000107c61174();
      func_0x000107c61574(puVar6);
      func_0x000107c5037c(uVar9,uVar10,puVar4);
      func_0x000107c60bd0(ppuVar7);
      func_0x000107c61170(puVar5);
      lVar3 = *(long *)(unaff_x20 + _DAT_112d60bd8);
      lVar8 = *(long *)(unaff_x20 + _DAT_112d60bf8);
      if (lVar8 != 0) {
        func_0x000107c6157c(lVar8);
        FUN_10116da28(lVar3 != 0);
        func_0x000107c61574(lVar8);
      }
      lVar8 = _DAT_112eb7950;
      if (lVar3 == 0) {
        lVar3 = *(long *)(unaff_x20 + _DAT_112d60c08);
        func_0x000107c61428(lVar3 + _DAT_112eb7950,&puStack_90,0,0);
        lVar3 = lVar3 + lVar8;
        func_0x000107c61618();
        if (lVar3 != 0) {
          func_0x000107c4c3dc();
          func_0x000107c615e8(lVar3);
        }
      }
      func_0x000107c61170(lVar2);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar5);
    }
  }
  return;
}



/* Entry: 10116b634; end: 10116bae3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116b634(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long unaff_x20;
  undefined *puVar18;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d60c00);
  func_0x000107c4d80c();
  func_0x000107c61180();
  lVar17 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar17 != 0) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112d60bd8);
    if (lVar1 != 0) {
      puVar2 = PTR_PTR_1126ae558;
      func_0x000107c61168();
      func_0x000107c61174();
      func_0x000107c451b0();
      func_0x000107c61180();
      puVar3 = PTR_PTR_1126c3378;
      func_0x000107c61168();
      func_0x000107c4a978();
      func_0x000107c61180();
      puVar4 = PTR_PTR_1126b0c40;
      func_0x000107c61168();
      puVar18 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      func_0x000107c5af88();
      func_0x000107c61180();
      func_0x000107c45098(0x4034000000000000,0x4034000000000000);
      func_0x000107c61180();
      func_0x000107c61170(puVar18);
      if (puVar4 == (undefined *)0x0) {
        puVar18 = (undefined *)0x0;
      }
      else {
        puVar18 = puVar4;
        func_0x000107c4507c();
        func_0x000107c61180();
        func_0x000107c61170(puVar4);
      }
      puVar4 = &UNK_1103894e8;
      puVar5 = puVar4;
      func_0x000107c613fc(&UNK_1103894e8,0x18,7);
      func_0x000107c61614(puVar5 + 0x10);
      func_0x000107c613fc(&UNK_1103894e8,0x18,7);
      lVar8 = unaff_x20;
      func_0x000107c61614(puVar4 + 0x10);
      puVar6 = PTR_PTR_1126b0ae0;
      func_0x000107c61168();
      puVar7 = puVar6;
      FUN_10116dbec();
      lVar16 = lVar8;
      func_0x000107c5fadc();
      func_0x000107c6142c();
      func_0x00010116dc0c();
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar16);
      puVar14 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x10116d594;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_110389500;
      ppuVar9 = &puStack_a8;
      puStack_80 = puVar5;
      func_0x000107c60bc4(ppuVar9);
      puVar15 = puStack_80;
      func_0x000107c6157c(puVar5);
      func_0x000107c61574(puVar15);
      puVar10 = PTR_PTR_1126b15a0;
      func_0x000107c61168(PTR_PTR_1126b15a0);
      func_0x000107c3ee90();
      func_0x000107c61180();
      uStack_88 = 0x10116d594;
      puStack_a8 = puVar14;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_110389528;
      ppuVar11 = &puStack_a8;
      puStack_80 = puVar5;
      func_0x000107c60bc4();
      puVar15 = puStack_80;
      func_0x000107c6157c(puVar5);
      func_0x000107c61574(puVar15);
      uStack_88 = 0x10116d59c;
      puStack_a8 = puVar14;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_110389550;
      ppuVar12 = &puStack_a8;
      puStack_80 = puVar4;
      func_0x000107c60bc4();
      puVar14 = puStack_80;
      func_0x000107c6157c(puVar4);
      func_0x000107c61574(puVar14);
      func_0x000107c40b04(0x4024000000000000);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar12);
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c61170(puVar10);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(lVar8);
      uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112d60bd0);
      *(undefined **)(unaff_x20 + _DAT_112d60bd0) = puVar6;
      func_0x000107c61170(uVar13);
      puVar14 = &UNK_110389588;
      func_0x000107c613fc(&UNK_110389588,0x20,7);
      *(long *)(puVar14 + 0x10) = lVar17;
      *(long *)(puVar14 + 0x18) = unaff_x20;
      puVar15 = &UNK_1103895b0;
      func_0x000107c613fc(&UNK_1103895b0,0x20,7);
      *(undefined **)(puVar15 + 0x10) = &UNK_10d9270c8;
      *(undefined **)(puVar15 + 0x18) = puVar14;
      func_0x000107c615f0(lVar17);
      func_0x000107c61174();
      uVar13 = 0x10;
      func_0x0001001ca524(0x10,0,0x3c,4,0,0,&UNK_10d9270d8,puVar15,PTR___sytN_11034f1b0 + 8);
      func_0x000107c615e8(lVar17);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar18);
      func_0x000107c61574(puVar5);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(puVar15);
      func_0x000107c61574(uVar13);
      return;
    }
    func_0x000107c615e8(lVar17);
  }
  lVar1 = _DAT_112eb7950;
  lVar17 = *(long *)(unaff_x20 + _DAT_112d60c08);
  func_0x000107c61428(lVar17 + _DAT_112eb7950,&puStack_a8,0,0);
  lVar17 = lVar17 + lVar1;
  func_0x000107c61618();
  if (lVar17 != 0) {
    func_0x000107c4c3dc();
    func_0x000107c615e8(lVar17);
  }
  return;
}



/* Entry: 10116bae4; end: 10116bf0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116bae4(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  long extraout_x8;
  long lVar11;
  long lVar12;
  long extraout_x8_00;
  long lVar13;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  long extraout_x12_00;
  long lVar14;
  code *pcVar15;
  undefined8 uVar16;
  long unaff_x20;
  long lVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  long alStack_100 [4];
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  
  lVar2 = 0;
  func_0x000107c5f7fc();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar11 = (long)alStack_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5f824();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar13 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_d0 = lVar13;
  func_0x000107c5f7f0();
  lStack_e0 = *(long *)(lVar4 + -8);
  lStack_d8 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e0 + 0x40));
  puVar21 = (undefined8 *)(lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = 0;
  alStack_100[3] = (long)puVar21 - extraout_x12;
  func_0x000107c5f83c();
  alStack_100[1] = *(long *)(lVar4 + -8);
  alStack_100[2] = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_100[1] + 0x40));
  lVar14 = ((long)puVar21 - extraout_x12) - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar14 - extraout_x12_00;
  lVar4 = 0;
  func_0x000107c5fffc();
  puVar8 = PTR___sSo18OS_dispatch_sourceC8DispatchE10TimerFlagsVMa_11034f9a8;
  lVar20 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar20 + 0x40));
  lVar17 = lVar19 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  lVar13 = 0;
  FUN_10116d700(0,0x112d60c68,&PTR__OBJC_CLASS___OS_dispatch_source_1126a6458);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar16 = 0x112d60c70;
  alStack_100[0] = lVar13;
  func_0x00010026626c(0x112d60c70,puVar8,
                      PTR___sSo18OS_dispatch_sourceC8DispatchE10TimerFlagsVs10SetAlgebraACMc_11034f9b8
                     );
  uVar5 = 0x112d60c78;
  func_0x0001000285a8(0x112d60c78,&UNK_10db286c0);
  uVar6 = 0x112d60c80;
  func_0x0001002662ac(0x112d60c80,0x112d60c78,&UNK_10db286c0);
  func_0x000107c60264(lVar17,&puStack_98,uVar5,uVar6,lVar4,uVar16);
  lVar7 = lVar17;
  func_0x000107c60000(lVar17,0);
  (**(code **)(lVar20 + 8))(lVar17,lVar4);
  lVar20 = lVar7;
  func_0x000107c614f0(lVar7);
  func_0x000107c5f830(lVar14);
  func_0x000107c5f85c(lVar19,0x4000000000000000,lVar14);
  lVar4 = alStack_100[2];
  pcVar18 = *(code **)(alStack_100[1] + 8);
  (*pcVar18)(lVar14,alStack_100[2]);
  lVar17 = lStack_d8;
  lVar14 = lStack_e0;
  lVar13 = alStack_100[3];
  pcVar15 = *(code **)(lStack_e0 + 0x68);
  (*pcVar15)(alStack_100[3],*(undefined4 *)PTR___s8Dispatch0A12TimeIntervalO5neveryA2CmFWC_11034f780
             ,lStack_d8);
  *puVar21 = 0;
  (*pcVar15)(puVar21,*(undefined4 *)
                      PTR___s8Dispatch0A12TimeIntervalO11nanosecondsyACSicACmFWC_11034f768,lVar17);
  func_0x000107c6007c(lVar19,lVar13,puVar21,lVar20);
  pcVar15 = *(code **)(lVar14 + 8);
  (*pcVar15)(puVar21,lVar17);
  (*pcVar15)(lVar13,lVar17);
  (*pcVar18)(lVar19,lVar4);
  puVar8 = &UNK_1103894e8;
  func_0x000107c613fc(&UNK_1103894e8,0x18,7);
  func_0x000107c61614(puVar8 + 0x10,unaff_x20);
  pcStack_78 = FUN_10116d6f8;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_1000f6b44;
  puStack_80 = &UNK_1103895f0;
  ppuVar9 = &puStack_98;
  puStack_70 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  func_0x000107c6157c(puVar8);
  lVar4 = lStack_d0;
  func_0x000107c5f808(lStack_d0);
  func_0x0001002661b0(lVar11,lVar20);
  func_0x000107c60018(lVar4,lVar11,ppuVar9,lVar20);
  func_0x000107c60bd0(ppuVar9);
  (**(code **)(lVar10 + 8))(lVar11,lVar2);
  (**(code **)(lVar12 + 8))(lVar4,lVar3);
  puVar1 = puStack_70;
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar1);
  uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112d60bf0);
  *(long *)(unaff_x20 + _DAT_112d60bf0) = lVar7;
  func_0x000107c615f0(lVar7);
  func_0x000107c615e8(uVar16);
  func_0x000107c60020(lVar20);
  func_0x000107c615e8(lVar7);
  return;
}



/* Entry: 10116bf0c; end: 10116bfa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116bf0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    if (*(long *)(param_1 + _DAT_112d60bd0) != 0) {
      func_0x000107c4207c();
    }
    FUN_10116bfa8();
    lVar1 = *(long *)(param_1 + _DAT_112d60bf8);
    if (lVar1 == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      func_0x000107c6157c(lVar1);
      FUN_10116d828();
      func_0x000107c61170(param_1);
      func_0x000107c61574(lVar1);
    }
  }
  return;
}



/* Entry: 10116bfa8; end: 10116c42b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116bfa8(double param_1,double param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  undefined8 auStack_c0 [4];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&uStack_a0 - extraout_x8;
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar13 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  lVar11 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar10 = *(long *)(unaff_x20 + _DAT_112d60bd8);
  if (lVar10 != 0) {
    puVar2 = PTR_PTR_1126afee0;
    func_0x000107c610f8();
    func_0x000107c61174(lVar10);
    uVar3 = 0x657263735f70616d;
    func_0x000107c5fadc(0x657263735f70616d,0xee00746f68736e65);
    func_0x000107c46120();
    func_0x000107c61170(uVar3);
    if (puVar2 != (undefined *)0x0) {
      func_0x000107c61168(PTR_PTR_1126bf720);
      func_0x000107c4c860();
      dVar14 = param_1;
      func_0x000107c56498(puVar2);
      func_0x000107c51820(lVar10);
      dVar15 = param_1 * dVar14;
      func_0x000107c51820(lVar10);
      func_0x000107c56484(dVar15,param_2 * dVar14,puVar2);
      func_0x000107c563f0(param_1 / param_2,puVar2);
      func_0x000107c54d18(puVar2);
      func_0x000107c5947c(puVar2);
      func_0x000107c59428(puVar2);
      func_0x000107c5919c(puVar2);
      lVar4 = _DAT_112d60be0;
      func_0x000107c61428(unaff_x20 + _DAT_112d60be0,auStack_88,0,0);
      func_0x0001009f0578(unaff_x20 + lVar4,lVar9);
      pcVar12 = *(code **)(lVar13 + 0x30);
      lVar4 = lVar9;
      (*pcVar12)(lVar9,1,lVar1);
      if ((int)lVar4 == 1) {
        func_0x000107c5eea0(lVar11);
        lVar4 = lVar9;
        (*pcVar12)(lVar9,1,lVar1);
        if ((int)lVar4 != 1) {
          func_0x0001000d1dcc(lVar9);
          lVar4 = lVar9;
        }
      }
      else {
        lVar4 = lVar11;
        (**(code **)(lVar13 + 0x20))(lVar11,lVar9,lVar1);
      }
      func_0x000107c5ee70();
      (**(code **)(lVar13 + 8))(lVar11,lVar1);
      func_0x000107c53ac4(puVar2);
      func_0x000107c61170(lVar4);
      func_0x000107c3fe58(puVar2);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d60c20);
      func_0x000107c42d48(uVar5);
      func_0x000107c61180();
      puVar6 = PTR_PTR_1126affc0;
      func_0x000107c61168(PTR_PTR_1126affc0);
      uStack_a0 = *(undefined8 *)PTR__kCMTimeZero_110348670;
      uStack_90 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 0x10);
      uStack_98 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
      func_0x000107c5d19c();
      func_0x000107c61180();
      uVar3 = uVar5;
      func_0x000107c42424(uVar5);
      func_0x000107c61180();
      func_0x000107c615e8(uVar5);
      func_0x000107c61170(puVar6);
      puVar6 = PTR_PTR_1126c8220;
      func_0x000107c610f8(PTR_PTR_1126c8220);
      *(undefined8 *)(lVar11 + -0x20) = 0;
      *(undefined8 *)(lVar11 + -0x18) = 0;
      *(undefined8 *)(lVar11 + -0x10) = 0;
      func_0x000107c480ac();
      puVar7 = PTR_PTR_1126c8228;
      func_0x000107c61168(PTR_PTR_1126c8228);
      func_0x000107c4f0c4();
      func_0x000107c61180();
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d60c10);
      puVar8 = PTR_PTR_1126c4f00;
      func_0x000107c610f8(PTR_PTR_1126c4f00);
      func_0x000107c48f0c();
      func_0x000107c3ed8c(uVar5);
      func_0x000107c61180();
      func_0x000107c61170(puVar8);
      lVar9 = *(long *)(unaff_x20 + _DAT_112d60c18);
      lVar1 = lVar9;
      func_0x000107c5194c();
      func_0x000107c61180();
      if (lVar1 != 0) {
        func_0x000107c61170();
        func_0x000107c4ffe8(lVar9);
        func_0x000107c61180();
        func_0x000107c615e8();
      }
      func_0x000107c42c1c(lVar9);
      func_0x000107c61170(lVar10);
      func_0x000107c61170(puVar2);
      func_0x000107c615e8(uVar3);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(uVar5);
      return;
    }
    func_0x000107c61170(lVar10);
  }
  lVar10 = _DAT_112eb7950;
  lVar1 = *(long *)(unaff_x20 + _DAT_112d60c08);
  func_0x000107c61428(lVar1 + _DAT_112eb7950,auStack_88,0,0);
  lVar1 = lVar1 + lVar10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4c3dc();
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 10116c42c; end: 10116c527;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116c42c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112d60bd0);
    *(undefined8 *)(param_1 + _DAT_112d60bd0) = 0;
    func_0x000107c61170(uVar2);
    lVar3 = *(long *)(param_1 + _DAT_112d60c18);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar3 == 0) {
      if (*(long *)(param_1 + _DAT_112d60bf8) != 0) {
        func_0x000104ec6920(*(undefined8 *)(*(long *)(param_1 + _DAT_112d60bf8) + _DAT_112d60cc8),1)
        ;
      }
      lVar1 = _DAT_112eb7950;
      lVar3 = *(long *)(param_1 + _DAT_112d60c08);
      func_0x000107c61428(lVar3 + _DAT_112eb7950,auStack_60,0,0);
      lVar3 = lVar3 + lVar1;
      func_0x000107c61618();
      if (lVar3 != 0) {
        func_0x000107c4c3dc();
        func_0x000107c615e8(lVar3);
      }
    }
    else {
      func_0x000107c61170();
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10116c528; end: 10116c5b7;  */

void FUN_10116c528(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar3 = 0x112d45220;
  func_0x00010026626c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10116c5b8,uVar2,uVar3);
  return;
}



/* Entry: 10116c5b8; end: 10116c623;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116c5b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  func_0x000107c5c2e0(uVar1,param_2,*(undefined8 *)(lVar2 + _DAT_112d60bd0));
  lVar2 = *(long *)(lVar2 + _DAT_112d60bf8);
  if (lVar2 != 0) {
    func_0x000107c6157c(lVar2);
    func_0x00010116d92c();
    func_0x000107c61574(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010116c620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10116c624; end: 10116c65f;  */

void FUN_10116c624(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010116c65c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10116c660; end: 10116c703;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116c660(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + _DAT_112d60bd8);
  *(undefined8 *)(param_3 + _DAT_112d60bd8) = param_1;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  FUN_10116b634();
  return;
}



/* Entry: 10116c704; end: 10116c72f; -[_TtC33MapScreenshotBannerImplementation28MapScreenshotBannerPresenter init] */

void FUN_10116c704(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapScreenshotBannerImplementation.MapScreenshotBannerPresenter",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10116c730);
  (*pcVar1)();
}



/* Entry: 10116c730; end: 10116c81b;  */

/* WARNING: Possible PIC construction at 0x00010116c7ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116c7f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010116c7b0) */
/* WARNING: Removing unreachable block (ram,0x00010116c7f4) */
/* WARNING: Removing unreachable block (ram,0x00010116c800) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116c730(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112d60be8;
  lVar3 = *(long *)(unaff_x20 + _DAT_112d60be8);
  if (lVar3 == 0) {
    return;
  }
  FUN_10116d700(0,0x112d5dfc0,&PTR__OBJC_CLASS___PHAsset_1126bd898);
  func_0x000107c61174();
  lVar2 = lVar3;
  func_0x000107c60128();
  if (lVar2 != 0) {
    func_0x000107c43638();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x000107c43284();
      func_0x000107c61180();
      *(long *)(unaff_x20 + lVar1) = lVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10116c81c; end: 10116c86b; -[_TtC33MapScreenshotBannerImplementation28MapScreenshotBannerPresenter photoLibraryDidChange:] */

/* WARNING: Possible PIC construction at 0x00010116c854: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010116c858) */

void FUN_10116c81c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10116c730(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10116c86c; end: 10116c86f; -[_TtC33MapScreenshotBannerImplementation28MapScreenshotBannerPresenter didCancelFromPreview:] */

void FUN_10116c86c(void)

{
  return;
}



/* Entry: 10116c870; end: 10116c873; -[_TtC33MapScreenshotBannerImplementation28MapScreenshotBannerPresenter didSendSnapsAndPostToStory:storyTypes:] */

void FUN_10116c870(void)

{
  return;
}



/* Entry: 10116c874; end: 10116c877; -[_TtC33MapScreenshotBannerImplementation28MapScreenshotBannerPresenter didSendChatMessage] */

void FUN_10116c874(void)

{
  return;
}



/* Entry: 10116c878; end: 10116c87b; -[_TtC33MapScreenshotBannerImplementation28MapScreenshotBannerPresenter willSendWithRecipientsCount:groupCount:] */

void FUN_10116c878(void)

{
  return;
}



/* Entry: 10116c87c; end: 10116cb73;  */

void FUN_10116c87c(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  puVar3 = &UNK_1103892e8;
  func_0x000107c613fc(&UNK_1103892e8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = unaff_x20;
  puVar4 = &UNK_110389310;
  func_0x000107c613fc(&UNK_110389310,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_10116cc0c;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_10116cc14;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_10116cc34;
  puStack_88 = &UNK_110389328;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4();
  puVar6 = puStack_78;
  func_0x000107c61174();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_110389360;
  func_0x000107c613fc(&UNK_110389360,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = unaff_x20;
  puVar7 = &UNK_110389388;
  func_0x000107c613fc(&UNK_110389388,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_10116cd98;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_80 = FUN_10116cdcc;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_10116ce04;
  puStack_88 = &UNK_1103893a0;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar9 = puStack_78;
  func_0x000107c61174();
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar9);
  puVar9 = &UNK_1103893d8;
  func_0x000107c613fc(&UNK_1103893d8,0x18,7);
  *(undefined8 *)(puVar9 + 0x10) = unaff_x20;
  puVar10 = &UNK_110389400;
  func_0x000107c613fc(&UNK_110389400,0x20,7);
  *(code **)(puVar10 + 0x10) = FUN_10116d080;
  *(undefined **)(puVar10 + 0x18) = puVar9;
  pcStack_80 = FUN_10116d088;
  puStack_a0 = puVar1;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_10006eb60;
  puStack_88 = &UNK_110389418;
  ppuVar11 = &puStack_a0;
  puStack_78 = puVar10;
  func_0x000107c60bc4(ppuVar11);
  puVar1 = puStack_78;
  func_0x000107c61174(unaff_x20);
  func_0x000107c6157c(puVar10);
  func_0x000107c61574(puVar1);
  func_0x000107c4c718(param_1);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x69,0x137,0x19,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10116cb6c);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x69,0x139,0x12,1);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = puVar10;
    func_0x000107c61544(puVar10,"",0x69,0x13b,0x18,1);
    func_0x000107c61574(puVar10);
    if (((ulong)puVar3 & 1) == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10116cb74);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10116cb70);
  (*pcVar2)();
}



/* Entry: 10116cb74; end: 10116cc0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116cb74(ulong param_1)

{
  undefined8 uVar1;
  long in_x4;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(in_x4 + _DAT_112d60bf8);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112d60cc8);
    func_0x000107c6157c(lVar2);
    if ((param_1 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0x79726f7473;
      func_0x000107c5fadc(0x79726f7473,0xe500000000000000);
    }
    func_0x000104ec6a10(uVar3,uVar1,1);
    func_0x000107c61574(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10116cc0c; end: 10116cc13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116cc0c(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d60bf8);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112d60cc8);
    func_0x000107c6157c(lVar2);
    if ((param_1 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0x79726f7473;
      func_0x000107c5fadc(0x79726f7473,0xe500000000000000);
    }
    func_0x000104ec6a10(uVar3,uVar1,1);
    func_0x000107c61574(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10116cc14; end: 10116cc33;  */

void FUN_10116cc14(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10116cc34; end: 10116ccef;  */

void FUN_10116cc34(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  if (param_3 != 0) {
    uVar2 = 0;
    FUN_10116d700(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar3 = 0x112d5cec0;
    func_0x00010116d740(0x112d5cec0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570,
                        PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8);
    func_0x000107c5fe10(param_3,uVar2,uVar3);
  }
  (*pcVar1)(param_2,param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 10116ccf0; end: 10116cd0b;  */

void FUN_10116ccf0(long param_1,long param_2)

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



/* Entry: 10116cd0c; end: 10116cd97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116cd0c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long in_stack_00000010;
  
  lVar2 = *(long *)(in_stack_00000010 + _DAT_112d60bf8);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112d60cc8);
    func_0x000107c6157c(lVar2);
    uVar1 = 0x79726f7473;
    func_0x000107c5fadc(0x79726f7473,0xe500000000000000);
    func_0x000104ec6a10(uVar3,uVar1,1);
    func_0x000107c61574(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10116cd98; end: 10116cdcb;  */

void FUN_10116cd98(void)

{
  FUN_10116cd0c();
  return;
}



/* Entry: 10116cdcc; end: 10116ce03;  */

void FUN_10116cdcc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10116ce04; end: 10116cffb;  */

/* WARNING: Possible PIC construction at 0x00010116cfb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116cfc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010116cfd4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010116cfc8) */
/* WARNING: Removing unreachable block (ram,0x00010116cfb8) */
/* WARNING: Removing unreachable block (ram,0x00010116cfd8) */

void FUN_10116ce04(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,undefined1 param_9)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  puVar3 = (undefined *)0x0;
  func_0x0001043f7068();
  func_0x000107c5fc54(param_2);
  if (param_3 != 0) {
    puVar3 = (undefined *)0x0;
    FUN_10116d700(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    uVar4 = 0x112d5cec0;
    func_0x00010116d740(0x112d5cec0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570,
                        PTR___sSo8NSObjectCSH10ObjectiveCMc_11034fab8);
    func_0x000107c5fe10(param_3,puVar3,uVar4);
  }
  if (param_4 != 0) {
    puVar3 = PTR___sSSN_11034da80;
    func_0x000107c5fc54(param_4);
  }
  if (param_5 != 0) {
    puVar3 = (undefined *)0x0;
    FUN_10116d700(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c5fc54(param_5);
  }
  if (param_6 == 0) {
    param_6 = 0;
    puVar6 = PTR___sSSN_11034da80;
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec(param_6);
    puVar6 = PTR___sSSN_11034da80;
    puVar2 = puVar3;
  }
  PTR___sSSN_11034da80 = puVar6;
  if (param_7 != 0) {
    func_0x000107c5fc54(param_7);
    puVar3 = puVar6;
  }
  if (param_8 == 0) {
    puVar3 = (undefined *)0xf000000000000000;
  }
  else {
    lVar5 = param_8;
    func_0x000107c61174(param_8);
    func_0x000107c5ee30(param_8);
    func_0x000107c61170(lVar5);
  }
  (*pcVar1)(param_2,param_3,param_4,param_5,param_6,puVar2,param_7,param_8,puVar3,param_9);
  func_0x0001000b44c0(param_8,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10116cffc; end: 10116d07f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116cffc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_1 + _DAT_112d60bf8);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112d60cc8);
    func_0x000107c6157c(lVar2);
    uVar1 = 0x74616863;
    func_0x000107c5fadc(0x74616863,0xe400000000000000);
    func_0x000104ec6a10(uVar3,uVar1,1);
    func_0x000107c61574(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10116d080; end: 10116d087;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10116d080(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d60bf8);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112d60cc8);
    func_0x000107c6157c(lVar2);
    uVar1 = 0x74616863;
    func_0x000107c5fadc(0x74616863,0xe400000000000000);
    func_0x000104ec6a10(uVar3,uVar1,1);
    func_0x000107c61574(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10116d088; end: 10116d0a7;  */

void FUN_10116d088(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10116d0a8; end: 10116d0f7; -[_TtC33MapScreenshotBannerImplementation28MapScreenshotBannerPresenter didSendWithEvent:] */

/* WARNING: Possible PIC construction at 0x00010116d0e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010116d0e4) */

void FUN_10116d0a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10116c87c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10116d0f8; end: 10116d1e3; -[_TtC33MapScreenshotBannerImplementation28MapScreenshotBannerPresenter didSendComplete:] */

void FUN_10116d0f8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10116d3ec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10116d1e4; end: 10116d20b; -[_TtC33MapScreenshotBannerImplementation28MapScreenshotBannerPresenter didDismissSendFlow] */

void FUN_10116d1e4(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x00010116d120();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10116d20c; end: 10116d23b;  */

bool FUN_10116d20c(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10116d23c; end: 10116d2a7;  */

void FUN_10116d23c(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_10116d700(0,0x112d60c88,&PTR__OBJC_CLASS___NSSortDescriptor_1126af4c8);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112d60ca8;
  plVar5 = (long *)&UNK_10d927100;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 10116d2a8; end: 10116d2bb;  */

void FUN_10116d2a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10116d2bc,0,0);
  return;
}


