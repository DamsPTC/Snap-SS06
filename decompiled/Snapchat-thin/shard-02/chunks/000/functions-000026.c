/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1016e1e80; end: 1016e1ef3;  */

void FUN_1016e1e80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_1016e1d54(param_3,param_4,param_2,param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1016e1ef4; end: 1016e1f57; -[_TtC35MusicGrapheneServicesImplementation28MusicTrackLoadGrapheneLogger init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e1ef4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112dc2790;
  puVar3 = PTR_PTR_1126a79a0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_1 + lVar1) = puVar3;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1016e1f58; end: 1016e1f8b;  */

void FUN_1016e1f58(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1016e1f8c; end: 1016e1f9b;  */

undefined1  [16] FUN_1016e1f8c(void)

{
  return ZEXT816(0x1103faf90);
}



/* Entry: 1016e1f9c; end: 1016e1fab; -[_TtC35MusicGrapheneServicesImplementation28MusicTrackLoadGrapheneLogger .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1016e1f9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112dc2790));
  return;
}



/* Entry: 1016e1fac; end: 1016e1fcb;  */

void FUN_1016e1fac(void)

{
  func_0x000107c61168(&PTR_PTR_1127e7fd8);
  return;
}



/* Entry: 1016e1fcc; end: 1016e1feb;  */

void FUN_1016e1fcc(void)

{
  puRam0000000113802c40 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  uRam0000000113802c48 = 0;
  uRam0000000113802c50 = 0xe000000000000000;
  return;
}



/* Entry: 1016e1fec; end: 1016e2067;  */

ulong FUN_1016e1fec(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  uVar1 = param_2[1];
  uVar5 = param_2[2];
  FUN_1016e661c(uVar2,*param_2);
  if ((uVar2 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    if (uVar3 != uVar1 || uVar4 != uVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(uVar3,uVar4,uVar1,uVar5,0);
      return uVar3;
    }
    uVar2 = 1;
  }
  return uVar2;
}



/* Entry: 1016e2068; end: 1016e2083;  */

void FUN_1016e2068(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e2084,0,0);
  return;
}



/* Entry: 1016e2084; end: 1016e228b;  */

void FUN_1016e2084(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long unaff_x22;
  long *plVar9;
  
  FUN_1016e8a6c(*(long *)(unaff_x22 + 0x68) + 0x10,
                *(undefined8 *)(*(long *)(unaff_x22 + 0x68) + 0x28));
  ppuVar6 = &PTR_DAT_1103fb850;
  uVar1 = 0;
  FUN_1016eae20();
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  *(undefined ***)(unaff_x22 + 0x78) = ppuVar6;
  uVar2 = uVar1;
  func_0x000107c5fd5c();
  if (((uVar2 & 1) == 0) && ((uVar1 & 1) != 0)) {
    lVar3 = *(long *)(unaff_x22 + 0x58);
    lVar4 = *(long *)(unaff_x22 + 0x60);
    if (lVar3 != 0 || lVar4 != 0) {
      FUN_1016e8a6c(*(long *)(unaff_x22 + 0x68) + 0x60,
                    *(undefined8 *)(*(long *)(unaff_x22 + 0x68) + 0x78));
      FUN_1016e5b48();
      if (lVar4 == 0) {
        if (lVar3 == 0) goto LAB_1016e20f8;
        uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
        lVar3 = *(long *)(unaff_x22 + 0x68) + 0x38;
        FUN_1016e8a6c(lVar3,*(undefined8 *)(*(long *)(unaff_x22 + 0x68) + 0x50));
        func_0x000107c61434(ppuVar6);
        func_0x000107c61174();
        lVar4 = 0x112d36850;
        FUN_1016e6d14(0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68,0x112d502b0,&UNK_10d9169a0);
        func_0x000107c613fc();
        *(long *)(unaff_x22 + 0x88) = lVar4;
        *(undefined8 *)(lVar4 + 0x18) = 3;
        *(undefined8 *)(lVar4 + 0x10) = 1;
        *(undefined8 *)(lVar4 + 0x20) = uVar8;
        plVar9 = (long *)0x1f0;
        func_0x000107c61174(uVar8);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x90) = plVar9;
        *plVar9 = unaff_x22;
        plVar9[1] = (long)FUN_1016e23e4;
        plVar9[0x2f] = (long)ppuVar6;
        plVar9[0x30] = lVar3;
        plVar9[0x2e] = lVar4;
        pcVar5 = FUN_1016e3770;
      }
      else {
        lVar4 = *(long *)(unaff_x22 + 0x60);
        lVar3 = *(long *)(unaff_x22 + 0x68) + 0x38;
        FUN_1016e8a6c(lVar3,*(undefined8 *)(*(long *)(unaff_x22 + 0x68) + 0x50));
        plVar9 = (long *)0xa0;
        func_0x000107c61174();
        func_0x000107c61434(ppuVar6);
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x80) = plVar9;
        *plVar9 = unaff_x22;
        plVar9[1] = (long)FUN_1016e228c;
        plVar9[0xd] = (long)ppuVar6;
        plVar9[0xe] = lVar3;
        plVar9[0xc] = lVar4;
        pcVar5 = FUN_1016e3cf8;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(pcVar5,0,0);
      return;
    }
  }
LAB_1016e20f8:
  func_0x000107c6142c(ppuVar6);
  puVar7 = *(undefined8 **)(unaff_x22 + 0x50);
  puVar7[4] = 0;
  puVar7[1] = 0;
  *puVar7 = 0;
  puVar7[3] = 0;
  puVar7[2] = 0;
                    /* WARNING: Could not recover jumptable at 0x0001016e2128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1016e228c; end: 1016e22e3;  */

void FUN_1016e228c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long **)(lVar2 + 0x10) = unaff_x22;
  *(undefined8 *)(lVar2 + 0x18) = param_1;
  *(undefined8 *)(lVar2 + 0x20) = param_2;
  *(undefined8 *)(lVar2 + 0x28) = param_3;
  uVar1 = *(undefined8 *)(lVar2 + 0x78);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x80));
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e22e4,0,0);
  return;
}



/* Entry: 1016e22e4; end: 1016e23e3;  */

void FUN_1016e22e4(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  lVar1 = *(long *)(unaff_x22 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar2 = *(ulong *)(unaff_x22 + 0x60);
  func_0x000107c61170();
  *(long *)(unaff_x22 + 0x98) = lVar1;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar6;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar8;
  func_0x000107c5fd5c();
  uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
  if ((uVar2 & 1) == 0) {
    lVar3 = lVar1;
    FUN_1016e8594(*(undefined8 *)(unaff_x22 + 0x70));
    func_0x000107c6142c(uVar8);
    *(long *)(unaff_x22 + 0xb0) = lVar3;
    *(long *)(unaff_x22 + 0xb8) = param_2;
    if (param_2 != 0) {
      puVar5 = (undefined8 *)(*(long *)(unaff_x22 + 0x68) + 0x60);
      FUN_1016e8a6c(puVar5,*(undefined8 *)(*(long *)(unaff_x22 + 0x68) + 0x78));
      plVar7 = (long *)*puVar5;
      plVar4 = (long *)0xe0;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xc0) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_1016e2548;
      plVar4[0x12] = param_2;
      plVar4[0x13] = (long)plVar7;
      plVar4[0x11] = lVar3;
      plVar4[0x14] = *plVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e5bdc,0,0);
      return;
    }
  }
  else {
    func_0x000107c6142c(uVar8);
  }
  func_0x000107c6142c(lVar1);
  func_0x000107c6142c(uVar6);
  puVar5 = *(undefined8 **)(unaff_x22 + 0x50);
  puVar5[4] = 0;
  puVar5[1] = 0;
  *puVar5 = 0;
  puVar5[3] = 0;
  puVar5[2] = 0;
                    /* WARNING: Could not recover jumptable at 0x0001016e23e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1016e23e4; end: 1016e2447;  */

void FUN_1016e23e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long **)(lVar2 + 0x30) = unaff_x22;
  *(undefined8 *)(lVar2 + 0x38) = param_1;
  *(undefined8 *)(lVar2 + 0x40) = param_2;
  *(undefined8 *)(lVar2 + 0x48) = param_3;
  uVar1 = *(undefined8 *)(lVar2 + 0x88);
  uVar3 = *(undefined8 *)(lVar2 + 0x78);
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x90));
  func_0x000107c61574(uVar1);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e2448,0,0);
  return;
}



/* Entry: 1016e2448; end: 1016e2547;  */

void FUN_1016e2448(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  lVar1 = *(long *)(unaff_x22 + 0x38);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar2 = *(ulong *)(unaff_x22 + 0x58);
  func_0x000107c61170();
  *(long *)(unaff_x22 + 0x98) = lVar1;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar6;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar8;
  func_0x000107c5fd5c();
  uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
  if ((uVar2 & 1) == 0) {
    lVar3 = lVar1;
    FUN_1016e8594(*(undefined8 *)(unaff_x22 + 0x70));
    func_0x000107c6142c(uVar8);
    *(long *)(unaff_x22 + 0xb0) = lVar3;
    *(long *)(unaff_x22 + 0xb8) = param_2;
    if (param_2 != 0) {
      puVar5 = (undefined8 *)(*(long *)(unaff_x22 + 0x68) + 0x60);
      FUN_1016e8a6c(puVar5,*(undefined8 *)(*(long *)(unaff_x22 + 0x68) + 0x78));
      plVar7 = (long *)*puVar5;
      plVar4 = (long *)0xe0;
      func_0x000107c615b8();
      *(long **)(unaff_x22 + 0xc0) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_1016e2548;
      plVar4[0x12] = param_2;
      plVar4[0x13] = (long)plVar7;
      plVar4[0x11] = lVar3;
      plVar4[0x14] = *plVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e5bdc,0,0);
      return;
    }
  }
  else {
    func_0x000107c6142c(uVar8);
  }
  func_0x000107c6142c(lVar1);
  func_0x000107c6142c(uVar6);
  puVar5 = *(undefined8 **)(unaff_x22 + 0x50);
  puVar5[4] = 0;
  puVar5[1] = 0;
  *puVar5 = 0;
  puVar5[3] = 0;
  puVar5[2] = 0;
                    /* WARNING: Could not recover jumptable at 0x0001016e2544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1016e2548; end: 1016e259b;  */

void FUN_1016e2548(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 200) = param_1;
  *(undefined1 *)(lVar1 + 0xe0) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e259c,0,0);
  return;
}



/* Entry: 1016e259c; end: 1016e264f;  */

void FUN_1016e259c(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  if ((*(char *)(unaff_x22 + 0xe0) != '\x01') && (func_0x000107c5fd5c(), (param_1 & 1) == 0)) {
    lVar2 = *(long *)(unaff_x22 + 0x68) + 0x88;
    FUN_1016e8a6c(lVar2,*(undefined8 *)(*(long *)(unaff_x22 + 0x68) + 0xa0));
    plVar3 = (long *)0x90;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xd0) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1016e2650;
    plVar3[8] = *(long *)(unaff_x22 + 200);
    plVar3[9] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e6220,0,0);
    return;
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x98));
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar5);
  puVar4 = *(undefined8 **)(unaff_x22 + 0x50);
  puVar4[4] = 0;
  puVar4[1] = 0;
  *puVar4 = 0;
  puVar4[3] = 0;
  puVar4[2] = 0;
                    /* WARNING: Could not recover jumptable at 0x0001016e2600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1016e2650; end: 1016e271b;  */

void FUN_1016e2650(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0xd8) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1016e26a0,0,0);
  return;
}



/* Entry: 1016e271c; end: 1016e27ab;  */

void FUN_1016e271c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  *(long *)(unaff_x22 + 0x80) = unaff_x20;
  lVar1 = 0;
  func_0x000107c5eec8();
  *(long *)(unaff_x22 + 0x88) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x98) = uVar2;
  plVar3 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xa0) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1016e27ac;
  plVar3[0xc] = param_3;
  plVar3[0xd] = unaff_x20;
  plVar3[10] = unaff_x22 + 0x10;
  plVar3[0xb] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e2084,0,0);
  return;
}



/* Entry: 1016e27ac; end: 1016e27f3;  */

