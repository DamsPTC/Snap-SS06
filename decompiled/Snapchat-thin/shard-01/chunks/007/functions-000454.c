/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101368154; end: 101368263;  */

/* WARNING: Possible PIC construction at 0x000101368198: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101368214: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010136819c) */
/* WARNING: Removing unreachable block (ram,0x000101368250) */
/* WARNING: Removing unreachable block (ram,0x0001013681ac) */
/* WARNING: Removing unreachable block (ram,0x0001013681b8) */
/* WARNING: Removing unreachable block (ram,0x0001013681bc) */
/* WARNING: Removing unreachable block (ram,0x000101368254) */
/* WARNING: Removing unreachable block (ram,0x0001013681c0) */
/* WARNING: Removing unreachable block (ram,0x0001013681c8) */
/* WARNING: Removing unreachable block (ram,0x0001013681cc) */
/* WARNING: Removing unreachable block (ram,0x000101368258) */
/* WARNING: Removing unreachable block (ram,0x0001013681d0) */
/* WARNING: Removing unreachable block (ram,0x00010136825c) */
/* WARNING: Removing unreachable block (ram,0x0001013681e8) */
/* WARNING: Removing unreachable block (ram,0x000101368260) */
/* WARNING: Removing unreachable block (ram,0x0001013681fc) */
/* WARNING: Removing unreachable block (ram,0x000101368218) */

void FUN_101368154(char param_1)

{
  undefined *puVar1;
  
  if (param_1 == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x000107c453e4();
    func_0x000107c5c9e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 101368264; end: 1013683bb;  */

int FUN_101368264(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1013682e0;
        goto LAB_1013682c4;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1013682c4:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_1013682e0:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1013683bc; end: 1013683fb;  */

void FUN_1013683bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d75c18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d935e00;
  func_0x000107c61520(&UNK_10d935e00,&UNK_1103a7178);
  puRam0000000112d75c18 = puVar1;
  return;
}



/* Entry: 1013683fc; end: 10136843b;  */

undefined1 FUN_1013683fc(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 10136843c; end: 1013684ff;  */

undefined * FUN_10136843c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x000107c453e4();
  puVar2 = puVar1;
  func_0x000107c5a050();
  func_0x000108ed0578();
  func_0x000107c61180();
  func_0x000107c59c6c(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168(PTR__OBJC_CLASS___UIFont_1126aec38);
  func_0x000107c4ca94(0x4036000000000000);
  func_0x000107c61180();
  func_0x000107c54adc(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  return puVar1;
}



/* Entry: 101368500; end: 1013687ef;  */

undefined * FUN_101368500(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UITextView_1126afb88;
  func_0x000107c610f8(PTR__OBJC_CLASS___UITextView_1126afb88);
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c5a050();
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168(PTR__OBJC_CLASS___UIFont_1126aec38);
  func_0x000107c4ca94(0x402c000000000000);
  func_0x000107c61180();
  func_0x000107c54adc(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar3 = puVar2;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(puVar1,param_2,puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c3fa94(puVar2);
  func_0x000107c61180();
  func_0x000107c52b50(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c59c74(puVar1,param_2,1);
  func_0x000107c54400(puVar1,param_2,0);
  func_0x000107c58cd8(puVar1,param_2,0);
  return puVar1;
}



/* Entry: 1013687f0; end: 1013688e7;  */

undefined * FUN_1013687f0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x000107c61168(PTR_PTR_1126aec40);
  func_0x000107c3ee98();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x000108ed05c0();
  func_0x000107c61180();
  func_0x000107c59e1c(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c30a38(0xd5,0x6a);
  func_0x000107c59e34(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar1);
  func_0x000107c30a34(0x6a);
  func_0x000107c5af88(puVar2);
  func_0x000107c61180();
  func_0x000107c52b50(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c5a050(puVar1);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 1013688e8; end: 101368a7f; -[_TtC15SCOAuth2Feature33OAuth2PrivacyScreenViewController viewDidLoad] */

void FUN_1013688e8(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  FUN_101369cd4();
  puVar3 = PTR_s_viewDidLoad_112684cd8;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar3);
  lVar2 = param_1;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c3fa94();
    func_0x000107c61180();
    func_0x000107c52b50(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar3);
    func_0x00010136899c();
    func_0x000107c61170(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10136899c);
  (*pcVar1)();
}



/* Entry: 101368a80; end: 1013692cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101368a80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  long lStack_88;
  
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d75c50);
  uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112d75c58);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  dVar15 = 1.0;
  uVar17 = 0xc038000000000000;
  puVar3 = puVar2;
  func_0x000107c402b4(0x3ff0000000000000,0xc038000000000000);
  func_0x000107c61180();
  lVar8 = _DAT_112d75c38;
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112d75c38);
  *(undefined **)(unaff_x20 + _DAT_112d75c38) = puVar3;
  func_0x000107c61170(uVar9);
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1013692c4);
    (*pcVar1)();
  }
  func_0x000107c3ec60();
  func_0x000107c61170(lVar4);
  func_0x000107c609b0(dVar15,uVar17,param_3,param_4);
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  dVar16 = dVar15;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c517cc();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x000107c61174(uVar10);
    plVar11 = (long *)0x0;
  }
  else {
    uVar9 = 0;
    lStack_88 = lVar4;
    FUN_101369da4(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000107c61174(uVar10);
    plVar11 = &lStack_88;
    func_0x000107c605b0(plVar11,uVar9);
    func_0x000107c61170(lStack_88);
  }
  puVar5 = puVar2;
  func_0x000107c402b4(0x3ff0000000000000,0);
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  func_0x000107c615e8(plVar11);
  lVar4 = _DAT_112d75c40;
  lVar6 = *(long *)(unaff_x20 + _DAT_112d75c40);
  *(undefined **)(unaff_x20 + _DAT_112d75c40) = puVar5;
  func_0x000107c61170();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x18) = 0x27;
  *(undefined8 *)(lVar6 + 0x10) = 0x13;
  *(undefined8 *)(lVar6 + 0x20) = *(undefined8 *)(unaff_x20 + lVar4);
  func_0x000107c61174();
  uVar9 = uVar10;
  func_0x000107c4ace0();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar7 = lVar4;
    func_0x000107c4ace0();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    uVar17 = uVar9;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    func_0x000107c61170(lVar7);
    *(undefined8 *)(lVar6 + 0x28) = uVar17;
    uVar9 = uVar10;
    func_0x000107c50890();
    func_0x000107c61180();
    lVar4 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 != 0) {
      lVar7 = lVar4;
      func_0x000107c50890();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      uVar17 = uVar9;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar9);
      func_0x000107c61170(lVar7);
      *(undefined8 *)(lVar6 + 0x30) = uVar17;
      uVar9 = uVar10;
      func_0x000107c44d9c();
      func_0x000107c61180();
      uVar17 = uVar9;
      func_0x000107c40290(dVar15 - (dVar16 + 24.0 + 8.0 + 20.0));
      func_0x000107c61180();
      func_0x000107c61170(uVar9);
      *(undefined8 *)(lVar6 + 0x38) = uVar17;
      uVar9 = uVar12;
      func_0x000107c3f75c();
      func_0x000107c61180();
      uVar17 = uVar10;
      func_0x000107c3f75c(uVar10);
      func_0x000107c61180();
      uVar13 = uVar9;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar17);
      uVar9 = *(undefined8 *)(unaff_x20 + lVar8);
      *(undefined8 *)(lVar6 + 0x40) = uVar13;
      *(undefined8 *)(lVar6 + 0x48) = uVar9;
      uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112d75c60);
      func_0x000107c61174();
      uVar9 = uVar14;
      func_0x000107c4ace0();
      func_0x000107c61180();
      uVar17 = uVar10;
      func_0x000107c4ace0(uVar10);
      func_0x000107c61180();
      uVar13 = uVar9;
      func_0x000107c40284(0x4034000000000000);
      func_0x000107c61180();
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar17);
      *(undefined8 *)(lVar6 + 0x50) = uVar13;
      uVar9 = uVar14;
      func_0x000107c50890();
      func_0x000107c61180();
      uVar17 = uVar10;
      func_0x000107c50890(uVar10);
      func_0x000107c61180();
      uVar13 = uVar9;
      func_0x000107c40284(0xc034000000000000);
      func_0x000107c61180();
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar17);
      *(undefined8 *)(lVar6 + 0x58) = uVar13;
      uVar9 = uVar14;
      func_0x000107c44d9c();
      func_0x000107c61180();
      uVar17 = uVar9;
      func_0x000107c40290(0x4051800000000000);
      func_0x000107c61180();
      func_0x000107c61170(uVar9);
      *(undefined8 *)(lVar6 + 0x60) = uVar17;
      uVar9 = uVar14;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      func_0x000107c3ec1c(uVar12);
      func_0x000107c61180();
      uVar17 = uVar9;
      func_0x000107c40284(0x4038000000000000);
      func_0x000107c61180();
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar12);
      *(undefined8 *)(lVar6 + 0x68) = uVar17;
      uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112d75c68);
      uVar12 = uVar13;
      func_0x000107c4ace0();
      func_0x000107c61180();
      uVar9 = uVar10;
      func_0x000107c4ace0(uVar10);
      func_0x000107c61180();
      uVar17 = uVar12;
      func_0x000107c40284(0x4034000000000000);
      func_0x000107c61180();
      func_0x000107c61170(uVar12);
      func_0x000107c61170(uVar9);
      *(undefined8 *)(lVar6 + 0x70) = uVar17;
      uVar12 = uVar13;
      func_0x000107c50890();
      func_0x000107c61180();
      uVar9 = uVar10;
      func_0x000107c50890(uVar10);
      func_0x000107c61180();
      uVar17 = uVar12;
      func_0x000107c40284(0xc034000000000000);
      func_0x000107c61180();
      func_0x000107c61170(uVar12);
      func_0x000107c61170(uVar9);
      *(undefined8 *)(lVar6 + 0x78) = uVar17;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      func_0x000107c3ec1c();
      func_0x000107c61180();
      dVar15 = 12.0;
      uVar12 = uVar13;
      func_0x000107c40284(0x4028000000000000);
      func_0x000107c61180();
      func_0x000107c61170(uVar13);
      func_0x000107c61170();
      *(undefined8 *)(lVar6 + 0x80) = uVar12;
      func_0x000101368608();
      uVar12 = uVar14;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      func_0x000107c61170(uVar14);
      uVar9 = uVar10;
      func_0x000107c3ec1c(uVar10);
      func_0x000107c61180();
      func_0x000107c517d0(puVar3);
      uVar17 = uVar12;
      func_0x000107c40284(-22.0 - dVar15);
      func_0x000107c61180();
      func_0x000107c61170(uVar12);
      func_0x000107c61170(uVar9);
      *(undefined8 *)(lVar6 + 0x88) = uVar17;
      lVar8 = _DAT_112d75c70;
      uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112d75c70);
      func_0x000107c3f75c();
      func_0x000107c61180();
      uVar12 = uVar10;
      func_0x000107c3f75c(uVar10);
      func_0x000107c61180();
      uVar9 = uVar17;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar17);
      func_0x000107c61170(uVar12);
      *(undefined8 *)(lVar6 + 0x90) = uVar9;
      uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112d75c78);
      uVar12 = uVar17;
      func_0x000107c44d9c();
      func_0x000107c61180();
      uVar9 = uVar12;
      func_0x000107c40290(0x4048000000000000);
      func_0x000107c61180();
      func_0x000107c61170(uVar12);
      *(undefined8 *)(lVar6 + 0x98) = uVar9;
      uVar12 = uVar17;
      func_0x000107c3f75c();
      func_0x000107c61180();
      func_0x000107c3f75c(uVar10);
      func_0x000107c61180();
      uVar9 = uVar12;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar12);
      func_0x000107c61170(uVar10);
      *(undefined8 *)(lVar6 + 0xa0) = uVar9;
      uVar12 = uVar17;
      func_0x000107c5e308();
      func_0x000107c61180();
      uVar10 = uVar12;
      func_0x000107c40290(0x406bc00000000000);
      func_0x000107c61180();
      func_0x000107c61170(uVar12);
      *(undefined8 *)(lVar6 + 0xa8) = uVar10;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      uVar10 = *(undefined8 *)(unaff_x20 + lVar8);
      func_0x000107c5cbe4(uVar10);
      func_0x000107c61180();
      uVar12 = uVar17;
      func_0x000107c40284(0xc040000000000000);
      func_0x000107c61180();
      func_0x000107c61170(uVar17);
      func_0x000107c61170(uVar10);
      *(undefined8 *)(lVar6 + 0xb0) = uVar12;
      uVar12 = 0;
      FUN_101369da4(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar8 = lVar6;
      func_0x000107c5fc48(lVar6,uVar12);
      func_0x000107c61574(lVar6);
      func_0x000107c3d048(puVar2);
      func_0x000107c61170(lVar8);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1013692cc);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013692c8);
  (*pcVar1)();
}



/* Entry: 1013692cc; end: 101369493;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013692cc(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  long lStack_78;
  long alStack_68 [3];
  undefined8 uStack_50;
  
  lVar2 = _DAT_112d75c20;
  func_0x000107c61428(unaff_x20 + _DAT_112d75c20,auStack_a8,0,0);
  FUN_101369cf4(unaff_x20 + lVar2,auStack_90);
  if (lStack_78 == 0) {
    func_0x000101369d44(auStack_90,0x112d75ca8,&UNK_10d935e60);
  }
  else {
    FUN_101369d84(auStack_90,alStack_68);
    lVar2 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101369490);
      (*pcVar1)();
    }
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168();
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c52b50(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170();
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d75c68);
    func_0x000108ed0590();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101369494);
      (*pcVar1)();
    }
    func_0x000107c59c6c(uVar7);
    func_0x000107c61170(puVar3);
    func_0x000107c5b09c(uVar7);
    plVar4 = alStack_68;
    func_0x0001000a8868(plVar4,uStack_50);
    FUN_101367f6c();
    puVar3 = &UNK_1103a71f8;
    func_0x000107c613fc(&UNK_1103a71f8,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    uVar7 = 0x101369d9c;
    puVar6 = puVar3;
    (**(code **)(*plVar4 + 0x60))(0x101369d9c);
    func_0x000107c61574(plVar4);
    func_0x000107c61574(puVar3);
    uVar5 = uVar7;
    func_0x000107c614f0(uVar7);
    (**(code **)(puVar6 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112d75c30),uVar5,puVar6);
    func_0x000107c615e8(uVar7);
    func_0x0001000834e4(alStack_68);
  }
  return;
}



/* Entry: 101369494; end: 10136951b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101369494(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112d75c60);
    func_0x000107c61174(uVar1);
    func_0x000107c61170(param_2);
    func_0x000107c55258(uVar1);
    func_0x000107c61170(uVar1);
  }
  return;
}



/* Entry: 10136951c; end: 10136967f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10136951c(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffc0 + -extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar5 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edd0(puVar6,*(undefined8 *)(unaff_x20 + _DAT_112d75c48),
                      ((undefined8 *)(unaff_x20 + _DAT_112d75c48))[1]);
  puVar2 = puVar6;
  (**(code **)(lVar7 + 0x30))(puVar6,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x000101369d44(puVar6,0x112d36580,&UNK_10d9016d0);
  }
  else {
    (**(code **)(lVar7 + 0x20))(lVar5,puVar6,lVar1);
    puVar3 = PTR__OBJC_CLASS___SFSafariViewController_1126d6d00;
    func_0x000107c610f8(PTR__OBJC_CLASS___SFSafariViewController_1126d6d00);
    puVar4 = puVar3;
    func_0x000107c5ed90();
    func_0x000107c48fbc(puVar3);
    func_0x000107c61170(puVar4);
    func_0x000107c4f018();
    func_0x000107c61170(puVar3);
    (**(code **)(lVar7 + 8))(lVar5,lVar1);
  }
  return;
}



/* Entry: 101369680; end: 1013696a7; -[_TtC15SCOAuth2Feature33OAuth2PrivacyScreenViewController _didPressPrivacyPolicyButton] */

void FUN_101369680(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10136951c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013696a8; end: 1013696f3; -[_TtC15SCOAuth2Feature33OAuth2PrivacyScreenViewController _didPressContinueButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013696a8(undefined8 param_1)

{
  undefined1 uStack_21;
  
  uStack_21 = 1;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_21);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1013696f4; end: 101369927;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1013696f4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  
  puVar6 = &stack0xffffffffffffffa0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d75c20);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  lVar2 = _DAT_112d75c28;
  uVar3 = 0x112d75cb0;
  func_0x0001000285a8(0x112d75cb0,&UNK_10d935e68);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112d75c30;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112d75c38;
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112d75c40;
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d75c48);
  *puVar1 = 0xd000000000000021;
  puVar1[1] = 0x800000010ef38cd0;
  lVar2 = _DAT_112d75c50;
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a050();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(puVar4);
  func_0x000107c61170();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112d75c58;
  FUN_10136843c();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  lVar2 = _DAT_112d75c60;
  puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar5 = puVar4;
  func_0x000107c5a050();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112d75c68;
  FUN_101368500();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112d75c70) = 0;
  lVar2 = _DAT_112d75c78;
  FUN_1013687f0();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c6142c();
  }
  FUN_101369cd4();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_initWithNibName_bundle__1125e9850,param_1,
                      param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return puVar6;
}



/* Entry: 101369928; end: 101369987; -[_TtC15SCOAuth2Feature33OAuth2PrivacyScreenViewController initWithNibName:bundle:] */

void FUN_101369928(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_4);
  FUN_1013696f4(param_3,param_2,param_4);
  return;
}



/* Entry: 101369988; end: 101369b8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101369988(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  
  puVar6 = &stack0xffffffffffffffb0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d75c20);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  lVar2 = _DAT_112d75c28;
  uVar3 = 0x112d75cb0;
  func_0x0001000285a8(0x112d75cb0,&UNK_10d935e68);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112d75c30;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112d75c38;
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112d75c40;
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d75c48);
  *puVar1 = 0xd000000000000021;
  puVar1[1] = 0x800000010ef38cd0;
  lVar2 = _DAT_112d75c50;
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a050();
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(puVar4);
  func_0x000107c61170();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112d75c58;
  FUN_10136843c();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  lVar2 = _DAT_112d75c60;
  puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar5 = puVar4;
  func_0x000107c5a050();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112d75c68;
  FUN_101368500();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112d75c70) = 0;
  lVar2 = _DAT_112d75c78;
  FUN_1013687f0();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  FUN_101369cd4();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_initWithCoder__1125dd730,param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (puVar6 != (undefined1 *)0x0) {
    func_0x000107c61170(puVar6);
  }
  return puVar6;
}



/* Entry: 101369b90; end: 101369bb7; -[_TtC15SCOAuth2Feature33OAuth2PrivacyScreenViewController initWithCoder:] */

void FUN_101369b90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_101369988();
  return;
}



/* Entry: 101369bb8; end: 101369be7;  */

void FUN_101369bb8(void)

{
  FUN_101369cd4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101369be8; end: 101369cd3; -[_TtC15SCOAuth2Feature33OAuth2PrivacyScreenViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101369c44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101369c78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101369c98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101369cb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101369c9c) */
/* WARNING: Removing unreachable block (ram,0x000101369c7c) */
/* WARNING: Removing unreachable block (ram,0x000101369c48) */
/* WARNING: Removing unreachable block (ram,0x000101369cbc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101369be8(long param_1)

{
  func_0x000101369d44(param_1 + _DAT_112d75c20,0x112d75ca8,&UNK_10d935e60);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d75c28));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d75c30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d75c38));
  return;
}



/* Entry: 101369cd4; end: 101369cf3;  */

void FUN_101369cd4(void)

{
  func_0x000107c61168(&PTR_PTR_1127cb198);
  return;
}



/* Entry: 101369cf4; end: 101369d83;  */

undefined8 FUN_101369cf4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d75ca8;
  func_0x0001000285a8(0x112d75ca8,&UNK_10d935e60);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101369d84; end: 101369da3;  */

undefined8 * FUN_101369d84(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 101369da4; end: 101369de3;  */

void FUN_101369da4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101369de4; end: 101369df7;  */

bool FUN_101369de4(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101369df8; end: 101369ea3;  */

void FUN_101369df8(void)

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



/* Entry: 101369ea4; end: 101369ec7;  */

void FUN_101369ea4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  cVar4 = *(char *)(param_2 + 2);
  uVar1 = uVar3;
  if (cVar4 != '\x01') {
    uVar1 = 0;
  }
  *param_1 = uVar2;
  param_1[1] = uVar1;
  *(bool *)(param_1 + 2) = cVar4 == '\x01';
  if (cVar4 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar2);
  return;
}



/* Entry: 101369ec8; end: 101369f8f;  */

undefined8 FUN_101369ec8(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  double dVar5;
  
  lVar2 = *(long *)(unaff_x20 + 0x48);
  func_0x000107c42eac();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101369f90);
    (*pcVar1)();
  }
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 != 0) {
    lVar2 = lVar3;
    func_0x000107c5b314();
    func_0x000107c61170(lVar3);
    dVar5 = (double)lVar2 / 1000.0;
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSDate_1126ae770);
    func_0x000107c48cfc();
    func_0x000107c5c9f0();
    func_0x000107c61170(puVar4);
    if (-31536000.0 < dVar5) {
      return 0;
    }
  }
  return 1;
}



/* Entry: 101369f90; end: 101369fc3;  */

/* WARNING: Possible PIC construction at 0x000101369fa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101369fb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101369fa8) */
/* WARNING: Removing unreachable block (ram,0x000101369fb8) */

void FUN_101369f90(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 101369fc4; end: 10136a02b;  */

void FUN_101369fc4(long param_1)

{
  undefined8 uVar1;
  
  func_0x000103dbf870();
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x48));
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x50));
  func_0x000107c61170(*(undefined8 *)(param_1 + 0x58));
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x68,7);
  return;
}



