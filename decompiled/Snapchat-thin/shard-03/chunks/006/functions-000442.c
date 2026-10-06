/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102b37938; end: 102b37c63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b37938(long param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 auStack_128 [24];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x000107c61428(param_2 + 0x10,auStack_128,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    return;
  }
  puVar10 = *(undefined8 **)(param_1 + 0x10);
  puVar2 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar10 != (undefined8 *)0x0) {
    func_0x000107c61434(param_1);
    puVar2 = puVar10;
    func_0x000101341d44(puVar10,0);
    puVar3 = &uStack_110;
    func_0x000101343178(puVar3,puVar2 + 4,puVar10,param_1);
    func_0x000100ba5608(uStack_110,uStack_108,uStack_100,uStack_f8,uStack_f0);
    if (puVar3 != puVar10) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b379e8);
      (*pcVar1)();
    }
  }
  puVar10 = puVar2;
  FUN_102b37cc8();
  func_0x000107c61574(puVar2);
  if (puVar10 != (undefined8 *)0x0) {
    lVar4 = *(long *)(param_3 + _DAT_1130385c0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar9 = lVar4;
      func_0x000107c403cc();
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      if (lVar9 != 0) {
        lVar4 = lVar9;
        func_0x000107c44dd4();
        func_0x000107c61180();
        func_0x000107c61170(lVar9);
        if (lVar4 != 0) {
          func_0x000107c4b2ec();
          func_0x000107c61180();
          lVar9 = param_5;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(param_5);
          if (lVar9 != 0) {
            lVar5 = lVar9;
            func_0x000107c4c18c(lVar9);
            func_0x000107c61180();
            func_0x000107c615e8(lVar9);
            puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
            func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
            func_0x000107c615f0(lVar4);
            func_0x000107c5af88(puVar6);
            func_0x000107c61180();
            puVar7 = PTR__OBJC_CLASS___UIFont_1126aec38;
            func_0x000107c61168(PTR__OBJC_CLASS___UIFont_1126aec38);
            func_0x000107c3eb8c(0x4024000000000000);
            func_0x000107c61180();
            FUN_102b4fe64(&uStack_110,0x402c000000000000,0,0,0x4044000000000000,0x3fe6666666666666,
                          0x4044000000000000,0x4020000000000000,0x4044000000000000,1,1,puVar6,puVar7
                         );
            uStack_68 = 0x3fc999999999999a;
            uStack_70 = 0x3fc999999999999a;
            uVar8 = 0;
            func_0x000102b4ca3c(0);
            func_0x000107c610f8();
            FUN_102b492ec(puVar10,lVar4,&uStack_110,uVar8);
            func_0x000107c61180();
            func_0x000107c4b204(param_4);
            func_0x000107c61180();
            func_0x000107c5d198(param_7);
            func_0x000107c61180();
            func_0x000107c615f0(lVar5);
            puVar2 = puVar10;
            FUN_102b37fe4(puVar10,param_4,param_7,lVar5);
            func_0x000107c61170(puVar10);
            func_0x000107c61170(param_4);
            func_0x000107c61170(param_7);
            uVar8 = *(undefined8 *)(param_2 + 0x10);
            *(undefined8 **)(param_2 + 0x10) = puVar2;
            func_0x000107c61170(uVar8);
            lVar9 = *(long *)(param_2 + 0x10);
            if (lVar9 != 0) {
              func_0x000107c61174();
              FUN_102b2fd90();
              func_0x000107c61170(lVar9);
            }
            func_0x000107c615e8(lVar5);
            func_0x000107c61170(puVar10);
            func_0x000107c615e8(lVar4);
            goto LAB_102b37c3c;
          }
          func_0x000107c615e8(lVar4);
        }
      }
    }
    func_0x000107c6142c(puVar10);
  }
LAB_102b37c3c:
  func_0x000107c61574(param_2);
  return;
}



/* Entry: 102b37c64; end: 102b37c87;  */

void FUN_102b37c64(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b37c88; end: 102b37c8b;  */

void FUN_102b37c88(void)

{
  return;
}



/* Entry: 102b37c8c; end: 102b37cc7;  */

undefined8 FUN_102b37c8c(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *(long *)(*unaff_x20 + 0x10);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000102b302b8();
    func_0x000107c61170(lVar1);
  }
  return 0;
}



/* Entry: 102b37cc8; end: 102b37dfb;  */

undefined * FUN_102b37cc8(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar6 = *(long *)(param_1 + 0x10);
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000102b37e98(0,lVar6,0);
  puVar2 = PTR___ss11AnyHashableVN_11034e448;
  if (lVar6 != 0) {
    param_1 = param_1 + 0x20;
    do {
      puVar3 = puStack_68;
      func_0x0001007bbd18(param_1,&uStack_90);
      uStack_b8 = uStack_88;
      uStack_c0 = uStack_90;
      uStack_a8 = uStack_78;
      uStack_b0 = uStack_80;
      uStack_a0 = uStack_70;
      uVar4 = 0x112ef5430;
      func_0x0001000285a8(0x112ef5430,&UNK_10db23f98);
      puVar5 = &uStack_c8;
      func_0x000107c6147c(puVar5,&uStack_c0,puVar2,uVar4,6);
      uVar4 = uStack_c8;
      if (((ulong)puVar5 & 1) == 0) {
        func_0x000107c61574(puVar3);
        return (undefined *)0x0;
      }
      uVar1 = *(ulong *)(puVar3 + 0x10);
      puStack_68 = puVar3;
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
        func_0x000102b37e98(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puStack_68 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puStack_68 + uVar1 * 8 + 0x20) = uVar4;
      param_1 = param_1 + 0x28;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return puStack_68;
}



/* Entry: 102b37dfc; end: 102b37e1b;  */

void FUN_102b37dfc(long param_1,long param_2)

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



/* Entry: 102b37e1c; end: 102b37e67;  */

void FUN_102b37e1c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102b37e68; end: 102b37e77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b37e68(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long unaff_x20;
  undefined8 *puVar13;
  undefined1 auStack_128 [24];
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c61428(lVar2 + 0x10,auStack_128,0,0,lVar6,*(undefined8 *)(unaff_x20 + 0x30));
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    return;
  }
  puVar13 = *(undefined8 **)(param_1 + 0x10);
  puVar3 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar13 != (undefined8 *)0x0) {
    func_0x000107c61434(param_1);
    puVar3 = puVar13;
    func_0x000101341d44(puVar13,0);
    puVar4 = &uStack_110;
    func_0x000101343178(puVar4,puVar3 + 4,puVar13,param_1);
    func_0x000100ba5608(uStack_110,uStack_108,uStack_100,uStack_f8,uStack_f0);
    if (puVar4 != puVar13) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b379e8);
      (*pcVar1)();
    }
  }
  puVar13 = puVar3;
  FUN_102b37cc8();
  func_0x000107c61574(puVar3);
  if (puVar13 != (undefined8 *)0x0) {
    lVar5 = *(long *)(lVar5 + _DAT_1130385c0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar12 = lVar5;
      func_0x000107c403cc();
      func_0x000107c61180();
      func_0x000107c615e8(lVar5);
      if (lVar12 != 0) {
        lVar5 = lVar12;
        func_0x000107c44dd4();
        func_0x000107c61180();
        func_0x000107c61170(lVar12);
        if (lVar5 != 0) {
          func_0x000107c4b2ec();
          func_0x000107c61180();
          lVar12 = lVar6;
          func_0x000107c5c734();
          func_0x000107c61180();
          func_0x000107c61170(lVar6);
          if (lVar12 != 0) {
            lVar6 = lVar12;
            func_0x000107c4c18c(lVar12);
            func_0x000107c61180();
            func_0x000107c615e8(lVar12);
            puVar7 = PTR__OBJC_CLASS___UIColor_1126aea70;
            func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
            func_0x000107c615f0(lVar5);
            func_0x000107c5af88(puVar7);
            func_0x000107c61180();
            puVar8 = PTR__OBJC_CLASS___UIFont_1126aec38;
            func_0x000107c61168(PTR__OBJC_CLASS___UIFont_1126aec38);
            func_0x000107c3eb8c(0x4024000000000000);
            func_0x000107c61180();
            FUN_102b4fe64(&uStack_110,0x402c000000000000,0,0,0x4044000000000000,0x3fe6666666666666,
                          0x4044000000000000,0x4020000000000000,0x4044000000000000,1,1,puVar7,puVar8
                         );
            uStack_68 = 0x3fc999999999999a;
            uStack_70 = 0x3fc999999999999a;
            uVar9 = 0;
            func_0x000102b4ca3c(0);
            func_0x000107c610f8();
            FUN_102b492ec(puVar13,lVar5,&uStack_110,uVar9);
            func_0x000107c61180();
            func_0x000107c4b204(uVar11);
            func_0x000107c61180();
            func_0x000107c5d198(uVar10);
            func_0x000107c61180();
            func_0x000107c615f0(lVar6);
            puVar3 = puVar13;
            FUN_102b37fe4(puVar13,uVar11,uVar10,lVar6);
            func_0x000107c61170(puVar13);
            func_0x000107c61170(uVar11);
            func_0x000107c61170(uVar10);
            uVar11 = *(undefined8 *)(lVar2 + 0x10);
            *(undefined8 **)(lVar2 + 0x10) = puVar3;
            func_0x000107c61170(uVar11);
            lVar12 = *(long *)(lVar2 + 0x10);
            if (lVar12 != 0) {
              func_0x000107c61174();
              FUN_102b2fd90();
              func_0x000107c61170(lVar12);
            }
            func_0x000107c615e8(lVar6);
            func_0x000107c61170(puVar13);
            func_0x000107c615e8(lVar5);
            goto LAB_102b37c3c;
          }
          func_0x000107c615e8(lVar5);
        }
      }
    }
    func_0x000107c6142c(puVar13);
  }
LAB_102b37c3c:
  func_0x000107c61574(lVar2);
  return;
}



/* Entry: 102b37e78; end: 102b37eb3;  */

void FUN_102b37e78(void)

{
  func_0x000107c61168(&PTR_PTR_112ef53d0);
  return;
}



/* Entry: 102b37eb4; end: 102b37fe3;  */

undefined * FUN_102b37eb4(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102b37fe4);
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
    puVar3 = param_1;
    func_0x000102b3e47c();
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
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0x112ef5430;
    func_0x0001000285a8(0x112ef5430,&UNK_10db23f98);
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



/* Entry: 102b37fe4; end: 102b380eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b37fe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lStack_60;
  long lStack_58;
  
  lVar3 = 0;
  FUN_102b30430();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar2 = _DAT_112ef4e88;
  puVar5 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar4 + lVar2) = puVar5;
  *(undefined8 *)(lVar4 + _DAT_112ef4e90) = 0;
  lVar2 = _DAT_112ef4e98;
  func_0x000107c61614(lVar4 + _DAT_112ef4e98,0);
  *(undefined8 *)(lVar4 + _DAT_112ef4ea0) = 0;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112ef4e70);
  *puVar1 = param_1;
  puVar1[1] = &PTR_DAT_1105a0850;
  *(undefined8 *)(lVar4 + _DAT_112ef4e80) = param_4;
  *(undefined8 *)(lVar4 + _DAT_112ef4e78) = param_2;
  func_0x000107c61604(lVar4 + lVar2,param_3);
  puVar5 = PTR_s_init_1125d9248;
  lStack_60 = lVar4;
  lStack_58 = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61154(&lStack_60,puVar5);
  return;
}



/* Entry: 102b380ec; end: 102b3812f;  */

long * FUN_102b380ec(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) != 0) {
    uVar2 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  }
  return param_1;
}



/* Entry: 102b38130; end: 102b3816f;  */

