/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10100eb4c; end: 10100ebaf;  */

undefined8 * FUN_10100eb4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 10100ebb0; end: 10100ebf3;  */

undefined8 * FUN_10100ebb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 10100ebf4; end: 10100ecc3;  */

int FUN_10100ebf4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10100ecc4; end: 10100ef3f;  */

void FUN_10100ecc4(code *param_1,ulong *param_2,long *param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*param_1)();
    if (lVar3 != 0) {
      param_2 = (ulong *)0x112d36e60;
      param_3 = (long *)&UNK_10d901170;
    }
  }
  if (*param_2 == 0 || (*param_2 & 1) != 0) {
    puVar2 = (undefined *)((long)param_3 + (long)(int)*param_3);
    func_0x000107c61518(puVar2,*param_3 >> 0x20,0,0);
    *param_2 = (ulong)puVar2;
  }
  return;
}



/* Entry: 10100ef40; end: 10100ef5b;  */

void FUN_10100ef40(long param_1,long param_2)

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



/* Entry: 10100ef5c; end: 10100f037;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10100ef5c(void)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112d54740) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d54748) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d54750) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d54758) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d54760) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d54768) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d54770) = 0;
  lVar1 = unaff_x20 + _DAT_112d54790;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112d54798);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 1;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "QuickCutViewImpl/QuickCutViewController.swift",0x2d,2,0x97,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10100f038);
  (*pcVar3)();
}



/* Entry: 10100f038; end: 10100f05b;  */