/* Entry: 10136a02c; end: 10136a0e7;  */

void FUN_10136a02c(undefined8 param_1)

{
  if (lRam0000000112d75ce0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e63088c);
  return;
}



/* Entry: 10136a0e8; end: 10136a127;  */

void FUN_10136a0e8(undefined1 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = (undefined1)*param_2;
  uVar2 = param_2[1];
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  uVar3 = (ulong)*(byte *)(param_2 + 2);
  FUN_10136a6f0();
  *param_1 = uVar1;
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(ulong *)(param_1 + 0x10) = uVar3;
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  return;
}



/* Entry: 10136a128; end: 10136a1a7;  */

void FUN_10136a128(ulong *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  long lVar15;
  undefined **ppuVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined1 uVar21;
  long unaff_x20;
  ulong uVar22;
  long lVar23;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  puVar14 = (undefined *)*param_1;
  uVar17 = param_1[1];
  if ((char)param_1[2] == '\0') {
    puVar1 = puVar14;
    FUN_101369ec8();
    func_0x0001000285a8(0x112d75e18,&UNK_10d935f30);
    if (((ulong)puVar1 & 1) == 0) {
      uVar21 = 2;
      puStack_90 = puVar14;
    }
    else {
      puStack_90 = (undefined *)0x3;
      uVar21 = 3;
    }
    uStack_88 = 0;
    pcStack_80 = (code *)CONCAT71(pcStack_80._1_7_,uVar21);
    func_0x000100854cb0(&puStack_90);
    return;
  }
  if ((char)param_1[2] != '\x03') {
    return;
  }
  if (uVar17 != 0 || puVar14 != (undefined *)0x0) {
    return;
  }
  lVar23 = *(long *)(unaff_x20 + 0x40);
  uVar22 = *(ulong *)(unaff_x20 + 0x50);
  uVar2 = uVar22;
  func_0x000107c4d97c();
  func_0x000107c61180();
  uVar3 = uVar22;
  func_0x000107c40250();
  uVar4 = uVar22;
  func_0x000107c49970();
  uVar5 = uVar22;
  func_0x000107c4e6c8();
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x000107c5faec();
  func_0x000107c61170(uVar5);
  func_0x000107c42ef0();
  func_0x000107c61180();
  uVar7 = 0;
  func_0x00010136ade0(0,0x112d75618,&PTR_PTR_1126be098);
  uVar5 = uVar22;
  func_0x000107c5fc54(uVar22,uVar7);
  func_0x000107c61170(uVar22);
  lVar8 = 0x112d75e20;
  func_0x0001000285a8(0x112d75e20,&UNK_10d935f38);
  uVar18 = (ulong)*(uint *)(lVar8 + 0x30);
  func_0x000107c613fc();
  func_0x0001000c2754();
  uVar22 = uVar2;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  uVar19 = uVar18;
  uVar9 = uVar22;
  if (uVar22 == 0) {
    func_0x000107c5faec();
    uVar19 = uVar18;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar18);
  }
  func_0x000107c5faec();
  uVar22 = uVar22 & 0xffffffffffff;
  if ((uVar19 & 0x2000000000000000) != 0) {
    uVar22 = uVar19 >> 0x38 & 0xf;
  }
  if (uVar22 == 0) {
    func_0x000107c6142c(uVar19);
    func_0x000107c61170(uVar9);
    puStack_90 = (undefined *)0x0;
    uStack_88 = 0;
    pcStack_80 = (code *)CONCAT71(pcStack_80._1_7_,1);
    func_0x0001002a64a8(&puStack_90);
    func_0x000107c6142c(uVar17);
LAB_10136ad00:
    func_0x000107c6142c(uVar5);
  }
  else {
    uVar22 = uVar2;
    uVar18 = uVar19;
    func_0x000107c5067c();
    func_0x000107c61180();
    uVar10 = uVar18;
    if (uVar22 == 0) {
      func_0x000107c5faec();
      uVar10 = uVar18;
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar18);
    }
    uVar18 = uVar2;
    func_0x000107c3fb8c();
    func_0x000107c61180();
    uVar11 = uVar10;
    if (uVar18 == 0) {
      func_0x000107c5faec();
      uVar11 = uVar10;
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar10);
    }
    uVar10 = uVar2;
    func_0x000107c4fb10();
    func_0x000107c61180();
    uVar12 = uVar11;
    if (uVar10 == 0) {
      func_0x000107c5faec();
      uVar12 = uVar11;
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar11);
    }
    uVar11 = uVar2;
    func_0x000107c5194c();
    func_0x000107c61180();
    uVar13 = uVar12;
    if (uVar11 == 0) {
      func_0x000107c5faec();
      uVar13 = uVar12;
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar12);
    }
    uVar12 = uVar2;
    func_0x000107c3fcb8();
    func_0x000107c61180();
    uVar20 = uVar13;
    if (uVar12 == 0) {
      func_0x000107c5faec();
      uVar20 = uVar13;
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar13);
    }
    uVar13 = uVar2;
    func_0x000107c3fcb4();
    func_0x000107c61180();
    if (uVar13 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar20);
    }
    func_0x000107c6142c(uVar19);
    puVar14 = PTR_PTR_1126a6b60;
    func_0x000107c610f8(PTR_PTR_1126a6b60);
    func_0x000107c483d4();
    func_0x000107c61170(uVar22);
    func_0x000107c61170(uVar18);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar13);
    lVar15 = *(long *)(lVar23 + 0x10);
    if (lVar15 == 0) {
      func_0x000107c61170(puVar14);
      func_0x000107c6142c(uVar17);
      func_0x000107c6142c(uVar5);
      func_0x000107c61170(uVar2);
      goto LAB_10136ad0c;
    }
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar15 == 0) {
      func_0x000107c61170(puVar14);
      func_0x000107c6142c(uVar17);
      goto LAB_10136ad00;
    }
    uVar22 = 0;
    func_0x00010136ade0(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    func_0x000107c5ffdc();
    puVar1 = &UNK_1103a7358;
    func_0x000107c613fc(&UNK_1103a7358,0x48,7);
    *(long *)(puVar1 + 0x10) = lVar23;
    *(ulong *)(puVar1 + 0x18) = uVar2;
    puVar1[0x20] = (char)uVar3;
    puVar1[0x21] = (char)uVar4;
    *(ulong *)(puVar1 + 0x28) = uVar6;
    *(ulong *)(puVar1 + 0x30) = uVar17;
    *(ulong *)(puVar1 + 0x38) = uVar5;
    *(long *)(puVar1 + 0x40) = lVar8;
    pcStack_70 = FUN_10136ae20;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_10136a678;
    puStack_78 = &UNK_1103a7370;
    ppuVar16 = &puStack_90;
    puStack_68 = puVar1;
    func_0x000107c60bc4(ppuVar16);
    puVar1 = puStack_68;
    func_0x000107c6157c(lVar23);
    func_0x000107c61174(uVar2);
    func_0x000107c61434(uVar17);
    func_0x000107c61434(uVar5);
    func_0x000107c6157c(lVar8);
    func_0x000107c61574(puVar1);
    func_0x000107c5c2a4(lVar15);
    func_0x000107c61170(puVar14);
    func_0x000107c6142c(uVar17);
    func_0x000107c6142c(uVar5);
    func_0x000107c61170(uVar2);
    func_0x000107c60bd0(ppuVar16);
    func_0x000107c615e8(lVar15);
    uVar2 = uVar22;
  }
  func_0x000107c61170(uVar2);
