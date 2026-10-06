/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1014c81d8; end: 1014c8a43;  */

/* WARNING: Possible PIC construction at 0x0001014c8678: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014c86d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014c8bb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014c8af4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014c88f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014c88c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014c88f8) */
/* WARNING: Removing unreachable block (ram,0x0001014c8af8) */
/* WARNING: Removing unreachable block (ram,0x0001014c8b38) */
/* WARNING: Removing unreachable block (ram,0x0001014c8bbc) */
/* WARNING: Removing unreachable block (ram,0x0001014c8bec) */
/* WARNING: Removing unreachable block (ram,0x0001014c8bf8) */
/* WARNING: Removing unreachable block (ram,0x0001014c8c08) */
/* WARNING: Removing unreachable block (ram,0x0001014c8c20) */
/* WARNING: Removing unreachable block (ram,0x0001014c8fa8) */
/* WARNING: Removing unreachable block (ram,0x0001014c9130) */
/* WARNING: Removing unreachable block (ram,0x0001014c8fac) */
/* WARNING: Removing unreachable block (ram,0x0001014c8fcc) */
/* WARNING: Removing unreachable block (ram,0x0001014c8c38) */
/* WARNING: Removing unreachable block (ram,0x0001014c8df0) */
/* WARNING: Removing unreachable block (ram,0x0001014c8c40) */
/* WARNING: Removing unreachable block (ram,0x0001014c8c44) */
/* WARNING: Removing unreachable block (ram,0x0001014c8c4c) */
/* WARNING: Removing unreachable block (ram,0x0001014c9144) */
/* WARNING: Removing unreachable block (ram,0x0001014c8c54) */
/* WARNING: Removing unreachable block (ram,0x0001014c8e18) */
/* WARNING: Removing unreachable block (ram,0x0001014c8e24) */
/* WARNING: Removing unreachable block (ram,0x0001014c8e3c) */
/* WARNING: Removing unreachable block (ram,0x0001014c8f5c) */
/* WARNING: Removing unreachable block (ram,0x0001014c8f60) */
/* WARNING: Removing unreachable block (ram,0x0001014c8f6c) */
/* WARNING: Removing unreachable block (ram,0x0001014c8f74) */
/* WARNING: Removing unreachable block (ram,0x0001014c8c68) */
/* WARNING: Removing unreachable block (ram,0x0001014c8c70) */
/* WARNING: Removing unreachable block (ram,0x0001014c86d4) */
/* WARNING: Removing unreachable block (ram,0x0001014c89e4) */
/* WARNING: Removing unreachable block (ram,0x0001014c86f8) */
/* WARNING: Removing unreachable block (ram,0x0001014c867c) */
/* WARNING: Removing unreachable block (ram,0x0001014c88f0) */
/* WARNING: Removing unreachable block (ram,0x0001014c86d0) */
/* WARNING: Removing unreachable block (ram,0x0001014c88cc) */
/* WARNING: Removing unreachable block (ram,0x0001014c8920) */
/* WARNING: Removing unreachable block (ram,0x0001014c897c) */
/* WARNING: Removing unreachable block (ram,0x0001014c8a40) */
/* WARNING: Removing unreachable block (ram,0x0001014c8af0) */
/* WARNING: Removing unreachable block (ram,0x0001014c8ac0) */
/* WARNING: Removing unreachable block (ram,0x0001014c8b4c) */
/* WARNING: Removing unreachable block (ram,0x0001014c8c74) */
/* WARNING: Removing unreachable block (ram,0x0001014c8f84) */
/* WARNING: Removing unreachable block (ram,0x0001014c8c78) */
/* WARNING: Removing unreachable block (ram,0x0001014c8f88) */
/* WARNING: Removing unreachable block (ram,0x0001014c8bb4) */
/* WARNING: Removing unreachable block (ram,0x0001014c8ad8) */
/* WARNING: Removing unreachable block (ram,0x0001014c89c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014c81d8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined ***pppuVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  long lStack_168;
  undefined **ppuStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined1 auStack_d8 [104];
  undefined8 uStack_70;
  
  uStack_70 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = 0;
  lStack_168 = param_2;
  func_0x000107c5ede0();
  lVar16 = *(long *)(lVar1 + -8);
  lVar17 = *(long *)(lVar16 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = (long)&uStack_180 - (lVar17 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = (lVar14 - extraout_x12) - extraout_x12_00;
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112da99e0);
  uVar11 = ((undefined8 *)(unaff_x20 + _DAT_112da99e0))[1];
  func_0x000107c5ed80(lVar15,uVar2,uVar11);
  func_0x000107c60b1c();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  func_0x000107c5ed80(lVar14,uVar3,uVar11);
  func_0x000107c6142c(uVar11);
  ppuStack_158 = (undefined **)0x0;
  puStack_150 = (undefined1 *)0xe000000000000000;
  func_0x000107c602fc(0x10);
  func_0x000107c6142c(puStack_150);
  ppuStack_158 = (undefined **)0x6d75642d70616568;
  puStack_150 = (undefined1 *)0xea00000000002d70;
  func_0x000107c5fb78(param_1,lStack_168);
  func_0x000107c5fb78(0x70697a2e,0xe400000000000000);
  puVar12 = puStack_150;
  func_0x000107c5ed9c(lVar14 - extraout_x12,ppuStack_158,puStack_150);
  func_0x000107c6142c(puVar12);
  pcStack_170 = *(code **)(lVar16 + 8);
  lVar4 = lVar14;
  lVar8 = lVar1;
  (*pcStack_170)(lVar14,lVar1);
  func_0x000107c5ed88();
  lStack_168 = lVar15;
  (**(code **)(lVar16 + 0x10))(lVar14,lVar15,lVar1);
  uVar13 = (ulong)*(byte *)(lVar16 + 0x50);
  uVar18 = uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff);
  puVar5 = &UNK_1103ce908;
  func_0x000107c613fc(&UNK_1103ce908,uVar18 + lVar17,uVar13 | 7);
  (**(code **)(lVar16 + 0x20))(puVar5 + uVar18,lVar14,lVar1);
  func_0x000107c5fadc(lVar4,lVar8);
  func_0x000107c6142c(lVar8);
  pcStack_138 = FUN_1014c92dc;
  ppuStack_158 = (undefined **)PTR___NSConcreteStackBlock_11034bd00;
  puStack_150 = (undefined1 *)0x42000000;
  pcStack_148 = FUN_1014c9148;
  puStack_140 = &UNK_1103ce920;
  pppuVar6 = &ppuStack_158;
  puStack_130 = puVar5;
  func_0x000107c60bc4(pppuVar6);
  puVar5 = PTR_PTR_1126b9fa8;
  func_0x000107c61168();
  func_0x000107c3e0f8();
  func_0x000107c61180();
  func_0x000107c60bd0(pppuVar6);
  func_0x000107c61170(lVar4);
  func_0x000107c61574(puStack_130);
  lVar4 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  puVar12 = auStack_d8;
  func_0x000107c61534();
  uStack_178 = 2;
  uStack_180 = 1;
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  ppuVar7 = &PTR____CFConstantStringClassReference_110f769d8;
  func_0x000107c5faec();
  ppuStack_158 = ppuVar7;
  puStack_150 = puVar12;
  func_0x000107c61434(puVar12);
  func_0x000107c602d4(lVar4 + 0x20,&ppuStack_158,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  *(undefined **)(lVar4 + 0x60) = PTR___sSbN_11034dd40;
  func_0x000107c6142c(puVar12);
  *(undefined1 *)(lVar4 + 0x48) = 1;
  lVar8 = lVar4;
  FUN_100dfa3f0(lVar4);
  func_0x000107c61588(lVar4);
  FUN_1014c9404(lVar4 + 0x20,0x112d377a0,&UNK_10d9016e0);
  puVar9 = PTR_PTR_1126b9fb0;
  func_0x000107c610f8();
  puVar10 = puVar9;
  func_0x000107c5ed90();
  lVar4 = lVar8;
  func_0x000107c5f9dc(lVar8,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar8);
  ppuStack_158 = (undefined **)0x0;
  func_0x000107c48fd8();
  func_0x000107c61170(puVar10);
  func_0x000107c61170(lVar4);
  ppuVar7 = ppuStack_158;
  if (puVar9 != (undefined *)0x0) {
    lVar4 = 0x112d6d848;
    FUN_1014c9368(0x112d6d848,&PTR_PTR_1126b9fa8,0x112da9a18,&UNK_10d953a90);
    func_0x000107c613fc();
    *(undefined8 *)(lVar4 + 0x18) = 3;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    *(undefined **)(lVar4 + 0x20) = puVar5;
    FUN_1014c9560(0,0x112d6d848,&PTR_PTR_1126b9fa8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(ppuVar7);
  return;
}



/* Entry: 1014c8a44; end: 1014c8b4f;  */

/* WARNING: Possible PIC construction at 0x0001014c8bb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014c8af4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014c8bbc) */
/* WARNING: Removing unreachable block (ram,0x0001014c8bec) */
/* WARNING: Removing unreachable block (ram,0x0001014c8bf8) */
/* WARNING: Removing unreachable block (ram,0x0001014c8c08) */
/* WARNING: Removing unreachable block (ram,0x0001014c8c20) */
/* WARNING: Removing unreachable block (ram,0x0001014c8fa8) */
/* WARNING: Removing unreachable block (ram,0x0001014c9130) */
/* WARNING: Removing unreachable block (ram,0x0001014c8fac) */
/* WARNING: Removing unreachable block (ram,0x0001014c8fcc) */
/* WARNING: Removing unreachable block (ram,0x0001014c8c38) */
/* WARNING: Removing unreachable block (ram,0x0001014c8df0) */
/* WARNING: Removing unreachable block (ram,0x0001014c8c40) */
/* WARNING: Removing unreachable block (ram,0x0001014c8c44) */
/* WARNING: Removing unreachable block (ram,0x0001014c8c4c) */
/* WARNING: Removing unreachable block (ram,0x0001014c9144) */
/* WARNING: Removing unreachable block (ram,0x0001014c8c54) */
/* WARNING: Removing unreachable block (ram,0x0001014c8e18) */
/* WARNING: Removing unreachable block (ram,0x0001014c8e24) */
/* WARNING: Removing unreachable block (ram,0x0001014c8e3c) */
/* WARNING: Removing unreachable block (ram,0x0001014c8f5c) */
/* WARNING: Removing unreachable block (ram,0x0001014c8f60) */
/* WARNING: Removing unreachable block (ram,0x0001014c8f6c) */
/* WARNING: Removing unreachable block (ram,0x0001014c8f74) */
/* WARNING: Removing unreachable block (ram,0x0001014c8c68) */
/* WARNING: Removing unreachable block (ram,0x0001014c8c70) */
/* WARNING: Removing unreachable block (ram,0x0001014c8af8) */
/* WARNING: Removing unreachable block (ram,0x0001014c8b38) */

undefined * FUN_1014c8a44(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 auStack_100 [80];
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c61168();
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar1 = puVar7;
  func_0x000107c5ed90();
  puVar2 = puVar7;
  func_0x000107c4ff50();
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar1);
  puVar7 = (undefined *)0x0;
  if (((int)puVar2 != 0) && (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6)) {
    func_0x000107c60e78();
    puVar7 = PTR__OBJC_CLASS___NSInputStream_1126bc580;
    func_0x000107c610f8();
    puVar1 = puVar7;
    func_0x000107c5ed90();
    func_0x000107c48fbc();
    func_0x000107c61170(puVar1);
    if (puVar7 == (undefined *)0x0) {
      if (param_2 != (undefined8 *)0x0) {
        lVar6 = 0x112d4b5e8;
        func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
        puVar5 = auStack_100;
        func_0x000107c61534();
        *(undefined8 *)(lVar6 + 0x18) = 2;
        *(undefined8 *)(lVar6 + 0x10) = 1;
        uVar3 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
        func_0x000107c5faec();
        *(undefined8 *)(lVar6 + 0x20) = uVar3;
        *(undefined1 **)(lVar6 + 0x28) = puVar5;
        func_0x000107c602fc(0x21);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5edc4();
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar5);
        puVar7 = PTR___sSSN_11034da80;
        *(undefined **)(lVar6 + 0x48) = PTR___sSSN_11034da80;
        *(undefined8 *)(lVar6 + 0x30) = 0xd00000000000001f;
        *(undefined8 *)(lVar6 + 0x38) = 0x800000010ef866c0;
        lVar4 = lVar6;
        func_0x000100214a84(lVar6);
        func_0x000107c61588(lVar6);
        FUN_1014c9404((undefined8 *)(lVar6 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
        puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x000107c610f8();
        uVar3 = 0xd000000000000024;
        func_0x000107c5fadc(0xd000000000000024,0x800000010d951080);
        lVar6 = lVar4;
        func_0x000107c5f9dc(lVar4,puVar7,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
        func_0x000107c6142c(lVar4);
        func_0x000107c466bc();
        func_0x000107c61170(uVar3);
        func_0x000107c61170(lVar6);
        func_0x000107c61104(puVar1);
        *param_2 = puVar1;
      }
      return (undefined *)0x0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(puVar7);
  return puVar7;
}



/* Entry: 1014c8b50; end: 1014c9147;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1014c8b50(undefined *param_1,undefined8 *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined1 auStack_160 [80];
  undefined1 auStack_110 [80];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [80];
  
  puVar11 = auStack_160;
  puVar3 = PTR__OBJC_CLASS___NSInputStream_1126bc580;
  func_0x000107c610f8();
  puVar4 = puVar3;
  func_0x000107c5ed90();
  func_0x000107c48fbc();
  func_0x000107c61170(puVar4);
  if (puVar3 == (undefined *)0x0) {
    if (param_2 == (undefined8 *)0x0) {
LAB_1014c8f84:
      uVar12 = 0;
    }
    else {
      lVar9 = 0x112d4b5e8;
      func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
      puVar11 = auStack_b0;
      func_0x000107c61534();
      *(undefined8 *)(lVar9 + 0x18) = 2;
      *(undefined8 *)(lVar9 + 0x10) = 1;
      uVar12 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      func_0x000107c5faec();
      *(undefined8 *)(lVar9 + 0x20) = uVar12;
      *(undefined1 **)(lVar9 + 0x28) = puVar11;
      uStack_c0 = 0;
      uStack_b8 = 0xe000000000000000;
      func_0x000107c602fc(0x21);
      func_0x000107c6142c(uStack_b8);
      uStack_c0 = 0xd00000000000001f;
      uStack_b8 = 0x800000010ef866c0;
      func_0x000107c5edc4();
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar11);
      puVar3 = PTR___sSSN_11034da80;
      *(undefined **)(lVar9 + 0x48) = PTR___sSSN_11034da80;
      *(undefined8 *)(lVar9 + 0x30) = uStack_c0;
      *(undefined8 *)(lVar9 + 0x38) = uStack_b8;
      lVar10 = lVar9;
      func_0x000100214a84(lVar9);
      func_0x000107c61588(lVar9);
      FUN_1014c9404((undefined8 *)(lVar9 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c610f8();
      uVar12 = 0xd000000000000024;
      func_0x000107c5fadc(0xd000000000000024,0x800000010d951080);
      lVar9 = lVar10;
      func_0x000107c5f9dc(lVar10,puVar3,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(lVar10);
      func_0x000107c466bc();
      func_0x000107c61170(uVar12);
      func_0x000107c61170(lVar9);
      func_0x000107c61104(puVar4);
      uVar12 = 0;
      *param_2 = puVar4;
    }
  }
  else {
    func_0x000107c61174();
    func_0x000107c4de00();
    uVar5 = 0x10000;
    func_0x000107c5fc70(0x10000,PTR___ss5UInt8VN_11034eef8);
    *(undefined8 *)(uVar5 + 0x10) = 0x10000;
    func_0x000107c60ee4(uVar5 + 0x20,0x10000);
    while (puVar4 = puVar3, func_0x000107c44770(), uVar7 = uVar5, (int)puVar4 != 0) {
      uVar12 = *(undefined8 *)(uVar5 + 0x10);
      uVar6 = uVar5;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        uVar7 = 0;
        FUN_1014d97ac(0,uVar12,0,uVar5);
      }
      puVar4 = puVar3;
      func_0x000107c4f984();
      if ((long)puVar4 < 0) {
        if (param_2 == (undefined8 *)0x0) {
          func_0x000107c6142c(uVar7);
          func_0x000107c61170(puVar3);
        }
        else {
          param_1 = puVar3;
          func_0x000107c5c120();
          func_0x000107c61180();
          func_0x000107c61170(puVar3);
          if (param_1 == (undefined *)0x0) {
            lVar9 = 0x112d4b5e8;
            func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
            func_0x000107c61534();
            *(undefined8 *)(lVar9 + 0x18) = 2;
            *(undefined8 *)(lVar9 + 0x10) = 1;
            uVar12 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
            func_0x000107c5faec();
            *(undefined8 *)(lVar9 + 0x20) = uVar12;
            *(undefined1 **)(lVar9 + 0x28) = puVar11;
            uStack_c0 = 0;
            uStack_b8 = 0xe000000000000000;
            func_0x000107c602fc(0x12);
            func_0x000107c6142c(uStack_b8);
            uStack_c0 = 0xd000000000000010;
            uStack_b8 = 0x800000010ef86710;
            func_0x000107c5edc4();
            func_0x000107c5fb78();
            func_0x000107c6142c(puVar11);
            puVar4 = PTR___sSSN_11034da80;
            *(undefined **)(lVar9 + 0x48) = PTR___sSSN_11034da80;
            *(undefined8 *)(lVar9 + 0x30) = uStack_c0;
            *(undefined8 *)(lVar9 + 0x38) = uStack_b8;
            lVar10 = lVar9;
            func_0x000100214a84(lVar9);
            func_0x000107c61588(lVar9);
            FUN_1014c9404((undefined8 *)(lVar9 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
            param_1 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x000107c610f8();
            uVar12 = 0xd000000000000024;
            func_0x000107c5fadc(0xd000000000000024,0x800000010d951080);
            lVar9 = lVar10;
            func_0x000107c5f9dc(lVar10,puVar4,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
            func_0x000107c6142c(lVar10);
            func_0x000107c466bc();
            func_0x000107c61170(uVar12);
LAB_1014c8f5c:
            func_0x000107c61170(lVar9);
          }
LAB_1014c8f60:
          func_0x000107c61104(param_1);
          *param_2 = param_1;
LAB_1014c8f6c:
          func_0x000107c6142c(uVar7);
        }
        func_0x000107c3fc10(puVar3);
        func_0x000107c61170(puVar3);
        goto LAB_1014c8f84;
      }
      if (puVar4 == (undefined *)0x0) break;
      puVar13 = (undefined *)0x0;
      while (uVar5 = uVar7, (long)puVar13 < (long)puVar4) {
        if (SBORROW8((long)puVar4,(long)puVar13)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1014c9148);
          (*pcVar1)();
        }
        puVar8 = param_1;
        func_0x000107c5e8e4();
        if ((long)puVar8 < 1) {
          func_0x000107c61170(puVar3);
          if (param_2 == (undefined8 *)0x0) goto LAB_1014c8f6c;
          func_0x000107c5c120();
          func_0x000107c61180();
          if (param_1 != (undefined *)0x0) goto LAB_1014c8f60;
          lVar9 = 0x112d4b5e8;
          func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
          puVar11 = auStack_110;
          func_0x000107c61534();
          *(undefined8 *)(lVar9 + 0x18) = 2;
          *(undefined8 *)(lVar9 + 0x10) = 1;
          uVar12 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
          func_0x000107c5faec();
          *(undefined8 *)(lVar9 + 0x20) = uVar12;
          puVar4 = PTR___sSSN_11034da80;
          *(undefined **)(lVar9 + 0x48) = PTR___sSSN_11034da80;
          *(undefined1 **)(lVar9 + 0x28) = puVar11;
          *(undefined8 *)(lVar9 + 0x30) = 0xd000000000000020;
          *(undefined8 *)(lVar9 + 0x38) = 0x800000010ef866e0;
          lVar10 = lVar9;
          func_0x000100214a84(lVar9);
          func_0x000107c61588(lVar9);
          FUN_1014c9404((undefined8 *)(lVar9 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
          param_1 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x000107c610f8();
          uVar12 = 0xd000000000000024;
          func_0x000107c5fadc(0xd000000000000024,0x800000010d951080);
          lVar9 = lVar10;
          func_0x000107c5f9dc(lVar10,puVar4,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
          func_0x000107c6142c(lVar10);
          func_0x000107c466bc();
          func_0x000107c61170(uVar12);
          goto LAB_1014c8f5c;
        }
        bVar2 = SCARRY8((long)puVar13,(long)puVar8);
        puVar13 = puVar13 + (long)puVar8;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1014c8c74);
          (*pcVar1)();
        }
      }
    }
    func_0x000107c61170(puVar3);
    func_0x000107c6142c(uVar7);
    func_0x000107c3fc10(puVar3);
    func_0x000107c61170(puVar3);
    uVar12 = 1;
  }
  return uVar12;
}



/* Entry: 1014c9148; end: 1014c91b3;  */

uint FUN_1014c9148(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  uVar3 = param_2;
  (*pcVar1)();
  func_0x000107c61574(uVar2);
  func_0x000107c61170(param_2);
  return (uint)uVar3 & 1;
}



/* Entry: 1014c91b4; end: 1014c921b; -[_TtC24SCCrashServicesImplSwift36SCLoadFromFileAndCompressLogProvider provideLogsFor:] */

void FUN_1014c91b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1014c81d8(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 1014c921c; end: 1014c924b; -[_TtC24SCCrashServicesImplSwift36SCLoadFromFileAndCompressLogProvider logUploadFinishedFor:isUploadSuccessful:] */

void FUN_1014c921c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174();
  FUN_1014c9444(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1014c924c; end: 1014c92a7; -[_TtC24SCCrashServicesImplSwift36SCLoadFromFileAndCompressLogProvider init] */

void FUN_1014c924c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCrashServicesImplSwift.SCLoadFromFileAndCompressLogProvider",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014c9278);
  (*pcVar1)();
}



/* Entry: 1014c92a8; end: 1014c92bb; -[_TtC24SCCrashServicesImplSwift36SCLoadFromFileAndCompressLogProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014c92a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112da99e0 + 8))
  ;
  return;
}



/* Entry: 1014c92bc; end: 1014c92db;  */

void FUN_1014c92bc(void)

{
  func_0x000107c61168(&PTR_PTR_1127dafb8);
  return;
}



/* Entry: 1014c92dc; end: 1014c9327;  */

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1014c92dc(undefined *param_1,undefined8 *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined *puVar13;
  undefined1 auStack_160 [80];
  undefined1 auStack_110 [80];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_b0 [80];
  
  lVar9 = 0;
  func_0x000107c5ede0();
  uVar11 = (ulong)*(byte *)(*(long *)(lVar9 + -8) + 0x50);
  puVar10 = auStack_160;
  puVar3 = PTR__OBJC_CLASS___NSInputStream_1126bc580;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSInputStream_1126bc580,param_2,
                      unaff_x20 + (uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff)));
  puVar4 = puVar3;
  func_0x000107c5ed90();
  func_0x000107c48fbc();
  func_0x000107c61170(puVar4);
  if (puVar3 == (undefined *)0x0) {
    if (param_2 == (undefined8 *)0x0) {
LAB_1014c8f84:
      uVar12 = 0;
    }
    else {
      lVar9 = 0x112d4b5e8;
      func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
      puVar10 = auStack_b0;
      func_0x000107c61534();
      *(undefined8 *)(lVar9 + 0x18) = 2;
      *(undefined8 *)(lVar9 + 0x10) = 1;
      uVar12 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
      func_0x000107c5faec();
      *(undefined8 *)(lVar9 + 0x20) = uVar12;
      *(undefined1 **)(lVar9 + 0x28) = puVar10;
      uStack_c0 = 0;
      uStack_b8 = 0xe000000000000000;
      func_0x000107c602fc(0x21);
      func_0x000107c6142c(uStack_b8);
      uStack_c0 = 0xd00000000000001f;
      uStack_b8 = 0x800000010ef866c0;
      func_0x000107c5edc4();
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar10);
      puVar3 = PTR___sSSN_11034da80;
      *(undefined **)(lVar9 + 0x48) = PTR___sSSN_11034da80;
      *(undefined8 *)(lVar9 + 0x30) = uStack_c0;
      *(undefined8 *)(lVar9 + 0x38) = uStack_b8;
      lVar8 = lVar9;
      func_0x000100214a84(lVar9);
      func_0x000107c61588(lVar9);
      FUN_1014c9404((undefined8 *)(lVar9 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x000107c610f8();
      uVar12 = 0xd000000000000024;
      func_0x000107c5fadc(0xd000000000000024,0x800000010d951080);
      lVar9 = lVar8;
      func_0x000107c5f9dc(lVar8,puVar3,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
      func_0x000107c6142c(lVar8);
      func_0x000107c466bc();
      func_0x000107c61170(uVar12);
      func_0x000107c61170(lVar9);
      func_0x000107c61104(puVar4);
      uVar12 = 0;
      *param_2 = puVar4;
    }
  }
  else {
    func_0x000107c61174();
    func_0x000107c4de00();
    uVar11 = 0x10000;
    func_0x000107c5fc70(0x10000,PTR___ss5UInt8VN_11034eef8);
    *(undefined8 *)(uVar11 + 0x10) = 0x10000;
    func_0x000107c60ee4(uVar11 + 0x20,0x10000);
    while (puVar4 = puVar3, func_0x000107c44770(), uVar6 = uVar11, (int)puVar4 != 0) {
      uVar12 = *(undefined8 *)(uVar11 + 0x10);
      uVar5 = uVar11;
      func_0x000107c61558();
      if ((uVar5 & 1) == 0) {
        uVar6 = 0;
        FUN_1014d97ac(0,uVar12,0,uVar11);
      }
      puVar4 = puVar3;
      func_0x000107c4f984();
      if ((long)puVar4 < 0) {
        if (param_2 == (undefined8 *)0x0) {
          func_0x000107c6142c(uVar6);
          func_0x000107c61170(puVar3);
        }
        else {
          param_1 = puVar3;
          func_0x000107c5c120();
          func_0x000107c61180();
          func_0x000107c61170(puVar3);
          if (param_1 == (undefined *)0x0) {
            lVar9 = 0x112d4b5e8;
            func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
            func_0x000107c61534();
            *(undefined8 *)(lVar9 + 0x18) = 2;
            *(undefined8 *)(lVar9 + 0x10) = 1;
            uVar12 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
            func_0x000107c5faec();
            *(undefined8 *)(lVar9 + 0x20) = uVar12;
            *(undefined1 **)(lVar9 + 0x28) = puVar10;
            uStack_c0 = 0;
            uStack_b8 = 0xe000000000000000;
            func_0x000107c602fc(0x12);
            func_0x000107c6142c(uStack_b8);
            uStack_c0 = 0xd000000000000010;
            uStack_b8 = 0x800000010ef86710;
            func_0x000107c5edc4();
            func_0x000107c5fb78();
            func_0x000107c6142c(puVar10);
            puVar4 = PTR___sSSN_11034da80;
            *(undefined **)(lVar9 + 0x48) = PTR___sSSN_11034da80;
            *(undefined8 *)(lVar9 + 0x30) = uStack_c0;
            *(undefined8 *)(lVar9 + 0x38) = uStack_b8;
            lVar8 = lVar9;
            func_0x000100214a84(lVar9);
            func_0x000107c61588(lVar9);
            FUN_1014c9404((undefined8 *)(lVar9 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
            param_1 = PTR__OBJC_CLASS___NSError_1126ae858;
            func_0x000107c610f8();
            uVar12 = 0xd000000000000024;
            func_0x000107c5fadc(0xd000000000000024,0x800000010d951080);
            lVar9 = lVar8;
            func_0x000107c5f9dc(lVar8,puVar4,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
            func_0x000107c6142c(lVar8);
            func_0x000107c466bc();
            func_0x000107c61170(uVar12);
LAB_1014c8f5c:
            func_0x000107c61170(lVar9);
          }
LAB_1014c8f60:
          func_0x000107c61104(param_1);
          *param_2 = param_1;
LAB_1014c8f6c:
          func_0x000107c6142c(uVar6);
        }
        func_0x000107c3fc10(puVar3);
        func_0x000107c61170(puVar3);
        goto LAB_1014c8f84;
      }
      if (puVar4 == (undefined *)0x0) break;
      puVar13 = (undefined *)0x0;
      while (uVar11 = uVar6, (long)puVar13 < (long)puVar4) {
        if (SBORROW8((long)puVar4,(long)puVar13)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1014c9148);
          (*pcVar1)();
        }
        puVar7 = param_1;
        func_0x000107c5e8e4();
        if ((long)puVar7 < 1) {
          func_0x000107c61170(puVar3);
          if (param_2 == (undefined8 *)0x0) goto LAB_1014c8f6c;
          func_0x000107c5c120();
          func_0x000107c61180();
          if (param_1 != (undefined *)0x0) goto LAB_1014c8f60;
          lVar9 = 0x112d4b5e8;
          func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
          puVar10 = auStack_110;
          func_0x000107c61534();
          *(undefined8 *)(lVar9 + 0x18) = 2;
          *(undefined8 *)(lVar9 + 0x10) = 1;
          uVar12 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
          func_0x000107c5faec();
          *(undefined8 *)(lVar9 + 0x20) = uVar12;
          puVar4 = PTR___sSSN_11034da80;
          *(undefined **)(lVar9 + 0x48) = PTR___sSSN_11034da80;
          *(undefined1 **)(lVar9 + 0x28) = puVar10;
          *(undefined8 *)(lVar9 + 0x30) = 0xd000000000000020;
          *(undefined8 *)(lVar9 + 0x38) = 0x800000010ef866e0;
          lVar8 = lVar9;
          func_0x000100214a84(lVar9);
          func_0x000107c61588(lVar9);
          FUN_1014c9404((undefined8 *)(lVar9 + 0x20),0x112d4b5f0,&UNK_10d9127d0);
          param_1 = PTR__OBJC_CLASS___NSError_1126ae858;
          func_0x000107c610f8();
          uVar12 = 0xd000000000000024;
          func_0x000107c5fadc(0xd000000000000024,0x800000010d951080);
          lVar9 = lVar8;
          func_0x000107c5f9dc(lVar8,puVar4,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90);
          func_0x000107c6142c(lVar8);
          func_0x000107c466bc();
          func_0x000107c61170(uVar12);
          goto LAB_1014c8f5c;
        }
        bVar2 = SCARRY8((long)puVar13,(long)puVar7);
        puVar13 = puVar13 + (long)puVar7;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1014c8c74);
          (*pcVar1)();
        }
      }
    }
    func_0x000107c61170(puVar3);
    func_0x000107c6142c(uVar6);
    func_0x000107c3fc10(puVar3);
    func_0x000107c61170(puVar3);
    uVar12 = 1;
  }
  return uVar12;
}



/* Entry: 1014c9328; end: 1014c9367;  */

void FUN_1014c9328(long param_1,long param_2)

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



/* Entry: 1014c9368; end: 1014c93df;  */

void FUN_1014c9368(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1014c9560(0,param_1,param_2);
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



/* Entry: 1014c93e0; end: 1014c9403;  */

void FUN_1014c93e0(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112da9a20;
  plVar5 = (long *)&UNK_10d9510c8;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1014c9560(0,0x112da9a28,&PTR_PTR_1126a7470);
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



/* Entry: 1014c9404; end: 1014c9443;  */

undefined8 FUN_1014c9404(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1014c9444; end: 1014c955f;  */

/* WARNING: Possible PIC construction at 0x0001014c9504: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014c9508) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014c9444(ulong param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((param_1 & 1) == 0) {
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
      return;
    }
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
    func_0x000107c61168();
    func_0x000107c415e0();
    func_0x000107c61180();
    plVar2 = *(long **)(unaff_x20 + _DAT_112da99e0);
    param_2 = (long *)((undefined8 *)(unaff_x20 + _DAT_112da99e0))[1];
    func_0x000107c5fadc();
    puVar3 = puVar1;
    param_3 = plVar2;
    func_0x000107c4ff4c();
    func_0x000107c61170(puVar1);
    func_0x000107c61170(plVar2);
    if (((int)puVar3 == 0) || (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4)) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_retain_11034d2d8)(0);
      return;
    }
  }
  func_0x000107c60e78();
  if (*param_2 == 0) {
    lVar4 = *param_3;
    func_0x000107c61168();
    func_0x000107c614ec();
    *param_2 = lVar4;
    return;
  }
  return;
}



/* Entry: 1014c9560; end: 1014c959f;  */

void FUN_1014c9560(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1014c95a0; end: 1014c95d3; -[_TtC24SCCrashServicesImplSwift25SCLoadFromFileLogProvider provideLogsFor:] */

void FUN_1014c95a0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1014c9668();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1014c95d4; end: 1014c95d7; -[_TtC24SCCrashServicesImplSwift25SCLoadFromFileLogProvider logUploadFinishedFor:isUploadSuccessful:] */

void FUN_1014c95d4(void)

{
  return;
}



/* Entry: 1014c95d8; end: 1014c9633; -[_TtC24SCCrashServicesImplSwift25SCLoadFromFileLogProvider init] */

void FUN_1014c95d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCrashServicesImplSwift.SCLoadFromFileLogProvider",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014c9604);
  (*pcVar1)();
}



/* Entry: 1014c9634; end: 1014c9647; -[_TtC24SCCrashServicesImplSwift25SCLoadFromFileLogProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014c9634(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112da9a40 + 8))
  ;
  return;
}



/* Entry: 1014c9648; end: 1014c9667;  */

void FUN_1014c9648(void)

{
  func_0x000107c61168(&PTR_PTR_1127db090);
  return;
}



/* Entry: 1014c9668; end: 1014c98ef;  */

/* WARNING: Removing unreachable block (ram,0x0001014c96fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1014c9668(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long unaff_x20;
  long lVar7;
  undefined1 auStack_a0 [96];
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112da9a40);
  uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112da9a40))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5ed80(puVar5,uVar6,uVar1);
  func_0x000107c6142c(uVar1);
  uVar6 = 0;
  puVar3 = puVar5;
  func_0x000107c5ede8(puVar5,0);
  (**(code **)(lVar7 + 8))(puVar5,lVar2);
  puVar4 = PTR_PTR_1126af5d0;
  func_0x000107c61168(PTR_PTR_1126af5d0);
  puVar5 = puVar3;
  func_0x000107c5ee20(puVar3,uVar6);
  func_0x000107c5c3c8(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x00010006c090(puVar3,uVar6);
  return puVar4;
}



/* Entry: 1014c98f0; end: 1014c991f;  */

undefined8 FUN_1014c98f0(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_28,0,0);
  return *(undefined8 *)(unaff_x20 + 0x10);
}



/* Entry: 1014c9920; end: 1014c995b;  */

void FUN_1014c9920(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,1,0);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1014c995c; end: 1014c998b;  */

undefined1  [16] FUN_1014c995c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  func_0x000107c61428(unaff_x20 + 0x10,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = FUN_1014c998c;
  return auVar1;
}



/* Entry: 1014c998c; end: 1014c998f;  */

void FUN_1014c998c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 1014c9990; end: 1014c99fb;  */

long FUN_1014c9990(void)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  func_0x000107c4a02c();
  if ((int)puVar2 != 0) {
    func_0x000107c61294();
    *(undefined **)(unaff_x20 + 0x10) = puVar2;
    return unaff_x20;
  }
  func_0x0001048d9980(0xd00000000000005a,0x800000010ef867d0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014c99fc);
  (*pcVar1)();
}



/* Entry: 1014c99fc; end: 1014c9a0b;  */

void FUN_1014c99fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1014c9a0c; end: 1014c9ba3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1014c9a0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  long lVar5;
  undefined *puVar6;
  undefined1 auStack_70 [8];
  
  puVar4 = auStack_70;
  func_0x000107c610f8();
  plVar1 = (long *)(unaff_x20 + _DAT_112da9b28);
  *plVar1 = 0;
  plVar1[1] = 0;
  lVar3 = _DAT_112da9b30;
  puVar6 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
  func_0x000107c61168();
  func_0x000107c5e15c();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar3) = puVar6;
  *(long *)(unaff_x20 + _DAT_112da9b38) = param_1;
  func_0x0001000285a8(0x112da9b40,&UNK_10d951150);
  func_0x000107c615f0(param_1);
  uVar2 = param_2;
  func_0x0001000bda74();
  *(undefined8 *)(unaff_x20 + _DAT_112da9b48) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112da9b50) = param_3;
  puVar6 = &UNK_10d951048;
  func_0x0001000285a8(0x112da9858);
  func_0x000107c615f0(param_3);
  uVar2 = param_4;
  func_0x0001000bda74();
  *(undefined8 *)(unaff_x20 + _DAT_112da9b58) = uVar2;
  if (param_1 != 0) {
    lVar3 = param_1;
    func_0x000107c4a9b4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar5 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
      goto LAB_1014c9b3c;
    }
  }
  lVar5 = 0;
  puVar6 = (undefined *)0x0;
LAB_1014c9b3c:
  lVar3 = plVar1[1];
  *plVar1 = lVar5;
  plVar1[1] = (long)puVar6;
  func_0x000107c6142c(lVar3);
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  return puVar4;
}



/* Entry: 1014c9ba4; end: 1014c9c47; -[_TtC24SCCrashServicesImplSwift11SCMetricKit initWithCrashLogger:blizzardLogger:appStartExperimentReader:crashMetricLogger:] */

undefined8
FUN_1014c9ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_6);
  uVar1 = param_3;
  func_0x00010018c33c(param_3,param_4,param_5,param_6);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_6);
  return uVar1;
}



/* Entry: 1014c9c48; end: 1014c9dab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1014c9c48(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  undefined1 auStack_70 [8];
  
  puVar4 = auStack_70;
  lVar6 = param_2;
  func_0x000107c610f8();
  plVar1 = (long *)(unaff_x20 + _DAT_112da9b28);
  *plVar1 = 0;
  plVar1[1] = 0;
  lVar3 = _DAT_112da9b30;
  puVar2 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
  func_0x000107c61168();
  func_0x000107c5e15c();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar3) = puVar2;
  *(long *)(unaff_x20 + _DAT_112da9b38) = param_1;
  *(long *)(unaff_x20 + _DAT_112da9b48) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112da9b50) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112da9b58) = param_4;
  func_0x000107c6157c(param_2);
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(param_4);
  if (param_1 != 0) {
    lVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c4a9b4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar5 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
      goto LAB_1014c9d44;
    }
  }
  lVar5 = 0;
  lVar6 = 0;
LAB_1014c9d44:
  lVar3 = plVar1[1];
  *plVar1 = lVar5;
  plVar1[1] = lVar6;
  func_0x000107c6142c(lVar3);
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  func_0x000107c61574(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c61574(param_4);
  return puVar4;
}



/* Entry: 1014c9dac; end: 1014c9ecf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014c9dac(ulong param_1,undefined8 param_2,ulong param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (((param_3 == 0xd000000000000010) && (param_4 == -0x7ffffffef1079750)) ||
     (func_0x000107c605b8(param_3,param_4,0xd000000000000010,0x800000010ef868b0,0),
     (param_3 & 1) != 0)) {
    func_0x000107c61428(param_5 + 0x10,auStack_48,0,0);
    lVar2 = param_5 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      puVar1 = (undefined8 *)(lVar2 + _DAT_112da9b28);
      uVar3 = puVar1[1];
      *puVar1 = 0;
      puVar1[1] = 0;
      func_0x000107c61170();
      func_0x000107c6142c(uVar3);
    }
    if ((param_1 & 1) != 0) {
      func_0x000107c61428(param_5 + 0x10,auStack_60,0,0);
      param_5 = param_5 + 0x10;
      func_0x000107c61618();
      if (param_5 != 0) {
        uVar3 = *(undefined8 *)(param_5 + _DAT_112da9b58);
        func_0x000107c6157c(uVar3);
        func_0x000107c61170(param_5);
        func_0x0001000d224c(&lStack_68);
        func_0x000107c61574(uVar3);
        if (lStack_68 != 0) {
          func_0x000107c5cdd4(lStack_68);
          func_0x000107c615e8(lStack_68);
        }
      }
    }
  }
  return;
}



/* Entry: 1014c9ed0; end: 1014c9ee3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014c9ed0(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + _DAT_112da9b30),PTR_s_addObject__11259c1f0,param_1);
  return;
}



/* Entry: 1014c9ee4; end: 1014c9ef3; -[_TtC24SCCrashServicesImplSwift11SCMetricKit addListener:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014c9ee4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112da9b30),PTR_s_addObject__11259c1f0);
  return;
}



/* Entry: 1014c9ef4; end: 1014c9f4f; -[_TtC24SCCrashServicesImplSwift11SCMetricKit init] */

void FUN_1014c9ef4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCrashServicesImplSwift.SCMetricKit",0x24,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014c9f20);
  (*pcVar1)();
}



/* Entry: 1014c9f50; end: 1014c9fcb; -[_TtC24SCCrashServicesImplSwift11SCMetricKit .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014c9f50(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112da9b38));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da9b48));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112da9b50));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da9b58));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112da9b28 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112da9b30));
  return;
}



/* Entry: 1014c9fcc; end: 1014cc39b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014c9fcc(undefined **param_1)

{
  undefined ***pppuVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong uVar12;
  long lVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined8 uVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  long lVar21;
  undefined **ppuVar22;
  code *pcVar23;
  undefined **ppuStack_1e0;
  ulong uStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  char *pcStack_1c0;
  ulong uStack_1b8;
  undefined8 uStack_1b0;
  undefined **ppuStack_1a8;
  undefined8 uStack_1a0;
  undefined **ppuStack_198;
  ulong uStack_190;
  undefined8 uStack_188;
  undefined8 *puStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined8 uStack_148;
  char *pcStack_140;
  char *pcStack_138;
  undefined **ppuStack_130;
  undefined **ppuStack_128;
  undefined **ppuStack_120;
  undefined **ppuStack_118;
  undefined **ppuStack_110;
  long lStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  
  pppuVar1 = &ppuStack_1e0;
  uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112da9b50);
  uVar18 = 0xd00000000000001c;
  ppuVar11 = (undefined **)0x800000010ef86860;
  ppuStack_1d0 = param_1;
  func_0x000107c5fadc(0xd00000000000001c);
  uStack_1b0 = uVar14;
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar18);
  if ((int)uVar14 != 0) {
    if ((ulong)ppuStack_1d0 >> 0x3e == 0) {
      ppuStack_1c8 = *(undefined ***)(((ulong)ppuStack_1d0 & 0xffffffffffffff8) + 0x10);
    }
    else {
      ppuVar4 = (undefined **)((ulong)ppuStack_1d0 & 0xffffffffffffff8);
      if ((undefined **)0x7fffffffffffffff < ppuStack_1d0) {
        ppuVar4 = ppuStack_1d0;
      }
      func_0x000107c60480();
      ppuStack_1c8 = ppuVar4;
    }
    if (ppuStack_1c8 != (undefined **)0x0) {
      puStack_180 = (undefined8 *)(unaff_x20 + _DAT_112da9b28);
      uStack_170 = *(undefined8 *)(unaff_x20 + _DAT_112da9b58);
      lStack_108 = *(long *)(unaff_x20 + _DAT_112da9b38);
      pcStack_1c0 = "ENABLE_METRIC_KIT_COLLECTION";
      uStack_1b8 = (ulong)ppuStack_1d0 & 0xc000000000000001;
      uStack_1d8 = (ulong)ppuStack_1d0 & 0xffffffffffffff8;
      ppuStack_1e0 = ppuStack_1d0 + 4;
      uStack_148 = 0x800000010ef868b0;
      pcStack_138 = "app_launch_diagnostic";
      pcStack_140 = ", \"timeStampBegin\": \"";
      uStack_188 = 0x800000010ef868d0;
      uStack_1a0 = 0x800000010ef868f0;
      ppuVar4 = (undefined **)0x0;
      lStack_178 = _DAT_112da9b30;
      do {
        if (uStack_1b8 == 0) {
          if (*(undefined ***)(uStack_1d8 + 0x10) <= ppuVar4) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x1014cc354);
            (*pcVar23)();
          }
          ppuVar3 = (undefined **)ppuStack_1e0[(long)ppuVar4];
          func_0x000107c61174();
        }
        else {
          ppuVar3 = ppuVar4;
          ppuVar11 = ppuStack_1d0;
          func_0x0001014d021c(ppuVar4,ppuStack_1d0,&PTR__OBJC_CLASS___MXDiagnosticPayload_1126a74d8,
                              0x112da9c20);
        }
        if (SCARRY8((long)ppuVar4,1)) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x1014cc350);
          (*pcVar23)();
        }
        ppuVar16 = ppuVar3;
        ppuStack_1a8 = (undefined **)((long)ppuVar4 + 1);
        func_0x000107c408c0();
        func_0x000107c61180();
        ppuVar4 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
        if (ppuVar16 != (undefined **)0x0) {
          ppuVar11 = (undefined **)0x0;
          FUN_1014d0b9c(0,0x112da9b88,&PTR__OBJC_CLASS___MXCrashDiagnostic_1126a74a0);
          ppuVar4 = ppuVar16;
          func_0x000107c5fc54();
          func_0x000107c61170(ppuVar16);
        }
        if ((ulong)ppuVar4 >> 0x3e == 0) {
          ppuVar16 = *(undefined ***)(((ulong)ppuVar4 & 0xffffffffffffff8) + 0x10);
        }
        else {
          ppuVar16 = (undefined **)((ulong)ppuVar4 & 0xffffffffffffff8);
          if ((undefined **)0x7fffffffffffffff < ppuVar4) {
            ppuVar16 = ppuVar4;
          }
          func_0x000107c60480();
        }
        if (ppuVar16 != (undefined **)0x0) {
          ppuStack_158 = (undefined **)((ulong)ppuVar4 & 0xc000000000000001);
          uStack_190 = (ulong)ppuVar4 & 0xffffffffffffff8;
          ppuStack_198 = ppuVar4 + 4;
          ppuVar22 = (undefined **)0x0;
          ppuStack_168 = ppuVar16;
          ppuStack_160 = ppuVar4;
          do {
            if (ppuStack_158 == (undefined **)0x0) {
              if (*(undefined ***)(uStack_190 + 0x10) <= ppuVar22) {
                    /* WARNING: Does not return */
                pcVar23 = (code *)SoftwareBreakpoint(1,0x1014cc34c);
                (*pcVar23)();
              }
              ppuVar4 = (undefined **)ppuStack_198[(long)ppuVar22];
              func_0x000107c61174();
            }
            else {
              ppuVar4 = ppuVar22;
              ppuVar11 = ppuStack_160;
              func_0x0001014d021c(ppuVar22,ppuStack_160,
                                  &PTR__OBJC_CLASS___MXCrashDiagnostic_1126a74a0,0x112da9b88);
            }
            if (SCARRY8((long)ppuVar22,1)) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x1014cc348);
              (*pcVar23)();
            }
            func_0x0001000d224c(&puStack_d0);
            puVar15 = puStack_d0;
            if (puStack_d0 != (undefined *)0x0) {
              func_0x000107c5cdd0(puStack_d0);
              func_0x000107c615e8(puVar15);
            }
            ppuStack_110 = (undefined **)((long)ppuVar22 + 1);
            func_0x000107c61174();
            ppuVar16 = ppuVar4;
            func_0x000107c3ab94();
            func_0x000107c61180();
            ppuVar22 = ppuVar16;
            func_0x000107c5ee30();
            ppuVar5 = ppuVar11;
            func_0x000107c61170(ppuVar16);
            ppuVar16 = ppuVar4;
            func_0x000107c4ce18();
            func_0x000107c61180();
            ppuStack_118 = ppuVar4;
            func_0x000107c61170(ppuVar4);
            ppuVar4 = ppuVar16;
            func_0x000107c3df74();
            func_0x000107c61180();
            func_0x000107c61170(ppuVar16);
            if (ppuVar4 == (undefined **)0x0) {
              ppuVar4 = (undefined **)0x0;
              func_0x000107c5faec();
              func_0x000107c5fadc();
              func_0x000107c6142c(ppuVar5);
            }
            ppuVar16 = ppuVar3;
            ppuStack_128 = ppuVar4;
            func_0x000107c5ca18(ppuVar3);
            func_0x000107c61180();
            ppuVar5 = (undefined **)0x0;
            func_0x000107c5eea4();
            ppuStack_120 = (undefined **)ppuVar5[-1];
            ppuVar17 = (undefined **)ppuStack_120[8];
            (*(code *)PTR____chkstk_darwin_11034bd40)();
            uVar12 = (ulong)((long)ppuVar17 + 0xfU) & 0xfffffffffffffff0;
            ppuVar20 = (undefined **)((long)pppuVar1 + -uVar12);
            func_0x000107c5ee94(ppuVar20,ppuVar16);
            func_0x000107c61170(ppuVar16);
            ppuVar4 = ppuVar3;
            func_0x000107c5ca1c(ppuVar3);
            func_0x000107c61180();
            ppuStack_130 = ppuVar20;
            ppuStack_100 = ppuVar17;
            (*(code *)PTR____chkstk_darwin_11034bd40)();
            lVar21 = (long)ppuVar20 - uVar12;
            func_0x000107c5ee94(lVar21);
            func_0x000107c61170(ppuVar4);
            lVar6 = 0;
            func_0x000107c5fb10();
            (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40))
            ;
            lVar6 = lVar21 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
            func_0x000107c5fb04(lVar6);
            ppuVar4 = ppuVar22;
            ppuVar16 = ppuVar11;
            func_0x000107c5faf0(ppuVar22,ppuVar11,lVar6);
            ppuStack_f8 = ppuVar5;
            if (ppuVar16 == (undefined **)0x0) {
              func_0x000107c61170(ppuStack_128);
              func_0x00010006c090(ppuVar22,ppuVar11);
            }
            else {
              puStack_d0 = (undefined *)0x0;
              uStack_c8 = 0xe000000000000000;
              ppuStack_150 = ppuVar11;
              func_0x000107c602fc(0x3a);
              func_0x000107c5fb78(0x22207b,0xe300000000000000);
              func_0x000107c5fb78(0xd000000000000010,uStack_148);
              func_0x000107c5fb78(0x203a2022,0xe400000000000000);
              func_0x000107c5fb78(ppuVar4,ppuVar16);
              func_0x000107c6142c(ppuVar16);
              uVar14 = 0xd000000000000015;
              func_0x000107c5fb78(0xd000000000000015,(ulong)pcStack_138 | 0x8000000000000000);
              FUN_1010caec0();
              uVar18 = uVar14;
              func_0x000107c6057c(ppuVar5,uVar14);
              func_0x000107c5fb78();
              func_0x000107c6142c(uVar18);
              func_0x000107c5fb78(0xd000000000000014,(ulong)pcStack_140 | 0x8000000000000000);
              func_0x000107c6057c(ppuVar5,uVar14);
              func_0x000107c5fb78();
              func_0x000107c6142c(uVar14);
              func_0x000107c5fb78(0x7d22,0xe200000000000000);
              uVar18 = uStack_c8;
              if (lStack_108 == 0) {
                func_0x000107c6142c(uStack_c8);
                func_0x000107c61170(ppuStack_128);
                func_0x00010006c090(ppuVar22,ppuStack_150);
              }
              else {
                puVar15 = puStack_d0;
                func_0x000107c5fadc(puStack_d0,uStack_c8);
                func_0x000107c6142c(uVar18);
                lVar6 = puStack_180[1];
                if (lVar6 == 0) {
                  uVar18 = 0;
                }
                else {
                  uVar18 = *puStack_180;
                  func_0x000107c61434(lVar6);
                  func_0x000107c5fadc(uVar18,lVar6);
                  func_0x000107c6142c(lVar6);
                }
                puVar7 = &UNK_1103ce970;
                func_0x000107c613fc(&UNK_1103ce970,0x18,7);
                func_0x000107c61614(puVar7 + 0x10,unaff_x20);
                puVar8 = &UNK_1103cead8;
                func_0x000107c613fc(&UNK_1103cead8,0x28,7);
                *(undefined8 *)(puVar8 + 0x10) = 0xd000000000000010;
                *(undefined8 *)(puVar8 + 0x18) = uStack_148;
                *(undefined **)(puVar8 + 0x20) = puVar7;
                pcStack_b0 = (code *)0x1014d0c30;
                puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
                uStack_c8 = 0x42000000;
                pcStack_c0 = FUN_1012d20f0;
                puStack_b8 = &UNK_1103ceaf0;
                ppuVar4 = &puStack_d0;
                puStack_a8 = puVar8;
                func_0x000107c60bc4(ppuVar4);
                func_0x000107c6157c(puVar7);
                ppuVar11 = ppuStack_128;
                func_0x000107c50274(lStack_108);
                func_0x000107c60bd0(ppuVar4);
                func_0x000107c61170(puVar15);
                func_0x000107c61170(ppuVar11);
                func_0x000107c61170(uVar18);
                puVar15 = puStack_a8;
                func_0x000107c61574(puVar7);
                func_0x000107c61574(puVar15);
                func_0x00010006c090(ppuVar22,ppuStack_150);
                ppuVar5 = ppuStack_f8;
              }
            }
            pcVar23 = (code *)ppuStack_120[1];
            (*pcVar23)(lVar21,ppuVar5);
            (*pcVar23)(ppuVar20,ppuVar5);
            lVar6 = *(long *)(unaff_x20 + lStack_178);
            func_0x000107c4d9b0();
            func_0x000107c61180();
            while( true ) {
              lVar21 = lVar6;
              func_0x000107c4d67c();
              func_0x000107c61180();
              if (lVar21 == 0) {
                uStack_98 = 0;
                puStack_a0 = (undefined *)0x0;
                puStack_88 = (undefined *)0x0;
                pcStack_90 = (code *)0x0;
              }
              else {
                func_0x000107c60234(&puStack_a0);
                func_0x000107c615e8(lVar21);
              }
              uStack_c8 = uStack_98;
              puStack_d0 = puStack_a0;
              puStack_b8 = puStack_88;
              pcStack_c0 = pcStack_90;
              if (puStack_88 == (undefined *)0x0) {
                func_0x000107c61170(ppuStack_118);
                func_0x000107c61170(lVar6);
                ppuVar11 = (undefined **)0x112d387f8;
                FUN_1014d0ae4(&puStack_d0,0x112d387f8,&UNK_10d902650);
                goto LAB_1014ca2f0;
              }
              uVar18 = 0x112da9b80;
              func_0x0001000285a8(0x112da9b80,&UNK_10d951158);
              puVar9 = &uStack_d8;
              ppuVar11 = &puStack_d0;
              func_0x000107c6147c(puVar9,ppuVar11,PTR___sypN_11034f1a8 + 8,uVar18,6);
              uVar18 = uStack_d8;
              if (((ulong)puVar9 & 1) == 0) break;
              ppuVar4 = ppuVar3;
              func_0x000107c5ca18(ppuVar3);
              func_0x000107c61180();
              ppuVar11 = ppuStack_100;
              (*(code *)PTR____chkstk_darwin_11034bd40)();
              uVar12 = (ulong)((long)ppuVar11 + 0xfU) & 0xfffffffffffffff0;
              lVar21 = (long)pppuVar1 - uVar12;
              func_0x000107c5ee94(lVar21);
              func_0x000107c61170(ppuVar4);
              func_0x000107c5ee70();
              ppuVar11 = ppuStack_f8;
              (*pcVar23)(lVar21,ppuStack_f8);
              ppuVar16 = ppuVar3;
              func_0x000107c5ca1c(ppuVar3);
              func_0x000107c61180();
              (*(code *)PTR____chkstk_darwin_11034bd40)();
              lVar21 = (long)pppuVar1 - uVar12;
              func_0x000107c5ee94(lVar21);
              func_0x000107c61170(ppuVar16);
              func_0x000107c5ee70();
              (*pcVar23)(lVar21,ppuVar11);
              func_0x000107c41cc8(uVar18);
              func_0x000107c615e8(uVar18);
              func_0x000107c61170(ppuVar4);
              func_0x000107c61170(ppuVar16);
            }
            func_0x000107c61170(ppuStack_118);
            func_0x000107c61170(lVar6);
LAB_1014ca2f0:
            ppuVar4 = ppuStack_160;
            ppuVar22 = ppuStack_110;
          } while (ppuStack_110 != ppuStack_168);
        }
        func_0x000107c6142c(ppuVar4);
        uVar18 = 0xd000000000000028;
        ppuVar11 = (undefined **)((ulong)pcStack_1c0 | 0x8000000000000000);
        func_0x000107c5fadc(0xd000000000000028);
        uVar14 = uStack_1b0;
        func_0x000107c3ebd4();
        func_0x000107c61170(uVar18);
        if ((int)uVar14 == 0) {
LAB_1014ca188:
          func_0x000107c61170(ppuVar3);
        }
        else {
          ppuVar11 = ppuVar3;
          func_0x000107c42004();
          func_0x000107c61180();
          if (ppuVar11 == (undefined **)0x0) {
            ppuVar4 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
            if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e != 0) goto LAB_1014cb050;
LAB_1014caa9c:
            ppuVar11 = *(undefined ***)(((ulong)ppuVar4 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar18 = 0;
            FUN_1014d0b9c(0,0x112da9b78,&PTR__OBJC_CLASS___MXDiskWriteExceptionDiagnostic_1126a7498)
            ;
            ppuVar4 = ppuVar11;
            func_0x000107c5fc54(ppuVar11,uVar18);
            func_0x000107c61170(ppuVar11);
            if ((ulong)ppuVar4 >> 0x3e == 0) goto LAB_1014caa9c;
LAB_1014cb050:
            ppuVar11 = (undefined **)((ulong)ppuVar4 & 0xffffffffffffff8);
            if ((undefined **)0x7fffffffffffffff < ppuVar4) {
              ppuVar11 = ppuVar4;
            }
            func_0x000107c60480();
          }
          if (ppuVar11 != (undefined **)0x0) {
            if ((long)ppuVar11 < 1) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x1014cc358);
              (*pcVar23)();
            }
            ppuVar16 = (undefined **)0x0;
            ppuStack_158 = (undefined **)((ulong)ppuVar4 & 0xc000000000000001);
            ppuStack_150 = ppuVar11;
            ppuStack_130 = ppuVar4;
            do {
              ppuVar11 = ppuStack_130;
              if (ppuStack_158 == (undefined **)0x0) {
                ppuVar4 = (undefined **)ppuStack_130[(long)((long)ppuVar16 + 4)];
                func_0x000107c61174();
              }
              else {
                ppuVar4 = ppuVar16;
                func_0x0001014d021c(ppuVar16,ppuStack_130,
                                    &PTR__OBJC_CLASS___MXDiskWriteExceptionDiagnostic_1126a7498,
                                    0x112da9b78);
              }
              func_0x000107c61174();
              ppuVar22 = ppuVar4;
              func_0x000107c3ab94();
              func_0x000107c61180();
              ppuVar5 = ppuVar22;
              func_0x000107c5ee30();
              ppuVar17 = ppuVar11;
              func_0x000107c61170(ppuVar22);
              ppuVar22 = ppuVar4;
              func_0x000107c4ce18();
              func_0x000107c61180();
              ppuStack_f8 = ppuVar4;
              func_0x000107c61170(ppuVar4);
              ppuVar4 = ppuVar22;
              func_0x000107c3df74();
              func_0x000107c61180();
              func_0x000107c61170(ppuVar22);
              if (ppuVar4 == (undefined **)0x0) {
                ppuVar4 = (undefined **)0x0;
                func_0x000107c5faec();
                func_0x000107c5fadc();
                func_0x000107c6142c(ppuVar17);
              }
              ppuVar22 = ppuVar3;
              ppuStack_100 = ppuVar4;
              func_0x000107c5ca18(ppuVar3);
              func_0x000107c61180();
              lVar6 = 0;
              func_0x000107c5eea4();
              ppuVar20 = *(undefined ***)(lVar6 + -8);
              puVar15 = ppuVar20[8];
              (*(code *)PTR____chkstk_darwin_11034bd40)();
              ppuVar17 = (undefined **)
                         ((long)pppuVar1 + -((ulong)(puVar15 + 0xf) & 0xfffffffffffffff0));
              func_0x000107c5ee94(ppuVar17,ppuVar22);
              func_0x000107c61170(ppuVar22);
              ppuVar4 = ppuVar3;
              func_0x000107c5ca1c(ppuVar3);
              func_0x000107c61180();
              ppuStack_110 = ppuVar17;
              (*(code *)PTR____chkstk_darwin_11034bd40)();
              lVar13 = (long)ppuVar17 - ((ulong)(puVar15 + 0xf) & 0xfffffffffffffff0);
              func_0x000107c5ee94(lVar13);
              func_0x000107c61170(ppuVar4);
              lVar21 = 0;
              func_0x000107c5fb10();
              (*(code *)PTR____chkstk_darwin_11034bd40)
                        (*(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
              lVar21 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
              func_0x000107c5fb04(lVar21);
              ppuVar4 = ppuVar5;
              ppuVar22 = ppuVar11;
              func_0x000107c5faf0(ppuVar5,ppuVar11,lVar21);
              if (ppuVar22 == (undefined **)0x0) {
                func_0x000107c61170(ppuStack_100);
                func_0x00010006c090(ppuVar5,ppuVar11);
                func_0x000107c61170(ppuStack_f8);
                pcVar23 = (code *)ppuVar20[1];
                (*pcVar23)(lVar13,lVar6);
                (*pcVar23)(ppuVar17,lVar6);
              }
              else {
                puStack_d0 = (undefined *)0x0;
                uStack_c8 = 0xe000000000000000;
                ppuStack_128 = ppuVar20;
                ppuStack_120 = ppuVar5;
                ppuStack_118 = ppuVar11;
                func_0x000107c602fc(0x3a);
                func_0x000107c5fb78(0x22207b,0xe300000000000000);
                uVar18 = uStack_188;
                func_0x000107c5fb78(0xd000000000000015,uStack_188);
                func_0x000107c5fb78(0x203a2022,0xe400000000000000);
                func_0x000107c5fb78(ppuVar4,ppuVar22);
                func_0x000107c6142c(ppuVar22);
                uVar10 = 0xd000000000000015;
                func_0x000107c5fb78(0xd000000000000015,(ulong)pcStack_138 | 0x8000000000000000);
                FUN_1010caec0();
                uVar14 = uVar10;
                func_0x000107c6057c(lVar6,uVar10);
                func_0x000107c5fb78();
                func_0x000107c6142c(uVar14);
                func_0x000107c5fb78(0xd000000000000014,(ulong)pcStack_140 | 0x8000000000000000);
                func_0x000107c6057c(lVar6,uVar10);
                func_0x000107c5fb78();
                func_0x000107c6142c(uVar10);
                func_0x000107c5fb78(0x7d22,0xe200000000000000);
                uVar14 = uStack_c8;
                if (lStack_108 == 0) {
                  func_0x000107c6142c(uStack_c8);
                  func_0x000107c61170(ppuStack_100);
                  func_0x00010006c090(ppuStack_120,ppuStack_118);
                  func_0x000107c61170(ppuStack_f8);
                  pcVar23 = (code *)ppuStack_128[1];
                  (*pcVar23)(lVar13,lVar6);
                  (*pcVar23)(ppuVar17,lVar6);
                }
                else {
                  puVar15 = puStack_d0;
                  func_0x000107c5fadc(puStack_d0,uStack_c8);
                  func_0x000107c6142c(uVar14);
                  uVar12 = 0xd000000000000015;
                  func_0x000107c605b8(0xd000000000000015,uVar18,0xd000000000000010,uStack_148,0);
                  ppuStack_160 = ppuVar17;
                  if (((uVar12 & 1) == 0) || (lVar21 = puStack_180[1], lVar21 == 0)) {
                    uVar18 = 0;
                  }
                  else {
                    uVar18 = *puStack_180;
                    func_0x000107c61434(lVar21);
                    func_0x000107c5fadc(uVar18,lVar21);
                    func_0x000107c6142c(lVar21);
                  }
                  puVar7 = &UNK_1103ce970;
                  func_0x000107c613fc(&UNK_1103ce970,0x18,7);
                  func_0x000107c61614(puVar7 + 0x10,unaff_x20);
                  puVar8 = &UNK_1103cea88;
                  func_0x000107c613fc(&UNK_1103cea88,0x28,7);
                  *(undefined8 *)(puVar8 + 0x10) = 0xd000000000000015;
                  *(undefined8 *)(puVar8 + 0x18) = uStack_188;
                  *(undefined **)(puVar8 + 0x20) = puVar7;
                  pcStack_b0 = (code *)0x1014d0c2c;
                  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_c8 = 0x42000000;
                  pcStack_c0 = FUN_1012d20f0;
                  puStack_b8 = &UNK_1103ceaa0;
                  ppuVar4 = &puStack_d0;
                  puStack_a8 = puVar8;
                  func_0x000107c60bc4(ppuVar4);
                  func_0x000107c6157c(puVar7);
                  ppuVar11 = ppuStack_100;
                  func_0x000107c50274(lStack_108);
                  func_0x000107c60bd0(ppuVar4);
                  func_0x000107c61170(puVar15);
                  func_0x000107c61170(ppuVar11);
                  func_0x000107c61170(uVar18);
                  func_0x00010006c090(ppuStack_120,ppuStack_118);
                  func_0x000107c61170(ppuStack_f8);
                  pcVar23 = (code *)ppuStack_128[1];
                  (*pcVar23)(lVar13,lVar6);
                  (*pcVar23)(ppuStack_160,lVar6);
                  puVar15 = puStack_a8;
                  func_0x000107c61574(puVar7);
                  func_0x000107c61574(puVar15);
                }
              }
              ppuVar16 = (undefined **)((long)ppuVar16 + 1);
              ppuVar4 = ppuStack_130;
            } while (ppuStack_150 != ppuVar16);
          }
          func_0x000107c6142c(ppuVar4);
          ppuVar11 = ppuVar3;
          func_0x000107c446ac();
          func_0x000107c61180();
          if (ppuVar11 == (undefined **)0x0) {
            ppuVar16 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
            if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e != 0) goto LAB_1014cb6a0;
LAB_1014cb0c4:
            ppuVar11 = *(undefined ***)(((ulong)ppuVar16 & 0xffffffffffffff8) + 0x10);
          }
          else {
            ppuVar4 = (undefined **)0x0;
            FUN_1014d0b9c(0,0x112da9b70,&PTR__OBJC_CLASS___MXHangDiagnostic_1126a7490);
            ppuVar16 = ppuVar11;
            func_0x000107c5fc54();
            func_0x000107c61170(ppuVar11);
            if ((ulong)ppuVar16 >> 0x3e == 0) goto LAB_1014cb0c4;
LAB_1014cb6a0:
            ppuVar11 = (undefined **)((ulong)ppuVar16 & 0xffffffffffffff8);
            if ((undefined **)0x7fffffffffffffff < ppuVar16) {
              ppuVar11 = ppuVar16;
            }
            func_0x000107c60480();
          }
          if (ppuVar11 != (undefined **)0x0) {
            if ((long)ppuVar11 < 1) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x1014cc35c);
              (*pcVar23)();
            }
            ppuVar22 = (undefined **)0x0;
            ppuStack_150 = (undefined **)((ulong)ppuVar16 & 0xc000000000000001);
            ppuStack_158 = ppuVar16;
            ppuStack_130 = ppuVar11;
            do {
              if (ppuStack_150 == (undefined **)0x0) {
                ppuVar11 = (undefined **)ppuStack_158[(long)((long)ppuVar22 + 4)];
                func_0x000107c61174();
                ppuVar16 = ppuVar4;
              }
              else {
                ppuVar11 = ppuVar22;
                ppuVar16 = ppuStack_158;
                func_0x0001014d021c(ppuVar22,ppuStack_158,
                                    &PTR__OBJC_CLASS___MXHangDiagnostic_1126a7490,0x112da9b70);
              }
              func_0x000107c61174();
              ppuVar4 = ppuVar11;
              func_0x000107c3ab94();
              func_0x000107c61180();
              ppuVar5 = ppuVar4;
              func_0x000107c5ee30();
              ppuVar17 = ppuVar16;
              func_0x000107c61170(ppuVar4);
              ppuVar4 = ppuVar11;
              func_0x000107c4ce18();
              func_0x000107c61180();
              ppuStack_100 = ppuVar11;
              func_0x000107c61170(ppuVar11);
              ppuVar11 = ppuVar4;
              func_0x000107c3df74();
              func_0x000107c61180();
              func_0x000107c61170(ppuVar4);
              if (ppuVar11 == (undefined **)0x0) {
                ppuVar11 = (undefined **)0x0;
                func_0x000107c5faec();
                func_0x000107c5fadc();
                func_0x000107c6142c(ppuVar17);
              }
              ppuVar17 = ppuVar3;
              ppuStack_110 = ppuVar11;
              func_0x000107c5ca18(ppuVar3);
              func_0x000107c61180();
              ppuVar4 = (undefined **)0x0;
              func_0x000107c5eea4();
              ppuVar19 = (undefined **)ppuVar4[-1];
              puVar15 = ppuVar19[8];
              (*(code *)PTR____chkstk_darwin_11034bd40)();
              ppuVar20 = (undefined **)
                         ((long)pppuVar1 + -((ulong)(puVar15 + 0xf) & 0xfffffffffffffff0));
              func_0x000107c5ee94(ppuVar20,ppuVar17);
              func_0x000107c61170(ppuVar17);
              ppuVar11 = ppuVar3;
              func_0x000107c5ca1c(ppuVar3);
              func_0x000107c61180();
              ppuStack_f8 = ppuVar20;
              (*(code *)PTR____chkstk_darwin_11034bd40)();
              lVar21 = (long)ppuVar20 - ((ulong)(puVar15 + 0xf) & 0xfffffffffffffff0);
              func_0x000107c5ee94(lVar21);
              func_0x000107c61170(ppuVar11);
              lVar6 = 0;
              func_0x000107c5fb10();
              (*(code *)PTR____chkstk_darwin_11034bd40)
                        (*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
              lVar6 = lVar21 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
              func_0x000107c5fb04(lVar6);
              ppuVar11 = ppuVar5;
              ppuVar17 = ppuVar16;
              func_0x000107c5faf0(ppuVar5,ppuVar16,lVar6);
              if (ppuVar17 == (undefined **)0x0) {
                func_0x000107c61170(ppuStack_110);
                func_0x00010006c090(ppuVar5,ppuVar16);
                func_0x000107c61170(ppuStack_100);
                pcVar23 = (code *)ppuVar19[1];
                (*pcVar23)(lVar21,ppuVar4);
                (*pcVar23)(ppuVar20);
              }
              else {
                puStack_d0 = (undefined *)0x0;
                uStack_c8 = 0xe000000000000000;
                ppuStack_128 = ppuVar19;
                ppuStack_120 = ppuVar5;
                ppuStack_118 = ppuVar16;
                func_0x000107c602fc(0x3a);
                func_0x000107c5fb78(0x22207b,0xe300000000000000);
                uVar12 = 0;
                func_0x000107c5fb78(0x6169645f676e6168,0xef636974736f6e67);
                func_0x000107c5fb78(0x203a2022,0xe400000000000000);
                func_0x000107c5fb78(ppuVar11,ppuVar17);
                func_0x000107c6142c(ppuVar17);
                uVar14 = 0xd000000000000015;
                func_0x000107c5fb78(0xd000000000000015,(ulong)pcStack_138 | 0x8000000000000000);
                FUN_1010caec0();
                uVar18 = uVar14;
                func_0x000107c6057c(ppuVar4,uVar14);
                func_0x000107c5fb78();
                func_0x000107c6142c(uVar18);
                func_0x000107c5fb78(0xd000000000000014,(ulong)pcStack_140 | 0x8000000000000000);
                func_0x000107c6057c(ppuVar4,uVar14);
                func_0x000107c5fb78();
                func_0x000107c6142c(uVar14);
                func_0x000107c5fb78(0x7d22,0xe200000000000000);
                uVar18 = uStack_c8;
                if (lStack_108 == 0) {
                  func_0x000107c6142c(uStack_c8);
                  func_0x000107c61170(ppuStack_110);
                  func_0x00010006c090(ppuStack_120,ppuStack_118);
                  func_0x000107c61170(ppuStack_100);
                  pcVar23 = (code *)ppuStack_128[1];
                  (*pcVar23)(lVar21,ppuVar4);
                  (*pcVar23)(ppuVar20);
                }
                else {
                  puVar15 = puStack_d0;
                  func_0x000107c5fadc(puStack_d0,uStack_c8);
                  func_0x000107c6142c(uVar18);
                  func_0x000107c605b8(0x6169645f676e6168,0xef636974736f6e67,0xd000000000000010,
                                      uStack_148,0);
                  ppuStack_160 = ppuVar20;
                  if (((uVar12 & 1) == 0) || (lVar6 = puStack_180[1], lVar6 == 0)) {
                    uVar18 = 0;
                  }
                  else {
                    uVar18 = *puStack_180;
                    func_0x000107c61434(lVar6);
                    func_0x000107c5fadc(uVar18,lVar6);
                    func_0x000107c6142c(lVar6);
                  }
                  puVar7 = &UNK_1103ce970;
                  func_0x000107c613fc(&UNK_1103ce970,0x18,7);
                  func_0x000107c61614(puVar7 + 0x10,unaff_x20);
                  puVar8 = &UNK_1103cea38;
                  func_0x000107c613fc(&UNK_1103cea38,0x28,7);
                  *(undefined8 *)(puVar8 + 0x10) = 0x6169645f676e6168;
                  *(undefined8 *)(puVar8 + 0x18) = 0xef636974736f6e67;
                  *(undefined **)(puVar8 + 0x20) = puVar7;
                  pcStack_b0 = (code *)0x1014d0c28;
                  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_c8 = 0x42000000;
                  pcStack_c0 = FUN_1012d20f0;
                  puStack_b8 = &UNK_1103cea50;
                  ppuVar16 = &puStack_d0;
                  puStack_a8 = puVar8;
                  func_0x000107c60bc4(ppuVar16);
                  func_0x000107c6157c(puVar7);
                  ppuVar11 = ppuStack_110;
                  func_0x000107c50274(lStack_108);
                  func_0x000107c60bd0(ppuVar16);
                  func_0x000107c61170(puVar15);
                  func_0x000107c61170(ppuVar11);
                  func_0x000107c61170(uVar18);
                  func_0x00010006c090(ppuStack_120,ppuStack_118);
                  func_0x000107c61170(ppuStack_100);
                  pcVar23 = (code *)ppuStack_128[1];
                  (*pcVar23)(lVar21,ppuVar4);
                  (*pcVar23)(ppuStack_160);
                  puVar15 = puStack_a8;
                  func_0x000107c61574(puVar7);
                  func_0x000107c61574(puVar15);
                }
              }
              ppuVar22 = (undefined **)((long)ppuVar22 + 1);
              ppuVar16 = ppuStack_158;
            } while (ppuStack_130 != ppuVar22);
          }
          func_0x000107c6142c(ppuVar16);
          ppuVar11 = ppuVar3;
          func_0x000107c408b0();
          func_0x000107c61180();
          if (ppuVar11 == (undefined **)0x0) {
            ppuVar16 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
            if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e != 0) goto LAB_1014cbcd0;
LAB_1014cb70c:
            ppuVar11 = *(undefined ***)(((ulong)ppuVar16 & 0xffffffffffffff8) + 0x10);
          }
          else {
            ppuVar4 = (undefined **)0x0;
            FUN_1014d0b9c(0,0x112da9b68,&PTR__OBJC_CLASS___MXCPUExceptionDiagnostic_1126a7488);
            ppuVar16 = ppuVar11;
            func_0x000107c5fc54();
            func_0x000107c61170(ppuVar11);
            if ((ulong)ppuVar16 >> 0x3e == 0) goto LAB_1014cb70c;
LAB_1014cbcd0:
            ppuVar11 = (undefined **)((ulong)ppuVar16 & 0xffffffffffffff8);
            if ((undefined **)0x7fffffffffffffff < ppuVar16) {
              ppuVar11 = ppuVar16;
            }
            func_0x000107c60480();
          }
          if (ppuVar11 != (undefined **)0x0) {
            if ((long)ppuVar11 < 1) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x1014cc360);
              (*pcVar23)();
            }
            ppuVar22 = (undefined **)0x0;
            ppuStack_158 = (undefined **)((ulong)ppuVar16 & 0xc000000000000001);
            ppuStack_150 = ppuVar11;
            ppuStack_130 = ppuVar16;
            do {
              if (ppuStack_158 == (undefined **)0x0) {
                ppuVar11 = (undefined **)ppuStack_130[(long)((long)ppuVar22 + 4)];
                func_0x000107c61174();
                ppuVar16 = ppuVar4;
              }
              else {
                ppuVar11 = ppuVar22;
                ppuVar16 = ppuStack_130;
                func_0x0001014d021c(ppuVar22,ppuStack_130,
                                    &PTR__OBJC_CLASS___MXCPUExceptionDiagnostic_1126a7488,
                                    0x112da9b68);
              }
              func_0x000107c61174();
              ppuVar4 = ppuVar11;
              func_0x000107c3ab94();
              func_0x000107c61180();
              ppuVar5 = ppuVar4;
              func_0x000107c5ee30();
              ppuVar17 = ppuVar16;
              func_0x000107c61170(ppuVar4);
              ppuVar4 = ppuVar11;
              func_0x000107c4ce18();
              func_0x000107c61180();
              ppuStack_100 = ppuVar11;
              func_0x000107c61170(ppuVar11);
              ppuVar11 = ppuVar4;
              func_0x000107c3df74();
              func_0x000107c61180();
              func_0x000107c61170(ppuVar4);
              if (ppuVar11 == (undefined **)0x0) {
                ppuVar11 = (undefined **)0x0;
                func_0x000107c5faec();
                func_0x000107c5fadc();
                func_0x000107c6142c(ppuVar17);
              }
              ppuVar17 = ppuVar3;
              ppuStack_110 = ppuVar11;
              func_0x000107c5ca18(ppuVar3);
              func_0x000107c61180();
              ppuVar4 = (undefined **)0x0;
              func_0x000107c5eea4();
              ppuVar19 = (undefined **)ppuVar4[-1];
              puVar15 = ppuVar19[8];
              (*(code *)PTR____chkstk_darwin_11034bd40)();
              ppuVar20 = (undefined **)
                         ((long)pppuVar1 + -((ulong)(puVar15 + 0xf) & 0xfffffffffffffff0));
              func_0x000107c5ee94(ppuVar20,ppuVar17);
              func_0x000107c61170(ppuVar17);
              ppuVar11 = ppuVar3;
              func_0x000107c5ca1c(ppuVar3);
              func_0x000107c61180();
              ppuStack_f8 = ppuVar20;
              (*(code *)PTR____chkstk_darwin_11034bd40)();
              lVar21 = (long)ppuVar20 - ((ulong)(puVar15 + 0xf) & 0xfffffffffffffff0);
              func_0x000107c5ee94(lVar21);
              func_0x000107c61170(ppuVar11);
              lVar6 = 0;
              func_0x000107c5fb10();
              (*(code *)PTR____chkstk_darwin_11034bd40)
                        (*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
              lVar6 = lVar21 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
              func_0x000107c5fb04(lVar6);
              ppuVar11 = ppuVar5;
              ppuVar17 = ppuVar16;
              func_0x000107c5faf0(ppuVar5,ppuVar16,lVar6);
              if (ppuVar17 == (undefined **)0x0) {
                func_0x000107c61170(ppuStack_110);
                func_0x00010006c090(ppuVar5,ppuVar16);
                func_0x000107c61170(ppuStack_100);
                pcVar23 = (code *)ppuVar19[1];
                (*pcVar23)(lVar21,ppuVar4);
                (*pcVar23)(ppuVar20);
              }
              else {
                puStack_d0 = (undefined *)0x0;
                uStack_c8 = 0xe000000000000000;
                ppuStack_128 = ppuVar19;
                ppuStack_120 = ppuVar5;
                ppuStack_118 = ppuVar16;
                func_0x000107c602fc(0x3a);
                func_0x000107c5fb78(0x22207b,0xe300000000000000);
                uVar12 = 0x676169645f757063;
                func_0x000107c5fb78(0x676169645f757063,0xee00636974736f6e);
                func_0x000107c5fb78(0x203a2022,0xe400000000000000);
                func_0x000107c5fb78(ppuVar11,ppuVar17);
                func_0x000107c6142c(ppuVar17);
                uVar14 = 0xd000000000000015;
                func_0x000107c5fb78(0xd000000000000015,(ulong)pcStack_138 | 0x8000000000000000);
                FUN_1010caec0();
                uVar18 = uVar14;
                func_0x000107c6057c(ppuVar4,uVar14);
                func_0x000107c5fb78();
                func_0x000107c6142c(uVar18);
                func_0x000107c5fb78(0xd000000000000014,(ulong)pcStack_140 | 0x8000000000000000);
                func_0x000107c6057c(ppuVar4,uVar14);
                func_0x000107c5fb78();
                func_0x000107c6142c(uVar14);
                func_0x000107c5fb78(0x7d22,0xe200000000000000);
                uVar18 = uStack_c8;
                if (lStack_108 == 0) {
                  func_0x000107c6142c(uStack_c8);
                  func_0x000107c61170(ppuStack_110);
                  func_0x00010006c090(ppuStack_120,ppuStack_118);
                  func_0x000107c61170(ppuStack_100);
                  pcVar23 = (code *)ppuStack_128[1];
                  (*pcVar23)(lVar21,ppuVar4);
                  (*pcVar23)(ppuVar20);
                }
                else {
                  puVar15 = puStack_d0;
                  func_0x000107c5fadc(puStack_d0,uStack_c8);
                  func_0x000107c6142c(uVar18);
                  func_0x000107c605b8(0x676169645f757063,0xee00636974736f6e,0xd000000000000010,
                                      uStack_148,0);
                  if (((uVar12 & 1) == 0) || (lVar6 = puStack_180[1], lVar6 == 0)) {
                    uVar18 = 0;
                  }
                  else {
                    uVar18 = *puStack_180;
                    func_0x000107c61434(lVar6);
                    func_0x000107c5fadc(uVar18,lVar6);
                    func_0x000107c6142c(lVar6);
                  }
                  puVar7 = &UNK_1103ce970;
                  func_0x000107c613fc(&UNK_1103ce970,0x18,7);
                  func_0x000107c61614(puVar7 + 0x10,unaff_x20);
                  puVar8 = &UNK_1103ce9e8;
                  func_0x000107c613fc(&UNK_1103ce9e8,0x28,7);
                  *(undefined8 *)(puVar8 + 0x10) = 0x676169645f757063;
                  *(undefined8 *)(puVar8 + 0x18) = 0xee00636974736f6e;
                  *(undefined **)(puVar8 + 0x20) = puVar7;
                  pcStack_b0 = FUN_1014d0c24;
                  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_c8 = 0x42000000;
                  pcStack_c0 = FUN_1012d20f0;
                  puStack_b8 = &UNK_1103cea00;
                  ppuVar16 = &puStack_d0;
                  puStack_a8 = puVar8;
                  func_0x000107c60bc4(ppuVar16);
                  func_0x000107c6157c(puVar7);
                  ppuVar11 = ppuStack_110;
                  func_0x000107c50274(lStack_108);
                  func_0x000107c60bd0(ppuVar16);
                  func_0x000107c61170(puVar15);
                  func_0x000107c61170(ppuVar11);
                  func_0x000107c61170(uVar18);
                  func_0x00010006c090(ppuStack_120,ppuStack_118);
                  func_0x000107c61170(ppuStack_100);
                  pcVar23 = (code *)ppuStack_128[1];
                  (*pcVar23)(lVar21,ppuVar4);
                  (*pcVar23)(ppuVar20);
                  puVar15 = puStack_a8;
                  func_0x000107c61574(puVar7);
                  func_0x000107c61574(puVar15);
                }
              }
              ppuVar22 = (undefined **)((long)ppuVar22 + 1);
              ppuVar16 = ppuStack_130;
            } while (ppuStack_150 != ppuVar22);
          }
          func_0x000107c6142c(ppuVar16);
          iVar2 = 2;
          ppuVar11 = (undefined **)0x10;
          func_0x000100029b9c(2,0x10,0,0);
          if (iVar2 == 0) goto LAB_1014ca188;
          ppuVar11 = ppuVar3;
          func_0x000107c3ddf0();
          func_0x000107c61180();
          if (ppuVar11 == (undefined **)0x0) {
            ppuVar4 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
            if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e != 0) goto LAB_1014cc310;
LAB_1014cbd58:
            ppuVar11 = *(undefined ***)(((ulong)ppuVar4 & 0xffffffffffffff8) + 0x10);
          }
          else {
            uVar18 = 0;
            FUN_1014d0b9c(0,0x112da9b60,&PTR__OBJC_CLASS___MXAppLaunchDiagnostic_1126a7480);
            ppuVar4 = ppuVar11;
            func_0x000107c5fc54(ppuVar11,uVar18);
            func_0x000107c61170(ppuVar11);
            if ((ulong)ppuVar4 >> 0x3e == 0) goto LAB_1014cbd58;
LAB_1014cc310:
            ppuVar11 = (undefined **)((ulong)ppuVar4 & 0xffffffffffffff8);
            if ((undefined **)0x7fffffffffffffff < ppuVar4) {
              ppuVar11 = ppuVar4;
            }
            func_0x000107c60480();
          }
          if (ppuVar11 != (undefined **)0x0) {
            if ((long)ppuVar11 < 1) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x1014cc364);
              (*pcVar23)();
            }
            ppuVar16 = (undefined **)0x0;
            ppuStack_158 = (undefined **)((ulong)ppuVar4 & 0xc000000000000001);
            ppuStack_150 = ppuVar11;
            ppuStack_130 = ppuVar4;
            do {
              ppuVar11 = ppuStack_130;
              if (ppuStack_158 == (undefined **)0x0) {
                ppuVar4 = (undefined **)ppuStack_130[(long)((long)ppuVar16 + 4)];
                func_0x000107c61174();
              }
              else {
                ppuVar4 = ppuVar16;
                func_0x0001014d021c(ppuVar16,ppuStack_130,
                                    &PTR__OBJC_CLASS___MXAppLaunchDiagnostic_1126a7480,0x112da9b60);
              }
              func_0x000107c61174();
              ppuVar22 = ppuVar4;
              func_0x000107c3ab94();
              func_0x000107c61180();
              ppuVar5 = ppuVar22;
              func_0x000107c5ee30();
              ppuVar17 = ppuVar11;
              func_0x000107c61170(ppuVar22);
              ppuVar22 = ppuVar4;
              func_0x000107c4ce18();
              func_0x000107c61180();
              ppuStack_f8 = ppuVar4;
              func_0x000107c61170(ppuVar4);
              ppuVar4 = ppuVar22;
              func_0x000107c3df74();
              func_0x000107c61180();
              func_0x000107c61170(ppuVar22);
              if (ppuVar4 == (undefined **)0x0) {
                ppuVar4 = (undefined **)0x0;
                func_0x000107c5faec();
                func_0x000107c5fadc();
                func_0x000107c6142c(ppuVar17);
              }
              ppuVar22 = ppuVar3;
              ppuStack_100 = ppuVar4;
              func_0x000107c5ca18(ppuVar3);
              func_0x000107c61180();
              lVar6 = 0;
              func_0x000107c5eea4();
              ppuVar20 = *(undefined ***)(lVar6 + -8);
              puVar15 = ppuVar20[8];
              ppuStack_110 = (undefined **)pppuVar1;
              (*(code *)PTR____chkstk_darwin_11034bd40)();
              ppuVar17 = (undefined **)
                         ((long)pppuVar1 - ((ulong)(puVar15 + 0xf) & 0xfffffffffffffff0));
              func_0x000107c5ee94(ppuVar17,ppuVar22);
              func_0x000107c61170(ppuVar22);
              ppuVar4 = ppuVar3;
              func_0x000107c5ca1c(ppuVar3);
              func_0x000107c61180();
              (*(code *)PTR____chkstk_darwin_11034bd40)();
              lVar13 = (long)ppuVar17 - ((ulong)(puVar15 + 0xf) & 0xfffffffffffffff0);
              func_0x000107c5ee94(lVar13);
              func_0x000107c61170(ppuVar4);
              lVar21 = 0;
              func_0x000107c5fb10();
              (*(code *)PTR____chkstk_darwin_11034bd40)
                        (*(undefined8 *)(*(long *)(lVar21 + -8) + 0x40));
              lVar21 = lVar13 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
              func_0x000107c5fb04(lVar21);
              ppuVar4 = ppuVar5;
              ppuVar22 = ppuVar11;
              func_0x000107c5faf0(ppuVar5,ppuVar11,lVar21);
              if (ppuVar22 == (undefined **)0x0) {
                func_0x000107c61170(ppuStack_100);
                func_0x00010006c090(ppuVar5,ppuVar11);
                func_0x000107c61170(ppuStack_f8);
                pcVar23 = (code *)ppuVar20[1];
                (*pcVar23)(lVar13,lVar6);
                (*pcVar23)(ppuVar17,lVar6);
                pppuVar1 = (undefined ***)ppuStack_110;
              }
              else {
                puStack_d0 = (undefined *)0x0;
                uStack_c8 = 0xe000000000000000;
                ppuStack_128 = ppuVar20;
                ppuStack_120 = ppuVar5;
                ppuStack_118 = ppuVar11;
                func_0x000107c602fc(0x3a);
                func_0x000107c5fb78(0x22207b,0xe300000000000000);
                uVar18 = uStack_1a0;
                func_0x000107c5fb78(0xd000000000000015,uStack_1a0);
                func_0x000107c5fb78(0x203a2022,0xe400000000000000);
                func_0x000107c5fb78(ppuVar4,ppuVar22);
                func_0x000107c6142c(ppuVar22);
                uVar10 = 0xd000000000000015;
                func_0x000107c5fb78(0xd000000000000015,(ulong)pcStack_138 | 0x8000000000000000);
                FUN_1010caec0();
                uVar14 = uVar10;
                func_0x000107c6057c(lVar6,uVar10);
                func_0x000107c5fb78();
                func_0x000107c6142c(uVar14);
                func_0x000107c5fb78(0xd000000000000014,(ulong)pcStack_140 | 0x8000000000000000);
                func_0x000107c6057c(lVar6,uVar10);
                func_0x000107c5fb78();
                func_0x000107c6142c(uVar10);
                func_0x000107c5fb78(0x7d22,0xe200000000000000);
                uVar14 = uStack_c8;
                if (lStack_108 == 0) {
                  func_0x000107c6142c(uStack_c8);
                  func_0x000107c61170(ppuStack_100);
                  func_0x00010006c090(ppuStack_120,ppuStack_118);
                  func_0x000107c61170(ppuStack_f8);
                  pcVar23 = (code *)ppuStack_128[1];
                  (*pcVar23)(lVar13,lVar6);
                  (*pcVar23)(ppuVar17,lVar6);
                  pppuVar1 = (undefined ***)ppuStack_110;
                }
                else {
                  puVar15 = puStack_d0;
                  func_0x000107c5fadc(puStack_d0,uStack_c8);
                  func_0x000107c6142c(uVar14);
                  uVar12 = 0xd000000000000015;
                  func_0x000107c605b8(0xd000000000000015,uVar18,0xd000000000000010,uStack_148,0);
                  ppuStack_160 = ppuVar17;
                  if (((uVar12 & 1) == 0) || (lVar21 = puStack_180[1], lVar21 == 0)) {
                    uVar18 = 0;
                  }
                  else {
                    uVar18 = *puStack_180;
                    func_0x000107c61434(lVar21);
                    func_0x000107c5fadc(uVar18,lVar21);
                    func_0x000107c6142c(lVar21);
                  }
                  pppuVar1 = (undefined ***)ppuStack_110;
                  puVar7 = &UNK_1103ce970;
                  func_0x000107c613fc(&UNK_1103ce970,0x18,7);
                  func_0x000107c61614(puVar7 + 0x10,unaff_x20);
                  puVar8 = &UNK_1103ce998;
                  func_0x000107c613fc(&UNK_1103ce998,0x28,7);
                  *(undefined8 *)(puVar8 + 0x10) = 0xd000000000000015;
                  *(undefined8 *)(puVar8 + 0x18) = uStack_1a0;
                  *(undefined **)(puVar8 + 0x20) = puVar7;
                  pcStack_b0 = (code *)0x1014d0588;
                  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_c8 = 0x42000000;
                  pcStack_c0 = FUN_1012d20f0;
                  puStack_b8 = &UNK_1103ce9b0;
                  ppuVar4 = &puStack_d0;
                  puStack_a8 = puVar8;
                  func_0x000107c60bc4(ppuVar4);
                  func_0x000107c6157c(puVar7);
                  ppuVar11 = ppuStack_100;
                  func_0x000107c50274(lStack_108);
                  func_0x000107c60bd0(ppuVar4);
                  func_0x000107c61170(puVar15);
                  func_0x000107c61170(ppuVar11);
                  func_0x000107c61170(uVar18);
                  func_0x00010006c090(ppuStack_120,ppuStack_118);
                  func_0x000107c61170(ppuStack_f8);
                  pcVar23 = (code *)ppuStack_128[1];
                  (*pcVar23)(lVar13,lVar6);
                  (*pcVar23)(ppuStack_160,lVar6);
                  puVar15 = puStack_a8;
                  func_0x000107c61574(puVar7);
                  func_0x000107c61574(puVar15);
                }
              }
              ppuVar16 = (undefined **)((long)ppuVar16 + 1);
              ppuVar4 = ppuStack_130;
            } while (ppuStack_150 != ppuVar16);
          }
          ppuVar11 = ppuVar4;
          func_0x000107c61170(ppuVar3);
          func_0x000107c6142c(ppuVar4);
        }
        ppuVar4 = ppuStack_1a8;
      } while (ppuStack_1a8 != ppuStack_1c8);
    }
  }
  return;
}



/* Entry: 1014cc39c; end: 1014cc3b7; -[_TtC24SCCrashServicesImplSwift11SCMetricKit didReceiveDiagnosticPayloads:] */

void FUN_1014cc39c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1014d0b9c(0,0x112da9c20,&PTR__OBJC_CLASS___MXDiagnosticPayload_1126a74d8);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  FUN_1014c9fcc(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1014cc3b8; end: 1014d0193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014cc3b8(double param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  code *pcVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  int iVar10;
  ulong uVar11;
  long unaff_x20;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  ulong uVar19;
  double dVar20;
  double dVar21;
  undefined8 uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  ulong uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  code *pcStack_d0;
  undefined1 *puStack_c8;
  long lStack_c0;
  code *pcStack_b8;
  long lStack_b0;
  long lStack_a8;
  code *pcStack_a0;
  long lStack_98;
  code *pcStack_90;
  ulong uStack_88;
  long alStack_80 [2];
  
  puVar2 = &uStack_110;
  iVar10 = (int)*(undefined8 *)(unaff_x20 + _DAT_112da9b50);
  uVar3 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef86860);
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar3);
  if (iVar10 != 0) {
    if (param_2 >> 0x3e == 0) {
      uVar13 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
      lVar15 = _DAT_112da9b48;
    }
    else {
      uVar13 = param_2 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < param_2) {
        uVar13 = param_2;
      }
      func_0x000107c60480();
      lVar15 = _DAT_112da9b48;
    }
    _DAT_112da9b48 = lVar15;
    if (uVar13 != 0) {
      iStack_ec = 2;
      func_0x000100029b9c(2,0x1a,0,0);
      iStack_f0 = 2;
      func_0x000100029b9c(2,0xf,2,0);
      iStack_f4 = 2;
      func_0x000100029b9c(2,0x10,0,0);
      if ((long)uVar13 < 1) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d0194);
        (*pcVar18)();
      }
      uVar19 = 0;
      uStack_110 = *(undefined8 *)(unaff_x20 + lVar15);
      uStack_e8 = param_2 & 0xc000000000000001;
      uStack_108 = uVar13;
      uStack_100 = param_2;
      do {
        if (uStack_e8 == 0) {
          uVar13 = *(ulong *)(uStack_100 + uVar19 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar13 = uVar19;
          func_0x0001014d021c(uVar19,uStack_100,&PTR__OBJC_CLASS___MXMetricPayload_1126a74d0,
                              0x112da9c18);
        }
        pcVar18 = (code *)PTR_PTR_1126a74a8;
        func_0x000107c610f8();
        func_0x000107c453e4();
        pcStack_b8 = pcVar18;
        uStack_88 = uVar13;
        func_0x000107c5ca18(uVar13);
        func_0x000107c61180();
        lVar4 = 0;
        func_0x000107c5eea4();
        lVar17 = *(long *)(lVar4 + -8);
        lVar14 = *(long *)(lVar17 + 0x40);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar15 = (long)puVar2 - (lVar14 + 0xfU & 0xfffffffffffffff0);
        func_0x000107c5ee94(lVar15,uVar13);
        func_0x000107c61170(uVar13);
        func_0x000107c5ee8c();
        pcVar18 = *(code **)(lVar17 + 8);
        (*pcVar18)(lVar15,lVar4);
        lVar15 = 0x112da9b90;
        if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d00b0);
          (*pcVar18)();
        }
        if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d00b4);
          (*pcVar18)();
        }
        dVar20 = 9.223372036854776e+18;
        if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d00b8);
          (*pcVar18)();
        }
        func_0x000107c59d80(pcStack_b8);
        uVar13 = uStack_88;
        func_0x000107c5ca1c(uStack_88);
        func_0x000107c61180();
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar14 = (long)puVar2 - (lVar14 + 0xfU & 0xfffffffffffffff0);
        func_0x000107c5ee94(lVar14);
        func_0x000107c61170(uVar13);
        func_0x000107c5ee8c();
        (*pcVar18)(lVar14,lVar4);
        pcVar18 = pcStack_b8;
        if (0x7fefffffffffffff < (ulong)ABS(dVar20)) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d00bc);
          (*pcVar18)();
        }
        if (dVar20 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d00c0);
          (*pcVar18)();
        }
        dVar21 = 9.223372036854776e+18;
        if (9.223372036854776e+18 <= dVar20) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d00c4);
          (*pcVar18)();
        }
        func_0x000107c59d84(pcStack_b8);
        uVar13 = uStack_88;
        uVar11 = uStack_88;
        func_0x000107c4aaf0();
        func_0x000107c61180();
        if (uVar11 == 0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c6142c(lVar4);
        }
        func_0x000107c566a8(pcVar18);
        func_0x000107c61170(uVar11);
        func_0x0001000285a8(0x112da9b90,&UNK_10d951160);
        lVar4 = *(long *)(*(long *)(lVar15 + -8) + 0x40);
        uVar11 = lVar4 + 0xfU & 0xfffffffffffffff0;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar15 = (long)puVar2 - uVar11;
        func_0x000107c4b898();
        func_0x000107c61180();
        uStack_d8 = uVar19;
        if (uVar13 != 0) {
          uVar19 = uVar13;
          func_0x000107c40e64();
          func_0x000107c61180();
          func_0x000107c61170(uVar13);
          uVar3 = 0;
          FUN_1014d0b9c(0,0x112da9bd8,&PTR__OBJC_CLASS___NSUnitDuration_1126a74b8);
          func_0x000107c5eb58(lVar15,uVar19,uVar3);
          func_0x000107c61170(uVar19);
        }
        lVar14 = 0x112da9b98;
        lVar17 = lVar14;
        func_0x0001000285a8(0x112da9b98,&UNK_10daf89c0);
        (**(code **)(*(long *)(lVar17 + -8) + 0x38))(lVar15,uVar13 == 0,1,lVar17);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar12 = lVar15 - uVar11;
        func_0x0001014d0bdc(lVar15,lVar12,0x112da9b90,&UNK_10d951160);
        func_0x0001000285a8(0x112da9b98,&UNK_10daf89c0);
        lVar16 = *(long *)(lVar14 + -8);
        pcVar18 = *(code **)(lVar16 + 0x30);
        lVar17 = lVar12;
        (*pcVar18)(lVar12,1,lVar14);
        lStack_a8 = lVar14;
        if ((int)lVar17 == 1) {
          FUN_1014d0ae4(lVar15,0x112da9b90,&UNK_10d951160);
          FUN_1014d0ae4(lVar12,0x112da9b90,&UNK_10d951160);
          dVar20 = dVar21;
        }
        else {
          func_0x000107c5eb60(lVar14);
          dVar20 = dVar21;
          (**(code **)(lVar16 + 8))(lVar12,lVar14);
          if ((ulong)ABS(dVar21) < 0x7ff0000000000000) {
            if (dVar21 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d00d0);
              (*pcVar18)();
            }
            dVar20 = 9.223372036854776e+18;
            if (9.223372036854776e+18 <= dVar21) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d00dc);
              (*pcVar18)();
            }
            func_0x000107c53c0c(pcStack_b8);
          }
          FUN_1014d0ae4(lVar15,0x112da9b90,&UNK_10d951160);
        }
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        uVar19 = lVar4 + 0xfU & 0xfffffffffffffff0;
        lVar15 = (long)puVar2 - uVar19;
        uVar13 = uStack_88;
        func_0x000107c4b898();
        func_0x000107c61180();
        if (uVar13 != 0) {
          uVar11 = uVar13;
          func_0x000107c40e68();
          func_0x000107c61180();
          func_0x000107c61170(uVar13);
          uVar3 = 0;
          FUN_1014d0b9c(0,0x112da9bd8,&PTR__OBJC_CLASS___NSUnitDuration_1126a74b8);
          func_0x000107c5eb58(lVar15,uVar11,uVar3);
          func_0x000107c61170(uVar11);
        }
        lVar14 = lStack_a8;
        pcStack_90 = *(code **)(lVar16 + 0x38);
        (*pcStack_90)(lVar15,uVar13 == 0,1,lStack_a8);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar12 = lVar15 - uVar19;
        func_0x0001014d0bdc(lVar15,lVar12,0x112da9b90,&UNK_10d951160);
        lVar17 = lVar12;
        (*pcVar18)(lVar12,1,lVar14);
        if ((int)lVar17 == 1) {
          FUN_1014d0ae4(lVar15,0x112da9b90,&UNK_10d951160);
          FUN_1014d0ae4(lVar12,0x112da9b90,&UNK_10d951160);
          uVar13 = uStack_88;
          dVar21 = dVar20;
        }
        else {
          func_0x000107c5eb60(lVar14);
          dVar21 = dVar20;
          (**(code **)(lVar16 + 8))(lVar12,lVar14);
          uVar13 = uStack_88;
          if ((ulong)ABS(dVar20) < 0x7ff0000000000000) {
            if (dVar20 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d00d4);
              (*pcVar18)();
            }
            dVar21 = 9.223372036854776e+18;
            if (9.223372036854776e+18 <= dVar20) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d00e4);
              (*pcVar18)();
            }
            func_0x000107c53c10(pcStack_b8);
            FUN_1014d0ae4(lVar15,0x112da9b90,&UNK_10d951160);
          }
          else {
            FUN_1014d0ae4(lVar15,0x112da9b90,&UNK_10d951160);
            uVar13 = uStack_88;
          }
        }
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        uVar19 = lVar4 + 0xfU & 0xfffffffffffffff0;
        lVar15 = (long)puVar2 - uVar19;
        func_0x000107c4b898();
        func_0x000107c61180();
        if (uVar13 != 0) {
          uVar11 = uVar13;
          func_0x000107c40e88();
          func_0x000107c61180();
          func_0x000107c61170(uVar13);
          uVar3 = 0;
          FUN_1014d0b9c(0,0x112da9bd8,&PTR__OBJC_CLASS___NSUnitDuration_1126a74b8);
          func_0x000107c5eb58(lVar15,uVar11,uVar3);
          func_0x000107c61170(uVar11);
        }
        lVar14 = lStack_a8;
        (*pcStack_90)(lVar15,uVar13 == 0,1,lStack_a8);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar12 = lVar15 - uVar19;
        func_0x0001014d0bdc(lVar15,lVar12,0x112da9b90,&UNK_10d951160);
        lVar17 = lVar12;
        (*pcVar18)(lVar12,1,lVar14);
        if ((int)lVar17 == 1) {
          FUN_1014d0ae4(lVar15,0x112da9b90,&UNK_10d951160);
          FUN_1014d0ae4(lVar12,0x112da9b90,&UNK_10d951160);
          uVar13 = uStack_88;
          dVar20 = dVar21;
        }
        else {
          func_0x000107c5eb60(lVar14);
          dVar20 = dVar21;
          (**(code **)(lVar16 + 8))(lVar12,lVar14);
          uVar13 = uStack_88;
          if ((ulong)ABS(dVar21) < 0x7ff0000000000000) {
            if (dVar21 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d00d8);
              (*pcVar18)();
            }
            dVar20 = 9.223372036854776e+18;
            if (9.223372036854776e+18 <= dVar21) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d00ec);
              (*pcVar18)();
            }
            func_0x000107c53c44(pcStack_b8);
            FUN_1014d0ae4(lVar15,0x112da9b90,&UNK_10d951160);
          }
          else {
            FUN_1014d0ae4(lVar15,0x112da9b90,&UNK_10d951160);
            uVar13 = uStack_88;
          }
        }
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        uVar19 = lVar4 + 0xfU & 0xfffffffffffffff0;
        lVar15 = (long)puVar2 - uVar19;
        func_0x000107c4b898();
        func_0x000107c61180();
        if (uVar13 != 0) {
          uVar11 = uVar13;
          func_0x000107c40ea0();
          func_0x000107c61180();
          func_0x000107c61170(uVar13);
          uVar3 = 0;
          FUN_1014d0b9c(0,0x112da9bd8,&PTR__OBJC_CLASS___NSUnitDuration_1126a74b8);
          func_0x000107c5eb58(lVar15,uVar11,uVar3);
          func_0x000107c61170(uVar11);
        }
        lVar14 = lStack_a8;
        (*pcStack_90)(lVar15,uVar13 == 0,1,lStack_a8);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar12 = lVar15 - uVar19;
        func_0x0001014d0bdc(lVar15,lVar12,0x112da9b90,&UNK_10d951160);
        lVar17 = lVar12;
        (*pcVar18)(lVar12,1,lVar14);
        if ((int)lVar17 == 1) {
          FUN_1014d0ae4(lVar15,0x112da9b90,&UNK_10d951160);
          FUN_1014d0ae4(lVar12,0x112da9b90,&UNK_10d951160);
          uVar13 = uStack_88;
          dVar21 = dVar20;
        }
        else {
          func_0x000107c5eb60(lVar14);
          dVar21 = dVar20;
          (**(code **)(lVar16 + 8))(lVar12,lVar14);
          uVar13 = uStack_88;
          if ((ulong)ABS(dVar20) < 0x7ff0000000000000) {
            if (dVar20 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d00e0);
              (*pcVar18)();
            }
            dVar21 = 9.223372036854776e+18;
            if (9.223372036854776e+18 <= dVar20) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d00f4);
              (*pcVar18)();
            }
            func_0x000107c53c50(pcStack_b8);
            FUN_1014d0ae4(lVar15,0x112da9b90,&UNK_10d951160);
          }
          else {
            FUN_1014d0ae4(lVar15,0x112da9b90,&UNK_10d951160);
            uVar13 = uStack_88;
          }
        }
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        uVar19 = lVar4 + 0xfU & 0xfffffffffffffff0;
        lVar15 = (long)puVar2 - uVar19;
        func_0x000107c4b898();
        func_0x000107c61180();
        if (uVar13 != 0) {
          uVar11 = uVar13;
          func_0x000107c40e90();
          func_0x000107c61180();
          func_0x000107c61170(uVar13);
          uVar3 = 0;
          FUN_1014d0b9c(0,0x112da9bd8,&PTR__OBJC_CLASS___NSUnitDuration_1126a74b8);
          func_0x000107c5eb58(lVar15,uVar11,uVar3);
          func_0x000107c61170(uVar11);
        }
        lVar14 = lStack_a8;
        (*pcStack_90)(lVar15,uVar13 == 0,1,lStack_a8);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar12 = lVar15 - uVar19;
        func_0x0001014d0bdc(lVar15,lVar12,0x112da9b90,&UNK_10d951160);
        lVar17 = lVar12;
        (*pcVar18)(lVar12,1,lVar14);
        if ((int)lVar17 == 1) {
          FUN_1014d0ae4(lVar15,0x112da9b90,&UNK_10d951160);
          FUN_1014d0ae4(lVar12,0x112da9b90,&UNK_10d951160);
          uVar13 = uStack_88;
          dVar20 = dVar21;
        }
        else {
          func_0x000107c5eb60(lVar14);
          dVar20 = dVar21;
          (**(code **)(lVar16 + 8))(lVar12,lVar14);
          uVar13 = uStack_88;
          if ((ulong)ABS(dVar21) < 0x7ff0000000000000) {
            if (dVar21 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d00e8);
              (*pcVar18)();
            }
            dVar20 = 9.223372036854776e+18;
            if (9.223372036854776e+18 <= dVar21) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d00fc);
              (*pcVar18)();
            }
            func_0x000107c53c48(pcStack_b8);
            FUN_1014d0ae4(lVar15,0x112da9b90,&UNK_10d951160);
          }
          else {
            FUN_1014d0ae4(lVar15,0x112da9b90,&UNK_10d951160);
            uVar13 = uStack_88;
          }
        }
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        uVar19 = lVar4 + 0xfU & 0xfffffffffffffff0;
        lVar15 = (long)puVar2 - uVar19;
        func_0x000107c4b898();
        func_0x000107c61180();
        if (uVar13 != 0) {
          uVar11 = uVar13;
          func_0x000107c40eac();
          func_0x000107c61180();
          func_0x000107c61170(uVar13);
          uVar3 = 0;
          FUN_1014d0b9c(0,0x112da9bd8,&PTR__OBJC_CLASS___NSUnitDuration_1126a74b8);
          func_0x000107c5eb58(lVar15,uVar11,uVar3);
          func_0x000107c61170(uVar11);
        }
        lVar14 = lStack_a8;
        (*pcStack_90)(lVar15,uVar13 == 0,1,lStack_a8);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar12 = lVar15 - uVar19;
        func_0x0001014d0bdc(lVar15,lVar12,0x112da9b90,&UNK_10d951160);
        lVar17 = lVar12;
        (*pcVar18)(lVar12,1,lVar14);
        lStack_b0 = lVar4;
        if ((int)lVar17 == 1) {
          FUN_1014d0ae4(lVar15,0x112da9b90,&UNK_10d951160);
          FUN_1014d0ae4(lVar12,0x112da9b90,&UNK_10d951160);
          pcVar6 = pcStack_b8;
          uVar13 = uStack_88;
          dVar21 = dVar20;
        }
        else {
          func_0x000107c5eb60(lVar14);
          dVar21 = dVar20;
          (**(code **)(lVar16 + 8))(lVar12,lVar14);
          uVar13 = uStack_88;
          pcVar6 = pcStack_b8;
          if ((ulong)ABS(dVar20) < 0x7ff0000000000000) {
            if (dVar20 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d00f0);
              (*pcVar18)();
            }
            dVar21 = 9.223372036854776e+18;
            if (9.223372036854776e+18 <= dVar20) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d0104);
              (*pcVar18)();
            }
            func_0x000107c53c54(pcStack_b8);
            FUN_1014d0ae4(lVar15,0x112da9b90,&UNK_10d951160);
          }
          else {
            FUN_1014d0ae4(lVar15,0x112da9b90,&UNK_10d951160);
            pcVar6 = pcStack_b8;
            uVar13 = uStack_88;
          }
        }
        uVar19 = uVar13;
        func_0x000107c3f744();
        func_0x000107c61180();
        if (uVar19 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = uVar19;
          func_0x000107c44eb4();
          func_0x000107c61180();
          func_0x000107c61170(uVar19);
        }
        uVar19 = uVar11;
        FUN_1014d072c(uVar11);
        func_0x000107c61170(uVar11);
        uVar3 = 0;
        FUN_1014d0b9c(0,0x112da9a38,&PTR_PTR_1126a7478);
        uVar11 = uVar19;
        uStack_e0 = uVar3;
        func_0x000107c5fc48(uVar19);
        func_0x000107c6142c(uVar19);
        func_0x000107c532ac(pcVar6);
        func_0x000107c61170(uVar11);
        uVar19 = uVar13;
        func_0x000107c4ce18();
        func_0x000107c61180();
        if (uVar19 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = uVar19;
          func_0x000107c3df74();
          func_0x000107c61180();
          func_0x000107c61170(uVar19);
          if (uVar11 == 0) {
            uVar11 = 0;
            func_0x000107c5faec(0);
            uVar9 = uVar3;
            func_0x000107c5fadc();
            func_0x000107c6142c(uVar3);
            uVar3 = uVar9;
          }
        }
        func_0x000107c566a4(pcVar6);
        func_0x000107c61170(uVar11);
        uVar19 = uVar13;
        func_0x000107c4ce18();
        func_0x000107c61180();
        if (uVar19 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = uVar19;
          func_0x000107c4e0d0();
          func_0x000107c61180();
          func_0x000107c61170(uVar19);
          if (uVar11 == 0) {
            uVar11 = 0;
            func_0x000107c5faec(0);
            uVar9 = uVar3;
            func_0x000107c5fadc();
            func_0x000107c6142c(uVar3);
            uVar3 = uVar9;
          }
        }
        func_0x000107c566ac(pcVar6);
        func_0x000107c61170(uVar11);
        uVar19 = uVar13;
        func_0x000107c4ce18();
        func_0x000107c61180();
        if (uVar19 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = uVar19;
          func_0x000107c4fba0();
          func_0x000107c61180();
          func_0x000107c61170(uVar19);
          if (uVar11 == 0) {
            uVar11 = 0;
            func_0x000107c5faec(0);
            uVar9 = uVar3;
            func_0x000107c5fadc();
            func_0x000107c6142c(uVar3);
            uVar3 = uVar9;
          }
        }
        func_0x000107c566b0(pcVar6);
        func_0x000107c61170(uVar11);
        uVar19 = uVar13;
        func_0x000107c4ce18();
        func_0x000107c61180();
        if (uVar19 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = uVar19;
          func_0x000107c4e860();
          func_0x000107c61180();
          func_0x000107c61170(uVar19);
          if (uVar11 == 0) {
            uVar11 = 0;
            func_0x000107c5faec(0);
            func_0x000107c5fadc();
            func_0x000107c6142c(uVar3);
          }
        }
        func_0x000107c57448(pcVar6);
        func_0x000107c61170(uVar11);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        uVar19 = extraout_x12 + 0xfU & 0xfffffffffffffff0;
        lVar15 = (long)puVar2 - uVar19;
        func_0x000107c4446c();
        func_0x000107c61180();
        if (uVar13 != 0) {
          uVar11 = uVar13;
          func_0x000107c40e84();
          func_0x000107c61180();
          func_0x000107c61170(uVar13);
          uVar3 = 0;
          FUN_1014d0b9c(0,0x112da9bd8,&PTR__OBJC_CLASS___NSUnitDuration_1126a74b8);
          func_0x000107c5eb58(lVar15,uVar11,uVar3);
          func_0x000107c61170(uVar11);
        }
        lVar4 = lStack_a8;
        (*pcStack_90)(lVar15,uVar13 == 0,1,lStack_a8);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar17 = lVar15 - uVar19;
        func_0x0001014d0bdc(lVar15,lVar17,0x112da9b90,&UNK_10d951160);
        lVar14 = lVar17;
        (*pcVar18)(lVar17,1,lVar4);
        if ((int)lVar14 == 1) {
          FUN_1014d0ae4(lVar15,0x112da9b90,&UNK_10d951160);
          FUN_1014d0ae4(lVar17,0x112da9b90,&UNK_10d951160);
          uVar13 = uStack_88;
          dVar20 = dVar21;
        }
        else {
          func_0x000107c5eb60(lVar4);
          dVar20 = dVar21;
          (**(code **)(lVar16 + 8))(lVar17,lVar4);
          uVar13 = uStack_88;
          if ((ulong)ABS(dVar21) < 0x7ff0000000000000) {
            if (dVar21 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d00f8);
              (*pcVar18)();
            }
            dVar20 = 9.223372036854776e+18;
            if (9.223372036854776e+18 <= dVar21) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d010c);
              (*pcVar18)();
            }
            func_0x000107c53c40(pcStack_b8);
            FUN_1014d0ae4(lVar15,0x112da9b90,&UNK_10d951160);
          }
          else {
            FUN_1014d0ae4(lVar15,0x112da9b90,&UNK_10d951160);
            uVar13 = uStack_88;
          }
        }
        lVar15 = 0x112da9ba0;
        func_0x0001000285a8(0x112da9ba0,&UNK_10d951170);
        lVar15 = *(long *)(*(long *)(lVar15 + -8) + 0x40);
        uVar19 = lVar15 + 0xfU & 0xfffffffffffffff0;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar4 = (long)puVar2 - uVar19;
        func_0x000107c4ccfc();
        func_0x000107c61180();
        if (uVar13 != 0) {
          uVar11 = uVar13;
          func_0x000107c4e4b8();
          func_0x000107c61180();
          func_0x000107c61170(uVar13);
          uVar3 = 0;
          FUN_1014d0b9c(0,0x112da9be0,&PTR__OBJC_CLASS___NSUnitInformationStorage_1126a74c0);
          func_0x000107c5eb58(lVar4,uVar11,uVar3);
          func_0x000107c61170(uVar11);
        }
        lVar14 = 0x112da9ba8;
        lVar17 = lVar14;
        func_0x0001000285a8(0x112da9ba8,&UNK_10d951178);
        (**(code **)(*(long *)(lVar17 + -8) + 0x38))(lVar4,uVar13 == 0,1,lVar17);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar12 = lVar4 - uVar19;
        func_0x0001014d0bdc(lVar4,lVar12,0x112da9ba0,&UNK_10d951170);
        func_0x0001000285a8(0x112da9ba8,&UNK_10d951178);
        lVar16 = *(long *)(lVar14 + -8);
        pcStack_d0 = *(code **)(lVar16 + 0x30);
        lVar17 = lVar12;
        (*pcStack_d0)(lVar12,1,lVar14);
        puStack_c8 = (undefined1 *)lVar16;
        if ((int)lVar17 == 1) {
          FUN_1014d0ae4(lVar4,0x112da9ba0,&UNK_10d951170);
          FUN_1014d0ae4(lVar12,0x112da9ba0,&UNK_10d951170);
          dVar21 = dVar20;
        }
        else {
          func_0x000107c5eb60(lVar14);
          dVar21 = dVar20;
          (**(code **)(lVar16 + 8))(lVar12,lVar14);
          if ((ulong)ABS(dVar20) < 0x7ff0000000000000) {
            if (dVar20 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d0100);
              (*pcVar18)();
            }
            dVar21 = 9.223372036854776e+18;
            if (9.223372036854776e+18 <= dVar20) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d0110);
              (*pcVar18)();
            }
            func_0x000107c572c4(pcStack_b8);
          }
          FUN_1014d0ae4(lVar4,0x112da9ba0,&UNK_10d951170);
        }
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        uVar19 = lVar15 + 0xfU & 0xfffffffffffffff0;
        lVar4 = (long)puVar2 - uVar19;
        uVar13 = uStack_88;
        func_0x000107c4ccfc();
        func_0x000107c61180();
        if (uVar13 != 0) {
          uVar11 = uVar13;
          func_0x000107c3e55c();
          func_0x000107c61180();
          func_0x000107c61170(uVar13);
          uVar5 = uVar11;
          func_0x000107c3e554(uVar11);
          func_0x000107c61180();
          func_0x000107c61170(uVar11);
          uVar3 = 0;
          FUN_1014d0b9c(0,0x112da9be0,&PTR__OBJC_CLASS___NSUnitInformationStorage_1126a74c0);
          func_0x000107c5eb58(lVar4,uVar5,uVar3);
          func_0x000107c61170(uVar5);
        }
        puVar1 = puStack_c8;
        pcStack_a0 = *(code **)((long)puStack_c8 + 0x38);
        (*pcStack_a0)(lVar4,uVar13 == 0,1,lVar14);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar12 = lVar4 - uVar19;
        func_0x0001014d0bdc(lVar4,lVar12,0x112da9ba0,&UNK_10d951170);
        lVar17 = lVar12;
        (*pcStack_d0)(lVar12,1,lVar14);
        lStack_98 = lVar14;
        if ((int)lVar17 == 1) {
          FUN_1014d0ae4(lVar4,0x112da9ba0,&UNK_10d951170);
          FUN_1014d0ae4(lVar12,0x112da9ba0,&UNK_10d951170);
          pcVar18 = pcStack_d0;
          dVar20 = dVar21;
        }
        else {
          func_0x000107c5eb60(lVar14);
          dVar20 = dVar21;
          (**(code **)((long)puVar1 + 8))(lVar12,lVar14);
          pcVar18 = pcStack_d0;
          if ((ulong)ABS(dVar21) < 0x7ff0000000000000) {
            if (dVar21 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d0108);
              (*pcVar18)();
            }
            dVar20 = 9.223372036854776e+18;
            if (9.223372036854776e+18 <= dVar21) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d0114);
              (*pcVar18)();
            }
            func_0x000107c52b14(pcStack_b8);
            FUN_1014d0ae4(lVar4,0x112da9ba0,&UNK_10d951170);
          }
          else {
            FUN_1014d0ae4(lVar4,0x112da9ba0,&UNK_10d951170);
            pcVar18 = pcStack_d0;
          }
        }
        pcVar6 = pcStack_b8;
        func_0x000107c61174();
        uVar13 = uStack_88;
        func_0x000107c4ccfc();
        func_0x000107c61180();
        dVar21 = dVar20;
        if (uVar13 != 0) {
          uVar19 = uVar13;
          func_0x000107c3e55c();
          func_0x000107c61180();
          func_0x000107c61170(uVar13);
          func_0x000107c5ba24(uVar19);
          dVar21 = dVar20;
          func_0x000107c61170(uVar19);
          if ((ulong)ABS(dVar20) < 0x7ff0000000000000) {
            if (dVar20 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d00c8);
              (*pcVar18)();
            }
            dVar21 = 9.223372036854776e+18;
            if (9.223372036854776e+18 <= dVar20) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d00cc);
              (*pcVar18)();
            }
            func_0x000107c52b10(pcVar6);
          }
        }
        func_0x000107c61170(pcVar6);
        func_0x000107c61174();
        uVar13 = uStack_88;
        uVar19 = uStack_88;
        func_0x000107c4ccfc();
        func_0x000107c61180();
        if (uVar19 != 0) {
          uVar11 = uVar19;
          func_0x000107c3e55c();
          func_0x000107c61180();
          func_0x000107c61170(uVar19);
          func_0x000107c515ec(uVar11);
          func_0x000107c61170(uVar11);
          func_0x000107c52b0c(pcVar6);
        }
        func_0x000107c61170(pcVar6);
        if (iStack_ec != 0) {
          pcVar7 = pcVar6;
          func_0x000107c61174();
          uVar19 = uVar13;
          func_0x000107c41ffc();
          func_0x000107c61180();
          if (uVar19 != 0) {
            func_0x000107c5cc9c();
            func_0x000107c61170(uVar19);
            func_0x000107c59f38(pcVar7);
          }
          pcStack_d0 = pcVar6;
          func_0x000107c61170(pcVar7);
          func_0x000107c61174();
          uVar19 = uVar13;
          func_0x000107c41ffc();
          func_0x000107c61180();
          if (uVar19 != 0) {
            func_0x000107c5ccc8();
            func_0x000107c61170(uVar19);
            func_0x000107c59f54(pcVar7);
          }
          pcStack_b8 = pcVar7;
          func_0x000107c61170(pcVar7);
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          uVar11 = lVar15 + 0xfU & 0xfffffffffffffff0;
          lVar4 = (long)puVar2 - uVar11;
          uVar19 = uVar13;
          func_0x000107c41ffc();
          func_0x000107c61180();
          if (uVar19 != 0) {
            uVar5 = uVar19;
            func_0x000107c5cca0();
            func_0x000107c61180();
            func_0x000107c61170(uVar19);
            uVar3 = 0;
            FUN_1014d0b9c(0,0x112da9be0,&PTR__OBJC_CLASS___NSUnitInformationStorage_1126a74c0);
            func_0x000107c5eb58(lVar4,uVar5,uVar3);
            func_0x000107c61170(uVar5);
          }
          lVar14 = lStack_98;
          (*pcStack_a0)(lVar4,uVar19 == 0,1,lStack_98);
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          lVar12 = lVar4 - uVar11;
          func_0x0001014d0bdc(lVar4,lVar12,0x112da9ba0,&UNK_10d951170);
          lVar17 = lVar12;
          (*pcVar18)(lVar12,1,lVar14);
          if ((int)lVar17 == 1) {
            FUN_1014d0ae4(lVar4,0x112da9ba0,&UNK_10d951170);
            FUN_1014d0ae4(lVar12,0x112da9ba0,&UNK_10d951170);
            dVar20 = dVar21;
          }
          else {
            func_0x000107c5eb60(lVar14);
            dVar20 = dVar21;
            (**(code **)((long)puStack_c8 + 8))(lVar12,lVar14);
            if ((ulong)ABS(dVar21) < 0x7ff0000000000000) {
              if (dVar21 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d0128);
                (*pcVar18)();
              }
              dVar20 = 9.223372036854776e+18;
              if (9.223372036854776e+18 <= dVar21) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d0130);
                (*pcVar18)();
              }
              func_0x000107c59f3c(pcStack_b8);
            }
            FUN_1014d0ae4(lVar4,0x112da9ba0,&UNK_10d951170);
          }
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          uVar11 = lVar15 + 0xfU & 0xfffffffffffffff0;
          lVar4 = (long)puVar2 - uVar11;
          uVar19 = uVar13;
          func_0x000107c41ffc();
          func_0x000107c61180();
          if (uVar19 != 0) {
            uVar5 = uVar19;
            func_0x000107c5cca8();
            func_0x000107c61180();
            func_0x000107c61170(uVar19);
            uVar3 = 0;
            FUN_1014d0b9c(0,0x112da9be0,&PTR__OBJC_CLASS___NSUnitInformationStorage_1126a74c0);
            func_0x000107c5eb58(lVar4,uVar5,uVar3);
            func_0x000107c61170(uVar5);
          }
          lVar14 = lStack_98;
          (*pcStack_a0)(lVar4,uVar19 == 0,1,lStack_98);
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          lVar12 = lVar4 - uVar11;
          func_0x0001014d0bdc(lVar4,lVar12,0x112da9ba0,&UNK_10d951170);
          lVar17 = lVar12;
          (*pcVar18)(lVar12,1,lVar14);
          if ((int)lVar17 == 1) {
            FUN_1014d0ae4(lVar4,0x112da9ba0,&UNK_10d951170);
            FUN_1014d0ae4(lVar12,0x112da9ba0,&UNK_10d951170);
            dVar21 = dVar20;
          }
          else {
            func_0x000107c5eb60(lVar14);
            dVar21 = dVar20;
            (**(code **)((long)puStack_c8 + 8))(lVar12,lVar14);
            if ((ulong)ABS(dVar20) < 0x7ff0000000000000) {
              if (dVar20 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d012c);
                (*pcVar18)();
              }
              dVar21 = 9.223372036854776e+18;
              if (9.223372036854776e+18 <= dVar20) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d013c);
                (*pcVar18)();
              }
              func_0x000107c59f40(pcStack_b8);
            }
            FUN_1014d0ae4(lVar4,0x112da9ba0,&UNK_10d951170);
          }
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          uVar11 = lVar15 + 0xfU & 0xfffffffffffffff0;
          lVar4 = (long)puVar2 - uVar11;
          uVar19 = uVar13;
          func_0x000107c41ffc();
          func_0x000107c61180();
          if (uVar19 != 0) {
            uVar5 = uVar19;
            func_0x000107c5ccb0();
            func_0x000107c61180();
            func_0x000107c61170(uVar19);
            uVar3 = 0;
            FUN_1014d0b9c(0,0x112da9be0,&PTR__OBJC_CLASS___NSUnitInformationStorage_1126a74c0);
            func_0x000107c5eb58(lVar4,uVar5,uVar3);
            func_0x000107c61170(uVar5);
          }
          lVar14 = lStack_98;
          (*pcStack_a0)(lVar4,uVar19 == 0,1,lStack_98);
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          lVar12 = lVar4 - uVar11;
          func_0x0001014d0bdc(lVar4,lVar12,0x112da9ba0,&UNK_10d951170);
          lVar17 = lVar12;
          (*pcVar18)(lVar12,1,lVar14);
          if ((int)lVar17 == 1) {
            FUN_1014d0ae4(lVar4,0x112da9ba0,&UNK_10d951170);
            FUN_1014d0ae4(lVar12,0x112da9ba0,&UNK_10d951170);
            dVar20 = dVar21;
          }
          else {
            func_0x000107c5eb60(lVar14);
            dVar20 = dVar21;
            (**(code **)((long)puStack_c8 + 8))(lVar12,lVar14);
            if ((ulong)ABS(dVar21) < 0x7ff0000000000000) {
              if (dVar21 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d0134);
                (*pcVar18)();
              }
              dVar20 = 9.223372036854776e+18;
              if (9.223372036854776e+18 <= dVar21) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d0144);
                (*pcVar18)();
              }
              func_0x000107c59f44(pcStack_b8);
            }
            FUN_1014d0ae4(lVar4,0x112da9ba0,&UNK_10d951170);
          }
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          uVar11 = lVar15 + 0xfU & 0xfffffffffffffff0;
          lVar4 = (long)puVar2 - uVar11;
          uVar19 = uVar13;
          func_0x000107c41ffc();
          func_0x000107c61180();
          if (uVar19 != 0) {
            uVar5 = uVar19;
            func_0x000107c5cccc();
            func_0x000107c61180();
            func_0x000107c61170(uVar19);
            uVar3 = 0;
            FUN_1014d0b9c(0,0x112da9be0,&PTR__OBJC_CLASS___NSUnitInformationStorage_1126a74c0);
            func_0x000107c5eb58(lVar4,uVar5,uVar3);
            func_0x000107c61170(uVar5);
          }
          lVar14 = lStack_98;
          (*pcStack_a0)(lVar4,uVar19 == 0,1,lStack_98);
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          lVar12 = lVar4 - uVar11;
          func_0x0001014d0bdc(lVar4,lVar12,0x112da9ba0,&UNK_10d951170);
          lVar17 = lVar12;
          (*pcVar18)(lVar12,1,lVar14);
          if ((int)lVar17 == 1) {
            FUN_1014d0ae4(lVar4,0x112da9ba0,&UNK_10d951170);
            FUN_1014d0ae4(lVar12,0x112da9ba0,&UNK_10d951170);
            dVar21 = dVar20;
          }
          else {
            func_0x000107c5eb60(lVar14);
            dVar21 = dVar20;
            (**(code **)((long)puStack_c8 + 8))(lVar12,lVar14);
            if ((ulong)ABS(dVar20) < 0x7ff0000000000000) {
              if (dVar20 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d0138);
                (*pcVar18)();
              }
              dVar21 = 9.223372036854776e+18;
              if (9.223372036854776e+18 <= dVar20) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d014c);
                (*pcVar18)();
              }
              func_0x000107c59f58(pcStack_b8);
            }
            FUN_1014d0ae4(lVar4,0x112da9ba0,&UNK_10d951170);
          }
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          uVar11 = lVar15 + 0xfU & 0xfffffffffffffff0;
          lVar4 = (long)puVar2 - uVar11;
          uVar19 = uVar13;
          func_0x000107c41ffc();
          func_0x000107c61180();
          if (uVar19 != 0) {
            uVar5 = uVar19;
            func_0x000107c5ccd8();
            func_0x000107c61180();
            func_0x000107c61170(uVar19);
            uVar3 = 0;
            FUN_1014d0b9c(0,0x112da9be0,&PTR__OBJC_CLASS___NSUnitInformationStorage_1126a74c0);
            func_0x000107c5eb58(lVar4,uVar5,uVar3);
            func_0x000107c61170(uVar5);
          }
          lVar14 = lStack_98;
          (*pcStack_a0)(lVar4,uVar19 == 0,1,lStack_98);
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          lVar12 = lVar4 - uVar11;
          func_0x0001014d0bdc(lVar4,lVar12,0x112da9ba0,&UNK_10d951170);
          lVar17 = lVar12;
          (*pcVar18)(lVar12,1,lVar14);
          if ((int)lVar17 == 1) {
            FUN_1014d0ae4(lVar4,0x112da9ba0,&UNK_10d951170);
            FUN_1014d0ae4(lVar12,0x112da9ba0,&UNK_10d951170);
            dVar20 = dVar21;
          }
          else {
            func_0x000107c5eb60(lVar14);
            dVar20 = dVar21;
            (**(code **)((long)puStack_c8 + 8))(lVar12,lVar14);
            if ((ulong)ABS(dVar21) < 0x7ff0000000000000) {
              if (dVar21 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d0140);
                (*pcVar18)();
              }
              dVar20 = 9.223372036854776e+18;
              if (9.223372036854776e+18 <= dVar21) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d0150);
                (*pcVar18)();
              }
              func_0x000107c59f60(pcStack_b8);
            }
            FUN_1014d0ae4(lVar4,0x112da9ba0,&UNK_10d951170);
          }
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          uVar11 = lVar15 + 0xfU & 0xfffffffffffffff0;
          lVar4 = (long)puVar2 - uVar11;
          uVar19 = uVar13;
          func_0x000107c41ffc();
          func_0x000107c61180();
          if (uVar19 != 0) {
            uVar5 = uVar19;
            func_0x000107c5ccdc();
            func_0x000107c61180();
            func_0x000107c61170(uVar19);
            uVar3 = 0;
            FUN_1014d0b9c(0,0x112da9be0,&PTR__OBJC_CLASS___NSUnitInformationStorage_1126a74c0);
            func_0x000107c5eb58(lVar4,uVar5,uVar3);
            func_0x000107c61170(uVar5);
          }
          lVar14 = lStack_98;
          (*pcStack_a0)(lVar4,uVar19 == 0,1,lStack_98);
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          lVar12 = lVar4 - uVar11;
          func_0x0001014d0bdc(lVar4,lVar12,0x112da9ba0,&UNK_10d951170);
          lVar17 = lVar12;
          (*pcVar18)(lVar12,1,lVar14);
          if ((int)lVar17 == 1) {
            FUN_1014d0ae4(lVar4,0x112da9ba0,&UNK_10d951170);
            FUN_1014d0ae4(lVar12,0x112da9ba0,&UNK_10d951170);
            pcVar6 = pcStack_d0;
            dVar21 = dVar20;
          }
          else {
            func_0x000107c5eb60(lVar14);
            dVar21 = dVar20;
            (**(code **)((long)puStack_c8 + 8))(lVar12,lVar14);
            if ((ulong)ABS(dVar20) < 0x7ff0000000000000) {
              if (dVar20 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d0148);
                (*pcVar18)();
              }
              dVar21 = 9.223372036854776e+18;
              if (9.223372036854776e+18 <= dVar20) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d0154);
                (*pcVar18)();
              }
              func_0x000107c59f68(pcStack_b8);
            }
            FUN_1014d0ae4(lVar4,0x112da9ba0,&UNK_10d951170);
            pcVar6 = pcStack_d0;
          }
        }
        func_0x000107c61174();
        uVar19 = uVar13;
        func_0x000107c3df90();
        func_0x000107c61180();
        if (uVar19 != 0) {
          uVar11 = uVar19;
          func_0x000107c3e5b0();
          func_0x000107c61180();
          func_0x000107c61170(uVar19);
          func_0x000107c40ea4(uVar11);
          func_0x000107c61170(uVar11);
          func_0x000107c53bfc(pcVar6);
        }
        func_0x000107c61170(pcVar6);
        func_0x000107c61174();
        uVar19 = uVar13;
        func_0x000107c3df90();
        func_0x000107c61180();
        lVar4 = 0x112da9bb0;
        if (uVar19 != 0) {
          uVar11 = uVar19;
          func_0x000107c3e5b0();
          func_0x000107c61180();
          func_0x000107c61170(uVar19);
          func_0x000107c40e48(uVar11);
          func_0x000107c61170(uVar11);
          func_0x000107c53bd8(pcVar6);
        }
        func_0x000107c61170(pcVar6);
        func_0x000107c61174();
        uVar19 = uVar13;
        func_0x000107c3df90();
        func_0x000107c61180();
        if (uVar19 != 0) {
          uVar11 = uVar19;
          func_0x000107c3e5b0();
          func_0x000107c61180();
          func_0x000107c61170(uVar19);
          func_0x000107c40e4c(uVar11);
          func_0x000107c61170(uVar11);
          func_0x000107c53bdc(pcVar6);
        }
        func_0x000107c61170(pcVar6);
        func_0x000107c61174();
        uVar19 = uVar13;
        func_0x000107c3df90();
        func_0x000107c61180();
        if (uVar19 != 0) {
          uVar11 = uVar19;
          func_0x000107c3e5b0();
          func_0x000107c61180();
          func_0x000107c61170(uVar19);
          func_0x000107c40e70(uVar11);
          func_0x000107c61170(uVar11);
          func_0x000107c53be8(pcVar6);
        }
        func_0x000107c61170(pcVar6);
        func_0x000107c61174();
        uVar19 = uVar13;
        func_0x000107c3df90();
        func_0x000107c61180();
        if (uVar19 != 0) {
          uVar11 = uVar19;
          func_0x000107c3e5b0();
          func_0x000107c61180();
          func_0x000107c61170(uVar19);
          func_0x000107c40e9c(uVar11);
          func_0x000107c61170(uVar11);
          func_0x000107c53bf8(pcVar6);
        }
        func_0x000107c61170(pcVar6);
        func_0x000107c61174();
        uVar19 = uVar13;
        func_0x000107c3df90();
        func_0x000107c61180();
        if (uVar19 != 0) {
          uVar11 = uVar19;
          func_0x000107c3e5b0();
          func_0x000107c61180();
          func_0x000107c61170(uVar19);
          func_0x000107c40e98(uVar11);
          func_0x000107c61170(uVar11);
          func_0x000107c53bf4(pcVar6);
        }
        func_0x000107c61170(pcVar6);
        func_0x000107c61174();
        uVar19 = uVar13;
        func_0x000107c3df90();
        func_0x000107c61180();
        if (uVar19 != 0) {
          uVar11 = uVar19;
          func_0x000107c3e5b0();
          func_0x000107c61180();
          func_0x000107c61170(uVar19);
          func_0x000107c40ea8(uVar11);
          func_0x000107c61170(uVar11);
          func_0x000107c53c00(pcVar6);
        }
        func_0x000107c61170(pcVar6);
        func_0x000107c61174();
        uVar19 = uVar13;
        func_0x000107c3df90();
        func_0x000107c61180();
        if (uVar19 != 0) {
          uVar11 = uVar19;
          func_0x000107c3e5b0();
          func_0x000107c61180();
          func_0x000107c61170(uVar19);
          func_0x000107c40e60(uVar11);
          func_0x000107c61170(uVar11);
          func_0x000107c53be4(pcVar6);
        }
        func_0x000107c61170(pcVar6);
        func_0x000107c61174();
        uVar19 = uVar13;
        func_0x000107c3df90();
        func_0x000107c61180();
        if (uVar19 != 0) {
          uVar11 = uVar19;
          func_0x000107c3e5b0();
          func_0x000107c61180();
          func_0x000107c61170(uVar19);
          func_0x000107c40e8c(uVar11);
          func_0x000107c61170(uVar11);
          func_0x000107c53bec(pcVar6);
        }
        func_0x000107c61170(pcVar6);
        func_0x000107c61174();
        uVar19 = uVar13;
        func_0x000107c3df90();
        func_0x000107c61180();
        if (uVar19 != 0) {
          uVar11 = uVar19;
          func_0x000107c3e5b0();
          func_0x000107c61180();
          func_0x000107c61170(uVar19);
          func_0x000107c40e58(uVar11);
          func_0x000107c61170(uVar11);
          func_0x000107c53c04(pcVar6);
        }
        func_0x000107c61170(pcVar6);
        func_0x000107c61174();
        uVar19 = uVar13;
        func_0x000107c3df90();
        func_0x000107c61180();
        if (uVar19 != 0) {
          uVar11 = uVar19;
          func_0x000107c4383c();
          func_0x000107c61180();
          func_0x000107c61170(uVar19);
          func_0x000107c40ea4(uVar11);
          func_0x000107c61170(uVar11);
          func_0x000107c53c38(pcVar6);
        }
        func_0x000107c61170(pcVar6);
        func_0x000107c61174();
        uVar19 = uVar13;
        func_0x000107c3df90();
        func_0x000107c61180();
        if (uVar19 != 0) {
          uVar11 = uVar19;
          func_0x000107c4383c();
          func_0x000107c61180();
          func_0x000107c61170(uVar19);
          func_0x000107c40e48(uVar11);
          func_0x000107c61170(uVar11);
          func_0x000107c53c24(pcVar6);
        }
        func_0x000107c61170(pcVar6);
        func_0x000107c61174();
        uVar19 = uVar13;
        func_0x000107c3df90();
        func_0x000107c61180();
        if (uVar19 != 0) {
          uVar11 = uVar19;
          func_0x000107c4383c();
          func_0x000107c61180();
          func_0x000107c61170(uVar19);
          func_0x000107c40e9c(uVar11);
          func_0x000107c61170(uVar11);
          func_0x000107c53c34(pcVar6);
        }
        func_0x000107c61170(pcVar6);
        func_0x000107c61174();
        uVar19 = uVar13;
        func_0x000107c3df90();
        func_0x000107c61180();
        if (uVar19 != 0) {
          uVar11 = uVar19;
          func_0x000107c4383c();
          func_0x000107c61180();
          func_0x000107c61170(uVar19);
          func_0x000107c40e4c(uVar11);
          func_0x000107c61170(uVar11);
          func_0x000107c53c28(pcVar6);
        }
        func_0x000107c61170(pcVar6);
        func_0x000107c61174();
        uVar19 = uVar13;
        func_0x000107c3df90();
        func_0x000107c61180();
        if (uVar19 != 0) {
          uVar11 = uVar19;
          func_0x000107c4383c();
          func_0x000107c61180();
          func_0x000107c61170(uVar19);
          func_0x000107c40e60(uVar11);
          func_0x000107c61170(uVar11);
          func_0x000107c53c2c(pcVar6);
        }
        func_0x000107c61170(pcVar6);
        func_0x000107c61174();
        uVar19 = uVar13;
        func_0x000107c3df90();
        func_0x000107c61180();
        if (uVar19 != 0) {
          uVar11 = uVar19;
          func_0x000107c4383c();
          func_0x000107c61180();
          func_0x000107c61170(uVar19);
          func_0x000107c40e8c(uVar11);
          func_0x000107c61170(uVar11);
          func_0x000107c53c30(pcVar6);
        }
        func_0x000107c61170(pcVar6);
        func_0x0001000285a8(0x112da9bb0,&UNK_10d951180);
        uVar19 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
        pcStack_b8 = (code *)puVar2;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar4 = (long)puVar2 - uVar19;
        func_0x000107c61174();
        func_0x000107c42118();
        func_0x000107c61180();
        lStack_c0 = lVar15;
        if (uVar13 == 0) {
LAB_1014ced94:
          uVar3 = 1;
        }
        else {
          uVar11 = uVar13;
          func_0x000107c3e558();
          func_0x000107c61180();
          func_0x000107c61170(uVar13);
          if (uVar11 == 0) goto LAB_1014ced94;
          uVar13 = uVar11;
          func_0x000107c3e554(uVar11);
          func_0x000107c61180();
          func_0x000107c61170(uVar11);
          uVar3 = 0;
          FUN_1014d0b9c(0,0x112da9be8,&PTR__OBJC_CLASS___MXUnitAveragePixelLuminance_1126a74c8);
          func_0x000107c5eb58(lVar4,uVar13,uVar3);
          func_0x000107c61170(uVar13);
          uVar3 = 0;
        }
        lVar15 = 0x112da9bb8;
        lVar14 = lVar15;
        func_0x0001000285a8(0x112da9bb8,&UNK_10d951188);
        (**(code **)(*(long *)(lVar14 + -8) + 0x38))(lVar4,uVar3,1,lVar14);
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar12 = lVar4 - uVar19;
        func_0x0001014d0bdc(lVar4,lVar12,0x112da9bb0,&UNK_10d951180);
        func_0x0001000285a8(0x112da9bb8,&UNK_10d951188);
        lVar17 = *(long *)(lVar15 + -8);
        lVar14 = lVar12;
        (**(code **)(lVar17 + 0x30))(lVar12,1,lVar15);
        if ((int)lVar14 == 1) {
          FUN_1014d0ae4(lVar12,0x112da9bb0,&UNK_10d951180);
          dVar20 = dVar21;
        }
        else {
          func_0x000107c5eb60(lVar15);
          dVar20 = dVar21;
          (**(code **)(lVar17 + 8))(lVar12,lVar15);
          if ((ulong)ABS(dVar21) < 0x7ff0000000000000) {
            if (dVar21 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d0118);
              (*pcVar18)();
            }
            dVar20 = 9.223372036854776e+18;
            if (9.223372036854776e+18 <= dVar21) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d011c);
              (*pcVar18)();
            }
            func_0x000107c52b08(pcVar6);
          }
        }
        FUN_1014d0ae4(lVar4,0x112da9bb0,&UNK_10d951180);
        func_0x000107c61170(pcVar6);
        pcVar18 = pcStack_b8;
        func_0x000107c61174();
        uVar13 = uStack_88;
        uVar19 = uStack_88;
        func_0x000107c42118();
        func_0x000107c61180();
        param_1 = dVar20;
        if (uVar19 != 0) {
          uVar11 = uVar19;
          func_0x000107c3e558();
          func_0x000107c61180();
          func_0x000107c61170(uVar19);
          param_1 = dVar20;
          if (uVar11 != 0) {
            func_0x000107c5ba24(uVar11);
            param_1 = dVar20;
            func_0x000107c61170(uVar11);
            if ((ulong)ABS(dVar20) < 0x7ff0000000000000) {
              if (dVar20 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d0120);
                (*pcVar18)();
              }
              param_1 = 9.223372036854776e+18;
              if (9.223372036854776e+18 <= dVar20) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x1014d0124);
                (*pcVar18)();
              }
              func_0x000107c52b04(pcVar6);
            }
          }
        }
        func_0x000107c61170(pcVar6);
        func_0x000107c61174();
        uVar19 = uVar13;
        func_0x000107c42118();
        func_0x000107c61180();
        if (uVar19 != 0) {
          uVar11 = uVar19;
          func_0x000107c3e558();
          func_0x000107c61180();
          func_0x000107c61170(uVar19);
          if (uVar11 != 0) {
            func_0x000107c515ec(uVar11);
            func_0x000107c61170(uVar11);
            func_0x000107c52b00(pcVar6);
          }
        }
        func_0x000107c61170(pcVar6);
        puVar8 = &UNK_1103ceb28;
        func_0x000107c613fc(&UNK_1103ceb28,0x18,7);
        *(code **)(puVar8 + 0x10) = pcVar6;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar15 = (long)pcVar18 - (extraout_x12_00 + 0xfU & 0xfffffffffffffff0);
        func_0x000107c61174();
        uVar19 = uVar13;
        func_0x000107c408b4();
        func_0x000107c61180();
        if (uVar19 != 0) {
          uVar11 = uVar19;
          func_0x000107c40e74();
          func_0x000107c61180();
          func_0x000107c61170(uVar19);
          uVar3 = 0;
          FUN_1014d0b9c(0,0x112da9bd8,&PTR__OBJC_CLASS___NSUnitDuration_1126a74b8);
          func_0x000107c5eb58(lVar15,uVar11,uVar3);
          func_0x000107c61170(uVar11);
        }
        (*pcStack_90)(lVar15,uVar19 == 0,1,lStack_a8);
        FUN_1014d05dc(FUN_1014d0acc,puVar8,lVar15,0x112da9b90,&UNK_10d951160,0x112da9b98,
                      &UNK_10daf89c0);
        FUN_1014d0ae4(lVar15,0x112da9b90,&UNK_10d951160);
        func_0x000107c61574(puVar8);
        puVar8 = &UNK_1103ceb50;
        func_0x000107c613fc(&UNK_1103ceb50,0x18,7);
        *(code **)(puVar8 + 0x10) = pcVar6;
        lVar15 = 0x112da9bc0;
        func_0x0001000285a8(0x112da9bc0,&UNK_10d951190);
        puStack_c8 = pcVar18;
        pcStack_b8 = *(code **)(*(long *)(lVar15 + -8) + 0x40);
        (*(code *)PTR____chkstk_darwin_11034bd40)((long)pcStack_b8 + 0xfU & 0xfffffffffffffff0);
        lVar15 = (long)pcVar18 - extraout_x8;
        func_0x000107c61174();
        func_0x000107c408b4();
        func_0x000107c61180();
        if (uVar13 != 0) {
          uVar19 = uVar13;
          func_0x000107c40e6c();
          func_0x000107c61180();
          func_0x000107c61170(uVar13);
          uVar3 = 0;
          FUN_1014d0b9c(0,0x112da9bd0,&PTR__OBJC_CLASS___NSUnit_1126a74b0);
          func_0x000107c5eb58(lVar15,uVar19,uVar3);
          func_0x000107c61170(uVar19);
        }
        lVar4 = 0x112da9bc8;
        func_0x0001000285a8(0x112da9bc8,&UNK_10d951198);
        (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar15,uVar13 == 0,1,lVar4);
        FUN_1014d05dc(0x1014d0ad8,puVar8,lVar15,0x112da9bc0,&UNK_10d951190,0x112da9bc8,
                      &UNK_10d951198);
        FUN_1014d0ae4(lVar15,0x112da9bc0,&UNK_10d951190);
        func_0x000107c61574(puVar8);
        puVar2 = (undefined8 *)puStack_c8;
        puVar8 = &UNK_1103ceb78;
        func_0x000107c613fc(&UNK_1103ceb78,0x18,7);
        lVar15 = lStack_c0;
        *(code **)(puVar8 + 0x10) = pcVar6;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        uVar11 = lVar15 + 0xfU & 0xfffffffffffffff0;
        lVar15 = (long)puVar2 - uVar11;
        func_0x000107c61174();
        uVar13 = uStack_88;
        uVar19 = uStack_88;
        func_0x000107c4d5fc();
        func_0x000107c61180();
        if (uVar19 != 0) {
          uVar5 = uVar19;
          func_0x000107c40e78();
          func_0x000107c61180();
          func_0x000107c61170(uVar19);
          uVar3 = 0;
          FUN_1014d0b9c(0,0x112da9be0,&PTR__OBJC_CLASS___NSUnitInformationStorage_1126a74c0);
          func_0x000107c5eb58(lVar15,uVar5,uVar3);
          func_0x000107c61170(uVar5);
        }
        (*pcStack_a0)(lVar15,uVar19 == 0,1,lStack_98);
        FUN_1014d05dc(FUN_1014d0b24,puVar8,lVar15,0x112da9ba0,&UNK_10d951170,0x112da9ba8,
                      &UNK_10d951178);
        FUN_1014d0ae4(lVar15,0x112da9ba0,&UNK_10d951170);
        func_0x000107c61574(puVar8);
        puVar8 = &UNK_1103ceba0;
        func_0x000107c613fc(&UNK_1103ceba0,0x18,7);
        *(code **)(puVar8 + 0x10) = pcVar6;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar15 = (long)puVar2 - uVar11;
        func_0x000107c61174();
        uVar19 = uVar13;
        func_0x000107c4d5fc();
        func_0x000107c61180();
        if (uVar19 != 0) {
          uVar11 = uVar19;
          func_0x000107c40eb0();
          func_0x000107c61180();
          func_0x000107c61170(uVar19);
          uVar3 = 0;
          FUN_1014d0b9c(0,0x112da9be0,&PTR__OBJC_CLASS___NSUnitInformationStorage_1126a74c0);
          func_0x000107c5eb58(lVar15,uVar11,uVar3);
          func_0x000107c61170(uVar11);
        }
        (*pcStack_a0)(lVar15,uVar19 == 0,1,lStack_98);
        FUN_1014d05dc(0x1014d0b30,puVar8,lVar15,0x112da9ba0,&UNK_10d951170,0x112da9ba8,
                      &UNK_10d951178);
        FUN_1014d0ae4(lVar15,0x112da9ba0,&UNK_10d951170);
        func_0x000107c61574(puVar8);
        puVar8 = &UNK_1103cebc8;
        func_0x000107c613fc(&UNK_1103cebc8,0x18,7);
        *(code **)(puVar8 + 0x10) = pcVar6;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        uVar11 = extraout_x12_01 + 0xfU & 0xfffffffffffffff0;
        lVar15 = (long)puVar2 - uVar11;
        func_0x000107c61174();
        uVar19 = uVar13;
        func_0x000107c4d5fc();
        func_0x000107c61180();
        if (uVar19 != 0) {
          uVar5 = uVar19;
          func_0x000107c40e7c();
          func_0x000107c61180();
          func_0x000107c61170(uVar19);
          uVar3 = 0;
          FUN_1014d0b9c(0,0x112da9be0,&PTR__OBJC_CLASS___NSUnitInformationStorage_1126a74c0);
          func_0x000107c5eb58(lVar15,uVar5,uVar3);
          func_0x000107c61170(uVar5);
        }
        (*pcStack_a0)(lVar15,uVar19 == 0,1,lStack_98);
        FUN_1014d05dc(0x1014d0b3c,puVar8,lVar15,0x112da9ba0,&UNK_10d951170,0x112da9ba8,
                      &UNK_10d951178);
        FUN_1014d0ae4(lVar15,0x112da9ba0,&UNK_10d951170);
        func_0x000107c61574(puVar8);
        puVar8 = &UNK_1103cebf0;
        func_0x000107c613fc(&UNK_1103cebf0,0x18,7);
        *(code **)(puVar8 + 0x10) = pcVar6;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar15 = (long)puVar2 - uVar11;
        func_0x000107c61174();
        func_0x000107c4d5fc();
        func_0x000107c61180();
        if (uVar13 != 0) {
          uVar19 = uVar13;
          func_0x000107c40eb4();
          func_0x000107c61180();
          func_0x000107c61170(uVar13);
          uVar3 = 0;
          FUN_1014d0b9c(0,0x112da9be0,&PTR__OBJC_CLASS___NSUnitInformationStorage_1126a74c0);
          func_0x000107c5eb58(lVar15,uVar19,uVar3);
          func_0x000107c61170(uVar19);
        }
        (*pcStack_a0)(lVar15,uVar13 == 0,1,lStack_98);
        FUN_1014d05dc(0x1014d0b48,puVar8,lVar15,0x112da9ba0,&UNK_10d951170,0x112da9ba8,
                      &UNK_10d951178);
        FUN_1014d0ae4(lVar15,0x112da9ba0,&UNK_10d951170);
        func_0x000107c61574(puVar8);
        puVar8 = &UNK_1103cec18;
        func_0x000107c613fc(&UNK_1103cec18,0x18,7);
        *(code **)(puVar8 + 0x10) = pcVar6;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar15 = (long)puVar2 - (extraout_x12_02 + 0xfU & 0xfffffffffffffff0);
        func_0x000107c61174();
        uVar13 = uStack_88;
        func_0x000107c41ff4();
        func_0x000107c61180();
        if (uVar13 != 0) {
          uVar19 = uVar13;
          func_0x000107c40e94();
          func_0x000107c61180();
          func_0x000107c61170(uVar13);
          uVar3 = 0;
          FUN_1014d0b9c(0,0x112da9be0,&PTR__OBJC_CLASS___NSUnitInformationStorage_1126a74c0);
          func_0x000107c5eb58(lVar15,uVar19,uVar3);
          func_0x000107c61170(uVar19);
        }
        lVar4 = lStack_a8;
        uVar3 = uStack_e0;
        (*pcStack_a0)(lVar15,uVar13 == 0,1,lStack_98);
        FUN_1014d05dc(0x1014d0b54,puVar8,lVar15,0x112da9ba0,&UNK_10d951170,0x112da9ba8,
                      &UNK_10d951178);
        FUN_1014d0ae4(lVar15,0x112da9ba0,&UNK_10d951170);
        func_0x000107c61574(puVar8);
        uVar13 = uStack_88;
        uVar19 = uStack_88;
        func_0x000107c3dfa4();
        func_0x000107c61180();
        if (uVar19 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = uVar19;
          func_0x000107c44ec0();
          func_0x000107c61180();
          func_0x000107c61170(uVar19);
        }
        uVar19 = uVar11;
        FUN_1014d072c(uVar11);
        func_0x000107c61170(uVar11);
        uVar11 = uVar19;
        func_0x000107c5fc48(uVar19,uVar3);
        func_0x000107c6142c(uVar19);
        func_0x000107c55170(pcVar6);
        func_0x000107c61170(uVar11);
        uVar19 = uVar13;
        func_0x000107c3dfa4();
        func_0x000107c61180();
        if (uVar19 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = uVar19;
          func_0x000107c44eb0();
          func_0x000107c61180();
          func_0x000107c61170(uVar19);
        }
        uVar19 = uVar11;
        FUN_1014d072c(uVar11);
        func_0x000107c61170(uVar11);
        uVar11 = uVar19;
        func_0x000107c5fc48(uVar19,uVar3);
        func_0x000107c6142c(uVar19);
        func_0x000107c5516c(pcVar6);
        func_0x000107c61170(uVar11);
        if (iStack_f0 != 0) {
          uVar19 = uVar13;
          func_0x000107c3dfa4();
          func_0x000107c61180();
          if (uVar19 == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = uVar19;
            func_0x000107c44ebc();
            func_0x000107c61180();
            func_0x000107c61170(uVar19);
          }
          uVar19 = uVar11;
          FUN_1014d072c(uVar11);
          func_0x000107c61170(uVar11);
          uVar11 = uVar19;
          func_0x000107c5fc48(uVar19,uVar3);
          func_0x000107c6142c(uVar19);
          func_0x000107c55168(pcVar6);
          func_0x000107c61170(uVar11);
        }
        if (iStack_f4 != 0) {
          uVar19 = uVar13;
          func_0x000107c3dfa4();
          func_0x000107c61180();
          if (uVar19 == 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = uVar19;
            func_0x000107c44eb8();
            func_0x000107c61180();
            func_0x000107c61170(uVar19);
          }
          uVar19 = uVar11;
          FUN_1014d072c(uVar11);
          func_0x000107c61170(uVar11);
          uVar11 = uVar19;
          func_0x000107c5fc48(uVar19,uVar3);
          func_0x000107c6142c(uVar19);
          func_0x000107c55164(pcVar6);
          func_0x000107c61170(uVar11);
        }
        func_0x000107c3dfb8();
        func_0x000107c61180();
        if (uVar13 == 0) {
          uVar19 = 0;
        }
        else {
          uVar19 = uVar13;
          func_0x000107c44eac();
          func_0x000107c61180();
          func_0x000107c61170(uVar13);
        }
        uVar13 = uVar19;
        FUN_1014d072c(uVar19);
        func_0x000107c61170(uVar19);
        uVar19 = uVar13;
        func_0x000107c5fc48(uVar13,uVar3);
        func_0x000107c6142c(uVar13);
        func_0x000107c55160(pcVar6);
        func_0x000107c61170(uVar19);
        puVar8 = &UNK_1103cec40;
        func_0x000107c613fc(&UNK_1103cec40,0x18,7);
        *(code **)(puVar8 + 0x10) = pcVar6;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        uVar19 = extraout_x12_03 + 0xfU & 0xfffffffffffffff0;
        lVar15 = (long)puVar2 - uVar19;
        func_0x000107c61174();
        uVar13 = uStack_88;
        func_0x000107c3dfd4();
        func_0x000107c61180();
        if (uVar13 != 0) {
          uVar11 = uVar13;
          func_0x000107c40e80();
          func_0x000107c61180();
          func_0x000107c61170(uVar13);
          uVar3 = 0;
          FUN_1014d0b9c(0,0x112da9bd8,&PTR__OBJC_CLASS___NSUnitDuration_1126a74b8);
          func_0x000107c5eb58(lVar15,uVar11,uVar3);
          func_0x000107c61170(uVar11);
        }
        (*pcStack_90)(lVar15,uVar13 == 0,1,lVar4);
        FUN_1014d05dc(0x1014d0b60,puVar8,lVar15,0x112da9b90,&UNK_10d951160,0x112da9b98,
                      &UNK_10daf89c0);
        FUN_1014d0ae4(lVar15,0x112da9b90,&UNK_10d951160);
        func_0x000107c61574(puVar8);
        puVar8 = &UNK_1103cec68;
        func_0x000107c613fc(&UNK_1103cec68,0x18,7);
        *(code **)(puVar8 + 0x10) = pcVar6;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar15 = (long)puVar2 - uVar19;
        func_0x000107c61174();
        uVar13 = uStack_88;
        func_0x000107c3dfd4();
        func_0x000107c61180();
        if (uVar13 != 0) {
          uVar19 = uVar13;
          func_0x000107c40e5c();
          func_0x000107c61180();
          func_0x000107c61170(uVar13);
          uVar3 = 0;
          FUN_1014d0b9c(0,0x112da9bd8,&PTR__OBJC_CLASS___NSUnitDuration_1126a74b8);
          func_0x000107c5eb58(lVar15,uVar19,uVar3);
          func_0x000107c61170(uVar19);
        }
        (*pcStack_90)(lVar15,uVar13 == 0,1,lVar4);
        FUN_1014d05dc(0x1014d0b6c,puVar8,lVar15,0x112da9b90,&UNK_10d951160,0x112da9b98,
                      &UNK_10daf89c0);
        FUN_1014d0ae4(lVar15,0x112da9b90,&UNK_10d951160);
        func_0x000107c61574(puVar8);
        puVar8 = &UNK_1103cec90;
        func_0x000107c613fc(&UNK_1103cec90,0x18,7);
        *(code **)(puVar8 + 0x10) = pcVar6;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        uVar19 = extraout_x12_04 + 0xfU & 0xfffffffffffffff0;
        lVar15 = (long)puVar2 - uVar19;
        func_0x000107c61174();
        uVar13 = uStack_88;
        func_0x000107c3dfd4();
        func_0x000107c61180();
        if (uVar13 != 0) {
          uVar11 = uVar13;
          func_0x000107c40e50();
          func_0x000107c61180();
          func_0x000107c61170(uVar13);
          uVar3 = 0;
          FUN_1014d0b9c(0,0x112da9bd8,&PTR__OBJC_CLASS___NSUnitDuration_1126a74b8);
          func_0x000107c5eb58(lVar15,uVar11,uVar3);
          func_0x000107c61170(uVar11);
        }
        (*pcStack_90)(lVar15,uVar13 == 0,1,lVar4);
        FUN_1014d05dc(0x1014d0b78,puVar8,lVar15,0x112da9b90,&UNK_10d951160,0x112da9b98,
                      &UNK_10daf89c0);
        FUN_1014d0ae4(lVar15,0x112da9b90,&UNK_10d951160);
        func_0x000107c61574(puVar8);
        puVar8 = &UNK_1103cecb8;
        func_0x000107c613fc(&UNK_1103cecb8,0x18,7);
        *(code **)(puVar8 + 0x10) = pcVar6;
        (*(code *)PTR____chkstk_darwin_11034bd40)();
        lVar15 = (long)puVar2 - uVar19;
        func_0x000107c61174();
        uVar13 = uStack_88;
        func_0x000107c3dfd4();
        func_0x000107c61180();
        if (uVar13 != 0) {
          uVar19 = uVar13;
          func_0x000107c40e54();
          func_0x000107c61180();
          func_0x000107c61170(uVar13);
          uVar3 = 0;
          FUN_1014d0b9c(0,0x112da9bd8,&PTR__OBJC_CLASS___NSUnitDuration_1126a74b8);
          func_0x000107c5eb58(lVar15,uVar19,uVar3);
          func_0x000107c61170(uVar19);
        }
        (*pcStack_90)(lVar15,uVar13 == 0,1,lVar4);
        FUN_1014d05dc(0x1014d0b84,puVar8,lVar15,0x112da9b90,&UNK_10d951160,0x112da9b98,
                      &UNK_10daf89c0);
        FUN_1014d0ae4(lVar15,0x112da9b90,&UNK_10d951160);
        func_0x000107c61574(puVar8);
        puVar8 = &UNK_1103cece0;
        func_0x000107c613fc(&UNK_1103cece0,0x18,7);
        *(code **)(puVar8 + 0x10) = pcVar6;
        (*(code *)PTR____chkstk_darwin_11034bd40)(pcStack_b8);
        lVar15 = (long)puVar2 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
        func_0x000107c61174(pcVar6);
        uVar13 = uStack_88;
        func_0x000107c3dd00();
        func_0x000107c61180();
        if (uVar13 != 0) {
          uVar19 = uVar13;
          func_0x000107c51a40();
          func_0x000107c61180();
          func_0x000107c61170(uVar13);
          uVar3 = 0;
          FUN_1014d0b9c(0,0x112da9bd0,&PTR__OBJC_CLASS___NSUnit_1126a74b0);
          func_0x000107c5eb58(lVar15,uVar19,uVar3);
          func_0x000107c61170(uVar19);
        }
        uVar19 = uStack_d8;
        uVar11 = uStack_108;
        lVar4 = 0x112da9bc8;
        func_0x0001000285a8(0x112da9bc8,&UNK_10d951198);
        (**(code **)(*(long *)(lVar4 + -8) + 0x38))(lVar15,uVar13 == 0,1,lVar4);
        FUN_1014d05dc(0x1014d0b90,puVar8,lVar15,0x112da9bc0,&UNK_10d951190,0x112da9bc8,
                      &UNK_10d951198);
        FUN_1014d0ae4(lVar15,0x112da9bc0,&UNK_10d951190);
        func_0x000107c61574(puVar8);
        uVar13 = uStack_88;
        func_0x000107c452dc(uStack_88);
        func_0x000107c55360(pcVar6);
        func_0x0001000d224c(alStack_80);
        lVar15 = alStack_80[0];
        if (alStack_80[0] != 0) {
          func_0x000107c4bf74(alStack_80[0]);
          func_0x000107c615e8(lVar15);
        }
        uVar19 = uVar19 + 1;
        func_0x000107c61170(pcVar6);
        func_0x000107c61170(uVar13);
      } while (uVar11 != uVar19);
    }
  }
  return;
}



/* Entry: 1014d0194; end: 1014d01af; -[_TtC24SCCrashServicesImplSwift11SCMetricKit didReceiveMetricPayloads:] */

void FUN_1014d0194(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1014d0b9c(0,0x112da9c18,&PTR__OBJC_CLASS___MXMetricPayload_1126a74d0);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  FUN_1014cc3b8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1014d01b0; end: 1014d03d7;  */

void FUN_1014d01b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1014d0b9c(0,param_4,param_5);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_1);
  (*param_6)(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 1014d03d8; end: 1014d0573;  */

ulong FUN_1014d03d8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1014d04a8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1014d04ac);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_1014daea0(0);
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
    FUN_1014daea0(0);
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
  func_0x000107c5fb78(0xd000000000000010,0x800000010ef86950);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1014d0574);
  (*pcVar2)();
}



/* Entry: 1014d0574; end: 1014d05af;  */

ulong FUN_1014d0574(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1014d0300);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1014d0304);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126a7470;
    func_0x000107c61168(PTR_PTR_1126a7470);
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
    puVar4 = PTR_PTR_1126a7470;
    func_0x000107c61168(PTR_PTR_1126a7470);
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
  FUN_1014d0b9c(0,0x112da9a28,&PTR_PTR_1126a7470);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1014d03d8);
  (*pcVar2)();
}



/* Entry: 1014d05b0; end: 1014d05db;  */

void FUN_1014d05b0(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1014d05dc; end: 1014d072b;  */

void FUN_1014d05dc(double param_1,code *param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,long param_7,undefined8 param_8)

{
  code *pcVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar4 = param_5;
  func_0x0001000285a8(param_5,param_6);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffa0 + -extraout_x8;
  func_0x0001014d0bdc(param_4,puVar3,param_5,param_6);
  func_0x0001000285a8(param_7,param_8);
  lVar4 = *(long *)(param_7 + -8);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x30))(puVar3,1,param_7);
  if ((int)puVar2 == 1) {
    FUN_1014d0ae4(puVar3,param_5,param_6);
  }
  else {
    func_0x000107c5eb60(param_7);
    (**(code **)(lVar4 + 8))(puVar3,param_7);
    if ((ulong)ABS(param_1) < 0x7ff0000000000000) {
      if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1014d0728);
        (*pcVar1)();
      }
      if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1014d072c);
        (*pcVar1)();
      }
      (*param_2)((long)param_1);
    }
  }
  return;
}



/* Entry: 1014d072c; end: 1014d0acb;  */

undefined * FUN_1014d072c(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  ulong uVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  double dVar16;
  double dVar17;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  double dStack_80;
  long lStack_78;
  
  lVar2 = 0x112da9bc8;
  func_0x0001000285a8(0x112da9bc8,&UNK_10d951198);
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)&lStack_c0 - extraout_x8;
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != 0) {
    func_0x000107c61174();
    lStack_c0 = param_1;
    func_0x000107c3ecb0();
    func_0x000107c61180();
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    while( true ) {
      lVar3 = param_1;
      func_0x000107c4d67c();
      func_0x000107c61180();
      if (lVar3 == 0) {
        uStack_a8 = 0;
        uStack_b0 = 0;
        lStack_98 = 0;
        dStack_a0 = 0.0;
      }
      else {
        func_0x000107c60234(&uStack_b0);
        func_0x000107c615e8(lVar3);
      }
      uStack_88 = uStack_a8;
      uStack_90 = uStack_b0;
      lStack_78 = lStack_98;
      dStack_80 = dStack_a0;
      if (lStack_98 == 0) break;
      uVar4 = 0x112da9c28;
      dVar16 = dStack_a0;
      func_0x0001000285a8(0x112da9c28,&UNK_10d9511b8);
      puVar5 = &uStack_b8;
      func_0x000107c6147c(puVar5,&uStack_90,PTR___sypN_11034f1a8 + 8,uVar4,6);
      uVar4 = uStack_b8;
      if (((ulong)puVar5 & 1) == 0) {
        func_0x000107c61170(lStack_c0);
        func_0x000107c61170(param_1);
        return puVar11;
      }
      puVar6 = PTR_PTR_1126a7478;
      func_0x000107c610f8();
      func_0x000107c453e4();
      uVar7 = uVar4;
      func_0x000107c3ecb4(uVar4);
      func_0x000107c61180();
      uVar8 = 0;
      FUN_1014d0b9c(0,0x112da9bd0,&PTR__OBJC_CLASS___NSUnit_1126a74b0);
      func_0x000107c5eb58(lVar13,uVar7,uVar8);
      func_0x000107c61170(uVar7);
      func_0x000107c5eb60(lVar2);
      pcVar15 = *(code **)(lVar14 + 8);
      (*pcVar15)(lVar13,lVar2);
      if (0x7fefffffffffffff < (ulong)ABS(dVar16)) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1014d0ab8);
        (*pcVar15)();
      }
      if (dVar16 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1014d0abc);
        (*pcVar15)();
      }
      dVar17 = 9.223372036854776e+18;
      if (9.223372036854776e+18 <= dVar16) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1014d0ac0);
        (*pcVar15)();
      }
      func_0x000107c59780(puVar6);
      uVar7 = uVar4;
      func_0x000107c3ecac(uVar4);
      func_0x000107c61180();
      func_0x000107c5eb58(lVar13);
      func_0x000107c61170(uVar7);
      func_0x000107c5eb60(lVar2);
      (*pcVar15)(lVar13,lVar2);
      if (0x7fefffffffffffff < (ulong)ABS(dVar17)) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1014d0ac4);
        (*pcVar15)();
      }
      if (dVar17 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1014d0ac8);
        (*pcVar15)();
      }
      if (9.223372036854776e+18 <= dVar17) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1014d0acc);
        (*pcVar15)();
      }
      func_0x000107c54588(puVar6);
      func_0x000107c3eca8(uVar4);
      func_0x000107c539f4(puVar6);
      func_0x000107c61174();
      puVar10 = puVar11;
      func_0x000107c61550();
      if ((((int)puVar10 == 0) || ((long)puVar11 < 0)) ||
         (puVar10 = puVar11, ((ulong)puVar11 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar11 >> 0x3e == 0) {
          puVar9 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar9 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar11) {
            puVar9 = puVar11;
          }
          func_0x000107c60480(puVar9);
        }
        puVar10 = (undefined *)0x0;
        FUN_1014d989c(0,puVar9 + 1,1,puVar11);
      }
      uVar12 = (ulong)puVar10 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar12 + 0x10);
      puVar11 = puVar10;
      if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar1) {
        puVar11 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
        FUN_1014d989c(puVar11,uVar1 + 1,1,puVar10);
        uVar12 = (ulong)puVar11 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar12 + 0x10) = uVar1 + 1;
      *(undefined **)(uVar12 + uVar1 * 8 + 0x20) = puVar6;
      func_0x000107c61170(puVar6);
      func_0x000107c61170(uVar4);
    }
    func_0x000107c61170(lStack_c0);
    func_0x000107c61170(param_1);
    FUN_1014d0ae4(&uStack_90,0x112d387f8,&UNK_10d902650);
  }
  return puVar11;
}



/* Entry: 1014d0acc; end: 1014d0ae3;  */

void FUN_1014d0acc(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c186bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_setCumulativeCPUTime__11263f508,param_1);
  return;
}



/* Entry: 1014d0ae4; end: 1014d0b23;  */

undefined8 FUN_1014d0ae4(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1014d0b24; end: 1014d0b9b;  */

void FUN_1014d0b24(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c186bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_setCumulativeCellularDownload__11263f510,
             param_1);
  return;
}



/* Entry: 1014d0b9c; end: 1014d0c23;  */

void FUN_1014d0b9c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1014d0c24; end: 1014d0c53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014d0c24(ulong param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  if (((uVar2 == 0xd000000000000010) && (*(long *)(unaff_x20 + 0x18) == -0x7ffffffef1079750)) ||
     (func_0x000107c605b8(uVar2,*(long *)(unaff_x20 + 0x18),0xd000000000000010,0x800000010ef868b0,0)
     , (uVar2 & 1) != 0)) {
    func_0x000107c61428(lVar4 + 0x10,auStack_48,0,0);
    lVar3 = lVar4 + 0x10;
    func_0x000107c61618();
    if (lVar3 != 0) {
      puVar1 = (undefined8 *)(lVar3 + _DAT_112da9b28);
      uVar5 = puVar1[1];
      *puVar1 = 0;
      puVar1[1] = 0;
      func_0x000107c61170();
      func_0x000107c6142c(uVar5);
    }
    if ((param_1 & 1) != 0) {
      func_0x000107c61428(lVar4 + 0x10,auStack_60,0,0);
      lVar4 = lVar4 + 0x10;
      func_0x000107c61618();
      if (lVar4 != 0) {
        uVar5 = *(undefined8 *)(lVar4 + _DAT_112da9b58);
        func_0x000107c6157c(uVar5);
        func_0x000107c61170(lVar4);
        func_0x0001000d224c(&lStack_68);
        func_0x000107c61574(uVar5);
        if (lStack_68 != 0) {
          func_0x000107c5cdd4(lStack_68);
          func_0x000107c615e8(lStack_68);
        }
      }
    }
  }
  return;
}



/* Entry: 1014d0c54; end: 1014d0ca3;  */

undefined1  [16] FUN_1014d0c54(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  (**(code **)(param_1 + 0x10))();
  func_0x000107c61180();
  lVar1 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = lVar1;
  return auVar2;
}



/* Entry: 1014d0ca4; end: 1014d1347;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1014d0ca4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                    undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                    undefined8 param_17,undefined8 param_18,undefined8 param_19,long param_20,
                    undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                    undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                    undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined8 unaff_x20;
  long lStack_78;
  long lStack_70;
  
  puVar3 = &UNK_1103ced30;
  func_0x000107c613fc(&UNK_1103ced30,0x40,7);
  *(undefined8 *)(puVar3 + 0x10) = param_31;
  *(undefined8 *)(puVar3 + 0x18) = param_32;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_7;
  *(undefined8 *)(puVar3 + 0x30) = param_2;
  *(undefined8 *)(puVar3 + 0x38) = param_3;
  func_0x0001000285a8(0x112da9c30,&UNK_10d9511c0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_32);
  func_0x000107c61174();
  func_0x000107c615f0(param_7);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar4 = 0x1014dacdc;
  func_0x0001000bdd8c(0x1014dacdc,puVar3);
  func_0x0001000285a8(0x112da9848,&UNK_10d991ca0);
  uVar5 = param_8;
  func_0x0001000bda74();
  func_0x0001000285a8(0x112da9c38,&UNK_10d9511d0);
  uVar6 = param_10;
  func_0x0001000bda74();
  func_0x0001000285a8(0x112da9850,&UNK_10d951040);
  uVar7 = param_13;
  func_0x0001000bda74();
  func_0x0001000285a8(0x112da9c40,&UNK_10d9511e0);
  uVar8 = param_16;
  func_0x0001000bda74();
  func_0x0001000285a8(0x112da9c48,&UNK_10dc15350);
  uVar9 = param_17;
  func_0x0001000bda74();
  func_0x0001000285a8(0x112da9c50,&UNK_10d9511f0);
  uVar10 = param_18;
  func_0x0001000bda74();
  func_0x0001000285a8(0x112da9860,&UNK_10d951050);
  uVar11 = param_19;
  func_0x0001000bda74();
  func_0x0001000285a8(0x112da9c58,&UNK_10d951200);
  lVar12 = param_20;
  func_0x0001000bda74();
  lVar13 = lVar12;
  func_0x000100110818();
  lVar14 = lVar13;
  func_0x000107c610f8();
  *(undefined8 *)(lVar14 + _DAT_112da9c60) = 0;
  *(undefined8 *)(lVar14 + _DAT_112da9c68) = 0;
  lVar2 = _DAT_112da9c70;
  lVar15 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  lVar16 = lVar15;
  func_0x000100111634();
  func_0x000107c61408(lVar15 + 0x20,6,PTR___sSSN_11034da80);
  *(long *)(lVar14 + lVar2) = lVar16;
  *(undefined8 *)(lVar14 + _DAT_112da9d00) = uVar4;
  *(undefined8 *)(lVar14 + _DAT_112da9d08) = param_4;
  *(undefined8 *)(lVar14 + _DAT_112da9d10) = param_5;
  *(undefined8 *)(lVar14 + _DAT_112da9d18) = param_6;
  *(undefined8 *)(lVar14 + _DAT_112da9d20) = param_7;
  *(undefined8 *)(lVar14 + _DAT_112da9d28) = param_9;
  *(undefined8 *)(lVar14 + _DAT_112da9d30) = uVar5;
  *(undefined8 *)(lVar14 + _DAT_112da9d38) = uVar6;
  puVar1 = (undefined8 *)(lVar14 + _DAT_112da9d40);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  *(undefined8 *)(lVar14 + _DAT_112da9d48) = uVar7;
  puVar1 = (undefined8 *)(lVar14 + _DAT_112da9d50);
  *puVar1 = param_14;
  puVar1[1] = param_15;
  *(undefined8 *)(lVar14 + _DAT_112da9d58) = uVar8;
  *(undefined8 *)(lVar14 + _DAT_112da9d60) = uVar9;
  *(undefined8 *)(lVar14 + _DAT_112da9d68) = uVar10;
  puVar1 = (undefined8 *)(lVar14 + _DAT_112da9d70);
  *puVar1 = param_21;
  puVar1[1] = param_22;
  puVar1 = (undefined8 *)(lVar14 + _DAT_112da9d78);
  *puVar1 = param_23;
  puVar1[1] = param_24;
  *(undefined8 *)(lVar14 + _DAT_112da9d80) = uVar11;
  *(long *)(lVar14 + _DAT_112da9d88) = lVar12;
  puVar1 = (undefined8 *)(lVar14 + _DAT_112da9d90);
  *puVar1 = param_25;
  puVar1[1] = param_26;
  puVar1 = (undefined8 *)(lVar14 + _DAT_112da9d98);
  *puVar1 = param_27;
  puVar1[1] = param_28;
  puVar1 = (undefined8 *)(lVar14 + _DAT_112da9da0);
  *puVar1 = param_29;
  puVar1[1] = param_30;
  puVar3 = PTR_s_init_1125d9248;
  lStack_78 = lVar14;
  lStack_70 = lVar13;
  func_0x000107c615f0();
  func_0x000107c6157c(uVar4);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  func_0x000107c615f0(param_9);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(lVar12);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_28);
  func_0x000107c6157c(param_30);
  plVar17 = &lStack_78;
  func_0x000107c61154(plVar17,puVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c615e8(param_6);
  func_0x000107c615e8(param_7);
  func_0x000107c61574(uVar5);
  func_0x000107c615e8(param_9);
  func_0x000107c61574(uVar6);
  func_0x000107c61574(param_12);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(param_15);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(lVar12);
  func_0x000107c61574(param_22);
  func_0x000107c61574(param_24);
  func_0x000107c61574(param_26);
  func_0x000107c61574(param_28);
  func_0x000107c61574(param_30);
  func_0x000107c61574(param_32);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_20);
  uVar4 = unaff_x20;
  func_0x000107c614f0(unaff_x20);
  func_0x000107c61464(unaff_x20,uVar4,0x100,7);
  return plVar17;
}



/* Entry: 1014d1348; end: 1014d168f; -[_TtC24SCCrashServicesImplSwift28SCSnapAirCrashReportUploader initWithSpectrum:httpMetadataService:httpRequestModifier:logProvider:appStartExperimentReader:circumstanceEngine:timeProvider:metadataStorage:performer:stackTracer:uuidProvider:blizzardSessionIDProvider:traceIDProvider:bandwidthEstimator:networkConnectivityMonitor:memoryUsageInfoProvider:crashMetricLogger:snapAirMetricLogger:isInternalBuild:isDebugBuild:shouldComposerReportUncaughtErrorsEvenInDebug:shouldCPPReportUncaughtErrorsEvenInDebug:device:isAppInBackgroundOrTransitioning:] */

void FUN_1014d1348(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_1103cf420;
  func_0x000107c613fc(&UNK_1103cf420,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_13;
  puVar2 = &UNK_1103cf448;
  func_0x000107c613fc(&UNK_1103cf448,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_15;
  puVar3 = &UNK_1103cf470;
  func_0x000107c613fc(&UNK_1103cf470,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_21;
  puVar4 = &UNK_1103cf498;
  func_0x000107c613fc(&UNK_1103cf498,0x18,7);
  *(undefined8 *)(puVar4 + 0x10) = param_22;
  puVar5 = &UNK_1103cf4c0;
  func_0x000107c613fc(&UNK_1103cf4c0,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = param_23;
  puVar6 = &UNK_1103cf4e8;
  func_0x000107c613fc(&UNK_1103cf4e8,0x18,7);
  *(undefined8 *)(puVar6 + 0x10) = param_24;
  puVar7 = &UNK_1103cf510;
  func_0x000107c613fc(&UNK_1103cf510,0x18,7);
  *(undefined8 *)(puVar7 + 0x10) = param_25;
  puVar8 = &UNK_1103cf538;
  func_0x000107c613fc(&UNK_1103cf538,0x18,7);
  *(undefined8 *)(puVar8 + 0x10) = param_26;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(param_6);
  func_0x000107c615f0(param_7);
  func_0x000107c615f0(param_8);
  func_0x000107c615f0(param_9);
  func_0x000107c61174();
  func_0x000107c615f0(param_11);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  FUN_1014d0ca4(param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,
                0x1014dab70,puVar1,param_14,0x1014dab78,puVar2,param_16,param_17,param_18,param_19,
                param_20,FUN_1014dab80,puVar3,0x1014daccc,puVar4,0x1014dacd0,puVar5,0x1014dacd4,
                puVar6,0x1014dab9c,puVar7,0x1014dacd8,puVar8);
  return;
}



/* Entry: 1014d1690; end: 1014d16ef;  */

undefined1  [16] FUN_1014d1690(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  (**(code **)(param_1 + 0x10))();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar1 = 0;
    param_2 = 0xf000000000000000;
  }
  else {
    lVar1 = param_1;
    func_0x000107c5ee30();
    func_0x000107c61170(param_1);
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = lVar1;
  return auVar2;
}



/* Entry: 1014d16f0; end: 1014d19b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014d16f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112da9c60) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112da9c68) = 0;
  lVar2 = _DAT_112da9c70;
  lVar3 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  lVar4 = lVar3;
  func_0x000100111634();
  func_0x000107c61408(lVar3 + 0x20,6,PTR___sSSN_11034da80);
  *(long *)(unaff_x20 + lVar2) = lVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112da9d00) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112da9d08) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112da9d10) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112da9d18) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112da9d20) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112da9d28) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112da9d30) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112da9d38) = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112da9d40);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  *(undefined8 *)(unaff_x20 + _DAT_112da9d48) = param_11;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112da9d50);
  *puVar1 = param_12;
  puVar1[1] = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112da9d58) = param_14;
  *(undefined8 *)(unaff_x20 + _DAT_112da9d60) = param_15;
  *(undefined8 *)(unaff_x20 + _DAT_112da9d68) = param_16;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112da9d70);
  *puVar1 = param_19;
  puVar1[1] = param_20;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112da9d78);
  *puVar1 = param_21;
  puVar1[1] = param_22;
  *(undefined8 *)(unaff_x20 + _DAT_112da9d80) = param_17;
  *(undefined8 *)(unaff_x20 + _DAT_112da9d88) = param_18;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112da9d90);
  *puVar1 = param_23;
  puVar1[1] = param_24;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112da9d98);
  *puVar1 = param_25;
  puVar1[1] = param_26;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112da9da0);
  *puVar1 = param_27;
  puVar1[1] = param_28;
  func_0x000107c61154(auStack_78,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1014d19b8; end: 1014d19fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014d19b8(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x00010018aeb0();
  func_0x0001001ad520();
  func_0x000107c56cd4();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c0677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + _DAT_112da9c60),PTR_s_install_1125f7800);
  return;
}



/* Entry: 1014d19fc; end: 1014d1aab;  */

void FUN_1014d19fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_60;
  lVar2 = param_1;
  func_0x0001001ad520();
  if (param_1 == 0) {
    ppuVar3 = (undefined **)0x0;
  }
  else {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    puStack_50 = &UNK_1001f8d28;
    puStack_48 = &UNK_1103ced48;
    lStack_40 = param_1;
    uStack_38 = param_2;
    func_0x000107c60bc4(&puStack_60);
    uVar1 = uStack_38;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(uVar1);
  }
  func_0x000107c51da8(lVar2);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 1014d1aac; end: 1014d21e7;  */

/* WARNING: Possible PIC construction at 0x0001014d1dd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014d1fd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014d2048: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014d2070: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014d2090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014d1ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014d1e44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014c6e50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014d1e48) */
/* WARNING: Removing unreachable block (ram,0x0001014d1e54) */
/* WARNING: Removing unreachable block (ram,0x0001014d1e5c) */
/* WARNING: Removing unreachable block (ram,0x0001014d1ea8) */
/* WARNING: Removing unreachable block (ram,0x0001014d1eb0) */
/* WARNING: Removing unreachable block (ram,0x0001014d2094) */
/* WARNING: Removing unreachable block (ram,0x0001014d2074) */
/* WARNING: Removing unreachable block (ram,0x0001014d204c) */
/* WARNING: Removing unreachable block (ram,0x0001014d1fdc) */
/* WARNING: Removing unreachable block (ram,0x0001014d1dd4) */
/* WARNING: Removing unreachable block (ram,0x0001014d1de0) */
/* WARNING: Removing unreachable block (ram,0x0001014d1de8) */
/* WARNING: Removing unreachable block (ram,0x0001014d1eb8) */
/* WARNING: Removing unreachable block (ram,0x0001014d1ebc) */
/* WARNING: Removing unreachable block (ram,0x0001014d21d0) */
/* WARNING: Removing unreachable block (ram,0x0001014d21d8) */
/* WARNING: Removing unreachable block (ram,0x0001014d21e4) */
/* WARNING: Removing unreachable block (ram,0x0001014d1ed4) */
/* WARNING: Removing unreachable block (ram,0x0001014d1ee0) */
/* WARNING: Removing unreachable block (ram,0x0001014d1efc) */
/* WARNING: Removing unreachable block (ram,0x0001014d1f44) */
/* WARNING: Removing unreachable block (ram,0x0001014d1f5c) */
/* WARNING: Removing unreachable block (ram,0x0001014d1fa4) */
/* WARNING: Removing unreachable block (ram,0x0001014d1fc4) */
/* WARNING: Removing unreachable block (ram,0x0001014d1f4c) */
/* WARNING: Removing unreachable block (ram,0x0001014d1f04) */
/* WARNING: Removing unreachable block (ram,0x0001014d1f38) */
/* WARNING: Removing unreachable block (ram,0x0001014d1f3c) */
/* WARNING: Removing unreachable block (ram,0x0001014d1fc8) */
/* WARNING: Removing unreachable block (ram,0x0001014c6e54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_1014d1aac(undefined8 *param_1,undefined *param_2,long param_3,undefined8 param_4,
             undefined *param_5,long param_6)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long extraout_x8;
  undefined1 *puVar8;
  long unaff_x20;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  uint uVar12;
  long lVar13;
  undefined1 auStack_100 [4];
  uint uStack_fc;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined8 *puStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  
  lVar2 = 0;
  uVar5 = param_4;
  lStack_d8 = param_3;
  puStack_d0 = param_2;
  puStack_c8 = param_1;
  func_0x000107c5eb9c();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar8 = auStack_100 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c61174();
  func_0x0001044da714();
  puVar7 = param_5;
  lStack_c0 = param_3;
  puStack_b8 = param_2;
  (**(code **)(unaff_x20 + _DAT_112da9d78))();
  uVar12 = (uint)uVar5;
  uVar1 = uVar12 >> 6 & 3;
  if (((ulong)puVar7 & 1) == 0) {
    if (0x3f < (uVar12 & 0xff)) goto LAB_1014d1c00;
    lVar10 = *(long *)(unaff_x20 + _DAT_112da9d10);
    if (lVar10 == 0) {
      uStack_e8 = 0x100000000;
      uStack_f8 = param_4;
      lStack_f0 = param_6;
    }
    else {
      uStack_f8 = param_4;
      lStack_f0 = param_6;
      func_0x000107c615f0(lVar10);
      uVar3 = 0xd00000000000001d;
      func_0x000107c5fadc(0xd00000000000001d,0x800000010ef869c0);
      lVar4 = lVar10;
      func_0x000107c3ebd4();
      uStack_e8 = CONCAT44((int)lVar4,(undefined4)uStack_e8);
      func_0x000107c61170(uVar3);
      func_0x000107c615e8(lVar10);
    }
    uStack_e8 = CONCAT44(uStack_e8._4_4_,(int)param_5);
  }
  else {
    lVar10 = _DAT_112da9d98;
    if (((uVar1 != 2) && (lVar10 = _DAT_112da9d90, uVar1 != 1)) ||
       ((**(code **)(unaff_x20 + lVar10))(), ((ulong)puVar7 & 1) == 0)) {
      uVar1 = uVar12 >> 6 & 3;
      puVar7 = puStack_b8;
      if ((uVar1 != 2) && (uVar1 != 1)) {
        return param_5;
      }
      goto code_r0x000107c6142c;
    }
LAB_1014d1c00:
    uStack_e8 = 0;
    uStack_f8 = param_4;
    lStack_f0 = param_6;
  }
  puVar7 = param_5;
  FUN_1014d21e8(param_5,puStack_b8,lStack_c0,uVar5);
  if (uVar1 < 2) {
    if (uVar1 == 0) {
LAB_1014d1cc0:
      func_0x0001000d224c(&puStack_b0);
      puVar9 = puStack_b0;
      if (puStack_b0 != (undefined *)0x0) {
        puVar11 = puStack_b0;
        func_0x000107c5ba14();
        goto LAB_1014d1cf0;
      }
    }
    else if ((((ulong)puVar7 & 1) != 0) &&
            (func_0x0001000d224c(&puStack_b0), puVar9 = puStack_b0, puStack_b0 != (undefined *)0x0))
    {
      puVar11 = puStack_b0;
      func_0x000107c5ba14();
LAB_1014d1cf0:
      func_0x000107c61180();
      func_0x000107c615e8(puVar9);
      goto LAB_1014d1d08;
    }
LAB_1014d1d04:
    puVar11 = (undefined *)0x0;
  }
  else {
    if (uVar1 == 2) goto LAB_1014d1d04;
    puVar11 = (undefined *)0x0;
    if (((uVar12 & 0xff) == 0xc0) &&
       ((lStack_c0 == 0 && puStack_b8 == (undefined *)0x0) && param_5 == (undefined *)0x0))
    goto LAB_1014d1cc0;
  }
LAB_1014d1d08:
  uStack_fc = (uint)puVar7 & (uint)(puVar11 != (undefined *)0x0);
  lVar10 = *(long *)(unaff_x20 + _DAT_112da9d10);
  puStack_e0 = param_5;
  if (lVar10 != 0) {
    uVar5 = 0xd00000000000002b;
    puVar7 = (undefined *)0x800000010ef86990;
    func_0x000107c5fadc(0xd00000000000002b,0x800000010ef86990);
    func_0x000107c3ebd4();
    func_0x000107c61170(uVar5);
    if ((int)lVar10 != 0) {
      if (uVar1 < 2) {
        if (uVar1 != 0) {
          puStack_b0 = puStack_e0;
          puStack_a8 = puStack_b8;
          func_0x000107c5eb88(puVar8);
          FUN_100e8b654();
          puVar7 = PTR___sSSN_11034da80;
          func_0x000107c601f0(puVar8,PTR___sSSN_11034da80,uVar5);
          (**(code **)(lVar13 + 8))(puVar8,lVar2);
          goto code_r0x000107c6142c;
        }
      }
      else if (uVar1 == 2) {
        puStack_b0 = puStack_e0;
        puStack_a8 = puStack_b8;
        func_0x000107c5eb88(puVar8);
        FUN_100e8b654();
        puVar7 = PTR___sSSN_11034da80;
        func_0x000107c601f0(puVar8,PTR___sSSN_11034da80,uVar5);
        (**(code **)(lVar13 + 8))(puVar8,lVar2);
        goto code_r0x000107c6142c;
      }
      if (lStack_f0 != 0) {
        lVar2 = lStack_f0;
        func_0x000107c5ba10();
        func_0x000107c61180();
        if (lVar2 != 0) {
          func_0x000107c5faec();
          func_0x000107c61170(lVar2);
          goto code_r0x000107c6142c;
        }
      }
      puVar7 = (undefined *)0xe000000000000000;
      goto code_r0x000107c6142c;
    }
  }
  puVar6 = puStack_c8;
  FUN_1014da43c();
  func_0x0001000298f0();
  func_0x000107c61428();
  puStack_b0 = (undefined *)0x0;
  puStack_a8 = (undefined *)0xe000000000000000;
  func_0x000107c61174(*puVar6);
  func_0x000107c602fc(0x13);
  puVar7 = puStack_a8;
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar7);
  return puVar7;
}



/* Entry: 1014d21e8; end: 1014d22d3;  */

bool FUN_1014d21e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long extraout_x8;
  ulong uVar6;
  long lVar7;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar2 = 0;
  func_0x000107c5eb9c();
  lVar7 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  uVar6 = (long)&uStack_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if ((param_4 & 0xc1) == 0x41) {
    uStack_50 = param_1;
    uStack_48 = param_2;
    func_0x000107c5eb88(uVar6);
    FUN_100e8b654();
    uVar4 = uVar6;
    puVar5 = PTR___sSSN_11034da80;
    func_0x000107c601f0(uVar6,PTR___sSSN_11034da80,lVar3);
    (**(code **)(lVar7 + 8))(uVar6,lVar2);
    func_0x000107c6142c(puVar5);
    uVar6 = uVar4 & 0xffffffffffff;
    if (((ulong)puVar5 & 0x2000000000000000) != 0) {
      uVar6 = (ulong)puVar5 >> 0x38 & 0xf;
    }
    bVar1 = uVar6 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 1014d22d4; end: 1014d31db;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014d22d4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5,
                  uint param_6,undefined8 param_7,undefined8 param_8,long param_9,
                  undefined8 param_10,byte param_11,undefined4 param_12,long param_13,
                  undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *******pppppppuVar9;
  undefined *puVar10;
  undefined8 *******pppppppuVar11;
  long lVar12;
  long lVar13;
  undefined **ppuVar14;
  long *plVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  ulong uVar22;
  undefined8 uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined *puVar27;
  undefined8 *******pppppppuVar28;
  undefined8 *******pppppppuVar29;
  long lStack_d0;
  undefined8 *******pppppppuStack_c8;
  undefined8 *******pppppppuStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  
  puVar20 = auStack_90;
  func_0x000107c61428(param_1 + 0x10,puVar20,0,0);
  uVar6 = param_1 + 0x10;
  func_0x000107c61618();
  if (uVar6 == 0) {
    return;
  }
  puVar7 = PTR_PTR_1126d01d0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  pcVar4 = *(code **)(uVar6 + _DAT_112da9d40);
  lVar13 = ((undefined8 *)(uVar6 + _DAT_112da9d40))[1];
  lVar8 = lVar13;
  func_0x000107c6157c();
  (*pcVar4)();
  func_0x000107c61574(lVar13);
  FUN_1014d31dc(param_2,param_3,param_4,param_5,param_6 & 1,param_7,lVar8,puVar20,param_8,param_9,
                param_10,param_11 & 1);
  func_0x0001000d224c(&pppppppuStack_c0);
  pppppppuVar29 = pppppppuStack_c0;
  puVar10 = PTR___sypN_11034f1a8;
  if (pppppppuStack_c0 == (undefined8 *******)0x0) {
    pppppppuVar29 = (undefined8 *******)0x0;
  }
  else {
    pppppppuVar9 = pppppppuStack_c0;
    func_0x000107c4ce2c();
    func_0x000107c61180();
    func_0x000107c615e8(pppppppuVar29);
    pppppppuVar29 = pppppppuVar9;
    func_0x000107c5f9e8(pppppppuVar9,PTR___sSSN_11034da80,puVar10 + 8,PTR___sSSSHsWP_11034da90);
    func_0x000107c61170(pppppppuVar9);
  }
  func_0x0001014d921c(param_2,param_3,puVar7,0x617461665f6e6f6e,0xec00000032765f6c);
  func_0x000107c6142c(param_3);
  puVar10 = PTR_PTR_1126b8460;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x0001000d224c(&pppppppuStack_c0);
  pppppppuVar9 = pppppppuStack_c0;
  if (pppppppuStack_c0 != (undefined8 *******)0x0) {
    pppppppuVar11 = pppppppuStack_c0;
    func_0x000107c44140(pppppppuStack_c0);
    func_0x000107c61180();
    func_0x000107c615e8(pppppppuVar9);
    func_0x000107c4cd54(puVar10);
    func_0x000107c61170(pppppppuVar11);
  }
  if (param_13 != 0) {
    func_0x000107c4cd54(puVar10);
  }
  lVar13 = lVar8;
  puVar21 = puVar20;
  func_0x000107c5fadc(lVar8,puVar20);
  func_0x000107c55218(puVar7);
  func_0x000107c61170();
  (**(code **)(uVar6 + _DAT_112da9da0))();
  lVar12 = lVar13;
  func_0x000107c3ed14();
  func_0x000107c61180();
  func_0x000107c61170(lVar13);
  if (lVar12 == 0) {
    lVar12 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar21);
  }
  func_0x000107c570d4(puVar7);
  func_0x000107c61170(lVar12);
  func_0x000107c57d94(puVar7);
  func_0x000107c57d8c(puVar7);
  if (param_9 == 0) {
    param_8 = 0;
  }
  else {
    func_0x000107c5fadc(param_8,param_9);
  }
  func_0x000107c5402c(puVar7);
  func_0x000107c61170(param_8);
  func_0x000107c5465c(puVar7);
  func_0x000107c5667c(puVar7);
  if ((pppppppuVar29 == (undefined8 *******)0x0) || (pppppppuVar29[2] == (undefined8 ******)0x0)) {
    uStack_b8 = 0;
    pppppppuStack_c0 = (undefined8 *******)0x0;
    puStack_a8 = (undefined *)0x0;
    puStack_b0 = (undefined *)0x0;
LAB_1014d2670:
    func_0x000100216638(&pppppppuStack_c0,0x112d387f8,&UNK_10d902650);
LAB_1014d2688:
    lVar13 = 0;
    pppppppuVar9 = (undefined8 *******)0xe000000000000000;
  }
  else {
    func_0x000107c61434(pppppppuVar29);
    lVar13 = 0x74456769666e6f43;
    uVar22 = 0xea00000000006761;
    func_0x000100029284(0x74456769666e6f43);
    if ((uVar22 & 1) == 0) {
      uStack_b8 = 0;
      pppppppuStack_c0 = (undefined8 *******)0x0;
      puStack_a8 = (undefined *)0x0;
      puStack_b0 = (undefined *)0x0;
    }
    else {
      func_0x0001000bb420(pppppppuVar29[7] + lVar13 * 4,&pppppppuStack_c0);
    }
    func_0x000107c6142c(pppppppuVar29);
    if (puStack_a8 == (undefined *)0x0) goto LAB_1014d2670;
    plVar15 = &lStack_d0;
    func_0x000107c6147c(plVar15,&pppppppuStack_c0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar13 = lStack_d0;
    pppppppuVar9 = pppppppuStack_c8;
    if (((ulong)plVar15 & 1) == 0) goto LAB_1014d2688;
  }
  func_0x000107c5fadc(lVar13,pppppppuVar9);
  func_0x000107c6142c(pppppppuVar9);
  func_0x000107c53538(puVar7);
  func_0x000107c61170();
  FUN_1014d94c0();
  if (lVar13 != 0) {
    func_0x000107c53540(puVar7);
    func_0x000107c61170(lVar13);
  }
  if ((pppppppuVar29 == (undefined8 *******)0x0) || (pppppppuVar29[2] == (undefined8 ******)0x0)) {
    uStack_b8 = 0;
    pppppppuStack_c0 = (undefined8 *******)0x0;
    puStack_a8 = (undefined *)0x0;
    puStack_b0 = (undefined *)0x0;
LAB_1014d2730:
    pppppppuVar9 = (undefined8 *******)0x112d387f8;
    func_0x000100216638(&pppppppuStack_c0,0x112d387f8,&UNK_10d902650);
  }
  else {
    func_0x000107c61434(pppppppuVar29);
    uVar22 = 0;
    lVar13 = -0x2ffffffffffffff0;
    func_0x000100029284(0xd000000000000010);
    if ((uVar22 & 1) == 0) {
      uStack_b8 = 0;
      pppppppuStack_c0 = (undefined8 *******)0x0;
      puStack_a8 = (undefined *)0x0;
      puStack_b0 = (undefined *)0x0;
    }
    else {
      func_0x0001000bb420(pppppppuVar29[7] + lVar13 * 4,&pppppppuStack_c0);
    }
    func_0x000107c6142c(pppppppuVar29);
    if (puStack_a8 == (undefined *)0x0) goto LAB_1014d2730;
    plVar15 = &lStack_d0;
    pppppppuVar9 = &pppppppuStack_c0;
    func_0x000107c6147c(plVar15,pppppppuVar9,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    pppppppuVar11 = pppppppuStack_c8;
    if (((ulong)plVar15 & 1) != 0) {
      if ((lStack_d0 == 0x534559) && (pppppppuStack_c8 == (undefined8 *******)0xe300000000000000)) {
        func_0x000107c6142c(0xe300000000000000);
      }
      else {
        pppppppuVar9 = pppppppuStack_c8;
        func_0x000107c605b8(lStack_d0,pppppppuStack_c8,0x534559,0xe300000000000000,0);
        func_0x000107c6142c(pppppppuVar11);
      }
    }
  }
  puVar18 = puVar7;
  func_0x000107c58b4c(puVar7);
  func_0x00010028340c();
  pppppppuVar11 = pppppppuVar9;
  func_0x000107c5fadc();
  func_0x000107c6142c(pppppppuVar9);
  func_0x000107c52788(puVar7);
  func_0x000107c61170(puVar18);
  if (pppppppuVar29 == (undefined8 *******)0x0) {
    uStack_b8 = 0;
    pppppppuStack_c0 = (undefined8 *******)0x0;
    puStack_a8 = (undefined *)0x0;
    puStack_b0 = (undefined *)0x0;
LAB_1014d28f8:
    func_0x000100216638(&pppppppuStack_c0,0x112d387f8,&UNK_10d902650);
LAB_1014d2910:
    lVar13 = 0;
    pppppppuVar9 = (undefined8 *******)0xe000000000000000;
  }
  else {
    ppuVar14 = &PTR____CFConstantStringClassReference_110db1318;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110db1318);
    if (pppppppuVar29[2] == (undefined8 ******)0x0) {
      uStack_b8 = 0;
      pppppppuStack_c0 = (undefined8 *******)0x0;
      puStack_a8 = (undefined *)0x0;
      puStack_b0 = (undefined *)0x0;
    }
    else {
      func_0x000107c61434(pppppppuVar29);
      pppppppuVar9 = pppppppuVar11;
      func_0x000100029284(ppuVar14);
      if (((ulong)pppppppuVar9 & 1) == 0) {
        uStack_b8 = 0;
        pppppppuStack_c0 = (undefined8 *******)0x0;
        puStack_a8 = (undefined *)0x0;
        puStack_b0 = (undefined *)0x0;
      }
      else {
        func_0x0001000bb420(pppppppuVar29[7] + (long)ppuVar14 * 4,&pppppppuStack_c0);
      }
      func_0x000107c6142c(pppppppuVar11);
      pppppppuVar11 = pppppppuVar29;
    }
    func_0x000107c6142c(pppppppuVar11);
    if (puStack_a8 == (undefined *)0x0) goto LAB_1014d28f8;
    plVar15 = &lStack_d0;
    func_0x000107c6147c(plVar15,&pppppppuStack_c0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    lVar13 = lStack_d0;
    pppppppuVar9 = pppppppuStack_c8;
    if (((ulong)plVar15 & 1) == 0) goto LAB_1014d2910;
  }
  pppppppuVar11 = pppppppuVar9;
  func_0x000107c5fadc(lVar13);
  func_0x000107c6142c(pppppppuVar9);
  func_0x000107c5a32c(puVar7);
  func_0x000107c61170(lVar13);
  func_0x0001000d224c(&pppppppuStack_c0);
  pppppppuVar9 = pppppppuStack_c0;
  if (pppppppuStack_c0 == (undefined8 *******)0x0) {
    pppppppuVar28 = (undefined8 *******)0x0;
  }
  else {
    pppppppuVar28 = pppppppuStack_c0;
    func_0x000107c52060(pppppppuStack_c0);
    func_0x000107c61180();
    func_0x000107c615e8(pppppppuVar9);
  }
  func_0x000107c58fc0(puVar7);
  func_0x000107c61170(pppppppuVar28);
  puVar18 = PTR_PTR_1126d05a8;
  func_0x000107c61168(PTR_PTR_1126d05a8);
  func_0x000107c418f8();
  func_0x000107c61180();
  func_0x000107c54080(puVar7);
  func_0x000107c61170(puVar18);
  (**(code **)(uVar6 + _DAT_112da9d50))();
  if ((ulong)pppppppuVar11 >> 0x3c < 0xf) {
    puVar27 = puVar18;
    func_0x000107c5ee20();
    func_0x0001000b44c0(puVar18,pppppppuVar11);
  }
  else {
    puVar27 = (undefined *)0x0;
  }
  func_0x000107c59fbc(puVar7);
  func_0x000107c61170(puVar27);
  func_0x0001000d224c(&pppppppuStack_c0);
  pppppppuVar9 = pppppppuStack_c0;
  if (pppppppuStack_c0 != (undefined8 *******)0x0) {
    func_0x000107c5d8c0(pppppppuStack_c0);
    func_0x000107c615e8(pppppppuVar9);
  }
  func_0x000107c527f8(puVar7);
  func_0x0001000d224c(&pppppppuStack_c0);
  pppppppuVar9 = pppppppuStack_c0;
  if (pppppppuStack_c0 != (undefined8 *******)0x0) {
    func_0x000107c43938(pppppppuStack_c0);
    func_0x000107c615e8(pppppppuVar9);
  }
  func_0x000107c54bb0(puVar7);
  func_0x0001000d224c(&pppppppuStack_c0);
  pppppppuVar9 = pppppppuStack_c0;
  if (pppppppuStack_c0 != (undefined8 *******)0x0) {
    func_0x000107c40244();
    func_0x000107c615e8(pppppppuVar9);
  }
  func_0x000107c53774(puVar7);
  func_0x0001000d224c(&pppppppuStack_c0);
  pppppppuVar9 = pppppppuStack_c0;
  if (pppppppuStack_c0 != (undefined8 *******)0x0) {
    func_0x000107c3ef4c(pppppppuStack_c0);
    func_0x000107c615e8(pppppppuVar9);
  }
  func_0x000107c52bbc(puVar7);
  puVar18 = PTR_PTR_1126d01d8;
  func_0x000107c610f8(PTR_PTR_1126d01d8);
  func_0x000107c453e4();
  func_0x000107c57d84(puVar7);
  func_0x000107c61170(puVar18);
  puVar18 = puVar7;
  func_0x000107c50288();
  func_0x000107c61180();
  if (puVar18 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1014d31dc);
    (*pcVar4)();
  }
  func_0x000107c53a6c();
  func_0x000107c61170(puVar18);
  if (pppppppuVar29 == (undefined8 *******)0x0) {
    uStack_b8 = 0;
    pppppppuStack_c0 = (undefined8 *******)0x0;
    puStack_a8 = (undefined *)0x0;
    puStack_b0 = (undefined *)0x0;
LAB_1014d2c54:
    func_0x000100216638(&pppppppuStack_c0,0x112d387f8,&UNK_10d902650);
  }
  else {
    if (pppppppuVar29[2] == (undefined8 ******)0x0) {
LAB_1014d2bf8:
      uStack_b8 = 0;
      pppppppuStack_c0 = (undefined8 *******)0x0;
      puStack_a8 = (undefined *)0x0;
      puStack_b0 = (undefined *)0x0;
    }
    else {
      func_0x000107c61434(pppppppuVar29);
      lVar13 = -0x2fffffffffffffec;
      uVar22 = 0;
      func_0x000100029284(0xd000000000000014);
      if ((uVar22 & 1) == 0) {
        func_0x000107c6142c(pppppppuVar29);
        goto LAB_1014d2bf8;
      }
      func_0x0001000bb420(pppppppuVar29[7] + lVar13 * 4,&pppppppuStack_c0);
      func_0x000107c6142c(pppppppuVar29);
    }
    func_0x000107c6142c(pppppppuVar29);
    if (puStack_a8 == (undefined *)0x0) goto LAB_1014d2c54;
    plVar15 = &lStack_d0;
    func_0x000107c6147c(plVar15,&pppppppuStack_c0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
    if (((ulong)plVar15 & 1) != 0) {
      lVar13 = lStack_d0;
      func_0x000107c5fadc(lStack_d0,pppppppuStack_c8);
      func_0x000107c6142c(pppppppuStack_c8);
      goto LAB_1014d2c70;
    }
  }
  lVar13 = 0;
LAB_1014d2c70:
  func_0x000107c571d4(puVar7);
  func_0x000107c61170(lVar13);
  if (((uint)param_5 & 0xc0) == 0x40) {
    uVar26 = 1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
    uVar22 = 0xffffffffffffffff;
    if ((*(byte *)(param_4 + 0x20) & 0x3f) < 6) {
      uVar22 = ~(-1L << (uVar26 & 0x3f));
    }
    uVar22 = uVar22 & *(ulong *)(param_4 + 0x40);
    func_0x000107c61434(param_4);
    lVar13 = 0;
    puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar27 = PTR_PTR_1126a7470;
    while( true ) {
      for (; PTR_PTR_1126a7470 = puVar27, uVar22 != 0; uVar22 = uVar22 - 1 & uVar22) {
        uVar24 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
        uVar24 = (uVar24 & 0xcccccccccccccccc) >> 2 | (uVar24 & 0x3333333333333333) << 2;
        uVar24 = (uVar24 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar24 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar24 = (uVar24 & 0xff00ff00ff00ff00) >> 8 | (uVar24 & 0xff00ff00ff00ff) << 8;
        uVar24 = (uVar24 & 0xffff0000ffff0000) >> 0x10 | (uVar24 & 0xffff0000ffff) << 0x10;
        uVar24 = lVar13 << 10 | LZCOUNT(uVar24 >> 0x20 | uVar24 << 0x20) << 4;
        puVar1 = (undefined8 *)(*(long *)(param_4 + 0x30) + uVar24);
        uVar23 = *puVar1;
        uVar2 = puVar1[1];
        puVar1 = (undefined8 *)(*(long *)(param_4 + 0x38) + uVar24);
        uVar19 = *puVar1;
        uVar3 = puVar1[1];
        func_0x000107c610f8();
        func_0x000107c61434(uVar2);
        func_0x000107c61434(uVar3);
        func_0x000107c453e4();
        func_0x000107c5fadc(uVar23,uVar2);
        func_0x000107c6142c(uVar2);
        func_0x000107c567bc(puVar27);
        func_0x000107c61170(uVar23);
        func_0x000107c5fadc(uVar19,uVar3);
        func_0x000107c6142c(uVar3);
        func_0x000107c55218(puVar27);
        func_0x000107c61170(uVar19);
        func_0x000107c61174();
        puVar17 = puVar18;
        func_0x000107c61550();
        if ((((int)puVar17 == 0) || ((long)puVar18 < 0)) ||
           (puVar17 = puVar18, ((ulong)puVar18 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar18 >> 0x3e == 0) {
            puVar16 = *(undefined **)(((ulong)puVar18 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar16 = (undefined *)((ulong)puVar18 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar18) {
              puVar16 = puVar18;
            }
            func_0x000107c60480(puVar16);
          }
          puVar17 = (undefined *)0x0;
          FUN_1014d98b8(0,puVar16 + 1,1,puVar18,FUN_1014c93e0,0x112da9a28,&PTR_PTR_1126a7470);
        }
        uVar25 = (ulong)puVar17 & 0xffffffffffffff8;
        uVar24 = *(ulong *)(uVar25 + 0x10);
        puVar18 = puVar17;
        if (*(ulong *)(uVar25 + 0x18) >> 1 <= uVar24) {
          puVar18 = (undefined *)(ulong)(1 < *(ulong *)(uVar25 + 0x18));
          FUN_1014d98b8(puVar18,uVar24 + 1,1,puVar17,FUN_1014c93e0,0x112da9a28,&PTR_PTR_1126a7470);
          uVar25 = (ulong)puVar18 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar25 + 0x10) = uVar24 + 1;
        *(undefined **)(uVar25 + uVar24 * 8 + 0x20) = puVar27;
        func_0x000107c61170(puVar27);
        puVar27 = PTR_PTR_1126a7470;
      }
      bVar5 = SCARRY8(lVar13,1);
      lVar13 = lVar13 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1014d31d8);
        (*pcVar4)();
      }
      if ((long)(uVar26 + 0x3f >> 6) <= lVar13) break;
      uVar22 = ((ulong *)(param_4 + 0x40))[lVar13];
    }
    func_0x000107c61574(param_4);
    puVar27 = puVar18;
    func_0x0001014d4b08(puVar18);
    puVar17 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    puVar16 = puVar27;
    func_0x000107c5fc48(puVar27,PTR___sypN_11034f1a8 + 8);
    func_0x000107c6142c(puVar27);
    func_0x000107c45788(puVar17);
    func_0x000107c61170(puVar16);
    func_0x000107c55950(puVar7);
    func_0x000107c61170(puVar17);
    func_0x000107c53ebc(puVar7);
    if ((param_5 & 1) == 0) {
      uVar23 = 0xe800000000000000;
    }
    else {
      uVar23 = 0xec000000524e415f;
    }
    uVar19 = 0x5245534f504d4f43;
    func_0x000107c5fadc(0x5245534f504d4f43,uVar23);
    func_0x000107c59a34(puVar7);
    func_0x000107c6142c(puVar18);
    func_0x000107c61170(uVar19);
  }
  else {
    func_0x000107c53ebc(puVar7);
  }
  uVar22 = uVar6;
  FUN_1014d4cfc(uVar6,param_14);
  func_0x0001000d224c(&lStack_d0);
  lVar13 = lVar8;
  func_0x000107c5fadc(lVar8,puVar20);
  if ((uVar22 & 1) == 0) {
    uVar23 = 0;
  }
  else {
    uVar23 = *(undefined8 *)(uVar6 + _DAT_112da9d08);
    func_0x000107c615f0(uVar23);
  }
  puVar18 = &UNK_1103ced80;
  puVar17 = puVar18;
  func_0x000107c613fc(&UNK_1103ced80,0x18,7);
  func_0x000107c61614(puVar17 + 0x10,uVar6);
  puVar27 = &UNK_1103cf560;
  func_0x000107c613fc(&UNK_1103cf560,0x28,7);
  *(long *)(puVar27 + 0x10) = lVar8;
  *(undefined1 **)(puVar27 + 0x18) = puVar20;
  *(undefined **)(puVar27 + 0x20) = puVar17;
  puVar17 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_a0 = FUN_1014dabbc;
  pppppppuStack_c0 = (undefined8 *******)PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_1000f6b44;
  puStack_a8 = &UNK_1103cf578;
  pppppppuVar29 = &pppppppuStack_c0;
  puStack_98 = puVar27;
  func_0x000107c60bc4(pppppppuVar29);
  puVar27 = puStack_98;
  func_0x000107c61174(uVar6);
  func_0x000107c61434(puVar20);
  func_0x000107c61574(puVar27);
  func_0x000107c613fc(&UNK_1103ced80,0x18,7);
  func_0x000107c61614(puVar18 + 0x10,uVar6);
  func_0x000107c61170(uVar6);
  puVar27 = &UNK_1103cf5b0;
  func_0x000107c613fc(&UNK_1103cf5b0,0x28,7);
  *(long *)(puVar27 + 0x10) = lVar8;
  *(undefined1 **)(puVar27 + 0x18) = puVar20;
  *(undefined **)(puVar27 + 0x20) = puVar18;
  pcStack_a0 = FUN_1014dabf4;
  pppppppuStack_c0 = (undefined8 *******)puVar17;
  uStack_b8 = 0x42000000;
  puStack_b0 = (undefined *)0x1012519d0;
  puStack_a8 = &UNK_1103cf5c8;
  pppppppuVar9 = &pppppppuStack_c0;
  puStack_98 = puVar27;
  func_0x000107c60bc4(pppppppuVar9);
  func_0x000107c61574(puStack_98);
  func_0x000107c5c11c(lStack_d0);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar6);
  func_0x000107c60bd0(pppppppuVar9);
  func_0x000107c60bd0(pppppppuVar29);
  func_0x000107c615e8(lStack_d0);
  func_0x000107c61170(lVar13);
  func_0x000107c615e8(uVar23);
  return;
}



/* Entry: 1014d31dc; end: 1014d4cfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_1014d31dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,uint param_5,
             undefined *param_6,undefined8 param_7,undefined8 param_8,undefined *param_9,
             ulong param_10,undefined *param_11,uint param_12)

{
  long *plVar1;
  uint uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined *puVar15;
  ulong uVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 auVar21 [16];
  undefined *puStack_88;
  ulong uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  uVar2 = param_4 >> 6 & 3;
  if (uVar2 == 2) {
    lStack_78 = 0;
    uStack_70 = 0xe000000000000000;
    func_0x000107c602fc(0x19);
    func_0x000107c6142c(uStack_70);
    lStack_78 = 0xd000000000000015;
    uStack_70 = 0x800000010ef84cc0;
    func_0x000107c5fb78(param_7,param_8);
    func_0x000107c5fb78(0xa0a,0xe200000000000000);
    if (param_10 != 0) {
      uVar12 = (ulong)param_9 & 0xffffffffffff;
      if ((param_10 & 0x2000000000000000) != 0) {
        uVar12 = param_10 >> 0x38 & 0xf;
      }
      if (uVar12 != 0) {
        puStack_88 = param_9;
        uStack_80 = param_10;
        func_0x000107c61434(param_10);
        func_0x000107c5fb78(0xa0a,0xe200000000000000);
        uVar12 = uStack_80;
        func_0x000107c5fb78(puStack_88,uStack_80);
        func_0x000107c6142c(uVar12);
      }
    }
    func_0x000107c5fb78(param_1,param_2);
    goto LAB_1014d4a94;
  }
  if (uVar2 == 1) {
    if (((param_5 & 1) == 0) || (param_6 == (undefined *)0x0)) {
      lVar17 = 0x112d38280;
      func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
      func_0x000107c613fc();
      *(undefined8 *)(lVar17 + 0x18) = 4;
      *(undefined8 *)(lVar17 + 0x10) = 2;
      puVar15 = (undefined *)0x0;
      if (param_10 != 0) {
        puVar15 = param_9;
      }
      uVar12 = 0xe000000000000000;
      if (param_10 != 0) {
        uVar12 = param_10;
      }
      *(undefined **)(lVar17 + 0x20) = puVar15;
      *(ulong *)(lVar17 + 0x28) = uVar12;
      *(undefined8 *)(lVar17 + 0x30) = param_1;
      *(undefined8 *)(lVar17 + 0x38) = param_2;
      lStack_78 = lVar17;
      func_0x000107c61434(param_2);
      func_0x000107c61434(param_10);
      uVar13 = 0x112d38270;
      func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
      uVar11 = 0x112d38278;
      func_0x000100286280(0x112d38278,0x112d38270,&UNK_10d905a20,PTR___sSayxGSKsMc_11034dcf0);
      uVar6 = 10;
      uVar9 = 0xe100000000000000;
      func_0x000107c5fa80(10,0xe100000000000000,uVar13,uVar11);
      func_0x000107c61574(lVar17);
      lStack_78 = uVar6;
      uStack_70 = uVar9;
      goto LAB_1014d4a94;
    }
    lStack_78 = 0;
    uStack_70 = 0xe000000000000000;
    func_0x000107c61174();
    func_0x000107c602fc(0x19);
    func_0x000107c6142c(uStack_70);
    lStack_78 = 0xd000000000000015;
    uStack_70 = 0x800000010ef84cc0;
    func_0x000107c5fb78(param_7,param_8);
    func_0x000107c5fb78(0xa0a,0xe200000000000000);
    if (param_10 != 0) {
      uVar12 = (ulong)param_9 & 0xffffffffffff;
      if ((param_10 & 0x2000000000000000) != 0) {
        uVar12 = param_10 >> 0x38 & 0xf;
      }
      if (uVar12 != 0) {
        puStack_88 = (undefined *)0xa0a;
        uStack_80 = 0xe200000000000000;
        func_0x000107c5fb78(param_9,param_10);
        func_0x000107c5fb78(0xa0a,0xe200000000000000);
        uVar12 = uStack_80;
        func_0x000107c5fb78(puStack_88,uStack_80);
        func_0x000107c6142c(uVar12);
      }
    }
    uVar12 = *(ulong *)(param_6 + _DAT_112da9f50);
    uVar19 = uVar12 >> 0x3e;
    if (uVar19 == 0) {
      uVar14 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar14 = uVar12 & 0xffffffffffffff8;
      if ((uVar12 & 0x8000000000000000) != 0) {
        uVar14 = uVar12;
      }
      func_0x000107c60480();
    }
    func_0x000107c61434(uVar12);
    if (uVar14 == 0) {
LAB_1014d3acc:
      func_0x000107c6142c();
      if (uVar19 != 0) goto LAB_1014d3af8;
LAB_1014d3ad4:
      uVar19 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar16 = 0;
      do {
        if ((uVar12 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1014d4ab8);
            (*pcVar3)();
          }
          uVar4 = *(ulong *)(uVar12 + uVar16 * 8 + 0x20);
          func_0x000107c61174();
          puVar15 = PTR___sSiN_11034deb0;
          puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        }
        else {
          uVar4 = uVar16;
          FUN_1014d03d8(uVar16,uVar12);
          puVar15 = PTR___sSiN_11034deb0;
          puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        }
        PTR___sSiN_11034deb0 = puVar15;
        PTR___sSis23CustomStringConvertiblesWP_11034df00 = puVar5;
        if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1014d33a8);
          (*pcVar3)();
        }
        uVar20 = uVar16 + 1;
        if ((*(byte *)(uVar4 + _DAT_112da9f30) & 1) != 0) {
          puStack_88 = (undefined *)0xd000000000000010;
          uStack_80 = 0x800000010ef86c20;
          puVar8 = puVar5;
          func_0x000107c6057c(puVar15,puVar5);
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar8);
          func_0x000107c5fb78(0xa0a,0xe200000000000000);
          uVar14 = uStack_80;
          func_0x000107c5fb78(puStack_88,uStack_80);
          func_0x000107c6142c(uVar14);
          puStack_88 = (undefined *)0x20646165726854;
          uStack_80 = 0xe700000000000000;
          puVar8 = puVar5;
          func_0x000107c6057c(puVar15,puVar5);
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar8);
          func_0x000107c5fb78(0xd000000000000015,0x800000010ef86c60);
          lVar17 = 0x112d36008;
          func_0x0001000285a8(0x112d36008,&UNK_10d900720);
          lVar7 = lVar17;
          func_0x000107c613fc();
          *(undefined8 *)(lVar7 + 0x18) = 2;
          *(undefined8 *)(lVar7 + 0x10) = 1;
          puVar10 = PTR___sSds7CVarArgsWP_11034ddc0;
          puVar8 = PTR___sSdN_11034dd90;
          uVar13 = *(undefined8 *)(uVar4 + _DAT_112da9f38);
          *(undefined **)(lVar7 + 0x38) = PTR___sSdN_11034dd90;
          *(undefined **)(lVar7 + 0x40) = puVar10;
          *(undefined8 *)(lVar7 + 0x20) = uVar13;
          uVar13 = 0xe400000000000000;
          func_0x000107c5fb00(0x66322e25,0xe400000000000000,lVar7);
          func_0x000107c5fb78();
          func_0x000107c6142c(uVar13);
          func_0x000107c5fb78(0x202e2520,0xe400000000000000);
          uVar14 = uStack_80;
          func_0x000107c5fb78(puStack_88,uStack_80);
          func_0x000107c6142c(uVar14);
          puStack_88 = (undefined *)0x2073646165726854;
          uStack_80 = 0xef203a746e756f63;
          func_0x000107c6057c(_DAT_112da9f60,puVar15,puVar5);
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar5);
          func_0x000107c5fb78(0x202e,0xe200000000000000);
          uVar14 = uStack_80;
          func_0x000107c5fb78(puStack_88,uStack_80);
          func_0x000107c6142c(uVar14);
          puStack_88 = (undefined *)0xd000000000000011;
          uStack_80 = 0x800000010ef86d20;
          func_0x000107c613fc(lVar17,0x48,7);
          *(undefined8 *)(lVar17 + 0x18) = 2;
          *(undefined8 *)(lVar17 + 0x10) = 1;
          uVar13 = *(undefined8 *)(param_6 + _DAT_112da9f58);
          *(undefined **)(lVar17 + 0x38) = puVar8;
          *(undefined **)(lVar17 + 0x40) = puVar10;
          *(undefined8 *)(lVar17 + 0x20) = uVar13;
          uVar13 = 0xe400000000000000;
          func_0x000107c5fb00(0x66322e25,0xe400000000000000,lVar17);
          func_0x000107c5fb78();
          func_0x000107c6142c(uVar13);
          func_0x000107c5fb78(0xa0a2e2520,0xe500000000000000);
          uVar14 = uStack_80;
          func_0x000107c5fb78(puStack_88,uStack_80);
          func_0x000107c6142c(uVar14);
          lVar17 = ((undefined8 *)(uVar4 + _DAT_112da9f20))[1];
          if (lVar17 != 0) {
            uVar13 = *(undefined8 *)(uVar4 + _DAT_112da9f20);
            puStack_88 = (undefined *)0x20646165726854;
            uStack_80 = 0xe700000000000000;
            func_0x000107c61434(lVar17);
            puVar15 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
            func_0x000107c6057c(PTR___sSiN_11034deb0,
                                PTR___sSis23CustomStringConvertiblesWP_11034df00);
            func_0x000107c5fb78();
            func_0x000107c6142c(puVar15);
            func_0x000107c5fb78(0x203a656d616e20,0xe700000000000000);
            func_0x000107c5fb78(uVar13,lVar17);
            func_0x000107c6142c(lVar17);
            func_0x000107c5fb78(10,0xe100000000000000);
            uVar14 = uStack_80;
            func_0x000107c5fb78(puStack_88,uStack_80);
            func_0x000107c6142c(uVar14);
          }
          puStack_88 = (undefined *)0x20646165726854;
          uStack_80 = 0xe700000000000000;
          puVar15 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00)
          ;
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar15);
          func_0x000107c5fb78(0x6465687361724320,0xea00000000000a3a);
          uVar14 = uStack_80;
          func_0x000107c5fb78(puStack_88,uStack_80);
          func_0x000107c6142c(uVar14);
          puStack_88 = *(undefined **)(uVar4 + _DAT_112da9f48);
          uStack_80 = ((undefined8 *)(uVar4 + _DAT_112da9f48))[1];
          func_0x000107c61434();
          func_0x000107c5fb78(0xa0a,0xe200000000000000);
          func_0x000107c5fb78(puStack_88,uStack_80);
          func_0x000107c6142c(uVar12);
          func_0x000107c61170(uVar4);
          goto LAB_1014d3acc;
        }
        func_0x000107c61170();
        uVar16 = uVar16 + 1;
      } while (uVar20 != uVar14);
      func_0x000107c6142c(uVar12);
      if (uVar19 == 0) goto LAB_1014d3ad4;
LAB_1014d3af8:
      uVar19 = uVar12 & 0xffffffffffffff8;
      if ((uVar12 & 0x8000000000000000) != 0) {
        uVar19 = uVar12;
      }
      func_0x000107c60480();
    }
    if (uVar19 != 0) {
      if ((long)uVar19 < 1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1014d4afc);
        (*pcVar3)();
      }
      func_0x000107c61434();
      puVar15 = PTR___sSiN_11034deb0;
      uVar14 = 0;
      do {
        if ((uVar12 & 0xc000000000000001) == 0) {
          uVar16 = *(ulong *)(uVar12 + uVar14 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar16 = uVar14;
          FUN_1014d03d8(uVar14,uVar12);
        }
        if ((*(byte *)(uVar16 + _DAT_112da9f30) & 1) == 0) {
          lVar17 = ((undefined8 *)(uVar16 + _DAT_112da9f20))[1];
          if (lVar17 != 0) {
            uVar13 = *(undefined8 *)(uVar16 + _DAT_112da9f20);
            puStack_88 = (undefined *)0x20646165726854;
            uStack_80 = 0xe700000000000000;
            func_0x000107c61434(lVar17,PTR___sSis23CustomStringConvertiblesWP_11034df00);
            puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
            func_0x000107c6057c(puVar15,PTR___sSis23CustomStringConvertiblesWP_11034df00);
            func_0x000107c5fb78();
            func_0x000107c6142c(puVar5);
            func_0x000107c5fb78(0x203a656d616e20,0xe700000000000000);
            func_0x000107c5fb78(uVar13,lVar17);
            func_0x000107c6142c(lVar17);
            func_0x000107c5fb78(10,0xe100000000000000);
            uVar4 = uStack_80;
            func_0x000107c5fb78(puStack_88,uStack_80);
            func_0x000107c6142c(uVar4);
          }
          puStack_88 = (undefined *)0x20646165726854;
          uStack_80 = 0xe700000000000000;
          puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          func_0x000107c6057c(_DAT_112da9f28,puVar15,
                              PTR___sSis23CustomStringConvertiblesWP_11034df00);
          func_0x000107c5fb78();
          func_0x000107c6142c(puVar5);
          func_0x000107c5fb78(0xa3a,0xe200000000000000);
          uVar4 = uStack_80;
          func_0x000107c5fb78(puStack_88,uStack_80);
          func_0x000107c6142c(uVar4);
          puStack_88 = (undefined *)0x6761735520555043;
          uStack_80 = 0xeb00000000203a65;
          lVar17 = 0x112d36008;
          func_0x0001000285a8(0x112d36008,&UNK_10d900720);
          func_0x000107c613fc();
          *(undefined8 *)(lVar17 + 0x18) = 2;
          *(undefined8 *)(lVar17 + 0x10) = 1;
          uVar13 = *(undefined8 *)(uVar16 + _DAT_112da9f38);
          *(undefined **)(lVar17 + 0x38) = PTR___sSdN_11034dd90;
          *(undefined **)(lVar17 + 0x40) = PTR___sSds7CVarArgsWP_11034ddc0;
          *(undefined8 *)(lVar17 + 0x20) = uVar13;
          uVar13 = 0xe400000000000000;
          func_0x000107c5fb00(0x66322e25,0xe400000000000000,lVar17);
          func_0x000107c5fb78();
          func_0x000107c6142c(uVar13);
          func_0x000107c5fb78(0xa2520,0xe300000000000000);
          uVar4 = uStack_80;
          func_0x000107c5fb78(puStack_88,uStack_80);
          func_0x000107c6142c(uVar4);
          puStack_88 = *(undefined **)(uVar16 + _DAT_112da9f48);
          uStack_80 = ((undefined8 *)(uVar16 + _DAT_112da9f48))[1];
          func_0x000107c61434();
          func_0x000107c5fb78(0xa0a,0xe200000000000000);
          uVar4 = uStack_80;
          func_0x000107c5fb78(puStack_88,uStack_80);
          func_0x000107c61170(uVar16);
          func_0x000107c6142c(uVar4);
        }
        else {
          func_0x000107c61170(uVar16);
        }
        uVar14 = uVar14 + 1;
      } while (uVar19 != uVar14);
      func_0x000107c6142c(uVar12);
    }
    func_0x000107c5fb78(0x49207972616e6942,0xef0a3a736567616d);
    puVar15 = *(undefined **)(param_6 + _DAT_112da9f68);
    lVar17 = *(long *)(puVar15 + 0x10);
    if (lVar17 == 0) {
      func_0x000107c61170(param_6);
      goto LAB_1014d4a94;
    }
    func_0x000107c61434(puVar15);
    puVar18 = (undefined8 *)(puVar15 + 0x28);
    do {
      uVar13 = puVar18[-1];
      uVar11 = *puVar18;
      func_0x000107c61434(uVar11);
      func_0x000107c5fb78(uVar13,uVar11);
      func_0x000107c6142c(uVar11);
      puVar18 = puVar18 + 2;
      lVar17 = lVar17 + -1;
      param_11 = param_6;
    } while (lVar17 != 0);
LAB_1014d4a84:
    func_0x000107c61170(param_11);
  }
  else {
    lStack_78 = 0;
    uStack_70 = 0xe000000000000000;
    func_0x000107c602fc(0x19);
    func_0x000107c6142c(uStack_70);
    lStack_78 = 0xd000000000000015;
    uStack_70 = 0x800000010ef84cc0;
    func_0x000107c5fb78(param_7,param_8);
    uVar12 = 0xe200000000000000;
    func_0x000107c5fb78(0xa0a);
    if (param_11 == (undefined *)0x0) {
LAB_1014d3eb0:
      if (param_6 != (undefined *)0x0) {
        uVar12 = *(ulong *)(param_6 + _DAT_112da9f50);
        uVar19 = uVar12 >> 0x3e;
        if (uVar19 == 0) {
          uVar14 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar14 = uVar12 & 0xffffffffffffff8;
          if ((uVar12 & 0x8000000000000000) != 0) {
            uVar14 = uVar12;
          }
          func_0x000107c60480();
        }
        if (uVar14 == 0) {
          func_0x000107c61174(param_6);
          if (uVar19 == 0) goto LAB_1014d3fc0;
LAB_1014d48a0:
          uVar19 = uVar12 & 0xffffffffffffff8;
          if ((uVar12 & 0x8000000000000000) != 0) {
            uVar19 = uVar12;
          }
          func_0x000107c60480();
        }
        else {
          puVar15 = param_6;
          func_0x000107c61174();
          func_0x000107c61434(uVar12);
          lVar17 = 4;
          do {
            uVar16 = lVar17 - 4;
            if ((uVar12 & 0xc000000000000001) == 0) {
              if (*(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1014d4ac0);
                (*pcVar3)();
              }
              uVar4 = *(ulong *)(uVar12 + lVar17 * 8);
              func_0x000107c61174();
              puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
            }
            else {
              uVar4 = uVar16;
              FUN_1014d03d8(uVar16,uVar12);
              puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
            }
            PTR___sSis23CustomStringConvertiblesWP_11034df00 = puVar5;
            if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1014d4abc);
              (*pcVar3)();
            }
            uVar16 = lVar17 - 3;
            plVar1 = (long *)&DAT_112da9f40;
            if (((byte)param_12 & param_12._1_1_ & 1) == 0) {
              plVar1 = (long *)&DAT_112da9f30;
            }
            if (*(char *)(uVar4 + *plVar1) == '\x01') {
              puStack_88 = (undefined *)0xd000000000000010;
              uStack_80 = 0x800000010ef86c20;
              func_0x000107c6057c(PTR___sSiN_11034deb0,puVar5);
              func_0x000107c5fb78();
              func_0x000107c6142c(puVar5);
              func_0x000107c5fb78(0xa0a,0xe200000000000000);
              uVar14 = uStack_80;
              func_0x000107c5fb78(puStack_88,uStack_80);
              func_0x000107c6142c(uVar14);
              if (((byte)param_12 & param_12._1_1_ & 1) != 0) {
                puStack_88 = (undefined *)0x0;
                uStack_80 = 0xe000000000000000;
                func_0x000107c602fc(0x4e);
                func_0x000107c5fb78(0x20646165726854,0xe700000000000000);
                puVar10 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
                puVar8 = PTR___sSiN_11034deb0;
                puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
                func_0x000107c6057c(PTR___sSiN_11034deb0,
                                    PTR___sSis23CustomStringConvertiblesWP_11034df00);
                func_0x000107c5fb78();
                func_0x000107c6142c(puVar5);
                func_0x000107c5fb78(0xd000000000000015,0x800000010ef86c60);
                lVar17 = 0x112d36008;
                func_0x0001000285a8(0x112d36008,&UNK_10d900720);
                lVar7 = lVar17;
                func_0x000107c613fc();
                *(undefined8 *)(lVar7 + 0x18) = 2;
                *(undefined8 *)(lVar7 + 0x10) = 1;
                puVar5 = PTR___sSds7CVarArgsWP_11034ddc0;
                uVar13 = *(undefined8 *)(uVar4 + _DAT_112da9f38);
                *(undefined **)(lVar7 + 0x38) = PTR___sSdN_11034dd90;
                *(undefined **)(lVar7 + 0x40) = puVar5;
                *(undefined8 *)(lVar7 + 0x20) = uVar13;
                uVar13 = 0xe400000000000000;
                func_0x000107c5fb00(0x66322e25,0xe400000000000000,lVar7);
                func_0x000107c5fb78();
                func_0x000107c6142c(uVar13);
                func_0x000107c5fb78(0xd000000000000013,0x800000010ef86c80);
                func_0x000107c6057c(_DAT_112da9f60,puVar8,puVar10);
                func_0x000107c5fb78();
                func_0x000107c6142c(puVar10);
                func_0x000107c5fb78(0xd000000000000013,0x800000010ef86ca0);
                func_0x000107c613fc(lVar17,0x48,7);
                *(undefined8 *)(lVar17 + 0x18) = 2;
                *(undefined8 *)(lVar17 + 0x10) = 1;
                uVar13 = *(undefined8 *)(puVar15 + _DAT_112da9f58);
                *(undefined **)(lVar17 + 0x38) = PTR___sSdN_11034dd90;
                *(undefined **)(lVar17 + 0x40) = puVar5;
                *(undefined8 *)(lVar17 + 0x20) = uVar13;
                uVar13 = 0xe400000000000000;
                func_0x000107c5fb00(0x66322e25,0xe400000000000000,lVar17);
                func_0x000107c5fb78();
                func_0x000107c6142c(uVar13);
                func_0x000107c5fb78(0xa2e2520,0xe400000000000000);
                uVar14 = uStack_80;
                func_0x000107c5fb78(puStack_88,uStack_80);
                func_0x000107c6142c(uVar14);
              }
              lVar17 = ((undefined8 *)(uVar4 + _DAT_112da9f20))[1];
              if (lVar17 != 0) {
                uVar13 = *(undefined8 *)(uVar4 + _DAT_112da9f20);
                puStack_88 = (undefined *)0x20646165726854;
                uStack_80 = 0xe700000000000000;
                func_0x000107c61434(lVar17);
                puVar15 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
                func_0x000107c6057c(uVar4,PTR___sSiN_11034deb0,
                                    PTR___sSis23CustomStringConvertiblesWP_11034df00);
                func_0x000107c5fb78();
                func_0x000107c6142c(puVar15);
                func_0x000107c5fb78(0x203a656d616e20,0xe700000000000000);
                func_0x000107c5fb78(uVar13,lVar17);
                func_0x000107c6142c(lVar17);
                func_0x000107c5fb78(10,0xe100000000000000);
                uVar14 = uStack_80;
                func_0x000107c5fb78(puStack_88,uStack_80);
                func_0x000107c6142c(uVar14);
              }
              puStack_88 = (undefined *)0x20646165726854;
              uStack_80 = 0xe700000000000000;
              puVar15 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
              func_0x000107c6057c(uVar4,PTR___sSiN_11034deb0,
                                  PTR___sSis23CustomStringConvertiblesWP_11034df00);
              func_0x000107c5fb78();
              func_0x000107c6142c(puVar15);
              func_0x000107c5fb78(0x6465687361724320,0xea00000000000a3a);
              uVar14 = uStack_80;
              func_0x000107c5fb78(puStack_88,uStack_80);
              func_0x000107c6142c(uVar14);
              if ((param_12 & 1) != 0) {
                if ((param_12 & 0x100) == 0) {
                  puStack_88 = (undefined *)0x6761735520555043;
                  uStack_80 = 0xeb00000000203a65;
                  lVar17 = 0x112d36008;
                  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
                  func_0x000107c613fc();
                  *(undefined8 *)(lVar17 + 0x18) = 2;
                  *(undefined8 *)(lVar17 + 0x10) = 1;
                  puVar15 = PTR___sSds7CVarArgsWP_11034ddc0;
                  uVar13 = *(undefined8 *)(uVar4 + _DAT_112da9f38);
                  *(undefined **)(lVar17 + 0x38) = PTR___sSdN_11034dd90;
                  *(undefined **)(lVar17 + 0x40) = puVar15;
                  *(undefined8 *)(lVar17 + 0x20) = uVar13;
                  uVar13 = 0xe400000000000000;
                  func_0x000107c5fb00(0x66322e25,0xe400000000000000,lVar17);
                  func_0x000107c5fb78();
                  func_0x000107c6142c(uVar13);
                  uVar13 = 0xa2520;
                  uVar11 = 0xe300000000000000;
                }
                else {
                  puStack_88 = (undefined *)0x6761735520555043;
                  uStack_80 = 0xeb00000000203a65;
                  lVar17 = 0x112d36008;
                  func_0x0001000285a8(0x112d36008,&UNK_10d900720);
                  func_0x000107c613fc();
                  *(undefined8 *)(lVar17 + 0x18) = 2;
                  *(undefined8 *)(lVar17 + 0x10) = 1;
                  puVar15 = PTR___sSds7CVarArgsWP_11034ddc0;
                  uVar13 = *(undefined8 *)(uVar4 + _DAT_112da9f38);
                  *(undefined **)(lVar17 + 0x38) = PTR___sSdN_11034dd90;
                  *(undefined **)(lVar17 + 0x40) = puVar15;
                  *(undefined8 *)(lVar17 + 0x20) = uVar13;
                  uVar13 = 0xe400000000000000;
                  func_0x000107c5fb00(0x66322e25,0xe400000000000000,lVar17);
                  func_0x000107c5fb78();
                  func_0x000107c6142c(uVar13);
                  uVar13 = 0xd00000000000001a;
                  uVar11 = 0x800000010ef86c40;
                }
                func_0x000107c5fb78(uVar13,uVar11);
                uVar14 = uStack_80;
                func_0x000107c5fb78(puStack_88,uStack_80);
                func_0x000107c6142c(uVar14);
              }
              puStack_88 = *(undefined **)(uVar4 + _DAT_112da9f48);
              uStack_80 = ((undefined8 *)(uVar4 + _DAT_112da9f48))[1];
              func_0x000107c61434();
              func_0x000107c5fb78(0xa0a,0xe200000000000000);
              uVar14 = uStack_80;
              func_0x000107c5fb78(puStack_88,uStack_80);
              func_0x000107c6142c(uVar12);
              func_0x000107c61170(uVar4);
              func_0x000107c6142c(uVar14);
              goto joined_r0x0001014d489c;
            }
            func_0x000107c61170();
            lVar17 = lVar17 + 1;
          } while (uVar16 != uVar14);
          func_0x000107c6142c(uVar12);
joined_r0x0001014d489c:
          if (uVar19 != 0) goto LAB_1014d48a0;
LAB_1014d3fc0:
          uVar19 = *(ulong *)((uVar12 & 0xffffffffffffff8) + 0x10);
        }
        if (uVar19 == 0) {
          func_0x000107c61170(param_6);
        }
        else {
          if ((long)uVar19 < 1) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1014d4b00);
            (*pcVar3)();
          }
          func_0x000107c61434();
          puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
          puVar15 = PTR___sSiN_11034deb0;
          uVar14 = 0;
          do {
            if ((uVar12 & 0xc000000000000001) == 0) {
              uVar16 = *(ulong *)(uVar12 + uVar14 * 8 + 0x20);
              func_0x000107c61174();
            }
            else {
              uVar16 = uVar14;
              FUN_1014d03d8(uVar14,uVar12);
            }
            plVar1 = (long *)&DAT_112da9f40;
            if (((byte)param_12 & param_12._1_1_ & 1) == 0) {
              plVar1 = (long *)&DAT_112da9f30;
            }
            if ((*(byte *)(uVar16 + *plVar1) & 1) == 0) {
              lVar17 = ((undefined8 *)(uVar16 + _DAT_112da9f20))[1];
              if (lVar17 != 0) {
                uVar13 = *(undefined8 *)(uVar16 + _DAT_112da9f20);
                puStack_88 = (undefined *)0x20646165726854;
                uStack_80 = 0xe700000000000000;
                func_0x000107c61434(lVar17);
                puVar8 = puVar5;
                func_0x000107c6057c(puVar15,puVar5);
                func_0x000107c5fb78();
                func_0x000107c6142c(puVar8);
                func_0x000107c5fb78(0x203a656d616e20,0xe700000000000000);
                func_0x000107c5fb78(uVar13,lVar17);
                func_0x000107c6142c(lVar17);
                func_0x000107c5fb78(10,0xe100000000000000);
                uVar4 = uStack_80;
                func_0x000107c5fb78(puStack_88,uStack_80);
                func_0x000107c6142c(uVar4);
              }
              puStack_88 = (undefined *)0x20646165726854;
              uStack_80 = 0xe700000000000000;
              puVar8 = puVar5;
              func_0x000107c6057c(_DAT_112da9f28,puVar15,puVar5);
              func_0x000107c5fb78();
              func_0x000107c6142c(puVar8);
              func_0x000107c5fb78(0xa3a,0xe200000000000000);
              uVar4 = uStack_80;
              func_0x000107c5fb78(puStack_88,uStack_80);
              func_0x000107c6142c(uVar4);
              if ((param_12 & 1) != 0) {
                puStack_88 = (undefined *)0x6761735520555043;
                uStack_80 = 0xeb00000000203a65;
                lVar17 = 0x112d36008;
                func_0x0001000285a8(0x112d36008,&UNK_10d900720);
                func_0x000107c613fc();
                *(undefined8 *)(lVar17 + 0x18) = 2;
                *(undefined8 *)(lVar17 + 0x10) = 1;
                uVar13 = *(undefined8 *)(uVar16 + _DAT_112da9f38);
                *(undefined **)(lVar17 + 0x38) = PTR___sSdN_11034dd90;
                *(undefined **)(lVar17 + 0x40) = PTR___sSds7CVarArgsWP_11034ddc0;
                *(undefined8 *)(lVar17 + 0x20) = uVar13;
                uVar13 = 0xe400000000000000;
                func_0x000107c5fb00(0x66322e25,0xe400000000000000,lVar17);
                func_0x000107c5fb78();
                func_0x000107c6142c(uVar13);
                func_0x000107c5fb78(0xa2520,0xe300000000000000);
                uVar4 = uStack_80;
                func_0x000107c5fb78(puStack_88,uStack_80);
                func_0x000107c6142c(uVar4);
              }
              puStack_88 = *(undefined **)(uVar16 + _DAT_112da9f48);
              uStack_80 = ((undefined8 *)(uVar16 + _DAT_112da9f48))[1];
              func_0x000107c61434();
              func_0x000107c5fb78(0xa0a,0xe200000000000000);
              uVar4 = uStack_80;
              func_0x000107c5fb78(puStack_88,uStack_80);
              func_0x000107c6142c(uVar4);
            }
            uVar14 = uVar14 + 1;
            func_0x000107c61170(uVar16);
          } while (uVar19 != uVar14);
          func_0x000107c61170(param_6);
          func_0x000107c6142c(uVar12);
        }
      }
      func_0x000107c5fb78(0x49207972616e6942,0xef0a3a736567616d);
      if (param_11 != (undefined *)0x0) goto LAB_1014d48f4;
    }
    else {
      puVar15 = param_11;
      func_0x000107c5ba10();
      func_0x000107c61180();
      if (puVar15 == (undefined *)0x0) goto LAB_1014d3eb0;
      puVar5 = puVar15;
      func_0x000107c5faec();
      func_0x000107c61170(puVar15);
      uVar19 = (ulong)puVar5 & 0xffffffffffff;
      if ((uVar12 & 0x2000000000000000) != 0) {
        uVar19 = uVar12 >> 0x38 & 0xf;
      }
      if (uVar19 == 0) {
        func_0x000107c6142c(uVar12);
        goto LAB_1014d3eb0;
      }
      func_0x000107c5fb78(0xd000000000000013,0x800000010ef86cc0);
      func_0x000107c5fb78(0xd000000000000014,0x800000010ef86ce0);
      func_0x000107c5fb78(0xd000000000000012,0x800000010ef86d00);
      puStack_88 = puVar5;
      uStack_80 = uVar12;
      func_0x000107c5fb78(0xa0a,0xe200000000000000);
      uVar12 = uStack_80;
      func_0x000107c5fb78(puStack_88,uStack_80);
      func_0x000107c6142c(uVar12);
      func_0x000107c5fb78(0x49207972616e6942,0xef0a3a736567616d);
LAB_1014d48f4:
      func_0x000107c61174();
      puVar15 = param_11;
      func_0x000107c450d4();
      func_0x000107c61180();
      if (puVar15 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1014d4b04);
        (*pcVar3)();
      }
      puVar5 = puVar15;
      func_0x000107c5fc54();
      func_0x000107c61170(puVar15);
      lVar17 = *(long *)(puVar5 + 0x10);
      func_0x000107c6142c(puVar5);
      if (lVar17 != 0) {
        func_0x0001000d224c(&puStack_88);
        puVar15 = puStack_88;
        if (puStack_88 == (undefined *)0x0) {
          lVar17 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
          puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          puVar5 = param_11;
          func_0x000107c450d4();
          func_0x000107c61180();
          if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1014d4b08);
            (*pcVar3)();
          }
          puVar8 = puVar15;
          func_0x000107c3e8ec();
          func_0x000107c61180();
          func_0x000107c615e8(puVar15);
          func_0x000107c61170(puVar5);
          puVar15 = puVar8;
          func_0x000107c5fc54(puVar8,PTR___sSSN_11034da80);
          func_0x000107c61170(puVar8);
          lVar17 = *(long *)(puVar15 + 0x10);
        }
        if (lVar17 != 0) {
          puVar18 = (undefined8 *)(puVar15 + 0x28);
          do {
            uVar13 = puVar18[-1];
            uVar11 = *puVar18;
            func_0x000107c61434(uVar11);
            func_0x000107c5fb78(uVar13,uVar11);
            func_0x000107c6142c(uVar11);
            puVar18 = puVar18 + 2;
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        goto LAB_1014d4a84;
      }
      func_0x000107c61170(param_11);
    }
    if (param_6 == (undefined *)0x0) {
      lVar17 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
      puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puVar15 = *(undefined **)(param_6 + _DAT_112da9f68);
      func_0x000107c61434(puVar15);
      lVar17 = *(long *)(puVar15 + 0x10);
    }
    if (lVar17 != 0) {
      puVar18 = (undefined8 *)(puVar15 + 0x28);
      do {
        uVar13 = puVar18[-1];
        uVar11 = *puVar18;
        func_0x000107c61434(uVar11);
        func_0x000107c5fb78(uVar13,uVar11);
        func_0x000107c6142c(uVar11);
        puVar18 = puVar18 + 2;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
  }
  func_0x000107c6142c(puVar15);
LAB_1014d4a94:
  auVar21._8_8_ = uStack_70;
  auVar21._0_8_ = lStack_78;
  return auVar21;
}



/* Entry: 1014d4cfc; end: 1014d4e53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1014d4cfc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  uVar6 = 0;
  uVar1 = param_1;
  uVar4 = param_2;
  (**(code **)(param_1 + _DAT_112da9d70))();
  if ((uVar1 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    FUN_1014da75c();
    lVar7 = *(long *)(param_1 + _DAT_112da9d18);
    if (lVar7 == 0) {
      lVar8 = 0;
      uVar5 = 0xe000000000000000;
    }
    else {
      uVar2 = 0xd000000000000026;
      func_0x000107c5fadc(0xd000000000000026,0x800000010ef86bf0);
      uVar3 = 0;
      uVar5 = 0xe000000000000000;
      func_0x000107c5fadc(0);
      func_0x000107c5c1dc();
      func_0x000107c61180();
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar3);
      lVar8 = lVar7;
      func_0x000107c5faec();
      func_0x000107c61170(lVar7);
    }
    uVar2 = 0x3b;
    uStack_60 = param_2;
    uStack_58 = uVar4;
    lStack_50 = lVar8;
    uStack_48 = uVar5;
    func_0x000107c5fb78(0x3b,0xe100000000000000);
    uVar4 = uStack_58;
    FUN_100e8b654();
    func_0x000107c6022c(&uStack_60,PTR___sSSN_11034da80,PTR___sSSN_11034da80,uVar2,uVar2);
    func_0x000107c6142c(uVar5);
    func_0x000107c6142c(uVar4);
  }
  return uVar6 & 1;
}



/* Entry: 1014d4e54; end: 1014d4f2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014d4e54(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    func_0x0001000d224c(&lStack_50);
    if (lStack_50 != 0) {
      uVar1 = 0x6d6165727473;
      func_0x000107c5fadc(0x6d6165727473,0xe600000000000000);
      uVar2 = 0x617461665f6e6f6e;
      func_0x000107c5fadc(0x617461665f6e6f6e,0xec00000032765f6c);
      func_0x000107c5ce28(lStack_50);
      func_0x000107c615e8(lStack_50);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar2);
    }
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 1014d4f2c; end: 1014d5057;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014d4f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_58,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    func_0x000107c614cc(param_1,auStack_60,auStack_78);
    uVar1 = uStack_70;
    uVar4 = uStack_68;
    func_0x000107c60640(uStack_70,uStack_68);
    func_0x0001000d224c(&lStack_80);
    if (lStack_80 != 0) {
      uVar2 = 0x6d6165727473;
      func_0x000107c5fadc(0x6d6165727473,0xe600000000000000);
      func_0x000107c5fadc(uVar1,uVar4);
      uVar3 = 0x617461665f6e6f6e;
      func_0x000107c5fadc(0x617461665f6e6f6e,0xec00000032765f6c);
      func_0x000107c5ce24(lStack_80);
      func_0x000107c615e8(lStack_80);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar3);
    }
    func_0x000107c61170(param_4);
    func_0x000107c6142c(uVar4);
  }
  return;
}



/* Entry: 1014d5058; end: 1014d514b; -[_TtC24SCCrashServicesImplSwift28SCSnapAirCrashReportUploader reportNonFatalWithErrorCode:metadata:message:threadCaptureOption:mainThreadDumpInfo:] */

void FUN_1014d5058(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  func_0x000107c61174(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_6);
  uVar2 = param_7;
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_1);
  FUN_1014d1aac(param_3,param_4,param_5,param_2,param_6,param_7);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1014d514c; end: 1014d593f;  */

/* WARNING: Removing unreachable block (ram,0x0001014d5934) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014d514c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  undefined *puVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  long unaff_x20;
  undefined8 uVar18;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_90;
  undefined *puStack_80;
  
  uVar2 = param_1;
  uVar15 = param_2;
  (**(code **)(unaff_x20 + _DAT_112da9d40))();
  puVar3 = &UNK_1103ced80;
  func_0x000107c613fc(&UNK_1103ced80,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_1103cedf8;
  func_0x000107c613fc(&UNK_1103cedf8,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(ulong *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  func_0x000107c6157c(puVar3);
  func_0x000107c61434(param_2);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100214a84();
  puStack_80 = puVar5;
  func_0x0001000d224c(&puStack_1e0);
  if (puStack_1e0 == (undefined *)0x0) {
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100214a84();
  }
  else {
    puVar6 = puStack_1e0;
    func_0x000107c4ce2c();
    func_0x000107c61180();
    func_0x000107c615e8(puStack_1e0);
    puVar7 = puVar6;
    func_0x000107c5f9e8(puVar6,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
    func_0x000107c61170(puVar6);
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar8 = puVar6;
  func_0x000100215634();
  func_0x000107c6142c(puVar6);
  puVar6 = puVar7;
  func_0x000107c61558(puVar7);
  puStack_1e0 = puVar7;
  func_0x000100215d08(puVar8,&UNK_100216600,0,puVar6,&puStack_1e0);
  func_0x000107c6142c(puVar8);
  puVar6 = puStack_1e0;
  puVar7 = PTR___sSSN_11034da80;
  lVar13 = 0x112d472a8;
  func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
  puStack_a8 = puVar6;
  puStack_90 = (undefined *)lVar13;
  if (lVar13 == 0) {
    func_0x000107c6157c(puVar6);
    func_0x000100216638(&puStack_a8,0x112d387f8,&UNK_10d902650);
    func_0x000100216878(&puStack_1e0,0x72657375,0xe400000000000000);
    func_0x000100216638(&puStack_1e0,0x112d387f8,&UNK_10d902650);
  }
  else {
    func_0x000100102924(&puStack_a8,&puStack_1e0);
    func_0x000107c6157c(puVar6);
    puVar8 = puVar5;
    func_0x000107c61558(puVar5);
    puStack_a8 = puVar5;
    func_0x0001001029e8(&puStack_1e0,0x72657375,0xe400000000000000,puVar8);
    puStack_80 = puStack_a8;
  }
  puVar5 = puStack_80;
  puStack_a8 = (undefined *)0x3030302d30303030;
  uStack_a0 = 0xee00303030302d30;
  puStack_90 = puVar7;
  func_0x000100102924(&puStack_a8,&puStack_1e0);
  puVar8 = puVar5;
  func_0x000107c61558(puVar5);
  puStack_a8 = puVar5;
  func_0x0001001029e8(&puStack_1e0,0x6d6d6f635f746967,0xea00000000007469,puVar8);
  puVar8 = puStack_a8;
  puStack_80 = puStack_a8;
  puVar5 = (undefined *)0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(puVar5 + 0x20) = 0xd000000000000013;
  *(undefined8 *)(puVar5 + 0x18) = 8;
  *(undefined8 *)(puVar5 + 0x10) = 4;
  *(undefined8 *)(puVar5 + 0x28) = 0x800000010ef869e0;
  *(ulong *)(puVar5 + 0x30) = param_1;
  *(undefined8 *)(puVar5 + 0x38) = param_2;
  *(undefined **)(puVar5 + 0x48) = puVar7;
  *(undefined8 *)(puVar5 + 0x50) = 0xd000000000000010;
  *(undefined8 *)(puVar5 + 0x58) = 0x800000010ef86a00;
  *(undefined8 *)(puVar5 + 0x60) = param_3;
  *(undefined8 *)(puVar5 + 0x68) = param_4;
  *(undefined **)(puVar5 + 0x78) = puVar7;
  *(undefined8 *)(puVar5 + 0x80) = 0x65707974;
  *(undefined8 *)(puVar5 + 0x88) = 0xe400000000000000;
  *(undefined8 *)(puVar5 + 0x90) = 0x4c5f59524f4d454d;
  *(undefined8 *)(puVar5 + 0x98) = 0xeb000000004b4145;
  *(undefined **)(puVar5 + 0xa8) = puVar7;
  *(undefined8 *)(puVar5 + 0xb0) = 0x7461645f6174656d;
  *(long *)(puVar5 + 0xd8) = lVar13;
  *(undefined8 *)(puVar5 + 0xb8) = 0xe900000000000061;
  *(undefined **)(puVar5 + 0xc0) = puVar8;
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c61434(puVar8);
  puVar7 = puVar5;
  func_0x000100214a84();
  func_0x000107c61588(puVar5);
  uVar18 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  uVar16 = 4;
  func_0x000107c61408(puVar5 + 0x20,4,uVar18);
  ppuVar10 = &PTR____CFConstantStringClassReference_110db1318;
  ppuVar9 = ppuVar10;
  puStack_b0 = puVar7;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110db1318);
  uVar12 = uVar16;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110db1318);
  if (*(long *)(puVar6 + 0x10) == 0) {
    uStack_1d8 = 0;
    puStack_1e0 = (undefined *)0x0;
    puStack_1c8 = (undefined *)0x0;
    puStack_1d0 = (undefined *)0x0;
    func_0x000107c6142c(uVar12);
  }
  else {
    func_0x000107c61434(puVar6);
    uVar17 = uVar12;
    func_0x000100029284(ppuVar10);
    if ((uVar17 & 1) == 0) {
      func_0x000107c61574(puVar6);
      uStack_1d8 = 0;
      puStack_1e0 = (undefined *)0x0;
      puStack_1c8 = (undefined *)0x0;
      puStack_1d0 = (undefined *)0x0;
      func_0x000107c6142c(uVar12);
    }
    else {
      func_0x0001000bb420(*(long *)(puVar6 + 0x38) + (long)ppuVar10 * 0x20,&puStack_1e0);
      func_0x000107c6142c(uVar12);
      func_0x000107c61574(puVar6);
    }
  }
  uStack_1a8 = uStack_1d8;
  puStack_1b0 = puStack_1e0;
  lStack_198 = (long)puStack_1c8;
  uStack_1a0 = puStack_1d0;
  if (puStack_1c8 == (undefined *)0x0) {
    func_0x000100216638(&puStack_1b0,0x112d387f8,&UNK_10d902650);
    func_0x000100216878(&puStack_a8,ppuVar9,uVar16);
    func_0x000107c6142c(uVar16);
    func_0x000100216638(&puStack_a8,0x112d387f8,&UNK_10d902650);
    puVar5 = puStack_b0;
  }
  else {
    func_0x000100102924(&puStack_1b0,&puStack_a8);
    puVar5 = puVar7;
    func_0x000107c61558(puVar7);
    puStack_1b0 = puVar7;
    func_0x0001001029e8(&puStack_a8,ppuVar9,uVar16,puVar5);
    func_0x000107c6142c(uVar16);
    puVar5 = puStack_1b0;
  }
  puVar11 = puVar5;
  func_0x000100216948(puVar5,uVar2,uVar15,0,0);
  func_0x0001000d224c(&puStack_1b0);
  puVar7 = puStack_1b0;
  func_0x000107c5fadc(uVar2,uVar15);
  uVar12 = uVar2;
  (**(code **)(unaff_x20 + _DAT_112da9d70))();
  if ((uVar12 & 1) == 0) {
LAB_1014d5798:
    uVar18 = 0;
  }
  else {
    if (*(long *)(puVar5 + 0x10) != 0) {
      func_0x000107c61434(puVar5);
      lVar13 = 0x65707974;
      uVar12 = 0;
      func_0x000100029284(0x65707974);
      if ((uVar12 & 1) == 0) {
        func_0x000107c6142c(puVar5);
      }
      else {
        func_0x0001000bb420(*(long *)(puVar5 + 0x38) + lVar13 * 0x20,&puStack_1e0);
        func_0x000107c6142c(puVar5);
        ppuVar10 = &puStack_a8;
        func_0x000107c6147c(ppuVar10,&puStack_1e0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
        uVar18 = uStack_a0;
        if (((ulong)ppuVar10 & 1) != 0) {
          puVar14 = puStack_a8;
          func_0x0001000f66f0(puStack_a8,uStack_a0,*(undefined8 *)(unaff_x20 + _DAT_112da9c70));
          func_0x000107c6142c(uVar18);
          if (((ulong)puVar14 & 1) != 0) goto LAB_1014d5798;
        }
      }
    }
    uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112da9d08);
    func_0x000107c615f0(uVar18);
  }
  puVar14 = &UNK_1103cee20;
  func_0x000107c613fc(&UNK_1103cee20,0x20,7);
  *(undefined8 *)(puVar14 + 0x10) = 0x1014da664;
  *(undefined **)(puVar14 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_1c0 = (code *)&UNK_1002cf634;
  puStack_1e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d8 = 0x42000000;
  puStack_1d0 = &UNK_1000f6b44;
  puStack_1c8 = &UNK_1103cee38;
  ppuVar10 = &puStack_1e0;
  puStack_1b8 = puVar14;
  func_0x000107c60bc4(ppuVar10);
  puVar14 = puStack_1b8;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar14);
  puVar14 = &UNK_1103cee70;
  func_0x000107c613fc(&UNK_1103cee70,0x20,7);
  *(undefined8 *)(puVar14 + 0x10) = 0x1014da664;
  *(undefined **)(puVar14 + 0x18) = puVar4;
  pcStack_1c0 = FUN_1014da888;
  puStack_1e0 = puVar1;
  uStack_1d8 = 0x42000000;
  puStack_1d0 = (undefined *)0x1012519d0;
  puStack_1c8 = &UNK_1103cee88;
  ppuVar9 = &puStack_1e0;
  puStack_1b8 = puVar14;
  func_0x000107c60bc4(ppuVar9);
  puVar14 = puStack_1b8;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar14);
  func_0x000107c5c11c(puVar7);
  func_0x000107c61170(puVar11);
  func_0x000107c61574(puVar4);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c61574(puVar3);
  func_0x000107c6142c(uVar15);
  func_0x000107c6142c(puVar5);
  func_0x000107c6142c(puVar8);
  func_0x000107c61574(puVar6);
  func_0x000107c615e8(puVar7);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar18);
  return;
}



/* Entry: 1014d5940; end: 1014d59c3; -[_TtC24SCCrashServicesImplSwift28SCSnapAirCrashReportUploader reportMemoryLeakWithTitle:description:] */

/* WARNING: Possible PIC construction at 0x0001014d59a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014d59ac) */

void FUN_1014d5940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_1014d514c(param_3,param_2,param_4,uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1014d59c4; end: 1014d6193;  */

/* WARNING: Removing unreachable block (ram,0x0001014d6188) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014d59c4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_90;
  undefined *puStack_80;
  
  puVar2 = &UNK_1103ced80;
  func_0x000107c613fc(&UNK_1103ced80,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_1103cef88;
  func_0x000107c613fc(&UNK_1103cef88,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_7;
  *(undefined8 *)(puVar3 + 0x20) = param_8;
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(param_8);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100214a84();
  puStack_80 = puVar4;
  func_0x0001000d224c(&puStack_1e0);
  if (puStack_1e0 == (undefined *)0x0) {
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100214a84();
  }
  else {
    puVar5 = puStack_1e0;
    func_0x000107c4ce2c();
    func_0x000107c61180();
    func_0x000107c615e8(puStack_1e0);
    puVar6 = puVar5;
    func_0x000107c5f9e8(puVar5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
    func_0x000107c61170(puVar5);
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar7 = puVar5;
  func_0x000100215634();
  func_0x000107c6142c(puVar5);
  puVar5 = puVar6;
  func_0x000107c61558(puVar6);
  puStack_1e0 = puVar6;
  func_0x000100215d08(puVar7,&UNK_100216600,0,puVar5,&puStack_1e0);
  func_0x000107c6142c(puVar7);
  puVar5 = puStack_1e0;
  puVar6 = PTR___sSSN_11034da80;
  lVar12 = 0x112d472a8;
  func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
  puStack_a8 = puVar5;
  puStack_90 = (undefined *)lVar12;
  if (lVar12 == 0) {
    func_0x000107c6157c(puVar5);
    func_0x000100216638(&puStack_a8,0x112d387f8,&UNK_10d902650);
    func_0x000100216878(&puStack_1e0,0x72657375,0xe400000000000000);
    func_0x000100216638(&puStack_1e0,0x112d387f8,&UNK_10d902650);
  }
  else {
    func_0x000100102924(&puStack_a8,&puStack_1e0);
    func_0x000107c6157c(puVar5);
    puVar7 = puVar4;
    func_0x000107c61558(puVar4);
    puStack_a8 = puVar4;
    func_0x0001001029e8(&puStack_1e0,0x72657375,0xe400000000000000,puVar7);
    puStack_80 = puStack_a8;
  }
  puVar4 = puStack_80;
  puStack_a8 = (undefined *)0x3030302d30303030;
  uStack_a0 = 0xee00303030302d30;
  puStack_90 = puVar6;
  func_0x000100102924(&puStack_a8,&puStack_1e0);
  puVar7 = puVar4;
  func_0x000107c61558(puVar4);
  puStack_a8 = puVar4;
  func_0x0001001029e8(&puStack_1e0,0x6d6d6f635f746967,0xea00000000007469,puVar7);
  puVar7 = puStack_a8;
  puStack_80 = puStack_a8;
  puVar4 = (undefined *)0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(puVar4 + 0x20) = 0xd000000000000013;
  *(undefined8 *)(puVar4 + 0x18) = 8;
  *(undefined8 *)(puVar4 + 0x10) = 4;
  *(undefined8 *)(puVar4 + 0x28) = 0x800000010ef869e0;
  *(undefined8 *)(puVar4 + 0x30) = param_1;
  *(undefined8 *)(puVar4 + 0x38) = param_2;
  *(undefined **)(puVar4 + 0x48) = puVar6;
  *(undefined8 *)(puVar4 + 0x50) = 0xd000000000000010;
  *(undefined8 *)(puVar4 + 0x58) = 0x800000010ef86a00;
  *(long *)(puVar4 + 0x60) = param_3;
  *(undefined8 *)(puVar4 + 0x68) = param_4;
  *(undefined **)(puVar4 + 0x78) = puVar6;
  *(undefined8 *)(puVar4 + 0x80) = 0x65707974;
  *(undefined8 *)(puVar4 + 0x88) = 0xe400000000000000;
  *(undefined8 *)(puVar4 + 0x90) = 0x4f4d454d5f574f4c;
  *(undefined8 *)(puVar4 + 0x98) = 0xea00000000005952;
  *(undefined **)(puVar4 + 0xa8) = puVar6;
  *(undefined8 *)(puVar4 + 0xb0) = 0x7461645f6174656d;
  *(long *)(puVar4 + 0xd8) = lVar12;
  *(undefined8 *)(puVar4 + 0xb8) = 0xe900000000000061;
  *(undefined **)(puVar4 + 0xc0) = puVar7;
  func_0x000107c61434();
  func_0x000107c61434(param_4);
  func_0x000107c61434(puVar7);
  puVar6 = puVar4;
  func_0x000100214a84();
  func_0x000107c61588(puVar4);
  uVar16 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  uVar14 = 4;
  func_0x000107c61408(puVar4 + 0x20,4,uVar16);
  ppuVar9 = &PTR____CFConstantStringClassReference_110db1318;
  ppuVar8 = ppuVar9;
  puStack_b0 = puVar6;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110db1318);
  uVar11 = uVar14;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110db1318);
  if (*(long *)(puVar5 + 0x10) == 0) {
LAB_1014d5e20:
    uStack_1d8 = 0;
    puStack_1e0 = (undefined *)0x0;
    puStack_1c8 = (undefined *)0x0;
    puStack_1d0 = (undefined *)0x0;
    func_0x000107c6142c(uVar11);
  }
  else {
    func_0x000107c61434(puVar5);
    uVar15 = uVar11;
    func_0x000100029284(ppuVar9);
    if ((uVar15 & 1) == 0) {
      func_0x000107c61574(puVar5);
      goto LAB_1014d5e20;
    }
    func_0x0001000bb420(*(long *)(puVar5 + 0x38) + (long)ppuVar9 * 0x20,&puStack_1e0);
    func_0x000107c6142c(uVar11);
    func_0x000107c61574(puVar5);
  }
  uStack_1a8 = uStack_1d8;
  puStack_1b0 = puStack_1e0;
  lStack_198 = (long)puStack_1c8;
  uStack_1a0 = puStack_1d0;
  if (puStack_1c8 == (undefined *)0x0) {
    func_0x000100216638(&puStack_1b0,0x112d387f8,&UNK_10d902650);
    func_0x000100216878(&puStack_a8,ppuVar8,uVar14);
    func_0x000107c6142c(uVar14);
    func_0x000100216638(&puStack_a8,0x112d387f8,&UNK_10d902650);
    puVar4 = puStack_b0;
  }
  else {
    func_0x000100102924(&puStack_1b0,&puStack_a8);
    puVar4 = puVar6;
    func_0x000107c61558(puVar6);
    puStack_1b0 = puVar6;
    func_0x0001001029e8(&puStack_a8,ppuVar8,uVar14,puVar4);
    func_0x000107c6142c(uVar14);
    puVar4 = puStack_1b0;
  }
  puVar10 = puVar4;
  func_0x000100216948(puVar4,param_5,param_6,0,0);
  func_0x0001000d224c(&puStack_1b0);
  puVar6 = puStack_1b0;
  func_0x000107c5fadc(param_5,param_6);
  uVar11 = param_5;
  (**(code **)(unaff_x20 + _DAT_112da9d70))();
  if ((uVar11 & 1) == 0) {
LAB_1014d5fc8:
    uVar16 = 0;
  }
  else {
    if (*(long *)(puVar4 + 0x10) != 0) {
      func_0x000107c61434(puVar4);
      lVar12 = 0x65707974;
      uVar11 = 0;
      func_0x000100029284(0x65707974);
      if ((uVar11 & 1) == 0) {
        func_0x000107c6142c(puVar4);
      }
      else {
        func_0x0001000bb420(*(long *)(puVar4 + 0x38) + lVar12 * 0x20,&puStack_1e0);
        func_0x000107c6142c(puVar4);
        ppuVar9 = &puStack_a8;
        func_0x000107c6147c(ppuVar9,&puStack_1e0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
        uVar16 = uStack_a0;
        if (((ulong)ppuVar9 & 1) != 0) {
          puVar13 = puStack_a8;
          func_0x0001000f66f0(puStack_a8,uStack_a0,*(undefined8 *)(unaff_x20 + _DAT_112da9c70));
          func_0x000107c6142c(uVar16);
          if (((ulong)puVar13 & 1) != 0) goto LAB_1014d5fc8;
        }
      }
    }
    uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112da9d08);
    func_0x000107c615f0(uVar16);
  }
  puVar13 = &UNK_1103cefb0;
  func_0x000107c613fc(&UNK_1103cefb0,0x20,7);
  *(code **)(puVar13 + 0x10) = FUN_1014da8b0;
  *(undefined **)(puVar13 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c0 = 0x1014dacc4;
  puStack_1e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d8 = 0x42000000;
  puStack_1d0 = &UNK_1000f6b44;
  puStack_1c8 = &UNK_1103cefc8;
  ppuVar9 = &puStack_1e0;
  puStack_1b8 = puVar13;
  func_0x000107c60bc4(ppuVar9);
  puVar13 = puStack_1b8;
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar13);
  puVar13 = &UNK_1103cf000;
  func_0x000107c613fc(&UNK_1103cf000,0x20,7);
  *(code **)(puVar13 + 0x10) = FUN_1014da8b0;
  *(undefined **)(puVar13 + 0x18) = puVar3;
  uStack_1c0 = 0x1014dace4;
  puStack_1e0 = puVar1;
  uStack_1d8 = 0x42000000;
  puStack_1d0 = (undefined *)0x1012519d0;
  puStack_1c8 = &UNK_1103cf018;
  ppuVar8 = &puStack_1e0;
  puStack_1b8 = puVar13;
  func_0x000107c60bc4(ppuVar8);
  puVar13 = puStack_1b8;
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar13);
  func_0x000107c5c11c(puVar6);
  func_0x000107c61170(puVar10);
  func_0x000107c61574(puVar3);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61574(puVar2);
  func_0x000107c6142c(puVar4);
  func_0x000107c6142c(puVar7);
  func_0x000107c61574(puVar5);
  func_0x000107c615e8(puVar6);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(uVar16);
  lVar12 = param_3;
  func_0x000107c5fb5c(param_3,param_4);
  if (99 < lVar12) {
    lVar12 = 100;
  }
  func_0x000107c5fb6c(0xf,lVar12,param_3,param_4);
  return;
}



/* Entry: 1014d6194; end: 1014d636b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014d6194(uint param_1,undefined8 param_2,long param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  if ((param_1 & 1) == 0) {
    func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 == 0) goto LAB_1014d633c;
    func_0x0001000d224c(&lStack_80);
    if (lStack_80 != 0) {
      uVar1 = 0x6d6165727473;
      func_0x000107c5fadc(0x6d6165727473,0xe600000000000000);
      uVar3 = 0x6e776f6e6b6e75;
      func_0x000107c5fadc(0x6e776f6e6b6e75,0xe700000000000000);
      uVar2 = 0x6f6d656d5f776f6c;
      func_0x000107c5fadc(0x6f6d656d5f776f6c,0xea00000000007972);
      func_0x000107c5ce24(lStack_80);
      func_0x000107c615e8(lStack_80);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar3);
      goto LAB_1014d6330;
    }
  }
  else {
    func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 == 0) goto LAB_1014d633c;
    func_0x0001000d224c(&lStack_80);
    if (lStack_80 != 0) {
      uVar1 = 0x6d6165727473;
      func_0x000107c5fadc(0x6d6165727473,0xe600000000000000);
      uVar2 = 0x6f6d656d5f776f6c;
      func_0x000107c5fadc(0x6f6d656d5f776f6c,0xea00000000007972);
      func_0x000107c5ce28(lStack_80);
      func_0x000107c615e8(lStack_80);
      func_0x000107c61170(uVar1);
LAB_1014d6330:
      func_0x000107c61170(uVar2);
    }
  }
  func_0x000107c61170(param_3);
LAB_1014d633c:
  (*param_4)(param_1 & 1,param_2);
  return;
}



/* Entry: 1014d636c; end: 1014d6467; -[_TtC24SCCrashServicesImplSwift28SCSnapAirCrashReportUploader reportLowMemoryWithTitle:payload:reportId:completion:] */

void FUN_1014d636c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  uVar2 = param_2;
  func_0x000107c5faec(param_4);
  uVar3 = uVar2;
  func_0x000107c5faec(param_5);
  puVar1 = &UNK_1103cf3a8;
  func_0x000107c613fc(&UNK_1103cf3a8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  func_0x000107c61174(param_1);
  FUN_1014d59c4(param_3,param_2,param_4,uVar2,param_5,uVar3,0x1014dac84,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1014d6468; end: 1014d64bf;  */

void FUN_1014d6468(uint param_1,long param_2,long param_3)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5ed2c(param_2);
  }
  (**(code **)(param_3 + 0x10))(param_3,param_1 & 1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1014d64c0; end: 1014d6d1f;  */

/* WARNING: Removing unreachable block (ram,0x0001014d6d14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014d64c0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined *param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long unaff_x20;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_90;
  undefined *puStack_80;
  
  puVar3 = &UNK_1103ced80;
  func_0x000107c613fc(&UNK_1103ced80,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_1103cf050;
  func_0x000107c613fc(&UNK_1103cf050,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_9;
  *(undefined8 *)(puVar4 + 0x20) = param_10;
  func_0x000107c6157c(puVar3);
  func_0x000107c6157c(param_10);
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100214a84();
  puStack_80 = puVar5;
  func_0x0001000d224c(&puStack_1e0);
  if (puStack_1e0 == (undefined *)0x0) {
    puVar7 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100214a84();
  }
  else {
    puVar6 = puStack_1e0;
    func_0x000107c4ce2c();
    func_0x000107c61180();
    func_0x000107c615e8(puStack_1e0);
    puVar7 = puVar6;
    func_0x000107c5f9e8(puVar6,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
    func_0x000107c61170(puVar6);
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8(PTR___swiftEmptyArrayStorage_11034f1c8);
  puVar8 = puVar6;
  func_0x000100215634();
  func_0x000107c6142c(puVar6);
  puVar6 = puVar7;
  func_0x000107c61558(puVar7);
  puStack_1e0 = puVar7;
  func_0x000100215d08(puVar8,&UNK_100216600,0,puVar6,&puStack_1e0);
  func_0x000107c6142c(puVar8);
  puVar6 = puStack_1e0;
  puVar7 = PTR___sSSN_11034da80;
  lVar13 = 0x112d472a8;
  func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
  puStack_a8 = puVar6;
  puStack_90 = (undefined *)lVar13;
  if (lVar13 == 0) {
    func_0x000107c6157c(puVar6);
    func_0x000100216638(&puStack_a8,0x112d387f8,&UNK_10d902650);
    func_0x000100216878(&puStack_1e0,0x72657375,0xe400000000000000);
    func_0x000100216638(&puStack_1e0,0x112d387f8,&UNK_10d902650);
  }
  else {
    func_0x000100102924(&puStack_a8,&puStack_1e0);
    func_0x000107c6157c(puVar6);
    puVar8 = puVar5;
    func_0x000107c61558(puVar5);
    puStack_a8 = puVar5;
    func_0x0001001029e8(&puStack_1e0,0x72657375,0xe400000000000000,puVar8);
    puStack_80 = puStack_a8;
  }
  puVar5 = puStack_80;
  puStack_a8 = (undefined *)0x3030302d30303030;
  lStack_a0 = -0x11ffcfcfcfcfd2d0;
  puStack_90 = puVar7;
  func_0x000100102924(&puStack_a8,&puStack_1e0);
  puVar8 = puVar5;
  func_0x000107c61558(puVar5);
  puStack_a8 = puVar5;
  func_0x0001001029e8(&puStack_1e0,0x6d6d6f635f746967,0xea00000000007469,puVar8);
  puVar8 = puStack_a8;
  puStack_80 = puStack_a8;
  puVar5 = (undefined *)0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c61534();
  *(undefined8 *)(puVar5 + 0x18) = 8;
  *(undefined8 *)(puVar5 + 0x10) = 4;
  *(undefined8 *)(puVar5 + 0x20) = 0xd000000000000013;
  *(undefined8 *)(puVar5 + 0x28) = 0x800000010ef869e0;
  *(undefined8 *)(puVar5 + 0x30) = 0xd00000000000001b;
  *(undefined8 *)(puVar5 + 0x38) = 0x800000010ef86a40;
  *(undefined **)(puVar5 + 0x48) = puVar7;
  *(undefined8 *)(puVar5 + 0x50) = 0xd000000000000010;
  *(undefined8 *)(puVar5 + 0x58) = 0x800000010ef86a00;
  *(long *)(puVar5 + 0x60) = param_1;
  *(undefined8 *)(puVar5 + 0x68) = param_2;
  *(undefined **)(puVar5 + 0x78) = puVar7;
  *(undefined8 *)(puVar5 + 0x80) = 0x65707974;
  *(undefined8 *)(puVar5 + 0x88) = 0xe400000000000000;
  *(undefined8 *)(puVar5 + 0x90) = 0xd000000000000017;
  *(undefined8 *)(puVar5 + 0x98) = 0x800000010ef86390;
  *(undefined **)(puVar5 + 0xa8) = puVar7;
  *(undefined8 *)(puVar5 + 0xb0) = 0x7461645f6174656d;
  *(long *)(puVar5 + 0xd8) = lVar13;
  *(undefined8 *)(puVar5 + 0xb8) = 0xe900000000000061;
  *(undefined **)(puVar5 + 0xc0) = puVar8;
  func_0x000107c61434();
  func_0x000107c61434(puVar8);
  puVar9 = puVar5;
  func_0x000100214a84();
  func_0x000107c61588(puVar5);
  uVar10 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  uVar15 = 4;
  func_0x000107c61408(puVar5 + 0x20,4,uVar10);
  if (param_6 != 0) {
    puStack_90 = puVar7;
    puStack_b0 = puVar9;
    puStack_a8 = param_5;
    lStack_a0 = param_6;
    func_0x000100102924(&puStack_a8,&puStack_1e0);
    func_0x000107c61434(param_6);
    puVar5 = puVar9;
    func_0x000107c61558(puVar9);
    uVar15 = 0x65765f6873617263;
    puStack_a8 = puVar9;
    func_0x0001001029e8(&puStack_1e0,0x65765f6873617263,0xed00006e6f697372,puVar5);
    puVar9 = puStack_a8;
  }
  ppuVar12 = &PTR____CFConstantStringClassReference_110db1318;
  ppuVar11 = ppuVar12;
  puStack_b0 = puVar9;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110db1318);
  uVar16 = uVar15;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110db1318);
  if (*(long *)(puVar6 + 0x10) == 0) {
LAB_1014d6990:
    uStack_1d8 = 0;
    puStack_1e0 = (undefined *)0x0;
    puStack_1c8 = (undefined *)0x0;
    puStack_1d0 = (undefined *)0x0;
    func_0x000107c6142c(uVar16);
  }
  else {
    func_0x000107c61434(puVar6);
    uVar17 = uVar16;
    func_0x000100029284(ppuVar12);
    if ((uVar17 & 1) == 0) {
      func_0x000107c61574(puVar6);
      goto LAB_1014d6990;
    }
    func_0x0001000bb420(*(long *)(puVar6 + 0x38) + (long)ppuVar12 * 0x20,&puStack_1e0);
    func_0x000107c6142c(uVar16);
    func_0x000107c61574(puVar6);
  }
  uStack_1a8 = uStack_1d8;
  puStack_1b0 = puStack_1e0;
  lStack_198 = (long)puStack_1c8;
  uStack_1a0 = puStack_1d0;
  if (puStack_1c8 == (undefined *)0x0) {
    func_0x000100216638(&puStack_1b0,0x112d387f8,&UNK_10d902650);
    func_0x000100216878(&puStack_a8,ppuVar11,uVar15);
    func_0x000107c6142c(uVar15);
    func_0x000100216638(&puStack_a8,0x112d387f8,&UNK_10d902650);
    puVar5 = puStack_b0;
  }
  else {
    func_0x000100102924(&puStack_1b0,&puStack_a8);
    puVar5 = puVar9;
    func_0x000107c61558(puVar9);
    puStack_1b0 = puVar9;
    func_0x0001001029e8(&puStack_a8,ppuVar11,uVar15,puVar5);
    func_0x000107c6142c(uVar15);
    puVar5 = puStack_1b0;
  }
  puVar9 = puVar5;
  func_0x000100216948(puVar5,param_3,param_4,param_7,param_8);
  func_0x0001000d224c(&puStack_1b0);
  puVar7 = puStack_1b0;
  func_0x000107c5fadc(param_3,param_4);
  pcVar1 = *(code **)(unaff_x20 + _DAT_112da9d70);
  uVar15 = param_3;
  (*pcVar1)();
  if ((uVar15 & 1) == 0) {
LAB_1014d6b3c:
    uVar15 = 0;
  }
  else {
    if (*(long *)(puVar5 + 0x10) != 0) {
      func_0x000107c61434(puVar5);
      lVar13 = 0x65707974;
      uVar15 = 0;
      func_0x000100029284(0x65707974);
      if ((uVar15 & 1) == 0) {
        func_0x000107c6142c(puVar5);
      }
      else {
        func_0x0001000bb420(*(long *)(puVar5 + 0x38) + lVar13 * 0x20,&puStack_1e0);
        func_0x000107c6142c(puVar5);
        ppuVar12 = &puStack_a8;
        func_0x000107c6147c(ppuVar12,&puStack_1e0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
        lVar13 = lStack_a0;
        if (((ulong)ppuVar12 & 1) != 0) {
          puVar14 = puStack_a8;
          func_0x0001000f66f0(puStack_a8,lStack_a0,*(undefined8 *)(unaff_x20 + _DAT_112da9c70));
          func_0x000107c6142c(lVar13);
          if (((ulong)puVar14 & 1) != 0) goto LAB_1014d6b3c;
        }
      }
    }
    uVar15 = *(ulong *)(unaff_x20 + _DAT_112da9d08);
    func_0x000107c615f0(uVar15);
  }
  puVar14 = &UNK_1103cf078;
  func_0x000107c613fc(&UNK_1103cf078,0x20,7);
  *(undefined8 *)(puVar14 + 0x10) = 0x1014da8bc;
  *(undefined **)(puVar14 + 0x18) = puVar4;
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c0 = 0x1014dacc8;
  puStack_1e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d8 = 0x42000000;
  puStack_1d0 = &UNK_1000f6b44;
  puStack_1c8 = &UNK_1103cf090;
  ppuVar12 = &puStack_1e0;
  puStack_1b8 = puVar14;
  func_0x000107c60bc4(ppuVar12);
  puVar14 = puStack_1b8;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar14);
  puVar14 = &UNK_1103cf0c8;
  func_0x000107c613fc(&UNK_1103cf0c8,0x20,7);
  *(undefined8 *)(puVar14 + 0x10) = 0x1014da8bc;
  *(undefined **)(puVar14 + 0x18) = puVar4;
  uStack_1c0 = 0x1014dace8;
  puStack_1e0 = puVar2;
  uStack_1d8 = 0x42000000;
  puStack_1d0 = (undefined *)0x1012519d0;
  puStack_1c8 = &UNK_1103cf0e0;
  ppuVar11 = &puStack_1e0;
  puStack_1b8 = puVar14;
  func_0x000107c60bc4(ppuVar11);
  puVar14 = puStack_1b8;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar14);
  func_0x000107c5c11c(puVar7);
  func_0x000107c61170(puVar9);
  func_0x000107c61574(puVar4);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c61574(puVar3);
  func_0x000107c6142c(puVar5);
  func_0x000107c6142c(puVar8);
  func_0x000107c61574(puVar6);
  func_0x000107c615e8(puVar7);
  func_0x000107c61170(param_3);
  func_0x000107c615e8();
  (*pcVar1)();
  if ((uVar15 & 1) != 0) {
    lVar13 = param_1;
    func_0x000107c5fb5c(param_1,param_2);
    if (99 < lVar13) {
      lVar13 = 100;
    }
    func_0x000107c5fb6c(0xf,lVar13,param_1,param_2);
  }
  return;
}



/* Entry: 1014d6d20; end: 1014d6f3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014d6d20(uint param_1,long param_2,long param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  long lStack_80;
  undefined1 auStack_78 [24];
  
  if ((param_1 & 1) == 0) {
    func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 != 0) {
      if (param_2 == 0) {
        uVar1 = 0xe700000000000000;
        uVar2 = 0x6e776f6e6b6e75;
      }
      else {
        func_0x000107c614cc(param_2,auStack_88,auStack_a0);
        func_0x000107c60640(uStack_98,uStack_90);
        uVar1 = uStack_90;
        uVar2 = uStack_98;
      }
      func_0x0001000d224c(&lStack_80);
      if (lStack_80 != 0) {
        uVar3 = 0x6d6165727473;
        func_0x000107c5fadc(0x6d6165727473,0xe600000000000000);
        func_0x000107c5fadc(uVar2,uVar1);
        uVar4 = 0xd000000000000016;
        func_0x000107c5fadc(0xd000000000000016,0x800000010ef86bb0);
        func_0x000107c5ce24(lStack_80);
        func_0x000107c615e8(lStack_80);
        func_0x000107c61170(uVar3);
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar4);
      }
      func_0x000107c61170(param_3);
      func_0x000107c6142c(uVar1);
    }
  }
  else {
    func_0x000107c61428(param_3 + 0x10,auStack_78,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61618();
    if (param_3 != 0) {
      func_0x0001000d224c(&lStack_80);
      if (lStack_80 != 0) {
        uVar1 = 0x6d6165727473;
        func_0x000107c5fadc(0x6d6165727473,0xe600000000000000);
        uVar2 = 0xd000000000000016;
        func_0x000107c5fadc(0xd000000000000016,0x800000010ef86bb0);
        func_0x000107c5ce28(lStack_80);
        func_0x000107c615e8(lStack_80);
        func_0x000107c61170(uVar1);
        func_0x000107c61170(uVar2);
      }
      func_0x000107c61170(param_3);
    }
  }
  (*param_4)(param_1 & 1,param_2);
  return;
}



/* Entry: 1014d6f40; end: 1014d707f; -[_TtC24SCCrashServicesImplSwift28SCSnapAirCrashReportUploader reportMetricKitDiagnostics:reportId:appVersion:lastKSCrashReportId:completion:] */

/* WARNING: Possible PIC construction at 0x0001014d7040: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014d7058: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014d7044) */
/* WARNING: Removing unreachable block (ram,0x0001014d705c) */

void FUN_1014d6f40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  uVar3 = param_2;
  func_0x000107c5faec(param_4);
  uVar4 = uVar3;
  if (param_5 == 0) {
    param_5 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
    uVar1 = uVar4;
  }
  if (param_6 == 0) {
    param_6 = 0;
    uVar4 = 0;
  }
  else {
    func_0x000107c5faec(param_6);
  }
  puVar2 = &UNK_1103cf380;
  func_0x000107c613fc(&UNK_1103cf380,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_7;
  func_0x000107c61174(param_1);
  FUN_1014d64c0(param_3,param_2,param_4,uVar3,param_5,uVar1,param_6,uVar4,0x1014dac80,puVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1014d7080; end: 1014d748f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014d7080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined1 *puVar12;
  undefined8 unaff_x20;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long lStack_190;
  undefined1 auStack_188 [280];
  
  lVar2 = 0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  puVar12 = auStack_188;
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 10;
  *(undefined8 *)(lVar2 + 0x10) = 5;
  *(undefined8 *)(lVar2 + 0x20) = 0xd000000000000012;
  puVar10 = PTR___sSSN_11034da80;
  *(undefined **)(lVar2 + 0x48) = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar2 + 0x28) = 0x800000010ef86a60;
  *(undefined8 *)(lVar2 + 0x30) = 0xd000000000000019;
  *(undefined8 *)(lVar2 + 0x38) = 0x800000010ef86a80;
  ppuVar3 = &PTR____CFConstantStringClassReference_110db1318;
  func_0x000107c5faec();
  *(undefined ***)(lVar2 + 0x50) = ppuVar3;
  *(undefined1 **)(lVar2 + 0x58) = puVar12;
  *(undefined8 *)(lVar2 + 0x60) = param_3;
  *(undefined8 *)(lVar2 + 0x68) = param_4;
  *(undefined **)(lVar2 + 0x78) = puVar10;
  *(undefined8 *)(lVar2 + 0x80) = 0xd000000000000013;
  *(undefined8 *)(lVar2 + 0x88) = 0x800000010ef869e0;
  *(undefined8 *)(lVar2 + 0x90) = param_5;
  *(undefined8 *)(lVar2 + 0x98) = param_6;
  *(undefined **)(lVar2 + 0xa8) = puVar10;
  *(undefined8 *)(lVar2 + 0xb0) = 0xd000000000000010;
  *(undefined8 *)(lVar2 + 0xb8) = 0x800000010ef86a00;
  *(undefined8 *)(lVar2 + 0xc0) = param_7;
  *(undefined8 *)(lVar2 + 200) = param_8;
  *(undefined **)(lVar2 + 0xd8) = puVar10;
  *(undefined8 *)(lVar2 + 0xe0) = 0xd000000000000011;
  *(undefined **)(lVar2 + 0x108) = puVar10;
  *(undefined8 *)(lVar2 + 0xe8) = 0x800000010ef86aa0;
  *(undefined8 *)(lVar2 + 0xf0) = param_9;
  *(undefined8 *)(lVar2 + 0xf8) = param_10;
  func_0x000107c61434(param_4);
  func_0x000107c61434(param_6);
  func_0x000107c61434(param_8);
  func_0x000107c61434(param_10);
  lVar4 = lVar2;
  func_0x000100214a84();
  func_0x000107c61588(lVar2);
  uVar5 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408((undefined8 *)(lVar2 + 0x20),5,uVar5);
  lVar6 = 0;
  FUN_1014c9648();
  lVar2 = lVar6;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar2 + _DAT_112da9a40);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  puVar10 = PTR_s_init_1125d9248;
  lStack_198 = lVar2;
  lStack_190 = lVar6;
  func_0x000107c61434(param_12);
  plVar7 = &lStack_198;
  func_0x000107c61154(plVar7,puVar10);
  func_0x0001000d224c(&uStack_1a0);
  lVar2 = lVar4;
  func_0x000100216948(lVar4,param_1,param_2,0,0);
  func_0x000107c6142c(lVar4);
  func_0x000107c5fadc(param_1,param_2);
  puVar10 = &UNK_1103ced80;
  puVar8 = puVar10;
  func_0x000107c613fc(&UNK_1103ced80,0x18,7);
  func_0x000107c61614(puVar8 + 0x10,unaff_x20);
  puVar9 = &UNK_1103cf118;
  func_0x000107c613fc(&UNK_1103cf118,0x28,7);
  *(undefined **)(puVar9 + 0x10) = puVar8;
  *(undefined8 *)(puVar9 + 0x18) = param_13;
  *(undefined8 *)(puVar9 + 0x20) = param_14;
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1b0 = 0x1014da8c8;
  puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c8 = 0x42000000;
  puStack_1c0 = &UNK_1000f6b44;
  puStack_1b8 = &UNK_1103cf130;
  ppuVar3 = &puStack_1d0;
  puStack_1a8 = puVar9;
  func_0x000107c60bc4(ppuVar3);
  puVar9 = puStack_1a8;
  func_0x000107c61174(plVar7);
  func_0x000107c6157c(param_14);
  func_0x000107c61574(puVar9);
  func_0x000107c613fc(&UNK_1103ced80,0x18,7);
  func_0x000107c61614(puVar10 + 0x10,unaff_x20);
  puVar9 = &UNK_1103cf168;
  func_0x000107c613fc(&UNK_1103cf168,0x28,7);
  *(undefined **)(puVar9 + 0x10) = puVar10;
  *(undefined8 *)(puVar9 + 0x18) = param_13;
  *(undefined8 *)(puVar9 + 0x20) = param_14;
  uStack_1b0 = 0x1014da8d4;
  puStack_1d0 = puVar8;
  uStack_1c8 = 0x42000000;
  puStack_1c0 = (undefined *)0x1012519d0;
  puStack_1b8 = &UNK_1103cf180;
  ppuVar11 = &puStack_1d0;
  puStack_1a8 = puVar9;
  func_0x000107c60bc4();
  puVar10 = puStack_1a8;
  func_0x000107c6157c(param_14);
  func_0x000107c61574(puVar10);
  func_0x000107c5c11c(uStack_1a0);
  func_0x000107c61170(plVar7);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(uStack_1a0);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(plVar7);
  return;
}



/* Entry: 1014d7490; end: 1014d7583;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014d7490(long param_1,code *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x0001000d224c(&lStack_60);
    if (lStack_60 != 0) {
      uVar1 = 0x6d6165727473;
      func_0x000107c5fadc(0x6d6165727473,0xe600000000000000);
      uVar2 = 0xd000000000000013;
      func_0x000107c5fadc(0xd000000000000013,0x800000010ef86b90);
      func_0x000107c5ce28(lStack_60);
      func_0x000107c615e8(lStack_60);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar2);
    }
    func_0x000107c61170(param_1);
  }
  (*param_2)(1,0);
  return;
}



/* Entry: 1014d7584; end: 1014d76d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014d7584(undefined8 param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c614cc(param_1,auStack_80,auStack_98);
    uVar1 = uStack_90;
    uVar4 = uStack_88;
    func_0x000107c60640(uStack_90,uStack_88);
    func_0x0001000d224c(&lStack_a0);
    if (lStack_a0 != 0) {
      uVar2 = 0x6d6165727473;
      func_0x000107c5fadc(0x6d6165727473,0xe600000000000000);
      func_0x000107c5fadc(uVar1,uVar4);
      uVar3 = 0xd000000000000013;
      func_0x000107c5fadc(0xd000000000000013,0x800000010ef86b90);
      func_0x000107c5ce24(lStack_a0);
      func_0x000107c615e8(lStack_a0);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar3);
    }
    func_0x000107c61170(param_2);
    func_0x000107c6142c(uVar4);
  }
  (*param_3)(0,param_1);
  return;
}



/* Entry: 1014d76d4; end: 1014d7837; -[_TtC24SCCrashServicesImplSwift28SCSnapAirCrashReportUploader reportSpectaclesFirmwareCrashWithReportId:userId:title:description:otherInfoInJson:firmwareLogPath:onComplete:] */

void FUN_1014d76d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  func_0x000107c60bc4();
  func_0x000107c5faec();
  uVar2 = param_2;
  func_0x000107c5faec();
  uVar3 = uVar2;
  func_0x000107c5faec();
  uVar4 = uVar3;
  func_0x000107c5faec();
  uVar5 = uVar4;
  func_0x000107c5faec();
  uVar6 = uVar5;
  func_0x000107c5faec();
  puVar1 = &UNK_1103cf358;
  func_0x000107c613fc(&UNK_1103cf358,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_9;
  func_0x000107c61174(param_1);
  FUN_1014d7080(param_3,param_2,param_4,uVar2,param_5,uVar3,param_6,uVar4,param_7,uVar5,param_8,
                uVar6,0x1014dac7c,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uVar5);
  func_0x000107c6142c(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1014d7838; end: 1014d8177;  */

/* WARNING: Removing unreachable block (ram,0x0001014d8164) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014d7838(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined *param_9,ulong param_10,byte param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  long lVar12;
  long *plVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 unaff_x20;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  long lStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  ulong uStack_a0;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100214a84();
  puStack_80 = puVar4;
  func_0x0001000d224c(&puStack_110);
  puVar6 = puStack_110;
  if (puStack_110 == (undefined *)0x0) {
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100214a84();
  }
  else {
    puVar5 = puStack_110;
    func_0x000107c4ce2c();
    func_0x000107c61180();
    func_0x000107c615e8(puVar6);
    puVar6 = puVar5;
    func_0x000107c5f9e8(puVar5,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,
                        PTR___sSSSHsWP_11034da90);
    func_0x000107c61170(puVar5);
  }
  puStack_88 = puVar6;
  if ((param_11 & 1) != 0) {
    func_0x0001000d224c(&puStack_110);
    if (puStack_110 != (undefined *)0x0) {
      puVar5 = puStack_110;
      func_0x000107c4a98c(puStack_110);
      func_0x000107c61180();
      func_0x000107c615e8(puStack_110);
      puVar7 = puVar5;
      func_0x000107c5f9e8(puVar5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90)
      ;
      func_0x000107c61170(puVar5);
      func_0x000107c61434(puVar6);
      puVar5 = puVar7;
      func_0x000100215634(puVar7);
      func_0x000107c6142c(puVar7);
      puVar7 = puVar6;
      func_0x000107c61558(puVar6);
      puStack_110 = puVar6;
      func_0x000100215d08(puVar5,&UNK_100216600,0,puVar7,&puStack_110);
      func_0x000107c6142c(puVar6);
      func_0x000107c6142c(puVar5);
      puStack_88 = puStack_110;
      puVar6 = puStack_110;
    }
    if (param_10 != 0) {
      uVar2 = (ulong)param_9 & 0xffffffffffff;
      if ((param_10 & 0x2000000000000000) != 0) {
        uVar2 = param_10 >> 0x38 & 0xf;
      }
      if (uVar2 != 0) {
        puStack_a8 = param_9;
        uStack_a0 = param_10;
        puStack_90 = PTR___sSSN_11034da80;
        func_0x000100102924(&puStack_a8,&puStack_110);
        func_0x000107c61434(param_10);
        puVar5 = puVar6;
        func_0x000107c61558(puVar6);
        puStack_a8 = puVar6;
        func_0x0001001029e8(&puStack_110,0xd000000000000010,0x800000010ef86680,puVar5);
        puStack_88 = puStack_a8;
        goto LAB_1014d7ad4;
      }
    }
    uStack_108 = 0;
    puStack_110 = (undefined *)0x0;
    puStack_f8 = (undefined *)0x0;
    puStack_100 = (undefined *)0x0;
    func_0x000100216638(&puStack_110,0x112d387f8,&UNK_10d902650);
    func_0x000100216878(&puStack_110,0xd000000000000010,0x800000010ef86680);
    func_0x000100216638(&puStack_110,0x112d387f8,&UNK_10d902650);
  }
LAB_1014d7ad4:
  puVar6 = puStack_88;
  lVar8 = 0x112d472a8;
  func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
  puStack_a8 = puVar6;
  puStack_90 = (undefined *)lVar8;
  if (lVar8 == 0) {
    func_0x000107c61434(puVar6);
    func_0x000100216638(&puStack_a8,0x112d387f8,&UNK_10d902650);
    func_0x000100216878(&puStack_110,0x72657375,0xe400000000000000);
    func_0x000100216638(&puStack_110,0x112d387f8,&UNK_10d902650);
  }
  else {
    func_0x000100102924(&puStack_a8,&puStack_110);
    func_0x000107c61434(puVar6);
    puVar5 = puVar4;
    func_0x000107c61558(puVar4);
    puStack_a8 = puVar4;
    func_0x0001001029e8(&puStack_110,0x72657375,0xe400000000000000,puVar5);
    puStack_80 = puStack_a8;
  }
  puVar4 = puStack_80;
  puVar5 = PTR___sSSN_11034da80;
  puStack_a8 = (undefined *)0x3030302d30303030;
  uStack_a0 = 0xee00303030302d30;
  puStack_90 = PTR___sSSN_11034da80;
  func_0x000100102924(&puStack_a8,&puStack_110);
  puVar7 = puVar4;
  func_0x000107c61558(puVar4);
  puStack_a8 = puVar4;
  func_0x0001001029e8(&puStack_110,0x6d6d6f635f746967,0xea00000000007469,puVar7);
  puVar7 = puStack_a8;
  puStack_80 = puStack_a8;
  puVar4 = (undefined *)0x112d4b5e8;
  func_0x0001000285a8(0x112d4b5e8,&UNK_10d9121a0);
  func_0x000107c613fc();
  *(undefined8 *)(puVar4 + 0x18) = 8;
  *(undefined8 *)(puVar4 + 0x10) = 4;
  *(undefined8 *)(puVar4 + 0x20) = 0xd000000000000013;
  *(undefined8 *)(puVar4 + 0x28) = 0x800000010ef869e0;
  *(undefined8 *)(puVar4 + 0x30) = param_3;
  *(undefined8 *)(puVar4 + 0x38) = param_4;
  *(undefined **)(puVar4 + 0x48) = puVar5;
  *(undefined8 *)(puVar4 + 0x50) = 0xd000000000000010;
  *(undefined8 *)(puVar4 + 0x58) = 0x800000010ef86a00;
  *(undefined8 *)(puVar4 + 0x60) = param_5;
  *(undefined8 *)(puVar4 + 0x68) = param_6;
  *(undefined **)(puVar4 + 0x78) = puVar5;
  *(undefined8 *)(puVar4 + 0x80) = 0x65707974;
  *(undefined8 *)(puVar4 + 0x88) = 0xe400000000000000;
  *(undefined8 *)(puVar4 + 0x90) = 0xd000000000000010;
  *(undefined8 *)(puVar4 + 0x98) = 0x800000010ef86ac0;
  *(undefined **)(puVar4 + 0xa8) = puVar5;
  *(undefined8 *)(puVar4 + 0xb0) = 0x7461645f6174656d;
  *(long *)(puVar4 + 0xd8) = lVar8;
  *(undefined8 *)(puVar4 + 0xb8) = 0xe900000000000061;
  *(undefined **)(puVar4 + 0xc0) = puVar7;
  func_0x000107c61434(param_4);
  func_0x000107c61434(param_6);
  func_0x000107c61434(puVar7);
  puVar5 = puVar4;
  func_0x000100214a84();
  func_0x000107c61588(puVar4);
  uVar9 = 0x112d4b5f0;
  func_0x0001000285a8(0x112d4b5f0,&UNK_10d9127d0);
  func_0x000107c61408(puVar4 + 0x20,4,uVar9);
  puVar15 = (undefined *)0x20;
  func_0x000107c6145c(puVar4,0x20,7);
  ppuVar11 = &PTR____CFConstantStringClassReference_110db1318;
  ppuVar10 = ppuVar11;
  puStack_b0 = puVar5;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110db1318);
  puVar4 = puVar15;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110db1318);
  if (*(long *)(puVar6 + 0x10) != 0) {
    func_0x000107c61434(puVar6);
    puVar16 = puVar4;
    func_0x000100029284(ppuVar11);
    if (((ulong)puVar16 & 1) != 0) {
      func_0x0001000bb420(*(long *)(puVar6 + 0x38) + (long)ppuVar11 * 0x20,&puStack_110);
      func_0x000107c6142c(puVar4);
      puVar4 = puVar6;
      goto LAB_1014d7dbc;
    }
    func_0x000107c6142c(puVar6);
  }
  uStack_108 = 0;
  puStack_110 = (undefined *)0x0;
  puStack_f8 = (undefined *)0x0;
  puStack_100 = (undefined *)0x0;
LAB_1014d7dbc:
  func_0x000107c6142c(puVar4);
  uStack_c8 = uStack_108;
  puStack_d0 = puStack_110;
  lStack_b8 = (long)puStack_f8;
  uStack_c0 = puStack_100;
  if (puStack_f8 == (undefined *)0x0) {
    func_0x000100216638(&puStack_d0,0x112d387f8,&UNK_10d902650);
    func_0x000100216878(&puStack_a8,ppuVar10,puVar15);
    func_0x000107c6142c(puVar15);
    func_0x000100216638(&puStack_a8,0x112d387f8,&UNK_10d902650);
  }
  else {
    func_0x000100102924(&puStack_d0,&puStack_a8);
    puVar4 = puVar5;
    func_0x000107c61558(puVar5);
    puStack_d0 = puVar5;
    func_0x0001001029e8(&puStack_a8,ppuVar10,puVar15,puVar4);
    func_0x000107c6142c(puVar15);
    puStack_b0 = puStack_d0;
  }
  if (param_10 != 0) {
    uVar2 = (ulong)param_9 & 0xffffffffffff;
    if ((param_10 & 0x2000000000000000) != 0) {
      uVar2 = param_10 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      puStack_a8 = param_9;
      uStack_a0 = param_10;
      puStack_90 = PTR___sSSN_11034da80;
      func_0x000100102924(&puStack_a8,&puStack_110);
      func_0x000107c61434(param_10);
      puVar4 = puStack_b0;
      puVar5 = puStack_b0;
      func_0x000107c61558(puStack_b0);
      puStack_a8 = puVar4;
      func_0x0001001029e8(&puStack_110,0xd000000000000010,0x800000010ef86680,puVar5);
      puStack_b0 = puStack_a8;
    }
  }
  lVar12 = 0;
  FUN_1014c92bc();
  lVar8 = lVar12;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar8 + _DAT_112da99e0);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined1 *)(lVar8 + _DAT_112da99e8) = 1;
  puVar4 = PTR_s_init_1125d9248;
  lStack_e0 = lVar8;
  lStack_d8 = lVar12;
  func_0x000107c61434(param_8);
  plVar13 = &lStack_e0;
  func_0x000107c61154(plVar13,puVar4);
  func_0x0001000d224c(&puStack_a8);
  puVar3 = puStack_a8;
  puVar16 = puStack_b0;
  puVar14 = puStack_b0;
  func_0x000100216948(puStack_b0,param_1,param_2,0,0);
  func_0x000107c5fadc(param_1,param_2);
  puVar4 = &UNK_1103ced80;
  puVar15 = puVar4;
  func_0x000107c613fc(&UNK_1103ced80,0x18,7);
  func_0x000107c61614(puVar15 + 0x10,unaff_x20);
  puVar5 = &UNK_1103cf1b8;
  func_0x000107c613fc(&UNK_1103cf1b8,0x28,7);
  *(undefined **)(puVar5 + 0x10) = puVar15;
  *(undefined8 *)(puVar5 + 0x18) = param_13;
  *(undefined8 *)(puVar5 + 0x20) = param_14;
  puVar15 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f0 = 0x1014da8e0;
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_108 = 0x42000000;
  puStack_100 = &UNK_1000f6b44;
  puStack_f8 = &UNK_1103cf1d0;
  ppuVar11 = &puStack_110;
  puStack_e8 = puVar5;
  func_0x000107c60bc4(ppuVar11);
  puVar5 = puStack_e8;
  func_0x000107c61174(plVar13);
  func_0x000107c6157c(param_14);
  func_0x000107c61574(puVar5);
  func_0x000107c613fc(&UNK_1103ced80,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,unaff_x20);
  puVar5 = &UNK_1103cf208;
  func_0x000107c613fc(&UNK_1103cf208,0x28,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_13;
  *(undefined8 *)(puVar5 + 0x20) = param_14;
  uStack_f0 = 0x1014da8ec;
  puStack_110 = puVar15;
  uStack_108 = 0x42000000;
  puStack_100 = (undefined *)0x1012519d0;
  puStack_f8 = &UNK_1103cf220;
  ppuVar10 = &puStack_110;
  puStack_e8 = puVar5;
  func_0x000107c60bc4(ppuVar10);
  puVar4 = puStack_e8;
  func_0x000107c6157c(param_14);
  func_0x000107c61574(puVar4);
  func_0x000107c5c11c(puVar3);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c6142c(puVar6);
  func_0x000107c6142c(puVar16);
  func_0x000107c6142c(puVar7);
  func_0x000107c615e8(puVar3);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(param_1);
  func_0x000107c61170(plVar13);
  func_0x000107c61170(plVar13);
  return;
}



/* Entry: 1014d8178; end: 1014d826b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014d8178(long param_1,code *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x0001000d224c(&lStack_60);
    if (lStack_60 != 0) {
      uVar1 = 0x6d6165727473;
      func_0x000107c5fadc(0x6d6165727473,0xe600000000000000);
      uVar2 = 0xd000000000000010;
      func_0x000107c5fadc(0xd000000000000010,0x800000010ef86b70);
      func_0x000107c5ce28(lStack_60);
      func_0x000107c615e8(lStack_60);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar2);
    }
    func_0x000107c61170(param_1);
  }
  (*param_2)(1,0);
  return;
}



/* Entry: 1014d826c; end: 1014d83bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014d826c(undefined8 param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c614cc(param_1,auStack_80,auStack_98);
    uVar1 = uStack_90;
    uVar4 = uStack_88;
    func_0x000107c60640(uStack_90,uStack_88);
    func_0x0001000d224c(&lStack_a0);
    if (lStack_a0 != 0) {
      uVar2 = 0x6d6165727473;
      func_0x000107c5fadc(0x6d6165727473,0xe600000000000000);
      func_0x000107c5fadc(uVar1,uVar4);
      uVar3 = 0xd000000000000010;
      func_0x000107c5fadc(0xd000000000000010,0x800000010ef86b70);
      func_0x000107c5ce24(lStack_a0);
      func_0x000107c615e8(lStack_a0);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar3);
    }
    func_0x000107c61170(param_2);
    func_0x000107c6142c(uVar4);
  }
  (*param_3)(0,param_1);
  return;
}



/* Entry: 1014d83bc; end: 1014d851b; -[_TtC24SCCrashServicesImplSwift28SCSnapAirCrashReportUploader reportMemoryHeapDumpWithReportId:title:description:heapSnapshotFilePath:priorSessionId:fromPreviousLaunch:onComplete:] */

/* WARNING: Possible PIC construction at 0x0001014d84d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001014d84e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014d84d8) */
/* WARNING: Removing unreachable block (ram,0x0001014d84e8) */

void FUN_1014d83bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined1 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000107c60bc4();
  func_0x000107c5faec();
  uVar2 = param_2;
  func_0x000107c5faec();
  uVar3 = uVar2;
  func_0x000107c5faec(param_5);
  uVar4 = uVar3;
  func_0x000107c5faec(param_6);
  if (param_7 == 0) {
    param_7 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = uVar4;
    func_0x000107c5faec();
  }
  puVar1 = &UNK_1103cf330;
  func_0x000107c613fc(&UNK_1103cf330,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_9;
  func_0x000107c61174(param_1);
  FUN_1014d7838(param_3,param_2,param_4,uVar2,param_5,uVar3,param_6,uVar4,param_7,uVar5,param_8);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1014d851c; end: 1014d8913;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014d851c(long param_1,ulong param_2,long param_3,code *param_4,undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long unaff_x20;
  undefined8 uVar13;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  if ((param_1 == 0) || (FUN_1012254e8(), param_1 == 0)) {
    func_0x0001000d224c(&puStack_a8);
    if (puStack_a8 != (undefined *)0x0) {
      uVar13 = 0x65646f636e65;
      func_0x000107c5fadc(0x65646f636e65,0xe600000000000000);
      uVar6 = 0x676e69646f636e65;
      func_0x000107c5fadc(0x676e69646f636e65,0xee00726f7272655f);
      uVar7 = 0x5f737365636f7270;
      func_0x000107c5fadc(0x5f737365636f7270,0xed00006873617263);
      func_0x000107c5ce24(puStack_a8);
      func_0x000107c615e8(puStack_a8);
      func_0x000107c61170(uVar13);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar7);
    }
    if (param_4 != (code *)0x0) {
      (*param_4)();
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1014d8910);
    (*pcVar1)();
  }
  func_0x0001000d224c(&uStack_78);
  if (param_3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1014d8914);
    (*pcVar1)();
  }
  lVar2 = param_1;
  func_0x000100216948(param_1,param_2,param_3,0,0);
  func_0x000107c5fadc(param_2,param_3);
  uVar3 = param_2;
  (**(code **)(unaff_x20 + _DAT_112da9d70))();
  if ((uVar3 & 1) == 0) {
    func_0x000107c6142c(param_1);
    uVar13 = 0;
    goto LAB_1014d8770;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
LAB_1014d8744:
    func_0x000107c6142c(param_1);
  }
  else {
    func_0x000107c61434(param_1);
    lVar4 = 0x65707974;
    uVar3 = 0;
    func_0x000100029284(0x65707974);
    if ((uVar3 & 1) == 0) {
      func_0x000107c61430(param_1,2);
    }
    else {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar4 * 0x20,&puStack_a8);
      func_0x000107c6142c(param_1);
      puVar5 = &uStack_b8;
      func_0x000107c6147c(puVar5,&puStack_a8,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
      if (((ulong)puVar5 & 1) == 0) goto LAB_1014d8744;
      uVar3 = uStack_b8;
      func_0x0001000f66f0(uStack_b8,uStack_b0,*(undefined8 *)(unaff_x20 + _DAT_112da9c70));
      func_0x000107c6142c(param_1);
      func_0x000107c6142c(uStack_b0);
      if ((uVar3 & 1) != 0) {
        uVar13 = 0;
        goto LAB_1014d8770;
      }
    }
  }
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112da9d08);
  func_0x000107c615f0(uVar13);
LAB_1014d8770:
  puVar11 = &UNK_1103ced80;
  puVar8 = puVar11;
  func_0x000107c613fc(&UNK_1103ced80,0x18,7);
  func_0x000107c61614(puVar8 + 0x10);
  puVar9 = &UNK_1103cf258;
  func_0x000107c613fc(&UNK_1103cf258,0x28,7);
  *(code **)(puVar9 + 0x10) = param_4;
  *(undefined8 *)(puVar9 + 0x18) = param_5;
  *(undefined **)(puVar9 + 0x20) = puVar8;
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = FUN_1014dab10;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000f6b44;
  puStack_90 = &UNK_1103cf270;
  ppuVar10 = &puStack_a8;
  puStack_80 = puVar9;
  func_0x000107c60bc4(ppuVar10);
  puVar9 = puStack_80;
  func_0x000100b64c10(param_4,param_5);
  func_0x000107c61574(puVar9);
  func_0x000107c613fc(&UNK_1103ced80,0x18,7);
  func_0x000107c61614(puVar11 + 0x10);
  puVar9 = &UNK_1103cf2a8;
  func_0x000107c613fc(&UNK_1103cf2a8,0x28,7);
  *(code **)(puVar9 + 0x10) = param_4;
  *(undefined8 *)(puVar9 + 0x18) = param_5;
  *(undefined **)(puVar9 + 0x20) = puVar11;
  pcStack_88 = FUN_1014dab50;
  puStack_a8 = puVar8;
  uStack_a0 = 0x42000000;
  puStack_98 = (undefined *)0x1012519d0;
  puStack_90 = &UNK_1103cf2c0;
  ppuVar12 = &puStack_a8;
  puStack_80 = puVar9;
  func_0x000107c60bc4(ppuVar12);
  puVar11 = puStack_80;
  func_0x000100b64c10(param_4,param_5);
  func_0x000107c61574(puVar11);
  func_0x000107c5c11c(uStack_78);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c615e8(uStack_78);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(uVar13);
  return;
}



/* Entry: 1014d8914; end: 1014d8a0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014d8914(code *param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    func_0x0001000d224c(&lStack_60);
    if (lStack_60 != 0) {
      uVar2 = 0x6d6165727473;
      func_0x000107c5fadc(0x6d6165727473,0xe600000000000000);
      uVar3 = 0x5f737365636f7270;
      func_0x000107c5fadc(0x5f737365636f7270,0xed00006873617263);
      func_0x000107c5ce28(lStack_60);
      func_0x000107c615e8(lStack_60);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar3);
    }
    func_0x000107c61170(param_3);
  }
  if (param_1 != (code *)0x0) {
    (*param_1)();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014d8a10);
  (*pcVar1)();
}



/* Entry: 1014d8a10; end: 1014d8b5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014d8a10(undefined8 param_1,code *param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_68,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    func_0x000107c614cc(param_1,auStack_70,auStack_88);
    uVar2 = uStack_80;
    uVar5 = uStack_78;
    func_0x000107c60640(uStack_80,uStack_78);
    func_0x0001000d224c(&lStack_90);
    if (lStack_90 != 0) {
      uVar3 = 0x6d6165727473;
      func_0x000107c5fadc(0x6d6165727473,0xe600000000000000);
      func_0x000107c5fadc(uVar2,uVar5);
      uVar4 = 0x5f737365636f7270;
      func_0x000107c5fadc(0x5f737365636f7270,0xed00006873617263);
      func_0x000107c5ce24(lStack_90);
      func_0x000107c615e8(lStack_90);
      func_0x000107c61170(uVar3);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar4);
    }
    func_0x000107c61170(param_4);
    func_0x000107c6142c(uVar5);
  }
  if (param_2 != (code *)0x0) {
    (*param_2)();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014d8b60);
  (*pcVar1)();
}



/* Entry: 1014d8b60; end: 1014d8c5b; -[_TtC24SCCrashServicesImplSwift28SCSnapAirCrashReportUploader processCrashReport:reportId:completion:] */

/* WARNING: Possible PIC construction at 0x0001014d8c40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001014d8c44) */

void FUN_1014d8b60(undefined8 param_1,undefined *param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  if (param_3 != 0) {
    param_2 = PTR___ss11AnyHashableVN_11034e448;
    func_0x000107c5f9e8(param_3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
  }
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  if (param_5 == 0) {
    puVar2 = (undefined *)0x0;
    uVar1 = 0;
  }
  else {
    puVar2 = &UNK_1103cf308;
    func_0x000107c613fc(&UNK_1103cf308,0x18,7);
    *(long *)(puVar2 + 0x10) = param_5;
    uVar1 = 0x1014dab5c;
  }
  func_0x000107c61174(param_1);
  FUN_1014d851c(param_3,param_4,param_2,uVar1,puVar2);
  func_0x0001001f9174(uVar1,puVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1014d8c5c; end: 1014d94bf;  */

void FUN_1014d8c5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  long lStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar13 = 0;
  uVar5 = 0;
  uVar6 = 0;
  iVar2 = (int)&lStack_90;
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  if (param_2[2] == 0) {
    return;
  }
  func_0x000107c61434(param_2);
  lVar3 = 0x65725f656c707061;
  uVar12 = 0;
  func_0x000100029284(0x65725f656c707061);
  if ((uVar12 & 1) == 0) {
LAB_1014d8eb8:
    func_0x000107c6142c(param_2);
    return;
  }
  func_0x0001000bb420(param_2[7] + lVar3 * 0x20,&uStack_80);
  func_0x000107c6142c(param_2);
  puVar11 = PTR___sypN_11034f1a8;
  func_0x000107c6147c(&lStack_90,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  puVar14 = puStack_88;
  if ((uVar13 & 1) == 0) {
    return;
  }
  func_0x0001014d921c(lStack_90,puStack_88,param_1,0x5f737365636f7270,0xed00006873617263);
  func_0x000107c6142c(puVar14);
  func_0x000107c57d94(param_1);
  if (param_2[2] == 0) {
    return;
  }
  lVar15 = 0x7461645f6174656d;
  func_0x000107c61434(param_2);
  uVar13 = 0xe900000000000061;
  lVar3 = lVar15;
  func_0x000100029284(0x7461645f6174656d);
  if ((uVar13 & 1) == 0) goto LAB_1014d8eb8;
  func_0x0001000bb420(param_2[7] + lVar3 * 0x20,&uStack_80);
  func_0x000107c6142c(param_2);
  uVar4 = 0x112d472a8;
  func_0x0001000285a8(0x112d472a8,&UNK_10d90e490);
  puVar14 = &uStack_80;
  func_0x000107c6147c(&lStack_90,puVar14,puVar11 + 8,uVar4,6);
  lVar3 = lStack_90;
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (param_2[2] != 0) {
    func_0x000107c61434(param_2);
    puVar14 = (undefined8 *)0xe900000000000061;
    func_0x000100029284(0x7461645f6174656d);
    if (((ulong)puVar14 & 1) != 0) {
      func_0x0001000bb420(param_2[7] + lVar15 * 0x20,&uStack_80);
      func_0x000107c6142c(param_2);
      puVar14 = &uStack_80;
      func_0x000107c6147c(&lStack_90,puVar14,puVar11 + 8,uVar4,6);
      lVar15 = lStack_90;
      if ((uVar6 & 1) == 0) goto LAB_1014d8f20;
      if (param_2[2] == 0) {
LAB_1014d8ee8:
        lVar7 = 0;
        param_2 = (undefined8 *)0x0;
      }
      else {
        func_0x000107c61434(param_2);
        lVar7 = 0x746174735f707061;
        uVar13 = 0xe900000000000065;
        func_0x000100029284(0x746174735f707061);
        if ((uVar13 & 1) == 0) {
          func_0x000107c6142c(param_2);
          goto LAB_1014d8ee8;
        }
        func_0x0001000bb420(param_2[7] + lVar7 * 0x20,&uStack_80);
        func_0x000107c6142c(param_2);
        func_0x000107c6147c(&lStack_90,&uStack_80,puVar11 + 8,PTR___sSSN_11034da80,6);
        lVar7 = lStack_90;
        param_2 = puStack_88;
        if (iVar2 == 0) {
          lVar7 = 0;
          param_2 = (undefined8 *)0x0;
        }
      }
      puVar14 = param_1;
      func_0x000100284344(lVar15,param_1,lVar7,param_2,0x5f737365636f7270,0xed00006873617263,0);
      func_0x000107c6142c(lVar15);
    }
    func_0x000107c6142c(param_2);
  }
LAB_1014d8f20:
  if (*(long *)(lVar3 + 0x10) == 0) {
LAB_1014d8fa8:
    lVar15 = 0;
  }
  else {
    func_0x000107c61434(lVar3);
    lVar15 = 0x6e6f73616572;
    puVar14 = (undefined8 *)0xe600000000000000;
    func_0x000100029284(0x6e6f73616572);
    if (((ulong)puVar14 & 1) == 0) {
      func_0x000107c6142c(lVar3);
      goto LAB_1014d8fa8;
    }
    func_0x0001000bb420(*(long *)(lVar3 + 0x38) + lVar15 * 0x20,&uStack_80);
    func_0x000107c6142c(lVar3);
    puVar14 = &uStack_80;
    func_0x000107c6147c(&lStack_90,puVar14,puVar11 + 8,PTR___sSSN_11034da80,6);
    puVar1 = puStack_88;
    if ((uVar8 & 1) == 0) goto LAB_1014d8fa8;
    lVar15 = lStack_90;
    puVar14 = puStack_88;
    func_0x000107c5fadc(lStack_90);
    func_0x000107c6142c(puVar1);
  }
  func_0x000107c5402c(param_1);
  func_0x000107c61170(lVar15);
  lVar15 = lVar3;
  FUN_1014da8f8(lVar3);
  if (puVar14 == (undefined8 *)0x0) {
    lVar15 = 0;
  }
  else {
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar14);
  }
  func_0x000107c59a34(param_1);
  func_0x000107c61170(lVar15);
  if (*(long *)(lVar3 + 0x10) == 0) {
LAB_1014d9090:
    lVar15 = 0;
  }
  else {
    func_0x000107c61434(lVar3);
    lVar15 = 0x6d6d6f635f746967;
    uVar13 = 0xea00000000007469;
    func_0x000100029284(0x6d6d6f635f746967);
    if ((uVar13 & 1) == 0) {
      func_0x000107c6142c(lVar3);
      goto LAB_1014d9090;
    }
    func_0x0001000bb420(*(long *)(lVar3 + 0x38) + lVar15 * 0x20,&uStack_80);
    func_0x000107c6142c(lVar3);
    func_0x000107c6147c(&lStack_90,&uStack_80,puVar11 + 8,PTR___sSSN_11034da80,6);
    puVar14 = puStack_88;
    if ((uVar9 & 1) == 0) goto LAB_1014d9090;
    lVar15 = lStack_90;
    func_0x000107c5fadc(lStack_90,puStack_88);
    func_0x000107c6142c(puVar14);
  }
  func_0x000107c52788(param_1);
  func_0x000107c61170(lVar15);
  if (*(long *)(lVar3 + 0x10) == 0) {
LAB_1014d9100:
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c61434(lVar3);
    lVar15 = 0x5f6e6f6973736573;
    uVar13 = 0xea00000000006469;
    func_0x000100029284(0x5f6e6f6973736573);
    if ((uVar13 & 1) == 0) {
      func_0x000107c6142c(lVar3);
      goto LAB_1014d9100;
    }
    func_0x0001000bb420(*(long *)(lVar3 + 0x38) + lVar15 * 0x20,&uStack_80);
    func_0x000107c6142c(lVar3);
  }
  func_0x000107c6142c(lVar3);
  if (lStack_68 == 0) {
    func_0x000100216638(&uStack_80,0x112d387f8,&UNK_10d902650);
  }
  else {
    func_0x000107c6147c(&lStack_90,&uStack_80,puVar11 + 8,PTR___sSSN_11034da80,6);
    if ((uVar10 & 1) != 0) {
      lVar3 = lStack_90;
      func_0x000107c5fadc(lStack_90,puStack_88);
      func_0x000107c6142c(puStack_88);
      goto LAB_1014d9170;
    }
  }
  lVar3 = 0;
LAB_1014d9170:
  func_0x000107c58fc0(param_1);
  func_0x000107c61170(lVar3);
  puVar11 = PTR_PTR_1126d05a8;
  func_0x000107c61168(PTR_PTR_1126d05a8);
  func_0x000107c418f8();
  func_0x000107c61180();
  func_0x000107c54080(param_1);
  func_0x000107c61170(puVar11);
  lVar3 = 0;
  func_0x00010006a41c();
  func_0x0001045322d8();
  if (lVar3 != 0) {
    func_0x000100076d98();
    func_0x000107c61170(lVar3);
  }
  puVar14 = param_1;
  func_0x000107c556c8();
  FUN_1014d94c0();
  if (puVar14 != (undefined8 *)0x0) {
    func_0x000107c53540(param_1);
    func_0x000107c61170(puVar14);
  }
  return;
}



/* Entry: 1014d94c0; end: 1014d959b;  */

/* WARNING: Removing unreachable block (ram,0x0001014d954c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014d94c0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112da9d18);
  if (lVar1 != 0) {
    func_0x000107c440a4();
    func_0x000107c61180();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5ee30();
      func_0x000107c61170(lVar1);
      func_0x000107c610f8(PTR_PTR_1126a74e0);
      func_0x00010006c00c(lVar2,param_2);
      lVar1 = lVar2;
      FUN_1014da69c(lVar2,param_2);
      func_0x00010006c090(lVar2,param_2);
      func_0x000107c3fd10(lVar1);
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      func_0x00010006c090(lVar2,param_2);
    }
  }
  return;
}



/* Entry: 1014d959c; end: 1014d95f7; -[_TtC24SCCrashServicesImplSwift28SCSnapAirCrashReportUploader init] */

void FUN_1014d959c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCrashServicesImplSwift.SCSnapAirCrashReportUploader",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1014d95c8);
  (*pcVar1)();
}



/* Entry: 1014d95f8; end: 1014d97ab; -[_TtC24SCCrashServicesImplSwift28SCSnapAirCrashReportUploader .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1014d95f8(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da9d00));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112da9d08));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112da9d10));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112da9d18));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112da9d28));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da9d38));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112da9d20));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da9d40 + 8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da9d48));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da9d50 + 8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da9d58));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da9d60));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da9d68));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da9d70 + 8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da9d78 + 8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da9d30));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da9d80));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da9d88));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da9d90 + 8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da9d98 + 8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112da9da0 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112da9c60));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112da9c68));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112da9c70));
  return;
}



/* Entry: 1014d97ac; end: 1014d989b;  */

undefined * FUN_1014d97ac(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1014d989c);
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
    puVar3 = (undefined *)0x112d48d68;
    func_0x0001000285a8(0x112d48d68,&UNK_10d912150);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c610b4(puVar4,puVar1,uVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 1014d989c; end: 1014d98b7;  */

ulong FUN_1014d989c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1014d9a00);
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
  FUN_1014d9a00(uVar2,uVar4,0x1014c9344);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1014d99fc);
      (*pcVar1)();
    }
    FUN_1014d9a80(0,uVar2,uVar3 + 0x20,param_4,0x112da9a38,&PTR_PTR_1126a7478);
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



/* Entry: 1014d98b8; end: 1014d99ff;  */

ulong FUN_1014d98b8(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1014d9a00);
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
  FUN_1014d9a00(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1014d99fc);
      (*pcVar1)();
    }
    FUN_1014d9a80(0,uVar2,uVar3 + 0x20,param_4,param_6,param_7);
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



/* Entry: 1014d9a00; end: 1014d9a7f;  */

undefined * FUN_1014d9a00(undefined *param_1,undefined *param_2,code *param_3)

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
    (*param_3)();
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



/* Entry: 1014d9a80; end: 1014d9b9b;  */

long FUN_1014d9a80(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1014d9b98);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1014d9b9c);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1014dac00(0,param_5,param_6);
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
      FUN_1014dac00(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1014d9b94);
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



/* Entry: 1014d9b9c; end: 1014d9f97;  */

void FUN_1014d9b9c(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  code *pcVar8;
  bool bVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong *puVar18;
  long unaff_x21;
  long lVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  ulong *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined *puStack_58;
  
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar22 = param_3[1];
  if (0 < lVar22) {
    lVar15 = 0;
    do {
      lVar21 = lVar15 + 1;
      if (lVar21 < lVar22) {
        lVar19 = *param_3;
        puVar18 = (ulong *)(lVar19 + lVar21 * 0x20);
        uVar20 = *puVar18;
        puVar23 = (ulong *)(lVar19 + lVar15 * 0x20);
        if (uVar20 == *puVar23 && puVar18[1] == puVar23[1]) {
          uVar20 = 0;
        }
        else {
          func_0x000107c605b8();
        }
        lVar17 = lVar15 + 2;
        lVar21 = lVar17;
        if (lVar17 < lVar22) {
          puVar18 = puVar23 + 5;
          do {
            uVar10 = puVar18[3];
            if (uVar10 == puVar18[-1] && puVar18[4] == *puVar18) {
              if ((uVar20 & 1) != 0) goto LAB_1014d9c8c;
            }
            else {
              func_0x000107c605b8();
              lVar21 = lVar17;
              if ((((uint)uVar20 ^ (uint)uVar10) & 1) != 0) break;
            }
            lVar17 = lVar17 + 1;
            puVar18 = puVar18 + 4;
            lVar21 = lVar22;
          } while (lVar22 != lVar17);
        }
        lVar17 = lVar21;
        if ((uVar20 & 1) != 0) {
LAB_1014d9c8c:
          if (lVar17 < lVar15) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1014d9f6c);
            (*pcVar8)();
          }
          lVar21 = lVar17;
          if (lVar15 < lVar17) {
            lVar14 = lVar17 << 5;
            lVar16 = lVar15 << 5;
            lVar22 = lVar15;
            do {
              lVar17 = lVar17 + -1;
              if (lVar22 != lVar17) {
                if (lVar19 == 0) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x1014d9f8c);
                  (*pcVar8)();
                }
                puVar1 = (undefined8 *)(lVar19 + lVar16);
                lVar2 = lVar19 + lVar14;
                uVar25 = puVar1[1];
                uVar24 = *puVar1;
                uVar4 = puVar1[2];
                uVar6 = puVar1[3];
                uVar28 = *(undefined8 *)(lVar2 + -0x20);
                uVar27 = *(undefined8 *)(lVar2 + -8);
                uVar26 = *(undefined8 *)(lVar2 + -0x10);
                puVar1[1] = *(undefined8 *)(lVar2 + -0x18);
                *puVar1 = uVar28;
                puVar1[3] = uVar27;
                puVar1[2] = uVar26;
                *(undefined8 *)(lVar2 + -0x18) = uVar25;
                *(undefined8 *)(lVar2 + -0x20) = uVar24;
                *(undefined8 *)(lVar2 + -0x10) = uVar4;
                *(undefined8 *)(lVar2 + -8) = uVar6;
              }
              lVar22 = lVar22 + 1;
              lVar14 = lVar14 + -0x20;
              lVar16 = lVar16 + 0x20;
            } while (lVar22 < lVar17);
          }
        }
      }
      lVar22 = param_3[1];
      lVar19 = lVar21;
      if (lVar21 < lVar22) {
        if (SBORROW8(lVar21,lVar15)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1014d9f68);
          (*pcVar8)();
        }
        if (lVar21 - lVar15 < param_4) {
          if (SCARRY8(lVar15,param_4)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1014d9f70);
            (*pcVar8)();
          }
          lVar17 = lVar15 + param_4;
          if (lVar22 <= lVar15 + param_4) {
            lVar17 = lVar22;
          }
          if (lVar17 < lVar15) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1014d9f74);
            (*pcVar8)();
          }
          if (lVar21 != lVar17) {
            lVar16 = *param_3;
            puVar18 = (ulong *)(lVar16 + lVar21 * 0x20 + -0x20);
            lVar22 = lVar15 - lVar21;
            do {
              puVar23 = (ulong *)(lVar16 + lVar21 * 0x20);
              uVar20 = *puVar23;
              uVar10 = puVar23[1];
              lVar19 = lVar22;
              puVar23 = puVar18;
              do {
                if ((uVar20 == *puVar23 && uVar10 == puVar23[1]) ||
                   (func_0x000107c605b8(), (uVar20 & 1) == 0)) break;
                if (lVar16 == 0) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x1014d9f78);
                  (*pcVar8)();
                }
                uVar20 = puVar23[4];
                uVar10 = puVar23[5];
                uVar5 = puVar23[6];
                uVar7 = puVar23[7];
                puVar23[5] = puVar23[1];
                puVar23[4] = *puVar23;
                puVar23[7] = puVar23[3];
                puVar23[6] = puVar23[2];
                *puVar23 = uVar20;
                puVar23[1] = uVar10;
                puVar23[2] = uVar5;
                puVar23[3] = uVar7;
                puVar23 = puVar23 + -4;
                bVar9 = lVar19 != -1;
                lVar19 = lVar19 + 1;
              } while (bVar9);
              lVar21 = lVar21 + 1;
              puVar18 = puVar18 + 4;
              lVar22 = lVar22 + -1;
              lVar19 = lVar17;
            } while (lVar21 != lVar17);
          }
        }
      }
      puVar13 = puStack_58;
      if (lVar19 < lVar15) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1014d9f58);
        (*pcVar8)();
      }
      puVar11 = puStack_58;
      func_0x000107c61558();
      puVar12 = puVar13;
      if (((ulong)puVar11 & 1) == 0) {
        puVar12 = (undefined *)0x0;
        func_0x0001000a91e0(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13);
      }
      uVar20 = *(ulong *)(puVar12 + 0x10);
      puVar13 = puVar12;
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar20) {
        puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
        func_0x0001000a91e0(puVar13,uVar20 + 1,1,puVar12);
      }
      *(ulong *)(puVar13 + 0x10) = uVar20 + 1;
      *(long *)(puVar13 + uVar20 * 0x10 + 0x20) = lVar15;
      *(long *)(puVar13 + uVar20 * 0x10 + 0x28) = lVar19;
      puStack_58 = puVar13;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1014d9f90);
        (*pcVar8)();
      }
      FUN_1014d9f98(&puStack_58,*param_1,param_3);
      puVar13 = puStack_58;
      if (unaff_x21 != 0) goto LAB_1014d9f28;
      lVar22 = param_3[1];
      lVar15 = lVar19;
    } while (lVar19 < lVar22);
  }
  puVar13 = puStack_58;
  lVar22 = *param_1;
  if (lVar22 == 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x1014d9f98);
    (*pcVar8)();
  }
  puVar11 = puStack_58;
  func_0x000107c61558();
  if (((ulong)puVar11 & 1) == 0) {
    FUN_100e06d54();
  }
  puVar18 = (ulong *)(puVar13 + 0x10);
  uVar20 = *puVar18;
  while (1 < uVar20) {
    lVar15 = *param_3;
    if (lVar15 == 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1014d9f94);
      (*pcVar8)();
    }
    plVar3 = (long *)(puVar13 + uVar20 * 0x10);
    lVar21 = *plVar3;
    puVar23 = puVar18 + uVar20 * 2;
    uVar10 = puVar23[1];
    FUN_1014da200(lVar15 + lVar21 * 0x20,lVar15 + *puVar23 * 0x20,lVar15 + uVar10 * 0x20,lVar22);
    if (unaff_x21 != 0) break;
    if ((long)uVar10 < lVar21) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1014d9f5c);
      (*pcVar8)();
    }
    if (*puVar18 <= uVar20 - 2) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1014d9f60);
      (*pcVar8)();
    }
    *plVar3 = lVar21;
    plVar3[1] = uVar10;
    uVar10 = *puVar18;
    lVar15 = uVar10 - uVar20;
    if (uVar10 < uVar20) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1014d9f64);
      (*pcVar8)();
    }
    uVar20 = uVar10 - 1;
    func_0x000107c610b8(puVar23,puVar23 + 2,lVar15 * 0x10);
    *puVar18 = uVar20;
  }
LAB_1014d9f28:
  func_0x000107c6142c(puVar13);
  return;
}



/* Entry: 1014d9f98; end: 1014da1ff;  */

undefined8 FUN_1014d9f98(ulong *param_1,undefined8 param_2,long *param_3)

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
      FUN_100e06d54();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_1014da06c;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1014da1e8);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_1014da0d0:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1014da1d8);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1014da1e0);
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
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1014da1c0);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1014da1c4);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1014da1cc);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1014da1d4);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_1014da06c:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1014da1c8);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1014da1d0);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1014da1dc);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1014da1e4);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_1014da0d0;
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
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1014da1ec);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1014da1b4);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1014da200);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_1014da200(lVar9 + lVar12 * 0x20,lVar9 + *plVar1 * 0x20,lVar9 + lVar7 * 0x20,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1014da1b8);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      func_0x000107c61558();
      if ((uVar6 & 1) == 0) {
        FUN_100e06d54();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1014da1bc);
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



/* Entry: 1014da200; end: 1014da43b;  */

undefined8 FUN_1014da200(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
  lVar8 = (long)param_2 - (long)param_1;
  lVar1 = lVar8 + 0x1f;
  if (-1 < lVar8) {
    lVar1 = lVar8;
  }
  lVar1 = lVar1 >> 5;
  lVar10 = (long)param_3 - (long)param_2;
  lVar3 = lVar10 + 0x1f;
  if (-1 < lVar10) {
    lVar3 = lVar10;
  }
  lVar3 = lVar3 >> 5;
  if (lVar1 < lVar3) {
    if (((param_4 < param_1) || (param_1 + lVar1 * 4 <= param_4)) || (param_4 != param_1)) {
      func_0x000107c610b8(param_4,param_1,lVar1 << 5);
    }
    puVar7 = param_4 + lVar1 * 4;
    puVar4 = param_1;
    if (0x1f < lVar8) {
      do {
        if (param_3 <= param_2) break;
        uVar11 = *param_2;
        if ((uVar11 == *param_4 && param_2[1] == param_4[1]) ||
           (func_0x000107c605b8(), (uVar11 & 1) == 0)) {
          puVar5 = param_4 + 4;
          puVar6 = param_4;
        }
        else {
          puVar5 = param_4;
          puVar6 = param_2;
          param_2 = param_2 + 4;
        }
        param_4 = puVar5;
        if (puVar4 != puVar6) {
          uVar11 = *puVar6;
          uVar12 = puVar6[3];
          uVar2 = puVar6[2];
          puVar4[1] = puVar6[1];
          *puVar4 = uVar11;
          puVar4[3] = uVar12;
          puVar4[2] = uVar2;
        }
        puVar4 = puVar4 + 4;
      } while (param_4 < puVar7);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar3 * 4 <= param_4)) || (param_4 != param_2)) {
      func_0x000107c610b8(param_4,param_2,lVar3 << 5);
    }
    puVar6 = param_4 + lVar3 * 4;
    puVar4 = param_2;
    puVar7 = puVar6;
    if ((param_1 < param_2) && (0x1f < lVar10)) {
      do {
        puVar9 = param_2 + -4;
        puVar5 = param_3;
        while( true ) {
          param_3 = puVar5 + -4;
          puVar7 = puVar6 + -4;
          uVar11 = *puVar7;
          if ((uVar11 != param_2[-4] || puVar6[-3] != param_2[-3]) &&
             (func_0x000107c605b8(), (uVar11 & 1) != 0)) break;
          if (puVar5 != puVar6) {
            uVar11 = *puVar7;
            uVar12 = puVar6[-1];
            uVar2 = puVar6[-2];
            puVar5[-3] = puVar6[-3];
            *param_3 = uVar11;
            puVar5[-1] = uVar12;
            puVar5[-2] = uVar2;
          }
          puVar4 = param_2;
          puVar6 = puVar7;
          puVar5 = param_3;
          if (puVar7 <= param_4) goto LAB_1014da3e0;
        }
        if (puVar5 != param_2) {
          uVar11 = *puVar9;
          uVar12 = param_2[-1];
          uVar2 = param_2[-2];
          puVar5[-3] = param_2[-3];
          *param_3 = uVar11;
          puVar5[-1] = uVar12;
          puVar5[-2] = uVar2;
        }
        puVar4 = puVar9;
        puVar7 = puVar6;
      } while ((param_1 < puVar9) && (param_2 = puVar9, param_4 < puVar6));
    }
  }
LAB_1014da3e0:
  uVar2 = (long)puVar7 - (long)param_4;
  uVar11 = uVar2 + 0x1f;
  if (-1 < (long)uVar2) {
    uVar11 = uVar2;
  }
  if ((puVar4 != param_4) || ((ulong *)((long)param_4 + (uVar11 & 0xffffffffffffffe0)) <= puVar4)) {
    func_0x000107c610b8(puVar4,param_4,((long)uVar11 >> 5) << 5);
  }
  return 1;
}



/* Entry: 1014da43c; end: 1014da613;  */

undefined1  [16] FUN_1014da43c(long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = param_1;
  func_0x000107c41800();
  func_0x000107c61180();
  lVar3 = param_1;
  func_0x000107c42a38();
  if ((int)lVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1014da610);
    (*pcVar2)();
  }
  lVar3 = lVar7;
  func_0x000107c433e4();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  if (lVar3 == 0) {
    param_2 = 0xe700000000000000;
    lVar7 = 0x6e776f6e6b6e75;
  }
  else {
    lVar4 = lVar3;
    func_0x000107c4d3e4();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    lVar7 = lVar4;
    func_0x000107c5faec();
    func_0x000107c61170(lVar4);
  }
  lVar3 = param_1;
  func_0x000107c41800();
  func_0x000107c61180();
  lVar4 = param_1;
  func_0x000107c42a38();
  if (-1 < (int)lVar4) {
    lVar4 = lVar3;
    func_0x000107c433e4();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 != 0) {
      lVar3 = lVar4;
      func_0x000107c412cc();
      if ((int)lVar3 == 7) {
        func_0x0001001115a4(param_1,lVar4);
      }
      else if ((int)lVar3 == 0x11) {
        func_0x000107c318b0(param_1,lVar4);
      }
      func_0x000107c61170(lVar4);
    }
    func_0x000107c61434(param_2);
    func_0x000107c5fb78(0x5f,0xe100000000000000);
    func_0x000107c6142c(param_2);
    puVar5 = PTR___ss5Int32VN_11034ee20;
    puVar6 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30;
    func_0x000107c6057c(PTR___ss5Int32VN_11034ee20,
                        PTR___ss5Int32Vs23CustomStringConvertiblesWP_11034ee30);
    func_0x000107c61434(param_2);
    func_0x000107c5fb78(puVar5,puVar6);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(puVar6);
    auVar1._8_8_ = param_2;
    auVar1._0_8_ = lVar7;
    return auVar1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1014da614);
  (*pcVar2)();
}


