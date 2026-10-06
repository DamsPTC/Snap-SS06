/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102a72a30; end: 102a72e53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a72a30(long param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined1 *puVar13;
  long extraout_x8;
  undefined8 uVar14;
  long extraout_x12;
  uint uVar15;
  code *pcVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined1 auStack_d0 [4];
  uint uStack_cc;
  ulong *puStack_c8;
  ulong *puStack_c0;
  undefined8 uStack_b8;
  ulong *puStack_b0;
  uint uStack_a8;
  uint uStack_a4;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  FUN_102a84318();
  lVar20 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar20 + 0x40));
  puStack_a0 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = (long)(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  puVar7 = auStack_78;
  func_0x000107c61428(param_1 + 0x10,puVar7,0,0);
  puVar2 = (ulong *)(param_1 + 0x10);
  func_0x000107c61618();
  if (puVar2 != (ulong *)0x0) {
    puVar3 = puVar2;
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar2) + 0x78))();
    func_0x000107c61170(puVar2);
    if (puVar3 != (ulong *)0x0) {
      func_0x000107c61428(param_1 + 0x10,auStack_90,0,0);
      param_1 = param_1 + 0x10;
      func_0x000107c61618();
      if (param_1 != 0) {
        uVar14 = *(undefined8 *)(param_1 + _DAT_112ee66a8);
        func_0x000107c61174();
        func_0x000107c61170(param_1);
        puVar2 = puVar3;
        func_0x000107c614f0();
        puVar4 = puVar2;
        (**(code **)(puVar7 + 0x10))();
        puVar5 = puVar2;
        puVar13 = puVar7;
        (**(code **)(puVar7 + 0x20))();
        if (((uint)puVar13 & 0xff) == 1) {
          puVar5 = puVar2;
          (**(code **)(puVar7 + 0x18))(puVar2,puVar7);
        }
        pcVar16 = *(code **)(puVar7 + 0x28);
        puVar6 = puVar2;
        (*pcVar16)(puVar2,puVar7);
        uStack_a4 = (uint)puVar6;
        puVar6 = puVar2;
        (*pcVar16)(puVar2,puVar7);
        uStack_a8 = (uint)puVar6;
        (*pcVar16)(puVar2,puVar7);
        uVar15 = (uint)puVar2;
        uVar18 = puVar4[2];
        if (uVar18 == 0) {
          func_0x000107c6142c(puVar4);
          puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
          uStack_cc = uVar15;
          puStack_c0 = puVar5;
          uStack_b8 = uVar14;
          puStack_b0 = puVar3;
          FUN_102a72f9c(0,uVar18,0);
          FUN_102a733f0(0,0x112ee66d8,&PTR_PTR_1126abe28);
          lVar21 = (long)puVar4 +
                   ((ulong)*(byte *)(lVar20 + 0x50) + 0x20 &
                   ((ulong)*(byte *)(lVar20 + 0x50) ^ 0xffffffffffffffff));
          lVar20 = *(long *)(lVar20 + 0x48);
          puStack_c8 = puVar4;
          do {
            puVar12 = puStack_98;
            func_0x000102a6fe70(lVar21,lVar1);
            puVar7 = puStack_a0;
            func_0x000102a6fe70(lVar1,puStack_a0);
            FUN_102a7256c();
            func_0x000102a6feb4(lVar1);
            uVar19 = *(ulong *)(puVar12 + 0x10);
            puStack_98 = puVar12;
            if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar19) {
              FUN_102a72f9c(1 < *(ulong *)(puVar12 + 0x18),uVar19 + 1,1);
            }
            puVar12 = puStack_98;
            *(ulong *)(puStack_98 + 0x10) = uVar19 + 1;
            *(undefined1 **)(puStack_98 + uVar19 * 8 + 0x20) = puVar7;
            lVar21 = lVar21 + lVar20;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
          func_0x000107c6142c(puStack_c8);
          puVar3 = puStack_b0;
          uVar14 = uStack_b8;
          uVar15 = uStack_cc;
        }
        uVar17 = (ulong)(uVar15 >> 0x10 & 1);
        uVar19 = (ulong)(uStack_a8 >> 8 & 1);
        puVar8 = PTR_PTR_1126abe20;
        func_0x000107c610f8(PTR_PTR_1126abe20);
        uVar9 = 0;
        func_0x000107c2bb54(0);
        func_0x000107c61180();
        uVar10 = 0;
        FUN_102a733f0(0,0x112ee66d8,&PTR_PTR_1126abe28);
        puVar11 = puVar12;
        func_0x000107c5fc48(puVar12,uVar10);
        func_0x000107c6142c(puVar12);
        func_0x000107c472f8(puVar8);
        func_0x000107c61170(uVar9);
        func_0x000107c61170(puVar11);
        puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c61174(puVar8);
        func_0x000107c46ed0(puVar12);
        func_0x000107c5460c(puVar8);
        func_0x000107c61170(puVar12);
        uVar18 = (ulong)(uStack_a4 & 1);
        func_0x000107c5fca0(uVar18);
        func_0x000107c558a4(puVar8);
        func_0x000107c61170(uVar18);
        func_0x000107c5fca0(uVar19);
        func_0x000107c59268(puVar8);
        func_0x000107c61170(uVar19);
        func_0x000107c5fca0(uVar17);
        func_0x000107c591c8(puVar8);
        func_0x000107c61170(uVar17);
        func_0x000107c61170(puVar8);
        func_0x000107c4d664(uVar14);
        func_0x000107c61170(uVar14);
        func_0x000107c61170(puVar8);
      }
      func_0x000107c615e8(puVar3);
    }
  }
  return;
}



/* Entry: 102a72e54; end: 102a72f17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a72e54(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_112ee7040;
  func_0x000107c61428(unaff_x20 + _DAT_112ee7040,auStack_58,0,0);
  lVar1 = unaff_x20 + lVar1;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c615e8();
    puVar2 = PTR_PTR_1126abe30;
    func_0x000107c610f8(PTR_PTR_1126abe30);
    func_0x000107c453e4();
    puVar3 = PTR_PTR_1126abe38;
    func_0x000107c610f8(PTR_PTR_1126abe38);
    func_0x000107c46e4c((double)param_1);
    func_0x000107c52184(puVar2);
    func_0x000107c4d664(*(undefined8 *)(unaff_x20 + _DAT_112ee66b0));
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 102a72f18; end: 102a72f23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a72f18(void)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  lVar8 = unaff_x20 + _DAT_112ee7040;
  func_0x000107c61428(lVar8,auStack_58,0,0);
  lVar1 = lVar8;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar7 = *(long *)(lVar8 + 8);
    lVar8 = lVar1;
    func_0x000107c614f0();
    (**(code **)(lVar7 + 0x10))();
    lVar8 = *(long *)(lVar8 + 0x10);
    func_0x000107c6142c();
    if (lVar8 == 0) {
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ee66a8);
      puVar3 = PTR_PTR_1126abe20;
      func_0x000107c610f8(PTR_PTR_1126abe20);
      func_0x000107c61174(uVar6);
      uVar4 = 0;
      func_0x000107c2bb54(0);
      func_0x000107c61180();
      uVar5 = 0;
      FUN_102a733f0(0,0x112ee66d8,&PTR_PTR_1126abe28);
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,uVar5);
      func_0x000107c472f8(puVar3);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(puVar9);
      func_0x000107c4d664(uVar6);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(uVar6);
    }
    else {
      puVar9 = *(undefined **)(unaff_x20 + _DAT_112ee66b8);
      puVar3 = &UNK_11058eb68;
      func_0x000107c613fc(&UNK_11058eb68,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      pcStack_68 = FUN_102a7310c;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_11058eb80;
      ppuVar2 = &puStack_88;
      puStack_60 = puVar3;
      func_0x000107c60bc4(ppuVar2);
      puVar3 = puStack_60;
      func_0x000107c61174(puVar9);
      func_0x000107c61574(puVar3);
      puVar3 = puVar9;
      func_0x000107c5c318(puVar9);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar2);
      func_0x000107c61170(puVar9);
      func_0x000107c3e924(puVar3);
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 102a72f24; end: 102a72f9b;  */

void FUN_102a72f24(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_102a733f0(0,param_1,param_2);
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



/* Entry: 102a72f9c; end: 102a72fb7;  */

void FUN_102a72f9c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102a72fb8();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102a72fb8; end: 102a7310b;  */

undefined * FUN_102a72fb8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102a7310c);
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
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112ee66d8;
    FUN_102a72f24(0x112ee66d8,&PTR_PTR_1126abe28,0x112ee67c8,&UNK_10db11c30);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_102a733f0(0,0x112ee66d8,&PTR_PTR_1126abe28);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 102a7310c; end: 102a73133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a7310c(void)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  long extraout_x8;
  undefined8 uVar15;
  long extraout_x12;
  uint uVar16;
  code *pcVar17;
  ulong uVar18;
  long unaff_x20;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  undefined1 auStack_d0 [4];
  uint uStack_cc;
  ulong *puStack_c8;
  ulong *puStack_c0;
  undefined8 uStack_b8;
  ulong *puStack_b0;
  uint uStack_a8;
  uint uStack_a4;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar1 = 0;
  FUN_102a84318();
  lVar21 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  puStack_a0 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar1 = (long)(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  puVar8 = auStack_78;
  func_0x000107c61428(unaff_x20 + 0x10,puVar8,0,0);
  puVar2 = (ulong *)(unaff_x20 + 0x10);
  func_0x000107c61618();
  if (puVar2 != (ulong *)0x0) {
    puVar3 = puVar2;
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar2) + 0x78))();
    func_0x000107c61170(puVar2);
    if (puVar3 != (ulong *)0x0) {
      func_0x000107c61428(unaff_x20 + 0x10,auStack_90,0,0);
      lVar4 = unaff_x20 + 0x10;
      func_0x000107c61618();
      if (lVar4 != 0) {
        uVar15 = *(undefined8 *)(lVar4 + _DAT_112ee66a8);
        func_0x000107c61174();
        func_0x000107c61170(lVar4);
        puVar2 = puVar3;
        func_0x000107c614f0();
        puVar5 = puVar2;
        (**(code **)(puVar8 + 0x10))();
        puVar6 = puVar2;
        puVar14 = puVar8;
        (**(code **)(puVar8 + 0x20))();
        if (((uint)puVar14 & 0xff) == 1) {
          puVar6 = puVar2;
          (**(code **)(puVar8 + 0x18))(puVar2,puVar8);
        }
        pcVar17 = *(code **)(puVar8 + 0x28);
        puVar7 = puVar2;
        (*pcVar17)(puVar2,puVar8);
        uStack_a4 = (uint)puVar7;
        puVar7 = puVar2;
        (*pcVar17)(puVar2,puVar8);
        uStack_a8 = (uint)puVar7;
        (*pcVar17)(puVar2,puVar8);
        uVar16 = (uint)puVar2;
        uVar19 = puVar5[2];
        if (uVar19 == 0) {
          func_0x000107c6142c(puVar5);
          puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        else {
          puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
          uStack_cc = uVar16;
          puStack_c0 = puVar6;
          uStack_b8 = uVar15;
          puStack_b0 = puVar3;
          FUN_102a72f9c(0,uVar19,0);
          FUN_102a733f0(0,0x112ee66d8,&PTR_PTR_1126abe28);
          lVar4 = (long)puVar5 +
                  ((ulong)*(byte *)(lVar21 + 0x50) + 0x20 &
                  ((ulong)*(byte *)(lVar21 + 0x50) ^ 0xffffffffffffffff));
          lVar21 = *(long *)(lVar21 + 0x48);
          puStack_c8 = puVar5;
          do {
            puVar13 = puStack_98;
            func_0x000102a6fe70(lVar4,lVar1);
            puVar8 = puStack_a0;
            func_0x000102a6fe70(lVar1,puStack_a0);
            FUN_102a7256c();
            func_0x000102a6feb4(lVar1);
            uVar20 = *(ulong *)(puVar13 + 0x10);
            puStack_98 = puVar13;
            if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar20) {
              FUN_102a72f9c(1 < *(ulong *)(puVar13 + 0x18),uVar20 + 1,1);
            }
            puVar13 = puStack_98;
            *(ulong *)(puStack_98 + 0x10) = uVar20 + 1;
            *(undefined1 **)(puStack_98 + uVar20 * 8 + 0x20) = puVar8;
            lVar4 = lVar4 + lVar21;
            uVar19 = uVar19 - 1;
          } while (uVar19 != 0);
          func_0x000107c6142c(puStack_c8);
          puVar3 = puStack_b0;
          uVar15 = uStack_b8;
          uVar16 = uStack_cc;
        }
        uVar18 = (ulong)(uVar16 >> 0x10 & 1);
        uVar20 = (ulong)(uStack_a8 >> 8 & 1);
        puVar9 = PTR_PTR_1126abe20;
        func_0x000107c610f8(PTR_PTR_1126abe20);
        uVar10 = 0;
        func_0x000107c2bb54(0);
        func_0x000107c61180();
        uVar11 = 0;
        FUN_102a733f0(0,0x112ee66d8,&PTR_PTR_1126abe28);
        puVar12 = puVar13;
        func_0x000107c5fc48(puVar13,uVar11);
        func_0x000107c6142c(puVar13);
        func_0x000107c472f8(puVar9);
        func_0x000107c61170(uVar10);
        func_0x000107c61170(puVar12);
        puVar13 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c61174(puVar9);
        func_0x000107c46ed0(puVar13);
        func_0x000107c5460c(puVar9);
        func_0x000107c61170(puVar13);
        uVar19 = (ulong)(uStack_a4 & 1);
        func_0x000107c5fca0(uVar19);
        func_0x000107c558a4(puVar9);
        func_0x000107c61170(uVar19);
        func_0x000107c5fca0(uVar20);
        func_0x000107c59268(puVar9);
        func_0x000107c61170(uVar20);
        func_0x000107c5fca0(uVar18);
        func_0x000107c591c8(puVar9);
        func_0x000107c61170(uVar18);
        func_0x000107c61170(puVar9);
        func_0x000107c4d664(uVar15);
        func_0x000107c61170(uVar15);
        func_0x000107c61170(puVar9);
      }
      func_0x000107c615e8(puVar3);
    }
  }
  return;
}