LAB_10136ad0c:
  func_0x0001000bfde0(FUN_101369ea4,0,&UNK_1103a7290);
  func_0x000107c61574(lVar8);
  return;
}



/* Entry: 10136a1a8; end: 10136a243;  */

undefined8 * FUN_10136a1a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x00010136a148(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 10136a244; end: 10136a287;  */

undefined8 * FUN_10136a244(undefined8 *param_1,undefined8 *param_2)

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
  func_0x00010136a180(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 10136a288; end: 10136a357;  */

int FUN_10136a288(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfd;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 4) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10136a358; end: 10136a3ef;  */

long FUN_10136a358(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10136a3f0; end: 10136a45b;  */

undefined1 * FUN_10136a3f0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 10136a45c; end: 10136a4a7;  */

undefined1 * FUN_10136a45c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 10136a4a8; end: 10136a59b;  */

int FUN_10136a4a8(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10136a59c; end: 10136a677;  */

undefined * FUN_10136a59c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x000103dbf46c();
  uVar1 = 0x10136a568;
  func_0x0001000bfde0(0x10136a568,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(param_1);
  puVar2 = PTR___sSbSQsWP_11034dd50;
  func_0x000104884898(PTR___sSbSQsWP_11034dd50);
  func_0x000107c61574(uVar1);
  return puVar2;
}



/* Entry: 10136a678; end: 10136a6ef;  */

/* WARNING: Possible PIC construction at 0x00010136a6d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010136a6d8) */

void FUN_10136a678(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10136a6f0; end: 10136a7eb;  */

undefined4 FUN_10136a6f0(ulong param_1,long param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  uVar1 = (uint)param_3 & 0xff;
  if (uVar1 == 1 || (param_3 & 0xff) == 0) {
    uVar3 = 2;
    if ((param_3 & 0xff) != 0) {
      uVar3 = 4;
    }
  }
  else if (uVar1 == 2) {
    uVar3 = 5;
  }
  else {
    uVar2 = param_2 + (ulong)(param_1 >= 2);
    if ((long)-uVar2 < 0 == SCARRY8(~uVar2,(ulong)(param_1 < 2))) {
      uVar3 = 1;
      if (param_1 != 0 || param_2 != 0) {
        uVar3 = 4;
      }
    }
    else if (param_1 == 2 && param_2 == 0) {
      uVar3 = 6;
    }
    else {
      func_0x000107c61174(param_4);
      uVar3 = 3;
    }
  }
  func_0x00010136a148(param_1,param_2,param_3);
  return uVar3;
}



/* Entry: 10136a7ec; end: 10136ad57;  */

void FUN_10136a7ec(undefined *param_1,long param_2,char param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined1 uVar20;
  long unaff_x20;
  ulong uVar21;
  long lVar22;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  if (param_3 == '\0') {
    puVar1 = param_1;
    FUN_101369ec8();
    func_0x0001000285a8(0x112d75e18,&UNK_10d935f30);
    if (((ulong)puVar1 & 1) == 0) {
      uVar20 = 2;
      puStack_90 = param_1;
    }
    else {
      puStack_90 = (undefined *)0x3;
      uVar20 = 3;
    }
    uStack_88 = 0;
    pcStack_80 = (code *)CONCAT71(pcStack_80._1_7_,uVar20);
    func_0x000100854cb0(&puStack_90);
    return;
  }
  if (param_3 != '\x03') {
    return;
  }
  if (param_2 != 0 || param_1 != (undefined *)0x0) {
    return;
  }
  lVar22 = *(long *)(unaff_x20 + 0x40);
  uVar21 = *(ulong *)(unaff_x20 + 0x50);
  uVar2 = uVar21;
  func_0x000107c4d97c();
  func_0x000107c61180();
  uVar3 = uVar21;
  func_0x000107c40250();
  uVar4 = uVar21;
  func_0x000107c49970();
  uVar5 = uVar21;
  func_0x000107c4e6c8();
  func_0x000107c61180();
  uVar6 = uVar5;
  func_0x000107c5faec();
  func_0x000107c61170(uVar5);
  func_0x000107c42ef0();
  func_0x000107c61180();
  uVar7 = 0;
  func_0x00010136ade0(0,0x112d75618,&PTR_PTR_1126be098);
  uVar5 = uVar21;
  func_0x000107c5fc54(uVar21,uVar7);
  func_0x000107c61170(uVar21);
  lVar8 = 0x112d75e20;
  func_0x0001000285a8(0x112d75e20,&UNK_10d935f38);
  uVar17 = (ulong)*(uint *)(lVar8 + 0x30);
  func_0x000107c613fc();
  func_0x0001000c2754();
  uVar21 = uVar2;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  uVar18 = uVar17;
  uVar9 = uVar21;
  if (uVar21 == 0) {
    func_0x000107c5faec();
    uVar18 = uVar17;
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar17);
  }
  func_0x000107c5faec();
  uVar21 = uVar21 & 0xffffffffffff;
  if ((uVar18 & 0x2000000000000000) != 0) {
    uVar21 = uVar18 >> 0x38 & 0xf;
  }
  if (uVar21 == 0) {
    func_0x000107c6142c(uVar18);
    func_0x000107c61170(uVar9);
    puStack_90 = (undefined *)0x0;
    uStack_88 = 0;
    pcStack_80 = (code *)CONCAT71(pcStack_80._1_7_,1);
    func_0x0001002a64a8(&puStack_90);
    func_0x000107c6142c(param_2);
LAB_10136ad00:
    func_0x000107c6142c(uVar5);
  }
  else {
    uVar21 = uVar2;
    uVar17 = uVar18;
    func_0x000107c5067c();
    func_0x000107c61180();
    uVar10 = uVar17;
    if (uVar21 == 0) {
      func_0x000107c5faec();
      uVar10 = uVar17;
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar17);
    }
    uVar17 = uVar2;
    func_0x000107c3fb8c();
    func_0x000107c61180();
    uVar11 = uVar10;
    if (uVar17 == 0) {
      func_0x000107c5faec();
      uVar11 = uVar10;
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar10);
    }
    uVar10 = uVar2;
    func_0x000107c4fb10();
    func_0x000107c61180();
    uVar12 = uVar11;
    if (uVar10 == 0) {
      func_0x000107c5faec();
      uVar12 = uVar11;
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar11);
    }
    uVar11 = uVar2;
    func_0x000107c5194c();
    func_0x000107c61180();
    uVar13 = uVar12;
    if (uVar11 == 0) {
      func_0x000107c5faec();
      uVar13 = uVar12;
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar12);
    }
    uVar12 = uVar2;
    func_0x000107c3fcb8();
    func_0x000107c61180();
    uVar19 = uVar13;
    if (uVar12 == 0) {
      func_0x000107c5faec();
      uVar19 = uVar13;
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar13);
    }
    uVar13 = uVar2;
    func_0x000107c3fcb4();
    func_0x000107c61180();
    if (uVar13 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar19);
    }
    func_0x000107c6142c(uVar18);
    puVar1 = PTR_PTR_1126a6b60;
    func_0x000107c610f8(PTR_PTR_1126a6b60);
    func_0x000107c483d4();
    func_0x000107c61170(uVar21);
    func_0x000107c61170(uVar17);
    func_0x000107c61170(uVar10);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar13);
    lVar14 = *(long *)(lVar22 + 0x10);
    if (lVar14 == 0) {
      func_0x000107c61170(puVar1);
      func_0x000107c6142c(param_2);
      func_0x000107c6142c(uVar5);
      func_0x000107c61170(uVar2);
      goto LAB_10136ad0c;
    }
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar14 == 0) {
      func_0x000107c61170(puVar1);
      func_0x000107c6142c(param_2);
      goto LAB_10136ad00;
    }
    uVar21 = 0;
    func_0x00010136ade0(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    func_0x000107c5ffdc();
    puVar15 = &UNK_1103a7358;
    func_0x000107c613fc(&UNK_1103a7358,0x48,7);
    *(long *)(puVar15 + 0x10) = lVar22;
    *(ulong *)(puVar15 + 0x18) = uVar2;
    puVar15[0x20] = (char)uVar3;
    puVar15[0x21] = (char)uVar4;
    *(ulong *)(puVar15 + 0x28) = uVar6;
    *(long *)(puVar15 + 0x30) = param_2;
    *(ulong *)(puVar15 + 0x38) = uVar5;
    *(long *)(puVar15 + 0x40) = lVar8;
    pcStack_70 = FUN_10136ae20;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_10136a678;
    puStack_78 = &UNK_1103a7370;
    ppuVar16 = &puStack_90;
    puStack_68 = puVar15;
    func_0x000107c60bc4(ppuVar16);
    puVar15 = puStack_68;
    func_0x000107c6157c(lVar22);
    func_0x000107c61174(uVar2);
    func_0x000107c61434(param_2);
    func_0x000107c61434(uVar5);
    func_0x000107c6157c(lVar8);
    func_0x000107c61574(puVar15);
    func_0x000107c5c2a4(lVar14);
    func_0x000107c61170(puVar1);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(uVar5);
    func_0x000107c61170(uVar2);
    func_0x000107c60bd0(ppuVar16);
    func_0x000107c615e8(lVar14);
    uVar2 = uVar21;
  }
  func_0x000107c61170(uVar2);
LAB_10136ad0c:
  func_0x0001000bfde0(FUN_101369ea4,0,&UNK_1103a7290);
  func_0x000107c61574(lVar8);
  return;
}



/* Entry: 10136ad58; end: 10136ae1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10136ad58(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  if (param_3 == '\x01') {
    lVar2 = *(long *)(*(long *)(unaff_x20 + 0x60) + _DAT_1130837d0);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c4b9f0();
      func_0x000107c615e8(lVar2);
    }
    uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
    func_0x000107c49970(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c0b28b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (uVar1,PTR_s_logUserConnectedSuccesfully_isBi_11260a438,0,0,uVar3,0,0);
    return;
  }
  return;
}



/* Entry: 10136ae20; end: 10136ae53;  */

void FUN_10136ae20(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10136d7c0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x21),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 10136ae54; end: 10136afef;  */

void FUN_10136ae54(long param_1,long param_2)

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



/* Entry: 10136aff0; end: 10136b02f;  */

void FUN_10136aff0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d75e28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d935f88;
  func_0x000107c61520(&UNK_10d935f88,&UNK_1103a7418);
  puRam0000000112d75e28 = puVar1;
  return;
}



/* Entry: 10136b030; end: 10136b037;  */

undefined8 * FUN_10136b030(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x00010136a148(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 10136b038; end: 10136b15f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10136b038(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  FUN_10136cab8();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidLoad_112684cd8);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10136b158);
    (*pcVar1)();
  }
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c52b50(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(puVar3);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c3d89c();
    func_0x000107c61170(lVar2);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      func_0x000107c3d89c();
      func_0x000107c61170(unaff_x20);
      FUN_10136be5c();
      FUN_10136c170();
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 3;
      func_0x0001002a64a8(&uStack_58);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10136b160);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10136b15c);
  (*pcVar1)();
}



/* Entry: 10136b160; end: 10136b187; -[_TtC15SCOAuth2Feature30OAuth2RootScreenViewController viewDidLoad] */

void FUN_10136b160(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10136b038();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10136b188; end: 10136b44f;  */

/* WARNING: Possible PIC construction at 0x00010136b31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010136b394: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010136b3bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010136b398) */
/* WARNING: Removing unreachable block (ram,0x00010136b320) */
/* WARNING: Removing unreachable block (ram,0x00010136b3c0) */

void FUN_10136b188(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  puVar2 = &UNK_1103a7588;
  func_0x000107c613fc(&UNK_1103a7588,0x20,7);
  *(ulong *)(puVar2 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar5 = unaff_x20;
  func_0x000107c3f9e0();
  func_0x000107c61180();
  uVar3 = 0;
  func_0x00010136cbf4(0,0x112d4ccd8,&PTR__OBJC_CLASS___UIViewController_1126af898);
  uVar4 = uVar5;
  func_0x000107c5fc54(uVar5,uVar3);
  func_0x000107c61170(uVar5);
  if (uVar4 >> 0x3e == 0) {
    uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = uVar4 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar4) {
      uVar5 = uVar4;
    }
    func_0x000107c60480();
  }
  if (uVar5 == 0) {
    func_0x000107c6142c(uVar4);
    FUN_10136b450(param_1);
  }
  else {
    uVar6 = uVar5 - 1;
    if (SBORROW8(uVar5,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10136b43c);
      (*pcVar1)();
    }
    if ((uVar4 & 0xc000000000000001) == 0) {
      if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10136b44c);
        (*pcVar1)();
      }
      if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10136b450);
        (*pcVar1)();
      }
      uVar6 = *(ulong *)(uVar4 + uVar6 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      FUN_100f3b77c(uVar6,uVar4);
    }
    func_0x000107c6142c(uVar4);
    func_0x000107c5e37c(uVar6);
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar2 = &UNK_1103a7498;
    func_0x000107c613fc(&UNK_1103a7498,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,unaff_x20);
    puVar7 = &UNK_1103a75b0;
    func_0x000107c613fc(&UNK_1103a75b0,0x20,7);
    *(undefined **)(puVar7 + 0x10) = puVar2;
    *(ulong *)(puVar7 + 0x18) = uVar6;
    pcStack_60 = FUN_10136cc6c;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_1103a75c8;
    puStack_58 = puVar7;
    func_0x000107c60bc4(&puStack_80);
    puVar2 = puStack_58;
    func_0x000107c61174(uVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar2);
  return;
}



