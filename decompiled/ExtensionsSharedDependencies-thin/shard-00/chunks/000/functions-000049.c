/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 000f1ef0; end: 000f1f1f;  */

void FUN_000f1ef0(uint param_1)

{
  undefined8 *unaff_x20;
  
  FUN_000f1990(param_1 & 0x1010101,*unaff_x20);
  return;
}



/* Entry: 000f1f20; end: 000f1f4b;  */

undefined8 FUN_000f1f20(undefined8 param_1,ulong param_2,long param_3)

{
  code *pcVar1;
  
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf1f48);
    (*pcVar1)();
  }
  if (param_2 < *(ulong *)(param_3 + 0x10)) {
    FUN_0019b52c(param_1,param_3 + param_2 * 0x30 + 0x20);
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xf1f4c);
  (*pcVar1)();
}



/* Entry: 000f1f4c; end: 000f207b;  */

void FUN_000f1f4c(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  
  uVar3 = *unaff_x20;
  uVar2 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar2 & 1) == 0) {
    func_0x000cab24();
  }
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf1fc0);
    (*pcVar1)();
  }
  if (param_2 < *(ulong *)(uVar3 + 0x10)) {
    func_0x000f2254(param_1,uVar3 + param_2 * 0x30 + 0x20);
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xf1fc4);
  (*pcVar1)();
}



/* Entry: 000f207c; end: 000f2217;  */

void FUN_000f207c(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = *param_1;
  uVar5 = param_1[1];
  uVar15 = param_1[2];
  uVar9 = *(undefined1 *)(param_1 + 3);
  uVar2 = param_1[4];
  uVar6 = param_1[5];
  uVar16 = param_1[8];
  if ((param_2 & 1) == 0) {
    _swift_isUniquelyReferenced_nonNull_native();
    lVar17 = param_1[8];
    if ((uVar16 & 1) == 0) {
      func_0x000cab24();
    }
    if (*(ulong *)(lVar17 + 0x10) <= (ulong)param_1[6]) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0xf2218);
      (*pcVar11)();
    }
    plVar14 = (long *)param_1[7];
    lVar13 = lVar17 + param_1[6] * 0x30;
    uVar3 = *(undefined8 *)(lVar13 + 0x20);
    uVar7 = *(undefined8 *)(lVar13 + 0x28);
    uVar12 = *(undefined8 *)(lVar13 + 0x30);
    uVar4 = *(undefined8 *)(lVar13 + 0x40);
    uVar8 = *(undefined8 *)(lVar13 + 0x48);
    *(undefined8 *)(lVar13 + 0x20) = uVar1;
    *(undefined8 *)(lVar13 + 0x28) = uVar5;
    *(undefined8 *)(lVar13 + 0x30) = uVar15;
    uVar10 = *(undefined1 *)(lVar13 + 0x38);
    *(undefined1 *)(lVar13 + 0x38) = uVar9;
    *(undefined8 *)(lVar13 + 0x40) = uVar2;
    *(undefined8 *)(lVar13 + 0x48) = uVar6;
    FUN_000f2330(uVar3,uVar7,uVar12,uVar10);
    FUN_00023358(uVar4,uVar8);
    *plVar14 = lVar17;
  }
  else {
    FUN_000f2290(uVar1,uVar5,uVar15,uVar9);
    func_0x00023304(uVar2,uVar6);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar17 = param_1[8];
    if ((uVar16 & 1) == 0) {
      func_0x000cab24();
    }
    if (*(ulong *)(lVar17 + 0x10) <= (ulong)param_1[6]) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0xf2204);
      (*pcVar11)();
    }
    plVar14 = (long *)param_1[7];
    lVar13 = lVar17 + param_1[6] * 0x30;
    uVar3 = *(undefined8 *)(lVar13 + 0x20);
    uVar7 = *(undefined8 *)(lVar13 + 0x28);
    uVar12 = *(undefined8 *)(lVar13 + 0x30);
    uVar4 = *(undefined8 *)(lVar13 + 0x40);
    uVar8 = *(undefined8 *)(lVar13 + 0x48);
    *(undefined8 *)(lVar13 + 0x20) = uVar1;
    *(undefined8 *)(lVar13 + 0x28) = uVar5;
    *(undefined8 *)(lVar13 + 0x30) = uVar15;
    uVar10 = *(undefined1 *)(lVar13 + 0x38);
    *(undefined1 *)(lVar13 + 0x38) = uVar9;
    *(undefined8 *)(lVar13 + 0x40) = uVar2;
    *(undefined8 *)(lVar13 + 0x48) = uVar6;
    FUN_000f2330(uVar3,uVar7,uVar12,uVar10);
    FUN_00023358(uVar4,uVar8);
    *plVar14 = lVar17;
    uVar1 = param_1[4];
    uVar2 = param_1[5];
    FUN_000f2330(*param_1,param_1[1],param_1[2],*(undefined1 *)(param_1 + 3));
    FUN_00023358(uVar1,uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(param_1);
  return;
}



/* Entry: 000f2218; end: 000f228f;  */

undefined8 FUN_000f2218(undefined8 param_1,undefined8 param_2)

{
  FUN_0019b52c(param_2,param_1);
  return param_2;
}



/* Entry: 000f2290; end: 000f22b3;  */

void FUN_000f2290(undefined8 param_1,undefined8 param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  
  if (((param_3 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0 &&
      ((param_4 ^ 0xffffffff) & 0xff) == 0) {
    return;
  }
  uVar1 = (uint)(param_3 >> 0x3c) & 3 | (param_4 & 0x3f) << 2;
  if (uVar1 == 5) {
    _swift_bridgeObjectRetain();
    param_3 = param_3 & 0xcfffffffffffffff;
  }
  else {
    if (uVar1 != 4) {
      if (uVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(param_2);
        return;
      }
      return;
    }
    _swift_bridgeObjectRetain();
  }
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    _swift_retain(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0077b53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_0099bb30)(param_3 & 0x3fffffffffffffff);
  return;
}



/* Entry: 000f22b4; end: 000f232f;  */

void FUN_000f22b4(undefined8 param_1,undefined8 param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = (uint)(param_3 >> 0x3c) & 3 | (param_4 & 0x3f) << 2;
  if (uVar1 == 5) {
    _swift_bridgeObjectRetain();
    param_3 = param_3 & 0xcfffffffffffffff;
  }
  else {
    if (uVar1 != 4) {
      if (uVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(param_2);
        return;
      }
      return;
    }
    _swift_bridgeObjectRetain();
  }
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    _swift_retain(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0077b53c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_0099bb30)(param_3 & 0x3fffffffffffffff);
  return;
}



/* Entry: 000f2330; end: 000f2353;  */

void FUN_000f2330(undefined8 param_1,undefined8 param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  
  if (((param_3 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0 &&
      ((param_4 ^ 0xffffffff) & 0xff) == 0) {
    return;
  }
  uVar1 = (uint)(param_3 >> 0x3c) & 3 | (param_4 & 0x3f) << 2;
  if (uVar1 == 5) {
    _swift_bridgeObjectRelease();
    param_3 = param_3 & 0xcfffffffffffffff;
  }
  else {
    if (uVar1 != 4) {
      if (uVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_2);
        return;
      }
      return;
    }
    _swift_bridgeObjectRelease();
  }
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    _swift_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(param_3 & 0x3fffffffffffffff);
  return;
}



/* Entry: 000f2354; end: 000f2403;  */

void FUN_000f2354(undefined8 param_1,undefined8 param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  
  uVar1 = (uint)(param_3 >> 0x3c) & 3 | (param_4 & 0x3f) << 2;
  if (uVar1 == 5) {
    _swift_bridgeObjectRelease();
    param_3 = param_3 & 0xcfffffffffffffff;
  }
  else {
    if (uVar1 != 4) {
      if (uVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(param_2);
        return;
      }
      return;
    }
    _swift_bridgeObjectRelease();
  }
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    _swift_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(param_3 & 0x3fffffffffffffff);
  return;
}



/* Entry: 000f2404; end: 000f2407;  */

undefined8 FUN_000f2404(undefined8 param_1)

{
  _swift_bridgeObjectRetain();
  func_0x00023304(0,0xc000000000000000);
  _swift_bridgeObjectRelease(param_1);
  FUN_00023358(0,0xc000000000000000);
  return param_1;
}



/* Entry: 000f2408; end: 000f2483;  */

void FUN_000f2408(long *param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_00109a58();
  lVar1 = param_1[2];
  lVar2 = *param_1;
  if (lVar2 == 0) {
    if (lVar1 == 0) {
      return;
    }
  }
  else if (lVar1 == param_1[1] - lVar2) {
    return;
  }
  if (*(char *)(lVar2 + lVar1) == 'n') {
    func_0x000115a8(0xae65a8,&UNK_007cd3b0);
    _swift_initStaticObject();
    FUN_0010a49c();
  }
  return;
}



/* Entry: 000f2484; end: 000f2493;  */

undefined1  [16] FUN_000f2484(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe400000000000000;
  auVar1._0_8_ = 0x6c6c756e;
  return auVar1;
}



/* Entry: 000f2494; end: 000f24a7;  */

void FUN_000f2494(void)

{
  FUN_000f2408();
  return;
}



/* Entry: 000f24a8; end: 000f24b7;  */

void FUN_000f24a8(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 000f24b8; end: 000f24ff;  */

undefined8 FUN_000f24b8(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000f4024();
  _swift_bridgeObjectRelease(param_1);
  return uVar1;
}



/* Entry: 000f2500; end: 000f254f;  */

void FUN_000f2500(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  func_0x000f4024();
  _swift_bridgeObjectRelease(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}



/* Entry: 000f2550; end: 000f2a27;  */

undefined1  [16] FUN_000f2550(uint param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  bool bVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  ulong uVar13;
  bool bVar14;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long unaff_x21;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined1 auVar22 [16];
  undefined8 uStack_138;
  char *pcStack_118;
  undefined *puStack_100;
  undefined2 uStack_f8;
  undefined *apuStack_f0 [3];
  undefined *puStack_d8;
  undefined **ppuStack_d0;
  char *pcStack_c8;
  undefined8 uStack_c0;
  undefined2 uStack_b8;
  ulong uStack_b0;
  undefined2 uStack_a8;
  byte bStack_a6;
  byte bStack_a5;
  byte bStack_a4;
  byte bStack_a3;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  uVar9 = 0;
  FUN_000540b4(0,1,1,PTR___swiftEmptyArrayStorage_0099b8f0);
  uVar19 = *(ulong *)(uVar9 + 0x10);
  if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar19) {
    uVar9 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
    FUN_000540b4(uVar9,uVar19 + 1,1);
  }
  *(ulong *)(uVar9 + 0x10) = uVar19 + 1;
  *(undefined1 *)(uVar9 + uVar19 + 0x20) = 0x7b;
  pcStack_c8 = (char *)0x0;
  uStack_c0 = 0;
  uStack_b8 = 0x100;
  uStack_a8 = 0x100;
  bStack_a6 = (byte)param_1 & 1;
  bStack_a5 = (byte)(param_1 >> 8) & 1;
  bStack_a4 = (byte)(param_1 >> 0x10) & 1;
  bStack_a3 = (byte)(param_1 >> 0x18) & 1;
  uVar15 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if ((*(byte *)(param_2 + 0x20) & 0x3f) < 6) {
    uVar19 = ~(-1L << (uVar15 & 0x3f));
  }
  uVar19 = uVar19 & *(ulong *)(param_2 + 0x40);
  uStack_b0 = uVar9;
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(param_2);
  lVar20 = 0;
  pcStack_118 = (char *)0x0;
  uStack_138 = 0;
  bVar14 = true;
  do {
    while (uVar19 == 0) {
      bVar8 = SCARRY8(lVar20,1);
      lVar20 = lVar20 + 1;
      if (bVar8) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0xf29c8);
        (*pcVar7)();
      }
      if ((long)(uVar15 + 0x3f >> 6) <= lVar20) {
        _swift_release(param_2);
        uVar19 = uStack_b0;
        uVar15 = uStack_b0;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar16 = uVar19;
        if ((uVar15 & 1) == 0) {
          uVar16 = 0;
          FUN_000540b4(0,*(long *)(uVar19 + 0x10) + 1,1,uVar19);
        }
        uVar15 = *(ulong *)(uVar16 + 0x10);
        uVar19 = uVar15 + 1;
        uVar13 = uVar16;
        if (*(ulong *)(uVar16 + 0x18) >> 1 <= uVar15) {
          uVar13 = (ulong)(1 < *(ulong *)(uVar16 + 0x18));
          FUN_000540b4(uVar13,uVar19,1,uVar16);
        }
        *(ulong *)(uVar13 + 0x10) = uVar19;
        ppuVar12 = (undefined **)(uVar13 + 0x20);
        *(undefined1 *)((long)ppuVar12 + uVar15) = 0x7d;
        uStack_a8 = 0x2c;
        uStack_b0 = uVar13;
        _swift_bridgeObjectRetain(uVar13);
        __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(ppuVar12,uVar19);
        _swift_bridgeObjectRelease(uVar9);
        _swift_bridgeObjectRelease(uVar13);
        func_0x000f4310(&pcStack_c8);
LAB_000f294c:
        auVar22._8_8_ = uVar19;
        auVar22._0_8_ = ppuVar12;
        return auVar22;
      }
      uVar19 = ((ulong *)(param_2 + 0x40))[lVar20];
    }
    uVar16 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
    uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
    uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
    uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
    uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) | lVar20 << 6;
    puVar17 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar16 * 0x10);
    uVar18 = *puVar17;
    uVar3 = puVar17[1];
    puVar17 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar16 * 0x30);
    uVar1 = *puVar17;
    uVar4 = puVar17[1];
    uVar21 = puVar17[2];
    uVar6 = *(undefined1 *)(puVar17 + 3);
    uVar2 = puVar17[4];
    uVar5 = puVar17[5];
    if (bVar14) {
      pcStack_c8 = ",";
      uStack_c0 = 1;
      uStack_b8 = 2;
      _swift_bridgeObjectRetain(uVar3);
      FUN_000f2290(uVar1,uVar4,uVar21,uVar6);
      func_0x00023304(uVar2,uVar5);
      pcStack_118 = ",";
      uStack_138 = 1;
    }
    else {
      if (pcStack_118 == (char *)0x0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0xf29cc);
        (*pcVar7)();
      }
      _swift_bridgeObjectRetain(uVar3);
      FUN_000f2290(uVar1,uVar4,uVar21,uVar6);
      func_0x00023304(uVar2,uVar5);
      FUN_000c7840(&pcStack_c8,pcStack_118,uStack_138);
    }
    FUN_000fdff8(uVar18,uVar3);
    _swift_bridgeObjectRelease(uVar3);
    FUN_000c7840(":",1);
    puStack_d8 = &UNK_009b4018;
    ppuStack_d0 = &PTR_DAT_009acd30;
    puVar10 = &UNK_009accc8;
    _swift_allocObject(&UNK_009accc8,0x40,7);
    *(undefined8 *)(puVar10 + 0x10) = uVar1;
    *(undefined8 *)(puVar10 + 0x18) = uVar4;
    *(undefined8 *)(puVar10 + 0x20) = uVar21;
    puVar10[0x28] = uVar6;
    *(undefined8 *)(puVar10 + 0x30) = uVar2;
    *(undefined8 *)(puVar10 + 0x38) = uVar5;
    ppuVar12 = apuStack_f0;
    apuStack_f0[0] = puVar10;
    FUN_0001393c(ppuVar12,&UNK_009b4018);
    puStack_98 = ppuVar12[1];
    puStack_a0 = *ppuVar12;
    puStack_88 = ppuVar12[3];
    puStack_90 = ppuVar12[2];
    puStack_78 = ppuVar12[5];
    puStack_80 = ppuVar12[4];
    puStack_100 = PTR___swiftEmptyArrayStorage_0099b8f0;
    uStack_f8 = 0x100;
    FUN_000f2290(uVar1,uVar4,uVar21,uVar6);
    func_0x00023304(uVar2,uVar5);
    ppuVar12 = &puStack_a0;
    FUN_000f5af0(&puStack_100,param_1 & 0x1010101);
    puVar10 = puStack_100;
    if (unaff_x21 != 0) {
      _swift_bridgeObjectRelease(puStack_100);
      FUN_000f438c(apuStack_f0);
      FUN_000f2330(uVar1,uVar4,uVar21,uVar6);
      FUN_00023358(uVar2,uVar5);
      _swift_bridgeObjectRelease(uVar9);
      _swift_release(param_2);
      func_0x000f4310(&pcStack_c8);
      goto LAB_000f294c;
    }
    uVar19 = uVar19 - 1 & uVar19;
    uVar18 = *(undefined8 *)(puStack_100 + 0x10);
    _swift_bridgeObjectRetain(puStack_100);
    puVar11 = puVar10 + 0x20;
    __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(puVar11,uVar18);
    _swift_bridgeObjectRelease_n(puVar10,2);
    FUN_000f438c(apuStack_f0);
    func_0x000c79f0(puVar11,uVar18);
    FUN_000f2330(uVar1,uVar4,uVar21,uVar6);
    FUN_00023358(uVar2,uVar5);
    bVar14 = false;
  } while( true );
}



