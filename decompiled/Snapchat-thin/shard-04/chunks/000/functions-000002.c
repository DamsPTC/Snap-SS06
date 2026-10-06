/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102f3c3fc; end: 102f3c41b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f3c3fc(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  undefined *puVar22;
  undefined8 uVar23;
  undefined **ppuVar24;
  long unaff_x20;
  undefined8 uVar25;
  undefined8 *puVar26;
  ulong uVar27;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  pcVar6 = *(code **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  uVar4 = *(ulong *)(unaff_x20 + 0x28);
  uVar2 = *(ulong *)(unaff_x20 + 0x30);
  puVar22 = *(undefined **)(unaff_x20 + 0x38);
  if (pcVar6 == (code *)0x0) {
    return;
  }
  func_0x000107c6157c(uVar3);
  (*pcVar6)(param_1);
  func_0x000107c61428(lVar1 + 0x10,auStack_78,0,0);
  lVar7 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar7 == 0) {
code_r0x000102f32224:
    func_0x000100d2bf90(pcVar6,uVar3);
    return;
  }
  lVar21 = *(long *)(lVar7 + 0x78);
  func_0x000107c61174();
  func_0x000107c61574(lVar7);
  uVar23 = *(undefined8 *)(lVar21 + _DAT_112ff5e38);
  func_0x000107c6157c(uVar23);
  func_0x000107c61170(lVar21);
  func_0x0001000d224c(&puStack_a0);
  func_0x000107c61574(uVar23);
  uVar23 = uStack_98;
  puVar5 = puStack_a0;
  if (puStack_a0 == (undefined *)0x0) goto code_r0x000102f32224;
  uVar27 = uVar4 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar27 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar27 == 0) {
    func_0x000107c615e8(puStack_a0);
    goto code_r0x000102f32224;
  }
  if (param_1 >> 0x3e == 0) {
    uVar27 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar27 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar27 = param_1;
    }
    func_0x000107c60480();
  }
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar27 != 0) {
    puStack_a0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar19 = uVar27 & ((long)uVar27 >> 0x3f ^ 0xffffffffffffffffU);
    func_0x000100403514(0,uVar19,0);
    if ((long)uVar27 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102f325e0);
      (*pcVar6)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      puVar26 = (undefined8 *)(param_1 + 0x20);
      do {
        puVar14 = puStack_a0;
        uVar11 = *puVar26;
        func_0x000107c61174();
        func_0x000107c61174();
        uVar25 = uVar11;
        func_0x000107c5d984();
        func_0x000107c61180();
        uVar12 = uVar25;
        func_0x000107c5faec();
        uVar10 = uVar19;
        func_0x000107c61170(uVar11);
        func_0x000107c61170(uVar11);
        func_0x000107c61170(uVar25);
        uVar9 = *(ulong *)(puVar14 + 0x10);
        uVar8 = uVar9 + 1;
        puStack_a0 = puVar14;
        if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar9) {
          uVar10 = uVar8;
          func_0x000100403514(1 < *(ulong *)(puVar14 + 0x18),uVar8,1);
        }
        *(ulong *)(puStack_a0 + 0x10) = uVar8;
        *(undefined8 *)(puStack_a0 + uVar9 * 0x10 + 0x20) = uVar12;
        *(ulong *)(puStack_a0 + uVar9 * 0x10 + 0x28) = uVar19;
        uVar27 = uVar27 - 1;
        uVar19 = uVar10;
        puVar14 = puStack_a0;
        puVar26 = puVar26 + 1;
      } while (uVar27 != 0);
    }
    else {
      uVar19 = 0;
      do {
        puVar14 = puStack_a0;
        uVar8 = uVar19;
        uVar20 = param_1;
        FUN_102f45034();
        uVar9 = uVar8;
        func_0x000107c615f0();
        func_0x000107c5d984();
        func_0x000107c61180();
        uVar10 = uVar9;
        func_0x000107c5faec();
        func_0x000107c615ec(uVar8,2);
        func_0x000107c61170(uVar9);
        uVar8 = *(ulong *)(puVar14 + 0x10);
        puStack_a0 = puVar14;
        if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar8) {
          func_0x000100403514(1 < *(ulong *)(puVar14 + 0x18),uVar8 + 1,1);
        }
        uVar19 = uVar19 + 1;
        *(ulong *)(puStack_a0 + 0x10) = uVar8 + 1;
        *(ulong *)(puStack_a0 + uVar8 * 0x10 + 0x20) = uVar10;
        *(ulong *)(puStack_a0 + uVar8 * 0x10 + 0x28) = uVar20;
        puVar14 = puStack_a0;
      } while (uVar27 != uVar19);
    }
  }
  puVar13 = puVar14;
  func_0x000100403a6c();
  func_0x000107c6142c(puVar14);
  if (*(ulong *)(puVar13 + 0x10) >> 3 < *(ulong *)(puVar22 + 0x10)) {
    func_0x000107c61434(puVar13);
    puVar14 = puVar22;
    func_0x000101baba54(puVar22,puVar13);
    ppuVar24 = *(undefined ***)(puVar14 + 0x10);
    if (ppuVar24 != (undefined **)0x0) goto code_r0x000102f32314;
code_r0x000102f3237c:
    func_0x000107c6142c(puVar14);
    ppuVar15 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_a0 = puVar13;
    func_0x000107c61434(puVar13);
    func_0x0001012eef50(puVar22);
    ppuVar24 = *(undefined ***)(puStack_a0 + 0x10);
    puVar14 = puStack_a0;
    if (ppuVar24 == (undefined **)0x0) goto code_r0x000102f3237c;
code_r0x000102f32314:
    ppuVar15 = ppuVar24;
    func_0x00010109b448(ppuVar24,0);
    ppuVar16 = &puStack_a0;
    func_0x00010109b930(ppuVar16,ppuVar15 + 4,ppuVar24,puVar14);
    func_0x00010109bac0(puStack_a0,uStack_98,uStack_90,uStack_88,uStack_80);
    if (ppuVar16 != ppuVar24) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102f32358);
      (*pcVar6)();
    }
  }
  if (*(ulong *)(puVar22 + 0x10) >> 3 < *(ulong *)(puVar13 + 0x10)) {
    func_0x000107c61434(puVar22);
    puVar14 = puVar13;
    func_0x000101baba54(puVar13,puVar22);
    func_0x000107c6142c(puVar13);
    ppuVar24 = *(undefined ***)(puVar14 + 0x10);
    if (ppuVar24 != (undefined **)0x0) goto code_r0x000102f323c4;
code_r0x000102f32434:
    func_0x000107c6142c(puVar14);
    ppuVar16 = (undefined **)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_a0 = puVar22;
    func_0x000107c61434(puVar22);
    func_0x0001012eef50(puVar13);
    func_0x000107c6142c(puVar13);
    ppuVar24 = *(undefined ***)(puStack_a0 + 0x10);
    puVar14 = puStack_a0;
    if (ppuVar24 == (undefined **)0x0) goto code_r0x000102f32434;
code_r0x000102f323c4:
    ppuVar16 = ppuVar24;
    func_0x00010109b448(ppuVar24,0);
    ppuVar17 = &puStack_a0;
    func_0x00010109b930(ppuVar17,ppuVar16 + 4,ppuVar24,puVar14);
    func_0x00010109bac0(puStack_a0,uStack_98,uStack_90,uStack_88,uStack_80);
    if (ppuVar17 != ppuVar24) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102f32408);
      (*pcVar6)();
    }
  }
  func_0x000107c61428(lVar1 + 0x10,&puStack_a0,0,0);
  lVar7 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar7 != 0) {
    lVar21 = *(long *)(lVar7 + 0xb0);
    if (lVar21 == 0) {
      func_0x000107c61574();
    }
    else {
      func_0x000107c61174();
      lVar18 = lVar21;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar21);
      func_0x000107c61574(lVar7);
      if (lVar18 != 0) {
        uVar25 = *(undefined8 *)(lVar18 + _DAT_112f29c98);
        func_0x000107c61170(lVar18);
        goto code_r0x000102f324c4;
      }
    }
  }
  uVar25 = 0;
code_r0x000102f324c4:
  puVar22 = ppuVar15[2];
  func_0x000107c61574(ppuVar15);
  if ((puVar22 == (undefined *)0x0) && (ppuVar16[2] == (undefined *)0x0)) {
    func_0x000100d2bf90(pcVar6,uVar3);
    func_0x000107c61574(ppuVar16);
  }
  else {
    puVar22 = &UNK_1105ead60;
    func_0x000107c613fc(&UNK_1105ead60,0x48,7);
    *(undefined ***)(puVar22 + 0x10) = ppuVar16;
    *(undefined8 *)(puVar22 + 0x20) = uVar23;
    *(undefined **)(puVar22 + 0x18) = puVar5;
    *(ulong *)(puVar22 + 0x28) = uVar4;
    *(ulong *)(puVar22 + 0x30) = uVar2;
    *(undefined8 *)(puVar22 + 0x38) = uVar25;
    *(long *)(puVar22 + 0x40) = lVar1;
    func_0x000107c615f0(puVar5);
    func_0x000107c61434(uVar2);
    func_0x000107c6157c(lVar1);
    uVar23 = 3;
    func_0x0001001ca524(3,0,0x90,4,0,0,&UNK_10db65ce8,puVar22,PTR___sytN_11034f1b0 + 8);
    func_0x000100d2bf90(pcVar6,uVar3);
    func_0x000107c61574(puVar22);
    func_0x000107c61574(uVar23);
  }
  func_0x000107c615e8(puVar5);
  return;
}



/* Entry: 102f3c41c; end: 102f3c453;  */

void FUN_102f3c41c(void)

{
  long unaff_x20;
  
  FUN_102f34ee0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38),
                *(undefined1 *)(unaff_x20 + 0x39),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 102f3c454; end: 102f3c463;  */

void FUN_102f3c454(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102f3c464; end: 102f3c4f7;  */

void FUN_102f3c464(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lVar8;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  lVar8 = *(long *)(unaff_x20 + 0x40);
  plVar7 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = 0x102f3cab8;
  plVar7[0x14] = lVar6;
  plVar7[0x15] = lVar8;
  plVar7[0x12] = lVar5;
  plVar7[0x13] = lVar3;
  plVar7[0x10] = lVar4;
  plVar7[0x11] = lVar2;
  plVar7[0xf] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f32604,0,0);
  return;
}



/* Entry: 102f3c4f8; end: 102f3c4ff;  */

void FUN_102f3c4f8(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc();
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102f3c500; end: 102f3c527;  */

void FUN_102f3c500(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1]);
  return;
}



/* Entry: 102f3c528; end: 102f3c5bb;  */