/* Entry: 10136b450; end: 10136b783;  */

void FUN_10136b450(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar8 = &puStack_90;
  ppuVar9 = &puStack_90;
  func_0x000107c3d614();
  lVar3 = param_5;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10136b768);
    (*pcVar2)();
  }
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10136b76c);
    (*pcVar2)();
  }
  func_0x000107c3ec60();
  func_0x000107c61170(lVar4);
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10136b770);
    (*pcVar2)();
  }
  func_0x000107c3ec60();
  uVar10 = param_4;
  func_0x000107c61170(lVar4);
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10136b774);
    (*pcVar2)();
  }
  func_0x000107c3ec60();
  func_0x000107c61170(lVar4);
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10136b778);
    (*pcVar2)();
  }
  func_0x000107c3ec60();
  func_0x000107c61170(lVar4);
  func_0x000107c54b80(param_1,param_4,param_3,uVar10,lVar3);
  func_0x000107c61170(lVar3);
  lVar3 = param_5;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10136b77c);
    (*pcVar2)();
  }
  func_0x000107c5a050();
  func_0x000107c61170(lVar3);
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10136b780);
    (*pcVar2)();
  }
  lVar4 = param_5;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 != 0) {
    func_0x000107c3d89c(lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar4);
    func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
    func_0x000107c517cc();
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar6 = &UNK_1103a7498;
    func_0x000107c613fc(&UNK_1103a7498,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    puVar7 = &UNK_1103a74e8;
    func_0x000107c613fc(&UNK_1103a74e8,0x28,7);
    *(undefined **)(puVar7 + 0x10) = puVar6;
    *(long *)(puVar7 + 0x18) = param_5;
    *(double *)(puVar7 + 0x20) = param_1 + 24.0 + 8.0 + 20.0;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x10136cbbc;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1103a7500;
    puStack_68 = puVar7;
    func_0x000107c60bc4(&puStack_90);
    puVar6 = puStack_68;
    func_0x000107c61174();
    func_0x000107c61574(puVar6);
    puVar6 = &UNK_1103a7538;
    func_0x000107c613fc(&UNK_1103a7538,0x20,7);
    *(long *)(puVar6 + 0x10) = param_5;
    *(long *)(puVar6 + 0x18) = unaff_x20;
    uStack_70 = 0x10136cbc8;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100288f10;
    puStack_78 = &UNK_1103a7550;
    puStack_68 = puVar6;
    func_0x000107c60bc4(&puStack_90);
    puVar6 = puStack_68;
    func_0x000107c61174(param_5);
    func_0x000107c61174();
    func_0x000107c61574(puVar6);
    func_0x000107c3dcd8(0x3feccccccccccccd,0,0x3fe999999999999a,0x4000000000000000,puVar5);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c60bd0(ppuVar8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10136b784);
  (*pcVar2)();
}



/* Entry: 10136b784; end: 10136bca3;  */

void FUN_10136b784(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_88 [24];
  
  uVar10 = param_1;
  func_0x000107c61428(param_5 + 0x10,auStack_88,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61618();
  if (param_5 != 0) {
    lVar2 = param_6;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10136bc70);
      (*pcVar1)();
    }
    func_0x000107c61174();
    lVar3 = param_5;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10136bc74);
      (*pcVar1)();
    }
    func_0x000107c438d4();
    func_0x000107c61170(lVar3);
    lVar3 = param_5;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10136bc78);
      (*pcVar1)();
    }
    func_0x000107c438d4();
    func_0x000107c61170(lVar3);
    lVar3 = param_5;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10136bc7c);
      (*pcVar1)();
    }
    func_0x000107c438d4();
    func_0x000107c61170(lVar3);
    uVar11 = param_1;
    func_0x000107c54b80(uVar10,param_1,param_3,param_4,lVar2);
    func_0x000107c61170();
    func_0x0001008478a8();
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 9;
    *(undefined8 *)(lVar2 + 0x10) = 4;
    lVar3 = param_6;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10136bc80);
      (*pcVar1)();
    }
    lVar4 = lVar3;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    lVar3 = param_5;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10136bc84);
      (*pcVar1)();
    }
    lVar5 = lVar3;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    lVar3 = lVar4;
    func_0x000107c40284(param_1);
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar5);
    *(long *)(lVar2 + 0x20) = lVar3;
    lVar3 = param_6;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10136bc88);
      (*pcVar1)();
    }
    lVar4 = lVar3;
    func_0x000107c4ace0();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    lVar3 = param_5;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10136bc8c);
      (*pcVar1)();
    }
    lVar5 = lVar3;
    func_0x000107c4ace0();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    lVar3 = lVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar5);
    *(long *)(lVar2 + 0x28) = lVar3;
    lVar3 = param_6;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10136bc90);
      (*pcVar1)();
    }
    lVar4 = lVar3;
    func_0x000107c50890();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    lVar3 = param_5;
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c61170(param_5);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10136bc94);
      (*pcVar1)();
    }
    lVar5 = lVar3;
    func_0x000107c50890(lVar3);
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    lVar3 = lVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar5);
    *(long *)(lVar2 + 0x30) = lVar3;
    lVar3 = param_6;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10136bc98);
      (*pcVar1)();
    }
    lVar4 = lVar3;
    func_0x000107c44d9c();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    lVar3 = param_6;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10136bc9c);
      (*pcVar1)();
    }
    puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    func_0x000107c438d4(lVar3);
    uVar10 = param_4;
    func_0x000107c61170(lVar3);
    lVar3 = lVar4;
    func_0x000107c40290(param_4);
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    *(long *)(lVar2 + 0x38) = lVar3;
    uVar7 = 0;
    func_0x00010136cbf4(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar3 = lVar2;
    func_0x000107c5fc48(lVar2,uVar7);
    func_0x000107c61574(lVar2);
    func_0x000107c3d048(puVar6);
    func_0x000107c61170(lVar3);
    puVar6 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
    func_0x000107c610f8(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
    func_0x000107c453e4();
    lVar2 = param_6;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10136bca0);
      (*pcVar1)();
    }
    func_0x000107c3ec60();
    func_0x000107c61170(lVar2);
    puVar8 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x000107c61168(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
    func_0x000107c3e8ac(param_4,uVar11,param_3,uVar10,0x4036000000000000,0x4036000000000000);
    func_0x000107c61180();
    puVar9 = puVar8;
    func_0x000107c3ab30();
    func_0x000107c61180();
    func_0x000107c61170(puVar8);
    func_0x000107c57274(puVar6);
    func_0x000107c61170(puVar9);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (param_6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10136bca4);
      (*pcVar1)();
    }
    lVar2 = param_6;
    func_0x000107c4aba4();
    func_0x000107c61180();
    func_0x000107c61170(param_6);
    func_0x000107c562f4(lVar2);
    func_0x000107c61170(param_5);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10136bca4; end: 10136bdfb;  */

void FUN_10136bca4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_5 + 0x10,auStack_68,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61618();
  if (param_5 != 0) {
    lVar2 = param_6;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10136bdec);
      (*pcVar1)();
    }
    lVar3 = param_6;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10136bdf0);
      (*pcVar1)();
    }
    func_0x000107c438d4();
    func_0x000107c61170(lVar3);
    lVar3 = param_5;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10136bdf4);
      (*pcVar1)();
    }
    func_0x000107c438d4();
    uVar4 = param_4;
    func_0x000107c61170(lVar3);
    lVar3 = param_6;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10136bdf8);
      (*pcVar1)();
    }
    func_0x000107c438d4();
    func_0x000107c61170(lVar3);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (param_6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10136bdfc);
      (*pcVar1)();
    }
    func_0x000107c438d4();
    func_0x000107c61170(param_6);
    func_0x000107c54b80(param_1,param_4,param_3,uVar4,lVar2);
    func_0x000107c61170(param_5);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10136bdfc; end: 10136be5b;  */

void FUN_10136bdfc(undefined8 param_1,long param_2,code *param_3)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = param_2;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c4ff34();
    func_0x000107c61170(lVar2);
    func_0x000107c4ff2c(param_2);
    (*param_3)();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10136be5c);
  (*pcVar1)();
}



/* Entry: 10136be5c; end: 10136c16f;  */

/* WARNING: Possible PIC construction at 0x00010136beec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010136bf24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010136bf60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010136bf94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010136bfdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010136bffc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010136c058: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010136c078: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010136c0e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010136c100: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010136c0e4) */
/* WARNING: Removing unreachable block (ram,0x00010136c07c) */
/* WARNING: Removing unreachable block (ram,0x00010136c16c) */
/* WARNING: Removing unreachable block (ram,0x00010136c0b0) */
/* WARNING: Removing unreachable block (ram,0x00010136c05c) */
/* WARNING: Removing unreachable block (ram,0x00010136c000) */
/* WARNING: Removing unreachable block (ram,0x00010136c168) */
/* WARNING: Removing unreachable block (ram,0x00010136c040) */
/* WARNING: Removing unreachable block (ram,0x00010136bfe0) */
/* WARNING: Removing unreachable block (ram,0x00010136bf98) */
/* WARNING: Removing unreachable block (ram,0x00010136c164) */
/* WARNING: Removing unreachable block (ram,0x00010136bfc4) */
/* WARNING: Removing unreachable block (ram,0x00010136bf64) */
/* WARNING: Removing unreachable block (ram,0x00010136bf28) */
/* WARNING: Removing unreachable block (ram,0x00010136bef0) */
/* WARNING: Removing unreachable block (ram,0x00010136c104) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10136be5c(long param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = 0xd;
  *(undefined8 *)(param_1 + 0x10) = 6;
  func_0x000107c5cbe4(*(undefined8 *)(unaff_x20 + _DAT_112d75e48));
  func_0x000107c61180();
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c5cbe4();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10136c164);
  (*pcVar1)();
}



/* Entry: 10136c170; end: 10136c3af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10136c170(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  long lStack_88;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  
  lVar2 = _DAT_112d75e30;
  func_0x000107c61428(unaff_x20 + _DAT_112d75e30,auStack_b8,0,0);
  FUN_10136cad8(unaff_x20 + lVar2,auStack_a0);
  if (lStack_88 == 0) {
    func_0x00010136cb28(auStack_a0);
  }
  else {
    FUN_10136cb70(auStack_a0,auStack_78);
    lVar2 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10136c3b0);
      (*pcVar1)();
    }
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000107c52b50(lVar2);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar3);
    func_0x0001000a8868(auStack_78,uStack_60);
    plVar4 = (long *)0x0;
    FUN_10136a02c();
    plVar5 = plVar4;
    FUN_10136a59c();
    puVar3 = &UNK_1103a7498;
    puVar6 = puVar3;
    func_0x000107c613fc(&UNK_1103a7498,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    uVar7 = 0x10136cb88;
    puVar9 = puVar6;
    (**(code **)(*plVar5 + 0x60))(0x10136cb88);
    func_0x000107c61574(plVar5);
    func_0x000107c61574(puVar6);
    uVar8 = uVar7;
    func_0x000107c614f0(uVar7);
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112d75e40);
    (**(code **)(puVar9 + 0x10))(uVar10,uVar8,puVar9);
    func_0x000107c615e8(uVar7);
    func_0x0001000a8868(auStack_78,uStack_60);
    (*(code *)(undefined *)0x10136a604)(plVar4,&PTR_DAT_1103a7328);
    func_0x000107c613fc(&UNK_1103a7498,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    uVar7 = 0x10136cb90;
    puVar6 = puVar3;
    (**(code **)(*plVar4 + 0x60))(0x10136cb90);
    func_0x000107c61574(plVar4);
    func_0x000107c61574(puVar3);
    uVar8 = uVar7;
    func_0x000107c614f0(uVar7);
    (**(code **)(puVar6 + 0x10))(uVar10,uVar8,puVar6);
    func_0x000107c615e8(uVar7);
    func_0x0001000834e4(auStack_78);
  }
  return;
}



/* Entry: 10136c3b0; end: 10136c47b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10136c3b0(char *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  if (*param_1 == '\x01') {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      return;
    }
    uVar1 = *(undefined8 *)(param_2 + _DAT_112d75e50);
    func_0x000107c61174(uVar1);
    func_0x000107c61170(param_2);
    func_0x000107c5ba54(uVar1);
  }
  else {
    func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      return;
    }
    uVar1 = *(undefined8 *)(param_2 + _DAT_112d75e50);
    func_0x000107c61174(uVar1);
    func_0x000107c61170(param_2);
    func_0x000107c5be00(uVar1);
  }
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 10136c47c; end: 10136c58b;  */