/* Entry: 000f2a28; end: 000f2d13;  */

/* WARNING: Removing unreachable block (ram,0x000f2c38) */
/* WARNING: Removing unreachable block (ram,0x000f2c20) */
/* WARNING: Removing unreachable block (ram,0x000f2c24) */

void FUN_000f2a28(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 auStack_e0 [6];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  char *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  char *pcStack_60;
  undefined8 uStack_58;
  
  pcVar3 = section_00000068.segname + 3;
  FUN_0010a6f0();
  if (unaff_x21 == 0) {
    lVar5 = param_1[0xb] + -1;
    if (SBORROW8(param_1[0xb],1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xf2cc0);
      (*pcVar2)();
    }
    param_1[0xb] = lVar5;
    if (lVar5 < 0) {
      FUN_000c7004();
      _swift_allocError(&UNK_009ad5a0,pcVar3,0,0);
      *(undefined8 *)(pcVar3 + 8) = 0x13;
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3[4] = '\0';
      pcVar3[5] = '\0';
      pcVar3[6] = '\0';
      pcVar3[7] = '\0';
      _swift_willThrow();
    }
    else {
      FUN_00106a98();
      if (((ulong)pcVar3 & 1) == 0) {
        FUN_00106a08();
        do {
          FUN_0010a6f0(0x3a);
          uStack_b0 = 0;
          uStack_a8 = 0;
          uStack_a0 = 0x3000000000000000;
          uStack_98 = 0xff;
          uStack_88 = 0xc000000000000000;
          pcStack_90 = (char *)0x0;
          FUN_000f5dcc(param_1);
          uStack_68 = CONCAT71(uStack_97,uStack_98);
          uStack_78 = uStack_a8;
          uStack_80 = uStack_b0;
          uStack_70 = uStack_a0;
          uStack_58 = uStack_88;
          pcStack_60 = pcStack_90;
          FUN_000f2218(&uStack_80,auStack_e0);
          uVar4 = *unaff_x20;
          _swift_isUniquelyReferenced_nonNull_native(uVar4);
          auStack_e0[0] = *unaff_x20;
          func_0x000f34f8(&uStack_80,pcVar3,param_2,uVar4);
          _swift_bridgeObjectRelease(param_2);
          *unaff_x20 = auStack_e0[0];
          FUN_00109a58();
          uVar4 = uStack_88;
          pcVar3 = pcStack_90;
          uVar1 = param_1[2];
          lVar5 = *param_1;
          if (lVar5 == 0) {
            if (uVar1 != 0) goto LAB_000f2bc8;
          }
          else if (uVar1 != param_1[1] - lVar5) {
LAB_000f2bc8:
            if (*(char *)(lVar5 + uVar1) == '}') {
              if ((lVar5 == 0) || ((ulong)(param_1[1] - lVar5) <= uVar1)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0xf2cc4);
                (*pcVar2)();
              }
              param_1[2] = uVar1 + 1;
              lVar5 = param_1[0xb] + 1;
              if (SCARRY8(param_1[0xb],1)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0xf2cc8);
                (*pcVar2)();
              }
              param_1[0xb] = lVar5;
              if (lVar5 <= param_1[4]) {
                FUN_000f2330(uStack_b0,uStack_a8,uStack_a0,uStack_98);
                FUN_00023358(pcVar3,uVar4);
                return;
              }
              __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
                        ("Fatal error",0xb,2,0xd000000000000039,0x80000000008b8850,
                         "SwiftProtobuf/JSONScanner.swift",0x1f,2,0x1ab,0);
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0xf2d14);
              (*pcVar2)();
            }
          }
          FUN_0010a6f0(0x2c);
          param_2 = uStack_88;
          pcVar3 = pcStack_90;
          FUN_000f2330(uStack_b0,uStack_a8,uStack_a0,uStack_98);
          FUN_00023358();
          FUN_00106a08();
        } while( true );
      }
    }
  }
  return;
}



/* Entry: 000f2d14; end: 000f2d43;  */

void FUN_000f2d14(uint param_1)

{
  undefined8 *unaff_x20;
  
  FUN_000f2550(param_1 & 0x1010101,*unaff_x20);
  return;
}



/* Entry: 000f2d44; end: 000f2da3;  */

undefined8 FUN_000f2d44(undefined8 param_1)

{
  FUN_0019aad0(PTR___swiftEmptyArrayStorage_0099b8f0);
  _swift_bridgeObjectRelease();
  _swift_bridgeObjectRetain(param_1);
  func_0x00023304(0,0xc000000000000000);
  _swift_bridgeObjectRelease(param_1);
  FUN_00023358(0,0xc000000000000000);
  return param_1;
}



/* Entry: 000f2da4; end: 000f2e8f;  */

void FUN_000f2da4(undefined8 *param_1,long param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (*(long *)(param_4 + 0x10) == 0) {
    uVar3 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0x2000000000000000;
    uVar1 = 0xff;
  }
  else {
    _swift_bridgeObjectRetain(param_4);
    FUN_000202c0();
    if ((param_3 & 1) == 0) {
      uVar3 = 0;
      uVar4 = 0;
      uVar5 = 0;
      uVar6 = 0;
      uVar7 = 0x2000000000000000;
      uVar1 = 0xff;
    }
    else {
      puVar2 = (undefined8 *)(*(long *)(param_4 + 0x38) + param_2 * 0x30);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      uVar7 = puVar2[2];
      uVar5 = puVar2[4];
      uVar6 = puVar2[5];
      uVar1 = (ulong)*(byte *)(puVar2 + 3);
      FUN_000f2290(uVar3,uVar4,uVar7);
      func_0x00023304(uVar5,uVar6);
    }
    _swift_bridgeObjectRelease(param_4);
  }
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar7;
  param_1[3] = uVar1;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  return;
}



/* Entry: 000f2e90; end: 000f2f6f;  */

