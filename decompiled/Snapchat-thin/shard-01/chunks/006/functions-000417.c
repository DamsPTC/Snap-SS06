/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10129cd94; end: 10129ce0b;  */

void FUN_10129cd94(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x00010129d3e8(0,param_1,param_2);
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



/* Entry: 10129ce0c; end: 10129ce8b;  */

undefined1  [16] FUN_10129ce0c(ulong param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long unaff_x20;
  undefined8 uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_88 [56];
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = param_1;
  func_0x000107c5faec();
  func_0x000107c6068c(auStack_88,uVar8);
  puVar1 = auStack_88;
  func_0x000107c5fb58(puVar1,uVar6,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  uVar6 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar7 = (ulong)puVar1 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) == 0) {
    uVar9 = 0;
  }
  else {
    while( true ) {
      uVar2 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar7 * 8);
      func_0x000107c5faec();
      uVar3 = param_1;
      puVar4 = puVar1;
      func_0x000107c5faec();
      if (uVar2 == uVar3 && puVar1 == puVar4) break;
      puVar5 = puVar1;
      func_0x000107c605b8(uVar2,puVar1,uVar3,puVar4,0);
      uVar9 = (uint)uVar2;
      func_0x000107c6142c(puVar1);
      func_0x000107c6142c(puVar4);
      if (((uVar2 & 1) != 0) ||
         (uVar7 = uVar7 + 1 & ~uVar6, puVar1 = puVar5,
         (*(ulong *)(unaff_x20 + 0x40 + (uVar7 >> 6) * 8) >> (uVar7 & 0x3f) & 1) == 0))
      goto LAB_10129cf64;
    }
    func_0x000107c6142c(puVar1);
    func_0x000107c6142c(puVar4);
    uVar9 = 1;
  }
LAB_10129cf64:
  auVar10._8_4_ = uVar9 & 1;
  auVar10._0_8_ = uVar7;
  auVar10._12_4_ = 0;
  return auVar10;
}



/* Entry: 10129ce8c; end: 10129d087;  */

undefined1  [16] FUN_10129ce8c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  uint uVar7;
  undefined1 auVar8 [16];
  
  uVar5 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar6 = param_2 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0) {
    uVar7 = 0;
  }
  else {
    while( true ) {
      uVar1 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + uVar6 * 8);
      func_0x000107c5faec();
      uVar2 = param_1;
      uVar3 = param_2;
      func_0x000107c5faec();
      if (uVar1 == uVar2 && param_2 == uVar3) break;
      uVar4 = param_2;
      func_0x000107c605b8(uVar1,param_2,uVar2,uVar3,0);
      uVar7 = (uint)uVar1;
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(uVar3);
      if (((uVar1 & 1) != 0) ||
         (uVar6 = uVar6 + 1 & ~uVar5, param_2 = uVar4,
         (*(ulong *)(unaff_x20 + 0x40 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) == 0))
      goto LAB_10129cf64;
    }
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(uVar3);
    uVar7 = 1;
  }
LAB_10129cf64:
  auVar8._8_4_ = uVar7 & 1;
  auVar8._0_8_ = uVar6;
  auVar8._12_4_ = 0;
  return auVar8;
}



/* Entry: 10129d088; end: 10129d253;  */

undefined * FUN_10129d088(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  lVar2 = 0x112d6ea08;
  func_0x0001000285a8(0x112d6ea08,&UNK_10dc2cd60);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)PTR__NSHTTPCookieName_1103454a8;
  *(undefined8 *)(lVar2 + 0x18) = 8;
  *(undefined8 *)(lVar2 + 0x10) = 4;
  puVar5 = PTR___sSSN_11034da80;
  *(undefined8 *)(lVar2 + 0x28) = 0x646964702d6373;
  *(undefined8 *)(lVar2 + 0x30) = 0xe700000000000000;
  uVar8 = *(undefined8 *)PTR__NSHTTPCookieValue_1103454d0;
  *(undefined **)(lVar2 + 0x40) = puVar5;
  *(undefined8 *)(lVar2 + 0x48) = uVar8;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c2bc20();
  puVar3 = PTR___ss5Int64VN_11034ee50;
  puVar7 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
  func_0x000107c6057c();
  *(undefined **)(lVar2 + 0x50) = puVar3;
  *(undefined **)(lVar2 + 0x58) = puVar7;
  uVar8 = *(undefined8 *)PTR__NSHTTPCookieDomain_110345498;
  *(undefined **)(lVar2 + 0x68) = puVar5;
  *(undefined8 *)(lVar2 + 0x70) = uVar8;
  *(undefined8 *)(lVar2 + 0x78) = 0xd000000000000015;
  *(undefined8 *)(lVar2 + 0x80) = 0x800000010ef12950;
  uVar8 = *(undefined8 *)PTR__NSHTTPCookiePath_1103454b8;
  *(undefined **)(lVar2 + 0x90) = puVar5;
  *(undefined8 *)(lVar2 + 0x98) = uVar8;
  *(undefined **)(lVar2 + 0xb8) = puVar5;
  *(undefined8 *)(lVar2 + 0xa0) = 0x2f;
  *(undefined8 *)(lVar2 + 0xa8) = 0xe100000000000000;
  func_0x000107c61174();
  func_0x000107c61174(uVar8);
  lVar4 = lVar2;
  func_0x00010129cf84(lVar2);
  func_0x000107c61588(lVar2);
  uVar8 = 0x112d6ea10;
  func_0x0001000285a8(0x112d6ea10,&UNK_10d9307f0);
  func_0x000107c61408((undefined8 *)(lVar2 + 0x20),4,uVar8);
  puVar5 = PTR__OBJC_CLASS___NSHTTPCookie_1126aedf0;
  func_0x000107c610f8();
  uVar6 = 0;
  FUN_10129b9f4(0);
  uVar8 = uVar6;
  FUN_10129d354();
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,uVar6,PTR___sypN_11034f1a8 + 8,uVar8);
  func_0x000107c6142c(lVar4);
  func_0x000107c48194();
  func_0x000107c61170(lVar2);
  if (puVar5 != (undefined *)0x0) {
    return puVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10129d254);
  (*pcVar1)();
}