undefined8 FUN_10100f038(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10100f05c; end: 10100f05f; -[_TtC16QuickCutViewImpl22QuickCutViewController defaultProjectNameV3] */

void FUN_10100f05c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000104070160();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10100f060; end: 10100f06b; -[_TtC16QuickCutViewImpl22QuickCutViewController defaultProjectNameV2] */

void FUN_10100f060(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000104070160();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10100f06c; end: 10100f08b;  */

void FUN_10100f06c(void)

{
  FUN_10100d0ac(0);
  func_0x000107c614e8();
  func_0x000107c610f8();
                    /* WARNING: Could not recover jumptable at 0x00010bfee210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10100f08c; end: 10100f21f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_10100f08c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  long lStack_70;
  long lStack_68;
  
  uVar3 = param_1;
  func_0x00010101019c();
  lVar4 = 0;
  FUN_10100e944();
  lVar5 = lVar4;
  func_0x000107c610f8();
  *(undefined8 *)(lVar5 + _DAT_112d54740) = 0;
  *(undefined8 *)(lVar5 + _DAT_112d54748) = 0;
  *(undefined8 *)(lVar5 + _DAT_112d54750) = 0;
  *(undefined8 *)(lVar5 + _DAT_112d54758) = 0;
  *(undefined8 *)(lVar5 + _DAT_112d54760) = 0;
  *(undefined8 *)(lVar5 + _DAT_112d54768) = 0;
  *(undefined8 *)(lVar5 + _DAT_112d54770) = 0;
  lVar6 = lVar5 + _DAT_112d54790;
  *(undefined8 *)(lVar6 + 8) = 0;
  func_0x000107c61614(lVar6,0);
  puVar1 = (undefined8 *)(lVar5 + _DAT_112d54798);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112d54778);
  *puVar1 = uVar3;
  puVar1[1] = param_2;
  puVar1[2] = param_1;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112d54780);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112d54788);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  *(undefined8 *)(lVar6 + 8) = param_3;
  func_0x000107c61604();
  func_0x000107c61434(param_1);
  func_0x000100b64c10(param_4,param_5);
  puVar2 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_70 = lVar5;
  lStack_68 = lVar4;
  func_0x000107c6157c(param_7);
  plVar7 = &lStack_70;
  func_0x000107c61154(plVar7,puVar2,0,0);
  func_0x000107c5677c();
  auVar8._8_8_ = &PTR_DAT_1103766d0;
  auVar8._0_8_ = plVar7;
  return auVar8;
}



/* Entry: 10100f220; end: 10100f22f;  */

undefined1  [16] FUN_10100f220(void)

{
  return ZEXT816(0x110376758);
}



/* Entry: 10100f230; end: 10100f267;  */

void FUN_10100f230(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c5a100(param_1,param_2,5);
  func_0x000107c5251c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1c83b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3fe8000000000000,param_1,PTR_s_setMinimumScaleFactor__11264fb10);
  return;
}



/* Entry: 10100f268; end: 10100f307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10100f268(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d547e0;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112d547e0);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c52b2c();
    func_0x000107c59594(0x4020000000000000,puVar3);
    func_0x000107c54280(puVar3,param_2,1);
    func_0x000107c52610(puVar3,param_2,3);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 10100f308; end: 10100f31f; -[_TtC16QuickCutViewImpl18QuickCutViewFooter intrinsicContentSize] */

undefined1  [16] FUN_10100f308(void)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(undefined8 *)PTR__UIViewNoIntrinsicMetric_110345e70;
  auVar1._8_8_ = 0x404e000000000000;
  return auVar1;
}



/* Entry: 10100f320; end: 10100f5e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10100f320(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  long *plVar9;
  undefined1 *puVar10;
  long extraout_x8;
  undefined *puVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  long alStack_e0 [2];
  undefined1 auStack_c8 [16];
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  func_0x000107c614f0();
  lVar3 = 0;
  FUN_10100b3d0();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar13 = (long)alStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  *(undefined8 *)(unaff_x20 + _DAT_112d547e0) = 0;
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    func_0x000107c6142c(param_1);
    puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x00010100ff18(0,lVar3,0);
    puVar11 = puStack_78;
    puVar4 = PTR_PTR_1126aec40;
    func_0x000107c61168();
    lVar14 = param_1 + ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                       ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff));
    lVar12 = *(long *)(lVar12 + 0x48);
    alStack_e0[0] = param_1;
    do {
      func_0x00010100c900(lVar14,lVar13);
      lVar5 = 0;
      func_0x00010100c22c();
      lVar6 = lVar5;
      func_0x000107c610f8();
      puVar1 = (undefined8 *)(lVar6 + _DAT_112d546c0);
      puVar1[1] = 0;
      puVar1[2] = 0;
      *(undefined1 *)(puVar1 + 3) = 0;
      *puVar1 = 0;
      *(undefined8 *)(lVar6 + _DAT_112d546c8) = 0;
      func_0x00010100c900(lVar13,lVar6 + _DAT_112d546b0);
      pcStack_88 = FUN_10100f230;
      uStack_80 = 0;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      pcStack_98 = FUN_100f9954c;
      puStack_90 = &UNK_110376768;
      ppuVar7 = &puStack_a8;
      func_0x000107c60bc4(ppuVar7);
      func_0x000107c61574(uStack_80);
      puVar8 = puVar4;
      func_0x000107c3ee9c();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar7);
      *(undefined **)(lVar6 + _DAT_112d546b8) = puVar8;
      plVar9 = &lStack_b8;
      lStack_b8 = lVar6;
      lStack_b0 = lVar5;
      func_0x000107c61154(0,0,0,0,plVar9,PTR_s_initWithFrame__1125e2948);
      func_0x000107c61180();
      FUN_10100bd14();
      func_0x000107c61170(plVar9);
      FUN_10100ca0c(lVar13);
      uVar2 = *(ulong *)(puVar11 + 0x10);
      puStack_78 = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar2) {
        func_0x00010100ff18(1 < *(ulong *)(puVar11 + 0x18),uVar2 + 1,1);
      }
      puVar11 = puStack_78;
      *(ulong *)(puStack_78 + 0x10) = uVar2 + 1;
      *(long **)(puStack_78 + uVar2 * 8 + 0x20) = plVar9;
      lVar14 = lVar14 + lVar12;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    func_0x000107c6142c(alStack_e0[0]);
  }
  *(undefined **)(unaff_x20 + _DAT_112d547d8) = puVar11;
  puVar10 = auStack_c8;
  func_0x000107c61154(0,0,0,0,puVar10,PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_10100f5e8();
  func_0x000107c61170(puVar10);
  return puVar10;
}



/* Entry: 10100f5e8; end: 10100f8d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10100f5e8(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  ulong uVar12;
  ulong uVar13;
  
  FUN_10100f268();
  func_0x000107c3d89c();
  func_0x000107c61170(param_1);
  lVar2 = _DAT_112d547e0;
  func_0x000107c5a050(*(undefined8 *)(unaff_x20 + _DAT_112d547e0));
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar5 = puVar4;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar5 + 0x18) = 9;
  *(undefined8 *)(puVar5 + 0x10) = 4;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar7 = unaff_x20;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar8 = uVar6;
  func_0x000107c40284(0x4028000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar7);
  *(undefined8 *)(puVar5 + 0x20) = uVar8;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar7 = unaff_x20;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar8 = uVar6;
  func_0x000107c40284(0xc028000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar7);
  *(undefined8 *)(puVar5 + 0x28) = uVar8;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar7 = unaff_x20;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar8 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar7);
  *(undefined8 *)(puVar5 + 0x30) = uVar8;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar7 = unaff_x20;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  uVar8 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar7);
  *(undefined8 *)(puVar5 + 0x38) = uVar8;
  uVar8 = 0;
  FUN_101010090(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar9 = puVar5;
  func_0x000107c5fc48(puVar5,uVar8);
  func_0x000107c61574(puVar5);
  func_0x000107c3d048(puVar4);
  func_0x000107c61170(puVar9);
  uVar11 = *(ulong *)(unaff_x20 + _DAT_112d547d8);
  if (uVar11 >> 0x3e == 0) {
    uVar12 = *(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar12 = uVar11 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar11) {
      uVar12 = uVar11;
    }
    func_0x000107c60480();
  }
  if (uVar12 != 0) {
    uVar13 = 0;
    do {
      if ((uVar11 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar11 & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10100f8a0);
          (*pcVar3)();
        }
        uVar10 = *(ulong *)(uVar11 + uVar13 * 8 + 0x20);
        func_0x000107c61174(uVar10);
      }
      else {
        uVar10 = uVar13;
        FUN_10100fd50(uVar13,uVar11);
      }
      uVar1 = uVar13 + 1;
      if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10100f89c);
        (*pcVar3)();
      }
      func_0x000107c3d5b4(*(undefined8 *)(unaff_x20 + lVar2));
      func_0x000107c61170(uVar10);
      uVar13 = uVar13 + 1;
    } while (uVar1 != uVar12);
  }
  return;
}



/* Entry: 10100f8d4; end: 10100f937; -[_TtC16QuickCutViewImpl18QuickCutViewFooter initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10100f8d4(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112d547e0) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "QuickCutViewImpl/QuickCutViewFooter.swift",0x29,2,0x23,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10100f938);
  (*pcVar1)();
}



/* Entry: 10100f938; end: 10100f997; -[_TtC16QuickCutViewImpl18QuickCutViewFooter initWithFrame:] */

void FUN_10100f938(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("QuickCutViewImpl.QuickCutViewFooter",0x23,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10100f964);
  (*pcVar1)();
}



/* Entry: 10100f998; end: 10100f9cf; -[_TtC16QuickCutViewImpl18QuickCutViewFooter .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10100f998(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d547d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d547e0));
  return;
}



/* Entry: 10100f9d0; end: 10100f9ef;  */

void FUN_10100f9d0(void)

{
  func_0x000107c61168(&PTR_PTR_1127a7b38);
  return;
}



/* Entry: 10100f9f0; end: 10100fb8b;  */

ulong FUN_10100f9f0(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10100fac0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10100fac4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    FUN_101005488(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    FUN_101005488(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000020,0x800000010ef1f930);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10100fb8c);
  (*pcVar2)();
}



/* Entry: 10100fb8c; end: 10100fd4f;  */

ulong FUN_10100fb8c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10100fc70);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10100fc74);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
    func_0x000107c61168(PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8;
    func_0x000107c61168(PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_101010090(0,0x112d54430,&PTR__OBJC_CLASS___UICollectionViewLayoutAttributes_1126cc3e8);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10100fd50);
  (*pcVar2)();
}



/* Entry: 10100fd50; end: 10100feeb;  */

ulong FUN_10100fd50(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10100fe20);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10100fe24);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x00010100c22c(0);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    uVar3 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar3 = param_2;
    }
    func_0x000107c60488(param_1,uVar3);
    uVar4 = 0;
    func_0x00010100c22c(0);
    uVar3 = param_1;
    func_0x000107c61480(param_1,uVar4);
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000014,0x800000010ef1f910);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10100feec);
  (*pcVar2)();
}



/* Entry: 10100feec; end: 10100ff43;  */

void FUN_10100feec(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10100ff60();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 10100ff44; end: 10100ff5f;  */

void FUN_10100ff44(long param_1,long param_2)

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



/* Entry: 10100ff60; end: 10101008f;  */

undefined *
FUN_10100ff60(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5,
             code *param_6)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101010090);
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
    (*param_5)();
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
    uVar5 = 0;
    (*param_6)(0);
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



/* Entry: 101010090; end: 1010100cf;  */

void FUN_101010090(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1010100d0; end: 101010267;  */

undefined1  [16] FUN_1010100d0(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffed;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1f960);
  uVar3 = 0x7475436b63697551;
  func_0x000107c5fadc(0x7475436b63697551,0xec00000077656956);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10101019c);
  (*pcVar1)();
}



