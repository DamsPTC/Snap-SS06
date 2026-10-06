/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103980fd8; end: 103981283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103980fd8(double param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar9 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if ((*(byte *)(unaff_x20 + _DAT_112fbab08) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112fbab08) = 1;
    func_0x000107c5eea0(lVar7);
    func_0x000107c5ee8c();
    (**(code **)(lVar8 + 8))(lVar7,lVar3);
    param_1 = param_1 * 1000.0;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10398127c);
      (*pcVar1)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103981280);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103981284);
      (*pcVar1)();
    }
    *(long *)(unaff_x20 + _DAT_112fbab28) = (long)param_1;
    puVar4 = PTR_PTR_1126d6d78;
    func_0x000107c610f8(PTR_PTR_1126d6d78);
    func_0x000107c45528();
    lVar8 = *(long *)(unaff_x20 + _DAT_112fbab88);
    lVar7 = lVar8;
    func_0x000107c3abfc();
    func_0x000107c61180();
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      func_0x000107c5edb4(puVar9);
      func_0x000107c61170(lVar7);
      func_0x000107c5ed70();
      (**(code **)(lVar10 + 8))(puVar9,lVar2);
      func_0x000107c5fadc(lVar7,lVar3);
      func_0x000107c6142c(lVar3);
    }
    func_0x000107c5a26c(puVar4);
    func_0x000107c61170(lVar7);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
    func_0x000107c546c4(puVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c4b9c4(*(undefined8 *)(unaff_x20 + _DAT_112fbab48));
    puVar5 = PTR_PTR_1126a6d58;
    func_0x000107c610f8(PTR_PTR_1126a6d58);
    func_0x000107c453e4();
    uVar6 = 0x5f6f745f6c6c7570;
    func_0x000107c5fadc(0x5f6f745f6c6c7570,0xef68736572666572);
    func_0x000107bc0edc(puVar5,uVar6,1);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c4fd70(lVar8);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar8);
  }
  return;
}



/* Entry: 103981284; end: 10398168b; -[_TtC10WebBrowser17WebViewController scrollViewDidEndDragging:willDecelerate:] */

/* WARNING: Possible PIC construction at 0x0001039812f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039812f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103981284(undefined8 param_1,double param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  func_0x000107c404a0(param_5);
  if ((param_2 <= -145.0) && ((*(byte *)(param_3 + _DAT_112fbab08) & 1) == 0)) {
    func_0x000107c3e7ec(*(undefined8 *)(param_3 + _DAT_112fbab00));
    FUN_103980fd8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10398168c; end: 1039819bf;  */

void FUN_10398168c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    func_0x0001039817a8(uVar2 + uVar4,1,param_2,param_3,param_4);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    func_0x000103981b54(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                        (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10),param_1,param_3,
                        param_4,param_5);
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1039817a4);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1039817a8);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039817a0);
  (*pcVar1)();
}



/* Entry: 1039819c0; end: 103981a3f;  */

undefined * FUN_1039819c0(undefined *param_1,undefined *param_2,code *param_3)

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



/* Entry: 103981a40; end: 103981cc3;  */

long FUN_103981a40(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103981b50);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      lVar5 = param_1;
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x103981b54);
        (*pcVar3)();
      }
      do {
        lVar1 = lVar5 + 1;
        uVar4 = param_5;
        func_0x0001000285a8(param_5,param_6);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e != 0) {
    uVar2 = param_4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_4) {
      uVar2 = param_4;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8
    )(param_1,param_2,param_3,uVar2);
    return param_1;
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103981b4c);
    (*pcVar3)();
  }
  func_0x0001000285a8(param_5,param_6);
  func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,param_2 - param_1,
                      param_5);
  func_0x000107c6142c(param_4);
  return param_3 + (param_2 - param_1) * 8;
}



