/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101914b90; end: 101914ba3;  */

void FUN_101914b90(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101913e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101914ba4; end: 101914d93;  */

undefined8 FUN_101914ba4(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lStack_30;
  undefined8 uStack_28;
  
  if ((param_2 & 0xc000000000000001) == 0) {
    if (*(long *)(param_2 + 0x10) != 0) {
      uVar3 = param_2;
      func_0x000107c61434(param_2);
      FUN_101913e60();
      if ((uVar3 & 1) != 0) {
        uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8);
        func_0x000107c61174(uVar2);
        func_0x000107c6142c(param_2);
        return uVar2;
      }
      func_0x000107c6142c(param_2);
    }
  }
  else {
    func_0x000107c61174();
    lVar1 = param_1;
    func_0x000107c6043c();
    func_0x000107c61170(param_1);
    if (lVar1 != 0) {
      uVar2 = 0;
      lStack_30 = lVar1;
      func_0x000104848678(0);
      func_0x000107c6147c(&uStack_28,&lStack_30,PTR___syXlN_11034f1a0 + 8,uVar2,7);
      return uStack_28;
    }
  }
  return 0;
}



/* Entry: 101914d94; end: 101914f07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101914d94(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined *puStack_48;
  
  func_0x000107c614f0();
  lVar1 = _DAT_112dd2ab8;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_101913f4c();
  puStack_48 = puVar2;
  func_0x0001000285a8(0x112dd2a98,&UNK_10d994fb0);
  func_0x000107c613fc();
  ppuVar3 = &puStack_48;
  func_0x00010006c248();
  *(undefined ***)(unaff_x20 + lVar1) = ppuVar3;
  lVar1 = _DAT_112dd2ac0;
  puStack_48 = (undefined *)0x0;
  func_0x0001000285a8(0x112dd2aa0,&UNK_10d994fb8);
  func_0x000107c613fc();
  ppuVar3 = &puStack_48;
  func_0x00010006c248();
  *(undefined ***)(unaff_x20 + lVar1) = ppuVar3;
  lVar1 = _DAT_112dd2ac8;
  puVar2 = puVar4;
  func_0x000101913f60();
  puStack_48 = puVar2;
  func_0x0001000285a8(0x112dd2aa8,&UNK_10d994fc0);
  func_0x000107c613fc();
  ppuVar3 = &puStack_48;
  func_0x00010006c248();
  *(undefined ***)(unaff_x20 + lVar1) = ppuVar3;
  lVar1 = _DAT_112dd2ad0;
  func_0x000101913f74();
  puStack_48 = puVar4;
  func_0x0001000285a8(0x112dd2ab0,&UNK_10d994fc8);
  func_0x000107c613fc();
  ppuVar3 = &puStack_48;
  func_0x00010006c248();
  *(undefined ***)(unaff_x20 + lVar1) = ppuVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112dd2ad8) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffa8,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101914f08; end: 101914f67; -[SCWebViewRetainer init] */

void FUN_101914f08(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebViewServicesImpl.WebViewRetainer",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101914f34);
  (*pcVar1)();
}



/* Entry: 101914f68; end: 101914fcf; -[SCWebViewRetainer .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101914f84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101914fa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101914f88) */
/* WARNING: Removing unreachable block (ram,0x000101914fa8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101914f68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112dd2ad8));
  return;
}



/* Entry: 101914fd0; end: 10191521f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong * FUN_101914fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong *apuStack_90 [2];
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  long lStack_68;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112dd2ac8);
  uStack_70 = param_1;
  lStack_68 = param_2;
  func_0x000107c6157c(uVar2);
  func_0x000100075034(FUN_1019176f4,auStack_80,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar2);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112dd2ad0);
  uStack_70 = param_1;
  lStack_68 = param_2;
  func_0x000107c6157c(uVar3);
  uVar2 = 0x112dd2ae0;
  func_0x0001000285a8(0x112dd2ae0,&UNK_10d994fd0);
  func_0x000100075034(apuStack_90,0x10191770c,auStack_80,uVar2);
  func_0x000107c61574(uVar3);
  if (apuStack_90[0] != (ulong *)0x0) {
    puVar1 = apuStack_90[0];
    func_0x000107c61174();
    func_0x000107c5ed04();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar1);
  }
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112dd2ab8);
  uStack_70 = param_1;
  lStack_68 = param_2;
  func_0x000107c6157c(uVar3);
  uVar2 = 0x112dd2ae8;
  func_0x0001000285a8(0x112dd2ae8,&UNK_10d994fd8);
  func_0x000100075034(apuStack_90,FUN_101917738,auStack_80,uVar2);
  func_0x000107c61574(uVar3);
  puVar1 = apuStack_90[0];
  if (apuStack_90[0] == (ulong *)0x0) {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112dd2ac0);
    uStack_70 = param_3;
    lStack_68 = param_4;
    func_0x000107c6157c(uVar3);
    func_0x000100075034(apuStack_90,FUN_10191778c,auStack_80,uVar2);
    func_0x000107c61574(uVar3);
    puVar1 = apuStack_90[0];
    if (apuStack_90[0] == (ulong *)0x0) {
      uVar3 = 0;
      func_0x000103c56918(0);
      func_0x000103c558f8();
      uVar2 = 0;
      if (param_4 != 0) {
        func_0x000107c5fadc(param_3,param_4);
        uVar2 = param_3;
      }
      func_0x000107c5284c(uVar3);
      func_0x000107c61170(uVar2);
      puVar1 = (ulong *)0x0;
      func_0x000103c43334();
      func_0x000107c610f8();
      func_0x000107c469b0(0,0,0,0);
      func_0x000107c61180();
      func_0x000103c55a80();
      func_0x000107c61170(puVar1);
      func_0x000107c61170(uVar3);
    }
    pcVar4 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar1) + 0x88);
    func_0x000107c61434(param_2);
    (*pcVar4)(param_1,param_2);
  }
  return puVar1;
}



/* Entry: 101915220; end: 1019152bf; -[SCWebViewRetainer getWebViewWithId:applicationNameForUserAgent:] */

void FUN_101915220(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  if (param_4 == 0) {
    param_4 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x000107c5faec(param_4);
  }
  func_0x000107c61174(param_1);
  FUN_101914fd0(param_3,param_2,param_4,uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1019152c0; end: 10191545b;  */

void FUN_1019152c0(ulong *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar5 = param_2;
    func_0x000107c61174();
    uVar2 = uVar1;
    func_0x000107c40110();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c3dfb0();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    if (uVar3 == 0) {
      func_0x000107c61170(uVar1);
      if (param_3 == 0) {
        return;
      }
    }
    else {
      uVar2 = uVar3;
      func_0x000107c5faec();
      func_0x000107c61170(uVar3);
      if (param_3 == 0) {
        func_0x000107c6142c(uVar5);
        func_0x000107c61170(uVar1);
      }
      else {
        if (uVar2 == param_2 && param_3 == uVar5) {
          func_0x000107c6142c(uVar5);
          func_0x000107c61170(uVar1);
          return;
        }
        func_0x000107c605b8(uVar2,uVar5,param_2,param_3,0);
        func_0x000107c6142c(uVar5);
        func_0x000107c61170(uVar1);
        if ((uVar2 & 1) != 0) {
          return;
        }
      }
    }
    func_0x000107c61170(uVar1);
  }
  uVar4 = 0;
  func_0x000103c56918(0);
  func_0x000103c558f8();
  uVar1 = 0;
  if (param_3 != 0) {
    func_0x000107c5fadc(param_2,param_3);
    uVar1 = param_2;
  }
  func_0x000107c5284c(uVar4);
  func_0x000107c61170(uVar1);
  uVar1 = 0;
  func_0x000103c43334();
  func_0x000107c610f8();
  func_0x000107c469b0(0,0,0,0);
  func_0x000107c61180();
  func_0x000103c55a80();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar4);
  *param_1 = uVar1;
  return;
}



