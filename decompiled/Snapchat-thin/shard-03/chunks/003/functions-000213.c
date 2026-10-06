/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1027287c4; end: 1027287d7;  */

void FUN_1027287c4(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar1,*(undefined8 *)(param_1 + 0x38));
  lVar3 = *plVar1;
  if (param_3 != 0) {
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar1 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar1 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar3,uVar2);
    return;
  }
  uVar2 = 0;
  FUN_10272b3bc(0,0x112ebad68,&PTR_PTR_1126b1ee8);
  func_0x000107c5f9e8(param_2,PTR___sSSN_11034da80,uVar2,PTR___sSSSHsWP_11034da90);
  **(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar3);
  return;
}



/* Entry: 1027287d8; end: 102728a9b;  */

undefined * FUN_1027287d8(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined1 auStack_b0 [72];
  undefined *puStack_68;
  
  puVar17 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puVar16 = (ulong *)(param_1 + 0x40);
  puStack_68 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  uVar13 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if (-uVar13 < 0x40) {
    uVar18 = ~(-1L << (-uVar13 & 0x3f));
  }
  uVar18 = uVar18 & *puVar16;
  func_0x000107c61434();
  lVar8 = 0;
  lVar9 = lVar8;
  while( true ) {
    for (; uVar18 != 0; uVar18 = uVar18 - 1 & uVar18) {
      uVar10 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar8 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar10 * 0x10);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      uVar15 = *(ulong *)(*(long *)(param_1 + 0x38) + uVar10 * 8);
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar15);
      uVar10 = uVar15;
      func_0x000107c4d8e4();
      puVar6 = PTR_PTR_1126aadf8;
      func_0x000107c610f8();
      func_0x000107c47b3c((double)uVar10);
      uVar10 = uVar15;
      func_0x000107c5c964(uVar15);
      func_0x000107c61180();
      func_0x000107c577f8(puVar6);
      func_0x000107c61170(uVar10);
      uVar10 = *(ulong *)(puVar17 + 0x10);
      if (uVar10 < *(ulong *)(puVar17 + 0x18)) {
        func_0x000107c61434(uVar3);
        func_0x000107c61174(uVar15);
      }
      else {
        func_0x000107c61434(uVar3);
        func_0x000107c61174(uVar15);
        FUN_10272a2cc(uVar10 + 1,1);
        puVar17 = puStack_68;
      }
      func_0x000107c6068c(auStack_b0,*(undefined8 *)(puVar17 + 0x28));
      puVar7 = auStack_b0;
      func_0x000107c5fb58(puVar7,uVar2,uVar3);
      func_0x000107c606a8();
      uVar14 = -1L << ((ulong)(byte)puVar17[0x20] & 0x3f);
      uVar12 = (ulong)puVar7 & (uVar14 ^ 0xffffffffffffffff);
      uVar11 = uVar12 >> 6;
      uVar10 = -1L << (uVar12 & 0x3f) &
               (*(ulong *)(puVar17 + uVar11 * 8 + 0x40) ^ 0xffffffffffffffff);
      if (uVar10 == 0) {
        bVar5 = false;
        uVar10 = 0x3f - uVar14 >> 6;
        do {
          uVar12 = uVar11 + 1;
          if ((uVar12 == uVar10) && (bVar5)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x102728a9c);
            (*pcVar4)();
          }
          uVar11 = 0;
          if (uVar12 != uVar10) {
            uVar11 = uVar12;
          }
          bVar5 = (bool)(uVar12 == uVar10 | bVar5);
        } while (*(ulong *)(puVar17 + uVar11 * 8 + 0x40) == 0xffffffffffffffff);
        uVar10 = ~*(ulong *)(puVar17 + uVar11 * 8 + 0x40);
        uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar11 << 6;
      }
      else {
        uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar12 & 0x7fffffffffffffc0;
      }
      uVar11 = uVar10 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar17 + uVar11 + 0x40) =
           1L << (uVar10 & 0x3f) | *(ulong *)(puVar17 + uVar11 + 0x40);
      puVar1 = (undefined8 *)(*(long *)(puVar17 + 0x30) + uVar10 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined **)(*(long *)(puVar17 + 0x38) + uVar10 * 8) = puVar6;
      *(long *)(puVar17 + 0x10) = *(long *)(puVar17 + 0x10) + 1;
      func_0x000107c6142c(uVar3);
      func_0x000107c61170(uVar15);
      func_0x000107c61170(uVar15);
      lVar9 = lVar8;
    }
    bVar5 = SCARRY8(lVar8,1);
    lVar8 = lVar8 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x102728a98);
      (*pcVar4)();
    }
    if ((long)(0x3f - uVar13 >> 6) <= lVar8) break;
    uVar18 = puVar16[lVar8];
  }
  FUN_10272b320(param_1,puVar16,~uVar13,lVar9,0);
  return puVar17;
}



/* Entry: 102728a9c; end: 102728b2b;  */

void FUN_102728a9c(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long *plVar2;
  
  if (param_2 != 0) {
    uVar1 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar2 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar2 = param_2;
    func_0x000107c614b0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(param_3,uVar1);
    return;
  }
  **(undefined8 **)(*(long *)(param_3 + 0x40) + 0x28) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(param_3);
  return;
}



/* Entry: 102728b2c; end: 102728ba3;  */

/* WARNING: Possible PIC construction at 0x000102728b88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102728b8c) */

void FUN_102728b2c(long param_1,undefined8 param_2,undefined8 param_3)

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
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102728ba4; end: 102728c6f;  */

void FUN_102728ba4(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar1,*(undefined8 *)(param_1 + 0x38));
  lVar3 = *plVar1;
  if (param_3 != 0) {
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar1 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar1 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar3,uVar2);
    return;
  }
  uVar2 = 0x112ebad58;
  func_0x0001000285a8(0x112ebad58,&UNK_10dad35e8);
  func_0x000107c5f9e8(param_2,PTR___sSSN_11034da80,uVar2,PTR___sSSSHsWP_11034da90);
  **(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar3);
  return;
}



/* Entry: 102728c70; end: 102728c83;  */

void FUN_102728c70(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar1,*(undefined8 *)(param_1 + 0x38));
  lVar3 = *plVar1;
  if (param_3 != 0) {
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar1 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar1 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar3,uVar2);
    return;
  }
  uVar2 = 0;
  FUN_10272b3bc(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c5f9e8(param_2,PTR___sSSN_11034da80,uVar2,PTR___sSSSHsWP_11034da90);
  **(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar3);
  return;
}



/* Entry: 102728c84; end: 102728d5f;  */

void FUN_102728c84(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar1,*(undefined8 *)(param_1 + 0x38));
  lVar3 = *plVar1;
  if (param_3 != 0) {
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar1 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar1 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar3,uVar2);
    return;
  }
  uVar2 = 0;
  FUN_10272b3bc(0,param_4,param_5);
  func_0x000107c5f9e8(param_2,PTR___sSSN_11034da80,uVar2,PTR___sSSSHsWP_11034da90);
  **(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar3);
  return;
}



/* Entry: 102728d60; end: 102728d73;  */

void FUN_102728d60(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar1,*(undefined8 *)(param_1 + 0x38));
  lVar3 = *plVar1;
  if (param_3 != 0) {
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar1 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar1 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar3,uVar2);
    return;
  }
  uVar2 = 0;
  FUN_10272b3bc(0,0x112ebac00,&PTR_PTR_1126cdb58);
  func_0x000107c5fc54(param_2,uVar2);
  **(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar3);
  return;
}



/* Entry: 102728d74; end: 102728e3f;  */

void FUN_102728d74(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar1,*(undefined8 *)(param_1 + 0x38));
  lVar3 = *plVar1;
  if (param_3 != 0) {
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar1 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar1 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar3,uVar2);
    return;
  }
  uVar2 = 0;
  FUN_10272b3bc(0,param_4,param_5);
  func_0x000107c5fc54(param_2,uVar2);
  **(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar3);
  return;
}



/* Entry: 102728e40; end: 102728fcb;  */

