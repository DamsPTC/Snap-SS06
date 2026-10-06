/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1020a19b8; end: 1020a19bf;  */

undefined8 * FUN_1020a19b8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 1020a19c0; end: 1020a19f7;  */

void FUN_1020a19c0(void)

{
  undefined *puStack_28;
  
  puStack_28 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001006c71a4(&puStack_28);
  return;
}



/* Entry: 1020a19f8; end: 1020a19fb;  */

void FUN_1020a19f8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long *plVar9;
  long unaff_x20;
  undefined *puVar10;
  long *plVar11;
  undefined *puStack_58;
  
  func_0x0001000285a8(0x112d5ec78,&UNK_10d9a0280);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c43ca8(uVar2);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x0001000b637c();
  func_0x000107c61170(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x000107c610f8();
  func_0x000107c453e4();
  ppuVar5 = &puStack_58;
  puStack_58 = puVar4;
  func_0x0001006c71a4(ppuVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61574(uVar3);
  func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
  puVar10 = *(undefined **)(unaff_x20 + 0x28);
  puVar4 = puVar10;
  func_0x000107c43aa8(puVar10);
  func_0x000107c61180();
  puVar6 = puVar4;
  func_0x0001000b637c();
  func_0x000107c61170(puVar4);
  func_0x000107c43aa4();
  func_0x000107c61180();
  if (puVar10 != (undefined *)0x0) {
    ppuVar7 = &puStack_58;
    puStack_58 = puVar10;
    func_0x0001006c71a4(ppuVar7);
    func_0x000107c61170(puVar10);
    func_0x000107c61574(puVar6);
    ppuVar8 = ppuVar7;
    func_0x0001006c733c(ppuVar7);
    plVar11 = *(long **)(unaff_x20 + 0x38);
    plVar9 = plVar11;
    func_0x000107c615f0();
    func_0x000100471e0c();
    func_0x000107c61574(ppuVar8);
    func_0x000107c615e8(plVar11);
    puVar4 = &UNK_1104c6870;
    func_0x000107c613fc(&UNK_1104c6870,0x18,7);
    func_0x000107c61644(puVar4 + 0x10);
    uVar3 = 0x1020a2a74;
    puVar6 = puVar4;
    (**(code **)(*plVar9 + 0x60))();
    func_0x000107c61574(plVar9);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(ppuVar5);
    func_0x000107c61574(ppuVar7);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
    *(undefined8 *)(unaff_x20 + 0x40) = uVar3;
    *(undefined **)(unaff_x20 + 0x48) = puVar6;
    func_0x000107c615e8(uVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020a1bd0);
  (*pcVar1)();
}



/* Entry: 1020a19fc; end: 1020a1bcf;  */

void FUN_1020a19fc(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long *plVar9;
  long unaff_x20;
  undefined *puVar10;
  long *plVar11;
  undefined *puStack_58;
  
  func_0x0001000285a8(0x112d5ec78,&UNK_10d9a0280);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c43ca8(uVar2);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x0001000b637c();
  func_0x000107c61170(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x000107c610f8();
  func_0x000107c453e4();
  ppuVar5 = &puStack_58;
  puStack_58 = puVar4;
  func_0x0001006c71a4(ppuVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61574(uVar3);
  func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
  puVar10 = *(undefined **)(unaff_x20 + 0x28);
  puVar4 = puVar10;
  func_0x000107c43aa8(puVar10);
  func_0x000107c61180();
  puVar6 = puVar4;
  func_0x0001000b637c();
  func_0x000107c61170(puVar4);
  func_0x000107c43aa4();
  func_0x000107c61180();
  if (puVar10 != (undefined *)0x0) {
    ppuVar7 = &puStack_58;
    puStack_58 = puVar10;
    func_0x0001006c71a4(ppuVar7);
    func_0x000107c61170(puVar10);
    func_0x000107c61574(puVar6);
    ppuVar8 = ppuVar7;
    func_0x0001006c733c(ppuVar7);
    plVar11 = *(long **)(unaff_x20 + 0x38);
    plVar9 = plVar11;
    func_0x000107c615f0();
    func_0x000100471e0c();
    func_0x000107c61574(ppuVar8);
    func_0x000107c615e8(plVar11);
    puVar4 = &UNK_1104c6870;
    func_0x000107c613fc(&UNK_1104c6870,0x18,7);
    func_0x000107c61644(puVar4 + 0x10);
    uVar3 = 0x1020a2a74;
    puVar6 = puVar4;
    (**(code **)(*plVar9 + 0x60))();
    func_0x000107c61574(plVar9);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(ppuVar5);
    func_0x000107c61574(ppuVar7);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
    *(undefined8 *)(unaff_x20 + 0x40) = uVar3;
    *(undefined **)(unaff_x20 + 0x48) = puVar6;
    func_0x000107c615e8(uVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020a1bd0);
  (*pcVar1)();
}



/* Entry: 1020a1bd0; end: 1020a1bd3;  */

/* WARNING: Possible PIC construction at 0x0001020a1c8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020a1c90) */

void FUN_1020a1bd0(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  code *pcVar5;
  
  lVar3 = *(long *)(unaff_x20 + 0x60);
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c6157c(lVar3);
    uVar1 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c5fd50(lVar3,PTR___sytN_11034f1b0 + 8,uVar1,PTR___ss5ErrorWS_11034ee10);
    func_0x000107c61574(lVar3);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x60);
  }
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  func_0x000107c61574(uVar1);
  lVar3 = *(long *)(unaff_x20 + 0x40);
  if (lVar3 == 0) {
    lVar3 = 0;
    *(long *)(unaff_x20 + 0x40) = 0;
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
  }
  else {
    lVar4 = *(long *)(unaff_x20 + 0x48);
    lVar2 = lVar3;
    func_0x000107c614f0(lVar3);
    pcVar5 = *(code **)(lVar4 + 8);
    func_0x000107c615f0(lVar3);
    (*pcVar5)(lVar2,lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
  return;
}



/* Entry: 1020a1bd4; end: 1020a1cb7;  */

/* WARNING: Possible PIC construction at 0x0001020a1c8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020a1c90) */

void FUN_1020a1bd4(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  code *pcVar5;
  
  lVar3 = *(long *)(unaff_x20 + 0x60);
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c6157c(lVar3);
    uVar1 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c5fd50(lVar3,PTR___sytN_11034f1b0 + 8,uVar1,PTR___ss5ErrorWS_11034ee10);
    func_0x000107c61574(lVar3);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x60);
  }
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  func_0x000107c61574(uVar1);
  lVar3 = *(long *)(unaff_x20 + 0x40);
  if (lVar3 == 0) {
    lVar3 = 0;
    *(long *)(unaff_x20 + 0x40) = 0;
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
  }
  else {
    lVar4 = *(long *)(unaff_x20 + 0x48);
    lVar2 = lVar3;
    func_0x000107c614f0(lVar3);
    pcVar5 = *(code **)(lVar4 + 8);
    func_0x000107c615f0(lVar3);
    (*pcVar5)(lVar2,lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
  return;
}



/* Entry: 1020a1cb8; end: 1020a1db3;  */

undefined8 FUN_1020a1cb8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  ulong uVar14;
  long *plVar15;
  
  uVar9 = *param_1;
  uVar10 = param_1[2];
  uVar7 = param_1[3];
  uVar11 = param_1[4];
  uVar1 = param_1[5];
  uVar4 = param_1[6];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  uVar14 = param_2[6];
  if (((((uVar9 != *param_2) || (param_1[1] != param_2[1])) &&
       (func_0x000107c605b8(), (uVar9 & 1) == 0)) ||
      (((uVar10 != uVar2 || (uVar7 != uVar5)) &&
       (func_0x000107c605b8(uVar10,uVar7,uVar2,uVar5,0), (uVar10 & 1) == 0)))) ||
     (((uVar11 != uVar3 || (uVar1 != uVar6)) &&
      (func_0x000107c605b8(uVar11,uVar1,uVar3,uVar6,0), (uVar11 & 1) == 0)))) {
    return 0;
  }
  lVar12 = *(long *)(uVar4 + 0x10);
  if (lVar12 == *(long *)(uVar14 + 0x10)) {
    if ((lVar12 != 0) && (uVar4 != uVar14)) {
      plVar13 = (long *)(uVar14 + 0x28);
      plVar15 = (long *)(uVar4 + 0x28);
      do {
        uVar7 = plVar15[-1];
        if ((uVar7 != plVar13[-1] || *plVar15 != *plVar13) &&
           (func_0x000107c605b8(), (uVar7 & 1) == 0)) goto code_r0x00010142d02c;
        plVar13 = plVar13 + 2;
        plVar15 = plVar15 + 2;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    uVar8 = 1;
  }
  else {
code_r0x00010142d02c:
    uVar8 = 0;
  }
  return uVar8;
}



/* Entry: 1020a1db4; end: 1020a1dfb;  */

uint FUN_1020a1db4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  FUN_1020a9ad8(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1020a1dfc; end: 1020a1f5f;  */

void FUN_1020a1dfc(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *apuStack_58 [3];
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  apuStack_58[0] = (undefined *)0x0;
  uVar2 = 0;
  func_0x0001020ab630(0,0x112e561b8,&PTR_PTR_1126da5b0);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c5f9e4(uVar3,apuStack_58,PTR___sSSN_11034da80,uVar2,PTR___sSSSHsWP_11034da90);
  puVar5 = apuStack_58[0];
  if (apuStack_58[0] == (undefined *)0x0) {
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_1020aa328(PTR___swiftEmptyArrayStorage_11034f1c8,0x112e56208,&UNK_10da58d90);
  }
  apuStack_58[0] = (undefined *)0x0;
  uVar2 = 0;
  func_0x0001020ab630(0,0x112d61f70,&PTR_PTR_1126b14e0);
  func_0x000107c5fc50(uVar4,apuStack_58,uVar2);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (apuStack_58[0] != (undefined *)0x0) {
    puVar1 = apuStack_58[0];
  }
  func_0x000107c61428(param_2 + 0x10,apuStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    func_0x000107c6142c(puVar5);
    func_0x000107c6142c(puVar1);
  }
  else {
    FUN_1020a1f60(puVar5,puVar1);
    func_0x000107c6142c(puVar5);
    func_0x000107c6142c(puVar1);
    func_0x000107c61574(param_2);
  }
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 1020a1f60; end: 1020a257f;  */

/* WARNING: Possible PIC construction at 0x0001020a2038: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020a2144: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020a23e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020a24d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020a2330: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020a24dc) */
/* WARNING: Removing unreachable block (ram,0x0001020a23e4) */
/* WARNING: Removing unreachable block (ram,0x0001020a2434) */
/* WARNING: Removing unreachable block (ram,0x0001020a23ec) */
/* WARNING: Removing unreachable block (ram,0x0001020a2448) */
/* WARNING: Removing unreachable block (ram,0x0001020a2430) */
/* WARNING: Removing unreachable block (ram,0x0001020a203c) */
/* WARNING: Removing unreachable block (ram,0x0001020a2064) */
/* WARNING: Removing unreachable block (ram,0x0001020a2070) */
/* WARNING: Removing unreachable block (ram,0x0001020a20cc) */
/* WARNING: Removing unreachable block (ram,0x0001020a2078) */
/* WARNING: Removing unreachable block (ram,0x0001020a20d4) */
/* WARNING: Removing unreachable block (ram,0x0001020a2148) */
/* WARNING: Removing unreachable block (ram,0x0001020a2180) */
/* WARNING: Removing unreachable block (ram,0x0001020a256c) */
/* WARNING: Removing unreachable block (ram,0x0001020a218c) */
/* WARNING: Removing unreachable block (ram,0x0001020a2570) */
/* WARNING: Removing unreachable block (ram,0x0001020a21a0) */
/* WARNING: Removing unreachable block (ram,0x0001020a21b4) */
/* WARNING: Removing unreachable block (ram,0x0001020a21d0) */
/* WARNING: Removing unreachable block (ram,0x0001020a21d4) */
/* WARNING: Removing unreachable block (ram,0x0001020a21c4) */
/* WARNING: Removing unreachable block (ram,0x0001020a2200) */
/* WARNING: Removing unreachable block (ram,0x0001020a2578) */
/* WARNING: Removing unreachable block (ram,0x0001020a2210) */
/* WARNING: Removing unreachable block (ram,0x0001020a2234) */
/* WARNING: Removing unreachable block (ram,0x0001020a257c) */
/* WARNING: Removing unreachable block (ram,0x0001020a2240) */
/* WARNING: Removing unreachable block (ram,0x0001020a21cc) */
/* WARNING: Removing unreachable block (ram,0x0001020a2164) */
/* WARNING: Removing unreachable block (ram,0x0001020a2574) */
/* WARNING: Removing unreachable block (ram,0x0001020a2170) */
/* WARNING: Removing unreachable block (ram,0x0001020a2248) */
/* WARNING: Removing unreachable block (ram,0x0001020a233c) */
/* WARNING: Removing unreachable block (ram,0x0001020a2264) */
/* WARNING: Removing unreachable block (ram,0x0001020a234c) */
/* WARNING: Removing unreachable block (ram,0x0001020a2374) */
/* WARNING: Removing unreachable block (ram,0x0001020a23b0) */
/* WARNING: Removing unreachable block (ram,0x0001020a2394) */
/* WARNING: Removing unreachable block (ram,0x0001020a23ac) */
/* WARNING: Removing unreachable block (ram,0x0001020a23d0) */
/* WARNING: Removing unreachable block (ram,0x0001020a22a4) */
/* WARNING: Removing unreachable block (ram,0x0001020a210c) */
/* WARNING: Removing unreachable block (ram,0x0001020a20b4) */
/* WARNING: Removing unreachable block (ram,0x0001020a2334) */

void FUN_1020a1f60(undefined8 *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puVar6;
  long lVar7;
  undefined *puStack_90;
  undefined *apuStack_88 [5];
  
  FUN_1020aa420();
  lVar7 = param_1[2];
  if (lVar7 != 0) {
    apuStack_88[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100403514(0,lVar7,0);
    puVar6 = apuStack_88[0];
    do {
      uVar5 = param_1[6];
      uVar2 = param_1[7];
      uVar1 = *(ulong *)(puVar6 + 0x10);
      uVar3 = *(ulong *)(puVar6 + 0x18);
      apuStack_88[0] = puVar6;
      func_0x000107c61434(uVar2);
      if (uVar3 >> 1 <= uVar1) {
        func_0x000100403514(1 < uVar3,uVar1 + 1,1);
        puVar6 = apuStack_88[0];
      }
      *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar6 + uVar1 * 0x10 + 0x20) = uVar5;
      *(undefined8 *)(puVar6 + uVar1 * 0x10 + 0x28) = uVar2;
      lVar7 = lVar7 + -1;
      param_1 = param_1 + 7;
    } while (lVar7 != 0);
    func_0x000100403a6c(puVar6);
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(puVar6);
    return;
  }
  func_0x000107c6142c(param_1);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((*(long *)(unaff_x20 + 0x50) != 0) && (*(long *)(*(long *)(unaff_x20 + 0x50) + 0x10) != 0)) {
    *(undefined **)(unaff_x20 + 0x50) = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c6142c();
    puVar6 = puVar4;
    func_0x0001020aa1e8();
    uVar5 = *(undefined8 *)(unaff_x20 + 0x58);
    *(undefined **)(unaff_x20 + 0x58) = puVar6;
    func_0x000107c6142c(uVar5);
    puVar6 = *(undefined **)(unaff_x20 + 0x60);
    if (puVar6 != (undefined *)0x0) {
      func_0x000107c6157c(puVar6);
      uVar5 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c5fd50(puVar6,PTR___sytN_11034f1b0 + 8,uVar5,PTR___ss5ErrorWS_11034ee10);
      goto code_r0x000107c61574;
    }
    *(undefined8 *)(unaff_x20 + 0x60) = 0;
    func_0x000107c61574(0);
    puVar6 = puVar4;
    func_0x0001020a9e88();
    func_0x000107c61428(unaff_x20 + 0x68,apuStack_88,1,0);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x68);
    *(undefined **)(unaff_x20 + 0x68) = puVar6;
    func_0x000107c6142c(uVar5);
    puStack_90 = puVar4;
    func_0x000100087c34(&puStack_90);
  }
  return;
}



/* Entry: 1020a2580; end: 1020a262f;  */

void FUN_1020a2580(void)

{
  long unaff_x20;
  
  FUN_1020a1bd4();
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 1020a2630; end: 1020a265f;  */

/* WARNING: Possible PIC construction at 0x0001020a2644: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020a2648) */

void FUN_1020a2630(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1020a2660; end: 1020a2737;  */

undefined8 * FUN_1020a2660(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[4];
  param_1[4] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 1020a2738; end: 1020a278b;  */

undefined8 * FUN_1020a2738(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  func_0x000107c6142c(param_1[3]);
  uVar2 = param_1[4];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1020a278c; end: 1020a282b;  */

int FUN_1020a278c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1020a282c; end: 1020a2863;  */

/* WARNING: Possible PIC construction at 0x0001020a2840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020a2850: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020a2844) */
/* WARNING: Removing unreachable block (ram,0x0001020a2854) */

void FUN_1020a282c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 1020a2864; end: 1020a296b;  */

undefined8 * FUN_1020a2864(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[6];
  param_1[6] = uVar3;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 1020a296c; end: 1020a29cf;  */

undefined8 * FUN_1020a296c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[4] = param_2[4];
  func_0x000107c6142c(param_1[5]);
  uVar2 = param_1[6];
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 1020a29d0; end: 1020a2a7b;  */

int FUN_1020a29d0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1020a2a7c; end: 1020a3007;  */

undefined * FUN_1020a2a7c(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 unaff_x20;
  ulong uVar22;
  ulong uVar23;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  code *pcStack_128;
  undefined *puStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined *puStack_80;
  
  lVar19 = *(long *)(param_2 + 0x10);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar10 = param_2;
  func_0x0001020aa1e8();
  if (lVar19 != 0) {
    if (param_1 >> 0x3e == 0) {
      uVar20 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar20 = param_1 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_1) {
        uVar20 = param_1;
      }
      func_0x000107c60480();
    }
    if (uVar20 != 0) {
      puStack_150 = (undefined *)0x0;
      uStack_148 = 0;
      puStack_140 = (undefined *)0x0;
      pcStack_138 = (code *)0x0;
      puStack_130 = (undefined *)0x0;
      pcStack_128 = (code *)0x0;
      uVar22 = 0;
      do {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1020a2fec);
            (*pcVar4)();
          }
          uVar7 = *(ulong *)(param_1 + 0x20 + uVar22 * 8);
          func_0x000107c61174();
        }
        else {
          uVar7 = uVar22;
          uVar10 = param_1;
          FUN_1020a4b64(uVar22,param_1,&PTR_PTR_1126b14e0,0x112d61f70);
        }
        bVar5 = SCARRY8(uVar22,1);
        uVar22 = uVar22 + 1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1020a2fe8);
          (*pcVar4)();
        }
        uVar18 = uVar7;
        func_0x000107c3d15c();
        func_0x000107c61180();
        uVar21 = uVar10;
        if (uVar18 == 0) {
LAB_1020a2be4:
          uVar10 = uVar7;
          func_0x000107c42f24();
          func_0x000107c61180();
          uVar9 = uVar10;
          func_0x000107c5faec();
          uVar8 = uVar21;
          func_0x000107c61170(uVar10);
          uVar23 = uVar21;
        }
        else {
          uVar8 = uVar18;
          func_0x000107c40674();
          func_0x000107c61180();
          func_0x000107c61170(uVar18);
          uVar9 = uVar8;
          func_0x000107c5faec();
          uVar21 = uVar10;
          func_0x000107c61170(uVar8);
          uVar18 = uVar9 & 0xffffffffffff;
          if ((uVar10 & 0x2000000000000000) != 0) {
            uVar18 = uVar10 >> 0x38 & 0xf;
          }
          uVar8 = uVar21;
          uVar23 = uVar10;
          if (uVar18 == 0) {
            func_0x000107c6142c(uVar10);
            goto LAB_1020a2be4;
          }
        }
        uVar10 = uVar9;
        if (*(long *)(param_2 + 0x10) != 0) {
          func_0x000107c6068c(&puStack_e8,*(undefined8 *)(param_2 + 0x28));
          ppuVar11 = &puStack_e8;
          uVar8 = uVar10;
          func_0x000107c5fb58(ppuVar11,uVar10,uVar23);
          func_0x000107c606a8();
          uVar18 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
          uVar21 = (ulong)ppuVar11 & (uVar18 ^ 0xffffffffffffffff);
          if ((*(ulong *)(param_2 + 0x38 + (uVar21 >> 6) * 8) >> (uVar21 & 0x3f) & 1) != 0) {
            do {
              puVar1 = (ulong *)(*(long *)(param_2 + 0x30) + uVar21 * 0x10);
              uVar9 = *puVar1;
              uVar8 = puVar1[1];
              if ((uVar9 == uVar10 && uVar8 == uVar23) ||
                 (func_0x000107c605b8(uVar9,uVar8,uVar10,uVar23,0), (uVar9 & 1) != 0)) {
                uStack_f8 = 0;
                uStack_f0 = 0;
                uStack_108 = 0;
                uStack_100 = 0;
                puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
                func_0x0001001830b8();
                uVar18 = uVar7;
                puStack_110 = puVar12;
                func_0x000107c42924();
                func_0x000107c61180();
                puVar12 = &UNK_1104c6938;
                func_0x000107c613fc(&UNK_1104c6938,0x28,7);
                *(undefined8 **)(puVar12 + 0x10) = &uStack_f8;
                *(ulong **)(puVar12 + 0x18) = &uStack_108;
                *(undefined8 *)(puVar12 + 0x20) = unaff_x20;
                func_0x000100ce0c94(uStack_148,puStack_150);
                puVar13 = &UNK_1104c6960;
                func_0x000107c613fc(&UNK_1104c6960,0x20,7);
                *(undefined8 *)(puVar13 + 0x10) = 0x1020ab1fc;
                *(undefined **)(puVar13 + 0x18) = puVar12;
                puVar16 = PTR___NSConcreteStackBlock_11034bd00;
                pcStack_c8 = FUN_1020ab208;
                puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_e0 = 0x42000000;
                pcStack_d8 = (code *)&UNK_10117dba4;
                puStack_d0 = &UNK_1104c6978;
                ppuVar11 = &puStack_e8;
                puStack_c0 = puVar13;
                func_0x000107c60bc4(ppuVar11);
                func_0x000107c61574(puStack_c0);
                puVar13 = &UNK_1104c69b0;
                func_0x000107c613fc(&UNK_1104c69b0,0x28,7);
                *(undefined ***)(puVar13 + 0x10) = &puStack_110;
                *(undefined8 **)(puVar13 + 0x18) = &uStack_f8;
                *(undefined8 *)(puVar13 + 0x20) = unaff_x20;
                func_0x000100ce0c94(pcStack_138,puStack_140);
                puVar14 = &UNK_1104c69d8;
                func_0x000107c613fc(&UNK_1104c69d8,0x20,7);
                *(code **)(puVar14 + 0x10) = FUN_1020ab228;
                *(undefined **)(puVar14 + 0x18) = puVar13;
                pcStack_c8 = FUN_1020ab234;
                puStack_e8 = puVar16;
                uStack_e0 = 0x42000000;
                pcStack_d8 = (code *)&UNK_10117dc68;
                puStack_d0 = &UNK_1104c69f0;
                ppuVar15 = &puStack_e8;
                puStack_c0 = puVar14;
                func_0x000107c60bc4(ppuVar15);
                func_0x000107c61574(puStack_c0);
                puVar14 = &UNK_1104c6a28;
                func_0x000107c613fc(&UNK_1104c6a28,0x20,7);
                *(undefined8 **)(puVar14 + 0x10) = &uStack_f8;
                *(undefined8 *)(puVar14 + 0x18) = unaff_x20;
                func_0x000100ce0c94(pcStack_128,puStack_130);
                puVar16 = &UNK_1104c6a50;
                func_0x000107c613fc(&UNK_1104c6a50,0x20,7);
                *(code **)(puVar16 + 0x10) = FUN_1020ab254;
                *(undefined **)(puVar16 + 0x18) = puVar14;
                pcStack_c8 = (code *)0x1020ab68c;
                puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_e0 = 0x42000000;
                pcStack_d8 = FUN_1020ab670;
                puStack_d0 = &UNK_1104c6a68;
                ppuVar17 = &puStack_e8;
                puStack_c0 = puVar16;
                func_0x000107c60bc4(ppuVar17);
                func_0x000107c61574(puStack_c0);
                func_0x000107c4c728(uVar18);
                func_0x000107c60bd0(ppuVar17);
                func_0x000107c60bd0(ppuVar15);
                func_0x000107c60bd0(ppuVar11);
                func_0x000107c61170(uVar18);
                uVar3 = uStack_f0;
                uVar2 = uStack_f8;
                uVar18 = uStack_108;
                if (uStack_100 == 0) {
                  uVar18 = 0;
                  uStack_88 = uStack_100;
                }
                else {
                  uVar21 = uStack_108 & 0xffffffffffff;
                  if ((uStack_100 & 0x2000000000000000) != 0) {
                    uVar21 = uStack_100 >> 0x38 & 0xf;
                  }
                  if (uVar21 == 0) {
                    uVar18 = 0;
                    uStack_88 = 0;
                  }
                  else {
                    uVar21 = uStack_100;
                    func_0x000107c61434();
                    uStack_88 = uVar21;
                  }
                }
                puVar16 = puStack_110;
                uStack_a0 = uVar2;
                uStack_98 = uVar3;
                puStack_80 = puStack_110;
                uStack_90 = uVar18;
                func_0x000107c61434(uVar3);
                func_0x000107c61434(puVar16);
                puVar16 = puVar6;
                func_0x000107c61558(puVar6);
                puStack_e8 = puVar6;
                FUN_1020a82d8(&uStack_a0,uVar10,uVar23,puVar16);
                func_0x000107c6142c(uVar23);
                func_0x000107c61170(uVar7);
                puVar6 = puStack_e8;
                func_0x000107c6142c(puStack_110);
                func_0x000107c6142c(uStack_100);
                func_0x000107c6142c(uStack_f0);
                uStack_148 = 0x1020ab1fc;
                pcStack_138 = FUN_1020ab228;
                pcStack_128 = FUN_1020ab254;
                puStack_150 = puVar12;
                puStack_140 = puVar13;
                puStack_130 = puVar14;
                goto LAB_1020a2b24;
              }
              uVar21 = uVar21 + 1 & ~uVar18;
            } while ((*(ulong *)(param_2 + 0x38 + (uVar21 >> 6) * 8) >> (uVar21 & 0x3f) & 1) != 0);
          }
        }
        uVar10 = uVar8;
        func_0x000107c61170(uVar7);
        func_0x000107c6142c(uVar23);
LAB_1020a2b24:
      } while (uVar22 != uVar20);
      func_0x000100ce0c94(uStack_148,puStack_150);
      func_0x000100ce0c94(pcStack_138,puStack_140);
      func_0x000100ce0c94(pcStack_128,puStack_130);
    }
  }
  return puVar6;
}



/* Entry: 1020a3008; end: 1020a3027;  */

void FUN_1020a3008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1e8) = param_5;
  *(undefined8 *)(unaff_x22 + 0x1f0) = param_6;
  *(undefined8 *)(unaff_x22 + 0x1d8) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1e0) = param_4;
  *(undefined8 *)(unaff_x22 + 0x1d0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020a3028,0,0);
  return;
}



/* Entry: 1020a3028; end: 1020a30bf;  */

void FUN_1020a3028(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x1d0);
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x1b0,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  *(long *)(unaff_x22 + 0x1f8) = lVar1;
  if (lVar1 != 0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x150;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1020a30c0;
    func_0x000107c61448(unaff_x22 + 0x10,0);
    FUN_1020a3e38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001020a30bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1020a30c0; end: 1020a30ff;  */

void FUN_1020a30c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020a3100,0,0);
  return;
}



/* Entry: 1020a3100; end: 1020a322b;  */

/* WARNING: Removing unreachable block (ram,0x0001020a3138) */

void FUN_1020a3100(void)

{
  char *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x22;
  long lVar5;
  undefined8 uVar6;
  
  *(undefined8 *)(unaff_x22 + 0x200) = *(undefined8 *)(unaff_x22 + 0x150);
  func_0x000107c5fd64();
  *(undefined8 *)(unaff_x22 + 0x208) = 0;
  lVar5 = *(long *)(unaff_x22 + 0x1f8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1e0);
  pcVar1 = "fetchLensMetadata(_:)";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(char **)(unaff_x22 + 0x210) = pcVar1;
  *(long *)(unaff_x22 + 0x78) = unaff_x22 + 0x150;
  *(long *)(unaff_x22 + 0x50) = unaff_x22;
  *(code **)(unaff_x22 + 0x58) = FUN_1020a322c;
  lVar2 = unaff_x22 + 0x50;
  func_0x000107c61448(lVar2,0);
  func_0x000103b90f24(0);
  uVar6 = *(undefined8 *)(lVar5 + 0x18);
  puVar3 = &UNK_1104c68c0;
  func_0x000107c613fc(&UNK_1104c68c0,0x18,7);
  *(long *)(puVar3 + 0x10) = lVar2;
  func_0x000103b8f19c(uVar4,uVar6,pcVar1,FUN_1020aa8b4,puVar3);
  func_0x000107c61574(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x50);
  return;
}



/* Entry: 1020a322c; end: 1020a326b;  */

void FUN_1020a322c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020a326c,0,0);
  return;
}



