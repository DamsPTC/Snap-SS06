/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103774148; end: 10377417b;  */

void FUN_103774148(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  func_0x000107c61434(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar2);
  return;
}



/* Entry: 10377417c; end: 1037743d3;  */

void FUN_10377417c(long param_1,code *param_2,undefined8 param_3,uint param_4,long *param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar11 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)(param_1 + 0x40);
  func_0x000107c61434();
  func_0x000107c6157c(param_3);
  lVar16 = 0;
  while( true ) {
    while (uVar17 != 0) {
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar16 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar9 * 0x10);
      uStack_78 = *puVar1;
      uVar3 = puVar1[1];
      uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar9 * 8);
      uStack_70 = uVar3;
      uStack_68 = uVar15;
      func_0x000107c61434(uVar3);
      func_0x000107c61174(uVar15);
      (*param_2)(&uStack_90,&uStack_78);
      func_0x000107c61170(uVar15);
      func_0x000107c6142c(uVar3);
      uVar3 = uStack_80;
      uVar4 = uStack_88;
      uVar9 = uStack_90;
      lVar13 = *param_5;
      uVar7 = uStack_90;
      uVar8 = uStack_88;
      func_0x000100029284();
      lVar10 = *(long *)(lVar13 + 0x10);
      uVar12 = (ulong)~(uint)uVar8 & 1;
      lVar14 = lVar10 + uVar12;
      if (SCARRY8(lVar10,uVar12)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1037743c0);
        (*pcVar5)();
      }
      if (*(long *)(lVar13 + 0x18) < lVar14) {
        FUN_103790458(lVar14,param_4 & 1);
        uVar7 = uVar9;
        uVar12 = uVar4;
        func_0x000100029284();
        if (((uint)uVar8 & 1) != ((uint)uVar12 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1037743d4);
          (*pcVar5)();
        }
      }
      else if ((param_4 & 1) == 0) {
        FUN_10378f11c();
      }
      uVar17 = uVar17 - 1 & uVar17;
      lVar14 = *param_5;
      if ((uVar8 & 1) == 0) {
        lVar10 = lVar14 + (uVar7 >> 6) * 8;
        *(ulong *)(lVar10 + 0x40) = *(ulong *)(lVar10 + 0x40) | 1L << (uVar7 & 0x3f);
        puVar2 = (ulong *)(*(long *)(lVar14 + 0x30) + uVar7 * 0x10);
        *puVar2 = uVar9;
        puVar2[1] = uVar4;
        *(undefined8 *)(*(long *)(lVar14 + 0x38) + uVar7 * 8) = uVar3;
        if (SCARRY8(*(long *)(lVar14 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1037743c4);
          (*pcVar5)();
        }
        *(long *)(lVar14 + 0x10) = *(long *)(lVar14 + 0x10) + 1;
      }
      else {
        func_0x000107c6142c(uVar4);
        uVar15 = *(undefined8 *)(*(long *)(lVar14 + 0x38) + uVar7 * 8);
        *(undefined8 *)(*(long *)(lVar14 + 0x38) + uVar7 * 8) = uVar3;
        func_0x000107c61170(uVar15);
      }
      param_4 = 1;
    }
    bVar6 = SCARRY8(lVar16,1);
    lVar16 = lVar16 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1037743bc);
      (*pcVar5)();
    }
    if ((long)(uVar11 + 0x3f >> 6) <= lVar16) break;
    uVar17 = ((ulong *)(param_1 + 0x40))[lVar16];
  }
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 1037743d4; end: 103775887;  */

undefined * FUN_1037743d4(undefined8 param_1,long param_2,ulong param_3,byte param_4,long param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  long extraout_x12_11;
  long extraout_x12_12;
  long extraout_x12_13;
  long extraout_x12_14;
  long extraout_x12_15;
  long extraout_x12_16;
  long extraout_x12_17;
  long extraout_x12_18;
  long extraout_x12_19;
  long extraout_x12_20;
  long extraout_x12_21;
  long extraout_x12_22;
  long extraout_x12_23;
  long extraout_x12_24;
  long extraout_x12_25;
  long extraout_x12_26;
  long extraout_x12_27;
  long extraout_x12_28;
  long extraout_x12_29;
  long extraout_x12_30;
  long extraout_x12_31;
  long extraout_x12_32;
  long extraout_x12_33;
  long extraout_x12_34;
  long extraout_x12_35;
  long extraout_x12_36;
  long extraout_x12_37;
  long extraout_x13;
  undefined8 extraout_x14;
  undefined8 extraout_x15;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
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
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  ulong uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  
  lVar1 = 0;
  lStack_88 = param_2;
  uStack_80 = param_3;
  func_0x000107c5eea4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar24 = (long)&lStack_1a0 + (-extraout_x12 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar24 - extraout_x12_00;
  lVar16 = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (lVar6 - extraout_x12_01) - extraout_x12_02;
  lVar17 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12_03;
  lVar6 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12_04;
  lVar14 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12_05;
  lVar12 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12_06;
  lStack_b8 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12_07;
  lStack_90 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12_08;
  lStack_c0 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12_09;
  lStack_98 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12_10;
  lStack_c8 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12_11;
  lStack_a0 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12_12;
  lStack_d0 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12_13;
  lStack_a8 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12_14;
  lStack_d8 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12_15;
  lStack_b0 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12_16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar9 - extraout_x12_17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar18 - extraout_x12_18;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (lVar18 - extraout_x12_18) - extraout_x12_19;
  lVar11 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_20;
  lStack_e8 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_21;
  lStack_e0 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_22;
  lStack_f8 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_23;
  lStack_f0 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_24;
  lStack_108 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_25;
  lStack_100 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_26;
  lStack_118 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_27;
  lStack_110 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_28;
  lStack_128 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_29;
  lStack_120 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_30;
  lStack_138 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_31;
  lStack_130 = lVar10;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar10 - extraout_x12_32;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_140 = lVar10 - extraout_x12_33;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = (lVar10 - extraout_x12_33) - extraout_x12_34;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar20 - extraout_x12_35;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar21 = lVar19 - extraout_x12_36;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar22 = lVar21 - extraout_x12_37;
  if (2 < param_4) {
    return (undefined *)0x0;
  }
  lVar2 = 0;
  lStack_1a0 = lVar13;
  lStack_198 = lVar11;
  lStack_190 = lVar14;
  lStack_188 = lVar12;
  lStack_180 = lVar17;
  lStack_178 = lVar6;
  lStack_170 = lVar16;
  uStack_168 = extraout_x15;
  uStack_160 = extraout_x14;
  lStack_158 = lVar1;
  lStack_150 = extraout_x13;
  FUN_103775888();
  lVar16 = *(long *)(param_5 + *(int *)(lVar2 + 0x14));
  if (lVar16 == 0) {
    return (undefined *)0x0;
  }
  if (*(long *)(lVar16 + 0x10) == 0) {
    return (undefined *)0x0;
  }
  lStack_148 = param_5;
  func_0x000107c61434(lVar16);
  lVar6 = lStack_88;
  uVar3 = uStack_80;
  func_0x000100029284();
  if ((uVar3 & 1) == 0) {
    func_0x000107c6142c(lVar16);
    return (undefined *)0x0;
  }
  uVar3 = *(ulong *)(*(long *)(lVar16 + 0x38) + lVar6 * 8);
  lStack_88 = lVar24;
  func_0x000107c61174();
  func_0x000107c6142c(lVar16);
  puStack_70 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar6 = *(long *)(lStack_148 + *(int *)(lVar2 + 0x18));
  lVar17 = *(long *)(lVar6 + 0x10);
  uStack_80 = uVar3;
  func_0x000107c4a99c();
  func_0x000107c61180();
  lVar16 = lStack_158;
  puVar15 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (lVar17 == 0) {
    lVar6 = lStack_150;
    if (uVar3 != 0) {
      func_0x000107c5ee94(lVar21);
      func_0x000107c61170(uVar3);
      (**(code **)(lStack_150 + 0x20))(lVar22,lVar21,lVar16);
      func_0x000107c5ee68(lVar22);
      puVar4 = puVar15;
      uVar5 = param_1;
      func_0x000107c61558(puVar15);
      puStack_78 = puVar15;
      FUN_10377c65c(param_1,0,1,0x28,puVar4);
      puVar15 = puStack_78;
      puStack_70 = puStack_78;
      (**(code **)(lStack_150 + 8))(lVar22,lVar16);
      lVar6 = lStack_150;
      param_1 = uVar5;
    }
    uVar23 = uStack_80;
    uVar3 = uStack_80;
    func_0x000107c4a9a0();
    func_0x000107c61180();
    uVar5 = param_1;
    if (uVar3 != 0) {
      func_0x000107c5ee94(lVar20);
      func_0x000107c61170(uVar3);
      (**(code **)(lVar6 + 0x20))(lVar19,lVar20,lVar16);
      func_0x000107c5ee68(lVar19);
      puVar4 = puVar15;
      uVar5 = param_1;
      func_0x000107c61558(puVar15);
      puStack_78 = puVar15;
      FUN_10377c65c(param_1,0,1,0x29,puVar4);
      puVar15 = puStack_78;
      puStack_70 = puStack_78;
      (**(code **)(lVar6 + 8))(lVar19,lVar16);
    }
    uVar3 = uVar23;
    func_0x000107c4a9a4();
    func_0x000107c61180();
    uVar7 = uVar5;
    if (uVar3 != 0) {
      func_0x000107c5ee94(lVar10);
      func_0x000107c61170(uVar3);
      lVar17 = lStack_140;
      (**(code **)(lVar6 + 0x20))(lStack_140,lVar10,lVar16);
      func_0x000107c5ee68(lVar17);
      puVar4 = puVar15;
      uVar7 = uVar5;
      func_0x000107c61558(puVar15);
      puStack_78 = puVar15;
      FUN_10377c65c(uVar5,0,1,0x2a,puVar4);
      puVar15 = puStack_78;
      puStack_70 = puStack_78;
      (**(code **)(lVar6 + 8))(lVar17,lVar16);
    }
    uVar3 = uVar23;
    func_0x000107c4a9a8();
    func_0x000107c61180();
    lVar17 = lStack_138;
    uVar5 = uVar7;
    if (uVar3 != 0) {
      func_0x000107c5ee94(lStack_138);
      func_0x000107c61170(uVar3);
      lVar11 = lStack_130;
      (**(code **)(lVar6 + 0x20))(lStack_130,lVar17,lVar16);
      func_0x000107c5ee68(lVar11);
      puVar4 = puVar15;
      uVar5 = uVar7;
      func_0x000107c61558(puVar15);
      puStack_78 = puVar15;
      FUN_10377c65c(uVar7,0,1,0x2b,puVar4);
      puVar15 = puStack_78;
      puStack_70 = puStack_78;
      (**(code **)(lVar6 + 8))(lVar11,lVar16);
    }
    uVar3 = uVar23;
    func_0x000107c4a9b0();
    func_0x000107c61180();
    lVar17 = lStack_128;
    uVar7 = uVar5;
    if (uVar3 != 0) {
      func_0x000107c5ee94(lStack_128);
      func_0x000107c61170(uVar3);
      lVar11 = lStack_120;
      (**(code **)(lVar6 + 0x20))(lStack_120,lVar17,lVar16);
      func_0x000107c5ee68(lVar11);
      puVar4 = puVar15;
      uVar7 = uVar5;
      func_0x000107c61558(puVar15);
      puStack_78 = puVar15;
      FUN_10377c65c(uVar5,0,1,0x2c,puVar4);
      puVar15 = puStack_78;
      puStack_70 = puStack_78;
      (**(code **)(lVar6 + 8))(lVar11,lVar16);
    }
    uVar3 = uVar23;
    func_0x000107c4aa74();
    func_0x000107c61180();
    lVar17 = lStack_118;
    uVar5 = uVar7;
    if (uVar3 != 0) {
      func_0x000107c5ee94(lStack_118);
      func_0x000107c61170(uVar3);
      lVar11 = lStack_110;
      (**(code **)(lVar6 + 0x20))(lStack_110,lVar17,lVar16);
      func_0x000107c5ee68(lVar11);
      puVar4 = puVar15;
      uVar5 = uVar7;
      func_0x000107c61558(puVar15);
      puStack_78 = puVar15;
      FUN_10377c65c(uVar7,0,1,0x2d,puVar4);
      puVar15 = puStack_78;
      puStack_70 = puStack_78;
      (**(code **)(lVar6 + 8))(lVar11,lVar16);
    }
    uVar3 = uVar23;
    func_0x000107c4aa60();
    func_0x000107c61180();
    lVar17 = lStack_108;
    uVar7 = uVar5;
    if (uVar3 != 0) {
      func_0x000107c5ee94(lStack_108);
      func_0x000107c61170(uVar3);
      lVar11 = lStack_100;
      (**(code **)(lVar6 + 0x20))(lStack_100,lVar17,lVar16);
      func_0x000107c5ee68(lVar11);
      puVar4 = puVar15;
      uVar7 = uVar5;
      func_0x000107c61558(puVar15);
      puStack_78 = puVar15;
      FUN_10377c65c(uVar5,0,1,0x2e,puVar4);
      puVar15 = puStack_78;
      puStack_70 = puStack_78;
      (**(code **)(lVar6 + 8))(lVar11,lVar16);
    }
    uVar3 = uVar23;
    func_0x000107c4aa64();
    func_0x000107c61180();
    lVar17 = lStack_f8;
    uVar5 = uVar7;
    if (uVar3 != 0) {
      func_0x000107c5ee94(lStack_f8);
      func_0x000107c61170(uVar3);
      lVar11 = lStack_f0;
      (**(code **)(lVar6 + 0x20))(lStack_f0,lVar17,lVar16);
      func_0x000107c5ee68(lVar11);
      puVar4 = puVar15;
      uVar5 = uVar7;
      func_0x000107c61558(puVar15);
      puStack_78 = puVar15;
      FUN_10377c65c(uVar7,0,1,0x2f,puVar4);
      puVar15 = puStack_78;
      puStack_70 = puStack_78;
      (**(code **)(lVar6 + 8))(lVar11,lVar16);
    }
    uVar3 = uVar23;
    func_0x000107c4aa68();
    func_0x000107c61180();
    lVar17 = lStack_e8;
    uVar7 = uVar5;
    if (uVar3 != 0) {
      func_0x000107c5ee94(lStack_e8);
      func_0x000107c61170(uVar3);
      lVar11 = lStack_e0;
      (**(code **)(lVar6 + 0x20))(lStack_e0,lVar17,lVar16);
      func_0x000107c5ee68(lVar11);
      puVar4 = puVar15;
      uVar7 = uVar5;
      func_0x000107c61558(puVar15);
      puStack_78 = puVar15;
      FUN_10377c65c(uVar5,0,1,0x30,puVar4);
      puVar15 = puStack_78;
      puStack_70 = puStack_78;
      (**(code **)(lVar6 + 8))(lVar11,lVar16);
    }
    uVar3 = uVar23;
    func_0x000107c4aa6c();
    func_0x000107c61180();
    lVar17 = lStack_1a0;
    if (uVar3 != 0) {
      func_0x000107c5ee94(lStack_1a0);
      func_0x000107c61170(uVar3);
      lVar11 = lStack_198;
      (**(code **)(lVar6 + 0x20))(lStack_198,lVar17,lVar16);
      func_0x000107c5ee68(lVar11);
      puVar4 = puVar15;
      func_0x000107c61558(puVar15);
      puStack_78 = puVar15;
      FUN_10377c65c(uVar7,0,1,0x31,puVar4);
      puStack_70 = puStack_78;
      (**(code **)(lVar6 + 8))(lVar11,lVar16);
    }
  }
  else {
    lVar17 = lStack_88;
    lVar11 = lStack_150;
    uVar23 = uStack_80;
    if (uVar3 != 0) {
      func_0x000107c5ee94(lVar9);
      func_0x000107c61170(uVar3);
      (**(code **)(lStack_150 + 0x20))(lVar18,lVar9,lVar16);
      uVar3 = 0xd000000000000021;
      func_0x0001000f66f0(0xd000000000000021,0x800000010f163d20,lVar6);
      uVar23 = uStack_80;
      lVar17 = lStack_88;
      puVar15 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      if ((uVar3 & 1) != 0) {
        func_0x000107c5ee68(lVar18);
        puVar4 = puVar15;
        uVar5 = param_1;
        func_0x000107c61558(puVar15);
        puStack_78 = puVar15;
        FUN_10377c65c(param_1,0,1,0x28,puVar4);
        puStack_70 = puStack_78;
        puVar15 = puStack_78;
        param_1 = uVar5;
      }
      (**(code **)(lStack_150 + 8))(lVar18,lVar16);
      lVar11 = lStack_150;
    }
    uVar3 = uVar23;
    func_0x000107c4a9a0();
    func_0x000107c61180();
    lVar12 = lStack_d8;
    if (uVar3 != 0) {
      func_0x000107c5ee94(lStack_d8);
      func_0x000107c61170(uVar3);
      lVar13 = lStack_b0;
      (**(code **)(lVar11 + 0x20))(lStack_b0,lVar12,lVar16);
      uVar3 = 0xd000000000000015;
      func_0x0001000f66f0(0xd000000000000015,0x800000010f163d00,lVar6);
      if ((uVar3 & 1) != 0) {
        func_0x000107c5ee68(lVar13);
        puVar4 = puVar15;
        uVar5 = param_1;
        func_0x000107c61558(puVar15);
        puStack_78 = puVar15;
        FUN_10377c65c(param_1,0,1,0x29,puVar4);
        puStack_70 = puStack_78;
        puVar15 = puStack_78;
        lVar13 = lStack_b0;
        param_1 = uVar5;
      }
      (**(code **)(lVar11 + 8))(lVar13,lVar16);
    }
    uVar3 = uVar23;
    func_0x000107c4a9a4();
    func_0x000107c61180();
    lVar12 = lStack_d0;
    if (uVar3 != 0) {
      func_0x000107c5ee94(lStack_d0);
      func_0x000107c61170(uVar3);
      lVar13 = lStack_a8;
      (**(code **)(lVar11 + 0x20))(lStack_a8,lVar12,lVar16);
      uVar3 = 0xd000000000000021;
      func_0x0001000f66f0(0xd000000000000021,0x800000010f163cd0,lVar6);
      if ((uVar3 & 1) != 0) {
        func_0x000107c5ee68(lVar13);
        puVar4 = puVar15;
        uVar5 = param_1;
        func_0x000107c61558(puVar15);
        puStack_78 = puVar15;
        FUN_10377c65c(param_1,0,1,0x2a,puVar4);
        puStack_70 = puStack_78;
        puVar15 = puStack_78;
        lVar13 = lStack_a8;
        param_1 = uVar5;
      }
      (**(code **)(lVar11 + 8))(lVar13,lVar16);
    }
    uVar3 = uVar23;
    func_0x000107c4a9a8();
    func_0x000107c61180();
    lVar12 = lStack_c8;
    if (uVar3 != 0) {
      func_0x000107c5ee94(lStack_c8);
      func_0x000107c61170(uVar3);
      lVar13 = lStack_a0;
      (**(code **)(lVar11 + 0x20))(lStack_a0,lVar12,lVar16);
      uVar3 = 0xd000000000000015;
      func_0x0001000f66f0(0xd000000000000015,0x800000010f163cb0,lVar6);
      if ((uVar3 & 1) != 0) {
        func_0x000107c5ee68(lVar13);
        puVar4 = puVar15;
        uVar5 = param_1;
        func_0x000107c61558(puVar15);
        puStack_78 = puVar15;
        FUN_10377c65c(param_1,0,1,0x2b,puVar4);
        puStack_70 = puStack_78;
        puVar15 = puStack_78;
        lVar13 = lStack_a0;
        param_1 = uVar5;
      }
      (**(code **)(lVar11 + 8))(lVar13,lVar16);
    }
    uVar3 = uVar23;
    func_0x000107c4a9b0();
    func_0x000107c61180();
    lVar12 = lStack_c0;
    if (uVar3 != 0) {
      func_0x000107c5ee94(lStack_c0);
      func_0x000107c61170(uVar3);
      lVar13 = lStack_98;
      (**(code **)(lVar11 + 0x20))(lStack_98,lVar12,lVar16);
      uVar3 = 0xd000000000000019;
      func_0x0001000f66f0(0xd000000000000019,0x800000010f09a460,lVar6);
      if ((uVar3 & 1) != 0) {
        func_0x000107c5ee68(lVar13);
        puVar4 = puVar15;
        uVar5 = param_1;
        func_0x000107c61558(puVar15);
        puStack_78 = puVar15;
        FUN_10377c65c(param_1,0,1,0x2c,puVar4);
        puStack_70 = puStack_78;
        puVar15 = puStack_78;
        lVar13 = lStack_98;
        param_1 = uVar5;
      }
      (**(code **)(lVar11 + 8))(lVar13,lVar16);
    }
    uVar3 = uVar23;
    func_0x000107c4aa74();
    func_0x000107c61180();
    lVar12 = lStack_b8;
    if (uVar3 != 0) {
      func_0x000107c5ee94(lStack_b8);
      func_0x000107c61170(uVar3);
      lVar13 = lStack_90;
      (**(code **)(lVar11 + 0x20))(lStack_90,lVar12,lVar16);
      uVar3 = 0xd00000000000001b;
      func_0x0001000f66f0(0xd00000000000001b,0x800000010f163c90,lVar6);
      if ((uVar3 & 1) != 0) {
        func_0x000107c5ee68(lVar13);
        puVar4 = puVar15;
        uVar5 = param_1;
        func_0x000107c61558(puVar15);
        puStack_78 = puVar15;
        FUN_10377c65c(param_1,0,1,0x2d,puVar4);
        puStack_70 = puStack_78;
        puVar15 = puStack_78;
        lVar13 = lStack_90;
        param_1 = uVar5;
      }
      (**(code **)(lVar11 + 8))(lVar13,lVar16);
    }
    uVar3 = uVar23;
    func_0x000107c4aa60();
    func_0x000107c61180();
    lVar12 = lStack_190;
    if (uVar3 != 0) {
      func_0x000107c5ee94(lStack_190);
      func_0x000107c61170(uVar3);
      lVar13 = lStack_188;
      (**(code **)(lVar11 + 0x20))(lStack_188,lVar12,lVar16);
      uVar3 = 0xd000000000000021;
      func_0x0001000f66f0(0xd000000000000021,0x800000010f163c60,lVar6);
      if ((uVar3 & 1) != 0) {
        func_0x000107c5ee68(lVar13);
        puVar4 = puVar15;
        uVar5 = param_1;
        func_0x000107c61558(puVar15);
        puStack_78 = puVar15;
        FUN_10377c65c(param_1,0,1,0x2e,puVar4);
        puStack_70 = puStack_78;
        puVar15 = puStack_78;
        param_1 = uVar5;
      }
      (**(code **)(lVar11 + 8))(lVar13,lVar16);
    }
    uVar3 = uVar23;
    func_0x000107c4aa64();
    func_0x000107c61180();
    lVar12 = lStack_180;
    if (uVar3 != 0) {
      func_0x000107c5ee94(lStack_180);
      func_0x000107c61170(uVar3);
      lVar13 = lStack_178;
      (**(code **)(lVar11 + 0x20))(lStack_178,lVar12,lVar16);
      uVar3 = 0xd000000000000015;
      func_0x0001000f66f0(0xd000000000000015,0x800000010f163c40,lVar6);
      if ((uVar3 & 1) != 0) {
        func_0x000107c5ee68(lVar13);
        puVar4 = puVar15;
        uVar5 = param_1;
        func_0x000107c61558(puVar15);
        puStack_78 = puVar15;
        FUN_10377c65c(param_1,0,1,0x2f,puVar4);
        puStack_70 = puStack_78;
        puVar15 = puStack_78;
        param_1 = uVar5;
      }
      (**(code **)(lVar11 + 8))(lVar13,lVar16);
    }
    uVar3 = uVar23;
    func_0x000107c4aa68();
    func_0x000107c61180();
    lVar12 = lStack_170;
    if (uVar3 != 0) {
      func_0x000107c5ee94(lStack_170);
      func_0x000107c61170(uVar3);
      (**(code **)(lVar11 + 0x20))(uStack_168,lVar12,lVar16);
      uVar3 = 0xd000000000000021;
      func_0x0001000f66f0(0xd000000000000021,0x800000010f163c10,lVar6);
      if ((uVar3 & 1) != 0) {
        func_0x000107c5ee68(uStack_168);
        puVar4 = puVar15;
        uVar5 = param_1;
        func_0x000107c61558(puVar15);
        puStack_78 = puVar15;
        FUN_10377c65c(param_1,0,1,0x30,puVar4);
        puStack_70 = puStack_78;
        puVar15 = puStack_78;
        param_1 = uVar5;
      }
      (**(code **)(lVar11 + 8))(uStack_168,lVar16);
    }
    uVar3 = uVar23;
    func_0x000107c4aa6c();
    func_0x000107c61180();
    if (uVar3 != 0) {
      func_0x000107c5ee94(uStack_160);
      func_0x000107c61170(uVar3);
      (**(code **)(lVar11 + 0x20))(lVar17,uStack_160,lVar16);
      uVar3 = 0xd000000000000015;
      func_0x0001000f66f0(0xd000000000000015,0x800000010f163bf0,lVar6);
      if ((uVar3 & 1) != 0) {
        func_0x000107c5ee68(lVar17);
        puVar4 = puVar15;
        func_0x000107c61558(puVar15);
        puStack_78 = puVar15;
        FUN_10377c65c(param_1,0,1,0x31,puVar4);
        puStack_70 = puStack_78;
      }
      (**(code **)(lVar11 + 8))(lVar17,lVar16);
    }
    uVar3 = 0;
    func_0x0001000f66f0(0xd00000000000001e,0x800000010f163bd0,lVar6);
    if ((uVar3 & 1) == 0) goto LAB_103775878;
  }
  uVar3 = uVar23;
  func_0x000107c4aad4();
  if (uVar3 < 6) {
    uVar8 = 0;
    uVar5 = *(undefined8 *)(&UNK_10dc096c8 + uVar3 * 8);
    uVar7 = *(undefined8 *)(&UNK_10dc096f8 + uVar3 * 8);
  }
  else {
    uVar5 = 0;
    uVar7 = 0;
    uVar8 = 0xff;
  }
  FUN_103776d7c(uVar5,uVar7,uVar8,0x32);
LAB_103775878:
  func_0x000107c61170(uVar23);
  return puStack_70;
}



/* Entry: 103775888; end: 103775903;  */

void FUN_103775888(undefined8 param_1)

{
  if (lRam0000000112f911a0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e77b578);
  return;
}



/* Entry: 103775904; end: 10377599f;  */

long * FUN_103775904(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar2 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar2 >> 0x11 & 1) == 0) {
    lVar3 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
    iVar1 = *(int *)(param_3 + 0x18);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar5 = *(undefined8 *)((long)param_2 + (long)iVar1);
    *(undefined8 *)((long)param_1 + (long)iVar1) = uVar5;
    func_0x000107c61434();
    func_0x000107c61434(uVar5);
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar4 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar3 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 1037759a0; end: 1037759ef;  */

/* WARNING: Possible PIC construction at 0x0001037759d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037759dc) */

void FUN_1037759a0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14)));
  return;
}