/* WARNING: Possible PIC construction at 0x000102728ed8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102728f24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102728f6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102728f28) */
/* WARNING: Removing unreachable block (ram,0x000102728edc) */
/* WARNING: Removing unreachable block (ram,0x000102728f70) */

void FUN_102728e40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  func_0x0001000285a8(0x112d63f00,&UNK_10d929700);
  lVar1 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 2;
  *(undefined8 *)(lVar1 + 0x10) = 1;
  *(undefined8 *)(lVar1 + 0x20) = param_3;
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  func_0x000107c61434(param_4);
  func_0x000107c5fc48(lVar1,PTR___sSSN_11034da80);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(lVar1);
  return;
}



/* Entry: 102728fcc; end: 10272911f;  */

void FUN_102728fcc(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  uVar6 = *param_1;
  uStack_48 = 0;
  puVar3 = &UNK_110541280;
  func_0x000107c613fc(&UNK_110541280,0x18,7);
  *(undefined8 **)(puVar3 + 0x10) = &uStack_48;
  puVar4 = &UNK_1105412a8;
  func_0x000107c613fc(&UNK_1105412a8,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = 0x10272b330;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcStack_58 = FUN_10272b338;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_101379b3c;
  puStack_60 = &UNK_1105412c0;
  ppuVar5 = &puStack_78;
  puStack_50 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar1 = puStack_50;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c4c754(uVar6);
  func_0x000107c60bd0(ppuVar5);
  **(undefined8 **)(*(long *)(param_2 + 0x40) + 0x28) = uStack_48;
  func_0x000107c61174();
  func_0x000107c6144c(param_2);
  uVar6 = uStack_48;
  func_0x000107c61574(puVar3);
  func_0x000107c61170(uVar6);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x67,0x15b,0x26,1);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102729120);
  (*pcVar2)();
}



/* Entry: 102729120; end: 102729213;  */

void FUN_102729120(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar2 = &uStack_70;
  if (param_1 == 0) {
    uStack_48 = 0;
    uStack_50 = 0;
    lStack_38 = 0;
    uStack_40 = 0;
  }
  else {
    func_0x000107c43638();
    func_0x000107c61180();
    if (param_1 == 0) {
      uStack_68 = 0;
      uStack_70 = 0;
      lStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      func_0x000107c60234(&uStack_70);
      func_0x000107c615e8(param_1);
    }
    uStack_48 = uStack_68;
    uStack_50 = uStack_70;
    lStack_38 = lStack_58;
    uStack_40 = uStack_60;
    if (lStack_58 != 0) {
      uVar1 = 0;
      FUN_10272b3bc(0,0x112ebad80,&PTR_PTR_1126dc8c0);
      func_0x000107c6147c(&uStack_70,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar1,6);
      uVar1 = uStack_70;
      if (((ulong)puVar2 & 1) == 0) {
        return;
      }
      FUN_102729214();
      func_0x000107c61170(uVar1);
      uVar1 = *param_2;
      *param_2 = puVar2;
      func_0x000107c61170(uVar1);
      return;
    }
  }
  FUN_10272b374(&uStack_50,0x112d387f8,&UNK_10d902650);
  return;
}



/* Entry: 102729214; end: 10272943b;  */

undefined * FUN_102729214(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long extraout_x8;
  long unaff_x20;
  long lVar10;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar2 = unaff_x20;
  func_0x000107c4f38c();
  func_0x000107c61180();
  uVar8 = param_2;
  if (lVar2 == 0) {
    func_0x000107c5faec();
    uVar8 = param_2;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  lVar3 = unaff_x20;
  func_0x000107c44f0c();
  func_0x000107c61180();
  uVar9 = uVar8;
  if (lVar3 == 0) {
    func_0x000107c5faec();
    uVar9 = uVar8;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar8);
  }
  lVar4 = unaff_x20;
  func_0x000107c5cab0();
  func_0x000107c61180();
  uVar8 = uVar9;
  if (lVar4 == 0) {
    func_0x000107c5faec();
    uVar8 = uVar9;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar9);
  }
  lVar5 = unaff_x20;
  func_0x000107c44f10();
  func_0x000107c61180();
  uVar9 = uVar8;
  if (lVar5 == 0) {
    func_0x000107c5faec();
    uVar9 = uVar8;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar8);
  }
  func_0x000107c4c07c();
  func_0x000107c61180();
  func_0x000107c5edb4(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c61170(unaff_x20);
  func_0x000107c5ed70();
  (**(code **)(lVar10 + 8))
            (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  puVar6 = PTR_PTR_1126b2038;
  func_0x000107c610f8(PTR_PTR_1126b2038);
  func_0x000107c5fadc(unaff_x20,uVar9);
  func_0x000107c6142c(uVar9);
  func_0x000107c45ab4(puVar6);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(unaff_x20);
  func_0x000107c4daec();
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c55760(puVar6);
  func_0x000107c61170(puVar7);
  return puVar6;
}



/* Entry: 10272943c; end: 10272944f;  */

void FUN_10272943c(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = (long *)(param_1 + 0x20);
  func_0x0001006732c8(plVar1,*(undefined8 *)(param_1 + 0x38));
  lVar3 = *plVar1;
  if (param_3 != 0) {
    uVar2 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar1 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar1 = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar3,uVar2);
    return;
  }
  uVar2 = 0;
  FUN_10272b3bc(0,0x112ebabf0,&PTR_PTR_1126b20f0);
  func_0x000107c5fc54(param_2,uVar2);
  **(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar3);
  return;
}



/* Entry: 102729450; end: 1027297af;  */

/* WARNING: Possible PIC construction at 0x000102729788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010272978c) */

void FUN_102729450(undefined *param_1,undefined *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 unaff_x20;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar13 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar13 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar13 = param_1;
    }
    func_0x000107c60480();
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar13 != (undefined *)0x0) {
    puVar14 = (undefined *)0x0;
    do {
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        if (*(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= puVar14) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1027296e8);
          (*pcVar1)();
        }
        puVar2 = *(undefined **)(param_1 + (long)puVar14 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar2 = puVar14;
        param_2 = param_1;
        func_0x00010271fa78();
      }
      if (SCARRY8((long)puVar14,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1027296d4);
        (*pcVar1)();
      }
      puVar14 = puVar14 + 1;
      puVar16 = puVar2;
      func_0x000107c4e7b0();
      func_0x000107c61180();
      if (puVar16 == (undefined *)0x0) {
        puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if ((ulong)PTR___swiftEmptyArrayStorage_11034f1c8 >> 0x3e != 0) goto LAB_10272969c;
LAB_102729568:
        puVar16 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
        puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        param_2 = (undefined *)0x0;
        FUN_10272b3bc(0,0x112ea3a68,&PTR_PTR_1126b2160);
        puVar3 = puVar16;
        func_0x000107c5fc54();
        func_0x000107c61170(puVar16);
        if ((ulong)puVar3 >> 0x3e == 0) goto LAB_102729568;
LAB_10272969c:
        puVar16 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar3) {
          puVar16 = puVar3;
        }
        func_0x000107c60480();
        puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      PTR___swiftEmptyArrayStorage_11034f1c8 = puVar9;
      if (puVar16 != (undefined *)0x0) {
        uVar12 = 0;
        do {
          if (((ulong)puVar3 & 0xc000000000000001) == 0) {
            if (*(ulong *)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1027296e4);
              (*pcVar1)();
            }
            uVar4 = *(ulong *)(puVar3 + uVar12 * 8 + 0x20);
            func_0x000107c61174();
            puVar11 = param_2;
          }
          else {
            uVar4 = uVar12;
            puVar11 = puVar3;
            func_0x00010271fa8c();
          }
          if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1027296e0);
            (*pcVar1)();
          }
          puVar15 = (undefined *)(uVar12 + 1);
          func_0x000107c61174();
          uVar5 = uVar4;
          func_0x000107c4e7c0();
          func_0x000107c61180();
          uVar6 = uVar5;
          func_0x000107c5faec();
          param_2 = puVar11;
          func_0x000107c61170(uVar4);
          func_0x000107c61170(uVar4);
          func_0x000107c61170(uVar5);
          puVar7 = puVar9;
          func_0x000107c61558();
          puVar8 = puVar9;
          if (((ulong)puVar7 & 1) == 0) {
            param_2 = (undefined *)(*(long *)(puVar9 + 0x10) + 1);
            puVar8 = (undefined *)0x0;
            func_0x0001000d182c(0,param_2,1,puVar9);
          }
          uVar4 = *(ulong *)(puVar8 + 0x10);
          puVar7 = (undefined *)(uVar4 + 1);
          puVar9 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar4) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
            param_2 = puVar7;
            func_0x0001000d182c(puVar9,puVar7,1,puVar8);
          }
          *(undefined **)(puVar9 + 0x10) = puVar7;
          *(ulong *)(puVar9 + uVar4 * 0x10 + 0x20) = uVar6;
          *(undefined **)(puVar9 + uVar4 * 0x10 + 0x28) = puVar11;
          uVar12 = uVar12 + 1;
        } while (puVar15 != puVar16);
      }
      func_0x000107c6142c(puVar3);
      func_0x000107c61170(puVar2);
      func_0x00010109a32c(puVar9);
      puVar2 = puVar10;
    } while (puVar14 != puVar13);
  }
  puVar10 = &UNK_110540fb8;
  func_0x000107c613fc(&UNK_110540fb8,0x18,7);
  func_0x000107c61614(puVar10 + 0x10,unaff_x20);
  puVar13 = &UNK_110541190;
  func_0x000107c613fc(&UNK_110541190,0x20,7);
  *(undefined **)(puVar13 + 0x10) = puVar10;
  *(undefined **)(puVar13 + 0x18) = puVar2;
  func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad3590,puVar13,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar13);
  return;
}