void FUN_1016e27ac(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0xa0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e27f4,0,0);
  return;
}



/* Entry: 1016e27f4; end: 1016e298b;  */

void FUN_1016e27f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x22;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  
  lVar9 = *(long *)(unaff_x22 + 0x10);
  if (lVar9 == 0) {
    lVar5 = 0;
    lVar7 = 0;
    lVar8 = 0;
    lVar6 = 0;
    lVar4 = 0;
    lVar9 = 0;
    lVar10 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
    lVar4 = *(long *)(unaff_x22 + 0x80);
    *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x30);
    *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x28);
    lVar8 = *(long *)(lVar4 + 200);
    lVar6 = *(long *)(lVar4 + 0xd0);
    FUN_1016e8a6c(lVar4 + 0xb0,lVar8);
    lVar5 = lVar9;
    (**(code **)(lVar6 + 0x10))(lVar9,lVar8,lVar6);
    if (lVar5 == 0) {
      func_0x000107c61170(lVar9);
      *(undefined8 *)(unaff_x22 + 0x48) = uVar1;
      *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
      func_0x000100bcb1dc(unaff_x22 + 0x48);
      *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x70);
      *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x68);
      func_0x000100bcb1dc(unaff_x22 + 0x38);
      lVar7 = 0;
      lVar8 = 0;
      lVar6 = 0;
      lVar4 = 0;
      lVar9 = 0;
      lVar10 = 0;
    }
    else {
      lVar6 = *(long *)(unaff_x22 + 0x90);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
      lVar7 = lVar5;
      func_0x000107c5eec4(uVar3);
      func_0x000107c5eeac();
      (**(code **)(lVar6 + 8))(uVar3,uVar11);
      func_0x000107c5fb78(uVar1,uVar2);
      lVar6 = 0x5f44524f5759454b;
      lVar4 = -0x1800000000000000;
      *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x70);
      *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x68);
      func_0x000107c61434(*(undefined8 *)(unaff_x22 + 0x60));
      func_0x000107c61170(lVar9);
      func_0x000107c6142c(uVar2);
      func_0x000100bcb1dc(unaff_x22 + 0x58);
      lVar9 = *(long *)(unaff_x22 + 0x58);
      lVar10 = *(long *)(unaff_x22 + 0x60);
    }
  }
  plVar12 = *(long **)(unaff_x22 + 0x78);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x98));
  *plVar12 = lVar5;
  plVar12[1] = lVar7;
  plVar12[2] = lVar8;
  plVar12[3] = lVar6;
  plVar12[4] = lVar4;
  plVar12[5] = lVar9;
  plVar12[6] = lVar10;
                    /* WARNING: Could not recover jumptable at 0x0001016e2988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1016e298c; end: 1016e2ae3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1016e298c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *unaff_x20;
  func_0x0001000285a8(0x112dc2ad0,&UNK_10d97f8c0);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  puVar2 = &UNK_1103fb328;
  func_0x000107c613fc(&UNK_1103fb328,0x38,7);
  *(undefined8 **)(puVar2 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = 0;
  *(long *)(puVar2 + 0x28) = lVar1;
  *(undefined8 *)(puVar2 + 0x30) = uVar4;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c();
  func_0x0001001ca524(param_2,param_3,param_4,4,0,0,&UNK_10d97f9d0,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  lVar3 = *(long *)(lVar1 + 0x10);
  func_0x000103fc84bc(0);
  func_0x000107c610f8();
  func_0x000107c6157c();
  func_0x000103fc80f8();
  func_0x000107c61574(lVar1);
  uVar4 = *(undefined8 *)(lVar3 + _DAT_11303fda8);
  func_0x000107c6157c(uVar4);
  func_0x000107c61170(lVar3);
  return uVar4;
}



/* Entry: 1016e2ae4; end: 1016e2c2f;  */

undefined8
FUN_1016e2ae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  func_0x0001000285a8(0x112dc2ad0,&UNK_10d97f8c0);
  func_0x000107c613fc();
  lVar1 = 0;
  func_0x00010095c380();
  puVar2 = &UNK_1103fb0d0;
  func_0x000107c613fc(&UNK_1103fb0d0,0x38,7);
  *(undefined8 **)(puVar2 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(long *)(puVar2 + 0x28) = lVar1;
  *(undefined8 *)(puVar2 + 0x30) = uVar3;
  func_0x000107c61174(param_2);
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c();
  func_0x000107c61174(param_1);
  func_0x0001001ca524(param_3,param_4,param_5,4,0,0,&UNK_10d97f8d0,puVar2,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar2);
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000103fc84bc(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar3);
  func_0x000103fc80f8();
  func_0x000107c61574(lVar1);
  return uVar3;
}



/* Entry: 1016e2c30; end: 1016e2c9f;  */

void FUN_1016e2c30(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x48) = param_6;
  plVar1 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1016e2ca0;
  plVar1[0xc] = param_4;
  plVar1[0xd] = param_2;
  plVar1[10] = unaff_x22 + 0x10;
  plVar1[0xb] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e2084,0,0);
  return;
}



/* Entry: 1016e2ca0; end: 1016e2cfb;  */

void FUN_1016e2ca0(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x50));
  *(undefined8 *)(lVar1 + 0x60) = *(undefined8 *)(lVar1 + 0x18);
  *(undefined8 *)(lVar1 + 0x58) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(lVar1 + 0x70) = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x68) = *(undefined8 *)(lVar1 + 0x20);
  *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(lVar1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e2cfc,0,0);
  return;
}



/* Entry: 1016e2cfc; end: 1016e2ddb;  */

void FUN_1016e2cfc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 auStack_48 [2];
  
  if (*(long *)(unaff_x22 + 0x10) == 0) {
    auStack_48[0] = 0;
  }
  else {
    uStack_58 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
    uStack_68 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
    uStack_70 = uVar3;
    uStack_60 = uVar2;
    uStack_50 = uVar1;
    func_0x000107c61174();
    func_0x000107c61434(uVar2);
    func_0x000107c61434(uVar1);
    FUN_1016e2ddc(auStack_48,&uStack_70,uVar4);
    func_0x0001016e97f0((long *)(unaff_x22 + 0x10),0x112dc2ad8,&UNK_10d97f8e0);
    func_0x000107c61170(uVar3);
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(uVar1);
  }
  *(undefined8 *)(unaff_x22 + 0x38) = auStack_48[0];
  func_0x000100b60084();
  func_0x000107c61170(auStack_48[0]);
                    /* WARNING: Could not recover jumptable at 0x0001016e2dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1016e2ddc; end: 1016e3077;  */

void FUN_1016e2ddc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar3 = 0;
  puStack_78 = param_1;
  func_0x000107c5eec8();
  lVar14 = *(long *)(lVar3 + -8);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar13 = (long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar9 = param_2[2];
  uVar8 = param_2[3];
  uVar12 = param_2[4];
  func_0x000107c5eec4(lVar13);
  func_0x000107c5eeac();
  lStack_80 = lVar4;
  (**(code **)(lVar14 + 8))(lVar13,lVar3);
  puVar5 = PTR_PTR_1126bc940;
  func_0x000107c610f8(PTR_PTR_1126bc940);
  func_0x000107c453e4();
  lVar4 = 0x112d38dc0;
  func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  uVar6 = 0;
  func_0x0001016e9bd4(0,0x112d52668,&PTR_PTR_1126bfa50);
  *(undefined8 *)(lVar4 + 0x38) = uVar6;
  *(undefined8 *)(lVar4 + 0x20) = uVar1;
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x000107c61174(uVar1);
  lVar3 = lVar4;
  func_0x000107c5fc48(lVar4,PTR___sypN_11034f1a8 + 8);
  func_0x000107c61574(lVar4);
  func_0x000107c45788(puVar7);
  func_0x000107c61170(lVar3);
  func_0x000107c5a014(puVar5);
  func_0x000107c61170(puVar7);
  func_0x000107c5fadc(uVar8,uVar12);
  func_0x000107c5679c(puVar5);
  func_0x000107c61170(uVar8);
  puVar7 = PTR_PTR_1126c4400;
  func_0x000107c610f8(PTR_PTR_1126c4400);
  func_0x000107c453e4();
  uStack_70 = 0x5f44524f5759454b;
  uStack_68 = 0xe800000000000000;
  func_0x000107c5fb78(uVar2,uVar9);
  uVar1 = uStack_68;
  uVar9 = uStack_70;
  func_0x000107c5fadc(uStack_70,uStack_68);
  func_0x000107c6142c(uVar1);
  func_0x000107c55d70(puVar7);
  func_0x000107c61170(uVar9);
  puVar10 = PTR_PTR_1126c43f0;
  func_0x000107c610f8(PTR_PTR_1126c43f0);
  func_0x000107c453e4();
  func_0x000107c55cc8();
  func_0x000107c538bc(puVar5);
  puVar11 = PTR_PTR_1126bc920;
  func_0x000107c610f8();
  lVar4 = lStack_80;
  func_0x000107c5fadc(lStack_80,param_3);
  func_0x000107c482a0();
  func_0x000107c6142c(param_3);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(lVar4);
  *puStack_78 = puVar11;
  return;
}



/* Entry: 1016e3078; end: 1016e30bb;  */

void FUN_1016e3078(void)

{
  long unaff_x20;
  
  FUN_1016e8b18(unaff_x20 + 0x10);
  FUN_1016e8b18(unaff_x20 + 0x38);
  FUN_1016e8b18(unaff_x20 + 0x60);
  FUN_1016e8b18(unaff_x20 + 0x88);
  FUN_1016e8b18(unaff_x20 + 0xb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1016e30bc; end: 1016e312f;  */

void FUN_1016e30bc(void)

{
  ulong uVar1;
  undefined **ppuVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar3 = *unaff_x20;
  FUN_1016e8a6c(lVar3 + 0x10,*(undefined8 *)(lVar3 + 0x28));
  ppuVar2 = &PTR_DAT_1103fb850;
  uVar1 = 0;
  FUN_1016eae20();
  func_0x000107c6142c(ppuVar2);
  if ((uVar1 & 1) != 0) {
    FUN_1016e8a6c(lVar3 + 0x60,*(undefined8 *)(lVar3 + 0x78));
    FUN_1016e5b48();
  }
  return;
}



/* Entry: 1016e3130; end: 1016e318f;  */

void FUN_1016e3130(long param_1)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  *(long *)(unaff_x22 + 0x78) = lVar2;
  plVar1 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1016e3190;
  plVar1[0xc] = 0;
  plVar1[0xd] = lVar2;
  plVar1[10] = unaff_x22 + 0x10;
  plVar1[0xb] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e2084,0,0);
  return;
}



/* Entry: 1016e3190; end: 1016e31d7;  */

void FUN_1016e3190(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016ea580,0,0);
  return;
}



/* Entry: 1016e31d8; end: 1016e3243;  */

void FUN_1016e31d8(long param_1,long param_2)

{
  long *plVar1;
  long *unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *unaff_x20;
  *(long *)(unaff_x22 + 0x78) = lVar2;
  plVar1 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1016e3244;
  plVar1[0xc] = param_2;
  plVar1[0xd] = lVar2;
  plVar1[10] = unaff_x22 + 0x10;
  plVar1[0xb] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e2084,0,0);
  return;
}



/* Entry: 1016e3244; end: 1016e328b;  */

void FUN_1016e3244(void)

{
  long *unaff_x22;
  
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e328c,0,0);
  return;
}



/* Entry: 1016e328c; end: 1016e3343;  */

void FUN_1016e328c(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x10);
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(unaff_x22 + 0x78);
    *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x18);
    *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x30);
    *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x28);
    uVar1 = *(undefined8 *)(lVar3 + 200);
    lVar2 = *(long *)(lVar3 + 0xd0);
    FUN_1016e8a6c(lVar3 + 0xb0,uVar1);
    lVar3 = lVar4;
    (**(code **)(lVar2 + 0x10))(lVar4,uVar1,lVar2);
    func_0x000107c61170(lVar4);
    *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x40);
    *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x38);
    func_0x000100bcb1dc(unaff_x22 + 0x68);
    *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x50);
    *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x48);
    func_0x000100bcb1dc(unaff_x22 + 0x58);
  }
                    /* WARNING: Could not recover jumptable at 0x0001016e3340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar3);
  return;
}



/* Entry: 1016e3344; end: 1016e33af;  */