void FUN_102f3c528(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  int *piVar10;
  long unaff_x20;
  long lVar11;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  lVar11 = *(long *)(unaff_x20 + 0x40);
  plVar9 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = 0x102f3cabc;
  plVar9[3] = lVar6;
  plVar9[4] = lVar11;
  plVar9[2] = lVar3;
  func_0x000107c614f0(uVar7);
  piVar10 = *(int **)(lVar4 + 0x60);
  iVar1 = *piVar10;
  plVar8 = (long *)(ulong)(uint)piVar10[1];
  func_0x000107c615b8();
  plVar9[5] = (long)plVar8;
  *plVar8 = (long)plVar9;
  plVar8[1] = (long)FUN_102f318a8;
                    /* WARNING: Could not recover jumptable at 0x000102f318a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar10))(uVar2,uVar5,0,0,uVar7,lVar4);
  return;
}



/* Entry: 102f3c5bc; end: 102f3c5c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f3c5bc(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_60;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + 0x98);
    func_0x000107c61174();
    func_0x000107c61574(lVar2);
    uVar5 = *(undefined8 *)(lVar4 + _DAT_112febe38);
    func_0x000107c6157c(uVar5);
    func_0x000107c61170(lVar4);
    uStack_60 = 0x4000000000000000;
    uStack_98 = uVar1;
    uStack_90 = uVar3;
    func_0x000107c61434(uVar3);
    func_0x000107c5f1ec(&uStack_98);
    func_0x000107c61574(uVar5);
    func_0x0001012bcff0(&uStack_98);
  }
  return;
}



/* Entry: 102f3c5c8; end: 102f3c617;  */

void FUN_102f3c5c8(void)

{
  func_0x000102f31314();
  return;
}



/* Entry: 102f3c618; end: 102f3c62f;  */

void FUN_102f3c618(void)

{
  long unaff_x20;
  
  (*(code *)0x102f3662c)
            (*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
             *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
             *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
             *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
             *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
             *(undefined1 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 102f3c630; end: 102f3c68b;  */

void FUN_102f3c630(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102f3c68c; end: 102f3c697;  */

void FUN_102f3c68c(void)

{
  long unaff_x20;
  
  (*(code *)0x102f3681c)
            (*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
             *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
             *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
             *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
             *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
             *(undefined1 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 102f3c698; end: 102f3c6e7;  */

void FUN_102f3c698(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
             *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
             *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
             *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
             *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
             *(undefined1 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 102f3c6e8; end: 102f3c6ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f3c6e8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = lVar1 + _DAT_112f29b40;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar3 = 0;
    FUN_102f478d8(0);
    lVar4 = lVar2;
    func_0x000107c61480(lVar2,uVar3);
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + _DAT_112f29e38) == 0) {
        if (*(code **)(lVar4 + _DAT_112f29e58) != (code *)0x0) {
          (**(code **)(lVar4 + _DAT_112f29e58))();
        }
      }
      else if (*(long *)(lVar4 + _DAT_112f29e50) != 0) {
        func_0x000107c42018();
      }
      func_0x000107c61170(lVar1);
      lVar1 = lVar2;
      goto LAB_102f40e84;
    }
    func_0x000107c61170(lVar2);
  }
  puVar5 = &UNK_1105eb218;
  func_0x000107c613fc(&UNK_1105eb218,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,lVar1);
  puVar6 = &UNK_1105eb6a8;
  func_0x000107c613fc(&UNK_1105eb6a8,0x28,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined8 *)(puVar6 + 0x18) = 0x102f40ea8;
  *(undefined8 *)(puVar6 + 0x20) = 0;
  uStack_58 = 0x102f41970;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_1000f6b44;
  puStack_60 = &UNK_1105eb6c0;
  ppuVar7 = &puStack_78;
  puStack_50 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c61574(puStack_50);
  func_0x0001000d76cc(&UNK_10db65dc0,ppuVar7);
  func_0x000107c60bd0(ppuVar7);
LAB_102f40e84:
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 102f3c6f0; end: 102f3c743;  */

void FUN_102f3c6f0(void)

{
  long unaff_x20;
  
  FUN_102f30d48(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),0x102f3cad8,
                &UNK_1105eb1b0);
  return;
}



/* Entry: 102f3c744; end: 102f3c74b;  */

void FUN_102f3c744(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  ppuVar4 = &puStack_70;
  if (lVar1 != 0) {
    puVar2 = &UNK_1105eaea0;
    func_0x000107c613fc(&UNK_1105eaea0,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,lVar1);
    puVar3 = &UNK_1105eb170;
    func_0x000107c613fc(&UNK_1105eb170,0x28,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    *(undefined8 *)(puVar3 + 0x20) = param_2;
    uStack_50 = 0x102f3cadc;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000f6b44;
    puStack_58 = &UNK_1105eb188;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar2 = puStack_48;
    func_0x000107c6157c(param_2);
    func_0x000107c61574(puVar2);
    func_0x0001000d76cc(&UNK_10db65af0,ppuVar4);
    func_0x000107c60bd0(ppuVar4);
  }
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    func_0x000107c57194();
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 102f3c74c; end: 102f3c7b3;  */

void FUN_102f3c74c(void)

{
  FUN_102f3074c();
  return;
}



/* Entry: 102f3c7b4; end: 102f3c85f;  */

void FUN_102f3c7b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  lVar2 = param_5;
  func_0x000102f3a434(param_5,param_6);
  if (SUB168(SEXT816(lVar2) * SEXT816(1000),8) == lVar2 * 1000 >> 0x3f) {
    (*pcVar1)(param_1,param_2,param_3,param_4,lVar2 * 1000,param_5,param_6,param_7,param_8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f3c860);
  (*pcVar1)();
}



/* Entry: 102f3c860; end: 102f3c8e7;  */

undefined8 FUN_102f3c860(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x20))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 102f3c8e8; end: 102f3c943;  */

void FUN_102f3c8e8(void)

{
  long unaff_x20;
  
  FUN_102f361fc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined1 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 102f3c944; end: 102f3c97b;  */

void FUN_102f3c944(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102f3c97c; end: 102f3cae3;  */

void FUN_102f3c97c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar3;
  uVar3 = 0x112d45220;
  FUN_102f3bf10(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102f3280c,uVar2,uVar3);
  return;
}



/* Entry: 102f3cae4; end: 102f3cbab; -[_TtC18SCCalendarPageImplP33_A05B49D7A3ADB9A08F99520C091C545E44CalendarUserActionHandlerFactoryProviderImpl createUserActionHandlerWithPresentingVC:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f3cae4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + _DAT_112f29a38);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c5d8c8();
  func_0x000107c61180();
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c40c04(lVar1,param_2,param_3);
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    lVar1 = lVar2;
    func_0x000107c5c734(lVar2);
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 102f3cbac; end: 102f3cc0b; -[_TtC18SCCalendarPageImplP33_A05B49D7A3ADB9A08F99520C091C545E44CalendarUserActionHandlerFactoryProviderImpl init] */

void FUN_102f3cbac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCalendarPageImpl.CalendarUserActionHandlerFactoryProviderImpl",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f3cbd8);
  (*pcVar1)();
}



/* Entry: 102f3cc0c; end: 102f3cc1b; -[_TtC18SCCalendarPageImplP33_A05B49D7A3ADB9A08F99520C091C545E44CalendarUserActionHandlerFactoryProviderImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f3cc0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f29a38));
  return;
}



/* Entry: 102f3cc1c; end: 102f3ccd7;  */

void FUN_102f3cc1c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 102f3ccd8; end: 102f3ccf7;  */

void FUN_102f3ccd8(void)

{
  func_0x000107c61168(&PTR_PTR_1128ac568);
  return;
}



/* Entry: 102f3ccf8; end: 102f3ccff;  */

void FUN_102f3ccf8(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102f3cd00; end: 102f3cd9f;  */

void FUN_102f3cd00(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102f3cda0; end: 102f3ce0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f3cda0(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = 0;
  FUN_102f3ccd8();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112f29a38) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c61174(uVar5);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 102f3ce10; end: 102f3cf27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f3ce10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f29b38) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112f29b40,0);
  *(undefined1 *)(unaff_x20 + _DAT_112f29b48) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f29b50);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f29b58) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f29b60) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f29b68) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f29b70);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f29b78);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f29b80);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102f3cf28; end: 102f3cf47; -[SCCalendarPagePresenterImpl presentedViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f3cf28(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112f29b40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102f3cf48; end: 102f3cf57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f3cf48(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakLoadStrong_11034f590)(unaff_x20 + _DAT_112f29b40);
  return;
}



/* Entry: 102f3cf58; end: 102f3d07b;  */

void FUN_102f3cf58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c610f8();
  func_0x000102f3cfa0(param_1,param_2,param_3);
  return;
}



/* Entry: 102f3d07c; end: 102f3d0d7; -[SCCalendarPagePresenterImpl initWithCreationPageProvider:detailPageProvider:listPageProvider:] */

void FUN_102f3d07c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000102f3cfa0(param_3,param_4,param_5);
  return;
}



/* Entry: 102f3d0d8; end: 102f3d0f7;  */

void FUN_102f3d0d8(void)

{
  func_0x000107c61168(&PTR_PTR_1128ac628);
  return;
}



/* Entry: 102f3d0f8; end: 102f3d5cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f3d0f8(long param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
                  undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar4 = param_1 + _DAT_112f29b40;
    func_0x000107c61618();
    if (lVar4 == 0) {
      if ((*(byte *)(param_1 + _DAT_112f29b48) & 1) == 0) {
        if (param_5 == 0) {
          puVar5 = &UNK_1105eb218;
          func_0x000107c613fc(&UNK_1105eb218,0x18,7);
          func_0x000107c61614(puVar5 + 0x10,param_1);
          puVar6 = &UNK_1105eb888;
          func_0x000107c613fc(&UNK_1105eb888,0x28,7);
          *(undefined **)(puVar6 + 0x10) = puVar5;
          *(undefined8 *)(puVar6 + 0x18) = 0x102f41554;
          *(undefined8 *)(puVar6 + 0x20) = param_6;
          FUN_102f478d8(0);
          func_0x000107c610f8();
          func_0x000107c614f0(param_2);
          func_0x000107c61580(param_6,2);
          func_0x000107c615f0();
          func_0x000102f477d8();
        }
        else {
          func_0x000107c6157c(param_6);
          param_2 = param_5;
        }
        uVar9 = *(undefined8 *)(param_1 + _DAT_112f29b38);
        *(ulong *)(param_1 + _DAT_112f29b38) = param_4;
        func_0x000107c61174(param_5);
        func_0x000107c615f0(param_4);
        func_0x000107c615e8(uVar9);
        uVar7 = param_4;
        func_0x000107c50648();
        if ((int)uVar7 == 0) {
          func_0x000107c3e2c0(param_4);
          puVar5 = &UNK_1105eb218;
          func_0x000107c613fc(&UNK_1105eb218,0x18,7);
          func_0x000107c61614(puVar5 + 0x10,param_1);
          puVar6 = &UNK_1105eb8b0;
          func_0x000107c613fc(&UNK_1105eb8b0,0x20,7);
          *(undefined **)(puVar6 + 0x10) = puVar5;
          *(long *)(puVar6 + 0x18) = param_2;
          uStack_88 = 0x102f41568;
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          puStack_98 = &UNK_1000f6b44;
          puStack_90 = &UNK_1105eb8c8;
          ppuVar8 = &puStack_a8;
          puStack_80 = puVar6;
          func_0x000107c60bc4(ppuVar8);
          puVar5 = puStack_80;
          func_0x000107c61174(param_2);
          func_0x000107c61574(puVar5);
          func_0x0001000d76cc(&UNK_10db65dc0,ppuVar8);
          func_0x000107c60bd0(ppuVar8);
          func_0x000107c61170(param_2);
        }
        else {
          uVar7 = param_4;
          func_0x000107c61150(param_4,PTR_s_respondsToSelector__11262c7e0,
                              PTR_s_attachUI_completion__1125a0c10);
          if ((uVar7 & 1) != 0) {
            puVar5 = &UNK_1105eb218;
            func_0x000107c613fc(&UNK_1105eb218,0x18,7);
            func_0x000107c61614(puVar5 + 0x10,param_1);
            puVar6 = &UNK_1105eb900;
            func_0x000107c613fc(&UNK_1105eb900,0x20,7);
            *(undefined **)(puVar6 + 0x10) = puVar5;
            *(long *)(puVar6 + 0x18) = param_2;
            uStack_88 = 0x102f41570;
            puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_a0 = 0x42000000;
            puStack_98 = &UNK_1000b0c7c;
            puStack_90 = &UNK_1105eb918;
            ppuVar8 = &puStack_a8;
            puStack_80 = puVar6;
            func_0x000107c60bc4(ppuVar8);
            puVar3 = puStack_80;
            func_0x000107c6157c(puVar5);
            func_0x000107c61174(param_2);
            func_0x000107c6157c(puVar6);
            func_0x000107c61574(puVar3);
            func_0x000107c3e2c4(param_4);
            func_0x000107c60bd0(ppuVar8);
            func_0x000107c61574(puVar5);
            func_0x000107c61574(puVar6);
          }
          func_0x000107c61170(param_1);
          param_1 = param_2;
        }
        func_0x000107c61170(param_1);
        func_0x000107c61574(param_6);
        return;
      }
    }
    else {
      func_0x000107c61170();
    }
    puVar5 = &UNK_1105eb218;
    func_0x000107c613fc(&UNK_1105eb218,0x18,7);
    func_0x000107c61614(puVar5 + 0x10,param_1);
    func_0x0001000bb420(param_3,&puStack_a8);
    puVar6 = &UNK_1105eb950;
    func_0x000107c613fc(&UNK_1105eb950,0x50,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    *(long *)(puVar6 + 0x18) = param_2;
    func_0x000100102924(&puStack_a8,puVar6 + 0x20);
    *(ulong *)(puVar6 + 0x40) = param_4;
    *(long *)(puVar6 + 0x48) = param_5;
    puVar1 = (undefined8 *)(param_1 + _DAT_112f29b50);
    uVar9 = *puVar1;
    uVar2 = puVar1[1];
    *puVar1 = 0x102f41578;
    puVar1[1] = puVar6;
    func_0x000107c61174(param_5);
    func_0x000107c615f0(param_4);
    func_0x000107c6157c(puVar5);
    func_0x000107c615f0(param_2);
    func_0x000100d2c664(uVar9,uVar2);
    func_0x000107c61574(puVar5);
    if (*(char *)(param_1 + _DAT_112f29b48) != '\x01') {
      puVar5 = &UNK_1105eb218;
      func_0x000107c613fc(&UNK_1105eb218,0x18,7);
      func_0x000107c61614(puVar5 + 0x10,param_1);
      puVar6 = &UNK_1105eb978;
      func_0x000107c613fc(&UNK_1105eb978,0x28,7);
      *(undefined **)(puVar6 + 0x10) = puVar5;
      *(code **)(puVar6 + 0x18) = FUN_102f3d758;
      *(undefined8 *)(puVar6 + 0x20) = 0;
      uStack_88 = 0x102f41974;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_1000f6b44;
      puStack_90 = &UNK_1105eb990;
      ppuVar8 = &puStack_a8;
      puStack_80 = puVar6;
      func_0x000107c60bc4(ppuVar8);
      func_0x000107c61574(puStack_80);
      func_0x0001000d76cc(&UNK_10db65dc0,ppuVar8);
      func_0x000107c60bd0(ppuVar8);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102f3d5cc; end: 102f3d757;  */