void FUN_000f2e90(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  char cStack_48;
  undefined7 uStack_47;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (((param_1[2] & 0x3000000000000000) == 0x2000000000000000) && (*(char *)(param_1 + 3) == -1)) {
    func_0x000f32dc(&uStack_60,param_2,param_3);
    _swift_bridgeObjectRelease(param_3);
    FUN_000f42a8(uStack_60,uStack_58,uStack_50,CONCAT71(uStack_47,cStack_48),uStack_40,uStack_38,
                 FUN_000f2330,FUN_00023358);
  }
  else {
    uStack_58 = param_1[1];
    uStack_60 = *param_1;
    uStack_38 = param_1[5];
    uStack_40 = param_1[4];
    uVar1 = *unaff_x20;
    uStack_50 = param_1[2];
    cStack_48 = *(char *)(param_1 + 3);
    _swift_isUniquelyReferenced_nonNull_native(uVar1);
    uVar2 = *unaff_x20;
    func_0x000f34f8(&uStack_60,param_2,param_3,uVar1);
    _swift_bridgeObjectRelease(param_3);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Entry: 000f2f70; end: 000f2ff3;  */

undefined1  [16] FUN_000f2f70(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0xa8;
  if (PTR__swift_coroFrameAlloc_0099b998 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0xa8,0x55c);
  }
  *param_1 = lVar1;
  *(undefined8 *)(lVar1 + 0x98) = param_3;
  *(undefined8 **)(lVar1 + 0xa0) = unaff_x20;
  *(undefined8 *)(lVar1 + 0x90) = param_2;
  FUN_000f2da4(lVar1 + 0x60,param_2,param_3,*unaff_x20);
  auVar2._8_8_ = lVar1 + 0x60;
  auVar2._0_8_ = FUN_000f2ff4;
  return auVar2;
}



/* Entry: 000f2ff4; end: 000f320b;  */

void FUN_000f2ff4(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  param_1 = (undefined8 *)*param_1;
  if ((param_2 & 1) == 0) {
    uVar8 = param_1[0x13];
    puVar4 = (undefined8 *)param_1[0x14];
    uVar9 = param_1[0x12];
    if (((param_1[0xe] & 0x3000000000000000) != 0x2000000000000000) ||
       (*(char *)(param_1 + 0xf) != -1)) {
      param_1[7] = param_1[0xd];
      param_1[6] = param_1[0xc];
      param_1[8] = param_1[0xe];
      *(char *)(param_1 + 9) = *(char *)(param_1 + 0xf);
      param_1[0xb] = param_1[0x11];
      param_1[10] = param_1[0x10];
      _swift_bridgeObjectRetain(uVar8);
      uVar7 = *puVar4;
      _swift_isUniquelyReferenced_nonNull_native(uVar7);
      uStack_90 = *puVar4;
      func_0x000f34f8(param_1 + 6,uVar9,uVar8,uVar7);
      _swift_bridgeObjectRelease(uVar8);
      *puVar4 = uStack_90;
      goto LAB_000f31e8;
    }
    _swift_bridgeObjectRetain(uVar8);
    func_0x000f32dc(&uStack_90,uVar9,uVar8);
    _swift_bridgeObjectRelease(uVar8);
    uVar8 = uStack_90;
  }
  else {
    uVar1 = param_1[0xe];
    uVar3 = param_1[0xf];
    uVar8 = param_1[0x13];
    puVar4 = (undefined8 *)param_1[0x14];
    uVar9 = param_1[0x12];
    if (((uVar1 & 0x3000000000000000) == 0x2000000000000000) && ((uVar3 & 0xff) == 0xff)) {
      _swift_bridgeObjectRetain(uVar8);
      func_0x000f32dc(&uStack_90,uVar9,uVar8);
      _swift_bridgeObjectRelease(uVar8);
      FUN_000f42a8(uStack_90,uStack_88,uStack_80,uStack_78,uStack_70,uStack_68,FUN_000f2330,
                   FUN_00023358);
    }
    else {
      uVar7 = param_1[0x10];
      uVar5 = param_1[0x11];
      uVar2 = param_1[0xc];
      uVar6 = param_1[0xd];
      *param_1 = uVar2;
      param_1[1] = uVar6;
      param_1[2] = uVar1;
      *(char *)(param_1 + 3) = (char)uVar3;
      param_1[4] = uVar7;
      param_1[5] = uVar5;
      _swift_bridgeObjectRetain(uVar8);
      FUN_000f42a8(uVar2,uVar6,uVar1,uVar3,uVar7,uVar5,FUN_000f2290,0x23304);
      uVar7 = *puVar4;
      _swift_isUniquelyReferenced_nonNull_native(uVar7);
      uStack_90 = *puVar4;
      func_0x000f34f8(param_1,uVar9,uVar8,uVar7);
      _swift_bridgeObjectRelease(uVar8);
      *puVar4 = uStack_90;
    }
    uStack_88 = param_1[0xd];
    uStack_80 = param_1[0xe];
    uStack_78 = param_1[0xf];
    uStack_70 = param_1[0x10];
    uStack_68 = param_1[0x11];
    uVar8 = param_1[0xc];
  }
  FUN_000f42a8(uVar8,uStack_88,uStack_80,uStack_78,uStack_70,uStack_68,FUN_000f2330,FUN_00023358);
LAB_000f31e8:
                    /* WARNING: Could not recover jumptable at 0x0077a5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_0099a260)(param_1);
  return;
}



/* Entry: 000f320c; end: 000f33d3;  */

void FUN_000f320c(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar2);
  FUN_000202c0();
  _swift_bridgeObjectRelease(lVar2);
  if ((param_3 & 1) == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_00120cd0();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_2 * 0x10 + 8));
    FUN_000252c8(*(long *)(lVar2 + 0x38) + param_2 * 0x20,param_1);
    FUN_000f3b40(param_2,lVar2);
    *unaff_x20 = lVar2;
  }
  return;
}



/* Entry: 000f33d4; end: 000f3613;  */

undefined8 * FUN_000f33d4(undefined8 *param_1,long param_2,undefined8 *param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar8 = *unaff_x20;
  lVar2 = param_2;
  puVar3 = param_3;
  FUN_000202c0();
  lVar6 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)puVar3 & 1;
  lVar5 = lVar6 + uVar7;
  if (SCARRY8(lVar6,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf34b4);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    FUN_00121748(lVar5,param_4 & 1);
    puVar4 = param_3;
    FUN_000202c0();
    lVar2 = param_2;
    if (((uint)puVar3 & 1) != ((uint)puVar4 & 1)) {
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(PTR___sSSN_0099b040)
      ;
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xf3474);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_00120cd0();
    lVar5 = *unaff_x20;
    goto joined_r0x000f34c8;
  }
  lVar5 = *unaff_x20;
joined_r0x000f34c8:
  if (((ulong)puVar3 & 1) != 0) {
    puVar3 = (undefined8 *)(*(long *)(lVar5 + 0x38) + lVar2 * 0x20);
    FUN_000f438c(puVar3);
    uVar9 = *param_1;
    uVar11 = param_1[3];
    uVar10 = param_1[2];
    puVar3[1] = param_1[1];
    *puVar3 = uVar9;
    puVar3[3] = uVar11;
    puVar3[2] = uVar10;
    return puVar3;
  }
  FUN_00120a70();
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(param_3);
  return param_3;
}



/* Entry: 000f3614; end: 000f3717;  */

undefined8 * FUN_000f3614(undefined8 *param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar7 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_000e1d94();
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf36e4);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    param_3 = param_3 & 1;
    func_0x00121d20(lVar4);
    uVar2 = param_2;
    FUN_000e1d94();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(PTR___sSiN_0099b2c0)
      ;
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xf36a4);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x00121048();
    lVar4 = *unaff_x20;
    goto joined_r0x000f36f8;
  }
  lVar4 = *unaff_x20;
joined_r0x000f36f8:
  if ((uVar3 & 1) != 0) {
    puVar8 = (undefined8 *)(*(long *)(lVar4 + 0x38) + uVar2 * 0x28);
    FUN_000f438c(puVar8);
    uVar10 = param_1[1];
    uVar9 = *param_1;
    uVar12 = param_1[3];
    uVar11 = param_1[2];
    puVar8[4] = param_1[4];
    puVar8[1] = uVar10;
    *puVar8 = uVar9;
    puVar8[3] = uVar12;
    puVar8[2] = uVar11;
    return puVar8;
  }
  lVar5 = lVar4 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar4 + 0x30) + uVar2 * 8) = param_2;
  FUN_00122aa4(param_1,*(long *)(lVar4 + 0x38) + uVar2 * 0x28);
  if (SCARRY8(*(long *)(lVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x120c3c);
    (*pcVar1)();
  }
  *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
  return param_1;
}



/* Entry: 000f3718; end: 000f3943;  */

void FUN_000f3718(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,uint param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  lVar3 = param_3;
  uVar4 = param_4;
  FUN_000202c0();
  lVar6 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar5 = lVar6 + uVar7;
  if (SCARRY8(lVar6,uVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0xf37f0);
    (*pcVar2)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    func_0x00121fa4(lVar5,param_5 & 1);
    uVar7 = param_4;
    FUN_000202c0();
    lVar3 = param_3;
    if (((uint)uVar4 & 1) != ((uint)uVar7 & 1)) {
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(PTR___sSSN_0099b040)
      ;
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xf37bc);
      (*pcVar2)();
    }
  }
  else if ((param_5 & 1) == 0) {
    FUN_001211c8();
    lVar5 = *unaff_x20;
    goto joined_r0x000f3804;
  }
  lVar5 = *unaff_x20;
joined_r0x000f3804:
  if ((uVar4 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x38) + lVar3 * 0x10);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    return;
  }
  FUN_00120c3c();
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(param_4);
  return;
}



/* Entry: 000f3944; end: 000f3b3f;  */

void FUN_000f3944(undefined8 *param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_000e1d94();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf3a14);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar4) {
    param_3 = param_3 & 1;
    func_0x001224e0(lVar4);
    uVar2 = param_2;
    FUN_000e1d94();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      __ss53KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTSys5NeverOypXpF(PTR___sSiN_0099b2c0)
      ;
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xf39d4);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    func_0x00121480();
    lVar4 = *unaff_x20;
    goto joined_r0x000f3a28;
  }
  lVar4 = *unaff_x20;
joined_r0x000f3a28:
  if ((uVar3 & 1) != 0) {
    puVar6 = (undefined8 *)(*(long *)(lVar4 + 0x38) + uVar2 * 0x28);
    uVar9 = *param_1;
    uVar11 = param_1[3];
    uVar10 = param_1[2];
    puVar6[1] = param_1[1];
    *puVar6 = uVar9;
    puVar6[3] = uVar11;
    puVar6[2] = uVar10;
    puVar6[4] = param_1[4];
    return;
  }
  lVar5 = lVar4 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar4 + 0x30) + uVar2 * 8) = param_2;
  puVar6 = (undefined8 *)(*(long *)(lVar4 + 0x38) + uVar2 * 0x28);
  uVar9 = *param_1;
  uVar11 = param_1[3];
  uVar10 = param_1[2];
  puVar6[1] = param_1[1];
  *puVar6 = uVar9;
  puVar6[3] = uVar11;
  puVar6[2] = uVar10;
  puVar6[4] = param_1[4];
  if (SCARRY8(*(long *)(lVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x120bd4);
    (*pcVar1)();
  }
  *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
  return;
}



/* Entry: 000f3b40; end: 000f42a7;  */

void FUN_000f3b40(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar6 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar8 = param_1 + 1 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0) {
    uVar6 = ~uVar6;
    uVar9 = param_1;
    __ss10_HashTableV12previousHole6beforeAB6BucketVAF_tF(param_1,lVar1,uVar6);
    uVar9 = uVar9 + 1 & uVar6;
    do {
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar8 * 0x10);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      __ss6HasherV5_seedABSi_tcfC(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      _swift_bridgeObjectRetain(uVar11);
      puVar5 = auStack_a8;
      __sSS4hash4intoys6HasherVz_tF(puVar5,uVar10,uVar11);
      __ss6HasherV9_finalizeSiyF();
      _swift_bridgeObjectRelease(uVar11);
      uVar7 = (ulong)puVar5 & uVar6;
      if ((long)param_1 < (long)uVar9) {
        if (uVar7 < uVar9) {
LAB_000f3c34:
          if ((long)param_1 < (long)uVar7) goto LAB_000f3bbc;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 0x10);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar8 * 0x10);
        if (((long)param_1 < (long)uVar8) || (puVar3 + 2 <= puVar2 || param_1 != uVar8)) {
          uVar10 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar10;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 0x20);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar8 * 0x20);
        if ((((long)param_1 < (long)uVar8) || (puVar3 + 4 <= puVar2)) || (param_1 != uVar8)) {
          uVar10 = *puVar3;
          uVar12 = puVar3[3];
          uVar11 = puVar3[2];
          puVar2[1] = puVar3[1];
          *puVar2 = uVar10;
          puVar2[3] = uVar12;
          puVar2[2] = uVar11;
          param_1 = uVar8;
        }
      }
      else if (uVar9 <= uVar7) goto LAB_000f3c34;
LAB_000f3bbc:
      uVar8 = uVar8 + 1 & uVar6;
    } while ((*(ulong *)(lVar1 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0);
  }
  uVar6 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar6) = *(ulong *)(lVar1 + uVar6) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0xf3cf0);
  (*pcVar4)();
}



/* Entry: 000f42a8; end: 000f4343;  */

void FUN_000f42a8(undefined8 param_1,undefined8 param_2,ulong param_3,char param_4,
                 undefined8 param_5,undefined8 param_6,code *param_7,code *UNRECOVERED_JUMPTABLE)