/* Entry: 1037759f0; end: 103775bc3;  */

long FUN_1037759f0(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,param_2,lVar2);
  iVar1 = *(int *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar3 = *(undefined8 *)(param_2 + iVar1);
  *(undefined8 *)(param_1 + iVar1) = uVar3;
  func_0x000107c61434();
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 103775bc4; end: 103775bdb;  */

void FUN_103775bc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103775bdc; end: 103775c5b;  */

void FUN_103775bdc(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10dc096a8;
    puStack_28 = PTR___sBbWV_11034d660 + 0x40;
    func_0x000107c6153c(param_1,0x100,3,&lStack_38,param_1 + 0x10);
  }
  return;
}



/* Entry: 103775c5c; end: 103775c6b;  */

undefined1  [16] FUN_103775c5c(void)

{
  return ZEXT816(0x110690418);
}



/* Entry: 103775c6c; end: 103775d43;  */

void FUN_103775c6c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  func_0x000107c5eea0();
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar2 = 0;
  FUN_103776998();
  iVar1 = *(int *)(lVar2 + 0x14);
  if (param_4 != 0) {
    lVar3 = param_4;
    func_0x000107c43144();
    func_0x000107c61180();
    if (lVar3 != 0) {
      uVar4 = 0;
      func_0x0001037769d0(0);
      lVar5 = lVar3;
      func_0x000107c5f9e8(lVar3,PTR___sSSN_11034da80,uVar4,PTR___sSSSHsWP_11034da90);
      func_0x000107c61170(lVar3);
      func_0x000107c615e8(param_4);
      goto LAB_103775d1c;
    }
    func_0x000107c615e8(param_4);
  }
  lVar5 = 0;
LAB_103775d1c:
  *(long *)(param_1 + iVar1) = lVar5;
  *(undefined8 *)(param_1 + *(int *)(lVar2 + 0x18)) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 103775d44; end: 103775d67;  */

undefined8 FUN_103775d44(void)

{
  return 6;
}



/* Entry: 103775d68; end: 103776997;  */