/* Entry: 103981cc4; end: 103982917;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103981cc4(double param_1,long param_2,long param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar10;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  code *pcVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long alStack_190 [4];
  code *pcStack_170;
  code *pcStack_168;
  long lStack_160;
  code *pcStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  code *pcStack_d0;
  uint uStack_c4;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  
  lVar2 = 0;
  lStack_d8 = param_4;
  lStack_c0 = param_3;
  func_0x000107c5eea4();
  lStack_130 = *(long *)(lVar2 + -8);
  lStack_128 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_130 + 0x40));
  lVar9 = (long)&pcStack_170 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d7e680;
  lStack_138 = lVar9;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  lStack_f0 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar9 - extraout_x8_00;
  lVar2 = 0;
  lStack_e0 = lVar9;
  func_0x000107c5ec24();
  lStack_108 = *(long *)(lVar2 + -8);
  lStack_118 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_108 + 0x40));
  lVar9 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d4b5b0;
  lStack_140 = lVar9;
  func_0x0001000285a8(0x112d4b5b0,&UNK_10d912140);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar9 - extraout_x8_02;
  lVar2 = 0x112d36580;
  lStack_f8 = lVar9;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar9 = lVar9 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  lStack_100 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12;
  lStack_e8 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar19 = lVar9 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_120 = uVar19 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = (uVar19 - extraout_x12_01) - extraout_x12_02;
  lVar2 = 0;
  func_0x000107c5eb08();
  lVar16 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar14 = lVar13 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_148 = lVar14 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = (lVar14 - extraout_x12_03) - extraout_x12_04;
  lVar3 = 0;
  func_0x000107c5ede0();
  lStack_b8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar10 = lVar11 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  lStack_110 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_05;
  lStack_150 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_06;
  lVar9 = param_2;
  func_0x000107c5c744();
  func_0x000107c61180();
  if (lVar9 == 0) {
    uStack_c4 = 0;
  }
  else {
    lVar4 = lVar9;
    func_0x000107c4a028();
    uStack_c4 = (uint)lVar4;
    func_0x000107c61170(lVar9);
  }
  lVar9 = param_2;
  func_0x000107c50300(param_2);
  func_0x000107c61180();
  func_0x000107c5eae8(lVar11);
  func_0x000107c61170(lVar9);
  func_0x000107c5eaf0(lVar13);
  pcVar17 = *(code **)(lVar16 + 8);
  (*pcVar17)(lVar11,lVar2);
  lVar9 = lStack_b8;
  pcStack_d0 = *(code **)(lStack_b8 + 0x30);
  lVar11 = lVar13;
  (*pcStack_d0)(lVar13,1,lVar3);
  if ((int)lVar11 == 1) {
    uVar7 = 0x112d36580;
    puVar8 = &UNK_10d9016d0;
LAB_103982338:
    func_0x00010398164c(lVar13,uVar7,puVar8);
  }
  else {
    pcStack_168 = *(code **)(lVar9 + 0x20);
    lVar11 = lVar10;
    (*pcStack_168)(lVar10,lVar13,lVar3);
    func_0x000107c5edc8();
    if (lVar13 == 0) {
      (**(code **)(lVar9 + 8))(lVar10,lVar3);
    }
    else {
      lVar9 = lVar13;
      lStack_160 = lVar2;
      pcStack_158 = pcVar17;
      func_0x000107c5fb1c();
      func_0x000107c6142c();
      uStack_a0 = 0x6972616661732d78;
      uStack_98 = 0xe90000000000002d;
      lStack_90 = lVar11;
      lStack_88 = lVar9;
      func_0x000100e8b654();
      puVar5 = &uStack_a0;
      func_0x000107c6022c(puVar5,PTR___sSSN_11034da80,PTR___sSSN_11034da80,lVar13,lVar13);
      lVar2 = lStack_f8;
      if (((ulong)puVar5 & 1) != 0) {
        func_0x000107c5ebe4(lStack_f8,lVar10,0);
        lVar16 = lStack_118;
        pcStack_170 = *(code **)(lStack_108 + 0x30);
        lVar4 = lVar2;
        (*pcStack_170)(lVar2,1,lStack_118);
        if ((int)lVar4 == 0) {
          uStack_a0 = 0x6972616661732d78;
          uStack_98 = 0xe90000000000002d;
          uStack_b0 = 0;
          uStack_a8 = 0xe000000000000000;
          lStack_90 = lVar11;
          lStack_88 = lVar9;
          *(long *)(lVar10 + -0x10) = lVar13;
          *(long *)(lVar10 + -8) = lVar13;
          *(long *)(lVar10 + -0x18) = lVar13;
          *(undefined **)(lVar10 + -0x20) = PTR___sSSN_11034da80;
          func_0x000107c601fc(&uStack_a0,&uStack_b0,0,0,0,1,PTR___sSSN_11034da80,
                              PTR___sSSN_11034da80);
          func_0x000107c5ec10();
          lVar2 = lStack_f8;
        }
        func_0x000107c6142c(lVar9);
        lVar4 = lVar2;
        (*pcStack_170)(lVar2,1,lVar16);
        lVar11 = lStack_b8;
        lVar13 = lStack_108;
        lVar9 = lStack_140;
        if ((int)lVar4 == 0) {
          (**(code **)(lStack_108 + 0x10))(lStack_140,lVar2,lVar16);
          lVar4 = lStack_120;
          func_0x000107c5ebe8(lStack_120);
          (**(code **)(lVar13 + 8))(lVar9,lVar16);
          lVar13 = lVar4;
          (*pcStack_d0)(lVar4,1,lVar3);
          lVar9 = lStack_150;
          lVar2 = lStack_160;
          if ((int)lVar13 != 1) {
            (*pcStack_168)(lStack_150,lVar4,lVar3);
            lVar14 = lStack_b8;
            lVar11 = lStack_110;
            uVar7 = *(undefined8 *)(lStack_c0 + _DAT_112fbab88);
            (**(code **)(lStack_b8 + 0x10))(lStack_110,lVar9,lVar3);
            lVar13 = lStack_148;
            func_0x000107c5eaec(lStack_148,0x404e000000000000,lVar11,0);
            func_0x000107c5eae0();
            (*pcStack_158)(lVar13,lVar2);
            func_0x000107c4b768(uVar7);
            func_0x000107c61180();
            func_0x000107c61170(lVar11);
            func_0x000107c61170(uVar7);
            (**(code **)(lStack_d8 + 0x10))(lStack_d8,0);
            pcVar17 = *(code **)(lVar14 + 8);
            (*pcVar17)(lVar9,lVar3);
            (*pcVar17)(lVar10,lVar3);
            func_0x00010398164c(lStack_f8,0x112d4b5b0,&UNK_10d912140);
            return;
          }
          (**(code **)(lStack_b8 + 8))(lVar10,lVar3);
          lVar13 = lStack_f8;
        }
        else {
          (**(code **)(lStack_b8 + 8))(lVar10,lVar3);
          lVar4 = lStack_120;
          (**(code **)(lVar11 + 0x38))(lStack_120,1,1,lVar3);
          lVar13 = lVar2;
          lVar2 = lStack_160;
        }
        pcVar17 = pcStack_158;
        func_0x00010398164c(lVar4,0x112d36580,&UNK_10d9016d0);
        uVar7 = 0x112d4b5b0;
        puVar8 = &UNK_10d912140;
        goto LAB_103982338;
      }
      (**(code **)(lStack_b8 + 8))(lVar10,lVar3);
      func_0x000107c6142c(lVar9);
      pcVar17 = pcStack_158;
      lVar2 = lStack_160;
    }
  }
  if (uStack_c4 != 0) {
    func_0x000107c50300(param_2);
    func_0x000107c61180();
    func_0x000107c5eae8(lVar14);
    func_0x000107c61170(param_2);
    func_0x000107c5eaf0(uVar19);
    (*pcVar17)(lVar14,lVar2);
    lVar2 = 1;
    uVar12 = uVar19;
    (*pcStack_d0)(uVar19,1,lVar3);
    if ((int)uVar12 == 1) {
      func_0x00010398164c(uVar19,0x112d36580,&UNK_10d9016d0);
    }
    else {
      func_0x000107c5edc8();
      (**(code **)(lStack_b8 + 8))(uVar19,lVar3);
      if (lVar2 != 0) {
        lVar9 = lVar2;
        func_0x000107c5fb1c();
        func_0x000107c6142c(lVar2);
        if ((uVar12 == 0x61746164) && (lVar9 == -0x1c00000000000000)) {
          func_0x000107c6142c(0xe400000000000000);
        }
        else {
          func_0x000107c605b8(uVar12,lVar9,0x61746164,0xe400000000000000,0);
          func_0x000107c6142c(lVar9);
          if ((uVar12 & 1) == 0) goto LAB_103982460;
        }
        pcVar17 = *(code **)(lStack_d8 + 0x10);
        uVar7 = 0;
        goto LAB_1039827d8;
      }
    }
  }
LAB_103982460:
  uVar19 = *(ulong *)(lStack_c0 + _DAT_112fbaaf0);
  if (uVar19 >> 0x3e == 0) {
    uVar12 = *(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar12 = uVar19 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar19) {
      uVar12 = uVar19;
    }
    func_0x000107c60480();
  }
  func_0x000107c61434(uVar19);
  if (uVar12 != 0) {
    uVar15 = 0;
    do {
      if ((uVar19 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x1039828fc);
          (*pcVar17)();
        }
        uVar18 = *(ulong *)(uVar19 + uVar15 * 8 + 0x20);
        func_0x000107c615f0(uVar18);
      }
      else {
        uVar18 = uVar15;
        func_0x0001039814a8(uVar15,uVar19);
      }
      if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x103982518);
        (*pcVar17)();
      }
      uVar20 = uVar15 + 1;
      uVar6 = uVar18;
      func_0x000107c5e218();
      if (uVar6 != 1) {
        (**(code **)(lStack_d8 + 0x10))(lStack_d8,uVar6);
        func_0x000107c6142c(uVar19);
        func_0x000107c615e8(uVar18);
        return;
      }
      func_0x000107c615e8(uVar18);
      uVar15 = uVar15 + 1;
    } while (uVar20 != uVar12);
  }
  func_0x000107c6142c(uVar19);
  lVar11 = lStack_c0;
  lVar9 = _DAT_11380c040;
  func_0x000107c61428(lStack_c0 + _DAT_11380c040,&lStack_90,0,0);
  lVar13 = lStack_e8;
  (**(code **)(lStack_b8 + 0x38))(lStack_e8,1,1,lVar3);
  lVar10 = lStack_e0;
  lVar2 = (long)*(int *)(lStack_f0 + 0x30);
  func_0x00010398580c(lVar11 + lVar9,lStack_e0,0x112d36580,&UNK_10d9016d0);
  func_0x00010398580c(lVar13,lVar10 + lVar2,0x112d36580,&UNK_10d9016d0);
  pcVar17 = pcStack_d0;
  lVar14 = lVar10;
  (*pcStack_d0)(lVar10,1,lVar3);
  lVar9 = lStack_100;
  if ((int)lVar14 == 1) {
    func_0x00010398164c(lVar13,0x112d36580,&UNK_10d9016d0);
    lVar2 = lVar10 + lVar2;
    (*pcVar17)(lVar2,1,lVar3);
    if ((int)lVar2 != 1) goto LAB_103982678;
    func_0x00010398164c(lVar10,0x112d36580,&UNK_10d9016d0);
    lVar2 = lStack_138;
    uVar1 = uStack_c4;
joined_r0x000103982760:
    lStack_138 = lVar2;
    if ((uVar1 & 1) != 0) {
      if (SCARRY8(*(long *)(lVar11 + _DAT_112fbab10),1)) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x103982918);
        (*pcVar17)();
      }
      *(long *)(lVar11 + _DAT_112fbab10) = *(long *)(lVar11 + _DAT_112fbab10) + 1;
      func_0x000107c5eea0(lVar2);
      func_0x000107c5ee8c();
      (**(code **)(lStack_130 + 8))(lVar2,lStack_128);
      *(double *)(lVar11 + _DAT_112fbab18) = param_1 * 1000.0;
    }
  }
  else {
    func_0x00010398580c(lVar10,lStack_100,0x112d36580,&UNK_10d9016d0);
    lVar14 = lVar10 + lVar2;
    (*pcVar17)(lVar14,1,lVar3);
    lVar4 = lStack_b8;
    lVar16 = lStack_110;
    if ((int)lVar14 != 1) {
      (**(code **)(lStack_b8 + 0x20))(lStack_110,lVar10 + lVar2,lVar3);
      uVar7 = 0x112d7e688;
      func_0x0001039857cc(0x112d7e688,PTR___s10Foundation3URLVMa_110350988,
                          PTR___s10Foundation3URLVSQAAMc_1103509a8);
      lVar14 = lVar9;
      func_0x000107c5fab8(lVar9,lVar16,lVar3,uVar7);
      pcVar17 = *(code **)(lVar4 + 8);
      (*pcVar17)(lVar16,lVar3);
      func_0x00010398164c(lVar13,0x112d36580,&UNK_10d9016d0);
      (*pcVar17)(lVar9,lVar3);
      func_0x00010398164c(lVar10,0x112d36580,&UNK_10d9016d0);
      lVar2 = lStack_138;
      uVar1 = (uint)lVar14 & uStack_c4;
      goto joined_r0x000103982760;
    }
    func_0x00010398164c(lVar13,0x112d36580,&UNK_10d9016d0);
    (**(code **)(lStack_b8 + 8))(lVar9,lVar3);
LAB_103982678:
    func_0x00010398164c(lVar10,0x112d7e680,&UNK_10d95e350);
  }
  pcVar17 = *(code **)(lStack_d8 + 0x10);
  uVar7 = 1;
LAB_1039827d8:
  (*pcVar17)(lStack_d8,uVar7);
  return;
}



/* Entry: 103982918; end: 103983d3f;  */