/* Entry: 10191545c; end: 101915507; -[SCWebViewRetainer prewarmWebViewWithApplicationNameForUserAgent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10191545c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112dd2ac0);
  lStack_50 = param_3;
  uStack_48 = param_2;
  lStack_40 = param_1;
  func_0x000107c61174();
  func_0x000107c6157c(uVar1);
  func_0x000100075034(0x101917ecc,auStack_60,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return;
}



/* Entry: 101915508; end: 1019155fb;  */

void FUN_101915508(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  lVar1 = 0;
  func_0x000107c5eb08();
  *(long *)(unaff_x22 + 0x58) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x60) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x70) = uVar2;
  lVar1 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x78) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x90) = uVar2;
  uVar4 = 0;
  func_0x000107c5fcec();
  uVar5 = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x98) = uVar5;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar4,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019155fc,uVar4,uVar5);
  return;
}



/* Entry: 1019155fc; end: 1019158ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019155fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong *puVar6;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  ulong *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x22;
  undefined8 uVar15;
  
  lVar10 = *(long *)(unaff_x22 + 0x48);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x98));
  func_0x000107c61428(lVar10 + 0x10,unaff_x22 + 0x28,0,0);
  lVar10 = lVar10 + 0x10;
  func_0x000107c61618();
  puVar5 = PTR__swift_isaMask_11034f488;
  if (lVar10 != 0) {
    puVar11 = *(ulong **)(unaff_x22 + 0x50);
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar11) + 0x88))(0,0);
    func_0x000107c569dc(puVar11);
    func_0x000107c5a110(puVar11);
    puVar6 = puVar11;
    func_0x000107c51a60(puVar11);
    func_0x000107c61180();
    func_0x000107c53fcc();
    func_0x000107c61170(puVar6);
    (**(code **)((*(ulong *)puVar5 & *puVar11) + 0x130))();
    func_0x0001000d224c(unaff_x22 + 0x40);
    uVar12 = *(ulong *)(unaff_x22 + 0x40);
    uVar7 = uVar12;
    func_0x000107c41f34();
    func_0x000107c615e8(uVar12);
    if ((uVar7 & 1) == 0) {
      uVar13 = *(undefined8 *)(unaff_x22 + 0x78);
      lVar9 = *(long *)(unaff_x22 + 0x80);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x70);
      func_0x000107c5edd0(uVar14,0x6c623a74756f6261,0xeb000000006b6e61);
      (**(code **)(lVar9 + 0x30))(uVar14,1,uVar13);
      if ((int)uVar14 == 1) {
        func_0x0001000293e4(*(undefined8 *)(unaff_x22 + 0x70));
      }
      else {
        uVar13 = *(undefined8 *)(unaff_x22 + 0x88);
        uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x78);
        lVar9 = *(long *)(unaff_x22 + 0x80);
        uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
        uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
        lVar3 = *(long *)(unaff_x22 + 0x60);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x50);
        (**(code **)(lVar9 + 0x20))(uVar2,*(undefined8 *)(unaff_x22 + 0x70),uVar14);
        (**(code **)(lVar9 + 0x10))(uVar13,uVar2,uVar14);
        func_0x000107c5eaec(uVar4,0x404e000000000000,uVar13,0);
        func_0x000107c5eae0();
        (**(code **)(lVar3 + 8))(uVar4,uVar1);
        func_0x000107c4b768(uVar15);
        func_0x000107c61180();
        func_0x000107c61170();
        func_0x000107c61170(uVar13);
        (**(code **)(lVar9 + 8))(uVar2,uVar14);
      }
      uVar13 = *(undefined8 *)(lVar10 + _DAT_112dd2ac0);
      *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x50);
      func_0x000107c6157c(uVar13);
      pcVar8 = FUN_101917e38;
      lVar9 = unaff_x22 + 0x10;
    }
    else {
      uVar13 = *(undefined8 *)(lVar10 + _DAT_112dd2ac0);
      func_0x000107c6157c(uVar13);
      pcVar8 = FUN_1019158ac;
      lVar9 = 0;
    }
    func_0x000100075034(pcVar8,lVar9,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(lVar10);
    func_0x000107c61574(uVar13);
  }
  uVar13 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x90));
  func_0x000107c615c0(uVar13);
  func_0x000107c615c0(uVar4);
  func_0x000107c615c0(uVar14);
                    /* WARNING: Could not recover jumptable at 0x0001019158a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1019158ac; end: 1019158db;  */

void FUN_1019158ac(undefined8 *param_1)

{
  func_0x000107c61170(*param_1);
  *param_1 = 0;
  return;
}



/* Entry: 1019158dc; end: 101915917;  */