void FUN_102f3d5cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = &UNK_1105eb810;
    func_0x000107c613fc(&UNK_1105eb810,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,param_4);
    puVar2 = &UNK_1105eb218;
    func_0x000107c613fc(&UNK_1105eb218,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_1);
    func_0x0001000bb420(param_3,auStack_88);
    puVar3 = &UNK_1105eb9c8;
    func_0x000107c613fc(&UNK_1105eb9c8,0x58,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    func_0x000100102924(auStack_88,puVar3 + 0x20);
    *(undefined8 *)(puVar3 + 0x40) = param_4;
    *(undefined8 *)(puVar3 + 0x48) = param_5;
    *(undefined **)(puVar3 + 0x50) = puVar1;
    uStack_98 = 0x102f41950;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0x42000000;
    puStack_a8 = &UNK_1000f6b44;
    puStack_a0 = &UNK_1105eb9e0;
    ppuVar4 = &puStack_b8;
    puStack_90 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar2 = puStack_90;
    func_0x000107c61174(param_5);
    func_0x000107c6157c(puVar1);
    func_0x000107c615f0(param_2);
    func_0x000107c615f0(param_4);
    func_0x000107c61574(puVar2);
    func_0x0001000d76cc(&UNK_10db65dc0,ppuVar4);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(param_1);
    func_0x000107c61574(puVar1);
  }
  return;
}



/* Entry: 102f3d758; end: 102f3d75b;  */

void FUN_102f3d758(void)

{
  return;
}



/* Entry: 102f3d75c; end: 102f3d7f7;  */

void FUN_102f3d75c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined8 uStack_38;
  
  ppuVar2 = &puStack_60;
  pcStack_40 = FUN_102f415b4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105ebaa8;
  uStack_38 = param_1;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x0001000d76cc(&UNK_10db65dc0,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 102f3d7f8; end: 102f3d837;  */

void FUN_102f3d7f8(long param_1)

{
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c41864();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
    return;
  }
  return;
}



/* Entry: 102f3d838; end: 102f3d94b;  */

void FUN_102f3d838(long param_1,code *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    (*param_2)();
  }
  else {
    puVar1 = &UNK_1105eb218;
    func_0x000107c613fc(&UNK_1105eb218,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,param_1);
    puVar2 = &UNK_1105eba68;
    func_0x000107c613fc(&UNK_1105eba68,0x28,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    *(code **)(puVar2 + 0x18) = FUN_102f3d94c;
    *(undefined8 *)(puVar2 + 0x20) = 0;
    uStack_58 = 0x102f41978;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1105eba80;
    ppuVar3 = &puStack_78;
    puStack_50 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_50);
    func_0x0001000d76cc(&UNK_10db65dc0,ppuVar3);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102f3d94c; end: 102f3d94f;  */

void FUN_102f3d94c(void)

{
  return;
}



/* Entry: 102f3d950; end: 102f3db1b;  */

void FUN_102f3d950(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = &UNK_1105eb218;
    func_0x000107c613fc(&UNK_1105eb218,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,param_1);
    puVar2 = &UNK_1105eba18;
    func_0x000107c613fc(&UNK_1105eba18,0x20,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    *(undefined8 *)(puVar2 + 0x18) = param_2;
    uStack_58 = 0x102f41940;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1105eba30;
    ppuVar3 = &puStack_78;
    puStack_50 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar1 = puStack_50;
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar1);
    func_0x0001000d76cc(&UNK_10db65dc0,ppuVar3);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102f3db1c; end: 102f3dc4b;  */

void FUN_102f3db1c(code *param_1,undefined8 param_2,ulong *param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [24];
  
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  puVar1 = &UNK_1105eb218;
  func_0x000107c613fc(&UNK_1105eb218,0x18,7);
  func_0x000107c61428(param_5 + 0x10,auStack_68,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61618(param_5);
  func_0x000107c61614(puVar1 + 0x10,param_5);
  func_0x000107c61170(param_5);
  func_0x0001000bb420(param_4,auStack_88);
  puVar2 = &UNK_1105ebdd8;
  func_0x000107c613fc(&UNK_1105ebdd8,0x48,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(ulong **)(puVar2 + 0x18) = param_3;
  func_0x000100102924(auStack_88,puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x40) = param_6;
  pcVar3 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_3) + 0xe8);
  func_0x000107c6157c(puVar1);
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_6);
  (*pcVar3)(param_4,0x102f417e4,puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 102f3dc4c; end: 102f3ddcb;  */

void FUN_102f3dc4c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [24];
  
  if (param_1 != 0) {
    return;
  }
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar1 = &UNK_1105eb810;
    func_0x000107c613fc(&UNK_1105eb810,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,param_5);
    puVar2 = &UNK_1105eb218;
    func_0x000107c613fc(&UNK_1105eb218,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_2);
    func_0x0001000bb420(param_4,auStack_78);
    puVar3 = &UNK_1105ebe00;
    func_0x000107c613fc(&UNK_1105ebe00,0x58,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = param_3;
    func_0x000100102924(auStack_78,puVar3 + 0x20);
    *(undefined8 *)(puVar3 + 0x40) = param_5;
    *(undefined8 *)(puVar3 + 0x48) = 0;
    *(undefined **)(puVar3 + 0x50) = puVar1;
    uStack_88 = 0x102f41968;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_1105ebe18;
    ppuVar4 = &puStack_a8;
    puStack_80 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar2 = puStack_80;
    func_0x000107c61174(param_3);
    func_0x000107c615f0(param_5);
    func_0x000107c6157c(puVar1);
    func_0x000107c61574(puVar2);
    func_0x0001000d76cc(&UNK_10db65dc0,ppuVar4);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(param_2);
    func_0x000107c61574(puVar1);
  }
  return;
}



/* Entry: 102f3ddcc; end: 102f3e08b;  */

/* WARNING: Possible PIC construction at 0x000102f3df34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f3df4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f3df64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f3e04c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f3e05c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f3e050) */
/* WARNING: Removing unreachable block (ram,0x000102f3df68) */
/* WARNING: Removing unreachable block (ram,0x000102f3df50) */
/* WARNING: Removing unreachable block (ram,0x000102f3df38) */
/* WARNING: Removing unreachable block (ram,0x000102f3e060) */
/* WARNING: Removing unreachable block (ram,0x000100d2c664) */
/* WARNING: Removing unreachable block (ram,0x000100d2c670) */
/* WARNING: Removing unreachable block (ram,0x000100d2c668) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f3ddcc(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  code *pcVar6;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  long alStack_70 [3];
  undefined8 uStack_58;
  
  if (param_1 == 0) {
    return;
  }
  lVar4 = *(long *)(unaff_x20 + _DAT_112f29b58);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  if ((*(long *)(param_1 + _DAT_112febe68) == 0) && (*(long *)(param_1 + _DAT_112febe90 + 8) == 0))
  {
    pcVar6 = *(code **)(unaff_x20 + _DAT_112f29b70);
    if (pcVar6 != (code *)0x0) {
      uVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f29b70))[1];
      puVar2 = &UNK_1105eb218;
      func_0x000107c613fc(&UNK_1105eb218,0x18,7);
      func_0x000107c61614(puVar2 + 0x10);
      puVar3 = &UNK_1105eb290;
      func_0x000107c613fc(&UNK_1105eb290,0x28,7);
      *(long *)(puVar3 + 0x10) = lVar4;
      *(undefined **)(puVar3 + 0x18) = puVar2;
      *(long *)(puVar3 + 0x20) = param_1;
      func_0x000107c61174(param_1);
      func_0x000100d2c654(pcVar6,uVar1);
      func_0x000107c61174(lVar4);
      func_0x000107c6157c(puVar2);
      (*pcVar6)(FUN_102f3e190,puVar3);
      goto code_r0x000107c61574;
    }
  }
  uVar1 = 0;
  func_0x000103b1157c();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112febe80);
  puVar2 = &UNK_1105eb218;
  alStack_70[0] = param_1;
  uStack_58 = uVar1;
  func_0x000107c613fc(&UNK_1105eb218,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  func_0x0001000bb420(alStack_70,auStack_90);
  puVar3 = &UNK_1105eb240;
  func_0x000107c613fc(&UNK_1105eb240,0x58,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(long *)(puVar3 + 0x20) = lVar4;
  func_0x000100102924(auStack_90,puVar3 + 0x28);
  *(undefined **)(puVar3 + 0x48) = puVar2;
  *(undefined8 *)(puVar3 + 0x50) = uVar5;
  pcStack_a0 = FUN_102f3e08c;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_1000f6b44;
  puStack_a8 = &UNK_1105eb258;
  puStack_98 = puVar3;
  func_0x000107c60bc4(&puStack_c0);
  puVar2 = puStack_98;
  func_0x000107c615f4(uVar5,2);
  func_0x000107c61174(param_1);
  func_0x000107c61174(lVar4);
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 102f3e08c; end: 102f3e0ab;  */

void FUN_102f3e08c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ulong *puVar5;
  long unaff_x20;
  code *pcVar6;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [24];
  
  pcVar6 = *(code **)(unaff_x20 + 0x10);
  puVar5 = *(ulong **)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(pcVar6,*(undefined8 *)(unaff_x20 + 0x18));
  }
  puVar2 = &UNK_1105eb218;
  func_0x000107c613fc(&UNK_1105eb218,0x18,7);
  func_0x000107c61428(lVar3 + 0x10,auStack_68,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618(lVar3);
  func_0x000107c61614(puVar2 + 0x10,lVar3);
  func_0x000107c61170(lVar3);
  func_0x0001000bb420(unaff_x20 + 0x28,auStack_88);
  puVar4 = &UNK_1105ebdd8;
  func_0x000107c613fc(&UNK_1105ebdd8,0x48,7);
  *(undefined **)(puVar4 + 0x10) = puVar2;
  *(ulong **)(puVar4 + 0x18) = puVar5;
  func_0x000100102924(auStack_88,puVar4 + 0x20);
  *(undefined8 *)(puVar4 + 0x40) = uVar1;
  pcVar6 = *(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar5) + 0xe8);
  func_0x000107c6157c(puVar2);
  func_0x000107c61174(puVar5);
  func_0x000107c615f0(uVar1);
  (*pcVar6)(unaff_x20 + 0x28,0x102f417e4,puVar4);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar4);
  return;
}