void FUN_102b38130(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102b38170; end: 102b38177;  */

void FUN_102b38170(long param_1,long param_2)

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



/* Entry: 102b38178; end: 102b39177;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b38178(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10,long param_11,undefined8 param_12,
                  long param_13,long param_14,long param_15,undefined8 param_16,long param_17,
                  undefined8 param_18,undefined8 param_19,undefined8 param_20,long param_21,
                  long param_22)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  long lVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  undefined8 uVar22;
  long unaff_x20;
  undefined8 uVar23;
  undefined8 uVar24;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long alStack_120 [3];
  long lStack_108;
  undefined **ppuStack_100;
  undefined **appuStack_f8 [3];
  undefined *puStack_e0;
  undefined **ppuStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined **appuStack_90 [3];
  undefined *puStack_78;
  undefined **ppuStack_70;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(long *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  lVar19 = _DAT_113082420;
  if (*(ulong *)(param_3 + _DAT_113082420) < 3) {
LAB_102b38254:
    lVar2 = param_13;
    func_0x000107c4af44();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      lVar2 = param_15;
      func_0x000107c4af88();
      func_0x000107c61180();
      lVar4 = lVar2;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar4 == 0) {
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(param_21);
        func_0x000107c61170(param_22);
        func_0x000107c61170(param_4);
        func_0x000107c61170(param_17);
        func_0x000107c61170(param_1);
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_5);
        func_0x000107c61170(param_6);
        func_0x000107c61170(param_7);
        func_0x000107c61170(param_8);
        func_0x000107c61170(param_9);
        func_0x000107c61170(param_10);
        func_0x000107c61170(param_11);
        func_0x000107c61170(param_12);
        func_0x000107c61170(param_13);
        func_0x000107c61170(param_14);
        func_0x000107c61170(param_15);
        func_0x000107c61170(param_16);
        func_0x000107c61170(param_18);
        func_0x000107c61170(param_19);
        param_18 = param_20;
        goto LAB_102b39150;
      }
      uVar23 = *(undefined8 *)(param_21 + _DAT_113071300);
      lVar5 = 0;
      func_0x000102b34d44();
      func_0x000107c613fc();
      *(undefined8 *)(lVar5 + 0x10) = uVar23;
      *(long *)(unaff_x20 + 0x10) = lVar5;
      lVar2 = _DAT_112f5cd48;
      func_0x000107c61174(uVar23);
      lVar6 = param_8;
      func_0x000107c4b2ec();
      func_0x000107c61180();
      lVar7 = lVar6;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar6);
      if (lVar7 != 0) {
        uVar23 = param_6;
        func_0x000107c4b1cc();
        func_0x000107c61180();
        uVar8 = param_7;
        func_0x000107c4b130();
        func_0x000107c61180();
        uVar22 = param_7;
        func_0x000107c4b144();
        func_0x000107c61180();
        uVar24 = param_12;
        func_0x000107c4b128();
        func_0x000107c61180();
        FUN_102b392bc(param_22 + lVar2,appuStack_90);
        puVar15 = &UNK_11059fd80;
        func_0x000107c613fc(&UNK_11059fd80,0x38,7);
        func_0x000100d1b350(appuStack_90,puVar15 + 0x10);
        func_0x0001000285a8(0x112ef5440,&UNK_10db23fa8);
        func_0x000107c613fc();
        func_0x000107c615f0(lVar7);
        pcVar9 = FUN_102b392b4;
        func_0x0001000bdd8c(FUN_102b392b4,puVar15);
        puStack_78 = &UNK_11059ffc8;
        ppuStack_70 = &PTR_DAT_11059ffd8;
        lVar10 = 0;
        FUN_102b317f0();
        lVar11 = lVar10;
        func_0x000107c610f8();
        lVar2 = _DAT_112ef5028;
        puVar15 = PTR_PTR_1126ae820;
        func_0x000107c610f8();
        func_0x000107c453e4();
        *(undefined **)(lVar11 + lVar2) = puVar15;
        lVar6 = _DAT_112ef5030;
        lVar2 = 0x112ea35c0;
        func_0x0001000285a8(0x112ea35c0,&UNK_10dab5c00);
        lVar12 = lVar2;
        func_0x000107c613fc();
        func_0x0001000c2754();
        *(long *)(lVar11 + lVar6) = lVar12;
        lVar6 = _DAT_112ef5038;
        func_0x000107c613fc(lVar2,*(undefined4 *)(lVar2 + 0x30),*(undefined2 *)(lVar2 + 0x34));
        func_0x0001000c2754();
        *(long *)(lVar11 + lVar6) = lVar2;
        lVar2 = _DAT_112ef5088;
        puVar15 = PTR_PTR_1126ae810;
        func_0x000107c610f8();
        func_0x000107c453e4();
        *(undefined **)(lVar11 + lVar2) = puVar15;
        func_0x000107c61614(lVar11 + _DAT_112ef5090,0);
        *(undefined1 *)(lVar11 + _DAT_112ef5098) = 0;
        *(undefined8 *)(lVar11 + _DAT_112ef5040) = param_5;
        *(undefined8 *)(lVar11 + _DAT_112ef5048) = uVar23;
        *(undefined8 *)(lVar11 + _DAT_112ef5050) = uVar8;
        *(undefined8 *)(lVar11 + _DAT_112ef5058) = uVar22;
        *(undefined8 *)(lVar11 + _DAT_112ef5060) = uVar24;
        FUN_102b392bc(appuStack_90,lVar11 + _DAT_112ef5068);
        *(long *)(lVar11 + _DAT_112ef5070) = lVar7;
        *(long *)(lVar11 + _DAT_112ef5078) = lVar4;
        *(code **)(lVar11 + _DAT_112ef5080) = pcVar9;
        puVar15 = PTR_s_init_1125d9248;
        lStack_140 = lVar11;
        lStack_138 = lVar10;
        func_0x000107c61174(param_5);
        func_0x000107c615f0(lVar4);
        plVar13 = &lStack_140;
        func_0x000107c61154(plVar13,puVar15);
        func_0x0001000834e4(appuStack_90);
        *(long **)(unaff_x20 + 0x18) = plVar13;
        func_0x000107c61174(plVar13);
        uVar23 = param_1;
        func_0x000107c4e9e4(param_1);
        func_0x000107c61180();
        func_0x000107c4fba8();
        func_0x000107c615e8(lVar7);
        func_0x000107c61170(plVar13);
        func_0x000107c61170(uVar23);
      }
      uVar22 = *(undefined8 *)(param_4 + _DAT_112ef5360);
      iVar1 = *(int *)(param_3 + lVar19);
      func_0x000107c615f0(lVar4);
      func_0x000107c6157c(uVar22);
      uVar23 = param_6;
      func_0x000107c4b1cc();
      func_0x000107c61180();
      uVar8 = param_9;
      func_0x000107c4dad8();
      func_0x000107c61180();
      lVar7 = _DAT_1130385c0;
      uVar24 = *(undefined8 *)(param_11 + _DAT_1130385c0);
      lVar11 = param_8;
      func_0x000107c4b2ec();
      func_0x000107c61180();
      lVar14 = 0;
      FUN_102b34f1c();
      lVar12 = lVar14;
      func_0x000107c610f8();
      lVar6 = _DAT_112ef51c8;
      lVar2 = 0x112ea35c0;
      func_0x0001000285a8(0x112ea35c0,&UNK_10dab5c00);
      func_0x000107c613fc();
      lVar10 = lVar5;
      func_0x000107c6157c();
      func_0x0001000c2754();
      *(long *)(lVar12 + lVar6) = lVar10;
      lVar6 = _DAT_112ef51d0;
      func_0x000107c613fc(lVar2,*(undefined4 *)(lVar2 + 0x30),*(undefined2 *)(lVar2 + 0x34));
      func_0x0001000c2754();
      *(long *)(lVar12 + lVar6) = lVar2;
      lVar2 = lVar12 + _DAT_112ef5200;
      *(undefined8 *)(lVar2 + 8) = 0;
      func_0x000107c61614(lVar2,0);
      lVar6 = _DAT_112ef5220;
      puVar15 = PTR_PTR_1126ae810;
      func_0x000107c610f8();
      func_0x000107c453e4();
      *(undefined **)(lVar12 + lVar6) = puVar15;
      func_0x000107c61614(lVar12 + _DAT_112ef5230,0);
      *(undefined8 *)(lVar12 + _DAT_112ef5238) = 0;
      *(undefined8 *)(lVar12 + _DAT_112ef51d8) = uVar22;
      *(undefined8 *)(lVar12 + _DAT_112ef51e0) = uVar23;
      *(undefined8 *)(lVar12 + _DAT_112ef51e8) = uVar8;
      *(undefined8 *)(lVar12 + _DAT_112ef51f0) = uVar24;
      *(long *)(lVar12 + _DAT_112ef51f8) = lVar11;
      *(undefined ***)(lVar2 + 8) = &PTR_DAT_11059fa60;
      func_0x000107c61604(lVar2,lVar5);
      *(long *)(lVar12 + _DAT_112ef5208) = lVar4;
      *(undefined8 *)(lVar12 + _DAT_112ef5210) = param_19;
      *(undefined8 *)(lVar12 + _DAT_112ef5218) = param_20;
      *(bool *)(lVar12 + _DAT_112ef5228) = iVar1 == 0;
      puVar15 = PTR_s_init_1125d9248;
      lStack_a0 = lVar12;
      lStack_98 = lVar14;
      func_0x000107c615f0(lVar4);
      func_0x000107c6157c(uVar22);
      func_0x000107c61174(uVar23);
      func_0x000107c61174(uVar8);
      func_0x000107c61174(uVar24);
      func_0x000107c61174(lVar11);
      func_0x000107c61174();
      func_0x000107c61174();
      plVar13 = &lStack_a0;
      func_0x000107c61154(plVar13,puVar15);
      func_0x000107c61170(uVar23);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(lVar11);
      func_0x000107c61574(lVar5);
      *(long **)(unaff_x20 + 0x20) = plVar13;
      func_0x000107c61174(plVar13);
      uVar23 = param_1;
      func_0x000107c4e9e4(param_1);
      func_0x000107c61180();
      func_0x000107c4fba8();
      func_0x000107c61574(uVar22);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(plVar13);
      func_0x000107c61170(uVar23);
      uVar23 = param_10;
      func_0x000107c4b4c0();
      func_0x000107c61180();
      uVar22 = *(undefined8 *)(param_17 + _DAT_113083868);
      uVar8 = param_18;
      func_0x000107c444a4();
      func_0x000107c61180();
      lVar2 = lVar3;
      func_0x000107c49f80();
      iVar1 = *(int *)(param_3 + lVar19);
      if (iVar1 == 8) {
        func_0x0001000d224c(appuStack_90);
        ppuVar18 = ppuStack_70;
        puVar15 = puStack_78;
        func_0x0001000a8868(appuStack_90,puStack_78);
        (*(code *)ppuVar18[8])(puVar15,ppuVar18);
        func_0x0001000834e4(appuStack_90);
LAB_102b38c7c:
        if (((ulong)puVar15 & 1) != 0) {
LAB_102b38c84:
          if ((int)lVar2 == 0) {
            uVar24 = *(undefined8 *)(param_11 + lVar7);
            puVar16 = (undefined *)0x0;
            FUN_102b3167c();
            puVar17 = puVar16;
            func_0x000107c610f8();
            *(undefined8 *)(puVar17 + _DAT_112ef4ff8) = uVar8;
            puVar15 = PTR_s_init_1125d9248;
            puStack_b0 = puVar17;
            puStack_a8 = puVar16;
            func_0x000107c61174();
            func_0x000107c61174();
            ppuVar18 = &puStack_b0;
            func_0x000107c61154(ppuVar18,puVar15);
            ppuStack_70 = &PTR_DAT_11059f778;
            lVar19 = 0;
            appuStack_90[0] = ppuVar18;
            puStack_78 = puVar16;
            func_0x000102b3708c();
            lVar2 = lVar19;
            func_0x000107c613fc();
            *(undefined8 *)(lVar2 + 0x50) = 0;
            func_0x000107c61614(lVar2 + 0x48,0);
            *(undefined8 *)(lVar2 + 0x10) = uVar23;
            *(undefined8 *)(lVar2 + 0x18) = uVar24;
            func_0x000100d1b350(appuStack_90,lVar2 + 0x20);
            *(undefined ***)(lVar2 + 0x50) = &PTR_DAT_11059fa60;
            func_0x000107c61604(lVar2 + 0x48,lVar5);
            func_0x000107c61174();
            lVar6 = param_8;
            func_0x000107c4b2ec();
            func_0x000107c61180();
            uVar24 = param_16;
            func_0x000107c4b548();
            func_0x000107c61180();
            puVar20 = (undefined *)0x0;
            FUN_102b313c0();
            puVar17 = puVar20;
            func_0x000107c610f8();
            *(undefined8 *)(puVar17 + _DAT_112ef4fc8) = uVar22;
            puVar15 = PTR_s_init_1125d9248;
            puStack_c0 = puVar17;
            puStack_b8 = puVar20;
            func_0x000107c61174(uVar22);
            ppuVar18 = &puStack_c0;
            func_0x000107c61154(ppuVar18,puVar15);
            puVar17 = puVar16;
            func_0x000107c610f8();
            *(undefined8 *)(puVar17 + _DAT_112ef4ff8) = uVar8;
            puVar15 = PTR_s_init_1125d9248;
            puStack_d0 = puVar17;
            puStack_c8 = puVar16;
            func_0x000107c61174();
            ppuVar21 = &puStack_d0;
            func_0x000107c61154(ppuVar21,puVar15);
            ppuStack_70 = &PTR_DAT_11059f768;
            ppuStack_d8 = &PTR_DAT_11059f778;
            ppuStack_100 = &PTR_DAT_11059fbd8;
            lVar5 = 0;
            alStack_120[0] = lVar2;
            lStack_108 = lVar19;
            appuStack_f8[0] = ppuVar21;
            puStack_e0 = puVar16;
            appuStack_90[0] = ppuVar18;
            puStack_78 = puVar20;
            FUN_102b33fd8();
            lVar7 = lVar5;
            func_0x000107c610f8();
            lVar19 = _DAT_112ef50c8;
            puVar15 = PTR_PTR_1126ae820;
            func_0x000107c610f8();
            func_0x000107c61174(ppuVar18);
            func_0x000107c61174(ppuVar21);
            func_0x000107c6157c(lVar2);
            func_0x000107c453e4();
            *(undefined **)(lVar7 + lVar19) = puVar15;
            func_0x000107c61614(lVar7 + _DAT_112ef50f0,0);
            *(long *)(lVar7 + _DAT_112ef50d0) = lVar6;
            *(undefined8 *)(lVar7 + _DAT_112ef50d8) = uVar24;
            FUN_102b392bc(appuStack_90,lVar7 + _DAT_112ef50e0);
            FUN_102b392bc(appuStack_f8,lVar7 + _DAT_112ef50e8);
            FUN_102b392bc(alStack_120,lVar7 + _DAT_112ef50f8);
            puVar15 = PTR_s_init_1125d9248;
            lStack_130 = lVar7;
            lStack_128 = lVar5;
            func_0x000107c61174(lVar6);
            func_0x000107c61174(uVar24);
            plVar13 = &lStack_130;
            func_0x000107c61154(plVar13,puVar15);
            func_0x000107c61170(lVar6);
            func_0x000107c61170(uVar24);
            func_0x000107c61170(ppuVar18);
            func_0x000107c61170(ppuVar21);
            func_0x0001000834e4(alStack_120);
            func_0x0001000834e4(appuStack_f8);
            func_0x0001000834e4(appuStack_90);
            *(long **)(unaff_x20 + 0x28) = plVar13;
            func_0x000107c61174(plVar13);
            uVar22 = param_1;
            func_0x000107c4e9e4(param_1);
            func_0x000107c61180();
            func_0x000107c61174(plVar13);
            func_0x000107c4fba8(uVar22);
            func_0x000107c61170(uVar22);
            func_0x000107c61170(plVar13);
            func_0x000107c61170(plVar13);
            func_0x000107c61574(lVar2);
            func_0x000107c61170(param_19);
            func_0x000107c61170(param_20);
            func_0x000107c61170(param_5);
            func_0x000107c61170(param_21);
            func_0x000107c615e8(lVar4);
            func_0x000107c61170(param_22);
            func_0x000107c61170(param_4);
            func_0x000107c61170(param_17);
            func_0x000107c615e8(lVar3);
            func_0x000107c61170(param_3);
            func_0x000107c61170(uVar23);
            func_0x000107c61170(param_11);
            func_0x000107c61170(param_14);
            func_0x000107c61170(uVar8);
            func_0x000107c61170(param_1);
            func_0x000107c61170(param_2);
            func_0x000107c61170(param_6);
            func_0x000107c61170(param_7);
            func_0x000107c61170(param_8);
            func_0x000107c61170(param_9);
            func_0x000107c61170(param_10);
            func_0x000107c61170(param_12);
            func_0x000107c61170(param_13);
            func_0x000107c61170(param_15);
            func_0x000107c61170(param_16);
            goto LAB_102b39150;
          }
        }
      }
      else {
        if (iVar1 == 1) {
          func_0x0001000d224c(appuStack_90);
          ppuVar18 = ppuStack_70;
          puVar15 = puStack_78;
          func_0x0001000a8868(appuStack_90,puStack_78);
          (*(code *)ppuVar18[2])(puVar15,ppuVar18);
          func_0x0001000834e4(appuStack_90);
          goto LAB_102b38c7c;
        }
        if (iVar1 == 0) goto LAB_102b38c84;
      }
      func_0x000107c61170(param_19);
      func_0x000107c61170(param_20);
      func_0x000107c61170(param_5);
      func_0x000107c61170(param_21);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(param_22);
      func_0x000107c61170(param_4);
      func_0x000107c61170(param_17);
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(param_3);
      func_0x000107c61170(uVar23);
      func_0x000107c61170(param_11);
      func_0x000107c61170(param_14);
      func_0x000107c61170(uVar8);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_6);
      func_0x000107c61170(param_7);
      func_0x000107c61170(param_8);
      func_0x000107c61170(param_9);
      func_0x000107c61170(param_10);
      func_0x000107c61170(param_12);
      func_0x000107c61170(param_13);
      func_0x000107c61170(param_15);
      func_0x000107c61170(param_16);
      goto LAB_102b39150;
    }
    func_0x000107c61170(param_21);
    func_0x000107c61170(param_22);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_17);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_13);
  }
  else {
    if (*(ulong *)(param_3 + _DAT_113082420) == 8) {
      func_0x0001000d224c(appuStack_90);
      ppuVar18 = ppuStack_70;
      puVar15 = puStack_78;
      func_0x0001000a8868(appuStack_90,puStack_78);
      (*(code *)ppuVar18[8])(puVar15,ppuVar18);
      func_0x0001000834e4(appuStack_90);
      if (((ulong)puVar15 & 1) != 0) goto LAB_102b38254;
    }
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_14);
    func_0x000107c61170(param_21);
    func_0x000107c61170(param_22);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_17);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_12);
    param_14 = param_13;
  }
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_19);
  param_18 = param_20;
LAB_102b39150:
  func_0x000107c61170(param_18);
  return unaff_x20;
}



/* Entry: 102b39178; end: 102b391b3;  */

void FUN_102b39178(void)

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



/* Entry: 102b391b4; end: 102b391b7;  */

void FUN_102b391b4(void)

{
  return;
}



/* Entry: 102b391b8; end: 102b391db;  */

undefined8 FUN_102b391b8(void)

{
  FUN_102b391dc();
  return 0;
}



/* Entry: 102b391dc; end: 102b392b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102b391dc(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x0001000d224c(&uStack_40);
    func_0x000107c614f0(uStack_40);
    (**(code **)(lStack_38 + 0x10))();
    func_0x000107c615e8(uStack_40);
    func_0x000107c61170(lVar1);
  }
  return 0;
}



/* Entry: 102b392b4; end: 102b392bb;  */

void FUN_102b392b4(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000102b2fd60();
  lVar2 = lVar1;
  func_0x000107c613fc();
  FUN_102b392bc(unaff_x20 + 0x10,lVar2 + 0x10);
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11059f550;
  *param_1 = lVar2;
  return;
}



/* Entry: 102b392bc; end: 102b392ff;  */

long FUN_102b392bc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102b39300; end: 102b3931f;  */

void FUN_102b39300(void)

{
  func_0x000107c61168(&PTR_PTR_112ef5488);
  return;
}



/* Entry: 102b39320; end: 102b3a5c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b39320(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                  long param_6,undefined8 param_7,undefined8 param_8,long param_9,
                  undefined8 param_10,long param_11,undefined8 param_12,long param_13,long param_14,
                  long param_15,long param_16,long param_17,char *param_18)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long *plVar13;
  code *pcVar14;
  code *pcVar15;
  long lVar16;
  char *pcVar17;
  char *pcVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  ulong uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  long *plVar31;
  long unaff_x20;
  undefined8 uVar32;
  undefined8 uVar33;
  ulong uVar34;
  long lStack_308;
  undefined *puStack_300;
  long *plStack_2e0;
  long lStack_250;
  long lStack_248;
  undefined *puStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined *puStack_228;
  undefined **ppuStack_220;
  long lStack_210;
  undefined8 uStack_208;
  long lStack_1f8;
  undefined **ppuStack_1f0;
  undefined1 auStack_1e8 [32];
  long *plStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined **ppuStack_1a8;
  long *plStack_1a0;
  long lStack_188;
  undefined **ppuStack_180;
  long *plStack_178;
  long lStack_160;
  undefined **ppuStack_158;
  long *plStack_150;
  long lStack_138;
  undefined **ppuStack_130;
  long *aplStack_108 [7];
  long *plStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined **ppuStack_78;
  
  lVar4 = unaff_x20;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x10) = 0;
  lVar5 = *(long *)(param_9 + _DAT_113082920);
  func_0x000107c61174();
  uVar6 = param_7;
  func_0x000107c4b33c();
  func_0x000107c61180();
  lVar16 = param_6;
  func_0x000107c4af44();
  func_0x000107c61180();
  lVar7 = lVar16;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar16);
  if (lVar7 == 0) {
    func_0x000107c6157c(lVar4);
    ppuVar12 = &puStack_98;
    func_0x000107c5fb18(ppuVar12);
    puStack_98 = (undefined *)0xd000000000000018;
    uStack_90 = 0x800000010f0f1e70;
    lStack_210 = 0;
    uStack_208 = 0xe000000000000000;
    func_0x000107c602fc(0x10);
    func_0x000107c6142c(uStack_208);
    lStack_210 = 0x3a65727574616546;
    uStack_208 = 0xe900000000000020;
    func_0x000107c5fb78(ppuVar12,unaff_x20);
    func_0x000107c5fb78(0x202d20,0xe300000000000000);
    func_0x000107c5fb78(0xd000000000000033,0x800000010f0f1e30);
    uVar30 = uStack_208;
    func_0x000107c5fb78(lStack_210,uStack_208);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_13);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_9);
    func_0x000107c6142c(unaff_x20);
    func_0x000107c61170(param_11);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(param_15);
    func_0x000107c61170(param_14);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_16);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_17);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_18);
    func_0x000107c6142c(uVar30);
    func_0x000107c61170(uVar6);
    func_0x000107c6142c(uStack_90);
    return lVar4;
  }
  puVar24 = &UNK_11059fdc8;
  func_0x000107c613fc(&UNK_11059fdc8,0x18,7);
  *(undefined8 *)(puVar24 + 0x10) = param_10;
  func_0x0001000285a8(0x112ef5500,&UNK_10db24010);
  func_0x000107c613fc();
  func_0x000107c61174();
  pcVar3 = FUN_102b3a618;
  func_0x0001000bdd8c(FUN_102b3a618,puVar24);
  uVar30 = param_5;
  func_0x000107c4aeb0();
  func_0x000107c61180();
  lVar16 = _DAT_113036458;
  uVar33 = *(undefined8 *)(param_11 + _DAT_113036458);
  puStack_80 = &UNK_11059ffc8;
  ppuStack_78 = &PTR_DAT_11059ffd8;
  lVar8 = *(long *)(param_3 + _DAT_1130385c0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar8 == 0) {
LAB_102b398f0:
    func_0x000107c6157c(lVar4);
    plVar13 = &lStack_210;
    func_0x000107c5fb18(plVar13);
    lStack_210 = -0x2fffffffffffffe8;
    uStack_208 = 0x800000010f0f1e70;
    puStack_240 = (undefined *)0x0;
    uStack_238 = 0xe000000000000000;
    func_0x000107c602fc(0x10);
    func_0x000107c6142c(uStack_238);
    puStack_240 = (undefined *)0x3a65727574616546;
    uStack_238 = 0xe900000000000020;
    func_0x000107c5fb78(plVar13,unaff_x20);
    func_0x000107c5fb78(0x202d20,0xe300000000000000);
    func_0x000107c5fb78(0xd000000000000031,0x800000010f0f1e90);
    uVar33 = uStack_238;
    func_0x000107c5fb78(puStack_240,uStack_238);
    func_0x000107c6142c(uVar33);
    func_0x000107c6142c(unaff_x20);
    func_0x000107c61170(uVar30);
    func_0x000107c6142c(uStack_208);
    plStack_2e0 = (long *)0x0;
  }
  else {
    lVar21 = lVar8;
    func_0x000107c403cc();
    func_0x000107c61180();
    func_0x000107c615e8(lVar8);
    if (lVar21 == 0) goto LAB_102b398f0;
    lVar8 = lVar21;
    func_0x000107c3f250();
    func_0x000107c61180();
    if (lVar8 == 0) {
      func_0x000107c61170(lVar21);
      goto LAB_102b398f0;
    }
    func_0x000107c61174();
    func_0x000107c61174();
    lVar9 = lVar7;
    func_0x000107c49f84(lVar7);
    FUN_102b3dc7c(0);
    func_0x000107c610f8();
    lVar19 = lVar21;
    func_0x000102b3dae4(lVar21,lVar8,lVar9);
    uVar28 = uVar6;
    func_0x000107c42438();
    func_0x000107c61180();
    lVar10 = 0;
    func_0x000102b3ce90();
    lVar9 = lVar10;
    func_0x000107c613fc();
    *(undefined8 *)(lVar9 + 0x40) = 1;
    *(undefined8 *)(lVar9 + 0x10) = uVar28;
    func_0x000102b3ac18(&puStack_98,lVar9 + 0x18);
    ppuStack_1f0 = &PTR_DAT_1105a0168;
    puVar11 = (undefined *)0x0;
    lStack_210 = lVar9;
    lStack_1f8 = lVar10;
    func_0x000102b3d084();
    puVar24 = puVar11;
    func_0x000107c613fc();
    func_0x000102b3ac18(&lStack_210,puVar24 + 0x10);
    *(undefined8 *)(puVar24 + 0x38) = uVar33;
    ppuStack_220 = &PTR_DAT_1105a0188;
    puStack_240 = puVar24;
    puStack_228 = puVar11;
    func_0x000107c6157c(uVar33);
    func_0x0001000834e4(&lStack_210);
    func_0x000100d1b3b4(&puStack_240,&lStack_210);
    uVar33 = uVar30;
    func_0x000107c4aeb4();
    func_0x000107c61180();
    uVar28 = *(undefined8 *)(lVar5 + _DAT_1130828e8);
    lVar10 = 0;
    FUN_102b3bfac();
    lVar9 = lVar10;
    func_0x000107c610f8();
    *(undefined8 *)(lVar9 + _DAT_112ef58c8) = 0;
    *(undefined8 *)(lVar9 + _DAT_112ef58d0) = 0;
    *(undefined8 *)(lVar9 + _DAT_112ef58d8) = 0;
    *(undefined8 *)(lVar9 + _DAT_112ef58a0) = uVar33;
    *(undefined8 *)(lVar9 + _DAT_112ef58a8) = uVar28;
    plVar13 = (long *)(lVar9 + _DAT_112ef58b0);
    *plVar13 = lVar19;
    plVar13[1] = (long)&PTR_DAT_1105a01f0;
    func_0x000102b3ac18(&puStack_98,lVar9 + _DAT_112ef58b8);
    func_0x000102b3ac18(&lStack_210,lVar9 + _DAT_112ef58c0);
    puVar24 = PTR_s_init_1125d9248;
    lStack_250 = lVar9;
    lStack_248 = lVar10;
    func_0x000107c61174(lVar19);
    func_0x000107c61174();
    func_0x000107c61174(uVar33);
    func_0x000107c61174(uVar28);
    plStack_2e0 = &lStack_250;
    func_0x000107c61154(plStack_2e0,puVar24);
    func_0x000107c61170(lVar21);
    func_0x000107c61170(lVar8);
    func_0x000107c61170(uVar33);
    func_0x000107c61170(lVar19);
    func_0x000107c61170(lVar19);
    func_0x000107c61170(uVar30);
    func_0x0001000834e4(&lStack_210);
  }
  func_0x0001000834e4(&puStack_98);
  puVar24 = &UNK_11059fdf0;
  func_0x000107c613fc(&UNK_11059fdf0,0x18,7);
  *(undefined8 *)(puVar24 + 0x10) = param_5;
  uVar30 = 0x112ee3e98;
  func_0x0001000285a8(0x112ee3e98,&UNK_10db20590);
  func_0x000107c613fc();
  func_0x000107c61174();
  pcVar14 = FUN_102b3a81c;
  func_0x0001000bdd8c(FUN_102b3a81c,puVar24);
  uVar33 = *(undefined8 *)(param_11 + lVar16);
  puVar24 = &UNK_11059fe18;
  func_0x000107c613fc(&UNK_11059fe18,0x18,7);
  *(long *)(puVar24 + 0x10) = param_13;
  func_0x0001000285a8(0x112ef5508,&UNK_10db24020);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar3);
  func_0x000107c6157c(uVar33);
  func_0x000107c61174();
  pcVar15 = FUN_102b3a834;
  func_0x0001000bdd8c(FUN_102b3a834,puVar24);
  lVar8 = 0;
  FUN_102b3d2a4();
  lVar16 = lVar8;
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(lVar16 + _DAT_112ef5a88);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar16 + _DAT_112ef5a90) = 0;
  *(undefined1 *)(lVar16 + _DAT_112ef5a98) = 0;
  *(code **)(lVar16 + _DAT_112ef5a68) = pcVar14;
  *(code **)(lVar16 + _DAT_112ef5a70) = pcVar3;
  *(undefined8 *)(lVar16 + _DAT_112ef5a78) = uVar33;
  *(code **)(lVar16 + _DAT_112ef5a80) = pcVar15;
  plVar13 = &lStack_a8;
  lStack_a8 = lVar16;
  lStack_a0 = lVar8;
  func_0x000107c61154(plVar13,PTR_s_init_1125d9248);
  puVar24 = &UNK_11059fe40;
  func_0x000107c613fc(&UNK_11059fe40,0x18,7);
  *(long *)(puVar24 + 0x10) = param_3;
  func_0x0001000285a8(0x112ef5510,&UNK_10dbf8e60);
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar33 = 0x102b3a83c;
  func_0x0001000bdd8c(0x102b3a83c,puVar24);
  uVar32 = *(undefined8 *)(*(long *)(param_15 + _DAT_113038790) + _DAT_1130387c0);
  func_0x0001000285a8(0x112ef5518,&UNK_10db24030);
  uVar29 = *(undefined8 *)(*(long *)(param_14 + _DAT_113038d00) + _DAT_113038d60);
  func_0x000107c6157c(uVar32);
  func_0x000107c61174();
  uVar28 = uVar29;
  func_0x0001000bda74();
  func_0x000107c61170(uVar29);
  puVar24 = &UNK_11059fe68;
  func_0x000107c613fc(&UNK_11059fe68,0x18,7);
  *(undefined8 *)(puVar24 + 0x10) = param_5;
  func_0x000107c613fc(uVar30,0x18,7);
  func_0x000107c61174();
  uVar30 = 0x102b3ad98;
  func_0x0001000bdd8c(0x102b3ad98,puVar24);
  lVar16 = *(long *)(param_2 + _DAT_1130353e0);
  func_0x000107c5cb60();
  func_0x000107c61180();
  if (lVar16 == 0) {
    puStack_300 = (undefined *)0x0;
  }
  else {
    puStack_300 = (undefined *)lVar16;
    func_0x000107c42e38();
    func_0x000107c61180();
    func_0x000107c61170(lVar16);
  }
  lVar16 = param_13;
  func_0x000107c3f124();
  func_0x000107c61180();
  lVar21 = lVar16;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar16);
  if (lVar21 != 0) {
    lVar16 = lVar21;
    func_0x000107c3f2d0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar21);
    lVar21 = lVar16;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar16);
    if (lVar21 != 0) {
      lStack_308 = lVar21;
      func_0x000107c3f170();
      func_0x000107c61180();
      func_0x000107c615e8(lVar21);
      goto LAB_102b39d58;
    }
  }
  lStack_308 = 0;
LAB_102b39d58:
  pcVar17 = param_18;
  func_0x000107c4b2ec();
  func_0x000107c61180();
  pcVar18 = pcVar17;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(pcVar17);
  if (pcVar18 == (char *)0x0) {
    pcVar17 = 
    "init(conditionalBeginIn:cameraFeatureScope:cameraUIServices:lensCarouselSettingsServices:lensCarouselScopedLensCarouselManagementServices:lensCarouselStudySettingsServices:cameraUIScopedLensProcessingCarouselServices:lensesFeatureServices:scopedLensFeaturesVisibilityControllerServices:plusServices:lensPlusServices:lensConfigurationServices:lensViewControllerServices:lensCarouselLensDownloadingServices:cameraUIScopedLensCarouselLensApplicatorServices:lensCarouselScopeInfoProvidingServices:attributionServices:lensPerformerServices:)"
    ;
    func_0x0001000c10c0();
    func_0x000107c61180();
  }
  else {
    pcVar17 = pcVar18;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(pcVar18);
  }
  lVar19 = 0;
  FUN_102b3ecf0();
  lVar9 = lVar19;
  func_0x000107c610f8();
  lVar16 = _DAT_112ef5c28;
  func_0x000107c61614(lVar9 + _DAT_112ef5c28,0);
  lVar21 = _DAT_112ef5c40;
  func_0x0001005f60b4(0);
  func_0x000107c613fc();
  uVar29 = uVar33;
  func_0x000107c6157c();
  func_0x0001005f60d4();
  *(undefined8 *)(lVar9 + lVar21) = uVar29;
  lVar21 = _DAT_112ef5c48;
  puStack_98 = (undefined *)0x0;
  func_0x0001000285a8(0x112d55258,&UNK_10d91c3a0);
  func_0x000107c613fc();
  ppuVar12 = &puStack_98;
  func_0x00010006c248();
  *(undefined ***)(lVar9 + lVar21) = ppuVar12;
  *(undefined8 *)(lVar9 + _DAT_112ef5c10) = uVar32;
  *(undefined8 *)(lVar9 + _DAT_112ef5c08) = uVar28;
  *(undefined8 *)(lVar9 + _DAT_112ef5c18) = uVar30;
  *(undefined **)(lVar9 + _DAT_112ef5c20) = puStack_300;
  func_0x000107c61604(lVar9 + lVar16,lStack_308);
  *(undefined8 *)(lVar9 + _DAT_112ef5c30) = uVar33;
  *(char **)(lVar9 + _DAT_112ef5c38) = pcVar17;
  puVar24 = PTR_s_init_1125d9248;
  lStack_b8 = lVar9;
  lStack_b0 = lVar19;
  func_0x000107c6157c(uVar32);
  func_0x000107c6157c(uVar28);
  func_0x000107c6157c(uVar30);
  func_0x000107c615f0(puStack_300);
  plVar20 = &lStack_b8;
  func_0x000107c61154(plVar20,puVar24);
  func_0x000107c61574(uVar32);
  func_0x000107c61574(uVar28);
  func_0x000107c61574(uVar30);
  func_0x000107c615e8(puStack_300);
  func_0x000107c615e8(lStack_308);
  uVar30 = *(undefined8 *)(param_16 + _DAT_113038ba0);
  uVar28 = *(undefined8 *)(*(long *)(param_4 + _DAT_1130827f8) + _DAT_113082768);
  uVar29 = *(undefined8 *)(param_17 + _DAT_113097748);
  lVar21 = 0;
  FUN_102b40b40();
  lVar16 = lVar21;
  func_0x000107c610f8();
  *(undefined8 *)(lVar16 + _DAT_112ef5ed0) = 0;
  *(undefined8 *)(lVar16 + _DAT_112ef5eb8) = uVar30;
  *(undefined8 *)(lVar16 + _DAT_112ef5ec0) = uVar28;
  *(undefined8 *)(lVar16 + _DAT_112ef5ec8) = uVar29;
  puVar24 = PTR_s_init_1125d9248;
  lStack_c8 = lVar16;
  lStack_c0 = lVar21;
  func_0x000107c6157c(uVar30);
  func_0x000107c6157c(uVar28);
  func_0x000107c615f0(uVar29);
  plVar22 = &lStack_c8;
  func_0x000107c61154(plVar22,puVar24);
  uVar30 = param_8;
  func_0x000107c5d198();
  func_0x000107c61180();
  uVar28 = param_8;
  func_0x000107c3f198();
  func_0x000107c61180();
  plStack_d0 = plStack_2e0;
  plVar23 = plStack_2e0;
  func_0x000107c61174();
  if (plStack_2e0 == (long *)0x0) {
    puStack_300 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x000107c615f0(plVar23);
    puVar24 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c61550();
    if ((((int)puVar11 == 0) || ((long)puVar24 < 0)) || (((ulong)puVar24 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar24 >> 0x3e == 0) {
        puVar11 = *(undefined **)(((ulong)puVar24 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar11 = (undefined *)((ulong)puVar24 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar24) {
          puVar11 = puVar24;
        }
        func_0x000107c60480(puVar11);
      }
      puVar24 = (undefined *)0x0;
      FUN_102b3aa40(0,puVar11 + 1,1,PTR___swiftEmptyArrayStorage_11034f1c8,0x102b3e4a4,0x112ee3de0,
                    &UNK_10db0ee50);
    }
    uVar34 = *(ulong *)(((ulong)puVar24 & 0xffffffffffffff8) + 0x10);
    uVar2 = *(ulong *)(((ulong)puVar24 & 0xffffffffffffff8) + 0x18);
    puStack_300 = puVar24;
    if (uVar2 >> 1 <= uVar34) {
      puStack_300 = (undefined *)(ulong)(1 < uVar2);
      FUN_102b3aa40(puStack_300,uVar34 + 1,1,puVar24,0x102b3e4a4,0x112ee3de0,&UNK_10db0ee50);
    }
    *(ulong *)(((ulong)puStack_300 & 0xffffffffffffff8) + 0x10) = uVar34 + 1;
    *(long **)(((ulong)puStack_300 & 0xffffffffffffff8) + uVar34 * 8 + 0x20) = plVar23;
  }
  func_0x000102b3abd8(&plStack_d0,0x112ef5520,&UNK_10db24040);
  aplStack_108[0] = plStack_2e0;
  aplStack_108[1] = plVar13;
  aplStack_108[2] = plVar20;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar34 = 0;
  puVar24 = PTR___swiftEmptyArrayStorage_11034f1c8;
  do {
    uVar2 = uVar34;
    if (uVar34 < 4) {
      uVar2 = 3;
    }
    do {
      if (uVar34 == 3) {
        uVar29 = 0x112ef5528;
        func_0x0001000285a8(0x112ef5528,&UNK_10db24048);
        func_0x000107c61408(aplStack_108,3,uVar29);
        if (plStack_2e0 == (long *)0x0) {
          plStack_1c8 = (long *)0x0;
          uVar29 = 0;
          ppuStack_1a8 = (undefined **)0x0;
          uStack_1c0 = 0;
          uStack_1b8 = 0;
        }
        else {
          uVar29 = 0;
          FUN_102b3bfac();
          ppuStack_1a8 = &PTR_DAT_1105a00a8;
          plStack_1c8 = plVar23;
        }
        ppuStack_180 = &PTR_DAT_1105a01a8;
        ppuStack_130 = &PTR_DAT_1105a04d8;
        ppuStack_158 = &PTR_DAT_1105a0248;
        uStack_1b0 = uVar29;
        plStack_1a0 = plVar13;
        lStack_188 = lVar8;
        plStack_178 = plVar20;
        lStack_160 = lVar19;
        plStack_150 = plVar22;
        lStack_138 = lVar21;
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c61174();
        lVar16 = 0x20;
        puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
        do {
          func_0x000102b3ab88(auStack_1e8 + lVar16,&puStack_98);
          uStack_238 = uStack_90;
          puStack_240 = puStack_98;
          puStack_228 = puStack_80;
          uStack_230 = uStack_88;
          ppuStack_220 = ppuStack_78;
          if (puStack_80 == (undefined *)0x0) {
            func_0x000102b3abd8(&puStack_240,0x112ef5530,&UNK_10db24050);
          }
          else {
            func_0x000100d1b3b4(&puStack_240,&lStack_210);
            puVar25 = puVar11;
            func_0x000107c61558();
            puVar26 = puVar11;
            if (((ulong)puVar25 & 1) == 0) {
              puVar26 = (undefined *)0x0;
              FUN_102b3a8c4(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
            }
            uVar34 = *(ulong *)(puVar26 + 0x10);
            puVar11 = puVar26;
            if (*(ulong *)(puVar26 + 0x18) >> 1 <= uVar34) {
              puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar26 + 0x18));
              FUN_102b3a8c4(puVar11,uVar34 + 1,1,puVar26);
            }
            *(ulong *)(puVar11 + 0x10) = uVar34 + 1;
            func_0x000100d1b3b4(&lStack_210,puVar11 + uVar34 * 0x28 + 0x20);
          }
          lVar16 = lVar16 + 0x28;
        } while (lVar16 != 0xc0);
        uVar29 = 0x112ef5530;
        func_0x0001000285a8(0x112ef5530,&UNK_10db24050);
        func_0x000107c61408(&plStack_1c8,4,uVar29);
        lVar16 = 0;
        func_0x000102b3f8d8();
        func_0x000107c613fc();
        *(undefined8 *)(lVar16 + 0x10) = uVar30;
        *(undefined8 *)(lVar16 + 0x18) = uVar28;
        *(undefined **)(lVar16 + 0x20) = puStack_300;
        *(undefined **)(lVar16 + 0x28) = puVar24;
        *(undefined **)(lVar16 + 0x30) = puVar11;
        uVar30 = *(undefined8 *)(lVar4 + 0x10);
        *(long *)(lVar4 + 0x10) = lVar16;
        func_0x000107c61574(uVar30);
        lVar16 = *(long *)(lVar4 + 0x10);
        if (lVar16 != 0) {
          func_0x000107c6157c(lVar16);
          FUN_102b3f4bc();
          func_0x000107c61574(lVar16);
        }
        func_0x000107c61170(param_9);
        func_0x000107c61170(param_12);
        func_0x000107c61170(param_11);
        func_0x000107c61170(param_15);
        func_0x000107c61170(param_14);
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_16);
        func_0x000107c61170(param_4);
        func_0x000107c61170(param_17);
        func_0x000107c61170(param_1);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_5);
        func_0x000107c61170(param_6);
        func_0x000107c61170(param_7);
        func_0x000107c61170(param_8);
        func_0x000107c61170(param_10);
        func_0x000107c61170(param_13);
        func_0x000107c61170(param_18);
        func_0x000107c615e8(lVar7);
        func_0x000107c61170(plVar22);
        func_0x000107c61170(plVar20);
        func_0x000107c61170(plVar13);
        func_0x000107c61170(plVar23);
        func_0x000107c61574(uVar33);
        func_0x000107c61574(pcVar3);
        func_0x000107c61170(lVar5);
        func_0x000107c61170(uVar6);
        return lVar4;
      }
      if (uVar2 == uVar34) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102b3a57c);
        (*pcVar3)();
      }
      plVar31 = aplStack_108[uVar34];
      uVar34 = uVar34 + 1;
    } while (plVar31 == (long *)0x0);
    func_0x000107c615f0(plVar31);
    puVar11 = puVar24;
    func_0x000107c61550();
    if ((((int)puVar11 == 0) || ((long)puVar24 < 0)) || (((ulong)puVar24 >> 0x3e & 1) != 0)) {
      if ((ulong)puVar24 >> 0x3e == 0) {
        puVar11 = *(undefined **)(((ulong)puVar24 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar11 = (undefined *)((ulong)puVar24 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar24) {
          puVar11 = puVar24;
        }
        func_0x000107c60480(puVar11);
      }
      puVar25 = (undefined *)0x0;
      FUN_102b3aa40(0,puVar11 + 1,1,puVar24,0x102b3e490,0x112ee3dd8,&UNK_10db0ee48);
      puVar24 = puVar25;
    }
    uVar27 = (ulong)puVar24 & 0xffffffffffffff8;
    uVar2 = *(ulong *)(uVar27 + 0x10);
    puVar11 = puVar24;
    if (*(ulong *)(uVar27 + 0x18) >> 1 <= uVar2) {
      puVar11 = (undefined *)(ulong)(1 < *(ulong *)(uVar27 + 0x18));
      FUN_102b3aa40(puVar11,uVar2 + 1,1,puVar24,0x102b3e490,0x112ee3dd8,&UNK_10db0ee48);
      uVar27 = (ulong)puVar11 & 0xffffffffffffff8;
    }
    *(ulong *)(uVar27 + 0x10) = uVar2 + 1;
    *(long **)(uVar27 + uVar2 * 8 + 0x20) = plVar31;
    puVar24 = puVar11;
  } while( true );
}



/* Entry: 102b3a5c8; end: 102b3a617;  */

void FUN_102b3a5c8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c5c360();
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102b3a618; end: 102b3a61f;  */

void FUN_102b3a618(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5c360();
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 102b3a620; end: 102b3a7b7;  */

void FUN_102b3a620(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c3f124();
  func_0x000107c61180();
  lVar1 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c3f2d0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    lVar1 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 102b3a7b8; end: 102b3a7db;  */

void FUN_102b3a7b8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b3a7dc; end: 102b3a7df;  */

void FUN_102b3a7dc(void)

{
  return;
}



/* Entry: 102b3a7e0; end: 102b3a81b;  */

undefined8 FUN_102b3a7e0(void)

{
  long *unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(*unaff_x20 + 0x10);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    func_0x000102b3f6a8();
    func_0x000107c61574(lVar1);
  }
  return 0;
}



/* Entry: 102b3a81c; end: 102b3a833;  */

void FUN_102b3a81c(void)

{
  long unaff_x20;
  
  func_0x000102b3a74c(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102b3a834; end: 102b3a843;  */

void FUN_102b3a834(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c3f124();
  func_0x000107c61180();
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c3f2d0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
    lVar1 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 102b3a844; end: 102b3a8c3;  */

undefined * FUN_102b3a844(undefined *param_1,undefined *param_2,code *param_3)

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



/* Entry: 102b3a8c4; end: 102b3aa07;  */

undefined * FUN_102b3a8c4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102b3aa08);
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
    puVar3 = (undefined *)0x112ef55d8;
    func_0x0001000285a8(0x112ef55d8,&UNK_10db24098);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112ef55e0;
    func_0x0001000285a8(0x112ef55e0,&UNK_10db240a0);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 102b3aa08; end: 102b3aa3f;  */

ulong FUN_102b3aa08(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b3ab88);
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
  FUN_102b3a844(uVar2,uVar4,0x102b3e490);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b3ab84);
      (*pcVar1)();
    }
    FUN_102b3ac7c(0,uVar2,uVar3 + 0x20,param_4,0x112ee3dd8,&UNK_10db0ee48);
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



/* Entry: 102b3aa40; end: 102b3ab87;  */

ulong FUN_102b3aa40(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b3ab88);
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
  FUN_102b3a844(uVar2,uVar4,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102b3ab84);
      (*pcVar1)();
    }
    FUN_102b3ac7c(0,uVar2,uVar3 + 0x20,param_4,param_6,param_7);
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



/* Entry: 102b3ab88; end: 102b3ac5b;  */

undefined8 FUN_102b3ab88(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ef5530;
  func_0x0001000285a8(0x112ef5530,&UNK_10db24050);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102b3ac5c; end: 102b3ac7b;  */

void FUN_102b3ac5c(void)

{
  func_0x000107c61168(&PTR_PTR_112ef5578);
  return;
}



/* Entry: 102b3ac7c; end: 102b3ad8f;  */

long FUN_102b3ac7c(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102b3ad8c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      lVar5 = param_1;
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102b3ad90);
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
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102b3ad88);
    (*pcVar3)();
  }
  func_0x0001000285a8(param_5,param_6);
  func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,param_2 - param_1,
                      param_5);
  func_0x000107c6142c(param_4);
  return param_3 + (param_2 - param_1) * 8;
}