/* Entry: 1027297b0; end: 1027297cb;  */

void FUN_1027297b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x5c0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x5b8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027297cc,0,0);
  return;
}



/* Entry: 1027297cc; end: 1027298c3;  */

void FUN_1027297cc(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x5b8);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x538,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x5c8) = lVar2;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x5c0);
    *(long *)(unaff_x22 + 0x560) = lVar2;
    *(undefined8 *)(unaff_x22 + 0x568) = uVar3;
    uVar1 = 0x112ebad30;
    func_0x0001000285a8(0x112ebad30,&UNK_10dad35a8);
    func_0x000107c61418(unaff_x22 + 0x10,0,uVar1,&UNK_10dad35a0,unaff_x22 + 0x550,unaff_x22 + 0x5a8)
    ;
    *(long *)(unaff_x22 + 0x580) = lVar2;
    *(undefined8 *)(unaff_x22 + 0x588) = uVar3;
    uVar1 = 0x112ebad38;
    func_0x0001000285a8(0x112ebad38,&UNK_10dad35c0);
    func_0x000107c61418(unaff_x22 + 0x290,0,uVar1,&UNK_10dad35b8,unaff_x22 + 0x570,unaff_x22 + 0x5b0
                       );
                    /* WARNING: Could not recover jumptable at 0x00010bdbfff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_asyncLet_get_110350060)
              (unaff_x22 + 0x10,unaff_x22 + 0x5a8,FUN_1027298c4,unaff_x22 + 0x510);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001027298c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1027298c4; end: 102729907;  */

void FUN_1027298c4(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x5d0) = *(undefined8 *)(unaff_x22 + 0x5a8);
  func_0x000107c61434();
                    /* WARNING: Could not recover jumptable at 0x00010bdbfff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_get_110350060)
            (unaff_x22 + 0x290,unaff_x22 + 0x5b0,FUN_102729908,unaff_x22 + 0x510);
  return;
}



/* Entry: 102729908; end: 10272991b;  */

void FUN_102729908(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10272991c,0,0);
  return;
}



/* Entry: 10272991c; end: 102729d93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10272991c(void)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long unaff_x22;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  ulong *puVar18;
  long lStack_78;
  undefined *puStack_68;
  
  lVar5 = _DAT_112ebacb0;
  lVar11 = *(long *)(unaff_x22 + 0x5c8);
  lVar12 = *(long *)(unaff_x22 + 0x5c0);
  lVar16 = *(long *)(unaff_x22 + 0x5b0);
  lStack_78 = *(long *)(lVar12 + 0x10);
  func_0x000107c61434(lVar16);
  lVar17 = *(long *)(unaff_x22 + 0x5d0);
  if (lStack_78 == 0) {
    func_0x000107c6142c(lVar17);
  }
  else {
    puVar18 = (ulong *)(lVar12 + 0x28);
    lVar12 = lStack_78;
    do {
      uVar3 = puVar18[-1];
      uVar4 = *puVar18;
      if (*(long *)(lVar17 + 0x10) == 0) {
        func_0x000107c61434(uVar4);
LAB_102729a20:
        puStack_68 = PTR_PTR_1126aadf8;
        func_0x000107c610f8();
        func_0x000107c47b3c(0);
      }
      else {
        func_0x000107c61434(*(undefined8 *)(unaff_x22 + 0x5d0));
        func_0x000107c61434(uVar4);
        uVar7 = uVar3;
        uVar9 = uVar4;
        func_0x000100029284();
        uVar13 = *(undefined8 *)(unaff_x22 + 0x5d0);
        if ((uVar9 & 1) == 0) {
          func_0x000107c6142c(uVar13);
          goto LAB_102729a20;
        }
        puStack_68 = *(undefined **)(*(long *)(lVar17 + 0x38) + uVar7 * 8);
        func_0x000107c61174();
        func_0x000107c6142c(uVar13);
      }
      func_0x000107c61428(lVar11 + lVar5,unaff_x22 + 0x510,0x21,0);
      uVar8 = *(ulong *)(lVar11 + lVar5);
      func_0x000107c61558();
      lVar14 = *(long *)(lVar11 + lVar5);
      *(undefined8 *)(lVar11 + lVar5) = 0x8000000000000000;
      uVar7 = uVar3;
      uVar9 = uVar4;
      func_0x000100029284();
      uVar10 = (ulong)~(uint)uVar9 & 1;
      lVar1 = *(long *)(lVar14 + 0x10) + uVar10;
      if (SCARRY8(*(long *)(lVar14 + 0x10),uVar10)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102729d88);
        (*pcVar6)();
      }
      if (*(long *)(lVar14 + 0x18) < lVar1) {
        FUN_10272a2cc(lVar1,uVar8);
        uVar7 = uVar3;
        uVar8 = uVar4;
        func_0x000100029284();
        if (((uint)uVar9 & 1) != ((uint)uVar8 & 1)) goto LAB_102729d5c;
LAB_102729ad0:
        if ((uVar9 & 1) != 0) goto LAB_10272997c;
LAB_102729ad4:
        lVar1 = lVar14 + (uVar7 >> 6) * 8;
        *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar7 & 0x3f);
        puVar2 = (ulong *)(*(long *)(lVar14 + 0x30) + uVar7 * 0x10);
        *puVar2 = uVar3;
        puVar2[1] = uVar4;
        *(undefined **)(*(long *)(lVar14 + 0x38) + uVar7 * 8) = puStack_68;
        if (SCARRY8(*(long *)(lVar14 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102729d90);
          (*pcVar6)();
        }
        *(long *)(lVar14 + 0x10) = *(long *)(lVar14 + 0x10) + 1;
        func_0x000107c61434(uVar4);
      }
      else {
        if ((uVar8 & 1) != 0) goto LAB_102729ad0;
        func_0x000102729fec();
        if ((uVar9 & 1) == 0) goto LAB_102729ad4;
LAB_10272997c:
        uVar13 = *(undefined8 *)(*(long *)(lVar14 + 0x38) + uVar7 * 8);
        *(undefined **)(*(long *)(lVar14 + 0x38) + uVar7 * 8) = puStack_68;
        func_0x000107c61170(uVar13);
      }
      puVar18 = puVar18 + 2;
      *(long *)(lVar11 + lVar5) = lVar14;
      func_0x000107c614a8(unaff_x22 + 0x510);
      func_0x000107c6142c(uVar4);
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    lVar11 = *(long *)(unaff_x22 + 0x5c8);
    lVar12 = *(long *)(unaff_x22 + 0x5c0);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x5d0));
    lVar5 = _DAT_112ebacb8;
    puVar18 = (ulong *)(lVar12 + 0x28);
    do {
      uVar3 = puVar18[-1];
      uVar4 = *puVar18;
      if (*(long *)(lVar16 + 0x10) == 0) {
        func_0x000107c61434(uVar4);
        puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        func_0x000107c61434(lVar16);
        func_0x000107c61434(uVar4);
        uVar7 = uVar3;
        uVar9 = uVar4;
        func_0x000100029284();
        if ((uVar9 & 1) == 0) {
          func_0x000107c6142c(lVar16);
          puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          puVar15 = *(undefined **)(*(long *)(lVar16 + 0x38) + uVar7 * 8);
          func_0x000107c61434(puVar15);
          func_0x000107c6142c(lVar16);
        }
      }
      func_0x000107c61428(lVar11 + lVar5,unaff_x22 + 0x590,0x21,0);
      uVar8 = *(ulong *)(lVar11 + lVar5);
      func_0x000107c61558();
      lVar17 = *(long *)(lVar11 + lVar5);
      *(undefined8 *)(lVar11 + lVar5) = 0x8000000000000000;
      uVar7 = uVar3;
      uVar9 = uVar4;
      func_0x000100029284();
      uVar10 = (ulong)~(uint)uVar9 & 1;
      lVar12 = *(long *)(lVar17 + 0x10) + uVar10;
      if (SCARRY8(*(long *)(lVar17 + 0x10),uVar10)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102729d8c);
        (*pcVar6)();
      }
      if (*(long *)(lVar17 + 0x18) < lVar12) {
        func_0x00010272a568(lVar12,uVar8);
        uVar7 = uVar3;
        uVar8 = uVar4;
        func_0x000100029284();
        if (((uint)uVar9 & 1) != ((uint)uVar8 & 1)) {
LAB_102729d5c:
                    /* WARNING: Could not recover jumptable at 0x00010bdb9b24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF_11034edd0)
                    (PTR___sSSN_11034da80);
          return;
        }
LAB_102729ca4:
        if ((uVar9 & 1) != 0) goto LAB_102729b64;
LAB_102729cac:
        lVar12 = lVar17 + (uVar7 >> 6) * 8;
        *(ulong *)(lVar12 + 0x40) = *(ulong *)(lVar12 + 0x40) | 1L << (uVar7 & 0x3f);
        puVar2 = (ulong *)(*(long *)(lVar17 + 0x30) + uVar7 * 0x10);
        *puVar2 = uVar3;
        puVar2[1] = uVar4;
        *(undefined **)(*(long *)(lVar17 + 0x38) + uVar7 * 8) = puVar15;
        if (SCARRY8(*(long *)(lVar17 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102729d94);
          (*pcVar6)();
        }
        *(long *)(lVar17 + 0x10) = *(long *)(lVar17 + 0x10) + 1;
        func_0x000107c61434(uVar4);
      }
      else {
        if ((uVar8 & 1) != 0) goto LAB_102729ca4;
        func_0x00010272a15c();
        if ((uVar9 & 1) == 0) goto LAB_102729cac;
LAB_102729b64:
        uVar13 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar7 * 8);
        *(undefined **)(*(long *)(lVar17 + 0x38) + uVar7 * 8) = puVar15;
        func_0x000107c6142c(uVar13);
      }
      puVar18 = puVar18 + 2;
      *(long *)(lVar11 + lVar5) = lVar17;
      func_0x000107c614a8(unaff_x22 + 0x590);
      func_0x000107c6142c(uVar4);
      lStack_78 = lStack_78 + -1;
    } while (lStack_78 != 0);
  }
  func_0x000107c6142c(lVar16);
                    /* WARNING: Could not recover jumptable at 0x00010bdbffec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_finish_110350058)
            (unaff_x22 + 0x290,unaff_x22 + 0x5b0,FUN_102729d94,unaff_x22 + 0x510);
  return;
}



/* Entry: 102729d94; end: 102729dd3;  */

