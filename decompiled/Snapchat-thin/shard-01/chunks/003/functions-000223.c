/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100ecb2f8; end: 100ecb3ab;  */

void FUN_100ecb2f8(undefined8 param_1)

{
  func_0x000103dbf870();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x30,7);
  return;
}



/* Entry: 100ecb3ac; end: 100ecb47b;  */

void FUN_100ecb3ac(undefined1 *param_1,byte *param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 8);
  *param_1 = (char)(0x20301 >> (ulong)((*param_2 & 3) << 3));
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}



/* Entry: 100ecb47c; end: 100ecb4bb;  */

void FUN_100ecb47c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d48620 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90f330;
  func_0x000107c61520(&UNK_10d90f330,&UNK_110365228);
  puRam0000000112d48620 = puVar1;
  return;
}



/* Entry: 100ecb4bc; end: 100ecb613;  */

int FUN_100ecb4bc(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_100ecb538;
        goto LAB_100ecb51c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100ecb51c:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_100ecb538:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 100ecb614; end: 100ecb653;  */

void FUN_100ecb614(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d48628 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d90f3a0;
  func_0x000107c61520(&UNK_10d90f3a0,&UNK_110365338);
  puRam0000000112d48628 = puVar1;
  return;
}



/* Entry: 100ecb654; end: 100ecb68b;  */

undefined1 FUN_100ecb654(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 100ecb68c; end: 100ecb6af;  */

void FUN_100ecb68c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000100ed1d4c();
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Entry: 100ecb6b0; end: 100ecb8a7;  */

void FUN_100ecb6b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  FUN_100ed1e18();
  lVar1 = 0x112d48380;
  func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
  func_0x000107c61534();
  *(undefined8 *)(lVar1 + 0x18) = 4;
  *(undefined8 *)(lVar1 + 0x10) = 2;
  uVar2 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  func_0x000107c61174();
  func_0x00010052bbec();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c43780();
  func_0x000107c61180();
  func_0x000107c615e8(uVar2);
  uVar2 = 0;
  FUN_100ecbdac(0,0x112d48388,&PTR__OBJC_CLASS___UIFont_1126aec38);
  *(undefined8 *)(lVar1 + 0x28) = uVar3;
  uVar6 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  *(undefined8 *)(lVar1 + 0x40) = uVar2;
  *(undefined8 *)(lVar1 + 0x48) = uVar6;
  func_0x000107c61174();
  func_0x00010052bbec();
  func_0x000107c61180();
  uVar3 = uVar6;
  func_0x000107c3fdc0();
  func_0x000107c61180();
  func_0x000107c615e8(uVar6);
  uVar2 = 0;
  FUN_100ecbdac(0,0x112d48390,&PTR__OBJC_CLASS___UIColor_1126aea70);
  *(undefined8 *)(lVar1 + 0x68) = uVar2;
  *(undefined8 *)(lVar1 + 0x50) = uVar3;
  lVar4 = lVar1;
  func_0x000100ecbca8(lVar1);
  func_0x000107c61588(lVar1);
  uVar3 = 0x112d48398;
  func_0x0001000285a8(0x112d48398,&UNK_10d90f130);
  func_0x000107c61408((undefined8 *)(lVar1 + 0x20),2,uVar3);
  puVar5 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  func_0x000107c610f8();
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c6142c(param_3);
  uVar2 = 0;
  FUN_100eca28c(0);
  uVar3 = uVar2;
  FUN_100ecbdec();
  lVar1 = lVar4;
  func_0x000107c5f9dc(lVar4,uVar2,PTR___sypN_11034f1a8 + 8,uVar3);
  func_0x000107c6142c(lVar4);
  func_0x000107c48af8();
  func_0x000107c61170(param_2);
  func_0x000107c61170(lVar1);
  *param_1 = puVar5;
  return;
}



/* Entry: 100ecb8a8; end: 100ecb903;  */

void FUN_100ecb8a8(long *param_1,long param_2,long param_3)

{
  long lVar1;
  
  func_0x000108b9a984();
  func_0x000107c61180();
  if (param_2 == 0) {
    lVar1 = 0;
    param_3 = 0;
  }
  else {
    lVar1 = param_2;
    func_0x000107c5faec();
    func_0x000107c61170(param_2);
  }
  *param_1 = lVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 100ecb904; end: 100ecb947;  */

void FUN_100ecb904(undefined8 param_1,char *param_2)

{
  *(bool *)param_1 = *param_2 == '\x01';
  return;
}



/* Entry: 100ecb948; end: 100ecba33;  */

undefined8 FUN_100ecb948(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  
  func_0x000103dbf46c();
  uVar1 = 0;
  FUN_100ecbdac(0,0x112d48630,&PTR__OBJC_CLASS___NSAttributedString_1126af068);
  pcVar2 = FUN_100ecb6b0;
  func_0x0001000bfde0(FUN_100ecb6b0,0,uVar1);
  func_0x000107c61574(param_1);
  FUN_100ecbadc();
  func_0x000104884898();
  func_0x000107c61574(pcVar2);
  return param_1;
}



/* Entry: 100ecba34; end: 100ecba6b;  */

undefined * FUN_100ecba34(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  
  puVar3 = PTR___sSbSQsWP_11034dd50;
  puVar1 = PTR___sSbN_11034dd40;
  pcVar2 = FUN_100ecb904;
  func_0x000103dbf46c();
  func_0x0001000bfde0(FUN_100ecb904,0,puVar1);
  func_0x000107c61574(param_1);
  func_0x000104884898(puVar3);
  func_0x000107c61574(pcVar2);
  return puVar3;
}



/* Entry: 100ecba6c; end: 100ecbadb;  */

undefined8
FUN_100ecba6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  func_0x000103dbf46c();
  func_0x0001000bfde0(param_3,0,param_4);
  func_0x000107c61574(param_1);
  func_0x000104884898(param_5);
  func_0x000107c61574(param_3);
  return param_5;
}



/* Entry: 100ecbadc; end: 100ecbb2f;  */

void FUN_100ecbadc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d48638 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_100ecbdac(0xff,0x112d48630,&PTR__OBJC_CLASS___NSAttributedString_1126af068);
  puVar2 = PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0;
  func_0x000107c61520(PTR___sSo8NSObjectCSQ10ObjectiveCMc_11034fac0,uVar1);
  puRam0000000112d48638 = puVar2;
  return;
}



/* Entry: 100ecbb30; end: 100ecbbaf;  */

undefined1  [16] FUN_100ecbb30(ulong param_1,undefined8 param_2)

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
      goto LAB_100ecbc88;
    }
    func_0x000107c6142c(puVar1);
    func_0x000107c6142c(puVar4);
    uVar9 = 1;
  }