bool FUN_103982918(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  code *pcVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_80 [8];
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  lVar1 = 0;
  func_0x000107c5ebbc();
  lVar13 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar6 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)puVar6 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar12 = lVar9 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar8 = uVar12 - extraout_x12_01;
  lVar2 = 0x112d4b5b0;
  func_0x0001000285a8(0x112d4b5b0,&UNK_10d912140);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined *)(uVar8 - extraout_x8_00);
  func_0x000107c5ebe4(puVar10,param_1,0);
  lVar2 = 0;
  func_0x000107c5ec24();
  lVar7 = *(long *)(lVar2 + -8);
  puVar3 = puVar10;
  (**(code **)(lVar7 + 0x30))(puVar10,1,lVar2);
  uStack_78 = uVar12;
  uStack_70 = uVar8;
  if ((int)puVar3 == 1) {
    func_0x00010398164c(puVar10,0x112d4b5b0,&UNK_10d912140);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000107c5ebc4();
    (**(code **)(lVar7 + 8))(puVar10,lVar2);
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar3 != (undefined *)0x0) {
      puVar10 = puVar3;
    }
  }
  uStack_68 = *(ulong *)(puVar10 + 0x10);
  if (*(ulong *)(puVar10 + 0x10) != 0) {
    uVar8 = 0;
    do {
      if (*(ulong *)(puVar10 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x103982c20);
        (*pcVar11)();
      }
      (**(code **)(lVar13 + 0x10))
                (lVar9,puVar10 + *(long *)(lVar13 + 0x48) * uVar8 +
                                 ((ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
                                 ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff)),lVar1);
      pcVar11 = *(code **)(lVar13 + 0x20);
      puVar4 = puVar6;
      lVar2 = lVar9;
      (*pcVar11)(puVar6,lVar9,lVar1);
      func_0x000107c5ebb4();
      if ((puVar4 == (undefined1 *)0x6469436353) && (lVar2 == -0x1b00000000000000)) {
        func_0x000107c6142c(puVar10);
        puVar10 = (undefined *)0xe500000000000000;
LAB_103982b80:
        func_0x000107c6142c(puVar10);
        uVar8 = uStack_78;
        (*pcVar11)(uStack_78,puVar6,lVar1);
        uVar12 = uStack_70;
        uVar5 = uStack_70;
        (*pcVar11)(uStack_70,uVar8,lVar1);
        func_0x000107c5ebb8();
        (**(code **)(lVar13 + 8))(uVar12,lVar1);
        if (uVar8 == 0) {
          return true;
        }
        func_0x000107c6142c(uVar8);
        uVar12 = uVar5 & 0xffffffffffff;
        if ((uVar8 & 0x2000000000000000) != 0) {
          uVar12 = uVar8 >> 0x38 & 0xf;
        }
        return uVar12 == 0;
      }
      func_0x000107c605b8();
      func_0x000107c6142c(lVar2);
      if (((ulong)puVar4 & 1) != 0) goto LAB_103982b80;
      uVar8 = uVar8 + 1;
      (**(code **)(lVar13 + 8))(puVar6,lVar1);
    } while (uStack_68 != uVar8);
  }
  func_0x000107c6142c(puVar10);
  return true;
}