/* Entry: 101010268; end: 10101027b;  */

bool FUN_101010268(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10101027c; end: 101010327;  */

void FUN_10101027c(void)

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



/* Entry: 101010328; end: 101010503;  */

undefined8 FUN_101010328(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  code *pcVar6;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  long lStack_58;
  
  lVar5 = *(long *)(param_1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar4 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pcVar6 = *(code **)(lVar5 + 0x10);
  (*pcVar6)(lVar4 - extraout_x12);
  uVar1 = 0x112d53600;
  func_0x0001000285a8(0x112d53600,&UNK_10d91a660);
  puVar2 = &uStack_a0;
  func_0x000107c6147c(puVar2,lVar4 - extraout_x12,param_1,uVar1,0xe);
  if ((int)puVar2 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    FUN_10101060c(&uStack_a0,0x112d53608,&UNK_10d91a010);
    (*pcVar6)(lVar4);
    lVar3 = lVar4;
    func_0x000107c605a0(lVar4,param_1,param_2);
    if (lVar3 == 0) {
      lVar3 = param_1;
      func_0x000107c613f8(param_1,param_2,0,0);
      (**(code **)(lVar5 + 0x20))(param_2,lVar4,param_1);
    }
    else {
      (**(code **)(lVar5 + 8))(lVar4,param_1);
    }
    lVar4 = lVar3;
    func_0x000107c5ed2c(lVar3);
    func_0x000107c614ac(lVar3);
    func_0x000107c42210(lVar4);
    func_0x000107c61180();
    func_0x000107c61170();
    func_0x000107c3fcb0(lVar4);
    func_0x000107c61170(lVar4);
    uStack_60 = 0;
  }
  else {
    func_0x000100ca0220(&uStack_a0,auStack_78);
    func_0x0001000a8868(auStack_78,uStack_60);
    (**(code **)(lStack_58 + 0x10))(uStack_60,lStack_58);
    func_0x0001000834e4(auStack_78);
  }
  return uStack_60;
}



/* Entry: 101010504; end: 10101060b;  */

undefined8 FUN_101010504(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long extraout_x8;
  long extraout_x12;
  long lVar3;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_1 + -8) + 0x40));
  lVar3 = (long)&uStack_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x10))(lVar3);
  uVar1 = 0x112d511d0;
  func_0x0001000285a8(0x112d511d0,&UNK_10d91a670);
  puVar2 = &uStack_80;
  func_0x000107c6147c(puVar2,lVar3,param_1,uVar1,0xe);
  if ((int)puVar2 == 0) {
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    FUN_10101060c(&uStack_80,0x112d511d8,&UNK_10d917cb0);
    uStack_40 = 0x20;
  }
  else {
    func_0x000100ca0220(&uStack_80,auStack_58);
    func_0x0001000a8868(auStack_58,uStack_40);
    (**(code **)(lStack_38 + 0x10))(uStack_40,lStack_38);
    func_0x0001000834e4(auStack_58);
  }
  return uStack_40;
}



/* Entry: 10101060c; end: 10101064b;  */

undefined8 FUN_10101060c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10101064c; end: 10101064f;  */

void FUN_10101064c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d54810 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91b7b8;
  func_0x000107c61520(&UNK_10d91b7b8,&UNK_1103768e8);
  puRam0000000112d54810 = puVar1;
  return;
}



/* Entry: 101010650; end: 10101068f;  */

void FUN_101010650(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d54810 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91b7b8;
  func_0x000107c61520(&UNK_10d91b7b8,&UNK_1103768e8);
  puRam0000000112d54810 = puVar1;
  return;
}



/* Entry: 101010690; end: 101010b5b;  */

int FUN_101010690(byte *param_1,uint param_2)

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
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10101070c;
        goto LAB_1010106f0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1010106f0:
      return ((uint)*param_1 | uVar1 << 8) - 4;
    }
  }
LAB_10101070c:
  iVar2 = *param_1 - 5;
  if (*param_1 < 5) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101010b5c; end: 101010d17;  */

void FUN_101010b5c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = (ulong)*unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x0001010107f4(uVar1);
  func_0x000107c5fb58(auStack_68,uVar1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101010d18; end: 101010d1b;  */

void FUN_101010d18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d54818 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91b8a4;
  func_0x000107c61520(&UNK_10d91b8a4,&UNK_1103769b8);
  puRam0000000112d54818 = puVar1;
  return;
}



/* Entry: 101010d1c; end: 101010d5b;  */

void FUN_101010d1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d54818 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91b8a4;
  func_0x000107c61520(&UNK_10d91b8a4,&UNK_1103769b8);
  puRam0000000112d54818 = puVar1;
  return;
}



/* Entry: 101010d5c; end: 101010ebf;  */

int FUN_101010d5c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xdf < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x20) {
      iVar2 = 4;
    }
    if (param_2 + 0x20 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101010dd8;
        goto LAB_101010dbc;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101010dbc:
      return ((uint)*param_1 | uVar1 << 8) - 0x20;
    }
  }
LAB_101010dd8:
  iVar2 = *param_1 - 0x21;
  if (*param_1 < 0x21) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 101010ec0; end: 10101128b;  */

void FUN_101010ec0(undefined8 *param_1)

{
  if (*(char *)(param_1 + 1) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)(*param_1);
    return;
  }
  if (*(char *)(param_1 + 1) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
    return;
  }
  return;
}



/* Entry: 10101128c; end: 10101129f;  */

bool FUN_10101128c(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1010112a0; end: 10101134b;  */

void FUN_1010112a0(void)

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



/* Entry: 10101134c; end: 101011383;  */

void FUN_10101134c(undefined8 param_1)

{
  if (lRam0000000112d54bd0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e61e344);
  return;
}



/* Entry: 101011384; end: 101011387;  */

void FUN_101011384(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d54b70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91ba08;
  func_0x000107c61520(&UNK_10d91ba08,&UNK_110376bb8);
  puRam0000000112d54b70 = puVar1;
  return;
}



/* Entry: 101011388; end: 1010113c7;  */

void FUN_101011388(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d54b70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91ba08;
  func_0x000107c61520(&UNK_10d91ba08,&UNK_110376bb8);
  puRam0000000112d54b70 = puVar1;
  return;
}



/* Entry: 1010113c8; end: 10101152b;  */

int FUN_1010113c8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101011444;
        goto LAB_101011428;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_101011428:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_101011444:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 10101152c; end: 101011557;  */

long FUN_10101152c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101011558; end: 10101155f;  */

void FUN_101011558(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 101011560; end: 10101159b;  */

undefined8 * FUN_101011560(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  func_0x000107c61434();
  return param_1;
}



/* Entry: 10101159c; end: 1010115f7;  */

undefined8 * FUN_10101159c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return param_1;
}



/* Entry: 1010115f8; end: 10101163b;  */

undefined8 * FUN_1010115f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return param_1;
}