void FUN_1016e3344(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long *plVar4;
  long *unaff_x20;
  long lVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  lVar5 = *unaff_x20;
  plVar4 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x50) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1016e33b0;
  plVar4[0xf] = unaff_x22 + 0x10;
  plVar4[0x10] = lVar5;
  lVar1 = 0;
  func_0x000107c5eec8();
  plVar4[0x11] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar4[0x12] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x13] = uVar2;
  plVar3 = (long *)0xf0;
  func_0x000107c615b8();
  plVar4[0x14] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_1016e27ac;
  plVar3[0xc] = param_3;
  plVar3[0xd] = lVar5;
  plVar3[10] = (long)(plVar4 + 2);
  plVar3[0xb] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e2084,0,0);
  return;
}



/* Entry: 1016e33b0; end: 1016e3403;  */

void FUN_1016e33b0(void)

{
  undefined8 *puVar1;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *unaff_x22;
  puVar1 = *(undefined8 **)(lVar2 + 0x48);
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x50));
  uVar5 = *(undefined8 *)(lVar2 + 0x18);
  uVar4 = *(undefined8 *)(lVar2 + 0x10);
  uVar7 = *(undefined8 *)(lVar2 + 0x28);
  uVar6 = *(undefined8 *)(lVar2 + 0x20);
  uVar9 = *(undefined8 *)(lVar2 + 0x38);
  uVar8 = *(undefined8 *)(lVar2 + 0x30);
  puVar1[6] = *(undefined8 *)(lVar2 + 0x40);
  puVar1[3] = uVar7;
  puVar1[2] = uVar6;
  puVar1[5] = uVar9;
  puVar1[4] = uVar8;
  puVar1[1] = uVar5;
  *puVar1 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x0001016e3400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Entry: 1016e3404; end: 1016e3443;  */

void FUN_1016e3404(void)

{
  FUN_1016e298c();
  return;
}



/* Entry: 1016e3444; end: 1016e349f; -[_TtC19SCMusicServicesImpl42ObjcMusicContentBasedRecommendationFetcher preloadContextualRecommendations] */

void FUN_1016e3444(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x30);
  FUN_1016e8a6c(param_1 + 0x10,uVar1);
  pcVar3 = *(code **)(lVar2 + 8);
  func_0x000107c6157c(param_1);
  (*pcVar3)(uVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1016e34a0; end: 1016e359b; -[_TtC19SCMusicServicesImpl42ObjcMusicContentBasedRecommendationFetcher fetchRecommendationWithImage:attribution:] */

void FUN_1016e34a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x30);
  uVar5 = uVar1;
  uVar6 = param_3;
  FUN_1016e8a6c(param_1 + 0x10,uVar1);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar3 = param_3;
  func_0x000107c61174();
  func_0x000107c6157c(param_1);
  uVar4 = param_4;
  func_0x00010007c020(param_4);
  (**(code **)(lVar2 + 0x28))(param_3,uVar4,uVar5,uVar6,uVar1,lVar2);
  func_0x00010007d980(uVar4,uVar5,uVar6);
  func_0x00010488b298();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1016e359c; end: 1016e36a3; -[_TtC19SCMusicServicesImpl42ObjcMusicContentBasedRecommendationFetcher fetchRecommendationWithVideoAsset:firstFrameImage:attribution:] */

void FUN_1016e359c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x30);
  uVar6 = uVar1;
  uVar7 = param_3;
  FUN_1016e8a6c(param_1 + 0x10,uVar1);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar3 = param_3;
  func_0x000107c61174();
  uVar4 = param_4;
  func_0x000107c61174();
  func_0x000107c6157c(param_1);
  uVar5 = param_5;
  func_0x00010007c020(param_5);
  (**(code **)(lVar2 + 0x30))(param_4,param_3,uVar5,uVar6,uVar7,uVar1,lVar2);
  func_0x00010007d980(uVar5,uVar6,uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_5);
  func_0x000107c61574(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 1016e36a4; end: 1016e36c7;  */

void FUN_1016e36a4(void)

{
  long unaff_x20;
  
  FUN_1016e8b18(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1016e36c8; end: 1016e3753;  */

void FUN_1016e36c8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1103fb350;
  func_0x000107c613fc(&UNK_1103fb350,0x20,7);
  uVar3 = param_1[1];
  uVar2 = *param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_1[1];
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x0001016e9bd4(0,0x112d69830,&PTR_PTR_1126a6700);
  func_0x000107c6157c(uVar3);
  func_0x00010488b6c8(0x403e000000000000,0x1016e9bb4,puVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1016e3754; end: 1016e376f;  */

void FUN_1016e3754(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x178) = param_2;
  *(undefined8 *)(unaff_x22 + 0x180) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x170) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e3770,0,0);
  return;
}



/* Entry: 1016e3770; end: 1016e3a97;  */

void FUN_1016e3770(void)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar7 = *(ulong *)(unaff_x22 + 0x170);
  if (uVar7 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar2 = uVar7;
    }
    func_0x000107c60480();
  }
  if ((uVar2 != 0) && (func_0x000107c5fd5c(), (uVar2 & 1) == 0)) {
    lVar3 = *(long *)(unaff_x22 + 0x178);
    lVar11 = *(long *)(unaff_x22 + 0x180);
    FUN_1016e9354(lVar11 + 0x10,unaff_x22 + 0xe0);
    lVar8 = unaff_x22 + 0x108;
    FUN_1016e9354(lVar11 + 0x38,lVar8);
    FUN_1016eb05c();
    *(long *)(unaff_x22 + 0x188) = lVar3;
    if (lVar3 == 0) {
      FUN_1016e8880(unaff_x22 + 0xe0);
    }
    else {
      FUN_1016e4bbc(lVar8);
      func_0x000107c6142c(lVar8);
      lVar8 = *(long *)(lVar3 + 0x10);
      FUN_1016e8880(unaff_x22 + 0xe0);
      if (lVar8 != 0) {
        uVar9 = *(undefined8 *)(unaff_x22 + 0x180);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x170);
        *(undefined1 *)(unaff_x22 + 0x1e0) = 0;
        func_0x0001000285a8(0x112d382e0,&UNK_10d91a6b0);
        func_0x000107c613fc();
        lVar8 = unaff_x22 + 0x1e0;
        func_0x00010006c248();
        *(long *)(unaff_x22 + 400) = lVar8;
        *(undefined8 *)(unaff_x22 + 0x20) = uVar9;
        *(long *)(unaff_x22 + 0x28) = lVar8;
        *(undefined8 *)(unaff_x22 + 0x30) = uVar10;
        *(long *)(unaff_x22 + 0x38) = lVar3;
        iVar1 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        if (iVar1 != 0) {
          plVar4 = (long *)(ulong)*(uint *)(
                                           PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlFTu_11034ffe0
                                           + 4);
          func_0x000107c615b8();
          *(long **)(unaff_x22 + 0x198) = plVar4;
          *plVar4 = unaff_x22;
          plVar4[1] = (long)FUN_1016e3a98;
                    /* WARNING: Could not recover jumptable at 0x00010bdb99ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss27withTaskCancellationHandler9operation8onCancel9isolationxxyYaKXE_yyYbXEScA_pSgYitYaKlF_11034ffd8
          )(plVar4,unaff_x22 + 0x158,&UNK_10d97f9a0,unaff_x22 + 0x10,FUN_1016e9950,lVar8,0,0,
            &UNK_1103fb478);
          return;
        }
        lVar11 = *(long *)(unaff_x22 + 0x180);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x170);
        pcVar5 = FUN_1016e9950;
        func_0x000107c615b4(FUN_1016e9950,lVar8);
        *(code **)(unaff_x22 + 0x1a0) = pcVar5;
        func_0x0001000285a8(0x112dc2b20,&UNK_10d97f9a8);
        uVar9 = *(undefined8 *)(lVar11 + 8);
        FUN_1016e8ae4(lVar11,unaff_x22 + 0x40);
        puVar6 = &UNK_1103fb210;
        func_0x000107c613fc(&UNK_1103fb210,200,7);
        *(long *)(puVar6 + 0x10) = lVar8;
        *(undefined8 *)(puVar6 + 0x18) = uVar10;
        uVar12 = *(undefined8 *)(unaff_x22 + 0xa0);
        uVar14 = *(undefined8 *)(unaff_x22 + 0xb8);
        uVar13 = *(undefined8 *)(unaff_x22 + 0xb0);
        *(undefined8 *)(puVar6 + 0x88) = *(undefined8 *)(unaff_x22 + 0xa8);
        *(undefined8 *)(puVar6 + 0x80) = uVar12;
        *(undefined8 *)(puVar6 + 0x98) = uVar14;
        *(undefined8 *)(puVar6 + 0x90) = uVar13;
        uVar12 = *(undefined8 *)(unaff_x22 + 0xc0);
        uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
        uVar13 = *(undefined8 *)(unaff_x22 + 0xd0);
        *(undefined8 *)(puVar6 + 0xa8) = *(undefined8 *)(unaff_x22 + 200);
        *(undefined8 *)(puVar6 + 0xa0) = uVar12;
        *(undefined8 *)(puVar6 + 0xb8) = uVar14;
        *(undefined8 *)(puVar6 + 0xb0) = uVar13;
        uVar12 = *(undefined8 *)(unaff_x22 + 0x60);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x78);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x70);
        *(undefined8 *)(puVar6 + 0x48) = *(undefined8 *)(unaff_x22 + 0x68);
        *(undefined8 *)(puVar6 + 0x40) = uVar12;
        *(undefined8 *)(puVar6 + 0x58) = uVar14;
        *(undefined8 *)(puVar6 + 0x50) = uVar13;
        uVar12 = *(undefined8 *)(unaff_x22 + 0x80);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x98);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x90);
        *(undefined8 *)(puVar6 + 0x68) = *(undefined8 *)(unaff_x22 + 0x88);
        *(undefined8 *)(puVar6 + 0x60) = uVar12;
        *(undefined8 *)(puVar6 + 0x78) = uVar14;
        *(undefined8 *)(puVar6 + 0x70) = uVar13;
        uVar12 = *(undefined8 *)(unaff_x22 + 0x40);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x58);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x50);
        *(undefined8 *)(puVar6 + 0x28) = *(undefined8 *)(unaff_x22 + 0x48);
        *(undefined8 *)(puVar6 + 0x20) = uVar12;
        *(undefined8 *)(puVar6 + 0x38) = uVar14;
        *(undefined8 *)(puVar6 + 0x30) = uVar13;
        *(long *)(puVar6 + 0xc0) = lVar3;
        func_0x000107c6157c(lVar8);
        func_0x000107c61434(uVar10);
        func_0x000107c61434(lVar3);
        func_0x000104889654(uVar9,0,FUN_1016e9990,puVar6);
        *(undefined8 *)(unaff_x22 + 0x1a8) = uVar9;
        func_0x000107c61574(puVar6);
        plVar4 = (long *)0xa0;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x1b0) = plVar4;
        *plVar4 = unaff_x22;
        plVar4[1] = (long)FUN_1016e3b0c;
                    /* WARNING: Could not recover jumptable at 0x0001016e3a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)0x1016e6ebc)();
        return;
      }
      func_0x000107c6142c(lVar3);
    }
  }
  if (lRam0000000112dc2ae0 != -1) {
    func_0x000107c61568(0x112dc2ae0,FUN_1016e1fcc);
  }
  uVar12 = uRam0000000113802c50;
  uVar10 = uRam0000000113802c48;
  uVar9 = uRam0000000113802c40;
  func_0x000107c61434(uRam0000000113802c40);
  func_0x000107c61434(uVar12);
                    /* WARNING: Could not recover jumptable at 0x0001016e3948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar9,uVar10,uVar12);
  return;
}



/* Entry: 1016e3a98; end: 1016e3b0b;  */

void FUN_1016e3a98(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x198));
  if (unaff_x20 == 0) {
    func_0x000107c6142c(*(undefined8 *)(lVar2 + 0x188));
    *(undefined8 *)(lVar2 + 0x1c8) = *(undefined8 *)(lVar2 + 0x160);
    *(undefined8 *)(lVar2 + 0x1d0) = *(undefined8 *)(lVar2 + 0x158);
    *(undefined8 *)(lVar2 + 0x1c0) = *(undefined8 *)(lVar2 + 0x168);
    pcVar1 = FUN_1016e3bf8;
  }
  else {
    *(long *)(lVar2 + 0x1d8) = unaff_x20;
    pcVar1 = FUN_1016e3c30;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1016e3b0c; end: 1016e3b6b;  */

void FUN_1016e3b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x150) = param_4;
  *(undefined8 *)(lVar1 + 0x140) = param_2;
  *(undefined8 *)(lVar1 + 0x148) = param_3;
  *(long **)(lVar1 + 0x130) = unaff_x22;
  *(undefined8 *)(lVar1 + 0x138) = param_1;
  *(undefined8 *)(lVar1 + 0x1b8) = param_1;
  *(undefined1 *)(lVar1 + 0x1e1) = param_4;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x1b0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e3b6c,0,0);
  return;
}