/* Entry: 103983d40; end: 103984f4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103983d40(double param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long unaff_x20;
  code *pcVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  code *pcVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  ulong uStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  code *pcStack_300;
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [248];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
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
  undefined4 uStack_90;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lStack_340 = *(long *)(lVar2 + -8);
  lStack_338 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_340 + 0x40));
  lVar10 = (long)&lStack_360 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_348 = lVar10;
  func_0x000107c5ede0();
  lVar16 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar10 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_330 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12;
  lStack_358 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_00;
  lStack_360 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_01;
  lVar2 = 0x112d7e680;
  lStack_320 = lVar10;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar10 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = lVar10 - extraout_x12_02;
  lVar12 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  uVar11 = lVar20 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  uStack_328 = uVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = uVar11 - extraout_x12_03;
  lStack_310 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - extraout_x12_04;
  lStack_308 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = lVar12 - extraout_x12_05;
  lStack_350 = lVar12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar11 = lVar12 - extraout_x12_06;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = _DAT_11380c040;
  lVar19 = uVar11 - extraout_x12_07;
  func_0x000107c61428(unaff_x20 + _DAT_11380c040,auStack_198,0,0);
  pcStack_300 = *(code **)(lVar16 + 0x38);
  (*pcStack_300)(lVar19,1,1,lVar3);
  lVar12 = (long)*(int *)(lVar2 + 0x30);
  lStack_318 = lVar2;
  func_0x00010398580c(unaff_x20 + lVar8,lVar20,0x112d36580,&UNK_10d9016d0);
  func_0x00010398580c(lVar19,lVar20 + lVar12,0x112d36580,&UNK_10d9016d0);
  pcVar13 = *(code **)(lVar16 + 0x30);
  lVar2 = lVar20;
  (*pcVar13)(lVar20,1,lVar3);
  if ((int)lVar2 == 1) {
    func_0x00010398164c(lVar19,0x112d36580,&UNK_10d9016d0);
    lVar12 = lVar20 + lVar12;
    (*pcVar13)(lVar12,1,lVar3);
    pcVar17 = pcStack_300;
    if ((int)lVar12 == 1) {
      func_0x00010398164c(lVar20,0x112d36580,&UNK_10d9016d0);
LAB_1039841c4:
      lVar19 = *(long *)(unaff_x20 + _DAT_112fbab88);
      lVar12 = lVar19;
      func_0x000107c3abfc();
      func_0x000107c61180();
      lVar2 = lStack_350;
      if (lVar12 != 0) {
        func_0x000107c5edb4(lStack_350);
        func_0x000107c61170(lVar12);
      }
      (*pcVar17)(lVar2,lVar12 == 0,1,lVar3);
      func_0x000107c61428(unaff_x20 + lVar8,&uStack_180,0x21,0);
      func_0x0001014522e4(lVar2,unaff_x20 + lVar8);
      func_0x000107c614a8(&uStack_180);
      lVar2 = lStack_348;
      func_0x000107c5eea0(lStack_348);
      func_0x000107c5ee8c();
      lVar12 = lStack_338;
      (**(code **)(lStack_340 + 8))(lVar2,lStack_338);
      param_1 = param_1 * 1000.0;
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x10398492c);
        (*pcVar13)();
      }
      if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x103984930);
        (*pcVar13)();
      }
      if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x103984934);
        (*pcVar13)();
      }
      lVar2 = *(long *)(unaff_x20 + _DAT_112fbab28);
      if (SBORROW8((long)param_1,lVar2)) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x103984938);
        (*pcVar13)();
      }
      puVar5 = PTR_PTR_1126d6d78;
      func_0x000107c610f8(PTR_PTR_1126d6d78);
      func_0x000107c45528();
      lVar14 = lVar19;
      func_0x000107c3abfc();
      func_0x000107c61180();
      lVar20 = lStack_360;
      if (lVar14 == 0) {
        lVar14 = 0;
      }
      else {
        func_0x000107c5edb4(lStack_360);
        func_0x000107c61170(lVar14);
        func_0x000107c5ed70();
        (**(code **)(lVar16 + 8))(lVar20,lVar3);
        lVar20 = lVar12;
        func_0x000107c5fadc(lVar14,lVar12);
        func_0x000107c6142c(lVar12);
        lVar12 = lVar20;
      }
      func_0x000107c5a26c(puVar5);
      func_0x000107c61170(lVar14);
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c47580();
      func_0x000107c54288(puVar5);
      func_0x000107c61170(puVar6);
      func_0x000107c4b9c4(*(undefined8 *)(unaff_x20 + _DAT_112fbab48));
      puVar6 = PTR_PTR_1126a6d58;
      func_0x000107c610f8(PTR_PTR_1126a6d58);
      func_0x000107c453e4();
      uVar15 = *(undefined8 *)(unaff_x20 + _DAT_112fbab38);
      uVar18 = uVar15;
      func_0x000104645890(uVar15);
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar12);
      uVar7 = uVar18;
      func_0x000107bc0ae4(puVar6,uVar18,1,1);
      func_0x000107c61170(uVar18);
      func_0x000104645890();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar7);
      uVar18 = uVar15;
      func_0x000107bc0ccc((double)((long)param_1 - lVar2) / 1000.0,puVar6,uVar15,1);
      func_0x000107c61170(uVar15);
      FUN_10397f9b0(0);
      func_0x000107c3abfc();
      func_0x000107c61180();
      lVar2 = lStack_358;
      if (lVar19 == 0) {
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar6);
        lVar19 = 0;
        uVar18 = 0;
      }
      else {
        func_0x000107c5edb4(lStack_358);
        func_0x000107c61170();
        func_0x000107c5ed70();
        func_0x000107c61170(puVar5);
        func_0x000107c61170(puVar6);
        (**(code **)(lVar16 + 8))(lVar2,lVar3);
      }
      lVar2 = unaff_x20 + _DAT_112fbab20;
      func_0x000107c61428(lVar2,auStack_2d8,1,0);
      uVar7 = *(undefined8 *)(lVar2 + 0x20);
      *(long *)(lVar2 + 0x18) = lVar19;
      *(undefined8 *)(lVar2 + 0x20) = uVar18;
      func_0x000107c6142c(uVar7);
      pcVar17 = pcStack_300;
    }
    else {
LAB_1039840e8:
      pcVar17 = pcStack_300;
      func_0x00010398164c(lVar20,0x112d7e680,&UNK_10d95e350);
    }
  }
  else {
    func_0x00010398580c(lVar20,uVar11,0x112d36580,&UNK_10d9016d0);
    lVar2 = lVar20 + lVar12;
    (*pcVar13)(lVar2,1,lVar3);
    lVar14 = lStack_320;
    if ((int)lVar2 == 1) {
      func_0x00010398164c(lVar19,0x112d36580,&UNK_10d9016d0);
      (**(code **)(lVar16 + 8))(uVar11,lVar3);
      goto LAB_1039840e8;
    }
    (**(code **)(lVar16 + 0x20))(lStack_320,lVar20 + lVar12,lVar3);
    uVar18 = 0x112d7e688;
    func_0x0001039857cc(0x112d7e688,PTR___s10Foundation3URLVMa_110350988,
                        PTR___s10Foundation3URLVSQAAMc_1103509a8);
    uVar4 = uVar11;
    func_0x000107c5fab8(uVar11,lVar14,lVar3,uVar18);
    pcVar17 = *(code **)(lVar16 + 8);
    (*pcVar17)(lVar14,lVar3);
    func_0x00010398164c(lVar19,0x112d36580,&UNK_10d9016d0);
    (*pcVar17)(uVar11,lVar3);
    func_0x00010398164c(lVar20,0x112d36580,&UNK_10d9016d0);
    pcVar17 = pcStack_300;
    if ((uVar4 & 1) != 0) goto LAB_1039841c4;
  }
  lVar19 = lStack_308;
  lVar12 = lStack_310;
  lVar20 = *(long *)(unaff_x20 + _DAT_112fbab88);
  func_0x000107c3abfc();
  func_0x000107c61180();
  lVar2 = lStack_330;
  if (lVar20 != 0) {
    func_0x000107c5edb4(lStack_330);
    func_0x000107c61170(lVar20);
    func_0x000107c5ed60(lVar19);
    (**(code **)(lVar16 + 8))(lVar2,lVar3);
  }
  (*pcVar17)(lVar19,lVar20 == 0,1,lVar3);
  lVar2 = unaff_x20 + lVar8;
  (*pcVar13)(lVar2,1,lVar3);
  lVar20 = lStack_320;
  bVar1 = (int)lVar2 != 0;
  if (!bVar1) {
    (**(code **)(lVar16 + 0x10))(lStack_320,unaff_x20 + lVar8,lVar3);
    func_0x000107c5ed60(lVar12);
    (**(code **)(lVar16 + 8))(lVar20,lVar3);
  }
  (*pcVar17)(lVar12,bVar1,1,lVar3);
  lVar2 = (long)*(int *)(lStack_318 + 0x30);
  func_0x00010398580c(lVar19,lVar10,0x112d36580,&UNK_10d9016d0);
  func_0x00010398580c(lVar12,lVar10 + lVar2,0x112d36580,&UNK_10d9016d0);
  lVar8 = lVar10;
  (*pcVar13)(lVar10,1,lVar3);
  uVar11 = uStack_328;
  if ((int)lVar8 == 1) {
    func_0x00010398164c(lVar12,0x112d36580,&UNK_10d9016d0);
    func_0x00010398164c(lVar19,0x112d36580,&UNK_10d9016d0);
    lVar2 = lVar10 + lVar2;
    (*pcVar13)(lVar2,1,lVar3);
    if ((int)lVar2 == 1) {
      func_0x00010398164c(lVar10,0x112d36580,&UNK_10d9016d0);
      goto LAB_103984750;
    }
LAB_103984714:
    func_0x00010398164c(lVar10,0x112d7e680,&UNK_10d95e350);
  }
  else {
    func_0x00010398580c(lVar10,uStack_328,0x112d36580,&UNK_10d9016d0);
    lVar8 = lVar10 + lVar2;
    (*pcVar13)(lVar8,1,lVar3);
    lVar20 = lStack_320;
    if ((int)lVar8 == 1) {
      func_0x00010398164c(lVar12,0x112d36580,&UNK_10d9016d0);
      func_0x00010398164c(lVar19,0x112d36580,&UNK_10d9016d0);
      (**(code **)(lVar16 + 8))(uVar11,lVar3);
      goto LAB_103984714;
    }
    (**(code **)(lVar16 + 0x20))(lStack_320,lVar10 + lVar2,lVar3);
    uVar18 = 0x112d7e688;
    func_0x0001039857cc(0x112d7e688,PTR___s10Foundation3URLVMa_110350988,
                        PTR___s10Foundation3URLVSQAAMc_1103509a8);
    func_0x000107c5fab8(uVar11,lVar20,lVar3,uVar18);
    pcVar13 = *(code **)(lVar16 + 8);
    (*pcVar13)(lVar20,lVar3);
    func_0x00010398164c(lVar12,0x112d36580,&UNK_10d9016d0);
    func_0x00010398164c(lVar19,0x112d36580,&UNK_10d9016d0);
    (*pcVar13)(uStack_328,lVar3);
    func_0x00010398164c(lVar10,0x112d36580,&UNK_10d9016d0);
    if ((uVar11 & 1) != 0) goto LAB_103984750;
  }
  lVar2 = _DAT_112fbab20;
  func_0x000107c61428(unaff_x20 + _DAT_112fbab20,auStack_1b0,1,0);
  *(undefined1 *)(unaff_x20 + lVar2) = 1;
LAB_103984750:
  lVar2 = unaff_x20 + _DAT_112fbaae8;
  func_0x000107c61618();
  if (lVar2 != 0) {
    puVar9 = (undefined8 *)(unaff_x20 + _DAT_112fbab20);
    func_0x000107c61428(puVar9,auStack_1c8,0,0);
    uStack_b8 = puVar9[0x19];
    uStack_c0 = puVar9[0x18];
    uStack_a8 = puVar9[0x1b];
    uStack_b0 = puVar9[0x1a];
    uStack_98 = puVar9[0x1d];
    uStack_a0 = puVar9[0x1c];
    uStack_90 = *(undefined4 *)(puVar9 + 0x1e);
    uStack_f8 = puVar9[0x11];
    uStack_100 = puVar9[0x10];
    uStack_e8 = puVar9[0x13];
    uStack_f0 = puVar9[0x12];
    uStack_d8 = puVar9[0x15];
    uStack_e0 = puVar9[0x14];
    uStack_c8 = puVar9[0x17];
    uStack_d0 = puVar9[0x16];
    uStack_138 = puVar9[9];
    uStack_140 = puVar9[8];
    uStack_128 = puVar9[0xb];
    uStack_130 = puVar9[10];
    uStack_118 = puVar9[0xd];
    uStack_120 = puVar9[0xc];
    uStack_108 = puVar9[0xf];
    uStack_110 = puVar9[0xe];
    uStack_178 = puVar9[1];
    uStack_180 = *puVar9;
    uStack_168 = puVar9[3];
    uStack_170 = puVar9[2];
    uStack_158 = puVar9[5];
    uStack_160 = puVar9[4];
    uStack_148 = puVar9[7];
    uStack_150 = puVar9[6];
    func_0x00010465c0fc(0);
    func_0x000107c610f8();
    FUN_1037b0db4(&uStack_180,auStack_2c0);
    puVar9 = &uStack_180;
    func_0x000104658cf4(puVar9);
    func_0x000107c41c74(lVar2);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(puVar9);
  }
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112fbab00);
  uVar18 = uVar7;
  func_0x000107c4a310();
  if ((int)uVar18 != 0) {
    func_0x000107c42864(uVar7);
    *(undefined1 *)(unaff_x20 + _DAT_112fbab08) = 0;
  }
  return;
}



/* Entry: 103984f50; end: 103984f73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103984f50(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112fbab88);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(lVar1);
  }
  return uVar2;
}



/* Entry: 103984f74; end: 103984fbf;  */