void FUN_10136c47c(long param_1,long param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  cVar1 = *(char *)(param_1 + 8);
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (cVar1 != '\x01') {
      puVar2 = PTR_PTR_1126cbed0;
      func_0x000107c61168(PTR_PTR_1126cbed0);
      puVar3 = &UNK_1103a7498;
      func_0x000107c613fc(&UNK_1103a7498,0x18,7);
      func_0x000107c61614(puVar3 + 0x10,param_2);
      uStack_58 = 0x10136cb98;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x42000000;
      puStack_68 = &UNK_1000b0c7c;
      puStack_60 = &UNK_1103a74b0;
      ppuVar4 = &puStack_78;
      puStack_50 = puVar3;
      func_0x000107c60bc4(ppuVar4);
      func_0x000107c61574(puStack_50);
      func_0x000107c5ae70(puVar2);
      func_0x000107c60bd0(ppuVar4);
    }
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10136c58c; end: 10136c613;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10136c58c(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112d75e38);
    func_0x000107c6157c(uVar1);
    func_0x000107c61170(param_1);
    uStack_48 = 0;
    uStack_50 = 2;
    uStack_40 = 3;
    func_0x0001002a64a8(&uStack_50);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 10136c614; end: 10136c7eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10136c614(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  
  puVar6 = &stack0xffffffffffffffa0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d75e30);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  lVar2 = _DAT_112d75e38;
  uVar3 = 0x112d75e88;
  func_0x0001000285a8(0x112d75e88,&UNK_10d935fd8);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112d75e40;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112d75e48;
  uVar3 = 0x656d5f74736f6867;
  func_0x000107c5fadc(0x656d5f74736f6867,0xec0000006d756964);
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c450cc();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c46db4();
  func_0x000107c61170(puVar4);
  func_0x000107c5a050(puVar5);
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  lVar2 = _DAT_112d75e50;
  puVar4 = PTR_PTR_1126aeff0;
  func_0x000107c610f8();
  func_0x000107c45eac();
  func_0x000107c55130();
  func_0x000107c5a050();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c6142c();
  }
  FUN_10136cab8();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_initWithNibName_bundle__1125e9850,param_1,
                      param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return puVar6;
}



/* Entry: 10136c7ec; end: 10136c84b; -[_TtC15SCOAuth2Feature30OAuth2RootScreenViewController initWithNibName:bundle:] */

void FUN_10136c7ec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_4);
  FUN_10136c614(param_3,param_2,param_4);
  return;
}



/* Entry: 10136c84c; end: 10136c9f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10136c84c(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  
  puVar6 = &stack0xffffffffffffffb0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d75e30);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[4] = 0;
  lVar2 = _DAT_112d75e38;
  uVar3 = 0x112d75e88;
  func_0x0001000285a8(0x112d75e88,&UNK_10d935fd8);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112d75e40;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_112d75e48;
  uVar3 = 0x656d5f74736f6867;
  func_0x000107c5fadc(0x656d5f74736f6867,0xec0000006d756964);
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x000107c450cc();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c46db4();
  func_0x000107c61170(puVar4);
  func_0x000107c5a050(puVar5);
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  lVar2 = _DAT_112d75e50;
  puVar4 = PTR_PTR_1126aeff0;
  func_0x000107c610f8();
  func_0x000107c45eac();
  func_0x000107c55130();
  func_0x000107c5a050();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  FUN_10136cab8();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_initWithCoder__1125dd730,param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (puVar6 != (undefined1 *)0x0) {
    func_0x000107c61170(puVar6);
  }
  return puVar6;
}



/* Entry: 10136c9f8; end: 10136ca1f; -[_TtC15SCOAuth2Feature30OAuth2RootScreenViewController initWithCoder:] */

void FUN_10136c9f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_10136c84c();
  return;
}



/* Entry: 10136ca20; end: 10136ca4f;  */

void FUN_10136ca20(void)

{
  FUN_10136cab8();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10136ca50; end: 10136cab7; -[_TtC15SCOAuth2Feature30OAuth2RootScreenViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010136ca9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010136caa0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10136ca50(long param_1)

{
  func_0x00010136cb28(param_1 + _DAT_112d75e30);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d75e38));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d75e40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d75e48));
  return;
}



/* Entry: 10136cab8; end: 10136cad7;  */

void FUN_10136cab8(void)

{
  func_0x000107c61168(&PTR_PTR_1127cb338);
  return;
}



/* Entry: 10136cad8; end: 10136cb6f;  */

undefined8 FUN_10136cad8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112d75e80;
  func_0x0001000285a8(0x112d75e80,&UNK_10d935fd0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10136cb70; end: 10136cbcf;  */

undefined8 * FUN_10136cb70(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10136cbd0; end: 10136cc6b;  */

void FUN_10136cbd0(void)

{
  long unaff_x20;
  
  FUN_10136b450(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10136cc6c; end: 10136cc9f;  */

void FUN_10136cc6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_68,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    lVar3 = lVar5;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10136bdec);
      (*pcVar1)();
    }
    lVar4 = lVar5;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10136bdf0);
      (*pcVar1)();
    }
    func_0x000107c438d4();
    func_0x000107c61170(lVar4);
    lVar4 = lVar2;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10136bdf4);
      (*pcVar1)();
    }
    func_0x000107c438d4();
    uVar6 = param_4;
    func_0x000107c61170(lVar4);
    lVar4 = lVar5;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10136bdf8);
      (*pcVar1)();
    }
    func_0x000107c438d4();
    func_0x000107c61170(lVar4);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10136bdfc);
      (*pcVar1)();
    }
    func_0x000107c438d4();
    func_0x000107c61170(lVar5);
    func_0x000107c54b80(param_1,param_4,param_3,uVar6,lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 10136cca0; end: 10136ce47;  */

undefined * FUN_10136cca0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x000107c453e4();
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168(PTR__OBJC_CLASS___UIFont_1126aec38);
  func_0x000107c4ca94(0x402e000000000000);
  func_0x000107c61180();
  func_0x000107c54adc(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c56ba8(puVar1,param_2,0);
  func_0x000107c55f80(puVar1,param_2,0);
  func_0x000107c5a050(puVar1,param_2,0);
  return puVar1;
}



/* Entry: 10136ce48; end: 10136d507;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10136ce48(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar2 = _DAT_112d75e90;
  puVar8 = &stack0xffffffffffffff70;
  puVar5 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar7 = puVar6;
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59e10(puVar5);
  func_0x000107c61170();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  lVar2 = _DAT_112d75e98;
  FUN_10136cca0();
  *(undefined **)(unaff_x20 + lVar2) = puVar7;
  lVar2 = _DAT_112d75ea0;
  func_0x00010136cd5c();
  *(undefined **)(unaff_x20 + lVar2) = puVar7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d75ea8);
  *puVar1 = 0;
  puVar1[1] = 0;
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5fadc(param_2,param_3);
    func_0x000107c6142c();
  }
  FUN_10136d7a0();
  func_0x000107c61154(&stack0xffffffffffffff70,PTR_s_initWithStyle_reuseIdentifier__1125f1528,
                      param_1,param_2);
  func_0x000107c61170(param_2);
  uVar12 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  uVar13 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8);
  uVar14 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10);
  uVar15 = *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c58f58(uVar12,uVar13,uVar14,uVar15);
  func_0x000107c61174();
  func_0x000107c58e44();
  func_0x000107c5af88(puVar6);
  func_0x000107c61180();
  func_0x000107c52b50(puVar8);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar6);
  lVar2 = _DAT_112d75e90;
  func_0x000107c5a050(*(undefined8 *)(puVar8 + _DAT_112d75e90));
  puVar9 = puVar8;
  func_0x000107c40510(puVar8);
  func_0x000107c61180();
  func_0x000107c3d89c();
  func_0x000107c61170(puVar9);
  puVar9 = puVar8;
  func_0x000107c40510(puVar8);
  func_0x000107c61180();
  lVar3 = _DAT_112d75e98;
  func_0x000107c3d89c();
  func_0x000107c61170(puVar9);
  puVar9 = puVar8;
  func_0x000107c61174();
  puVar10 = puVar9;
  func_0x000107c40510();
  func_0x000107c61180();
  lVar4 = _DAT_112d75ea0;
  func_0x000107c3d89c();
  func_0x000107c61170(puVar10);
  uVar12 = *(undefined8 *)(puVar9 + lVar4);
  func_0x000107c61174(uVar12);
  func_0x000107c3d8b8();
  func_0x000107c61170(uVar12);
  func_0x000107c61170(puVar9);
  puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar6 = puVar5;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar6 + 0x18) = 0x15;
  *(undefined8 *)(puVar6 + 0x10) = 10;
  uVar13 = *(undefined8 *)(puVar9 + lVar4);
  func_0x000107c50890();
  func_0x000107c61180();
  puVar10 = puVar9;
  func_0x000107c40510(puVar9);
  func_0x000107c61180();
  puVar11 = puVar10;
  func_0x000107c50890();
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  uVar12 = uVar13;
  func_0x000107c40284(0xc030000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(puVar11);
  *(undefined8 *)(puVar6 + 0x20) = uVar12;
  uVar13 = *(undefined8 *)(puVar9 + lVar4);
  func_0x000107c3f764();
  func_0x000107c61180();
  puVar10 = puVar9;
  func_0x000107c40510(puVar9);
  func_0x000107c61180();
  puVar11 = puVar10;
  func_0x000107c3f764();
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  uVar12 = uVar13;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(puVar11);
  *(undefined8 *)(puVar6 + 0x28) = uVar12;
  uVar13 = *(undefined8 *)(puVar8 + lVar2);
  func_0x000107c5e308();
  func_0x000107c61180();
  uVar12 = uVar13;
  func_0x000107c40290(0x4038000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  *(undefined8 *)(puVar6 + 0x30) = uVar12;
  uVar13 = *(undefined8 *)(puVar8 + lVar2);
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar12 = uVar13;
  func_0x000107c40290(0x4038000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  *(undefined8 *)(puVar6 + 0x38) = uVar12;
  uVar13 = *(undefined8 *)(puVar8 + lVar2);
  func_0x000107c4ace0();
  func_0x000107c61180();
  puVar10 = puVar9;
  func_0x000107c40510(puVar9);
  func_0x000107c61180();
  puVar11 = puVar10;
  func_0x000107c4ace0();
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  uVar12 = uVar13;
  func_0x000107c40284(0x4030000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(puVar11);
  *(undefined8 *)(puVar6 + 0x40) = uVar12;
  uVar13 = *(undefined8 *)(puVar8 + lVar2);
  func_0x000107c3f764();
  func_0x000107c61180();
  puVar10 = puVar9;
  func_0x000107c40510(puVar9);
  func_0x000107c61180();
  puVar11 = puVar10;
  func_0x000107c3f764();
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  uVar12 = uVar13;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(puVar11);
  *(undefined8 *)(puVar6 + 0x48) = uVar12;
  uVar13 = *(undefined8 *)(puVar8 + lVar3);
  func_0x000107c4ace0();
  func_0x000107c61180();
  puVar10 = puVar9;
  func_0x000107c40510(puVar9);
  func_0x000107c61180();
  puVar11 = puVar10;
  func_0x000107c4ace0();
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  uVar12 = uVar13;
  func_0x000107c40284(0x404a000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(puVar11);
  *(undefined8 *)(puVar6 + 0x50) = uVar12;
  uVar13 = *(undefined8 *)(puVar8 + lVar3);
  func_0x000107c50890();
  func_0x000107c61180();
  uVar14 = *(undefined8 *)(puVar9 + lVar4);
  func_0x000107c4ace0(uVar14);
  func_0x000107c61180();
  uVar12 = uVar13;
  func_0x000107c40284(0xc030000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  *(undefined8 *)(puVar6 + 0x58) = uVar12;
  uVar13 = *(undefined8 *)(puVar8 + lVar3);
  func_0x000107c3f764();
  func_0x000107c61180();
  puVar11 = puVar9;
  func_0x000107c40510();
  func_0x000107c61180();
  puVar10 = puVar11;
  func_0x000107c3f764();
  func_0x000107c61180();
  func_0x000107c61170(puVar11);
  uVar12 = uVar13;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(puVar10);
  *(undefined8 *)(puVar6 + 0x60) = uVar12;
  uVar13 = *(undefined8 *)(puVar8 + lVar3);
  func_0x000107c44d9c();
  func_0x000107c61180();
  puVar10 = puVar9;
  func_0x000107c40510();
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  puVar8 = puVar10;
  func_0x000107c44d9c(puVar10);
  func_0x000107c61180();
  func_0x000107c61170(puVar10);
  uVar12 = uVar13;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar13);
  func_0x000107c61170(puVar8);
  *(undefined8 *)(puVar6 + 0x68) = uVar12;
  uVar12 = 0;
  func_0x000100847984(0);
  puVar7 = puVar6;
  func_0x000107c5fc48(puVar6,uVar12);
  func_0x000107c61574(puVar6);
  func_0x000107c3d048(puVar5);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar7);
  return puVar9;
}



/* Entry: 10136d508; end: 10136d54f; -[_TtC15SCOAuth2Feature35OAuth2PermissionToggleTableViewCell initWithStyle:reuseIdentifier:] */

void FUN_10136d508(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  FUN_10136ce48(param_3,param_4,param_2);
  return;
}



/* Entry: 10136d550; end: 10136d647;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10136d550(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  
  lVar2 = _DAT_112d75e90;
  puVar5 = &stack0xffffffffffffffb0;
  puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59e10(puVar3);
  func_0x000107c61170();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _DAT_112d75e98;
  FUN_10136cca0();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112d75ea0;
  func_0x00010136cd5c();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d75ea8);
  FUN_10136d7a0();
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_initWithCoder__1125dd730,param_1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (puVar5 != (undefined1 *)0x0) {
    func_0x000107c61170(puVar5);
  }
  return puVar5;
}



/* Entry: 10136d648; end: 10136d66f; -[_TtC15SCOAuth2Feature35OAuth2PermissionToggleTableViewCell initWithCoder:] */

void FUN_10136d648(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_10136d550();
  return;
}



/* Entry: 10136d670; end: 10136d713; -[_TtC15SCOAuth2Feature35OAuth2PermissionToggleTableViewCell switchChangedWithSender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10136d670(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112d75ea8);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_112d75ea8))[1];
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101237340(pcVar1,uVar2);
  func_0x000107c4a118(param_3);
  (*pcVar1)();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  if (pcVar1 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(uVar2);
    return;
  }
  return;
}



/* Entry: 10136d714; end: 10136d743;  */

void FUN_10136d714(void)

{
  FUN_10136d7a0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10136d744; end: 10136d79f; -[_TtC15SCOAuth2Feature35OAuth2PermissionToggleTableViewCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10136d744(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d75e90));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d75e98));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d75ea0));
  if (*(long *)(param_1 + _DAT_112d75ea8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112d75ea8))[1]);
    return;
  }
  return;
}



/* Entry: 10136d7a0; end: 10136d7bf;  */

void FUN_10136d7a0(void)

{
  func_0x000107c61168(&PTR_PTR_1127cb460);
  return;
}