/* Entry: 1020a326c; end: 1020a37d7;  */

/* WARNING: Possible PIC construction at 0x0001020a32b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020a32b8) */
/* WARNING: Removing unreachable block (ram,0x0001020a3740) */

void FUN_1020a326c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x22;
  long lVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined *puStack_78;
  undefined *apuStack_68 [2];
  
  lVar12 = *(long *)(unaff_x22 + 0x208);
  func_0x000107c615e8(*(undefined8 *)(unaff_x22 + 0x210));
  lVar16 = *(long *)(unaff_x22 + 0x150);
  func_0x000107c5fd64();
  if (lVar12 != 0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1f8);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x200));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  lVar13 = *(long *)(unaff_x22 + 0x1e8);
  lVar12 = *(long *)(lVar13 + 0x10);
  if (lVar12 == 0) {
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x200));
    func_0x000107c6142c(lVar16);
    puVar20 = *(undefined **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar3 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar20 == (undefined *)0x0) goto LAB_1020a3714;
  }
  else {
    puVar10 = (undefined8 *)(unaff_x22 + 0x118);
    lVar7 = *(long *)(unaff_x22 + 0x1f0);
    apuStack_68[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_1020a5720(0,lVar12,0);
    puVar14 = (undefined8 *)(lVar13 + 0x20);
    lVar9 = lVar12;
    do {
      puVar20 = apuStack_68[0];
      uVar4 = puVar14[1];
      uVar2 = *puVar14;
      uVar17 = puVar14[3];
      uVar18 = puVar14[2];
      uVar21 = puVar14[5];
      uVar19 = puVar14[4];
      *(undefined8 *)(unaff_x22 + 0x148) = puVar14[6];
      *(undefined8 *)(unaff_x22 + 0x130) = uVar17;
      *(undefined8 *)(unaff_x22 + 0x128) = uVar18;
      *(undefined8 *)(unaff_x22 + 0x140) = uVar21;
      *(undefined8 *)(unaff_x22 + 0x138) = uVar19;
      *(undefined8 *)(unaff_x22 + 0x120) = uVar4;
      *puVar10 = uVar2;
      if ((lVar16 == 0) || (*(long *)(lVar16 + 0x10) == 0)) {
        FUN_1020aae64(puVar10,unaff_x22 + 0x150);
LAB_1020a33b4:
        uVar2 = 0;
      }
      else {
        lVar1 = *(long *)(unaff_x22 + 0x138);
        uVar5 = *(ulong *)(unaff_x22 + 0x140);
        FUN_1020aae64(puVar10,unaff_x22 + 0x150);
        func_0x000107c61434(lVar16);
        func_0x000100029284();
        if ((uVar5 & 1) == 0) {
          func_0x000107c6142c(lVar16);
          goto LAB_1020a33b4;
        }
        uVar2 = *(undefined8 *)(*(long *)(lVar16 + 0x38) + lVar1 * 8);
        func_0x000107c61174(uVar2);
        func_0x000107c6142c(lVar16);
      }
      if (*(long *)(lVar7 + 0x10) == 0) {
        uVar4 = 0;
        uVar17 = 0;
        uVar18 = 0;
        uVar19 = 0;
        uVar21 = 0;
      }
      else {
        lVar1 = *(long *)(unaff_x22 + 0x128);
        uVar5 = *(ulong *)(unaff_x22 + 0x130);
        func_0x000107c61434(*(undefined8 *)(unaff_x22 + 0x1f0));
        func_0x000100029284();
        if ((uVar5 & 1) == 0) {
          uVar4 = 0;
          uVar17 = 0;
          uVar18 = 0;
          uVar19 = 0;
          uVar21 = 0;
        }
        else {
          puVar8 = (undefined8 *)(*(long *)(lVar7 + 0x38) + lVar1 * 0x28);
          uVar4 = *puVar8;
          uVar17 = puVar8[1];
          uVar18 = puVar8[2];
          uVar19 = puVar8[3];
          uVar21 = puVar8[4];
          func_0x000107c61434(uVar19);
          func_0x000107c61434(uVar21);
          func_0x000107c61434(uVar17);
        }
        func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x1f0));
      }
      *(undefined8 *)(unaff_x22 + 0x188) = uVar4;
      *(undefined8 *)(unaff_x22 + 400) = uVar17;
      *(undefined8 *)(unaff_x22 + 0x198) = uVar18;
      *(undefined8 *)(unaff_x22 + 0x1a0) = uVar19;
      *(undefined8 *)(unaff_x22 + 0x1a8) = uVar21;
      FUN_1020aa9e4(unaff_x22 + 0x90,puVar10,uVar2,*(undefined8 *)(unaff_x22 + 0x200),
                    unaff_x22 + 0x188);
      func_0x0001020aae98(puVar10);
      func_0x0001020aaec4(uVar4,uVar17,uVar18,uVar19,uVar21);
      func_0x000107c61170(uVar2);
      uVar5 = *(ulong *)(puVar20 + 0x10);
      apuStack_68[0] = puVar20;
      if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar5) {
        FUN_1020a5720(1 < *(ulong *)(puVar20 + 0x18),uVar5 + 1,1);
      }
      puStack_78 = apuStack_68[0];
      *(ulong *)(apuStack_68[0] + 0x10) = uVar5 + 1;
      uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
      *(undefined8 *)(apuStack_68[0] + uVar5 * 0x88 + 0x28) = *(undefined8 *)(unaff_x22 + 0x98);
      *(undefined8 *)(apuStack_68[0] + uVar5 * 0x88 + 0x20) = uVar2;
      uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar17 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar18 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar19 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar22 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar21 = *(undefined8 *)(unaff_x22 + 0xd0);
      *(undefined8 *)(apuStack_68[0] + uVar5 * 0x88 + 0x58) = *(undefined8 *)(unaff_x22 + 200);
      *(undefined8 *)(apuStack_68[0] + uVar5 * 0x88 + 0x50) = uVar19;
      *(undefined8 *)(apuStack_68[0] + uVar5 * 0x88 + 0x68) = uVar22;
      *(undefined8 *)(apuStack_68[0] + uVar5 * 0x88 + 0x60) = uVar21;
      *(undefined8 *)(apuStack_68[0] + uVar5 * 0x88 + 0x38) = uVar4;
      *(undefined8 *)(apuStack_68[0] + uVar5 * 0x88 + 0x30) = uVar2;
      *(undefined8 *)(apuStack_68[0] + uVar5 * 0x88 + 0x48) = uVar17;
      *(undefined8 *)(apuStack_68[0] + uVar5 * 0x88 + 0x40) = uVar18;
      uVar4 = *(undefined8 *)(unaff_x22 + 0xe8);
      uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
      uVar17 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar18 = *(undefined8 *)(unaff_x22 + 0xf0);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x108);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x100);
      *(undefined8 *)(apuStack_68[0] + uVar5 * 0x88 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x110);
      *(undefined8 *)(apuStack_68[0] + uVar5 * 0x88 + 0x88) = uVar17;
      *(undefined8 *)(apuStack_68[0] + uVar5 * 0x88 + 0x80) = uVar18;
      *(undefined8 *)(apuStack_68[0] + uVar5 * 0x88 + 0x98) = uVar21;
      *(undefined8 *)(apuStack_68[0] + uVar5 * 0x88 + 0x90) = uVar19;
      *(undefined8 *)(apuStack_68[0] + uVar5 * 0x88 + 0x78) = uVar4;
      *(undefined8 *)(apuStack_68[0] + uVar5 * 0x88 + 0x70) = uVar2;
      puVar14 = puVar14 + 7;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x200));
    func_0x000107c6142c(lVar16);
    apuStack_68[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001020a57c4(0,lVar12,0);
    puVar10 = (undefined8 *)(lVar13 + 0x50);
    do {
      puVar3 = apuStack_68[0];
      uVar2 = puVar10[-6];
      uVar18 = puVar10[-5];
      lVar16 = puVar10[-4];
      uVar5 = puVar10[-3];
      uVar4 = puVar10[-2];
      uVar17 = puVar10[-1];
      uVar19 = *puVar10;
      if (*(long *)(lVar7 + 0x10) == 0) {
        func_0x000107c61438(uVar18,2);
        func_0x000107c61434(uVar5);
        func_0x000107c61434(uVar17);
        func_0x000107c61434(uVar19);
        uVar21 = 0;
        uVar22 = 0;
      }
      else {
        func_0x000107c61434(*(undefined8 *)(unaff_x22 + 0x1f0));
        func_0x000107c61438(uVar18,2);
        func_0x000107c61434(uVar5);
        func_0x000107c61434(uVar17);
        func_0x000107c61434(uVar19);
        lVar13 = lVar16;
        uVar6 = uVar5;
        func_0x000100029284();
        uVar11 = *(undefined8 *)(unaff_x22 + 0x1f0);
        if ((uVar6 & 1) == 0) {
          func_0x000107c6142c(uVar11);
          uVar21 = 0;
          uVar22 = 0;
        }
        else {
          lVar13 = *(long *)(lVar7 + 0x38) + lVar13 * 0x28;
          uVar21 = *(undefined8 *)(lVar13 + 0x10);
          uVar22 = *(undefined8 *)(lVar13 + 0x18);
          func_0x000107c61434(uVar22);
          func_0x000107c6142c(uVar11);
        }
      }
      func_0x000107c6142c(uVar19);
      uVar6 = *(ulong *)(puVar3 + 0x10);
      puVar20 = (undefined *)(uVar6 + 1);
      apuStack_68[0] = puVar3;
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar6) {
        func_0x0001020a57c4(1 < *(ulong *)(puVar3 + 0x18),puVar20,1);
      }
      puVar10 = puVar10 + 7;
      *(undefined **)(apuStack_68[0] + 0x10) = puVar20;
      *(undefined8 *)(apuStack_68[0] + uVar6 * 0x50 + 0x20) = uVar2;
      *(undefined8 *)(apuStack_68[0] + uVar6 * 0x50 + 0x28) = uVar18;
      *(undefined8 *)(apuStack_68[0] + uVar6 * 0x50 + 0x30) = uVar4;
      *(undefined8 *)(apuStack_68[0] + uVar6 * 0x50 + 0x38) = uVar17;
      *(undefined8 *)(apuStack_68[0] + uVar6 * 0x50 + 0x40) = uVar2;
      *(undefined8 *)(apuStack_68[0] + uVar6 * 0x50 + 0x48) = uVar18;
      *(long *)(apuStack_68[0] + uVar6 * 0x50 + 0x50) = lVar16;
      *(ulong *)(apuStack_68[0] + uVar6 * 0x50 + 0x58) = uVar5;
      *(undefined8 *)(apuStack_68[0] + uVar6 * 0x50 + 0x60) = uVar21;
      *(undefined8 *)(apuStack_68[0] + uVar6 * 0x50 + 0x68) = uVar22;
      lVar12 = lVar12 + -1;
      puVar15 = apuStack_68[0];
    } while (lVar12 != 0);
  }
  func_0x0001000285a8(0x112e561c0,&UNK_10da58d40);
  func_0x000107c60498();
  puVar3 = puVar20;
LAB_1020a3714:
  *(undefined **)(unaff_x22 + 0x218) = puStack_78;
  apuStack_68[0] = puVar3;
  FUN_1020aaf00(puVar15,1,apuStack_68);
  func_0x000107c6142c(puVar15);
  *(undefined **)(unaff_x22 + 0x220) = apuStack_68[0];
  uVar4 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar4;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x228) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar4,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020a37d8,uVar4,uVar2);
  return;
}



/* Entry: 1020a37d8; end: 1020a3893;  */

void FUN_1020a37d8(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  long lVar5;
  
  uVar1 = *(ulong *)(unaff_x22 + 0x228);
  func_0x000107c61574();
  func_0x000107c5fd5c();
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x220);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x218);
    lVar5 = *(long *)(unaff_x22 + 0x1f8);
    func_0x000107c61428(lVar5 + 0x68,unaff_x22 + 0x150,1,0);
    uVar3 = *(undefined8 *)(lVar5 + 0x68);
    *(undefined8 *)(lVar5 + 0x68) = uVar2;
    func_0x000107c6157c(uVar2);
    func_0x000107c6142c(uVar3);
    *(undefined8 *)(unaff_x22 + 0x1c8) = uVar4;
    func_0x000100087c34(unaff_x22 + 0x1c8);
    func_0x000107c61574(uVar2);
    func_0x000107c6142c(uVar4);
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x220);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x218));
    func_0x000107c61574(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020a3894,0,0);
  return;
}



/* Entry: 1020a3894; end: 1020a38c7;  */

void FUN_1020a3894(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x1f8));
                    /* WARNING: Could not recover jumptable at 0x0001020a38c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1020a38c8; end: 1020a39db;  */

/* WARNING: Possible PIC construction at 0x0001020a3928: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001020a3970: Changing call to branch */

void FUN_1020a38c8(ulong param_1,ulong param_2,ulong *param_3,ulong *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1;
  func_0x000107c42120();
  func_0x000107c61180();
  if (uVar1 == 0) {
    uVar1 = param_1;
    func_0x000107c5db08();
    func_0x000107c61180();
    if (uVar1 != 0) {
      uVar4 = uVar1;
      func_0x000107c5faec();
      uVar2 = param_2;
      func_0x000107c61170(uVar1);
      uVar3 = param_2;
      uVar1 = uVar4 & 0xffffffffffff;
      if ((param_2 & 0x2000000000000000) != 0) {
        uVar1 = param_2 >> 0x38 & 0xf;
      }
      goto joined_r0x0001020a3968;
    }
    uVar4 = 0;
    uVar3 = 0;
  }
  else {
    uVar4 = uVar1;
    func_0x000107c5faec();
    uVar2 = param_2;
    func_0x000107c61170(uVar1);
    uVar3 = param_2;
    uVar1 = uVar4 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
joined_r0x0001020a3968:
    param_2 = uVar2;
    if (uVar1 == 0) goto code_r0x000107c6142c;
  }
  uVar1 = param_3[1];
  *param_3 = uVar4;
  param_3[1] = uVar3;
  func_0x000107c6142c(uVar1);
  func_0x000107c5d984();
  func_0x000107c61180();
  if (param_1 == 0) {
    uVar1 = 0;
    param_2 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  uVar3 = param_4[1];
  *param_4 = uVar1;
  param_4[1] = param_2;
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 1020a39dc; end: 1020a3d63;  */

void FUN_1020a39dc(ulong param_1,ulong *param_2,ulong *param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined *puStack_78;
  
  uVar10 = param_1;
  func_0x000107c5d98c();
  func_0x000107c61180();
  if (uVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1020a3d60);
    (*pcVar2)();
  }
  uVar3 = 0;
  func_0x0001020ab630(0,0x112e03f30,&PTR_PTR_1126b14c8);
  uVar4 = uVar10;
  puVar12 = PTR___sSSN_11034da80;
  func_0x000107c5f9e8(uVar10,PTR___sSSN_11034da80,uVar3,PTR___sSSSHsWP_11034da90);
  func_0x000107c61170(uVar10);
  uVar10 = uVar4;
  FUN_1020ab25c();
  func_0x000107c6142c(uVar4);
  uVar4 = *param_2;
  *param_2 = uVar10;
  func_0x000107c6142c(uVar4);
  uVar10 = param_1;
  func_0x000107c44520();
  func_0x000107c61180();
  if (uVar10 != 0) {
    uVar4 = uVar10;
    func_0x000107c5faec();
    func_0x000107c61170(uVar10);
    uVar10 = uVar4 & 0xffffffffffff;
    if (((ulong)puVar12 & 0x2000000000000000) != 0) {
      uVar10 = (ulong)puVar12 >> 0x38 & 0xf;
    }
    if (uVar10 != 0) goto LAB_1020a3d2c;
    func_0x000107c6142c(puVar12);
  }
  func_0x000107c4e3a4();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1020a3d64);
    (*pcVar2)();
  }
  uVar10 = param_1;
  func_0x000107c5fc54();
  func_0x000107c61170(param_1);
  uVar4 = uVar10 & 0xffffffffffffff8;
  if (uVar10 >> 0x3e == 0) {
    uVar13 = *(ulong *)(uVar4 + 0x10);
  }
  else {
    uVar13 = uVar4;
    if (0x7fffffffffffffff < uVar10) {
      uVar13 = uVar10;
    }
    func_0x000107c60480();
  }
  puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar13 != 0) {
    uVar14 = 0;
    do {
      while( true ) {
        if ((uVar10 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar4 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1020a3c94);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(uVar10 + uVar14 * 8 + 0x20);
          func_0x000107c61174();
          uVar11 = uVar3;
        }
        else {
          uVar5 = uVar14;
          uVar11 = uVar10;
          FUN_1020a4b64(uVar14,uVar10,&PTR_PTR_1126b14c8,0x112e03f30);
        }
        uVar1 = uVar14 + 1;
        if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1020a3c90);
          (*pcVar2)();
        }
        uVar3 = uVar5;
        func_0x000107c5b464();
        func_0x000107c61180();
        if (uVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1020a3d5c);
          (*pcVar2)();
        }
        uVar6 = uVar3;
        func_0x000107c42120();
        func_0x000107c61180();
        func_0x000107c61170(uVar3);
        if (uVar6 != 0) break;
        func_0x000107c61170(uVar5);