void FUN_103984f74(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  plVar4 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x1039859c8;
  plVar4[2] = lVar5;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar5 = lVar2;
  func_0x000107c5fce8();
  plVar4[3] = lVar5;
  uVar3 = 0x112d45220;
  FUN_1039857cc(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103980398,lVar2,uVar3);
  return;
}



/* Entry: 103984fc0; end: 10398502f;  */

void FUN_103984fc0(undefined8 param_1)

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
  plVar3[1] = 0x1039859d0;
  (*(code *)&UNK_1014243d0)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 103985030; end: 10398526f;  */

undefined8 FUN_103985030(undefined8 param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  
  lVar1 = 0;
  func_0x000107c5eb08();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar6 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar5 = (long)puVar6 - extraout_x12;
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar7 = lVar5 - extraout_x8_00;
  uVar2 = param_2;
  func_0x000107c50300(param_2);
  func_0x000107c61180();
  func_0x000107c5eae8(lVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c5eaf0(uVar7);
  pcVar9 = *(code **)(lVar8 + 8);
  (*pcVar9)(lVar5,lVar1);
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar3 + -8);
  uVar4 = 1;
  uVar2 = uVar7;
  (**(code **)(lVar5 + 0x30))(uVar7,1,lVar3);
  if ((int)uVar2 == 1) {
    func_0x00010398164c(uVar7,0x112d36580,&UNK_10d9016d0);
  }
  else {
    func_0x000107c5ed70();
    (**(code **)(lVar5 + 8))(uVar7,lVar3);
    func_0x000107c6142c(uVar4);
    uVar2 = uVar2 & 0xffffffffffff;
    if ((uVar4 & 0x2000000000000000) != 0) {
      uVar2 = uVar4 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) goto LAB_1039851bc;
  }
  uVar2 = param_2;
  func_0x000107c5c744();
  func_0x000107c61180();
  if (uVar2 == 0) {
    return 0;
  }
  func_0x000107c61170();
LAB_1039851bc:
  uVar2 = param_2;
  func_0x000107c5c744();
  func_0x000107c61180();
  if (uVar2 != 0) {
    uVar4 = uVar2;
    func_0x000107c4a028();
    func_0x000107c61170(uVar2);
    if ((uVar4 & 1) != 0) {
      return 0;
    }
  }
  func_0x000107c50300(param_2);
  func_0x000107c61180();
  func_0x000107c5eae8(puVar6);
  func_0x000107c61170(param_2);
  func_0x000107c5eae0();
  (*pcVar9)(puVar6,lVar1);
  func_0x000107c4b768(param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  return 0;
}



/* Entry: 103985270; end: 103985277;  */

void FUN_103985270(void)

{
  if (lRam0000000112fbabc0 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e7934a4);
  return;
}



/* Entry: 103985278; end: 1039852af;  */

void FUN_103985278(undefined8 param_1)

{
  if (lRam0000000112fbabc0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7934a4);
  return;
}



/* Entry: 1039852b0; end: 1039853ab;  */

void FUN_1039852b0(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_d8 = &UNK_10dc2c128;
  puStack_d0 = &UNK_10dc2c140;
  puVar1 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_c0 = &UNK_10dc2c158;
  puStack_b8 = PTR___sBOWV_11034d658 + 0x40;
  puStack_b0 = &UNK_10dc2c158;
  puStack_a0 = PTR___sBoWV_11034d678 + 0x40;
  puStack_a8 = &UNK_10dc2c170;
  puStack_90 = &UNK_10dc2c188;
  puStack_80 = &UNK_10dc2c188;
  puStack_70 = PTR___sBbWV_11034d660 + 0x40;
  puStack_78 = &UNK_10dc2c170;
  puStack_58 = &UNK_10dc2c1a0;
  lVar2 = 0x13f;
  puStack_c8 = puVar1;
  puStack_98 = puStack_b8;
  puStack_88 = puStack_b8;
  puStack_68 = puStack_70;
  puStack_60 = puStack_b8;
  puStack_50 = puStack_b8;
  puStack_48 = puVar1;
  puStack_40 = puVar1;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar2 + -8) + 0x40;
    puStack_30 = &UNK_10dc2c1b8;
    puStack_28 = puVar1;
    func_0x000107c61630(param_1,0x100,0x17,&puStack_d8,param_1 + 0x50);
  }
  return;
}



/* Entry: 1039853ac; end: 1039853d7;  */

void FUN_1039853ac(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1039853d8; end: 103985437;  */

void FUN_1039853d8(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  plVar5 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_103985438;
  plVar5[3] = lVar2;
  plVar5[4] = lVar6;
  plVar5[2] = lVar3;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar3 = lVar2;
  func_0x000107c5fce8();
  plVar5[5] = lVar3;
  uVar4 = 0x112d45220;
  FUN_1039857cc(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103980dc8,lVar2,uVar4);
  return;
}



/* Entry: 103985438; end: 103985473;  */

void FUN_103985438(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103985470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103985474; end: 1039854e3;  */

void FUN_103985474(undefined8 param_1)

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
  plVar3[1] = 0x1039859d4;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1039854e4; end: 103985547;  */

void FUN_1039854e4(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar9 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = 0x1039859d8;
  plVar9[4] = lVar7;
  plVar9[5] = lVar2;
  plVar9[2] = lVar4;
  plVar9[3] = lVar1;
  lVar4 = 0;
  func_0x000107c5eb08();
  plVar9[6] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar9[7] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[8] = uVar5;
  lVar4 = 0;
  func_0x000107c5ede0();
  plVar9[9] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar9[10] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar6 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0xb] = uVar6;
  uVar6 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0xc] = uVar6;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0xd] = uVar5;
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar5 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xf;
  uVar6 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0xe] = uVar6;
  uVar6 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0xf] = uVar6;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0x10] = uVar5;
  lVar7 = 0;
  func_0x000107c5fcec();
  puVar3 = PTR___sScMMa_11034fc70;
  lVar4 = lVar7;
  func_0x000107c5fce8();
  plVar9[0x11] = lVar4;
  uVar8 = 0x112d45220;
  FUN_1039857cc(0x112d45220,puVar3,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar7,uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103980548,lVar7,uVar8);
  return;
}