/* Entry: 10101163c; end: 1010116d7;  */

int FUN_10101163c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1010116d8; end: 10101178b;  */

long * FUN_1010116d8(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    lVar6 = 0x112d51788;
    func_0x0001000285a8(0x112d51788,&UNK_10d9185e0);
    (**(code **)(*(long *)(lVar6 + -8) + 0x10))(param_1,param_2,lVar6);
    iVar3 = *(int *)(param_3 + 0x18);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar7 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar7;
    puVar1 = (undefined8 *)((long)param_2 + (long)iVar3);
    lVar6 = puVar1[1];
    uVar7 = *puVar1;
    puVar2 = (undefined8 *)((long)param_1 + (long)iVar3);
    puVar2[1] = puVar1[1];
    *puVar2 = uVar7;
    func_0x000107c61434();
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar5 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar6 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
  }
  func_0x000107c6157c(lVar6);
  return param_1;
}



/* Entry: 10101178c; end: 1010117ef;  */

void FUN_10101178c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0x112d51788;
  func_0x0001000285a8(0x112d51788,&UNK_10d9185e0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  func_0x000107c6142c(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14) + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x18) + 8));
  return;
}



/* Entry: 1010117f0; end: 101011a2b;  */

long FUN_1010117f0(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar4 = 0x112d51788;
  func_0x0001000285a8(0x112d51788,&UNK_10d9185e0);
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
  iVar3 = *(int *)(param_3 + 0x18);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar5 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  puVar1 = (undefined8 *)(param_2 + iVar3);
  uVar5 = puVar1[1];
  uVar6 = *puVar1;
  puVar2 = (undefined8 *)(param_1 + iVar3);
  puVar2[1] = puVar1[1];
  *puVar2 = uVar6;
  func_0x000107c61434();
  func_0x000107c6157c(uVar5);
  return param_1;
}



/* Entry: 101011a2c; end: 101011a43;  */

void FUN_101011a2c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc01f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getEnumTagSinglePayloadGeneric_11034f350)();
  return;
}



/* Entry: 101011a44; end: 101011ac3;  */

void FUN_101011a44(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_101011ac4();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &UNK_10d91bac8;
    puStack_28 = PTR___syycWV_11034f1c0 + 0x40;
    func_0x000107c6153c(param_1,0x100,3,&lStack_38,param_1 + 0x10);
  }
  return;
}



/* Entry: 101011ac4; end: 101011b13;  */

void FUN_101011ac4(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112d518e8 != 0) {
    return;
  }
  puVar1 = &UNK_110376c30;
  func_0x000107c5fd44();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112d518e8 = param_1;
  return;
}



/* Entry: 101011b14; end: 101011cbf;  */

void FUN_101011b14(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 101011cc0; end: 101011d03;  */

long FUN_101011cc0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101011d04; end: 101012067;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101011d04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
             undefined8 param_13,undefined1 param_14)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar1 = unaff_x20 + _DAT_1137ff130;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d54c10) = param_1;
  FUN_101011cc0(param_2,unaff_x20 + _DAT_112d54c18);
  *(undefined8 *)(unaff_x20 + _DAT_112d54c20) = param_3;
  FUN_100fd1c50(param_4,unaff_x20 + _DAT_1137ff128);
  func_0x000107c61428(lVar1,auStack_78,1,0);
  *(undefined8 *)(lVar1 + 8) = param_6;
  func_0x000107c61604(lVar1,param_5);
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_1137ff138);
  *puVar2 = param_7;
  puVar2[1] = param_8;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_1137ff140);
  *puVar2 = param_9;
  *(undefined1 *)(puVar2 + 1) = param_10;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_1137ff148);
  *puVar2 = param_12;
  puVar2[1] = param_13;
  *(undefined1 *)(unaff_x20 + _DAT_1137ff150) = param_14;
  puVar3 = PTR_s_init_1125d9248;
  func_0x000107c615f0(param_1);
  puVar4 = auStack_88;
  func_0x000107c61154(puVar4,puVar3);
  func_0x000107c615e8(param_1);
  func_0x000107c615e8(param_5);
  FUN_100fc3b98(param_4);
  func_0x0001000834e4(param_2);
  return puVar4;
}



/* Entry: 101012068; end: 1010120c7; -[_TtC15QuickCutViewAPI17QuickCutViewScope init] */

void FUN_101012068(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("QuickCutViewAPI.QuickCutViewScope",0x21,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101012094);
  (*pcVar1)();
}



/* Entry: 1010120c8; end: 10101217b; -[_TtC15QuickCutViewAPI17QuickCutViewScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010120c8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d54c10));
  func_0x0001000834e4(param_1 + _DAT_112d54c18);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d54c20));
  FUN_100fc3b98(param_1 + _DAT_1137ff128);
  func_0x000101012158(param_1 + _DAT_1137ff130);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_1137ff138 + 8));
  if (*(long *)(param_1 + _DAT_1137ff148) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_1137ff148))[1]);
    return;
  }
  return;
}



/* Entry: 10101217c; end: 101012193;  */

void FUN_10101217c(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_2);
    return;
  }
  return;
}



/* Entry: 101012194; end: 1010121cb;  */

void FUN_101012194(undefined8 param_1)

{
  if (lRam0000000112d54c50 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e61e3d4);
  return;
}



/* Entry: 1010121cc; end: 101012283;  */

void FUN_1010121cc(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_68 = &UNK_10d91bb38;
  puStack_60 = &UNK_10d91bb50;
  puStack_58 = PTR___sBbWV_11034d660 + 0x40;
  lVar1 = 0x13f;
  func_0x0001038e5950();
  if (param_2 < 0x40) {
    lStack_50 = *(long *)(lVar1 + -8) + 0x40;
    puStack_48 = &UNK_10d91bb68;
    puStack_40 = &UNK_10d91bb80;
    puStack_38 = &UNK_10d91bb98;
    puStack_30 = &UNK_10d91bb80;
    puStack_28 = &UNK_10d91bbb0;
    func_0x000107c61630(param_1,0x100,9,&puStack_68,param_1 + 0x50);
  }
  return;
}