{
  if (((param_3 & 0x3000000000000000) == 0x2000000000000000) && (param_4 == -1)) {
    return;
  }
  (*param_7)();
                    /* WARNING: Could not recover jumptable at 0x000f430c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_5,param_6);
  return;
}



/* Entry: 000f4344; end: 000f438b;  */

void FUN_000f4344(void)

{
  long unaff_x20;
  
  if ((((*(ulong *)(unaff_x20 + 0x20) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
     (*(char *)(unaff_x20 + 0x28) != -1)) {
    FUN_000f2354(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  }
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x0077b2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_0099b9a8)();
  return;
}



/* Entry: 000f438c; end: 000f43ab;  */

void FUN_000f438c(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000f43a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(*param_1);
  return;
}



/* Entry: 000f43ac; end: 000f45df;  */

undefined * FUN_000f43ac(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar6 = param_2 >> 0x38 & 0xf;
  if ((param_2 >> 0x3c & 1) == 0) {
    uVar4 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar4 = uVar6;
    }
  }
  else {
    uVar4 = param_1;
    __sSS8UTF8ViewV13_foreignCountSiyF(param_1,param_2);
  }
  puVar2 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (uVar4 != 0) {
    FUN_000e287c(0,uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xf45e0);
      (*pcVar3)();
    }
    uVar5 = (uint)(param_1 >> 0x3b) & 1;
    if ((param_2 & 0x1000000000000000) == 0) {
      uVar5 = 1;
    }
    uVar1 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = uVar6;
    }
    uVar6 = 0xf;
    do {
      while( true ) {
        uVar8 = uVar6;
        if ((uVar6 & 0xc) == 4L << uVar5) {
          FUN_0002269c(uVar6,param_1,param_2);
        }
        uVar7 = uVar8 >> 0x10;
        if (uVar1 <= uVar7) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0xf45bc);
          (*pcVar3)();
        }
        if ((param_2 >> 0x3c & 1) == 0) {
          if ((param_2 >> 0x3d & 1) == 0) {
            uVar8 = (param_2 & 0xfffffffffffffff) + 0x20;
            if ((param_1 >> 0x3c & 1) == 0) {
              uVar8 = param_1;
              __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg(param_1,param_2);
            }
            uVar8 = (ulong)*(byte *)(uVar8 + uVar7);
          }
          else {
            uStack_70 = param_1;
            uStack_68 = param_2 & 0xffffffffffffff;
            uVar8 = (ulong)*(byte *)((long)&uStack_70 + uVar7);
          }
        }
        else {
          __sSS8UTF8ViewV17_foreignSubscript8positions5UInt8VSS5IndexV_tF();
        }
        uVar7 = *(ulong *)(puVar2 + 0x10);
        if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar7) {
          FUN_000e287c(1 < *(ulong *)(puVar2 + 0x18),uVar7 + 1,1);
        }
        *(ulong *)(puVar2 + 0x10) = uVar7 + 1;
        *(ulong *)(puVar2 + uVar7 * 8 + 0x20) = uVar8 & 0xff;
        if ((uVar6 & 0xc) != 4L << uVar5) break;
        FUN_0002269c(uVar6,param_1,param_2);
        if ((param_2 >> 0x3c & 1) == 0) goto LAB_000f4458;
LAB_000f4500:
        if (uVar1 <= uVar6 >> 0x10) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0xf45c0);
          (*pcVar3)();
        }
        __sSS8UTF8ViewV13_foreignIndex5afterSS0D0VAF_tF(uVar6,param_1,param_2);
        uVar4 = uVar4 - 1;
        if (uVar4 == 0) {
          return puVar2;
        }
      }
      if ((param_2 >> 0x3c & 1) != 0) goto LAB_000f4500;
LAB_000f4458:
      uVar6 = (uVar6 & 0xffffffffffff0000) + 0x10004;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return puVar2;
}



/* Entry: 000f45e0; end: 000f4bb3;  */

undefined1  [16] FUN_000f45e0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 *puVar7;
  long *plVar8;
  uint uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  long lVar18;
  long unaff_x22;
  ulong unaff_x23;
  ulong uVar19;
  undefined1 auVar20 [16];
  
  FUN_000f43ac();
  uVar19 = param_1[2];
  if (uVar19 < 0x14) goto LAB_000f460c;
  plVar8 = param_1 + 4;
  uVar17 = param_1[7] - 0x3a;
  bVar4 = *plVar8 - 0x3aU < 0xfffffffffffffff6;
  bVar5 = param_1[5] - 0x3a < 0xfffffffffffffff6;
  bVar6 = param_1[6] - 0x3a < 0xfffffffffffffff6;
  if ((((bVar4 || bVar5) || bVar6) || uVar17 < 0xfffffffffffffff5) ||
      ((!bVar4 && !bVar5) && !bVar6) && uVar17 == 0xfffffffffffffff5) {
LAB_000f467c:
    puVar7 = param_1;
    FUN_000c7004();
    _swift_allocError(&UNK_009ad5a0,puVar7,0,0);
    puVar7[1] = 0xf;
    *puVar7 = 0;
    _swift_willThrow();
    _swift_bridgeObjectRelease(param_1);
    goto LAB_000f46b8;
  }
  if ((param_1[8] != 0x2d) ||
     (puVar1 = (undefined *)(*plVar8 * 1000 + param_1[5] * 100 + param_1[6] * 10 + param_1[7]),
     puVar1 < &UNK_0000d051)) goto LAB_000f460c;
  if ((param_1[9] - 0x3a < 0xfffffffffffffff6) || (param_1[10] - 0x3a < 0xfffffffffffffff6))
  goto LAB_000f467c;
  if ((param_1[0xb] != 0x2d) ||
     (uVar17 = param_1[10] + param_1[9] * 10, uVar17 - 0x21d < 0xfffffffffffffff4))
  goto LAB_000f460c;
  if ((param_1[0xc] - 0x3a < 0xfffffffffffffff6) || (param_1[0xd] - 0x3a < 0xfffffffffffffff6))
  goto LAB_000f467c;
  if ((param_1[0xe] != 0x54) ||
     (lVar13 = param_1[0xd] + param_1[0xc] * 10, lVar13 - 0x230U < 0xffffffffffffffe1))
  goto LAB_000f460c;
  if ((param_1[0xf] - 0x3a < 0xfffffffffffffff6) || (param_1[0x10] - 0x3a < 0xfffffffffffffff6))
  goto LAB_000f467c;
  if ((param_1[0x11] != 0x3a) || (uVar12 = param_1[0x10] + param_1[0xf] * 10, 0x227 < uVar12))
  goto LAB_000f460c;
  if ((param_1[0x12] - 0x3a < 0xfffffffffffffff6) || (param_1[0x13] - 0x3a < 0xfffffffffffffff6))
  goto LAB_000f467c;
  if ((param_1[0x14] != 0x3a) || (uVar14 = param_1[0x13] + param_1[0x12] * 10, 0x24b < uVar14))
  goto LAB_000f460c;
  if ((param_1[0x15] - 0x3a < 0xfffffffffffffff6) || (param_1[0x16] - 0x3a < 0xfffffffffffffff6))
  goto LAB_000f467c;
  uVar15 = param_1[0x16] + param_1[0x15] * 10;
  if (uVar15 < 0x24e) {
    puVar2 = puVar1 + -0xd050;
    lVar18 = *(long *)(uVar17 * 8 + 0xaedb88);
    iVar16 = (int)puVar2;
    if ((((((uint)(iVar16 * -0x3d70a3d7) >> 4 | iVar16 * -0x70000000) < 0xa3d70b) ||
         ((((ulong)puVar1 & 3) == 0 &&
          (iVar16 + (int)(((ulong)puVar2 & 0xffffffff) / 100) * -100 != 0)))) && (0x212 < uVar17))
       && (bVar4 = SCARRY8(lVar18,1), lVar18 = lVar18 + 1, bVar4)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xf4b98);
      (*pcVar3)();
    }
    lVar13 = lVar13 + -0x211;
    lVar11 = lVar18 + lVar13;
    if (SCARRY8(lVar18,lVar13)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xf4b78);
      (*pcVar3)();
    }
    lVar18 = (long)puVar2 * 0x16d + -0xafaa7;
    lVar13 = lVar11 + lVar18;
    if (SCARRY8(lVar11,lVar18)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xf4b7c);
      (*pcVar3)();
    }
    uVar17 = (ulong)(puVar1 + -0xd051) >> 2;
    lVar18 = lVar13 + uVar17;
    if (SCARRY8(lVar13,uVar17)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xf4b80);
      (*pcVar3)();
    }
    uVar9 = (uint)(puVar1 + -0xd051);
    uVar17 = (ulong)((uVar9 >> 2 & 0x3fff) / 0x19);
    lVar13 = lVar18 - uVar17;
    if (SBORROW8(lVar18,uVar17)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xf4b84);
      (*pcVar3)();
    }
    uVar17 = (ulong)((uVar9 >> 4 & 0xfff) / 0x19);
    lVar18 = lVar13 + uVar17;
    if (SCARRY8(lVar13,uVar17)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xf4b88);
      (*pcVar3)();
    }
    lVar13 = lVar18 * 0x15180;
    if (SUB168(SEXT816(lVar18) * SEXT816(0x15180),8) != lVar13 >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xf4b8c);
      (*pcVar3)();
    }
    lVar18 = uVar15 + (uVar14 + uVar12 * 0x3c) * 0x3c + -0x1d7ed0;
    unaff_x22 = lVar13 + lVar18;
    if (SCARRY8(lVar13,lVar18)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xf4b90);
      (*pcVar3)();
    }
    if (param_1[0x17] == 0x2e) {
      if (uVar19 != 0x14) {
        unaff_x23 = 0;
        uVar17 = 0x14;
        lVar13 = 100000000;
        plVar10 = param_1 + 0x18;
        do {
          if (uVar19 == uVar17) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0xf4b68);
            (*pcVar3)();
          }
          if (9 < *plVar10 - 0x30U) goto LAB_000f49e8;
          lVar18 = (*plVar10 - 0x30U) * lVar13;
          if (lVar18 < -0x80000000) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0xf4b6c);
            (*pcVar3)();
          }
          if (0x7fffffff < lVar18) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0xf4b70);
            (*pcVar3)();
          }
          iVar16 = (int)unaff_x23;
          unaff_x23 = (ulong)(uint)(iVar16 + (int)lVar18);
          if (SCARRY4(iVar16,(int)lVar18)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0xf4b74);
            (*pcVar3)();
          }
          lVar13 = lVar13 / 10;
          uVar17 = uVar17 + 1;
          plVar10 = plVar10 + 1;
        } while (uVar19 != uVar17);
      }
      goto LAB_000f460c;
    }
    unaff_x23 = 0;
    uVar17 = 0x13;
LAB_000f49e8:
    if (uVar19 <= uVar17) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0xf4b94);
      (*pcVar3)();
    }
    lVar13 = plVar8[uVar17];
    if ((lVar13 == 0x2d) || (lVar13 == 0x2b)) {
      uVar12 = uVar17 + 6;
      if (SCARRY8(uVar17,6)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0xf4b9c);
        (*pcVar3)();
      }
      if ((long)uVar12 <= (long)uVar19) {
        if (uVar19 <= uVar17 + 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0xf4ba0);
          (*pcVar3)();
        }
        if (uVar19 <= uVar17 + 2) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0xf4ba4);
          (*pcVar3)();
        }
        if ((0xfffffffffffffff5 < plVar8[uVar17 + 1] - 0x3aU) &&
           (0xfffffffffffffff5 < plVar8[uVar17 + 2] - 0x3aU)) {
          if (uVar19 <= uVar17 + 4) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0xf4ba8);
            (*pcVar3)();
          }
          if (uVar19 <= uVar17 + 5) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0xf4bac);
            (*pcVar3)();
          }
          if ((0xfffffffffffffff5 < plVar8[uVar17 + 4] - 0x3aU) &&
             (0xfffffffffffffff5 < plVar8[uVar17 + 5] - 0x3aU)) {
            uVar14 = plVar8[uVar17 + 2] + plVar8[uVar17 + 1] * 10;
            if ((uVar14 < 0x21e) &&
               (uVar15 = plVar8[uVar17 + 5] + plVar8[uVar17 + 4] * 10, uVar15 < 0x24c)) {
              lVar18 = (plVar8 + uVar17)[3];
              _swift_bridgeObjectRelease();
              if (lVar18 == 0x3a) {
                lVar18 = uVar15 - 0x210;
                lVar11 = uVar14 * 0xe10 + -0x1d0100;
                if (lVar13 == 0x2b) {
                  lVar13 = unaff_x22 - lVar11;
                  if (SBORROW8(unaff_x22,lVar11)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0xf4bb0);
                    (*pcVar3)();
                  }
                  unaff_x22 = lVar13 + lVar18 * -0x3c;
                  if (SBORROW8(lVar13,lVar18 * 0x3c)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0xf4b48);
                    (*pcVar3)();
                  }
                }
                else {
                  lVar13 = unaff_x22 + lVar11;
                  if (SCARRY8(unaff_x22,lVar11)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0xf4bb4);
                    (*pcVar3)();
                  }
                  unaff_x22 = lVar13 + lVar18 * 0x3c;
                  if (SCARRY8(lVar13,lVar18 * 0x3c)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0xf4b64);
                    (*pcVar3)();
                  }
                }
                goto LAB_000f4a38;
              }
              goto LAB_000f4610;
            }
            goto LAB_000f460c;
          }
        }
        goto LAB_000f467c;
      }
      goto LAB_000f460c;
    }
    _swift_bridgeObjectRelease();
    if (lVar13 == 0x5a) {
      uVar12 = uVar17 + 1;
LAB_000f4a38:
      if ((uVar12 == uVar19) && (unaff_x22 + 0xe7791f700U < 0x4977863880)) goto LAB_000f46b8;
    }
  }
  else {
LAB_000f460c:
    _swift_bridgeObjectRelease();
  }
LAB_000f4610:
  FUN_000c7004();
  _swift_allocError(&UNK_009ad5a0,param_1,0,0);
  param_1[1] = 0xf;
  *param_1 = 0;
  _swift_willThrow();
LAB_000f46b8:
  auVar20._8_8_ = unaff_x23;
  auVar20._0_8_ = unaff_x22;
  return auVar20;
}



/* Entry: 000f4bb4; end: 000f5123;  */