/* Entry: 10129d254; end: 10129d2c3;  */

void FUN_10129d254(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined1 auStack_a0 [8];
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar5 = 0;
  func_0x000107c5ede0();
  uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar9 = uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff);
  uVar8 = *(long *)(*(long *)(lVar5 + -8) + 0x40) + uVar9 + 7 & 0xfffffffffffffff8;
  puVar1 = (undefined8 *)(unaff_x20 + uVar8);
  pcStack_78 = (code *)*puVar1;
  uStack_80 = puVar1[1];
  uStack_88 = *(undefined8 *)(unaff_x20 + (uVar8 + 0x17 & 0xffffffffffffff8));
  lVar2 = 0;
  func_0x000107c5fb10();
  lVar12 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  puVar14 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  func_0x000107c5ede0();
  lVar11 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)puVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  func_0x000107c5eb08();
  lStack_98 = *(long *)(lVar3 + -8);
  lStack_90 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  lVar13 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar11 + 0x10))(lVar10,unaff_x20 + uVar9,lVar5);
  func_0x000107c5eaec(lVar13,0x404e000000000000,lVar10,0);
  func_0x000107c5ead0(0x54534f50,0xe400000000000000);
  func_0x000107c5eaf8(param_1,param_2,0xd000000000000013,0x800000010ef33080);
  func_0x000107c5eaf8(0xd000000000000021,0x800000010ef330a0,0x2d746e65746e6f43,0xec00000065707954);
  lVar5 = 0x112d38300;
  func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
  func_0x000107c61538();
  lVar3 = lVar5;
  func_0x0001001830b8();
  uVar6 = 0x112d38308;
  func_0x00010129d314(lVar5 + 0x20,0x112d38308,&UNK_10d902040);
  lVar5 = lVar3;
  FUN_10129d438();
  func_0x000107c6142c(lVar3);
  lStack_70 = lVar5;
  uStack_68 = uVar6;
  func_0x000107c5fb04(puVar14);
  FUN_100e8b654();
  uVar7 = 0;
  puVar4 = puVar14;
  func_0x000107c60214(puVar14,0,PTR___sSSN_11034da80,lVar3);
  (**(code **)(lVar12 + 8))(puVar14,lVar2);
  func_0x000107c6142c(uVar6);
  func_0x000107c5eb00(puVar4,uVar7);
  lVar5 = 0x112d6ea00;
  FUN_10129cd94(0x112d6ea00,&PTR__OBJC_CLASS___NSHTTPCookie_1126aedf0,0x112d6e9f8,&UNK_10d9307e0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x18) = 3;
  *(undefined8 *)(lVar5 + 0x10) = 1;
  *(undefined8 *)(lVar5 + 0x20) = uStack_88;
  func_0x000107c61174();
  (*pcStack_78)(lVar13,lVar5);
  func_0x000107c61574(lVar5);
  (**(code **)(lStack_98 + 8))(lVar13,lStack_90);
  return;
}



/* Entry: 10129d2c4; end: 10129d353;  */