void FUN_102729d94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x102729da8,0,0);
  return;
}



/* Entry: 102729dd4; end: 102729e03;  */

void FUN_102729dd4(void)

{
  long unaff_x22;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x5c8));
                    /* WARNING: Could not recover jumptable at 0x000102729e00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102729e04; end: 102729e5b;  */

void FUN_102729e04(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102729e5c;
  plVar1[0x13] = param_3;
  plVar1[0x14] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102725c00,0,0);
  return;
}



/* Entry: 102729e5c; end: 102729eab;  */

void FUN_102729e5c(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10272b454,0,0);
  return;
}



/* Entry: 102729eac; end: 102729f03;  */

void FUN_102729eac(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102729f04;
  plVar1[0x13] = param_3;
  plVar1[0x14] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102726b60,0,0);
  return;
}



/* Entry: 102729f04; end: 102729f53;  */

void FUN_102729f04(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102729f54,0,0);
  return;
}



/* Entry: 102729f54; end: 102729f6b;  */

void FUN_102729f54(void)

{
  long unaff_x22;
  
  **(undefined8 **)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x000102729f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102729f6c; end: 102729feb;  */

undefined * FUN_102729f6c(undefined *param_1,undefined *param_2)

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
    FUN_102723fe4();
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



/* Entry: 102729fec; end: 10272a2cb;  */

void FUN_102729fec(void)

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
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8(0x112ebad48,&UNK_10dad35d0);
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_10272a0c8;
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
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c61174(uVar12);
        if (uVar8 != 0) break;
LAB_10272a0c8:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10272a15c);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_10272a134;
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
LAB_10272a134:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 10272a2cc; end: 10272a803;  */

void FUN_10272a2cc(long param_1,ulong param_2)

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
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar6 = 0x112ebad48;
  func_0x0001000285a8(0x112ebad48,&UNK_10dad35d0);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,uVar6);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_10272a534:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10272a564);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_10272a534;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar6 = *puVar2;
    uVar3 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
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
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10272a568);
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
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 10272a804; end: 10272aa43;  */

ulong FUN_10272a804(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10272a92c);
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
  FUN_102729f6c(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10272a928);
      (*pcVar1)();
    }
    func_0x00010272a92c(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 10272aa44; end: 10272ac3f;  */

undefined * FUN_10272aa44(long param_1)

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
    func_0x0001000285a8(0x112ebad48,&UNK_10dad35d0);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10272ab40);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10272ab44);
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



/* Entry: 10272ac40; end: 10272ac7b;  */

undefined8 FUN_10272ac40(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_1038c1db8)(param_2,param_1);
  return param_2;
}



/* Entry: 10272ac7c; end: 10272ac8b;  */

undefined1  [16] FUN_10272ac7c(void)

{
  return ZEXT816(0x110540fe0);
}



/* Entry: 10272ac8c; end: 10272acab;  */

void FUN_10272ac8c(void)

{
  func_0x000107c61168(&PTR_PTR_11285db50);
  return;
}



/* Entry: 10272acac; end: 10272ad23;  */

void FUN_10272acac(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x10272b478;
  plVar5[7] = lVar2;
  plVar5[8] = lVar4;
  plVar5[5] = lVar1;
  plVar5[6] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102727d40,0,0);
  return;
}



/* Entry: 10272ad24; end: 10272ad9b;  */

void FUN_10272ad24(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x10272b47c;
  plVar5[7] = lVar2;
  plVar5[8] = lVar4;
  plVar5[5] = lVar1;
  plVar5[6] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102727608,0,0);
  return;
}



/* Entry: 10272ad9c; end: 10272ae13;  */

void FUN_10272ad9c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x10272b480;
  plVar5[7] = lVar2;
  plVar5[8] = lVar4;
  plVar5[5] = lVar1;
  plVar5[6] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102727150,0,0);
  return;
}



/* Entry: 10272ae14; end: 10272ae8b;  */

void FUN_10272ae14(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10272ae8c;
  plVar5[7] = lVar2;
  plVar5[8] = lVar4;
  plVar5[5] = lVar1;
  plVar5[6] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102726dbc,0,0);
  return;
}



/* Entry: 10272ae8c; end: 10272aec7;  */

void FUN_10272ae8c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010272aec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10272aec8; end: 10272af3f;  */

void FUN_10272aec8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x10272b484;
  plVar5[10] = lVar2;
  plVar5[0xb] = lVar4;
  plVar5[8] = lVar1;
  plVar5[9] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027265e0,0,0);
  return;
}