/* Entry: 102a73134; end: 102a73173;  */

void FUN_102a73134(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee66e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db11b50;
  func_0x000107c61520(&UNK_10db11b50,&UNK_11058ec48);
  puRam0000000112ee66e0 = puVar1;
  return;
}



/* Entry: 102a73174; end: 102a732d7;  */

int FUN_102a73174(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102a731f0;
        goto LAB_102a731d4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102a731d4:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_102a731f0:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102a732d8; end: 102a733b7;  */

void FUN_102a732d8(void)

{
  func_0x000107c61168(&PTR_PTR_112ee6728);
  return;
}



/* Entry: 102a733b8; end: 102a733ef;  */

void FUN_102a733b8(void)

{
  code *pcVar1;
  ulong *puVar2;
  ulong *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x20;
  double dVar6;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  dVar6 = *(double *)(unaff_x20 + 0x18);
  puVar5 = auStack_58;
  func_0x000107c61428(lVar4 + 0x10,puVar5,0,0);
  puVar2 = (ulong *)(lVar4 + 0x10);
  func_0x000107c61618();
  if (puVar2 != (ulong *)0x0) {
    puVar3 = puVar2;
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar2) + 0x60))();
    func_0x000107c61170(puVar2);
    if (puVar3 != (ulong *)0x0) {
      puVar2 = puVar3;
      func_0x000107c614f0(puVar3);
      if (0x7fefffffffffffff < (ulong)ABS(dVar6)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102a71c34);
        (*pcVar1)();
      }
      if (dVar6 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102a71c38);
        (*pcVar1)();
      }
      if (9.223372036854776e+18 <= dVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102a71c3c);
        (*pcVar1)();
      }
      (**(code **)(puVar5 + 0x20))((long)dVar6,puVar2,puVar5);
      func_0x000107c615e8(puVar3);
    }
  }
  return;
}



/* Entry: 102a733f0; end: 102a7342f;  */

void FUN_102a733f0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102a73430; end: 102a73477;  */

void FUN_102a73430(long param_1,long param_2)

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



/* Entry: 102a73478; end: 102a7349b;  */

void FUN_102a73478(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a7349c; end: 102a73633;  */

undefined * FUN_102a7349c(long param_1)

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
  undefined1 auStack_128 [88];
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
  undefined1 uStack_80;
  
  puVar7 = *(undefined **)(param_1 + 0x10);
  if (puVar7 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  func_0x0001000285a8(0x112ee6850,&UNK_10db11cb0);
  puVar2 = puVar7;
  func_0x000107c60498();
  func_0x000107c6157c();
  uStack_a8 = *(ulong *)(param_1 + 0x48);
  uStack_b0 = *(ulong *)(param_1 + 0x40);
  uStack_98 = *(ulong *)(param_1 + 0x58);
  uStack_a0 = *(ulong *)(param_1 + 0x50);
  uStack_88 = *(ulong *)(param_1 + 0x68);
  uStack_90 = *(ulong *)(param_1 + 0x60);
  uStack_80 = *(undefined1 *)(param_1 + 0x70);
  uVar9 = *(ulong *)(param_1 + 0x28);
  uVar8 = *(ulong *)(param_1 + 0x20);
  uStack_b8 = *(ulong *)(param_1 + 0x38);
  uStack_c0 = *(ulong *)(param_1 + 0x30);
  uStack_d0 = uVar8;
  uStack_c8 = uVar9;
  FUN_102a73690(&uStack_d0,auStack_128);
  uVar3 = uVar8;
  uVar5 = uVar9;
  func_0x000100029284();
  if ((uVar5 & 1) == 0) {
    puVar4 = (ulong *)(param_1 + 0x78);
    do {
      uVar5 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar5 + 0x40) = *(ulong *)(puVar2 + uVar5 + 0x40) | 1L << (uVar3 & 0x3f);
      puVar6 = (ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 0x10);
      *puVar6 = uVar8;
      puVar6[1] = uVar9;
      puVar6 = (ulong *)(*(long *)(puVar2 + 0x38) + uVar3 * 0x48);
      puVar6[1] = uStack_b8;
      *puVar6 = uStack_c0;
      *(undefined1 *)(puVar6 + 8) = uStack_80;
      puVar6[5] = uStack_98;
      puVar6[4] = uStack_a0;
      puVar6[7] = uStack_88;
      puVar6[6] = uStack_90;
      puVar6[3] = uStack_a8;
      puVar6[2] = uStack_b0;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102a73634);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar7 = puVar7 + -1;
      if (puVar7 == (undefined *)0x0) {
        func_0x000107c61574(puVar2);
        return puVar2;
      }
      uStack_a8 = puVar4[5];
      uStack_b0 = puVar4[4];
      uStack_98 = puVar4[7];
      uStack_a0 = puVar4[6];
      uStack_88 = puVar4[9];
      uStack_90 = puVar4[8];
      uStack_80 = (undefined1)puVar4[10];
      uVar9 = puVar4[1];
      uVar8 = *puVar4;
      uStack_b8 = puVar4[3];
      uStack_c0 = puVar4[2];
      uStack_d0 = uVar8;
      uStack_c8 = uVar9;
      FUN_102a73690(&uStack_d0,auStack_128);
      uVar3 = uVar8;
      uVar5 = uVar9;
      func_0x000100029284();
      puVar4 = puVar4 + 0xb;
    } while ((uVar5 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a735f8);
  (*pcVar1)();
}



/* Entry: 102a73634; end: 102a73637;  */

void FUN_102a73634(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 102a73638; end: 102a73683;  */

void FUN_102a73638(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_20 = &UNK_10db11c70;
  func_0x000107c61524(param_1,0,2,&puStack_20,param_1 + 0x58);
  return;
}



/* Entry: 102a73684; end: 102a7368f;  */

void FUN_102a73684(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e70f970);
  return;
}



/* Entry: 102a73690; end: 102a736df;  */

undefined8 FUN_102a73690(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ee6858;
  func_0x0001000285a8(0x112ee6858,&UNK_10db11cb8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102a736e0; end: 102a736e3;  */

void FUN_102a736e0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 102a736e4; end: 102a73747;  */

void FUN_102a736e4(long param_1)

{
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_38 = &UNK_10db11cd0;
  puStack_30 = &UNK_10db11ce8;
  puStack_20 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_28 = &UNK_10db11ce8;
  puStack_18 = &UNK_10db11d00;
  func_0x000107c61524(param_1,0,5,&puStack_38,param_1 + 0x58);
  return;
}



/* Entry: 102a73748; end: 102a7375f;  */

void FUN_102a73748(undefined8 param_1,undefined8 param_2)

{
  (*(code *)0x102a73910)();
  func_0x000107c61434(param_2);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 102a73760; end: 102a737ab;  */

void FUN_102a73760(undefined8 param_1,undefined8 param_2,code *param_3)

{
  (*param_3)();
  func_0x000107c61434(param_2);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 102a737ac; end: 102a737c3;  */

undefined8 FUN_102a737ac(void)

{
  return 0x4072c00000000000;
}



/* Entry: 102a737c4; end: 102a7381b;  */

void FUN_102a737c4(void)

{
  func_0x000102a73938();
  func_0x000107c615f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102a7381c; end: 102a7384b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a7381c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112ee6860);
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102a7384c);
    (*pcVar1)();
  }
  func_0x000107c610a4();
  if (-1 < lVar2) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a73848);
  (*pcVar1)();
}



/* Entry: 102a7384c; end: 102a73867;  */

void FUN_102a7384c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShoppingLensFetcher.CacheItem",0x1d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a73974);
  (*pcVar1)();
}



/* Entry: 102a73868; end: 102a738b3;  */

void FUN_102a73868(void)

{
  ulong *unaff_x20;
  
  FUN_102a73904(0,*(undefined8 *)((*(ulong *)PTR__swift_isaMask_11034f488 & *unaff_x20) + 0x50));
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102a738b4; end: 102a73903;  */

/* WARNING: Possible PIC construction at 0x000102a738e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a738e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a738b4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ee6860));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ee6868 + 8))
  ;
  return;
}



/* Entry: 102a73904; end: 102a73947;  */

void FUN_102a73904(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e70f9d8);
  return;
}



/* Entry: 102a73948; end: 102a73973;  */

void FUN_102a73948(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShoppingLensFetcher.CacheItem",0x1d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a73974);
  (*pcVar1)();
}



/* Entry: 102a73974; end: 102a739b7;  */

void FUN_102a73974(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a739b8; end: 102a739c7; -[_TtC19ShoppingLensFetcher14DownloadResult success] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102a739b8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ee69b8);
}



/* Entry: 102a739c8; end: 102a739d7; -[_TtC19ShoppingLensFetcher14DownloadResult fromCache] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102a739c8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ee69c0);
}



/* Entry: 102a739d8; end: 102a73a33; -[_TtC19ShoppingLensFetcher14DownloadResult init] */

void FUN_102a739d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ShoppingLensFetcher.DownloadResult",0x22,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102a73a04);
  (*pcVar1)();
}



/* Entry: 102a73a34; end: 102a73a43; -[_TtC19ShoppingLensFetcher14DownloadResult .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102a73a34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112ee69c8));
  return;
}



/* Entry: 102a73a44; end: 102a73a63;  */

void FUN_102a73a44(void)

{
  func_0x000107c61168(&PTR_PTR_112883640);
  return;
}



/* Entry: 102a73a64; end: 102a73af3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_102a73a64(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112ee69c8);
  if (lVar3 != 0) {
    lVar1 = lVar3;
    func_0x000107c615f0();
    func_0x000107c44314();
    if (lVar1 == 0) {
      lVar1 = lVar3;
      func_0x000107c30a1c();
      func_0x000107c61180();
      if (lVar1 != 0) {
        lVar2 = lVar1;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar1);
        func_0x000107c615e8(lVar3);
        goto LAB_102a73aa4;
      }
    }
    func_0x000107c615e8(lVar3);
  }
  lVar2 = 0;
  param_2 = 0xf000000000000000;
LAB_102a73aa4:
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = lVar2;
  return auVar4;
}



/* Entry: 102a73af4; end: 102a73c27; -[_TtC19ShoppingLensFetcher14DownloadResult getData] */

void FUN_102a73af4(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102a73a64();
  func_0x000107c61170(param_1);
  if (param_2 >> 0x3c < 0xf) {
    uVar2 = uVar1;
    func_0x000107c5ee20(uVar1,param_2);
    func_0x0001000b44c0(uVar1,param_2);
  }
  else {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102a73c28; end: 102a73c3b;  */

bool FUN_102a73c28(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102a73c3c; end: 102a73ce7;  */

void FUN_102a73c3c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102a73ce8; end: 102a73ceb;  */

void FUN_102a73ce8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee69f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db11d80;
  func_0x000107c61520(&UNK_10db11d80,&UNK_11058f138);
  puRam0000000112ee69f8 = puVar1;
  return;
}



/* Entry: 102a73cec; end: 102a73d2b;  */

void FUN_102a73cec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee69f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db11d80;
  func_0x000107c61520(&UNK_10db11d80,&UNK_11058f138);
  puRam0000000112ee69f8 = puVar1;
  return;
}



/* Entry: 102a73d2c; end: 102a73e9f;  */

void FUN_102a73d2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102a73ea0; end: 102a74247;  */

void FUN_102a73ea0(void)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0xf0,auStack_78,0,0);
  lVar16 = *(long *)(*(long *)(unaff_x20 + 0xf0) + 0x10);
  uVar9 = *(ulong *)(unaff_x20 + 0x30);
  plVar4 = (long *)(unaff_x20 + 0x18);
  func_0x0001000a8868();
  lVar12 = *(long *)(*plVar4 + 0x10);
  if (lVar12 == 0) {
    lVar12 = 1;
  }
  else {
    func_0x000107c615f0(lVar12);
    uVar9 = 0x800000010f0e5ce0;
    uVar5 = 0xd00000000000001f;
    func_0x000107c5fadc(0xd00000000000001f);
    lVar14 = lVar12;
    func_0x000107c4980c();
    func_0x000107c61170(uVar5);
    func_0x000107c615e8(lVar12);
    lVar12 = (long)(int)lVar14;
  }
  uVar11 = *(ulong *)(unaff_x20 + 0xd8);
  if (uVar11 != 0 && lVar16 < lVar12) {
    uVar13 = uVar11 & 0xffffffffffffff8;
    if (uVar11 >> 0x3e == 0) {
      uVar18 = *(ulong *)(uVar13 + 0x10);
    }
    else {
      uVar18 = uVar11;
      if (-1 < (long)uVar11) {
        uVar18 = uVar13;
      }
      func_0x000107c60480();
    }
    func_0x000107c61434(uVar11);
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar18 != 0) {
      uVar17 = 0;
      do {
        while( true ) {
          if ((uVar11 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar13 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x102a74214);
              (*pcVar3)();
            }
            uVar6 = *(ulong *)(uVar11 + uVar17 * 8 + 0x20);
            func_0x000107c61174();
            uVar10 = uVar9;
          }
          else {
            uVar6 = uVar17;
            uVar10 = uVar11;
            func_0x000100ff3f88();
          }
          uVar1 = uVar17 + 1;
          if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102a74210);
            (*pcVar3)();
          }
          uVar7 = uVar6;
          func_0x000107c4a400();
          uVar9 = uVar10;
          if ((int)uVar7 != 0) break;