/* Entry: 1016e3b6c; end: 1016e3bf7;  */

void FUN_1016e3b6c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  cVar3 = *(char *)(unaff_x22 + 0x1e1);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x1a8));
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1b8);
  if (cVar3 == '\x01') {
    func_0x000107c615d8(*(undefined8 *)(unaff_x22 + 0x1a0));
    *(undefined8 *)(unaff_x22 + 0x1d8) = uVar5;
    pcVar4 = FUN_1016e3c30;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x188);
    func_0x000107c615d8(*(undefined8 *)(unaff_x22 + 0x1a0));
    func_0x000107c6142c(uVar6);
    *(undefined8 *)(unaff_x22 + 0x1c8) = uVar1;
    *(undefined8 *)(unaff_x22 + 0x1d0) = uVar5;
    *(undefined8 *)(unaff_x22 + 0x1c0) = uVar2;
    pcVar4 = FUN_1016e3bf8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar4,0,0);
  return;
}



/* Entry: 1016e3bf8; end: 1016e3c2f;  */

void FUN_1016e3bf8(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 400));
                    /* WARNING: Could not recover jumptable at 0x0001016e3c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x1d0),*(undefined8 *)(unaff_x22 + 0x1c8),
             *(undefined8 *)(unaff_x22 + 0x1c0));
  return;
}



/* Entry: 1016e3c30; end: 1016e3cdb;  */

void FUN_1016e3c30(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x188));
  if (lRam0000000112dc2ae0 != -1) {
    func_0x000107c61568(0x112dc2ae0,FUN_1016e1fcc);
  }
  uVar3 = uRam0000000113802c50;
  uVar2 = uRam0000000113802c48;
  uVar1 = uRam0000000113802c40;
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar4 = *(undefined8 *)(unaff_x22 + 400);
  func_0x000107c61434(uRam0000000113802c40);
  func_0x000107c61434(uVar3);
  func_0x000107c614ac(uVar5);
  func_0x000107c61574(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001016e3cc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,uVar2,uVar3);
  return;
}



/* Entry: 1016e3cdc; end: 1016e3cf7;  */

void FUN_1016e3cdc(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_2;
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x60) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e3cf8,0,0);
  return;
}



/* Entry: 1016e3cf8; end: 1016e3e37;  */

void FUN_1016e3cf8(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  long unaff_x22;
  
  func_0x000107c5fd5c();
  if ((param_1 & 1) == 0) {
    lVar5 = *(long *)(unaff_x22 + 0x68);
    lVar1 = *(long *)(unaff_x22 + 0x70);
    FUN_1016e9354(lVar1 + 0x10,unaff_x22 + 0x10);
    lVar7 = unaff_x22 + 0x38;
    FUN_1016e9354(lVar1 + 0x38,lVar7);
    FUN_1016eb05c();
    *(long *)(unaff_x22 + 0x78) = lVar5;
    if (lVar5 == 0) {
      FUN_1016e8880(unaff_x22 + 0x10);
    }
    else {
      FUN_1016e4bbc(lVar7);
      func_0x000107c6142c(lVar7);
      lVar7 = *(long *)(lVar5 + 0x10);
      FUN_1016e8880(unaff_x22 + 0x10);
      if (lVar7 != 0) {
        plVar6 = (long *)0x190;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0x80) = plVar6;
        *plVar6 = unaff_x22;
        plVar6[1] = (long)FUN_1016e3e38;
        plVar6[0x13] = *(long *)(unaff_x22 + 0x60);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e7d7c,0,0);
        return;
      }
      func_0x000107c6142c(lVar5);
    }
  }
  if (lRam0000000112dc2ae0 != -1) {
    func_0x000107c61568(0x112dc2ae0,FUN_1016e1fcc);
  }
  uVar4 = uRam0000000113802c50;
  uVar3 = uRam0000000113802c48;
  uVar2 = uRam0000000113802c40;
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  func_0x000107c61434(uRam0000000113802c40);
  func_0x000107c61434(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001016e3e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2,uVar3,uVar4);
  return;
}



/* Entry: 1016e3e38; end: 1016e3e87;  */

void FUN_1016e3e38(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x88) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e3e88,0,0);
  return;
}



/* Entry: 1016e3e88; end: 1016e3f9b;  */

void FUN_1016e3e88(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *plVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  uVar5 = *(ulong *)(unaff_x22 + 0x88);
  if (uVar5 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar3 = uVar5;
    }
    func_0x000107c60480();
  }
  if (uVar3 != 0) {
    lVar7 = *(long *)(unaff_x22 + 0x78);
    plVar4 = (long *)0x1f0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x90) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1016e3f9c;
    lVar6 = *(long *)(unaff_x22 + 0x88);
    lVar8 = *(long *)(unaff_x22 + 0x70);
    plVar4[0x2f] = lVar7;
    plVar4[0x30] = lVar8;
    plVar4[0x2e] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e3770,0,0);
    return;
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x78);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x88));
  func_0x000107c6142c(uVar9);
  if (lRam0000000112dc2ae0 != -1) {
    func_0x000107c61568(0x112dc2ae0,FUN_1016e1fcc);
  }
  uVar2 = uRam0000000113802c50;
  uVar1 = uRam0000000113802c48;
  uVar9 = uRam0000000113802c40;
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  func_0x000107c61434(uRam0000000113802c40);
  func_0x000107c61434(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001016e3f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar9,uVar1,uVar2);
  return;
}



/* Entry: 1016e3f9c; end: 1016e4013;  */

void FUN_1016e3f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x88);
  uVar4 = *(undefined8 *)(lVar2 + 0x78);
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x90));
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001016e4010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))(param_1,param_2,param_3);
  return;
}



/* Entry: 1016e4014; end: 1016e4033;  */

void FUN_1016e4014(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xf8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x100) = param_5;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_2;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e4034,0,0);
  return;
}



/* Entry: 1016e4034; end: 1016e415b;  */

void FUN_1016e4034(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long *plVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
  lVar2 = *(long *)(unaff_x22 + 0xe8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf0);
  func_0x0001000285a8(0x112dc2b20,&UNK_10d97f9a8);
  uVar7 = *(undefined8 *)(lVar2 + 8);
  FUN_1016e8ae4(lVar2,unaff_x22 + 0x10);
  puVar5 = &UNK_1103fb300;
  func_0x000107c613fc(&UNK_1103fb300,200,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar4;
  *(undefined8 *)(puVar5 + 0x18) = uVar1;
  uVar8 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(puVar5 + 0x88) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(puVar5 + 0x80) = uVar8;
  *(undefined8 *)(puVar5 + 0x98) = uVar10;
  *(undefined8 *)(puVar5 + 0x90) = uVar9;
  uVar8 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(puVar5 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(puVar5 + 0xa0) = uVar8;
  *(undefined8 *)(puVar5 + 0xb8) = uVar10;
  *(undefined8 *)(puVar5 + 0xb0) = uVar9;
  uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined8 *)(puVar5 + 0x48) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(puVar5 + 0x40) = uVar8;
  *(undefined8 *)(puVar5 + 0x58) = uVar10;
  *(undefined8 *)(puVar5 + 0x50) = uVar9;
  uVar8 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(puVar5 + 0x68) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(puVar5 + 0x60) = uVar8;
  *(undefined8 *)(puVar5 + 0x78) = uVar10;
  *(undefined8 *)(puVar5 + 0x70) = uVar9;
  uVar8 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(puVar5 + 0x28) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(puVar5 + 0x20) = uVar8;
  *(undefined8 *)(puVar5 + 0x38) = uVar10;
  *(undefined8 *)(puVar5 + 0x30) = uVar9;
  *(undefined8 *)(puVar5 + 0xc0) = uVar3;
  func_0x000107c6157c(uVar4);
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar3);
  func_0x000104889654(uVar7,0,FUN_1016ea56c,puVar5);
  *(undefined8 *)(unaff_x22 + 0x108) = uVar7;
  func_0x000107c61574(puVar5);
  plVar6 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x110) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1016e415c;
                    /* WARNING: Could not recover jumptable at 0x0001016e4158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x1016e6ebc)();
  return;
}



/* Entry: 1016e415c; end: 1016e41bb;  */

void FUN_1016e415c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0xd0) = param_4;
  *(undefined8 *)(lVar1 + 0xc0) = param_2;
  *(undefined8 *)(lVar1 + 200) = param_3;
  *(long **)(lVar1 + 0xb0) = unaff_x22;
  *(undefined8 *)(lVar1 + 0xb8) = param_1;
  *(undefined8 *)(lVar1 + 0x118) = param_1;
  *(undefined1 *)(lVar1 + 0x120) = param_4;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x110));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e41bc,0,0);
  return;
}



/* Entry: 1016e41bc; end: 1016e426b;  */

void FUN_1016e41bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 *puVar5;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x118);
  if (*(char *)(unaff_x22 + 0x120) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0xd8) = uVar4;
    iVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar3 != 0) {
      uVar4 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0xd8,uVar4,PTR___ss5ErrorWS_11034ee10);
    }
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x108));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar2 = *(undefined8 *)(unaff_x22 + 200);
    puVar5 = *(undefined8 **)(unaff_x22 + 0xe0);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x108));
    *puVar5 = uVar4;
    puVar5[1] = uVar1;
    puVar5[2] = uVar2;
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001016e4268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 1016e426c; end: 1016e456f;  */