/* Entry: 10272af40; end: 10272af6b;  */

void FUN_10272af40(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10272af6c; end: 10272afef;  */

void FUN_10272af6c(void)

{
  undefined4 uVar1;
  long *plVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long unaff_x22;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(undefined4 *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  plVar2 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x10272b488;
  *(undefined4 *)(plVar2 + 0xe) = uVar1;
  plVar2[10] = lVar4;
  plVar2[0xb] = lVar3;
  plVar2[8] = lVar5;
  plVar2[9] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102725e88,0,0);
  return;
}



/* Entry: 10272aff0; end: 10272b067;  */

void FUN_10272aff0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x10272b48c;
  plVar5[10] = lVar2;
  plVar5[0xb] = lVar4;
  plVar5[8] = lVar1;
  plVar5[9] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10272595c,0,0);
  return;
}



/* Entry: 10272b068; end: 10272b0df;  */

void FUN_10272b068(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x10272b490;
  plVar5[7] = lVar2;
  plVar5[8] = lVar4;
  plVar5[5] = lVar1;
  plVar5[6] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027253a4,0,0);
  return;
}



/* Entry: 10272b0e0; end: 10272b11f;  */

void FUN_10272b0e0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10272b120; end: 10272b19f;  */

void FUN_10272b120(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x10272b494;
  plVar5[8] = lVar4;
  plVar5[9] = lVar6;
  plVar5[6] = lVar3;
  plVar5[7] = lVar2;
  plVar5[5] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102724b00,0,0);
  return;
}



/* Entry: 10272b1a0; end: 10272b1b7;  */

long FUN_10272b1a0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 10272b1b8; end: 10272b21b;  */

void FUN_10272b1b8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x5e0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x10272b498;
  plVar3[0xb8] = lVar2;
  plVar3[0xb7] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027297cc,0,0);
  return;
}



/* Entry: 10272b21c; end: 10272b27f;  */

void FUN_10272b21c(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x280) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x10272b474;
  plVar4[2] = param_1;
  plVar3 = (long *)0xc0;
  func_0x000107c615b8();
  plVar4[3] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_102729e5c;
  plVar3[0x13] = lVar2;
  plVar3[0x14] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102725c00,0,0);
  return;
}



/* Entry: 10272b280; end: 10272b2e3;  */

void FUN_10272b280(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x280) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10272b2e4;
  plVar4[2] = param_1;
  plVar3 = (long *)0xc0;
  func_0x000107c615b8();
  plVar4[3] = (long)plVar3;
  *plVar3 = (long)plVar4;
  plVar3[1] = (long)FUN_102729f04;
  plVar3[0x13] = lVar2;
  plVar3[0x14] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102726b60,0,0);
  return;
}



/* Entry: 10272b2e4; end: 10272b31f;  */

void FUN_10272b2e4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x280));
                    /* WARNING: Could not recover jumptable at 0x00010272b31c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10272b320; end: 10272b337;  */

void FUN_10272b320(ulong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1 & 0x7fffffffffffffff);
  return;
}



/* Entry: 10272b338; end: 10272b357;  */

void FUN_10272b338(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10272b358; end: 10272b373;  */

void FUN_10272b358(long param_1,long param_2)

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



/* Entry: 10272b374; end: 10272b3b3;  */

undefined8 FUN_10272b374(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10272b3b4; end: 10272b3bb;  */

void FUN_10272b3b4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if (param_2 != 0) {
    uVar1 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    plVar2 = (long *)PTR___ss5ErrorWS_11034ee10;
    func_0x000107c613f8();
    *plVar2 = param_2;
    func_0x000107c614b0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_throwingResumeWithError_110350090)(lVar3,uVar1);
    return;
  }
  **(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar3);
  return;
}



/* Entry: 10272b3bc; end: 10272b42b;  */

void FUN_10272b3bc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10272b42c; end: 10272b49b;  */

void FUN_10272b42c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100183acc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10272b49c; end: 10272b5d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10272b49c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  puVar1 = (undefined8 *)(*(long *)(*(long *)(unaff_x20 + 0x18) + 0x10) + _DAT_112fa9a98);
  func_0x000107c61428(puVar1,auStack_78,0,0);
  uVar4 = *puVar1;
  uVar2 = puVar1[1];
  puVar3 = PTR_PTR_1126aae00;
  func_0x000107c610f8();
  func_0x000107c61434(uVar2);
  func_0x000107c5fadc(uVar4,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c47ecc();
  func_0x000107c61170(uVar4);
  uVar4 = 0;
  if (param_3 != 0) {
    func_0x000107c5fadc(param_2,param_3);
    uVar4 = param_2;
  }
  func_0x000107c579c4(puVar3);
  func_0x000107c61170(uVar4);
  uVar4 = 0;
  if (param_5 != 0) {
    func_0x000107c5fadc(param_4,param_5);
    uVar4 = param_4;
  }
  func_0x000107c58d7c(puVar3);
  func_0x000107c61170(uVar4);
  puStack_80 = puVar3;
  func_0x0001002a64a8(&puStack_80);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 10272b5d4; end: 10272b61f;  */

void FUN_10272b5d4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10272b620; end: 10272b63f; -[_TtC26VenueProfileImplementation24PlaceProfileStoryHandler nativeVenueStoryPlayer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10272b620(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ebae70));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10272b640; end: 10272b673; -[_TtC26VenueProfileImplementation24PlaceProfileStoryHandler setNativeVenueStoryPlayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10272b640(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ebae70);
  *(undefined8 *)(param_1 + _DAT_112ebae70) = param_3;
  func_0x000107c615f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10272b674; end: 10272b74f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10272b674(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ebae40);
  puVar1 = &UNK_1105413e8;
  func_0x000107c613fc(&UNK_1105413e8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  uStack_40 = 0x10272bad4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_100f11710;
  puStack_48 = &UNK_110541400;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  FUN_10272baf8(0);
  func_0x000107c614e8();
  func_0x000107c4c214(uVar3);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  return uVar3;
}



/* Entry: 10272b750; end: 10272b877;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10272b750(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar2 = 0x22;
    func_0x000107c31188();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10272b878);
      (*pcVar1)();
    }
    puVar3 = PTR_PTR_1126b1eb0;
    func_0x000107c610f8(PTR_PTR_1126b1eb0);
    func_0x000107c49530();
    func_0x000107c61170(lVar2);
    uVar4 = 10;
    func_0x000107c311cc(10);
    func_0x000107c61180();
    func_0x000107c5629c(puVar3);
    func_0x000107c61170(uVar4);
    puVar5 = PTR_PTR_1126b1ea8;
    func_0x000107c610f8(PTR_PTR_1126b1ea8);
    func_0x000107c475e4();
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar3);
  }
  return puVar5;
}



/* Entry: 10272b878; end: 10272b8ab; -[_TtC26VenueProfileImplementation24PlaceProfileStoryHandler createNativeThumbnailViewFactory] */

void FUN_10272b878(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_10272b674();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10272b8ac; end: 10272b99b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10272b8ac(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar5 = _DAT_112fa9ab8;
  lVar7 = *(long *)(*(long *)(unaff_x20 + _DAT_112ebae60) + 0x10);
  func_0x000107c61428(lVar7 + _DAT_112fa9ab8,auStack_58,0,0);
  if (*(char *)(lVar7 + lVar5) == '\x01') {
    lVar5 = unaff_x20 + _DAT_112ebae68;
    lVar4 = lVar5;
    func_0x000107c61618();
    if (lVar4 != 0) {
      lVar6 = *(long *)(lVar5 + 8);
      lVar5 = lVar4;
      func_0x000107c614f0();
      puVar1 = (undefined8 *)(lVar7 + _DAT_112fa9a98);
      func_0x000107c61428(puVar1,auStack_70,0,0);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      pcVar8 = *(code **)(lVar6 + 0x38);
      func_0x000107c61434(uVar3);
      (*pcVar8)(7,uVar2,uVar3,lVar5,lVar6);
      func_0x000107c615e8(lVar4);
      func_0x000107c6142c(uVar3);
    }
  }
  return;
}



/* Entry: 10272b99c; end: 10272b9c3; -[_TtC26VenueProfileImplementation24PlaceProfileStoryHandler notifyStoryThumbnailTapped] */

void FUN_10272b99c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10272b8ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10272b9c4; end: 10272ba23; -[_TtC26VenueProfileImplementation24PlaceProfileStoryHandler init] */

void FUN_10272b9c4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("VenueProfileImplementation.PlaceProfileStoryHandler",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10272b9f0);
  (*pcVar1)();
}



/* Entry: 10272ba24; end: 10272baab; -[_TtC26VenueProfileImplementation24PlaceProfileStoryHandler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010272ba40: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010272ba44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10272ba24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ebae40));
  return;
}



/* Entry: 10272baac; end: 10272bacb;  */

void FUN_10272baac(void)

{
  func_0x000107c61168(&PTR_PTR_11285dc60);
  return;
}



/* Entry: 10272bacc; end: 10272baf7; -[_TtC26VenueProfileImplementation24PlaceProfileStoryHandler getPrefetchedRankedStoryPlaylistForPlaceID:] */

void FUN_10272bacc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 10272baf8; end: 10272bb3b;  */

void FUN_10272baf8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebaea0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b1ea8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ebaea0 = puVar1;
  return;
}



/* Entry: 10272bb3c; end: 10272bb5f;  */

undefined8 FUN_10272bb3c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10272bb60; end: 10272bb9b;  */

void FUN_10272bb60(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010272bb98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10272bb9c; end: 10272bd17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10272bb9c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long alStack_60 [2];
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar2 + -8);
  lVar9 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = -(lVar9 + 0xfU & 0xfffffffffffffff0);
  lVar3 = *(long *)(unaff_x20 + _DAT_112ebaed8);
  func_0x000107c414e4();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar4 != 0) {
    (**(code **)(lVar11 + 0x10))(&stack0xffffffffffffffb0 + lVar1,param_1,lVar2);
    uVar8 = (ulong)*(byte *)(lVar11 + 0x50);
    uVar10 = uVar8 + 0x18 & (uVar8 ^ 0xffffffffffffffff);
    puVar5 = &UNK_110541480;
    func_0x000107c613fc(&UNK_110541480,uVar10 + lVar9,uVar8 | 7);
    *(long *)(puVar5 + 0x10) = lVar4;
    (**(code **)(lVar11 + 0x20))(puVar5 + uVar10,&stack0xffffffffffffffb0 + lVar1,lVar2);
    puVar6 = &UNK_1105414a8;
    func_0x000107c613fc(&UNK_1105414a8,0x20,7);
    *(undefined **)(puVar6 + 0x10) = &UNK_10dad3730;
    *(undefined **)(puVar6 + 0x18) = puVar5;
    func_0x000107c615f0(lVar4);
    *(undefined **)((long)alStack_60 + lVar1) = PTR___sytN_11034f1b0 + 8;
    uVar7 = 99;
    func_0x0001001ca524(99,0,0x3c,4,0,0,&UNK_10dad3740,puVar6);
    func_0x000107c615e8(lVar4);
    func_0x000107c61574(puVar6);
    func_0x000107c61574(uVar7);
  }
  return;
}