LAB_102a73fb0:
          func_0x000107c61170(uVar6);
          uVar17 = uVar17 + 1;
          if (uVar1 == uVar18) goto LAB_102a7413c;
        }
        lVar14 = *(long *)(unaff_x20 + 0xf0);
        func_0x000107c61434(lVar14);
        uVar7 = uVar6;
        func_0x000107c4b1dc(uVar6);
        func_0x000107c61180();
        uVar8 = uVar7;
        func_0x000107c5faec();
        uVar9 = uVar10;
        func_0x000107c61170(uVar7);
        if (*(long *)(lVar14 + 0x10) == 0) {
          func_0x000107c6142c(lVar14);
          func_0x000107c6142c(uVar10);
        }
        else {
          uVar7 = uVar10;
          func_0x000100029284(uVar8);
          uVar9 = uVar7;
          func_0x000107c6142c(lVar14);
          func_0x000107c6142c(uVar10);
          if ((uVar7 & 1) != 0) goto LAB_102a73fb0;
        }
        puVar15 = puVar2;
        func_0x000107c61558();
        if (((ulong)puVar15 & 1) == 0) {
          uVar9 = *(long *)(puVar2 + 0x10) + 1;
          func_0x0001019d4adc(0,uVar9,1);
        }
        uVar10 = *(ulong *)(puVar2 + 0x10);
        uVar17 = uVar10 + 1;
        if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar10) {
          uVar9 = uVar17;
          func_0x0001019d4adc(1 < *(ulong *)(puVar2 + 0x18),uVar17,1);
        }
        *(ulong *)(puVar2 + 0x10) = uVar17;
        *(ulong *)(puVar2 + uVar10 * 8 + 0x20) = uVar6;
        uVar17 = uVar1;
      } while (uVar1 != uVar18);
    }
LAB_102a7413c:
    func_0x000107c6142c(uVar11);
    if (((long)puVar2 < 0) || (((ulong)puVar2 >> 0x3e & 1) != 0)) {
      puVar15 = puVar2;
      func_0x000107c60480();
    }
    else {
      puVar15 = *(undefined **)(puVar2 + 0x10);
    }
    if (puVar15 != (undefined *)0x0) {
      uVar9 = 0;
      do {
        if (((ulong)puVar2 & 0xc000000000000001) == 0) {
          if (*(ulong *)(puVar2 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102a74218);
            (*pcVar3)();
          }
          uVar11 = *(ulong *)(puVar2 + uVar9 * 8 + 0x20);
          func_0x000107c61174(uVar11);
        }
        else {
          uVar11 = uVar9;
          func_0x000100ff3f88(uVar9,puVar2);
        }
        if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102a741e0);
          (*pcVar3)();
        }
        puVar19 = (undefined *)(uVar9 + 1);
        if (lVar12 - lVar16 == uVar9) {
          func_0x000107c61170();
          break;
        }
        FUN_102a75a70();
        func_0x000107c61170(uVar11);
        uVar9 = uVar9 + 1;
      } while (puVar19 != puVar15);
    }
    func_0x000107c61574(puVar2);
  }
  return;
}



/* Entry: 102a74248; end: 102a74627;  */

/* WARNING: Possible PIC construction at 0x000102a7428c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a742d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102a74398: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a742d4) */
/* WARNING: Removing unreachable block (ram,0x000102a74318) */
/* WARNING: Removing unreachable block (ram,0x000102a742d8) */
/* WARNING: Removing unreachable block (ram,0x000102a742dc) */
/* WARNING: Removing unreachable block (ram,0x000102a742e4) */
/* WARNING: Removing unreachable block (ram,0x000102a74378) */
/* WARNING: Removing unreachable block (ram,0x000102a742ec) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x000102a74290) */
/* WARNING: Removing unreachable block (ram,0x000102a74298) */
/* WARNING: Removing unreachable block (ram,0x000102a74310) */
/* WARNING: Removing unreachable block (ram,0x000102a7431c) */
/* WARNING: Removing unreachable block (ram,0x000102a7429c) */
/* WARNING: Removing unreachable block (ram,0x000102a7439c) */
/* WARNING: Removing unreachable block (ram,0x000102a74324) */
/* WARNING: Removing unreachable block (ram,0x000102a74334) */
/* WARNING: Removing unreachable block (ram,0x000102a74344) */
/* WARNING: Removing unreachable block (ram,0x000102a7435c) */

void FUN_102a74248(long param_1)

{
  long unaff_x20;
  
  if (param_1 == 0) {
    param_1 = *(long *)(unaff_x20 + 0xe0);
    if (param_1 == 0) {
      return;
    }
    func_0x000107c4b1dc();
    func_0x000107c61180();
    func_0x000107c5faec();
  }
  else {
    func_0x000107c4b1dc(param_1);
    func_0x000107c61180();
    func_0x000107c5faec();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102a74628; end: 102a74967;  */

void FUN_102a74628(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    func_0x000107c61604(param_1 + 200,param_2);
    func_0x000107c61604(param_1 + 0xd0,param_3);
    func_0x0001000285a8(0x112d5dfe0,&UNK_10db17e80);
    uVar9 = param_2;
    func_0x0001000b637c(param_2);
    plVar1 = *(long **)(param_1 + 0x10);
    func_0x000100471e0c(plVar1,0);
    func_0x000107c61574(uVar9);
    puVar7 = &UNK_11058f1b8;
    puVar2 = puVar7;
    func_0x000107c613fc(&UNK_11058f1b8,0x18,7);
    func_0x000107c61644(puVar2 + 0x10,param_1);
    puVar3 = puVar7;
    func_0x000107c613fc(&UNK_11058f1b8,0x18,7);
    func_0x000107c61644(puVar3 + 0x10,param_1);
    puVar4 = &UNK_11058f1e0;
    func_0x000107c613fc(&UNK_11058f1e0,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = param_2;
    pcVar10 = *(code **)(*plVar1 + 0x70);
    func_0x000107c6157c(param_1);
    func_0x000107c6157c(puVar3);
    func_0x000107c61174(param_2);
    pcVar5 = FUN_102a75a50;
    puVar8 = puVar2;
    (*pcVar10)(FUN_102a75a50,puVar2,0x102a75a58,puVar4);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(puVar4);
    func_0x000107c614f0(pcVar5);
    uVar9 = *(undefined8 *)(param_1 + 0xc0);
    pcVar10 = *(code **)(puVar8 + 0x10);
    func_0x000107c6157c(uVar9);
    (*pcVar10)();
    func_0x000107c615e8(pcVar5);
    func_0x000107c61574(uVar9);
    func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
    uVar9 = param_3;
    func_0x0001000b637c(param_3);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    func_0x000100471e0c(uVar6,0);
    func_0x000107c61574(uVar9);
    uVar9 = 0x112d530a8;
    func_0x0001000285a8(0x112d530a8,&UNK_10d919940);
    pcVar5 = FUN_102a74e6c;
    func_0x0001000bfde0(FUN_102a74e6c,0,uVar9);
    func_0x000107c61574(uVar6);
    puVar2 = puVar7;
    func_0x000107c613fc(&UNK_11058f1b8,0x18,7);
    func_0x000107c61644(puVar2 + 0x10,param_1);
    func_0x000107c613fc(&UNK_11058f1b8,0x18,7);
    func_0x000107c61644(puVar7 + 0x10,param_1);
    func_0x000107c61574(param_1);
    puVar4 = &UNK_11058f208;
    func_0x000107c613fc(&UNK_11058f208,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar7;
    *(undefined8 *)(puVar4 + 0x18) = param_3;
    pcVar10 = *(code **)(*(long *)pcVar5 + 0x70);
    func_0x000107c6157c(puVar7);
    func_0x000107c61174(param_3);
    uVar9 = 0x102a75a60;
    puVar3 = puVar2;
    (*pcVar10)(0x102a75a60,puVar2,0x102a75a68,puVar4);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(puVar4);
    func_0x000107c614f0(uVar9);
    uVar6 = *(undefined8 *)(param_1 + 0xc0);
    pcVar10 = *(code **)(puVar3 + 0x10);
    func_0x000107c6157c(uVar6);
    (*pcVar10)();
    func_0x000107c61574(param_1);
    func_0x000107c61574(plVar1);
    func_0x000107c61574(pcVar5);
    func_0x000107c615e8(uVar9);
    func_0x000107c61574(uVar6);
  }
  return;
}



/* Entry: 102a74968; end: 102a749f3;  */

void FUN_102a74968(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0xe0);
    *(undefined8 *)(param_2 + 0xe0) = uVar1;
    func_0x000107c61174(uVar1);
    func_0x000107c61174();
    FUN_102a74248(uVar2);
    func_0x000107c61574(param_2);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 102a749f4; end: 102a74ad3;  */

void FUN_102a749f4(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar1 = param_1 + 200;
    func_0x000107c61618();
    if (uVar1 != 0) {
      func_0x0001000285a8(0x112d5b0a0,&UNK_10d97aac0);
      func_0x000107c61174();
      func_0x000107c61174(param_2);
      uVar2 = uVar1;
      func_0x000107c60118(uVar1,param_2);
      func_0x000107c61170(param_2);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar1);
      if ((uVar2 & 1) != 0) {
        func_0x000107c61604(param_1 + 200,0);
      }
    }
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 102a74ad4; end: 102a74b4b;  */

void FUN_102a74ad4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0xd8);
    *(undefined8 *)(param_2 + 0xd8) = uVar1;
    func_0x000107c61434(uVar1);
    func_0x000107c6142c(uVar2);
    FUN_102a73ea0();
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 102a74b4c; end: 102a74c2b;  */

void FUN_102a74b4c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar1 = param_1 + 0xd0;
    func_0x000107c61618();
    if (uVar1 != 0) {
      func_0x0001000285a8(0x112d5b0a0,&UNK_10d97aac0);
      func_0x000107c61174();
      func_0x000107c61174(param_2);
      uVar2 = uVar1;
      func_0x000107c60118(uVar1,param_2);
      func_0x000107c61170(param_2);
      func_0x000107c61170(uVar1);
      func_0x000107c61170(uVar1);
      if ((uVar2 & 1) != 0) {
        func_0x000107c61604(param_1 + 0xd0,0);
      }
    }
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 102a74c2c; end: 102a74e6b;  */

void FUN_102a74c2c(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    func_0x000107c61428(param_1 + 0xe8,auStack_90,1,0);
    lVar4 = *(long *)(param_1 + 0xe8);
    uVar8 = 1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar9 = 0xffffffffffffffff;
    if ((*(byte *)(lVar4 + 0x20) & 0x3f) < 6) {
      uVar9 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar9 = uVar9 & *(ulong *)(lVar4 + 0x40);
    func_0x000107c61434();
    lVar10 = 0;
    while( true ) {
      for (; uVar9 != 0; uVar9 = uVar9 - 1 & uVar9) {
        uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar5 = *(ulong *)(*(long *)(lVar4 + 0x38) + LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) * 8 +
                          lVar10 * 0x200);
        func_0x000107c61174();
        uVar11 = uVar5;
        func_0x000107c3db80();
        func_0x000107c61180();
        uVar7 = 0x112ec7b08;
        func_0x0001000285a8(0x112ec7b08,&UNK_10daea010);
        uVar6 = uVar11;
        func_0x000107c5fc54(uVar11,uVar7);
        func_0x000107c61170(uVar11);
        if (uVar6 >> 0x3e == 0) {
          uVar11 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar11 = uVar6 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar6) {
            uVar11 = uVar6;
          }
          func_0x000107c60480();
        }
        if (uVar11 != 0) {
          if ((long)uVar11 < 1) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102a74e6c);
            (*pcVar2)();
          }
          uVar12 = 0;
          do {
            if ((uVar6 & 0xc000000000000001) == 0) {
              uVar13 = *(ulong *)(uVar6 + uVar12 * 8 + 0x20);
              func_0x000107c615f0(uVar13);
            }
            else {
              uVar13 = uVar12;
              func_0x0001028b4908(uVar12,uVar6);
            }
            uVar12 = uVar12 + 1;
            func_0x000107c3f474(uVar13);
            func_0x000107c615e8(uVar13);
          } while (uVar11 != uVar12);
        }
        func_0x000107c61170(uVar5);
        func_0x000107c6142c(uVar6);
      }
      bVar3 = SCARRY8(lVar10,1);
      lVar10 = lVar10 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102a74e68);
        (*pcVar2)();
      }
      if ((long)(uVar8 + 0x3f >> 6) <= lVar10) break;
      uVar9 = ((ulong *)(lVar4 + 0x40))[lVar10];
    }
    func_0x000107c61574(lVar4);
    puVar1 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    uVar7 = *(undefined8 *)(param_1 + 0xe8);
    *(undefined **)(param_1 + 0xe8) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    func_0x000107c6142c(uVar7);
    func_0x000107c61428(param_1 + 0xf0,auStack_a8,1,0);
    uVar7 = *(undefined8 *)(param_1 + 0xf0);
    *(undefined **)(param_1 + 0xf0) = puVar1;
    func_0x000107c61574(param_1);
    func_0x000107c6142c(uVar7);
  }
  return;
}



/* Entry: 102a74e6c; end: 102a74ed7;  */

void FUN_102a74e6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_28;
  
  uVar3 = *param_2;
  puStack_28 = (undefined *)0x0;
  uVar2 = 0;
  func_0x000102a77904(0,0x112d4d630,&PTR_PTR_1126ae6a8);
  func_0x000107c5fc50(uVar3,&puStack_28,uVar2);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puStack_28 != (undefined *)0x0) {
    puVar1 = puStack_28;
  }
  *param_1 = puVar1;
  return;
}



/* Entry: 102a74ed8; end: 102a7525f;  */