/* Entry: 101012284; end: 101012433;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101012284(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long unaff_x20;
  
  puVar5 = &stack0xffffffffffffff90;
  func_0x000107c614f0();
  puVar2 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
  func_0x000107c61168(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
  func_0x000107c42448();
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
  func_0x000107c610f8();
  func_0x000107c46734();
  lVar1 = _DAT_112d54c60;
  *(undefined **)(unaff_x20 + _DAT_112d54c60) = puVar3;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c539d4(0x4028000000000000);
  func_0x000107c61170(puVar3);
  func_0x000107c534b0(*(undefined8 *)(unaff_x20 + lVar1));
  func_0x000107c5a050(*(undefined8 *)(unaff_x20 + lVar1));
  puVar3 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar1 = _DAT_112d54c68;
  *(undefined **)(unaff_x20 + _DAT_112d54c68) = puVar3;
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(puVar3);
  func_0x000107c5af88(puVar4);
  func_0x000107c61180();
  func_0x000107c59c78(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c5a100(*(undefined8 *)(unaff_x20 + lVar1));
  func_0x000107c59c74(*(undefined8 *)(unaff_x20 + lVar1));
  func_0x000107c5a050(*(undefined8 *)(unaff_x20 + lVar1));
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff90,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_101012434();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar2);
  return puVar5;
}



/* Entry: 101012434; end: 101012753;  */

/* WARNING: Possible PIC construction at 0x000101012488: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010124d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101012558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010125ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101012600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101012654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010126a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010126fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010126ac) */
/* WARNING: Removing unreachable block (ram,0x000101012658) */
/* WARNING: Removing unreachable block (ram,0x000101012604) */
/* WARNING: Removing unreachable block (ram,0x0001010125b0) */
/* WARNING: Removing unreachable block (ram,0x00010101255c) */
/* WARNING: Removing unreachable block (ram,0x0001010124d4) */
/* WARNING: Removing unreachable block (ram,0x00010101248c) */
/* WARNING: Removing unreachable block (ram,0x000101012700) */

void FUN_101012434(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000101015bbc();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c520f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 101012754; end: 101012773; -[_TtC19QuickCutPreviewImpl26QuickCutLoadingOverlayView initWithFrame:] */

void FUN_101012754(void)

{
  FUN_101012284();
  return;
}



/* Entry: 101012774; end: 1010127ff; -[_TtC19QuickCutPreviewImpl26QuickCutLoadingOverlayView initWithCoder:] */

void FUN_101012774(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "QuickCutPreviewImpl/QuickCutLoadingOverlayView.swift",0x34,2,0x27,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010127cc);
  (*pcVar1)();
}



/* Entry: 101012800; end: 101012837; -[_TtC19QuickCutPreviewImpl26QuickCutLoadingOverlayView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010101281c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101012820) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101012800(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d54c60));
  return;
}



/* Entry: 101012838; end: 101012857;  */

void FUN_101012838(void)

{
  func_0x000107c61168(&PTR_PTR_1127a7d08);
  return;
}



/* Entry: 101012858; end: 101012b27;  */

long FUN_101012858(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101012b28; end: 101012c93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101012b28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lStack_80;
  long lStack_78;
  
  lVar4 = 0;
  func_0x00010101474c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar1 = lVar5 + _DAT_112d54cc0;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(lVar5 + _DAT_112d54cc8) = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_112d54cd0);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar5 + _DAT_112d54cd8) = 0;
  *(undefined8 *)(lVar5 + _DAT_112d54ce0) = 1;
  *(undefined8 *)(lVar5 + _DAT_112d54ce8) = 0;
  *(undefined8 *)(lVar5 + _DAT_112d54c98) = param_3;
  FUN_101012c94(param_4,lVar5 + _DAT_112d54ca0);
  FUN_101012c94(param_5,lVar5 + _DAT_112d54ca8);
  FUN_101012c94(param_6,lVar5 + _DAT_112d54cb0);
  puVar2 = (undefined8 *)(lVar5 + _DAT_112d54cb8);
  *puVar2 = param_1;
  puVar2[1] = param_2;
  *(undefined8 *)(lVar1 + 8) = param_8;
  func_0x000107c61604(lVar1,param_7);
  puVar3 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_80 = lVar5;
  lStack_78 = lVar4;
  func_0x000107c6157c(param_3);
  func_0x000107c61154(&lStack_80,puVar3,0,0);
  return;
}



/* Entry: 101012c94; end: 101012cd7;  */

long FUN_101012c94(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 101012cd8; end: 101012ce7;  */

undefined1  [16] FUN_101012cd8(void)

{
  return ZEXT816(0x110376e80);
}



/* Entry: 101012ce8; end: 101012d53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101012ce8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d54ce0;
  lVar3 = *(long *)(unaff_x20 + _DAT_112d54ce0);
  lVar2 = lVar3;
  if (lVar3 == 1) {
    lVar2 = unaff_x20;
    FUN_101012d54();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000101014888(uVar4);
  }
  func_0x000101014898(lVar3);
  return lVar2;
}



/* Entry: 101012d54; end: 101012f43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_101012d54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puStack_58;
  
  func_0x0001000d224c(&puStack_58);
  if (puStack_58 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    func_0x000107c5de64();
    func_0x000107c61180();
    if (param_5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101012f44);
      (*pcVar2)();
    }
    func_0x000107c3ec60();
    func_0x000107c61170(param_5);
    puVar7 = puStack_58;
    func_0x000107c4e9b4(param_1,param_2,param_3,param_4);
    func_0x000107c61180();
    func_0x000107c615e8(puStack_58);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    puVar4 = puVar7;
    func_0x000107c61174();
    func_0x000107c5af88(puVar3);
    func_0x000107c61180();
    func_0x000107c52b50(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    puVar5 = puVar4;
    func_0x000107c4aba4(puVar4);
    func_0x000107c61180();
    func_0x000107c539d4(0x4028000000000000);
    func_0x000107c61170(puVar5);
    func_0x000107c534b0(puVar4);
    func_0x000107c61174();
    puVar5 = puVar4;
    FUN_101015b98();
    uVar6 = *puVar5;
    uVar1 = puVar5[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c520f4(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
    func_0x000107c61174();
    puVar5 = puVar4;
    func_0x000101015ba4();
    uVar6 = *puVar5;
    uVar1 = puVar5[1];
    func_0x000107c61434(uVar1);
    func_0x000107c5fadc(uVar6,uVar1);
    func_0x000107c6142c(uVar1);
    func_0x000107c52104(puVar4);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(uVar6);
  }
  return puVar7;
}



/* Entry: 101012f44; end: 101012fa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101012f44(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d54ce8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d54ce8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_101012fa4();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 101012fa4; end: 101013273;  */

undefined8 FUN_101012fa4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  
  uVar2 = 0;
  FUN_101012838();
  func_0x000107c614e8();
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c5a050();
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101013264);
    (*pcVar1)();
  }
  func_0x000107c3d89c();
  func_0x000107c61170();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 9;
  *(undefined8 *)(lVar3 + 0x10) = 4;
  uVar8 = uVar2;
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101013268);
    (*pcVar1)();
  }
  lVar5 = lVar4;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  uVar6 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(lVar5);
  *(undefined8 *)(lVar3 + 0x20) = uVar6;
  uVar8 = uVar2;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10101326c);
    (*pcVar1)();
  }
  lVar5 = lVar4;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  uVar6 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(lVar5);
  *(undefined8 *)(lVar3 + 0x28) = uVar6;
  uVar8 = uVar2;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    uVar6 = uVar8;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    func_0x000107c61170(lVar5);
    *(undefined8 *)(lVar3 + 0x30) = uVar6;
    uVar8 = uVar2;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    func_0x000107c5de64();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      puVar7 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      lVar4 = unaff_x20;
      func_0x000107c3ec1c(unaff_x20);
      func_0x000107c61180();
      func_0x000107c61170(unaff_x20);
      uVar6 = uVar8;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      func_0x000107c61170(lVar4);
      *(undefined8 *)(lVar3 + 0x38) = uVar6;
      uVar8 = 0;
      func_0x000100847984(0);
      lVar4 = lVar3;
      func_0x000107c5fc48(lVar3,uVar8);
      func_0x000107c61574(lVar3);
      func_0x000107c3d048(puVar7);
      func_0x000107c61170(lVar4);
      return uVar2;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101013274);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101013270);
  (*pcVar1)();
}