/* Entry: 10272bd18; end: 10272bde3;  */

/* WARNING: Possible PIC construction at 0x00010272bd60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010272bda8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010272bd64) */
/* WARNING: Removing unreachable block (ram,0x00010272bdd4) */
/* WARNING: Removing unreachable block (ram,0x00010272bd68) */
/* WARNING: Removing unreachable block (ram,0x00010272bdac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10272bd18(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ebaef0);
  func_0x000107c4d80c(uVar1);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10272bde4; end: 10272c197;  */

void FUN_10272bde4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ebaea8,&UNK_10dad36d0);
  puVar1 = &UNK_110541438;
  func_0x000107c613fc(&UNK_110541438,0x80,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_12);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_14);
  func_0x0001000823a8(FUN_10272c198,puVar1);
  return;
}



/* Entry: 10272c198; end: 10272c1d3;  */

void FUN_10272c198(void)

{
  long unaff_x20;
  
  func_0x00010272bf30(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 10272c1d4; end: 10272c347;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10272c1d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [16];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebaeb0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ebaeb8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ebaec0) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ebaec8) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ebaed0) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112ebaed8) = param_6;
  *(undefined8 *)(unaff_x20 + _DAT_112ebaee0) = param_7;
  *(undefined8 *)(unaff_x20 + _DAT_112ebaee8) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112ebaef0) = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112ebaef8) = param_10;
  FUN_10272ac40(param_11,unaff_x20 + _DAT_112ebaf00);
  *(undefined8 *)(unaff_x20 + _DAT_112ebaf08) = param_12;
  *(undefined8 *)(unaff_x20 + _DAT_112ebaf10) = param_13;
  *(undefined8 *)(unaff_x20 + _DAT_112ebaf18) = param_14;
  puVar1 = auStack_70;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  FUN_102686c5c(param_11);
  return puVar1;
}



/* Entry: 10272c348; end: 10272c463;  */

void FUN_10272c348(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  lVar2 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0x70) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar2;
  lVar2 = *(long *)(lVar2 + 0x40);
  *(long *)(unaff_x22 + 0x80) = lVar2;
  uVar3 = lVar2 + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar3;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x90) = uVar3;
  lVar2 = 0;
  func_0x000104638d5c();
  *(long *)(unaff_x22 + 0x98) = lVar2;
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xf;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa0) = uVar4;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xa8) = uVar3;
  uVar5 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar6 = uVar5;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar6;
  uVar6 = 0x112d45220;
  FUN_10272eb3c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar5,uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10272c464,uVar5,uVar6);
  return;
}