undefined * FUN_103775d68(undefined8 param_1,long param_2,ulong param_3,byte param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  long extraout_x12_11;
  long extraout_x12_12;
  long extraout_x12_13;
  long extraout_x12_14;
  long extraout_x12_15;
  long extraout_x12_16;
  long extraout_x12_17;
  long extraout_x13;
  undefined8 extraout_x14;
  undefined8 extraout_x15;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  ulong uStack_70;
  undefined *puStack_68;
  
  uVar1 = 0;
  lStack_78 = param_2;
  uStack_70 = param_3;
  func_0x000107c5eea4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(uVar1 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar20 = (long)&lStack_f0 + (-extraout_x12 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar20 - extraout_x12_00;
  lVar3 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = (lVar9 - extraout_x12_01) - extraout_x12_02;
  lVar12 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_03;
  lVar6 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_04;
  lStack_88 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_05;
  lStack_80 = lVar11;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = lVar11 - extraout_x12_06;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar11 - extraout_x12_07;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar15 - extraout_x12_08;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (lVar15 - extraout_x12_08) - extraout_x12_09;
  lVar9 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar8 - extraout_x12_10;
  lVar10 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar8 - extraout_x12_11;
  lVar7 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar8 - extraout_x12_12;
  lStack_90 = lVar8;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar8 - extraout_x12_13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar8 - extraout_x12_14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar19 = lVar14 - extraout_x12_15;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar19 - extraout_x12_16;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar18 - extraout_x12_17;
  if (param_4 < 3) {
    lVar2 = 0;
    lStack_f0 = lVar8;
    lStack_e8 = lVar10;
    lStack_e0 = lVar7;
    lStack_d8 = lVar9;
    lStack_d0 = lVar13;
    lStack_c8 = lVar12;
    lStack_c0 = lVar6;
    lStack_b8 = lVar3;
    uStack_b0 = extraout_x15;
    uStack_a8 = extraout_x14;
    lStack_a0 = extraout_x13;
    FUN_103776998();
    lVar9 = *(long *)(param_5 + *(int *)(lVar2 + 0x14));
    if ((lVar9 != 0) && (*(long *)(lVar9 + 0x10) != 0)) {
      lStack_98 = param_5;
      func_0x000107c61434(lVar9);
      lVar3 = lStack_78;
      uVar4 = uStack_70;
      func_0x000100029284();
      if ((uVar4 & 1) == 0) {
        func_0x000107c6142c(lVar9);
        return (undefined *)0x0;
      }
      lVar3 = *(long *)(*(long *)(lVar9 + 0x38) + lVar3 * 8);
      lStack_78 = lVar20;
      func_0x000107c61174();
      func_0x000107c6142c(lVar9);
      uStack_70 = *(long *)(lStack_98 + *(int *)(lVar2 + 0x18));
      lVar13 = *(long *)(uStack_70 + 0x10);
      lVar9 = lVar3;
      func_0x000107c4aa64();
      func_0x000107c61180();
      puVar16 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      if (lVar13 == 0) {
        if (lVar9 != 0) {
          func_0x000107c5ee94(lVar18);
          func_0x000107c61170(lVar9);
          lVar9 = lStack_a0;
          uStack_70 = uVar1;
          (**(code **)(lStack_a0 + 0x20))(lVar17,lVar18,uVar1);
          func_0x000107c5ee8c();
          puVar5 = puVar16;
          uVar21 = param_1;
          func_0x000107c61558(puVar16);
          puStack_68 = puVar16;
          FUN_10377c65c(param_1,0,1,0x20,puVar5);
          puVar16 = puStack_68;
          func_0x000107c5ee68(lVar17);
          puVar5 = puVar16;
          param_1 = uVar21;
          func_0x000107c61558(puVar16);
          puStack_68 = puVar16;
          FUN_10377c65c(uVar21,0,1,0x21,puVar5);
          puVar16 = puStack_68;
          uVar1 = uStack_70;
          (**(code **)(lVar9 + 8))(lVar17,uStack_70);
        }
        lVar9 = lVar3;
        func_0x000107c4a9b0();
        func_0x000107c61180();
        if (lVar9 != 0) {
          func_0x000107c5ee94(lVar14);
          func_0x000107c61170(lVar9);
          lVar9 = lStack_a0;
          (**(code **)(lStack_a0 + 0x20))(lVar19,lVar14,uVar1);
          func_0x000107c5ee8c();
          puVar5 = puVar16;
          uVar21 = param_1;
          func_0x000107c61558(puVar16);
          puStack_68 = puVar16;
          FUN_10377c65c(param_1,0,1,0x1e,puVar5);
          puVar16 = puStack_68;
          func_0x000107c5ee68(lVar19);
          puVar5 = puVar16;
          param_1 = uVar21;
          func_0x000107c61558(puVar16);
          puStack_68 = puVar16;
          FUN_10377c65c(uVar21,0,1,0x1f,puVar5);
          puVar16 = puStack_68;
          (**(code **)(lVar9 + 8))(lVar19,uVar1);
        }
        lVar13 = lVar3;
        func_0x000107c4aa80();
        func_0x000107c61180();
        lVar9 = lStack_90;
        if (lVar13 != 0) {
          func_0x000107c5ee94(lStack_90);
          func_0x000107c61170(lVar13);
          lVar6 = lStack_a0;
          lVar13 = lStack_f0;
          (**(code **)(lStack_a0 + 0x20))(lStack_f0,lVar9,uVar1);
          func_0x000107c5ee8c();
          puVar5 = puVar16;
          uVar21 = param_1;
          func_0x000107c61558(puVar16);
          puStack_68 = puVar16;
          FUN_10377c65c(param_1,0,1,0x22,puVar5);
          puVar16 = puStack_68;
          func_0x000107c5ee68(lVar13);
          puVar5 = puVar16;
          param_1 = uVar21;
          func_0x000107c61558(puVar16);
          puStack_68 = puVar16;
          FUN_10377c65c(uVar21,0,1,0x23,puVar5);
          puVar16 = puStack_68;
          (**(code **)(lVar6 + 8))(lVar13,uVar1);
        }
        lVar13 = lStack_d0;
        lVar6 = lVar3;
        func_0x000107c51b10();
        func_0x000107c61180();
        lVar9 = lStack_e8;
        if (lVar6 != 0) {
          func_0x000107c5ee94(lStack_e8);
          func_0x000107c61170(lVar6);
          lVar7 = lStack_a0;
          lVar6 = lStack_e0;
          (**(code **)(lStack_a0 + 0x20))(lStack_e0,lVar9,uVar1);
          func_0x000107c5ee8c();
          puVar5 = puVar16;
          uVar21 = param_1;
          func_0x000107c61558(puVar16);
          puStack_68 = puVar16;
          FUN_10377c65c(param_1,0,1,0x24,puVar5);
          puVar16 = puStack_68;
          func_0x000107c5ee68(lVar6);
          puVar5 = puVar16;
          param_1 = uVar21;
          func_0x000107c61558(puVar16);
          puStack_68 = puVar16;
          FUN_10377c65c(uVar21,0,1,0x25,puVar5);
          puVar16 = puStack_68;
          (**(code **)(lVar7 + 8))(lVar6,uVar1);
        }
        lVar9 = lVar3;
        func_0x000107c423d4();
        func_0x000107c61180();
        if (lVar9 != 0) {
          func_0x000107c5ee94(lVar13);
          func_0x000107c61170(lVar9);
          lVar9 = lStack_d8;
          (**(code **)(lStack_a0 + 0x20))(lStack_d8,lVar13,uVar1);
          func_0x000107c5ee8c();
          puVar5 = puVar16;
          uVar21 = param_1;
          func_0x000107c61558(puVar16);
          puStack_68 = puVar16;
          FUN_10377c65c(param_1,0,1,0x26,puVar5);
          puVar16 = puStack_68;
          func_0x000107c5ee68(lVar9);
          puVar5 = puVar16;
          func_0x000107c61558(puVar16);
          puStack_68 = puVar16;
          FUN_10377c65c(uVar21,0,1,0x27,puVar5);
          func_0x000107c61170(lVar3);
          puVar16 = puStack_68;
          (**(code **)(lStack_a0 + 8))(lVar9,uVar1);
          return puVar16;
        }
      }
      else {
        lVar13 = lStack_a0;
        if (lVar9 != 0) {
          func_0x000107c5ee94(lVar11);
          func_0x000107c61170(lVar9);
          (**(code **)(lStack_a0 + 0x20))(lVar15,lVar11,uVar1);
          uVar4 = 0xd000000000000019;
          func_0x0001000f66f0(0xd000000000000019,0x800000010f163e40,uStack_70);
          puVar16 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
          if ((uVar4 & 1) != 0) {
            func_0x000107c5ee8c();
            puVar5 = puVar16;
            uVar21 = param_1;
            func_0x000107c61558(puVar16);
            puStack_68 = puVar16;
            FUN_10377c65c(param_1,0,1,0x20,puVar5);
            puVar16 = puStack_68;
            func_0x000107c5ee68(lVar15);
            puVar5 = puVar16;
            param_1 = uVar21;
            func_0x000107c61558(puVar16);
            puStack_68 = puVar16;
            FUN_10377c65c(uVar21,0,1,0x21,puVar5);
            puVar16 = puStack_68;
          }
          (**(code **)(lStack_a0 + 8))(lVar15,uVar1);
          lVar13 = lStack_a0;
        }
        lVar7 = lVar3;
        func_0x000107c4a9b0();
        func_0x000107c61180();
        lVar6 = lStack_80;
        lVar9 = lStack_88;
        if (lVar7 != 0) {
          func_0x000107c5ee94(lStack_88);
          func_0x000107c61170(lVar7);
          (**(code **)(lVar13 + 0x20))(lVar6,lVar9,uVar1);
          uVar4 = 0xd00000000000001d;
          func_0x0001000f66f0(0xd00000000000001d,0x800000010f163e80,uStack_70);
          if ((uVar4 & 1) != 0) {
            func_0x000107c5ee8c();
            puVar5 = puVar16;
            uVar21 = param_1;
            func_0x000107c61558(puVar16);
            puStack_68 = puVar16;
            FUN_10377c65c(param_1,0,1,0x1e,puVar5);
            puVar16 = puStack_68;
            func_0x000107c5ee68(lVar6);
            puVar5 = puVar16;
            param_1 = uVar21;
            func_0x000107c61558(puVar16);
            puStack_68 = puVar16;
            FUN_10377c65c(uVar21,0,1,0x1f,puVar5);
            puVar16 = puStack_68;
          }
          (**(code **)(lVar13 + 8))(lVar6,uVar1);
        }
        lVar6 = lVar3;
        func_0x000107c4aa80();
        func_0x000107c61180();
        lVar9 = lStack_c8;
        if (lVar6 != 0) {
          func_0x000107c5ee94(lStack_c8);
          func_0x000107c61170(lVar6);
          lVar6 = lStack_c0;
          (**(code **)(lVar13 + 0x20))(lStack_c0,lVar9,uVar1);
          uVar4 = 0;
          func_0x0001000f66f0(0xd000000000000016,0x800000010f163e00,uStack_70);
          if ((uVar4 & 1) != 0) {
            func_0x000107c5ee8c();
            puVar5 = puVar16;
            uVar21 = param_1;
            func_0x000107c61558(puVar16);
            puStack_68 = puVar16;
            FUN_10377c65c(param_1,0,1,0x22,puVar5);
            puVar16 = puStack_68;
            func_0x000107c5ee68(lVar6);
            puVar5 = puVar16;
            param_1 = uVar21;
            func_0x000107c61558(puVar16);
            puStack_68 = puVar16;
            FUN_10377c65c(uVar21,0,1,0x23,puVar5);
            puVar16 = puStack_68;
          }
          (**(code **)(lVar13 + 8))(lVar6,uVar1);
        }
        lVar6 = lVar3;
        func_0x000107c51b10();
        func_0x000107c61180();
        lVar9 = lStack_b8;
        if (lVar6 != 0) {
          func_0x000107c5ee94(lStack_b8);
          func_0x000107c61170(lVar6);
          (**(code **)(lVar13 + 0x20))(uStack_b0,lVar9,uVar1);
          uVar4 = 0;
          func_0x0001000f66f0(0xd00000000000001e,0x800000010f163db0,uStack_70);
          if ((uVar4 & 1) != 0) {
            func_0x000107c5ee8c();
            puVar5 = puVar16;
            uVar21 = param_1;
            func_0x000107c61558(puVar16);
            puStack_68 = puVar16;
            FUN_10377c65c(param_1,0,1,0x24,puVar5);
            puVar16 = puStack_68;
            func_0x000107c5ee68(uStack_b0);
            puVar5 = puVar16;
            param_1 = uVar21;
            func_0x000107c61558(puVar16);
            puStack_68 = puVar16;
            FUN_10377c65c(uVar21,0,1,0x25,puVar5);
            puVar16 = puStack_68;
          }
          (**(code **)(lVar13 + 8))(uStack_b0,uVar1);
        }
        lVar9 = lVar3;
        func_0x000107c423d4();
        func_0x000107c61180();
        if (lVar9 != 0) {
          func_0x000107c5ee94(uStack_a8);
          func_0x000107c61170(lVar9);
          lVar9 = lStack_78;
          (**(code **)(lVar13 + 0x20))(lStack_78,uStack_a8,uVar1);
          uVar4 = 0xd000000000000029;
          func_0x0001000f66f0(0xd000000000000029,0x800000010f163d50,uStack_70);
          if ((uVar4 & 1) != 0) {
            func_0x000107c5ee8c();
            puVar5 = puVar16;
            uVar21 = param_1;
            func_0x000107c61558(puVar16);
            puStack_68 = puVar16;
            FUN_10377c65c(param_1,0,1,0x26,puVar5);
            puVar16 = puStack_68;
            func_0x000107c5ee68(lVar9);
            puVar5 = puVar16;
            func_0x000107c61558(puVar16);
            puStack_68 = puVar16;
            FUN_10377c65c(uVar21,0,1,0x27,puVar5);
            func_0x000107c61170(lVar3);
            puVar16 = puStack_68;
            (**(code **)(lVar13 + 8))(lVar9,uVar1);
            return puVar16;
          }
          (**(code **)(lVar13 + 8))(lVar9,uVar1);
        }
      }
      func_0x000107c61170(lVar3);
      return puVar16;
    }
  }
  return (undefined *)0x0;
}



/* Entry: 103776998; end: 103776a13;  */

void FUN_103776998(undefined8 param_1)

{
  if (lRam0000000112f91268 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e77b5bc);
  return;
}



/* Entry: 103776a14; end: 103776aaf;  */

long * FUN_103776a14(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar2 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar2 >> 0x11 & 1) == 0) {
    lVar3 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
    iVar1 = *(int *)(param_3 + 0x18);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar5 = *(undefined8 *)((long)param_2 + (long)iVar1);
    *(undefined8 *)((long)param_1 + (long)iVar1) = uVar5;
    func_0x000107c61434();
    func_0x000107c61434(uVar5);
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar4 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar3 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 103776ab0; end: 103776aff;  */

/* WARNING: Possible PIC construction at 0x000103776ae8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103776aec) */

void FUN_103776ab0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14)));
  return;
}



/* Entry: 103776b00; end: 103776cd3;  */

long FUN_103776b00(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,param_2,lVar2);
  iVar1 = *(int *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar3 = *(undefined8 *)(param_2 + iVar1);
  *(undefined8 *)(param_1 + iVar1) = uVar3;
  func_0x000107c61434();
  func_0x000107c61434(uVar3);
  return param_1;
}



/* Entry: 103776cd4; end: 103776ceb;  */

void FUN_103776cd4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103776cec; end: 103776d6b;  */

void FUN_103776cec(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10dc09760;
    puStack_28 = PTR___sBbWV_11034d660 + 0x40;
    func_0x000107c6153c(param_1,0x100,3,&lStack_38,param_1 + 0x10);
  }
  return;
}



/* Entry: 103776d6c; end: 103776d7b;  */

undefined1  [16] FUN_103776d6c(void)

{
  return ZEXT816(0x110690448);
}



/* Entry: 103776d7c; end: 103776e77;  */

void FUN_103776d7c(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  long *unaff_x20;
  long lVar4;
  
  lVar4 = *unaff_x20;
  if ((((uint)param_3 ^ 0xffffffff) & 0xff) == 0) {
    func_0x000107c61434(lVar4);
    FUN_10378df40();
    func_0x000107c6142c(lVar4);
    if ((param_2 & 1) != 0) {
      iVar1 = (int)*unaff_x20;
      func_0x000107c61558();
      lVar4 = *unaff_x20;
      if (iVar1 == 0) {
        func_0x00010378ee28();
      }
      puVar3 = (undefined8 *)(*(long *)(lVar4 + 0x38) + param_4 * 0x18);
      FUN_10376df18(*puVar3,puVar3[1],*(undefined1 *)(puVar3 + 2));
      FUN_10376a500(param_4,lVar4);
      *unaff_x20 = lVar4;
    }
  }
  else {
    func_0x000107c61558(lVar4);
    lVar2 = *unaff_x20;
    FUN_10377c65c(param_1,param_2,param_3,param_4,lVar4);
    *unaff_x20 = lVar2;
  }
  return;
}



/* Entry: 103776e78; end: 103776e7f;  */

undefined8 FUN_103776e78(void)

{
  return 8;
}



/* Entry: 103776e80; end: 103776eb7;  */

void FUN_103776e80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x000107c5eea0();
  lVar1 = 0;
  FUN_103777388();
  *(undefined8 *)(param_1 + *(int *)(lVar1 + 0x14)) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 103776eb8; end: 103776ecf;  */

/* WARNING: Type propagation algorithm not settling */

undefined * FUN_103776eb8(undefined8 param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined1 *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_80 [12];
  uint uStack_74;
  long lStack_70;
  undefined *puStack_68;
  
  lVar7 = param_2[4];
  lVar9 = *param_2;
  uStack_74 = (uint)*(byte *)(param_2 + 5);
  lVar2 = 0;
  func_0x000107c5eea4(0,lVar7);
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar10 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = (long)puVar10 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar16 = lVar14 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = lVar16 - extraout_x12_01;
  lVar3 = 0;
  FUN_103777388();
  lVar13 = *(long *)(param_3 + *(int *)(lVar3 + 0x14));
  lVar3 = *(long *)(lVar13 + 0x10);
  lStack_70 = lVar9;
  func_0x000106c877c8();
  func_0x000107c61180();
  puVar11 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (lVar3 == 0) {
    if (lVar9 != 0) {
      func_0x000107c5ee94(lVar16,lVar9);
      func_0x000107c61170(lVar9);
      (**(code **)(lVar12 + 0x20))(lVar15,lVar16,lVar2);
      func_0x000107c5ee8c();
      puVar5 = puVar11;
      uVar6 = param_1;
      func_0x000107c61558(puVar11);
      puStack_68 = puVar11;
      FUN_10377c65c(param_1,0,1,2,puVar5);
      puVar11 = puStack_68;
      func_0x000107c5ee68(lVar15);
      puVar5 = puVar11;
      func_0x000107c61558(puVar11);
      puStack_68 = puVar11;
      FUN_10377c65c(uVar6,0,1,3,puVar5);
      puVar11 = puStack_68;
      (**(code **)(lVar12 + 8))(lVar15,lVar2);
      lVar7 = lVar2;
    }
    lVar2 = lStack_70;
    func_0x000106c872b0();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      lVar2 = lVar7;
      func_0x000107c5fb1c(lVar3,lVar7);
      func_0x000107c6142c(lVar7);
      puVar5 = puVar11;
      func_0x000107c61558(puVar11);
      puStack_68 = puVar11;
      FUN_10377c65c(lVar3,lVar2,0,1,puVar5);
      puVar11 = puStack_68;
    }
  }
  else {
    if (lVar9 != 0) {
      func_0x000107c5ee94(puVar10,lVar9);
      func_0x000107c61170(lVar9);
      (**(code **)(lVar12 + 0x20))(lVar14,puVar10,lVar2);
      uVar4 = 0;
      func_0x0001000f66f0(0xd000000000000012,0x800000010f163f70,lVar13);
      puVar11 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      if ((uVar4 & 1) != 0) {
        func_0x000107c5ee8c();
        puVar5 = puVar11;
        uVar6 = param_1;
        func_0x000107c61558(puVar11);
        puStack_68 = puVar11;
        FUN_10377c65c(param_1,0,1,2,puVar5);
        puVar11 = puStack_68;
        func_0x000107c5ee68(lVar14);
        puVar5 = puVar11;
        func_0x000107c61558(puVar11);
        puStack_68 = puVar11;
        FUN_10377c65c(uVar6,0,1,3,puVar5);
        puVar11 = puStack_68;
      }
      (**(code **)(lVar12 + 8))(lVar14,lVar2);
      lVar7 = lVar2;
    }
    lVar2 = lStack_70;
    func_0x000106c872b0();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      uVar4 = 0xd000000000000015;
      func_0x0001000f66f0(0xd000000000000015,0x800000010f163fb0,lVar13);
      if ((uVar4 & 1) == 0) {
        func_0x000107c6142c(lVar7);
      }
      else {
        lVar2 = lVar7;
        func_0x000107c5fb1c(lVar3,lVar7);
        func_0x000107c6142c(lVar7);
        puVar5 = puVar11;
        func_0x000107c61558(puVar11);
        puStack_68 = puVar11;
        FUN_10377c65c(lVar3,lVar2,0,1,puVar5);
        puVar11 = puStack_68;
      }
    }
    uVar4 = 0;
    func_0x0001000f66f0(0x6e65697069636572,0xed00006570795474,lVar13);
    if ((uVar4 & 1) == 0) {
      return puVar11;
    }
  }
  uVar1 = uStack_74 & 0xff;
  puVar5 = puVar11;
  if (uVar1 < 2) {
    if (uVar1 == 0) {
      func_0x000107c61558(puVar11);
      uVar6 = 0x7461686370616e73;
      uVar8 = 0xeb00000000726574;
    }
    else {
      func_0x000107c61558(puVar11);
      uVar6 = 0x70756f7267;
      uVar8 = 0xe500000000000000;
    }
  }
  else {
    if (uVar1 != 2) {
      return puVar11;
    }
    func_0x000107c61558(puVar11);
    uVar6 = 0x746361746e6f63;
    uVar8 = 0xe700000000000000;
  }
  puStack_68 = puVar11;
  FUN_10377c65c(uVar6,uVar8,0,4,puVar5);
  return puStack_68;
}



/* Entry: 103776ed0; end: 103777387;  */

/* WARNING: Type propagation algorithm not settling */

undefined * FUN_103776ed0(undefined8 param_1,long param_2,long param_3,uint param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined1 *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_80 [12];
  uint uStack_74;
  long lStack_70;
  undefined *puStack_68;
  
  lVar2 = 0;
  uStack_74 = param_4;
  func_0x000107c5eea4();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  puVar8 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar12 = (long)puVar8 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar12 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar14 - extraout_x12_01;
  lVar3 = 0;
  FUN_103777388();
  lVar11 = *(long *)(param_5 + *(int *)(lVar3 + 0x14));
  lVar3 = *(long *)(lVar11 + 0x10);
  lStack_70 = param_2;
  func_0x000106c877c8();
  func_0x000107c61180();
  puVar9 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (lVar3 == 0) {
    if (param_2 != 0) {
      func_0x000107c5ee94(lVar14,param_2);
      func_0x000107c61170(param_2);
      (**(code **)(lVar10 + 0x20))(lVar13,lVar14,lVar2);
      func_0x000107c5ee8c();
      puVar5 = puVar9;
      uVar6 = param_1;
      func_0x000107c61558(puVar9);
      puStack_68 = puVar9;
      FUN_10377c65c(param_1,0,1,2,puVar5);
      puVar9 = puStack_68;
      func_0x000107c5ee68(lVar13);
      puVar5 = puVar9;
      func_0x000107c61558(puVar9);
      puStack_68 = puVar9;
      FUN_10377c65c(uVar6,0,1,3,puVar5);
      puVar9 = puStack_68;
      (**(code **)(lVar10 + 8))(lVar13,lVar2);
      param_3 = lVar2;
    }
    lVar2 = lStack_70;
    func_0x000106c872b0();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      lVar2 = param_3;
      func_0x000107c5fb1c(lVar3,param_3);
      func_0x000107c6142c(param_3);
      puVar5 = puVar9;
      func_0x000107c61558(puVar9);
      puStack_68 = puVar9;
      FUN_10377c65c(lVar3,lVar2,0,1,puVar5);
      puVar9 = puStack_68;
    }
  }
  else {
    if (param_2 != 0) {
      func_0x000107c5ee94(puVar8,param_2);
      func_0x000107c61170(param_2);
      (**(code **)(lVar10 + 0x20))(lVar12,puVar8,lVar2);
      uVar4 = 0;
      func_0x0001000f66f0(0xd000000000000012,0x800000010f163f70,lVar11);
      puVar9 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      if ((uVar4 & 1) != 0) {
        func_0x000107c5ee8c();
        puVar5 = puVar9;
        uVar6 = param_1;
        func_0x000107c61558(puVar9);
        puStack_68 = puVar9;
        FUN_10377c65c(param_1,0,1,2,puVar5);
        puVar9 = puStack_68;
        func_0x000107c5ee68(lVar12);
        puVar5 = puVar9;
        func_0x000107c61558(puVar9);
        puStack_68 = puVar9;
        FUN_10377c65c(uVar6,0,1,3,puVar5);
        puVar9 = puStack_68;
      }
      (**(code **)(lVar10 + 8))(lVar12,lVar2);
      param_3 = lVar2;
    }
    lVar2 = lStack_70;
    func_0x000106c872b0();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      uVar4 = 0xd000000000000015;
      func_0x0001000f66f0(0xd000000000000015,0x800000010f163fb0,lVar11);
      if ((uVar4 & 1) == 0) {
        func_0x000107c6142c(param_3);
      }
      else {
        lVar2 = param_3;
        func_0x000107c5fb1c(lVar3,param_3);
        func_0x000107c6142c(param_3);
        puVar5 = puVar9;
        func_0x000107c61558(puVar9);
        puStack_68 = puVar9;
        FUN_10377c65c(lVar3,lVar2,0,1,puVar5);
        puVar9 = puStack_68;
      }
    }
    uVar4 = 0;
    func_0x0001000f66f0(0x6e65697069636572,0xed00006570795474,lVar11);
    if ((uVar4 & 1) == 0) {
      return puVar9;
    }
  }
  uVar1 = uStack_74 & 0xff;
  puVar5 = puVar9;
  if (uVar1 < 2) {
    if (uVar1 == 0) {
      func_0x000107c61558(puVar9);
      uVar6 = 0x7461686370616e73;
      uVar7 = 0xeb00000000726574;
    }
    else {
      func_0x000107c61558(puVar9);
      uVar6 = 0x70756f7267;
      uVar7 = 0xe500000000000000;
    }
  }
  else {
    if (uVar1 != 2) {
      return puVar9;
    }
    func_0x000107c61558(puVar9);
    uVar6 = 0x746361746e6f63;
    uVar7 = 0xe700000000000000;
  }
  puStack_68 = puVar9;
  FUN_10377c65c(uVar6,uVar7,0,4,puVar5);
  return puStack_68;
}