void FUN_1019158dc(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101915914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101915918; end: 101915a1f; -[SCWebViewRetainer recycleWithWebView:] */

/* WARNING: Possible PIC construction at 0x000101915a04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101915a08) */

void FUN_101915918(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_110411bb0;
  func_0x000107c613fc(&UNK_110411bb0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  puVar2 = &UNK_110411c28;
  func_0x000107c613fc(&UNK_110411c28,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  puVar1 = &UNK_110411c50;
  func_0x000107c613fc(&UNK_110411c50,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &UNK_10d995028;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar3 = 6;
  func_0x0001001ca524(6,0,8,4,0,0,&UNK_10d995030,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101915a20; end: 101915a8f;  */

void FUN_101915a20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_3;
  *(undefined8 *)(unaff_x22 + 0x98) = param_4;
  *(undefined8 *)(unaff_x22 + 0x80) = param_1;
  *(undefined8 *)(unaff_x22 + 0x88) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101915a90,uVar1,uVar2);
  return;
}



/* Entry: 101915a90; end: 101915ef7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101915a90(void)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long unaff_x22;
  
  lVar11 = *(long *)(unaff_x22 + 0x80);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa0));
  func_0x000107c61428(lVar11 + 0x10,unaff_x22 + 0x68,0,0);
  lVar11 = lVar11 + 0x10;
  func_0x000107c61618();
  if (lVar11 != 0) {
    iVar3 = (int)*(undefined8 *)(unaff_x22 + 0x88);
    func_0x000107c49fe0();
    lVar2 = _DAT_112dd2ac8;
    if (iVar3 == 0) {
      uVar13 = *(undefined8 *)(unaff_x22 + 0x88);
      puVar9 = &UNK_110411bb0;
      func_0x000107c613fc(&UNK_110411bb0,0x18,7);
      func_0x000107c61614(puVar9 + 0x10,lVar11);
      puVar10 = &UNK_110411c78;
      func_0x000107c613fc(&UNK_110411c78,0x20,7);
      *(undefined **)(puVar10 + 0x10) = puVar9;
      *(undefined8 *)(puVar10 + 0x18) = uVar13;
      puVar9 = &UNK_110411ca0;
      func_0x000107c613fc(&UNK_110411ca0,0x20,7);
      *(undefined **)(puVar9 + 0x10) = &UNK_10d995038;
      *(undefined **)(puVar9 + 0x18) = puVar10;
      func_0x000107c61174(uVar13);
      func_0x0001001ca524(6,0,8,4,0,0,&UNK_10d995040,puVar9,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574();
      func_0x000107c61574(puVar9);
      func_0x000107c61170(lVar11);
    }
    else {
      uVar13 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar12 = *(undefined8 *)(lVar11 + _DAT_112dd2ac8);
      *(undefined8 *)(unaff_x22 + 0x20) = uVar13;
      *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
      func_0x000107c6157c(uVar12);
      puVar9 = PTR___sytN_11034f1b0;
      func_0x000100075034(0x101917ea4,unaff_x22 + 0x10,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(uVar12);
      lVar8 = _DAT_112dd2ad0;
      uVar12 = *(undefined8 *)(lVar11 + _DAT_112dd2ad0);
      *(undefined8 *)(unaff_x22 + 0x20) = uVar13;
      *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
      func_0x000107c6157c(uVar12);
      uVar13 = 0x112dd2ae0;
      func_0x0001000285a8(0x112dd2ae0,&UNK_10d994fd0);
      func_0x000100075034(unaff_x22 + 0x38,FUN_101917e7c,unaff_x22 + 0x10,uVar13);
      func_0x000107c61574(uVar12);
      lVar4 = *(long *)(unaff_x22 + 0x38);
      if (lVar4 != 0) {
        func_0x000107c61174();
        func_0x000107c5ed04();
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar4);
      }
      uVar13 = *(undefined8 *)(lVar11 + _DAT_112dd2ab8);
      *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x98);
      *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x90);
      *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x88);
      func_0x000107c6157c(uVar13);
      func_0x000100075034(FUN_101917b20,unaff_x22 + 0x10,puVar9 + 8);
      func_0x000107c61574(uVar13);
      func_0x0001000d224c(unaff_x22 + 0x38);
      uVar14 = *(ulong *)(unaff_x22 + 0x38);
      uVar5 = uVar14;
      func_0x000107c41f10();
      func_0x000107c615e8(uVar14);
      if ((uVar5 & 1) == 0) {
        uVar13 = *(undefined8 *)(unaff_x22 + 0x90);
        uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
        *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x88);
        puVar9 = &UNK_10d995050;
        func_0x000107c614e0();
        puVar10 = &UNK_110411bb0;
        func_0x000107c613fc(&UNK_110411bb0,0x18,7);
        func_0x000107c61614(puVar10 + 0x10,lVar11);
        puVar6 = &UNK_110411cc8;
        func_0x000107c613fc(&UNK_110411cc8,0x28,7);
        *(undefined **)(puVar6 + 0x10) = puVar10;
        *(undefined8 *)(puVar6 + 0x18) = uVar13;
        *(undefined8 *)(puVar6 + 0x20) = uVar1;
        func_0x000107c61434(uVar1);
        puVar10 = puVar9;
        func_0x000107c5ed54(puVar9,1,0x101917b60,puVar6,
                            PTR___sSo8NSObjectC10Foundation27_KeyValueCodingAndObservingACWP_110351200
                           );
        func_0x000107c61574(puVar6);
        func_0x000107c61574(puVar9);
        uVar12 = *(undefined8 *)(lVar11 + lVar8);
        *(undefined8 *)(unaff_x22 + 0x20) = uVar13;
        puVar9 = PTR___sytN_11034f1b0;
        *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
        *(undefined **)(unaff_x22 + 0x30) = puVar10;
        func_0x000107c6157c(uVar12);
        func_0x000100075034(FUN_101917b6c,unaff_x22 + 0x10,puVar9 + 8);
        func_0x000107c61170(puVar10);
        func_0x000107c61574(uVar12);
      }
      uVar13 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
      puVar7 = PTR__OBJC_CLASS___NSTimer_1126af1b0;
      func_0x000107c61168();
      puVar10 = &UNK_110411bb0;
      func_0x000107c613fc(&UNK_110411bb0,0x18,7);
      func_0x000107c61614(puVar10 + 0x10,lVar11);
      puVar6 = &UNK_110411cf0;
      func_0x000107c613fc(&UNK_110411cf0,0x28,7);
      *(undefined **)(puVar6 + 0x10) = puVar10;
      *(undefined8 *)(puVar6 + 0x18) = uVar13;
      *(undefined8 *)(puVar6 + 0x20) = uVar1;
      *(code **)(unaff_x22 + 0x58) = FUN_101917ba0;
      *(undefined **)(unaff_x22 + 0x60) = puVar6;
      *(undefined **)(unaff_x22 + 0x38) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x40) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x48) = &UNK_100fef460;
      *(undefined **)(unaff_x22 + 0x50) = &UNK_110411d08;
      lVar8 = unaff_x22 + 0x38;
      func_0x000107c60bc4(lVar8);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x60);
      func_0x000107c61434(uVar1);
      func_0x000107c61574(uVar12);
      func_0x000107c51924(0x402e000000000000);
      func_0x000107c61180();
      func_0x000107c60bd0(lVar8);
      uVar12 = *(undefined8 *)(lVar11 + lVar2);
      *(undefined8 *)(unaff_x22 + 0x20) = uVar13;
      *(undefined8 *)(unaff_x22 + 0x28) = uVar1;
      *(undefined **)(unaff_x22 + 0x30) = puVar7;
      func_0x000107c6157c(uVar12);
      func_0x000100075034(FUN_101917bc8,unaff_x22 + 0x10,puVar9 + 8);
      func_0x000107c61170(lVar11);
      func_0x000107c61170(puVar7);
      func_0x000107c61574(uVar12);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000101915ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101915ef8; end: 10191603f;  */

void FUN_101915ef8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  byte abStack_48 [24];
  
  func_0x0001000285a8(0x112d79920,&UNK_10d9390c0);
  func_0x000107c5ed44(abStack_48);
  if ((abStack_48[0] != 2) && ((abStack_48[0] & 1) == 0)) {
    puVar1 = &UNK_110411bb0;
    func_0x000107c613fc(&UNK_110411bb0,0x18,7);
    func_0x000107c61428(param_3 + 0x10,abStack_48,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618(param_3);
    func_0x000107c61614(puVar1 + 0x10,param_3);
    func_0x000107c61170(param_3);
    puVar2 = &UNK_110411d90;
    func_0x000107c613fc(&UNK_110411d90,0x28,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    *(undefined8 *)(puVar2 + 0x18) = param_4;
    *(undefined8 *)(puVar2 + 0x20) = param_5;
    puVar1 = &UNK_110411db8;
    func_0x000107c613fc(&UNK_110411db8,0x20,7);
    *(undefined **)(puVar1 + 0x10) = &UNK_10d9950a0;
    *(undefined **)(puVar1 + 0x18) = puVar2;
    func_0x000107c61434(param_5);
    uVar3 = 6;
    func_0x0001001ca524(6,0,8,4,0,0,&UNK_10d9950a8,puVar1,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(uVar3);
  }
  return;
}



/* Entry: 101916040; end: 1019160af;  */

void FUN_101916040(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019160b0,uVar1,uVar2);
  return;
}



/* Entry: 1019160b0; end: 101916117;  */

void FUN_1019160b0(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_101916118(*(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x38));
    func_0x000107c61170(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000101916114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101916118; end: 101916313;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101916118(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  long alStack_70 [2];
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112dd2ac8);
  uStack_50 = param_1;
  uStack_48 = param_2;
  func_0x000107c6157c(uVar5);
  puVar1 = PTR___sytN_11034f1b0;
  func_0x000100075034(0x101917eb8,auStack_60,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uVar5);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112dd2ad0);
  uStack_50 = param_1;
  uStack_48 = param_2;
  func_0x000107c6157c(uVar6);
  uVar5 = 0x112dd2ae0;
  func_0x0001000285a8(0x112dd2ae0,&UNK_10d994fd0);
  func_0x000100075034(alStack_70,0x101917e90,auStack_60,uVar5);
  func_0x000107c61574(uVar6);
  if (alStack_70[0] != 0) {
    lVar2 = alStack_70[0];
    func_0x000107c61174();
    func_0x000107c5ed04();
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar2);
  }
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112dd2ab8);
  uStack_50 = param_1;
  uStack_48 = param_2;
  func_0x000107c6157c(uVar6);
  uVar5 = 0x112dd2ae8;
  func_0x0001000285a8(0x112dd2ae8,&UNK_10d994fd8);
  func_0x000100075034(alStack_70,FUN_101917c24,auStack_60,uVar5);
  func_0x000107c61574(uVar6);
  if (alStack_70[0] != 0) {
    puVar3 = &UNK_110411bb0;
    func_0x000107c613fc(&UNK_110411bb0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_110411d40;
    func_0x000107c613fc(&UNK_110411d40,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(long *)(puVar4 + 0x18) = alStack_70[0];
    puVar3 = &UNK_110411d68;
    func_0x000107c613fc(&UNK_110411d68,0x20,7);
    *(undefined **)(puVar3 + 0x10) = &UNK_10d995080;
    *(undefined **)(puVar3 + 0x18) = puVar4;
    lVar2 = alStack_70[0];
    func_0x000107c61174(alStack_70[0]);
    uVar5 = 6;
    func_0x0001001ca524(6,0,8,4,0,0,&UNK_10d995088,puVar3,puVar1 + 8);
    func_0x000107c61170(lVar2);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(uVar5);
  }
  return;
}



/* Entry: 101916314; end: 101916383;  */

void FUN_101916314(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_101916118(param_3,param_4);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101916384; end: 1019164e7; -[SCWebViewRetainer retainUntilUrlLoadedWithWebView:] */

/* WARNING: Possible PIC construction at 0x000101916494: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001019164a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101916498) */
/* WARNING: Removing unreachable block (ram,0x0001019164a8) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_101916384(ulong *param_1,long param_2,ulong *param_3)

{
  ulong *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_3) + 0x80);
  func_0x000107c61174();
  func_0x000107c61174();
  puVar1 = param_1;
  (*pcVar4)();
  if (param_2 == 0) {
    func_0x000107c61170(param_3);
  }
  else {
    puVar2 = &UNK_110411bb0;
    func_0x000107c613fc(&UNK_110411bb0,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_1);
    puVar3 = &UNK_110411bd8;
    func_0x000107c613fc(&UNK_110411bd8,0x30,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(ulong **)(puVar3 + 0x18) = param_3;
    *(ulong **)(puVar3 + 0x20) = puVar1;
    *(long *)(puVar3 + 0x28) = param_2;
    puVar2 = &UNK_110411c00;
    func_0x000107c613fc(&UNK_110411c00,0x20,7);
    *(undefined **)(puVar2 + 0x10) = &UNK_10d995018;
    *(undefined **)(puVar2 + 0x18) = puVar3;
    func_0x000107c61174(param_3);
    func_0x0001001ca524(6,0,8,4,0,0,&UNK_10d995020,puVar2);
    param_1 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1019164e8; end: 101916583;  */

void FUN_1019164e8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  func_0x000107c5fadc(param_2,param_3);
  lVar2 = lVar1;
  func_0x000101914c7c();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    func_0x000107c5fadc(param_2,param_3);
    lVar1 = param_2;
    FUN_10191688c();
    func_0x000107c61170(param_2);
    func_0x000107c61170(lVar1);
    func_0x000107c498f8(lVar2);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 101916584; end: 10191665f;  */

void FUN_101916584(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x000107c5fadc(param_2,param_3);
  uVar2 = *param_1;
  if ((uVar2 & 0xc000000000000001) == 0) {
    func_0x000107c61174(param_4);
  }
  else {
    uVar3 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar3 = uVar2;
    }
    func_0x000107c61174(param_4);
    uVar2 = uVar3;
    func_0x000107c6042c();
    if (SCARRY8(uVar2,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101916660);
      (*pcVar1)();
    }
    FUN_101916bb0(uVar3,uVar2 + 1);
    *param_1 = uVar3;
    uVar2 = uVar3;
  }
  func_0x000107c61558();
  uVar3 = *param_1;
  FUN_101917048(param_4,param_2,uVar2,0x112dd2a38,&UNK_10d994f90);
  func_0x000107c61170(param_2);
  *param_1 = uVar3;
  return;
}



/* Entry: 101916660; end: 10191675b;  */

void FUN_101916660(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  func_0x000107c5fadc(param_2,param_3);
  uVar2 = *param_1;
  if ((uVar2 & 0xc000000000000001) == 0) {
    func_0x000107c61174(param_4);
  }
  else {
    uVar3 = uVar2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar2) {
      uVar3 = uVar2;
    }
    func_0x000107c61174(param_4);
    uVar2 = uVar3;
    func_0x000107c6042c();
    if (SCARRY8(uVar2,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10191675c);
      (*pcVar1)();
    }
    func_0x000101916e08(uVar3,uVar2 + 1,param_5,param_6,param_7);
    *param_1 = uVar3;
    uVar2 = uVar3;
  }
  func_0x000107c61558();
  uVar3 = *param_1;
  FUN_101917048(param_4,param_2,uVar2,param_5,param_6);
  func_0x000107c61170(param_2);
  *param_1 = uVar3;
  return;
}



/* Entry: 10191675c; end: 10191688b;  */

void FUN_10191675c(ulong *param_1,ulong *param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = *param_2;
  if (uVar5 == 0) goto LAB_10191686c;
  uVar1 = uVar5;
  uVar4 = param_3;
  func_0x000107c61174();
  uVar2 = uVar1;
  func_0x000107c40110();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c3dfb0();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (uVar3 == 0) {
    func_0x000107c61170(uVar1);
    if (param_4 != 0) {
LAB_101916834:
      uVar5 = 0;
      goto LAB_10191686c;
    }
  }
  else {
    uVar2 = uVar3;
    func_0x000107c5faec();
    func_0x000107c61170(uVar3);
    if (param_4 == 0) {
      func_0x000107c6142c(uVar4);
      func_0x000107c61170(uVar1);
      uVar5 = 0;
      goto LAB_10191686c;
    }
    if (uVar2 == param_3 && param_4 == uVar4) {
      func_0x000107c61170(uVar1);
      func_0x000107c6142c(uVar4);
    }
    else {
      func_0x000107c605b8(uVar2,uVar4,param_3,param_4,0);
      func_0x000107c61170(uVar1);
      func_0x000107c6142c(uVar4);
      if ((uVar2 & 1) == 0) goto LAB_101916834;
    }
  }
  *param_2 = 0;
LAB_10191686c:
  *param_1 = uVar5;
  return;
}



/* Entry: 10191688c; end: 101916a0f;  */

undefined8 FUN_10191688c(long param_1,ulong param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong *unaff_x20;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar6 = *unaff_x20;
  if ((uVar6 & 0xc000000000000001) == 0) {
    func_0x000107c61434(uVar6);
    FUN_101913e60();
    func_0x000107c6142c(uVar6);
    if ((param_2 & 1) == 0) {
      return 0;
    }
    iVar2 = (int)*unaff_x20;
    func_0x000107c61558();
    uVar5 = *unaff_x20;
    if (iVar2 == 0) {
      func_0x0001019171b0(0x112dd2a38,&UNK_10d994f90);
    }
    func_0x000107c61170(*(undefined8 *)(*(long *)(uVar5 + 0x30) + param_1 * 8));
    uVar7 = *(undefined8 *)(*(long *)(uVar5 + 0x38) + param_1 * 8);
    func_0x000101917564(param_1,uVar5);
  }
  else {
    uVar5 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar5 = uVar6;
    }
    func_0x000107c61434(uVar6);
    func_0x000107c61174();
    lVar3 = param_1;
    func_0x000107c6043c();
    func_0x000107c61170(param_1);
    if (lVar3 == 0) {
      func_0x000107c6142c(uVar6);
      return 0;
    }
    func_0x000107c615e8(lVar3);
    uVar4 = uVar5;
    func_0x000107c6042c();
    FUN_101916bb0();
    func_0x000107c6157c();
    FUN_101913e60();
    func_0x000107c61574(uVar5);
    if ((uVar4 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019169f0);
      (*pcVar1)();
    }
    func_0x000107c61170(*(undefined8 *)(*(long *)(uVar5 + 0x30) + param_1 * 8));
    uVar7 = *(undefined8 *)(*(long *)(uVar5 + 0x38) + param_1 * 8);
    func_0x000101917564(param_1,uVar5);
    func_0x000107c6142c(uVar6);
  }
  *unaff_x20 = uVar5;
  return uVar7;
}



/* Entry: 101916a10; end: 101916baf;  */

undefined8 FUN_101916a10(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  undefined8 uVar6;
  ulong uVar7;
  
  uVar7 = *unaff_x20;
  if ((uVar7 & 0xc000000000000001) == 0) {
    uVar5 = param_2;
    func_0x000107c61434(uVar7);
    FUN_101913e60();
    func_0x000107c6142c(uVar7);
    if ((uVar5 & 1) != 0) {
      iVar2 = (int)*unaff_x20;
      func_0x000107c61558();
      uVar7 = *unaff_x20;
      if (iVar2 == 0) {
        func_0x0001019171b0(param_2,param_3);
      }
      func_0x000107c61170(*(undefined8 *)(*(long *)(uVar7 + 0x30) + param_1 * 8));
      uVar6 = *(undefined8 *)(*(long *)(uVar7 + 0x38) + param_1 * 8);
      func_0x000101917564(param_1,uVar7);
      *unaff_x20 = uVar7;
      return uVar6;
    }
  }
  else {
    uVar5 = uVar7 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar7) {
      uVar5 = uVar7;
    }
    func_0x000107c61434(uVar7);
    func_0x000107c61174();
    lVar3 = param_1;
    func_0x000107c6043c();
    func_0x000107c61170(param_1);
    if (lVar3 != 0) {
      func_0x000107c615e8(lVar3);
      uVar4 = uVar5;
      func_0x000107c6042c();
      func_0x000101916e08(uVar5,uVar4,param_2,param_3,param_4);
      func_0x000107c6157c();
      FUN_101913e60();
      func_0x000107c61574(uVar5);
      if ((uVar4 & 1) != 0) {
        func_0x000107c61170(*(undefined8 *)(*(long *)(uVar5 + 0x30) + param_1 * 8));
        uVar6 = *(undefined8 *)(*(long *)(uVar5 + 0x38) + param_1 * 8);
        func_0x000101917564(param_1,uVar5);
        func_0x000107c6142c(uVar7);
        *unaff_x20 = uVar5;
        return uVar6;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101916b98);
      (*pcVar1)();
    }
    func_0x000107c6142c(uVar7);
  }
  return 0;
}



/* Entry: 101916bb0; end: 101917047;  */

undefined * FUN_101916bb0(undefined *param_1,undefined1 **param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  if (param_2 == (undefined1 **)0x0) {
    func_0x000107c615e8();
    puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else {
    func_0x0001000285a8(0x112dd2a38,&UNK_10d994f90);
    puVar5 = param_1;
    func_0x000107c60494();
    puStack_68 = puVar5;
    func_0x000107c60418();
    puVar7 = param_1;
    func_0x000107c60444();
    if (puVar7 != (undefined *)0x0) {
      uVar6 = 0;
      FUN_101917be4(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
      puVar2 = PTR___syXlN_11034f1a0;
      do {
        puStack_78 = puVar7;
        func_0x000107c6147c(&uStack_70,&puStack_78,puVar2 + 8,uVar6,7);
        uVar8 = 0;
        puStack_80 = (undefined1 *)param_2;
        FUN_101917be4(0,0x112dd2b18,&PTR__OBJC_CLASS___NSTimer_1126af1b0);
        param_2 = &puStack_80;
        func_0x000107c6147c(&puStack_78,&puStack_80,puVar2 + 8,uVar8,7);
        uVar8 = uStack_70;
        puVar3 = puStack_78;
        if (*(ulong *)(puVar5 + 0x18) <= *(ulong *)(puVar5 + 0x10)) {
          param_2 = (undefined1 **)0x1;
          FUN_101917304(*(ulong *)(puVar5 + 0x10) + 1,1,0x112dd2a38,&UNK_10d994f90);
          puVar5 = puStack_68;
        }
        puVar7 = *(undefined **)(puVar5 + 0x28);
        func_0x000107c60114();
        uVar12 = -1L << ((ulong)(byte)puVar5[0x20] & 0x3f);
        uVar11 = (ulong)puVar7 & (uVar12 ^ 0xffffffffffffffff);
        uVar9 = uVar11 >> 6;
        uVar10 = -1L << (uVar11 & 0x3f) &
                 (*(ulong *)(puVar5 + uVar9 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar10 == 0) {
          bVar1 = false;
          uVar10 = 0x3f - uVar12 >> 6;
          do {
            uVar11 = uVar9 + 1;
            if ((uVar11 == uVar10) && (bVar1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x101916e08);
              (*pcVar4)();
            }
            uVar9 = 0;
            if (uVar11 != uVar10) {
              uVar9 = uVar11;
            }
            bVar1 = (bool)(uVar11 == uVar10 | bVar1);
          } while (*(ulong *)(puVar5 + uVar9 * 8 + 0x40) == 0xffffffffffffffff);
          uVar10 = ~*(ulong *)(puVar5 + uVar9 * 8 + 0x40);
          uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 << 6;
        }
        else {
          uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
          uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
          uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
          uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
          uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar11 & 0x7fffffffffffffc0;
        }
        uVar9 = uVar10 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar5 + uVar9 + 0x40) =
             1L << (uVar10 & 0x3f) | *(ulong *)(puVar5 + uVar9 + 0x40);
        *(undefined8 *)(*(long *)(puVar5 + 0x30) + uVar10 * 8) = uVar8;
        *(undefined **)(*(long *)(puVar5 + 0x38) + uVar10 * 8) = puVar3;
        *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
        func_0x000107c60444();
      } while (puVar7 != (undefined *)0x0);
    }
    func_0x000107c61574(param_1);
  }
  return puVar5;
}



/* Entry: 101917048; end: 101917303;  */

void FUN_101917048(undefined8 param_1,ulong param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_101913e60();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101917134);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    FUN_101917304(lVar5,param_3,param_4,param_5);
    uVar2 = param_2;
    FUN_101913e60();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      FUN_101917be4(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
      func_0x000107c60624();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019170fc);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x0001019171b0(param_4,param_5);
    lVar5 = *unaff_x20;
    goto joined_r0x000101917150;
  }
  lVar5 = *unaff_x20;
joined_r0x000101917150:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar6);
    return;
  }
  lVar4 = lVar5 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar5 + 0x30) + uVar2 * 8) = param_2;
  *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1019171b0);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 101917304; end: 1019176f3;  */