void FUN_102a74ed8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 in_x3;
  byte in_w4;
  undefined8 in_x5;
  long in_x6;
  undefined8 in_x7;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(in_x6 + 0x10,auStack_78,0,0);
  lVar1 = in_x6 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x000107c61174();
    func_0x000107c61574(lVar1);
    puVar3 = &UNK_11058f2d0;
    func_0x000107c613fc(&UNK_11058f2d0,0x68,7);
    *(undefined8 *)(puVar3 + 0x10) = in_x7;
    *(long *)(puVar3 + 0x18) = in_x6;
    *(undefined8 *)(puVar3 + 0x20) = in_x5;
    *(undefined8 *)(puVar3 + 0x28) = in_stack_00000000;
    *(undefined8 *)(puVar3 + 0x30) = in_stack_00000008;
    *(undefined8 *)(puVar3 + 0x38) = in_stack_00000010;
    *(undefined8 *)(puVar3 + 0x40) = in_stack_00000018;
    puVar3[0x48] = in_w4 & 1;
    *(undefined8 *)(puVar3 + 0x50) = in_stack_00000020;
    *(undefined8 *)(puVar3 + 0x58) = in_x3;
    *(undefined8 *)(puVar3 + 0x60) = in_stack_00000028;
    pcStack_88 = FUN_102a76408;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_11058f2e8;
    ppuVar4 = &puStack_a8;
    puStack_80 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    puVar3 = puStack_80;
    func_0x000107c61174(in_x7);
    func_0x000107c6157c(in_x6);
    func_0x000107c614b0(in_x5);
    func_0x000107c61434(in_stack_00000008);
    func_0x000107c61434(in_stack_00000018);
    func_0x000107c6157c(in_stack_00000020);
    func_0x000107c61434(in_x3);
    func_0x000107c61174(in_stack_00000028);
    func_0x000107c61574(puVar3);
    func_0x000107c4e524(uVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 102a75260; end: 102a75353;  */

void FUN_102a75260(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [32];
  char cStack_48;
  
  func_0x000102a778bc(param_1,auStack_68,0x112ee6bd0,&UNK_10db11ed8);
  if (cStack_48 == '\x01') {
    puVar1 = (undefined1 *)(param_2 + 0x10);
    func_0x000107c61428(puVar1,auStack_68,0,0);
    puVar3 = *(undefined **)(param_2 + 0x10);
    puVar2 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      FUN_102a76360();
      puVar2 = &UNK_11058f138;
      func_0x000107c613f8(&UNK_11058f138,puVar1,0,0);
      *puVar1 = auStack_68[0];
    }
    func_0x000107c61428(param_2 + 0x10,auStack_80,1,0);
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    *(undefined **)(param_2 + 0x10) = puVar2;
    func_0x000107c614b0(puVar3);
    func_0x000107c614ac(uVar4);
  }
  else {
    func_0x000102a7775c(auStack_68,0x112ee6bd0,&UNK_10db11ed8);
  }
  func_0x000107c60f3c(param_3);
  return;
}



/* Entry: 102a75354; end: 102a75413;  */

void FUN_102a75354(long param_1,code *param_2)

{
  long lVar1;
  long alStack_70 [3];
  undefined *puStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 == 0) {
    if (param_2 == (code *)0x0) {
      return;
    }
    puStack_58 = PTR___sSbN_11034dd40;
    alStack_70[0] = CONCAT71(alStack_70[0]._1_7_,1);
    uStack_50 = 0;
    (*param_2)(alStack_70);
  }
  else {
    if (param_2 == (code *)0x0) {
      return;
    }
    uStack_50 = 1;
    alStack_70[0] = lVar1;
    func_0x000107c614b0(lVar1);
    func_0x000107c614b0(lVar1);
    (*param_2)(alStack_70);
    func_0x000107c614ac(lVar1);
  }
  func_0x000102a7775c(alStack_70,0x112d627c8,&UNK_10d9285a0);
  return;
}



/* Entry: 102a75414; end: 102a7551b;  */

void FUN_102a75414(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x20;
  ulong uVar6;
  long lVar7;
  
  uVar6 = *(ulong *)(param_1 + 0x10);
  lVar5 = *unaff_x20;
  lVar7 = *(long *)(lVar5 + 0x10);
  if (SCARRY8(lVar7,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102a75510);
    (*pcVar1)();
  }
  lVar2 = lVar5;
  func_0x000107c61558();
  if (((int)lVar2 == 0) ||
     (uVar4 = *(ulong *)(lVar5 + 0x18) >> 1, (long)uVar4 < (long)(lVar7 + uVar6))) {
    FUN_102a81484();
    uVar4 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar7 = *(long *)(param_1 + 0x10);
    lVar5 = lVar2;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x10);
  }
  if (lVar7 == 0) {
    func_0x000107c6142c(param_1);
    if (uVar6 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102a75514);
      (*pcVar1)();
    }
  }
  else {
    lVar7 = *(long *)(lVar5 + 0x10);
    if (uVar4 - lVar7 < uVar6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102a75518);
      (*pcVar1)();
    }
    uVar3 = 0x112ee6bd8;
    func_0x0001000285a8(0x112ee6bd8,&UNK_10db11ee0);
    func_0x000107c6140c(lVar5 + lVar7 * 0x20 + 0x20,param_1 + 0x20,uVar6,uVar3);
    func_0x000107c6142c(param_1);
    if (uVar6 != 0) {
      if (SCARRY8(*(long *)(lVar5 + 0x10),uVar6)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102a7551c);
        (*pcVar1)();
      }
      *(ulong *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + uVar6;
    }
  }
  *unaff_x20 = lVar5;
  return;
}



/* Entry: 102a7551c; end: 102a7562b;  */

bool FUN_102a7551c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long extraout_x8;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar1 = PTR___s10Foundation3URLVSQAAMc_1103509a8;
  puVar6 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar9 = *(long *)(param_2 + 0x10);
  lVar2 = 0;
  do {
    lVar7 = lVar2;
    if (lVar9 == lVar7) break;
    (**(code **)(lVar8 + 0x10))
              (puVar6,param_2 + ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                                ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff)) +
                      *(long *)(lVar8 + 0x48) * lVar7,lVar3);
    uVar4 = 0x112d7e688;
    func_0x000102a7787c(0x112d7e688,PTR___s10Foundation3URLVMa_110350988,puVar1);
    puVar5 = puVar6;
    func_0x000107c5fab8(puVar6,param_1,lVar3,uVar4);
    (**(code **)(lVar8 + 8))(puVar6,lVar3);
    lVar2 = lVar7 + 1;
  } while (((ulong)puVar5 & 1) == 0);
  return lVar9 != lVar7;
}



/* Entry: 102a7562c; end: 102a75727;  */

void FUN_102a7562c(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c5c3b4();
  if ((param_1 & 1) == 0) {
    func_0x000107c61428(param_3 + 0x10,auStack_48,1,0);
    *(undefined1 *)(param_3 + 0x10) = 1;
  }
  func_0x000107c60f3c(param_4);
  return;
}



/* Entry: 102a75728; end: 102a757e3;  */

void FUN_102a75728(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
  func_0x0001000834e4(unaff_x20 + 0x40);
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x0001000834e4(unaff_x20 + 0x70);
  func_0x0001000834e4(unaff_x20 + 0x98);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xc0));
  func_0x000107c61610(unaff_x20 + 200);
  func_0x000107c61610(unaff_x20 + 0xd0);
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xd8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xe0));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xe8));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0xf0));
  return;
}



/* Entry: 102a757e4; end: 102a7589f;  */

undefined8 FUN_102a757e4(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *unaff_x20;
  func_0x000107c61434(lVar2);
  func_0x000100029284();
  func_0x000107c6142c(lVar2);
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    func_0x000107c61558();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      func_0x000102a78178();
    }
    func_0x000107c6142c(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_1 * 0x10 + 8));
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 8);
    FUN_102a758a0(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Entry: 102a758a0; end: 102a75a4f;  */

void FUN_102a758a0(ulong param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_a8 [72];
  
  lVar1 = param_2 + 0x40;
  uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar9 = param_1 + 1 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0) {
    uVar7 = ~uVar7;
    uVar10 = param_1;
    func_0x000107c6026c(param_1,lVar1,uVar7);
    uVar10 = uVar10 + 1 & uVar7;
    do {
      puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
      uVar11 = *puVar2;
      uVar4 = puVar2[1];
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(param_2 + 0x28));
      func_0x000107c61434(uVar4);
      puVar6 = auStack_a8;
      func_0x000107c5fb58(puVar6,uVar11,uVar4);
      func_0x000107c606a8();
      func_0x000107c6142c(uVar4);
      uVar8 = (ulong)puVar6 & uVar7;
      if ((long)param_1 < (long)uVar10) {
        if (uVar8 < uVar10) {
LAB_102a75994:
          if ((long)param_1 < (long)uVar8) goto LAB_102a7591c;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1 * 0x10);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x10);
        if (((long)param_1 < (long)uVar9) || (puVar3 + 2 <= puVar2 || param_1 != uVar9)) {
          uVar11 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar11;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1 * 8);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar9 * 8);
        if ((((long)param_1 < (long)uVar9) || (puVar3 + 1 <= puVar2)) || (param_1 != uVar9)) {
          *puVar2 = *puVar3;
          param_1 = uVar9;
        }
      }
      else if (uVar10 <= uVar8) goto LAB_102a75994;
LAB_102a7591c:
      uVar9 = uVar9 + 1 & uVar7;
    } while ((*(ulong *)(lVar1 + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0);
  }
  uVar7 = param_1 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) & (-1L << (param_1 & 0x3f)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x102a75a50);
  (*pcVar5)();
}



/* Entry: 102a75a50; end: 102a75a6f;  */

void FUN_102a75a50(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0xe0);
    *(undefined8 *)(lVar1 + 0xe0) = uVar2;
    func_0x000107c61174(uVar2);
    func_0x000107c61174();
    FUN_102a74248(uVar3);
    func_0x000107c61574(lVar1);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 102a75a70; end: 102a7635f;  */