/* Entry: 103985548; end: 1039855b7;  */

void FUN_103985548(undefined8 param_1)

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
  plVar3[1] = 0x1039859dc;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1039855b8; end: 103985603;  */

void FUN_1039855b8(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  plVar4 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x1039859cc;
  plVar4[2] = lVar5;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar5 = lVar2;
  func_0x000107c5fce8();
  plVar4[3] = lVar5;
  uVar3 = 0x112d45220;
  FUN_1039857cc(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10398003c,lVar2,uVar3);
  return;
}



/* Entry: 103985604; end: 103985673;  */

void FUN_103985604(undefined8 param_1)

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
  plVar3[1] = 0x1039859e0;
  (*(code *)&UNK_1014243d0)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 103985674; end: 103985703;  */

void FUN_103985674(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  plVar4 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x1039856c0;
  plVar4[2] = lVar5;
  lVar2 = 0;
  func_0x000107c5fcec();
  puVar1 = PTR___sScMMa_11034fc70;
  lVar5 = lVar2;
  func_0x000107c5fce8();
  plVar4[3] = lVar5;
  uVar3 = 0x112d45220;
  FUN_1039857cc(0x112d45220,puVar1,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10397fefc,lVar2,uVar3);
  return;
}



/* Entry: 103985704; end: 103985773;  */

void FUN_103985704(undefined8 param_1)

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
  plVar3[1] = 0x1039859e4;
  (*(code *)&UNK_1014243d0)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 103985774; end: 103985793;  */

void FUN_103985774(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103985780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 103985794; end: 1039857ab;  */

void FUN_103985794(long param_1)

{
  FUN_1039857ac(param_1 + 0x20);
  return;
}



/* Entry: 1039857ac; end: 1039857cb;  */

void FUN_1039857ac(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001039857c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1039857cc; end: 103985853;  */

void FUN_1039857cc(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    func_0x000107c61520(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Entry: 103985854; end: 103985887;  */

void FUN_103985854(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103985888; end: 1039858eb;  */

void FUN_103985888(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long unaff_x20;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28);
  plVar9 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = 0x1039859e8;
  plVar9[4] = lVar7;
  plVar9[5] = lVar2;
  plVar9[2] = lVar4;
  plVar9[3] = lVar1;
  lVar4 = 0;
  func_0x000107c5eb08();
  plVar9[6] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar9[7] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[8] = uVar5;
  lVar4 = 0;
  func_0x000107c5ede0();
  plVar9[9] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  plVar9[10] = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar6 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0xb] = uVar6;
  uVar6 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0xc] = uVar6;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0xd] = uVar5;
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  uVar5 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xf;
  uVar6 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0xe] = uVar6;
  uVar6 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0xf] = uVar6;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar9[0x10] = uVar5;
  lVar7 = 0;
  func_0x000107c5fcec();
  puVar3 = PTR___sScMMa_11034fc70;
  lVar4 = lVar7;
  func_0x000107c5fce8();
  plVar9[0x11] = lVar4;
  uVar8 = 0x112d45220;
  FUN_1039857cc(0x112d45220,puVar3,PTR___sScMScAsMc_11034fc78);
  func_0x000107c5fca8(lVar7,uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_103980548,lVar7,uVar8);
  return;
}



/* Entry: 1039858ec; end: 10398595b;  */

void FUN_1039858ec(undefined8 param_1)

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
  plVar3[1] = 0x1039859ec;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 10398595c; end: 1039859ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10398595c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_240 [24];
  undefined1 auStack_228 [24];
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [24];
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
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_148,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(lVar3 + _DAT_112fbab30);
    uStack_208 = puVar1[1];
    uStack_210 = *puVar1;
    uStack_1d8 = puVar1[7];
    uStack_1e0 = puVar1[6];
    uStack_1c8 = puVar1[9];
    uStack_1d0 = puVar1[8];
    uStack_1f8 = puVar1[3];
    uStack_200 = puVar1[2];
    uStack_1e8 = puVar1[5];
    uStack_1f0 = puVar1[4];
    uStack_198 = puVar1[0xf];
    uStack_1a0 = puVar1[0xe];
    uStack_188 = puVar1[0x11];
    uStack_190 = puVar1[0x10];
    uStack_1b8 = puVar1[0xb];
    uStack_1c0 = puVar1[10];
    uStack_1a8 = puVar1[0xd];
    uStack_1b0 = puVar1[0xc];
    uStack_168 = puVar1[0x15];
    uStack_170 = puVar1[0x14];
    uStack_158 = puVar1[0x17];
    uStack_160 = puVar1[0x16];
    uStack_150 = puVar1[0x18];
    uStack_178 = puVar1[0x13];
    uStack_180 = puVar1[0x12];
    func_0x00010398580c(&uStack_210,&uStack_130,0x112d7e768,&UNK_10d93c7c0);
    func_0x000107c61170(lVar3);
    iVar2 = (int)&uStack_210;
    func_0x000101424a7c();
    if (iVar2 != 1) {
      uStack_88 = uStack_168;
      uStack_90 = uStack_170;
      uStack_78 = uStack_158;
      uStack_80 = uStack_160;
      uStack_70 = uStack_150;
      uStack_c8 = uStack_1a8;
      uStack_d0 = uStack_1b0;
      uStack_b8 = uStack_198;
      uStack_c0 = uStack_1a0;
      uStack_a8 = uStack_188;
      uStack_b0 = uStack_190;
      uStack_98 = uStack_178;
      uStack_a0 = uStack_180;
      uStack_108 = uStack_1e8;
      uStack_110 = uStack_1f0;
      uStack_f8 = uStack_1d8;
      uStack_100 = uStack_1e0;
      uStack_e8 = uStack_1c8;
      uStack_f0 = uStack_1d0;
      uStack_d8 = uStack_1b8;
      uStack_e0 = uStack_1c0;
      uStack_128 = uStack_208;
      uStack_130 = uStack_210;
      uStack_118 = uStack_1f8;
      uStack_120 = uStack_200;
      func_0x0001046583bc(0);
      func_0x000107c610f8();
      func_0x0001046562b4(&uStack_130);
    }
  }
  func_0x000107c61428(unaff_x20 + 0x10,&uStack_210,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c61170();
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_228,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c61618(lVar3 + _DAT_112fbaae8);
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_240,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    func_0x000107c615f0(*(undefined8 *)(lVar3 + _DAT_112fbab48));
    func_0x000107c61170(lVar3);
  }
  uVar4 = 0;
  FUN_103986cd0();
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000103986a20();
  param_1[3] = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 1039859f0; end: 1039859ff; -[_TtC22ValdiCOFStoresServices22ValdiCOFStoresServices cofRxStore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039859f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fbabe8));
  return;
}



/* Entry: 103985a00; end: 103985a0f; -[_TtC22ValdiCOFStoresServices22ValdiCOFStoresServices cofSyncStore] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103985a00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fbabf0));
  return;
}



/* Entry: 103985a10; end: 103985a83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103985a10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fbabe0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fbabe8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fbabf0) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103985a84; end: 103985b13; -[_TtC22ValdiCOFStoresServices22ValdiCOFStoresServices initWithCofStore:cofRxStore:cofSyncStore:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103985a84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  *(undefined8 *)(param_1 + _DAT_112fbabe0) = param_3;
  *(undefined8 *)(param_1 + _DAT_112fbabe8) = param_4;
  *(undefined8 *)(param_1 + _DAT_112fbabf0) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_40,puVar1);
  return;
}



/* Entry: 103985b14; end: 103985b47;  */