void FUN_101917304(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  undefined8 uVar11;
  long lVar12;
  ulong *puVar13;
  undefined8 uVar14;
  long lVar15;
  ulong uVar16;
  
  lVar12 = *unaff_x20;
  lVar1 = *(long *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(param_3,param_4);
  lVar4 = lVar12;
  func_0x000107c60490(lVar12,lVar1,param_2,param_3);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_101917530:
    func_0x000107c61574(lVar12);
    *unaff_x20 = lVar4;
    return;
  }
  puVar13 = (ulong *)(lVar12 + 0x40);
  uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar16 = uVar16 & *puVar13;
  lVar1 = lVar4 + 0x40;
  lVar7 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101917560);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) {
          if ((param_2 & 1) != 0) {
            uVar16 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
            if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
              *puVar13 = -1L << (uVar16 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar13,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar12 + 0x10) = 0;
          }
          goto LAB_101917530;
        }
        uVar16 = puVar13[lVar15];
        lVar7 = lVar7 + 1;
      } while (uVar16 == 0);
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar15 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar15 << 6;
    uVar11 = *(undefined8 *)(*(long *)(lVar12 + 0x30) + uVar6 * 8);
    uVar14 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar6 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61174(uVar11);
      func_0x000107c61174(uVar14);
    }
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60114();
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101917564);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar11;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = uVar14;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Entry: 1019176f4; end: 101917737;  */