LAB_100ecbc88:
  auVar10._8_4_ = uVar9 & 1;
  auVar10._0_8_ = uVar7;
  auVar10._12_4_ = 0;
  return auVar10;
}



/* Entry: 100ecbbb0; end: 100ecbdab;  */

undefined1  [16] FUN_100ecbbb0(ulong param_1,ulong param_2)

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
      goto LAB_100ecbc88;
    }
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(uVar3);
    uVar7 = 1;
  }
LAB_100ecbc88:
  auVar8._8_4_ = uVar7 & 1;
  auVar8._0_8_ = uVar6;
  auVar8._12_4_ = 0;
  return auVar8;
}



/* Entry: 100ecbdac; end: 100ecbdeb;  */

void FUN_100ecbdac(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100ecbdec; end: 100ecbe2f;  */

void FUN_100ecbdec(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d483a0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_100eca28c(0xff);
  puVar2 = &UNK_10d90f180;
  func_0x000107c61520(&UNK_10d90f180,uVar1);
  puRam0000000112d483a0 = puVar2;
  return;
}



/* Entry: 100ecbe30; end: 100ecbe7f;  */

undefined8 FUN_100ecbe30(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d48398;
  func_0x0001000285a8(0x112d48398,&UNK_10d90f130);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 100ecbe80; end: 100ecbfbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100ecbe80(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d48678;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112d48678);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c61180();
    func_0x000107c5a050();
    func_0x000107c53840(puVar3,param_2,1);
    func_0x000107c61170(puVar3);
    puVar2 = PTR_PTR_1126b0c40;
    func_0x000107c61168(PTR_PTR_1126b0c40);
    func_0x000107c450a4(0x4048000000000000,0x4048000000000000);
    func_0x000107c61180();
    func_0x000107c55258(puVar3,param_2,puVar2);
    func_0x000107c61170(puVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 100ecbfbc; end: 100ecc05b;  */

undefined * FUN_100ecbfbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c5a050();
  func_0x000107c61174(puVar1);
  func_0x000107c56ba8();
  func_0x000107c5a100(puVar1,param_2,3);
  func_0x000107c59c74(puVar1,param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 100ecc05c; end: 100ecc2f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100ecc05c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d48688;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112d48688);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5a050();
    func_0x000107c56ba8(puVar3,param_2,0);
    func_0x000107c59c74(puVar3,param_2,1);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 100ecc2f8; end: 100ecc31f; -[_TtC38PostRegistrationAgeVerificationFeature46PostRegAgeVerificationIneligibleViewController initWithCoder:] */

void FUN_100ecc2f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_100ecd674();
  return;
}



/* Entry: 100ecc320; end: 100ecc82f;  */

/* WARNING: Possible PIC construction at 0x000100ecc380: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecc3bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecc3f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecc47c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecc49c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecc4ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecc510: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecc560: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecc584: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecc5b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecc5d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecc614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecc664: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecc688: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecc6d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecc6fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecc764: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecc780: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecc7a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ecc784) */
/* WARNING: Removing unreachable block (ram,0x000100ecc768) */
/* WARNING: Removing unreachable block (ram,0x000100ecc700) */
/* WARNING: Removing unreachable block (ram,0x000100ecc82c) */
/* WARNING: Removing unreachable block (ram,0x000100ecc734) */
/* WARNING: Removing unreachable block (ram,0x000100ecc6dc) */
/* WARNING: Removing unreachable block (ram,0x000100ecc68c) */
/* WARNING: Removing unreachable block (ram,0x000100ecc828) */
/* WARNING: Removing unreachable block (ram,0x000100ecc6c0) */
/* WARNING: Removing unreachable block (ram,0x000100ecc668) */
/* WARNING: Removing unreachable block (ram,0x000100ecc618) */
/* WARNING: Removing unreachable block (ram,0x000100ecc824) */
/* WARNING: Removing unreachable block (ram,0x000100ecc64c) */
/* WARNING: Removing unreachable block (ram,0x000100ecc5dc) */
/* WARNING: Removing unreachable block (ram,0x000100ecc5b4) */
/* WARNING: Removing unreachable block (ram,0x000100ecc588) */
/* WARNING: Removing unreachable block (ram,0x000100ecc564) */
/* WARNING: Removing unreachable block (ram,0x000100ecc514) */
/* WARNING: Removing unreachable block (ram,0x000100ecc820) */
/* WARNING: Removing unreachable block (ram,0x000100ecc548) */
/* WARNING: Removing unreachable block (ram,0x000100ecc4f0) */
/* WARNING: Removing unreachable block (ram,0x000100ecc4a0) */
/* WARNING: Removing unreachable block (ram,0x000100ecc81c) */
/* WARNING: Removing unreachable block (ram,0x000100ecc4d4) */
/* WARNING: Removing unreachable block (ram,0x000100ecc480) */
/* WARNING: Removing unreachable block (ram,0x000100ecc3fc) */
/* WARNING: Removing unreachable block (ram,0x000100ecc818) */
/* WARNING: Removing unreachable block (ram,0x000100ecc464) */
/* WARNING: Removing unreachable block (ram,0x000100ecc3c0) */
/* WARNING: Removing unreachable block (ram,0x000100ecc814) */
/* WARNING: Removing unreachable block (ram,0x000100ecc3dc) */
/* WARNING: Removing unreachable block (ram,0x000100ecc384) */
/* WARNING: Removing unreachable block (ram,0x000100ecc810) */
/* WARNING: Removing unreachable block (ram,0x000100ecc3a0) */
/* WARNING: Removing unreachable block (ram,0x000100ecc7ac) */

void FUN_100ecc320(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c52b50(unaff_x20,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ecc810);
  (*pcVar1)();
}



/* Entry: 100ecc830; end: 100eccba3;  */

/* WARNING: Possible PIC construction at 0x000100ecc918: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecc9b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecca50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eccaec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ecca54) */
/* WARNING: Removing unreachable block (ram,0x000100ecc9b8) */
/* WARNING: Removing unreachable block (ram,0x000100ecc91c) */
/* WARNING: Removing unreachable block (ram,0x000100eccaf0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ecc830(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  
  func_0x0001000a8868(unaff_x20 + _DAT_112d48648,*(undefined8 *)(unaff_x20 + _DAT_112d48648 + 0x18))
  ;
  plVar1 = (long *)0x0;
  func_0x000100ecb314();
  (*(code *)(undefined *)0x100ecb92c)();
  puVar2 = &UNK_1103653e8;
  func_0x000107c613fc(&UNK_1103653e8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  uVar3 = 0x100ecd5dc;
  puVar5 = puVar2;
  (**(code **)(*plVar1 + 0x60))(0x100ecd5dc);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar2);
  uVar4 = uVar3;
  func_0x000107c614f0(uVar3);
  (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112d48670),uVar4,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar3);
  return;
}



/* Entry: 100eccba4; end: 100eccc03; -[_TtC38PostRegistrationAgeVerificationFeature46PostRegAgeVerificationIneligibleViewController viewDidLoad] */

void FUN_100eccba4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_100ecc320();
  FUN_100ecc830();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100eccc04; end: 100ecce9b;  */

void FUN_100eccc04(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  uVar3 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar2 = param_2;
    func_0x000100ecbf5c();
    func_0x000107c61170(param_2);
    func_0x000107c5fadc(uVar3,uVar1);
    func_0x000107c59c6c(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 100ecce9c; end: 100ecd08b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ecce9c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  ppuVar3 = &puStack_80;
  func_0x000108b9a8c4();
  func_0x000107c61180();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x000107c5faec();
    uVar5 = param_2;
    func_0x000107c61170();
    func_0x000100ed1e3c();
    lVar2 = param_1;
    FUN_100de9c28();
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 3;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d48668);
    func_0x000107c6157c(uVar6);
    func_0x000107c5fadc(lVar1,param_2);
    func_0x000107c6142c(param_2);
    uStack_60 = 0x100ecd604;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_100de205c;
    puStack_68 = &UNK_110365450;
    uStack_58 = uVar6;
    func_0x000107c60bc4(&puStack_80);
    puVar4 = PTR_PTR_1126aed70;
    func_0x000107c61168();
    func_0x000107c3dad0();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar1);
    func_0x000107c61574(uStack_58);
    *(undefined **)(lVar2 + 0x20) = puVar4;
    puVar4 = PTR_PTR_1126aed78;
    func_0x000107c610f8(PTR_PTR_1126aed78);
    func_0x000107c5fadc(param_1,uVar5);
    func_0x000107c6142c(uVar5);
    uVar5 = 0;
    FUN_100ecd634(0,0x112d360a8,&PTR_PTR_1126aed70);
    lVar1 = lVar2;
    func_0x000107c5fc48(lVar2,uVar5);
    func_0x000107c61574(lVar2);
    func_0x000107c4656c(puVar4);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar1);
    func_0x000107c59bc8(puVar4);
    func_0x000107c4f018();
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 100ecd08c; end: 100ecd12b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ecd08c(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined1 uStack_31;
  
  uStack_31 = 0;
  func_0x0001002a64a8(&uStack_31);
  puVar1 = PTR_PTR_1126af4a0;
  func_0x000107c610f8(PTR_PTR_1126af4a0);
  func_0x000107c4757c();
  lVar2 = unaff_x20;
  func_0x00010430dc6c();
  func_0x000107c61170(puVar1);
  func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112d48650));
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 100ecd12c; end: 100ecd153; -[_TtC38PostRegistrationAgeVerificationFeature46PostRegAgeVerificationIneligibleViewController handleLogOutButtonTapped] */