void FUN_1016e426c(undefined8 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  char cStack_51;
  
  func_0x000107c60ea0();
  func_0x0001000c74f0(&cStack_51);
  if (cStack_51 == '\x01') {
    if (lRam0000000112dc2ae0 != -1) {
      func_0x000107c61568(0x112dc2ae0,FUN_1016e1fcc);
    }
    uVar3 = uRam0000000113802c50;
    uVar2 = uRam0000000113802c48;
    *param_1 = uRam0000000113802c40;
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    func_0x000107c61434();
    func_0x000107c61434(uVar3);
  }
  else {
    uVar10 = param_3 & 0xffffffffffffff8;
    if (param_3 >> 0x3e == 0) {
      uVar11 = *(ulong *)(uVar10 + 0x10);
    }
    else {
      uVar11 = uVar10;
      if (0x7fffffffffffffff < param_3) {
        uVar11 = param_3;
      }
      func_0x000107c60480();
    }
    uVar12 = 0;
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    while (uVar11 != uVar12) {
      if ((param_3 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar10 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1016e44a8);
          (*pcVar4)();
        }
        uVar5 = *(ulong *)(param_3 + uVar12 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar12;
        func_0x000100f95e24(uVar12,param_3);
      }
      uVar1 = uVar12 + 1;
      if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1016e44a4);
        (*pcVar4)();
      }
      uVar6 = uVar5;
      func_0x000103fc983c();
      func_0x000107c61170(uVar5);
      uVar12 = uVar12 + 1;
      if (uVar6 != 0) {
        puVar8 = puVar9;
        func_0x000107c61550();
        if ((((int)puVar8 == 0) || ((long)puVar9 < 0)) ||
           (puVar8 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)) {
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
          param_4 = 1;
          FUN_1016e71c8(0,puVar7 + 1,1,puVar9,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68,
                        0x112d502b0,&UNK_10d9169a0);
        }
        uVar5 = (ulong)puVar8 & 0xffffffffffffff8;
        uVar12 = *(ulong *)(uVar5 + 0x10);
        puVar9 = puVar8;
        if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar12) {
          puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar5 + 0x18));
          param_4 = 1;
          FUN_1016e71c8(puVar9,uVar12 + 1,1,puVar8,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68,
                        0x112d502b0,&UNK_10d9169a0);
          uVar5 = (ulong)puVar9 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar5 + 0x10) = uVar12 + 1;
        *(ulong *)(uVar5 + uVar12 * 8 + 0x20) = uVar6;
        uVar12 = uVar1;
      }
    }
    if ((ulong)puVar9 >> 0x3e == 0) {
      puVar8 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar8 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar9) {
        puVar8 = puVar9;
      }
      func_0x000107c60480();
    }
    if (puVar8 == (undefined *)0x0) {
      func_0x000107c6142c(puVar9);
      if (lRam0000000112dc2ae0 != -1) {
        func_0x000107c61568(0x112dc2ae0,FUN_1016e1fcc);
      }
      uVar3 = uRam0000000113802c50;
      uVar2 = uRam0000000113802c48;
      *param_1 = uRam0000000113802c40;
      param_1[1] = uVar2;
      param_1[2] = uVar3;
      func_0x000107c61434();
      func_0x000107c61434(uVar3);
    }
    else {
      puVar8 = puVar9;
      FUN_1016e4570();
      func_0x000107c6142c(puVar9);
      *param_1 = puVar8;
      param_1[1] = param_5;
      param_1[2] = param_4;
    }
  }
  func_0x000107c60e9c(param_2);
  return;
}



/* Entry: 1016e4570; end: 1016e4baf;  */

long FUN_1016e4570(undefined8 param_1,long param_2)

{
  code *pcVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  long lVar11;
  undefined8 *unaff_x20;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined1 auStack_140 [24];
  long lStack_128;
  undefined *puStack_120;
  long lStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  puVar3 = PTR_PTR_1126b30e0;
  func_0x000107c610f8();
  func_0x000107c45760(0);
  lVar17 = *(long *)(param_2 + 0x10);
  if (lVar17 != 0) {
    puVar13 = (undefined *)*unaff_x20;
    puVar18 = (undefined8 *)(param_2 + 0x28);
    do {
      puVar14 = (undefined *)puVar18[-1];
      pcVar2 = (code *)*puVar18;
      func_0x000107c61434(pcVar2);
      puVar4 = puVar13;
      func_0x000107c5c734();
      func_0x000107c61180();
      if (puVar4 == (undefined *)0x0) {
LAB_1016e460c:
        func_0x000107c6142c(pcVar2);
      }
      else {
        puVar5 = puVar14;
        func_0x000107c5fadc(puVar14,pcVar2);
        lVar11 = -0x7ffffffef1048060;
        uVar6 = 0xd000000000000017;
        func_0x000107c5fadc(0xd000000000000017);
        puVar7 = puVar4;
        func_0x000107c4d0a4();
        func_0x000107c61180();
        func_0x000107c615e8(puVar4);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(uVar6);
        puVar4 = puVar7;
        func_0x000107c4dfe8();
        func_0x000107c61180();
        func_0x000107c61170(puVar7);
        if (puVar4 == (undefined *)0x0) goto LAB_1016e460c;
        puVar5 = puVar4;
        func_0x000107c3dd58();
        func_0x000107c61180();
        func_0x000107c61170(puVar4);
        puVar4 = puVar5;
        func_0x000107c4505c();
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        if (puVar4 == (undefined *)0x0) goto LAB_1016e460c;
        puVar5 = puVar4;
        func_0x000107c4d088();
        func_0x000107c61180();
        puVar7 = puVar5;
        func_0x000107c5faec();
        func_0x000107c61170(puVar5);
        plVar15 = unaff_x20 + 7;
        FUN_1016e8a6c(unaff_x20 + 7,unaff_x20[10]);
        lVar16 = *plVar15;
        puStack_120 = (undefined *)0xd00000000000002d;
        lStack_118 = -0x7ffffffef1048090;
        func_0x000107c5fb78(puVar14,pcVar2);
        lVar12 = lStack_118;
        puVar5 = puStack_120;
        func_0x000107c5fadc(puStack_120,lStack_118);
        func_0x000107c6142c(lVar12);
        func_0x000107c4d9c0();
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        if (lVar16 == 0) {
          func_0x000107c6142c(lVar11);
LAB_1016e4814:
          puStack_110 = (undefined *)unaff_x20[0x11];
          puStack_108 = puVar14;
          pcStack_100 = pcVar2;
          func_0x000107c61434(pcVar2);
          func_0x000100087bd4(&lStack_128,FUN_1016ea514,&puStack_120,PTR___sSbN_11034dd40);
          if ((char)lStack_128 == '\x01') {
            pcVar1 = (code *)unaff_x20[0x12];
            FUN_1016e8ae4(unaff_x20,&puStack_120);
            puVar5 = &UNK_1103fb260;
            func_0x000107c613fc(&UNK_1103fb260,0xc0,7);
            *(undefined8 *)(puVar5 + 0x78) = uStack_b8;
            *(undefined8 *)(puVar5 + 0x70) = uStack_c0;
            *(undefined8 *)(puVar5 + 0x88) = uStack_a8;
            *(undefined8 *)(puVar5 + 0x80) = uStack_b0;
            *(undefined8 *)(puVar5 + 0x98) = uStack_98;
            *(undefined8 *)(puVar5 + 0x90) = uStack_a0;
            *(undefined8 *)(puVar5 + 0xa8) = uStack_88;
            *(undefined8 *)(puVar5 + 0xa0) = uStack_90;
            *(undefined **)(puVar5 + 0x38) = puStack_f8;
            *(code **)(puVar5 + 0x30) = pcStack_100;
            *(undefined8 *)(puVar5 + 0x48) = uStack_e8;
            *(undefined8 *)(puVar5 + 0x40) = uStack_f0;
            *(undefined8 *)(puVar5 + 0x58) = uStack_d8;
            *(undefined8 *)(puVar5 + 0x50) = uStack_e0;
            *(undefined8 *)(puVar5 + 0x68) = uStack_c8;
            *(undefined8 *)(puVar5 + 0x60) = uStack_d0;
            *(long *)(puVar5 + 0x18) = lStack_118;
            *(undefined **)(puVar5 + 0x10) = puStack_120;
            *(undefined **)(puVar5 + 0x28) = puStack_108;
            *(undefined **)(puVar5 + 0x20) = puStack_110;
            *(undefined **)(puVar5 + 0xb0) = puVar14;
            *(code **)(puVar5 + 0xb8) = pcVar2;
            (*pcVar1)(0x1016ea548,puVar5);
            func_0x000107c6142c(pcVar2);
            func_0x000107c615e8(puVar4);
            func_0x000107c61574(puVar5);
          }
          else {
            func_0x000107c615e8(puVar4);
            func_0x000107c61430(pcVar2,2);
          }
        }
        else {
          uVar6 = 0x112d373e8;
          lStack_128 = lVar16;
          func_0x0001000285a8(0x112d373e8,&UNK_10d97fd10);
          ppuVar8 = &puStack_120;
          func_0x000107c6147c(ppuVar8,&lStack_128,uVar6,PTR___sSSN_11034da80,6);
          lVar12 = lStack_118;
          if (((ulong)ppuVar8 & 1) == 0) {
            func_0x000107c6142c(lVar11);
            goto LAB_1016e4814;
          }
          if ((puVar7 == puStack_120) && (lVar11 == lStack_118)) {
            func_0x000107c6142c(lVar11);
            func_0x000107c6142c(lVar12);
          }
          else {
            func_0x000107c605b8(puVar7,lVar11,puStack_120,lStack_118,0);
            func_0x000107c6142c(lVar11);
            func_0x000107c6142c(lVar12);
            if (((ulong)puVar7 & 1) == 0) goto LAB_1016e4814;
          }
          puVar14 = puVar4;
          func_0x000107c61150(puVar4,PTR_s_respondsToSelector__11262c7e0,
                              PTR_s_runEmbeddingAndCaptionSearchForB_11262e418);
          if (((ulong)puVar14 & 1) == 0) {
            puVar14 = (undefined *)0x0;
          }
          else {
            uVar9 = 0;
            func_0x0001016e9bd4(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
            func_0x000107c615f0(puVar4);
            uVar6 = param_1;
            func_0x000107c5fc48(param_1,uVar9);
            puVar14 = puVar4;
            func_0x000107c5097c();
            func_0x000107c61180();
            func_0x000107c615e8(puVar4);
            func_0x000107c61170(uVar6);
          }
          puVar5 = puVar4;
          func_0x000107c61150(puVar4,PTR_s_respondsToSelector__11262c7e0,
                              PTR_s_cleanupResources_1125ac2f0);
          if (((ulong)puVar5 & 1) != 0) {
            func_0x000107c3fa58(puVar4);
          }
          if (puVar14 == (undefined *)0x0) {
            func_0x000107c615e8(puVar4);
            func_0x000107c6142c(pcVar2);
          }
          else {
            puVar5 = &UNK_1103fb288;
            func_0x000107c613fc(&UNK_1103fb288,0x18,7);
            plVar15 = (long *)(puVar5 + 0x10);
            *plVar15 = (long)PTR___swiftEmptyArrayStorage_11034f1c8;
            puVar7 = PTR___NSConcreteStackBlock_11034bd00;
            pcStack_100 = FUN_1016e4cf4;
            puStack_f8 = (undefined *)0x0;
            puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
            lStack_118 = 0x42000000;
            puStack_110 = &UNK_100b61264;
            puStack_108 = &UNK_1103fb2a0;
            ppuVar8 = &puStack_120;
            func_0x000107c60bc4(ppuVar8);
            pcStack_100 = FUN_1016e9a48;
            puStack_120 = puVar7;
            lStack_118 = 0x42000000;
            puStack_110 = &UNK_101218f4c;
            puStack_108 = &UNK_1103fb2c8;
            ppuVar10 = &puStack_120;
            puStack_f8 = puVar5;
            func_0x000107c60bc4(ppuVar10);
            puVar7 = puStack_f8;
            func_0x000107c6157c(puVar5);
            func_0x000107c61574(puVar7);
            func_0x000107c4c6bc(puVar14);
            func_0x000107c60bd0(ppuVar10);
            func_0x000107c60bd0(ppuVar8);
            func_0x000107c61428(plVar15,auStack_140,0,0);
            lVar12 = *plVar15;
            lVar11 = lVar12;
            func_0x000107c61434();
            FUN_1016e8ca8();
            func_0x000107c6142c(lVar12);
            func_0x000107c615e8(puVar4);
            func_0x000107c61170(puVar14);
            lVar12 = *(long *)(lVar11 + 0x10);
            func_0x000107c61574(puVar5);
            if (lVar12 != 0) goto LAB_1016e4b58;
            func_0x000107c6142c(pcVar2);
            func_0x000107c6142c(lVar11);
          }
        }
      }
      puVar18 = puVar18 + 2;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  if (lRam0000000112dc2ae0 != -1) {
    func_0x000107c61568(0x112dc2ae0,FUN_1016e1fcc);
  }
  uVar6 = uRam0000000113802c50;
  lVar11 = lRam0000000113802c40;
  func_0x000107c61434(lRam0000000113802c40);
  func_0x000107c61434(uVar6);
LAB_1016e4b58:
  func_0x000107c61170(puVar3);
  return lVar11;
}



/* Entry: 1016e4bb0; end: 1016e4bbb;  */

void FUN_1016e4bb0(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}



/* Entry: 1016e4bbc; end: 1016e4cf3;  */

void FUN_1016e4bbc(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  byte abStack_69 [9];
  
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 != 0) {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x88);
    puVar7 = (undefined8 *)(param_1 + 0x28);
    puVar5 = PTR___sSbN_11034dd40;
    do {
      uVar2 = puVar7[-1];
      uVar3 = *puVar7;
      uStack_110 = uVar6;
      uStack_108 = uVar2;
      uStack_100 = uVar3;
      func_0x000107c61434(uVar3);
      func_0x000100087bd4(abStack_69,FUN_1016e8ac8,&uStack_120,puVar5);
      if ((abStack_69[0] & 1) == 0) {
        func_0x000107c6142c(uVar3);
      }
      else {
        pcVar1 = *(code **)(unaff_x20 + 0x90);
        FUN_1016e8ae4(unaff_x20,&uStack_120);
        puVar4 = &UNK_1103fb170;
        func_0x000107c613fc(&UNK_1103fb170,0xc0,7);
        *(undefined8 *)(puVar4 + 0x78) = uStack_b8;
        *(undefined8 *)(puVar4 + 0x70) = uStack_c0;
        *(undefined8 *)(puVar4 + 0x88) = uStack_a8;
        *(undefined8 *)(puVar4 + 0x80) = uStack_b0;
        *(undefined8 *)(puVar4 + 0x98) = uStack_98;
        *(undefined8 *)(puVar4 + 0x90) = uStack_a0;
        *(undefined8 *)(puVar4 + 0xa8) = uStack_88;
        *(undefined8 *)(puVar4 + 0xa0) = uStack_90;
        *(undefined8 *)(puVar4 + 0x38) = uStack_f8;
        *(undefined8 *)(puVar4 + 0x30) = uStack_100;
        *(undefined8 *)(puVar4 + 0x48) = uStack_e8;
        *(undefined8 *)(puVar4 + 0x40) = uStack_f0;
        *(undefined8 *)(puVar4 + 0x58) = uStack_d8;
        *(undefined8 *)(puVar4 + 0x50) = uStack_e0;
        *(undefined8 *)(puVar4 + 0x68) = uStack_c8;
        *(undefined8 *)(puVar4 + 0x60) = uStack_d0;
        *(undefined8 *)(puVar4 + 0x18) = uStack_118;
        *(undefined8 *)(puVar4 + 0x10) = uStack_120;
        *(undefined8 *)(puVar4 + 0x28) = uStack_108;
        *(undefined8 *)(puVar4 + 0x20) = uStack_110;
        *(undefined8 *)(puVar4 + 0xb0) = uVar2;
        *(undefined8 *)(puVar4 + 0xb8) = uVar3;
        (*pcVar1)(0x1016e8b38,puVar4);
        puVar5 = PTR___sSbN_11034dd40;
        func_0x000107c61574(puVar4);
      }
      puVar7 = puVar7 + 2;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  return;
}



/* Entry: 1016e4cf4; end: 1016e4cf7;  */

void FUN_1016e4cf4(void)

{
  return;
}



/* Entry: 1016e4cf8; end: 1016e507b;  */

void FUN_1016e4cf8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long extraout_x8;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined1 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined1 auStack_e0 [8];
  long lStack_d8;
  long lStack_d0;
  undefined8 uStack_c8;
  undefined1 *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long alStack_98 [3];
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar5 = 0;
  func_0x000107c5ed50();
  lStack_d8 = *(long *)(lVar5 + -8);
  lStack_d0 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_d8 + 0x40));
  puVar15 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c600f4(puVar15);
  func_0x000107c5ed4c(auStack_80);
  if (lStack_68 != 0) {
    uVar6 = 0;
    func_0x0001016e9bd4(0,0x112dc2b28,&PTR_PTR_1126bcad8);
    puVar13 = PTR___sypN_11034f1a8;
    uStack_c8 = uVar6;
    puStack_c0 = puVar15;
    lStack_b8 = param_3;
    do {
      plVar7 = alStack_98;
      func_0x000107c6147c(plVar7,auStack_80,puVar13 + 8,uVar6,6);
      if (((ulong)plVar7 & 1) != 0) {
        lStack_b0 = alStack_98[0];
        lVar5 = alStack_98[0];
        func_0x000107c519d0();
        func_0x000107c61180();
        uVar6 = 0;
        func_0x0001016e9bd4(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
        lVar8 = lVar5;
        func_0x000107c5f9e8(lVar5,PTR___sSSN_11034da80,uVar6,PTR___sSSSHsWP_11034da90);
        func_0x000107c61170(lVar5);
        func_0x0001000285a8(0x112d5df98,&UNK_10d9246a0);
        lVar9 = lVar8;
        func_0x000107c6048c();
        lVar5 = 0;
        uVar12 = 1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
        uVar16 = 0xffffffffffffffff;
        if ((*(byte *)(lVar8 + 0x20) & 0x3f) < 6) {
          uVar16 = ~(-1L << (uVar12 & 0x3f));
        }
        uVar16 = uVar16 & *(ulong *)(lVar8 + 0x40);
        lStack_a8 = lVar9 + 0x40;
        lStack_a0 = lVar8;
        if (uVar16 == 0) goto LAB_1016e4ed4;
        do {
          uVar10 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
          uVar16 = uVar16 - 1 & uVar16;
          while( true ) {
            uVar10 = LZCOUNT(uVar10);
            uVar14 = uVar10 | lVar5 << 6;
            puVar2 = (undefined8 *)(*(long *)(lStack_a0 + 0x30) + uVar14 * 0x10);
            uVar17 = *(undefined8 *)(*(long *)(lStack_a0 + 0x38) + uVar14 * 8);
            uVar6 = *puVar2;
            uVar3 = puVar2[1];
            func_0x000107c61434(uVar3);
            func_0x000107c4223c(uVar17);
            uVar11 = (uVar10 & 0xffffffffffffffc0 | lVar5 << 6) >> 3;
            *(ulong *)(lStack_a8 + uVar11) = *(ulong *)(lStack_a8 + uVar11) | 1L << (uVar10 & 0x3f);
            puVar2 = (undefined8 *)(*(long *)(lVar9 + 0x30) + uVar14 * 0x10);
            *puVar2 = uVar6;
            puVar2[1] = uVar3;
            *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar14 * 8) = param_1;
            if (SCARRY8(*(long *)(lVar9 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1016e507c);
              (*pcVar4)();
            }
            *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
            if (uVar16 != 0) break;
LAB_1016e4ed4:
            do {
              lVar1 = lVar5 + 1;
              if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1016e5078);
                (*pcVar4)();
              }
              if ((long)(uVar12 + 0x3f >> 6) <= lVar1) {
                func_0x000107c6142c(lStack_a0);
                lVar5 = lStack_b8;
                func_0x000107c61428(lStack_b8 + 0x10,alStack_98,0x21,0);
                uVar10 = *(ulong *)(lVar5 + 0x10);
                uVar16 = uVar10;
                func_0x000107c61558();
                *(ulong *)(lVar5 + 0x10) = uVar10;
                uVar12 = uVar10;
                if ((uVar16 & 1) == 0) {
                  uVar12 = 0;
                  FUN_1016e7470(0,*(long *)(uVar10 + 0x10) + 1,1,uVar10,0x112dc2b30,&UNK_10d97f9b8,
                                0x112d5e228,&UNK_10d97f9c0);
                  *(ulong *)(lVar5 + 0x10) = uVar12;
                }
                puVar15 = puStack_c0;
                uVar6 = uStack_c8;
                uVar16 = *(ulong *)(uVar12 + 0x10);
                uVar10 = uVar12;
                if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar16) {
                  uVar10 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
                  FUN_1016e7470(uVar10,uVar16 + 1,1,uVar12,0x112dc2b30,&UNK_10d97f9b8,0x112d5e228,
                                &UNK_10d97f9c0);
                }
                *(ulong *)(uVar10 + 0x10) = uVar16 + 1;
                *(long *)(uVar10 + uVar16 * 8 + 0x20) = lVar9;
                *(ulong *)(lVar5 + 0x10) = uVar10;
                func_0x000107c614a8(alStack_98);
                func_0x000107c61170(lStack_b0);
                puVar13 = PTR___sypN_11034f1a8;
                goto LAB_1016e4dcc;
              }
              uVar16 = ((ulong *)(lVar8 + 0x40))[lVar1];
              lVar5 = lVar5 + 1;
            } while (uVar16 == 0);
            uVar10 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
            uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
            uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
            uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
            uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
            uVar16 = uVar16 - 1 & uVar16;
            lVar5 = lVar1;
          }
        } while( true );
      }
LAB_1016e4dcc:
      func_0x000107c5ed4c(auStack_80);
    } while (lStack_68 != 0);
  }
  (**(code **)(lStack_d8 + 8))(puVar15,lStack_d0);
  return;
}