undefined1  [16] FUN_000f4bb4(long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  
  bVar3 = false;
  bVar4 = true;
  if (param_1 + 0xe7791f700U < 0x4977863880) {
    bVar4 = 0x3b9ac9fe < (uint)param_2;
    bVar3 = (uint)param_2 == 999999999;
  }
  if (!bVar4 || bVar3) {
    lVar5 = param_1;
    uVar11 = param_2;
    FUN_0013aa20();
    iVar9 = (int)uVar11;
    func_0x0013aadc();
    if ((int)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xf50f8);
      (*pcVar2)();
    }
    pcVar6 = PTR___ss5Int32VN_0099b730;
    puVar12 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_0099b740;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss5Int32VN_0099b730,PTR___ss5Int32Vs23CustomStringConvertiblesWP_0099b740);
    pcVar7 = pcVar6;
    __sSS5countSivg();
    puVar13 = puVar12;
    pcVar8 = pcVar6;
    if ((long)pcVar7 < 4) {
      pcVar7 = pcVar6;
      __sSS5countSivg(pcVar6,puVar12);
      if (SBORROW8(4,(long)pcVar7)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xf5110);
        (*pcVar2)();
      }
      pcVar8 = segment_command_00000020.segname + 8;
      puVar13 = (undefined *)0xe100000000000000;
      __sSS9repeating5countS2S_SitcfC(0x30,0xe100000000000000,4 - (long)pcVar7);
      _swift_bridgeObjectRetain(puVar13);
      __sSS6appendyySSF(pcVar6,puVar12);
      _swift_bridgeObjectRelease(puVar12);
      _swift_bridgeObjectRelease(puVar13);
    }
    __sSS6appendyySSF(pcVar8,puVar13);
    _swift_bridgeObjectRelease(puVar13);
    __sSS6appendyySSF(0x2d,0xe100000000000000);
    if (param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xf50fc);
      (*pcVar2)();
    }
    pcVar6 = PTR___ss5Int32VN_0099b730;
    puVar12 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_0099b740;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss5Int32VN_0099b730,PTR___ss5Int32Vs23CustomStringConvertiblesWP_0099b740);
    pcVar7 = pcVar6;
    __sSS5countSivg();
    puVar13 = puVar12;
    pcVar8 = pcVar6;
    if ((long)pcVar7 < 2) {
      pcVar7 = pcVar6;
      __sSS5countSivg(pcVar6,puVar12);
      if (SBORROW8(2,(long)pcVar7)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xf5114);
        (*pcVar2)();
      }
      pcVar8 = segment_command_00000020.segname + 8;
      puVar13 = (undefined *)0xe100000000000000;
      __sSS9repeating5countS2S_SitcfC(0x30,0xe100000000000000,2 - (long)pcVar7);
      _swift_bridgeObjectRetain(puVar13);
      __sSS6appendyySSF(pcVar6,puVar12);
      _swift_bridgeObjectRelease(puVar12);
      _swift_bridgeObjectRelease(puVar13);
    }
    __sSS6appendyySSF(pcVar8,puVar13);
    _swift_bridgeObjectRelease(puVar13);
    __sSS6appendyySSF(0x2d,0xe100000000000000);
    if (iVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xf5100);
      (*pcVar2)();
    }
    pcVar6 = PTR___ss5Int32VN_0099b730;
    puVar12 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_0099b740;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss5Int32VN_0099b730,PTR___ss5Int32Vs23CustomStringConvertiblesWP_0099b740);
    pcVar7 = pcVar6;
    __sSS5countSivg();
    puVar13 = puVar12;
    pcVar8 = pcVar6;
    if ((long)pcVar7 < 2) {
      pcVar7 = pcVar6;
      __sSS5countSivg(pcVar6,puVar12);
      if (SBORROW8(2,(long)pcVar7)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xf5118);
        (*pcVar2)();
      }
      pcVar8 = segment_command_00000020.segname + 8;
      puVar13 = (undefined *)0xe100000000000000;
      __sSS9repeating5countS2S_SitcfC(0x30,0xe100000000000000,2 - (long)pcVar7);
      _swift_bridgeObjectRetain(puVar13);
      __sSS6appendyySSF(pcVar6,puVar12);
      _swift_bridgeObjectRelease(puVar12);
      _swift_bridgeObjectRelease(puVar13);
    }
    __sSS6appendyySSF(pcVar8,puVar13);
    _swift_bridgeObjectRelease(puVar13);
    if ((int)lVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xf5104);
      (*pcVar2)();
    }
    pcVar6 = PTR___ss5Int32VN_0099b730;
    puVar12 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_0099b740;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss5Int32VN_0099b730,PTR___ss5Int32Vs23CustomStringConvertiblesWP_0099b740);
    pcVar7 = pcVar6;
    __sSS5countSivg();
    puVar13 = puVar12;
    pcVar8 = pcVar6;
    if ((long)pcVar7 < 2) {
      pcVar7 = pcVar6;
      __sSS5countSivg(pcVar6,puVar12);
      if (SBORROW8(2,(long)pcVar7)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xf511c);
        (*pcVar2)();
      }
      pcVar8 = segment_command_00000020.segname + 8;
      puVar13 = (undefined *)0xe100000000000000;
      __sSS9repeating5countS2S_SitcfC(0x30,0xe100000000000000,2 - (long)pcVar7);
      _swift_bridgeObjectRetain(puVar13);
      __sSS6appendyySSF(pcVar6,puVar12);
      _swift_bridgeObjectRelease(puVar12);
      _swift_bridgeObjectRelease(puVar13);
    }
    __sSS6appendyySSF(pcVar8,puVar13);
    _swift_bridgeObjectRelease(puVar13);
    __sSS6appendyySSF(0x3a,0xe100000000000000);
    if (lVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xf5108);
      (*pcVar2)();
    }
    pcVar6 = PTR___ss5Int32VN_0099b730;
    puVar12 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_0099b740;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss5Int32VN_0099b730,PTR___ss5Int32Vs23CustomStringConvertiblesWP_0099b740);
    pcVar7 = pcVar6;
    __sSS5countSivg();
    puVar13 = puVar12;
    pcVar8 = pcVar6;
    if ((long)pcVar7 < 2) {
      pcVar7 = pcVar6;
      __sSS5countSivg(pcVar6,puVar12);
      if (SBORROW8(2,(long)pcVar7)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xf5120);
        (*pcVar2)();
      }
      pcVar8 = segment_command_00000020.segname + 8;
      puVar13 = (undefined *)0xe100000000000000;
      __sSS9repeating5countS2S_SitcfC(0x30,0xe100000000000000,2 - (long)pcVar7);
      _swift_bridgeObjectRetain(puVar13);
      __sSS6appendyySSF(pcVar6,puVar12);
      _swift_bridgeObjectRelease(puVar12);
      _swift_bridgeObjectRelease(puVar13);
    }
    __sSS6appendyySSF(pcVar8,puVar13);
    _swift_bridgeObjectRelease(puVar13);
    __sSS6appendyySSF(0x3a,0xe100000000000000);
    if ((int)uVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0xf510c);
      (*pcVar2)();
    }
    pcVar6 = PTR___ss5Int32VN_0099b730;
    puVar12 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_0099b740;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss5Int32VN_0099b730,PTR___ss5Int32Vs23CustomStringConvertiblesWP_0099b740);
    pcVar7 = pcVar6;
    __sSS5countSivg();
    puVar13 = puVar12;
    pcVar8 = pcVar6;
    if ((long)pcVar7 < 2) {
      pcVar7 = pcVar6;
      __sSS5countSivg(pcVar6,puVar12);
      if (SBORROW8(2,(long)pcVar7)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0xf5124);
        (*pcVar2)();
      }
      pcVar8 = segment_command_00000020.segname + 8;
      puVar13 = (undefined *)0xe100000000000000;
      __sSS9repeating5countS2S_SitcfC(0x30,0xe100000000000000,2 - (long)pcVar7);
      _swift_bridgeObjectRetain(puVar13);
      __sSS6appendyySSF(pcVar6,puVar12);
      _swift_bridgeObjectRelease(puVar12);
      _swift_bridgeObjectRelease(puVar13);
    }
    puVar12 = puVar13;
    __sSS6appendyySSF(pcVar8,puVar13);
    _swift_bridgeObjectRelease(puVar13);
    FUN_0013a7c0(param_2);
    __sSS6appendyySSF(0x54,0xe100000000000000);
    __sSS6appendyySSF(0,0xe000000000000000);
    _swift_bridgeObjectRelease(0xe000000000000000);
    __sSS6appendyySSF(param_2,puVar12);
    _swift_bridgeObjectRelease(puVar12);
    __sSS6appendyySSF(0x5a,0xe100000000000000);
    uVar10 = 0xe000000000000000;
  }
  else {
    uVar10 = 0;
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar10;
  return auVar1 << 0x40;
}



/* Entry: 000f5124; end: 000f512f;  */

void FUN_000f5124(void)

{
  return;
}



/* Entry: 000f5130; end: 000f51d7;  */

void FUN_000f5130(void)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined8 *unaff_x20;
  
  puVar1 = (undefined1 *)*unaff_x20;
  uVar2 = (ulong)*(uint *)(unaff_x20 + 1);
  FUN_000f4bb4();
  if (uVar2 == 0) {
    func_0x000c7144();
    _swift_allocError(&UNK_009ad758,puVar1,0,0);
    *puVar1 = 1;
    _swift_willThrow();
  }
  else {
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(uVar2);
    __sSS6appendyySSF(0x22,0xe100000000000000);
  }
  return;
}



/* Entry: 000f51d8; end: 000f523b;  */

void FUN_000f51d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_00106a08();
  if (unaff_x21 == 0) {
    uVar1 = param_2;
    FUN_000f45e0();
    _swift_bridgeObjectRelease(param_2);
    *unaff_x20 = param_1;
    *(int *)(unaff_x20 + 1) = (int)uVar1;
  }
  return;
}



/* Entry: 000f523c; end: 000f52bf;  */

void FUN_000f523c(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  __ss25FloatingPointRoundingRuleOMa();
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x68))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)
              PTR___ss25FloatingPointRoundingRuleO23toNearestOrAwayFromZeroyA2BmFWC_0099b678);
  FUN_000f55ec(param_1,&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  return;
}



/* Entry: 000f52c0; end: 000f5347;  */

void FUN_000f52c0(undefined8 param_1,code *param_2)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  
  lVar1 = 0;
  __ss25FloatingPointRoundingRuleOMa();
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x68))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)
              PTR___ss25FloatingPointRoundingRuleO23toNearestOrAwayFromZeroyA2BmFWC_0099b678);
  (*param_2)(param_1,&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  return;
}



/* Entry: 000f5348; end: 000f534b;  */

void FUN_000f5348(double param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_70 [8];
  double dStack_68;
  
  lVar3 = 0;
  __ss25FloatingPointRoundingRuleOMa();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf5ac8);
    (*pcVar1)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf5acc);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf5ad0);
    (*pcVar1)();
  }
  dVar7 = param_1 - (double)(long)param_1;
  dVar8 = dVar7 * 1000000000.0;
  dStack_68 = dVar8;
  (**(code **)(lVar6 + 0x10))(puVar5,param_2,lVar3);
  puVar4 = puVar5;
  (**(code **)(lVar6 + 0x58))(puVar5,lVar3);
  iVar2 = (int)puVar4;
  if (iVar2 == *(int *)
                PTR___ss25FloatingPointRoundingRuleO23toNearestOrAwayFromZeroyA2BmFWC_0099b678) {
    dVar8 = (double)(long)dVar8;
  }
  else if (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO15toNearestOrEvenyA2BmFWC_0099b670)
  {
    dVar8 = (double)(long)dVar8;
  }
  else if (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO2upyA2BmFWC_0099b680) {
    dVar8 = (double)(long)dVar8;
  }
  else if (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO4downyA2BmFWC_0099b688) {
    dVar8 = (double)(long)dVar8;
  }
  else if (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO10towardZeroyA2BmFWC_0099b660) {
    dVar8 = (double)(long)dVar8;
  }
  else if (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO12awayFromZeroyA2BmFWC_0099b668) {
    dVar7 = (double)(long)dVar8;
    dVar8 = (double)(long)dVar8;
  }
  else {
    __sSd14_roundSlowPathyys25FloatingPointRoundingRuleOF(param_2);
    (**(code **)(lVar6 + 8))(puVar5,lVar3);
    dVar8 = dStack_68;
  }
  __s10Foundation4DateV035timeIntervalBetween1970AndReferenceB0SdvgZ();
  (**(code **)(lVar6 + 8))(param_2,lVar3);
  if (0x7fefffffffffffff < (ulong)ABS(dVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf5ad4);
    (*pcVar1)();
  }
  if (dVar7 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf5ad8);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf5adc);
    (*pcVar1)();
  }
  if (SCARRY8((long)param_1,(long)dVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf5ae0);
    (*pcVar1)();
  }
  if ((ulong)ABS(dVar8) < 0x7ff0000000000000) {
    if (dVar8 <= -2147483649.0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xf5ae8);
      (*pcVar1)();
    }
    if (dVar8 < 2147483648.0) {
      func_0x000f524c((long)param_1 + (long)dVar7,(int)dVar8);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf5aec);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xf5ae4);
  (*pcVar1)();
}