void FUN_1019176f4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1019164e8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101917738; end: 10191778b;  */

void FUN_101917738(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  uVar2 = uVar1;
  FUN_101914ba4();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 10191778c; end: 101917813;  */

void FUN_10191778c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10191675c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101917814; end: 101917877;  */

void FUN_101917814(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101917878;
  plVar5[0x12] = lVar3;
  plVar5[0x13] = lVar2;
  plVar5[0x10] = lVar4;
  plVar5[0x11] = lVar1;
  lVar3 = 0;
  func_0x000107c5fcec();
  lVar4 = lVar3;
  func_0x000107c5fce8();
  plVar5[0x14] = lVar4;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar3,lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101915a90,lVar3,lVar4);
  return;
}



/* Entry: 101917878; end: 1019178b3;  */

void FUN_101917878(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001019178b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1019178b4; end: 101917923;  */

void FUN_1019178b4(undefined8 param_1)

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
  plVar3[1] = (long)FUN_101917ee0;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 101917924; end: 101917973;  */

void FUN_101917924(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  plVar5 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101917ee4;
  plVar5[9] = lVar1;
  plVar5[10] = lVar4;
  lVar1 = 0;
  func_0x000107c5eb08();
  plVar5[0xb] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar5[0xc] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0xd] = uVar2;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0xe] = uVar2;
  lVar1 = 0;
  func_0x000107c5ede0();
  plVar5[0xf] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar5[0x10] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x11] = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x12] = uVar2;
  lVar4 = 0;
  func_0x000107c5fcec();
  lVar1 = lVar4;
  func_0x000107c5fce8();
  plVar5[0x13] = lVar1;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar4,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019155fc,lVar4,lVar1);
  return;
}