/* Entry: 102b3ad90; end: 102b3ad9b;  */

void FUN_102b3ad90(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c4aeb0();
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 102b3ad9c; end: 102b3adf7;  */

void FUN_102b3ad9c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 102b3adf8; end: 102b3af27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102b3adf8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  plVar6 = &lStack_50;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = 0;
  FUN_102b371fc();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112ef5330) = 0;
  *(undefined8 *)(lVar2 + _DAT_112ef5328) = uVar7;
  puVar4 = PTR_s_init_1125d9248;
  lStack_40 = lVar2;
  lStack_38 = lVar1;
  func_0x000107c61174(uVar7);
  plVar3 = &lStack_40;
  func_0x000107c61154(plVar3,puVar4);
  puVar4 = &UNK_11059feb0;
  func_0x000107c613fc(&UNK_11059feb0,0x18,7);
  *(long **)(puVar4 + 0x10) = plVar3;
  func_0x0001000285a8(0x112ef55e8,&UNK_10db240b0);
  func_0x000107c613fc();
  func_0x000107c61174(plVar3);
  pcVar5 = FUN_102b3af28;
  func_0x0001000bdd8c(FUN_102b3af28,puVar4);
  lVar1 = 0;
  func_0x0001007d4440();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(code **)(lVar2 + _DAT_112ef5360) = pcVar5;
  puVar4 = PTR_s_init_1125d9248;
  lStack_50 = lVar2;
  lStack_48 = lVar1;
  func_0x000107c6157c(pcVar5);
  func_0x000107c61154(&lStack_50,puVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61170(plVar3);
  return (undefined1 *)plVar6;
}