/* Entry: 10136d7c0; end: 10136df9b;  */

void FUN_10136d7c0(long param_1,ulong param_2,undefined8 param_3,ulong param_4,undefined4 param_5,
                  undefined4 param_6,undefined8 param_7,long param_8,ulong param_9,
                  undefined8 param_10)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  long extraout_x8;
  ulong uVar15;
  long extraout_x12;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong auStack_1c0 [5];
  undefined1 auStack_198 [8];
  ulong auStack_190 [4];
  undefined1 auStack_170 [8];
  undefined8 uStack_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  long lStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  long lStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [32];
  undefined1 auStack_c8 [32];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  
  lVar4 = 0;
  uVar17 = param_2;
  func_0x000107c5ed50();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_2 == 0) {
    if (param_1 == 0) {
      puStack_80 = (undefined *)0x0;
      uStack_78 = 0;
      goto LAB_10136dac0;
    }
  }
  else if (param_1 == 0) {
    lStack_108 = extraout_x12;
    func_0x000107c61174();
    uVar5 = param_2;
    func_0x000107c3e058();
    func_0x000107c61180();
    if (uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10136df4c);
      (*pcVar3)();
    }
    uVar15 = uVar5;
    uStack_168 = param_7;
    lStack_158 = param_8;
    func_0x000107c5faec();
    uVar6 = param_2;
    uStack_118 = uVar15;
    uStack_110 = uVar17;
    func_0x000107c3fb9c();
    func_0x000107c61180();
    if (uVar6 == 0) {
      func_0x000107c61170(uVar5);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10136df58);
      (*pcVar3)();
    }
    uVar15 = uVar6;
    func_0x000107c5faec();
    uStack_150 = uVar15;
    uStack_120 = uVar17;
    uStack_100 = param_4;
    func_0x000107c4fb10();
    func_0x000107c61180();
    if (param_4 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar17);
    }
    uVar17 = param_2;
    func_0x000107c519c4();
    func_0x000107c61180();
    if (uVar17 == 0) {
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(param_4);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10136df74);
      (*pcVar3)();
    }
    uStack_148 = param_10;
    uStack_160 = param_5;
    uStack_15c = param_6;
    uStack_140 = param_4;
    uStack_138 = uVar6;
    uStack_130 = uVar5;
    uStack_128 = uVar17;
    uStack_f8 = param_2;
    func_0x000107c600f4(auStack_170 + lVar1);
    FUN_100e15a08();
    func_0x000107c601c0(&puStack_a8,lVar4,uVar17);
    puVar13 = PTR___sypN_11034f1a8;
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
    while (lStack_90 != 0) {
      func_0x000100102924(&puStack_a8,auStack_c8);
      func_0x0001000bb420(auStack_c8,auStack_e8);
      uVar9 = 0;
      FUN_10136e81c(0,0x112d75610,&PTR_PTR_1126be0a0);
      puVar10 = &uStack_f0;
      func_0x000107c6147c(puVar10,auStack_e8,puVar13 + 8,uVar9,6);
      if (((ulong)puVar10 & 1) != 0) {
        uVar9 = uStack_f0;
        func_0x000107c61174();
        puVar8 = puVar11;
        func_0x000107c61550();
        if (((((ulong)puVar8 & 1) == 0) || ((long)puVar11 < 0)) ||
           (puVar8 = puVar11, ((ulong)puVar11 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar11 >> 0x3e == 0) {
            puVar7 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar7 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar11) {
              puVar7 = puVar11;
            }
            func_0x000107c60480(puVar7);
          }
          puVar8 = (undefined *)0x0;
          FUN_10136f6bc(0,puVar7 + 1,1,puVar11);
        }
        uVar15 = (ulong)puVar8 & 0xffffffffffffff8;
        uVar5 = *(ulong *)(uVar15 + 0x10);
        puVar11 = puVar8;
        if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar5) {
          puVar11 = (undefined *)(ulong)(1 < *(ulong *)(uVar15 + 0x18));
          FUN_10136f6bc(puVar11,uVar5 + 1,1,puVar8);
          uVar15 = (ulong)puVar11 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar15 + 0x10) = uVar5 + 1;
        *(undefined8 *)(uVar15 + uVar5 * 8 + 0x20) = uVar9;
        func_0x000107c61170(uVar9);
      }
      func_0x000100183ab8(auStack_c8);
      func_0x000107c601c0(&puStack_a8,lVar4,uVar17);
    }
    func_0x000107c61170(uStack_128);
    (**(code **)(lStack_108 + 8))(auStack_170 + lVar1);
    uVar5 = uStack_f8;
    uVar15 = uStack_f8;
    func_0x000107c40250();
    func_0x000107c3fb88();
    func_0x000107c61180();
    uVar17 = uStack_100;
    if (uVar5 == 0) {
      func_0x000107c61170(uStack_130);
      func_0x000107c61170(uStack_138);
      func_0x000107c61170(uStack_140);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10136df9c);
      (*pcVar3)();
    }
    uVar6 = uStack_100;
    func_0x000107c3fb8c();
    func_0x000107c61180();
    lVar19 = lVar4;
    if (uVar6 == 0) {
      func_0x000107c5faec();
      lVar19 = lVar4;
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar4);
    }
    uVar16 = uVar17;
    func_0x000107c3fcc4();
    func_0x000107c61180();
    if (uVar16 == 0) {
      uStack_128 = 0;
      lVar18 = 0;
      lVar4 = lVar19;
    }
    else {
      uVar12 = uVar16;
      func_0x000107c5faec();
      lVar4 = lVar19;
      uStack_128 = uVar12;
      func_0x000107c61170(uVar16);
      lVar18 = lVar19;
    }
    lStack_108 = CONCAT44(lStack_108._4_4_,(int)uVar15);
    uVar15 = uVar17;
    func_0x000107c52060();
    func_0x000107c61180();
    if (uVar15 == 0) {
      uVar16 = 0;
      lVar20 = 0;
      lVar19 = lVar4;
    }
    else {
      uVar16 = uVar15;
      func_0x000107c5faec();
      lVar19 = lVar4;
      func_0x000107c61170(uVar15);
      lVar20 = lVar4;
    }
    func_0x000107c50378();
    func_0x000107c61180();
    if (uVar17 == 0) {
      uVar15 = 0;
      lVar19 = 0;
    }
    else {
      uVar15 = uVar17;
      func_0x000107c5faec();
      func_0x000107c61170(uVar17);
    }
    uVar2 = uStack_110;
    uVar12 = uStack_120;
    uVar17 = uStack_118 & 0xffffffffffff;
    if ((uStack_110 & 0x2000000000000000) != 0) {
      uVar17 = uStack_110 >> 0x38 & 0xf;
    }
    if (uVar17 != 0) {
      uVar17 = uStack_150 & 0xffffffffffff;
      if ((uStack_120 & 0x2000000000000000) != 0) {
        uVar17 = uStack_120 >> 0x38 & 0xf;
      }
      if (uVar17 != 0) {
        uVar17 = uStack_100;
        func_0x000107c4a39c();
        uStack_100 = CONCAT44(uStack_100._4_4_,(int)uVar17);
        func_0x000107c6142c(uVar2);
        func_0x000107c6142c(uVar12);
        uVar9 = 0;
        FUN_10136e81c(0,0x112d75610,&PTR_PTR_1126be0a0);
        puVar13 = puVar11;
        func_0x000107c5fc48(puVar11,uVar9);
        if (lVar20 == 0) {
          uVar16 = 0;
          if (lVar18 != 0) goto LAB_10136dcd4;
LAB_10136dd84:
          uVar17 = 0;
        }
        else {
          func_0x000107c5fadc(uVar16,lVar20);
          func_0x000107c6142c(lVar20);
          if (lVar18 == 0) goto LAB_10136dd84;
LAB_10136dcd4:
          uVar17 = uStack_128;
          func_0x000107c5fadc(uStack_128,lVar18);
          func_0x000107c6142c(lVar18);
        }
        if (lStack_158 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = uStack_168;
          func_0x000107c5fadc();
        }
        uVar14 = 0;
        FUN_10136e81c(0,0x112d75618,&PTR_PTR_1126be098);
        func_0x000107c5fc48(param_9,uVar14);
        if (lVar19 == 0) {
          uVar15 = 0;
        }
        else {
          func_0x000107c5fadc(uVar15,lVar19);
          func_0x000107c6142c(lVar19);
        }
        puVar8 = PTR_PTR_1126a6b68;
        uStack_110 = uVar15;
        func_0x000107c610f8();
        *(ulong *)((long)auStack_190 + lVar1 + 8) = param_9;
        *(ulong *)((long)auStack_190 + lVar1 + 0x10) = uVar15;
        *(undefined8 *)((long)auStack_190 + lVar1) = uVar9;
        auStack_198[lVar1] = (undefined1)uStack_100;
        *(ulong *)((long)auStack_1c0 + lVar1 + 0x20) = uVar17;
        *(ulong *)((long)auStack_1c0 + lVar1 + 0x10) = uVar6;
        *(ulong *)((long)auStack_1c0 + lVar1 + 0x18) = uVar16;
        *(ulong *)((long)auStack_1c0 + lVar1) = uVar5;
        *(undefined **)((long)auStack_1c0 + lVar1 + 8) = puVar13;
        uVar2 = uStack_130;
        uVar12 = uStack_138;
        uVar15 = uStack_140;
        uStack_118 = uVar17;
        uStack_100 = param_9;
        func_0x000107c45764();
        func_0x000107c61170(uVar2);
        func_0x000107c61170(uVar12);
        func_0x000107c61170(uVar15);
        func_0x000107c61170(uVar5);
        func_0x000107c61170(puVar13);
        func_0x000107c61170(uVar6);
        func_0x000107c61170(uVar16);
        func_0x000107c61170(uStack_118);
        func_0x000107c61170(uVar9);
        func_0x000107c61170(uStack_100);
        func_0x000107c61170(uStack_110);
        uStack_a0 = 0;
        uStack_98 = 0;
        puStack_a8 = puVar8;
        func_0x000107c61174(puVar8);
        func_0x0001002a64a8(&puStack_a8);
        func_0x000107c6142c(puVar11);
        func_0x000107c61170(puVar8);
        func_0x000107c61170(puVar8);
        goto LAB_10136df20;
      }
    }
    func_0x000107c61170(uStack_138);
    func_0x000107c61170(uStack_140);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar6);
    func_0x000107c6142c(uVar2);
    func_0x000107c6142c(uVar12);
    func_0x000107c61170(uStack_130);
    func_0x000107c6142c(lVar19);
    func_0x000107c6142c(lVar20);
    func_0x000107c6142c(lVar18);
    puStack_a8 = (undefined *)0x0;
    uStack_a0 = 0;
    uStack_98 = 1;
    func_0x0001002a64a8(&puStack_a8);
    func_0x000107c6142c(puVar11);
LAB_10136df20:
    func_0x000107c61170(uStack_f8);
    return;
  }
  func_0x000107c614cc(param_1,auStack_70,auStack_88);
  func_0x000107c60640();
LAB_10136dac0:
  uStack_98 = 1;
  puStack_a8 = puStack_80;
  uStack_a0 = uStack_78;
  func_0x0001002a64a8(&puStack_a8);
  func_0x000107c6142c(uStack_78);
  return;
}



/* Entry: 10136df9c; end: 10136e013;  */