void FUN_102a75a70(undefined1 *param_1,undefined1 *param_2,undefined4 param_3,code *param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  long extraout_x8;
  long extraout_x8_00;
  long lVar16;
  long unaff_x20;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  undefined1 *puVar20;
  long alStack_1b0 [4];
  undefined1 auStack_190 [8];
  undefined1 *puStack_188;
  undefined1 *puStack_180;
  undefined1 *puStack_178;
  long lStack_170;
  undefined1 *puStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  ulong uStack_130;
  undefined1 *puStack_128;
  undefined1 *puStack_120;
  undefined1 *puStack_118;
  undefined *puStack_110;
  undefined1 *puStack_108;
  undefined4 uStack_fc;
  undefined1 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  undefined4 uStack_dc;
  long lStack_d8;
  undefined1 *puStack_d0;
  undefined1 *puStack_c8;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [32];
  
  lVar3 = 0;
  uStack_140 = param_5;
  pcStack_138 = param_4;
  puStack_108 = param_2;
  uStack_fc = param_3;
  func_0x000107c5f7fc();
  lVar19 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  lVar4 = 0;
  func_0x000107c5f824();
  lStack_148 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_148 + 0x40));
  lVar16 = (long)(auStack_190 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_150 = lVar16;
  puStack_f8 = param_1;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  puVar15 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  func_0x000107c61428(unaff_x20 + 0xf0,auStack_80,0,0);
  puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar17 = *(long *)(unaff_x20 + 0xf0);
  puStack_c8 = puVar15;
  if (*(long *)(lVar17 + 0x10) != 0) {
    func_0x000107c61438(lVar17,2);
    puVar8 = param_2;
    func_0x000100029284();
    if (((ulong)puVar8 & 1) != 0) {
      puVar18 = *(undefined **)(*(long *)(lVar17 + 0x38) + (long)puVar15 * 8);
      func_0x000107c61434(puVar18);
    }
    func_0x000107c61430(lVar17,2);
  }
  func_0x000107c61428(unaff_x20 + 0xf0,&puStack_b8,0x21,0);
  func_0x000107c61434(param_2);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xf0);
  func_0x000107c61558(uVar5);
  puVar8 = puStack_c8;
  puStack_88 = *(undefined **)(unaff_x20 + 0xf0);
  *(undefined8 *)(unaff_x20 + 0xf0) = 0x8000000000000000;
  func_0x000102a79230(puVar18,puStack_c8,param_2,uVar5);
  func_0x000107c6142c(param_2);
  *(undefined **)(unaff_x20 + 0xf0) = puStack_88;
  func_0x000107c614a8(&puStack_b8);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x58);
  lVar17 = *(long *)(unaff_x20 + 0x60);
  func_0x0001000a8868(unaff_x20 + 0x40,uVar5);
  puVar15 = puStack_f8;
  puVar6 = puStack_f8;
  func_0x000107c4a4d8(puStack_f8);
  puStack_f0 = param_2;
  (**(code **)(lVar17 + 8))(puVar8,param_2,puVar6,uVar5,lVar17);
  func_0x000107c5aaa4();
  func_0x000107c61180();
  if (puVar15 != (undefined1 *)0x0) {
    puVar8 = puVar15;
    func_0x000107c5ee30();
    func_0x000107c61170(puVar15);
    puVar15 = puVar8;
    func_0x000107c5ee20(puVar8,param_2);
    puVar6 = puVar15;
    func_0x0001060faaf8();
    func_0x000107c61180();
    func_0x000107c61170(puVar15);
    if (puVar6 != (undefined1 *)0x0) {
      puVar15 = puVar6;
      func_0x000107c4221c();
      func_0x000107c61180();
      if (puVar15 == (undefined1 *)0x0) {
        uVar5 = *(undefined8 *)(unaff_x20 + 0x58);
        lVar3 = *(long *)(unaff_x20 + 0x60);
        func_0x0001000a8868(unaff_x20 + 0x40,uVar5);
        puVar15 = puStack_f0;
        (**(code **)(lVar3 + 0x10))(puStack_c8,puStack_f0,3,uVar5,lVar3);
        func_0x000107c6142c();
        pcVar2 = pcStack_138;
        if (pcStack_138 == (code *)0x0) goto LAB_102a76154;
        FUN_102a76360();
        puVar18 = &UNK_11058f138;
        func_0x000107c613f8(&UNK_11058f138,puVar15,0,0);
        *puVar15 = 0;
        uStack_98 = CONCAT71(uStack_98._1_7_,1);
        puStack_b8 = puVar18;
        (*pcVar2)(&puStack_b8);
      }
      else {
        uVar5 = 0;
        func_0x000102a77904(0,0x112ee5e80,&PTR_PTR_1126c8048);
        puVar7 = puVar15;
        func_0x000107c5fc54(puVar15,uVar5);
        func_0x000107c61170(puVar15);
        puVar15 = puVar6;
        func_0x000107c5aac4();
        if (puVar15 == (undefined1 *)0x1) {
          uVar5 = *(undefined8 *)(unaff_x20 + 0x58);
          lVar17 = *(long *)(unaff_x20 + 0x60);
          puStack_188 = puVar6;
          puStack_180 = puVar8;
          puStack_178 = param_2;
          lStack_170 = lVar4;
          puStack_168 = auStack_190 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
          lStack_160 = lVar19;
          lStack_158 = lVar3;
          func_0x0001000a8868(unaff_x20 + 0x40,uVar5);
          puVar8 = puStack_c8;
          (**(code **)(lVar17 + 0x10))(puStack_c8,puStack_f0,0,uVar5,lVar17);
          func_0x000107c60f34();
          puVar18 = &UNK_11058f230;
          puVar15 = (undefined1 *)0x18;
          puStack_118 = puVar8;
          func_0x000107c613fc(&UNK_11058f230,0x18,7);
          *(undefined8 *)(puVar18 + 0x10) = 0;
          puStack_110 = puVar18;
          if ((ulong)puVar7 >> 0x3e == 0) {
            puVar8 = *(undefined1 **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
            puVar6 = puStack_c8;
          }
          else {
            puVar8 = (undefined1 *)((ulong)puVar7 & 0xffffffffffffff8);
            if ((undefined1 *)0x7fffffffffffffff < puVar7) {
              puVar8 = puVar7;
            }
            func_0x000107c60480();
            puVar6 = puStack_c8;
          }
          puStack_c8 = puVar6;
          if (puVar8 != (undefined1 *)0x0) {
            if ((long)puVar8 < 1) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x102a7635c);
              (*pcVar2)();
            }
            puVar20 = (undefined1 *)0x0;
            uStack_130 = (ulong)puVar7 & 0xc000000000000001;
            puStack_128 = puVar8;
            puStack_120 = puVar7;
            do {
              if (uStack_130 == 0) {
                puVar8 = *(undefined1 **)(puStack_120 + (long)puVar20 * 8 + 0x20);
                func_0x000107c61174();
              }
              else {
                puVar8 = puVar20;
                puVar15 = puStack_120;
                FUN_102a6ab38();
              }
              puVar20 = puVar20 + 1;
              puStack_d0 = puVar8;
              func_0x000107c42214();
              func_0x000107c61180();
              puVar9 = puVar8;
              func_0x000107c5faec();
              func_0x000107c61170(puVar8);
              puVar8 = puStack_118;
              func_0x000107c60f38(puStack_118);
              uVar5 = *(undefined8 *)(unaff_x20 + 0x88);
              lVar4 = *(long *)(unaff_x20 + 0x90);
              lVar3 = unaff_x20 + 0x70;
              func_0x0001000a8868(lVar3,uVar5);
              puVar7 = puStack_f8;
              puVar10 = puStack_f8;
              lStack_d8 = lVar3;
              func_0x000107c4a4d8();
              uStack_dc = SUB84(puVar10,0);
              puVar18 = &UNK_11058f1b8;
              func_0x000107c613fc(&UNK_11058f1b8,0x18,7);
              func_0x000107c61644(puVar18 + 0x10,unaff_x20);
              puVar11 = &UNK_11058f258;
              func_0x000107c613fc(&UNK_11058f258,0x50,7);
              puVar10 = puStack_f0;
              puVar1 = puStack_110;
              *(undefined **)(puVar11 + 0x10) = puVar18;
              *(undefined1 **)(puVar11 + 0x18) = puVar8;
              *(undefined1 **)(puVar11 + 0x20) = puVar9;
              *(undefined1 **)(puVar11 + 0x28) = puVar15;
              *(undefined1 **)(puVar11 + 0x30) = puVar6;
              *(undefined1 **)(puVar11 + 0x38) = puStack_f0;
              *(undefined **)(puVar11 + 0x40) = puStack_110;
              *(undefined1 **)(puVar11 + 0x48) = puVar7;
              pcStack_e8 = *(code **)(lVar4 + 8);
              func_0x000107c61434(puStack_f0);
              func_0x000107c6157c(puVar18);
              func_0x000107c61174(puVar8);
              func_0x000107c6157c(puVar1);
              func_0x000107c61174(puVar7);
              *(undefined8 *)(lVar16 + -0x18) = uVar5;
              *(long *)(lVar16 + -0x10) = lVar4;
              *(undefined **)(lVar16 + -0x20) = puVar11;
              puVar15 = puStack_d0;
              (*pcStack_e8)(puVar6,puVar10,puStack_d0,uStack_dc,puStack_108,uStack_fc,1,0x102a763a0)
              ;
              func_0x000107c61170(puVar15);
              func_0x000107c61574(puVar18);
              func_0x000107c61574(puVar11);
              puVar15 = puVar10;
              puVar7 = puStack_120;
            } while (puStack_128 != puVar20);
          }
          func_0x000107c6142c(puStack_f0);
          func_0x000107c6142c(puVar7);
          lVar3 = *(long *)(unaff_x20 + 0x10);
          func_0x000107c4f7c0();
          func_0x000107c61180();
          if (lVar3 != 0) {
            puVar18 = &UNK_11058f280;
            func_0x000107c613fc(&UNK_11058f280,0x28,7);
            puVar11 = puStack_110;
            pcVar2 = pcStack_138;
            uVar5 = uStack_140;
            *(undefined **)(puVar18 + 0x10) = puStack_110;
            *(code **)(puVar18 + 0x18) = pcStack_138;
            *(undefined8 *)(puVar18 + 0x20) = uStack_140;
            uStack_98 = 0x102a763d0;
            puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_b0 = 0x42000000;
            puStack_a8 = &UNK_1000f6b44;
            puStack_a0 = &UNK_11058f298;
            ppuVar12 = &puStack_b8;
            puStack_90 = puVar18;
            func_0x000107c60bc4(ppuVar12);
            func_0x000107c6157c(puVar11);
            func_0x000102a763f8(pcVar2,uVar5);
            lVar16 = lStack_150;
            func_0x000107c5f808(lStack_150);
            puStack_88 = PTR___swiftEmptyArrayStorage_11034f1c8;
            uVar5 = 0x112d4af88;
            func_0x000102a7787c(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
            uVar13 = 0x112d4af90;
            func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
            uVar14 = uVar13;
            func_0x0001001c7f30();
            lVar4 = lStack_158;
            puVar15 = puStack_168;
            func_0x000107c60264(puStack_168,&puStack_88,uVar13,uVar14,lStack_158,uVar5);
            puVar8 = puStack_118;
            func_0x000107c5ffb8(lVar16,puVar15,lVar3,ppuVar12);
            func_0x00010006c090(puStack_180,puStack_178);
            func_0x000107c61170(puStack_188);
            func_0x000107c60bd0(ppuVar12);
            func_0x000107c61170(puVar8);
            func_0x000107c61170(lVar3);
            (**(code **)(lStack_160 + 8))(puVar15,lVar4);
            (**(code **)(lStack_148 + 8))(lVar16,lStack_170);
            puVar18 = puStack_90;
            func_0x000107c61574(puVar11);
            func_0x000107c61574(puVar18);
            return;
          }
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102a76360);
          (*pcVar2)();
        }
        func_0x000107c6142c(puStack_f0);
        func_0x000107c6142c();
        pcVar2 = pcStack_138;
        if (pcStack_138 == (code *)0x0) {
LAB_102a76154:
          func_0x00010006c090(puVar8,param_2);
          func_0x000107c61170(puVar6);
          return;
        }
        FUN_102a76360();
        puVar18 = &UNK_11058f138;
        func_0x000107c613f8(&UNK_11058f138,puVar7,0,0);
        *puVar7 = 2;
        uStack_98 = CONCAT71(uStack_98._1_7_,1);
        puStack_b8 = puVar18;
        (*pcVar2)(&puStack_b8);
      }
      func_0x00010006c090(puVar8,param_2);
      func_0x000107c61170(puVar6);
      goto LAB_102a76110;
    }
    func_0x00010006c090(puVar8,param_2);
  }
  uVar5 = *(undefined8 *)(unaff_x20 + 0x58);
  lVar3 = *(long *)(unaff_x20 + 0x60);
  func_0x0001000a8868(unaff_x20 + 0x40,uVar5);
  puVar15 = puStack_f0;
  (**(code **)(lVar3 + 0x10))(puStack_c8,puStack_f0,2,uVar5,lVar3);
  func_0x000107c6142c();
  pcVar2 = pcStack_138;
  if (pcStack_138 == (code *)0x0) {
    return;
  }
  FUN_102a76360();
  puVar18 = &UNK_11058f138;
  func_0x000107c613f8(&UNK_11058f138,puVar15,0,0);
  *puVar15 = 0;
  uStack_98 = CONCAT71(uStack_98._1_7_,1);
  puStack_b8 = puVar18;
  (*pcVar2)(&puStack_b8);
LAB_102a76110:
  func_0x000102a7775c(&puStack_b8,0x112d627c8,&UNK_10d9285a0);
  return;
}



/* Entry: 102a76360; end: 102a763cf;  */

void FUN_102a76360(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee6bc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db11de8;
  func_0x000107c61520(&UNK_10db11de8,&UNK_11058f138);
  puRam0000000112ee6bc0 = puVar1;
  return;
}



/* Entry: 102a763d0; end: 102a76407;  */

void FUN_102a763d0(void)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long alStack_70 [3];
  undefined *puStack_58;
  undefined1 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = *(long *)(lVar2 + 0x10);
  if (lVar2 == 0) {
    if (pcVar1 == (code *)0x0) {
      return;
    }
    puStack_58 = PTR___sSbN_11034dd40;
    alStack_70[0] = CONCAT71(alStack_70[0]._1_7_,1);
    uStack_50 = 0;
    (*pcVar1)(alStack_70);
  }
  else {
    if (pcVar1 == (code *)0x0) {
      return;
    }
    uStack_50 = 1;
    alStack_70[0] = lVar2;
    func_0x000107c614b0(lVar2);
    func_0x000107c614b0(lVar2);
    (*pcVar1)(alStack_70);
    func_0x000107c614ac(lVar2);
  }
  func_0x000102a7775c(alStack_70,0x112d627c8,&UNK_10d9285a0);
  return;
}



/* Entry: 102a76408; end: 102a76447;  */

void FUN_102a76408(void)