void FUN_10129d2c4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5ed90(uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff));
  func_0x000107c4b788(uVar3,param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10129d354; end: 10129d397;  */

void FUN_10129d354(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d6e8c0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10129b9f4(0xff);
  puVar2 = &UNK_10d930714;
  func_0x000107c61520(&UNK_10d930714,uVar1);
  puRam0000000112d6e8c0 = puVar2;
  return;
}



/* Entry: 10129d398; end: 10129d427;  */

undefined8 FUN_10129d398(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d6ea10;
  func_0x0001000285a8(0x112d6ea10,&UNK_10d9307f0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10129d428; end: 10129d437;  */

void FUN_10129d428(long param_1,long param_2)

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



/* Entry: 10129d438; end: 10129d5ef;  */

/* WARNING: Removing unreachable block (ram,0x00010129d5a0) */

undefined1  [16] FUN_10129d438(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lStack_60;
  
  lStack_60 = 0;
  uVar8 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar10 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar10 = uVar10 & *(ulong *)(param_1 + 0x40);
  func_0x000107c61434();
  lVar11 = 0;
  while( true ) {
    for (; uVar10 != 0; uVar10 = uVar10 - 1 & uVar10) {
      uVar9 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = lVar11 << 10 | LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) << 4;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar9);
      uVar2 = *puVar1;
      uVar4 = puVar1[1];
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar9);
      uVar3 = *puVar1;
      uVar5 = puVar1[1];
      func_0x000107c61434();
      func_0x000107c61434(uVar5);
      func_0x000107c5fb78(0x3d,0xe100000000000000);
      func_0x000107c5fb78(uVar3,uVar5);
      func_0x000107c6142c(uVar5);
      func_0x000107c5fb78(0x26,0xe100000000000000);
      func_0x000107c5fb78(uVar2,uVar4);
      func_0x000107c6142c(uVar4);
    }
    bVar7 = SCARRY8(lVar11,1);
    lVar11 = lVar11 + 1;
    if (bVar7) break;
    if ((long)(uVar8 + 0x3f >> 6) <= lVar11) {
      func_0x000107c61574(param_1);
      lVar11 = lStack_60;
      func_0x000107c5fb5c(0,0xe000000000000000);
      if (1 < lVar11) {
        func_0x000107c5fb64(7,0,0xe000000000000000);
        func_0x000107c5fb7c();
        func_0x000107c6142c(lStack_60);
      }
      return ZEXT816(0xe000000000000000) << 0x40;
    }
    uVar10 = ((ulong *)(param_1 + 0x40))[lVar11];
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10129d5f0);
  (*pcVar6)();
}



/* Entry: 10129d5f0; end: 10129d9ff;  */

undefined1  [16] FUN_10129d5f0(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe0;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef33190);
  uVar3 = 0x6669746f4e646d44;
  func_0x000107c5fadc(0x6669746f4e646d44,0xef6e6f6974616369);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10129d6c0);
  (*pcVar1)();
}



/* Entry: 10129da00; end: 10129da0b; -[SCDmdDeepLinkProcessorEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129da00(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6ea20;
  func_0x000107c61428(param_1 + _DAT_112d6ea20,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10129da0c; end: 10129da17; -[SCDmdDeepLinkProcessorEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129da0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6ea20;
  func_0x000107c61428(param_1 + _DAT_112d6ea20,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10129da18; end: 10129da23; -[SCDmdDeepLinkProcessorEntryPoint circumstanceEngineServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129da18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6ea28;
  func_0x000107c61428(param_1 + _DAT_112d6ea28,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10129da24; end: 10129da2f; -[SCDmdDeepLinkProcessorEntryPoint setCircumstanceEngineServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129da24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6ea28;
  func_0x000107c61428(param_1 + _DAT_112d6ea28,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10129da30; end: 10129da3b; -[SCDmdDeepLinkProcessorEntryPoint navigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129da30(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6ea30;
  func_0x000107c61428(param_1 + _DAT_112d6ea30,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10129da3c; end: 10129da47; -[SCDmdDeepLinkProcessorEntryPoint setNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129da3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6ea30;
  func_0x000107c61428(param_1 + _DAT_112d6ea30,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10129da48; end: 10129da53; -[SCDmdDeepLinkProcessorEntryPoint snapTokenServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129da48(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6ea38;
  func_0x000107c61428(param_1 + _DAT_112d6ea38,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10129da54; end: 10129da5f; -[SCDmdDeepLinkProcessorEntryPoint setSnapTokenServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129da54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6ea38;
  func_0x000107c61428(param_1 + _DAT_112d6ea38,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10129da60; end: 10129da6b; -[SCDmdDeepLinkProcessorEntryPoint userBlizzardServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129da60(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6ea40;
  func_0x000107c61428(param_1 + _DAT_112d6ea40,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10129da6c; end: 10129daaf;  */