/* Entry: 102f3e0ac; end: 102f3e18f;  */

void FUN_102f3e0ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  puVar1 = &UNK_1105ebd38;
  func_0x000107c613fc(&UNK_1105ebd38,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  pcStack_50 = FUN_102f41778;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1105ebd50;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61574(puVar1);
  func_0x0001000d76cc(&UNK_10db65dc0,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 102f3e190; end: 102f3e19b;  */

void FUN_102f3e190(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  ppuVar4 = &puStack_70;
  puVar3 = &UNK_1105ebd38;
  func_0x000107c613fc(&UNK_1105ebd38,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = uVar1;
  *(undefined8 *)(puVar3 + 0x20) = uVar2;
  *(undefined8 *)(puVar3 + 0x28) = uVar5;
  pcStack_50 = FUN_102f41778;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1105ebd50;
  puStack_48 = puVar3;
  func_0x000107c60bc4(&puStack_70);
  puVar3 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61174(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(uVar5);
  func_0x000107c61574(puVar3);
  func_0x0001000d76cc(&UNK_10db65dc0,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 102f3e19c; end: 102f3e337;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f3e19c(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [32];
  long alStack_78 [3];
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_4;
  func_0x000107c614f0();
  if (param_1 != 0) {
    uVar5 = *(undefined8 *)(param_2 + _DAT_112f29c58);
    *(long *)(param_2 + _DAT_112f29c58) = param_1;
    func_0x000107c61174();
    func_0x000107c61170(uVar5);
  }
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    uVar5 = *(undefined8 *)(param_4 + _DAT_112febe80);
    puVar2 = &UNK_1105eb218;
    alStack_78[0] = param_4;
    lStack_60 = lVar1;
    func_0x000107c613fc(&UNK_1105eb218,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_3);
    func_0x0001000bb420(alStack_78,auStack_98);
    puVar3 = &UNK_1105ebd88;
    func_0x000107c613fc(&UNK_1105ebd88,0x58,7);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    *(long *)(puVar3 + 0x20) = param_2;
    func_0x000100102924(auStack_98,puVar3 + 0x28);
    *(undefined **)(puVar3 + 0x48) = puVar2;
    *(undefined8 *)(puVar3 + 0x50) = uVar5;
    uStack_a8 = 0x102f41964;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0x42000000;
    puStack_b8 = &UNK_1000f6b44;
    puStack_b0 = &UNK_1105ebda0;
    ppuVar4 = &puStack_c8;
    puStack_a0 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar2 = puStack_a0;
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_2);
    func_0x000107c615f0(uVar5);
    func_0x000107c61574(puVar2);
    func_0x0001000d76cc(&UNK_10db65dc0,ppuVar4);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(param_3);
    func_0x000100183ab8(alStack_78);
  }
  return;
}



/* Entry: 102f3e338; end: 102f3e38b; -[SCCalendarPagePresenterImpl presentCalendarCreationPageWithConfig:] */

/* WARNING: Possible PIC construction at 0x000102f3e374: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f3e378) */

void FUN_102f3e338(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102f3ddcc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102f3e38c; end: 102f3e393;  */

/* WARNING: Possible PIC construction at 0x000102f3e5c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f3e5e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f3e5cc) */
/* WARNING: Removing unreachable block (ram,0x000102f3e5ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f3e38c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  long alStack_70 [3];
  undefined8 uStack_58;
  
  ppuVar5 = &puStack_c0;
  if ((param_1 != 0) && (lVar6 = *(long *)(unaff_x20 + _DAT_112f29b60), lVar6 != 0)) {
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar6 != 0) {
      uVar1 = 0;
      func_0x000103b12474();
      uVar7 = *(undefined8 *)(param_1 + _DAT_112febf38);
      puVar2 = &UNK_1105eb2b8;
      alStack_70[0] = param_1;
      uStack_58 = uVar1;
      func_0x000107c613fc(&UNK_1105eb2b8,0x28,7);
      *(undefined8 *)(puVar2 + 0x10) = param_2;
      *(long *)(puVar2 + 0x18) = lVar6;
      *(undefined8 *)(puVar2 + 0x20) = 0;
      puVar3 = &UNK_1105eb218;
      func_0x000107c613fc(&UNK_1105eb218,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      func_0x0001000bb420(alStack_70,auStack_90);
      puVar4 = &UNK_1105eb2e0;
      func_0x000107c613fc(&UNK_1105eb2e0,0x58,7);
      *(code **)(puVar4 + 0x10) = FUN_102f3e6ac;
      *(undefined **)(puVar4 + 0x18) = puVar2;
      *(long *)(puVar4 + 0x20) = lVar6;
      func_0x000100102924(auStack_90,puVar4 + 0x28);
      *(undefined **)(puVar4 + 0x48) = puVar3;
      *(undefined8 *)(puVar4 + 0x50) = uVar7;
      uStack_a0 = 0x102f41944;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0x42000000;
      puStack_b0 = &UNK_1000f6b44;
      puStack_a8 = &UNK_1105eb2f8;
      puStack_98 = puVar4;
      func_0x000107c60bc4(&puStack_c0);
      puVar3 = puStack_98;
      func_0x000107c61174(0);
      func_0x000107c6157c(puVar2);
      func_0x000107c615f4(uVar7,2);
      func_0x000107c61174(lVar6);
      func_0x000107c61174(param_1);
      func_0x000107c61174(lVar6);
      func_0x000107c61434(param_2);
      func_0x000107c61574(puVar3);
      func_0x0001000d76cc(&UNK_10db65dc0,ppuVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 102f3e394; end: 102f3e41b; -[SCCalendarPagePresenterImpl presentCalendarDetailPageWithConfig:participants:] */

void FUN_102f3e394(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 0) {
    param_4 = 0;
  }
  else {
    func_0x000107c5fc54(param_4,PTR___sypN_11034f1a8 + 8);
  }
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102f3e41c(param_3,param_4,0);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 102f3e41c; end: 102f3e62f;  */

/* WARNING: Possible PIC construction at 0x000102f3e5c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f3e5e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f3e5cc) */
/* WARNING: Removing unreachable block (ram,0x000102f3e5ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f3e41c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  long alStack_70 [3];
  undefined8 uStack_58;
  
  ppuVar5 = &puStack_c0;
  if ((param_1 != 0) && (lVar6 = *(long *)(unaff_x20 + _DAT_112f29b60), lVar6 != 0)) {
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar6 != 0) {
      uVar1 = 0;
      func_0x000103b12474();
      uVar7 = *(undefined8 *)(param_1 + _DAT_112febf38);
      puVar2 = &UNK_1105eb2b8;
      alStack_70[0] = param_1;
      uStack_58 = uVar1;
      func_0x000107c613fc(&UNK_1105eb2b8,0x28,7);
      *(undefined8 *)(puVar2 + 0x10) = param_2;
      *(long *)(puVar2 + 0x18) = lVar6;
      *(undefined8 *)(puVar2 + 0x20) = param_3;
      puVar3 = &UNK_1105eb218;
      func_0x000107c613fc(&UNK_1105eb218,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      func_0x0001000bb420(alStack_70,auStack_90);
      puVar4 = &UNK_1105eb2e0;
      func_0x000107c613fc(&UNK_1105eb2e0,0x58,7);
      *(code **)(puVar4 + 0x10) = FUN_102f3e6ac;
      *(undefined **)(puVar4 + 0x18) = puVar2;
      *(long *)(puVar4 + 0x20) = lVar6;
      func_0x000100102924(auStack_90,puVar4 + 0x28);
      *(undefined **)(puVar4 + 0x48) = puVar3;
      *(undefined8 *)(puVar4 + 0x50) = uVar7;
      uStack_a0 = 0x102f41944;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0x42000000;
      puStack_b0 = &UNK_1000f6b44;
      puStack_a8 = &UNK_1105eb2f8;
      puStack_98 = puVar4;
      func_0x000107c60bc4(&puStack_c0);
      puVar3 = puStack_98;
      func_0x000107c61174(param_3);
      func_0x000107c6157c(puVar2);
      func_0x000107c615f4(uVar7,2);
      func_0x000107c61174(lVar6);
      func_0x000107c61174(param_1);
      func_0x000107c61174(lVar6);
      func_0x000107c61434(param_2);
      func_0x000107c61574(puVar3);
      func_0x0001000d76cc(&UNK_10db65dc0,ppuVar5);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 102f3e630; end: 102f3e6ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f3e630(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (FUN_102f3e6b8(), param_1 != 0)) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112f29c88);
    *(long *)(param_2 + _DAT_112f29c88) = param_1;
    func_0x000107c6142c(uVar1);
  }
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112f29c90);
    *(long *)(param_2 + _DAT_112f29c90) = param_3;
    func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 102f3e6ac; end: 102f3e6b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f3e6ac(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if ((lVar2 != 0) && (FUN_102f3e6b8(), lVar2 != 0)) {
    uVar4 = *(undefined8 *)(lVar1 + _DAT_112f29c88);
    *(long *)(lVar1 + _DAT_112f29c88) = lVar2;
    func_0x000107c6142c(uVar4);
  }
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar1 + _DAT_112f29c90);
    *(long *)(lVar1 + _DAT_112f29c90) = lVar3;
    func_0x000107c61174(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 102f3e6b8; end: 102f3e7cb;  */

undefined * FUN_102f3e6b8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_a0;
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [32];
  undefined *puStack_58;
  
  lVar5 = *(long *)(param_1 + 0x10);
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000101202450(0,lVar5,0);
  puVar2 = PTR___sypN_11034f1a8;
  puVar1 = puStack_58;
  while( true ) {
    if (lVar5 == 0) {
      return puVar1;
    }
    param_1 = param_1 + 0x20;
    puStack_58 = puVar1;
    func_0x0001000bb420(param_1,auStack_78);
    func_0x000100102924(auStack_78,auStack_98);
    uVar3 = 0;
    FUN_102f41734(0);
    uVar4 = 0;
    func_0x000107c6147c(&uStack_a0,auStack_98,puVar2 + 8,uVar3,6);
    uVar3 = uStack_a0;
    if ((uVar4 & 1) == 0) break;
    uVar4 = *(ulong *)(puVar1 + 0x10);
    puStack_58 = puVar1;
    if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar4) {
      func_0x000101202450(1 < *(ulong *)(puVar1 + 0x18),uVar4 + 1,1);
    }
    *(ulong *)(puStack_58 + 0x10) = uVar4 + 1;
    *(undefined8 *)(puStack_58 + uVar4 * 8 + 0x20) = uVar3;
    lVar5 = lVar5 + -1;
    puVar1 = puStack_58;
  }
  func_0x000107c61574(puVar1);
  return (undefined *)0x0;
}



/* Entry: 102f3e7cc; end: 102f3f67f;  */

/* WARNING: Possible PIC construction at 0x000102f3e978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f3e990: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f3eb30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f3eb44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f3eda4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f3edbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f3ed4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f3ed6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f3ed50) */
/* WARNING: Removing unreachable block (ram,0x000102f3edc0) */
/* WARNING: Removing unreachable block (ram,0x000102f3eda8) */
/* WARNING: Removing unreachable block (ram,0x000102f3eb48) */
/* WARNING: Removing unreachable block (ram,0x000102f3eb34) */
/* WARNING: Removing unreachable block (ram,0x000102f3e994) */
/* WARNING: Removing unreachable block (ram,0x000102f3e97c) */
/* WARNING: Removing unreachable block (ram,0x000102f3ed70) */
/* WARNING: Removing unreachable block (ram,0x000102f3ed8c) */
/* WARNING: Removing unreachable block (ram,0x000100d2c664) */
/* WARNING: Removing unreachable block (ram,0x000100d2c670) */
/* WARNING: Removing unreachable block (ram,0x000100d2c668) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f3e7cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  code *pcVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f29b60);
  if (lVar1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      puVar2 = &UNK_1105eb218;
      func_0x000107c613fc(&UNK_1105eb218,0x18,7);
      func_0x000107c61614(puVar2 + 0x10);
      puVar3 = &UNK_1105eb330;
      func_0x000107c613fc(&UNK_1105eb330,0x50,7);
      *(undefined8 *)(puVar3 + 0x10) = param_3;
      *(undefined8 *)(puVar3 + 0x18) = param_4;
      *(code **)(puVar3 + 0x20) = param_5;
      *(undefined8 *)(puVar3 + 0x28) = param_6;
      *(undefined8 *)(puVar3 + 0x30) = param_1;
      *(undefined8 *)(puVar3 + 0x38) = param_2;
      *(undefined **)(puVar3 + 0x40) = puVar2;
      *(long *)(puVar3 + 0x48) = lVar1;
      puVar4 = &UNK_1105eb218;
      func_0x000107c613fc(&UNK_1105eb218,0x18,7);
      func_0x000107c61614(puVar4 + 0x10);
      puVar5 = &UNK_1105eb358;
      func_0x000107c613fc(&UNK_1105eb358,0x28,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(code **)(puVar5 + 0x18) = FUN_102f3f954;
      *(undefined **)(puVar5 + 0x20) = puVar3;
      pcVar7 = *(code **)(unaff_x20 + _DAT_112f29b78);
      if (pcVar7 == (code *)0x0) {
        func_0x000107c61428(puVar4 + 0x10,auStack_80,0,0);
        puVar5 = puVar4 + 0x10;
        func_0x000107c61618();
        if (puVar5 == (undefined *)0x0) {
          func_0x000107c615f0(param_4);
          func_0x000100d2c654(param_5,param_6);
          func_0x000107c61434(param_2);
          lVar6 = lVar1;
          func_0x000107c61174(lVar1);
          func_0x000107c615f0(param_4);
          func_0x000100d2c654(param_5,param_6);
          func_0x000107c61434(param_2);
          func_0x000107c61174(lVar6);
          func_0x000107c6157c(puVar2);
          func_0x000107c6157c(puVar3);
          func_0x000107c6157c(puVar4);
        }
        else {
          pcVar7 = *(code **)(puVar5 + _DAT_112f29b70);
          uVar8 = *(undefined8 *)((long)(puVar5 + _DAT_112f29b70) + 8);
          func_0x000107c615f0(param_4);
          func_0x000100d2c654(param_5,param_6);
          func_0x000107c61434(param_2);
          lVar6 = lVar1;
          func_0x000107c61174(lVar1);
          func_0x000107c615f0(param_4);
          func_0x000100d2c654(param_5,param_6);
          func_0x000107c61434(param_2);
          func_0x000107c61174(lVar6);
          func_0x000107c6157c(puVar2);
          func_0x000107c6157c(puVar3);
          func_0x000107c6157c(puVar4);
          func_0x000100d2c654(pcVar7,uVar8);
          func_0x000107c61170(puVar5);
          if (pcVar7 != (code *)0x0) {
            puVar4 = &UNK_1105eb3d0;
            func_0x000107c613fc(&UNK_1105eb3d0,0x98,7);
            *(code **)(puVar4 + 0x10) = FUN_102f3f954;
            *(undefined **)(puVar4 + 0x18) = puVar3;
            *(undefined8 *)(puVar4 + 0x28) = 0;
            *(undefined8 *)(puVar4 + 0x20) = 0;
            *(undefined8 *)(puVar4 + 0x38) = 0;
            *(undefined8 *)(puVar4 + 0x30) = 0;
            *(undefined8 *)(puVar4 + 0x48) = 0;
            *(undefined8 *)(puVar4 + 0x40) = 0;
            *(undefined8 *)(puVar4 + 0x58) = 0;
            *(undefined8 *)(puVar4 + 0x50) = 0;
            *(undefined8 *)(puVar4 + 0x68) = 0;
            *(undefined8 *)(puVar4 + 0x60) = 0;
            *(undefined8 *)(puVar4 + 0x78) = 0;
            *(undefined8 *)(puVar4 + 0x70) = 0;
            *(undefined8 *)(puVar4 + 0x88) = 0;
            *(undefined8 *)(puVar4 + 0x80) = 0;
            *(undefined8 *)(puVar4 + 0x90) = 0;
            func_0x000107c6157c(puVar3);
            (*pcVar7)(FUN_102f3f99c,puVar4,lVar6);
            goto code_r0x000107c61574;
          }
        }
        func_0x000103b12474(0);
        func_0x000107c610f8();
        func_0x000107c615f0(param_4);
        func_0x000100d2c654(param_5,param_6);
        func_0x000107c61434(param_2);
        uVar8 = 0;
        func_0x000103b11a64(0,0,param_3,param_4,param_5,param_6,param_1,param_2,0,0,
                            0xe000000000000000,0,0,0,0);
        puVar3 = &UNK_1105eb218;
        func_0x000107c613fc(&UNK_1105eb218,0x18,7);
        func_0x000107c61428(puVar2 + 0x10,auStack_98,0,0);
        puVar2 = puVar2 + 0x10;
        func_0x000107c61618(puVar2);
        func_0x000107c61614(puVar3 + 0x10,puVar2);
        func_0x000107c61170(puVar2);
        puVar4 = &UNK_1105eb380;
        func_0x000107c613fc(&UNK_1105eb380,0x48,7);
        *(undefined8 *)(puVar4 + 0x10) = 0;
        *(long *)(puVar4 + 0x18) = lVar1;
        *(undefined8 *)(puVar4 + 0x20) = uVar8;
        *(undefined **)(puVar4 + 0x28) = puVar3;
        *(code **)(puVar4 + 0x30) = param_5;
        *(undefined8 *)(puVar4 + 0x38) = param_6;
        *(undefined8 *)(puVar4 + 0x40) = param_4;
        uStack_a8 = 0x102f3f990;
        puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_c0 = 0x42000000;
        puStack_b8 = &UNK_1000f6b44;
        puStack_b0 = &UNK_1105eb398;
        puStack_a0 = puVar4;
        func_0x000107c60bc4(&puStack_c8);
        puVar4 = puStack_a0;
        func_0x000107c615f0(param_4);
        func_0x000100d2c654(param_5,param_6);
        func_0x000107c61174(lVar1);
        func_0x000107c61174(uVar8);
      }
      else {
        uVar8 = ((undefined8 *)(unaff_x20 + _DAT_112f29b78))[1];
        puVar4 = &UNK_1105eb3f8;
        func_0x000107c613fc(&UNK_1105eb3f8,0x20,7);
        *(code **)(puVar4 + 0x10) = FUN_102f3f984;
        *(undefined **)(puVar4 + 0x18) = puVar5;
        func_0x000107c615f0(param_4);
        func_0x000100d2c654(param_5,param_6);
        func_0x000107c61434(param_2);
        func_0x000107c61174(lVar1);
        func_0x000107c6157c(puVar2);
        func_0x000107c6157c(puVar3);
        func_0x000100d2c654(pcVar7,uVar8);
        func_0x000107c6157c(puVar5);
        (*pcVar7)(param_1,param_2,0x102f3f9c4,puVar4);
      }
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_release_11034f4c0)(puVar4);
      return;
    }
  }
  if (param_5 != (code *)0x0) {
    (*param_5)();
  }
  return;
}



/* Entry: 102f3f680; end: 102f3f837;  */

void FUN_102f3f680(long param_1,code *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [32];
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  if (param_1 == 0) {
    func_0x000107c61428(param_4 + 0x10,auStack_68,0,0);
    param_4 = param_4 + 0x10;
    func_0x000107c61618();
    if (param_4 != 0) {
      uVar1 = 0;
      func_0x000103b12474();
      puVar2 = &UNK_1105eb810;
      auStack_88[0] = param_6;
      uStack_70 = uVar1;
      func_0x000107c613fc(&UNK_1105eb810,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,param_7);
      puVar3 = &UNK_1105eb218;
      func_0x000107c613fc(&UNK_1105eb218,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,param_4);
      func_0x0001000bb420(auStack_88,auStack_a8);
      puVar4 = &UNK_1105ebc70;
      func_0x000107c613fc(&UNK_1105ebc70,0x58,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(undefined8 *)(puVar4 + 0x18) = param_5;
      func_0x000100102924(auStack_a8,puVar4 + 0x20);
      *(undefined8 *)(puVar4 + 0x40) = param_7;
      *(undefined8 *)(puVar4 + 0x48) = 0;
      *(undefined **)(puVar4 + 0x50) = puVar2;
      uStack_b8 = 0x102f4195c;
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0x42000000;
      puStack_c8 = &UNK_1000f6b44;
      puStack_c0 = &UNK_1105ebc88;
      ppuVar5 = &puStack_d8;
      puStack_b0 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      puVar3 = puStack_b0;
      func_0x000107c61174(param_6);
      func_0x000107c61174(param_5);
      func_0x000107c615f0(param_7);
      func_0x000107c6157c(puVar2);
      func_0x000107c61574(puVar3);
      func_0x0001000d76cc(&UNK_10db65dc0,ppuVar5);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(param_4);
      func_0x000107c61574(puVar2);
      func_0x000100183ab8(auStack_88);
    }
  }
  else if (param_2 != (code *)0x0) {
    (*param_2)();
  }
  return;
}



/* Entry: 102f3f838; end: 102f3f953;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f3f838(undefined8 *param_1,long param_2,code *param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_d0 [120];
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    pcVar1 = *(code **)(param_2 + _DAT_112f29b70);
    uVar2 = ((undefined8 *)(param_2 + _DAT_112f29b70))[1];
    func_0x000100d2c654(pcVar1,uVar2);
    func_0x000107c61170(param_2);
    if (pcVar1 != (code *)0x0) {
      puVar3 = &UNK_1105ebd10;
      func_0x000107c613fc(&UNK_1105ebd10,0x98,7);
      *(code **)(puVar3 + 0x10) = param_3;
      *(undefined8 *)(puVar3 + 0x18) = param_4;
      uVar4 = param_1[8];
      uVar6 = param_1[0xb];
      uVar5 = param_1[10];
      *(undefined8 *)(puVar3 + 0x68) = param_1[9];
      *(undefined8 *)(puVar3 + 0x60) = uVar4;
      *(undefined8 *)(puVar3 + 0x78) = uVar6;
      *(undefined8 *)(puVar3 + 0x70) = uVar5;
      uVar4 = param_1[0xc];
      *(undefined8 *)(puVar3 + 0x88) = param_1[0xd];
      *(undefined8 *)(puVar3 + 0x80) = uVar4;
      *(undefined8 *)(puVar3 + 0x90) = param_1[0xe];
      uVar4 = *param_1;
      uVar6 = param_1[3];
      uVar5 = param_1[2];
      *(undefined8 *)(puVar3 + 0x28) = param_1[1];
      *(undefined8 *)(puVar3 + 0x20) = uVar4;
      *(undefined8 *)(puVar3 + 0x38) = uVar6;
      *(undefined8 *)(puVar3 + 0x30) = uVar5;
      uVar4 = param_1[4];
      uVar6 = param_1[7];
      uVar5 = param_1[6];
      *(undefined8 *)(puVar3 + 0x48) = param_1[5];
      *(undefined8 *)(puVar3 + 0x40) = uVar4;
      *(undefined8 *)(puVar3 + 0x58) = uVar6;
      *(undefined8 *)(puVar3 + 0x50) = uVar5;
      func_0x000107c6157c(param_4);
      FUN_102f416e4(param_1,auStack_d0);
      (*pcVar1)(0x102f418c4,puVar3);
      func_0x000107c61574(puVar3);
      func_0x000100d2c664(pcVar1,uVar2);
      return;
    }
  }
  (*param_3)(0,param_1);
  return;
}



/* Entry: 102f3f954; end: 102f3f983;  */

void FUN_102f3f954(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000102f3ede8(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 102f3f984; end: 102f3f99b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f3f984(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_d0 [120];
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  pcVar3 = *(code **)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    pcVar1 = *(code **)(lVar4 + _DAT_112f29b70);
    uVar2 = ((undefined8 *)(lVar4 + _DAT_112f29b70))[1];
    func_0x000100d2c654(pcVar1,uVar2);
    func_0x000107c61170(lVar4);
    if (pcVar1 != (code *)0x0) {
      puVar5 = &UNK_1105ebd10;
      func_0x000107c613fc(&UNK_1105ebd10,0x98,7);
      *(code **)(puVar5 + 0x10) = pcVar3;
      *(undefined8 *)(puVar5 + 0x18) = uVar6;
      uVar7 = param_1[8];
      uVar9 = param_1[0xb];
      uVar8 = param_1[10];
      *(undefined8 *)(puVar5 + 0x68) = param_1[9];
      *(undefined8 *)(puVar5 + 0x60) = uVar7;
      *(undefined8 *)(puVar5 + 0x78) = uVar9;
      *(undefined8 *)(puVar5 + 0x70) = uVar8;
      uVar7 = param_1[0xc];
      *(undefined8 *)(puVar5 + 0x88) = param_1[0xd];
      *(undefined8 *)(puVar5 + 0x80) = uVar7;
      *(undefined8 *)(puVar5 + 0x90) = param_1[0xe];
      uVar7 = *param_1;
      uVar9 = param_1[3];
      uVar8 = param_1[2];
      *(undefined8 *)(puVar5 + 0x28) = param_1[1];
      *(undefined8 *)(puVar5 + 0x20) = uVar7;
      *(undefined8 *)(puVar5 + 0x38) = uVar9;
      *(undefined8 *)(puVar5 + 0x30) = uVar8;
      uVar7 = param_1[4];
      uVar9 = param_1[7];
      uVar8 = param_1[6];
      *(undefined8 *)(puVar5 + 0x48) = param_1[5];
      *(undefined8 *)(puVar5 + 0x40) = uVar7;
      *(undefined8 *)(puVar5 + 0x58) = uVar9;
      *(undefined8 *)(puVar5 + 0x50) = uVar8;
      func_0x000107c6157c(uVar6);
      FUN_102f416e4(param_1,auStack_d0);
      (*pcVar1)(0x102f418c4,puVar5);
      func_0x000107c61574(puVar5);
      func_0x000100d2c664(pcVar1,uVar2);
      return;
    }
  }
  (*pcVar3)(0,param_1);
  return;
}



/* Entry: 102f3f99c; end: 102f3f9e3;  */

void FUN_102f3f99c(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*(undefined8 *)(unaff_x20 + 0x18),param_1,unaff_x20 + 0x20);
  return;
}



/* Entry: 102f3f9e4; end: 102f3fac3; -[SCCalendarPagePresenterImpl presentCalendarDetailPageWithEventId:source:uiContainer:dismissalCallback:] */

void FUN_102f3f9e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  if (param_6 == 0) {
    puVar1 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = &UNK_1105eb680;
    func_0x000107c613fc(&UNK_1105eb680,0x18,7);
    *(long *)(puVar1 + 0x10) = param_6;
    uVar2 = 0x102f418e8;
  }
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_102f3e7cc(param_3,param_2,param_4,param_5,uVar2,puVar1);
  func_0x000100d2c664(uVar2,puVar1);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102f3fac4; end: 102f3fc6b;  */

/* WARNING: Possible PIC construction at 0x000102f3fc14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f3fc2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f3fc18) */
/* WARNING: Removing unreachable block (ram,0x000102f3fc30) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f3fac4(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [32];
  long alStack_60 [3];
  undefined8 uStack_48;
  
  ppuVar4 = &puStack_b0;
  if (param_1 == 0) {
    return;
  }
  lVar5 = *(long *)(unaff_x20 + _DAT_112f29b68);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar5 != 0) {
    uVar1 = 0;
    func_0x000103b129c4();
    uVar6 = *(undefined8 *)(param_1 + _DAT_112febfe8);
    puVar2 = &UNK_1105eb218;
    alStack_60[0] = param_1;
    uStack_48 = uVar1;
    func_0x000107c613fc(&UNK_1105eb218,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    func_0x0001000bb420(alStack_60,auStack_80);
    puVar3 = &UNK_1105eb420;
    func_0x000107c613fc(&UNK_1105eb420,0x58,7);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    *(undefined8 *)(puVar3 + 0x18) = 0;
    *(long *)(puVar3 + 0x20) = lVar5;
    func_0x000100102924(auStack_80,puVar3 + 0x28);
    *(undefined **)(puVar3 + 0x48) = puVar2;
    *(undefined8 *)(puVar3 + 0x50) = uVar6;
    uStack_90 = 0x102f41948;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_1000f6b44;
    puStack_98 = &UNK_1105eb438;
    puStack_88 = puVar3;
    func_0x000107c60bc4(&puStack_b0);
    puVar2 = puStack_88;
    func_0x000107c615f4(uVar6,2);
    func_0x000107c61174(param_1);
    func_0x000107c61174(lVar5);
    func_0x000107c61574(puVar2);
    func_0x0001000d76cc(&UNK_10db65dc0,ppuVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102f3fc6c; end: 102f3fcbf; -[SCCalendarPagePresenterImpl presentCalendarListPageWithConfig:] */

/* WARNING: Possible PIC construction at 0x000102f3fca8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f3fcac) */

void FUN_102f3fc6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102f3fac4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102f3fcc0; end: 102f3fe1f;  */

/* WARNING: Possible PIC construction at 0x000102f3fdf4: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f3fcc0(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  code *pcVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f29b68);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    if (param_3 != (code *)0x0) {
      (*param_3)();
    }
    return;
  }
  pcVar4 = *(code **)(unaff_x20 + _DAT_112f29b70);
  if (pcVar4 != (code *)0x0) {
    uVar5 = ((undefined8 *)(unaff_x20 + _DAT_112f29b70))[1];
    puVar2 = &UNK_1105eb218;
    func_0x000107c613fc(&UNK_1105eb218,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar3 = &UNK_1105eb470;
    func_0x000107c613fc(&UNK_1105eb470,0x40,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(code **)(puVar3 + 0x18) = param_3;
    *(undefined8 *)(puVar3 + 0x20) = param_4;
    *(undefined8 *)(puVar3 + 0x28) = param_1;
    *(undefined8 *)(puVar3 + 0x30) = param_2;
    *(long *)(puVar3 + 0x38) = lVar1;
    func_0x000100d2c654(pcVar4,uVar5);
    func_0x000107c6157c(puVar2);
    func_0x000100d2c654(param_3,param_4);
    func_0x000107c615f0(param_2);
    func_0x000107c61174(lVar1);
    (*pcVar4)(FUN_102f3ff70,puVar3);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(puVar3);
    func_0x000100d2c664(pcVar4,uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102f3fe20; end: 102f3ff6f;  */

void FUN_102f3fe20(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  puVar1 = &UNK_1105eb218;
  func_0x000107c613fc(&UNK_1105eb218,0x18,7);
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618(param_2);
  func_0x000107c61614(puVar1 + 0x10,param_2);
  func_0x000107c61170(param_2);
  puVar2 = &UNK_1105eb748;
  func_0x000107c613fc(&UNK_1105eb748,0x48,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_1;
  *(undefined8 *)(puVar2 + 0x30) = param_5;
  *(undefined8 *)(puVar2 + 0x38) = param_6;
  *(undefined8 *)(puVar2 + 0x40) = param_7;
  uStack_78 = 0x102f4141c;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_1000f6b44;
  puStack_80 = &UNK_1105eb760;
  ppuVar3 = &puStack_98;
  puStack_70 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar1 = puStack_70;
  func_0x000100d2c654(param_3,param_4);
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61574(puVar1);
  func_0x0001000d76cc(&UNK_10db65dc0,ppuVar3);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 102f3ff70; end: 102f3ff7b;  */

void FUN_102f3ff70(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [24];
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar6 = &UNK_1105eb218;
  func_0x000107c613fc(&UNK_1105eb218,0x18,7);
  func_0x000107c61428(lVar7 + 0x10,auStack_68,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618(lVar7);
  func_0x000107c61614(puVar6 + 0x10,lVar7);
  func_0x000107c61170(lVar7);
  puVar8 = &UNK_1105eb748;
  func_0x000107c613fc(&UNK_1105eb748,0x48,7);
  *(undefined **)(puVar8 + 0x10) = puVar6;
  *(undefined8 *)(puVar8 + 0x18) = uVar3;
  *(undefined8 *)(puVar8 + 0x20) = uVar1;
  *(undefined8 *)(puVar8 + 0x28) = param_1;
  *(undefined8 *)(puVar8 + 0x30) = uVar4;
  *(undefined8 *)(puVar8 + 0x38) = uVar2;
  *(undefined8 *)(puVar8 + 0x40) = uVar5;
  uStack_78 = 0x102f4141c;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  puStack_88 = &UNK_1000f6b44;
  puStack_80 = &UNK_1105eb760;
  ppuVar9 = &puStack_98;
  puStack_70 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar6 = puStack_70;
  func_0x000100d2c654(uVar3,uVar1);
  func_0x000107c61174(param_1);
  func_0x000107c615f0(uVar2);
  func_0x000107c61174(uVar5);
  func_0x000107c61574(puVar6);
  func_0x0001000d76cc(&UNK_10db65dc0,ppuVar9);
  func_0x000107c60bd0(ppuVar9);
  return;
}



/* Entry: 102f3ff7c; end: 102f402d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f3ff7c(long param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    if (param_2 != (code *)0x0) {
      (*param_2)();
    }
  }
  else {
    puVar1 = PTR_PTR_1126a68c0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c53cb8();
    puVar2 = PTR_PTR_1126a68c8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    puVar7 = &UNK_1105eb218;
    puVar3 = puVar7;
    func_0x000107c613fc(&UNK_1105eb218,0x18,7);
    func_0x000107c61614(puVar3 + 0x10,param_1);
    uStack_88 = 0x102f41428;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_1105eb788;
    ppuVar4 = &puStack_a8;
    puStack_80 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_80;
    func_0x000107c61174();
    func_0x000107c61574(puVar3);
    func_0x000107c57194(puVar2);
    func_0x000107c60bd0(ppuVar4);
    uVar5 = 0;
    func_0x000103b129c4();
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c615f0(param_6);
    func_0x000100d2c654(param_2,param_3);
    puVar6 = puVar1;
    func_0x000103b12698(puVar1,puVar2,param_5,param_6,param_2,param_3);
    func_0x000107c613fc(&UNK_1105eb218,0x18,7);
    func_0x000107c61614(puVar7 + 0x10,param_1);
    puVar3 = &UNK_1105eb7c0;
    func_0x000107c613fc(&UNK_1105eb7c0,0x20,7);
    *(undefined **)(puVar3 + 0x10) = puVar7;
    *(undefined8 *)(puVar3 + 0x18) = param_6;
    FUN_102f478d8(0);
    func_0x000107c610f8();
    func_0x000107c615f0(param_6);
    func_0x000107c61174();
    uVar8 = param_7;
    FUN_102f41438();
    pcVar10 = *(code **)(param_1 + _DAT_112f29b80);
    if (pcVar10 != (code *)0x0) {
      uVar9 = ((undefined8 *)(param_1 + _DAT_112f29b80))[1];
      func_0x000107c6157c(uVar9);
      (*pcVar10)(puVar2,uVar8);
      func_0x000100d2c664(pcVar10,uVar9);
    }
    puStack_a8 = puVar6;
    puStack_90 = (undefined *)uVar5;
    func_0x000107c61614(auStack_b0,param_1);
    func_0x000107c61174();
    func_0x000107c61170(param_1);
    puVar7 = &UNK_1105eb7e8;
    func_0x000107c613fc(&UNK_1105eb7e8,0x48,7);
    *(undefined1 **)(puVar7 + 0x10) = auStack_b0;
    *(code **)(puVar7 + 0x18) = param_2;
    *(undefined8 *)(puVar7 + 0x20) = param_3;
    *(undefined8 *)(puVar7 + 0x28) = param_7;
    *(undefined **)(puVar7 + 0x30) = puVar6;
    *(undefined8 *)(puVar7 + 0x38) = param_6;
    *(undefined8 *)(puVar7 + 0x40) = uVar8;
    func_0x000107c615f0(param_6);
    func_0x000100d2c654(param_2,param_3);
    func_0x000107c61174(param_7);
    func_0x000107c61174(puVar6);
    func_0x000107c61174(uVar8);
    FUN_102f44000(&puStack_a8,FUN_102f4153c,puVar7);
    func_0x000107c61574(puVar7);
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar1);
    func_0x000107c61610(auStack_b0);
    func_0x000100183ab8(&puStack_a8);
  }
  return;
}



/* Entry: 102f402d4; end: 102f403ab;  */

void FUN_102f402d4(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = &UNK_1105eb218;
    func_0x000107c613fc(&UNK_1105eb218,0x18,7);
    func_0x000107c61614(puVar1 + 0x10,param_1);
    uStack_48 = 0x102f41954;
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0x42000000;
    puStack_58 = &UNK_1000f6b44;
    puStack_50 = &UNK_1105ebb70;
    ppuVar2 = &puStack_68;
    puStack_40 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    func_0x000107c61574(puStack_40);
    func_0x0001000d76cc(&UNK_10db65dc0,ppuVar2);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102f403ac; end: 102f4053f;  */

void FUN_102f403ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    puVar2 = &UNK_1105ebae0;
    func_0x000107c613fc(&UNK_1105ebae0,0x18,7);
    *(undefined8 *)(puVar2 + 0x10) = param_2;
    uStack_58 = 0x102f415bc;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1105ebaf8;
    ppuVar3 = &puStack_78;
    puStack_50 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_50;
    func_0x000107c615f0(param_2);
    func_0x000107c61574(puVar2);
    func_0x0001000d76cc(&UNK_10db65dc0,ppuVar3);
    func_0x000107c60bd0(ppuVar3);
  }
  else {
    puVar2 = &UNK_1105eb218;
    func_0x000107c613fc(&UNK_1105eb218,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_1);
    puVar1 = &UNK_1105ebb30;
    func_0x000107c613fc(&UNK_1105ebb30,0x28,7);
    *(undefined **)(puVar1 + 0x10) = puVar2;
    *(code **)(puVar1 + 0x18) = FUN_102f40540;
    *(undefined8 *)(puVar1 + 0x20) = 0;
    uStack_58 = 0x102f4197c;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1105ebb48;
    ppuVar3 = &puStack_78;
    puStack_50 = puVar1;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_50);
    func_0x0001000d76cc(&UNK_10db65dc0,ppuVar3);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102f40540; end: 102f40543;  */

void FUN_102f40540(void)

{
  return;
}



/* Entry: 102f40544; end: 102f40713;  */

void FUN_102f40544(long param_1,long param_2,code *param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [32];
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2,auStack_68,0,0);
  func_0x000107c61618();
  if (param_2 != 0) {
    if (param_1 == 0) {
      uVar1 = 0;
      func_0x000103b129c4();
      puVar2 = &UNK_1105eb810;
      auStack_88[0] = param_6;
      uStack_70 = uVar1;
      func_0x000107c613fc(&UNK_1105eb810,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,param_7);
      puVar3 = &UNK_1105eb218;
      func_0x000107c613fc(&UNK_1105eb218,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,param_2);
      func_0x0001000bb420(auStack_88,auStack_a8);
      puVar4 = &UNK_1105eb838;
      func_0x000107c613fc(&UNK_1105eb838,0x58,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(undefined8 *)(puVar4 + 0x18) = param_5;
      func_0x000100102924(auStack_a8,puVar4 + 0x20);
      *(undefined8 *)(puVar4 + 0x40) = param_7;
      *(undefined8 *)(puVar4 + 0x48) = param_8;
      *(undefined **)(puVar4 + 0x50) = puVar2;
      uStack_b8 = 0x102f41550;
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0x42000000;
      puStack_c8 = &UNK_1000f6b44;
      puStack_c0 = &UNK_1105eb850;
      ppuVar5 = &puStack_d8;
      puStack_b0 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      puVar3 = puStack_b0;
      func_0x000107c61174(param_6);
      func_0x000107c61174(param_5);
      func_0x000107c615f0(param_7);
      func_0x000107c61174(param_8);
      func_0x000107c6157c(puVar2);
      func_0x000107c61574(puVar3);
      func_0x0001000d76cc(&UNK_10db65dc0,ppuVar5);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61170(param_2);
      func_0x000107c61574(puVar2);
      func_0x000100183ab8(auStack_88);
      return;
    }
    func_0x000107c61170();
  }
  if (param_3 != (code *)0x0) {
    (*param_3)();
  }
  return;
}



/* Entry: 102f40714; end: 102f407c7; -[SCCalendarPagePresenterImpl presentCalendarListPageWithSource:uiContainer:dismissalCallback:] */

void FUN_102f40714(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  if (param_5 == 0) {
    puVar1 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = &UNK_1105eb658;
    func_0x000107c613fc(&UNK_1105eb658,0x18,7);
    *(long *)(puVar1 + 0x10) = param_5;
    uVar2 = 0x102f418e4;
  }
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  FUN_102f3fcc0(param_3,param_4,uVar2,puVar1);
  func_0x000100d2c664(uVar2,puVar1);
  func_0x000107c615e8(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102f407c8; end: 102f408a7;  */

void FUN_102f407c8(undefined8 param_1,undefined8 param_2)

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
  puVar1 = &UNK_1105eb218;
  func_0x000107c613fc(&UNK_1105eb218,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_1105eb498;
  func_0x000107c613fc(&UNK_1105eb498,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  pcStack_40 = FUN_102f40a58;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105eb4b0;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(puVar1);
  func_0x0001000d76cc(&UNK_10db65dc0,ppuVar3);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 102f408a8; end: 102f40a57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f408a8(long param_1,code *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112f29b40;
  if (param_1 != 0) {
    lVar8 = param_1 + _DAT_112f29b40;
    func_0x000107c61618();
    if (lVar8 != 0) {
      func_0x000107c61170();
      lVar8 = *(long *)(param_1 + _DAT_112f29b38);
      if (lVar8 != 0) {
        *(undefined1 *)(param_1 + _DAT_112f29b48) = 1;
        puVar3 = &UNK_1105eb218;
        func_0x000107c613fc(&UNK_1105eb218,0x18,7);
        func_0x000107c61614(puVar3 + 0x10,param_1);
        puVar4 = &UNK_1105eb6f8;
        func_0x000107c613fc(&UNK_1105eb6f8,0x28,7);
        *(undefined **)(puVar4 + 0x10) = puVar3;
        *(code **)(puVar4 + 0x18) = param_2;
        *(undefined8 *)(puVar4 + 0x20) = param_3;
        uStack_68 = 0x102f41410;
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0x42000000;
        puStack_78 = &UNK_1000b0c7c;
        puStack_70 = &UNK_1105eb710;
        ppuVar5 = &puStack_88;
        puStack_60 = puVar4;
        func_0x000107c60bc4(ppuVar5);
        puVar3 = puStack_60;
        func_0x000107c615f0(lVar8);
        func_0x000107c6157c(param_3);
        func_0x000107c61574(puVar3);
        func_0x000107c41864(lVar8);
        func_0x000107c60bd0(ppuVar5);
        func_0x000107c61170(param_1);
        func_0x000107c615e8(lVar8);
        return;
      }
      func_0x000107c61604(param_1 + lVar2,0);
    }
    (*param_2)();
    puVar1 = (undefined8 *)(param_1 + _DAT_112f29b50);
    pcVar7 = (code *)*puVar1;
    if (pcVar7 == (code *)0x0) {
      func_0x000107c61170(param_1);
    }
    else {
      uVar6 = puVar1[1];
      *puVar1 = 0;
      puVar1[1] = 0;
      (*pcVar7)();
      func_0x000107c61170(param_1);
      func_0x000100d2c664(pcVar7,uVar6);
    }
  }
  return;
}



/* Entry: 102f40a58; end: 102f40a63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f40a58(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  long unaff_x20;
  code *pcVar8;
  long lVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  pcVar8 = *(code **)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar3 + 0x10,auStack_58,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_112f29b40;
  if (lVar3 != 0) {
    lVar9 = lVar3 + _DAT_112f29b40;
    func_0x000107c61618();
    if (lVar9 != 0) {
      func_0x000107c61170();
      lVar9 = *(long *)(lVar3 + _DAT_112f29b38);
      if (lVar9 != 0) {
        *(undefined1 *)(lVar3 + _DAT_112f29b48) = 1;
        puVar4 = &UNK_1105eb218;
        func_0x000107c613fc(&UNK_1105eb218,0x18,7);
        func_0x000107c61614(puVar4 + 0x10,lVar3);
        puVar5 = &UNK_1105eb6f8;
        func_0x000107c613fc(&UNK_1105eb6f8,0x28,7);
        *(undefined **)(puVar5 + 0x10) = puVar4;
        *(code **)(puVar5 + 0x18) = pcVar8;
        *(undefined8 *)(puVar5 + 0x20) = uVar7;
        uStack_68 = 0x102f41410;
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0x42000000;
        puStack_78 = &UNK_1000b0c7c;
        puStack_70 = &UNK_1105eb710;
        ppuVar6 = &puStack_88;
        puStack_60 = puVar5;
        func_0x000107c60bc4(ppuVar6);
        puVar4 = puStack_60;
        func_0x000107c615f0(lVar9);
        func_0x000107c6157c(uVar7);
        func_0x000107c61574(puVar4);
        func_0x000107c41864(lVar9);
        func_0x000107c60bd0(ppuVar6);
        func_0x000107c61170(lVar3);
        func_0x000107c615e8(lVar9);
        return;
      }
      func_0x000107c61604(lVar3 + lVar2,0);
    }
    (*pcVar8)();
    puVar1 = (undefined8 *)(lVar3 + _DAT_112f29b50);
    pcVar8 = (code *)*puVar1;
    if (pcVar8 == (code *)0x0) {
      func_0x000107c61170(lVar3);
    }
    else {
      uVar7 = puVar1[1];
      *puVar1 = 0;
      puVar1[1] = 0;
      (*pcVar8)();
      func_0x000107c61170(lVar3);
      func_0x000100d2c664(pcVar8,uVar7);
    }
  }
  return;
}



/* Entry: 102f40a64; end: 102f40b3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f40a64(long param_1,code *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    (*param_2)();
  }
  else {
    *(undefined1 *)(param_1 + _DAT_112f29b48) = 0;
    func_0x000107c61604(param_1 + _DAT_112f29b40,0);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112f29b38);
    *(undefined8 *)(param_1 + _DAT_112f29b38) = 0;
    func_0x000107c615e8(uVar2);
    (*param_2)();
    puVar1 = (undefined8 *)(param_1 + _DAT_112f29b50);
    pcVar3 = (code *)*puVar1;
    if (pcVar3 == (code *)0x0) {
      func_0x000107c61170(param_1);
    }
    else {
      uVar2 = puVar1[1];
      *puVar1 = 0;
      puVar1[1] = 0;
      (*pcVar3)();
      func_0x000107c61170(param_1);
      func_0x000100d2c664(pcVar3,uVar2);
    }
  }
  return;
}



/* Entry: 102f40b3c; end: 102f40c63; -[SCCalendarPagePresenterImpl dismissPageWithCompletion:] */

void FUN_102f40b3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  func_0x000107c60bc4();
  puVar1 = &UNK_1105eb5e0;
  func_0x000107c613fc(&UNK_1105eb5e0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  puVar2 = &UNK_1105eb218;
  func_0x000107c613fc(&UNK_1105eb218,0x18,7);
  func_0x000107c61614(puVar2 + 0x10,param_1);
  puVar3 = &UNK_1105eb608;
  func_0x000107c613fc(&UNK_1105eb608,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = 0x102f41408;
  *(undefined **)(puVar3 + 0x20) = puVar1;
  uStack_40 = 0x102f4196c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105eb620;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar1);
  func_0x000107c61574(puVar2);
  func_0x0001000d76cc(&UNK_10db65dc0,ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 102f40c64; end: 102f40d0b;  */

void FUN_102f40c64(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  
  ppuVar2 = &puStack_50;
  puVar1 = &UNK_1105eb218;
  func_0x000107c613fc(&UNK_1105eb218,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  pcStack_30 = FUN_102f40ea0;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0x42000000;
  puStack_40 = &UNK_1000f6b44;
  puStack_38 = &UNK_1105eb4d8;
  puStack_28 = puVar1;
  func_0x000107c60bc4(&puStack_50);
  func_0x000107c61574(puStack_28);
  func_0x0001000d76cc(&UNK_10db65dc0,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 102f40d0c; end: 102f40e9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f40d0c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    return;
  }
  lVar1 = param_1 + _DAT_112f29b40;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar2 = 0;
    FUN_102f478d8(0);
    lVar3 = lVar1;
    func_0x000107c61480(lVar1,uVar2);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + _DAT_112f29e38) == 0) {
        if (*(code **)(lVar3 + _DAT_112f29e58) != (code *)0x0) {
          (**(code **)(lVar3 + _DAT_112f29e58))();
        }
      }
      else if (*(long *)(lVar3 + _DAT_112f29e50) != 0) {
        func_0x000107c42018();
      }
      func_0x000107c61170(param_1);
      param_1 = lVar1;
      goto LAB_102f40e84;
    }
    func_0x000107c61170(lVar1);
  }
  puVar4 = &UNK_1105eb218;
  func_0x000107c613fc(&UNK_1105eb218,0x18,7);
  func_0x000107c61614(puVar4 + 0x10,param_1);
  puVar5 = &UNK_1105eb6a8;
  func_0x000107c613fc(&UNK_1105eb6a8,0x28,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = 0x102f40ea8;
  *(undefined8 *)(puVar5 + 0x20) = 0;
  uStack_58 = 0x102f41970;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_1000f6b44;
  puStack_60 = &UNK_1105eb6c0;
  ppuVar6 = &puStack_78;
  puStack_50 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c61574(puStack_50);
  func_0x0001000d76cc(&UNK_10db65dc0,ppuVar6);
  func_0x000107c60bd0(ppuVar6);
LAB_102f40e84:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102f40ea0; end: 102f40eab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f40ea0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = lVar1 + _DAT_112f29b40;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar3 = 0;
    FUN_102f478d8(0);
    lVar4 = lVar2;
    func_0x000107c61480(lVar2,uVar3);
    if (lVar4 != 0) {
      if (*(int *)(lVar4 + _DAT_112f29e38) == 0) {
        if (*(code **)(lVar4 + _DAT_112f29e58) != (code *)0x0) {
          (**(code **)(lVar4 + _DAT_112f29e58))();
        }
      }
      else if (*(long *)(lVar4 + _DAT_112f29e50) != 0) {
        func_0x000107c42018();
      }
      func_0x000107c61170(lVar1);
      lVar1 = lVar2;
      goto LAB_102f40e84;
    }
    func_0x000107c61170(lVar2);
  }
  puVar5 = &UNK_1105eb218;
  func_0x000107c613fc(&UNK_1105eb218,0x18,7);
  func_0x000107c61614(puVar5 + 0x10,lVar1);
  puVar6 = &UNK_1105eb6a8;
  func_0x000107c613fc(&UNK_1105eb6a8,0x28,7);
  *(undefined **)(puVar6 + 0x10) = puVar5;
  *(undefined8 *)(puVar6 + 0x18) = 0x102f40ea8;
  *(undefined8 *)(puVar6 + 0x20) = 0;
  uStack_58 = 0x102f41970;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_1000f6b44;
  puStack_60 = &UNK_1105eb6c0;
  ppuVar7 = &puStack_78;
  puStack_50 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  func_0x000107c61574(puStack_50);
  func_0x0001000d76cc(&UNK_10db65dc0,ppuVar7);
  func_0x000107c60bd0(ppuVar7);
LAB_102f40e84:
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 102f40eac; end: 102f40f77; -[SCCalendarPagePresenterImpl requestAnimatedDismiss] */

void FUN_102f40eac(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = &UNK_1105eb218;
  func_0x000107c613fc(&UNK_1105eb218,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  uStack_40 = 0x102f4194c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1105eb5a8;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  func_0x0001000d76cc(&UNK_10db65dc0,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102f40f78; end: 102f40fd3; -[SCCalendarPagePresenterImpl init] */

void FUN_102f40f78(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCCalendarPageImpl.CalendarPagePresenterImpl",0x2c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102f40fa4);
  (*pcVar1)();
}



/* Entry: 102f40fd4; end: 102f410ff; -[SCCalendarPagePresenterImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102f41044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102f4106c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102f41048) */
/* WARNING: Removing unreachable block (ram,0x000102f41070) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102f40fd4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f29b58));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f29b60));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f29b68));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f29b38));
  func_0x000107c61610(param_1 + _DAT_112f29b40);
  if (*(long *)(param_1 + _DAT_112f29b50) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112f29b50))[1]);
    return;
  }
  return;
}



/* Entry: 102f41100; end: 102f411ab;  */

undefined8 * FUN_102f41100(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  uVar4 = param_2[6];
  param_1[6] = uVar4;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar3 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar3;
  uVar5 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar5;
  uVar5 = param_2[0xc];
  param_1[0xc] = uVar5;
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  param_1[0xe] = param_2[0xe];
  func_0x000107c61434();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar1);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar5);
  return param_1;
}



/* Entry: 102f411ac; end: 102f412af;  */

undefined8 * FUN_102f411ac(undefined8 *param_1,undefined8 *param_2)

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
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  param_1[5] = param_2[5];
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  uVar1 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  param_1[0xe] = param_2[0xe];
  return param_1;
}



/* Entry: 102f412b0; end: 102f41353;  */

undefined8 * FUN_102f412b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  func_0x000107c61170(param_1[3]);
  uVar2 = param_1[4];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  func_0x000107c61170(uVar2);
  uVar2 = param_2[6];
  uVar1 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar2 = param_2[9];
  uVar1 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar2;
  uVar2 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
  param_1[0xe] = param_2[0xe];
  return param_1;
}



/* Entry: 102f41354; end: 102f41437;  */

int FUN_102f41354(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1e] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102f41438; end: 102f4153b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102f41438(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lStack_40;
  undefined8 uStack_38;
  
  plVar3 = &lStack_40;
  *(undefined8 *)(param_4 + _DAT_112f29e40) = 0;
  *(undefined8 *)(param_4 + _DAT_112f29e60) = 0;
  *(undefined8 *)(param_4 + _DAT_112f29e50) = 0;
  *(undefined8 *)(param_4 + _DAT_112f29e68) = 0;
  *(undefined8 *)(param_4 + _DAT_112f29e48) = param_1;
  puVar1 = (undefined8 *)(param_4 + _DAT_112f29e58);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  func_0x000107c61174();
  func_0x000100d2c654(param_2,param_3);
  uVar2 = param_1;
  func_0x000107c4f068();
  *(undefined8 *)(param_4 + _DAT_112f29e38) = uVar2;
  uVar2 = 0;
  FUN_102f478d8();
  lStack_40 = param_4;
  uStack_38 = uVar2;
  func_0x000107c61154(&lStack_40,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x000107c61180();
  func_0x000107c53dec();
  FUN_102f4629c();
  func_0x000100d2c664(param_2,param_3);
  func_0x000107c61170(plVar3);
  func_0x000107c61170(param_1);
  return (undefined1 *)plVar3;
}



/* Entry: 102f4153c; end: 102f41587;  */

void FUN_102f4153c(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [32];
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c61428(lVar5,auStack_68,0,0);
  func_0x000107c61618();
  if (lVar5 != 0) {
    if (param_1 == 0) {
      uVar6 = 0;
      func_0x000103b129c4();
      puVar7 = &UNK_1105eb810;
      auStack_88[0] = uVar1;
      uStack_70 = uVar6;
      func_0x000107c613fc(&UNK_1105eb810,0x18,7);
      func_0x000107c61614(puVar7 + 0x10,uVar4);
      puVar8 = &UNK_1105eb218;
      func_0x000107c613fc(&UNK_1105eb218,0x18,7);
      func_0x000107c61614(puVar8 + 0x10,lVar5);
      func_0x0001000bb420(auStack_88,auStack_a8);
      puVar9 = &UNK_1105eb838;
      func_0x000107c613fc(&UNK_1105eb838,0x58,7);
      *(undefined **)(puVar9 + 0x10) = puVar8;
      *(undefined8 *)(puVar9 + 0x18) = uVar3;
      func_0x000100102924(auStack_a8,puVar9 + 0x20);
      *(undefined8 *)(puVar9 + 0x40) = uVar4;
      *(undefined8 *)(puVar9 + 0x48) = uVar11;
      *(undefined **)(puVar9 + 0x50) = puVar7;
      uStack_b8 = 0x102f41550;
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0x42000000;
      puStack_c8 = &UNK_1000f6b44;
      puStack_c0 = &UNK_1105eb850;
      ppuVar10 = &puStack_d8;
      puStack_b0 = puVar9;
      func_0x000107c60bc4(ppuVar10);
      puVar8 = puStack_b0;
      func_0x000107c61174(uVar1);
      func_0x000107c61174(uVar3);
      func_0x000107c615f0(uVar4);
      func_0x000107c61174(uVar11);
      func_0x000107c6157c(puVar7);
      func_0x000107c61574(puVar8);
      func_0x0001000d76cc(&UNK_10db65dc0,ppuVar10);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c61170(lVar5);
      func_0x000107c61574(puVar7);
      func_0x000100183ab8(auStack_88);
      return;
    }
    func_0x000107c61170();
  }
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)();
  }
  return;
}



/* Entry: 102f41588; end: 102f415b3;  */

void FUN_102f41588(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102f415b4; end: 102f415c7;  */

void FUN_102f415b4(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c41864();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 102f415c8; end: 102f415f3;  */

void FUN_102f415c8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102f415f4; end: 102f4161f;  */

void FUN_102f415f4(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long unaff_x20;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [32];
  undefined8 auStack_88 [3];
  undefined8 uStack_70;
  undefined1 auStack_68 [24];
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  if (param_1 == 0) {
    func_0x000107c61428(lVar5 + 0x10,auStack_68,0,0);
    lVar5 = lVar5 + 0x10;
    func_0x000107c61618();
    if (lVar5 != 0) {
      uVar6 = 0;
      func_0x000103b12474();
      puVar7 = &UNK_1105eb810;
      auStack_88[0] = uVar2;
      uStack_70 = uVar6;
      func_0x000107c613fc(&UNK_1105eb810,0x18,7);
      func_0x000107c61614(puVar7 + 0x10,uVar4);
      puVar8 = &UNK_1105eb218;
      func_0x000107c613fc(&UNK_1105eb218,0x18,7);
      func_0x000107c61614(puVar8 + 0x10,lVar5);
      func_0x0001000bb420(auStack_88,auStack_a8);
      puVar9 = &UNK_1105ebc70;
      func_0x000107c613fc(&UNK_1105ebc70,0x58,7);
      *(undefined **)(puVar9 + 0x10) = puVar8;
      *(undefined8 *)(puVar9 + 0x18) = uVar3;
      func_0x000100102924(auStack_a8,puVar9 + 0x20);
      *(undefined8 *)(puVar9 + 0x40) = uVar4;
      *(undefined8 *)(puVar9 + 0x48) = 0;
      *(undefined **)(puVar9 + 0x50) = puVar7;
      uStack_b8 = 0x102f4195c;
      puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d0 = 0x42000000;
      puStack_c8 = &UNK_1000f6b44;
      puStack_c0 = &UNK_1105ebc88;
      ppuVar10 = &puStack_d8;
      puStack_b0 = puVar9;
      func_0x000107c60bc4(ppuVar10);
      puVar8 = puStack_b0;
      func_0x000107c61174(uVar2);
      func_0x000107c61174(uVar3);
      func_0x000107c615f0(uVar4);
      func_0x000107c6157c(puVar7);
      func_0x000107c61574(puVar8);
      func_0x0001000d76cc(&UNK_10db65dc0,ppuVar10);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c61170(lVar5);
      func_0x000107c61574(puVar7);
      func_0x000100183ab8(auStack_88);
    }
  }
  else if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1,pcVar1,*(undefined8 *)(unaff_x20 + 0x18));
  }
  return;
}



/* Entry: 102f41620; end: 102f41673;  */

void FUN_102f41620(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  }
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102f41674; end: 102f4168b;  */

void FUN_102f41674(code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102f41688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
             *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 102f4168c; end: 102f416e3;  */

void FUN_102f4168c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    func_0x000107c6142c();
    func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
    func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
    func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x50));
    func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x68));
    func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x80));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}