/* Entry: 10272c464; end: 10272c8af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10272c464(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  char *pcVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  code *pcVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  long unaff_x22;
  code *pcVar24;
  
  lVar23 = *(long *)(unaff_x22 + 0x58);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xb0));
  func_0x000107c61428(lVar23 + 0x10,unaff_x22 + 0x40,0,0);
  lVar23 = lVar23 + 0x10;
  func_0x000107c61618();
  lVar7 = _DAT_112ebaf18;
  if (lVar23 != 0) {
    lVar8 = *(long *)(lVar23 + _DAT_112ebaf18);
    func_0x000107c5194c();
    func_0x000107c61180();
    puVar9 = (undefined8 *)0x0;
    if (lVar8 != 0) {
      func_0x000107c61170();
      puVar9 = *(undefined8 **)(lVar23 + lVar7);
      func_0x000107c61174();
      func_0x000107c4ffe8();
      func_0x000107c61180();
      func_0x000107c615e8();
      func_0x000107c61170();
    }
    uVar13 = *(undefined8 *)(unaff_x22 + 0xa0);
    puVar2 = *(undefined8 **)(unaff_x22 + 0xa8);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x90);
    lVar3 = *(long *)(unaff_x22 + 0x98);
    lVar8 = *(long *)(unaff_x22 + 0x80);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x70);
    lVar5 = *(long *)(unaff_x22 + 0x78);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
    func_0x0001046392d4();
    uVar10 = *puVar9;
    func_0x000107c61174(uVar10);
    func_0x000107c61174();
    func_0x000104651350(puVar2);
    *puVar2 = 10;
    func_0x000100e39298(puVar2,uVar13);
    uVar11 = 0;
    func_0x000104652fec();
    func_0x000107c610f8();
    uVar12 = uVar13;
    func_0x000104651d90(uVar13);
    func_0x000107c61170(uVar10);
    func_0x000100e392dc(puVar2);
    pcVar20 = *(code **)(lVar5 + 0x10);
    (*pcVar20)(uVar19,uVar1,uVar18);
    pcVar24 = *(code **)(lVar5 + 0x38);
    (*pcVar24)(uVar19,0,1,uVar18);
    func_0x000107c61174(uVar12);
    func_0x000104651350(puVar2);
    func_0x00010137dd74(uVar19,(long)puVar2 + (long)*(int *)(lVar3 + 0x14));
    func_0x000100e39298(puVar2,uVar13);
    func_0x000107c610f8(uVar11);
    uVar10 = uVar13;
    func_0x000104651d90(uVar13);
    func_0x000107c61170(uVar12);
    FUN_10272ecc8(uVar19,0x112d36580,&UNK_10d9016d0);
    func_0x000100e392dc(puVar2);
    (*pcVar20)(uVar19,uVar1,uVar18);
    (*pcVar24)(uVar19,0,1,uVar18);
    func_0x000107c61174(uVar10);
    func_0x000104651350(puVar2);
    func_0x00010137dd74(uVar19,(long)puVar2 + (long)*(int *)(lVar3 + 0x1c));
    func_0x000100e39298(puVar2,uVar13);
    func_0x000107c610f8(uVar11);
    func_0x000104651d90(uVar13);
    func_0x000107c61170(uVar10);
    FUN_10272ecc8(uVar19,0x112d36580,&UNK_10d9016d0);
    func_0x000100e392dc(puVar2);
    puVar14 = PTR_PTR_1126ae560;
    func_0x000107c610f8(PTR_PTR_1126ae560);
    func_0x000107c453e4();
    puVar15 = puVar14;
    func_0x000107c43bf4();
    func_0x000107c61180();
    (*pcVar20)(uVar4,uVar1,uVar18);
    uVar21 = (ulong)*(byte *)(lVar5 + 0x50);
    uVar22 = uVar21 + 0x10 & (uVar21 ^ 0xffffffffffffffff);
    puVar16 = &UNK_110541570;
    func_0x000107c613fc(&UNK_110541570,uVar22 + lVar8,uVar21 | 7);
    (**(code **)(lVar5 + 0x20))(puVar16 + uVar22,uVar4,uVar18);
    *(code **)(unaff_x22 + 0x30) = FUN_10272ed08;
    *(undefined **)(unaff_x22 + 0x38) = puVar16;
    *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
    *(undefined **)(unaff_x22 + 0x20) = &UNK_100e38b5c;
    *(undefined **)(unaff_x22 + 0x28) = &UNK_110541588;
    lVar8 = unaff_x22 + 0x10;
    func_0x000107c60bc4(lVar8);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
    pcVar17 = "openWebPage(withUrl:uiContainer:)";
    func_0x0001000c10c0("openWebPage(withUrl:uiContainer:)");
    func_0x000107c61180();
    func_0x000107c5dc64(puVar15);
    func_0x000107c615e8(pcVar17);
    func_0x000107c60bd0(lVar8);
    func_0x000107c61170(puVar15);
    uVar18 = 0;
    func_0x0001000956f0(0);
    func_0x000107c610f8();
    func_0x000107c453e4();
    lVar8 = lVar23;
    func_0x000107c61174(lVar23);
    uVar19 = uVar13;
    func_0x000103c5d254(uVar13,puVar14,uVar6,lVar23,0,0,0,1);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(uVar18);
    func_0x000107c42c1c(*(undefined8 *)(lVar23 + lVar7));
    func_0x000107c61170(uVar19);
    func_0x000107c61170(puVar14);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(lVar8);
  }
  uVar13 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x90);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xa8));
  func_0x000107c615c0(uVar13);
  func_0x000107c615c0(uVar18);
  func_0x000107c615c0(uVar19);
                    /* WARNING: Could not recover jumptable at 0x00010272c8ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10272c8b0; end: 10272c8ef;  */

void FUN_10272c8b0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c5ed90();
    func_0x000107c4b788(param_1,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10272c8f0; end: 10272c987;  */

void FUN_10272c8f0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xf8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x100) = param_5;
  *(undefined1 *)(unaff_x22 + 0x141) = param_3;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x108) = uVar3;
  uVar3 = 0x112d45220;
  FUN_10272eb3c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x110) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x118) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10272c988,uVar2,uVar3);
  return;
}



/* Entry: 10272c988; end: 10272cbd3;  */

void FUN_10272c988(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0xf0);
  func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0xd8,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x120) = lVar6;
  if (lVar6 == 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x108));
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 0xf8);
    if ((*(byte *)(unaff_x22 + 0x141) & 1) != 0) {
      puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x000107c61168();
      func_0x000107c5a9c4();
      func_0x000107c61180();
      *(undefined **)(unaff_x22 + 0x128) = puVar1;
      puVar2 = puVar1;
      func_0x000107c5ed90();
      *(undefined **)(unaff_x22 + 0x130) = puVar2;
      lVar6 = 0x112e10020;
      func_0x0001000285a8(0x112e10020,&UNK_10d9eb238);
      func_0x000107c61534();
      *(undefined8 *)(lVar6 + 0x20) =
           *(undefined8 *)PTR__UIApplicationOpenURLOptionUniversalLinksOnly_110345a88;
      *(undefined8 *)(lVar6 + 0x18) = 2;
      *(undefined8 *)(lVar6 + 0x10) = 1;
      *(undefined **)(lVar6 + 0x40) = PTR___sSbN_11034dd40;
      *(undefined1 *)(lVar6 + 0x28) = 1;
      func_0x000107c61174();
      lVar3 = lVar6;
      func_0x000100dfa5c8();
      func_0x000107c61588(lVar6);
      FUN_10272ecc8((undefined8 *)(lVar6 + 0x20),0x112d377b8,&UNK_10d9016f0);
      uVar4 = 0;
      func_0x000100dfa6ec(0);
      uVar7 = 0x112d377a8;
      FUN_10272eb3c(0x112d377a8,&SUB_100dfa6ec,&UNK_10d901780);
      lVar6 = lVar3;
      func_0x000107c5f9dc(lVar3,uVar4,PTR___sypN_11034f1a8 + 8,uVar7);
      *(long *)(unaff_x22 + 0x138) = lVar6;
      func_0x000107c6142c(lVar3);
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x140;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_10272cbd4;
      lVar6 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar6,0);
      uVar7 = 0x112df01c0;
      func_0x0001000285a8(0x112df01c0,&UNK_10daf7f40);
      *(undefined **)(unaff_x22 + 0x98) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0xd0) = uVar7;
      *(undefined8 *)(unaff_x22 + 0xa0) = 0x42000000;
      *(undefined **)(unaff_x22 + 0xa8) = &UNK_101a67e30;
      *(undefined **)(unaff_x22 + 0xb0) = &UNK_1105414c0;
      *(long *)(unaff_x22 + 0xb8) = lVar6;
      func_0x000107c4de70(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
    uVar4 = *(undefined8 *)(unaff_x22 + 0x100);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x108));
    uVar5 = uVar4;
    func_0x000107c614f0(uVar4);
    FUN_10272e9c4(uVar7,uVar4,lVar6,uVar5);
    func_0x000107c61170(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010272cbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10272cbd4; end: 10272cc0f;  */

void FUN_10272cbd4(void)

{
  long *unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10272cc10,*(undefined8 *)(*unaff_x22 + 0x110),*(undefined8 *)(*unaff_x22 + 0x118));
  return;
}



/* Entry: 10272cc10; end: 10272cc9b;  */

void FUN_10272cc10(void)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x128);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x108));
  bVar2 = *(byte *)(unaff_x22 + 0x140);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x120);
  if ((bVar2 & 1) == 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar3 = uVar5;
    func_0x000107c614f0(uVar5);
    FUN_10272e9c4(uVar1,uVar5,uVar4,uVar3);
  }
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010272cc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10272cc9c; end: 10272cd2b;  */

void FUN_10272cc9c(undefined8 param_1,undefined8 param_2)

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
  FUN_10272eb3c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10272cd2c,uVar2,uVar3);
  return;
}



/* Entry: 10272cd2c; end: 10272cd87;  */

void FUN_10272cd2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  func_0x000107c61574(uVar1);
  func_0x000107c5ed90();
  func_0x000107c4462c(uVar2,param_2,uVar1,0,0x27,0);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010272cd84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10272cd88; end: 10272ce1f;  */

void FUN_10272cd88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_5;
  *(undefined8 *)(unaff_x22 + 0x98) = param_6;
  *(undefined8 *)(unaff_x22 + 0x80) = param_3;
  *(undefined8 *)(unaff_x22 + 0x88) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  *(undefined8 *)(unaff_x22 + 0x78) = param_2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar3;
  uVar3 = 0x112d45220;
  FUN_10272eb3c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10272ce20,uVar2,uVar3);
  return;
}