void FUN_10129da6c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10129dab0; end: 10129dabb; -[SCDmdDeepLinkProcessorEntryPoint setUserBlizzardServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129dab0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6ea40;
  func_0x000107c61428(param_1 + _DAT_112d6ea40,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10129dabc; end: 10129db0f;  */

void FUN_10129dabc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10129db10; end: 10129db57; -[SCDmdDeepLinkProcessorEntryPoint webBrowsingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129db10(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6ea48;
  func_0x000107c61428(param_1 + _DAT_112d6ea48,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10129db58; end: 10129dbbb; -[SCDmdDeepLinkProcessorEntryPoint setWebBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129db58(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6ea48;
  func_0x000107c61428(param_1 + _DAT_112d6ea48,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 10129dbbc; end: 10129e06b;  */

/* WARNING: Possible PIC construction at 0x00010129dce4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010129dd54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010129dd70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010129dee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010129df24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010129df34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010129df44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010129df54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010129e030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010129e008: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010129e018: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010129e028: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010129dfc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010129dfd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010129dfa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010129df84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010129df74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010129df88) */
/* WARNING: Removing unreachable block (ram,0x00010129dfa8) */
/* WARNING: Removing unreachable block (ram,0x00010129dfd8) */
/* WARNING: Removing unreachable block (ram,0x00010129dfc8) */
/* WARNING: Removing unreachable block (ram,0x00010129e02c) */
/* WARNING: Removing unreachable block (ram,0x00010129e01c) */
/* WARNING: Removing unreachable block (ram,0x00010129e00c) */
/* WARNING: Removing unreachable block (ram,0x00010129e034) */
/* WARNING: Removing unreachable block (ram,0x00010129df58) */
/* WARNING: Removing unreachable block (ram,0x00010129e030) */
/* WARNING: Removing unreachable block (ram,0x00010129df48) */
/* WARNING: Removing unreachable block (ram,0x00010129df38) */
/* WARNING: Removing unreachable block (ram,0x00010129df28) */
/* WARNING: Removing unreachable block (ram,0x00010129dee4) */
/* WARNING: Removing unreachable block (ram,0x00010129dd74) */
/* WARNING: Removing unreachable block (ram,0x00010129dd58) */
/* WARNING: Removing unreachable block (ram,0x00010129dce8) */
/* WARNING: Removing unreachable block (ram,0x00010129dffc) */
/* WARNING: Removing unreachable block (ram,0x00010129dcec) */
/* WARNING: Removing unreachable block (ram,0x00010129df78) */

void FUN_10129dbbc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c3fa0c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c4d52c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c5b410();
      func_0x000107c61180();
      if (lVar3 != 0) {
        lVar3 = unaff_x20;
        func_0x000107c5d900();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          func_0x000107c5e1d0();
          func_0x000107c61180();
          if (unaff_x20 == 0) {
            func_0x000107c61170(lVar1);
            lVar1 = lVar2;
          }
          else {
            FUN_10129bf74();
            func_0x000107c613fc();
            func_0x000107c3fa04();
            func_0x000107c61180();
            if (lVar2 != 0) {
              lVar1 = -0x2fffffffffffffe0;
              func_0x000107c5fadc(0xd000000000000020,0x800000010ef32f40);
              func_0x000107c3ebd4(lVar2);
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10129e06c; end: 10129e073;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129e06c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar7 = &lStack_40;
  uVar3 = 0x112d6e970;
  func_0x0001000285a8(0x112d6e970,&UNK_10d9307a0);
  uVar4 = *(undefined8 *)(lVar6 + _DAT_11307e0b8);
  func_0x0001000bda74(uVar4,uVar3);
  lVar5 = 0;
  FUN_10129cc7c();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112d6e978) = uVar4;
  *(undefined8 *)(lVar6 + _DAT_112d6e980) = uVar1;
  puVar2 = PTR_s_init_1125d9248;
  lStack_40 = lVar6;
  lStack_38 = lVar5;
  func_0x000107c61174(uVar1);
  func_0x000107c61154(&lStack_40,puVar2);
  param_1[3] = lVar5;
  param_1[4] = &PTR_DAT_11039bfb0;
  *param_1 = plVar7;
  return;
}



/* Entry: 10129e074; end: 10129e09b; -[SCDmdDeepLinkProcessorEntryPoint begin] */

void FUN_10129e074(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10129dbbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10129e09c; end: 10129e0df; -[SCDmdDeepLinkProcessorEntryPoint end] */

void FUN_10129e09c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10129e0e0; end: 10129e427;  */

void FUN_10129e0e0(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10ed550)) ||
       (func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53414();
    }
    else {
      uVar2 = 0;
      if (((param_2 == -0x2fffffffffffffee) && (param_3 == -0x7ffffffef10edf60)) ||
         (func_0x000107c605b8(0xd000000000000012,0x800000010ef120a0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c569f0();
      }
      else {
        if ((param_2 != -0x2fffffffffffffef) || (param_3 != -0x7ffffffef10cce40)) {
          uVar2 = 0xd000000000000011;
          func_0x000107c605b8(0xd000000000000011,0x800000010ef331c0,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffec) && (param_3 == -0x7ffffffef10ef610)) ||
               (func_0x000107c605b8(0xd000000000000014,0x800000010ef109f0,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c5a2fc();
            }
            else {
              uVar2 = 0xd000000000000017;
              if (((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10ed990)) &&
                 (func_0x000107c605b8(0xd000000000000017,0x800000010ef12670,param_2,param_3,0),
                 (uVar2 & 1) == 0)) {
                func_0x000107c602fc(0x15);
                func_0x000107c6142c(0xe000000000000000);
                func_0x000107c5fb78(param_2,param_3);
                func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                    "DmdNotificationHandler/SCDmdDeepLinkProcessorEntryPoint.swift",
                                    0x3d,2,0x3b,0);
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x10129e428);
                (*pcVar1)();
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c5a68c();
            }
            goto LAB_10129e16c;
          }
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c59490();
      }
    }
  }
LAB_10129e16c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10129e428; end: 10129e4d3; -[SCDmdDeepLinkProcessorEntryPoint setValue:forIvarName:] */

void FUN_10129e428(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_10129e0e0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10129e4d4; end: 10129e58f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129e4d4(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d6ea20,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6ea28,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6ea30,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6ea38,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6ea40,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d6ea48) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d6ea50) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10129e590; end: 10129e5af; -[SCDmdDeepLinkProcessorEntryPoint init] */

void FUN_10129e590(void)

{
  FUN_10129e4d4();
  return;
}



/* Entry: 10129e5b0; end: 10129e5e3;  */

void FUN_10129e5b0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10129e5e4; end: 10129e66b; -[SCDmdDeepLinkProcessorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129e5e4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d6ea20);
  func_0x000107c61610(param_1 + _DAT_112d6ea28);
  func_0x000107c61610(param_1 + _DAT_112d6ea30);
  func_0x000107c61610(param_1 + _DAT_112d6ea38);
  func_0x000107c61610(param_1 + _DAT_112d6ea40);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6ea48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d6ea50));
  return;
}



/* Entry: 10129e66c; end: 10129e68b;  */

void FUN_10129e66c(void)

{
  func_0x000107c61168(&PTR_PTR_1127c1d58);
  return;
}



/* Entry: 10129e68c; end: 10129e69b; -[_TtC43FamilyCenterDeepLinkProcessorImplementation29FamilyCenterDeepLinkProcessor identifier] */

void FUN_10129e68c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (&PTR____CFConstantStringClassReference_110f83ed8);
  return;
}



/* Entry: 10129e69c; end: 10129e6a3; -[_TtC43FamilyCenterDeepLinkProcessorImplementation29FamilyCenterDeepLinkProcessor priority] */

undefined8 FUN_10129e69c(void)

{
  return 0;
}



/* Entry: 10129e6a4; end: 10129e72b; -[_TtC43FamilyCenterDeepLinkProcessorImplementation29FamilyCenterDeepLinkProcessor canProvideProcessorForFeature:] */

uint FUN_10129e6a4(undefined8 param_1,long param_2,undefined **param_3)

{
  uint uVar1;
  undefined **ppuVar2;
  long lVar3;
  
  func_0x000107c5faec();
  ppuVar2 = &PTR____CFConstantStringClassReference_110f83ed8;
  lVar3 = param_2;
  func_0x000107c5faec();
  if (param_3 == ppuVar2 && param_2 == lVar3) {
    uVar1 = 1;
  }
  else {
    func_0x000107c605b8(param_3,param_2,ppuVar2,lVar3,0);
    uVar1 = (uint)param_3;
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(lVar3);
  return uVar1 & 1;
}



/* Entry: 10129e72c; end: 10129e787; -[_TtC43FamilyCenterDeepLinkProcessorImplementation29FamilyCenterDeepLinkProcessor isValidDeepLink:] */

uint FUN_10129e72c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10129eae8(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10129e788; end: 10129e78b; -[_TtC43FamilyCenterDeepLinkProcessorImplementation29FamilyCenterDeepLinkProcessor makeDeepLinkProcessor] */

void FUN_10129e788(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 10129e78c; end: 10129e7eb; -[_TtC43FamilyCenterDeepLinkProcessorImplementation29FamilyCenterDeepLinkProcessor init] */

void FUN_10129e78c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("FamilyCenterDeepLinkProcessorImplementation.FamilyCenterDeepLinkProcessor",
                      0x49,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10129e7b8);
  (*pcVar1)();
}



/* Entry: 10129e7ec; end: 10129e7fb; -[_TtC43FamilyCenterDeepLinkProcessorImplementation29FamilyCenterDeepLinkProcessor .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129e7ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d6ea80));
  return;
}



/* Entry: 10129e7fc; end: 10129e96f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129e7fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  puVar1 = &UNK_11039c1c0;
  func_0x000107c613fc(&UNK_11039c1c0,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_3);
  func_0x0001000d224c(&lStack_48);
  if (lStack_48 != 0) {
    func_0x000107c5f9dc(param_2,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    pcStack_58 = FUN_10129eac4;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_11039c1d8;
    ppuVar2 = &puStack_78;
    puStack_50 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    puVar3 = puStack_50;
    func_0x000107c6157c(puVar1);
    func_0x000107c61574(puVar3);
    func_0x000107c4ef8c(lStack_48);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c615e8(lStack_48);
    func_0x000107c61170(param_2);
  }
  func_0x000107c61428(puVar1 + 0x10,&puStack_78,0,0);
  puVar3 = puVar1 + 0x10;
  func_0x000107c61618();
  if (puVar3 == (undefined *)0x0) {
    func_0x000107c61574(puVar1);
  }
  else {
    func_0x000107c4bb48();
    func_0x000107c61574(puVar1);
    func_0x000107c615e8(puVar3);
  }
  return;
}



/* Entry: 10129e970; end: 10129e9f7;  */

void FUN_10129e970(long param_1)

{
  long lVar1;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4bb60();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61428(param_1 + 0x10,auStack_50,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c42804();
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 10129e9f8; end: 10129ea97; -[_TtC43FamilyCenterDeepLinkProcessorImplementation29FamilyCenterDeepLinkProcessor processDeepLinkURL:additionalInfo:delegate:] */

void FUN_10129e9f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c5f9e8(param_4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c615f0(param_3);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_10129e7fc(param_3,param_4,param_5);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_4);
  return;
}



/* Entry: 10129ea98; end: 10129ea9f; -[_TtC43FamilyCenterDeepLinkProcessorImplementation29FamilyCenterDeepLinkProcessor shouldForceNavigation] */

undefined8 FUN_10129ea98(void)

{
  return 0;
}



/* Entry: 10129eaa0; end: 10129eaa3; -[_TtC43FamilyCenterDeepLinkProcessorImplementation29FamilyCenterDeepLinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_10129eaa0(void)

{
  return;
}



/* Entry: 10129eaa4; end: 10129eac3;  */

void FUN_10129eaa4(void)

{
  func_0x000107c61168(&PTR_PTR_1127c1e40);
  return;
}



/* Entry: 10129eac4; end: 10129eae7;  */

void FUN_10129eac4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c4bb60();
    func_0x000107c615e8(lVar1);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_50,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c42804();
    func_0x000107c615e8(lVar1);
  }
  return;
}



/* Entry: 10129eae8; end: 10129ecef;  */

uint FUN_10129eae8(undefined **param_1,long param_2)

{
  uint uVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  
  func_0x000107c42e38();
  func_0x000107c61180();
  if (param_1 == (undefined **)0x0) {
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f83ed8);
    lVar4 = param_2;
  }
  else {
    ppuVar2 = param_1;
    func_0x000107c5faec();
    lVar4 = param_2;
    func_0x000107c61170(param_1);
    ppuVar3 = &PTR____CFConstantStringClassReference_110f83ed8;
    func_0x000107c5faec();
    if (param_2 != 0) {
      if (ppuVar2 == ppuVar3 && param_2 == lVar4) {
        func_0x000107c6142c(param_2);
        uVar1 = 1;
      }
      else {
        func_0x000107c605b8(ppuVar2,param_2,ppuVar3,lVar4,0);
        uVar1 = (uint)ppuVar2;
        func_0x000107c6142c(param_2);
      }
      goto LAB_10129eb94;
    }
  }
  uVar1 = 0;
LAB_10129eb94:
  func_0x000107c6142c(lVar4);
  return uVar1 & 1;
}



/* Entry: 10129ecf0; end: 10129ed1b;  */

void FUN_10129ecf0(void)

{
  long unaff_x20;
  
  func_0x000107c61610(unaff_x20 + 0x10);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10129ed1c; end: 10129ed3b;  */

void FUN_10129ed1c(void)

{
  func_0x00010129ec14();
  return;
}



/* Entry: 10129ed3c; end: 10129ed43;  */

undefined8 FUN_10129ed3c(void)

{
  return 0;
}



/* Entry: 10129ed44; end: 10129ed63;  */

void FUN_10129ed44(void)

{
  func_0x000107c61168(&PTR_PTR_112d6eaf8);
  return;
}



/* Entry: 10129ed64; end: 10129ed6f; -[SCFamilyCenterDeepLinkProcessorEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129ed64(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6eb60;
  func_0x000107c61428(param_1 + _DAT_112d6eb60,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10129ed70; end: 10129ed7b; -[SCFamilyCenterDeepLinkProcessorEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129ed70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6eb60;
  func_0x000107c61428(param_1 + _DAT_112d6eb60,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10129ed7c; end: 10129ed87; -[SCFamilyCenterDeepLinkProcessorEntryPoint navigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129ed7c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6eb68;
  func_0x000107c61428(param_1 + _DAT_112d6eb68,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10129ed88; end: 10129edcb;  */

void FUN_10129ed88(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10129edcc; end: 10129edd7; -[SCFamilyCenterDeepLinkProcessorEntryPoint setNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129edcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6eb68;
  func_0x000107c61428(param_1 + _DAT_112d6eb68,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10129edd8; end: 10129ee2b;  */

void FUN_10129edd8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10129ee2c; end: 10129ef1b;  */

/* WARNING: Possible PIC construction at 0x00010129eec0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010129eec4) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_10129ee2c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  func_0x000107c4d52c();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar2 = 0;
    FUN_10129ed44();
    func_0x000107c613fc();
    func_0x000107c61614(lVar2 + 0x10,0);
    func_0x000107c61604(lVar2 + 0x10,lVar1);
    *(long *)(lVar2 + 0x18) = unaff_x20;
    func_0x000107c61174(unaff_x20);
    func_0x00010129ec14();
    lVar1 = unaff_x20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10129ef1c; end: 10129ef43; -[SCFamilyCenterDeepLinkProcessorEntryPoint begin] */

void FUN_10129ef1c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10129ee2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10129ef44; end: 10129ef87; -[SCFamilyCenterDeepLinkProcessorEntryPoint end] */

void FUN_10129ef44(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10129ef88; end: 10129f11f;  */

void FUN_10129ef88(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffee) || (param_3 != -0x7ffffffef10edf60)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000012,0x800000010ef120a0,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "FamilyCenterDeepLinkProcessorImplementation/SCFamilyCenterDeepLinkProcessorEntryPoint.swift"
                            ,0x5b,2,0x27,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10129f120);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c569f0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10129f120; end: 10129f1cb; -[SCFamilyCenterDeepLinkProcessorEntryPoint setValue:forIvarName:] */

void FUN_10129f120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_10129ef88(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10129f1cc; end: 10129f23f; -[SCFamilyCenterDeepLinkProcessorEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129f1cc(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d6eb60,0);
  func_0x000107c61614(param_1 + _DAT_112d6eb68,0);
  *(undefined8 *)(param_1 + _DAT_112d6eb70) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10129f240; end: 10129f273;  */

void FUN_10129f240(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10129f274; end: 10129f2bb; -[SCFamilyCenterDeepLinkProcessorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129f274(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d6eb60);
  func_0x000107c61610(param_1 + _DAT_112d6eb68);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d6eb70));
  return;
}



/* Entry: 10129f2bc; end: 10129f2db;  */

void FUN_10129f2bc(void)

{
  func_0x000107c61168(&PTR_PTR_1127c1f00);
  return;
}



/* Entry: 10129f2dc; end: 10129f2fb; -[InAppAppealScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129f2dc(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112d6eba0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10129f2fc; end: 10129f30b; -[InAppAppealScope appealableLockData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129f2fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112d6eba8));
  return;
}



/* Entry: 10129f30c; end: 10129f397; -[InAppAppealScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129f30c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6ebb0;
  func_0x000107c61428(param_1 + _DAT_112d6ebb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10129f398; end: 10129f53b; -[InAppAppealScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129f398(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6ebb0;
  func_0x000107c61428(param_1 + _DAT_112d6ebb0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10129f53c; end: 10129f6cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10129f53c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_68 [8];
  undefined1 auStack_58 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112d6ebb0;
  func_0x000107c61614(unaff_x20 + _DAT_112d6ebb0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d6eba0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d6eba8) = param_3;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_58,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_2);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar3 = auStack_68;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_2);
  return puVar3;
}



/* Entry: 10129f6cc; end: 10129f6eb;  */

void FUN_10129f6cc(void)

{
  func_0x000107c61168(&PTR_PTR_1127c1fc8);
  return;
}



/* Entry: 10129f6ec; end: 10129f7a3; -[InAppAppealScope initWithUiContainer:delegate:appealableLockData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129f6ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  lVar2 = _DAT_112d6ebb0;
  func_0x000107c61614(param_1 + _DAT_112d6ebb0,0);
  *(undefined8 *)(param_1 + _DAT_112d6eba0) = param_3;
  *(undefined8 *)(param_1 + _DAT_112d6eba8) = param_5;
  func_0x000107c61428(param_1 + lVar2,auStack_58,1,0);
  lVar2 = param_1 + lVar2;
  func_0x000107c61604(lVar2,param_4);
  FUN_10129f6cc();
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = param_1;
  lStack_60 = lVar2;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61154(&lStack_68,puVar1);
  return;
}



/* Entry: 10129f7a4; end: 10129f7d3;  */

void FUN_10129f7a4(void)

{
  FUN_10129f6cc();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10129f7d4; end: 10129f83f; -[InAppAppealScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10129f7d4(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d6eba0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6eba8));
  param_1 = param_1 + _DAT_112d6ebb0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10129f840; end: 10129f847; -[_TtC51SCInAppWarningBillboardSignalProviderImplementation35InAppWarningBillboardSignalProvider preCheckSource] */

undefined8 FUN_10129f840(void)

{
  return 3;
}



/* Entry: 10129f848; end: 10129f8ff; -[_TtC51SCInAppWarningBillboardSignalProviderImplementation35InAppWarningBillboardSignalProvider eligibleWithRequestor:campaignName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129f848(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + _DAT_112d6ebe0);
  func_0x000107c61174();
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c44a1c();
    func_0x000107c615e8(lVar3);
  }
  puVar1 = PTR_PTR_1126ae558;
  func_0x000107c61168(PTR_PTR_1126ae558);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c451b0(puVar1,param_2,puVar2);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10129f900; end: 10129f95f; -[_TtC51SCInAppWarningBillboardSignalProviderImplementation35InAppWarningBillboardSignalProvider init] */

void FUN_10129f900(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCInAppWarningBillboardSignalProviderImplementation.InAppWarningBillboardSignalProvider"
                      ,0x57,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10129f92c);
  (*pcVar1)();
}



/* Entry: 10129f960; end: 10129f96f; -[_TtC51SCInAppWarningBillboardSignalProviderImplementation35InAppWarningBillboardSignalProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129f960(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d6ebe0));
  return;
}



/* Entry: 10129f970; end: 10129f98f;  */

void FUN_10129f970(void)

{
  func_0x000107c61168(&PTR_PTR_1127c20b0);
  return;
}



/* Entry: 10129f990; end: 10129fa63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10129f990(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 unaff_x20;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  func_0x000107c613fc();
  uVar1 = param_2;
  func_0x000107c5e10c();
  func_0x000107c61180();
  lVar2 = 0;
  FUN_10129f970();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112d6ebe0) = uVar1;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  uVar1 = param_1;
  func_0x000107c4e9e4(param_1);
  func_0x000107c61180();
  func_0x000107c4fba8();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(plVar4);
  func_0x000107c61170(uVar1);
  return unaff_x20;
}



/* Entry: 10129fa64; end: 10129fa7f;  */

void FUN_10129fa64(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10129fa80; end: 10129fa9f;  */

void FUN_10129fa80(void)

{
  func_0x000107c61168(&PTR_PTR_112d6ec50);
  return;
}



/* Entry: 10129faa0; end: 10129faab; -[SCInAppWarningBillboardSignalProviderEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129faa0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6eca8;
  func_0x000107c61428(param_1 + _DAT_112d6eca8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10129faac; end: 10129fab7; -[SCInAppWarningBillboardSignalProviderEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129faac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6eca8;
  func_0x000107c61428(param_1 + _DAT_112d6eca8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10129fab8; end: 10129fac3; -[SCInAppWarningBillboardSignalProviderEntryPoint inAppWarningServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129fab8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6ecb0;
  func_0x000107c61428(param_1 + _DAT_112d6ecb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10129fac4; end: 10129fb07;  */

void FUN_10129fac4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10129fb08; end: 10129fb13; -[SCInAppWarningBillboardSignalProviderEntryPoint setInAppWarningServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129fb08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6ecb0;
  func_0x000107c61428(param_1 + _DAT_112d6ecb0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10129fb14; end: 10129fb67;  */

void FUN_10129fb14(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10129fb68; end: 10129fcab; -[SCInAppWarningBillboardSignalProviderEntryPoint begin] */

/* WARNING: Possible PIC construction at 0x00010129fc34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010129fc44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010129fc64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010129fc8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010129fc48) */
/* WARNING: Removing unreachable block (ram,0x00010129fc38) */
/* WARNING: Removing unreachable block (ram,0x00010129fc68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129fb68(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c3e794();
  func_0x000107c61180();
  lVar4 = param_1;
  if (lVar1 != 0) {
    func_0x000107c4528c();
    func_0x000107c61180();
    lVar4 = lVar1;
    if (param_1 != 0) {
      FUN_10129fa80(0);
      func_0x000107c613fc();
      func_0x000107c5e10c();
      func_0x000107c61180();
      lVar2 = 0;
      FUN_10129f970();
      lVar3 = lVar2;
      func_0x000107c610f8();
      *(long *)(lVar3 + _DAT_112d6ebe0) = param_1;
      lStack_50 = lVar3;
      lStack_48 = lVar2;
      func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
      func_0x000107c4e9e4(lVar1);
      func_0x000107c61180();
      func_0x000107c4fba8();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 10129fcac; end: 10129fcef; -[SCInAppWarningBillboardSignalProviderEntryPoint end] */

void FUN_10129fcac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10129fcf0; end: 10129fe87;  */

void FUN_10129fcf0(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10ccca0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000014,0x800000010ef33360,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "SCInAppWarningBillboardSignalProviderImplementation/SCInAppWarningBillboardSignalProviderEntryPoint.swift"
                            ,0x69,2,0x27,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10129fe88);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c55330();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10129fe88; end: 10129ff33; -[SCInAppWarningBillboardSignalProviderEntryPoint setValue:forIvarName:] */

void FUN_10129fe88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_10129fcf0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10129ff34; end: 10129ffa7; -[SCInAppWarningBillboardSignalProviderEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129ff34(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d6eca8,0);
  func_0x000107c61614(param_1 + _DAT_112d6ecb0,0);
  *(undefined8 *)(param_1 + _DAT_112d6ecb8) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10129ffa8; end: 10129ffdb;  */

void FUN_10129ffa8(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10129ffdc; end: 1012a0023; -[SCInAppWarningBillboardSignalProviderEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10129ffdc(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d6eca8);
  func_0x000107c61610(param_1 + _DAT_112d6ecb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d6ecb8));
  return;
}