/* Entry: 102b3af28; end: 102b3af43;  */

void FUN_102b3af28(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
  param_1[1] = &PTR_DAT_11059fc90;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 102b3af44; end: 102b3afe3;  */

void FUN_102b3af44(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b3afe4; end: 102b3b007;  */

void FUN_102b3afe4(undefined8 *param_1,undefined8 param_2)

{
  FUN_102b3adf8();
  *param_1 = param_2;
  return;
}



/* Entry: 102b3b008; end: 102b3b2f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b3b008(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long alStack_90 [3];
  long lStack_78;
  undefined **ppuStack_70;
  
  func_0x000107c613fc();
  lVar1 = *(long *)(param_7 + _DAT_1130828b8);
  uVar11 = *(undefined8 *)(param_2 + _DAT_113036078);
  uVar12 = *(undefined8 *)(lVar1 + _DAT_1130828e8);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar2 = param_5;
  func_0x000107c4af04();
  func_0x000107c61180();
  uVar3 = param_3;
  func_0x000107c4298c();
  func_0x000107c61180();
  uVar4 = param_4;
  func_0x000107c4b33c(param_4);
  func_0x000107c61180();
  uVar5 = uVar4;
  func_0x000107c4ae48();
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  uVar4 = param_6;
  func_0x000107c3f1a0();
  func_0x000107c61180();
  lVar6 = 0;
  func_0x00010074ddf0();
  lVar7 = lVar6;
  func_0x000107c613fc();
  *(undefined8 *)(lVar7 + 0x10) = uVar4;
  ppuStack_70 = &PTR_DAT_1105a0290;
  lVar8 = 0;
  alStack_90[0] = lVar7;
  lStack_78 = lVar6;
  func_0x00010074de10();
  func_0x000107c613fc();
  puVar9 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c6157c(lVar7);
  func_0x000107c453e4();
  *(undefined **)(lVar8 + 0x58) = puVar9;
  *(undefined8 *)(lVar8 + 0x60) = 0;
  *(undefined8 *)(lVar8 + 0x68) = 0;
  *(undefined8 *)(lVar8 + 0x70) = 0;
  *(undefined8 *)(lVar8 + 0x10) = uVar11;
  *(undefined8 *)(lVar8 + 0x18) = uVar12;
  *(undefined8 *)(lVar8 + 0x20) = uVar2;
  *(undefined8 *)(lVar8 + 0x28) = uVar3;
  func_0x00010074de30(alStack_90,lVar8 + 0x30);
  puVar9 = &UNK_11059fef0;
  func_0x000107c613fc(&UNK_11059fef0,0x18,7);
  func_0x000107c61644(puVar9 + 0x10,lVar8);
  uStack_a0 = 0x102b3b328;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  pcStack_b0 = FUN_102b3b330;
  puStack_a8 = &UNK_11059ff08;
  ppuVar10 = &puStack_c0;
  puStack_98 = puVar9;
  func_0x000107c60bc4(ppuVar10);
  puVar9 = puStack_98;
  func_0x000107c61174(uVar11);
  func_0x000107c61174(uVar12);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61574(puVar9);
  func_0x000107c4db94(uVar5);
  func_0x000107c61574(lVar7);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar5);
  func_0x0001000834e4(alStack_90);
  *(long *)(unaff_x20 + 0x10) = lVar8;
  return;
}



/* Entry: 102b3b2f8; end: 102b3b31b;  */

void FUN_102b3b2f8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b3b31c; end: 102b3b32f;  */

void FUN_102b3b31c(void)

{
  return;
}



/* Entry: 102b3b330; end: 102b3b377;  */

void FUN_102b3b330(long param_1,undefined8 param_2)

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



/* Entry: 102b3b378; end: 102b3b387;  */

void FUN_102b3b378(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 102b3b388; end: 102b3b7cf;  */

long FUN_102b3b388(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  lVar1 = param_3;
  func_0x000107c4aeb0();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 == 0) {
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
  }
  else {
    lVar2 = param_5;
    func_0x000107c4b2ec();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 == 0) {
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_4);
    }
    else {
      lVar2 = param_6;
      func_0x000107c4b518();
      func_0x000107c61180();
      lVar4 = lVar2;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar4 == 0) {
        func_0x000107c615e8(lVar1);
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(param_1);
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_4);
        func_0x000107c61170(param_5);
        goto LAB_102b3b6e0;
      }
      lVar2 = param_7;
      func_0x000107c4b548();
      func_0x000107c61180();
      lVar5 = lVar2;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      if (lVar5 != 0) {
        lVar2 = param_4;
        func_0x000107c4af44();
        func_0x000107c61180();
        lVar6 = lVar2;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar2);
        if (lVar6 != 0) {
          lVar2 = lVar6;
          func_0x000107c4b550();
          if (0 < lVar2) {
            uVar7 = 0;
            FUN_102b311cc(0);
            lVar2 = lVar1;
            func_0x000107c614f0(lVar1);
            lVar8 = lVar1;
            FUN_102b31148(lVar1,lVar3,lVar4,lVar5,lVar6,uVar7,lVar2);
            *(long *)(unaff_x20 + 0x10) = lVar8;
            func_0x000107c615f0(lVar6);
            func_0x000107c615f0(lVar5);
            func_0x000107c615f0(lVar4);
            func_0x000107c615f0(lVar3);
            func_0x000107c615f0(lVar1);
            func_0x000107c6157c(lVar8);
            FUN_102b30898();
            func_0x000107c61574(lVar8);
            func_0x000107c615e8(lVar6);
            func_0x000107c615e8(lVar1);
            func_0x000107c61170(param_1);
            func_0x000107c61170(param_2);
            func_0x000107c61170(param_3);
            func_0x000107c61170(param_4);
            func_0x000107c61170(param_5);
            func_0x000107c61170(param_6);
            func_0x000107c61170(param_7);
            func_0x000107c615e8(lVar5);
            func_0x000107c615e8(lVar4);
            func_0x000107c615e8(lVar3);
            return unaff_x20;
          }
          func_0x000107c615e8(lVar1);
          func_0x000107c615e8(lVar3);
          func_0x000107c615e8(lVar4);
          func_0x000107c615e8(lVar5);
          func_0x000107c615e8(lVar6);
          func_0x000107c61170(param_1);
          func_0x000107c61170(param_2);
          func_0x000107c61170(param_3);
          func_0x000107c61170(param_4);
          func_0x000107c61170(param_5);
          func_0x000107c61170(param_6);
          func_0x000107c61170(param_7);
          return unaff_x20;
        }
        func_0x000107c615e8(lVar1);
        func_0x000107c615e8(lVar3);
        func_0x000107c615e8(lVar4);
        func_0x000107c615e8(lVar5);
        func_0x000107c61170(param_1);
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_3);
        func_0x000107c61170(param_4);
        func_0x000107c61170(param_5);
        func_0x000107c61170(param_6);
        goto LAB_102b3b6e8;
      }
      func_0x000107c615e8(lVar1);
      func_0x000107c615e8(lVar3);
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
      func_0x000107c61170(param_3);
      func_0x000107c61170(param_4);
    }
    func_0x000107c61170(param_5);
  }