void FUN_103985b14(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103985b48; end: 103985bcf; -[_TtC22ValdiCOFStoresServices22ValdiCOFStoresServices .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103985b64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103985b68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103985b48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fbabe0));
  return;
}



/* Entry: 103985bd0; end: 103985cd3;  */

void FUN_103985bd0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112fbac28,&UNK_10dc2c268);
  puVar1 = &UNK_1106b4220;
  func_0x000107c613fc(&UNK_1106b4220,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_103985cd4,puVar1);
  return;
}



/* Entry: 103985cd4; end: 103985cdb;  */

void FUN_103985cd4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_40);
  FUN_1039863fc();
  func_0x000107c613fc();
  uVar1 = uStack_40;
  func_0x0001039860ec();
  func_0x000107c61170(uStack_38);
  func_0x000107c61574(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 103985cdc; end: 103985d37;  */

undefined8 FUN_103985cdc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_2;
  func_0x0001039860ec(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_2);
  return uVar1;
}



/* Entry: 103985d38; end: 103985d5b;  */

void FUN_103985d38(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103985d5c; end: 103985e1f;  */

void FUN_103985d5c(void)

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



/* Entry: 103985e20; end: 103985f47;  */

ulong FUN_103985e20(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103985f48);
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
  FUN_103985f48(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103985f44);
      (*pcVar1)();
    }
    FUN_103985fc8(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 103985f48; end: 103985fc7;  */

undefined * FUN_103985f48(undefined *param_1,undefined *param_2)

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
    FUN_10397bed8();
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



/* Entry: 103985fc8; end: 10398622b;  */

long FUN_103985fc8(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1039860e8);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1039860ec);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112fbabd8;
        func_0x0001000285a8(0x112fbabd8,&UNK_10dc2c230);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112fbabd8;
      func_0x0001000285a8(0x112fbabd8,&UNK_10dc2c230);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1039860e4);
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



/* Entry: 10398622c; end: 10398622f;  */

void FUN_10398622c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fbac38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc2c278;
  func_0x000107c61520(&UNK_10dc2c278,&UNK_1106b42b8);
  puRam0000000112fbac38 = puVar1;
  return;
}



/* Entry: 103986230; end: 10398629b;  */

void FUN_103986230(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fbac38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc2c278;
  func_0x000107c61520(&UNK_10dc2c278,&UNK_1106b42b8);
  puRam0000000112fbac38 = puVar1;
  return;
}



/* Entry: 10398629c; end: 10398629f;  */

void FUN_10398629c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fbac50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc2c320;
  func_0x000107c61520(&UNK_10dc2c320,&UNK_1106b4368);
  puRam0000000112fbac50 = puVar1;
  return;
}



/* Entry: 1039862a0; end: 10398630b;  */

void FUN_1039862a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fbac50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc2c320;
  func_0x000107c61520(&UNK_10dc2c320,&UNK_1106b4368);
  puRam0000000112fbac50 = puVar1;
  return;
}



/* Entry: 10398630c; end: 10398634f;  */

void FUN_10398630c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 103986350; end: 103986353;  */

void FUN_103986350(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fbac68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc2c390;
  func_0x000107c61520(&UNK_10dc2c390,&UNK_1106b4368);
  puRam0000000112fbac68 = puVar1;
  return;
}



/* Entry: 103986354; end: 103986393;  */

void FUN_103986354(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fbac68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc2c390;
  func_0x000107c61520(&UNK_10dc2c390,&UNK_1106b4368);
  puRam0000000112fbac68 = puVar1;
  return;
}



/* Entry: 103986394; end: 103986397;  */

void FUN_103986394(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fbac70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc2c348;
  func_0x000107c61520(&UNK_10dc2c348,&UNK_1106b4368);
  puRam0000000112fbac70 = puVar1;
  return;
}



/* Entry: 103986398; end: 1039863d7;  */

void FUN_103986398(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fbac70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc2c348;
  func_0x000107c61520(&UNK_10dc2c348,&UNK_1106b4368);
  puRam0000000112fbac70 = puVar1;
  return;
}



/* Entry: 1039863d8; end: 1039863fb;  */

void FUN_1039863d8(void)

{
  return;
}



/* Entry: 1039863fc; end: 10398641b;  */

void FUN_1039863fc(void)

{
  func_0x000107c61168(&PTR_PTR_112fbace0);
  return;
}



/* Entry: 10398641c; end: 1039865af;  */