void FUN_100ecd12c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ecd08c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ecd154; end: 100ecd1f3;  */

void FUN_100ecd154(undefined8 param_1,undefined8 param_2)

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
  pcStack_40 = FUN_100ecd60c;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110365478;
  uStack_38 = param_2;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(param_2);
  func_0x000107c61574(uVar1);
  func_0x000107c420a8(param_1);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 100ecd1f4; end: 100ecd253; -[_TtC38PostRegistrationAgeVerificationFeature46PostRegAgeVerificationIneligibleViewController initWithNibName:bundle:] */

void FUN_100ecd1f4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PostRegistrationAgeVerificationFeature.PostRegAgeVerificationIneligibleViewController"
                      ,0x55,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ecd220);
  (*pcVar1)();
}



/* Entry: 100ecd254; end: 100ecd31b; -[_TtC38PostRegistrationAgeVerificationFeature46PostRegAgeVerificationIneligibleViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100ecd280: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecd2d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecd2f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ecd2d4) */
/* WARNING: Removing unreachable block (ram,0x000100ecd284) */
/* WARNING: Removing unreachable block (ram,0x000100ecd2f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ecd254(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112d48648);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d48650));
  return;
}



/* Entry: 100ecd31c; end: 100ecd33b;  */

void FUN_100ecd31c(void)

{
  func_0x000107c61168(&PTR_PTR_11279dfc0);
  return;
}



/* Entry: 100ecd33c; end: 100ecd4f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ecd33c(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  func_0x000107c4ffe8(*(undefined8 *)(unaff_x20 + _DAT_112d48650));
  func_0x000107c61180();
  func_0x000107c615e8();
  puStack_60 = (undefined *)CONCAT71(puStack_60._1_7_,1);
  func_0x0001002a64a8(&puStack_60);
  pcVar1 = "didFinishRequest(with:)";
  func_0x0001000c10c0("didFinishRequest(with:)");
  func_0x000107c61180();
  puVar2 = &UNK_1103653e8;
  func_0x000107c613fc(&UNK_1103653e8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_110365410;
  func_0x000107c613fc(&UNK_110365410,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  pcStack_40 = FUN_100ecd5b8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110365428;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  puVar2 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x000107c4e590(pcVar1);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 100ecd4f4; end: 100ecd543; -[_TtC38PostRegistrationAgeVerificationFeature46PostRegAgeVerificationIneligibleViewController didFinishRequestWithLogout:] */

/* WARNING: Possible PIC construction at 0x000100ecd52c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ecd530) */

void FUN_100ecd4f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_100ecd33c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100ecd544; end: 100ecd5b7; -[_TtC38PostRegistrationAgeVerificationFeature46PostRegAgeVerificationIneligibleViewController didFailRequestWithLogout:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ecd544(long param_1)

{
  undefined8 uVar1;
  undefined1 uStack_31;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d48650);
  func_0x000107c61174();
  func_0x000107c4ffe8(uVar1);
  func_0x000107c61180();
  func_0x000107c615e8();
  uStack_31 = 2;
  func_0x0001002a64a8(&uStack_31);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100ecd5b8; end: 100ecd60b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ecd5b8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112d48660;
    func_0x000107c61618();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c5da6c(lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 100ecd60c; end: 100ecd633;  */

void FUN_100ecd60c(void)

{
  undefined1 uStack_11;
  
  uStack_11 = 3;
  func_0x0001002a64a8(&uStack_11);
  return;
}



/* Entry: 100ecd634; end: 100ecd673;  */

void FUN_100ecd634(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100ecd674; end: 100ecd783;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ecd674(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c61614(unaff_x20 + _DAT_112d48660,0);
  lVar1 = _DAT_112d48668;
  uVar3 = 0x112d486c8;
  func_0x0001000285a8(0x112d486c8,&UNK_10d90f480);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  lVar1 = _DAT_112d48670;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112d48678) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d48680) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d48688) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d48690) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d48698) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "PostRegistrationAgeVerificationFeature/PostRegAgeVerificationIneligibleViewController.swift"
                      ,0x5b,2,0x5d,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100ecd784);
  (*pcVar2)();
}