/* Entry: 101013274; end: 1010132a7; -[_TtC19QuickCutPreviewImpl29QuickCutPreviewViewController initWithCoder:] */

undefined8 FUN_101013274(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1010148a8();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 1010132a8; end: 10101332f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010132a8(void)

{
  long unaff_x20;
  long lVar1;
  
  func_0x000107c614f0();
  lVar1 = *(long *)(unaff_x20 + _DAT_112d54cc8);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar1);
  }
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101013330; end: 1010133cb; -[_TtC19QuickCutPreviewImpl29QuickCutPreviewViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101013330(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  lVar2 = *(long *)(param_1 + _DAT_112d54cc8);
  if (lVar2 == 0) {
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c6157c(lVar2);
    func_0x000107c5fd50();
    func_0x000107c61574(lVar2);
  }
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1010133cc; end: 101013483; -[_TtC19QuickCutPreviewImpl29QuickCutPreviewViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010133cc(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d54c98));
  func_0x0001000834e4(param_1 + _DAT_112d54ca0);
  func_0x0001000834e4(param_1 + _DAT_112d54ca8);
  func_0x0001000834e4(param_1 + _DAT_112d54cb0);
  FUN_10101495c(param_1 + _DAT_112d54cc0);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d54cc8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d54cd0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d54cd8));
  func_0x000101014888(*(undefined8 *)(param_1 + _DAT_112d54ce0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d54ce8));
  return;
}



/* Entry: 101013484; end: 10101374f;  */

/* WARNING: Possible PIC construction at 0x0001010134d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101013548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101013568: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010135b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010135d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101013628: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101013648: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010136ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010136cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010101370c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010136d0) */
/* WARNING: Removing unreachable block (ram,0x0001010136b0) */
/* WARNING: Removing unreachable block (ram,0x00010101364c) */
/* WARNING: Removing unreachable block (ram,0x00010101374c) */
/* WARNING: Removing unreachable block (ram,0x000101013680) */
/* WARNING: Removing unreachable block (ram,0x00010101362c) */
/* WARNING: Removing unreachable block (ram,0x0001010135dc) */
/* WARNING: Removing unreachable block (ram,0x000101013748) */
/* WARNING: Removing unreachable block (ram,0x000101013610) */
/* WARNING: Removing unreachable block (ram,0x0001010135bc) */
/* WARNING: Removing unreachable block (ram,0x00010101356c) */
/* WARNING: Removing unreachable block (ram,0x000101013744) */
/* WARNING: Removing unreachable block (ram,0x0001010135a0) */
/* WARNING: Removing unreachable block (ram,0x00010101354c) */
/* WARNING: Removing unreachable block (ram,0x0001010134d8) */
/* WARNING: Removing unreachable block (ram,0x000101013740) */
/* WARNING: Removing unreachable block (ram,0x000101013530) */
/* WARNING: Removing unreachable block (ram,0x000101013710) */

void FUN_101013484(long param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  FUN_101012ce8();
  if (param_1 == 0) {
    return;
  }
  func_0x000107c5a050();
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    func_0x000107c3d89c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101013740);
  (*pcVar1)();
}



/* Entry: 101013750; end: 1010137ab; -[_TtC19QuickCutPreviewImpl29QuickCutPreviewViewController viewDidLoad] */

void FUN_101013750(undefined8 param_1)

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
  FUN_101013484();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1010137ac; end: 1010138b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010137ac(uint param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_68 [40];
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewWillAppear__1126853f0,param_1 & 1);
  lVar1 = _DAT_112d54cc8;
  if (*(long *)(unaff_x20 + _DAT_112d54cc8) == 0) {
    puVar2 = &UNK_110376ea0;
    func_0x000107c613fc(&UNK_110376ea0,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    FUN_10101476c(unaff_x20 + _DAT_112d54ca0,auStack_68);
    puVar3 = &UNK_110376ec8;
    func_0x000107c613fc(&UNK_110376ec8,0x40,7);
    FUN_1010147b0(auStack_68,puVar3 + 0x10);
    *(undefined **)(puVar3 + 0x38) = puVar2;
    uVar4 = 0x41;
    func_0x0001001ca524(0x41,0,0x48,3,0,0,&UNK_10d91bcd8,puVar3,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar3);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = uVar4;
    func_0x000107c61574(uVar5);
  }
  return;
}



/* Entry: 1010138b8; end: 1010138e7; -[_TtC19QuickCutPreviewImpl29QuickCutPreviewViewController viewWillAppear:] */

void FUN_1010138b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1010137ac(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1010138e8; end: 1010139c3;  */

void FUN_1010138e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  lVar4 = 0x112d53800;
  func_0x0001000285a8(0x112d53800,&UNK_10d91ad10);
  *(long *)(unaff_x22 + 0x60) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x68) = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x70) = uVar1;
  lVar4 = 0x112d54d18;
  func_0x0001000285a8(0x112d54d18,&UNK_10d91bce8);
  *(long *)(unaff_x22 + 0x78) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar4;
  uVar1 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar1;
  uVar2 = 0;
  func_0x000107c5fcec();
  *(undefined8 *)(unaff_x22 + 0x90) = uVar2;
  uVar3 = uVar2;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x98) = uVar3;
  func_0x000100eea164();
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar3;
  func_0x000107c5fca8();
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1010139c4,uVar2,uVar3);
  return;
}



/* Entry: 1010139c4; end: 101013a9b;  */