int FUN_10398641c(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103986498;
        goto LAB_10398647c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10398647c:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_103986498:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1039865b0; end: 10398661b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039865b0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010033c9bc();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112fbadd8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10398661c; end: 103986623;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10398661c(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010033c9bc();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fbadd8) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 103986624; end: 10398666f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103986624(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fbadd8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103986670; end: 103986783;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_103986670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  func_0x000100337d94(0);
  func_0x000107c610f8();
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c615f0(param_3);
  func_0x00010446f4dc(param_1,param_2,param_3,param_4);
  uStack_58 = param_1;
  func_0x00010008a7c8(&uStack_48,&uStack_58);
  func_0x000100083b20(&uStack_58);
  func_0x000107c61574(uStack_48);
  uVar2 = uStack_58;
  uVar1 = uStack_58;
  func_0x000107c614f0(uStack_58);
  (**(code **)(lStack_50 + 0x10))();
  func_0x000107c615e8(uVar2);
  func_0x000100083b20(&lStack_60);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  uVar2 = *(undefined8 *)(lStack_60 + 0x10);
  func_0x000107c61434(uVar2);
  func_0x000107c61574(lStack_60);
  return uVar2;
}



/* Entry: 103986784; end: 1039867e3; -[_TtC41WebViewInjectionScriptSaberPluginRegistry46WebViewInjectionScriptSaberPluginScopeServices init] */

void FUN_103986784(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebViewInjectionScriptSaberPluginRegistry.WebViewInjectionScriptSaberPluginScopeServices"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039867b0);
  (*pcVar1)();
}



/* Entry: 1039867e4; end: 1039867f3; -[_TtC41WebViewInjectionScriptSaberPluginRegistry46WebViewInjectionScriptSaberPluginScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039867e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fbadd8));
  return;
}



/* Entry: 1039867f4; end: 103986813;  */

void FUN_1039867f4(void)

{
  FUN_103986670();
  return;
}



/* Entry: 103986814; end: 103986823;  */

undefined1  [16] FUN_103986814(void)

{
  return ZEXT816(0x1106b43f8);
}



/* Entry: 103986824; end: 103986833; -[WebViewInjectionScriptPluginScope config] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103986824(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fbae08));
  return;
}



/* Entry: 103986834; end: 103986843; -[WebViewInjectionScriptPluginScope source] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103986834(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fbae10);
}



/* Entry: 103986844; end: 103986853; -[WebViewInjectionScriptPluginScope plugInRegistry] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103986844(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fbae18));
  return;
}



/* Entry: 103986854; end: 10398689b; -[WebViewInjectionScriptPluginScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103986854(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fbae20;
  func_0x000107c61428(param_1 + _DAT_112fbae20,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10398689c; end: 1039868f3; -[WebViewInjectionScriptPluginScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10398689c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fbae20;
  func_0x000107c61428(param_1 + _DAT_112fbae20,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1039868f4; end: 103986913; -[WebViewInjectionScriptPluginScope webBrowserLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1039868f4(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fbae28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103986914; end: 103986b2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103986914(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined1 auStack_68 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112fbae20;
  func_0x000107c61614(unaff_x20 + _DAT_112fbae20,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fbae18) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fbae08) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fbae10) = param_3;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_68,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_4);
  *(undefined8 *)(unaff_x20 + _DAT_112fbae28) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  puVar3 = auStack_78;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_4);
  return puVar3;
}



/* Entry: 103986b2c; end: 103986c17; -[WebViewInjectionScriptPluginScope initWithPlugInRegistry:config:source:delegate:webBrowserLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103986b2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112fbae20;
  func_0x000107c61614(param_1 + _DAT_112fbae20,0);
  *(undefined8 *)(param_1 + _DAT_112fbae18) = param_3;
  *(undefined8 *)(param_1 + _DAT_112fbae08) = param_4;
  *(undefined8 *)(param_1 + _DAT_112fbae10) = param_5;
  func_0x000107c61428(param_1 + lVar2,auStack_68,1,0);
  func_0x000107c61604(param_1 + lVar2,param_6);
  *(undefined8 *)(param_1 + _DAT_112fbae28) = param_7;
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = param_1;
  lStack_70 = lVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_7);
  func_0x000107c61154(&lStack_78,puVar1);
  return;
}



/* Entry: 103986c18; end: 103986c77; -[WebViewInjectionScriptPluginScope init] */

void FUN_103986c18(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("WebViewInjectionScriptPluginScope.WebViewInjectionScriptPluginScope",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103986c44);
  (*pcVar1)();
}



/* Entry: 103986c78; end: 103986ccf; -[WebViewInjectionScriptPluginScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103986c78(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fbae08));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fbae18));
  func_0x000101424b1c(param_1 + _DAT_112fbae20);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112fbae28));
  return;
}



/* Entry: 103986cd0; end: 103986cef;  */

void FUN_103986cd0(void)

{
  func_0x000107c61168(&PTR_PTR_112908f28);
  return;
}



/* Entry: 103986cf0; end: 103986d2f;  */

void FUN_103986cf0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112fbae58;
  func_0x0001000285a8(0x112fbae58,&UNK_10dc2c5c0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103986d30; end: 103986e33;  */

void FUN_103986d30(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112fbae60,&UNK_10dc2c5c8);
  puVar1 = &UNK_1106b4520;
  func_0x000107c613fc(&UNK_1106b4520,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_103986e34,puVar1);
  return;
}



/* Entry: 103986e34; end: 103986e3b;  */

void FUN_103986e34(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_40);
  FUN_103987614();
  func_0x000107c613fc();
  uVar1 = uStack_40;
  FUN_10398724c();
  func_0x000107c61170(uStack_38);
  func_0x000107c61574(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 103986e3c; end: 103986e97;  */

undefined8 FUN_103986e3c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_2;
  FUN_10398724c(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61574(param_2);
  return uVar1;
}



/* Entry: 103986e98; end: 103986ebb;  */

void FUN_103986e98(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103986ebc; end: 103986f7f;  */

void FUN_103986ebc(void)

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



/* Entry: 103986f80; end: 1039870a7;  */

ulong FUN_103986f80(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1039870a8);
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
  FUN_1039870a8(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1039870a4);
      (*pcVar1)();
    }
    FUN_103987128(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 1039870a8; end: 103987127;  */

undefined * FUN_1039870a8(undefined *param_1,undefined *param_2)

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
    func_0x00010397beec();
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



/* Entry: 103987128; end: 10398724b;  */

long FUN_103987128(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x103987248);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10398724c);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112fbabd0;
        func_0x0001000285a8(0x112fbabd0,&UNK_10dc2c228);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112fbabd0;
      func_0x0001000285a8(0x112fbabd0,&UNK_10dc2c228);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103987244);
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



/* Entry: 10398724c; end: 103987443;  */

void FUN_10398724c(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long unaff_x20;
  undefined1 uStack_51;
  long lStack_50;
  long lStack_48;
  
  uStack_51 = uRam0000000112fbb000;
  func_0x00010008a7c8(&lStack_50,&uStack_51);
  lVar2 = lStack_50;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lStack_50 != 0) {
    func_0x000100083b20(&lStack_48);
    func_0x000107c61574(lVar2);
    lVar2 = lStack_48;
    puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lStack_48 != 0) {
      func_0x000107c61550();
      if ((((int)puVar3 == 0) || ((long)puVar4 < 0)) || (((ulong)puVar4 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar4 >> 0x3e == 0) {
          puVar3 = *(undefined **)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar3 = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar4) {
            puVar3 = puVar4;
          }
          func_0x000107c60480(puVar3);
        }
        puVar4 = (undefined *)0x0;
        FUN_103986f80(0,puVar3 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
      }
      uVar6 = (ulong)puVar4 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar6 + 0x10);
      puVar3 = puVar4;
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
        puVar3 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
        FUN_103986f80(puVar3,uVar1 + 1,1,puVar4);
        uVar6 = (ulong)puVar3 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
      *(long *)(uVar6 + uVar1 * 8 + 0x20) = lVar2;
    }
  }
  uStack_51 = uRam0000000112fbb001;
  func_0x00010008a7c8(&lStack_50,&uStack_51);
  if (lStack_50 != 0) {
    func_0x000100083b20(&lStack_48);
    func_0x000107c61574(lStack_50);
    if (lStack_48 != 0) {
      puVar4 = puVar3;
      func_0x000107c61550();
      if ((((int)puVar4 == 0) || ((long)puVar3 < 0)) ||
         (puVar4 = puVar3, ((ulong)puVar3 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar3 >> 0x3e == 0) {
          puVar5 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar5 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar3) {
            puVar5 = puVar3;
          }
          func_0x000107c60480(puVar5);
        }
        puVar4 = (undefined *)0x0;
        FUN_103986f80(0,puVar5 + 1,1,puVar3);
      }
      uVar6 = (ulong)puVar4 & 0xffffffffffffff8;
      uVar1 = *(ulong *)(uVar6 + 0x10);
      puVar3 = puVar4;
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar1) {
        puVar3 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
        FUN_103986f80(puVar3,uVar1 + 1,1,puVar4);
        uVar6 = (ulong)puVar3 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar6 + 0x10) = uVar1 + 1;
      *(long *)(uVar6 + uVar1 * 8 + 0x20) = lStack_48;
    }
  }
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  return;
}



/* Entry: 103987444; end: 103987447;  */

void FUN_103987444(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fbae70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc2c5d8;
  func_0x000107c61520(&UNK_10dc2c5d8,&UNK_1106b45b8);
  puRam0000000112fbae70 = puVar1;
  return;
}



/* Entry: 103987448; end: 1039874b3;  */

void FUN_103987448(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fbae70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc2c5d8;
  func_0x000107c61520(&UNK_10dc2c5d8,&UNK_1106b45b8);
  puRam0000000112fbae70 = puVar1;
  return;
}



/* Entry: 1039874b4; end: 1039874b7;  */

void FUN_1039874b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fbae88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc2c680;
  func_0x000107c61520(&UNK_10dc2c680,&UNK_1106b4668);
  puRam0000000112fbae88 = puVar1;
  return;
}



/* Entry: 1039874b8; end: 103987523;  */

void FUN_1039874b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fbae88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc2c680;
  func_0x000107c61520(&UNK_10dc2c680,&UNK_1106b4668);
  puRam0000000112fbae88 = puVar1;
  return;
}



/* Entry: 103987524; end: 103987567;  */

void FUN_103987524(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 103987568; end: 10398756b;  */

void FUN_103987568(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fbaea0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc2c6f0;
  func_0x000107c61520(&UNK_10dc2c6f0,&UNK_1106b4668);
  puRam0000000112fbaea0 = puVar1;
  return;
}



/* Entry: 10398756c; end: 1039875ab;  */

void FUN_10398756c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fbaea0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc2c6f0;
  func_0x000107c61520(&UNK_10dc2c6f0,&UNK_1106b4668);
  puRam0000000112fbaea0 = puVar1;
  return;
}



/* Entry: 1039875ac; end: 1039875af;  */

void FUN_1039875ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fbaea8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc2c6a8;
  func_0x000107c61520(&UNK_10dc2c6a8,&UNK_1106b4668);
  puRam0000000112fbaea8 = puVar1;
  return;
}



/* Entry: 1039875b0; end: 1039875ef;  */

void FUN_1039875b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fbaea8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc2c6a8;
  func_0x000107c61520(&UNK_10dc2c6a8,&UNK_1106b4668);
  puRam0000000112fbaea8 = puVar1;
  return;
}



/* Entry: 1039875f0; end: 103987613;  */

void FUN_1039875f0(void)

{
  return;
}



/* Entry: 103987614; end: 103987633;  */

void FUN_103987614(void)

{
  func_0x000107c61168(&PTR_PTR_112fbaf18);
  return;
}



/* Entry: 103987634; end: 1039877c7;  */

int FUN_103987634(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1039876b0;
        goto LAB_103987694;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103987694:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1039876b0:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}