/* Entry: 100ecd784; end: 100ecd7a7;  */

undefined8 FUN_100ecd784(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 100ecd7a8; end: 100ecd813;  */

void FUN_100ecd7a8(long param_1,long param_2)

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



/* Entry: 100ecd814; end: 100ecd86f;  */

void FUN_100ecd814(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = (undefined1)param_3;
  uStack_48 = param_1;
  uStack_40 = param_2;
  func_0x000100dd0978();
  func_0x000100087c34(&uStack_48);
  func_0x000100dd0920(param_1,param_2,param_3);
  return;
}



/* Entry: 100ecd870; end: 100ecd877;  */

void FUN_100ecd870(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 100ecd878; end: 100ecd8ab;  */

void FUN_100ecd878(long param_1)

{
  func_0x000103dbf870();
  func_0x000107c61574(*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x50,7);
  return;
}



/* Entry: 100ecd8ac; end: 100ecd95b;  */

void FUN_100ecd8ac(undefined8 param_1)

{
  if (lRam0000000112d486f8 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e617b30);
  return;
}



/* Entry: 100ecd95c; end: 100ecd99b;  */

void FUN_100ecd95c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_100ece074();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  param_1[3] = uVar4;
  return;
}



/* Entry: 100ecd99c; end: 100ecdb1b;  */

void FUN_100ecd99c(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  code *pcVar3;
  long alStack_68 [3];
  undefined8 uStack_50;
  long lStack_48;
  
  alStack_68[0] = *(long *)(param_2 + 0x18);
  if ((((char)param_1[2] < -0x40) && (param_1[1] == 0 && *param_1 == 0)) &&
     ((char)param_1[2] == -0x80)) {
    if (alStack_68[0] - 1U < 2) {
      uVar2 = 0x112d48810;
      func_0x0001000285a8(0x112d48810,&UNK_10d90f598);
      func_0x000107c613fc();
      uVar1 = 1;
      func_0x00010008747c(1,uVar2);
      if (*(long *)(unaff_x20 + 0x48) != 0) {
        func_0x000100083b20(alStack_68);
        func_0x0001000a8868(alStack_68,uStack_50);
        uVar2 = 4;
        func_0x000103ff5678(4);
        pcVar3 = *(code **)(lStack_48 + 8);
        func_0x000107c6157c(uVar1);
        (*pcVar3)(uVar2,1,FUN_100ece2fc,uVar1,uStack_50,lStack_48);
        func_0x000107c6142c(uVar2);
        func_0x000107c61574(uVar1);
        func_0x0001000834e4(alStack_68);
      }
    }
    else if (alStack_68[0] != 0) {
      func_0x000107c60614(&UNK_11073c510,alStack_68,&UNK_11073c510,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100ece2fc);
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 100ecdb1c; end: 100ecdb47;  */

long FUN_100ecdb1c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 100ecdb48; end: 100ecdb8f;  */

void FUN_100ecdb48(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x03') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
    return;
  }
  if (param_3 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)();
    return;
  }
  return;
}



/* Entry: 100ecdb90; end: 100ecdc53;  */

undefined8 * FUN_100ecdb90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_100ecdb48(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  param_1[3] = param_2[3];
  return param_1;
}



/* Entry: 100ecdc54; end: 100ecdc9f;  */

undefined8 * FUN_100ecdc54(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x000100ecdb6c(uVar3,uVar4,uVar2);
  param_1[3] = param_2[3];
  return param_1;
}



/* Entry: 100ecdca0; end: 100ecdd3b;  */

int FUN_100ecdca0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfb < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0xfc;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 5) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100ecdd3c; end: 100ecde7f;  */

uint FUN_100ecdd3c(ulong param_1,long param_2,byte param_3,ulong param_4,long param_5,char param_6)

{
  undefined8 uVar1;
  uint uVar2;
  
  if (param_3 < 2) {
    if (param_3 == 0) {
      if (param_6 == '\0') {
        uVar2 = (uint)((uint)param_1 == (uint)param_4);
        goto LAB_100ecde74;
      }
    }
    else if (param_6 == '\x01') {
      uVar1 = 0;
      func_0x0001007bbbf8(0);
      func_0x000107c60118(param_1,param_4,uVar1);
      uVar2 = (uint)param_1;
      goto LAB_100ecde74;
    }
  }
  else if (param_3 == 2) {
    if (param_6 == '\x02') {
      uVar2 = (uint)param_4 ^ (uint)param_1 ^ 1;
      goto LAB_100ecde74;
    }
  }
  else if (param_3 == 3) {
    if (param_6 == '\x03') {
      if (param_2 == 0) goto LAB_100ecde60;
      if ((param_5 != 0) &&
         (((param_1 == param_4 && (param_2 == param_5)) ||
          (func_0x000107c605b8(param_1,param_2,param_4,param_5,0), (param_1 & 1) != 0))))
      goto LAB_100ecde64;
    }
  }
  else if (param_1 == 0 && param_2 == 0) {
    if ((param_6 == '\x04') && (param_5 == 0 && param_4 == 0)) {
LAB_100ecde64:
      uVar2 = 1;
      goto LAB_100ecde74;
    }
  }
  else if (param_1 == 1 && param_2 == 0) {
    if ((param_6 == '\x04') && (param_4 == 1)) {
LAB_100ecde60:
      if (param_5 == 0) goto LAB_100ecde64;
    }
  }
  else if ((param_6 == '\x04') && (param_4 == 2)) goto LAB_100ecde60;
  uVar2 = 0;
LAB_100ecde74:
  return uVar2 & 1;
}



/* Entry: 100ecde80; end: 100ece073;  */

ulong FUN_100ecde80(ulong param_1,long param_2,byte param_3,int param_4,ulong param_5,long param_6,
                   char param_7,int param_8)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_3 < 2) {
    if (param_3 == 0) {
      if (param_7 != '\0') {
        return 0;
      }
      uVar3 = 0;
      if (param_4 == param_8) {
        uVar3 = (uint)((uint)param_1 == (uint)param_5);
      }
      return (ulong)uVar3;
    }
    bVar1 = (param_7 == '\x01' && param_4 == param_8) && param_1 == param_5;
LAB_100ecdfa8:
    return (ulong)bVar1;
  }
  if (param_3 == 2) {
    uVar3 = (uint)param_5 ^ (uint)param_1 ^ 1;
    if (param_4 != param_8) {
      uVar3 = 0;
    }
    uVar2 = 0;
    if (param_7 == '\x02') {
      uVar2 = uVar3;
    }
  }
  else {
    if (param_3 != 3) {
      if (param_1 == 0 && param_2 == 0) {
        uVar2 = 0;
        if ((param_7 != '\x04') || (param_6 != 0 || param_5 != 0)) goto LAB_100ecdf24;
      }
      else {
        if (param_1 == 1 && param_2 == 0) {
          if (param_7 != '\x04') {
            return 0;
          }
          uVar2 = 0;
          if (param_5 != 1) goto LAB_100ecdf24;
        }
        else {
          if (param_7 != '\x04') {
            return 0;
          }
          uVar2 = 0;
          if (param_5 != 2) goto LAB_100ecdf24;
        }
        uVar2 = 0;
        if (param_6 != 0) goto LAB_100ecdf24;
      }
      bVar1 = param_4 == param_8;
      goto LAB_100ecdfa8;
    }
    uVar2 = 0;
    if ((((param_7 == '\x03') && (param_4 == param_8)) &&
        (uVar2 = (uint)(param_2 == 0 && param_6 == 0), param_2 != 0)) && (param_6 != 0)) {
      if ((param_1 == param_5) && (param_2 == param_6)) {
        return 1;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(param_1,param_2,param_5,param_6,0);
      return param_1;
    }
  }
LAB_100ecdf24:
  return (ulong)(uVar2 & 1);
}