/* Entry: 103777388; end: 1037773bf;  */

void FUN_103777388(undefined8 param_1)

{
  if (lRam0000000112f91328 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e77b600);
  return;
}



/* Entry: 1037773c0; end: 10377744b;  */

long * FUN_1037773c0(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar2 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,param_2,lVar2);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    func_0x000107c61434();
  }
  else {
    lVar2 = *param_2;
    *param_1 = lVar2;
    uVar3 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar2 + (uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 10377744c; end: 10377748f;  */

void FUN_10377744c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14)));
  return;
}



/* Entry: 103777490; end: 10377761b;  */

long FUN_103777490(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,param_2,lVar1);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  func_0x000107c61434();
  return param_1;
}



/* Entry: 10377761c; end: 103777633;  */

void FUN_10377761c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103777634; end: 103777703;  */

void FUN_103777634(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___sBbWV_11034d660 + 0x40;
    func_0x000107c6153c(param_1,0x100,2,&lStack_30,param_1 + 0x10);
  }
  return;
}



/* Entry: 103777704; end: 1037777cb;  */

undefined8 * FUN_103777704(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  func_0x000107c61434();
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  return param_1;
}



/* Entry: 1037777cc; end: 10377781f;  */

undefined8 * FUN_1037777cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c61170(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 103777820; end: 1037778b7;  */

int FUN_103777820(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1037778b8; end: 103777b0b;  */

/* WARNING: Possible PIC construction at 0x000103777990: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103777994) */
/* WARNING: Removing unreachable block (ram,0x0001037779c4) */
/* WARNING: Removing unreachable block (ram,0x00010377799c) */
/* WARNING: Removing unreachable block (ram,0x0001037779c0) */
/* WARNING: Removing unreachable block (ram,0x000103777b00) */

void FUN_1037778b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  double *pdVar1;
  int iVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  double dVar10;
  undefined *puStack_68;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_7 == 0) {
    puVar8 = *(undefined **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else {
    lVar7 = param_7;
    func_0x000107c3e884();
    func_0x000107c61180();
    func_0x000107c615e8(param_7);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar7 != 0) {
      lVar4 = lVar7;
      func_0x000107c5fc54(lVar7,PTR___sSSN_11034da80);
      func_0x000107c61170(lVar7);
      puStack_68 = puVar8;
      func_0x000103790754(0,0,0);
      puVar9 = puStack_68;
      if (*(long *)(lVar4 + 0x10) != 0) {
        if (*(long *)(lVar4 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x103777b00);
          (*pcVar3)();
        }
        param_3 = *(undefined8 *)(lVar4 + 0x28);
        goto code_r0x000107c61434;
      }
      func_0x000107c6142c(lVar4);
    }
    puVar8 = *(undefined **)(puVar9 + 0x10);
    puVar6 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  PTR___swiftEmptyDictionarySingleton_11034f1d0 = puVar6;
  if (puVar8 != (undefined *)0x0) {
    uVar5 = 0x112d5f6c0;
    func_0x0001000285a8(0x112d5f6c0,&UNK_10d93d7c0);
    func_0x000107c60498(puVar8,uVar5);
    puVar6 = puVar8;
  }
  puStack_68 = puVar6;
  FUN_103777b9c(puVar9,1,&puStack_68);
  func_0x000107c6142c(puVar9);
  puVar8 = puStack_68;
  func_0x000107c5eea0(param_1);
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar7 = 0;
  FUN_103779a1c();
  iVar2 = *(int *)(lVar7 + 0x14);
  if (param_6 == 0) {
    dVar10 = 0.0;
  }
  else {
    lVar4 = param_6;
    func_0x000107c5c0d0();
    func_0x000107c615e8(param_6);
    dVar10 = (double)lVar4;
  }
  pdVar1 = (double *)(param_1 + iVar2);
  *pdVar1 = dVar10;
  *(bool *)(pdVar1 + 1) = param_6 == 0;
  *(undefined8 *)(param_1 + *(int *)(lVar7 + 0x18)) = param_3;
  *(undefined **)(param_1 + *(int *)(lVar7 + 0x1c)) = puVar8;
code_r0x000107c61434:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 103777b0c; end: 103777b73;  */

void FUN_103777b0c(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_2 = 1;
  uVar1 = *param_3;
  func_0x000107c61558(uVar1);
  uVar2 = *param_3;
  *param_3 = 0x8000000000000000;
  FUN_10377c65c(1,0,2,0xe,uVar1);
  *param_3 = uVar2;
  return;
}



/* Entry: 103777b74; end: 103777b9b;  */

undefined8 FUN_103777b74(void)

{
  return 5;
}



/* Entry: 103777b9c; end: 103777dff;  */

void FUN_103777b9c(long param_1,uint param_2,long *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 == 0) {
    return;
  }
  uVar2 = *(ulong *)(param_1 + 0x20);
  uVar3 = *(ulong *)(param_1 + 0x28);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  lVar10 = *param_3;
  func_0x000107c61434(uVar3);
  uVar5 = uVar2;
  uVar6 = uVar3;
  func_0x000100029284();
  lVar7 = *(long *)(lVar10 + 0x10);
  uVar8 = (ulong)~(uint)uVar6 & 1;
  lVar11 = lVar7 + uVar8;
  if (SCARRY8(lVar7,uVar8)) {
LAB_103777df8:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x103777dfc);
    (*pcVar4)();
  }
  if (*(long *)(lVar10 + 0x18) < lVar11) {
    func_0x00010113678c(lVar11,param_2 & 1);
    uVar5 = uVar2;
    uVar8 = uVar3;
    func_0x000100029284();
    if (((uint)uVar6 & 1) != ((uint)uVar8 & 1)) {
LAB_103777c44:
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103777c54);
      (*pcVar4)();
    }
  }
  else if ((param_2 & 1) == 0) {
    func_0x000101136368();
    lVar11 = *param_3;
    goto joined_r0x000103777c9c;
  }
  lVar11 = *param_3;
joined_r0x000103777c9c:
  if ((uVar6 & 1) == 0) {
    lVar7 = lVar11 + (uVar5 >> 6) * 8;
    *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar5 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar11 + 0x30) + uVar5 * 0x10);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar5 * 8) = uVar9;
    if (SCARRY8(*(long *)(lVar11 + 0x10),1)) {
LAB_103777dfc:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x103777e00);
      (*pcVar4)();
    }
    *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + 1;
  }
  else {
    uVar9 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar5 * 8);
    func_0x000107c6142c(uVar3);
    *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar5 * 8) = uVar9;
  }
  if (lVar13 != 1) {
    lVar13 = lVar13 + -1;
    puVar12 = (undefined8 *)(param_1 + 0x48);
    do {
      uVar2 = puVar12[-2];
      uVar3 = puVar12[-1];
      uVar9 = *puVar12;
      lVar10 = *param_3;
      func_0x000107c61434(uVar3);
      uVar5 = uVar2;
      uVar6 = uVar3;
      func_0x000100029284();
      lVar7 = *(long *)(lVar10 + 0x10);
      uVar8 = (ulong)~(uint)uVar6 & 1;
      lVar11 = lVar7 + uVar8;
      if (SCARRY8(lVar7,uVar8)) goto LAB_103777df8;
      if (*(long *)(lVar10 + 0x18) < lVar11) {
        func_0x00010113678c(lVar11,1);
        uVar5 = uVar2;
        uVar8 = uVar3;
        func_0x000100029284();
        if (((uint)uVar6 & 1) != ((uint)uVar8 & 1)) goto LAB_103777c44;
      }
      lVar11 = *param_3;
      if ((uVar6 & 1) == 0) {
        lVar7 = lVar11 + (uVar5 >> 6) * 8;
        *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar5 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar11 + 0x30) + uVar5 * 0x10);
        *puVar1 = uVar2;
        puVar1[1] = uVar3;
        *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar5 * 8) = uVar9;
        if (SCARRY8(*(long *)(lVar11 + 0x10),1)) goto LAB_103777dfc;
        *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + 1;
      }
      else {
        uVar9 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar5 * 8);
        func_0x000107c6142c(uVar3);
        *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar5 * 8) = uVar9;
      }
      puVar12 = puVar12 + 3;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  return;
}



/* Entry: 103777e00; end: 103779a1b;  */

undefined *
FUN_103777e00(double param_1,ulong param_2,char param_3,long param_4,ulong param_5,
             undefined *param_6)