/* Entry: 000f534c; end: 000f5427;  */

undefined1 * FUN_000f534c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long lVar3;
  
  lVar1 = 0;
  __ss25FloatingPointRoundingRuleOMa();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __s10Foundation4DateV026timeIntervalSinceReferenceB0Sdvg();
  (**(code **)(lVar3 + 0x68))
            (puVar2,*(undefined4 *)
                     PTR___ss25FloatingPointRoundingRuleO23toNearestOrAwayFromZeroyA2BmFWC_0099b678,
             lVar1);
  FUN_000f5848(param_1,puVar2);
  lVar1 = 0;
  __s10Foundation4DateVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_2,lVar1);
  return puVar2;
}



/* Entry: 000f5428; end: 000f5447;  */

double FUN_000f5428(long param_1,int param_2)

{
  return (double)param_2 / 1000000000.0 + (double)param_1;
}



/* Entry: 000f5448; end: 000f54db;  */

double FUN_000f5448(double param_1,long param_2,int param_3)

{
  code *pcVar1;
  
  __s10Foundation4DateV035timeIntervalBetween1970AndReferenceB0SdvgZ();
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf54d0);
    (*pcVar1)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf54d4);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf54d8);
    (*pcVar1)();
  }
  if (!SBORROW8(param_2,(long)param_1)) {
    return (double)param_3 / 1000000000.0 + (double)(param_2 - (long)param_1);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xf54dc);
  (*pcVar1)();
}



/* Entry: 000f54dc; end: 000f557f;  */

void FUN_000f54dc(undefined8 param_1,double param_2,long param_3,int param_4)

{
  code *pcVar1;
  
  __s10Foundation4DateV035timeIntervalBetween1970AndReferenceB0SdvgZ();
  if (0x7fefffffffffffff < (ulong)ABS(param_2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf5574);
    (*pcVar1)();
  }
  if (param_2 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf5578);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf557c);
    (*pcVar1)();
  }
  if (!SBORROW8(param_3,(long)param_2)) {
                    /* WARNING: Could not recover jumptable at 0x00777a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___s10Foundation4DateV026timeIntervalSinceReferenceB0ACSd_tcfC_0099c3e0)
              (param_1,(double)param_4 / 1000000000.0 + (double)(param_3 - (long)param_2));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xf5580);
  (*pcVar1)();
}



/* Entry: 000f5580; end: 000f5583;  */

void FUN_000f5580(long param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5,
                 int param_6)

{
  code *pcVar1;
  
  if (SCARRY8(param_1,param_5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf55b4);
    (*pcVar1)();
  }
  if (!SCARRY4(param_2,param_6)) {
    func_0x000f524c(param_1 + param_5,param_2 + param_6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xf55b8);
  (*pcVar1)();
}



/* Entry: 000f5584; end: 000f55eb;  */

void FUN_000f5584(long param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5,
                 int param_6)

{
  code *pcVar1;
  
  if (SCARRY8(param_1,param_5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf55b4);
    (*pcVar1)();
  }
  if (!SCARRY4(param_2,param_6)) {
    func_0x000f524c(param_1 + param_5,param_2 + param_6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xf55b8);
  (*pcVar1)();
}



/* Entry: 000f55ec; end: 000f5847;  */

void FUN_000f55ec(double param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  double dVar7;
  undefined1 auStack_60 [8];
  double dStack_58;
  
  lVar3 = 0;
  __ss25FloatingPointRoundingRuleOMa();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf5834);
    (*pcVar1)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf5838);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf583c);
    (*pcVar1)();
  }
  dVar7 = (param_1 - (double)(long)param_1) * 1000000000.0;
  dStack_58 = dVar7;
  (**(code **)(lVar6 + 0x10))(puVar5,param_2,lVar3);
  puVar4 = puVar5;
  (**(code **)(lVar6 + 0x58))(puVar5,lVar3);
  iVar2 = (int)puVar4;
  if ((((iVar2 == *(int *)
                   PTR___ss25FloatingPointRoundingRuleO23toNearestOrAwayFromZeroyA2BmFWC_0099b678)
       || (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO15toNearestOrEvenyA2BmFWC_0099b670))
      || (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO2upyA2BmFWC_0099b680)) ||
     ((iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO4downyA2BmFWC_0099b688 ||
      (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO10towardZeroyA2BmFWC_0099b660)))) {
    (**(code **)(lVar6 + 8))(param_2,lVar3);
    dVar7 = (double)(long)dVar7;
  }
  else if (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO12awayFromZeroyA2BmFWC_0099b668) {
    (**(code **)(lVar6 + 8))(param_2,lVar3);
    dVar7 = (double)(long)dVar7;
  }
  else {
    __sSd14_roundSlowPathyys25FloatingPointRoundingRuleOF(param_2);
    pcVar1 = *(code **)(lVar6 + 8);
    (*pcVar1)(param_2,lVar3);
    (*pcVar1)(puVar5,lVar3);
    dVar7 = dStack_58;
  }
  if (0x7fefffffffffffff < (ulong)ABS(dVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf5840);
    (*pcVar1)();
  }
  if (dVar7 <= -2147483649.0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf5844);
    (*pcVar1)();
  }
  if (dVar7 < 2147483648.0) {
    func_0x000f524c((long)param_1,(int)dVar7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xf5848);
  (*pcVar1)();
}



/* Entry: 000f5848; end: 000f5aeb;  */

void FUN_000f5848(double param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_70 [8];
  double dStack_68;
  
  lVar3 = 0;
  __ss25FloatingPointRoundingRuleOMa();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_00999f48)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf5ac8);
    (*pcVar1)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf5acc);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf5ad0);
    (*pcVar1)();
  }
  dVar7 = param_1 - (double)(long)param_1;
  dVar8 = dVar7 * 1000000000.0;
  dStack_68 = dVar8;
  (**(code **)(lVar6 + 0x10))(puVar5,param_2,lVar3);
  puVar4 = puVar5;
  (**(code **)(lVar6 + 0x58))(puVar5,lVar3);
  iVar2 = (int)puVar4;
  if (iVar2 == *(int *)
                PTR___ss25FloatingPointRoundingRuleO23toNearestOrAwayFromZeroyA2BmFWC_0099b678) {
    dVar8 = (double)(long)dVar8;
  }
  else if (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO15toNearestOrEvenyA2BmFWC_0099b670)
  {
    dVar8 = (double)(long)dVar8;
  }
  else if (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO2upyA2BmFWC_0099b680) {
    dVar8 = (double)(long)dVar8;
  }
  else if (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO4downyA2BmFWC_0099b688) {
    dVar8 = (double)(long)dVar8;
  }
  else if (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO10towardZeroyA2BmFWC_0099b660) {
    dVar8 = (double)(long)dVar8;
  }
  else if (iVar2 == *(int *)PTR___ss25FloatingPointRoundingRuleO12awayFromZeroyA2BmFWC_0099b668) {
    dVar7 = (double)(long)dVar8;
    dVar8 = (double)(long)dVar8;
  }
  else {
    __sSd14_roundSlowPathyys25FloatingPointRoundingRuleOF(param_2);
    (**(code **)(lVar6 + 8))(puVar5,lVar3);
    dVar8 = dStack_68;
  }
  __s10Foundation4DateV035timeIntervalBetween1970AndReferenceB0SdvgZ();
  (**(code **)(lVar6 + 8))(param_2,lVar3);
  if (0x7fefffffffffffff < (ulong)ABS(dVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf5ad4);
    (*pcVar1)();
  }
  if (dVar7 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf5ad8);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf5adc);
    (*pcVar1)();
  }
  if (SCARRY8((long)param_1,(long)dVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf5ae0);
    (*pcVar1)();
  }
  if ((ulong)ABS(dVar8) < 0x7ff0000000000000) {
    if (dVar8 <= -2147483649.0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0xf5ae8);
      (*pcVar1)();
    }
    if (dVar8 < 2147483648.0) {
      func_0x000f524c((long)param_1 + (long)dVar7,(int)dVar8);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf5aec);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xf5ae4);
  (*pcVar1)();
}



/* Entry: 000f5aec; end: 000f5aef;  */

void FUN_000f5aec(long param_1,int param_2,undefined8 param_3,undefined8 param_4,long param_5,
                 int param_6)