void FUN_10136df9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c5d890(param_1,param_2,6);
  func_0x000100215634(param_2);
  uVar1 = param_2;
  func_0x000107c5f9dc();
  func_0x000107c6142c(param_2);
  func_0x000107c5d860(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10136e014; end: 10136e2ef;  */

void FUN_10136e014(undefined8 param_1,undefined8 ****param_2,long *param_3,long *param_4,
                  undefined8 ****param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  long lVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  undefined8 uVar12;
  undefined8 ***pppuVar13;
  undefined8 uStack_188;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined1 auStack_148 [24];
  undefined8 uStack_d0;
  long alStack_c8 [2];
  undefined8 ***pppuStack_b8;
  undefined1 auStack_b0 [8];
  long alStack_a8 [2];
  undefined8 ***pppuStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 **appuStack_78 [2];
  undefined1 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_6 == 0) {
    if ((ulong)param_5 >> 0x3c < 0xf) {
      puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x000107c61168();
      func_0x00010006c00c(param_4,param_5);
      plVar3 = param_4;
      func_0x000107c5ee20(param_4,param_5);
      pppuStack_98 = (undefined8 ****)0x0;
      ppppuVar11 = &pppuStack_98;
      plVar10 = (long *)0x1;
      param_3 = plVar3;
      func_0x000107c3ab8c();
      func_0x000107c61180();
      func_0x000107c61170(plVar3);
      ppppuVar4 = (undefined8 ****)pppuStack_98;
      func_0x000107c61174();
      if (puVar2 == (undefined *)0x0) {
        ppppuVar5 = ppppuVar4;
        func_0x000107c5ed30();
        func_0x000107c61170(ppppuVar4);
        func_0x000107c61654();
        pppuStack_98 = (undefined8 ***)0xd000000000000018;
        uStack_90 = 0x800000010ef38d70;
        uStack_88 = 1;
        func_0x0001002a64a8(&pppuStack_98);
        func_0x0001000b44c0(param_4);
        func_0x000107c614ac();
      }
      else {
        func_0x000107c60234(appuStack_78,puVar2);
        func_0x000107c615e8(puVar2);
        func_0x0001000bb420(appuStack_78,&pppuStack_98);
        plVar10 = (long *)0x112d550a0;
        func_0x0001000285a8(0x112d550a0,&UNK_10d91c290);
        plVar3 = alStack_a8;
        param_3 = (long *)(PTR___sypN_11034f1a8 + 8);
        ppppuVar11 = (undefined8 ****)0x6;
        func_0x000107c6147c(plVar3,&pppuStack_98);
        if (((ulong)plVar3 & 1) == 0) {
          pppuStack_98 = (undefined8 ***)0x0;
          uStack_90 = 0;
          uStack_88 = 1;
          func_0x0001002a64a8(&pppuStack_98);
          func_0x0001000b44c0(param_4);
        }
        else {
          if (*(long *)(alStack_a8[0] + 0x10) == 0) {
            pppuVar13 = (undefined8 ***)0x0;
            uVar12 = 0;
          }
          else {
            func_0x000107c61434(alStack_a8[0]);
            lVar6 = 0x6574617473;
            uVar9 = 0;
            func_0x000100029284();
            if ((uVar9 & 1) == 0) {
              pppuVar13 = (undefined8 ***)0x0;
              uVar12 = 0;
            }
            else {
              puVar1 = (undefined8 *)(*(long *)(alStack_a8[0] + 0x38) + lVar6 * 0x10);
              pppuVar13 = (undefined8 ***)*puVar1;
              uVar12 = puVar1[1];
              func_0x000107c61434(uVar12);
            }
            func_0x000107c6142c(alStack_a8[0]);
          }
          func_0x000107c6142c(alStack_a8[0]);
          uStack_88 = 0;
          pppuStack_98 = pppuVar13;
          uStack_90 = uVar12;
          func_0x0001002a64a8(&pppuStack_98);
          func_0x0001000b44c0(param_4);
          func_0x000107c6142c(uVar12);
        }
        ppppuVar5 = (undefined8 ****)appuStack_78;
        func_0x000100183ab8();
      }
    }
    else {
      pppuStack_98 = (undefined8 ***)0x0;
      uStack_90 = 0;
      uStack_88 = 1;
      ppppuVar5 = &pppuStack_98;
      ppppuVar11 = param_5;
      func_0x0001002a64a8();
      param_5 = param_2;
      plVar10 = param_4;
    }
  }
  else {
    param_3 = alStack_c8;
    lVar6 = param_6;
    func_0x000107c614cc(param_6,auStack_b0);
    func_0x000107c614b0(param_6);
    ppppuVar5 = (undefined8 ****)pppuStack_b8;
    func_0x000107c60640();
    uStack_68 = 1;
    ppppuVar4 = ppppuVar5;
    func_0x0001002a64a8(appuStack_78);
    func_0x000107c614ac(param_6);
    ppppuVar11 = param_5;
    func_0x000107c6142c();
    param_5 = ppppuVar4;
    plVar10 = param_4;
    param_6 = lVar6;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    if (ppppuVar5 == (undefined8 ****)0x0) {
      func_0x000107c61428(param_6 + 0x10,auStack_148,0,0);
      param_6 = param_6 + 0x10;
      func_0x000107c61648();
      if (param_6 == 0) {
        puStack_178 = (undefined *)0xd000000000000032;
        uStack_170 = 0x800000010ef38810;
        uStack_168 = CONCAT71(uStack_168._1_7_,1);
        func_0x0001002a64a8(&puStack_178);
      }
      else {
        lVar6 = *(long *)(param_6 + 0x10);
        if (lVar6 != 0) {
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar6 != 0) {
            plVar3 = param_3;
            func_0x000107c5fadc(param_3,plVar10);
            func_0x000107c5fc48(param_8,PTR___sSSN_11034da80);
            uVar12 = 0;
            if (alStack_c8[0] != 0) {
              func_0x000107c5fadc(uStack_d0,alStack_c8[0]);
              uVar12 = uStack_d0;
            }
            uVar7 = 0;
            FUN_10136e81c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
            func_0x000107c5ffdc();
            puVar2 = &UNK_1103a7650;
            func_0x000107c613fc(&UNK_1103a7650,0x30,7);
            *(long **)(puVar2 + 0x10) = param_3;
            *(long **)(puVar2 + 0x18) = plVar10;
            *(undefined8 *****)(puVar2 + 0x20) = ppppuVar11;
            *(undefined8 *****)(puVar2 + 0x28) = param_5;
            pcStack_158 = FUN_10136e7f4;
            puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_170 = 0x42000000;
            uStack_168 = 0x10136e698;
            puStack_160 = &UNK_1103a7668;
            ppuVar8 = &puStack_178;
            puStack_150 = puVar2;
            func_0x000107c60bc4(ppuVar8);
            puVar2 = puStack_150;
            func_0x000107c61434(plVar10);
            func_0x000107c6157c(ppppuVar11);
            func_0x000107c61174(param_5);
            func_0x000107c61574(puVar2);
            func_0x000107c5c2b4(lVar6);
            func_0x000107c61574(param_6);
            func_0x000107c60bd0(ppuVar8);
            func_0x000107c615e8(lVar6);
            func_0x000107c61170(plVar3);
            func_0x000107c61170(param_8);
            func_0x000107c61170(uVar12);
            func_0x000107c61170(uVar7);
            return;
          }
        }
        puStack_178 = (undefined *)0xd000000000000032;
        uStack_170 = 0x800000010ef38810;
        uStack_168 = CONCAT71(uStack_168._1_7_,1);
        func_0x0001002a64a8(&puStack_178);
        func_0x000107c61574(param_6);
      }
    }
    else {
      func_0x000107c614cc();
      func_0x000107c614b0(ppppuVar5);
      func_0x000107c60640();
      uStack_168 = CONCAT71(uStack_168._1_7_,1);
      func_0x0001002a64a8(&puStack_178);
      func_0x000107c614ac(ppppuVar5);
      func_0x000107c6142c(uStack_188);
    }
    return;
  }
  return;
}



/* Entry: 10136e2f0; end: 10136e597;  */

void FUN_10136e2f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined1 auStack_c8 [16];
  undefined8 uStack_b8;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  if (param_1 == 0) {
    func_0x000107c61428(param_6 + 0x10,auStack_78,0,0);
    param_6 = param_6 + 0x10;
    func_0x000107c61648();
    if (param_6 == 0) {
      puStack_a8 = (undefined *)0xd000000000000032;
      uStack_a0 = 0x800000010ef38810;
      uStack_98 = CONCAT71(uStack_98._1_7_,1);
      func_0x0001002a64a8(&puStack_a8);
    }
    else {
      lVar1 = *(long *)(param_6 + 0x10);
      if (lVar1 != 0) {
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar1 != 0) {
          uVar2 = param_3;
          func_0x000107c5fadc(param_3,param_4);
          func_0x000107c5fc48(param_8,PTR___sSSN_11034da80);
          uVar6 = 0;
          if (param_10 != 0) {
            func_0x000107c5fadc(param_9,param_10);
            uVar6 = param_9;
          }
          uVar3 = 0;
          FUN_10136e81c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
          func_0x000107c5ffdc();
          puVar4 = &UNK_1103a7650;
          func_0x000107c613fc(&UNK_1103a7650,0x30,7);
          *(undefined8 *)(puVar4 + 0x10) = param_3;
          *(undefined8 *)(puVar4 + 0x18) = param_4;
          *(undefined8 *)(puVar4 + 0x20) = param_5;
          *(undefined8 *)(puVar4 + 0x28) = param_2;
          pcStack_88 = FUN_10136e7f4;
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          uStack_98 = 0x10136e698;
          puStack_90 = &UNK_1103a7668;
          ppuVar5 = &puStack_a8;
          puStack_80 = puVar4;
          func_0x000107c60bc4(ppuVar5);
          puVar4 = puStack_80;
          func_0x000107c61434(param_4);
          func_0x000107c6157c(param_5);
          func_0x000107c61174(param_2);
          func_0x000107c61574(puVar4);
          func_0x000107c5c2b4(lVar1);
          func_0x000107c61574(param_6);
          func_0x000107c60bd0(ppuVar5);
          func_0x000107c615e8(lVar1);
          func_0x000107c61170(uVar2);
          func_0x000107c61170(param_8);
          func_0x000107c61170(uVar6);
          func_0x000107c61170(uVar3);
          return;
        }
      }
      puStack_a8 = (undefined *)0xd000000000000032;
      uStack_a0 = 0x800000010ef38810;
      uStack_98 = CONCAT71(uStack_98._1_7_,1);
      func_0x0001002a64a8(&puStack_a8);
      func_0x000107c61574(param_6);
    }
  }
  else {
    func_0x000107c614cc(param_1,auStack_b0,auStack_c8);
    func_0x000107c614b0(param_1);
    uVar2 = uStack_b8;
    func_0x000107c60640();
    uStack_98 = CONCAT71(uStack_98._1_7_,1);
    func_0x0001002a64a8(&puStack_a8);
    func_0x000107c614ac(param_1);
    func_0x000107c6142c(uVar2);
  }
  return;
}



/* Entry: 10136e598; end: 10136e72b;  */

void FUN_10136e598(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 in_x5;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  ulong uStack_50;
  undefined1 uStack_48;
  
  if (param_1 == 0) {
    if (param_2 >> 0x3e != 0) {
      uVar1 = param_2;
      if (-1 < (long)param_2) {
        uVar1 = param_2 & 0xffffffffffffff8;
      }
      func_0x000107c60480(uVar1);
    }
    uStack_48 = 0;
    uStack_58 = in_x5;
    uStack_50 = param_2;
    func_0x000107c61434(param_2);
    func_0x000107c61174(in_x5);
    func_0x0001002a64a8(&uStack_58);
    func_0x000107c6142c(param_2);
    func_0x000107c61170(in_x5);
  }
  else {
    func_0x000107c614cc(param_1,auStack_60,auStack_78);
    func_0x000107c614b0(param_1);
    uVar2 = uStack_68;
    func_0x000107c60640();
    uStack_48 = 1;
    func_0x0001002a64a8(&uStack_58);
    func_0x000107c614ac(param_1);
    func_0x000107c6142c(uVar2);
  }
  return;
}



/* Entry: 10136e72c; end: 10136e79f;  */

void FUN_10136e72c(void)

{
  long in_x5;
  code *in_x6;
  undefined1 auStack_50 [8];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  if (in_x5 == 0) {
    uStack_40 = 0;
  }
  else {
    func_0x000107c614cc(in_x5,auStack_38,auStack_50);
    func_0x000107c60640(uStack_48,uStack_40);
  }
  (*in_x6)();
  func_0x000107c6142c(uStack_40);
  return;
}



/* Entry: 10136e7a0; end: 10136e7f3;  */

void FUN_10136e7a0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10136e7f4; end: 10136e81b;  */

void FUN_10136e7f4(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [16];
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  ulong uStack_50;
  undefined1 uStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  if (param_1 == 0) {
    if (param_2 >> 0x3e != 0) {
      uVar1 = param_2;
      if (-1 < (long)param_2) {
        uVar1 = param_2 & 0xffffffffffffff8;
      }
      func_0x000107c60480(uVar1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                          *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
    }
    uStack_48 = 0;
    uStack_58 = uVar2;
    uStack_50 = param_2;
    func_0x000107c61434(param_2);
    func_0x000107c61174(uVar2);
    func_0x0001002a64a8(&uStack_58);
    func_0x000107c6142c(param_2);
    func_0x000107c61170(uVar2);
  }
  else {
    func_0x000107c614cc(param_1,auStack_60,auStack_78);
    func_0x000107c614b0(param_1);
    uVar2 = uStack_68;
    func_0x000107c60640();
    uStack_48 = 1;
    func_0x0001002a64a8(&uStack_58);
    func_0x000107c614ac(param_1);
    func_0x000107c6142c(uVar2);
  }
  return;
}



/* Entry: 10136e81c; end: 10136e85b;  */

void FUN_10136e81c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10136e85c; end: 10136e973;  */

void FUN_10136e85c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5f804();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  (**(code **)(lVar4 + 0x68))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7utilityyA2EmFWC_11034f7f8,lVar1);
  puVar2 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar3 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010ef38d90);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar3);
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  *(undefined **)(unaff_x20 + 0x20) = puVar2;
  func_0x000107c40218();
  func_0x000107c61180();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 10136e974; end: 10136efcf;  */