{
  double *pdVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x13;
  undefined8 extraout_x14;
  undefined8 extraout_x15;
  code *pcVar21;
  uint uVar22;
  undefined *puVar23;
  ulong uVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  long lVar30;
  undefined8 uVar31;
  undefined *puVar32;
  double dVar33;
  undefined1 auStack_130 [8];
  long lStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long lStack_100;
  undefined1 *puStack_f8;
  long lStack_f0;
  undefined *puStack_e8;
  ulong uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  code *pcStack_c8;
  ulong uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  byte bStack_81;
  undefined *apuStack_80 [2];
  
  lVar3 = 0;
  func_0x000107c5eea4();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar14 = auStack_130 +
            ((-extraout_x12 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)(auStack_130 +
                ((-extraout_x12 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_00)) -
          extraout_x12_01;
  lVar27 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar26 = lVar9 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = lVar26 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = (lVar26 - extraout_x12_04) - extraout_x12_05;
  lVar28 = lVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar17 - extraout_x12_06;
  lVar20 = lVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar17 - extraout_x12_07;
  lVar19 = lVar17;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar17 = lVar17 - extraout_x12_08;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puVar23 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar30 = lVar17 - extraout_x12_09;
  if (param_3 != '\0') {
    return (undefined *)0x0;
  }
  apuStack_80[0] = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  lVar4 = 0;
  lStack_128 = lVar18;
  lStack_120 = lVar28;
  uStack_118 = extraout_x15;
  uStack_110 = extraout_x14;
  lStack_108 = lVar20;
  lStack_100 = lVar19;
  puStack_f8 = puVar14;
  lStack_f0 = lVar27;
  puStack_e8 = param_6;
  uStack_e0 = param_5;
  puStack_d8 = (undefined *)extraout_x13;
  puStack_d0 = (undefined *)lVar3;
  FUN_103779a1c();
  lVar27 = *(long *)(param_4 + *(int *)(lVar4 + 0x18));
  lVar28 = *(long *)(lVar27 + 0x10);
  pcStack_c8 = (code *)lVar4;
  func_0x000107c61174();
  uStack_c0 = param_2;
  if (lVar28 == 0) {
    uVar5 = param_2;
    func_0x000107c5ee70();
    uVar10 = param_2;
    func_0x00010901cdb0(param_2,uVar5);
    func_0x000107c61170(uVar5);
    puVar32 = puVar23;
    func_0x000107c61558(puVar23);
    puStack_b8 = puVar23;
    apuStack_80[0] = (undefined *)0x8000000000000000;
    FUN_10377c65c(uVar10 & 0xffffffff,0,2,9,puVar32);
    puVar23 = puStack_b8;
    uVar5 = param_2;
    func_0x00010901ca64(param_2);
    puVar32 = puVar23;
    func_0x000107c61558(puVar23);
    apuStack_80[0] = (undefined *)0x8000000000000000;
    uVar10 = 0;
    puStack_b8 = puVar23;
    FUN_10377c65c(uVar5 & 0xffffffff,0,2,10,puVar32);
    puVar32 = puStack_b8;
    apuStack_80[0] = puStack_b8;
    func_0x000107c5d984();
    func_0x000107c61180();
    puVar23 = puStack_d0;
    uVar5 = uStack_e0;
    if (param_2 != 0) {
      uVar24 = param_2;
      func_0x000107c5faec();
      func_0x000107c61170(param_2);
      puVar23 = puStack_d0;
      lVar27 = *(long *)(param_4 + *(int *)((long)pcStack_c8 + 0x1c));
      if (*(long *)(lVar27 + 0x10) == 0) {
        func_0x000107c6142c(uVar10);
        uVar5 = uStack_e0;
      }
      else {
        func_0x000107c61434(lVar27);
        uVar11 = uVar10;
        func_0x000100029284();
        uVar5 = uStack_e0;
        if ((uVar11 & 1) == 0) {
          func_0x000107c6142c(uVar10);
          func_0x000107c6142c(lVar27);
        }
        else {
          lVar28 = *(long *)(*(long *)(lVar27 + 0x38) + uVar24 * 8);
          func_0x000107c6142c(uVar10);
          func_0x000107c6142c(lVar27);
          dVar33 = (double)lVar28;
          puVar13 = puVar32;
          param_1 = dVar33;
          func_0x000107c61558(puVar32);
          apuStack_80[0] = (undefined *)0x8000000000000000;
          puStack_b8 = puVar32;
          FUN_10377c65c(dVar33,0,1,0xb,puVar13);
          puVar32 = puStack_b8;
        }
      }
    }
    uVar10 = uStack_c0;
    uVar24 = uStack_c0;
    func_0x000100bf119c(uStack_c0);
    puVar13 = puVar32;
    func_0x000107c61558(puVar32);
    apuStack_80[0] = (undefined *)0x8000000000000000;
    puStack_b8 = puVar32;
    FUN_10377c65c(uVar24 & 0xffffffff,0,2,0xc,puVar13);
    puVar32 = puStack_b8;
    uVar24 = uVar10;
    func_0x00010901c518(uVar10);
    puVar13 = puVar32;
    func_0x000107c61558(puVar32);
    apuStack_80[0] = (undefined *)0x8000000000000000;
    puVar12 = (undefined *)0x0;
    puStack_b8 = puVar32;
    FUN_10377c65c(uVar24 & 0xffffffff,0,2,0xd,puVar13);
    puVar32 = puStack_b8;
    func_0x000107c5d984();
    func_0x000107c61180();
    if (uVar10 == 0) {
      uVar24 = 0;
    }
    else {
      uVar24 = uVar10;
      func_0x000107c5faec();
      func_0x000107c61170(uVar10);
      if ((uVar24 == uVar5) && (puVar12 == puStack_e8)) {
        func_0x000107c6142c(puVar12);
        uVar24 = 1;
      }
      else {
        func_0x000107c605b8(uVar24,puVar12,uVar5,puStack_e8,0);
        func_0x000107c6142c(puVar12);
        uVar24 = uVar24 & 1;
      }
    }
    puVar13 = puVar32;
    func_0x000107c61558(puVar32);
    apuStack_80[0] = (undefined *)0x8000000000000000;
    puStack_b8 = puVar32;
    FUN_10377c65c(uVar24,0,2,0xf,puVar13);
    puVar32 = puStack_b8;
    uVar5 = uStack_c0;
    uVar10 = uStack_c0;
    func_0x000100bec434(uStack_c0);
    puVar13 = puVar32;
    func_0x000107c61558(puVar32);
    apuStack_80[0] = (undefined *)0x8000000000000000;
    puStack_b8 = puVar32;
    FUN_10377c65c(uVar10 & 0xffffffff,0,2,0x10,puVar13);
    puVar32 = puStack_b8;
    uVar10 = uVar5;
    func_0x00010901c54c(uVar5);
    puVar13 = puVar32;
    func_0x000107c61558(puVar32);
    apuStack_80[0] = (undefined *)0x8000000000000000;
    puStack_b8 = puVar32;
    FUN_10377c65c(uVar10 & 0xffffffff,0,2,0x11,puVar13);
    puVar32 = puStack_b8;
    uVar10 = uVar5;
    func_0x00010901c5a4(uVar5);
    puVar13 = puVar32;
    func_0x000107c61558(puVar32);
    apuStack_80[0] = (undefined *)0x8000000000000000;
    puStack_b8 = puVar32;
    FUN_10377c65c(uVar10 & 0xffffffff,0,2,0x12,puVar13);
    puVar32 = puStack_b8;
    apuStack_80[0] = puStack_b8;
    uVar10 = uVar5;
    func_0x00010901d398(uVar5);
    puVar13 = puVar32;
    func_0x000107c61558(puVar32);
    puStack_b8 = puVar32;
    FUN_10377c65c(uVar10 & 0xffffffff,0,2,0x13,puVar13);
    puVar32 = puStack_b8;
    apuStack_80[0] = puStack_b8;
    uVar10 = uVar5;
    func_0x00010901df08(uVar5);
    puVar13 = puVar32;
    func_0x000107c61558(puVar32);
    puStack_b8 = puVar32;
    FUN_10377c65c(uVar10 & 0xffffffff,0,2,0x14,puVar13);
    puVar32 = puStack_b8;
    apuStack_80[0] = puStack_b8;
    uVar10 = uVar5;
    func_0x00010901c684(uVar5);
    puVar13 = puVar32;
    func_0x000107c61558(puVar32);
    puStack_b8 = puVar32;
    FUN_10377c65c(uVar10 & 0xffffffff,0,2,0x15,puVar13);
    apuStack_80[0] = puStack_b8;
    func_0x00010901e044();
    func_0x000107c61180();
    if (uVar5 != 0) {
      func_0x000107c5ee94(lVar17);
      func_0x000107c61170(uVar5);
      puVar32 = puStack_d8;
      (**(code **)((long)puStack_d8 + 0x20))(lVar30,lVar17,puVar23);
      func_0x000107c5ee8c();
      puVar13 = apuStack_80[0];
      dVar33 = param_1;
      func_0x000107c61558(apuStack_80[0]);
      puStack_b8 = apuStack_80[0];
      FUN_10377c65c(param_1,0,1,5,puVar13);
      apuStack_80[0] = puStack_b8;
      func_0x000107c5ee68(lVar30);
      puVar13 = apuStack_80[0];
      param_1 = dVar33;
      func_0x000107c61558(apuStack_80[0]);
      puStack_b8 = apuStack_80[0];
      FUN_10377c65c(dVar33,0,1,6,puVar13);
      apuStack_80[0] = puStack_b8;
      (**(code **)((long)puVar32 + 8))(lVar30,puVar23);
    }
    uVar5 = uStack_c0;
    func_0x00010901e0a4();
    func_0x000107c61180();
    lVar27 = lStack_108;
    if (uVar5 != 0) {
      func_0x000107c5ee94(lStack_108);
      func_0x000107c61170(uVar5);
      lVar28 = lStack_100;
      (**(code **)((long)puStack_d8 + 0x20))(lStack_100,lVar27,puVar23);
      func_0x000107c5ee8c();
      puVar32 = apuStack_80[0];
      dVar33 = param_1;
      func_0x000107c61558(apuStack_80[0]);
      puStack_b8 = apuStack_80[0];
      FUN_10377c65c(param_1,0,1,7,puVar32);
      apuStack_80[0] = puStack_b8;
      func_0x000107c5ee68(lVar28);
      puVar32 = apuStack_80[0];
      param_1 = dVar33;
      func_0x000107c61558(apuStack_80[0]);
      puStack_b8 = apuStack_80[0];
      FUN_10377c65c(dVar33,0,1,8,puVar32);
      apuStack_80[0] = puStack_b8;
      (**(code **)((long)puStack_d8 + 8))(lVar28,puVar23);
    }
    param_2 = uStack_c0;
    pdVar1 = (double *)(param_4 + *(int *)((long)pcStack_c8 + 0x14));
    if (*(char *)(pdVar1 + 1) != '\x01') {
      dVar33 = *pdVar1;
      uVar5 = uStack_c0;
      func_0x00010901db40();
      func_0x000107c61180();
      lVar27 = lStack_128;
      if (uVar5 != 0) {
        func_0x000107c5ee94(lStack_128);
        func_0x000107c61170(uVar5);
        lVar28 = lStack_120;
        (**(code **)((long)puStack_d8 + 0x20))(lStack_120,lVar27,puVar23);
        func_0x000107c5ee68(param_4);
        puVar32 = apuStack_80[0];
        func_0x000107c61558(apuStack_80[0]);
        puStack_b8 = apuStack_80[0];
        FUN_10377c65c(param_1 < dVar33,0,2,0x1d,puVar32);
        apuStack_80[0] = puStack_b8;
        (**(code **)((long)puStack_d8 + 8))(lVar28,puVar23);
      }
    }
    uVar5 = param_2;
    func_0x00010901d924();
    if (0 < (int)uVar5) {
      puVar23 = apuStack_80[0];
      func_0x000107c61558(apuStack_80[0]);
      puStack_b8 = apuStack_80[0];
      FUN_10377c65c((double)(uVar5 & 0xffffffff),0,1,0x1c,puVar23);
      apuStack_80[0] = puStack_b8;
    }
    uVar5 = param_2;
    func_0x000107c439a8();
    func_0x000107c61180();
    if (uVar5 == 0) {
      uVar29 = 0;
      puVar23 = (undefined *)0x0;
      puStack_d0 = (undefined *)0x0;
      pcStack_c8 = (code *)0x0;
      puStack_e8 = (undefined *)0x0;
      uVar31 = 0;
    }
    else {
      bStack_81 = 6;
      uVar10 = param_2;
      func_0x000107c49ac4();
      if ((int)uVar10 == 0) {
        uVar10 = uVar5;
        func_0x000107c5c3a4();
        func_0x000107c61180();
        if (uVar10 == 0) {
          uVar10 = param_2;
          func_0x000107c452e8();
          func_0x000107c61180();
          if (uVar10 == 0) {
            uVar10 = param_2;
            func_0x000107c5c3fc();
            func_0x000107c61180();
            if (uVar10 == 0) goto LAB_103779978;
            uVar16 = 0xe900000000000064;
            uVar25 = 0x6574736567677573;
            func_0x000107c61170();
            puStack_d0 = (undefined *)0x0;
            pcStack_c8 = (code *)0x0;
            uVar31 = 0;
            puStack_e8 = (undefined *)0x0;
            puVar23 = (undefined *)0x0;
            uVar29 = 0;
            bStack_81 = 5;
          }
          else {
            uVar25 = 0x676e696d6f636e69;
            func_0x000107c61170();
            puStack_d0 = (undefined *)0x0;
            pcStack_c8 = (code *)0x0;
            uVar31 = 0;
            puStack_e8 = (undefined *)0x0;
            puVar23 = (undefined *)0x0;
            uVar29 = 0;
            bStack_81 = 4;
            uVar16 = 0xe800000000000000;
          }
          goto LAB_103778924;
        }
        func_0x000107c61170();
        uVar10 = uVar5;
        func_0x000107c5c3a4();
        func_0x000107c61180();
        if (uVar10 != 0) {
          puVar23 = &UNK_110690668;
          func_0x000107c613fc(&UNK_110690668,0x20,7);
          *(byte **)(puVar23 + 0x10) = &bStack_81;
          *(undefined ***)(puVar23 + 0x18) = apuStack_80;
          puVar32 = &UNK_110690690;
          func_0x000107c613fc(&UNK_110690690,0x20,7);
          uVar29 = 0x103779ee0;
          *(undefined8 *)(puVar32 + 0x10) = 0x103779ee0;
          *(undefined **)(puVar32 + 0x18) = puVar23;
          puVar12 = PTR___NSConcreteStackBlock_11034bd00;
          pcStack_98 = (code *)0x103779ee4;
          puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_b0 = 0x42000000;
          puStack_a8 = &UNK_101a7ff58;
          puStack_a0 = &UNK_1106906a8;
          ppuVar6 = &puStack_b8;
          puStack_90 = puVar32;
          func_0x000107c60bc4(ppuVar6);
          func_0x000107c61574(puStack_90);
          puVar32 = &UNK_1106906e0;
          func_0x000107c613fc(&UNK_1106906e0,0x18,7);
          *(byte **)(puVar32 + 0x10) = &bStack_81;
          puVar13 = &UNK_110690708;
          func_0x000107c613fc(&UNK_110690708,0x20,7);
          pcStack_c8 = FUN_103779aa8;
          *(code **)(puVar13 + 0x10) = FUN_103779aa8;
          *(undefined **)(puVar13 + 0x18) = puVar32;
          pcStack_98 = (code *)0x103779ee8;
          puStack_b8 = puVar12;
          uStack_b0 = 0x42000000;
          puStack_a8 = &UNK_101a7ff5c;
          puStack_a0 = &UNK_110690720;
          ppuVar7 = &puStack_b8;
          puStack_e8 = puVar32;
          puStack_90 = puVar13;
          func_0x000107c60bc4(ppuVar7);
          func_0x000107c61574(puStack_90);
          puVar32 = &UNK_110690758;
          func_0x000107c613fc(&UNK_110690758,0x18,7);
          *(byte **)(puVar32 + 0x10) = &bStack_81;
          puVar13 = &UNK_110690780;
          func_0x000107c613fc(&UNK_110690780,0x20,7);
          uVar31 = 0x103779ab8;
          *(undefined8 *)(puVar13 + 0x10) = 0x103779ab8;
          *(undefined **)(puVar13 + 0x18) = puVar32;
          pcStack_98 = (code *)0x103779eec;
          puStack_b8 = puVar12;
          uStack_b0 = 0x42000000;
          puStack_a8 = &UNK_101a7ff60;
          puStack_a0 = &UNK_110690798;
          ppuVar8 = &puStack_b8;
          puStack_d0 = puVar32;
          puStack_90 = puVar13;
          func_0x000107c60bc4(ppuVar8);
          func_0x000107c61574(puStack_90);
          func_0x000107c4c628(uVar10);
          func_0x000107c60bd0(ppuVar8);
          func_0x000107c60bd0(ppuVar7);
          func_0x000107c60bd0(ppuVar6);
          func_0x000107c61170(uVar10);
          if (bStack_81 < 3) {
            if (bStack_81 == 0) goto LAB_103778920;
            if (bStack_81 == 1) {
              uVar16 = 0xe900000000000067;
              uVar25 = 0x6e69776f6c6c6f66;
            }
            else {
              uVar16 = 0xe700000000000000;
              uVar25 = 0x676e69646e6570;
            }
LAB_1037799e8:
            pcStack_c8 = FUN_103779aa8;
          }
          else if (bStack_81 < 5) {
            if (bStack_81 == 3) {
              uVar16 = 0xe600000000000000;
              uVar25 = 0x6c617574756d;
              goto LAB_1037799e8;
            }
            uVar16 = 0xe800000000000000;
            pcStack_c8 = FUN_103779aa8;
            uVar25 = 0x676e696d6f636e69;
          }
          else {
            if (bStack_81 != 5) goto LAB_103778958;
            uVar16 = 0xe900000000000064;
            pcStack_c8 = FUN_103779aa8;
            uVar25 = 0x6574736567677573;
          }
          goto LAB_103778924;
        }
LAB_103779978:
        puStack_d0 = (undefined *)0x0;
        pcStack_c8 = (code *)0x0;
        uVar31 = 0;
        puStack_e8 = (undefined *)0x0;
        puVar23 = (undefined *)0x0;
        uVar29 = 0;
      }
      else {
        puStack_d0 = (undefined *)0x0;
        pcStack_c8 = (code *)0x0;
        uVar31 = 0;
        puStack_e8 = (undefined *)0x0;
        puVar23 = (undefined *)0x0;
        uVar29 = 0;
        bStack_81 = 0;
LAB_103778920:
        uVar25 = 0x64656b636f6c62;
        uVar16 = 0xe700000000000000;
LAB_103778924:
        puVar32 = apuStack_80[0];
        func_0x000107c61558(apuStack_80[0]);
        puStack_b8 = apuStack_80[0];
        FUN_10377c65c(uVar25,uVar16,0,0x17,puVar32);
        apuStack_80[0] = puStack_b8;
      }
LAB_103778958:
      uVar10 = uVar5;
      func_0x000107c4a584(uVar5);
      puVar32 = apuStack_80[0];
      func_0x000107c61558(apuStack_80[0]);
      puStack_b8 = apuStack_80[0];
      FUN_10377c65c(uVar10 & 0xffffffff,0,2,0x18,puVar32);
      apuStack_80[0] = puStack_b8;
      func_0x000107c61170(uVar5);
    }
    uVar5 = param_2;
    func_0x000107c40cdc();
    func_0x000107c61180();
    if (uVar5 == 0) {
      uStack_e0 = 0;
      puStack_d8 = (undefined *)0x0;
      pcVar21 = (code *)0x0;
      puVar32 = (undefined *)0x0;
      uVar25 = 0;
      puVar13 = (undefined *)0x0;
      puVar12 = puStack_e8;
      goto LAB_103779884;
    }
    uVar10 = uVar5;
    func_0x000107c5c970();
    uVar22 = (int)uVar10 - 1;
    if (uVar22 < 3) {
      uVar15 = 0;
      uVar25 = *(undefined8 *)(&UNK_10dc09898 + (ulong)uVar22 * 8);
      uVar16 = *(undefined8 *)(&UNK_10dc098b0 + (ulong)uVar22 * 8);
    }
    else {
      uVar25 = 0;
      uVar16 = 0;
      uVar15 = 0xff;
    }
    FUN_103776d7c(uVar25,uVar16,uVar15,0x16);
    uStack_e0 = 0;
    puStack_d8 = (undefined *)0x0;
    pcVar21 = (code *)0x0;
    puVar32 = (undefined *)0x0;
    uVar25 = 0;
    puVar13 = (undefined *)0x0;
  }
  else {
    uVar5 = 0x6468747269427369;
    func_0x0001000f66f0(0x6468747269427369,0xea00000000007961,lVar27);
    puVar23 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    if ((uVar5 & 1) != 0) {
      func_0x000107c5ee70();
      uVar10 = param_2;
      func_0x00010901cdb0(param_2,uVar5);
      func_0x000107c61170(uVar5);
      puVar32 = puVar23;
      func_0x000107c61558(puVar23);
      puStack_b8 = puVar23;
      apuStack_80[0] = (undefined *)0x8000000000000000;
      FUN_10377c65c(uVar10 & 0xffffffff,0,2,9,puVar32);
      apuStack_80[0] = puStack_b8;
      puVar23 = puStack_b8;
    }
    uVar5 = 0x7246747365427369;
    func_0x0001000f66f0(0x7246747365427369,0xec000000646e6569,lVar27);
    puVar32 = puStack_d0;
    if ((uVar5 & 1) != 0) {
      uVar5 = param_2;
      func_0x00010901ca64(param_2);
      puVar13 = puVar23;
      func_0x000107c61558(puVar23);
      puStack_b8 = puVar23;
      FUN_10377c65c(uVar5 & 0xffffffff,0,2,10,puVar13);
      apuStack_80[0] = puStack_b8;
      puVar23 = puStack_b8;
    }
    uVar5 = 0;
    uVar10 = 0xee006b6e6152646e;
    func_0x0001000f66f0(0x6569724674736562,0xee006b6e6152646e,lVar27);
    if ((uVar5 & 1) != 0) {
      uVar5 = param_2;
      func_0x000107c5d984();
      func_0x000107c61180();
      if (uVar5 != 0) {
        uVar24 = uVar5;
        func_0x000107c5faec();
        func_0x000107c61170(uVar5);
        uVar5 = *(ulong *)(param_4 + *(int *)((long)pcStack_c8 + 0x1c));
        if (*(long *)(uVar5 + 0x10) != 0) {
          func_0x000107c61434(uVar5);
          uVar11 = uVar10;
          func_0x000100029284();
          if ((uVar11 & 1) != 0) {
            lVar28 = *(long *)(*(long *)(uVar5 + 0x38) + uVar24 * 8);
            func_0x000107c6142c(uVar10);
            func_0x000107c6142c(uVar5);
            dVar33 = (double)lVar28;
            puVar32 = puVar23;
            param_1 = dVar33;
            func_0x000107c61558(puVar23);
            puStack_b8 = puVar23;
            FUN_10377c65c(dVar33,0,1,0xb,puVar32);
            apuStack_80[0] = puStack_b8;
            puVar23 = puStack_b8;
            puVar32 = puStack_d0;
            goto LAB_103778c94;
          }
          func_0x000107c6142c(uVar10);
          uVar10 = uVar5;
        }
        func_0x000107c6142c(uVar10);
        puVar32 = puStack_d0;
      }
    }
LAB_103778c94:
    uVar5 = 0x6c617574754d7369;
    func_0x0001000f66f0(0x6c617574754d7369,0xee00646e65697246,lVar27);
    if ((uVar5 & 1) != 0) {
      uVar5 = param_2;
      func_0x000100bf119c(param_2);
      puVar13 = puVar23;
      func_0x000107c61558(puVar23);
      puStack_b8 = puVar23;
      FUN_10377c65c(uVar5 & 0xffffffff,0,2,0xc,puVar13);
      apuStack_80[0] = puStack_b8;
      puVar23 = puStack_b8;
    }
    uVar5 = 0;
    func_0x0001000f66f0(0xd000000000000010,0x800000010f163ef0,lVar27);
    if ((uVar5 & 1) != 0) {
      uVar5 = param_2;
      func_0x00010901c518(param_2);
      puVar13 = puVar23;
      func_0x000107c61558(puVar23);
      puStack_b8 = puVar23;
      FUN_10377c65c(uVar5 & 0xffffffff,0,2,0xd,puVar13);
      apuStack_80[0] = puStack_b8;
      puVar23 = puStack_b8;
    }
    uVar5 = 0x666c65537369;
    puVar13 = (undefined *)0xe600000000000000;
    func_0x0001000f66f0(0x666c65537369,0xe600000000000000,lVar27);
    if ((uVar5 & 1) != 0) {
      uVar5 = param_2;
      func_0x000107c5d984();
      func_0x000107c61180();
      if (uVar5 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = uVar5;
        func_0x000107c5faec();
        func_0x000107c61170(uVar5);
        if ((uVar10 == uStack_e0) && (puVar13 == puStack_e8)) {
          func_0x000107c6142c(puVar13);
          uVar10 = 1;
          puVar32 = puStack_d0;
        }
        else {
          func_0x000107c605b8(uVar10,puVar13,uStack_e0,puStack_e8,0);
          func_0x000107c6142c(puVar13);
          uVar10 = uVar10 & 1;
          puVar32 = puStack_d0;
        }
      }
      puVar13 = puVar23;
      func_0x000107c61558(puVar23);
      puStack_b8 = puVar23;
      FUN_10377c65c(uVar10,0,2,0xf,puVar13);
      apuStack_80[0] = puStack_b8;
      puVar23 = puStack_b8;
    }
    uVar5 = 0x6e536d6165547369;
    func_0x0001000f66f0(0x6e536d6165547369,0xee00746168637061,lVar27);
    if ((uVar5 & 1) != 0) {
      uVar5 = param_2;
      func_0x000100bec434(param_2);
      puVar13 = puVar23;
      func_0x000107c61558(puVar23);
      puStack_b8 = puVar23;
      FUN_10377c65c(uVar5 & 0xffffffff,0,2,0x10,puVar13);
      apuStack_80[0] = puStack_b8;
      puVar23 = puStack_b8;
    }
    uVar5 = 0x6e696c72654d7369;
    func_0x0001000f66f0(0x6e696c72654d7369,0xe800000000000000,lVar27);
    if ((uVar5 & 1) != 0) {
      uVar5 = param_2;
      func_0x00010901c54c(param_2);
      puVar13 = puVar23;
      func_0x000107c61558(puVar23);
      puStack_b8 = puVar23;
      FUN_10377c65c(uVar5 & 0xffffffff,0,2,0x11,puVar13);
      apuStack_80[0] = puStack_b8;
      puVar23 = puStack_b8;
    }
    uVar5 = 0x686370616e537369;
    func_0x0001000f66f0(0x686370616e537369,0xed0000746f427461,lVar27);
    if ((uVar5 & 1) != 0) {
      uVar5 = param_2;
      func_0x00010901c5a4(param_2);
      puVar13 = puVar23;
      func_0x000107c61558(puVar23);
      puStack_b8 = puVar23;
      FUN_10377c65c(uVar5 & 0xffffffff,0,2,0x12,puVar13);
      apuStack_80[0] = puStack_b8;
      puVar23 = puStack_b8;
    }
    uVar5 = 0x7263736275537369;
    func_0x0001000f66f0(0x7263736275537369,0xee00656c62616269,lVar27);
    if ((uVar5 & 1) != 0) {
      uVar5 = param_2;
      func_0x00010901d398(param_2);
      puVar13 = puVar23;
      func_0x000107c61558(puVar23);
      puStack_b8 = puVar23;
      FUN_10377c65c(uVar5 & 0xffffffff,0,2,0x13,puVar13);
      apuStack_80[0] = puStack_b8;
      puVar23 = puStack_b8;
    }
    uVar5 = 0x745370616e537369;
    func_0x0001000f66f0(0x745370616e537369,0xea00000000007261,lVar27);
    if ((uVar5 & 1) != 0) {
      uVar5 = param_2;
      func_0x00010901df08(param_2);
      puVar13 = puVar23;
      func_0x000107c61558(puVar23);
      puStack_b8 = puVar23;
      FUN_10377c65c(uVar5 & 0xffffffff,0,2,0x14,puVar13);
      apuStack_80[0] = puStack_b8;
      puVar23 = puStack_b8;
    }
    uVar5 = 0x725070616e537369;
    func_0x0001000f66f0(0x725070616e537369,0xe90000000000006f,lVar27);
    if ((uVar5 & 1) != 0) {
      uVar5 = param_2;
      func_0x00010901c684(param_2);
      puVar13 = puVar23;
      func_0x000107c61558(puVar23);
      puStack_b8 = puVar23;
      FUN_10377c65c(uVar5 & 0xffffffff,0,2,0x15,puVar13);
      apuStack_80[0] = puStack_b8;
    }
    uVar5 = param_2;
    func_0x00010901e044();
    func_0x000107c61180();
    if (uVar5 != 0) {
      func_0x000107c5ee94(lVar9);
      func_0x000107c61170(uVar5);
      (**(code **)((long)puStack_d8 + 0x20))(lVar26,lVar9,puVar32);
      uVar5 = 0x6e65697246646461;
      func_0x0001000f66f0(0x6e65697246646461,0xec00000065674164,lVar27);
      if ((uVar5 & 1) != 0) {
        func_0x000107c5ee8c();
        puVar23 = apuStack_80[0];
        dVar33 = param_1;
        func_0x000107c61558(apuStack_80[0]);
        puStack_b8 = apuStack_80[0];
        FUN_10377c65c(param_1,0,1,5,puVar23);
        apuStack_80[0] = puStack_b8;
        func_0x000107c5ee68(lVar26);
        puVar23 = apuStack_80[0];
        param_1 = dVar33;
        func_0x000107c61558(apuStack_80[0]);
        puStack_b8 = apuStack_80[0];
        FUN_10377c65c(dVar33,0,1,6,puVar23);
        apuStack_80[0] = puStack_b8;
      }
      (**(code **)((long)puStack_d8 + 8))(lVar26,puVar32);
    }
    uVar5 = param_2;
    func_0x00010901e0a4();
    func_0x000107c61180();
    puVar14 = puStack_f8;
    if (uVar5 != 0) {
      func_0x000107c5ee94(puStack_f8);
      func_0x000107c61170(uVar5);
      lVar28 = lStack_f0;
      (**(code **)((long)puStack_d8 + 0x20))(lStack_f0,puVar14,puVar32);
      uVar5 = 0;
      func_0x0001000f66f0(0xd000000000000010,0x800000010f163f10,lVar27);
      if ((uVar5 & 1) != 0) {
        func_0x000107c5ee8c();
        puVar23 = apuStack_80[0];
        dVar33 = param_1;
        func_0x000107c61558(apuStack_80[0]);
        puStack_b8 = apuStack_80[0];
        FUN_10377c65c(param_1,0,1,7,puVar23);
        apuStack_80[0] = puStack_b8;
        func_0x000107c5ee68(lVar28);
        puVar23 = apuStack_80[0];
        param_1 = dVar33;
        func_0x000107c61558(apuStack_80[0]);
        puStack_b8 = apuStack_80[0];
        FUN_10377c65c(dVar33,0,1,8,puVar23);
        apuStack_80[0] = puStack_b8;
      }
      (**(code **)((long)puStack_d8 + 8))(lVar28,puVar32);
    }
    pdVar1 = (double *)(param_4 + *(int *)((long)pcStack_c8 + 0x14));
    if (*(char *)(pdVar1 + 1) != '\x01') {
      dVar33 = *pdVar1;
      uVar5 = param_2;
      func_0x00010901db40();
      func_0x000107c61180();
      if (uVar5 != 0) {
        func_0x000107c5ee94(uStack_118);
        func_0x000107c61170(uVar5);
        (**(code **)((long)puStack_d8 + 0x20))(uStack_110,uStack_118,puVar32);
        uVar5 = 0;
        func_0x0001000f66f0(0xd000000000000010,0x800000010f163ed0,lVar27);
        if ((uVar5 & 1) != 0) {
          func_0x000107c5ee68(param_4);
          puVar23 = apuStack_80[0];
          func_0x000107c61558(apuStack_80[0]);
          puStack_b8 = apuStack_80[0];
          FUN_10377c65c(param_1 < dVar33,0,2,0x1d,puVar23);
          apuStack_80[0] = puStack_b8;
        }
        (**(code **)((long)puStack_d8 + 8))(uStack_110,puVar32);
      }
    }
    uVar5 = param_2;
    func_0x00010901d924();
    if (0 < (int)uVar5) {
      uVar10 = 0x6f436b6165727473;
      func_0x0001000f66f0(0x6f436b6165727473,0xeb00000000746e75,lVar27);
      if ((uVar10 & 1) != 0) {
        puVar23 = apuStack_80[0];
        func_0x000107c61558(apuStack_80[0]);
        puStack_b8 = apuStack_80[0];
        FUN_10377c65c((double)(uVar5 & 0xffffffff),0,1,0x1c,puVar23);
        apuStack_80[0] = puStack_b8;
      }
    }
    uVar5 = param_2;
    func_0x000107c439a8();
    func_0x000107c61180();
    if (uVar5 == 0) {
      uStack_e0 = 0;
      puStack_d8 = (undefined *)0x0;
      pcVar21 = (code *)0x0;
      puVar32 = (undefined *)0x0;
      uVar25 = 0;
      puVar13 = (undefined *)0x0;
    }
    else {
      bStack_81 = 6;
      uVar10 = param_2;
      func_0x000107c49ac4();
      if ((uVar10 & 1) == 0) {
        uVar10 = uVar5;
        func_0x000107c5c3a4();
        func_0x000107c61180();
        if (uVar10 == 0) {
          uVar10 = param_2;
          func_0x000107c452e8();
          func_0x000107c61180();
          if (uVar10 == 0) {
            uVar10 = param_2;
            func_0x000107c5c3fc();
            func_0x000107c61180();
            if (uVar10 == 0) goto LAB_10377973c;
            uVar22 = 5;
          }
          else {
            uVar22 = 4;
          }
          func_0x000107c61170();
          goto LAB_1037796a4;
        }
        func_0x000107c61170();
        uVar10 = uVar5;
        func_0x000107c5c3a4();
        func_0x000107c61180();
        if (uVar10 != 0) {
          puVar23 = &UNK_110690500;
          func_0x000107c613fc(&UNK_110690500,0x20,7);
          *(byte **)(puVar23 + 0x10) = &bStack_81;
          *(undefined ***)(puVar23 + 0x18) = apuStack_80;
          puVar32 = &UNK_110690528;
          func_0x000107c613fc(&UNK_110690528,0x20,7);
          uStack_e0 = 0x103779a54;
          *(undefined8 *)(puVar32 + 0x10) = 0x103779a54;
          *(undefined **)(puVar32 + 0x18) = puVar23;
          puVar12 = PTR___NSConcreteStackBlock_11034bd00;
          pcStack_98 = (code *)0x103779ed8;
          puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_b0 = 0x42000000;
          puStack_a8 = &UNK_101a7ff58;
          puStack_a0 = &UNK_110690540;
          ppuVar6 = &puStack_b8;
          puStack_d8 = puVar23;
          puStack_90 = puVar32;
          func_0x000107c60bc4(ppuVar6);
          func_0x000107c61574(puStack_90);
          puVar32 = &UNK_110690578;
          func_0x000107c613fc(&UNK_110690578,0x18,7);
          *(byte **)(puVar32 + 0x10) = &bStack_81;
          puVar23 = &UNK_1106905a0;
          func_0x000107c613fc(&UNK_1106905a0,0x20,7);
          *(code **)(puVar23 + 0x10) = FUN_103779ea8;
          *(undefined **)(puVar23 + 0x18) = puVar32;
          pcStack_98 = (code *)0x103779edc;
          puStack_b8 = puVar12;
          uStack_b0 = 0x42000000;
          puStack_a8 = &UNK_101a7ff5c;
          puStack_a0 = &UNK_1106905b8;
          ppuVar7 = &puStack_b8;
          puStack_90 = puVar23;
          func_0x000107c60bc4(ppuVar7);
          func_0x000107c61574(puStack_90);
          puVar13 = &UNK_1106905f0;
          func_0x000107c613fc(&UNK_1106905f0,0x18,7);
          *(byte **)(puVar13 + 0x10) = &bStack_81;
          puVar23 = &UNK_110690618;
          func_0x000107c613fc(&UNK_110690618,0x20,7);
          param_2 = uStack_c0;
          uVar25 = 0x103779eac;
          *(undefined8 *)(puVar23 + 0x10) = 0x103779eac;
          *(undefined **)(puVar23 + 0x18) = puVar13;
          pcStack_98 = FUN_103779a88;
          puStack_b8 = puVar12;
          uStack_b0 = 0x42000000;
          puStack_a8 = &UNK_101a7ff60;
          puStack_a0 = &UNK_110690630;
          ppuVar8 = &puStack_b8;
          puStack_90 = puVar23;
          func_0x000107c60bc4(ppuVar8);
          func_0x000107c61574(puStack_90);
          func_0x000107c4c628(uVar10);
          func_0x000107c60bd0(ppuVar8);
          func_0x000107c60bd0(ppuVar7);
          pcVar21 = FUN_103779ea8;
          func_0x000107c60bd0(ppuVar6);
          func_0x000107c61170(uVar10);
          uVar22 = (uint)bStack_81;
          if (bStack_81 == 6) goto LAB_103779750;
          goto LAB_1037796bc;
        }
LAB_10377973c:
        puVar13 = (undefined *)0x0;
        uVar25 = 0;
        puVar32 = (undefined *)0x0;
        pcVar21 = (code *)0x0;
        uStack_e0 = 0;
        puStack_d8 = (undefined *)0x0;
      }
      else {
        uVar22 = 0;
LAB_1037796a4:
        puVar13 = (undefined *)0x0;
        uVar25 = 0;
        puVar32 = (undefined *)0x0;
        pcVar21 = (code *)0x0;
        uStack_e0 = 0;
        puStack_d8 = (undefined *)0x0;
        bStack_81 = (byte)uVar22;
LAB_1037796bc:
        uVar10 = 0;
        func_0x0001000f66f0(0x694c646e65697266,0xee00657079546b6e,lVar27);
        if ((uVar10 & 1) != 0) {
          uVar31 = *(undefined8 *)(&UNK_10dc09838 + (ulong)uVar22 * 8);
          uVar29 = *(undefined8 *)(&UNK_10dc09868 + (ulong)uVar22 * 8);
          puVar23 = apuStack_80[0];
          func_0x000107c61558(apuStack_80[0]);
          param_2 = uStack_c0;
          puStack_b8 = apuStack_80[0];
          FUN_10377c65c(uVar31,uVar29,0,0x17,puVar23);
          apuStack_80[0] = puStack_b8;
        }
      }
LAB_103779750:
      uVar10 = 0x6572707075537369;
      func_0x0001000f66f0(0x6572707075537369,0xec00000064657373,lVar27);
      if ((uVar10 & 1) != 0) {
        uVar10 = uVar5;
        func_0x000107c4a584(uVar5);
        puVar23 = apuStack_80[0];
        func_0x000107c61558(apuStack_80[0]);
        param_2 = uStack_c0;
        puStack_b8 = apuStack_80[0];
        FUN_10377c65c(uVar10 & 0xffffffff,0,2,0x18,puVar23);
        apuStack_80[0] = puStack_b8;
      }
      func_0x000107c61170(uVar5);
    }
    uVar5 = param_2;
    func_0x000107c40cdc();
    func_0x000107c61180();
    if (uVar5 == 0) {
      uVar29 = 0;
      puVar23 = (undefined *)0x0;
      puStack_d0 = (undefined *)0x0;
      pcStack_c8 = (code *)0x0;
      uVar31 = 0;
      puVar12 = (undefined *)0x0;
      goto LAB_103779884;
    }
    uVar10 = 0x54726f7461657263;
    func_0x0001000f66f0(0x54726f7461657263,0xeb00000000726569,lVar27);
    if ((uVar10 & 1) != 0) {
      uVar10 = uVar5;
      func_0x000107c5c970();
      uVar22 = (int)uVar10 - 1;
      if (uVar22 < 3) {
        uVar16 = 0;
        uVar29 = *(undefined8 *)(&UNK_10dc09898 + (ulong)uVar22 * 8);
        uVar31 = *(undefined8 *)(&UNK_10dc098b0 + (ulong)uVar22 * 8);
      }
      else {
        uVar29 = 0;
        uVar31 = 0;
        uVar16 = 0xff;
      }
      FUN_103776d7c(uVar29,uVar31,uVar16,0x16);
    }
    uVar29 = 0;
    puVar23 = (undefined *)0x0;
    puStack_d0 = (undefined *)0x0;
    pcStack_c8 = (code *)0x0;
    puStack_e8 = (undefined *)0x0;
    uVar31 = 0;
  }
  func_0x000107c61170(uVar5);
  puVar12 = puStack_e8;
LAB_103779884:
  func_0x000107c61170(param_2);
  puVar2 = apuStack_80[0];
  func_0x000100d5d2f0(uVar29,puVar23);
  func_0x000100d5d2f0(pcStack_c8,puVar12);
  func_0x000100d5d2f0(uVar31,puStack_d0);
  func_0x000100d5d2f0(uStack_e0,puStack_d8);
  func_0x000100d5d2f0(pcVar21,puVar32);
  func_0x000100d5d2f0(uVar25,puVar13);
  return puVar2;
}



/* Entry: 103779a1c; end: 103779a6b;  */

void FUN_103779a1c(undefined8 param_1)

{
  if (lRam0000000112f913e0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e77b644);
  return;
}



/* Entry: 103779a6c; end: 103779a87;  */

void FUN_103779a6c(long param_1,long param_2)

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



/* Entry: 103779a88; end: 103779aa7;  */

void FUN_103779a88(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103779aa8; end: 103779ac7;  */

void FUN_103779aa8(void)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 2;
  return;
}



/* Entry: 103779ac8; end: 103779b7f;  */

long * FUN_103779ac8(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    lVar5 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar5 + -8) + 0x10))(param_1,param_2,lVar5);
    iVar3 = *(int *)(param_3 + 0x18);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
    uVar7 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) = uVar7;
    func_0x000107c61434();
    func_0x000107c61434(uVar7);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar6 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar5 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 103779b80; end: 103779bcf;  */