/* Entry: 1016e507c; end: 1016e51c3;  */

/* WARNING: Possible PIC construction at 0x0001016e518c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016e5190) */

void FUN_1016e507c(long param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)(param_1 + 0x10);
  FUN_1016e8a6c(puVar2,*(undefined8 *)(param_1 + 0x28));
  pcVar1 = (code *)puVar2[2];
  (*(code *)*puVar2)();
  if ((((ulong)puVar2 & 0xfffffffffffffffe) != 2) &&
     ((*pcVar1)(), puVar2 + -0x2580000 < (undefined8 *)0xffffffffed400001)) {
    puVar2 = (undefined8 *)(param_1 + 0x60);
    FUN_1016e8a6c(puVar2,*(undefined8 *)(param_1 + 0x78));
    uVar3 = param_2;
    lVar4 = param_3;
    FUN_1016e55c4(param_2,param_3,*puVar2);
    if (lVar4 != 0) {
      puVar2 = (undefined8 *)(param_1 + 0x38);
      FUN_1016e8a6c(puVar2,*(undefined8 *)(param_1 + 0x50));
      uVar5 = *puVar2;
      func_0x000107c5fadc(uVar3,lVar4);
      func_0x000107c5fb78(param_2,param_3);
      func_0x000107c5fadc(0xd00000000000002d,0x800000010efb7f70);
      func_0x000107c6142c(0x800000010efb7f70);
      func_0x000107c56bcc(uVar5);
      func_0x000107c6142c(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar3);
      return;
    }
  }
  return;
}



/* Entry: 1016e51c4; end: 1016e51e3;  */

void FUN_1016e51c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_4;
  *(undefined8 *)(unaff_x22 + 0x88) = param_5;
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined8 *)(unaff_x22 + 0x78) = param_3;
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e51e4,0,0);
  return;
}



/* Entry: 1016e51e4; end: 1016e5293;  */

void FUN_1016e51e4(void)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x58) = 0x1016ea5ac;
  *(long *)(unaff_x22 + 0x60) = unaff_x22 + 0x10;
  func_0x000100087bd4(FUN_1016ea584,unaff_x22 + 0x40,PTR___sytN_11034f1b0 + 8);
  plVar1 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1016e5294;
                    /* WARNING: Could not recover jumptable at 0x0001016e5290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_1016e6d8c();
  return;
}



/* Entry: 1016e5294; end: 1016e5383;  */

void FUN_1016e5294(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x98) = param_1;
  *(undefined1 *)(lVar1 + 0xa0) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x90));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x1016e52e8,0,0);
  return;
}



/* Entry: 1016e5384; end: 1016e5483;  */