LAB_1020a3b30:
        uVar3 = uVar11;
        uVar14 = uVar14 + 1;
        if (uVar1 == uVar13) goto LAB_1020a3cb4;
      }
      uVar7 = uVar6;
      func_0x000107c5faec();
      uVar3 = uVar11;
      func_0x000107c61170(uVar6);
      uVar6 = uVar7 & 0xffffffffffff;
      if ((uVar11 & 0x2000000000000000) != 0) {
        uVar6 = uVar11 >> 0x38 & 0xf;
      }
      func_0x000107c61170(uVar5);
      if (uVar6 == 0) {
        func_0x000107c6142c(uVar11);
        uVar11 = uVar3;
        goto LAB_1020a3b30;
      }
      puVar12 = puStack_78;
      func_0x000107c61558();
      if (((ulong)puVar12 & 1) == 0) {
        uVar3 = *(long *)(puStack_78 + 0x10) + 1;
        puVar12 = (undefined *)0x0;
        func_0x0001020a5f64(0,uVar3,1,puStack_78,PTR__swift_bridgeObjectRelease_11034f258);
        puStack_78 = puVar12;
      }
      uVar5 = *(ulong *)(puStack_78 + 0x10);
      uVar14 = uVar5 + 1;
      if (*(ulong *)(puStack_78 + 0x18) >> 1 <= uVar5) {
        puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puStack_78 + 0x18));
        uVar3 = uVar14;
        func_0x0001020a5f64(puVar12,uVar14,1,puStack_78,PTR__swift_bridgeObjectRelease_11034f258);
        puStack_78 = puVar12;
      }
      *(ulong *)(puStack_78 + 0x10) = uVar14;
      *(ulong *)(puStack_78 + uVar5 * 0x10 + 0x20) = uVar7;
      *(ulong *)(puStack_78 + uVar5 * 0x10 + 0x28) = uVar11;
      uVar14 = uVar1;
    } while (uVar1 != uVar13);
  }
LAB_1020a3cb4:
  func_0x000107c6142c(uVar10);
  uVar8 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar9 = uVar8;
  func_0x00010011d734();
  uVar4 = 0x202c;
  puVar12 = (undefined *)0xe200000000000000;
  func_0x000107c5fa80(0x202c,0xe200000000000000,uVar8,uVar9);
  func_0x000107c6142c(puStack_78);
  uVar10 = uVar4 & 0xffffffffffff;
  if (((ulong)puVar12 & 0x2000000000000000) != 0) {
    uVar10 = (ulong)puVar12 >> 0x38 & 0xf;
  }
  if (uVar10 == 0) {
    func_0x000107c6142c(puVar12);
    uVar4 = 0;
    puVar12 = (undefined *)0x0;
  }
LAB_1020a3d2c:
  uVar10 = param_3[1];
  *param_3 = uVar4;
  param_3[1] = (ulong)puVar12;
  func_0x000107c6142c(uVar10);
  return;
}



/* Entry: 1020a3d64; end: 1020a3e37;  */

void FUN_1020a3d64(long param_1,ulong *param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  func_0x000107c42144();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c5fc54();
    func_0x000107c61170(param_1);
    uVar3 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uVar4 = uVar3;
    func_0x00010011d734();
    uVar5 = 0x202c;
    uVar7 = 0xe200000000000000;
    func_0x000107c5fa80(0x202c,0xe200000000000000,uVar3,uVar4);
    func_0x000107c6142c(lVar2);
    uVar6 = uVar5 & 0xffffffffffff;
    if ((uVar7 & 0x2000000000000000) != 0) {
      uVar6 = uVar7 >> 0x38 & 0xf;
    }
    if (uVar6 == 0) {
      func_0x000107c6142c(uVar7);
      uVar5 = 0;
      uVar7 = 0;
    }
    uVar6 = param_2[1];
    *param_2 = uVar5;
    param_2[1] = uVar7;
    func_0x000107c6142c(uVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020a3e38);
  (*pcVar1)();
}



/* Entry: 1020a3e38; end: 1020a3faf;  */

void FUN_1020a3e38(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long extraout_x8;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = (long)&puStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001020ab630(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
  (**(code **)(lVar7 + 0x68))
            (lVar6,*(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0
             ,lVar1);
  lVar2 = lVar6;
  func_0x000107c5fff0(lVar6);
  (**(code **)(lVar7 + 8))(lVar6,lVar1);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  func_0x000107c5fc48(param_3,PTR___sSSN_11034da80);
  puVar3 = &UNK_1104c68e8;
  func_0x000107c613fc(&UNK_1104c68e8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  pcStack_60 = FUN_1020ab1d8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100f6151c;
  puStack_68 = &UNK_1104c6900;
  ppuVar4 = &puStack_80;
  puStack_58 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  func_0x000107c61574(puStack_58);
  func_0x000107c5b4f8(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1020a3fb0; end: 1020a42a7;  */

void FUN_1020a3fb0(undefined *param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puVar17;
  
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  if (param_1 != (undefined *)0x0) {
    puVar4 = param_1;
  }
  if ((ulong)puVar4 >> 0x3e == 0) {
    puVar17 = *(undefined **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar17 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar4) {
      puVar17 = puVar4;
    }
    func_0x000107c60480();
  }
  if (puVar17 == (undefined *)0x0) {
    func_0x000107c61434(param_1);
  }
  else {
    func_0x000107c61434(param_1);
    uVar16 = 0;
    do {
      if (((ulong)puVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1020a4238);
          (*pcVar5)();
        }
        uVar7 = *(ulong *)(puVar4 + uVar16 * 8 + 0x20);
        func_0x000107c61174();
        puVar11 = param_2;
      }
      else {
        uVar7 = uVar16;
        puVar11 = puVar4;
        FUN_1020a4b64(uVar16,puVar4,&PTR_PTR_1126b15c8,0x112d4ed88);
      }
      puVar1 = (undefined *)(uVar16 + 1);
      if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1020a4234);
        (*pcVar5)();
      }
      uVar15 = uVar7;
      func_0x000107c5d984();
      func_0x000107c61180();
      puVar12 = puVar11;
      if (uVar15 == 0) {
LAB_1020a4034:
        func_0x000107c61170(uVar7);
        param_2 = puVar12;
      }
      else {
        uVar8 = uVar15;
        func_0x000107c5faec();
        puVar12 = puVar11;
        func_0x000107c61170(uVar15);
        uVar15 = uVar7;
        func_0x000107c3e9e8();
        func_0x000107c61180();
        if (uVar15 == 0) {
LAB_1020a402c:
          func_0x000107c6142c(puVar11);
          goto LAB_1020a4034;
        }
        uVar14 = uVar15;
        func_0x000107c3e978();
        func_0x000107c61180();
        func_0x000107c61170(uVar15);
        if (uVar14 == 0) goto LAB_1020a402c;
        uVar9 = uVar14;
        func_0x000107c5faec();
        func_0x000107c61170(uVar14);
        puVar10 = puVar6;
        func_0x000107c61558();
        uVar15 = uVar8;
        param_2 = puVar11;
        func_0x000100029284();
        uVar14 = (ulong)~(uint)param_2 & 1;
        lVar2 = *(long *)(puVar6 + 0x10) + uVar14;
        if (SCARRY8(*(long *)(puVar6 + 0x10),uVar14)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1020a423c);
          (*pcVar5)();
        }
        if (*(long *)(puVar6 + 0x18) < lVar2) {
          func_0x0001001833c8(lVar2,puVar10);
          uVar15 = uVar8;
          puVar13 = puVar11;
          func_0x000100029284();
          if (((uint)param_2 & 1) != ((uint)puVar13 & 1)) {
            func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1020a42a8);
            (*pcVar5)();
          }
joined_r0x0001020a41cc:
          uVar14 = (ulong)param_2 & 1;
          param_2 = puVar13;
          if (uVar14 != 0) goto LAB_1020a4194;
LAB_1020a41d0:
          *(ulong *)(puVar6 + (uVar15 >> 6) * 8 + 0x40) =
               *(ulong *)(puVar6 + (uVar15 >> 6) * 8 + 0x40) | 1L << (uVar15 & 0x3f);
          puVar3 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar15 * 0x10);
          *puVar3 = uVar8;
          puVar3[1] = (ulong)puVar11;
          puVar3 = (ulong *)(*(long *)(puVar6 + 0x38) + uVar15 * 0x10);
          *puVar3 = uVar9;
          puVar3[1] = (ulong)puVar12;
          func_0x000107c61170(uVar7);
          if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1020a4240);
            (*pcVar5)();
          }
          *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
          param_2 = puVar13;
        }
        else {
          puVar13 = param_2;
          if (((ulong)puVar10 & 1) == 0) {
            func_0x000100184498();
            goto joined_r0x0001020a41cc;
          }
          if (((ulong)param_2 & 1) == 0) goto LAB_1020a41d0;
LAB_1020a4194:
          puVar3 = (ulong *)(*(long *)(puVar6 + 0x38) + uVar15 * 0x10);
          uVar15 = puVar3[1];
          *puVar3 = uVar9;
          puVar3[1] = (ulong)puVar12;
          func_0x000107c6142c(puVar11);
          func_0x000107c61170(uVar7);
          func_0x000107c6142c(uVar15);
        }
      }
      uVar16 = uVar16 + 1;
    } while (puVar1 != puVar17);
  }
  func_0x000107c6142c(puVar4);
  **(undefined8 **)(*(long *)(param_3 + 0x40) + 0x28) = puVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)();
  return;
}



/* Entry: 1020a42a8; end: 1020a443f;  */

undefined8 FUN_1020a42a8(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != *(long *)(param_2 + 0x10)) {
    return 0;
  }
  if ((lVar4 != 0) && (param_1 != param_2)) {
    puVar5 = (ulong *)(param_1 + 0x30);
    puVar6 = (ulong *)(param_2 + 0x30);
    while( true ) {
      lVar4 = lVar4 + -1;
      uVar2 = puVar5[-2];
      uStack_f8 = puVar5[0xd];
      uStack_100 = puVar5[0xc];
      uStack_e8 = puVar5[0xf];
      uStack_f0 = puVar5[0xe];
      uStack_e0 = puVar5[0x10];
      uStack_138 = puVar5[5];
      uStack_140 = puVar5[4];
      uStack_128 = puVar5[7];
      uStack_130 = puVar5[6];
      uStack_118 = puVar5[9];
      uStack_120 = puVar5[8];
      uStack_108 = puVar5[0xb];
      uStack_110 = puVar5[10];
      uStack_158 = puVar5[1];
      uStack_160 = *puVar5;
      uStack_148 = puVar5[3];
      uStack_150 = puVar5[2];
      uStack_68 = puVar6[0xd];
      uStack_70 = puVar6[0xc];
      uStack_58 = puVar6[0xf];
      uStack_60 = puVar6[0xe];
      uStack_50 = puVar6[0x10];
      uStack_a8 = puVar6[5];
      uStack_b0 = puVar6[4];
      uStack_98 = puVar6[7];
      uStack_a0 = puVar6[6];
      uStack_88 = puVar6[9];
      uStack_90 = puVar6[8];
      uStack_78 = puVar6[0xb];
      uStack_80 = puVar6[10];
      uStack_c8 = puVar6[1];
      uStack_d0 = *puVar6;
      uStack_b8 = puVar6[3];
      uStack_c0 = puVar6[2];
      if (((uVar2 != puVar6[-2]) || (puVar5[-1] != puVar6[-1])) &&
         (func_0x000107c605b8(), (uVar2 & 1) == 0)) {
        return 0;
      }
      uStack_188 = uStack_f8;
      uStack_190 = uStack_100;
      uStack_178 = uStack_e8;
      uStack_180 = uStack_f0;
      uStack_170 = uStack_e0;
      uStack_1c8 = uStack_138;
      uStack_1d0 = uStack_140;
      uStack_1b8 = uStack_128;
      uStack_1c0 = uStack_130;
      uStack_1a8 = uStack_118;
      uStack_1b0 = uStack_120;
      uStack_198 = uStack_108;
      uStack_1a0 = uStack_110;
      uStack_1e8 = uStack_158;
      uStack_1f0 = uStack_160;
      uStack_1d8 = uStack_148;
      uStack_1e0 = uStack_150;
      FUN_10209de84(&uStack_160);
      puVar3 = &uStack_1f0;
      func_0x000100ce0ccc();
      uVar2 = *puVar3;
      uVar1 = puVar3[1];
      uStack_218 = uStack_68;
      uStack_220 = uStack_70;
      uStack_208 = uStack_58;
      uStack_210 = uStack_60;
      uStack_200 = uStack_50;
      uStack_258 = uStack_a8;
      uStack_260 = uStack_b0;
      uStack_248 = uStack_98;
      uStack_250 = uStack_a0;
      uStack_238 = uStack_88;
      uStack_240 = uStack_90;
      uStack_228 = uStack_78;
      uStack_230 = uStack_80;
      uStack_278 = uStack_c8;
      uStack_280 = uStack_d0;
      uStack_268 = uStack_b8;
      uStack_270 = uStack_c0;
      FUN_10209de84(&uStack_d0);
      puVar3 = &uStack_280;
      func_0x000100ce0ccc();
      if (((uVar2 != *puVar3) || (uVar1 != puVar3[1])) &&
         (func_0x000107c605b8(uVar2,uVar1,*puVar3,puVar3[1],0), (uVar2 & 1) == 0)) break;
      if (lVar4 == 0) {
        return 1;
      }
      puVar5 = puVar5 + 0x13;
      puVar6 = puVar6 + 0x13;
    }
    return 0;
  }
  return 1;
}



/* Entry: 1020a4440; end: 1020a4503;  */

undefined8 FUN_1020a4440(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 == *(long *)(param_2 + 0x10)) {
    if ((lVar7 != 0) && (param_1 != param_2)) {
      plVar8 = (long *)(param_2 + 0x38);
      plVar9 = (long *)(param_1 + 0x38);
      do {
        uVar4 = plVar9[-3];
        uVar5 = plVar9[-1];
        lVar2 = *plVar9;
        uVar1 = plVar8[-1];
        lVar3 = *plVar8;
        if (((uVar4 != plVar8[-3] || plVar9[-2] != plVar8[-2]) &&
            (func_0x000107c605b8(), (uVar4 & 1) == 0)) ||
           ((uVar5 != uVar1 || lVar2 != lVar3 &&
            (func_0x000107c605b8(uVar5,lVar2,uVar1,lVar3,0), (uVar5 & 1) == 0))))
        goto LAB_1020a44e0;
        plVar8 = plVar8 + 4;
        plVar9 = plVar9 + 4;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    uVar6 = 1;
  }
  else {
LAB_1020a44e0:
    uVar6 = 0;
  }
  return uVar6;
}



/* Entry: 1020a4504; end: 1020a469b;  */

undefined8 FUN_1020a4504(long param_1,long param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 != *(long *)(param_2 + 0x10)) {
    return 0;
  }
  if ((lVar12 != 0) && (param_1 != param_2)) {
    lVar18 = 0;
    while( true ) {
      puVar1 = (ulong *)(param_1 + 0x20 + lVar18 * 0x38);
      uVar9 = *puVar1;
      uVar10 = puVar1[2];
      uVar5 = puVar1[3];
      uVar11 = puVar1[4];
      uVar6 = puVar1[5];
      uVar17 = puVar1[6];
      puVar2 = (ulong *)(param_2 + 0x20 + lVar18 * 0x38);
      uVar3 = puVar2[2];
      uVar7 = puVar2[3];
      uVar4 = puVar2[4];
      uVar8 = puVar2[5];
      uVar13 = puVar2[6];
      if ((((uVar9 != *puVar2 || puVar1[1] != puVar2[1]) &&
           (func_0x000107c605b8(), (uVar9 & 1) == 0)) ||
          ((uVar10 != uVar3 || uVar5 != uVar7 &&
           (func_0x000107c605b8(uVar10,uVar5,uVar3,uVar7,0), (uVar10 & 1) == 0)))) ||
         (((uVar11 != uVar4 || uVar6 != uVar8 &&
           (func_0x000107c605b8(uVar11,uVar6,uVar4,uVar8,0), (uVar11 & 1) == 0)) ||
          (lVar15 = *(long *)(uVar17 + 0x10), lVar15 != *(long *)(uVar13 + 0x10))))) break;
      if (lVar15 != 0 && uVar17 != uVar13) {
        plVar14 = (long *)(uVar13 + 0x28);
        plVar16 = (long *)(uVar17 + 0x28);
        do {
          uVar9 = plVar16[-1];
          if ((uVar9 != plVar14[-1] || *plVar16 != *plVar14) &&
             (func_0x000107c605b8(), (uVar9 & 1) == 0)) {
            return 0;
          }
          plVar14 = plVar14 + 2;
          plVar16 = plVar16 + 2;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      lVar18 = lVar18 + 1;
      if (lVar18 == lVar12) {
        return 1;
      }
    }
    return 0;
  }
  return 1;
}



/* Entry: 1020a469c; end: 1020a476f;  */

uint FUN_1020a469c(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != *(long *)(param_2 + 0x10)) {
    return 0;
  }
  if ((lVar2 == 0) || (param_1 == param_2)) {
    return 1;
  }
  puVar3 = (undefined8 *)(param_1 + 0x20);
  puVar4 = (undefined8 *)(param_2 + 0x20);
  do {
    lVar2 = lVar2 + -1;
    uStack_e8 = puVar3[0xd];
    uStack_f0 = puVar3[0xc];
    uStack_d8 = puVar3[0xf];
    uStack_e0 = puVar3[0xe];
    uStack_c8 = puVar3[0x11];
    uStack_d0 = puVar3[0x10];
    uStack_128 = puVar3[5];
    uStack_130 = puVar3[4];
    uStack_118 = puVar3[7];
    uStack_120 = puVar3[6];
    uStack_108 = puVar3[9];
    uStack_110 = puVar3[8];
    uStack_f8 = puVar3[0xb];
    uStack_100 = puVar3[10];
    uStack_148 = puVar3[1];
    uStack_150 = *puVar3;
    uStack_138 = puVar3[3];
    uStack_140 = puVar3[2];
    uStack_58 = puVar4[0xd];
    uStack_60 = puVar4[0xc];
    uStack_48 = puVar4[0xf];
    uStack_50 = puVar4[0xe];
    uStack_38 = puVar4[0x11];
    uStack_40 = puVar4[0x10];
    uStack_98 = puVar4[5];
    uStack_a0 = puVar4[4];
    uStack_88 = puVar4[7];
    uStack_90 = puVar4[6];
    uStack_78 = puVar4[9];
    uStack_80 = puVar4[8];
    uStack_68 = puVar4[0xb];
    uStack_70 = puVar4[10];
    uStack_b8 = puVar4[1];
    uStack_c0 = *puVar4;
    uStack_a8 = puVar4[3];
    uStack_b0 = puVar4[2];
    uVar1 = 0;
    func_0x0001020ae8d4(&uStack_150,&uStack_c0);
    if ((uVar1 & 1) == 0) break;
    puVar3 = puVar3 + 0x12;
    puVar4 = puVar4 + 0x12;
  } while (lVar2 != 0);
  return (uint)uVar1 & 1;
}



/* Entry: 1020a4770; end: 1020a4b3b;  */

undefined8 FUN_1020a4770(ulong param_1,ulong param_2)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  ulong uStack_78;
  
  if (param_1 == param_2) {
    uVar15 = 1;
  }
  else if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
    uVar14 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
    uStack_78 = 0xffffffffffffffff;
    if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
      uStack_78 = ~(-1L << (uVar14 & 0x3f));
    }
    uStack_78 = uStack_78 & *(ulong *)(param_1 + 0x40);
    func_0x000107c61438(param_1,2);
    func_0x000107c61434(param_2);
    lVar7 = 0;
    do {
      if (uStack_78 == 0) {
        do {
          lVar16 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1020a4b3c);
            (*pcVar6)();
          }
          if ((long)(uVar14 + 0x3f >> 6) <= lVar16) goto LAB_1020a4a10;
          uStack_78 = ((ulong *)(param_1 + 0x40))[lVar16];
          lVar7 = lVar7 + 1;
        } while (uStack_78 == 0);
        uVar12 = (uStack_78 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_78 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
        uStack_78 = uStack_78 - 1 & uStack_78;
      }
      else {
        uVar12 = (uStack_78 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_78 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
        uStack_78 = uStack_78 - 1 & uStack_78;
        lVar16 = lVar7;
      }
      uVar12 = LZCOUNT(uVar12) | lVar16 << 6;
      plVar1 = (long *)(*(long *)(param_1 + 0x30) + uVar12 * 0x10);
      lVar7 = *plVar1;
      uVar3 = plVar1[1];
      puVar13 = (ulong *)(*(long *)(param_1 + 0x38) + uVar12 * 0x28);
      uVar12 = *puVar13;
      uVar10 = puVar13[1];
      uVar2 = puVar13[2];
      uVar4 = puVar13[3];
      uVar17 = puVar13[4];
      func_0x000107c61434(uVar3);
      func_0x000107c61434(uVar10);
      func_0x000107c61434(uVar4);
      func_0x000107c61434(uVar17);
      if (uVar3 == 0) {
LAB_1020a4a10:
        func_0x000107c6142c(param_2);
        func_0x000107c6142c(param_1);
        uVar15 = 1;
        goto LAB_1020a4acc;
      }
      uVar11 = uVar3;
      func_0x000100029284();
      func_0x000107c6142c(uVar3);
      if ((uVar11 & 1) == 0) {
        func_0x000107c6142c(uVar17);
        func_0x000107c6142c(uVar4);
        func_0x000107c6142c(uVar10);
        break;
      }
      puVar13 = (ulong *)(*(long *)(param_2 + 0x38) + lVar7 * 0x28);
      uVar3 = puVar13[1];
      uVar9 = puVar13[2];
      uVar11 = puVar13[3];
      uVar5 = puVar13[4];
      if (uVar3 == 0) {
        if (uVar10 != 0) {
          func_0x000107c6142c(uVar17);
          func_0x000107c6142c(uVar4);
          goto LAB_1020a4a78;
        }
      }
      else {
        if (uVar10 == 0) {
          func_0x000107c6142c(uVar17);
          uVar10 = uVar4;
LAB_1020a4a78:
          func_0x000107c6142c(uVar10);
          func_0x000107c6142c(param_2);
          goto LAB_1020a4a88;
        }
        uVar8 = *puVar13;
        if ((uVar8 != uVar12 || uVar3 != uVar10) &&
           (func_0x000107c605b8(uVar8,uVar3,uVar12,uVar10,0), (uVar8 & 1) == 0)) {
          func_0x000107c61434(uVar11);
          func_0x000107c6142c(param_2);
          func_0x000107c61430(param_1,2);
          func_0x000107c6142c(uVar11);
          func_0x000107c6142c(uVar17);
          func_0x000107c6142c(uVar4);
          uVar15 = 0;
          param_1 = uVar10;
          goto LAB_1020a4acc;
        }
        func_0x000107c61434(uVar3);
      }
      if (uVar11 != 0) {
        if (uVar4 == 0) goto LAB_1020a4aa4;
        if ((uVar9 == uVar2 && uVar11 == uVar4) ||
           (func_0x000107c605b8(uVar9,uVar11,uVar2,uVar4,0), (uVar9 & 1) != 0)) goto LAB_1020a4820;
        func_0x000107c61434(uVar11);
        func_0x000107c6142c(param_2);
        func_0x000107c61430(param_1,2);
        func_0x000107c6142c(uVar11);
        func_0x000107c6142c(uVar17);
        func_0x000107c6142c(uVar4);
        func_0x000107c6142c(uVar10);
LAB_1020a4ac4:
        uVar15 = 0;
        param_1 = uVar3;
        goto LAB_1020a4acc;
      }
      if (uVar4 != 0) {
        func_0x000107c6142c(uVar17);
        uVar17 = uVar4;
LAB_1020a4aa4:
        func_0x000107c6142c(uVar17);
        func_0x000107c6142c(uVar10);
        func_0x000107c6142c(param_2);
        func_0x000107c61430(param_1,2);
        goto LAB_1020a4ac4;
      }
LAB_1020a4820:
      func_0x000107c61434(uVar11);
      uVar12 = uVar5;
      func_0x000107c61434();
      func_0x000101058cd4();
      func_0x000107c6142c(uVar5);
      func_0x000107c6142c(uVar11);
      func_0x000107c6142c(uVar17);
      func_0x000107c6142c(uVar4);
      func_0x000107c6142c(uVar10);
      func_0x000107c6142c(uVar3);
      lVar7 = lVar16;
    } while ((uVar12 & 1) != 0);
    func_0x000107c6142c(param_2);