/* WARNING: Possible PIC construction at 0x000103779bb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103779bbc) */

void FUN_103779b80(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*(undefined8 *)(param_1 + *(int *)(param_2 + 0x18)));
  return;
}



/* Entry: 103779bd0; end: 103779e0f;  */

long FUN_103779bd0(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
  iVar3 = *(int *)(param_3 + 0x18);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *(undefined8 *)(param_1 + iVar3) = *(undefined8 *)(param_2 + iVar3);
  uVar5 = *(undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x1c)) = uVar5;
  func_0x000107c61434();
  func_0x000107c61434(uVar5);
  return param_1;
}



/* Entry: 103779e10; end: 103779e27;  */

void FUN_103779e10(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 103779e28; end: 103779ea7;  */

void FUN_103779e28(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &UNK_10dc09800;
    puStack_30 = PTR___sBbWV_11034d660 + 0x40;
    puStack_28 = puStack_30;
    func_0x000107c6153c(param_1,0x100,4,&lStack_40,param_1 + 0x10);
  }
  return;
}



/* Entry: 103779ea8; end: 103779eff;  */

void FUN_103779ea8(void)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 2;
  return;
}



/* Entry: 103779f00; end: 103779f5b;  */

long FUN_103779f00(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103779f5c; end: 10377a02b;  */

undefined8 * FUN_103779f5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  func_0x000107c61174();
  func_0x000107c61174(uVar1);
  func_0x000107c6157c(uVar2);
  return param_1;
}



/* Entry: 10377a02c; end: 10377a03f;  */