void FUN_1016e5384(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  uVar1 = 0;
  func_0x0001016e9bd4(0,0x112d4f348,&PTR__OBJC_CLASS___NSValue_1126afdf8);
  func_0x000107c5fc48(param_2,uVar1);
  puVar2 = &UNK_1103fb120;
  func_0x000107c613fc(&UNK_1103fb120,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  pcStack_50 = FUN_1016e89e8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_100f728b4;
  puStack_58 = &UNK_1103fb138;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c61574(puVar2);
  func_0x000107c43d9c(param_1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1016e5484; end: 1016e55c3;  */

void FUN_1016e5484(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long in_x3;
  long in_stack_00000010;
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined *puStack_48;
  long lStack_38;
  
  puVar1 = (undefined *)0x0;
  if (in_x3 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x000107c45af0();
  }
  lStack_50 = in_stack_00000010;
  uVar2 = 0x112dc2af8;
  puStack_48 = puVar1;
  func_0x0001000285a8(0x112dc2af8,&UNK_10d97f950);
  func_0x000100087bd4(&lStack_38,FUN_1016e8a30,auStack_60,uVar2);
  if (lStack_38 != 0) {
    (**(code **)(in_stack_00000010 + 0x30))(lStack_38);
    func_0x000107c6142c(lStack_38);
  }
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1016e55c4; end: 1016e5943;  */

void FUN_1016e55c4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  ppuVar6 = &puStack_80;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_3 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    uVar2 = 0xd000000000000017;
    func_0x000107c5fadc(0xd000000000000017,0x800000010efb7fa0);
    uVar8 = param_3;
    func_0x000107c4d0a4();
    func_0x000107c61180();
    func_0x000107c615e8(param_3);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar2);
    uVar3 = uVar8;
    func_0x000107c4dfe8();
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    if (uVar3 != 0) {
      uVar8 = uVar3;
      func_0x000107c3dd58();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      uVar3 = uVar8;
      func_0x000107c4505c();
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      if (uVar3 != 0) {
        puVar4 = PTR_PTR_1126b30e0;
        func_0x000107c610f8(PTR_PTR_1126b30e0);
        func_0x000107c45760(0);
        puVar5 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
        func_0x000107c610f8();
        func_0x000107c486f8(0x4040000000000000,0x4040000000000000);
        pcStack_60 = FUN_1016e5944;
        uStack_58 = 0;
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0x42000000;
        puStack_70 = &UNK_100f9148c;
        puStack_68 = &UNK_1103fb188;
        func_0x000107c60bc4(&puStack_80);
        func_0x000107c61574(uStack_58);
        puVar7 = puVar5;
        func_0x000107c45138();
        func_0x000107c61180();
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c61170(puVar5);
        uVar8 = 0;
        func_0x000107c61544(0,"",0x82,0x20e,0x5e,1);
        func_0x000107c61574(0);
        if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1016e5944);
          (*pcVar1)();
        }
        uVar8 = uVar3;
        func_0x000107c61150(uVar3,PTR_s_respondsToSelector__11262c7e0,
                            PTR_s_runEmbeddingAndCaptionSearchForB_11262e418);
        if ((uVar8 & 1) == 0) {
          uVar8 = 0;
        }
        else {
          lVar9 = 0x112d36850;
          FUN_1016e6d14(0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68,0x112d502b0,&UNK_10d9169a0)
          ;
          func_0x000107c613fc();
          *(undefined8 *)(lVar9 + 0x18) = 3;
          *(undefined8 *)(lVar9 + 0x10) = 1;
          *(undefined **)(lVar9 + 0x20) = puVar7;
          uVar2 = 0;
          func_0x0001016e9bd4(0,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68);
          func_0x000107c61174(puVar7);
          func_0x000107c615f0(uVar3);
          lVar10 = lVar9;
          func_0x000107c5fc48(lVar9,uVar2);
          uVar8 = uVar3;
          func_0x000107c5097c();
          func_0x000107c61180();
          func_0x000107c615e8(uVar3);
          func_0x000107c61574(lVar9);
          func_0x000107c61170(lVar10);
        }
        uVar11 = uVar3;
        func_0x000107c61150(uVar3,PTR_s_respondsToSelector__11262c7e0,
                            PTR_s_cleanupResources_1125ac2f0);
        if ((uVar11 & 1) != 0) {
          func_0x000107c3fa58(uVar3);
        }
        if (uVar8 == 0) {
          func_0x000107c615e8(uVar3);
          func_0x000107c61170(puVar4);
          func_0x000107c61170(puVar7);
        }
        else {
          uVar11 = uVar3;
          func_0x000107c4d088(uVar3);
          func_0x000107c61180();
          func_0x000107c5faec();
          func_0x000107c615e8(uVar3);
          func_0x000107c61170(uVar11);
          func_0x000107c61170(puVar4);
          func_0x000107c61170(puVar7);
          func_0x000107c61170(uVar8);
        }
      }
    }
  }
  return;
}



/* Entry: 1016e5944; end: 1016e5947;  */

void FUN_1016e5944(void)

{
  return;
}



/* Entry: 1016e5948; end: 1016e59c3;  */

void FUN_1016e5948(undefined8 param_1,long param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  bVar1 = (*(byte *)(param_2 + 0x50) & 1) == 0;
  if (bVar1) {
    *(undefined1 *)(param_2 + 0x50) = 1;
    func_0x000107c61428(param_2 + 0x40,auStack_48,1,0);
    uVar2 = *(undefined8 *)(param_2 + 0x40);
    *(undefined **)(param_2 + 0x40) = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c6142c(uVar2);
  }
  *(bool *)param_1 = bVar1;
  return;
}



/* Entry: 1016e59c4; end: 1016e5b0b;  */

void FUN_1016e59c4(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_58 [24];
  
  if ((*(byte *)(param_2 + 0x50) & 1) == 0) {
    if (param_3 != 0) {
      func_0x000107c61428(param_2 + 0x40,auStack_58,0x21,0);
      func_0x000107c61174();
      FUN_1016e7114();
      uVar5 = *(ulong *)(param_2 + 0x40);
      uVar6 = uVar5 & 0xffffffffffffff8;
      uVar2 = *(ulong *)(uVar6 + 0x10);
      uVar4 = uVar5;
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar2) {
        uVar4 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
        FUN_1016e71c8(uVar4,uVar2 + 1,1,uVar5,0x112d36850,&PTR__OBJC_CLASS___UIImage_1126aea68,
                      0x112d502b0,&UNK_10d9169a0);
        uVar6 = uVar4 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar6 + 0x10) = uVar2 + 1;
      *(long *)(uVar6 + uVar2 * 8 + 0x20) = param_3;
      *(ulong *)(param_2 + 0x40) = uVar4;
      func_0x000107c614a8(auStack_58);
    }
    lVar1 = *(long *)(param_2 + 0x48) + 1;
    if (SCARRY8(*(long *)(param_2 + 0x48),1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1016e5acc);
      (*pcVar3)();
    }
    *(long *)(param_2 + 0x48) = lVar1;
    if (((*(byte *)(param_2 + 0x50) & 1) == 0) && (*(long *)(param_2 + 0x28) <= lVar1)) {
      *(undefined1 *)(param_2 + 0x50) = 1;
      func_0x000107c61428(param_2 + 0x40,auStack_58,0,0);
      *param_1 = *(undefined8 *)(param_2 + 0x40);
      func_0x000107c61434();
      return;
    }
  }
  *param_1 = 0;
  return;
}



/* Entry: 1016e5b0c; end: 1016e5b47;  */

void FUN_1016e5b0c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1016e5b48; end: 1016e5bb7;  */

void FUN_1016e5b48(void)

{
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  undefined8 uStack_38;
  
  uVar1 = 0x112dc2b00;
  func_0x0001000285a8(0x112dc2b00,&UNK_10d97f960);
  func_0x000100087bd4(&uStack_38,FUN_1016ea54c,auStack_60,uVar1);
  func_0x000107c61574(uStack_38);
  return;
}



/* Entry: 1016e5bb8; end: 1016e5bdb;  */

void FUN_1016e5bb8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 **)(unaff_x22 + 0x98) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa0) = *unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e5bdc,0,0);
  return;
}



/* Entry: 1016e5bdc; end: 1016e5c87;  */

void FUN_1016e5bdc(void)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(*(long *)(unaff_x22 + 0x98) + 0x40);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(long *)(unaff_x22 + 0x20) = *(long *)(unaff_x22 + 0x98);
  uVar1 = 0x112dc2b00;
  func_0x0001000285a8(0x112dc2b00,&UNK_10d97f960);
  func_0x000100087bd4(unaff_x22 + 0x70,FUN_1016e8bd0,unaff_x22 + 0x10,uVar1);
  *(undefined8 *)(unaff_x22 + 0xb0) = 0;
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x70);
  plVar2 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xc0) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1016e5c88;
                    /* WARNING: Could not recover jumptable at 0x0001016e5c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)0x1016e6ff4)();
  return;
}



/* Entry: 1016e5c88; end: 1016e5cdb;  */

void FUN_1016e5c88(undefined8 param_1,undefined1 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 200) = param_1;
  *(undefined1 *)(lVar1 + 0xd0) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e5cdc,0,0);
  return;
}



/* Entry: 1016e5cdc; end: 1016e5f87;  */

void FUN_1016e5cdc(void)

{
  undefined1 uVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar4 = *(long *)(unaff_x22 + 200);
  if (*(char *)(unaff_x22 + 0xd0) == '\x01') {
    *(long *)(unaff_x22 + 0x78) = lVar4;
    iVar3 = 2;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar3 != 0) {
      uVar7 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(unaff_x22 + 0x78,uVar7,PTR___ss5ErrorWS_11034ee10);
    }
    FUN_1016e8be8(*(undefined8 *)(unaff_x22 + 200),1);
LAB_1016e5dc8:
    uVar7 = *(undefined8 *)(unaff_x22 + 0xb8);
    *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x98);
    *(undefined8 *)(unaff_x22 + 0x48) = uVar7;
    func_0x000100087bd4(FUN_1016e8bfc,unaff_x22 + 0x30,PTR___sytN_11034f1b0 + 8);
LAB_1016e5df8:
    func_0x000107c61574(uVar7);
  }
  else {
    if (lVar4 == 0) goto LAB_1016e5dc8;
    func_0x000107c4fa88();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1016e5f84);
      (*pcVar2)();
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
    func_0x000107c5fadc(uVar7,*(undefined8 *)(unaff_x22 + 0x90));
    lVar8 = lVar4;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    func_0x000107c61170(uVar7);
    func_0x000107c61170(lVar4);
    if (lVar8 == 0) {
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      func_0x000107c60234(&uStack_70,lVar8);
      func_0x000107c615e8(lVar8);
    }
    *(undefined8 *)(unaff_x22 + 0x58) = uStack_68;
    *(undefined8 *)(unaff_x22 + 0x50) = uStack_70;
    *(undefined8 *)(unaff_x22 + 0x68) = uStack_58;
    *(undefined8 *)(unaff_x22 + 0x60) = uStack_60;
    if (*(long *)(unaff_x22 + 0x68) != 0) {
      uVar7 = 0;
      func_0x0001016e9bd4(0,0x112dc2b08,&PTR_PTR_1126a79a8);
      uVar6 = unaff_x22 + 0x80;
      func_0x000107c6147c(uVar6,unaff_x22 + 0x50,PTR___sypN_11034f1a8 + 8,uVar7,6);
      if ((uVar6 & 1) != 0) {
        lVar8 = *(long *)(unaff_x22 + 0x80);
        lVar4 = lVar8;
        func_0x000107c5cdac();
        if (lVar4 != 0) {
          lVar4 = lVar8;
          func_0x000107c5cdac();
          if (lVar4 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1016e5f78);
            (*pcVar2)();
          }
          if (lVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1016e5f7c);
            (*pcVar2)();
          }
          FUN_1016e7c78();
          if (lVar4 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1016e5f80);
            (*pcVar2)();
          }
          lVar4 = lVar8;
          func_0x000107c5cda8();
          func_0x000107c61180();
          if (lVar4 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1016e5f88);
            (*pcVar2)();
          }
          uVar7 = *(undefined8 *)(unaff_x22 + 200);
          uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
          uVar1 = *(undefined1 *)(unaff_x22 + 0xd0);
          lVar5 = lVar4;
          func_0x000107c5dc14();
          func_0x000107c61170(lVar4);
          func_0x000107c61170(lVar8);
          FUN_1016e8be8(uVar7,uVar1);
          func_0x000107c61574(uVar9);
          uVar7 = 0;
          goto LAB_1016e5e04;
        }
        uVar7 = *(undefined8 *)(unaff_x22 + 0xb8);
        FUN_1016e8be8(*(undefined8 *)(unaff_x22 + 200),*(undefined1 *)(unaff_x22 + 0xd0));
        func_0x000107c61574(uVar7);
        func_0x000107c61170(lVar8);
        goto LAB_1016e5dfc;
      }
      uVar7 = *(undefined8 *)(unaff_x22 + 0xb8);
      FUN_1016e8be8(*(undefined8 *)(unaff_x22 + 200),*(undefined1 *)(unaff_x22 + 0xd0));
      goto LAB_1016e5df8;
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0xb8);
    FUN_1016e8be8(*(undefined8 *)(unaff_x22 + 200),*(undefined1 *)(unaff_x22 + 0xd0));
    func_0x000107c61574(uVar7);
    func_0x0001016e97f0(unaff_x22 + 0x50,0x112d387f8,&UNK_10d902650);
  }