/* Entry: 10272ce20; end: 10272d083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10272ce20(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  long lVar8;
  undefined8 uVar9;
  
  lVar7 = *(long *)(unaff_x22 + 0x70);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xa0));
  func_0x000107c61428(lVar7 + 0x10,unaff_x22 + 0x40,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112ebaf08;
  if (lVar7 != 0) {
    lVar3 = *(long *)(lVar7 + _DAT_112ebaf08);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c61170();
      FUN_10272d084();
    }
    func_0x000104316d84(0);
    uVar4 = 0x36;
    func_0x000104316bcc(0x36,0,0,0);
    FUN_10272ac40(lVar7 + _DAT_112ebaf00,unaff_x22 + 0x10);
    lVar3 = unaff_x22 + 0x30;
    func_0x000107c61618();
    lVar8 = *(long *)(unaff_x22 + 0x38);
    FUN_102686c5c(unaff_x22 + 0x10);
    if (lVar3 != 0) {
      uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
      lVar5 = lVar3;
      func_0x000107c614f0(lVar3);
      (**(code **)(lVar8 + 0x28))(uVar1,uVar6,lVar5,lVar8);
      func_0x000107c615e8(lVar3);
    }
    uVar9 = *(undefined8 *)(unaff_x22 + 0x98);
    lVar3 = *(long *)(unaff_x22 + 0x78);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
    func_0x000104318244(0);
    func_0x000107c61434(uVar1);
    uVar6 = uVar4;
    func_0x000107c61174(uVar4);
    func_0x000104317c64(lVar3,uVar1,uVar4,0,0,1,1,0,0,0);
    lVar8 = _DAT_11306de50;
    func_0x000107c61428(lVar3 + _DAT_11306de50,unaff_x22 + 0x10,1,0);
    *(undefined8 *)(lVar3 + lVar8) = 0x32;
    lVar8 = _DAT_11306de58;
    func_0x000107c61428(lVar3 + _DAT_11306de58,unaff_x22 + 0x58,1,0);
    *(undefined8 *)(lVar3 + lVar8) = 0x10ca441e;
    func_0x0001003378b0(0);
    func_0x000107c610f8();
    func_0x000107c61174(lVar3);
    lVar8 = lVar7;
    func_0x000107c61174(lVar7);
    func_0x000107c615f0(uVar9);
    func_0x0001043160ec();
    func_0x000107c42c1c(*(undefined8 *)(lVar7 + lVar2));
    func_0x000107c61170(uVar9);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(lVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010272d080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10272d084; end: 10272d137;  */

/* WARNING: Possible PIC construction at 0x00010272d104: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10272d084(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ebaf08);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  func_0x000107c61170();
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + _DAT_11306dcf0);
    func_0x000107c615f0(lVar3);
    func_0x000107c61170(lVar1);
    if (lVar3 != 0) {
      func_0x000107c41864(lVar3,param_2,0);
      goto code_r0x000107c615e8;
    }
  }
  func_0x000107c4ffe8(lVar2);
  func_0x000107c61180();
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 10272d138; end: 10272d1cb;  */

void FUN_10272d138(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  uVar3 = 0x112d45220;
  FUN_10272eb3c(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10272d1cc,uVar2,uVar3);
  return;
}



/* Entry: 10272d1cc; end: 10272d297;  */

void FUN_10272d1cc(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0x28);
  lVar5 = unaff_x22 + 0x10;
  func_0x000107c61428(lVar6 + 0x10,lVar5,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61618();
  *(long *)(unaff_x22 + 0x58) = lVar6;
  if (lVar6 != 0) {
    lVar1 = *(long *)(unaff_x22 + 0x30);
    func_0x000107c5d064();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
    *(long *)(unaff_x22 + 0x60) = lVar5;
    plVar3 = (long *)0xf0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x68) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_10272d298;
    plVar3[0x14] = lVar5;
    plVar3[0x15] = lVar6;
    plVar3[0x13] = lVar2;
    lVar5 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
    uVar4 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar3[0x16] = uVar4;
    lVar5 = 0;
    func_0x000107c5ede0();
    plVar3[0x17] = lVar5;
    lVar5 = *(long *)(lVar5 + -8);
    plVar3[0x18] = lVar5;
    uVar4 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar3[0x19] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10272d528,0,0);
    return;
  }
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010272d294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10272d298; end: 10272d2eb;  */

void FUN_10272d298(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x60);
  *(undefined8 *)(lVar2 + 0x70) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x68));
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10272d2ec,*(undefined8 *)(lVar2 + 0x48),*(undefined8 *)(lVar2 + 0x50));
  return;
}



/* Entry: 10272d2ec; end: 10272d3a3;  */

void FUN_10272d2ec(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  if (*(long *)(unaff_x22 + 0x70) != 0) {
    lVar1 = *(long *)(unaff_x22 + 0x30);
    func_0x000107c4eb6c();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
    *(long *)(unaff_x22 + 0x78) = param_2;
    plVar3 = (long *)0x80;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x80) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_10272d3a4;
    lVar1 = *(long *)(unaff_x22 + 0x58);
    plVar3[0xc] = param_2;
    plVar3[0xd] = lVar1;
    plVar3[0xb] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_10272d85c,0,0);
    return;
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010272d3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10272d3a4; end: 10272d3f7;  */

void FUN_10272d3a4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x78);
  *(undefined8 *)(lVar2 + 0x88) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x80));
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_10272d3f8,*(undefined8 *)(lVar2 + 0x48),*(undefined8 *)(lVar2 + 0x50));
  return;
}



/* Entry: 10272d3f8; end: 10272d497;  */

void FUN_10272d3f8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  puVar1 = PTR_PTR_1126b20c8;
  func_0x000107c61168(PTR_PTR_1126b20c8);
  func_0x000107c4e7cc();
  func_0x000107c61180();
  FUN_10272da40();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010272d494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10272d498; end: 10272d527;  */

void FUN_10272d498(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb0) = uVar1;
  lVar2 = 0;
  func_0x000107c5ede0();
  *(long *)(unaff_x22 + 0xb8) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0xc0) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 200) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10272d528,0,0);
  return;
}



/* Entry: 10272d528; end: 10272d6df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10272d528(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0xa8) + _DAT_112ebaed0);
  func_0x000107c5b034();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xd0) = lVar2;
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    if (*(long *)(unaff_x22 + 0xa0) == 0) {
      func_0x000107c615e8(lVar2);
    }
    else {
      uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
      lVar1 = *(long *)(unaff_x22 + 0xc0);
      uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
      func_0x000107c5edd0(uVar6,*(undefined8 *)(unaff_x22 + 0x98));
      (**(code **)(lVar1 + 0x30))(uVar6,1,uVar5);
      if ((int)uVar6 != 1) {
        (**(code **)(*(long *)(unaff_x22 + 0xc0) + 0x20))
                  (*(undefined8 *)(unaff_x22 + 200),*(undefined8 *)(unaff_x22 + 0xb0),
                   *(undefined8 *)(unaff_x22 + 0xb8));
        puVar3 = PTR_PTR_1126b20c0;
        func_0x000107c61168();
        puVar4 = puVar3;
        func_0x000107c5ed90();
        *(undefined **)(unaff_x22 + 0xd8) = puVar4;
        *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
        *(long *)(unaff_x22 + 0x10) = unaff_x22;
        *(code **)(unaff_x22 + 0x18) = FUN_10272d6e0;
        lVar1 = unaff_x22 + 0x10;
        func_0x000107c61448(lVar1,1);
        uVar5 = 0x112d9f9b0;
        func_0x0001000285a8(0x112d9f9b0,&UNK_10d9b8350);
        *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
        *(undefined8 *)(unaff_x22 + 0x88) = uVar5;
        *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
        *(undefined **)(unaff_x22 + 0x60) = &UNK_10144fa88;
        *(undefined **)(unaff_x22 + 0x68) = &UNK_110541600;
        *(long *)(unaff_x22 + 0x70) = lVar1;
        func_0x000106879d48(puVar3,puVar4,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
        return;
      }
      uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
      func_0x000107c615e8(lVar2);
      FUN_10272ecc8(uVar5,0x112d36580,&UNK_10d9016d0);
    }
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 200));
  func_0x000107c615c0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010272d614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}