void FUN_10377a02c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = *(undefined8 *)((long)param_2 + 0xc);
  *(undefined8 *)((long)param_1 + 0x14) = *(undefined8 *)((long)param_2 + 0x14);
  *(undefined8 *)((long)param_1 + 0xc) = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Entry: 10377a040; end: 10377a093;  */

undefined8 * FUN_10377a040(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61574(uVar1);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  return param_1;
}



/* Entry: 10377a094; end: 10377a163;  */

int FUN_10377a094(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x1c) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10377a164; end: 10377a233;  */

void FUN_10377a164(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined4 *)(unaff_x22 + 0x53c);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x5d0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x5c8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x5c0);
  *(undefined8 *)(unaff_x22 + 0x520) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x528) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x530) = uVar3;
  *(undefined4 *)(unaff_x22 + 0x538) = uVar1;
  uVar2 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  func_0x000107c61418(unaff_x22 + 0x10,0,uVar2,&UNK_10dc09978,unaff_x22 + 0x510,unaff_x22 + 0x598);
  *(undefined8 *)(unaff_x22 + 0x550) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x558) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x560) = uVar3;
  *(undefined4 *)(unaff_x22 + 0x568) = uVar1;
  func_0x000107c61418(unaff_x22 + 0x290,0,uVar2,&UNK_10dc09990,unaff_x22 + 0x540,unaff_x22 + 0x5a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbfff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_get_110350060)
            (unaff_x22 + 0x10,unaff_x22 + 0x598,FUN_10377a234,unaff_x22 + 0x570);
  return;
}



/* Entry: 10377a234; end: 10377a27f;  */

void FUN_10377a234(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x5d8) = *(undefined8 *)(unaff_x22 + 0x598);
  *(undefined8 *)(unaff_x22 + 0x5e0) = *(undefined8 *)(unaff_x22 + 0x5a0);
  func_0x000107c61434();
                    /* WARNING: Could not recover jumptable at 0x00010bdbfff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_get_110350060)
            (unaff_x22 + 0x290,unaff_x22 + 0x5a8,FUN_10377a280,unaff_x22 + 0x570);
  return;
}



/* Entry: 10377a280; end: 10377a293;  */

void FUN_10377a280(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10377a294,0,0);
  return;
}



/* Entry: 10377a294; end: 10377a357;  */

void FUN_10377a294(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  lVar4 = *(long *)(unaff_x22 + 0x5e0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x5a8);
  lVar3 = *(long *)(unaff_x22 + 0x5b0);
  func_0x000107c61434(lVar3);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x5d8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x5b8);
    func_0x000107c5fadc(uVar1,lVar4);
    func_0x000107c6142c(lVar4);
    func_0x000107c52b40(uVar5);
    func_0x000107c61170(uVar1);
  }
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x5b8);
    func_0x000107c5fadc(uVar2,lVar3);
    func_0x000107c6142c(lVar3);
    func_0x000107c53944(uVar1);
    func_0x000107c61170(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbffec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_asyncLet_finish_110350058)
            (unaff_x22 + 0x290,unaff_x22 + 0x5a8,FUN_10377a358,unaff_x22 + 0x570);
  return;
}



/* Entry: 10377a358; end: 10377a39f;  */

void FUN_10377a358(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x10377a36c,0,0);
  return;
}



/* Entry: 10377a3a0; end: 10377a43f;  */

void FUN_10377a3a0(undefined8 param_1,long param_2)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0xb0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x10377a3f0;
  plVar1[0x13] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10377b6c4,0,0);
  return;
}



/* Entry: 10377a440; end: 10377a497;  */

void FUN_10377a440(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0xc0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10377a498;
  plVar1[0x13] = param_3;
  plVar1[0x14] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10377b920,0,0);
  return;
}



/* Entry: 10377a498; end: 10377a4e7;  */

void FUN_10377a498(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10377a4e8,0,0);
  return;
}



/* Entry: 10377a4e8; end: 10377a4ff;  */

void FUN_10377a4e8(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0x28);
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010377a4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10377a500; end: 10377a5a3;  */

void FUN_10377a500(long param_1,undefined8 param_2,long param_3)

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
  **(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28) = param_2;
  func_0x000107c61174(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar3);
  return;
}



/* Entry: 10377a5a4; end: 10377a61b;  */

void FUN_10377a5a4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *unaff_x20;
  long unaff_x22;
  long lVar5;
  
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  lVar5 = unaff_x20[2];
  lVar3 = unaff_x20[3];
  plVar4 = (long *)0x5f0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10377a61c;
  *(int *)((long)plVar4 + 0x53c) = (int)lVar3;
  plVar4[0xba] = lVar5;
  plVar4[0xb9] = lVar2;
  plVar4[0xb8] = lVar1;
  plVar4[0xb7] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10377a164,0,0);
  return;
}



/* Entry: 10377a61c; end: 10377a657;  */

void FUN_10377a61c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010377a654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10377a658; end: 10377a65f;  */

undefined8 FUN_10377a658(void)

{
  return 0;
}



/* Entry: 10377a660; end: 10377a6ef;  */

void FUN_10377a660(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long *plVar2;
  undefined8 *unaff_x20;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *unaff_x20;
  uVar4 = unaff_x20[2];
  uVar1 = *(undefined4 *)(unaff_x20 + 3);
  plVar2 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10377a6f0;
                    /* WARNING: Could not recover jumptable at 0x00010377a6ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  FUN_10377b474(param_1,param_2,uVar3,uVar4,uVar1);
  return;
}



/* Entry: 10377a6f0; end: 10377a733;  */

void FUN_10377a6f0(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010377a730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 10377a734; end: 10377a757;  */

void FUN_10377a734(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10377a758();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10377a758; end: 10377a797;  */

void FUN_10377a758(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91458 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc09920;
  func_0x000107c61520(&DAT_10dc09920,&UNK_110690838);
  puRam0000000112f91458 = puVar1;
  return;
}



/* Entry: 10377a798; end: 10377a813;  */

void FUN_10377a798(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar6;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined4 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x280) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x10377bc0c;
  plVar5[2] = param_1;
  plVar4 = (long *)0xb0;
  func_0x000107c615b8(0xb0,lVar1,uVar2,uVar6,uVar3);
  plVar5[3] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = 0x10377a3f0;
  plVar4[0x13] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10377b6c4,0,0);
  return;
}



/* Entry: 10377a814; end: 10377a88f;  */

void FUN_10377a814(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  long lVar6;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  uVar3 = *(undefined4 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x280) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10377a890;
  plVar5[2] = param_1;
  plVar4 = (long *)0xc0;
  func_0x000107c615b8(0xc0,uVar1,lVar2,lVar6,uVar3);
  plVar5[3] = (long)plVar4;
  *plVar4 = (long)plVar5;
  plVar4[1] = (long)FUN_10377a498;
  plVar4[0x13] = lVar2;
  plVar4[0x14] = lVar6;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10377b920,0,0);
  return;
}



/* Entry: 10377a890; end: 10377a8cb;  */

void FUN_10377a890(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x280));
                    /* WARNING: Could not recover jumptable at 0x00010377a8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10377a8cc; end: 10377a917;  */

/* WARNING: Possible PIC construction at 0x00010377a8f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010377a8fc) */
/* WARNING: Removing unreachable block (ram,0x00010376df2c) */
/* WARNING: Removing unreachable block (ram,0x00010376df38) */
/* WARNING: Removing unreachable block (ram,0x00010376df34) */

void FUN_10377a8cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar2);
  return;
}



/* Entry: 10377a918; end: 10377abef;  */

void FUN_10377a918(long param_1,code *param_2,undefined8 param_3,uint param_4,long *param_5)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  ulong uVar8;
  code *pcVar9;
  bool bVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  uVar16 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar19 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar19 = ~(-1L << (uVar16 & 0x3f));
  }
  uVar19 = uVar19 & *(ulong *)(param_1 + 0x40);
  func_0x000107c61434();
  func_0x000107c6157c(param_3);
  lVar20 = 0;
  while( true ) {
    while (uVar19 != 0) {
      uVar13 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | lVar20 << 6;
      puVar14 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar13 * 0x10);
      uStack_88 = *puVar14;
      uVar4 = puVar14[1];
      puVar14 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar13 * 0x18);
      uVar2 = *puVar14;
      uVar5 = puVar14[1];
      uVar7 = *(undefined1 *)(puVar14 + 2);
      uStack_80 = uVar4;
      uStack_78 = uVar2;
      uStack_70 = uVar5;
      uStack_68 = uVar7;
      func_0x000107c61434(uVar4);
      func_0x00010376df2c(uVar2,uVar5,uVar7);
      (*param_2)(&uStack_b0,&uStack_88);
      func_0x000107c6142c(uVar4);
      func_0x00010376df18(uVar2,uVar5,uVar7);
      uVar7 = uStack_90;
      uVar4 = uStack_98;
      uVar2 = uStack_a0;
      uVar8 = uStack_a8;
      uVar13 = uStack_b0;
      lVar18 = *param_5;
      uVar11 = uStack_b0;
      uVar12 = uStack_a8;
      FUN_10378de14();
      lVar15 = *(long *)(lVar18 + 0x10);
      uVar17 = (ulong)~(uint)uVar12 & 1;
      lVar21 = lVar15 + uVar17;
      if (SCARRY8(lVar15,uVar17)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10377abdc);
        (*pcVar9)();
      }
      if (*(long *)(lVar18 + 0x18) < lVar21) {
        FUN_10378f290(lVar21,param_4 & 1);
        uVar11 = uVar13;
        uVar17 = uVar8;
        FUN_10378de14();
        if (((uint)uVar12 & 1) != ((uint)uVar17 & 1)) {
          func_0x000107c60624(&UNK_11068fd50);
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10377abf0);
          (*pcVar9)();
        }
      }
      else if ((param_4 & 1) == 0) {
        FUN_10378e724();
      }
      uVar19 = uVar19 - 1 & uVar19;
      lVar21 = *param_5;
      if ((uVar12 & 1) == 0) {
        lVar15 = lVar21 + (uVar11 >> 6) * 8;
        *(ulong *)(lVar15 + 0x40) = *(ulong *)(lVar15 + 0x40) | 1L << (uVar11 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar21 + 0x30) + uVar11 * 0x10);
        *puVar1 = uVar13;
        puVar1[1] = uVar8;
        puVar14 = (undefined8 *)(*(long *)(lVar21 + 0x38) + uVar11 * 0x18);
        *puVar14 = uVar2;
        puVar14[1] = uVar4;
        *(undefined1 *)(puVar14 + 2) = uVar7;
        if (SCARRY8(*(long *)(lVar21 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10377abe0);
          (*pcVar9)();
        }
        *(long *)(lVar21 + 0x10) = *(long *)(lVar21 + 0x10) + 1;
      }
      else {
        puVar14 = (undefined8 *)(*(long *)(lVar21 + 0x38) + uVar11 * 0x18);
        uVar5 = *puVar14;
        uVar3 = puVar14[1];
        uVar6 = *(undefined1 *)(puVar14 + 2);
        func_0x00010376df2c(uVar5,uVar3,uVar6);
        func_0x000107c6142c(uVar8);
        func_0x00010376df18(uVar2,uVar4,uVar7);
        puVar14 = (undefined8 *)(*(long *)(lVar21 + 0x38) + uVar11 * 0x18);
        uVar2 = *puVar14;
        uVar4 = puVar14[1];
        *puVar14 = uVar5;
        puVar14[1] = uVar3;
        uVar7 = *(undefined1 *)(puVar14 + 2);
        *(undefined1 *)(puVar14 + 2) = uVar6;
        func_0x00010376df18(uVar2,uVar4,uVar7);
      }
      param_4 = 1;
    }
    bVar10 = SCARRY8(lVar20,1);
    lVar20 = lVar20 + 1;
    if (bVar10) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10377abd8);
      (*pcVar9)();
    }
    if ((long)(uVar16 + 0x3f >> 6) <= lVar20) break;
    uVar19 = ((ulong *)(param_1 + 0x40))[lVar20];
  }
  func_0x000107c61574(param_3);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 10377abf0; end: 10377b473;  */