LAB_1020a4a88:
    func_0x000107c6142c(param_1);
    uVar15 = 0;
LAB_1020a4acc:
    func_0x000107c6142c(param_1);
  }
  else {
    uVar15 = 0;
  }
  return uVar15;
}



/* Entry: 1020a4b3c; end: 1020a4b63;  */

ulong FUN_1020a4b3c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1020a4c48);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1020a4c4c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126ccc38;
    func_0x000107c61168(PTR_PTR_1126ccc38);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126ccc38;
    func_0x000107c61168(PTR_PTR_1126ccc38);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x0001020ab630(0,0x112e55eb0,&PTR_PTR_1126ccc38);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1020a4d20);
  (*pcVar2)();
}



/* Entry: 1020a4b64; end: 1020a4d1f;  */

ulong FUN_1020a4b64(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1020a4c48);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1020a4c4c);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x0001020ab630(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1020a4d20);
  (*pcVar2)();
}



/* Entry: 1020a4d20; end: 1020a4ebb;  */

ulong FUN_1020a4d20(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1020a4df0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1020a4df4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000103b90f04(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x000103b90f04(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd00000000000001a,0x800000010f061070);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1020a4ebc);
  (*pcVar2)();
}



/* Entry: 1020a4ebc; end: 1020a4f67;  */

void FUN_1020a4ebc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_108 [72];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  func_0x000107c6068c(auStack_108,*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c5fb58(auStack_108,*param_1,param_1[1]);
  uStack_58 = param_1[0xf];
  uStack_60 = param_1[0xe];
  uStack_48 = param_1[0x11];
  uStack_50 = param_1[0x10];
  uStack_40 = param_1[0x12];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uStack_68 = param_1[0xd];
  uStack_70 = param_1[0xc];
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  FUN_10209de84(&uStack_c0);
  puVar1 = &uStack_c0;
  func_0x000100ce0ccc();
  puVar2 = auStack_108;
  func_0x000107c5fb58(puVar2,*puVar1,puVar1[1]);
  func_0x000107c606a8();
  FUN_1020a4f68(param_1,puVar2);
  return;
}



/* Entry: 1020a4f68; end: 1020a50ff;  */

undefined1  [16] FUN_1020a4f68(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong *puVar7;
  long unaff_x20;
  long lVar8;
  undefined1 auVar9 [16];
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar6 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    lVar8 = *(long *)(unaff_x20 + 0x30);
    do {
      puVar7 = (ulong *)(lVar8 + param_2 * 0x98);
      uVar4 = *puVar7;
      uStack_148 = puVar7[9];
      uStack_150 = puVar7[8];
      uStack_138 = puVar7[0xb];
      uStack_140 = puVar7[10];
      uStack_168 = puVar7[5];
      uStack_170 = puVar7[4];
      uStack_158 = puVar7[7];
      uStack_160 = puVar7[6];
      uStack_118 = puVar7[0xf];
      uStack_120 = puVar7[0xe];
      uStack_108 = puVar7[0x11];
      uStack_110 = puVar7[0x10];
      uStack_100 = puVar7[0x12];
      uStack_128 = puVar7[0xd];
      uStack_130 = puVar7[0xc];
      uStack_178 = puVar7[3];
      uStack_180 = puVar7[2];
      if ((uVar4 == uVar1 && puVar7[1] == uVar2) ||
         (func_0x000107c605b8(uVar4,puVar7[1],uVar1,uVar2,0), (uVar4 & 1) != 0)) {
        uStack_1a8 = uStack_118;
        uStack_1b0 = uStack_120;
        uStack_198 = uStack_108;
        uStack_1a0 = uStack_110;
        uStack_190 = uStack_100;
        uStack_1e8 = uStack_158;
        uStack_1f0 = uStack_160;
        uStack_1d8 = uStack_148;
        uStack_1e0 = uStack_150;
        uStack_1c8 = uStack_138;
        uStack_1d0 = uStack_140;
        uStack_1b8 = uStack_128;
        uStack_1c0 = uStack_130;
        uStack_208 = uStack_178;
        uStack_210 = uStack_180;
        uStack_1f8 = uStack_168;
        uStack_200 = uStack_170;
        FUN_10209de84(&uStack_180);
        puVar7 = &uStack_210;
        func_0x000100ce0ccc();
        uVar4 = *puVar7;
        uVar3 = puVar7[1];
        uStack_88 = param_1[0xf];
        uStack_90 = param_1[0xe];
        uStack_78 = param_1[0x11];
        uStack_80 = param_1[0x10];
        uStack_70 = param_1[0x12];
        uStack_c8 = param_1[7];
        uStack_d0 = param_1[6];
        uStack_b8 = param_1[9];
        uStack_c0 = param_1[8];
        uStack_a8 = param_1[0xb];
        uStack_b0 = param_1[10];
        uStack_98 = param_1[0xd];
        uStack_a0 = param_1[0xc];
        uStack_e8 = param_1[3];
        uStack_f0 = param_1[2];
        uStack_d8 = param_1[5];
        uStack_e0 = param_1[4];
        FUN_10209de84(&uStack_f0);
        puVar7 = &uStack_f0;
        func_0x000100ce0ccc();
        if (((uVar4 == *puVar7) && (uVar3 == puVar7[1])) ||
           (func_0x000107c605b8(uVar4,uVar3,*puVar7,puVar7[1],0), (uVar4 & 1) != 0)) {
          uVar5 = 1;
          goto LAB_1020a50dc;
        }
      }
      param_2 = param_2 + 1 & ~uVar6;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  }
  uVar5 = 0;
LAB_1020a50dc:
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = param_2;
  return auVar9;
}



/* Entry: 1020a5100; end: 1020a5123;  */

undefined * FUN_1020a5100(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar3 = (undefined *)0x112e56268;
  uVar5 = 0x112e56270;
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1020a53cc);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    func_0x0001000285a8(0x112e56268,&UNK_10da58e00);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
    puVar4 = puVar3;
  }
  puVar3 = puVar4 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x0001000285a8(0x112e56270,&UNK_10da58e08);
    func_0x000107c6140c(puVar3,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar4 != param_4 || puVar1 + uVar7 * 0x28 <= puVar3) {
      func_0x000107c610b8(puVar3,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar4;
}



/* Entry: 1020a5124; end: 1020a524b;  */

ulong FUN_1020a5124(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1020a524c);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_1020a54fc(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1020a5248);
      (*pcVar1)();
    }
    FUN_1020a5608(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 1020a524c; end: 1020a5287;  */

undefined * FUN_1020a524c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar2 = PTR__swift_bridgeObjectRelease_11034f258;
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1020a5cf8);
        (*pcVar3)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar4 = (undefined *)0x112e56258;
    func_0x0001000285a8(0x112e56258,&UNK_10da58df0);
    func_0x000107c613fc();
    puVar5 = puVar4;
    func_0x000107c610a4();
    *(ulong *)(puVar4 + 0x10) = uVar7;
    *(long *)(puVar4 + 0x18) = ((long)(puVar5 + -0x20) / 0x98) * 2;
  }
  puVar5 = puVar4 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar5,puVar1,uVar7,&UNK_1104c6688);
  }
  else {
    if (puVar4 != param_4 || puVar1 + uVar7 * 0x98 <= puVar5) {
      func_0x000107c610b8(puVar5,puVar1,uVar7 * 0x98);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*(code *)puVar2)(param_4);
  return puVar4;
}



/* Entry: 1020a5288; end: 1020a53cb;  */

undefined *
FUN_1020a5288(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1020a53cc);
        (*pcVar3)();
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
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    func_0x0001000285a8(param_5,param_6);
    func_0x000107c613fc();
    puVar4 = param_5;
    func_0x000107c610a4();
    *(ulong *)(param_5 + 0x10) = uVar6;
    *(long *)(param_5 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
    puVar4 = param_5;
  }
  puVar1 = puVar4 + 0x20;
  puVar2 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x0001000285a8(param_7,param_8);
    func_0x000107c6140c(puVar1,puVar2,uVar6,param_7);
  }
  else {
    if (puVar4 != param_4 || puVar2 + uVar6 * 0x28 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar2,uVar6 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar4;
}



/* Entry: 1020a53cc; end: 1020a54ef;  */

undefined * FUN_1020a53cc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1020a54f0);
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
    puVar3 = (undefined *)0x112e56228;
    func_0x0001000285a8(0x112e56228,&UNK_10da58db8);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x90) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_1104c6b88);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x90 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x90);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1020a54f0; end: 1020a54fb;  */

undefined * FUN_1020a54f0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  puVar2 = PTR__swift_bridgeObjectRelease_11034f258;
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1020a5948);
        (*pcVar3)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar4 = (undefined *)0x112e561e8;
    func_0x0001000285a8(0x112e561e8,&UNK_10da58d60);
    func_0x000107c613fc();
    puVar5 = puVar4;
    func_0x000107c610a4();
    *(ulong *)(puVar4 + 0x10) = uVar7;
    *(long *)(puVar4 + 0x18) = ((long)(puVar5 + -0x20) / 0x88) * 2;
  }
  puVar5 = puVar4 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar5,puVar1,uVar7,&UNK_1104c71f8);
  }
  else {
    if (puVar4 != param_4 || puVar1 + uVar7 * 0x88 <= puVar5) {
      func_0x000107c610b8(puVar5,puVar1,uVar7 * 0x88);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*(code *)puVar2)(param_4);
  return puVar4;
}



/* Entry: 1020a54fc; end: 1020a5607;  */

undefined * FUN_1020a54fc(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_1020a0e50();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 1020a5608; end: 1020a571f;  */

long FUN_1020a5608(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1020a571c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1020a5720);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x0001020ab630(0,0x112e55eb0,&PTR_PTR_1126ccc38);
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0;
      func_0x0001020ab630(0,0x112e55eb0,&PTR_PTR_1126ccc38);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1020a5718);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1020a5720; end: 1020a581f;  */

void FUN_1020a5720(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1020a5820();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 1020a5820; end: 1020a61bb;  */

undefined *
FUN_1020a5820(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1020a5948);
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
    puVar3 = (undefined *)0x112e561e8;
    func_0x0001000285a8(0x112e561e8,&UNK_10da58d60);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x88) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_1104c71f8);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x88 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x88);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 1020a61bc; end: 1020a62c3;  */

undefined * FUN_1020a61bc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1020a62c4);
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
    puVar3 = (undefined *)0x112e561e0;
    func_0x0001000285a8(0x112e561e0,&UNK_10da58f50);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar1,puVar4,uVar6,&UNK_1104c73a8);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1020a62c4; end: 1020a63f3;  */

undefined *
FUN_1020a62c4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1020a63f4);
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
    puVar3 = (undefined *)0x112e561f0;
    func_0x0001000285a8(0x112e561f0,&UNK_10da58d70);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x38) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_1104c6840);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x38 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x38);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 1020a63f4; end: 1020a699b;  */

void FUN_1020a63f4(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *unaff_x20;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  
  func_0x0001000285a8(0x112e55e38,&UNK_10da58e10);
  lVar16 = *unaff_x20;
  lVar10 = lVar16;
  func_0x000107c6048c();
  if (*(long *)(lVar16 + 0x10) != 0) {
    lVar1 = lVar16 + 0x40;
    uVar11 = (1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar10 != lVar16 || lVar1 + uVar11 * 8 <= lVar10 + 0x40U) {
      func_0x000107c610b8(lVar10 + 0x40U,lVar1,uVar11 << 3);
    }
    lVar18 = 0;
    *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)(lVar16 + 0x10);
    uVar12 = 1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
    uVar11 = 0xffffffffffffffff;
    if ((*(byte *)(lVar16 + 0x20) & 0x3f) < 6) {
      uVar11 = ~(-1L << (uVar12 & 0x3f));
    }
    uVar11 = uVar11 & *(ulong *)(lVar16 + 0x40);
    if (uVar11 == 0) goto LAB_1020a64d4;
    do {
      uVar13 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      while( true ) {
        uVar13 = LZCOUNT(uVar13) | lVar18 << 6;
        lVar15 = uVar13 * 0x10;
        puVar2 = (undefined8 *)(*(long *)(lVar16 + 0x30) + lVar15);
        uVar6 = puVar2[1];
        lVar14 = uVar13 * 0x28;
        puVar3 = (undefined8 *)(*(long *)(lVar16 + 0x38) + lVar14);
        uVar4 = *puVar3;
        uVar7 = puVar3[1];
        uVar5 = puVar3[2];
        uVar8 = puVar3[3];
        uVar17 = puVar3[4];
        puVar3 = (undefined8 *)(*(long *)(lVar10 + 0x30) + lVar15);
        *puVar3 = *puVar2;
        puVar3[1] = uVar6;
        puVar2 = (undefined8 *)(*(long *)(lVar10 + 0x38) + lVar14);
        *puVar2 = uVar4;
        puVar2[1] = uVar7;
        puVar2[2] = uVar5;
        puVar2[3] = uVar8;
        puVar2[4] = uVar17;
        func_0x000107c61434();
        func_0x000107c61434(uVar7);
        func_0x000107c61434(uVar8);
        func_0x000107c61434(uVar17);
        if (uVar11 != 0) break;
LAB_1020a64d4:
        do {
          lVar14 = lVar18 + 1;
          if (SCARRY8(lVar18,1)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x1020a659c);
            (*pcVar9)();
          }
          if ((long)(uVar12 + 0x3f >> 6) <= lVar14) goto LAB_1020a6570;
          uVar11 = *(ulong *)(lVar1 + lVar14 * 8);
          lVar18 = lVar18 + 1;
        } while (uVar11 == 0);
        uVar13 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
        uVar11 = uVar11 - 1 & uVar11;
        lVar18 = lVar14;
      }
    } while( true );
  }
LAB_1020a6570:
  func_0x000107c61574(lVar16);
  *unaff_x20 = lVar10;
  return;
}



/* Entry: 1020a699c; end: 1020a6b3b;  */

void FUN_1020a699c(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *unaff_x20;
  long lVar12;
  long lVar13;
  undefined1 auStack_d0 [64];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001000285a8(0x112e561c0,&UNK_10da58d40);
  lVar12 = *unaff_x20;
  lVar6 = lVar12;
  func_0x000107c6048c();
  if (*(long *)(lVar12 + 0x10) != 0) {
    lVar1 = lVar12 + 0x40;
    uVar7 = (1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar6 != lVar12 || lVar1 + uVar7 * 8 <= lVar6 + 0x40U) {
      func_0x000107c610b8(lVar6 + 0x40U,lVar1,uVar7 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar6 + 0x10) = *(undefined8 *)(lVar12 + 0x10);
    uVar8 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
    uVar7 = 0xffffffffffffffff;
    if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
      uVar7 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar7 = uVar7 & *(ulong *)(lVar12 + 0x40);
    if (uVar7 == 0) goto LAB_1020a6a7c;
    do {
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      while( true ) {
        uVar9 = LZCOUNT(uVar9) | lVar13 << 6;
        lVar11 = uVar9 * 0x10;
        puVar2 = (undefined8 *)(*(long *)(lVar12 + 0x30) + lVar11);
        uVar4 = puVar2[1];
        lVar10 = uVar9 * 0x40;
        puVar3 = (undefined8 *)(*(long *)(lVar12 + 0x38) + lVar10);
        uStack_88 = puVar3[1];
        uStack_90 = *puVar3;
        uStack_78 = puVar3[3];
        uStack_80 = puVar3[2];
        uStack_68 = puVar3[5];
        uStack_70 = puVar3[4];
        uStack_58 = puVar3[7];
        uStack_60 = puVar3[6];
        puVar3 = (undefined8 *)(*(long *)(lVar6 + 0x30) + lVar11);
        *puVar3 = *puVar2;
        puVar3[1] = uVar4;
        puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x38) + lVar10);
        puVar2[5] = uStack_68;
        puVar2[4] = uStack_70;
        puVar2[7] = uStack_58;
        puVar2[6] = uStack_60;
        puVar2[1] = uStack_88;
        *puVar2 = uStack_90;
        puVar2[3] = uStack_78;
        puVar2[2] = uStack_80;
        func_0x000107c61434();
        func_0x0001020ab15c(&uStack_90,auStack_d0);
        if (uVar7 != 0) break;
LAB_1020a6a7c:
        do {
          lVar10 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1020a6b3c);
            (*pcVar5)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar10) goto LAB_1020a6b10;
          uVar7 = *(ulong *)(lVar1 + lVar10 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar7 == 0);
        uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar7 = uVar7 - 1 & uVar7;
        lVar13 = lVar10;
      }
    } while( true );
  }
LAB_1020a6b10:
  func_0x000107c61574(lVar12);
  *unaff_x20 = lVar6;
  return;
}



/* Entry: 1020a6b3c; end: 1020a6ccf;  */

void FUN_1020a6b3c(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *unaff_x20;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  func_0x0001000285a8(0x112e56220,&UNK_10da58db0);
  lVar14 = *unaff_x20;
  lVar7 = lVar14;
  func_0x000107c6048c();
  if (*(long *)(lVar14 + 0x10) != 0) {
    lVar1 = lVar14 + 0x40;
    uVar9 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar14 || lVar1 + uVar9 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar9 << 3);
    }
    lVar16 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar14 + 0x10);
    uVar10 = 1L << ((ulong)*(byte *)(lVar14 + 0x20) & 0x3f);
    uVar9 = 0xffffffffffffffff;
    if ((*(byte *)(lVar14 + 0x20) & 0x3f) < 6) {
      uVar9 = ~(-1L << (uVar10 & 0x3f));
    }
    uVar9 = uVar9 & *(ulong *)(lVar14 + 0x40);
    if (uVar9 == 0) goto LAB_1020a6c1c;
    do {
      uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
      while( true ) {
        uVar11 = LZCOUNT(uVar11) | lVar16 << 6;
        lVar13 = uVar11 * 0x10;
        puVar2 = (undefined8 *)(*(long *)(lVar14 + 0x30) + lVar13);
        uVar5 = puVar2[1];
        lVar12 = uVar11 * 0x20;
        puVar3 = (undefined8 *)(*(long *)(lVar14 + 0x38) + lVar12);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + lVar13);
        uVar15 = puVar3[1];
        uVar18 = puVar3[1];
        uVar17 = *puVar3;
        uVar20 = puVar3[3];
        uVar19 = puVar3[2];
        uVar8 = puVar3[3];
        *puVar4 = *puVar2;
        puVar4[1] = uVar5;
        puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x38) + lVar12);
        puVar2[1] = uVar18;
        *puVar2 = uVar17;
        puVar2[3] = uVar20;
        puVar2[2] = uVar19;
        func_0x000107c61434(uVar8);
        func_0x000107c61434(uVar5);
        func_0x000107c61434(uVar15);
        if (uVar9 != 0) break;
LAB_1020a6c1c:
        do {
          lVar12 = lVar16 + 1;
          if (SCARRY8(lVar16,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1020a6cd0);
            (*pcVar6)();
          }
          if ((long)(uVar10 + 0x3f >> 6) <= lVar12) goto LAB_1020a6ca4;
          uVar9 = *(ulong *)(lVar1 + lVar12 * 8);
          lVar16 = lVar16 + 1;
        } while (uVar9 == 0);
        uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
        uVar9 = uVar9 - 1 & uVar9;
        lVar16 = lVar12;
      }
    } while( true );
  }
LAB_1020a6ca4:
  func_0x000107c61574(lVar14);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 1020a6cd0; end: 1020a6e93;  */