/* Entry: 100ece074; end: 100ece1af;  */

ulong FUN_100ece074(ulong param_1,long param_2,uint param_3,ulong param_4)

{
  uint uVar1;
  bool bVar2;
  code *pcVar3;
  ulong uStack_38;
  
  uVar1 = param_3 >> 6 & 3;
  if (uVar1 == 0) {
    param_3 = param_3 & 0xff;
    if (param_3 < 2) {
      if (param_3 == 0) {
        func_0x000100dd0978(param_1,param_2,0);
      }
      else {
        param_1 = param_1 & 1;
      }
    }
    else if (param_3 == 2) {
      func_0x000100dd0978(param_1,param_2,2);
    }
    else {
      func_0x000100dd0978(param_1,param_2,3);
    }
  }
  else if (((uVar1 != 1) && (bVar2 = param_1 == 0, param_1 = 0, param_2 == 0 && bVar2)) &&
          ((param_3 & 0xff) == 0x80)) {
    if (2 < param_4) {
      uStack_38 = param_4;
      func_0x000107c60614(&UNK_11073c510,&uStack_38,&UNK_11073c510,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100ece1b0);
      (*pcVar3)();
    }
    param_1 = *(ulong *)(&UNK_10d90f5d8 + param_4 * 8);
  }
  return param_1;
}



/* Entry: 100ece1b0; end: 100ece2fb;  */