LAB_102b3b6e0:
  func_0x000107c61170(param_6);
LAB_102b3b6e8:
  func_0x000107c61170(param_7);
  return unaff_x20;
}



/* Entry: 102b3b7d0; end: 102b3b81f;  */

undefined8 FUN_102b3b7d0(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
    func_0x000107c6157c(lVar1);
    func_0x000107c42194(uVar2);
    uVar2 = *(undefined8 *)(lVar1 + 0x38);
    *(undefined8 *)(lVar1 + 0x38) = 0;
    func_0x000107c61574(lVar1);
    func_0x000107c61170(uVar2);
  }
  return 0;
}



/* Entry: 102b3b820; end: 102b3b843;  */

void FUN_102b3b820(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b3b844; end: 102b3b847;  */

void FUN_102b3b844(void)

{
  return;
}



/* Entry: 102b3b848; end: 102b3b86b;  */

undefined8 FUN_102b3b848(void)

{
  FUN_102b3b7d0();
  return 0;
}



/* Entry: 102b3b86c; end: 102b3b88b;  */

void FUN_102b3b86c(void)

{
  func_0x000107c61168(&PTR_PTR_112ef57a0);
  return;
}



/* Entry: 102b3b88c; end: 102b3b927;  */

long FUN_102b3b88c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  uVar1 = param_4;
  func_0x000107c4aeb0(param_4);
  func_0x000107c61180();
  FUN_102b3b928(param_3,uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar1);
  return unaff_x20;
}