/* Entry: 101917974; end: 1019179e3;  */

void FUN_101917974(undefined8 param_1)

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
  plVar3[1] = 0x101917ee8;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1019179e4; end: 101917a33;  */

void FUN_1019179e4(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  plVar5 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101917eec;
  plVar5[9] = lVar1;
  plVar5[10] = lVar4;
  lVar1 = 0;
  func_0x000107c5eb08();
  plVar5[0xb] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar5[0xc] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0xd] = uVar2;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0xe] = uVar2;
  lVar1 = 0;
  func_0x000107c5ede0();
  plVar5[0xf] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar5[0x10] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x11] = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x12] = uVar2;
  lVar4 = 0;
  func_0x000107c5fcec();
  lVar1 = lVar4;
  func_0x000107c5fce8();
  plVar5[0x13] = lVar1;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar4,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019155fc,lVar4,lVar1);
  return;
}



/* Entry: 101917a34; end: 101917aa3;  */

void FUN_101917a34(undefined8 param_1)

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
  plVar3[1] = 0x101917ef0;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 101917aa4; end: 101917b1f;  */

void FUN_101917aa4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  uVar2 = uVar1;
  FUN_101916a10();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 101917b20; end: 101917b53;  */

void FUN_101917b20(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101916660(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),0x112dd2a40,&UNK_10d995090,&SUB_104848678);
  return;
}



/* Entry: 101917b54; end: 101917b6b;  */

undefined * FUN_101917b54(void)

{
  return PTR_s_isLoading_1125fb508;
}



/* Entry: 101917b6c; end: 101917b9f;  */

void FUN_101917b6c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101916660(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),0x112dd2a30,&UNK_10d994f88,
                PTR___s10Foundation21NSKeyValueObservationCMa_110350800);
  return;
}



/* Entry: 101917ba0; end: 101917bc7;  */