void FUN_1020a6cd0(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long *unaff_x20;
  long lVar12;
  long lVar13;
  undefined1 auStack_130 [112];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001000285a8(0x112e56210,&UNK_10da58d98);
  lVar12 = *unaff_x20;
  lVar7 = lVar12;
  func_0x000107c6048c();
  if (*(long *)(lVar12 + 0x10) != 0) {
    lVar1 = lVar12 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar12 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar12 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar12 + 0x40);
    if (uVar8 == 0) goto LAB_1020a6db0;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        lVar11 = uVar10 * 0x10;
        puVar3 = (undefined8 *)(*(long *)(lVar12 + 0x30) + lVar11);
        uVar5 = puVar3[1];
        lVar2 = uVar10 * 0x70;
        puVar4 = (undefined8 *)(*(long *)(lVar12 + 0x38) + lVar2);
        uStack_68 = puVar4[0xb];
        uStack_70 = puVar4[10];
        uStack_58 = puVar4[0xd];
        uStack_60 = puVar4[0xc];
        uStack_88 = puVar4[7];
        uStack_90 = puVar4[6];
        uStack_78 = puVar4[9];
        uStack_80 = puVar4[8];
        uStack_a8 = puVar4[3];
        uStack_b0 = puVar4[2];
        uStack_98 = puVar4[5];
        uStack_a0 = puVar4[4];
        uStack_b8 = puVar4[1];
        uStack_c0 = *puVar4;
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + lVar11);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        puVar3 = (undefined8 *)(*(long *)(lVar7 + 0x38) + lVar2);
        puVar3[3] = uStack_a8;
        puVar3[2] = uStack_b0;
        puVar3[5] = uStack_98;
        puVar3[4] = uStack_a0;
        puVar3[1] = uStack_b8;
        *puVar3 = uStack_c0;
        puVar3[0xb] = uStack_68;
        puVar3[10] = uStack_70;
        puVar3[0xd] = uStack_58;
        puVar3[0xc] = uStack_60;
        puVar3[7] = uStack_88;
        puVar3[6] = uStack_90;
        puVar3[9] = uStack_78;
        puVar3[8] = uStack_80;
        func_0x000107c61434();
        FUN_1020ab5ac(&uStack_c0,auStack_130);
        if (uVar8 != 0) break;
LAB_1020a6db0:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1020a6e94);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_1020a6e68;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_1020a6e68:
  func_0x000107c61574(lVar12);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 1020a6e94; end: 1020a82d7;  */

void FUN_1020a6e94(long param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  code *pcVar9;
  long lVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long *unaff_x20;
  long lVar19;
  ulong *puVar20;
  undefined8 uVar21;
  long lVar22;
  ulong uStack_c8;
  undefined1 auStack_a8 [72];
  
  lVar22 = *unaff_x20;
  lVar1 = *(long *)(lVar22 + 0x18);
  if (*(long *)(lVar22 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(0x112e55e38,&UNK_10da58e10);
  lVar10 = lVar22;
  func_0x000107c60490(lVar22,lVar1,param_2);
  if (*(long *)(lVar22 + 0x10) == 0) {
LAB_1020a714c:
    func_0x000107c61574(lVar22);
    *unaff_x20 = lVar10;
    return;
  }
  puVar20 = (ulong *)(lVar22 + 0x40);
  uVar16 = 1L << ((ulong)*(byte *)(lVar22 + 0x20) & 0x3f);
  uStack_c8 = 0xffffffffffffffff;
  if ((*(byte *)(lVar22 + 0x20) & 0x3f) < 6) {
    uStack_c8 = ~(-1L << (uVar16 & 0x3f));
  }
  uStack_c8 = uStack_c8 & *puVar20;
  lVar1 = lVar10 + 0x40;
  lVar13 = 0;
  do {
    if (uStack_c8 == 0) {
      do {
        lVar19 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1020a717c);
          (*pcVar9)();
        }
        if ((long)(uVar16 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar16 = 1L << ((ulong)*(byte *)(lVar22 + 0x20) & 0x3f);
            if ((*(byte *)(lVar22 + 0x20) & 0x3f) < 6) {
              *puVar20 = -1L << (uVar16 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar20,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar22 + 0x10) = 0;
          }
          goto LAB_1020a714c;
        }
        uStack_c8 = puVar20[lVar19];
        lVar13 = lVar13 + 1;
      } while (uStack_c8 == 0);
      uVar12 = (uStack_c8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_c8 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uStack_c8 = uStack_c8 - 1 & uStack_c8;
    }
    else {
      uVar12 = (uStack_c8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_c8 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uStack_c8 = uStack_c8 - 1 & uStack_c8;
      lVar19 = lVar13;
    }
    uVar12 = LZCOUNT(uVar12) | lVar19 << 6;
    puVar14 = (undefined8 *)(*(long *)(lVar22 + 0x30) + uVar12 * 0x10);
    uVar2 = *puVar14;
    uVar5 = puVar14[1];
    puVar14 = (undefined8 *)(*(long *)(lVar22 + 0x38) + uVar12 * 0x28);
    uVar3 = *puVar14;
    uVar6 = puVar14[1];
    uVar4 = puVar14[2];
    uVar7 = puVar14[3];
    uVar21 = puVar14[4];
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar5);
      func_0x000107c61434(uVar6);
      func_0x000107c61434(uVar7);
      func_0x000107c61434(uVar21);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar10 + 0x28));
    puVar11 = auStack_a8;
    func_0x000107c5fb58(puVar11,uVar2,uVar5);
    func_0x000107c606a8();
    uVar18 = -1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
    uVar17 = (ulong)puVar11 & (uVar18 ^ 0xffffffffffffffff);
    uVar15 = uVar17 >> 6;
    uVar12 = -1L << (uVar17 & 0x3f) & (*(ulong *)(lVar1 + uVar15 * 8) ^ 0xffffffffffffffff);
    if (uVar12 == 0) {
      bVar8 = false;
      uVar12 = 0x3f - uVar18 >> 6;
      do {
        uVar17 = uVar15 + 1;
        if ((uVar17 == uVar12) && (bVar8)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1020a7180);
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
    puVar14 = (undefined8 *)(*(long *)(lVar10 + 0x30) + uVar12 * 0x10);
    *puVar14 = uVar2;
    puVar14[1] = uVar5;
    puVar14 = (undefined8 *)(*(long *)(lVar10 + 0x38) + uVar12 * 0x28);
    *puVar14 = uVar3;
    puVar14[1] = uVar6;
    puVar14[2] = uVar4;
    puVar14[3] = uVar7;
    puVar14[4] = uVar21;
    *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 1;
    lVar13 = lVar19;
  } while( true );
}



/* Entry: 1020a82d8; end: 1020a845f;  */

/* WARNING: Possible PIC construction at 0x0001020a83a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020a83ac) */

void FUN_1020a82d8(undefined8 *param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1020a83d4);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    func_0x0001020a7648(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1020a8378);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    func_0x0001020a67f8();
    lVar6 = *unaff_x20;
    goto joined_r0x0001020a83e8;
  }
  lVar6 = *unaff_x20;
joined_r0x0001020a83e8:
  if ((uVar4 & 1) != 0) {
    puVar7 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 0x28);
    uVar11 = puVar7[4];
    uVar10 = *param_1;
    uVar13 = param_1[3];
    uVar12 = param_1[2];
    puVar7[1] = param_1[1];
    *puVar7 = uVar10;
    puVar7[3] = uVar13;
    puVar7[2] = uVar12;
    puVar7[4] = param_1[4];
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar11);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar7 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 0x28);
  uVar11 = *param_1;
  uVar12 = param_1[3];
  uVar10 = param_1[2];
  puVar7[1] = param_1[1];
  *puVar7 = uVar11;
  puVar7[3] = uVar12;
  puVar7[2] = uVar10;
  puVar7[4] = param_1[4];
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1020a8460);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 1020a8460; end: 1020a8a37;  */

undefined8 FUN_1020a8460(ulong *param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  ulong *puVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long alStack_a8 [9];
  
  lVar8 = *unaff_x20;
  func_0x000107c6068c(alStack_a8,*(undefined8 *)(lVar8 + 0x28));
  func_0x000107c5fb58(alStack_a8,param_2,param_3);
  plVar3 = alStack_a8;
  func_0x000107c5fb58(plVar3,param_4,param_5);
  func_0x000107c606a8();
  uVar6 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
  uVar7 = (ulong)plVar3 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar8 + 0x38 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0) {
    lVar9 = *(long *)(lVar8 + 0x30);
    do {
      puVar1 = (ulong *)(lVar9 + uVar7 * 0x20);
      uVar4 = *puVar1;
      uVar5 = puVar1[2];
      uVar2 = puVar1[3];
      if (((uVar4 == param_2 && puVar1[1] == param_3) ||
          (func_0x000107c605b8(uVar4,puVar1[1],param_2,param_3,0), (uVar4 & 1) != 0)) &&
         ((uVar5 == param_4 && uVar2 == param_5 ||
          (func_0x000107c605b8(uVar5,uVar2,param_4,param_5,0), (uVar5 & 1) != 0)))) {
        func_0x000107c6142c(param_5);
        func_0x000107c6142c(param_3);
        puVar1 = (ulong *)(*(long *)(lVar8 + 0x30) + uVar7 * 0x20);
        uVar7 = puVar1[1];
        uVar6 = puVar1[2];
        uVar4 = puVar1[3];
        *param_1 = *puVar1;
        param_1[1] = uVar7;
        param_1[2] = uVar6;
        param_1[3] = uVar4;
        func_0x000107c61434();
        func_0x000107c61434(uVar4);
        return 0;
      }
      uVar7 = uVar7 + 1 & ~uVar6;
    } while ((*(ulong *)(lVar8 + 0x38 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) != 0);
  }
  lVar8 = *unaff_x20;
  func_0x000107c61558(lVar8);
  alStack_a8[0] = *unaff_x20;
  func_0x000107c61434(param_3);
  func_0x000107c61434(param_5);
  func_0x0001020a862c(param_2,param_3,param_4,param_5,uVar7,lVar8);
  *unaff_x20 = alStack_a8[0];
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  return 1;
}



/* Entry: 1020a8a38; end: 1020a8ba3;  */

void FUN_1020a8a38(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *unaff_x20;
  long lVar13;
  long lVar14;
  
  func_0x0001000285a8(0x112e56230,&UNK_10da58dc0);
  lVar13 = *unaff_x20;
  lVar8 = lVar13;
  func_0x000107c602dc();
  if (*(long *)(lVar13 + 0x10) != 0) {
    lVar1 = lVar13 + 0x38;
    uVar9 = (1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar8 != lVar13 || lVar1 + uVar9 * 8 <= lVar8 + 0x38U) {
      func_0x000107c610b8(lVar8 + 0x38U,lVar1,uVar9 << 3);
    }
    lVar14 = 0;
    *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar13 + 0x10);
    uVar10 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
    uVar9 = 0xffffffffffffffff;
    if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
      uVar9 = ~(-1L << (uVar10 & 0x3f));
    }
    uVar9 = uVar9 & *(ulong *)(lVar13 + 0x38);
    if (uVar9 == 0) goto LAB_1020a8b14;
    do {
      uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
      while( true ) {
        lVar12 = (LZCOUNT(uVar11) | lVar14 << 6) * 0x20;
        puVar2 = (undefined8 *)(*(long *)(lVar13 + 0x30) + lVar12);
        uVar5 = puVar2[1];
        uVar4 = puVar2[2];
        uVar6 = puVar2[3];
        puVar3 = (undefined8 *)(*(long *)(lVar8 + 0x30) + lVar12);
        *puVar3 = *puVar2;
        puVar3[1] = uVar5;
        puVar3[2] = uVar4;
        puVar3[3] = uVar6;
        func_0x000107c61434();
        func_0x000107c61434(uVar6);
        if (uVar9 != 0) break;
LAB_1020a8b14:
        do {
          lVar12 = lVar14 + 1;
          if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1020a8ba4);
            (*pcVar7)();
          }
          if ((long)(uVar10 + 0x3f >> 6) <= lVar12) goto LAB_1020a8b7c;
          uVar9 = *(ulong *)(lVar1 + lVar12 * 8);
          lVar14 = lVar14 + 1;
        } while (uVar9 == 0);
        uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
        uVar9 = uVar9 - 1 & uVar9;
        lVar14 = lVar12;
      }
    } while( true );
  }
LAB_1020a8b7c:
  func_0x000107c61574(lVar13);
  *unaff_x20 = lVar8;
  return;
}



/* Entry: 1020a8ba4; end: 1020a8e2f;  */

void FUN_1020a8ba4(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *unaff_x20;
  ulong uVar17;
  ulong *puVar18;
  long lVar19;
  long lVar20;
  undefined1 auStack_a8 [72];
  
  lVar19 = *unaff_x20;
  lVar1 = *(long *)(lVar19 + 0x18);
  if (*(long *)(lVar19 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar8 = 0x112e56230;
  func_0x0001000285a8(0x112e56230,&UNK_10da58dc0);
  lVar9 = lVar19;
  func_0x000107c602e0(lVar19,lVar1,1,uVar8);
  if (*(long *)(lVar19 + 0x10) == 0) {
LAB_1020a8dfc:
    func_0x000107c61574(lVar19);
    *unaff_x20 = lVar9;
    return;
  }
  puVar18 = (ulong *)(lVar19 + 0x38);
  uVar14 = 1L << ((ulong)*(byte *)(lVar19 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(lVar19 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar14 & 0x3f));
  }
  uVar17 = uVar17 & *puVar18;
  lVar1 = lVar9 + 0x38;
  lVar12 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar20 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1020a8e2c);
          (*pcVar7)();
        }
        if ((long)(uVar14 + 0x3f >> 6) <= lVar20) {
          uVar17 = 1L << ((ulong)*(byte *)(lVar19 + 0x20) & 0x3f);
          if ((*(byte *)(lVar19 + 0x20) & 0x3f) < 6) {
            *puVar18 = -1L << (uVar17 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar18,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar19 + 0x10) = 0;
          goto LAB_1020a8dfc;
        }
        uVar17 = puVar18[lVar20];
        lVar12 = lVar12 + 1;
      } while (uVar17 == 0);
      uVar11 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar11 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar20 = lVar12;
    }
    puVar2 = (undefined8 *)(*(long *)(lVar19 + 0x30) + (LZCOUNT(uVar11) | lVar20 << 6) * 0x20);
    uVar8 = *puVar2;
    uVar4 = puVar2[1];
    uVar3 = puVar2[2];
    uVar5 = puVar2[3];
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar9 + 0x28));
    func_0x000107c5fb58(auStack_a8,uVar8,uVar4);
    puVar10 = auStack_a8;
    func_0x000107c5fb58(puVar10,uVar3,uVar5);
    func_0x000107c606a8();
    uVar16 = -1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar15 = (ulong)puVar10 & (uVar16 ^ 0xffffffffffffffff);
    uVar13 = uVar15 >> 6;
    uVar11 = -1L << (uVar15 & 0x3f) & (*(ulong *)(lVar1 + uVar13 * 8) ^ 0xffffffffffffffff);
    if (uVar11 == 0) {
      bVar6 = false;
      uVar11 = 0x3f - uVar16 >> 6;
      do {
        uVar15 = uVar13 + 1;
        if ((uVar15 == uVar11) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1020a8e30);
          (*pcVar7)();
        }
        uVar13 = 0;
        if (uVar15 != uVar11) {
          uVar13 = uVar15;
        }
        bVar6 = (bool)(uVar15 == uVar11 | bVar6);
        uVar15 = *(ulong *)(lVar1 + uVar13 * 8);
      } while (uVar15 == 0xffffffffffffffff);
      uVar15 = ~uVar15;
      uVar11 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar13 << 6;
    }
    else {
      uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar15 & 0x7fffffffffffffc0;
    }
    uVar13 = uVar11 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar13) = 1L << (uVar11 & 0x3f) | *(ulong *)(lVar1 + uVar13);
    puVar2 = (undefined8 *)(*(long *)(lVar9 + 0x30) + uVar11 * 0x20);
    *puVar2 = uVar8;
    puVar2[1] = uVar4;
    puVar2[2] = uVar3;
    puVar2[3] = uVar5;
    *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
    lVar12 = lVar20;
  } while( true );
}



/* Entry: 1020a8e30; end: 1020a8f3b;  */

void FUN_1020a8e30(ulong *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar1 = uVar4;
  func_0x000107c61558();
  if ((uVar1 & 1) == 0) {
    FUN_1020a9ab0();
  }
  uVar6 = *(ulong *)(uVar4 + 0x10);
  lStack_50 = uVar4 + 0x20;
  uVar1 = uVar6;
  uStack_48 = uVar6;
  func_0x000107c60574();
  if ((long)uVar1 < (long)uVar6) {
    puVar5 = (undefined *)(uVar6 >> 1);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (1 < uVar6) {
      uVar2 = 0x112e561f8;
      func_0x0001000285a8(0x112e561f8,&UNK_10da58d78);
      puVar3 = puVar5;
      func_0x000107c60380(puVar5,uVar2);
      *(undefined **)(puVar3 + 0x10) = puVar5;
    }
    puStack_68 = puVar3 + 0x20;
    puStack_60 = puVar5;
    FUN_1020a8f3c(&puStack_68,auStack_58,&lStack_50,uVar1);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    func_0x000107c61574(puVar3);
  }
  else if (uVar6 != 0) {
    FUN_1020a936c(0,uVar6,1,&lStack_50);
  }
  *param_1 = uVar4;
  return;
}



/* Entry: 1020a8f3c; end: 1020a936b;  */

void FUN_1020a8f3c(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  long unaff_x21;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar17 = param_3[1];
  if (0 < lVar17) {
    lVar12 = 0;
    do {
      lVar20 = lVar12 + 1;
      if (lVar20 < lVar17) {
        lVar18 = *param_3;
        puVar9 = (ulong *)(lVar18 + lVar20 * 0x18);
        uVar19 = *puVar9;
        puVar10 = (ulong *)(lVar18 + lVar12 * 0x18);
        if (uVar19 == *puVar10 && puVar9[1] == puVar10[1]) {
          uVar19 = 0;
        }
        else {
          func_0x000107c605b8();
        }
        lVar14 = lVar12 + 2;
        lVar20 = lVar14;
        if (lVar14 < lVar17) {
          plVar16 = (long *)(lVar18 + lVar12 * 0x18 + 0x20);
          do {
            lVar5 = plVar16[2];
            if (lVar5 == plVar16[-1] && plVar16[3] == *plVar16) {
              if ((uVar19 & 1) != 0) goto LAB_1020a9038;
            }
            else {
              func_0x000107c605b8();
              lVar20 = lVar14;
              if ((((uint)uVar19 ^ (uint)lVar5) & 1) != 0) break;
            }
            lVar14 = lVar14 + 1;
            plVar16 = plVar16 + 3;
            lVar20 = lVar17;
          } while (lVar17 != lVar14);
        }
        lVar14 = lVar20;
        if ((uVar19 & 1) != 0) {
LAB_1020a9038:
          if (lVar14 < lVar12) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1020a9340);
            (*pcVar3)();
          }
          lVar20 = lVar14;
          if (lVar12 < lVar14) {
            lVar11 = lVar14 * 0x18;
            lVar5 = lVar12 * 0x18;
            lVar17 = lVar12;
            do {
              lVar14 = lVar14 + -1;
              if (lVar17 != lVar14) {
                if (lVar18 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1020a9360);
                  (*pcVar3)();
                }
                puVar1 = (undefined8 *)(lVar18 + lVar5);
                lVar2 = lVar18 + lVar11;
                uVar15 = *puVar1;
                uVar22 = puVar1[2];
                uVar21 = puVar1[1];
                uVar25 = *(undefined8 *)(lVar2 + -0x10);
                uVar24 = *(undefined8 *)(lVar2 + -0x18);
                puVar1[2] = *(undefined8 *)(lVar2 + -8);
                puVar1[1] = uVar25;
                *puVar1 = uVar24;
                *(undefined8 *)(lVar2 + -0x18) = uVar15;
                *(undefined8 *)(lVar2 + -8) = uVar22;
                *(undefined8 *)(lVar2 + -0x10) = uVar21;
              }
              lVar17 = lVar17 + 1;
              lVar11 = lVar11 + -0x18;
              lVar5 = lVar5 + 0x18;
            } while (lVar17 < lVar14);
          }
        }
      }
      lVar17 = param_3[1];
      lVar18 = lVar20;
      if (lVar20 < lVar17) {
        if (SBORROW8(lVar20,lVar12)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1020a933c);
          (*pcVar3)();
        }
        if (lVar20 - lVar12 < param_4) {
          if (SCARRY8(lVar12,param_4)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1020a9344);
            (*pcVar3)();
          }
          lVar14 = lVar12 + param_4;
          if (lVar17 <= lVar12 + param_4) {
            lVar14 = lVar17;
          }
          if (lVar14 < lVar12) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1020a9348);
            (*pcVar3)();
          }
          if (lVar20 != lVar14) {
            lVar17 = *param_3;
            puVar9 = (ulong *)(lVar17 + lVar20 * 0x18 + -0x18);
            lVar5 = lVar12 - lVar20;
            do {
              puVar10 = (ulong *)(lVar17 + lVar20 * 0x18);
              uVar19 = *puVar10;
              uVar13 = puVar10[1];
              lVar18 = lVar5;
              puVar10 = puVar9;
              do {
                if ((uVar19 == *puVar10 && uVar13 == puVar10[1]) ||
                   (func_0x000107c605b8(), (uVar19 & 1) == 0)) break;
                if (lVar17 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1020a934c);
                  (*pcVar3)();
                }
                uVar23 = puVar10[5];
                uVar13 = puVar10[4];
                uVar19 = puVar10[3];
                puVar10[4] = puVar10[1];
                puVar10[3] = *puVar10;
                puVar10[5] = puVar10[2];
                *puVar10 = uVar19;
                puVar10[2] = uVar23;
                puVar10[1] = uVar13;
                puVar10 = puVar10 + -3;
                bVar4 = lVar18 != -1;
                lVar18 = lVar18 + 1;
              } while (bVar4);
              lVar20 = lVar20 + 1;
              puVar9 = puVar9 + 3;
              lVar5 = lVar5 + -1;
              lVar18 = lVar14;
            } while (lVar20 != lVar14);
          }
        }
      }
      puVar8 = puStack_58;
      if (lVar18 < lVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1020a932c);
        (*pcVar3)();
      }
      puVar6 = puStack_58;
      func_0x000107c61558();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar19 = *(ulong *)(puVar7 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar19) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        func_0x0001000a91e0(puVar8,uVar19 + 1,1,puVar7);
      }
      *(ulong *)(puVar8 + 0x10) = uVar19 + 1;
      *(long *)(puVar8 + uVar19 * 0x10 + 0x20) = lVar12;
      *(long *)(puVar8 + uVar19 * 0x10 + 0x28) = lVar18;
      puStack_58 = puVar8;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1020a9364);
        (*pcVar3)();
      }
      FUN_1020a944c(&puStack_58,*param_1,param_3);
      puVar8 = puStack_58;
      if (unaff_x21 != 0) goto LAB_1020a92fc;
      lVar17 = param_3[1];
      lVar12 = lVar18;
    } while (lVar18 < lVar17);
  }
  puVar8 = puStack_58;
  lVar17 = *param_1;
  if (lVar17 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1020a936c);
    (*pcVar3)();
  }
  puVar6 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar6 & 1) == 0) {
    func_0x000100e06d54();
  }
  puVar9 = (ulong *)(puVar8 + 0x10);
  uVar19 = *puVar9;
  while (1 < uVar19) {
    lVar12 = *param_3;
    if (lVar12 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1020a9368);
      (*pcVar3)();
    }
    plVar16 = (long *)(puVar8 + uVar19 * 0x10);
    lVar20 = *plVar16;
    puVar10 = puVar9 + uVar19 * 2;
    uVar13 = puVar10[1];
    FUN_1020a96bc(lVar12 + lVar20 * 0x18,lVar12 + *puVar10 * 0x18,lVar12 + uVar13 * 0x18,lVar17);
    if (unaff_x21 != 0) break;
    if ((long)uVar13 < lVar20) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1020a9330);
      (*pcVar3)();
    }
    if (*puVar9 <= uVar19 - 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1020a9334);
      (*pcVar3)();
    }
    *plVar16 = lVar20;
    plVar16[1] = uVar13;
    uVar13 = *puVar9;
    lVar12 = uVar13 - uVar19;
    if (uVar13 < uVar19) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1020a9338);
      (*pcVar3)();
    }
    uVar19 = uVar13 - 1;
    func_0x000107c610b8(puVar10,puVar10 + 2,lVar12 * 0x10);
    *puVar9 = uVar19;
  }