/* Entry: 102b3b928; end: 102b3ba6f;  */

void FUN_102b3b928(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_58 [24];
  undefined *puStack_40;
  undefined **ppuStack_38;
  
  func_0x000107c4d524();
  func_0x000107c61180();
  func_0x000107c4aeb4();
  func_0x000107c61180();
  lVar1 = 0;
  FUN_102b4106c();
  func_0x000107c613fc();
  puStack_40 = &UNK_11059ffc8;
  ppuStack_38 = &PTR_DAT_11059ffd8;
  pcVar2 = "MemoriesInLensCarouselController";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(char **)(lVar1 + 0x48) = pcVar2;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  *(undefined8 *)(lVar1 + 0x18) = param_2;
  FUN_102b3badc(auStack_58,lVar1 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  *(long *)(unaff_x20 + 0x10) = lVar1;
  func_0x000107c61574(uVar3);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    func_0x000102b40c4c();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 102b3ba70; end: 102b3ba93;  */

void FUN_102b3ba70(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b3ba94; end: 102b3ba97;  */

void FUN_102b3ba94(void)

{
  return;
}



/* Entry: 102b3ba98; end: 102b3babb;  */

undefined8 FUN_102b3ba98(void)

{
  func_0x000102b3b9f4();
  return 0;
}



/* Entry: 102b3babc; end: 102b3badb;  */

void FUN_102b3babc(void)

{
  func_0x000107c61168(&PTR_PTR_112ef5840);
  return;
}



/* Entry: 102b3badc; end: 102b3bb07;  */

undefined8 * FUN_102b3badc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 102b3bb08; end: 102b3bc4b;  */

/* WARNING: Possible PIC construction at 0x000102b3bb88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b3bc28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b3bbd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b3bc2c) */
/* WARNING: Removing unreachable block (ram,0x000102b3bb8c) */
/* WARNING: Removing unreachable block (ram,0x000102b3bbdc) */
/* WARNING: Removing unreachable block (ram,0x000102b3bc00) */

void FUN_102b3bb08(long param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    func_0x000107c602fc(0x21);
  }
  else {
    func_0x000107c602fc(0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(0xe000000000000000);
  return;
}



/* Entry: 102b3bc4c; end: 102b3bc5b;  */

void FUN_102b3bc4c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 102b3bc5c; end: 102b3bcaf;  */

long FUN_102b3bc5c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 102b3bcb0; end: 102b3bcc3;  */

/* WARNING: Possible PIC construction at 0x000102b3bcd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b3bcdc) */

void FUN_102b3bcb0(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*param_1,param_1[1],param_1[1],param_1[2],param_1[3],*(undefined1 *)(param_1 + 4));
  return;
}



/* Entry: 102b3bcc4; end: 102b3bceb;  */

/* WARNING: Possible PIC construction at 0x000102b3bcd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b3bcdc) */

void FUN_102b3bcc4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102b3bcec; end: 102b3bdbb;  */

undefined8 * FUN_102b3bcec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = *(undefined1 *)(param_2 + 4);
  func_0x000102b3bc88(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return param_1;
}



/* Entry: 102b3bdbc; end: 102b3be03;  */

undefined8 * FUN_102b3bdbc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined1 *)(param_2 + 4);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar4 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar3;
  FUN_102b3bcc4(uVar5,uVar1,uVar2,uVar6,uVar4);
  return param_1;
}



/* Entry: 102b3be04; end: 102b3beb7;  */

int FUN_102b3be04(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 8) ^ 0xff;
  if (*(byte *)(param_1 + 8) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 102b3beb8; end: 102b3bf13; -[_TtC29LensCarouselFeaturesWorkflows40LensFeatureCaptureButtonOverrideWorkflow init] */

void FUN_102b3beb8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("LensCarouselFeaturesWorkflows.LensFeatureCaptureButtonOverrideWorkflow",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102b3bee4);
  (*pcVar1)();
}



/* Entry: 102b3bf14; end: 102b3bfab; -[_TtC29LensCarouselFeaturesWorkflows40LensFeatureCaptureButtonOverrideWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102b3bf80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b3bf84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b3bf14(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ef58a0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ef58a8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112ef58b0));
  func_0x0001000834e4(param_1 + _DAT_112ef58b8);
  func_0x0001000834e4(param_1 + _DAT_112ef58c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ef58c8));
  return;
}



/* Entry: 102b3bfac; end: 102b3bfcb;  */

void FUN_102b3bfac(void)

{
  func_0x000107c61168(&PTR_PTR_11288c680);
  return;
}



/* Entry: 102b3bfcc; end: 102b3c41f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b3bfcc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  code *pcVar9;
  undefined1 *puVar10;
  long *plVar11;
  long *plVar12;
  code *pcVar13;
  ulong uVar14;
  long unaff_x20;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_88 [8];
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  lVar8 = _DAT_112ef58d8;
  if (*(long *)(unaff_x20 + _DAT_112ef58d8) != 0) {
    return;
  }
  puVar3 = &UNK_1105a00d0;
  puVar1 = puVar3;
  func_0x000107c613fc(&UNK_1105a00d0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = puVar3;
  func_0x000107c613fc(&UNK_1105a00d0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  func_0x000107c613fc(&UNK_1105a00d0,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  lVar4 = 0;
  func_0x000102b3e5ac();
  func_0x000107c613fc();
  lVar5 = 0x112ea35c0;
  func_0x0001000285a8(0x112ea35c0,&UNK_10dab5c00);
  uVar14 = (ulong)*(uint *)(lVar5 + 0x30);
  func_0x000107c613fc();
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  puVar6 = puVar3;
  func_0x000107c6157c();
  func_0x0001000c2754();
  *(undefined **)(lVar4 + 0x48) = puVar6;
  *(undefined1 *)(lVar4 + 0x40) = 0;
  *(code **)(lVar4 + 0x10) = FUN_102b3cc80;
  *(undefined **)(lVar4 + 0x18) = puVar1;
  *(code **)(lVar4 + 0x20) = FUN_102b3cc88;
  *(undefined **)(lVar4 + 0x28) = puVar2;
  *(undefined8 *)(lVar4 + 0x30) = 0x102b3cca4;
  *(undefined **)(lVar4 + 0x38) = puVar3;
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  uVar15 = *(undefined8 *)(unaff_x20 + lVar8);
  *(long *)(unaff_x20 + lVar8) = lVar4;
  func_0x000107c6157c(lVar4);
  func_0x000107c61574(uVar15);
  FUN_102b3d858(lVar4);
  plVar7 = *(long **)(unaff_x20 + _DAT_112ef58a0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (plVar7 != (long *)0x0) {
    lVar8 = *(long *)(unaff_x20 + _DAT_112ef58a8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar8 != 0) {
      uVar15 = 0;
      func_0x0001000c6560();
      func_0x000107c613fc();
      func_0x0001000c6580();
      uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112ef58c8);
      *(undefined8 *)(unaff_x20 + _DAT_112ef58c8) = uVar15;
      func_0x000107c6157c();
      func_0x000107c61574(uVar16);
      func_0x0001000285a8(0x112ef5908,&UNK_10db242f8);
      lVar5 = lVar8;
      func_0x000107c4b408(lVar8);
      func_0x000107c61180();
      lVar4 = lVar5;
      func_0x0001000b637c();
      func_0x000107c61170(lVar5);
      pcVar9 = FUN_102b3c5a0;
      func_0x0001000bfde0(FUN_102b3c5a0,0,PTR___sSbN_11034dd40);
      func_0x000107c61574(lVar4);
      auStack_88[0] = 1;
      puVar10 = auStack_88;
      func_0x0001006c71a4(puVar10);
      func_0x000107c61574(pcVar9);
      func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
      plVar11 = plVar7;
      func_0x000107c51c8c();
      func_0x000107c61180();
      plVar12 = plVar11;
      func_0x0001000b637c();
      func_0x000107c61170(plVar11);
      plVar11 = plVar12;
      func_0x0001006c733c();
      puVar3 = &UNK_1105a00d0;
      func_0x000107c613fc(&UNK_1105a00d0,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      puVar1 = &UNK_1105a00f8;
      func_0x000107c613fc(&UNK_1105a00f8,0x20,7);
      *(code **)(puVar1 + 0x10) = FUN_102b3ccc0;
      *(undefined **)(puVar1 + 0x18) = puVar3;
      pcVar9 = FUN_102b3ccc8;
      puVar3 = puVar1;
      (**(code **)(*plVar11 + 0x60))(FUN_102b3ccc8);
      func_0x000107c61574(plVar11);
      func_0x000107c61574(puVar1);
      pcVar13 = pcVar9;
      func_0x000107c614f0(pcVar9);
      (**(code **)(puVar3 + 0x10))(uVar15,pcVar13,puVar3);
      func_0x000107c615e8(plVar7);
      func_0x000107c615e8(lVar8);
      func_0x000107c61574(uVar15);
      func_0x000107c61574(puVar10);
      func_0x000107c61574(plVar12);
      func_0x000107c615e8(pcVar9);
      return;
    }
    func_0x000107c615e8(plVar7);
  }
  func_0x000107c61174();
  lVar8 = unaff_x20;
  func_0x000107c417f0();
  func_0x000107c61180();
  func_0x000107c5faec();
  func_0x000107c61170(unaff_x20);
  func_0x000107c61170(lVar8);
  uStack_78 = 0xd000000000000036;
  uStack_70 = 0x800000010f0f2160;
  uStack_68 = 1;
  lVar8 = unaff_x20 + _DAT_112ef58b8;
  uVar15 = *(undefined8 *)(lVar8 + 0x18);
  lVar5 = *(long *)(lVar8 + 0x20);
  uStack_80 = uVar14;
  func_0x0001000a8868(lVar8,uVar15);
  (**(code **)(lVar5 + 8))(auStack_88,uVar15,lVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar14);
  return;
}



/* Entry: 102b3c420; end: 102b3c4d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b3c420(long param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_112ef58d0);
    if (lVar2 != 0) {
      param_1 = param_1 + _DAT_112ef58c0;
      lVar1 = *(long *)(param_1 + 0x20);
      func_0x0001000a8868(param_1,*(undefined8 *)(param_1 + 0x18));
      pcVar3 = *(code **)(lVar1 + 8);
      func_0x000107c61174(lVar2);
      (*pcVar3)();
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102b3c4d4; end: 102b3c59f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b3c4d4(long param_1,uint param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar3 = *(long *)(param_1 + _DAT_112ef58d0);
    if (lVar3 != 0) {
      param_1 = param_1 + _DAT_112ef58c0;
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      lVar2 = *(long *)(param_1 + 0x20);
      func_0x0001000a8868(param_1,uVar1);
      pcVar4 = *(code **)(lVar2 + 0x10);
      func_0x000107c61174(lVar3);
      (*pcVar4)(param_2 & 1,lVar3,uVar1,lVar2);
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102b3c5a0; end: 102b3c5ef;  */

void FUN_102b3c5a0(undefined1 *param_1)

{
  undefined1 auStack_60 [16];
  undefined1 *puStack_50;
  undefined1 auStack_40 [16];
  undefined1 *puStack_30;
  
  *param_1 = 1;
  puStack_50 = param_1;
  puStack_30 = param_1;
  func_0x00010450d87c(0x102b3cd18,auStack_40,0x102b3cd24,auStack_60);
  return;
}



/* Entry: 102b3c5f0; end: 102b3c65f;  */

void FUN_102b3c5f0(uint param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_102b3c660(param_2,param_1 & 1);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 102b3c660; end: 102b3c83f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b3c660(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined1 uStack_81;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  puVar1 = &UNK_1105a0120;
  func_0x000107c613fc(&UNK_1105a0120,0x18,7);
  plVar7 = (long *)(puVar1 + 0x10);
  *plVar7 = 0;
  pcStack_60 = FUN_102b3ccf4;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1019eb2d8;
  puStack_68 = &UNK_1105a0138;
  ppuVar2 = &puStack_80;
  puStack_58 = puVar1;
  func_0x000107c60bc4(ppuVar2);
  puVar5 = puStack_58;
  func_0x000107c6157c(puVar1);
  func_0x000107c61574(puVar5);
  func_0x000107c4c6bc(param_1);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61428(plVar7,&puStack_80,0,0);
  lVar6 = *plVar7;
  if (lVar6 != 0) {
    lVar3 = lVar6;
    func_0x000107c61174();
    lVar4 = lVar3;
    func_0x000107c4e1e0();
    if ((int)lVar4 != 0) {
      uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ef58d0);
      *(long *)(unaff_x20 + _DAT_112ef58d0) = lVar6;
      func_0x000107c61174(lVar3);
      func_0x000107c61170(uVar8);
      if ((param_2 & 1) == 0) {
        puVar5 = *(undefined **)(unaff_x20 + _DAT_112ef58d8);
        if (puVar5 != (undefined *)0x0) {
          puVar5[0x40] = 0;
          uStack_81 = 0;
          func_0x000107c6157c(puVar5);
          func_0x0001002a64a8(&uStack_81);
          func_0x000107c61574(puVar1);
          puVar1 = puVar5;
        }
      }
      else {
        func_0x000102b3ca10();
      }
      func_0x000107c61574(puVar1);
      func_0x000107c61170(lVar3);
      return;
    }
    func_0x000107c61170(lVar3);
  }
  uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ef58d0);
  *(undefined8 *)(unaff_x20 + _DAT_112ef58d0) = 0;
  func_0x000107c61170(uVar8);
  puVar5 = *(undefined **)(unaff_x20 + _DAT_112ef58d8);
  if (puVar5 != (undefined *)0x0) {
    puVar5[0x40] = 0;
    uStack_81 = 0;
    func_0x000107c6157c(puVar5);
    func_0x0001002a64a8(&uStack_81);
    func_0x000107c61574(puVar1);
    puVar1 = puVar5;
  }
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 102b3c840; end: 102b3c8f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b3c840(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 uStack_31;
  
  lVar1 = _DAT_112ef58d8;
  if (*(long *)(unaff_x20 + _DAT_112ef58d8) != 0) {
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112ef58c8);
    *(undefined8 *)(unaff_x20 + _DAT_112ef58c8) = 0;
    func_0x000107c61574(uVar2);
    lVar3 = *(long *)(unaff_x20 + lVar1);
    if (lVar3 == 0) {
      uVar2 = 0;
    }
    else {
      *(undefined1 *)(lVar3 + 0x40) = 0;
      uStack_31 = 0;
      func_0x000107c6157c(lVar3);
      func_0x0001002a64a8(&uStack_31);
      func_0x000107c61574(lVar3);
      uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
    }
    *(undefined8 *)(unaff_x20 + lVar1) = 0;
    func_0x000107c61574(uVar2);
    uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ef58b0) + _DAT_112ef5ac8);
    *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112ef58b0) + _DAT_112ef5ac8) = 0;
    func_0x000107c61574(uVar2);
  }
  return;
}