{
  long unaff_x20;
  
  func_0x000102a7506c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined1 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Entry: 102a76448; end: 102a776bf;  */

void FUN_102a76448(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long extraout_x8;
  ulong uVar10;
  long lVar11;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  code *pcVar18;
  ulong uVar19;
  undefined *puVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulong uVar25;
  code *pcVar26;
  ulong uStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *puStack_210;
  long lStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  ulong uStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  long lStack_178;
  long lStack_170;
  undefined *puStack_168;
  ulong uStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  ulong uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)&uStack_260 - extraout_x8;
  lVar2 = 0;
  func_0x000107c5ede0();
  lStack_f8 = *(long *)(lVar2 + -8);
  lVar14 = *(long *)(lStack_f8 + 0x40);
  lStack_100 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar10 = lVar17 - (lVar14 + 0xfU & 0xfffffffffffffff0);
  uStack_1a0 = uVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = uVar10 - extraout_x12;
  lStack_170 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_00;
  lStack_108 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_01;
  lVar2 = 0x112ee6bc8;
  lStack_e8 = lVar11;
  func_0x0001000285a8(0x112ee6bc8,&UNK_10db11ed0);
  lStack_150 = *(long *)(lVar2 + -8);
  lStack_148 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_150 + 0x40));
  lVar11 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_1d8 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_02;
  lStack_1b0 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_03;
  lVar2 = 0;
  lStack_178 = lVar11;
  func_0x000107c5f7fc();
  lStack_230 = *(long *)(lVar2 + -8);
  lStack_228 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_230 + 0x40));
  lVar11 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_238 = lVar11;
  func_0x000107c5f824();
  lStack_248 = *(long *)(lVar2 + -8);
  lStack_240 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_248 + 0x40));
  lVar11 = lVar11 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lStack_250 = lVar11;
  FUN_102aabc7c();
  lVar21 = *(long *)(lVar2 + -8);
  lStack_1c8 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  lVar11 = lVar11 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  lStack_208 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_1d0 = lVar11 - extraout_x12_04;
  puVar5 = &UNK_11058f320;
  uVar10 = 0x20;
  func_0x000107c613fc(&UNK_11058f320,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = param_4;
  *(undefined8 *)(puVar5 + 0x18) = param_5;
  uStack_218 = param_4;
  puStack_210 = puVar5;
  func_0x000107c6157c(param_4);
  func_0x000107c61174();
  uStack_220 = param_5;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  lVar2 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  func_0x000107c61428(param_3 + 0xf0,auStack_90,0,0);
  lVar12 = *(long *)(param_3 + 0xf0);
  lVar11 = *(long *)(lVar12 + 0x10);
  func_0x000107c61434(lVar12);
  lStack_158 = lVar2;
  if (lVar11 == 0) {
    puStack_f0 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000107c61434(lVar12);
    uVar15 = uVar10;
    func_0x000100029284();
    if ((uVar15 & 1) == 0) {
      puStack_f0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      puStack_f0 = *(undefined **)(*(long *)(lVar12 + 0x38) + lVar2 * 8);
      func_0x000107c61434();
    }
    func_0x000107c6142c(lVar12);
  }
  func_0x000107c6142c(lVar12);
  plVar3 = (long *)(param_3 + 0x18);
  func_0x0001000a8868(plVar3,*(undefined8 *)(param_3 + 0x30));
  puVar5 = puStack_f0;
  lVar2 = *(long *)(*plVar3 + 0x10);
  if (lVar2 == 0) {
    if (4 < *(ulong *)(puStack_f0 + 0x10)) goto LAB_102a76918;
    lStack_1a8 = 5;
  }
  else {
    func_0x000107c61434(puStack_f0);
    func_0x000107c615f0(lVar2);
    uVar4 = 0xd000000000000025;
    func_0x000107c5fadc(0xd000000000000025,0x800000010f0e5d00);
    lVar11 = lVar2;
    func_0x000107c4980c();
    func_0x000107c61170(uVar4);
    func_0x000107c615e8(lVar2);
    lVar11 = (long)(int)lVar11;
    lVar2 = *(long *)(puVar5 + 0x10);
    func_0x000107c6142c(puVar5);
    lStack_1a8 = lVar11;
    if (lVar11 <= lVar2) {
LAB_102a76918:
      func_0x000107c6142c(uVar10);
      puStack_c8 = PTR___sSbN_11034dd40;
      puStack_e0 = (undefined *)CONCAT71(puStack_e0._1_7_,1);
      uStack_c0 = uStack_c0 & 0xffffffffffffff00;
      FUN_102a75260(&puStack_e0,uStack_218,uStack_220);
      func_0x000102a7775c(&puStack_e0,0x112ee6bd0,&UNK_10db11ed8);
      func_0x000107c61574(puStack_210);
      func_0x000107c6142c(puStack_f0);
      return;
    }
  }
  func_0x000107c61428(param_3 + 0xe8,auStack_a8,0,0);
  lVar2 = *(long *)(param_3 + 0xe8);
  if (*(long *)(lVar2 + 0x10) != 0) {
    func_0x000107c61438(lVar2,2);
    lVar11 = lStack_158;
    uVar15 = uVar10;
    func_0x000100029284();
    if ((uVar15 & 1) != 0) {
      puVar5 = *(undefined **)(*(long *)(lVar2 + 0x38) + lVar11 * 8);
      func_0x000107c61174();
      func_0x000107c61430(lVar2,2);
      goto LAB_102a769a8;
    }
    func_0x000107c61430(lVar2,2);
  }
  puVar5 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
  func_0x000107c61168();
  func_0x000107c5e15c();
  func_0x000107c61180();
LAB_102a769a8:
  func_0x000107c61428(param_3 + 0xe8,&puStack_e0,0x21,0);
  func_0x000107c61434(uVar10);
  func_0x000107c61174();
  uVar4 = *(undefined8 *)(param_3 + 0xe8);
  func_0x000107c61558(uVar4);
  puStack_b0 = *(undefined **)(param_3 + 0xe8);
  *(undefined8 *)(param_3 + 0xe8) = 0x8000000000000000;
  puStack_180 = puVar5;
  func_0x000102a79380(puVar5,lStack_158,uVar10,uVar4);
  uStack_260 = uVar10;
  func_0x000107c6142c(uVar10);
  *(undefined **)(param_3 + 0xe8) = puStack_b0;
  func_0x000107c614a8(&puStack_e0);
  puVar5 = &UNK_11058f348;
  func_0x000107c613fc(&UNK_11058f348,0x11,7);
  puVar5[0x10] = 0;
  puStack_168 = puVar5;
  func_0x000107c60f34();
  lStack_1e0 = *(long *)(param_2 + 0x10);
  lVar2 = lStack_158;
  puVar20 = puStack_f0;
  lStack_258 = param_3;
  puStack_110 = puVar5;
  if (lStack_1e0 != 0) {
    lVar11 = 0;
    lStack_1e8 = param_2 + ((ulong)*(byte *)(lVar21 + 0x50) + 0x20 &
                           ((ulong)*(byte *)(lVar21 + 0x50) ^ 0xffffffffffffffff));
    uStack_188 = *(undefined8 *)(param_3 + 0x68);
    lStack_1f0 = *(long *)(lVar21 + 0x48);
    lStack_190 = lVar14 + 7;
    lVar14 = lStack_208;
    lVar12 = lStack_100;
    lStack_140 = lVar17;
    do {
      lVar21 = lStack_1d0;
      lStack_1b8 = lVar11;
      FUN_102a5c6f0(lStack_1e8 + lStack_1f0 * lVar11,lStack_1d0);
      func_0x000102a5d690(lVar21,lVar14);
      lVar11 = lVar14 + *(int *)(lStack_1c8 + 0x30);
      puStack_198 = *(undefined **)(lVar11 + 0x10);
      uVar10 = *(ulong *)(lVar11 + 0x18);
      puStack_138 = *(undefined **)(lVar11 + 0x20);
      uVar15 = *(ulong *)(lVar11 + 0x28);
      uVar4 = *(undefined8 *)(lVar11 + 0x30);
      uStack_160 = *(ulong *)(lVar11 + 0x38);
      uVar8 = *(undefined8 *)(lVar11 + 0x40);
      uStack_1c0 = *(undefined8 *)(lVar11 + 0x48);
      puVar22 = *(undefined8 **)(lVar11 + 0xa0);
      func_0x000102a776f4();
      if ((int)lVar11 != 1) {
        puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
        uStack_200 = uVar8;
        uStack_1f8 = uVar4;
        puStack_f0 = puVar20;
        if ((puVar22 != (undefined8 *)0x0) && (lVar2 = puVar22[2], lVar2 != 0)) {
          puStack_e0 = PTR___swiftEmptyArrayStorage_11034f1c8;
          func_0x000102a81054(0,lVar2,0);
          puVar5 = puStack_e0;
          do {
            uStack_118 = puVar22[5];
            puStack_120 = (undefined *)puVar22[4];
            uVar4 = puVar22[7];
            uStack_130 = puVar22[6];
            uVar19 = *(ulong *)(puVar5 + 0x10);
            uVar25 = *(ulong *)(puVar5 + 0x18);
            uStack_128 = uVar4;
            puStack_e0 = puVar5;
            func_0x000107c61434(uStack_118);
            func_0x000107c61434(uVar4);
            if (uVar25 >> 1 <= uVar19) {
              func_0x000102a81054(1 < uVar25,uVar19 + 1,1);
              puVar5 = puStack_e0;
            }
            *(ulong *)(puVar5 + 0x10) = uVar19 + 1;
            *(undefined8 *)(puVar5 + uVar19 * 0x20 + 0x28) = uStack_118;
            *(undefined **)(puVar5 + uVar19 * 0x20 + 0x20) = puStack_120;
            *(undefined8 *)(puVar5 + uVar19 * 0x20 + 0x38) = uStack_128;
            *(undefined8 *)(puVar5 + uVar19 * 0x20 + 0x30) = uStack_130;
            lVar2 = lVar2 + -1;
            lVar12 = lStack_100;
            puVar22 = puVar22 + 4;
          } while (lVar2 != 0);
        }
        FUN_102a75414(puVar5);
        if ((uVar15 < 2) ||
           (((puStack_138 == (undefined *)0x0 && (uVar15 == 0xe000000000000000)) ||
            (puVar5 = puStack_138, func_0x000107c605b8(puStack_138,uVar15,0,0xe000000000000000,0),
            ((ulong)puVar5 & 1) != 0)))) {
          puStack_138 = puStack_198;
          uVar15 = uVar10;
        }
        func_0x000107c61434(uVar15);
        puVar5 = puStack_b0;
        puVar20 = puStack_b0;
        func_0x000107c61558();
        puVar9 = puVar5;
        if (((ulong)puVar20 & 1) == 0) {
          puVar9 = (undefined *)0x0;
          FUN_102a81484(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
        }
        uVar25 = uStack_160;
        uVar19 = *(ulong *)(puVar9 + 0x10);
        uVar10 = uVar19 + 1;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar19) {
          puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
          FUN_102a81484(puVar9,uVar10,1);
        }
        uVar24 = uStack_1c0;
        uVar8 = uStack_1f8;
        uVar4 = uStack_200;
        *(ulong *)(puVar9 + 0x10) = uVar10;
        *(undefined **)(puVar9 + uVar19 * 0x20 + 0x20) = puStack_138;
        *(ulong *)(puVar9 + uVar19 * 0x20 + 0x28) = uVar15;
        *(undefined8 *)(puVar9 + uVar19 * 0x20 + 0x30) = 0;
        *(undefined8 *)(puVar9 + uVar19 * 0x20 + 0x38) = 0;
        uVar13 = 0;
        uVar16 = 0;
        uVar23 = 0;
        uVar15 = 0;
        if (1 < uVar25 - 1) {
          func_0x000102a77848(uStack_1f8,uVar25,uStack_200,uStack_1c0);
          func_0x000102a77848(uVar8,uVar25,uVar4,uVar24);
          func_0x000107c6142c(uVar24);
          func_0x000107c6142c(uVar25);
          uVar10 = *(ulong *)(puVar9 + 0x10);
          uVar13 = uVar4;
          uVar16 = uVar24;
          uVar23 = uVar8;
          uVar15 = uVar25;
        }
        lVar2 = lStack_f8;
        puStack_120 = (undefined *)(uVar10 + 1);
        puVar5 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar10) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
          FUN_102a81484(puVar5,puStack_120,1,puVar9);
        }
        puVar20 = (undefined *)0x0;
        *(undefined **)(puVar5 + 0x10) = puStack_120;
        *(undefined8 *)(puVar5 + uVar10 * 0x20 + 0x20) = uVar23;
        *(ulong *)(puVar5 + uVar10 * 0x20 + 0x28) = uVar15;
        *(undefined8 *)(puVar5 + uVar10 * 0x20 + 0x30) = uVar13;
        *(undefined8 *)(puVar5 + uVar10 * 0x20 + 0x38) = uVar16;
        puVar22 = (undefined8 *)(puVar5 + 0x38);
        puStack_138 = PTR___swiftEmptyArrayStorage_11034f1c8;
        puVar9 = puStack_120;
        puStack_198 = puVar5;
        do {
          if (*(undefined **)(puVar5 + 0x10) <= puVar20) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x102a776a0);
            (*pcVar18)();
          }
          uVar10 = puVar22[-2];
          if (1 < uVar10) {
            uVar24 = puVar22[-3];
            uVar4 = puVar22[-1];
            uVar8 = *puVar22;
            func_0x000102a77848(uVar24,uVar10,uVar4,uVar8);
            func_0x000102a77848(uVar24,uVar10,uVar4,uVar8);
            func_0x000107c61434(uVar10);
            func_0x000107c5edd0(lVar17,uVar24,uVar10);
            func_0x000107c6142c(uVar10);
            lVar11 = lVar17;
            (**(code **)(lVar2 + 0x30))(lVar17,1,lVar12);
            uVar15 = uStack_1a0;
            if ((int)lVar11 == 1) {
              func_0x000102a77728(uVar24,uVar10,uVar4,uVar8);
              func_0x000107c6142c(uVar10);
              func_0x000107c6142c(uVar8);
              func_0x000102a7775c(lVar17,0x112d36580,&UNK_10d9016d0);
              puVar9 = puStack_120;
            }
            else {
              pcVar18 = *(code **)(lVar2 + 0x20);
              (*pcVar18)(uStack_1a0,lVar17,lVar12);
              if (*(long *)(puStack_f0 + 0x10) < lStack_1a8) {
                uVar19 = uVar15;
                FUN_102a7551c();
                func_0x000102a77728(uVar24,uVar10,uVar4,uVar8);
                lVar2 = lStack_f8;
                lVar12 = lStack_100;
                lVar17 = lStack_1d8;
                if ((uVar19 & 1) == 0) {
                  puVar1 = (undefined8 *)(lStack_1d8 + *(int *)(lStack_148 + 0x30));
                  (*pcVar18)(lStack_1d8,uVar15,lStack_100);
                  func_0x000107c6142c(uVar10);
                  *puVar1 = uVar4;
                  puVar1[1] = uVar8;
                  func_0x000102a7779c(lVar17,lStack_1b0);
                  puVar5 = puStack_138;
                  puVar9 = puStack_138;
                  func_0x000107c61558();
                  puVar6 = puVar5;
                  if (((ulong)puVar9 & 1) == 0) {
                    puVar6 = (undefined *)0x0;
                    FUN_102a812f0(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
                  }
                  lVar17 = lStack_140;
                  puVar5 = puStack_198;
                  uVar10 = *(ulong *)(puVar6 + 0x10);
                  puStack_138 = puVar6;
                  if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar10) {
                    puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
                    FUN_102a812f0(puVar9,uVar10 + 1,1,puVar6);
                    puStack_138 = puVar9;
                  }
                  *(ulong *)(puStack_138 + 0x10) = uVar10 + 1;
                  func_0x000102a7779c(lStack_1b0,
                                      puStack_138 +
                                      *(long *)(lStack_150 + 0x48) * uVar10 +
                                      ((ulong)*(byte *)(lStack_150 + 0x50) + 0x20 &
                                      ((ulong)*(byte *)(lStack_150 + 0x50) ^ 0xffffffffffffffff)));
                  puVar9 = puStack_120;
                  lVar2 = lStack_f8;
                }
                else {
                  (**(code **)(lStack_f8 + 8))(uVar15,lStack_100);
                  func_0x000107c6142c(uVar10);
                  func_0x000107c6142c(uVar8);
                  puVar9 = puStack_120;
                  puVar5 = puStack_198;
                  lVar17 = lStack_140;
                }
              }
              else {
                func_0x000107c6142c(uVar10);
                func_0x000107c6142c(uVar8);
                func_0x000102a77728(uVar24,uVar10,uVar4,uVar8);
                (**(code **)(lVar2 + 8))(uVar15,lVar12);
                puVar9 = puStack_120;
                puVar5 = puStack_198;
                lVar17 = lStack_140;
              }
            }
          }
          puVar20 = puVar20 + 1;
          puVar22 = puVar22 + 4;
        } while (puVar9 != puVar20);
        uStack_160 = *(ulong *)(puStack_138 + 0x10);
        if (uStack_160 != 0) {
          uVar10 = 0;
          do {
            puVar5 = puStack_f0;
            lVar17 = lStack_178;
            if (*(ulong *)(puStack_138 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x102a776a4);
              (*pcVar18)();
            }
            func_0x000102a778bc(puStack_138 +
                                *(long *)(lStack_150 + 0x48) * uVar10 +
                                ((ulong)*(byte *)(lStack_150 + 0x50) + 0x20 &
                                ((ulong)*(byte *)(lStack_150 + 0x50) ^ 0xffffffffffffffff)),
                                lStack_178,0x112ee6bc8,&UNK_10db11ed0);
            lVar14 = lStack_e8;
            puVar22 = (undefined8 *)(lVar17 + *(int *)(lStack_148 + 0x30));
            uStack_130 = *puVar22;
            lVar11 = puVar22[1];
            pcVar18 = *(code **)(lVar2 + 0x20);
            (*pcVar18)(lStack_e8,lVar17,lVar12);
            pcVar26 = *(code **)(lVar2 + 0x10);
            (*pcVar26)(lStack_108,lVar14,lVar12);
            puVar20 = puVar5;
            func_0x000107c61558();
            puVar9 = puVar5;
            if (((ulong)puVar20 & 1) == 0) {
              puVar9 = (undefined *)0x0;
              func_0x000101023b20(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
            }
            uVar15 = *(ulong *)(puVar9 + 0x10);
            puVar5 = puVar9;
            if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar15) {
              puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
              func_0x000101023b20(puVar5,uVar15 + 1,1,puVar9);
            }
            *(ulong *)(puVar5 + 0x10) = uVar15 + 1;
            uVar19 = (ulong)*(byte *)(lStack_f8 + 0x50);
            (*pcVar18)(puVar5 + *(long *)(lStack_f8 + 0x48) * uVar15 +
                                (uVar19 + 0x20 & (uVar19 ^ 0xffffffffffffffff)),lStack_108,
                       lStack_100);
            puVar20 = puStack_110;
            func_0x000107c60f38();
            func_0x000107c5ed90();
            puStack_120 = puVar20;
            puStack_f0 = puVar5;
            if (lVar11 == 0) {
              uStack_130 = 0;
            }
            else {
              func_0x000107c5fadc(uStack_130,lVar11);
              func_0x000107c6142c(lVar11);
            }
            lVar17 = lStack_e8;
            lVar12 = lStack_100;
            lVar2 = lStack_170;
            uVar10 = uVar10 + 1;
            (*pcVar26)(lStack_170,lStack_e8,lStack_100);
            uVar15 = uVar19 + 0x10 & ~uVar19;
            uVar25 = lStack_190 + uVar15 & 0xfffffffffffffff8;
            puVar5 = &UNK_11058f3c0;
            func_0x000107c613fc(&UNK_11058f3c0,uVar25 + 0x10,uVar19 | 7);
            (*pcVar18)(puVar5 + uVar15,lVar2,lVar12);
            puVar9 = puStack_110;
            puVar20 = puStack_168;
            *(undefined **)(puVar5 + uVar25) = puStack_168;
            *(undefined **)(puVar5 + uVar25 + 8) = puStack_110;
            uStack_c0 = 0x102a777ec;
            puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_d8 = 0x42000000;
            pcStack_d0 = FUN_102a79dec;
            puStack_c8 = &UNK_11058f3d8;
            ppuVar7 = &puStack_e0;
            puStack_b8 = puVar5;
            func_0x000107c60bc4(ppuVar7);
            puVar5 = puStack_b8;
            func_0x000107c6157c(puVar20);
            func_0x000107c61174(puVar9);
            func_0x000107c61574(puVar5);
            puVar5 = puStack_120;
            uVar4 = uStack_130;
            uVar8 = uStack_188;
            func_0x000107c4ed58(0x409c200000000000,uStack_188);
            func_0x000107c61180();
            func_0x000107c60bd0(ppuVar7);
            func_0x000107c61170(puVar5);
            func_0x000107c61170(uVar4);
            func_0x000107c3d798(puStack_180);
            func_0x000107c615e8(uVar8);
            lVar2 = lStack_f8;
            (**(code **)(lStack_f8 + 8))(lVar17,lVar12);
            lVar17 = lStack_140;
          } while (uStack_160 != uVar10);
        }
        puVar20 = puStack_f0;
        lVar2 = lStack_158;
        func_0x000107c6142c(puStack_198);
        func_0x000107c6142c(puStack_138);
        lVar14 = lStack_208;
      }
      func_0x000102a5d654(lVar14);
      lVar11 = lStack_1b8 + 1;
    } while (lVar11 != lStack_1e0);
  }
  lVar17 = lStack_258;
  lVar11 = *(long *)(lStack_258 + 0x10);
  puStack_f0 = puVar20;
  func_0x000107c4f7c0();
  func_0x000107c61180();
  if (lVar11 != 0) {
    puVar5 = &UNK_11058f370;
    func_0x000107c613fc(&UNK_11058f370,0x38,7);
    puVar9 = puStack_168;
    puVar20 = puStack_210;
    uVar10 = uStack_260;
    *(undefined **)(puVar5 + 0x10) = puStack_168;
    *(long *)(puVar5 + 0x18) = lVar2;
    *(ulong *)(puVar5 + 0x20) = uStack_260;
    *(undefined8 *)(puVar5 + 0x28) = 0x102a776ec;
    *(undefined **)(puVar5 + 0x30) = puStack_210;
    uStack_c0 = 0x102a77718;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0x42000000;
    pcStack_d0 = (code *)&UNK_1000f6b44;
    puStack_c8 = &UNK_11058f388;
    ppuVar7 = &puStack_e0;
    puStack_b8 = puVar5;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c61434(uVar10);
    func_0x000107c6157c(puVar9);
    func_0x000107c6157c(puVar20);
    lVar2 = lStack_250;
    func_0x000107c5f808(lStack_250);
    puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    uVar4 = 0x112d4af88;
    func_0x000102a7787c(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                        PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
    uVar8 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar24 = uVar8;
    func_0x0001001c7f30();
    lVar14 = lStack_228;
    lVar12 = lStack_238;
    func_0x000107c60264(lStack_238,&puStack_b0,uVar8,uVar24,lStack_228,uVar4);
    puVar5 = puStack_110;
    func_0x000107c5ffb8(lVar2,lVar12,lVar11,ppuVar7);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(lVar11);
    (**(code **)(lStack_230 + 8))(lVar12,lVar14);
    (**(code **)(lStack_248 + 8))(lVar2,lStack_240);
    func_0x000107c61574(puStack_b8);
    func_0x000107c61428(lVar17 + 0xf0,&puStack_e0,0x21,0);
    puVar9 = puStack_f0;
    func_0x000107c61434(puStack_f0);
    uVar4 = *(undefined8 *)(lVar17 + 0xf0);
    func_0x000107c61558(uVar4);
    puStack_b0 = *(undefined **)(lVar17 + 0xf0);
    *(undefined8 *)(lVar17 + 0xf0) = 0x8000000000000000;
    func_0x000102a79230(puVar9,lStack_158,uVar10,uVar4);
    func_0x000107c6142c(uVar10);
    *(undefined **)(lVar17 + 0xf0) = puStack_b0;
    func_0x000107c614a8(&puStack_e0);
    func_0x000107c61574(puVar20);
    func_0x000107c6142c(puVar9);
    func_0x000107c61574(puStack_168);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puStack_180);
    return;
  }
  func_0x000107c61170(uStack_220);
  func_0x000107c61574(uStack_218);
                    /* WARNING: Does not return */
  pcVar18 = (code *)SoftwareBreakpoint(1,0x102a776c0);
  (*pcVar18)();
}