void FUN_101917ba0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_101916118(uVar1,uVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 101917bc8; end: 101917be3;  */

void FUN_101917bc8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101916584(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101917be4; end: 101917c23;  */

void FUN_101917be4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101917c24; end: 101917c7b;  */

void FUN_101917c24(undefined8 param_1)

{
  FUN_101917aa4(param_1,0x112dd2a40,&UNK_10d995090,&SUB_104848678);
  return;
}



/* Entry: 101917c7c; end: 101917ccb;  */

void FUN_101917c7c(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  plVar5 = (long *)0xa0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101917ef4;
  plVar5[9] = lVar1;
  plVar5[10] = lVar4;
  lVar1 = 0;
  func_0x000107c5eb08();
  plVar5[0xb] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar5[0xc] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0xd] = uVar2;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0xe] = uVar2;
  lVar1 = 0;
  func_0x000107c5ede0();
  plVar5[0xf] = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  plVar5[0x10] = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x11] = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0x12] = uVar2;
  lVar4 = 0;
  func_0x000107c5fcec();
  lVar1 = lVar4;
  func_0x000107c5fce8();
  plVar5[0x13] = lVar1;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar4,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019155fc,lVar4,lVar1);
  return;
}



/* Entry: 101917ccc; end: 101917d3b;  */

void FUN_101917ccc(undefined8 param_1)

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
  plVar3[1] = 0x101917ef8;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 101917d3c; end: 101917d67;  */

void FUN_101917d3c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101917d68; end: 101917dc7;  */

void FUN_101917d68(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101917efc;
  plVar3[6] = lVar1;
  plVar3[7] = lVar4;
  plVar3[5] = lVar2;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[8] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019160b0,lVar1,lVar2);
  return;
}



/* Entry: 101917dc8; end: 101917e37;  */

void FUN_101917dc8(undefined8 param_1)

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
  plVar3[1] = 0x101917f00;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 101917e38; end: 101917e7b;  */

void FUN_101917e38(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61170(*param_1);
  *param_1 = uVar1;
  func_0x000107c61174(uVar1);
  return;
}



/* Entry: 101917e7c; end: 101917edf;  */

void FUN_101917e7c(void)

{
  func_0x00010191770c();
  return;
}



/* Entry: 101917ee0; end: 101917f03;  */

void FUN_101917ee0(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001019178b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101917f04; end: 101918027;  */

long FUN_101917f04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_110411de0;
  func_0x000107c613fc(&UNK_110411de0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x0001000285a8(0x112dd2b20,&UNK_10d9950b0);
  func_0x000107c613fc();
  func_0x000107c61174();
  pcVar2 = FUN_101918080;
  func_0x0001000bdd8c(FUN_101918080,puVar1);
  *(code **)(unaff_x20 + 0x10) = pcVar2;
  puVar1 = &UNK_110411e08;
  func_0x000107c613fc(&UNK_110411e08,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  uVar3 = 0x112dd2b28;
  func_0x0001000285a8(0x112dd2b28,&UNK_10d9950b8);
  func_0x000107c613fc();
  pcVar2 = FUN_101918250;
  func_0x0001000bdd8c(FUN_101918250,puVar1,uVar3);
  func_0x000107c61170(param_1);
  *(code **)(unaff_x20 + 0x18) = pcVar2;
  return unaff_x20;
}



/* Entry: 101918028; end: 10191807f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101918028(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + _DAT_11308d048);
  func_0x0001019177c0(0);
  func_0x000107c610f8();
  func_0x000107c6157c();
  FUN_101914d94();
  *param_1 = uVar1;
  return;
}



/* Entry: 101918080; end: 101918087;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101918080(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11308d048);
  func_0x0001019177c0(0);
  func_0x000107c610f8();
  func_0x000107c6157c();
  FUN_101914d94();
  *param_1 = uVar1;
  return;
}



/* Entry: 101918088; end: 10191824f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101918088(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long *plVar9;
  undefined8 uVar10;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  func_0x0001000285a8(0x112d5ddd0,&UNK_10d924580);
  func_0x000107c40430();
  func_0x000107c61180();
  uVar2 = param_2;
  func_0x0001000bda74();
  func_0x000107c61170(param_2);
  func_0x0001000285a8(0x112d7e4b0,&UNK_10d93c6b0);
  uVar3 = param_3;
  func_0x000107c44f4c();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x0001000bda74();
  func_0x000107c61170(uVar3);
  func_0x0001000285a8(0x112d7e4b8,&UNK_10d951260);
  func_0x000107c44f60();
  func_0x000107c61180();
  uVar3 = param_3;
  func_0x0001000bda74();
  func_0x000107c61170(param_3);
  uVar10 = *(undefined8 *)(param_4 + _DAT_11308d048);
  lVar5 = 0;
  func_0x0001019148c0();
  lVar6 = lVar5;
  func_0x000107c610f8();
  lVar1 = _DAT_112dd29e0;
  puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  puStack_68 = puVar7;
  func_0x0001000285a8(0x112dd29d8,&UNK_10d994ed0);
  func_0x000107c613fc();
  ppuVar8 = &puStack_68;
  func_0x00010006c248();
  *(undefined ***)(lVar6 + lVar1) = ppuVar8;
  *(undefined8 *)(lVar6 + _DAT_112dd29e8) = uVar2;
  *(undefined8 *)(lVar6 + _DAT_112dd29f0) = uVar4;
  *(undefined8 *)(lVar6 + _DAT_112dd29f8) = uVar3;
  *(undefined8 *)(lVar6 + _DAT_112dd2a00) = uVar10;
  puVar7 = PTR_s_init_1125d9248;
  lStack_78 = lVar6;
  lStack_70 = lVar5;
  func_0x000107c6157c(uVar10);
  plVar9 = &lStack_78;
  func_0x000107c61154(plVar9,puVar7);
  *param_1 = (long)plVar9;
  return;
}



/* Entry: 101918250; end: 10191825b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101918250(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long *plVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar9 = *(long *)(unaff_x20 + 0x20);
  func_0x0001000285a8(0x112d5ddd0,&UNK_10d924580);
  func_0x000107c40430();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x0001000285a8(0x112d7e4b0,&UNK_10d93c6b0);
  uVar1 = uVar10;
  func_0x000107c44f4c();
  func_0x000107c61180();
  uVar3 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x0001000285a8(0x112d7e4b8,&UNK_10d951260);
  func_0x000107c44f60();
  func_0x000107c61180();
  uVar1 = uVar10;
  func_0x0001000bda74();
  func_0x000107c61170(uVar10);
  uVar10 = *(undefined8 *)(lVar9 + _DAT_11308d048);
  lVar4 = 0;
  func_0x0001019148c0();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar9 = _DAT_112dd29e0;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  puStack_68 = puVar6;
  func_0x0001000285a8(0x112dd29d8,&UNK_10d994ed0);
  func_0x000107c613fc();
  ppuVar7 = &puStack_68;
  func_0x00010006c248();
  *(undefined ***)(lVar5 + lVar9) = ppuVar7;
  *(undefined8 *)(lVar5 + _DAT_112dd29e8) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112dd29f0) = uVar3;
  *(undefined8 *)(lVar5 + _DAT_112dd29f8) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112dd2a00) = uVar10;
  puVar6 = PTR_s_init_1125d9248;
  lStack_78 = lVar5;
  lStack_70 = lVar4;
  func_0x000107c6157c(uVar10);
  plVar8 = &lStack_78;
  func_0x000107c61154(plVar8,puVar6);
  *param_1 = (long)plVar8;
  return;
}



/* Entry: 10191825c; end: 1019182ab;  */

void FUN_10191825c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1019182ac; end: 1019182f7;  */

void FUN_1019182ac(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019182f8; end: 101918353;  */

void FUN_1019182f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100213a7c(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x00010040c9f0(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 101918354; end: 10191835b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101918354(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long *plVar8;
  long lVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar9 = *(long *)(unaff_x20 + 0x20);
  func_0x0001000285a8(0x112d5ddd0,&UNK_10d924580);
  func_0x000107c40430();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x0001000285a8(0x112d7e4b0,&UNK_10d93c6b0);
  uVar1 = uVar10;
  func_0x000107c44f4c();
  func_0x000107c61180();
  uVar3 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x0001000285a8(0x112d7e4b8,&UNK_10d951260);
  func_0x000107c44f60();
  func_0x000107c61180();
  uVar1 = uVar10;
  func_0x0001000bda74();
  func_0x000107c61170(uVar10);
  uVar10 = *(undefined8 *)(lVar9 + _DAT_11308d048);
  lVar4 = 0;
  func_0x0001019148c0();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar9 = _DAT_112dd29e0;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  puStack_68 = puVar6;
  func_0x0001000285a8(0x112dd29d8,&UNK_10d994ed0);
  func_0x000107c613fc();
  ppuVar7 = &puStack_68;
  func_0x00010006c248();
  *(undefined ***)(lVar5 + lVar9) = ppuVar7;
  *(undefined8 *)(lVar5 + _DAT_112dd29e8) = uVar2;
  *(undefined8 *)(lVar5 + _DAT_112dd29f0) = uVar3;
  *(undefined8 *)(lVar5 + _DAT_112dd29f8) = uVar1;
  *(undefined8 *)(lVar5 + _DAT_112dd2a00) = uVar10;
  puVar6 = PTR_s_init_1125d9248;
  lStack_78 = lVar5;
  lStack_70 = lVar4;
  func_0x000107c6157c(uVar10);
  plVar8 = &lStack_78;
  func_0x000107c61154(plVar8,puVar6);
  *param_1 = (long)plVar8;
  return;
}



/* Entry: 10191835c; end: 1019183c7;  */

long FUN_10191835c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x000100459cb8();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  func_0x00010045a2b0();
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  return unaff_x20;
}



/* Entry: 1019183c8; end: 1019183f3;  */

void FUN_1019183c8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019183f4; end: 101918437;  */

undefined1  [16] FUN_1019183f4(void)

{
  return ZEXT816(0x110411f28);
}



/* Entry: 101918438; end: 10191848b;  */

void FUN_101918438(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10191848c; end: 101918977;  */

long FUN_10191848c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  *(undefined8 *)(unaff_x20 + 0x50) = param_8;
  puVar2 = PTR_PTR_1126a7200;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  puVar3 = PTR_PTR_1126a7dc0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef234e0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_4);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efbb890);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_6);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_7);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(param_8);
  func_0x000107c61174(puVar3);
  uVar4 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efb7000);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar4);
  func_0x000107c61174(puVar3);
  func_0x000107c61174();
  uVar4 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efc0730);
  func_0x000107c5a49c(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c3e740(puVar3);
  func_0x000107c52018();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c61170(param_8);
    *(undefined **)(unaff_x20 + 0x58) = puVar2;
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101918978);
  (*pcVar1)();
}