void FUN_1010139c4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar1 = *(long *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar2 = *(long *)(unaff_x22 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar7 = *(long *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(lVar7 + 0x18);
  lVar6 = *(long *)(lVar7 + 0x20);
  func_0x0001000a8868(lVar7,uVar3);
  (**(code **)(lVar6 + 8))(uVar4,uVar3,lVar6);
  func_0x000107c5fd34(uVar9,uVar5);
  (**(code **)(lVar1 + 8))(uVar4,uVar5);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x30,0,0);
  plVar8 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_101013a9c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar8,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x78));
  return;
}



/* Entry: 101013a9c; end: 101013adf;  */

void FUN_101013a9c(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (FUN_101013ae0,*(undefined8 *)(lVar1 + 0xa8),*(undefined8 *)(lVar1 + 0xb0));
  return;
}



/* Entry: 101013ae0; end: 101013c1f;  */

void FUN_101013ae0(void)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar4;
  *(undefined8 *)(unaff_x22 + 200) = uVar5;
  uVar6 = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar6;
  cVar1 = *(char *)(unaff_x22 + 0x28);
  *(char *)(unaff_x22 + 0x29) = cVar1;
  if (cVar1 == -1) {
    (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))
              (*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x78));
  }
  else {
    uVar2 = *(long *)(unaff_x22 + 0x58) + 0x10;
    func_0x000107c61618();
    *(ulong *)(unaff_x22 + 0xd8) = uVar2;
    if (uVar2 == 0) {
      (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))
                (*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x78));
    }
    else {
      uVar3 = uVar2;
      func_0x000107c5fd5c();
      if ((uVar3 & 1) == 0) {
        uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
        uVar4 = *(undefined8 *)(unaff_x22 + 0x90);
        func_0x000107c5fce8();
        *(ulong *)(unaff_x22 + 0xe0) = uVar3;
        func_0x000107c5fca8();
        *(undefined8 *)(unaff_x22 + 0xe8) = uVar4;
        *(undefined8 *)(unaff_x22 + 0xf0) = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(FUN_101013c20,uVar4,uVar5);
        return;
      }
      (**(code **)(*(long *)(unaff_x22 + 0x80) + 8))
                (*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x78));
      func_0x000107c61170(uVar2);
    }
    FUN_101014868(uVar4,uVar5,uVar6,cVar1);
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x98));
  func_0x000107c615c0(uVar5);
  func_0x000107c615c0(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101013bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101013c20; end: 101014217;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101013c20(void)

{
  undefined8 *puVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  long unaff_x22;
  undefined8 uVar16;
  long lVar17;
  code *pcVar18;
  double dVar19;
  
  bVar3 = *(byte *)(unaff_x22 + 0x29);
  if (bVar3 < 2) {
    if (bVar3 != 0) {
      lVar15 = *(long *)(unaff_x22 + 0xe0);
      dVar19 = *(double *)(unaff_x22 + 0xc0);
      func_0x000107c61574();
      FUN_101012f44();
      lVar4 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      lVar14 = lVar4;
      func_0x000107c613fc();
      *(undefined8 *)(lVar14 + 0x18) = 2;
      *(undefined8 *)(lVar14 + 0x10) = 1;
      puVar10 = PTR___sSds7CVarArgsWP_11034ddc0;
      *(undefined **)(lVar14 + 0x38) = PTR___sSdN_11034dd90;
      *(undefined **)(lVar14 + 0x40) = puVar10;
      *(double *)(lVar14 + 0x20) = dVar19 * 100.0;
      uVar8 = 0x252566302e25;
      uVar12 = 0xe600000000000000;
      func_0x000107c5fb00(0x252566302e25,0xe600000000000000,lVar14);
      lVar14 = -0x2fffffffffffffe0;
      func_0x000107c5fadc(0xd000000000000020,0x800000010ef1fec0);
      uVar5 = 0xd000000000000013;
      func_0x000107c5fadc(0xd000000000000013,0x800000010d91bc50);
      uVar6 = 0;
      func_0x000107c5fe40(0);
      lVar7 = lVar14;
      uVar16 = uVar5;
      func_0x0001000f6108(lVar14,uVar5,uVar6);
      func_0x000107c61180();
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(lVar14);
      if (lVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x101014218);
        (*pcVar18)();
      }
      lVar14 = lVar7;
      func_0x000107c5faec(lVar7);
      func_0x000107c61170(lVar7);
      func_0x000107c613fc(lVar4,0x48,7);
      *(undefined8 *)(lVar4 + 0x18) = 2;
      *(undefined8 *)(lVar4 + 0x10) = 1;
      *(undefined **)(lVar4 + 0x38) = PTR___sSSN_11034da80;
      lVar7 = lVar4;
      func_0x00010075bbf0();
      *(long *)(lVar4 + 0x40) = lVar7;
      *(undefined8 *)(lVar4 + 0x20) = uVar8;
      *(undefined8 *)(lVar4 + 0x28) = uVar12;
      uVar8 = uVar16;
      func_0x000107c5fb00(lVar14,uVar16,lVar4);
      func_0x000107c6142c(uVar16);
      uVar16 = *(undefined8 *)(lVar15 + _DAT_112d54c68);
      func_0x000107c5fadc(lVar14,uVar8);
      func_0x000107c59c6c(uVar16);
      func_0x000107c61170(lVar14);
      func_0x000107c550d8(lVar15);
      func_0x000107c6142c(uVar8);
      func_0x000107c61170(lVar15);
      FUN_101014498();
      uVar16 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar8 = *(undefined8 *)(unaff_x22 + 0xb0);
      pcVar18 = FUN_101014314;
      goto LAB_1010141f0;
    }
    lVar4 = *(long *)(unaff_x22 + 0xd8);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar5 = *(undefined8 *)(unaff_x22 + 200);
    func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0xe0));
    lVar4 = lVar4 + _DAT_112d54cb0;
    uVar8 = *(undefined8 *)(lVar4 + 0x18);
    lVar14 = *(long *)(lVar4 + 0x20);
    func_0x0001000a8868(lVar4,uVar8);
    (**(code **)(lVar14 + 8))(uVar16,uVar5,uVar8,lVar14);
  }
  else {
    if (bVar3 != 2) {
      if (bVar3 == 3) {
        uVar16 = *(undefined8 *)(unaff_x22 + 0xd0);
        lVar14 = *(long *)(unaff_x22 + 0xd8);
        uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
        uVar6 = *(undefined8 *)(unaff_x22 + 200);
        lVar4 = lVar14 + _DAT_112d54cb0;
        uVar5 = *(undefined8 *)(lVar4 + 0x18);
        lVar15 = *(long *)(lVar4 + 0x20);
        func_0x0001000a8868(lVar4,uVar5);
        (**(code **)(lVar15 + 0x18))(uVar6,uVar16,uVar5,lVar15);
        lVar14 = lVar14 + _DAT_112d54ca8;
        uVar16 = *(undefined8 *)(lVar14 + 0x18);
        lVar4 = *(long *)(lVar14 + 0x20);
        func_0x0001000a8868(lVar14,uVar16);
        piVar13 = *(int **)(lVar4 + 8);
        iVar2 = *piVar13;
        plVar9 = (long *)(ulong)(uint)piVar13[1];
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0xf8) = plVar9;
        *plVar9 = unaff_x22;
        plVar9[1] = (long)FUN_101014298;
                    /* WARNING: Could not recover jumptable at 0x000101013d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar2 + (long)piVar13))(uVar8,0,uVar16,lVar4);
        return;
      }
      lVar4 = *(long *)(unaff_x22 + 0xd8);
      lVar14 = *(long *)(unaff_x22 + 0xe0);
      uVar16 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar5 = *(undefined8 *)(unaff_x22 + 200);
      func_0x000107c61574();
      FUN_101012f44();
      func_0x000107c59c6c(*(undefined8 *)(lVar14 + _DAT_112d54c68));
      func_0x000107c550d8(lVar14);
      func_0x000107c61170(lVar14);
      lVar4 = lVar4 + _DAT_112d54cb0;
      uVar8 = *(undefined8 *)(lVar4 + 0x18);
      lVar14 = *(long *)(lVar4 + 0x20);
      func_0x0001000a8868(lVar4,uVar8);
      (**(code **)(lVar14 + 0x20))(uVar16,uVar5,uVar8,lVar14);
      FUN_101014498();
      uVar16 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar8 = *(undefined8 *)(unaff_x22 + 0xb0);
      pcVar18 = FUN_101014218;
      goto LAB_1010141f0;
    }
    lVar4 = *(long *)(unaff_x22 + 0xe0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xd0);
    func_0x000107c61574();
    FUN_101012ce8();
    if (lVar4 != 0) {
      FUN_101014498();
      func_0x0001000d224c(unaff_x22 + 0x48);
      lVar14 = *(long *)(unaff_x22 + 0x48);
      if (lVar14 == 0) {
        lVar15 = 0;
      }
      else {
        lVar15 = lVar14;
        func_0x000107c4e9b8();
        func_0x000107c61180();
        func_0x000107c615e8(lVar14);
      }
      uVar8 = *(undefined8 *)(*(long *)(unaff_x22 + 0xd8) + _DAT_112d54cd8);
      *(long *)(*(long *)(unaff_x22 + 0xd8) + _DAT_112d54cd8) = lVar15;
      func_0x000107c615e8(uVar8);
      if (lVar15 != 0) {
        lVar17 = *(long *)(unaff_x22 + 0xd8);
        uVar8 = *(undefined8 *)(unaff_x22 + 200);
        func_0x0001000285a8(0x112d54d20,&UNK_10d91bcf0);
        lVar14 = lVar15;
        func_0x000107c615f0(lVar15);
        func_0x000107c4e9a4();
        func_0x000107c61180();
        lVar7 = lVar14;
        func_0x0001000b637c();
        func_0x000107c61170(lVar14);
        pcVar18 = FUN_1010145bc;
        func_0x0001000c0ebc(FUN_1010145bc,0);
        func_0x000107c61574(lVar7);
        plVar9 = (long *)0x1;
        func_0x00010061b458();
        func_0x000107c61574(pcVar18);
        puVar10 = &UNK_110376ea0;
        func_0x000107c613fc(&UNK_110376ea0,0x18,7);
        func_0x000107c61614(puVar10 + 0x10,lVar17);
        puVar11 = &UNK_110376ef0;
        func_0x000107c613fc(&UNK_110376ef0,0x28,7);
        *(undefined **)(puVar11 + 0x10) = puVar10;
        *(undefined8 *)(puVar11 + 0x18) = uVar8;
        *(undefined8 *)(puVar11 + 0x20) = uVar16;
        pcVar18 = *(code **)(*plVar9 + 0x60);
        func_0x000107c61434(uVar16);
        uVar16 = 0x10101487c;
        puVar10 = puVar11;
        (*pcVar18)();
        func_0x000107c61574(puVar11);
        func_0x000107c61574(plVar9);
        puVar1 = (undefined8 *)(lVar17 + _DAT_112d54cd0);
        uVar8 = *puVar1;
        *puVar1 = uVar16;
        puVar1[1] = puVar10;
        func_0x000107c615e8(uVar8);
        func_0x000107c5751c(lVar15);
        func_0x000107c57d0c(*(undefined8 *)(lVar17 + _DAT_112d54cb8),
                            ((undefined8 *)(lVar17 + _DAT_112d54cb8))[1],lVar15);
        func_0x000107c59178(lVar15);
        func_0x000107c4ee24(lVar15);
        func_0x000107c5bba0(lVar15);
        func_0x000107c615e8(lVar15);
        func_0x000107c61170(lVar4);
        uVar16 = *(undefined8 *)(unaff_x22 + 0xa8);
        uVar8 = *(undefined8 *)(unaff_x22 + 0xb0);
        pcVar18 = FUN_101014394;
        goto LAB_1010141f0;
      }
      func_0x000107c61170(lVar4);
    }
  }
  uVar16 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb0);
  pcVar18 = FUN_101014414;
LAB_1010141f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar18,uVar16,uVar8);
  return;
}



/* Entry: 101014218; end: 101014297;  */

void FUN_101014218(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 200);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xd8));
  FUN_101014868(uVar2,uVar3,uVar1,4);
  plVar4 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101013a9c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar4,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x78));
  return;
}



/* Entry: 101014298; end: 101014313;  */

void FUN_101014298(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0xf8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)
            (0x1010142dc,*(undefined8 *)(lVar1 + 0xe8),*(undefined8 *)(lVar1 + 0xf0));
  return;
}



/* Entry: 101014314; end: 101014393;  */

void FUN_101014314(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 200);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xd8));
  FUN_101014868(uVar2,uVar3,uVar1,1);
  plVar4 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101013a9c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar4,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x78));
  return;
}



/* Entry: 101014394; end: 101014413;  */

void FUN_101014394(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 200);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xd8));
  FUN_101014868(uVar2,uVar3,uVar1,2);
  plVar4 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101013a9c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar4,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x78));
  return;
}



/* Entry: 101014414; end: 101014497;  */

void FUN_101014414(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long *plVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 200);
  uVar4 = *(undefined1 *)(unaff_x22 + 0x29);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xd8));
  FUN_101014868(uVar2,uVar3,uVar1,uVar4);
  plVar5 = (long *)(ulong)*(uint *)(PTR___sScS8IteratorV4nextxSgyYaFTu_11034fd80 + 4);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101013a9c;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7ee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScS8IteratorV4nextxSgyYaF_11034fd78)
            (plVar5,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x78));
  return;
}