/* Entry: 102a776c0; end: 102a776eb;  */

void FUN_102a776c0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102a776ec; end: 102a77727;  */

void FUN_102a776ec(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [32];
  char cStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000102a778bc(param_1,auStack_68,0x112ee6bd0,&UNK_10db11ed8);
  if (cStack_48 == '\x01') {
    puVar3 = (undefined1 *)(lVar1 + 0x10);
    func_0x000107c61428(puVar3,auStack_68,0,0);
    puVar5 = *(undefined **)(lVar1 + 0x10);
    puVar4 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      FUN_102a76360();
      puVar4 = &UNK_11058f138;
      func_0x000107c613f8(&UNK_11058f138,puVar3,0,0);
      *puVar3 = auStack_68[0];
    }
    func_0x000107c61428(lVar1 + 0x10,auStack_80,1,0);
    uVar6 = *(undefined8 *)(lVar1 + 0x10);
    *(undefined **)(lVar1 + 0x10) = puVar4;
    func_0x000107c614b0(puVar5);
    func_0x000107c614ac(uVar6);
  }
  else {
    func_0x000102a7775c(auStack_68,0x112ee6bd0,&UNK_10db11ed8);
  }
  func_0x000107c60f3c(uVar2);
  return;
}



/* Entry: 102a77728; end: 102a77943;  */

/* WARNING: Possible PIC construction at 0x000102a77748: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102a7774c) */

void FUN_102a77728(undefined8 param_1,long param_2)

{
  if (param_2 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102a77944; end: 102a7795b;  */

void FUN_102a77944(long param_1,long param_2)

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



/* Entry: 102a7795c; end: 102a77997;  */

long FUN_102a7795c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c613fc();
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102a7349c();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined **)(unaff_x20 + 0x20) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return unaff_x20;
}



/* Entry: 102a77998; end: 102a77aab;  */

void FUN_102a77998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_a0 [24];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61434(param_3);
  func_0x000107c3ceac(uVar3);
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 1;
  uStack_50 = 0;
  uStack_48 = 1;
  uStack_88 = param_2;
  uStack_80 = param_3;
  uStack_78 = param_4;
  uStack_70 = param_1;
  func_0x000107c61428(unaff_x20 + 0x20,auStack_a0,0x21,0);
  func_0x000107c61434(param_3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61558(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = 0x8000000000000000;
  FUN_102a790ac(&uStack_88,param_2,param_3,uVar3);
  func_0x000107c6142c(param_3);
  *(undefined8 *)(unaff_x20 + 0x20) = uVar2;
  func_0x000107c614a8(auStack_a0);
  lVar4 = *(long *)(unaff_x20 + 0x18);
  if (lVar4 != 0) {
    puVar1 = PTR_PTR_1126abe10;
    func_0x000107c610f8(PTR_PTR_1126abe10);
    func_0x000107c453e4();
    func_0x000107c55860();
    func_0x000107c4bda0(lVar4);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 102a77aac; end: 102a77c7b;  */

void FUN_102a77aac(double param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  double dVar11;
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  double dStack_a0;
  char cStack_98;
  double dStack_90;
  undefined1 uStack_88;
  ulong uStack_80;
  undefined1 uStack_78;
  
  func_0x000107c61428(unaff_x20 + 0x20,&uStack_b8,0x20,0);
  lVar10 = *(long *)(unaff_x20 + 0x20);
  if (*(long *)(lVar10 + 0x10) != 0) {
    func_0x000107c61434(lVar10);
    lVar4 = param_2;
    uVar7 = param_3;
    func_0x000100029284();
    if ((uVar7 & 1) != 0) {
      puVar8 = (undefined8 *)(*(long *)(lVar10 + 0x38) + lVar4 * 0x48);
      uVar5 = *puVar8;
      uVar1 = puVar8[1];
      uVar2 = *(undefined1 *)(puVar8 + 2);
      dVar11 = (double)puVar8[3];
      cVar3 = *(char *)(puVar8 + 4);
      func_0x000107c61434(uVar1);
      func_0x000107c614a8(&uStack_b8);
      func_0x000107c6142c(lVar10);
      if (cVar3 != '\x01') {
        func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + 0x10));
        uStack_80 = param_4 & 0xff;
        uStack_88 = 0;
        uStack_78 = 0;
        uStack_b8 = uVar5;
        uStack_b0 = uVar1;
        uStack_a8 = uVar2;
        dStack_a0 = dVar11;
        cStack_98 = cVar3;
        dStack_90 = param_1;
        func_0x000107c61428(unaff_x20 + 0x20,auStack_d0,0x21,0);
        func_0x000107c61434(uVar1);
        func_0x000107c61434(param_3);
        uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
        func_0x000107c61558(uVar5);
        uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
        *(undefined8 *)(unaff_x20 + 0x20) = 0x8000000000000000;
        FUN_102a790ac(&uStack_b8,param_2,param_3,uVar5);
        func_0x000107c6142c(param_3);
        *(undefined8 *)(unaff_x20 + 0x20) = uVar9;
        func_0x000107c614a8(auStack_d0);
        lVar10 = *(long *)(unaff_x20 + 0x18);
        if (lVar10 != 0) {
          puVar6 = PTR_PTR_1126abe10;
          func_0x000107c610f8(PTR_PTR_1126abe10);
          func_0x000107c453e4();
          func_0x000107c55860();
          func_0x000107c4bd9c(param_1 - dVar11,lVar10);
          func_0x000107c61170(puVar6);
        }
      }
      func_0x000107c6142c(uVar1);
      return;
    }
    func_0x000107c6142c(lVar10);
  }
  func_0x000107c614a8(&uStack_b8);
  return;
}



/* Entry: 102a77c7c; end: 102a77daf;  */

void FUN_102a77c7c(double param_1,long param_2,ulong param_3)

{
  char cVar1;
  char cVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  double dVar6;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(unaff_x20 + 0x20,auStack_78,0x20,0);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  if (*(long *)(lVar5 + 0x10) != 0) {
    func_0x000107c61434(lVar5);
    func_0x000100029284();
    if ((param_3 & 1) != 0) {
      lVar4 = *(long *)(lVar5 + 0x38) + param_2 * 0x48;
      dVar6 = *(double *)(lVar4 + 0x28);
      cVar1 = *(char *)(lVar4 + 0x30);
      cVar2 = *(char *)(lVar4 + 0x40);
      func_0x000107c614a8(auStack_78);
      func_0x000107c6142c(lVar5);
      if (cVar1 == '\x01' || cVar2 == '\x01') {
        return;
      }
      func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + 0x10));
      lVar5 = *(long *)(unaff_x20 + 0x18);
      if (lVar5 == 0) {
        return;
      }
      puVar3 = PTR_PTR_1126abe10;
      func_0x000107c610f8(PTR_PTR_1126abe10);
      func_0x000107c453e4();
      func_0x000107c55860();
      func_0x000107c54ccc(puVar3);
      func_0x000107c4bda4(param_1 - dVar6,lVar5);
      func_0x000107c61170(puVar3);
      return;
    }
    func_0x000107c6142c(lVar5);
  }
  func_0x000107c614a8(auStack_78);
  return;
}