/* Entry: 102b3c8f4; end: 102b3c933;  */

void FUN_102b3c8f4(void)

{
  FUN_102b3bfcc();
  return;
}



/* Entry: 102b3c934; end: 102b3caaf;  */

/* WARNING: Possible PIC construction at 0x000102b3c9e0: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b3c934(ulong param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 uStack_32;
  undefined1 uStack_31;
  
  if ((param_1 & 1) == 0) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112ef58d0);
    if (lVar1 != 0) {
      func_0x000107c61174();
      lVar2 = lVar1;
      func_0x000107c4e1e0();
      if (((int)lVar2 != 0) && (lVar2 = *(long *)(unaff_x20 + _DAT_112ef58d8), lVar2 != 0)) {
        *(undefined1 *)(lVar2 + 0x40) = 1;
        uStack_31 = 1;
        func_0x000107c6157c(lVar2);
        func_0x0001002a64a8(&uStack_31);
        func_0x000107c61574(lVar2);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  else {
    lVar1 = *(long *)(unaff_x20 + _DAT_112ef58d8);
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0x40) = 0;
      uStack_32 = 0;
      func_0x000107c6157c(lVar1);
      func_0x0001002a64a8(&uStack_32);
      func_0x000107c61574(lVar1);
    }
  }
  return;
}



/* Entry: 102b3cab0; end: 102b3cadf; -[_TtC29LensCarouselFeaturesWorkflows40LensFeatureCaptureButtonOverrideWorkflow setUIHidden:] */