LAB_1016e5dfc:
  lVar5 = 0;
  uVar7 = 1;
LAB_1016e5e04:
                    /* WARNING: Could not recover jumptable at 0x0001016e5e20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar5,uVar7);
  return;
}



/* Entry: 1016e5f88; end: 1016e610b;  */

void FUN_1016e5f88(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  
  lVar1 = *(long *)(param_2 + 0x48);
  lVar2 = lVar1;
  if (lVar1 != 0) goto LAB_1016e60e8;
  lVar2 = *(long *)(param_2 + 0x38);
  uVar4 = param_3;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
LAB_1016e601c:
    uVar4 = 0;
  }
  else {
    lVar1 = lVar2;
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar1 == 0) {
      lVar2 = 0;
      goto LAB_1016e601c;
    }
    lVar2 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
  }
  FUN_1016e9024();
  func_0x000107c6142c(uVar4);
  func_0x0001000285a8(0x112dc2b00,&UNK_10d97f960);
  FUN_1016e9354(param_2 + 0x10,auStack_78);
  puVar3 = &UNK_1103fb1e8;
  func_0x000107c613fc(&UNK_1103fb1e8,0x48,7);
  FUN_1016e9398(auStack_78,puVar3 + 0x10);
  *(long *)(puVar3 + 0x38) = lVar2;
  *(undefined8 *)(puVar3 + 0x40) = param_3;
  lVar2 = 5;
  func_0x000104887c7c(5,3,0x50,4,0xd000000000000012,0x800000010efb7fc0,&UNK_10d97f980,puVar3);
  func_0x000107c61574(puVar3);
  uVar4 = *(undefined8 *)(param_2 + 0x48);
  *(long *)(param_2 + 0x48) = lVar2;
  func_0x000107c6157c(lVar2);
  func_0x000107c61574(uVar4);
  lVar1 = 0;
LAB_1016e60e8:
  *param_1 = lVar2;
  func_0x000107c6157c(lVar1);
  return;
}



/* Entry: 1016e610c; end: 1016e6163;  */

void FUN_1016e610c(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1016e6164;
  plVar1[8] = param_2;
  plVar1[9] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e94f0,0,0);
  return;
}



/* Entry: 1016e6164; end: 1016e61b3;  */

void FUN_1016e6164(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e61b4,0,0);
  return;
}



/* Entry: 1016e61b4; end: 1016e61cb;  */

void FUN_1016e61b4(void)

{
  long unaff_x22;
  
  **(undefined8 **)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x0001016e61c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1016e61cc; end: 1016e6207;  */

void FUN_1016e61cc(void)

{
  long unaff_x20;
  
  FUN_1016e8b18(unaff_x20 + 0x10);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1016e6208; end: 1016e621f;  */

void FUN_1016e6208(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1016e6220,0,0);
  return;
}



/* Entry: 1016e6220; end: 1016e6393;  */

void FUN_1016e6220(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  undefined *puVar8;
  int *piVar9;
  long lVar10;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x40);
  lVar4 = *(long *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(lVar4 + 0x40);
  lVar5 = *(long *)(lVar4 + 0x48);
  FUN_1016e8a6c(lVar4 + 0x28,uVar2);
  puVar8 = PTR___swiftEmptySetSingleton_11034f1d8;
  (**(code **)(lVar5 + 8))(lVar3,PTR___swiftEmptySetSingleton_11034f1d8,uVar2,lVar5);
  *(long *)(unaff_x22 + 0x50) = lVar3;
  lVar4 = lVar3;
  func_0x000107c41214();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar10 = *(long *)(unaff_x22 + 0x48);
    lVar5 = lVar4;
    func_0x000107c5ee30();
    func_0x000107c61170(lVar4);
    *(long *)(unaff_x22 + 0x58) = lVar5;
    *(undefined **)(unaff_x22 + 0x60) = puVar8;
    uVar2 = *(undefined8 *)(lVar10 + 0x18);
    lVar3 = *(long *)(lVar10 + 0x20);
    FUN_1016e8a6c(lVar10,uVar2);
    func_0x00010006c00c(lVar5,puVar8);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_1016f04e0();
    *(undefined8 *)(unaff_x22 + 0x10) = 0x6973754d7465472f;
    *(undefined8 *)(unaff_x22 + 0x18) = 0xee006b6361725463;
    *(long *)(unaff_x22 + 0x20) = lVar5;
    *(undefined **)(unaff_x22 + 0x28) = puVar8;
    *(undefined1 *)(unaff_x22 + 0x30) = 0;
    *(undefined **)(unaff_x22 + 0x38) = puVar6;
    piVar9 = *(int **)(lVar3 + 0x10);
    iVar1 = *piVar9;
    plVar7 = (long *)(ulong)(uint)piVar9[1];
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x68) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_1016e6394;
                    /* WARNING: Could not recover jumptable at 0x0001016e6368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar9))(plVar7,unaff_x22 + 0x10,0,0,0,uVar2,lVar3);
    return;
  }
  func_0x000107c61170(lVar3);
                    /* WARNING: Could not recover jumptable at 0x0001016e6390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1016e6394; end: 1016e63ff;  */

void FUN_1016e6394(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x70) = param_1;
  *(undefined8 *)(lVar2 + 0x78) = param_2;
  *(long *)(lVar2 + 0x80) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x68));
  FUN_1016e8b44(lVar2 + 0x10);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1016e6400;
  }
  else {
    pcVar1 = FUN_1016e653c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 1016e6400; end: 1016e653b;  */

void FUN_1016e6400(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x22;
  ulong uVar8;
  undefined8 uVar9;
  
  uVar6 = *(ulong *)(unaff_x22 + 0x78);
  lVar2 = *(long *)(unaff_x22 + 0x80);
  uVar8 = *(ulong *)(unaff_x22 + 0x70);
  func_0x000107c610f8(PTR_PTR_1126bfda0);
  FUN_1016e8bc0(uVar8,uVar6);
  uVar5 = uVar8;
  FUN_1016e9418(uVar8,uVar6 & 0xdfffffffffffffff);
  func_0x0001016e8bc8(uVar8,uVar6);
  if (lVar2 == 0) {
    uVar6 = uVar5;
    func_0x000107c449b0();
    uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
    if ((uVar6 & 1) != 0) {
      uVar6 = uVar5;
      func_0x000107c4d2ac(uVar5);
      func_0x000107c61180();
      func_0x000107c61170(uVar5);
      func_0x0001016e8bc8(uVar1,uVar9);
      func_0x00010006c090(uVar3,uVar4);
      func_0x000107c61170(uVar7);
      goto LAB_1016e651c;
    }
    func_0x00010006c090(uVar3,uVar4);
    func_0x000107c61170(uVar5);
    func_0x0001016e8bc8(uVar1,uVar9);
    func_0x000107c61170(uVar7);
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x50);
    func_0x00010006c090(*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60));
    func_0x000107c61170(uVar9);
    func_0x0001016e8bc8(uVar1,uVar3);
    func_0x000107c614ac(lVar2);
  }
  uVar6 = 0;
LAB_1016e651c:
                    /* WARNING: Could not recover jumptable at 0x0001016e6538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar6);
  return;
}



/* Entry: 1016e653c; end: 1016e6587;  */

void FUN_1016e653c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x00010006c090(*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60));
  func_0x000107c61170(uVar1);
  func_0x000107c614ac(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001016e6584. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Entry: 1016e6588; end: 1016e6607;  */

void FUN_1016e6588(void)

{
  func_0x000107c61168(&PTR_PTR_112dc2800);
  return;
}



/* Entry: 1016e6608; end: 1016e661b;  */

void FUN_1016e6608(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103fb058;
  if (lRam0000000112dc2ab0 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112dc2ab0 = param_1;
  }
  return;
}



/* Entry: 1016e661c; end: 1016e6793;  */

undefined8 FUN_1016e661c(long param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  double dVar11;
  
  if (param_1 == param_2) {
    uVar8 = 1;
  }
  else if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
    uVar7 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    uVar10 = 0xffffffffffffffff;
    if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
      uVar10 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar10 = uVar10 & *(ulong *)(param_1 + 0x40);
    func_0x000107c61438(param_1,2);
    func_0x000107c61434(param_2);
    lVar5 = 0;
    do {
      if (uVar10 == 0) {
        do {
          lVar9 = lVar5 + 1;
          if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1016e6794);
            (*pcVar2)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar9) {
            uVar8 = 1;
            goto LAB_1016e6758;
          }
          uVar10 = ((ulong *)(param_1 + 0x40))[lVar9];
          lVar5 = lVar5 + 1;
        } while (uVar10 == 0);
        uVar4 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
        uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar10 = uVar10 - 1 & uVar10;
      }
      else {
        uVar4 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
        uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
        uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
        uVar10 = uVar10 - 1 & uVar10;
        lVar9 = lVar5;
      }
      uVar6 = LZCOUNT(uVar4) | lVar9 << 6;
      plVar1 = (long *)(*(long *)(param_1 + 0x30) + uVar6 * 0x10);
      lVar3 = *plVar1;
      uVar4 = plVar1[1];
      dVar11 = *(double *)(*(long *)(param_1 + 0x38) + uVar6 * 8);
      func_0x000107c61434(uVar4);
      uVar6 = uVar4;
      func_0x000100029284();
      func_0x000107c6142c(uVar4);
    } while (((uVar6 & 1) != 0) &&
            (lVar5 = lVar9, *(double *)(*(long *)(param_2 + 0x38) + lVar3 * 8) == dVar11));
    uVar8 = 0;
LAB_1016e6758:
    func_0x000107c6142c(param_2);
    func_0x000107c61430(param_1,2);
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}



/* Entry: 1016e6794; end: 1016e679b;  */

void FUN_1016e6794(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*unaff_x20);
  return;
}



/* Entry: 1016e679c; end: 1016e690f;  */

void FUN_1016e679c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61170(*param_2);
  uStack_40 = 0;
  lStack_38 = 0;
  func_0x000107c5fae4(param_1,&uStack_40);
  lVar1 = lStack_38;
  if (lStack_38 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uStack_40;
    func_0x000107c5fadc(uStack_40,lStack_38);
    func_0x000107c6142c(lVar1);
  }
  *param_2 = uVar2;
  return;
}



/* Entry: 1016e6910; end: 1016e6937;  */

void FUN_1016e6910(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 1016e6938; end: 1016e69a3;  */

void FUN_1016e6938(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x112dc2b38;
  FUN_1016e69ec(0x112dc2b38,&UNK_10d97f800);
  uVar2 = 0x112dc2b40;
  FUN_1016e69ec(0x112dc2b40,&UNK_10d97f7a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdb96bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss20_SwiftNewtypeWrapperPsSHRzSH8RawValueSYRpzrlE20_toCustomAnyHashables0hI0VSgyF_11034e980
  )(param_1,param_2,uVar1,uVar2,PTR___sSSSHsWP_11034da90);
  return;
}



/* Entry: 1016e69a4; end: 1016e69eb;  */

void FUN_1016e69a4(void)

{
  FUN_1016e69ec(0x112dc2ab8,&UNK_10d97f770);
  return;
}



/* Entry: 1016e69ec; end: 1016e6aa3;  */

void FUN_1016e69ec(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    FUN_1016e6608(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 1016e6aa4; end: 1016e6b97;  */

undefined1 * FUN_1016e6aa4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c6068c(auStack_78,param_1);
  puVar2 = auStack_78;
  func_0x000107c5fb58(puVar2,uVar1,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  return puVar2;
}



/* Entry: 1016e6b98; end: 1016e6bbb;  */

void FUN_1016e6b98(void)

{
  FUN_1016e69ec(0x112dc2ac8,&UNK_10d97f7d8);
  return;
}