/* Entry: 102a77db0; end: 102a77de3;  */

void FUN_102a77db0(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a77de4; end: 102a77e43;  */

void FUN_102a77de4(void)

{
  FUN_102a77998();
  return;
}



/* Entry: 102a77e44; end: 102a7849f;  */

void FUN_102a77e44(void)

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
  undefined1 auStack_e8 [72];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  
  func_0x0001000285a8(0x112ee6850,&UNK_10db11cb0);
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
    if (uVar7 == 0) goto LAB_102a77f24;
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
        lVar10 = uVar9 * 0x48;
        puVar3 = (undefined8 *)(*(long *)(lVar12 + 0x38) + lVar10);
        uStack_88 = puVar3[3];
        uStack_90 = puVar3[2];
        uStack_78 = puVar3[5];
        uStack_80 = puVar3[4];
        uStack_68 = puVar3[7];
        uStack_70 = puVar3[6];
        uStack_60 = *(undefined1 *)(puVar3 + 8);
        uStack_98 = puVar3[1];
        uStack_a0 = *puVar3;
        puVar3 = (undefined8 *)(*(long *)(lVar6 + 0x30) + lVar11);
        *puVar3 = *puVar2;
        puVar3[1] = uVar4;
        puVar2 = (undefined8 *)(*(long *)(lVar6 + 0x38) + lVar10);
        puVar2[1] = uStack_98;
        *puVar2 = uStack_a0;
        *(undefined1 *)(puVar2 + 8) = uStack_60;
        puVar2[5] = uStack_78;
        puVar2[4] = uStack_80;
        puVar2[7] = uStack_68;
        puVar2[6] = uStack_70;
        puVar2[3] = uStack_88;
        puVar2[2] = uStack_90;
        func_0x000107c61434();
        func_0x000102a7995c(&uStack_a0,auStack_e8);
        if (uVar7 != 0) break;
LAB_102a77f24:
        do {
          lVar10 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x102a78008);
            (*pcVar5)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar10) goto LAB_102a77fdc;
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
LAB_102a77fdc:
  func_0x000107c61574(lVar12);
  *unaff_x20 = lVar6;
  return;
}



/* Entry: 102a784a0; end: 102a790ab;  */

void FUN_102a784a0(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  long lVar13;
  ulong uVar14;
  ulong *puVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 uStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar4 = 0x112ee6850;
  func_0x0001000285a8(0x112ee6850,&UNK_10db11cb0);
  lVar5 = lVar13;
  func_0x000107c60490(lVar13,lVar1,param_2,uVar4);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_102a787bc:
    func_0x000107c61574(lVar13);
LAB_102a787c4:
    *unaff_x20 = lVar5;
    return;
  }
  puVar15 = (ulong *)(lVar13 + 0x40);
  uVar10 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar14 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar14 = uVar14 & *puVar15;
  lVar1 = lVar5 + 0x40;
  lVar7 = 0;
  do {
    if (uVar14 == 0) {
      do {
        lVar17 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102a787ec);
          (*pcVar3)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1) == 0) {
            func_0x000107c61574(lVar13);
            goto LAB_102a787c4;
          }
          uVar14 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
          if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
            *puVar15 = -1L << (uVar14 & 0x3f);
          }
          else {
            func_0x000107c60ee4(puVar15,uVar14 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(lVar13 + 0x10) = 0;
          goto LAB_102a787bc;
        }
        uVar14 = puVar15[lVar17];
        lVar7 = lVar7 + 1;
      } while (uVar14 == 0);
      uVar6 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
    }
    else {
      uVar6 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar14 = uVar14 - 1 & uVar14;
      lVar17 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar17 << 6;
    if ((param_2 & 1) == 0) {
      puVar8 = (undefined8 *)(*(long *)(lVar13 + 0x30) + uVar6 * 0x10);
      uVar4 = *puVar8;
      uVar16 = puVar8[1];
      puVar8 = (undefined8 *)(*(long *)(lVar13 + 0x38) + uVar6 * 0x48);
      uStack_f8 = puVar8[1];
      uStack_100 = *puVar8;
      uStack_d8 = puVar8[5];
      uStack_e0 = puVar8[4];
      uStack_c8 = puVar8[7];
      uStack_d0 = puVar8[6];
      uStack_c0 = *(undefined1 *)(puVar8 + 8);
      uStack_e8 = puVar8[3];
      uStack_f0 = puVar8[2];
      func_0x000107c61434(uVar16);
      func_0x000102a7995c(&uStack_100,&uStack_b0);
      uStack_88 = uStack_d8;
      uStack_90 = uStack_e0;
      uStack_78 = uStack_c8;
      uStack_80 = uStack_d0;
      uStack_70 = uStack_c0;
      uStack_a8 = uStack_f8;
      uStack_b0 = uStack_100;
      uStack_98 = uStack_e8;
      uStack_a0 = uStack_f0;
    }
    else {
      puVar8 = (undefined8 *)(*(long *)(lVar13 + 0x30) + uVar6 * 0x10);
      uVar4 = *puVar8;
      uVar16 = puVar8[1];
      puVar8 = (undefined8 *)(*(long *)(lVar13 + 0x38) + uVar6 * 0x48);
      uStack_98 = puVar8[3];
      uStack_a0 = puVar8[2];
      uStack_88 = puVar8[5];
      uStack_90 = puVar8[4];
      uStack_78 = puVar8[7];
      uStack_80 = puVar8[6];
      uStack_70 = *(undefined1 *)(puVar8 + 8);
      uStack_a8 = puVar8[1];
      uStack_b0 = *puVar8;
    }
    func_0x000107c6068c(&uStack_100,*(undefined8 *)(lVar5 + 0x28));
    puVar8 = &uStack_100;
    func_0x000107c5fb58(puVar8,uVar4,uVar16);
    func_0x000107c606a8();
    uVar12 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar11 = (ulong)puVar8 & (uVar12 ^ 0xffffffffffffffff);
    uVar9 = uVar11 >> 6;
    uVar6 = -1L << (uVar11 & 0x3f) & (*(ulong *)(lVar1 + uVar9 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar12 >> 6;
      do {
        uVar11 = uVar9 + 1;
        if ((uVar11 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102a787f0);
          (*pcVar3)();
        }
        uVar9 = 0;
        if (uVar11 != uVar6) {
          uVar9 = uVar11;
        }
        bVar2 = (bool)(uVar11 == uVar6 | bVar2);
        uVar11 = *(ulong *)(lVar1 + uVar9 * 8);
      } while (uVar11 == 0xffffffffffffffff);
      uVar11 = ~uVar11;
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar9 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar11 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar9) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar9);
    puVar8 = (undefined8 *)(*(long *)(lVar5 + 0x30) + uVar6 * 0x10);
    *puVar8 = uVar4;
    puVar8[1] = uVar16;
    puVar8 = (undefined8 *)(*(long *)(lVar5 + 0x38) + uVar6 * 0x48);
    puVar8[3] = uStack_98;
    puVar8[2] = uStack_a0;
    puVar8[5] = uStack_88;
    puVar8[4] = uStack_90;
    puVar8[7] = uStack_78;
    puVar8[6] = uStack_80;
    *(undefined1 *)(puVar8 + 8) = uStack_70;
    puVar8[1] = uStack_a8;
    *puVar8 = uStack_b0;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar7 = lVar17;
  } while( true );
}



/* Entry: 102a790ac; end: 102a7963b;  */

void FUN_102a790ac(undefined8 *param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar10 = *unaff_x20;
  uVar3 = param_2;
  uVar5 = param_3;
  func_0x000100029284();
  lVar6 = *(long *)(lVar10 + 0x10);
  uVar9 = (ulong)~(uint)uVar5 & 1;
  lVar7 = lVar6 + uVar9;
  if (SCARRY8(lVar6,uVar9)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102a7919c);
    (*pcVar2)();
  }
  if (*(long *)(lVar10 + 0x18) < lVar7) {
    FUN_102a784a0(lVar7,param_4 & 1);
    uVar3 = param_2;
    uVar9 = param_3;
    func_0x000100029284();
    if (((uint)uVar5 & 1) != ((uint)uVar9 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102a7914c);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_102a77e44();
    lVar7 = *unaff_x20;
    goto joined_r0x000102a791b0;
  }
  lVar7 = *unaff_x20;
joined_r0x000102a791b0:
  if ((uVar5 & 1) != 0) {
    puVar8 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar3 * 0x48);
    uVar4 = puVar8[1];
    uVar11 = param_1[4];
    uVar13 = param_1[7];
    uVar12 = param_1[6];
    puVar8[5] = param_1[5];
    puVar8[4] = uVar11;
    puVar8[7] = uVar13;
    puVar8[6] = uVar12;
    *(undefined1 *)(puVar8 + 8) = *(undefined1 *)(param_1 + 8);
    uVar13 = *param_1;
    uVar12 = param_1[3];
    uVar11 = param_1[2];
    puVar8[1] = param_1[1];
    *puVar8 = uVar13;
    puVar8[3] = uVar12;
    puVar8[2] = uVar11;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
    return;
  }
  lVar6 = lVar7 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar6 + 0x40) = *(ulong *)(lVar6 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar7 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar8 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar3 * 0x48);
  *(undefined1 *)(puVar8 + 8) = *(undefined1 *)(param_1 + 8);
  uVar12 = param_1[4];
  uVar11 = param_1[7];
  uVar4 = param_1[6];
  puVar8[5] = param_1[5];
  puVar8[4] = uVar12;
  puVar8[7] = uVar11;
  puVar8[6] = uVar4;
  uVar4 = *param_1;
  uVar12 = param_1[3];
  uVar11 = param_1[2];
  puVar8[1] = param_1[1];
  *puVar8 = uVar4;
  puVar8[3] = uVar12;
  puVar8[2] = uVar11;
  if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102a79230);
    (*pcVar2)();
  }
  *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 102a7963c; end: 102a7968f;  */

long FUN_102a7963c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  func_0x000107c613fc(param_3,0x28,7);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102a7349c();
  *(undefined8 *)(param_3 + 0x18) = param_2;
  *(undefined **)(param_3 + 0x20) = puVar1;
  *(undefined8 *)(param_3 + 0x10) = param_1;
  return param_3;
}



/* Entry: 102a79690; end: 102a796af;  */

void FUN_102a79690(void)

{
  func_0x000107c61168(&PTR_PTR_112ee6c20);
  return;
}



/* Entry: 102a796b0; end: 102a796db;  */

long FUN_102a796b0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102a796dc; end: 102a796e3;  */

void FUN_102a796dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 102a796e4; end: 102a79747;  */

undefined8 * FUN_102a796e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[7] = param_2[7];
  func_0x000107c61434();
  return param_1;
}



/* Entry: 102a79748; end: 102a797cb;  */

undefined8 * FUN_102a79748(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[7] = uVar1;
  return param_1;
}



/* Entry: 102a797cc; end: 102a79837;  */

undefined8 * FUN_102a797cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  return param_1;
}



/* Entry: 102a79838; end: 102a798e3;  */

int FUN_102a79838(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x41) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 102a798e4; end: 102a79a47;  */

undefined8 FUN_102a798e4(undefined8 param_1,undefined8 param_2)

{
  (*(code *)(undefined *)0x102a83690)(param_2,param_1);
  return param_2;
}



/* Entry: 102a79a48; end: 102a79a4b;  */

void FUN_102a79a48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee6ca8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db11f80;
  func_0x000107c61520(&UNK_10db11f80,&UNK_11058f538);
  puRam0000000112ee6ca8 = puVar1;
  return;
}



/* Entry: 102a79a4c; end: 102a79a8b;  */

void FUN_102a79a4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee6ca8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db11f80;
  func_0x000107c61520(&UNK_10db11f80,&UNK_11058f538);
  puRam0000000112ee6ca8 = puVar1;
  return;
}



/* Entry: 102a79a8c; end: 102a79a8f;  */

void FUN_102a79a8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee6cb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db11fe8;
  func_0x000107c61520(&UNK_10db11fe8,&UNK_11058f5c8);
  puRam0000000112ee6cb0 = puVar1;
  return;
}



/* Entry: 102a79a90; end: 102a79acf;  */

void FUN_102a79a90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ee6cb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db11fe8;
  func_0x000107c61520(&UNK_10db11fe8,&UNK_11058f5c8);
  puRam0000000112ee6cb0 = puVar1;
  return;
}



/* Entry: 102a79ad0; end: 102a79da7;  */

int FUN_102a79ad0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 4) {
      iVar2 = 4;
    }
    if (param_2 + 4 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102a79b4c;
        goto LAB_102a79b30;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102a79b30:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_102a79b4c:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102a79da8; end: 102a79deb;  */

void FUN_102a79da8(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102a79dec; end: 102a79e33;  */

void FUN_102a79dec(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 102a79e34; end: 102a79e43;  */

void FUN_102a79e34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102a79e44; end: 102a79edb;  */

undefined1  [16] FUN_102a79e44(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (param_2 == 0) {
    uVar2 = 0x800000010f0e5d50;
    uVar1 = 0xd000000000000022;
  }
  else {
    func_0x000107c602fc(0x1b);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(param_1,param_2);
    uVar1 = 0xd000000000000019;
    uVar2 = 0x800000010f0e5d30;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 102a79edc; end: 102a79eef;  */

undefined1  [16] FUN_102a79edc(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined1 auVar4 [16];
  
  uVar2 = *unaff_x20;
  lVar1 = unaff_x20[1];
  if (lVar1 == 0) {
    uVar3 = 0x800000010f0e5d50;
    uVar2 = 0xd000000000000022;
  }
  else {
    func_0x000107c602fc(0x1b);
    func_0x000107c6142c(0xe000000000000000);
    func_0x000107c5fb78(uVar2,lVar1);
    uVar2 = 0xd000000000000019;
    uVar3 = 0x800000010f0e5d30;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar2;
  return auVar4;
}