LAB_1020a92fc:
  func_0x000107c6142c(puVar8);
  return;
}



/* Entry: 1020a936c; end: 1020a944b;  */

void FUN_1020a936c(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong *puVar4;
  long lVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_3 != param_2) {
    lVar5 = *param_4;
    puVar6 = (ulong *)(lVar5 + param_3 * 0x18 + -0x18);
    param_1 = param_1 - param_3;
    do {
      puVar4 = (ulong *)(lVar5 + param_3 * 0x18);
      uVar3 = *puVar4;
      uVar8 = puVar4[1];
      lVar7 = param_1;
      puVar4 = puVar6;
      do {
        if ((uVar3 == *puVar4 && uVar8 == puVar4[1]) || (func_0x000107c605b8(), (uVar3 & 1) == 0))
        break;
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1020a944c);
          (*pcVar1)();
        }
        uVar9 = puVar4[5];
        uVar8 = puVar4[4];
        uVar3 = puVar4[3];
        puVar4[4] = puVar4[1];
        puVar4[3] = *puVar4;
        puVar4[5] = puVar4[2];
        *puVar4 = uVar3;
        puVar4[2] = uVar9;
        puVar4[1] = uVar8;
        puVar4 = puVar4 + -3;
        bVar2 = lVar7 != -1;
        lVar7 = lVar7 + 1;
      } while (bVar2);
      param_3 = param_3 + 1;
      puVar6 = puVar6 + 3;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Entry: 1020a944c; end: 1020a96bb;  */

undefined8 FUN_1020a944c(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    func_0x000107c61558();
    if ((uVar6 & 1) == 0) {
      func_0x000100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_1020a9524;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1020a96a4);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_1020a9588:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1020a9694);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1020a969c);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1020a967c);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1020a9680);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1020a9688);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1020a9690);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_1020a9524:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1020a9684);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1020a968c);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1020a9698);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1020a96a0);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_1020a9588;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1020a96a8);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1020a9670);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1020a96bc);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_1020a96bc(lVar9 + lVar12 * 0x18,lVar9 + *plVar1 * 0x18,lVar9 + lVar7 * 0x18,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1020a9674);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        func_0x000100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1020a9678);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      func_0x0001000a97cc(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Entry: 1020a96bc; end: 1020a992f;  */

undefined8 FUN_1020a96bc(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar1 = ((long)param_2 - (long)param_1) / 0x18;
  lVar2 = ((long)param_3 - (long)param_2) / 0x18;
  if (lVar1 < lVar2) {
    if (((param_4 < param_1) || (param_1 + lVar1 * 3 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar1 * 0x18);
    }
    puVar6 = param_4 + lVar1 * 3;
    puVar3 = param_1;
    if (0x17 < (long)param_2 - (long)param_1) {
      do {
        if (param_3 <= param_2) break;
        uVar8 = *param_2;
        if ((uVar8 == *param_4 && param_2[1] == param_4[1]) ||
           (func_0x000107c605b8(), (uVar8 & 1) == 0)) {
          puVar4 = param_4 + 3;
          puVar5 = param_4;
        }
        else {
          puVar4 = param_4;
          puVar5 = param_2;
          param_2 = param_2 + 3;
        }
        param_4 = puVar4;
        if (puVar3 != puVar5) {
          uVar9 = puVar5[1];
          uVar8 = *puVar5;
          puVar3[2] = puVar5[2];
          puVar3[1] = uVar9;
          *puVar3 = uVar8;
        }
        puVar3 = puVar3 + 3;
      } while (param_4 < puVar6);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar2 * 3 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar2 * 0x18);
    }
    puVar5 = param_4 + lVar2 * 3;
    puVar3 = param_2;
    puVar6 = puVar5;
    if ((param_1 < param_2) && (0x17 < (long)param_3 - (long)param_2)) {
      do {
        puVar7 = param_2 + -3;
        puVar4 = param_3;
        while( true ) {
          param_3 = puVar4 + -3;
          puVar6 = puVar5 + -3;
          uVar8 = *puVar6;
          if ((uVar8 != param_2[-3] || puVar5[-2] != param_2[-2]) &&
             (func_0x000107c605b8(), (uVar8 & 1) != 0)) break;
          if (puVar4 != puVar5) {
            uVar9 = puVar5[-2];
            uVar8 = *puVar6;
            puVar4[-1] = puVar5[-1];
            puVar4[-2] = uVar9;
            *param_3 = uVar8;
          }
          puVar3 = param_2;
          puVar5 = puVar6;
          puVar4 = param_3;
          if (puVar6 <= param_4) goto LAB_1020a98cc;
        }
        if (puVar4 != param_2) {
          uVar9 = param_2[-2];
          uVar8 = *puVar7;
          puVar4[-1] = param_2[-1];
          puVar4[-2] = uVar9;
          *param_3 = uVar8;
        }
        puVar3 = puVar7;
        puVar6 = puVar5;
      } while ((param_1 < puVar7) && (param_2 = puVar7, param_4 < puVar5));
    }
  }
LAB_1020a98cc:
  lVar1 = ((long)puVar6 - (long)param_4) / 0x18;
  if ((puVar3 != param_4) || (param_4 + lVar1 * 3 <= puVar3)) {
    func_0x000107c610b8(puVar3,param_4,lVar1 * 0x18);
  }
  return 1;
}



/* Entry: 1020a9930; end: 1020a9aaf;  */

long FUN_1020a9930(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  puVar9 = (ulong *)(param_4 + 0x40);
  uVar7 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (-uVar7 < 0x40) {
    uVar11 = ~(-1L << (-uVar7 & 0x3f));
  }
  uVar11 = uVar11 & *puVar9;
  if (param_2 == (undefined8 *)0x0) {
    lVar13 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar13 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1020a9ab0);
      (*pcVar3)();
    }
    lVar5 = 0;
    lVar12 = 0;
    uVar10 = 0x3f - uVar7 >> 6;
    lVar13 = lVar5;
    while( true ) {
      while (uVar11 == 0) {
        bVar4 = SCARRY8(lVar13,1);
        lVar13 = lVar13 + 1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1020a9aac);
          (*pcVar3)();
        }
        if ((long)uVar10 <= lVar13) {
          uVar11 = 0;
          if ((long)uVar10 <= lVar5 + 1) {
            uVar10 = lVar5 + 1;
          }
          lVar13 = uVar10 - 1;
          param_3 = lVar12;
          goto LAB_1020a9a60;
        }
        uVar11 = puVar9[lVar13];
      }
      lVar12 = lVar12 + 1;
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | lVar13 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_4 + 0x30) + uVar6 * 0x10);
      uVar2 = puVar1[1];
      uVar8 = *(undefined8 *)(*(long *)(param_4 + 0x38) + uVar6 * 8);
      uVar11 = uVar11 - 1 & uVar11;
      *param_2 = *puVar1;
      param_2[1] = uVar2;
      param_2[2] = uVar8;
      if (lVar12 == param_3) break;
      param_2 = param_2 + 3;
      func_0x000107c61434();
      func_0x000107c61174(uVar8);
      lVar5 = lVar13;
    }
    func_0x000107c61434();
    func_0x000107c61174(uVar8);
  }
LAB_1020a9a60:
  *param_1 = param_4;
  param_1[1] = (long)puVar9;
  param_1[2] = ~uVar7;
  param_1[3] = lVar13;
  param_1[4] = uVar11;
  return param_3;
}



/* Entry: 1020a9ab0; end: 1020a9ad7;  */

/* WARNING: Removing unreachable block (ram,0x0001020a5e40) */
/* WARNING: Removing unreachable block (ram,0x0001020a5e50) */
/* WARNING: Removing unreachable block (ram,0x0001020a5f60) */
/* WARNING: Removing unreachable block (ram,0x0001020a5e5c) */
/* WARNING: Removing unreachable block (ram,0x0001020a5e64) */
/* WARNING: Removing unreachable block (ram,0x0001020a5ee8) */
/* WARNING: Removing unreachable block (ram,0x0001020a5ef4) */
/* WARNING: Removing unreachable block (ram,0x0001020a5ef8) */
/* WARNING: Removing unreachable block (ram,0x0001020a5efc) */
/* WARNING: Removing unreachable block (ram,0x0001020a5f10) */

undefined * FUN_1020a9ab0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x10) <= lVar5) {
    lVar1 = lVar5;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar1 != 0) {
    puVar2 = (undefined *)0x112e56200;
    func_0x0001000285a8(0x112e56200,&UNK_10da58d88);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    *(long *)(puVar2 + 0x10) = lVar5;
    *(long *)(puVar2 + 0x18) = ((long)(puVar3 + -0x20) / 0x18) * 2;
  }
  uVar4 = 0x112e561f8;
  func_0x0001000285a8(0x112e561f8,&UNK_10da58d78);
  func_0x000107c6140c(puVar2 + 0x20,param_1 + 0x20,lVar5,uVar4);
  func_0x000107c61574(param_1);
  return puVar2;
}



/* Entry: 1020a9ad8; end: 1020a9baf;  */

undefined8 FUN_1020a9ad8(ulong *param_1,ulong *param_2)

{
  long *plVar1;
  ulong *puVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uStack_68;
  
  uVar11 = param_1[1];
  uVar8 = param_2[1];
  if (uVar11 == 0) {
    if (uVar8 != 0) {
      return 0;
    }
  }
  else {
    if (uVar8 == 0) {
      return 0;
    }
    uVar12 = *param_1;
    if ((uVar12 != *param_2 || uVar11 != uVar8) &&
       (func_0x000107c605b8(uVar12,uVar11,*param_2,uVar8,0), (uVar12 & 1) == 0)) {
      return 0;
    }
  }
  uVar11 = param_1[3];
  uVar8 = param_2[3];
  if (uVar11 == 0) {
    if (uVar8 == 0) {
LAB_1020a9b88:
      uVar8 = param_1[4];
      uVar11 = param_2[4];
      if (uVar8 == uVar11) {
        uVar13 = 1;
      }
      else if (*(long *)(uVar8 + 0x10) == *(long *)(uVar11 + 0x10)) {
        uVar12 = 1L << ((ulong)*(byte *)(uVar8 + 0x20) & 0x3f);
        uStack_68 = 0xffffffffffffffff;
        if ((*(byte *)(uVar8 + 0x20) & 0x3f) < 6) {
          uStack_68 = ~(-1L << (uVar12 & 0x3f));
        }
        uStack_68 = uStack_68 & *(ulong *)(uVar8 + 0x40);
        func_0x000107c61438(uVar8,2);
        func_0x000107c61434(uVar11);
        lVar5 = 0;
        do {
          while( true ) {
            if (uStack_68 == 0) {
              do {
                lVar14 = lVar5 + 1;
                if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x101058ec0);
                  (*pcVar4)();
                }
                if ((long)(uVar12 + 0x3f >> 6) <= lVar14) {
                  uVar13 = 1;
                  goto code_r0x000101058e70;
                }
                uStack_68 = ((ulong *)(uVar8 + 0x40))[lVar14];
                lVar5 = lVar5 + 1;
              } while (uStack_68 == 0);
              uVar9 = (uStack_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_68 & 0x5555555555555555) << 1;
              uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
              uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
              uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
              uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
              uStack_68 = uStack_68 - 1 & uStack_68;
            }
            else {
              uVar9 = (uStack_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_68 & 0x5555555555555555) << 1;
              uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
              uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
              uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
              uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
              uStack_68 = uStack_68 - 1 & uStack_68;
              lVar14 = lVar5;
            }
            lVar10 = (LZCOUNT(uVar9) | lVar14 << 6) * 0x10;
            plVar1 = (long *)(*(long *)(uVar8 + 0x30) + lVar10);
            lVar5 = *plVar1;
            uVar6 = plVar1[1];
            puVar2 = (ulong *)(*(long *)(uVar8 + 0x38) + lVar10);
            uVar9 = *puVar2;
            uVar3 = puVar2[1];
            func_0x000107c61434(uVar6);
            func_0x000107c61434(uVar3);
            uVar7 = uVar6;
            func_0x000100029284();
            func_0x000107c6142c(uVar6);
            if ((uVar7 & 1) == 0) {
              func_0x000107c6142c(uVar3);
              uVar13 = 0;
              goto code_r0x000101058e70;
            }
            puVar2 = (ulong *)(*(long *)(uVar11 + 0x38) + lVar5 * 0x10);
            uVar6 = *puVar2;
            uVar7 = puVar2[1];
            lVar5 = lVar14;
            if (uVar6 != uVar9 || uVar7 != uVar3) break;
            func_0x000107c6142c(uVar3);
          }
          func_0x000107c605b8(uVar6,uVar7,uVar9,uVar3,0);
          func_0x000107c6142c(uVar3);
        } while ((uVar6 & 1) != 0);
        uVar13 = 0;
code_r0x000101058e70:
        func_0x000107c6142c(uVar11);
        func_0x000107c61430(uVar8,2);
      }
      else {
        uVar13 = 0;
      }
      return uVar13;
    }
  }
  else if (uVar8 != 0) {
    uVar12 = param_1[2];
    if (((uVar12 == param_2[2]) && (uVar11 == uVar8)) ||
       (func_0x000107c605b8(uVar12,uVar11,param_2[2],uVar8,0), (uVar12 & 1) != 0))
    goto LAB_1020a9b88;
  }
  return 0;
}



/* Entry: 1020a9bb0; end: 1020a9ccb;  */

undefined * FUN_1020a9bb0(undefined8 *param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar9 = (undefined *)param_1[2];
  puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar9 != (undefined *)0x0) {
    func_0x0001000285a8(0x112e56220,&UNK_10da58db0);
    puVar6 = puVar9;
    func_0x000107c60498();
    func_0x000107c6157c();
    do {
      uVar3 = param_1[4];
      uVar4 = param_1[5];
      uVar11 = param_1[7];
      uVar10 = param_1[6];
      uVar13 = param_1[9];
      uVar12 = param_1[8];
      func_0x000107c61434(uVar13);
      func_0x000107c61434(uVar4);
      func_0x000107c61434(uVar11);
      uVar7 = uVar3;
      uVar8 = uVar4;
      func_0x000100029284();
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1020a9cc8);
        (*pcVar5)();
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar8 + 0x40) = *(ulong *)(puVar6 + uVar8 + 0x40) | 1L << (uVar7 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar4;
      puVar2 = (undefined8 *)(*(long *)(puVar6 + 0x38) + uVar7 * 0x20);
      puVar2[1] = uVar11;
      *puVar2 = uVar10;
      puVar2[3] = uVar13;
      puVar2[2] = uVar12;
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1020a9ccc);
        (*pcVar5)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      puVar9 = puVar9 + -1;
      param_1 = param_1 + 6;
    } while (puVar9 != (undefined *)0x0);
    func_0x000107c61574(puVar6);
  }
  return puVar6;
}



/* Entry: 1020a9ccc; end: 1020aa327;  */

undefined * FUN_1020a9ccc(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_170 [128];
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  puVar7 = *(undefined **)(param_1 + 0x10);
  if (puVar7 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  func_0x0001000285a8(0x112e56210,&UNK_10da58d98);
  puVar2 = puVar7;
  func_0x000107c60498();
  func_0x000107c6157c();
  uStack_a8 = *(ulong *)(param_1 + 0x68);
  uStack_b0 = *(ulong *)(param_1 + 0x60);
  uStack_98 = *(ulong *)(param_1 + 0x78);
  uStack_a0 = *(ulong *)(param_1 + 0x70);
  uStack_88 = *(ulong *)(param_1 + 0x88);
  uStack_90 = *(ulong *)(param_1 + 0x80);
  uStack_78 = *(ulong *)(param_1 + 0x98);
  uStack_80 = *(ulong *)(param_1 + 0x90);
  uVar9 = *(ulong *)(param_1 + 0x28);
  uVar8 = *(ulong *)(param_1 + 0x20);
  uStack_d8 = *(ulong *)(param_1 + 0x38);
  uStack_e0 = *(ulong *)(param_1 + 0x30);
  uStack_c8 = *(ulong *)(param_1 + 0x48);
  uStack_d0 = *(ulong *)(param_1 + 0x40);
  uStack_b8 = *(ulong *)(param_1 + 0x58);
  uStack_c0 = *(ulong *)(param_1 + 0x50);
  uStack_f0 = uVar8;
  uStack_e8 = uVar9;
  func_0x0001020ab5e8(&uStack_f0,auStack_170,0x112e56218,&UNK_10da58da0);
  uVar3 = uVar8;
  uVar5 = uVar9;
  func_0x000100029284();
  if ((uVar5 & 1) == 0) {
    puVar4 = (ulong *)(param_1 + 0xa0);
    do {
      uVar5 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar5 + 0x40) = *(ulong *)(puVar2 + uVar5 + 0x40) | 1L << (uVar3 & 0x3f);
      puVar6 = (ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 0x10);
      *puVar6 = uVar8;
      puVar6[1] = uVar9;
      puVar6 = (ulong *)(*(long *)(puVar2 + 0x38) + uVar3 * 0x70);
      puVar6[3] = uStack_c8;
      puVar6[2] = uStack_d0;
      puVar6[5] = uStack_b8;
      puVar6[4] = uStack_c0;
      puVar6[1] = uStack_d8;
      *puVar6 = uStack_e0;
      puVar6[0xb] = uStack_88;
      puVar6[10] = uStack_90;
      puVar6[0xd] = uStack_78;
      puVar6[0xc] = uStack_80;
      puVar6[7] = uStack_a8;
      puVar6[6] = uStack_b0;
      puVar6[9] = uStack_98;
      puVar6[8] = uStack_a0;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1020a9e88);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar7 = puVar7 + -1;
      if (puVar7 == (undefined *)0x0) {
        func_0x000107c61574(puVar2);
        return puVar2;
      }
      uStack_a8 = puVar4[9];
      uStack_b0 = puVar4[8];
      uStack_98 = puVar4[0xb];
      uStack_a0 = puVar4[10];
      uStack_88 = puVar4[0xd];
      uStack_90 = puVar4[0xc];
      uStack_78 = puVar4[0xf];
      uStack_80 = puVar4[0xe];
      uVar9 = puVar4[1];
      uVar8 = *puVar4;
      uStack_d8 = puVar4[3];
      uStack_e0 = puVar4[2];
      uStack_c8 = puVar4[5];
      uStack_d0 = puVar4[4];
      uStack_b8 = puVar4[7];
      uStack_c0 = puVar4[6];
      uStack_f0 = uVar8;
      uStack_e8 = uVar9;
      func_0x0001020ab5e8(&uStack_f0,auStack_170,0x112e56218,&UNK_10da58da0);
      uVar3 = uVar8;
      uVar5 = uVar9;
      func_0x000100029284();
      puVar4 = puVar4 + 0x10;
    } while ((uVar5 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1020a9e4c);
  (*pcVar1)();
}



/* Entry: 1020aa328; end: 1020aa41f;  */

undefined * FUN_1020aa328(long param_1,undefined8 param_2,undefined8 param_3)

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
    func_0x0001000285a8(param_2,param_3);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1020aa41c);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1020aa420);
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



/* Entry: 1020aa420; end: 1020aa7eb;  */