void FUN_100ece1b0(long param_1,long param_2,char param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  code *pcVar3;
  long alStack_68 [3];
  undefined8 uStack_50;
  long lStack_48;
  
  if (((param_3 < -0x40) && (param_2 == 0 && param_1 == 0)) && (param_3 == -0x80)) {
    if (param_4 - 1U < 2) {
      uVar2 = 0x112d48810;
      func_0x0001000285a8(0x112d48810,&UNK_10d90f598);
      func_0x000107c613fc();
      uVar1 = 1;
      func_0x00010008747c(1,uVar2);
      if (*(long *)(unaff_x20 + 0x48) != 0) {
        func_0x000100083b20(alStack_68);
        func_0x0001000a8868(alStack_68,uStack_50);
        uVar2 = 4;
        func_0x000103ff5678(4);
        pcVar3 = *(code **)(lStack_48 + 8);
        func_0x000107c6157c(uVar1);
        (*pcVar3)(uVar2,1,FUN_100ece2fc,uVar1,uStack_50,lStack_48);
        func_0x000107c6142c(uVar2);
        func_0x000107c61574(uVar1);
        func_0x0001000834e4(alStack_68);
      }
    }
    else if (param_4 != 0) {
      alStack_68[0] = param_4;
      func_0x000107c60614(&UNK_11073c510,alStack_68,&UNK_11073c510,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100ece2fc);
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 100ece2fc; end: 100ece303;  */

void FUN_100ece2fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = (undefined1)param_3;
  uStack_48 = param_1;
  uStack_40 = param_2;
  func_0x000100dd0978();
  func_0x000100087c34(&uStack_48);
  func_0x000100dd0920(param_1,param_2,param_3);
  return;
}



/* Entry: 100ece304; end: 100ece34b;  */

undefined8 * FUN_100ece304(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  (*param_4)(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 100ece34c; end: 100ece35f;  */

undefined8 * FUN_100ece34c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = *(undefined1 *)(param_2 + 2);
  FUN_100ecdb48(uVar1,uVar3,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  (*(code *)0x100ecdb6c)(uVar2,uVar4,uVar6);
  return param_1;
}



/* Entry: 100ece360; end: 100ece3bf;  */

undefined8 *
FUN_100ece360(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4,code *param_5
             )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = *(undefined1 *)(param_2 + 2);
  (*param_4)(uVar1,uVar3,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  (*param_5)(uVar2,uVar4,uVar6);
  return param_1;
}



/* Entry: 100ece3c0; end: 100ece3cb;  */

undefined8 * FUN_100ece3c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  (*(code *)0x100ecdb6c)(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 100ece3cc; end: 100ece40f;  */

undefined8 * FUN_100ece3cc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,code *param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  (*param_4)(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 100ece410; end: 100ece4f7;  */

int FUN_100ece410(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfb < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfc;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 5) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 100ece4f8; end: 100ece573;  */

void FUN_100ece4f8(long *param_1,long param_2,long param_3)

{
  code *pcVar1;
  long lStack_28;
  
  lStack_28 = *(long *)(param_2 + 0x18);
  if (lStack_28 == 2) {
    param_2 = 0;
    param_3 = -0x2000000000000000;
  }
  else if (lStack_28 == 1) {
    func_0x000100ed1ae8();
  }
  else {
    if (lStack_28 != 0) {
      func_0x000107c60614(&UNK_11073c510,&lStack_28,&UNK_11073c510,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ece574);
      (*pcVar1)();
    }
    func_0x000100ed1a1c();
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Entry: 100ece574; end: 100ece6c7;  */

void FUN_100ece574(long *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_48;
  
  lStack_48 = *(long *)(param_2 + 0x18);
  if (lStack_48 != 2) {
    if (lStack_48 != 1) {
      if (lStack_48 != 0) {
        func_0x000107c60614(&UNK_11073c510,&lStack_48,&UNK_11073c510,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100ece6c8);
        (*pcVar1)();
      }
      FUN_100eca050();
      goto LAB_100ece688;
    }
    func_0x000108b9a804();
    func_0x000107c61180();
    if (param_2 != 0) {
      lVar2 = param_2;
      func_0x000107c5faec();
      uVar5 = param_3;
      func_0x000107c61170();
      func_0x000100ed1c80();
      lVar3 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar3 + 0x18) = 2;
      *(undefined8 *)(lVar3 + 0x10) = 1;
      *(undefined **)(lVar3 + 0x38) = PTR___sSSN_11034da80;
      lVar4 = lVar3;
      func_0x00010075bbf0();
      *(long *)(lVar3 + 0x40) = lVar4;
      *(long *)(lVar3 + 0x20) = lVar2;
      *(undefined8 *)(lVar3 + 0x28) = param_3;
      func_0x000107c61434(param_3);
      uVar6 = uVar5;
      func_0x000107c5fb00(param_2,uVar5,lVar3);
      func_0x000107c6142c(uVar5);
      FUN_100eca2dc(param_2,uVar6,lVar2,param_3);
      func_0x000107c6142c(param_3);
      func_0x000107c6142c(uVar6);
      goto LAB_100ece688;
    }
  }
  param_2 = 0;
LAB_100ece688:
  *param_1 = param_2;
  return;
}



/* Entry: 100ece6c8; end: 100ece723;  */

void FUN_100ece6c8(long *param_1,long param_2,long param_3)

{
  long lVar1;
  
  func_0x000108b9a804();
  func_0x000107c61180();
  if (param_2 == 0) {
    lVar1 = 0;
    param_3 = 0;
  }
  else {
    lVar1 = param_2;
    func_0x000107c5faec();
    func_0x000107c61170(param_2);
  }
  *param_1 = lVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 100ece724; end: 100ece7c7;  */

void FUN_100ece724(undefined8 param_1,long *param_2)

{
  *(bool *)param_1 = (*param_2 == 2 && param_2[1] == 0) && (char)param_2[2] == '\x04';
  return;
}



/* Entry: 100ece7c8; end: 100ece84f;  */

undefined8
FUN_100ece7c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,code *param_6)

{
  func_0x000103dbf46c();
  func_0x0001000285a8(param_3,param_4);
  func_0x0001000bfde0(param_5,0,param_3);
  func_0x000107c61574(param_1);
  (*param_6)();
  func_0x000104884898();
  func_0x000107c61574(param_5);
  return param_1;
}



/* Entry: 100ece850; end: 100ece887;  */

undefined * FUN_100ece850(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  
  puVar3 = PTR___sSbSQsWP_11034dd50;
  puVar1 = PTR___sSbN_11034dd40;
  pcVar2 = FUN_100ece724;
  func_0x000103dbf46c();
  func_0x0001000bfde0(FUN_100ece724,0,puVar1);
  func_0x000107c61574(param_1);
  func_0x000104884898(puVar3);
  func_0x000107c61574(pcVar2);
  return puVar3;
}



/* Entry: 100ece888; end: 100ece8f7;  */

undefined8
FUN_100ece888(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  func_0x000103dbf46c();
  func_0x0001000bfde0(param_3,0,param_4);
  func_0x000107c61574(param_1);
  func_0x000104884898(param_5);
  func_0x000107c61574(param_3);
  return param_5;
}



/* Entry: 100ece8f8; end: 100ece967;  */

void FUN_100ece8f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112d48820 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d48818;
  func_0x00010002969c(0x112d48818,&UNK_10d90f630);
  uVar2 = uVar1;
  FUN_100ecbadc();
  puVar3 = PTR___sxSgSQsSQRzlMc_11034f190;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sxSgSQsSQRzlMc_11034f190,uVar1,&uStack_28);
  puRam0000000112d48820 = puVar3;
  return;
}



/* Entry: 100ece968; end: 100ece9ab;  */

void FUN_100ece968(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d48630 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d48630 = puVar1;
  return;
}



/* Entry: 100ece9ac; end: 100eceae7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100ece9ac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d48850;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112d48850);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c61180();
    func_0x000107c5a050();
    func_0x000107c53840(puVar3,param_2,1);
    func_0x000107c61170(puVar3);
    puVar2 = PTR_PTR_1126b0c40;
    func_0x000107c61168(PTR_PTR_1126b0c40);
    func_0x000107c450a4(0x4048000000000000,0x4048000000000000);
    func_0x000107c61180();
    func_0x000107c55258(puVar3,param_2,puVar2);
    func_0x000107c61170(puVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 100eceae8; end: 100eceb87;  */

undefined * FUN_100eceae8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c5a050();
  func_0x000107c61174(puVar1);
  func_0x000107c56ba8();
  func_0x000107c5a100(puVar1,param_2,3);
  func_0x000107c59c74(puVar1,param_2,1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 100eceb88; end: 100ecee43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100eceb88(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d48860;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112d48860);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c5a050();
    func_0x000107c56ba8(puVar3,param_2,0);
    func_0x000107c59c74(puVar3,param_2,1);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 100ecee44; end: 100ecee6b; -[_TtC38PostRegistrationAgeVerificationFeature43PostRegAgeVerificationLandingViewController initWithCoder:] */

void FUN_100ecee44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000100ecfd5c();
  return;
}



/* Entry: 100ecee6c; end: 100ecf39f;  */

/* WARNING: Possible PIC construction at 0x000100eceed0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecef0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecef48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100eceff0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecf010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecf060: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecf084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecf0d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecf0f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecf124: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecf14c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecf188: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecf1d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecf1fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecf24c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecf270: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecf2d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecf2ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecf314: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ecf2f0) */
/* WARNING: Removing unreachable block (ram,0x000100ecf2d4) */
/* WARNING: Removing unreachable block (ram,0x000100ecf274) */
/* WARNING: Removing unreachable block (ram,0x000100ecf39c) */
/* WARNING: Removing unreachable block (ram,0x000100ecf2a8) */
/* WARNING: Removing unreachable block (ram,0x000100ecf250) */
/* WARNING: Removing unreachable block (ram,0x000100ecf200) */
/* WARNING: Removing unreachable block (ram,0x000100ecf398) */
/* WARNING: Removing unreachable block (ram,0x000100ecf234) */
/* WARNING: Removing unreachable block (ram,0x000100ecf1dc) */
/* WARNING: Removing unreachable block (ram,0x000100ecf18c) */
/* WARNING: Removing unreachable block (ram,0x000100ecf394) */
/* WARNING: Removing unreachable block (ram,0x000100ecf1c0) */
/* WARNING: Removing unreachable block (ram,0x000100ecf150) */
/* WARNING: Removing unreachable block (ram,0x000100ecf128) */
/* WARNING: Removing unreachable block (ram,0x000100ecf0fc) */
/* WARNING: Removing unreachable block (ram,0x000100ecf0d8) */
/* WARNING: Removing unreachable block (ram,0x000100ecf088) */
/* WARNING: Removing unreachable block (ram,0x000100ecf390) */
/* WARNING: Removing unreachable block (ram,0x000100ecf0bc) */
/* WARNING: Removing unreachable block (ram,0x000100ecf064) */
/* WARNING: Removing unreachable block (ram,0x000100ecf014) */
/* WARNING: Removing unreachable block (ram,0x000100ecf38c) */
/* WARNING: Removing unreachable block (ram,0x000100ecf048) */
/* WARNING: Removing unreachable block (ram,0x000100eceff4) */
/* WARNING: Removing unreachable block (ram,0x000100ecef4c) */
/* WARNING: Removing unreachable block (ram,0x000100ecf388) */
/* WARNING: Removing unreachable block (ram,0x000100ecefd8) */
/* WARNING: Removing unreachable block (ram,0x000100ecef10) */
/* WARNING: Removing unreachable block (ram,0x000100ecf384) */
/* WARNING: Removing unreachable block (ram,0x000100ecef2c) */
/* WARNING: Removing unreachable block (ram,0x000100eceed4) */
/* WARNING: Removing unreachable block (ram,0x000100ecf380) */
/* WARNING: Removing unreachable block (ram,0x000100eceef0) */
/* WARNING: Removing unreachable block (ram,0x000100ecf318) */

void FUN_100ecee6c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c52b50(unaff_x20,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ecf380);
  (*pcVar1)();
}



/* Entry: 100ecf3a0; end: 100ecf713;  */

/* WARNING: Possible PIC construction at 0x000100ecf488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecf524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecf5c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecf65c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ecf5c4) */
/* WARNING: Removing unreachable block (ram,0x000100ecf528) */
/* WARNING: Removing unreachable block (ram,0x000100ecf48c) */
/* WARNING: Removing unreachable block (ram,0x000100ecf660) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ecf3a0(void)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined *puVar5;
  long unaff_x20;
  
  func_0x0001000a8868(unaff_x20 + _DAT_112d48828,*(undefined8 *)(unaff_x20 + _DAT_112d48828 + 0x18))
  ;
  plVar1 = (long *)0x0;
  FUN_100ecd8ac();
  (*(code *)(undefined *)0x100ece764)();
  puVar2 = &UNK_1103656b0;
  func_0x000107c613fc(&UNK_1103656b0,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcVar3 = FUN_100ecfcbc;
  puVar5 = puVar2;
  (**(code **)(*plVar1 + 0x60))(FUN_100ecfcbc);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar2);
  pcVar4 = pcVar3;
  func_0x000107c614f0(pcVar3);
  (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112d48848),pcVar4,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar3);
  return;
}



/* Entry: 100ecf714; end: 100ecf773; -[_TtC38PostRegistrationAgeVerificationFeature43PostRegAgeVerificationLandingViewController viewDidLoad] */

void FUN_100ecf714(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_100ecee6c();
  FUN_100ecf3a0();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100ecf774; end: 100ecfa8f;  */

void FUN_100ecf774(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  uVar3 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar2 = param_2;
    func_0x000100ecea88();
    func_0x000107c61170(param_2);
    func_0x000107c5fadc(uVar3,uVar1);
    func_0x000107c59c6c(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 100ecfa90; end: 100ecfadf; -[_TtC38PostRegistrationAgeVerificationFeature43PostRegAgeVerificationLandingViewController handleContinueButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ecfa90(undefined8 param_1)

{
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  uStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0x80;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_38);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100ecfae0; end: 100ecfb3f; -[_TtC38PostRegistrationAgeVerificationFeature43PostRegAgeVerificationLandingViewController initWithNibName:bundle:] */

void FUN_100ecfae0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PostRegistrationAgeVerificationFeature.PostRegAgeVerificationLandingViewController"
                      ,0x52,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ecfb0c);
  (*pcVar1)();
}



/* Entry: 100ecfb40; end: 100ecfbf7; -[_TtC38PostRegistrationAgeVerificationFeature43PostRegAgeVerificationLandingViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100ecfb6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecfbac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ecfbcc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ecfbb0) */
/* WARNING: Removing unreachable block (ram,0x000100ecfb70) */
/* WARNING: Removing unreachable block (ram,0x000100ecfbd0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ecfb40(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112d48828);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d48830));
  return;
}



/* Entry: 100ecfbf8; end: 100ecfc17;  */

void FUN_100ecfbf8(void)

{
  func_0x000107c61168(&PTR_PTR_11279e0d0);
  return;
}



/* Entry: 100ecfc18; end: 100ecfcbb; -[_TtC38PostRegistrationAgeVerificationFeature43PostRegAgeVerificationLandingViewController declaredAgeCompletedWith:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ecfc18(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d48830);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c4ffe8(uVar1);
  func_0x000107c61180();
  func_0x000107c615e8();
  uStack_48 = *(undefined8 *)(param_3 + _DAT_112f8e4c0);
  uStack_40 = 0;
  uStack_38 = 0x40;
  func_0x0001002a64a8(&uStack_48);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100ecfcbc; end: 100ecfce3;  */

void FUN_100ecfcbc(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar4 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000100ecea88();
    func_0x000107c61170(lVar2);
    func_0x000107c5fadc(uVar4,uVar1);
    func_0x000107c59c6c(lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(uVar4);
  }
  return;
}



/* Entry: 100ecfce4; end: 100ecfe57;  */

void FUN_100ecfce4(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_100ecfe58(0,param_1,param_2);
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



/* Entry: 100ecfe58; end: 100ecfe97;  */

void FUN_100ecfe58(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100ecfe98; end: 100ed00c7;  */

uint FUN_100ecfe98(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  uint uVar4;
  undefined8 unaff_x20;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined1 auStack_80 [8];
  long lStack_78;
  long lStack_70;
  
  lVar1 = 0;
  func_0x000107c5ef5c();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar11 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)puVar11 - extraout_x8_00;
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar9 = lVar5 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar9 - extraout_x12;
  lVar3 = 0;
  func_0x000107c5ef64();
  lStack_78 = *(long *)(lVar3 + -8);
  lStack_70 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_78 + 0x40));
  lVar12 = lVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5ef54(lVar12);
  (**(code **)(lVar8 + 0x68))
            (puVar11,*(undefined4 *)PTR___s10Foundation8CalendarV9ComponentO4yearyA2EmFWC_110350d88,
             lVar1);
  func_0x000107c5ef4c(lVar5,puVar11,param_1,unaff_x20,0);
  (**(code **)(lVar8 + 8))(puVar11,lVar1);
  lVar3 = lVar5;
  (**(code **)(lVar7 + 0x30))(lVar5,1,lVar2);
  if ((int)lVar3 == 1) {
    (**(code **)(lStack_78 + 8))(lVar12,lStack_70);
    func_0x0001000d1dcc(lVar5);
    uVar4 = 0;
  }
  else {
    (**(code **)(lVar7 + 0x20))(lVar10,lVar5,lVar2);
    func_0x000107c5eea0(lVar9);
    lVar3 = lVar9;
    func_0x000107c5ee78(lVar9,lVar10);
    uVar4 = (uint)lVar3;
    pcVar6 = *(code **)(lVar7 + 8);
    (*pcVar6)(lVar9,lVar2);
    (*pcVar6)(lVar10,lVar2);
    (**(code **)(lStack_78 + 8))(lVar12,lStack_70);
  }
  return uVar4 & 1;
}



/* Entry: 100ed00c8; end: 100ed039f;  */

/* WARNING: Possible PIC construction at 0x000100ed017c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ed0180) */

void FUN_100ed00c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000100ed0194();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar4 = 0x6e776f6e6b6e75;
  if (lVar3 == 1) {
    uVar4 = 0x4c46;
  }
  uVar2 = 0xe700000000000000;
  if (lVar3 == 1) {
    uVar2 = 0xe200000000000000;
  }
  uVar1 = 0x726568746f;
  if (lVar3 != 2) {
    uVar1 = uVar4;
  }
  uVar4 = 0xe500000000000000;
  if (lVar3 != 2) {
    uVar4 = uVar2;
  }
  uVar2 = 0x5854;
  if (lVar3 != 0) {
    uVar2 = uVar1;
  }
  uVar1 = 0xe200000000000000;
  if (lVar3 != 0) {
    uVar1 = uVar4;
  }
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000104d0f998(uVar5,param_1,uVar2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ed03a0; end: 100ed03e3;  */

void FUN_100ed03a0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100ed03e4; end: 100ed062b;  */

/* WARNING: Possible PIC construction at 0x000100ed0428: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ed042c) */

void FUN_100ed03e4(void)

{
  char *pcVar1;
  
  pcVar1 = "run(state:)";
  func_0x0001000c10c0("run(state:)");
  func_0x000107c61180();
  func_0x000100471e0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar1);
  return;
}



/* Entry: 100ed062c; end: 100ed086f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed062c(void)

{
  long lVar1;
  undefined8 ****ppppuVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long lStack_80;
  undefined8 ***pppuStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  long lStack_60;
  undefined **ppuStack_58;
  
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d48960);
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d48998);
  lVar1 = 0;
  FUN_100ecd8ac();
  lVar8 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x40) = uVar9;
  *(undefined8 *)(lVar8 + 0x48) = uVar7;
  pppuStack_78 = (undefined8 ***)0x0;
  uStack_70 = 0;
  uStack_68 = 4;
  lStack_60 = uVar9;
  func_0x000107c6157c(uVar7);
  ppppuVar2 = &pppuStack_78;
  func_0x000103dbf4dc();
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d48968);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d48990);
  ppuStack_58 = &PTR_DAT_110365670;
  uVar7 = 0;
  pppuStack_78 = ppppuVar2;
  lStack_60 = lVar1;
  FUN_100ecfbf8(0);
  func_0x000107c610f8();
  func_0x0001000c6518(&pppuStack_78,lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  plVar11 = (long *)((long)&lStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(plVar11);
  lVar8 = *plVar11;
  func_0x000107c6157c(ppppuVar2);
  func_0x000107c61174(uVar9);
  func_0x000107c61174(uVar10);
  FUN_100ed0cf0(lVar8,uVar9,uVar10,uVar7);
  func_0x0001000834e4(&pppuStack_78);
  plVar11 = *(long **)(lVar8 + _DAT_112d48840);
  func_0x000107c6157c(ppppuVar2);
  func_0x000107c6157c(plVar11);
  func_0x000103dbf524();
  func_0x000107c61574();
  func_0x000103dbf46c();
  func_0x000107c61574(ppppuVar2);
  puVar3 = &UNK_1103656f8;
  func_0x000107c613fc(&UNK_1103656f8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  pcVar4 = FUN_100ed0e44;
  puVar6 = puVar3;
  (**(code **)(*plVar11 + 0x60))(FUN_100ed0e44);
  func_0x000107c61574(plVar11);
  func_0x000107c61574(puVar3);
  pcVar5 = pcVar4;
  func_0x000107c614f0(pcVar4);
  (**(code **)(puVar6 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112d489a0),pcVar5,puVar6);
  func_0x000107c615e8(pcVar4);
  func_0x000107c3e2c0(*(undefined8 *)(unaff_x20 + _DAT_112d48950));
  func_0x000107c61574(ppppuVar2);
  func_0x000107c61170(lVar8);
  return;
}



/* Entry: 100ed0870; end: 100ed0aab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed0870(void)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  
  puVar1 = auStack_50;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d48960);
  func_0x000100ecb314(0);
  func_0x000107c613fc();
  auStack_50[0] = 0;
  uStack_48 = uVar4;
  func_0x000103dbf4dc();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d48978);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d48980);
  lVar2 = unaff_x20 + _DAT_112d48988;
  func_0x000107c61618(lVar2);
  func_0x000107c6157c(puVar1);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  puVar3 = puVar1;
  FUN_100ed0e4c(puVar1,uVar4,uVar5,lVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c615e8(lVar2);
  uVar4 = *(undefined8 *)(puVar3 + _DAT_112d48668);
  func_0x000107c6157c(uVar4);
  func_0x000103dbf524();
  func_0x000107c61574(uVar4);
  func_0x000107c3e2c0(*(undefined8 *)(unaff_x20 + _DAT_112d48950));
  func_0x000107c61574(puVar1);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 100ed0aac; end: 100ed0b0b; -[_TtC38PostRegistrationAgeVerificationFeature28PostRegAgeVerificationRouter init] */

void FUN_100ed0aac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PostRegistrationAgeVerificationFeature.PostRegAgeVerificationRouter",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ed0ad8);
  (*pcVar1)();
}



/* Entry: 100ed0b0c; end: 100ed0bc3; -[_TtC38PostRegistrationAgeVerificationFeature28PostRegAgeVerificationRouter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100ed0b38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ed0ba8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ed0b3c) */
/* WARNING: Removing unreachable block (ram,0x000100ed0bac) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed0b0c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d48950));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d48958));
  return;
}



/* Entry: 100ed0bc4; end: 100ed0be3;  */

void FUN_100ed0bc4(void)

{
  func_0x000107c61168(&PTR_PTR_11279e1d8);
  return;
}



/* Entry: 100ed0be4; end: 100ed0c5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ed0be4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  lVar1 = _DAT_112d48958;
  lVar2 = *unaff_x20;
  (**(code **)(**(long **)(lVar2 + _DAT_112d48958) + 0x98))();
  FUN_100ed03e4();
  func_0x000107c61574(param_1);
  uStack_40 = 0;
  uStack_38 = 3;
  (**(code **)(**(long **)(lVar2 + lVar1) + 0xb0))(&uStack_40);
  return;
}