/* Entry: 101918978; end: 1019189fb;  */

void FUN_101918978(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 1019189fc; end: 101918a4b;  */

undefined8 FUN_1019189fc(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101918a4c; end: 101918a8f;  */

undefined1  [16] FUN_101918a4c(void)

{
  return ZEXT816(0x110412070);
}



/* Entry: 101918a90; end: 101918ab7;  */

void FUN_101918a90(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101918ab8; end: 101918abf;  */

undefined8 FUN_101918ab8(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101918ac0; end: 1019190cb;  */

long FUN_101918ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  *(undefined8 *)(unaff_x20 + 0x50) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_9;
  *(undefined8 *)(unaff_x20 + 0x60) = param_10;
  func_0x0001000285a8(0x112dd2e10,&UNK_10dab8500);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  uVar3 = param_11;
  func_0x000107c6157c(param_11);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar3);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar2 = PTR_PTR_1126a7dc8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar3 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef234e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar3 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar2);
  uVar3 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_6);
  func_0x000107c61174(puVar2);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efbb890);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_7);
  func_0x000107c61174(puVar2);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_8);
  func_0x000107c61174(puVar2);
  uVar3 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010efb7000);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_9);
  func_0x000107c61174(puVar2);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010efc0750);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efc0770);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc0790);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61574(param_11);
  return unaff_x20;
}



/* Entry: 1019190cc; end: 101919157;  */

void FUN_1019190cc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 101919158; end: 1019191a7;  */

undefined8 FUN_101919158(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1019191a8; end: 1019191e3;  */

undefined1  [16] FUN_1019191a8(void)

{
  return ZEXT816(0x110412138);
}



/* Entry: 1019191e4; end: 10191926b;  */

void FUN_1019191e4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  func_0x000100208ce4();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_101919350(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 10191926c; end: 101919273;  */

void FUN_10191926c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_40);
  func_0x000100208ce4();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_101919350(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 101919274; end: 1019192d3;  */

undefined8 FUN_101919274(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_101919350(param_1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 1019192d4; end: 1019192ff;  */

void FUN_1019192d4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101919300; end: 10191934f;  */

undefined8 FUN_101919300(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101919350; end: 10191947b;  */

void FUN_101919350(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a7dd0;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10191947c; end: 1019194af;  */

undefined1  [16] FUN_10191947c(void)

{
  return ZEXT816(0x1104121e0);
}



/* Entry: 1019194b0; end: 1019194d7;  */

void FUN_1019194b0(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 1019194d8; end: 1019194df;  */

undefined8 FUN_1019194d8(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 1019194e0; end: 101919533;  */

undefined8 FUN_1019194e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x000100b8acf4(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 101919534; end: 10191956f;  */

void FUN_101919534(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101919570; end: 1019195b3;  */

undefined1  [16] FUN_101919570(void)

{
  return ZEXT816(0x110412360);
}



/* Entry: 1019195b4; end: 101919607;  */

void FUN_1019195b4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101919608; end: 1019196bf;  */

long FUN_101919608(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  func_0x0001003d3580(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001003d35fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x0001003d3624();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  return unaff_x20;
}



/* Entry: 1019196c0; end: 1019196f3;  */

void FUN_1019196c0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1019196f4; end: 101919737;  */

undefined1  [16] FUN_1019196f4(void)

{
  return ZEXT816(0x110412428);
}



/* Entry: 101919738; end: 10191978b;  */

void FUN_101919738(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10191978c; end: 1019198d7;  */

long FUN_10191978c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  func_0x000100b8afd4(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100b8b054();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  func_0x000100b8b09c();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  return unaff_x20;
}



/* Entry: 1019198d8; end: 101919923;  */

void FUN_1019198d8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101919924; end: 101919967;  */

undefined1  [16] FUN_101919924(void)

{
  return ZEXT816(0x1104124f0);
}