/* WARNING: Removing unreachable block (ram,0x0001020aa7e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1020aa420(long param_1)

{
  undefined8 ****ppppuVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 ****ppppuVar7;
  code *pcVar8;
  undefined8 *****pppppuVar9;
  undefined8 *****pppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  undefined *puVar13;
  undefined8 ****ppppuVar14;
  ulong uVar15;
  undefined8 *****pppppuVar16;
  undefined8 ****ppppuVar17;
  undefined8 ****ppppuVar18;
  long lVar19;
  undefined8 ****ppppuVar20;
  undefined8 ****ppppuVar21;
  undefined *puVar22;
  undefined8 ****ppppuVar23;
  undefined8 ****ppppuVar24;
  undefined8 ****ppppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  pppppuVar16 = *(undefined8 ******)(param_1 + 0x10);
  pppppuVar9 = (undefined8 *****)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (pppppuVar16 != (undefined8 *****)0x0) {
    func_0x000107c61434();
    pppppuVar9 = pppppuVar16;
    func_0x0001020a557c(pppppuVar16,0);
    pppppuVar10 = &ppppuStack_88;
    FUN_1020a9930(pppppuVar10,pppppuVar9 + 4,pppppuVar16,param_1);
    func_0x000100ce0cc4(ppppuStack_88,uStack_80,uStack_78,uStack_70,uStack_68);
    if (pppppuVar10 != pppppuVar16) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1020aa494);
      (*pcVar8)();
    }
  }
  ppppuStack_88 = pppppuVar9;
  FUN_1020a8e30(&ppppuStack_88);
  ppppuVar6 = ppppuStack_88;
  ppppuVar14 = (undefined8 ****)ppppuStack_88[2];
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (ppppuVar14 != (undefined8 ****)0x0) {
    ppppuVar21 = (undefined8 ****)0x0;
    pppppuVar9 = (undefined8 *****)PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar22 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      if (ppppuVar6[2] <= ppppuVar21) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1020aa7cc);
        (*pcVar8)();
      }
      pppppuVar16 = (undefined8 *****)(ppppuVar6 + (long)ppppuVar21 * 3 + 4);
      ppppuVar20 = *pppppuVar16;
      ppppuVar3 = pppppuVar16[1];
      ppppuVar17 = pppppuVar16[2];
      func_0x000103b90f24(0);
      func_0x000107c61434(ppppuVar3);
      func_0x000107c61174();
      ppppuVar11 = ppppuVar17;
      func_0x000103b8eee0();
      if ((ulong)ppppuVar11 >> 0x3e == 0) {
        ppppuVar23 = *(undefined8 *****)(((ulong)ppppuVar11 & 0xffffffffffffff8) + 0x10);
        if (ppppuVar23 == (undefined8 ****)0x0) goto LAB_1020aa6c4;
LAB_1020aa558:
        ppppuStack_88 = pppppuVar9;
        func_0x0001020a57fc(0,(ulong)ppppuVar23 & ((long)ppppuVar23 >> 0x3f ^ 0xffffffffffffffffU),0
                           );
        if ((long)ppppuVar23 < 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1020aa7d8);
          (*pcVar8)();
        }
        ppppuVar24 = (undefined8 ****)0x0;
        do {
          ppppuVar7 = ppppuStack_88;
          if (((ulong)ppppuVar11 & 0xc000000000000001) == 0) {
            ppppuVar12 = (undefined8 ****)ppppuVar11[(long)ppppuVar24 + 4];
            func_0x000107c61174();
          }
          else {
            ppppuVar12 = ppppuVar24;
            FUN_1020a4d20();
          }
          ppppuVar1 = *(undefined8 *****)((long)ppppuVar12 + _DAT_112ff1d60);
          ppppuVar4 = (undefined8 ****)((undefined8 *)((long)ppppuVar12 + _DAT_112ff1d60))[1];
          ppppuVar2 = *(undefined8 *****)((long)ppppuVar12 + _DAT_112ff1d68);
          ppppuVar5 = (undefined8 ****)((undefined8 *)((long)ppppuVar12 + _DAT_112ff1d68))[1];
          ppppuVar18 = *(undefined8 *****)((long)ppppuVar12 + _DAT_112ff1d70);
          func_0x000107c61434(ppppuVar3);
          func_0x000107c61434(ppppuVar4);
          func_0x000107c61434(ppppuVar5);
          func_0x000107c61434(ppppuVar18);
          func_0x000107c61170(ppppuVar12);
          ppppuVar12 = (undefined8 ****)ppppuVar7[2];
          ppppuStack_88 = ppppuVar7;
          if ((undefined8 ****)((ulong)ppppuVar7[3] >> 1) <= ppppuVar12) {
            func_0x0001020a57fc((undefined8 ****)0x1 < ppppuVar7[3],
                                (undefined8 ****)((long)ppppuVar12 + 1U),1);
          }
          pppppuVar9 = (undefined8 *****)ppppuStack_88;
          ppppuVar24 = (undefined8 ****)((long)ppppuVar24 + 1);
          ppppuStack_88[2] = (undefined8 ****)((long)ppppuVar12 + 1U);
          ppppuStack_88[(long)ppppuVar12 * 7 + 4] = ppppuVar1;
          ppppuStack_88[(long)ppppuVar12 * 7 + 5] = ppppuVar4;
          ppppuStack_88[(long)ppppuVar12 * 7 + 6] = ppppuVar20;
          ppppuStack_88[(long)ppppuVar12 * 7 + 7] = ppppuVar3;
          ppppuStack_88[(long)ppppuVar12 * 7 + 8] = ppppuVar2;
          ppppuStack_88[(long)ppppuVar12 * 7 + 9] = ppppuVar5;
          ppppuStack_88[(long)ppppuVar12 * 7 + 10] = ppppuVar18;
        } while (ppppuVar23 != ppppuVar24);
        func_0x000107c61170(ppppuVar17);
        func_0x000107c6142c(ppppuVar3);
        func_0x000107c6142c(ppppuVar11);
        pppppuVar16 = (undefined8 *****)PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        ppppuVar23 = (undefined8 ****)((ulong)ppppuVar11 & 0xffffffffffffff8);
        if ((undefined8 ****)0x7fffffffffffffff < ppppuVar11) {
          ppppuVar23 = ppppuVar11;
        }
        func_0x000107c60480();
        if (ppppuVar23 != (undefined8 ****)0x0) goto LAB_1020aa558;
LAB_1020aa6c4:
        func_0x000107c61170(ppppuVar17);
        func_0x000107c6142c(ppppuVar3);
        func_0x000107c6142c(ppppuVar11);
        pppppuVar16 = pppppuVar9;
      }
      ppppuVar20 = pppppuVar9[2];
      lVar19 = *(long *)(puVar22 + 0x10);
      if (SCARRY8(lVar19,(long)ppppuVar20)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1020aa7d0);
        (*pcVar8)();
      }
      puVar13 = puVar22;
      func_0x000107c61558();
      if (((int)puVar13 == 0) ||
         (uVar15 = *(ulong *)(puVar22 + 0x18) >> 1, (long)uVar15 < lVar19 + (long)ppppuVar20)) {
        FUN_1020a62c4();
        uVar15 = *(ulong *)(puVar13 + 0x18) >> 1;
        puVar22 = puVar13;
        if (pppppuVar9[2] == (undefined8 ****)0x0) goto LAB_1020aa4dc;
LAB_1020aa748:
        if ((undefined8 ****)(uVar15 - *(long *)(puVar13 + 0x10)) < ppppuVar20) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1020aa7dc);
          (*pcVar8)();
        }
        func_0x000107c6140c(puVar13 + *(long *)(puVar13 + 0x10) * 0x38 + 0x20,pppppuVar9 + 4,
                            ppppuVar20,&UNK_1104c6840);
        func_0x000107c6142c(pppppuVar9);
        if (ppppuVar20 != (undefined8 ****)0x0) {
          if (SCARRY8(*(long *)(puVar13 + 0x10),(long)ppppuVar20)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1020aa7e0);
            (*pcVar8)();
          }
          *(long *)(puVar13 + 0x10) = *(long *)(puVar13 + 0x10) + (long)ppppuVar20;
        }
      }
      else {
        puVar13 = puVar22;
        if (pppppuVar9[2] != (undefined8 ****)0x0) goto LAB_1020aa748;
LAB_1020aa4dc:
        func_0x000107c6142c(pppppuVar9);
        puVar13 = puVar22;
        if (ppppuVar20 != (undefined8 ****)0x0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1020aa7d4);
          (*pcVar8)();
        }
      }
      ppppuVar21 = (undefined8 ****)((long)ppppuVar21 + 1);
      pppppuVar9 = pppppuVar16;
      puVar22 = puVar13;
    } while (ppppuVar21 != ppppuVar14);
  }
  func_0x000107c61574(ppppuVar6);
  return puVar13;
}



/* Entry: 1020aa7ec; end: 1020aa877;  */

void FUN_1020aa7ec(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  plVar6 = (long *)0x230;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1020aa878;
  plVar6[0x3d] = lVar5;
  plVar6[0x3e] = lVar3;
  plVar6[0x3b] = lVar4;
  plVar6[0x3c] = lVar2;
  plVar6[0x3a] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1020a3028,0,0);
  return;
}



/* Entry: 1020aa878; end: 1020aa8b3;  */

void FUN_1020aa878(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001020aa8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 1020aa8b4; end: 1020aa8e3;  */

void FUN_1020aa8b4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
  func_0x000107c61434();
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar1);
  return;
}



/* Entry: 1020aa8e4; end: 1020aa9e3;  */

ulong FUN_1020aa8e4(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = param_3 & 0xffffffffffff;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar1 = param_4 >> 0x38 & 0xf;
  }
  uVar2 = param_1;
  uVar3 = param_2;
  if (uVar1 != 0) {
    uVar2 = param_3;
    uVar3 = param_4;
  }
  uVar1 = param_1;
  uVar4 = param_2;
  if (param_4 != 0) {
    uVar1 = uVar2;
    uVar4 = uVar3;
  }
  func_0x000107c61434(uVar4);
  uVar2 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = param_2 >> 0x38 & 0xf;
  }
  if (uVar2 != 0) {
    lVar5 = 0x112d36008;
    func_0x0001000285a8(0x112d36008,&UNK_10d900720);
    func_0x000107c613fc();
    *(undefined8 *)(lVar5 + 0x18) = 2;
    *(undefined8 *)(lVar5 + 0x10) = 1;
    *(undefined **)(lVar5 + 0x38) = PTR___sSSN_11034da80;
    lVar6 = lVar5;
    func_0x00010075bbf0();
    *(long *)(lVar5 + 0x40) = lVar6;
    *(ulong *)(lVar5 + 0x20) = param_1;
    *(ulong *)(lVar5 + 0x28) = param_2;
    func_0x000107c61434(param_2);
    func_0x000107c5fb00(param_5,param_6,lVar5);
  }
  return uVar1;
}



/* Entry: 1020aa9e4; end: 1020aae63;  */

void FUN_1020aa9e4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,long param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined1 *puVar17;
  ulong *puVar18;
  undefined1 *puVar19;
  ulong uVar20;
  undefined8 *puStack_d8;
  undefined8 *puStack_d0;
  undefined8 *puStack_c0;
  undefined1 auStack_a8 [16];
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_68;
  
  if (param_3 == (undefined8 *)0x0) {
    puStack_c0 = (undefined8 *)0x0;
    puStack_d8 = (undefined8 *)0x0;
    puStack_d0 = (undefined8 *)0xe000000000000000;
    puVar7 = param_3;
  }
  else {
    puVar5 = param_3;
    puVar14 = param_3;
    func_0x000107c4d3e4();
    func_0x000107c61180();
    if (puVar5 == (undefined8 *)0x0) {
      puStack_d8 = (undefined8 *)0x0;
      puStack_d0 = (undefined8 *)0xe000000000000000;
      puVar7 = puVar14;
    }
    else {
      puStack_d8 = puVar5;
      func_0x000107c5faec();
      puVar7 = puVar14;
      func_0x000107c61170(puVar5);
      puStack_d0 = puVar14;
    }
    puStack_c0 = param_3;
    func_0x000107c4045c();
    func_0x000107c61180();
  }
  lVar15 = param_2[6];
  uVar9 = *(ulong *)(lVar15 + 0x10);
  uVar20 = uVar9;
  if (2 < uVar9) {
    uVar20 = 3;
  }
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lStack_68 = lVar15;
  if (uVar9 != 0) {
    puStack_80 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61434(lVar15);
    func_0x0001020a57e0(0,uVar20,0);
    lVar13 = param_5[4];
    puVar18 = (ulong *)(lVar15 + 0x28);
    do {
      puVar11 = puStack_80;
      if (uVar20 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1020aae64);
        (*pcVar4)();
      }
      uVar9 = puVar18[-1];
      uVar2 = *puVar18;
      if (lVar13 == 0) {
        func_0x000107c61434(uVar2);
LAB_1020aab68:
        lVar15 = *(long *)(param_4 + 0x10);
joined_r0x0001020aab6c:
        if (lVar15 == 0) {
          uVar12 = 0;
          uVar10 = 0;
        }
        else {
          func_0x000107c61434(param_4);
          uVar6 = uVar9;
          uVar8 = uVar2;
          func_0x000100029284();
          if ((uVar8 & 1) == 0) {
            func_0x000107c6142c(param_4);
            uVar12 = 0;
            uVar10 = 0;
          }
          else {
            puVar7 = (undefined8 *)(*(long *)(param_4 + 0x38) + uVar6 * 0x10);
            uVar12 = *puVar7;
            uVar10 = puVar7[1];
            func_0x000107c61434(uVar10);
            func_0x000107c6142c(param_4);
          }
        }
      }
      else {
        lVar15 = *(long *)(lVar13 + 0x10);
        lStack_98 = lVar13;
        func_0x000107c61434(uVar2);
        if (lVar15 == 0) goto LAB_1020aab68;
        func_0x0001020ab5e8(&lStack_98,&uStack_90,0x112d550a0,&UNK_10d91c290);
        uVar6 = uVar9;
        uVar8 = uVar2;
        func_0x000100029284();
        if ((uVar8 & 1) == 0) {
          func_0x0001020ab198(&lStack_98,0x112d550a0,&UNK_10d91c290);
          lVar15 = *(long *)(param_4 + 0x10);
          goto joined_r0x0001020aab6c;
        }
        puVar7 = (undefined8 *)(*(long *)(lVar13 + 0x38) + uVar6 * 0x10);
        uVar12 = *puVar7;
        uVar10 = puVar7[1];
        func_0x000107c61434(uVar10);
        func_0x0001020ab198(&lStack_98,0x112d550a0,&UNK_10d91c290);
      }
      uVar6 = *(ulong *)(puVar11 + 0x10);
      puStack_80 = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar6) {
        func_0x0001020a57e0(1 < *(ulong *)(puVar11 + 0x18),uVar6 + 1,1);
      }
      puVar11 = puStack_80;
      *(ulong *)(puStack_80 + 0x10) = uVar6 + 1;
      *(ulong *)(puStack_80 + uVar6 * 0x20 + 0x20) = uVar9;
      *(ulong *)(puStack_80 + uVar6 * 0x20 + 0x28) = uVar2;
      *(undefined8 *)(puStack_80 + uVar6 * 0x20 + 0x30) = uVar12;
      *(undefined8 *)(puStack_80 + uVar6 * 0x20 + 0x38) = uVar10;
      puVar18 = puVar18 + 2;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
    puVar7 = (undefined8 *)0x112d38270;
    func_0x0001020ab198(&lStack_68,0x112d38270,&UNK_10d905a20);
  }
  if (param_5[4] == 0) {
    uVar12 = 0;
    uVar10 = 0;
  }
  else {
    uVar12 = *param_5;
    uVar10 = param_5[1];
  }
  func_0x0001020ba9bc();
  puVar5 = puStack_d0;
  FUN_1020aa8e4();
  func_0x000107c6142c(puStack_d0);
  func_0x000107c6142c(puVar7);
  uStack_78 = param_2[1];
  puStack_80 = (undefined *)*param_2;
  uStack_88 = param_2[5];
  uStack_90 = param_2[4];
  if (param_3 == (undefined8 *)0x0) {
    func_0x000100402194(&puStack_80,auStack_a8);
    func_0x000107c61434(uVar10);
    func_0x000107c61434(puVar5);
    puVar7 = &uStack_90;
    func_0x000100402194(puVar7,auStack_a8);
    puVar16 = (undefined8 *)0x0;
    puVar14 = (undefined8 *)0x0;
    puVar17 = (undefined1 *)0x0;
    puVar19 = (undefined1 *)0x0;
    goto LAB_1020aadec;
  }
  func_0x000100402194(&puStack_80,auStack_a8);
  func_0x000107c61434(uVar10);
  func_0x000107c61434(puVar5);
  puVar17 = auStack_a8;
  func_0x000100402194(&uStack_90);
  puVar7 = param_3;
  func_0x000107c5d2d8();
  func_0x000107c61180();
  puVar19 = puVar17;
  if (puVar7 == (undefined8 *)0x0) {
LAB_1020aad5c:
    puVar14 = (undefined8 *)0x0;
    puVar17 = (undefined1 *)0x0;
  }
  else {
    puVar16 = puVar7;
    func_0x000107c4f8bc();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    puVar19 = puVar17;
    if (puVar16 == (undefined8 *)0x0) goto LAB_1020aad5c;
    puVar14 = puVar16;
    func_0x000107c5faec();
    puVar19 = puVar17;
    func_0x000107c61170(puVar16);
  }
  func_0x000107c5d2d8();
  func_0x000107c61180();
  if (param_3 != (undefined8 *)0x0) {
    puVar7 = param_3;
    func_0x000107c4f8b8();
    func_0x000107c61180();
    func_0x000107c61170();
    if (puVar7 != (undefined8 *)0x0) {
      puVar16 = puVar7;
      func_0x000107c5faec();
      func_0x000107c61170();
      goto LAB_1020aadec;
    }
  }
  puVar7 = param_3;
  puVar16 = (undefined8 *)0x0;
  puVar19 = (undefined1 *)0x0;
LAB_1020aadec:
  func_0x000103f7c3bc();
  uVar1 = *puVar7;
  uVar3 = puVar7[1];
  func_0x000107c61434(uVar3);
  func_0x000107c6142c(uVar10);
  func_0x000107c6142c(puVar5);
  param_1[1] = uStack_78;
  *param_1 = puStack_80;
  param_1[2] = puStack_d8;
  param_1[3] = puVar5;
  param_1[4] = uVar12;
  param_1[5] = uVar10;
  param_1[6] = puStack_c0;
  *(undefined2 *)(param_1 + 7) = 0;
  param_1[8] = puVar11;
  param_1[10] = uStack_88;
  param_1[9] = uStack_90;
  param_1[0xb] = puVar14;
  param_1[0xc] = puVar17;
  param_1[0xd] = puVar16;
  param_1[0xe] = puVar19;
  param_1[0xf] = uVar1;
  param_1[0x10] = uVar3;
  return;
}



/* Entry: 1020aae64; end: 1020aaeff;  */

undefined8 FUN_1020aae64(undefined8 param_1,undefined8 param_2)

{
  FUN_1020a2864(param_2,param_1,&UNK_1104c6840);
  return param_2;
}



/* Entry: 1020aaf00; end: 1020ab127;  */

void FUN_1020aaf00(long param_1,uint param_2,long *param_3)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 auStack_110 [80];
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != 0) {
    puVar10 = (ulong *)(param_1 + 0x20);
    do {
      uVar13 = puVar10[7];
      uVar11 = puVar10[6];
      uVar18 = puVar10[9];
      uVar15 = puVar10[8];
      uVar14 = puVar10[3];
      uVar12 = puVar10[2];
      uVar19 = puVar10[5];
      uVar16 = puVar10[4];
      uVar20 = puVar10[1];
      uVar17 = *puVar10;
      uStack_c0 = uVar17;
      uStack_b8 = uVar20;
      uStack_b0 = uVar12;
      uStack_a8 = uVar14;
      uStack_a0 = uVar16;
      uStack_98 = uVar19;
      uStack_90 = uVar11;
      uStack_88 = uVar13;
      uStack_80 = uVar15;
      uStack_78 = uVar18;
      func_0x0001020ab5e8(&uStack_c0,auStack_110,0x112e561c8,&UNK_10da58d48);
      if (uVar20 == 0) {
        return;
      }
      lVar9 = *param_3;
      uVar3 = uVar17;
      uVar4 = uVar20;
      func_0x000100029284();
      lVar5 = *(long *)(lVar9 + 0x10);
      uVar6 = (ulong)~(uint)uVar4 & 1;
      lVar8 = lVar5 + uVar6;
      if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1020ab114);
        (*pcVar2)();
      }
      if (*(long *)(lVar9 + 0x18) < lVar8) {
        func_0x0001020a7934(lVar8,param_2 & 1);
        uVar3 = uVar17;
        uVar6 = uVar20;
        func_0x000100029284();
        if (((uint)uVar4 & 1) != ((uint)uVar6 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1020ab128);
          (*pcVar2)();
        }
LAB_1020ab068:
        if ((uVar4 & 1) == 0) goto LAB_1020ab06c;
LAB_1020aaf3c:
        lVar8 = *param_3;
        func_0x000107c6142c(uVar20);
        puVar1 = (ulong *)(*(long *)(lVar8 + 0x38) + uVar3 * 0x40);
        uStack_98 = puVar1[5];
        uStack_a0 = puVar1[4];
        uStack_88 = puVar1[7];
        uStack_90 = puVar1[6];
        uStack_b8 = puVar1[1];
        uStack_c0 = *puVar1;
        uStack_a8 = puVar1[3];
        uStack_b0 = puVar1[2];
        *puVar1 = uVar12;
        puVar1[1] = uVar14;
        puVar1[2] = uVar16;
        puVar1[3] = uVar19;
        puVar1[4] = uVar11;
        puVar1[5] = uVar13;
        puVar1[6] = uVar15;
        puVar1[7] = uVar18;
        FUN_1020ab128(&uStack_c0);
      }
      else {
        if ((param_2 & 1) != 0) goto LAB_1020ab068;
        FUN_1020a699c();
        if ((uVar4 & 1) != 0) goto LAB_1020aaf3c;
LAB_1020ab06c:
        lVar5 = *param_3;
        lVar8 = lVar5 + (uVar3 >> 6) * 8;
        *(ulong *)(lVar8 + 0x40) = *(ulong *)(lVar8 + 0x40) | 1L << (uVar3 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar5 + 0x30) + uVar3 * 0x10);
        *puVar1 = uVar17;
        puVar1[1] = uVar20;
        puVar1 = (ulong *)(*(long *)(lVar5 + 0x38) + uVar3 * 0x40);
        *puVar1 = uVar12;
        puVar1[1] = uVar14;
        puVar1[2] = uVar16;
        puVar1[3] = uVar19;
        puVar1[4] = uVar11;
        puVar1[5] = uVar13;
        puVar1[6] = uVar15;
        puVar1[7] = uVar18;
        if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1020ab118);
          (*pcVar2)();
        }
        *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
      }
      puVar10 = puVar10 + 10;
      param_2 = 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



/* Entry: 1020ab128; end: 1020ab1d7;  */

undefined8 FUN_1020ab128(undefined8 param_1)

{
  (*(code *)&DAT_1043397a4)();
  return param_1;
}



/* Entry: 1020ab1d8; end: 1020ab207;  */