undefined * FUN_10377abf0(long param_1,long param_2,undefined *param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long extraout_x8;
  ulong *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  undefined1 uVar22;
  long *plVar23;
  ulong uStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  undefined *apuStack_d0 [4];
  long alStack_b0 [5];
  undefined *puStack_88;
  long lStack_80;
  long lStack_70;
  
  puVar3 = (undefined *)0x0;
  lStack_f8 = param_2;
  func_0x000107c5ed50();
  lStack_e0 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e0 + 0x40));
  lVar15 = (long)&uStack_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000d224c(&puStack_88);
  puVar9 = puStack_88;
  puVar4 = puStack_88;
  func_0x000107c614f0();
  (**(code **)(lStack_80 + 0xa8))();
  func_0x000107c615e8(puVar9);
  puVar9 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (((ulong)puVar4 & 1) != 0) {
    func_0x000107c61434(param_3);
    puVar9 = param_3;
  }
  lVar19 = param_1;
  func_0x000107c3f518();
  func_0x000107c61180();
  if (lVar19 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10377b460);
    (*pcVar2)();
  }
  puStack_f0 = puVar3;
  lStack_e8 = param_1;
  func_0x000107c600f4(lVar15);
  func_0x000107c61170(lVar19);
  func_0x000107c5ed4c(&puStack_88);
  puVar3 = PTR___sypN_11034f1a8;
  puVar4 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  while (lStack_70 != 0) {
    func_0x000100102924(&puStack_88,alStack_b0);
    func_0x0001000bb420(alStack_b0,apuStack_d0);
    uVar5 = 0;
    FUN_10377bbb4(0);
    puVar13 = &uStack_d8;
    ppuVar10 = apuStack_d0;
    func_0x000107c6147c(puVar13,ppuVar10,puVar3 + 8,uVar5,6);
    uVar1 = uStack_d8;
    if ((int)puVar13 == 0) {
      func_0x000100183ab8(alStack_b0);
    }
    else {
      uVar21 = uStack_d8;
      func_0x000107c448e0();
      if ((int)uVar21 == 0) {
LAB_10377add8:
        func_0x000100183ab8(alStack_b0);
        func_0x000107c61170(uVar1);
      }
      else {
        uVar21 = uVar1;
        func_0x000107c44fd8();
        func_0x000107c61180();
        if (uVar21 == 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10377b444);
          (*pcVar2)();
        }
        uVar6 = uVar21;
        func_0x000107c407e0();
        func_0x000107c61170(uVar21);
        iVar17 = (int)uVar6;
        if (iVar17 == 3) {
          uVar21 = uVar1;
          func_0x000107c44fd8();
          func_0x000107c61180();
          if (uVar21 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10377b44c);
            (*pcVar2)();
          }
          uVar6 = uVar21;
          func_0x000107c44fd8();
          func_0x000107c61180();
          func_0x000107c61170(uVar21);
          if (uVar6 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10377b448);
            (*pcVar2)();
          }
          uVar22 = 1;
        }
        else if (iVar17 == 2) {
          uVar21 = uVar1;
          func_0x000107c44fd8();
          func_0x000107c61180();
          if (uVar21 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10377b45c);
            (*pcVar2)();
          }
          uVar6 = uVar21;
          func_0x000107c44fd8();
          func_0x000107c61180();
          func_0x000107c61170(uVar21);
          if (uVar6 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10377b458);
            (*pcVar2)();
          }
          uVar22 = 2;
        }
        else {
          if (iVar17 != 1) goto LAB_10377add8;
          uVar21 = uVar1;
          func_0x000107c44fd8();
          func_0x000107c61180();
          if (uVar21 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10377b454);
            (*pcVar2)();
          }
          uVar6 = uVar21;
          func_0x000107c44fd8();
          func_0x000107c61180();
          func_0x000107c61170(uVar21);
          if (uVar6 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10377b450);
            (*pcVar2)();
          }
          uVar22 = 0;
        }
        uVar21 = uVar6;
        func_0x000107c5faec();
        func_0x000107c61170(uVar6);
        puVar7 = puVar9;
        FUN_10376d860();
        if (puVar7 == (undefined *)0x0) {
          func_0x000100183ab8(alStack_b0);
          func_0x00010376573c(uVar21,ppuVar10,uVar22);
          func_0x000107c61170(uVar1);
        }
        else {
          puVar8 = puVar4;
          func_0x000107c61558();
          uStack_100 = CONCAT44(uStack_100._4_4_,(int)puVar8);
          uVar6 = uVar21;
          ppuVar11 = ppuVar10;
          apuStack_d0[0] = puVar4;
          FUN_10378de8c(uVar21,ppuVar10,uVar22);
          uVar14 = (ulong)~(uint)ppuVar11 & 1;
          lVar19 = *(long *)(puVar4 + 0x10) + uVar14;
          if (SCARRY8(*(long *)(puVar4 + 0x10),uVar14)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10377b43c);
            (*pcVar2)();
          }
          if (*(long *)(puVar4 + 0x18) < lVar19) {
            FUN_10378f564(lVar19,uStack_100 & 0xffffffff);
            uVar6 = uVar21;
            ppuVar12 = ppuVar10;
            FUN_10378de8c(uVar21,ppuVar10,uVar22);
            puVar4 = apuStack_d0[0];
            if (((uint)ppuVar11 & 1) != ((uint)ppuVar12 & 1)) goto LAB_10377b464;
          }
          else {
            puVar4 = apuStack_d0[0];
            if ((uStack_100 & 1) == 0) {
              uStack_100 = uVar6;
              FUN_10378e8bc();
              uVar6 = uStack_100;
              puVar4 = apuStack_d0[0];
            }
          }
          apuStack_d0[0] = puVar4;
          if (((ulong)ppuVar11 & 1) == 0) {
            *(ulong *)(puVar4 + (uVar6 >> 6) * 8 + 0x40) =
                 *(ulong *)(puVar4 + (uVar6 >> 6) * 8 + 0x40) | 1L << (uVar6 & 0x3f);
            puVar13 = (ulong *)(*(long *)(puVar4 + 0x30) + uVar6 * 0x18);
            *puVar13 = uVar21;
            puVar13[1] = (ulong)ppuVar10;
            *(undefined1 *)(puVar13 + 2) = uVar22;
            *(undefined **)(*(long *)(puVar4 + 0x38) + uVar6 * 8) = puVar7;
            func_0x000107c61170(uVar1);
            func_0x000100183ab8(alStack_b0);
            if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10377b440);
              (*pcVar2)();
            }
            *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
          }
          else {
            uVar5 = *(undefined8 *)(*(long *)(puVar4 + 0x38) + uVar6 * 8);
            *(undefined **)(*(long *)(puVar4 + 0x38) + uVar6 * 8) = puVar7;
            func_0x000107c61170(uVar1);
            func_0x000107c6142c(uVar5);
            func_0x00010376573c(uVar21,ppuVar10,uVar22);
            func_0x000100183ab8(alStack_b0);
          }
        }
      }
    }
    func_0x000107c5ed4c(&puStack_88);
  }
  (**(code **)(lStack_e0 + 8))(lVar15,puStack_f0);
  lVar15 = lStack_e8;
  lVar19 = lStack_e8;
  func_0x000107c44aec();
  if ((int)lVar19 != 0) {
    func_0x000107c51f04();
    func_0x000107c61180();
    if (lVar15 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10377b464);
      (*pcVar2)();
    }
    puVar3 = puVar9;
    FUN_10376d860();
    func_0x000107c6142c(puVar9);
    func_0x000107c61170(lVar15);
    if (puVar3 == (undefined *)0x0) {
      return puVar4;
    }
    lVar15 = *(long *)(lStack_f8 + 0x10);
    puVar9 = puVar3;
    puStack_f0 = puVar3;
    if (lVar15 != 0) {
      plVar23 = (long *)(lStack_f8 + 0x40);
      do {
        lVar19 = plVar23[-4];
        uVar1 = plVar23[-3];
        uVar21 = plVar23[-2];
        uVar22 = (undefined1)plVar23[-1];
        lVar18 = *plVar23;
        lVar20 = *(long *)(puVar4 + 0x10);
        lStack_e8 = lVar15;
        func_0x000103765724(uVar1,uVar21,uVar22);
        func_0x000103765724(uVar1,uVar21,uVar22);
        func_0x000107c61174();
        lStack_e0 = lVar18;
        if (lVar20 == 0) {
          func_0x000107c61174(lVar19);
LAB_10377b200:
          func_0x000107c61434(puStack_f0);
          puVar9 = puVar4;
          func_0x000107c61558();
          uVar6 = uVar1;
          uVar14 = uVar21;
          puStack_88 = puVar4;
          FUN_10378de8c(uVar1,uVar21,uVar22);
          uVar16 = (ulong)~(uint)uVar14 & 1;
          lVar15 = *(long *)(puVar4 + 0x10) + uVar16;
          if (SCARRY8(*(long *)(puVar4 + 0x10),uVar16)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10377b430);
            (*pcVar2)();
          }
          if (*(long *)(puVar4 + 0x18) < lVar15) {
            FUN_10378f564(lVar15,puVar9);
            uVar6 = uVar1;
            uVar16 = uVar21;
            FUN_10378de8c(uVar1,uVar21,uVar22);
            puVar4 = puStack_88;
            if (((uint)uVar14 & 1) != ((uint)uVar16 & 1)) {
LAB_10377b464:
              func_0x000107c60624(&UNK_1106c9650);
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10377b474);
              (*pcVar2)();
            }
          }
          else {
            puVar4 = puStack_88;
            if (((ulong)puVar9 & 1) == 0) {
              FUN_10378e8bc();
              puVar4 = puStack_88;
            }
          }
          puStack_88 = puVar4;
          if ((uVar14 & 1) == 0) {
            *(ulong *)(puVar4 + (uVar6 >> 6) * 8 + 0x40) =
                 *(ulong *)(puVar4 + (uVar6 >> 6) * 8 + 0x40) | 1L << (uVar6 & 0x3f);
            puVar13 = (ulong *)(*(long *)(puVar4 + 0x30) + uVar6 * 0x18);
            *puVar13 = uVar1;
            puVar13[1] = uVar21;
            *(undefined1 *)(puVar13 + 2) = uVar22;
            *(undefined **)(*(long *)(puVar4 + 0x38) + uVar6 * 8) = puStack_f0;
            func_0x000107c61170(lVar19);
            func_0x00010376573c(uVar1,uVar21,uVar22);
            func_0x000107c61170(lStack_e0);
            if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10377b434);
              (*pcVar2)();
            }
            *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
          }
          else {
            uVar5 = *(undefined8 *)(*(long *)(puVar4 + 0x38) + uVar6 * 8);
            *(undefined **)(*(long *)(puVar4 + 0x38) + uVar6 * 8) = puStack_f0;
            func_0x000107c61170(lVar19);
            func_0x000107c6142c(uVar5);
LAB_10377b0b4:
            func_0x00010376573c(uVar1,uVar21,uVar22);
            func_0x000107c61170(lStack_e0);
            func_0x00010376573c(uVar1,uVar21,uVar22);
          }
        }
        else {
          func_0x000107c61434(puVar4);
          lVar15 = lVar19;
          func_0x000107c61174();
          uVar6 = uVar21;
          FUN_10378de8c(uVar1,uVar21,uVar22);
          func_0x000107c6142c(puVar4);
          if ((uVar6 & 1) == 0) goto LAB_10377b200;
          puVar9 = puVar4;
          lStack_f8 = lVar15;
          func_0x000107c61558();
          uVar6 = uVar1;
          uVar14 = uVar21;
          puStack_88 = puVar4;
          FUN_10378de8c(uVar1,uVar21,uVar22);
          uVar16 = (ulong)~(uint)uVar14 & 1;
          lVar15 = *(long *)(puVar4 + 0x10) + uVar16;
          if (SCARRY8(*(long *)(puVar4 + 0x10),uVar16)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10377b438);
            (*pcVar2)();
          }
          if (*(long *)(puVar4 + 0x18) < lVar15) {
            FUN_10378f564(lVar15,puVar9);
            uVar6 = uVar1;
            uVar16 = uVar21;
            FUN_10378de8c(uVar1,uVar21,uVar22);
            puVar3 = puStack_f0;
            puVar4 = puStack_88;
            if (((uint)uVar14 & 1) != ((uint)uVar16 & 1)) goto LAB_10377b464;
          }
          else {
            puVar3 = puStack_f0;
            puVar4 = puStack_88;
            if (((ulong)puVar9 & 1) == 0) {
              FUN_10378e8bc();
              puVar3 = puStack_f0;
              puVar4 = puStack_88;
            }
          }
          puStack_f0 = puVar3;
          puStack_88 = puVar4;
          if ((uVar14 & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10377b3fc);
            (*pcVar2)();
          }
          lVar19 = *(long *)(*(long *)(puVar4 + 0x38) + uVar6 * 8);
          func_0x000107c61434(puVar3);
          lVar15 = lVar19;
          func_0x000107c61558(lVar19);
          alStack_b0[0] = lVar19;
          FUN_10377a918(puVar3,FUN_10377a8cc,0,lVar15,alStack_b0);
          func_0x000107c6142c(puVar3);
          lVar15 = alStack_b0[0];
          if (alStack_b0[0] == 0) {
            FUN_103772aa4(*(long *)(puVar4 + 0x30) + uVar6 * 0x18);
            func_0x00010376a938(uVar6,puVar4);
            func_0x000107c61170(lStack_f8);
            goto LAB_10377b0b4;
          }
          *(long *)(*(long *)(puVar4 + 0x38) + uVar6 * 8) = alStack_b0[0];
          func_0x000107c61434(alStack_b0[0]);
          func_0x000107c61170(lStack_f8);
          func_0x00010376573c(uVar1,uVar21,uVar22);
          func_0x000107c61170(lStack_e0);
          func_0x00010376573c(uVar1,uVar21,uVar22);
          func_0x000107c6142c(lVar15);
        }
        plVar23 = plVar23 + 6;
        lVar15 = lStack_e8 + -1;
        puVar9 = puStack_f0;
      } while (lVar15 != 0);
    }
  }
  func_0x000107c6142c(puVar9);
  return puVar4;
}



/* Entry: 10377b474; end: 10377b493;  */

void FUN_10377b474(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  long unaff_x22;
  
  *(undefined4 *)(unaff_x22 + 200) = param_5;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_4;
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10377b494,0,0);
  return;
}



/* Entry: 10377b494; end: 10377b577;  */

void FUN_10377b494(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  if (*(int *)(unaff_x22 + 200) == 0) {
    lVar1 = *(long *)(unaff_x22 + 0xa8);
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0xb8) = lVar1;
    if (lVar1 != 0) {
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_10377b578;
      lVar2 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar2,1);
      uVar3 = 0x112f91468;
      func_0x0001000285a8(0x112f91468,&UNK_10dc099b8);
      *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(code **)(unaff_x22 + 0x60) = FUN_103793450;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_1106908c8;
      *(long *)(unaff_x22 + 0x70) = lVar2;
      func_0x000107c507a0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
  }
  func_0x00010379653c(PTR___swiftEmptyArrayStorage_11034f1c8);
                    /* WARNING: Could not recover jumptable at 0x00010377b4cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10377b578; end: 10377b5cf;  */

void FUN_10377b578(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xc0) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_10377b5d0;
  }
  else {
    pcVar1 = FUN_10377b64c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10377b5d0; end: 10377b64b;  */

void FUN_10377b5d0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  puVar2 = *(undefined **)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb8);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x00010379653c(PTR___swiftEmptyArrayStorage_11034f1c8);
  }
  else {
    puVar1 = puVar2;
    FUN_10377abf0(puVar2,*(undefined8 *)(unaff_x22 + 0x98),*(undefined8 *)(unaff_x22 + 0xa0),
                  *(undefined8 *)(unaff_x22 + 0xb0));
    func_0x000107c61170(puVar2);
  }
  func_0x000107c615e8(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010377b648. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar1);
  return;
}



/* Entry: 10377b64c; end: 10377b6ab;  */

void FUN_10377b64c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000107c61654();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x00010379653c(PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000107c614ac(uVar2);
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010377b6a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar3);
  return;
}



/* Entry: 10377b6ac; end: 10377b6c3;  */

void FUN_10377b6ac(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10377b6c4,0,0);
  return;
}



/* Entry: 10377b6c4; end: 10377b797;  */

void FUN_10377b6c4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x98);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(long *)(unaff_x22 + 0xa0) = lVar1;
  if (lVar1 != 0) {
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_10377b798;
    lVar2 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar2,1);
    uVar3 = 0x112f91468;
    func_0x0001000285a8(0x112f91468,&UNK_10dc099b8);
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_103793450;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_1106908a0;
    *(long *)(unaff_x22 + 0x70) = lVar2;
    func_0x000107c507a0(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010377b794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10377b798; end: 10377b7ef;  */

void FUN_10377b798(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xa8) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_10377b7f0;
  }
  else {
    pcVar1 = FUN_10377b8b4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10377b7f0; end: 10377b8b3;  */

void FUN_10377b7f0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(ulong *)(unaff_x22 + 0x90);
  if (uVar3 == 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
LAB_10377b884:
    func_0x000107c615e8(uVar4);
  }
  else {
    uVar1 = uVar3;
    func_0x000107c51fd4();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
    if (uVar1 == 0) goto LAB_10377b884;
    uVar2 = uVar1;
    func_0x000107c5faec();
    func_0x000107c615e8(uVar4);
    func_0x000107c61170(uVar1);
    uVar3 = uVar2 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar3 = param_2 >> 0x38 & 0xf;
    }
    if (uVar3 != 0) goto LAB_10377b890;
    func_0x000107c6142c(param_2);
  }
  uVar2 = 0;
  param_2 = 0;
LAB_10377b890:
                    /* WARNING: Could not recover jumptable at 0x00010377b8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2,param_2);
  return;
}



/* Entry: 10377b8b4; end: 10377b907;  */

void FUN_10377b8b4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  func_0x000107c61654();
  func_0x000107c615e8(uVar1);
  func_0x000107c614ac(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010377b904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0);
  return;
}



/* Entry: 10377b908; end: 10377b91f;  */

void FUN_10377b908(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10377b920,0,0);
  return;
}



/* Entry: 10377b920; end: 10377ba2b;  */

void FUN_10377b920(void)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  func_0x0001000d224c(unaff_x22 + 0x50);
  uVar1 = *(ulong *)(unaff_x22 + 0x50);
  lVar3 = *(long *)(unaff_x22 + 0x58);
  uVar2 = uVar1;
  func_0x000107c614f0();
  (**(code **)(lVar3 + 0x28))();
  func_0x000107c615e8(uVar1);
  if ((uVar2 & 1) != 0) {
    lVar3 = *(long *)(unaff_x22 + 0x98);
    func_0x000107c5c734();
    func_0x000107c61180();
    *(long *)(unaff_x22 + 0xa8) = lVar3;
    if (lVar3 != 0) {
      *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
      *(long *)(unaff_x22 + 0x10) = unaff_x22;
      *(code **)(unaff_x22 + 0x18) = FUN_10377ba2c;
      lVar4 = unaff_x22 + 0x10;
      func_0x000107c61448(lVar4,1);
      uVar5 = 0x112f91460;
      func_0x0001000285a8(0x112f91460,&UNK_10dc099a0);
      *(undefined8 *)(unaff_x22 + 0x88) = uVar5;
      *(long *)(unaff_x22 + 0x70) = lVar4;
      *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
      *(code **)(unaff_x22 + 0x60) = FUN_10377a500;
      *(undefined **)(unaff_x22 + 0x68) = &UNK_110690878;
      func_0x000107c50798(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010377ba28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0);
  return;
}



/* Entry: 10377ba2c; end: 10377ba83;  */

void FUN_10377ba2c(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xb0) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_10377ba84;
  }
  else {
    pcVar1 = FUN_10377bb48;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10377ba84; end: 10377bb47;  */

void FUN_10377ba84(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(ulong *)(unaff_x22 + 0x90);
  if (uVar3 == 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
LAB_10377bb18:
    func_0x000107c615e8(uVar4);
  }
  else {
    uVar1 = uVar3;
    func_0x000107c51fd4();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
    if (uVar1 == 0) goto LAB_10377bb18;
    uVar2 = uVar1;
    func_0x000107c5faec();
    func_0x000107c615e8(uVar4);
    func_0x000107c61170(uVar1);
    uVar3 = uVar2 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar3 = param_2 >> 0x38 & 0xf;
    }
    if (uVar3 != 0) goto LAB_10377bb24;
    func_0x000107c6142c(param_2);
  }
  uVar2 = 0;
  param_2 = 0;
LAB_10377bb24:
                    /* WARNING: Could not recover jumptable at 0x00010377bb38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2,param_2);
  return;
}



/* Entry: 10377bb48; end: 10377bb9b;  */

void FUN_10377bb48(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c61654();
  func_0x000107c615e8(uVar1);
  func_0x000107c614ac(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010377bb98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0);
  return;
}



/* Entry: 10377bb9c; end: 10377bbb3;  */

long FUN_10377bb9c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 10377bbb4; end: 10377bbf7;  */

void FUN_10377bbb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91470 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a98b0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112f91470 = puVar1;
  return;
}



/* Entry: 10377bbf8; end: 10377bc2f;  */

void FUN_10377bbf8(long param_1)

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



/* Entry: 10377bc30; end: 10377bcc7;  */

void FUN_10377bc30(void)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x60);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
  puVar2 = &UNK_110690910;
  func_0x000107c613fc(&UNK_110690910,0x18,7);
  *(undefined **)(unaff_x22 + 0x70) = puVar2;
  *(undefined8 *)(puVar2 + 0x10) = uVar6;
  piVar4 = *(int **)(lVar5 + 0x30);
  iVar1 = *piVar4;
  plVar3 = (long *)(ulong)(uint)piVar4[1];
  func_0x000107c61434(uVar6);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x78) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10377bcc8;
                    /* WARNING: Could not recover jumptable at 0x00010377bcc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))
            (*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x50),
             *(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60));
  return;
}



/* Entry: 10377bcc8; end: 10377bd17;  */

void FUN_10377bcc8(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x80) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10377bd18,0,0);
  return;
}



/* Entry: 10377bd18; end: 10377bebf;  */

void FUN_10377bd18(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x50);
  *(code **)(unaff_x22 + 0x38) = FUN_10377c294;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar10;
  uVar1 = 0xff;
  func_0x000107c614b8(0xff,uVar5,uVar7,&UNK_10e77bcec,&UNK_10e77bd0c);
  uVar2 = uVar5;
  func_0x000107c614b4(uVar5,uVar7,uVar1,&UNK_10e77bcec,&UNK_10e77bd04);
  uVar3 = 0;
  func_0x000107c614b8(0,uVar2,uVar1,PTR___ss12IdentifiableTL_11034e500,
                      PTR___s2IDs12IdentifiablePTl_11034d610);
  uVar4 = 0xff;
  func_0x000107c614b8(0xff,uVar5,uVar7,&UNK_10e77bcec,&UNK_10e77bd14);
  func_0x000107c614b4(uVar5,uVar7,uVar4,&UNK_10e77bcec,&UNK_10e77bcf4);
  uVar6 = 0;
  func_0x000107c5fa34(0,uVar4,&UNK_110692568,uVar5);
  uVar7 = 0x112f906c8;
  func_0x0001000285a8(0x112f906c8,&UNK_10dc08df8);
  func_0x000107c614b4(uVar2,uVar1,uVar3,PTR___ss12IdentifiableTL_11034e500,
                      PTR___ss12IdentifiableP2IDAB_SHTn_11034e4f0);
  pcVar8 = FUN_10377c454;
  func_0x000107c5fa2c(FUN_10377c454,unaff_x22 + 0x10,uVar9,uVar3,uVar6,uVar7,uVar2);
  func_0x000107c6142c(uVar9);
  func_0x000107c61574(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010377bebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(pcVar8);
  return;
}



/* Entry: 10377bec0; end: 10377bf47;  */

void FUN_10377bec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  *(long *)(unaff_x22 + 0x38) = param_4;
  piVar3 = *(int **)(param_4 + 0x30);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x40) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10377bf48;
                    /* WARNING: Could not recover jumptable at 0x00010377bf44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(param_1,param_2,param_3,param_4);
  return;
}



/* Entry: 10377bf48; end: 10377bf97;  */

void FUN_10377bf48(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x48) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10377bf98,0,0);
  return;
}