void FUN_102b3cab0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_102b3c934(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102b3cae0; end: 102b3cbb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102b3cae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + _DAT_112ef58b0) + _DAT_112ef5ac8);
  if ((lVar2 == 0) || (*(char *)(lVar2 + 0x40) != '\x01')) {
    lVar2 = 0;
  }
  else {
    lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112ef58b0) + _DAT_112ef5ad0);
    lVar2 = lVar1;
    if (lVar1 != 0) {
      uVar3 = param_1;
      uVar4 = param_2;
      func_0x000107c61174();
      func_0x000107c3ec60();
      lVar2 = lVar1;
      func_0x000107c4071c(param_1,param_2,lVar1,param_6,0);
      func_0x000107c609a4(uVar3,uVar4,param_3,param_4,param_1,param_2);
      func_0x000107c61170(lVar1);
    }
  }
  return lVar2;
}



/* Entry: 102b3cbb8; end: 102b3cc03; -[_TtC29LensCarouselFeaturesWorkflows40LensFeatureCaptureButtonOverrideWorkflow isPointInsideView:] */

uint FUN_102b3cbb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_3;
  FUN_102b3cae0(param_1,param_2);
  func_0x000107c61170(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 102b3cc04; end: 102b3cc33; -[_TtC29LensCarouselFeaturesWorkflows40LensFeatureCaptureButtonOverrideWorkflow isCameraRecordingDisabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102b3cc04(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + _DAT_112ef58b0) + _DAT_112ef5ac8);
  if (lVar1 != 0) {
    return *(undefined1 *)(lVar1 + 0x40);
  }
  return 0;
}



/* Entry: 102b3cc34; end: 102b3cc7f;  */

void FUN_102b3cc34(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,1,0);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_2 + 0x10) = param_1;
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 102b3cc80; end: 102b3cc87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102b3cc80(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  code *pcVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + _DAT_112ef58d0);
    if (lVar3 != 0) {
      lVar2 = lVar2 + _DAT_112ef58c0;
      lVar1 = *(long *)(lVar2 + 0x20);
      func_0x0001000a8868(lVar2,*(undefined8 *)(lVar2 + 0x18));
      pcVar4 = *(code **)(lVar1 + 8);
      func_0x000107c61174(lVar3);
      (*pcVar4)();
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102b3cc88; end: 102b3ccbf;  */

void FUN_102b3cc88(void)

{
  FUN_102b3c4d4();
  return;
}



/* Entry: 102b3ccc0; end: 102b3ccc7;  */

void FUN_102b3ccc0(uint param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102b3c660(param_2,param_1 & 1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102b3ccc8; end: 102b3ccf3;  */

void FUN_102b3ccc8(undefined1 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 102b3ccf4; end: 102b3cd33;  */

void FUN_102b3ccf4(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 102b3cd34; end: 102b3cd8f;  */

long FUN_102b3cd34(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar2 = *(long *)(unaff_x20 + 0x40);
  lVar1 = lVar2;
  if (lVar2 == 1) {
    lVar1 = unaff_x20;
    FUN_102b3cd90();
    uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
    *(long *)(unaff_x20 + 0x40) = lVar1;
    func_0x000107c615f0();
    FUN_102b3d038(uVar3);
  }
  func_0x000102b3d048(lVar2);
  return lVar1;
}



/* Entry: 102b3cd90; end: 102b3ce5b;  */

void FUN_102b3cd90(undefined8 ****param_1)

{
  undefined8 ***pppuVar1;
  undefined8 ***pppuVar2;
  undefined8 *****pppppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ****ppppuStack_68;
  undefined8 **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  pppuVar4 = *param_1;
  pppuVar2 = param_1[2];
  func_0x000107c5c734();
  func_0x000107c61180();
  if (pppuVar2 == (undefined8 ***)0x0) {
    pppuVar2 = param_1[6];
    pppuVar1 = param_1[7];
    func_0x0001000a8868(param_1 + 3,pppuVar2);
    ppppuStack_68 = param_1;
    func_0x000107c6157c(param_1);
    pppppuVar3 = &ppppuStack_68;
    func_0x000107c5fb18();
    uStack_58 = 0xd000000000000013;
    uStack_50 = 0x800000010f0f21f0;
    uStack_48 = 1;
    ppppuStack_68 = pppppuVar3;
    ppuStack_60 = pppuVar4;
    (*(code *)pppuVar1[1])(&ppppuStack_68,pppuVar2,pppuVar1);
    func_0x000107c6142c(pppuVar4);
  }
  return;
}



/* Entry: 102b3ce5c; end: 102b3ceaf;  */

void FUN_102b3ce5c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
  FUN_102b3d038(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b3ceb0; end: 102b3d017;  */

/* WARNING: Possible PIC construction at 0x000102b3cf1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102b3cf74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102b3cf20) */
/* WARNING: Removing unreachable block (ram,0x000102b3cf78) */

void FUN_102b3ceb0(ulong param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_1;
  lVar2 = param_2;
  FUN_102b3cd34();
  if (uVar1 == 0) {
    return;
  }
  func_0x000107c4b1dc();
  func_0x000107c61180();
  if ((param_1 & 1) != 0) {
    if (param_2 == 0) {
      param_2 = 0;
      func_0x000107c5faec(0);
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar2);
    }
    func_0x000107c5b160(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  if (param_2 == 0) {
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar2);
  }
  func_0x000107c5b15c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 102b3d018; end: 102b3d037;  */

void FUN_102b3d018(void)

{
  FUN_102b3ceb0();
  return;
}



/* Entry: 102b3d038; end: 102b3d057;  */

void FUN_102b3d038(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 102b3d058; end: 102b3d0a3;  */

void FUN_102b3d058(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102b3d0a4; end: 102b3d1cb;  */

void FUN_102b3d0a4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long *unaff_x20;
  long lVar4;
  ulong uStack_48;
  
  lVar4 = *unaff_x20;
  func_0x0001000d224c(&uStack_48);
  uVar3 = uStack_48;
  func_0x000107c49f94();
  func_0x000107c615e8(uStack_48);
  if ((uVar3 & 1) == 0) {
    uVar1 = *(undefined8 *)(lVar4 + 0x28);
    lVar2 = *(long *)(lVar4 + 0x30);
    func_0x0001000a8868(lVar4 + 0x10,uVar1);
    (**(code **)(lVar2 + 8))(param_1,uVar1,lVar2);
  }
  return;
}