void FUN_1020ab1d8(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  long unaff_x20;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar14 = *(long *)(unaff_x20 + 0x10);
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  if (param_1 != (undefined *)0x0) {
    puVar4 = param_1;
  }
  if ((ulong)puVar4 >> 0x3e == 0) {
    puVar18 = *(undefined **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar18 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar4) {
      puVar18 = puVar4;
    }
    func_0x000107c60480();
  }
  if (puVar18 == (undefined *)0x0) {
    func_0x000107c61434(param_1);
  }
  else {
    func_0x000107c61434(param_1);
    uVar17 = 0;
    do {
      if (((ulong)puVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1020a4238);
          (*pcVar5)();
        }
        uVar7 = *(ulong *)(puVar4 + uVar17 * 8 + 0x20);
        func_0x000107c61174();
        puVar11 = param_2;
      }
      else {
        uVar7 = uVar17;
        puVar11 = puVar4;
        FUN_1020a4b64(uVar17,puVar4,&PTR_PTR_1126b15c8,0x112d4ed88);
      }
      puVar1 = (undefined *)(uVar17 + 1);
      if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1020a4234);
        (*pcVar5)();
      }
      uVar16 = uVar7;
      func_0x000107c5d984();
      func_0x000107c61180();
      puVar12 = puVar11;
      if (uVar16 == 0) {
LAB_1020a4034:
        func_0x000107c61170(uVar7);
        param_2 = puVar12;
      }
      else {
        uVar8 = uVar16;
        func_0x000107c5faec();
        puVar12 = puVar11;
        func_0x000107c61170(uVar16);
        uVar16 = uVar7;
        func_0x000107c3e9e8();
        func_0x000107c61180();
        if (uVar16 == 0) {
LAB_1020a402c:
          func_0x000107c6142c(puVar11);
          goto LAB_1020a4034;
        }
        uVar15 = uVar16;
        func_0x000107c3e978();
        func_0x000107c61180();
        func_0x000107c61170(uVar16);
        if (uVar15 == 0) goto LAB_1020a402c;
        uVar9 = uVar15;
        func_0x000107c5faec();
        func_0x000107c61170(uVar15);
        puVar10 = puVar6;
        func_0x000107c61558();
        uVar16 = uVar8;
        param_2 = puVar11;
        func_0x000100029284();
        uVar15 = (ulong)~(uint)param_2 & 1;
        lVar2 = *(long *)(puVar6 + 0x10) + uVar15;
        if (SCARRY8(*(long *)(puVar6 + 0x10),uVar15)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1020a423c);
          (*pcVar5)();
        }
        if (*(long *)(puVar6 + 0x18) < lVar2) {
          func_0x0001001833c8(lVar2,puVar10);
          uVar16 = uVar8;
          puVar13 = puVar11;
          func_0x000100029284();
          if (((uint)param_2 & 1) != ((uint)puVar13 & 1)) {
            func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1020a42a8);
            (*pcVar5)();
          }
joined_r0x0001020a41cc:
          uVar15 = (ulong)param_2 & 1;
          param_2 = puVar13;
          if (uVar15 != 0) goto LAB_1020a4194;
LAB_1020a41d0:
          *(ulong *)(puVar6 + (uVar16 >> 6) * 8 + 0x40) =
               *(ulong *)(puVar6 + (uVar16 >> 6) * 8 + 0x40) | 1L << (uVar16 & 0x3f);
          puVar3 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar16 * 0x10);
          *puVar3 = uVar8;
          puVar3[1] = (ulong)puVar11;
          puVar3 = (ulong *)(*(long *)(puVar6 + 0x38) + uVar16 * 0x10);
          *puVar3 = uVar9;
          puVar3[1] = (ulong)puVar12;
          func_0x000107c61170(uVar7);
          if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1020a4240);
            (*pcVar5)();
          }
          *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
          param_2 = puVar13;
        }
        else {
          puVar13 = param_2;
          if (((ulong)puVar10 & 1) == 0) {
            func_0x000100184498();
            goto joined_r0x0001020a41cc;
          }
          if (((ulong)param_2 & 1) == 0) goto LAB_1020a41d0;
LAB_1020a4194:
          puVar3 = (ulong *)(*(long *)(puVar6 + 0x38) + uVar16 * 0x10);
          uVar16 = puVar3[1];
          *puVar3 = uVar9;
          puVar3[1] = (ulong)puVar12;
          func_0x000107c6142c(puVar11);
          func_0x000107c61170(uVar7);
          func_0x000107c6142c(uVar16);
        }
      }
      uVar17 = uVar17 + 1;
    } while (puVar1 != puVar18);
  }
  func_0x000107c6142c(puVar4);
  **(undefined8 **)(*(long *)(lVar14 + 0x40) + 0x28) = puVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)();
  return;
}



/* Entry: 1020ab208; end: 1020ab227;  */

void FUN_1020ab208(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1020ab228; end: 1020ab233;  */

void FUN_1020ab228(ulong param_1)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  long unaff_x20;
  ulong uVar15;
  ulong uVar16;
  undefined *puStack_78;
  
  puVar2 = *(ulong **)(unaff_x20 + 0x10);
  puVar3 = *(ulong **)(unaff_x20 + 0x18);
  uVar12 = param_1;
  func_0x000107c5d98c();
  func_0x000107c61180();
  if (uVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1020a3d60);
    (*pcVar4)();
  }
  uVar5 = 0;
  func_0x0001020ab630(0,0x112e03f30,&PTR_PTR_1126b14c8);
  uVar6 = uVar12;
  puVar14 = PTR___sSSN_11034da80;
  func_0x000107c5f9e8(uVar12,PTR___sSSN_11034da80,uVar5,PTR___sSSSHsWP_11034da90);
  func_0x000107c61170(uVar12);
  uVar12 = uVar6;
  FUN_1020ab25c();
  func_0x000107c6142c(uVar6);
  uVar6 = *puVar2;
  *puVar2 = uVar12;
  func_0x000107c6142c(uVar6);
  uVar12 = param_1;
  func_0x000107c44520();
  func_0x000107c61180();
  if (uVar12 != 0) {
    uVar6 = uVar12;
    func_0x000107c5faec();
    func_0x000107c61170(uVar12);
    uVar12 = uVar6 & 0xffffffffffff;
    if (((ulong)puVar14 & 0x2000000000000000) != 0) {
      uVar12 = (ulong)puVar14 >> 0x38 & 0xf;
    }
    if (uVar12 != 0) goto LAB_1020a3d2c;
    func_0x000107c6142c(puVar14);
  }
  func_0x000107c4e3a4();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1020a3d64);
    (*pcVar4)();
  }
  uVar12 = param_1;
  func_0x000107c5fc54();
  func_0x000107c61170(param_1);
  uVar6 = uVar12 & 0xffffffffffffff8;
  if (uVar12 >> 0x3e == 0) {
    uVar15 = *(ulong *)(uVar6 + 0x10);
  }
  else {
    uVar15 = uVar6;
    if (0x7fffffffffffffff < uVar12) {
      uVar15 = uVar12;
    }
    func_0x000107c60480();
  }
  puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar15 != 0) {
    uVar16 = 0;
    do {
      while( true ) {
        if ((uVar12 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar6 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1020a3c94);
            (*pcVar4)();
          }
          uVar7 = *(ulong *)(uVar12 + uVar16 * 8 + 0x20);
          func_0x000107c61174();
          uVar13 = uVar5;
        }
        else {
          uVar7 = uVar16;
          uVar13 = uVar12;
          FUN_1020a4b64(uVar16,uVar12,&PTR_PTR_1126b14c8,0x112e03f30);
        }
        uVar1 = uVar16 + 1;
        if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1020a3c90);
          (*pcVar4)();
        }
        uVar5 = uVar7;
        func_0x000107c5b464();
        func_0x000107c61180();
        if (uVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1020a3d5c);
          (*pcVar4)();
        }
        uVar8 = uVar5;
        func_0x000107c42120();
        func_0x000107c61180();
        func_0x000107c61170(uVar5);
        if (uVar8 != 0) break;
        func_0x000107c61170(uVar7);
LAB_1020a3b30:
        uVar5 = uVar13;
        uVar16 = uVar16 + 1;
        if (uVar1 == uVar15) goto LAB_1020a3cb4;
      }
      uVar9 = uVar8;
      func_0x000107c5faec();
      uVar5 = uVar13;
      func_0x000107c61170(uVar8);
      uVar8 = uVar9 & 0xffffffffffff;
      if ((uVar13 & 0x2000000000000000) != 0) {
        uVar8 = uVar13 >> 0x38 & 0xf;
      }
      func_0x000107c61170(uVar7);
      if (uVar8 == 0) {
        func_0x000107c6142c(uVar13);
        uVar13 = uVar5;
        goto LAB_1020a3b30;
      }
      puVar14 = puStack_78;
      func_0x000107c61558();
      if (((ulong)puVar14 & 1) == 0) {
        uVar5 = *(long *)(puStack_78 + 0x10) + 1;
        puVar14 = (undefined *)0x0;
        func_0x0001020a5f64(0,uVar5,1,puStack_78,PTR__swift_bridgeObjectRelease_11034f258);
        puStack_78 = puVar14;
      }
      uVar7 = *(ulong *)(puStack_78 + 0x10);
      uVar16 = uVar7 + 1;
      if (*(ulong *)(puStack_78 + 0x18) >> 1 <= uVar7) {
        puVar14 = (undefined *)(ulong)(1 < *(ulong *)(puStack_78 + 0x18));
        uVar5 = uVar16;
        func_0x0001020a5f64(puVar14,uVar16,1,puStack_78,PTR__swift_bridgeObjectRelease_11034f258);
        puStack_78 = puVar14;
      }
      *(ulong *)(puStack_78 + 0x10) = uVar16;
      *(ulong *)(puStack_78 + uVar7 * 0x10 + 0x20) = uVar9;
      *(ulong *)(puStack_78 + uVar7 * 0x10 + 0x28) = uVar13;
      uVar16 = uVar1;
    } while (uVar1 != uVar15);
  }
LAB_1020a3cb4:
  func_0x000107c6142c(uVar12);
  uVar10 = 0x112d38270;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar11 = uVar10;
  func_0x00010011d734();
  uVar6 = 0x202c;
  puVar14 = (undefined *)0xe200000000000000;
  func_0x000107c5fa80(0x202c,0xe200000000000000,uVar10,uVar11);
  func_0x000107c6142c(puStack_78);
  uVar12 = uVar6 & 0xffffffffffff;
  if (((ulong)puVar14 & 0x2000000000000000) != 0) {
    uVar12 = (ulong)puVar14 >> 0x38 & 0xf;
  }
  if (uVar12 == 0) {
    func_0x000107c6142c(puVar14);
    uVar6 = 0;
    puVar14 = (undefined *)0x0;
  }
LAB_1020a3d2c:
  uVar12 = puVar3[1];
  *puVar3 = uVar6;
  puVar3[1] = (ulong)puVar14;
  func_0x000107c6142c(uVar12);
  return;
}



/* Entry: 1020ab234; end: 1020ab253;  */

void FUN_1020ab234(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1020ab254; end: 1020ab25b;  */

void FUN_1020ab254(long param_1)

{
  ulong *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  
  puVar1 = *(ulong **)(unaff_x20 + 0x10);
  func_0x000107c42144(param_1,puVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar3 = param_1;
    func_0x000107c5fc54();
    func_0x000107c61170(param_1);
    uVar4 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uVar5 = uVar4;
    func_0x00010011d734();
    uVar6 = 0x202c;
    uVar8 = 0xe200000000000000;
    func_0x000107c5fa80(0x202c,0xe200000000000000,uVar4,uVar5);
    func_0x000107c6142c(lVar3);
    uVar7 = uVar6 & 0xffffffffffff;
    if ((uVar8 & 0x2000000000000000) != 0) {
      uVar7 = uVar8 >> 0x38 & 0xf;
    }
    if (uVar7 == 0) {
      func_0x000107c6142c(uVar8);
      uVar6 = 0;
      uVar8 = 0;
    }
    uVar7 = puVar1[1];
    *puVar1 = uVar6;
    puVar1[1] = uVar8;
    func_0x000107c6142c(uVar7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1020a3e38);
  (*pcVar2)();
}



/* Entry: 1020ab25c; end: 1020ab5ab;  */

undefined * FUN_1020ab25c(long param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong uVar20;
  undefined1 auStack_a8 [72];
  
  puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar19 = (ulong *)(param_1 + 0x40);
  uVar15 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if (-uVar15 < 0x40) {
    uVar18 = ~(-1L << (-uVar15 & 0x3f));
  }
  uVar18 = uVar18 & *puVar19;
  lVar7 = param_1;
  func_0x000107c61434();
  lVar11 = 0;
  lVar3 = lVar11;
  do {
    while( true ) {
      while (uVar18 == 0) {
        bVar6 = SCARRY8(lVar11,1);
        lVar11 = lVar11 + 1;
        if (bVar6) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1020ab5a4);
          (*pcVar5)();
        }
        if ((long)(0x3f - uVar15 >> 6) <= lVar11) {
          func_0x000100ce0cc4(param_1,puVar19,~uVar15,lVar3,0);
          return puVar4;
        }
        uVar18 = puVar19[lVar11];
      }
      uVar2 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) | lVar11 << 6;
      puVar1 = (ulong *)(*(long *)(param_1 + 0x30) + uVar12 * 0x10);
      uVar2 = *puVar1;
      uVar20 = puVar1[1];
      uVar17 = *(ulong *)(*(long *)(param_1 + 0x38) + uVar12 * 8);
      func_0x000107c61434(uVar20);
      func_0x000107c61174();
      uVar12 = uVar17;
      func_0x000107c5b464();
      func_0x000107c61180();
      if (uVar12 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1020ab5ac);
        (*pcVar5)();
      }
      uVar18 = uVar18 - 1 & uVar18;
      uVar13 = uVar12;
      func_0x000107c3e9e8();
      func_0x000107c61180();
      func_0x000107c61170(uVar12);
      uVar12 = param_2;
      lVar3 = lVar11;
      if (uVar13 != 0) break;
LAB_1020ab304:
      func_0x000107c61170(uVar17);
LAB_1020ab30c:
      func_0x000107c6142c(uVar20);
      param_2 = uVar12;
    }
    uVar8 = uVar13;
    func_0x000107c3e978();
    func_0x000107c61180();
    func_0x000107c61170(uVar13);
    uVar12 = param_2;
    if (uVar8 == 0) goto LAB_1020ab304;
    uVar9 = uVar8;
    func_0x000107c5faec();
    uVar12 = param_2;
    func_0x000107c61170(uVar8);
    uVar13 = uVar9 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar13 = param_2 >> 0x38 & 0xf;
    }
    param_1 = lVar7;
    if (uVar13 == 0) {
      func_0x000107c61170(uVar17);
      func_0x000107c6142c(uVar20);
      uVar20 = param_2;
      goto LAB_1020ab30c;
    }
    uVar12 = *(ulong *)(puVar4 + 0x10);
    if (uVar12 < *(ulong *)(puVar4 + 0x18)) {
      func_0x000107c61434(uVar20);
      func_0x000107c61174(uVar17);
    }
    else {
      func_0x000107c61434(uVar20);
      func_0x000107c61174(uVar17);
      func_0x0001001833c8(uVar12 + 1,1);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(puVar4 + 0x28));
    puVar10 = auStack_a8;
    uVar8 = uVar2;
    func_0x000107c5fb58(puVar10,uVar2,uVar20);
    func_0x000107c606a8();
    uVar16 = -1L << ((ulong)(byte)puVar4[0x20] & 0x3f);
    uVar14 = (ulong)puVar10 & (uVar16 ^ 0xffffffffffffffff);
    uVar13 = uVar14 >> 6;
    uVar12 = -1L << (uVar14 & 0x3f) & (*(ulong *)(puVar4 + uVar13 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar12 == 0) {
      bVar6 = false;
      uVar12 = 0x3f - uVar16 >> 6;
      do {
        uVar14 = uVar13 + 1;
        if ((uVar14 == uVar12) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1020ab5a8);
          (*pcVar5)();
        }
        uVar13 = 0;
        if (uVar14 != uVar12) {
          uVar13 = uVar14;
        }
        bVar6 = (bool)(uVar14 == uVar12 | bVar6);
      } while (*(ulong *)(puVar4 + uVar13 * 8 + 0x40) == 0xffffffffffffffff);
      uVar12 = ~*(ulong *)(puVar4 + uVar13 * 8 + 0x40);
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar13 << 6;
    }
    else {
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar14 & 0x7fffffffffffffc0;
    }
    uVar13 = uVar12 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(puVar4 + uVar13 + 0x40) = 1L << (uVar12 & 0x3f) | *(ulong *)(puVar4 + uVar13 + 0x40);
    puVar1 = (ulong *)(*(long *)(puVar4 + 0x30) + uVar12 * 0x10);
    *puVar1 = uVar2;
    puVar1[1] = uVar20;
    puVar1 = (ulong *)(*(long *)(puVar4 + 0x38) + uVar12 * 0x10);
    *puVar1 = uVar9;
    puVar1[1] = param_2;
    *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
    func_0x000107c6142c(uVar20);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar17);
    param_2 = uVar8;
  } while( true );
}



/* Entry: 1020ab5ac; end: 1020ab66f;  */

undefined8 FUN_1020ab5ac(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_104339de0)(param_2,param_1);
  return param_2;
}



/* Entry: 1020ab670; end: 1020ab697;  */

void FUN_1020ab670(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1020ab698; end: 1020ab6cf;  */

void FUN_1020ab698(void)

{
  undefined *puStack_28;
  
  puStack_28 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001006c71a4(&puStack_28);
  return;
}



/* Entry: 1020ab6d0; end: 1020ab6d3;  */

void FUN_1020ab6d0(void)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  
  plVar2 = *(long **)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,plVar2);
  (**(code **)(lVar1 + 8))(plVar2,lVar1);
  puVar3 = &UNK_1104c6bd0;
  func_0x000107c613fc(&UNK_1104c6bd0,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  uVar4 = 0x1020ac2ac;
  puVar6 = puVar3;
  (**(code **)(*plVar2 + 0x60))();
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar3);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x60) = uVar4;
  *(undefined **)(unaff_x20 + 0x68) = puVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar5);
  return;
}



/* Entry: 1020ab6d4; end: 1020ab783;  */

void FUN_1020ab6d4(void)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  
  plVar2 = *(long **)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,plVar2);
  (**(code **)(lVar1 + 8))(plVar2,lVar1);
  puVar3 = &UNK_1104c6bd0;
  func_0x000107c613fc(&UNK_1104c6bd0,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  uVar4 = 0x1020ac2ac;
  puVar6 = puVar3;
  (**(code **)(*plVar2 + 0x60))();
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar3);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x60) = uVar4;
  *(undefined **)(unaff_x20 + 0x68) = puVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar5);
  return;
}



/* Entry: 1020ab784; end: 1020ab787;  */

/* WARNING: Possible PIC construction at 0x0001020ab840: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020ab844) */

void FUN_1020ab784(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  code *pcVar5;
  
  lVar3 = *(long *)(unaff_x20 + 0x90);
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c6157c(lVar3);
    uVar1 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c5fd50(lVar3,PTR___sytN_11034f1b0 + 8,uVar1,PTR___ss5ErrorWS_11034ee10);
    func_0x000107c61574(lVar3);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x90);
  }
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  func_0x000107c61574(uVar1);
  lVar3 = *(long *)(unaff_x20 + 0x60);
  if (lVar3 == 0) {
    lVar3 = 0;
    *(long *)(unaff_x20 + 0x60) = 0;
    *(undefined8 *)(unaff_x20 + 0x68) = 0;
  }
  else {
    lVar4 = *(long *)(unaff_x20 + 0x68);
    lVar2 = lVar3;
    func_0x000107c614f0(lVar3);
    pcVar5 = *(code **)(lVar4 + 8);
    func_0x000107c615f0(lVar3);
    (*pcVar5)(lVar2,lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
  return;
}



/* Entry: 1020ab788; end: 1020ab86b;  */

/* WARNING: Possible PIC construction at 0x0001020ab840: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001020ab844) */

void FUN_1020ab788(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  code *pcVar5;
  
  lVar3 = *(long *)(unaff_x20 + 0x90);
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c6157c(lVar3);
    uVar1 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c5fd50(lVar3,PTR___sytN_11034f1b0 + 8,uVar1,PTR___ss5ErrorWS_11034ee10);
    func_0x000107c61574(lVar3);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x90);
  }
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  func_0x000107c61574(uVar1);
  lVar3 = *(long *)(unaff_x20 + 0x60);
  if (lVar3 == 0) {
    lVar3 = 0;
    *(long *)(unaff_x20 + 0x60) = 0;
    *(undefined8 *)(unaff_x20 + 0x68) = 0;
  }
  else {
    lVar4 = *(long *)(unaff_x20 + 0x68);
    lVar2 = lVar3;
    func_0x000107c614f0(lVar3);
    pcVar5 = *(code **)(lVar4 + 8);
    func_0x000107c615f0(lVar3);
    (*pcVar5)(lVar2,lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
  return;
}



/* Entry: 1020ab86c; end: 1020ab8eb;  */

uint FUN_1020ab86c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_d8 = param_1[0xd];
  uStack_e0 = param_1[0xc];
  uStack_c8 = param_1[0xf];
  uStack_d0 = param_1[0xe];
  uStack_b8 = param_1[0x11];
  uStack_c0 = param_1[0x10];
  uStack_118 = param_1[5];
  uStack_120 = param_1[4];
  uStack_108 = param_1[7];
  uStack_110 = param_1[6];
  uStack_f8 = param_1[9];
  uStack_100 = param_1[8];
  uStack_e8 = param_1[0xb];
  uStack_f0 = param_1[10];
  uStack_138 = param_1[1];
  uStack_140 = *param_1;
  uStack_128 = param_1[3];
  uStack_130 = param_1[2];
  uStack_48 = param_2[0xd];
  uStack_50 = param_2[0xc];
  uStack_38 = param_2[0xf];
  uStack_40 = param_2[0xe];
  uStack_28 = param_2[0x11];
  uStack_30 = param_2[0x10];
  uStack_88 = param_2[5];
  uStack_90 = param_2[4];
  uStack_78 = param_2[7];
  uStack_80 = param_2[6];
  uStack_68 = param_2[9];
  uStack_70 = param_2[8];
  uStack_58 = param_2[0xb];
  uStack_60 = param_2[10];
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  func_0x0001020ae8d4(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 1020ab8ec; end: 1020ab907;  */

undefined8 FUN_1020ab8ec(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = *param_1;
  uVar2 = param_1[1];
  uVar7 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_2[1];
  uVar1 = param_2[2];
  uVar5 = param_2[3];
  if (uVar2 == 0) {
    if (uVar4 != 0) {
      return 0;
    }
  }
  else {
    if (uVar4 == 0) {
      return 0;
    }
    if (((uVar6 != *param_2) || (uVar2 != uVar4)) &&
       (func_0x000107c605b8(uVar6,uVar2,*param_2,uVar4,0), (uVar6 & 1) == 0)) {
      return 0;
    }
  }
  if (uVar3 == 0) {
    if (uVar5 == 0) {
      return 1;
    }
  }
  else if ((uVar5 != 0) &&
          (((uVar7 == uVar1 && (uVar3 == uVar5)) ||
           (func_0x000107c605b8(uVar7,uVar3,uVar1,uVar5,0), (uVar7 & 1) != 0)))) {
    return 1;
  }
  return 0;
}



/* Entry: 1020ab908; end: 1020ab963;  */

void FUN_1020ab908(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_1020ab964(uVar1);
    func_0x000107c61574(param_2);
  }
  return;
}