undefined ** FUN_10136e974(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  ulong uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar13;
  long unaff_x20;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_120 [8];
  long lStack_118;
  long lStack_110;
  undefined **ppuStack_108;
  undefined1 *puStack_100;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  code *pcStack_d0;
  undefined **ppuStack_c8;
  
  lVar3 = 0;
  puStack_100 = (undefined1 *)param_1;
  func_0x000107c5ede0();
  lVar15 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  puVar14 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar16 = (long)puVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar16 - extraout_x12;
  ppuVar5 = (undefined **)0x112d75fc0;
  func_0x0001000285a8(0x112d75fc0,&UNK_10d936050);
  uVar12 = (ulong)*(uint *)(ppuVar5 + 6);
  func_0x000107c613fc();
  func_0x0001000c2754();
  puVar6 = PTR_PTR_1126b8670;
  func_0x000107c61168(PTR_PTR_1126b8670);
  func_0x000107c3e444();
  func_0x000107c61180();
  puVar7 = puVar6;
  func_0x000107c5faec();
  func_0x000107c61170(puVar6);
  func_0x000107c5edd0(lVar13,puVar7,uVar12);
  func_0x000107c6142c(uVar12);
  func_0x000107c5edcc(lVar16,0xd000000000000011,0x800000010ef38d30,lVar13);
  lVar4 = lVar16;
  (**(code **)(lVar15 + 0x30))(lVar16,1,lVar3);
  if ((int)lVar4 == 1) {
    FUN_10136f000(lVar16,0x112d36580,&UNK_10d9016d0);
    func_0x0001000285a8(0x112d75fc8,&UNK_10d936058);
    uStack_e8 = 0xe700000000000000;
    puStack_f0 = (undefined *)0x4c525520646142;
    pcStack_e0 = (code *)CONCAT71(pcStack_e0._1_7_,1);
    ppuVar11 = &puStack_f0;
    func_0x000100854cb0(ppuVar11);
    func_0x000107c61574(ppuVar5);
  }
  else {
    ppuStack_108 = ppuVar5;
    (**(code **)(lVar15 + 0x20))(puVar14,lVar16,lVar3);
    lVar4 = 0x112d38300;
    func_0x0001000285a8(0x112d38300,&UNK_10d902f90);
    func_0x000107c61534();
    *(undefined8 *)(lVar4 + 0x18) = 2;
    *(undefined8 *)(lVar4 + 0x10) = 1;
    *(undefined8 *)(lVar4 + 0x20) = 0x6c61766f72707061;
    *(undefined8 *)(lVar4 + 0x28) = 0xee006e656b6f745f;
    *(undefined1 **)(lVar4 + 0x30) = puStack_100;
    *(undefined8 *)(lVar4 + 0x38) = param_2;
    func_0x000107c61434(param_2);
    lVar16 = lVar4;
    func_0x0001001830b8();
    func_0x000107c61588(lVar4);
    FUN_10136f000((undefined8 *)(lVar4 + 0x20),0x112d38308,&UNK_10d902040);
    lVar17 = *(long *)(unaff_x20 + 0x18);
    lVar4 = lVar17;
    func_0x000107c44f60();
    func_0x000107c61180();
    lVar8 = lVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar8 != 0) {
      lStack_118 = lVar15;
      lStack_110 = lVar3;
      puStack_100 = puVar14;
      func_0x000107c5ed90();
      puVar6 = &UNK_1103a76a0;
      func_0x000107c613fc(&UNK_1103a76a0,0x18,7);
      *(long *)(puVar6 + 0x10) = lVar16;
      puVar7 = &UNK_1103a76c8;
      func_0x000107c613fc(&UNK_1103a76c8,0x20,7);
      *(code **)(puVar7 + 0x10) = FUN_10136efd0;
      *(undefined **)(puVar7 + 0x18) = puVar6;
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_d0 = FUN_10136efd8;
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e8 = 0x42000000;
      pcStack_e0 = FUN_101365b04;
      puStack_d8 = &UNK_1103a76e0;
      ppuVar11 = &puStack_f0;
      ppuStack_c8 = (undefined **)puVar7;
      func_0x000107c60bc4(ppuVar11);
      ppuVar5 = ppuStack_c8;
      func_0x000107c6157c(puVar7);
      func_0x000107c61574(ppuVar5);
      lVar3 = lVar8;
      func_0x000107c3ecec(lVar8);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar11);
      func_0x000107c615e8(lVar8);
      func_0x000107c61170(lVar4);
      puVar9 = puVar7;
      func_0x000107c61544(puVar7,"",0x56,0xcb,0x20,1);
      func_0x000107c61574(puVar7);
      if (((ulong)puVar9 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10136efcc);
        (*pcVar2)();
      }
      func_0x000107c44f4c();
      func_0x000107c61180();
      lVar4 = lVar17;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar17);
      if (lVar4 == 0) {
        func_0x0001000285a8(0x112d75fc8,&UNK_10d936058);
        puStack_f0 = (undefined *)0xd000000000000032;
        uStack_e8 = 0x800000010ef38810;
        pcStack_e0 = (code *)CONCAT71(pcStack_e0._1_7_,1);
        ppuVar5 = &puStack_f0;
        func_0x000100854cb0(ppuVar5);
        func_0x000107c61574(ppuStack_108);
        func_0x000107c61170(lVar3);
        (**(code **)(lStack_118 + 8))(puStack_100,lStack_110);
        FUN_10136f000(lVar13,0x112d36580,&UNK_10d9016d0);
        func_0x000107c61574(puVar6);
        return ppuVar5;
      }
      lVar15 = *(long *)(unaff_x20 + 0x20);
      func_0x000107c4f7c0();
      func_0x000107c61180();
      puVar14 = puStack_100;
      ppuVar5 = ppuStack_108;
      if (lVar15 != 0) {
        pcStack_d0 = FUN_10136eff8;
        ppuStack_c8 = ppuStack_108;
        puStack_f0 = puVar1;
        uStack_e8 = 0x42000000;
        pcStack_e0 = FUN_101365b40;
        puStack_d8 = &UNK_1103a7708;
        ppuVar10 = &puStack_f0;
        func_0x000107c60bc4(ppuVar10);
        ppuVar11 = ppuStack_c8;
        func_0x000107c6157c(ppuVar5);
        func_0x000107c61574(ppuVar11);
        func_0x000107c5c2f4(lVar4);
        func_0x000107c61180();
        func_0x000107c615e8();
        func_0x000107c61170(lVar3);
        func_0x000107c60bd0(ppuVar10);
        func_0x000107c615e8(lVar4);
        func_0x000107c61170(lVar15);
        (**(code **)(lStack_118 + 8))(puVar14,lStack_110);
        FUN_10136f000(lVar13,0x112d36580,&UNK_10d9016d0);
        func_0x000107c61574(puVar6);
        return ppuVar5;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10136efd0);
      (*pcVar2)();
    }
    func_0x000107c6142c(lVar16);
    func_0x0001000285a8(0x112d75fc8,&UNK_10d936058);
    puStack_f0 = (undefined *)0xd000000000000017;
    uStack_e8 = 0x800000010ef38d50;
    pcStack_e0 = (code *)CONCAT71(pcStack_e0._1_7_,1);
    ppuVar11 = &puStack_f0;
    func_0x000100854cb0(ppuVar11);
    func_0x000107c61574(ppuStack_108);
    (**(code **)(lVar15 + 8))(puVar14,lVar3);
  }
  FUN_10136f000(lVar13,0x112d36580,&UNK_10d9016d0);
  return ppuVar11;
}



/* Entry: 10136efd0; end: 10136efd7;  */

void FUN_10136efd0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5d890(param_1,uVar2,6);
  func_0x000100215634(uVar2);
  uVar1 = uVar2;
  func_0x000107c5f9dc();
  func_0x000107c6142c(uVar2);
  func_0x000107c5d860(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10136efd8; end: 10136eff7;  */

void FUN_10136efd8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10136eff8; end: 10136efff;  */

void FUN_10136eff8(undefined8 param_1,undefined8 ****param_2,long *param_3,long *param_4,
                  undefined8 ****param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  long lVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 ****ppppuVar11;
  undefined8 uVar12;
  undefined8 ***pppuVar13;
  undefined8 uStack_188;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined *puStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined1 auStack_148 [24];
  undefined8 uStack_d0;
  long alStack_c8 [2];
  undefined8 ***pppuStack_b8;
  undefined1 auStack_b0 [8];
  long alStack_a8 [2];
  undefined8 ***pppuStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined8 **appuStack_78 [2];
  undefined1 uStack_68;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_6 == 0) {
    if ((ulong)param_5 >> 0x3c < 0xf) {
      puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
      func_0x000107c61168();
      func_0x00010006c00c(param_4,param_5);
      plVar3 = param_4;
      func_0x000107c5ee20(param_4,param_5);
      pppuStack_98 = (undefined8 ****)0x0;
      ppppuVar11 = &pppuStack_98;
      plVar10 = (long *)0x1;
      param_3 = plVar3;
      func_0x000107c3ab8c();
      func_0x000107c61180();
      func_0x000107c61170(plVar3);
      ppppuVar4 = (undefined8 ****)pppuStack_98;
      func_0x000107c61174();
      if (puVar2 == (undefined *)0x0) {
        ppppuVar5 = ppppuVar4;
        func_0x000107c5ed30();
        func_0x000107c61170(ppppuVar4);
        func_0x000107c61654();
        pppuStack_98 = (undefined8 ***)0xd000000000000018;
        uStack_90 = 0x800000010ef38d70;
        uStack_88 = 1;
        func_0x0001002a64a8(&pppuStack_98);
        func_0x0001000b44c0(param_4);
        func_0x000107c614ac();
      }
      else {
        func_0x000107c60234(appuStack_78,puVar2);
        func_0x000107c615e8(puVar2);
        func_0x0001000bb420(appuStack_78,&pppuStack_98);
        plVar10 = (long *)0x112d550a0;
        func_0x0001000285a8(0x112d550a0,&UNK_10d91c290);
        plVar3 = alStack_a8;
        param_3 = (long *)(PTR___sypN_11034f1a8 + 8);
        ppppuVar11 = (undefined8 ****)0x6;
        func_0x000107c6147c(plVar3,&pppuStack_98);
        if (((ulong)plVar3 & 1) == 0) {
          pppuStack_98 = (undefined8 ***)0x0;
          uStack_90 = 0;
          uStack_88 = 1;
          func_0x0001002a64a8(&pppuStack_98);
          func_0x0001000b44c0(param_4);
        }
        else {
          if (*(long *)(alStack_a8[0] + 0x10) == 0) {
            pppuVar13 = (undefined8 ***)0x0;
            uVar12 = 0;
          }
          else {
            func_0x000107c61434(alStack_a8[0]);
            lVar6 = 0x6574617473;
            uVar9 = 0;
            func_0x000100029284();
            if ((uVar9 & 1) == 0) {
              pppuVar13 = (undefined8 ***)0x0;
              uVar12 = 0;
            }
            else {
              puVar1 = (undefined8 *)(*(long *)(alStack_a8[0] + 0x38) + lVar6 * 0x10);
              pppuVar13 = (undefined8 ***)*puVar1;
              uVar12 = puVar1[1];
              func_0x000107c61434(uVar12);
            }
            func_0x000107c6142c(alStack_a8[0]);
          }
          func_0x000107c6142c(alStack_a8[0]);
          uStack_88 = 0;
          pppuStack_98 = pppuVar13;
          uStack_90 = uVar12;
          func_0x0001002a64a8(&pppuStack_98);
          func_0x0001000b44c0(param_4);
          func_0x000107c6142c(uVar12);
        }
        ppppuVar5 = (undefined8 ****)appuStack_78;
        func_0x000100183ab8();
      }
    }
    else {
      pppuStack_98 = (undefined8 ***)0x0;
      uStack_90 = 0;
      uStack_88 = 1;
      ppppuVar5 = &pppuStack_98;
      ppppuVar11 = param_5;
      func_0x0001002a64a8();
      param_5 = param_2;
      plVar10 = param_4;
    }
  }
  else {
    param_3 = alStack_c8;
    lVar6 = param_6;
    func_0x000107c614cc(param_6,auStack_b0);
    func_0x000107c614b0(param_6);
    ppppuVar5 = (undefined8 ****)pppuStack_b8;
    func_0x000107c60640();
    uStack_68 = 1;
    ppppuVar4 = ppppuVar5;
    func_0x0001002a64a8(appuStack_78);
    func_0x000107c614ac(param_6);
    ppppuVar11 = param_5;
    func_0x000107c6142c();
    param_5 = ppppuVar4;
    plVar10 = param_4;
    param_6 = lVar6;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    func_0x000107c60e78();
    if (ppppuVar5 == (undefined8 ****)0x0) {
      func_0x000107c61428(param_6 + 0x10,auStack_148,0,0);
      param_6 = param_6 + 0x10;
      func_0x000107c61648();
      if (param_6 == 0) {
        puStack_178 = (undefined *)0xd000000000000032;
        uStack_170 = 0x800000010ef38810;
        uStack_168 = CONCAT71(uStack_168._1_7_,1);
        func_0x0001002a64a8(&puStack_178);
      }
      else {
        lVar6 = *(long *)(param_6 + 0x10);
        if (lVar6 != 0) {
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar6 != 0) {
            plVar3 = param_3;
            func_0x000107c5fadc(param_3,plVar10);
            func_0x000107c5fc48(param_8,PTR___sSSN_11034da80);
            uVar12 = 0;
            if (alStack_c8[0] != 0) {
              func_0x000107c5fadc(uStack_d0,alStack_c8[0]);
              uVar12 = uStack_d0;
            }
            uVar7 = 0;
            FUN_10136e81c(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
            func_0x000107c5ffdc();
            puVar2 = &UNK_1103a7650;
            func_0x000107c613fc(&UNK_1103a7650,0x30,7);
            *(long **)(puVar2 + 0x10) = param_3;
            *(long **)(puVar2 + 0x18) = plVar10;
            *(undefined8 *****)(puVar2 + 0x20) = ppppuVar11;
            *(undefined8 *****)(puVar2 + 0x28) = param_5;
            pcStack_158 = FUN_10136e7f4;
            puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_170 = 0x42000000;
            uStack_168 = 0x10136e698;
            puStack_160 = &UNK_1103a7668;
            ppuVar8 = &puStack_178;
            puStack_150 = puVar2;
            func_0x000107c60bc4(ppuVar8);
            puVar2 = puStack_150;
            func_0x000107c61434(plVar10);
            func_0x000107c6157c(ppppuVar11);
            func_0x000107c61174(param_5);
            func_0x000107c61574(puVar2);
            func_0x000107c5c2b4(lVar6);
            func_0x000107c61574(param_6);
            func_0x000107c60bd0(ppuVar8);
            func_0x000107c615e8(lVar6);
            func_0x000107c61170(plVar3);
            func_0x000107c61170(param_8);
            func_0x000107c61170(uVar12);
            func_0x000107c61170(uVar7);
            return;
          }
        }
        puStack_178 = (undefined *)0xd000000000000032;
        uStack_170 = 0x800000010ef38810;
        uStack_168 = CONCAT71(uStack_168._1_7_,1);
        func_0x0001002a64a8(&puStack_178);
        func_0x000107c61574(param_6);
      }
    }
    else {
      func_0x000107c614cc();
      func_0x000107c614b0(ppppuVar5);
      func_0x000107c60640();
      uStack_168 = CONCAT71(uStack_168._1_7_,1);
      func_0x0001002a64a8(&puStack_178);
      func_0x000107c614ac(ppppuVar5);
      func_0x000107c6142c(uStack_188);
    }
    return;
  }
  return;
}



/* Entry: 10136f000; end: 10136f03f;  */

undefined8 FUN_10136f000(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10136f040; end: 10136f08b;  */

void FUN_10136f040(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)
            (*param_1,param_1[1],param_1[1],*(undefined1 *)(param_1 + 2));
  return;
}



/* Entry: 10136f08c; end: 10136f0c7;  */

/* WARNING: Possible PIC construction at 0x00010136f0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010136f0b8) */
/* WARNING: Removing unreachable block (ram,0x000107c61174) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3f0) */

void FUN_10136f08c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 10136f0c8; end: 10136f0d7;  */

void FUN_10136f0c8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[1];
  if (*(char *)(param_1 + 2) != '\x01') {
    func_0x000107c61170(*param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 10136f0d8; end: 10136f107;  */

void FUN_10136f0d8(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\x01') {
    func_0x000107c61170();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}