{
  code *pcVar1;
  
  if (SCARRY8(param_1,param_5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0xf55b4);
    (*pcVar1)();
  }
  if (!SCARRY4(param_2,param_6)) {
    func_0x000f524c(param_1 + param_5,param_2 + param_6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xf55b8);
  (*pcVar1)();
}



/* Entry: 000f5af0; end: 000f5dcb;  */

void FUN_000f5af0(undefined1 *param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  ulong *puVar7;
  char *pcVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 uVar11;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar12;
  ulong uVar13;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar12 = unaff_x20[2];
  bVar4 = (byte)unaff_x20[3];
  if ((((uVar12 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (bVar4 == 0xff)) {
    func_0x000c7144();
    _swift_allocError(&UNK_009ad758,param_1,0,0);
    uVar11 = 5;
LAB_000f5b58:
    *param_1 = uVar11;
    _swift_willThrow();
  }
  else {
    uVar5 = (uint)(uVar12 >> 0x3c) & 0xfffffc03 | (bVar4 & 0x3f) << 2;
    if (uVar5 < 3) {
      if (uVar5 != 0) {
        if (uVar5 != 1) {
          FUN_000f22b4(uVar1,uVar2,uVar12,bVar4);
          FUN_000fdff8(uVar1,uVar2);
          goto LAB_000f5d64;
        }
        if (((uVar1 ^ 0xffffffffffffffff) & 0x7ff0000000000000) != 0) {
          FUN_000fe844(uVar1);
          return;
        }
        func_0x000c7144();
        _swift_allocError(&UNK_009ad758,param_1,0,0);
        uVar11 = 6;
        goto LAB_000f5b58;
      }
      pcVar8 = "null";
      uVar9 = 4;
    }
    else {
      if (uVar5 != 3) {
        uStack_88 = uVar1;
        uStack_80 = uVar2;
        if (uVar5 == 4) {
          puStack_70 = &UNK_009b3f98;
          ppuStack_68 = &PTR_DAT_009acc98;
          puVar7 = &uStack_88;
          uStack_78 = uVar12;
          FUN_0001393c();
          uVar10 = *puVar7;
          uVar3 = puVar7[1];
          uVar13 = puVar7[2];
          FUN_000f2290(uVar1,uVar2,uVar12,bVar4);
          FUN_000f22b4(uVar1,uVar2,uVar12,bVar4);
          uVar6 = (ulong)(param_2 & 0x1010101);
          FUN_000f2550(uVar6,uVar10,uVar3,uVar13);
        }
        else {
          uStack_78 = uVar12 & 0xcfffffffffffffff;
          puStack_70 = &UNK_009b4128;
          ppuStack_68 = &PTR_DAT_009acc30;
          puVar7 = &uStack_88;
          FUN_0001393c();
          uVar10 = *puVar7;
          uVar3 = puVar7[1];
          uVar13 = puVar7[2];
          FUN_000f2290(uVar1,uVar2,uVar12,bVar4);
          FUN_000f22b4(uVar1,uVar2,uVar12,bVar4);
          uVar6 = (ulong)(param_2 & 0x1010101);
          FUN_000f1990(uVar6,uVar10,uVar3,uVar13);
        }
        if (unaff_x21 != 0) {
          FUN_000f2330(uVar1,uVar2,uVar12,bVar4);
          FUN_00011670(&uStack_88);
          return;
        }
        FUN_00011670(&uStack_88);
        func_0x000c79f0(uVar6,uVar10);
LAB_000f5d64:
        FUN_000f2330(uVar1,uVar2,uVar12,bVar4);
        return;
      }
      if ((uVar1 & 1) == 0) {
        pcVar8 = "false";
        uVar9 = 5;
      }
      else {
        pcVar8 = "true";
        uVar9 = 4;
      }
    }
    FUN_000c7840(pcVar8,uVar9);
  }
  return;
}



/* Entry: 000f5dcc; end: 000f6193;  */

/* WARNING: Removing unreachable block (ram,0x000f5f38) */
/* WARNING: Removing unreachable block (ram,0x000f5ff4) */
/* WARNING: Removing unreachable block (ram,0x000f5f48) */

void FUN_000f5dcc(ulong param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong *unaff_x20;
  long unaff_x21;
  
  lVar1 = param_2;
  FUN_00106d64();
  if (unaff_x21 != 0) {
    return;
  }
  if ((lVar1 == 0x6e) && (param_3 == (undefined8 *)0xe100000000000000)) {
LAB_000f5e54:
    _swift_bridgeObjectRelease();
    func_0x00106c88();
    if (((ulong)param_3 & 1) == 0) {
      FUN_000c7004();
      _swift_allocError(&UNK_009ad5a0,param_3,0,0);
      *param_3 = 0;
      param_3[1] = 0;
      _swift_willThrow();
    }
    else {
      FUN_000f2330(*unaff_x20,unaff_x20[1],unaff_x20[2],(char)unaff_x20[3]);
      unaff_x20[1] = 1;
      *unaff_x20 = 0;
      unaff_x20[2] = 0;
      *(undefined1 *)(unaff_x20 + 3) = 0;
    }
    return;
  }
  uVar2 = 0;
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
            (0x6e,0xe100000000000000,lVar1,param_3,0);
  if ((uVar2 & 1) != 0) goto LAB_000f5e54;
  if ((lVar1 != 0x5b) || (param_3 != (undefined8 *)0xe100000000000000)) {
    uVar2 = 0x5b;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0x5b,0xe100000000000000,lVar1,param_3,0);
    if ((uVar2 & 1) == 0) {
      if ((lVar1 != 0x7b) || (param_3 != (undefined8 *)0xe100000000000000)) {
        uVar2 = 0x7b;
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (0x7b,0xe100000000000000,lVar1,param_3,0);
        if ((uVar2 & 1) == 0) {
          if ((lVar1 == 0x74) && (param_3 == (undefined8 *)0xe100000000000000)) {
LAB_000f6038:
            _swift_bridgeObjectRelease();
            FUN_00107450();
            FUN_000f2330(*unaff_x20,unaff_x20[1],unaff_x20[2],(char)unaff_x20[3]);
            *unaff_x20 = (ulong)param_3 & 1;
            uVar2 = 0x3000000000000000;
          }
          else {
            uVar2 = 0;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x74,0xe100000000000000,lVar1,param_3,0);
            if (((uVar2 & 1) != 0) || (lVar1 == 0x66 && param_3 == (undefined8 *)0xe100000000000000)
               ) goto LAB_000f6038;
            uVar2 = 0;
            uVar4 = 0xe100000000000000;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x66,0xe100000000000000,lVar1,param_3,0);
            if ((uVar2 & 1) != 0) goto LAB_000f6038;
            if ((lVar1 == 0x22) && (param_3 == (undefined8 *)0xe100000000000000)) {
              _swift_bridgeObjectRelease();
LAB_000f6118:
              FUN_00106a08();
              FUN_000f2330(*unaff_x20,unaff_x20[1],unaff_x20[2],(char)unaff_x20[3]);
              *unaff_x20 = (ulong)param_3;
              unaff_x20[1] = uVar4;
              unaff_x20[2] = 0x2000000000000000;
              goto LAB_000f607c;
            }
            uVar2 = 0;
            uVar4 = 0xe100000000000000;
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (0x22,0xe100000000000000,lVar1,param_3,0);
            _swift_bridgeObjectRelease();
            if ((uVar2 & 1) != 0) goto LAB_000f6118;
            FUN_00106e38();
            FUN_000f2330(*unaff_x20,unaff_x20[1],unaff_x20[2],(char)unaff_x20[3]);
            *unaff_x20 = param_1;
            uVar2 = 0x1000000000000000;
          }
          unaff_x20[2] = uVar2;
          unaff_x20[1] = 0;
LAB_000f607c:
          *(undefined1 *)(unaff_x20 + 3) = 0;
          return;
        }
      }
      _swift_bridgeObjectRelease(param_3);
      puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
      FUN_0019aad0();
      FUN_000f2a28(param_2);
      FUN_000f2330(*unaff_x20,unaff_x20[1],unaff_x20[2],(char)unaff_x20[3]);
      *unaff_x20 = (ulong)puVar3;
      unaff_x20[1] = 0;
      unaff_x20[2] = 0xc000000000000000;
      goto LAB_000f5f70;
    }
  }
  _swift_bridgeObjectRelease(param_3);
  puVar3 = PTR___swiftEmptyArrayStorage_0099b8f0;
  FUN_000f1b1c(param_2);
  FUN_000f2330(*unaff_x20,unaff_x20[1],unaff_x20[2],(char)unaff_x20[3]);
  *unaff_x20 = (ulong)puVar3;
  unaff_x20[1] = 0;
  unaff_x20[2] = 0xd000000000000000;
LAB_000f5f70:
  *(undefined1 *)(unaff_x20 + 3) = 1;
  return;
}



/* Entry: 000f6194; end: 000f62d7;  */

void FUN_000f6194(double *param_1,long param_2)

{
  double dVar1;
  
  dVar1 = (double)param_2;
  FUN_000f2330(0,0,0x3000000000000000,0xff);
  FUN_000f2290(dVar1,0,0x1000000000000000,0);
  func_0x00023304(0,0xc000000000000000);
  FUN_000f2330(dVar1,0,0x1000000000000000,0);
  FUN_00023358(0,0xc000000000000000);
  *param_1 = dVar1;
  param_1[2] = 1.2882297539194267e-231;
  param_1[1] = 0.0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[5] = -2.0;
  param_1[4] = 0.0;
  return;
}



/* Entry: 000f62d8; end: 000f63ff;  */

void FUN_000f62d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_000f2330(0,0,0x3000000000000000,0xff);
  FUN_000f2290(uVar1,0,0x1000000000000000,0);
  func_0x00023304(0,0xc000000000000000);
  FUN_000f2330(uVar1,0,0x1000000000000000,0);
  FUN_00023358(0,0xc000000000000000);
  *param_1 = uVar1;
  param_1[2] = 0x1000000000000000;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 000f6400; end: 000f6403;  */

void FUN_000f6400(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_000f2330(0,0,0x3000000000000000,0xff);
  FUN_000f2290(uVar1,uVar2,0x2000000000000000,0);
  func_0x00023304(0,0xc000000000000000);
  FUN_000f2330(uVar1,uVar2,0x2000000000000000,0);
  FUN_00023358(0,0xc000000000000000);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = 0x2000000000000000;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 000f6404; end: 000f649b;  */

void FUN_000f6404(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_000f2330(0,0,0x3000000000000000,0xff);
  FUN_000f2290(uVar1,uVar2,0x2000000000000000,0);
  func_0x00023304(0,0xc000000000000000);
  FUN_000f2330(uVar1,uVar2,0x2000000000000000,0);
  FUN_00023358(0,0xc000000000000000);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = 0x2000000000000000;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 000f649c; end: 000f65bb;  */

void FUN_000f649c(undefined8 *param_1)

{
  FUN_000f2330(0,0,0x3000000000000000,0xff);
  FUN_000f2290(0,1,0,0);
  func_0x00023304(0,0xc000000000000000);
  FUN_000f2330(0,1,0,0);
  FUN_00023358(0,0xc000000000000000);
  param_1[1] = 1;
  *param_1 = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 000f65bc; end: 000f6653;  */

undefined1  [16] FUN_000f65bc(uint param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *unaff_x20;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined1 auVar3 [16];
  undefined *puStack_40;
  undefined2 uStack_38;
  
  puStack_40 = PTR___swiftEmptyArrayStorage_0099b8f0;
  uStack_38 = 0x100;
  FUN_000f5af0(&puStack_40,param_1 & 0x1010101);
  puVar1 = puStack_40;
  if (unaff_x21 == 0) {
    unaff_x22 = *(undefined8 *)(puStack_40 + 0x10);
    puVar2 = puStack_40;
    _swift_bridgeObjectRetain();
    unaff_x20 = puVar2 + 0x20;
    __sSS18_fromUTF8RepairingySS6result_Sb11repairsMadetSRys5UInt8VGFZ(unaff_x20,unaff_x22);
    _swift_bridgeObjectRelease_n(puVar1,2);
  }
  else {
    _swift_bridgeObjectRelease();
  }
  auVar3._8_8_ = unaff_x22;
  auVar3._0_8_ = unaff_x20;
  return auVar3;
}



/* Entry: 000f6654; end: 000f668b;  */

undefined1  [16] FUN_000f6654(uint param_1,ulong param_2)

{
  ulong uVar1;
  ulong extraout_x8;
  long unaff_x21;
  undefined1 auVar2 [16];
  
  uVar1 = (ulong)(param_1 & 0x1010101);
  FUN_000f65bc(uVar1);
  if (unaff_x21 != 0) {
    param_2 = extraout_x8;
    uVar1 = extraout_x8;
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Entry: 000f668c; end: 000f6723;  */

void FUN_000f668c(undefined8 *param_1)

{
  FUN_000f2330(0,0,0x3000000000000000,0xff);
  FUN_000f2290(0,1,0,0);
  func_0x00023304(0,0xc000000000000000);
  FUN_000f2330(0,1,0,0);
  FUN_00023358(0,0xc000000000000000);
  param_1[1] = 1;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0xc000000000000000;
  return;
}



/* Entry: 000f6724; end: 000f6727;  */

void FUN_000f6724(undefined8 *param_1,undefined8 param_2)

{
  FUN_000f2330(0,0,0x3000000000000000,0xff);
  FUN_000f2290(param_2,0,0x1000000000000000,0);
  func_0x00023304(0,0xc000000000000000);
  FUN_000f2330(param_2,0,0x1000000000000000,0);
  FUN_00023358(0,0xc000000000000000);
  *param_1 = param_2;
  param_1[2] = 0x1000000000000000;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 000f6728; end: 000f67c7;  */

void FUN_000f6728(undefined8 *param_1,undefined8 param_2)

{
  FUN_000f2330(0,0,0x3000000000000000,0xff);
  FUN_000f2290(param_2,0,0x1000000000000000,0);
  func_0x00023304(0,0xc000000000000000);
  FUN_000f2330(param_2,0,0x1000000000000000,0);
  FUN_00023358(0,0xc000000000000000);
  *param_1 = param_2;
  param_1[2] = 0x1000000000000000;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 000f67c8; end: 000f67cb;  */

void FUN_000f67c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_000f2330(0,0,0x3000000000000000,0xff);
  FUN_000f2290(param_2,param_3,0x2000000000000000,0);
  func_0x00023304(0,0xc000000000000000);
  FUN_000f2330(param_2,param_3,0x2000000000000000,0);
  FUN_00023358(0,0xc000000000000000);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0x2000000000000000;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 000f67cc; end: 000f6867;  */

void FUN_000f67cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_000f2330(0,0,0x3000000000000000,0xff);
  FUN_000f2290(param_2,param_3,0x2000000000000000,0);
  func_0x00023304(0,0xc000000000000000);
  FUN_000f2330(param_2,param_3,0x2000000000000000,0);
  FUN_00023358(0,0xc000000000000000);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0x2000000000000000;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 000f6868; end: 000f686b;  */

void FUN_000f6868(ulong *param_1,ulong param_2)

{
  param_2 = param_2 & 1;
  FUN_000f2330(0,0,0x3000000000000000,0xff);
  FUN_000f2290(param_2,0,0x3000000000000000,0);
  func_0x00023304(0,0xc000000000000000);
  FUN_000f2330(param_2,0,0x3000000000000000,0);
  FUN_00023358(0,0xc000000000000000);
  *param_1 = param_2;
  param_1[2] = 0x3000000000000000;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 000f686c; end: 000f68ff;  */

void FUN_000f686c(ulong *param_1,ulong param_2)

{
  param_2 = param_2 & 1;
  FUN_000f2330(0,0,0x3000000000000000,0xff);
  FUN_000f2290(param_2,0,0x3000000000000000,0);
  func_0x00023304(0,0xc000000000000000);
  FUN_000f2330(param_2,0,0x3000000000000000,0);
  FUN_00023358(0,0xc000000000000000);
  *param_1 = param_2;
  param_1[2] = 0x3000000000000000;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 000f6900; end: 000f6a4f;  */

void FUN_000f6900(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_000f2330(0,0,0x3000000000000000,0xff);
  FUN_000f2290(param_2,param_3,param_4,1);
  func_0x00023304(0,0xc000000000000000);
  FUN_000f2330(param_2,param_3,param_4,1);
  FUN_00023358(0,0xc000000000000000);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 000f6a50; end: 000f6a77;  */

undefined * FUN_000f6a50(void)

{
  return PTR___ss5Int64Vs35_ExpressibleByBuiltinIntegerLiteralsWP_0099b778;
}



/* Entry: 000f6a78; end: 000f6ab7;  */

void FUN_000f6a78(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aeec70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d93d8;
  _swift_getWitnessTable(&UNK_007d93d8,&UNK_009b4018);
  puRam0000000000aeec70 = puVar1;
  return;
}



/* Entry: 000f6ab8; end: 000f6ac7;  */

undefined * FUN_000f6ab8(void)

{
  return PTR___sSSs34_ExpressibleByBuiltinStringLiteralsWP_0099b070;
}



/* Entry: 000f6ac8; end: 000f6b07;  */

void FUN_000f6ac8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000aeec78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007d9418;
  _swift_getWitnessTable(&UNK_007d9418,&UNK_009b4018);
  puRam0000000000aeec78 = puVar1;
  return;
}



/* Entry: 000f6b08; end: 000f6b3f;  */

undefined * FUN_000f6b08(void)

{
  return PTR___sSSs51_ExpressibleByBuiltinExtendedGraphemeClusterLiteralsWP_0099b080;
}



/* Entry: 000f6b40; end: 000f6c03;  */

void FUN_000f6b40(long *param_1)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  byte *unaff_x20;
  long unaff_x21;
  
  plVar2 = param_1;
  FUN_00109a58();
  bVar1 = (byte)plVar2;
  lVar4 = param_1[2];
  lVar5 = *param_1;
  if (lVar5 == 0) {
    if (lVar4 != 0) goto LAB_000f6b8c;
  }
  else if (lVar4 != param_1[1] - lVar5) {
LAB_000f6b8c:
    if (*(char *)(lVar5 + lVar4) == 'n') {
      uVar3 = 0;
      func_0x000115a8(0xae65a8,&UNK_007cd3b0);
      _swift_initStaticObject();
      FUN_0010a49c();
      bVar1 = (byte)uVar3;
      if ((uVar3 & 1) != 0) {
        bVar1 = 0;
        goto LAB_000f6be0;
      }
    }
  }
  if ((char)param_1[0xf] == '\x01') {
    FUN_001080cc();
  }
  else {
    FUN_00107450();
  }
  if (unaff_x21 != 0) {
    return;
  }
LAB_000f6be0:
  *unaff_x20 = bVar1 & 1;
  return;
}



/* Entry: 000f6c04; end: 000f6ca7;  */

void FUN_000f6c04(undefined4 param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined4 *unaff_x20;
  long unaff_x21;
  
  FUN_00109a58();
  lVar2 = param_2[2];
  lVar3 = *param_2;
  if (lVar3 == 0) {
    if (lVar2 != 0) goto LAB_000f6c48;
  }
  else if (lVar2 != param_2[1] - lVar3) {
LAB_000f6c48:
    if (*(char *)(lVar3 + lVar2) == 'n') {
      uVar1 = 0;
      func_0x000115a8(0xae65a8,&UNK_007cd3b0);
      _swift_initStaticObject();
      FUN_0010a49c();
      param_1 = 0;
      if ((uVar1 & 1) != 0) goto LAB_000f6c94;
    }
  }
  FUN_00107544();
  if (unaff_x21 != 0) {
    return;
  }
LAB_000f6c94:
  *unaff_x20 = param_1;
  return;
}



/* Entry: 000f6ca8; end: 000f6d8f;  */

void FUN_000f6ca8(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined4 *unaff_x20;
  long unaff_x21;
  
  plVar1 = param_1;
  FUN_00109a58();
  lVar2 = param_1[2];
  lVar3 = *param_1;
  if (lVar3 == 0) {
    if (lVar2 != 0) goto LAB_000f6cec;
  }
  else if (lVar2 != param_1[1] - lVar3) {
LAB_000f6cec:
    if (*(char *)(lVar3 + lVar2) == 'n') {
      plVar1 = (long *)0xae65a8;
      func_0x000115a8(0xae65a8,&UNK_007cd3b0);
      _swift_initStaticObject();
      FUN_0010a49c();
      if (((ulong)plVar1 & 1) != 0) {
        plVar1 = (long *)0x0;
        goto LAB_000f6d7c;
      }
    }
  }
  FUN_00107b5c();
  if (unaff_x21 != 0) {
    return;
  }
  if (plVar1 != (long *)(long)(int)plVar1) {
    FUN_000c7004();
    _swift_allocError(&UNK_009ad5a0,plVar1,0,0);
    plVar1[1] = 2;
    *plVar1 = 0;
    _swift_willThrow();
    return;
  }
LAB_000f6d7c:
  *unaff_x20 = (int)plVar1;
  return;
}



/* Entry: 000f6d90; end: 000f6e33;  */

void FUN_000f6d90(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_00109a58();
  lVar2 = param_2[2];
  lVar3 = *param_2;
  if (lVar3 == 0) {
    if (lVar2 != 0) goto LAB_000f6dd4;
  }
  else if (lVar2 != param_2[1] - lVar3) {
LAB_000f6dd4:
    if (*(char *)(lVar3 + lVar2) == 'n') {
      uVar1 = 0;
      func_0x000115a8(0xae65a8,&UNK_007cd3b0);
      _swift_initStaticObject();
      FUN_0010a49c();
      param_1 = 0;
      if ((uVar1 & 1) != 0) goto LAB_000f6e20;
    }
  }
  FUN_00106e38();
  if (unaff_x21 != 0) {
    return;
  }
LAB_000f6e20:
  *unaff_x20 = param_1;
  return;
}



/* Entry: 000f6e34; end: 000f6f1b;  */

void FUN_000f6e34(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined4 *unaff_x20;
  long unaff_x21;
  
  plVar1 = param_1;
  FUN_00109a58();
  lVar2 = param_1[2];
  lVar3 = *param_1;
  if (lVar3 == 0) {
    if (lVar2 != 0) goto LAB_000f6e78;
  }
  else if (lVar2 != param_1[1] - lVar3) {
LAB_000f6e78:
    if (*(char *)(lVar3 + lVar2) == 'n') {
      plVar1 = (long *)0xae65a8;
      func_0x000115a8(0xae65a8,&UNK_007cd3b0);
      _swift_initStaticObject();
      FUN_0010a49c();
      if (((ulong)plVar1 & 1) != 0) {
        plVar1 = (long *)0x0;
        goto LAB_000f6f08;
      }
    }
  }
  func_0x00107bac();
  if (unaff_x21 != 0) {
    return;
  }
  if ((ulong)plVar1 >> 0x20 != 0) {
    FUN_000c7004();
    _swift_allocError(&UNK_009ad5a0,plVar1,0,0);
    plVar1[1] = 2;
    *plVar1 = 0;
    _swift_willThrow();
    return;
  }
LAB_000f6f08:
  *unaff_x20 = (int)plVar1;
  return;
}



/* Entry: 000f6f1c; end: 000f6fcb;  */

void FUN_000f6f1c(long *param_1,undefined8 param_2,code *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong *unaff_x20;
  long unaff_x21;
  
  plVar1 = param_1;
  FUN_00109a58();
  lVar2 = param_1[2];
  lVar3 = *param_1;
  if (lVar3 == 0) {
    if (lVar2 != 0) goto LAB_000f6f6c;
  }
  else if (lVar2 != param_1[1] - lVar3) {
LAB_000f6f6c:
    if (*(char *)(lVar3 + lVar2) == 'n') {
      plVar1 = (long *)0xae65a8;
      func_0x000115a8(0xae65a8,&UNK_007cd3b0);
      _swift_initStaticObject();
      FUN_0010a49c();
      if (((ulong)plVar1 & 1) != 0) {
        plVar1 = (long *)0x0;
        goto LAB_000f6fb4;
      }
    }
  }
  (*param_3)();
  if (unaff_x21 != 0) {
    return;
  }
LAB_000f6fb4:
  *unaff_x20 = (ulong)plVar1;
  return;
}



/* Entry: 000f6fcc; end: 000f6fef;  */

undefined1  [16] FUN_000f6fcc(void)

{
  return ZEXT816(0xc000000000000000) << 0x40;
}



/* Entry: 000f6ff0; end: 000f701f;  */

void FUN_000f6ff0(void)

{
  undefined8 *unaff_x20;
  
  FUN_000f77b8(*unaff_x20,unaff_x20[1],unaff_x20[2]);
  return;
}



/* Entry: 000f7020; end: 000f7043;  */

undefined1  [16] FUN_000f7020(void)

{
  return ZEXT816(0xc000000000000000) << 0x40;
}



/* Entry: 000f7044; end: 000f7073;  */

void FUN_000f7044(void)

{
  undefined4 *unaff_x20;
  
  FUN_000f7718(*unaff_x20,*(undefined8 *)(unaff_x20 + 2),*(undefined8 *)(unaff_x20 + 4));
  return;
}



/* Entry: 000f7074; end: 000f7097;  */

void FUN_000f7074(void)

{
  return;
}



/* Entry: 000f7098; end: 000f713b;  */

void FUN_000f7098(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_000f78dc();
  __sSzsE11descriptionSSvg(PTR___ss5Int64VN_0099b758,uVar1);
  if ((param_1 & 1) == 0) {
    __sSS6appendyySSF();
    _swift_bridgeObjectRetain(0xe100000000000000);
    __sSS6appendyySSF(0x22,0xe100000000000000);
    _swift_bridgeObjectRelease(uVar1);
    _swift_bridgeObjectRelease(0xe100000000000000);
  }
  return;
}



/* Entry: 000f713c; end: 000f715f;  */

void FUN_000f713c(undefined8 param_1)

{
  FUN_000f6f1c(param_1,0xaeef98,FUN_00107b5c);
  return;
}



/* Entry: 000f7160; end: 000f7203;  */

void FUN_000f7160(ulong param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_0099b860;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt64VN_0099b850,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_0099b860);
  if ((param_1 & 1) == 0) {
    __sSS6appendyySSF();
    _swift_bridgeObjectRetain(0xe100000000000000);
    __sSS6appendyySSF(0x22,0xe100000000000000);
    _swift_bridgeObjectRelease(puVar1);
    _swift_bridgeObjectRelease(0xe100000000000000);
  }
  return;
}



/* Entry: 000f7204; end: 000f7227;  */

void FUN_000f7204(undefined8 param_1)

{
  FUN_000f6f1c(param_1,0xaeef68,0x107bac);
  return;
}



/* Entry: 000f7228; end: 000f724b;  */

void FUN_000f7228(void)

{
  return;
}



/* Entry: 000f724c; end: 000f7293;  */

void FUN_000f724c(void)

{
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_0099b730,PTR___ss5Int32Vs23CustomStringConvertiblesWP_0099b740);
  return;
}



/* Entry: 000f7294; end: 000f72a7;  */

void FUN_000f7294(void)

{
  FUN_000f6ca8();
  return;
}



/* Entry: 000f72a8; end: 000f72ef;  */

void FUN_000f72a8(void)

{
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_0099b828,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_0099b838);
  return;
}



/* Entry: 000f72f0; end: 000f7303;  */

void FUN_000f72f0(void)

{
  FUN_000f6e34();
  return;
}



/* Entry: 000f7304; end: 000f735b;  */

uint FUN_000f7304(uint param_1)

{
  return param_1 & 1;
}



/* Entry: 000f735c; end: 000f736f;  */

void FUN_000f735c(void)

{
  FUN_000f6b40();
  return;
}



/* Entry: 000f7370; end: 000f7373;  */

undefined8 FUN_000f7370(undefined8 param_1,undefined8 param_2)

{
  _swift_bridgeObjectRetain(param_2);
  func_0x00023304(0,0xc000000000000000);
  _swift_bridgeObjectRelease(param_2);
  FUN_00023358(0,0xc000000000000000);
  return param_1;
}



/* Entry: 000f7374; end: 000f73cb;  */

undefined8 FUN_000f7374(undefined8 param_1,undefined8 param_2)

{
  _swift_bridgeObjectRetain(param_2);
  func_0x00023304(0,0xc000000000000000);
  _swift_bridgeObjectRelease(param_2);
  FUN_00023358(0,0xc000000000000000);
  return param_1;
}



/* Entry: 000f73cc; end: 000f73cf;  */

void FUN_000f73cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  _swift_bridgeObjectRetain(uVar2);
  func_0x00023304(0,0xc000000000000000);
  _swift_bridgeObjectRelease(uVar2);
  FUN_00023358(0,0xc000000000000000);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  return;
}



/* Entry: 000f73d0; end: 000f73f3;  */

void FUN_000f73d0(void)

{
  undefined8 *unaff_x20;
  
  FUN_000f7858(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],FUN_000fdff8);
  return;
}



/* Entry: 000f73f4; end: 000f745b;  */

void FUN_000f73f4(ulong param_1,ulong param_2)

{
  ulong *unaff_x20;
  long unaff_x21;
  
  func_0x00106c88();
  if ((param_1 & 1) == 0) {
    FUN_00106a08();
    if (unaff_x21 != 0) {
      return;
    }
  }
  else {
    param_1 = 0;
    param_2 = 0xe000000000000000;
  }
  _swift_bridgeObjectRelease(unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}


