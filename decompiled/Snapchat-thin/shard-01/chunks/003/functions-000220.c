/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100ebaee8; end: 100ebafa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_100ebaee8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 uStack_31;
  
  lVar1 = _DAT_112d47dc0;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112d47dc0);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126af088;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c53fcc();
    func_0x000107c5a050(puVar3,param_2,0);
    func_0x000107c52eb8(puVar3,param_2,1);
    uStack_31 = 1;
    func_0x0001002a64a8(*(undefined8 *)(unaff_x20 + _DAT_112d47d98),&uStack_31);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 100ebafa8; end: 100ebafbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100ebafa8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d47dc8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d47dc8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_100ebafbc();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 100ebafbc; end: 100ebb173;  */

undefined * FUN_100ebafbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  puVar3 = puVar2;
  func_0x000107c3ea80();
  func_0x000107c61180();
  func_0x000107c59e34(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61174();
  func_0x000107c5af88(puVar2);
  func_0x000107c61180();
  func_0x000107c52b50(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c5cac0();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x00010052bbec();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c43780();
    func_0x000107c61180();
    func_0x000107c615e8(puVar3);
    func_0x000107c54adc(puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar4);
  }
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c539d4(0x403a000000000000);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(puVar2);
  func_0x000107c5a050(puVar1);
  puVar2 = puVar1;
  func_0x000107c61170(puVar1);
  func_0x000100ec8534();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c59e1c(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c3d8b8(puVar1);
  return puVar1;
}



/* Entry: 100ebb174; end: 100ebb187;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100ebb174(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d47dd0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d47dd0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_100ebb1e8();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 100ebb188; end: 100ebb1e7;  */

long FUN_100ebb188(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar3);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = unaff_x20;
    (*param_2)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar1 = 0;
  }
  func_0x000107c61174(lVar1);
  return lVar2;
}



/* Entry: 100ebb1e8; end: 100ebb357;  */

undefined * FUN_100ebb1e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174();
  puVar3 = puVar2;
  func_0x000107c3fa94(puVar2);
  func_0x000107c61180();
  func_0x000107c52b50(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c3ea80(puVar2);
  func_0x000107c61180();
  func_0x000107c59e34(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c5cac0();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    puVar3 = puVar2;
    func_0x00010052bbec();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c43780();
    func_0x000107c61180();
    func_0x000107c615e8(puVar3);
    func_0x000107c54adc(puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar4);
  }
  func_0x000107c5a050(puVar1);
  puVar2 = puVar1;
  func_0x000107c61170(puVar1);
  func_0x000100ec85f4();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c59e1c(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c3d8b8(puVar1);
  return puVar1;
}



/* Entry: 100ebb358; end: 100ebb37f; -[_TtC27PhoneEmailFirstLogInFeature53PhoneEmailFirstLogInAccountConfirmationViewController initWithCoder:] */

void FUN_100ebb358(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_100ebc138();
  return;
}



/* Entry: 100ebb380; end: 100ebbed3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ebb380(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long unaff_x20;
  long lVar12;
  
  FUN_100ebc0d0();
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_viewDidLoad_112684cd8);
  lVar12 = unaff_x20;
  func_0x000107c44ca0();
  func_0x000107c61180();
  func_0x000107c54210();
  func_0x000107c61170(lVar12);
  lVar12 = unaff_x20;
  func_0x000107c44ca0();
  func_0x000107c61180();
  lVar11 = lVar12;
  FUN_100ebac28();
  func_0x000107c59e4c(lVar12);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c5a304();
  lVar12 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ebbe90);
    (*pcVar1)();
  }
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5e2ac();
  func_0x000107c61180();
  func_0x000107c52b50(lVar12);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(puVar2);
  lVar12 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ebbe94);
    (*pcVar1)();
  }
  lVar11 = lVar12;
  FUN_100ebad14();
  func_0x000107c3d89c(lVar12);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  lVar12 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ebbe98);
    (*pcVar1)();
  }
  lVar11 = lVar12;
  FUN_100ebadcc();
  func_0x000107c3d89c(lVar12);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  lVar12 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ebbe9c);
    (*pcVar1)();
  }
  lVar11 = lVar12;
  FUN_100ebaee8();
  func_0x000107c3d89c(lVar12);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  lVar12 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ebbea0);
    (*pcVar1)();
  }
  lVar11 = lVar12;
  FUN_100ebafa8();
  func_0x000107c3d89c(lVar12);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  lVar12 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ebbea4);
    (*pcVar1)();
  }
  lVar11 = lVar12;
  FUN_100ebb174();
  func_0x000107c3d89c(lVar12);
  func_0x000107c61170(lVar12);
  func_0x000107c61170();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar11 + 0x18) = 0x21;
  *(undefined8 *)(lVar11 + 0x10) = 0x10;
  lVar12 = _DAT_112d47db0;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d47db0);
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ebbea8);
    (*pcVar1)();
  }
  lVar5 = lVar4;
  func_0x000107c4ac04();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  lVar4 = lVar5;
  func_0x000107c4acb0(lVar5);
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  uVar7 = uVar3;
  func_0x000107c40284(0x4034000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar4);
  *(undefined8 *)(lVar11 + 0x20) = uVar7;
  uVar3 = *(undefined8 *)(unaff_x20 + lVar12);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ebbeac);
    (*pcVar1)();
  }
  lVar5 = lVar4;
  func_0x000107c4ac04();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  lVar4 = lVar5;
  func_0x000107c5ce8c(lVar5);
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  uVar7 = uVar3;
  func_0x000107c40284(0xc034000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar4);
  *(undefined8 *)(lVar11 + 0x28) = uVar7;
  uVar3 = *(undefined8 *)(unaff_x20 + lVar12);
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ebbeb0);
    (*pcVar1)();
  }
  lVar5 = lVar4;
  func_0x000107c3f75c();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  uVar7 = uVar3;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar5);
  *(undefined8 *)(lVar11 + 0x30) = uVar7;
  uVar3 = *(undefined8 *)(unaff_x20 + lVar12);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar4 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ebbeb4);
    (*pcVar1)();
  }
  lVar5 = lVar4;
  func_0x000107c4ac04();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  lVar4 = lVar5;
  func_0x000107c5cbe4(lVar5);
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  uVar7 = uVar3;
  func_0x000107c40284(0x406b800000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar4);
  *(undefined8 *)(lVar11 + 0x38) = uVar7;
  lVar4 = _DAT_112d47db8;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d47db8);
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar5 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ebbeb8);
    (*pcVar1)();
  }
  lVar6 = lVar5;
  func_0x000107c3f75c();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  uVar7 = uVar3;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar6);
  *(undefined8 *)(lVar11 + 0x40) = uVar7;
  uVar7 = *(undefined8 *)(unaff_x20 + lVar4);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar8 = *(undefined8 *)(unaff_x20 + lVar12);
  func_0x000107c3ec1c(uVar8);
  func_0x000107c61180();
  uVar3 = uVar7;
  func_0x000107c40284(0x4020000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  *(undefined8 *)(lVar11 + 0x48) = uVar3;
  lVar12 = _DAT_112d47dc0;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d47dc0);
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar5 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ebbebc);
    (*pcVar1)();
  }
  lVar6 = lVar5;
  func_0x000107c3f75c();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  uVar7 = uVar3;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar6);
  *(undefined8 *)(lVar11 + 0x50) = uVar7;
  uVar7 = *(undefined8 *)(unaff_x20 + lVar12);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar8 = *(undefined8 *)(unaff_x20 + lVar4);
  func_0x000107c3ec1c(uVar8);
  func_0x000107c61180();
  uVar3 = uVar7;
  func_0x000107c40284(0x4065400000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  *(undefined8 *)(lVar11 + 0x58) = uVar3;
  lVar5 = _DAT_112d47dc8;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d47dc8);
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar6 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ebbec0);
    (*pcVar1)();
  }
  lVar9 = lVar6;
  func_0x000107c515ac();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  lVar6 = lVar9;
  func_0x000107c4acb0(lVar9);
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  uVar7 = uVar3;
  func_0x000107c40284(0x4035000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar6);
  *(undefined8 *)(lVar11 + 0x60) = uVar7;
  uVar3 = *(undefined8 *)(unaff_x20 + lVar5);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar6 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ebbec4);
    (*pcVar1)();
  }
  lVar9 = lVar6;
  func_0x000107c515ac();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  lVar6 = lVar9;
  func_0x000107c5ce8c(lVar9);
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  uVar7 = uVar3;
  func_0x000107c40284(0xc035000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar6);
  *(undefined8 *)(lVar11 + 0x68) = uVar7;
  uVar7 = *(undefined8 *)(unaff_x20 + lVar5);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar8 = *(undefined8 *)(unaff_x20 + lVar12);
  func_0x000107c3ec1c(uVar8);
  func_0x000107c61180();
  uVar3 = uVar7;
  func_0x000107c40284(0x4030000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  *(undefined8 *)(lVar11 + 0x70) = uVar3;
  uVar7 = *(undefined8 *)(unaff_x20 + lVar5);
  func_0x000107c44d9c();
  func_0x000107c61180();
  uVar3 = uVar7;
  func_0x000107c40290(0x404a000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  *(undefined8 *)(lVar11 + 0x78) = uVar3;
  lVar12 = _DAT_112d47dd0;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d47dd0);
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar6 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ebbec8);
    (*pcVar1)();
  }
  lVar9 = lVar6;
  func_0x000107c515ac();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  lVar6 = lVar9;
  func_0x000107c4acb0(lVar9);
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  uVar7 = uVar3;
  func_0x000107c40284(0x4035000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar6);
  *(undefined8 *)(lVar11 + 0x80) = uVar7;
  uVar3 = *(undefined8 *)(unaff_x20 + lVar12);
  func_0x000107c5ce8c();
  func_0x000107c61180();
  lVar6 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ebbecc);
    (*pcVar1)();
  }
  lVar9 = lVar6;
  func_0x000107c515ac();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  lVar6 = lVar9;
  func_0x000107c5ce8c(lVar9);
  func_0x000107c61180();
  func_0x000107c61170(lVar9);
  uVar7 = uVar3;
  func_0x000107c40284(0xc035000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar6);
  *(undefined8 *)(lVar11 + 0x88) = uVar7;
  uVar3 = *(undefined8 *)(unaff_x20 + lVar12);
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar6 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ebbed0);
    (*pcVar1)();
  }
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar9 = lVar6;
  func_0x000107c3f75c(lVar6);
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  uVar7 = uVar3;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar9);
  *(undefined8 *)(lVar11 + 0x90) = uVar7;
  uVar7 = *(undefined8 *)(unaff_x20 + lVar12);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar8 = *(undefined8 *)(unaff_x20 + lVar5);
  func_0x000107c3ec1c(uVar8);
  func_0x000107c61180();
  uVar3 = uVar7;
  func_0x000107c40284(0x4030000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  *(undefined8 *)(lVar11 + 0x98) = uVar3;
  uVar3 = 0;
  func_0x000100847984(0);
  lVar12 = lVar11;
  func_0x000107c5fc48(lVar11,uVar3);
  func_0x000107c61574(lVar11);
  func_0x000107c3d048(puVar2);
  func_0x000107c61170(lVar12);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar4);
  plVar10 = (long *)(unaff_x20 + _DAT_112d47d90);
  lVar11 = plVar10[3];
  func_0x0001000a8868(plVar10,lVar11);
  lVar12 = *(long *)(*plVar10 + 0x28);
  func_0x000107c61174(uVar3);
  func_0x000107c3ebf4();
  func_0x000107c61180();
  if (lVar12 != 0) {
    lVar4 = lVar12;
    func_0x000107c5da60();
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ebbed4);
      (*pcVar1)();
    }
    lVar5 = lVar4;
    func_0x000107c4d2ec();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar5 != 0) {
      lVar12 = lVar5;
      func_0x000107c5faec(lVar5);
      func_0x000107c61170(lVar5);
      goto LAB_100ebbe3c;
    }
    lVar12 = 0;
  }
  lVar11 = -0x2000000000000000;
LAB_100ebbe3c:
  func_0x000107c5fadc();
  func_0x000107c6142c(lVar11);
  func_0x000107c59c6c(uVar3);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar12);
  return;
}



/* Entry: 100ebbed4; end: 100ebbefb; -[_TtC27PhoneEmailFirstLogInFeature53PhoneEmailFirstLogInAccountConfirmationViewController viewDidLoad] */

void FUN_100ebbed4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ebb380();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ebbefc; end: 100ebbf47; -[_TtC27PhoneEmailFirstLogInFeature53PhoneEmailFirstLogInAccountConfirmationViewController didSelectDismissalActionWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ebbefc(undefined8 param_1)

{
  undefined1 uStack_21;
  
  uStack_21 = 2;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_21);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100ebbf48; end: 100ebbf4f; -[_TtC27PhoneEmailFirstLogInFeature53PhoneEmailFirstLogInAccountConfirmationViewController useDifferentAccount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ebbf48(undefined8 param_1)

{
  undefined1 uStack_21;
  
  uStack_21 = 4;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_21);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100ebbf50; end: 100ebbf57; -[_TtC27PhoneEmailFirstLogInFeature53PhoneEmailFirstLogInAccountConfirmationViewController continuePressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ebbf50(undefined8 param_1)

{
  undefined1 uStack_21;
  
  uStack_21 = 3;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_21);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100ebbf58; end: 100ebbf9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ebbf58(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 uStack_21;
  
  uStack_21 = param_3;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_21);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100ebbfa0; end: 100ebbfcb; -[_TtC27PhoneEmailFirstLogInFeature53PhoneEmailFirstLogInAccountConfirmationViewController initWithNibName:bundle:] */

void FUN_100ebbfa0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PhoneEmailFirstLogInFeature.PhoneEmailFirstLogInAccountConfirmationViewController"
                      ,0x51,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ebbfcc);
  (*pcVar1)();
}



/* Entry: 100ebbfcc; end: 100ebc027; -[_TtC27PhoneEmailFirstLogInFeature53PhoneEmailFirstLogInAccountConfirmationViewController initWithNibName:bundle:transitionType:] */

void FUN_100ebbfcc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PhoneEmailFirstLogInFeature.PhoneEmailFirstLogInAccountConfirmationViewController"
                      ,0x51,"init(nibName:bundle:transitionType:)",0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ebbff8);
  (*pcVar1)();
}



/* Entry: 100ebc028; end: 100ebc0cf; -[_TtC27PhoneEmailFirstLogInFeature53PhoneEmailFirstLogInAccountConfirmationViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100ebc074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ebc094: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ebc0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ebc098) */
/* WARNING: Removing unreachable block (ram,0x000100ebc078) */
/* WARNING: Removing unreachable block (ram,0x000100ebc0b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ebc028(long param_1)

{
  func_0x0001000834e4(param_1 + _DAT_112d47d90);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d47d98));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d47da0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d47da8));
  return;
}



/* Entry: 100ebc0d0; end: 100ebc0ef;  */

void FUN_100ebc0d0(void)

{
  func_0x000107c61168(&PTR_PTR_11279d610);
  return;
}



/* Entry: 100ebc0f0; end: 100ebc137; -[_TtC27PhoneEmailFirstLogInFeature53PhoneEmailFirstLogInAccountConfirmationViewController didToggleCheckbox:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ebc0f0(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 uStack_21;
  
  uStack_21 = param_3;
  func_0x000107c61174();
  func_0x0001002a64a8(&uStack_21);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100ebc138; end: 100ebc23f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ebc138(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112d47d98;
  uVar3 = 0x112d47e00;
  func_0x0001000285a8(0x112d47e00,&UNK_10d90edd0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  lVar1 = _DAT_112d47da0;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112d47da8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d47db0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d47db8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d47dc0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d47dc8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d47dd0) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "PhoneEmailFirstLogInFeature/PhoneEmailFirstLogInAccountConfirmationViewController.swift"
                      ,0x57,2,0x61,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100ebc240);
  (*pcVar2)();
}



/* Entry: 100ebc240; end: 100ebcc3b;  */

void FUN_100ebc240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  *(undefined8 *)(unaff_x20 + 0x50) = param_8;
  *(undefined8 *)(unaff_x20 + 0x60) = param_10;
  *(undefined8 *)(unaff_x20 + 0x58) = param_9;
  *(undefined8 *)(unaff_x20 + 0x70) = param_12;
  *(undefined8 *)(unaff_x20 + 0x68) = param_11;
  *(undefined8 *)(unaff_x20 + 0x78) = param_13;
  *(undefined8 *)(unaff_x20 + 0x80) = param_14;
  return;
}



/* Entry: 100ebcc3c; end: 100ebcce7;  */

void FUN_100ebcc3c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Entry: 100ebcce8; end: 100ebcd07;  */

void FUN_100ebcce8(void)

{
  func_0x000100ebc2ec();
  return;
}



/* Entry: 100ebcd08; end: 100ebcd0f;  */

undefined8 FUN_100ebcd08(void)

{
  return 0;
}



/* Entry: 100ebcd10; end: 100ebcec7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_100ebcd10(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long alStack_110 [5];
  long lStack_e8;
  undefined **ppuStack_e0;
  undefined8 auStack_d8 [3];
  long lStack_c0;
  undefined **ppuStack_b8;
  long *aplStack_b0 [3];
  long lStack_98;
  undefined **ppuStack_90;
  undefined8 auStack_88 [3];
  long lStack_70;
  undefined **ppuStack_68;
  
  lVar5 = *param_3;
  lVar1 = 0;
  FUN_100ec618c();
  ppuStack_68 = &PTR_DAT_110364a48;
  ppuStack_90 = &PTR_DAT_110362658;
  lVar2 = 0;
  aplStack_b0[0] = param_3;
  lStack_98 = lVar5;
  auStack_88[0] = param_2;
  lStack_70 = lVar1;
  FUN_100ec5a88();
  lVar3 = lVar2;
  func_0x000107c610f8();
  func_0x0001000c6518(auStack_88,lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar6 = (undefined8 *)((long)alStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar6);
  func_0x0001000c6518(aplStack_b0,lVar5);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar7 = (undefined8 *)((long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar7);
  auStack_d8[0] = *puVar6;
  alStack_110[2] = *puVar7;
  ppuStack_b8 = &PTR_DAT_110364a48;
  ppuStack_e0 = &PTR_DAT_110362658;
  *(undefined8 *)(lVar3 + _DAT_112d48080) = param_1;
  lStack_e8 = lVar5;
  lStack_c0 = lVar1;
  FUN_100ebcfc8(auStack_d8,lVar3 + _DAT_112d48088);
  FUN_100ebcfc8(alStack_110 + 2,lVar3 + _DAT_112d48090);
  plVar4 = alStack_110;
  alStack_110[0] = lVar3;
  alStack_110[1] = lVar2;
  func_0x000107c61154(plVar4,PTR_s_init_1125d9248);
  func_0x0001000834e4(alStack_110 + 2);
  func_0x0001000834e4(auStack_d8);
  func_0x0001000834e4(aplStack_b0);
  func_0x0001000834e4(auStack_88);
  return plVar4;
}



/* Entry: 100ebcec8; end: 100ebcfc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_100ebcec8(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  undefined8 *puVar5;
  long alStack_a0 [5];
  long lStack_78;
  undefined **ppuStack_70;
  long *aplStack_68 [3];
  long lStack_50;
  undefined **ppuStack_48;
  
  lVar4 = *param_2;
  ppuStack_48 = &PTR_DAT_110362658;
  lVar1 = 0;
  aplStack_68[0] = param_2;
  lStack_50 = lVar4;
  FUN_100ec1a54();
  lVar2 = lVar1;
  func_0x000107c610f8();
  func_0x0001000c6518(aplStack_68,lVar4);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar5 = (undefined8 *)((long)alStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar5);
  alStack_a0[2] = *puVar5;
  ppuStack_70 = &PTR_DAT_110362658;
  *(undefined8 *)(lVar2 + _DAT_112d47fe0) = param_1;
  lStack_78 = lVar4;
  FUN_100ebcfc8(alStack_a0 + 2,lVar2 + _DAT_112d47fe8);
  plVar3 = alStack_a0;
  alStack_a0[0] = lVar2;
  alStack_a0[1] = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  func_0x0001000834e4(alStack_a0 + 2);
  func_0x0001000834e4(aplStack_68);
  return plVar3;
}



/* Entry: 100ebcfc8; end: 100ebd02b;  */

long FUN_100ebcfc8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100ebd02c; end: 100ebd04b;  */

void FUN_100ebd02c(void)

{
  func_0x000107c61168(&PTR_PTR_112d47e48);
  return;
}



/* Entry: 100ebd04c; end: 100ebd0eb; -[_TtC27PhoneEmailFirstLogInFeature26PhoneEmailFirstLogInRouter COSChallengeAbandoned] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ebd04c(long param_1)

{
  code *pcVar1;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_68 = *(undefined8 *)(param_1 + _DAT_112d47fa8);
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 5;
  pcVar1 = *(code **)(**(long **)(param_1 + _DAT_112d47f30) + 0xb0);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  (*pcVar1)(&uStack_68);
  FUN_100ebd2c0(uStack_68,uStack_60,uStack_58,uStack_50,uStack_48,uStack_40,uStack_38);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100ebd0ec; end: 100ebd263; -[_TtC27PhoneEmailFirstLogInFeature26PhoneEmailFirstLogInRouter COSChallengeErrorWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ebd0ec(long param_1)

{
  code *pcVar1;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_68 = *(undefined8 *)(param_1 + _DAT_112d47fa8);
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 5;
  pcVar1 = *(code **)(**(long **)(param_1 + _DAT_112d47f30) + 0xb0);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  (*pcVar1)(&uStack_68);
  FUN_100ebd2c0(uStack_68,uStack_60,uStack_58,uStack_50,uStack_48,uStack_40,uStack_38);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100ebd264; end: 100ebd2b3; -[_TtC27PhoneEmailFirstLogInFeature26PhoneEmailFirstLogInRouter COSChallengeCompletedWithBootStrapData:] */

/* WARNING: Possible PIC construction at 0x000100ebd29c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ebd2a0) */

void FUN_100ebd264(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100ebd18c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100ebd2b4; end: 100ebd2b7; -[_TtC27PhoneEmailFirstLogInFeature26PhoneEmailFirstLogInRouter logOnCOSChallengeReceivedWithChallengeType:] */

void FUN_100ebd2b4(void)

{
  return;
}



/* Entry: 100ebd2b8; end: 100ebd2bb; -[_TtC27PhoneEmailFirstLogInFeature26PhoneEmailFirstLogInRouter logOnCOSChallengeAttemptedWithChallengeType:loggingData:] */

void FUN_100ebd2b8(void)

{
  return;
}



/* Entry: 100ebd2bc; end: 100ebd2bf; -[_TtC27PhoneEmailFirstLogInFeature26PhoneEmailFirstLogInRouter logOnCOSChallengeResultedWithChallengeType:grpcStatusCode:protoStatusCode:challengeStatusCode:loggingData:] */

void FUN_100ebd2bc(void)

{
  return;
}



/* Entry: 100ebd2c0; end: 100ebd38b;  */

/* WARNING: Possible PIC construction at 0x000100ebd374: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ebd330: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ebd378) */
/* WARNING: Removing unreachable block (ram,0x000100ebd334) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */

void FUN_100ebd2c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,byte param_7)

{
  if (param_7 < 3) {
    if ((param_7 != 0) && (param_7 != 1)) {
      if (param_7 != 2) {
        return;
      }
      func_0x000107c61170();
      func_0x00010006c090(param_2,param_3);
      param_1 = param_6;
    }
  }
  else if (param_7 < 5) {
    if ((param_7 != 3) && (param_7 != 4)) {
      return;
    }
  }
  else if ((param_7 != 5) && (param_7 != 6)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ebd38c; end: 100ebd50f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ebd38c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  code *pcVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100672b50(param_1,&uStack_80);
  if (lStack_68 == 0) {
    func_0x00010006e7f4(&uStack_80);
  }
  else {
    uVar1 = 0;
    FUN_100ebd6f0(0);
    puVar2 = &uStack_48;
    func_0x000107c6147c(puVar2,&uStack_80,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if (((ulong)puVar2 & 1) != 0) {
      lVar4 = *(long *)(unaff_x20 + _DAT_112d47f40);
      lVar3 = lVar4;
      func_0x000107c5194c();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c61170();
        func_0x000107c4ffe8(lVar4);
        func_0x000107c61180();
        func_0x000107c615e8();
      }
      lVar4 = *(long *)(unaff_x20 + _DAT_112d47f48);
      lVar3 = lVar4;
      func_0x000107c5194c();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c61170();
        func_0x000107c4ffe8(lVar4);
        func_0x000107c61180();
        func_0x000107c615e8();
      }
      uStack_80 = uStack_48;
      uStack_70 = 0;
      uStack_78 = 0;
      uStack_60 = 0;
      lStack_68 = 0;
      uStack_58 = 0;
      uStack_50 = 1;
      pcVar5 = *(code **)(**(long **)(unaff_x20 + _DAT_112d47f30) + 0xb0);
      uVar1 = uStack_48;
      func_0x000107c61174(uStack_48);
      (*pcVar5)(&uStack_80);
      func_0x000107c61170(uVar1);
      FUN_100ebd2c0(uStack_80,uStack_78,uStack_70,lStack_68,uStack_60,uStack_58,uStack_50);
    }
  }
  func_0x000107c4ffe8(*(undefined8 *)(unaff_x20 + _DAT_112d47f50));
  func_0x000107c61180();
  func_0x000107c615e8();
  return;
}



/* Entry: 100ebd510; end: 100ebd587; -[_TtC27PhoneEmailFirstLogInFeature26PhoneEmailFirstLogInRouter codeVerificationFinished:] */

void FUN_100ebd510(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_100ebd38c(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return;
}



/* Entry: 100ebd588; end: 100ebd603; -[_TtC27PhoneEmailFirstLogInFeature26PhoneEmailFirstLogInRouter codeVerificationExited] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ebd588(long param_1)

{
  undefined8 uVar1;
  
  func_0x0001000a8868(param_1 + _DAT_112d47f90,*(undefined8 *)(param_1 + _DAT_112d47f90 + 0x18));
  func_0x000107c61174();
  FUN_100eba534(0xe1,1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d47f50);
  func_0x000107c4ffe8(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 100ebd604; end: 100ebd653; -[_TtC27PhoneEmailFirstLogInFeature26PhoneEmailFirstLogInRouter codeVerificationExitedWithUnretryableError] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ebd604(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112d47f50);
  func_0x000107c61174();
  func_0x000107c4ffe8(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 100ebd654; end: 100ebd6e7; -[_TtC27PhoneEmailFirstLogInFeature26PhoneEmailFirstLogInRouter codeVerificationExitedToUsernamePasswordPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ebd654(long param_1)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_40 = 5;
  pcVar1 = *(code **)(**(long **)(param_1 + _DAT_112d47f30) + 0xb0);
  func_0x000107c61174();
  (*pcVar1)(&uStack_70);
  func_0x0001000a8868(param_1 + _DAT_112d47f90,*(undefined8 *)(param_1 + _DAT_112d47f90 + 0x18));
  FUN_100eba534(0xe1,8);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100ebd6e8; end: 100ebd6ef; -[_TtC27PhoneEmailFirstLogInFeature26PhoneEmailFirstLogInRouter codeVerificationCoolDownInterval] */

undefined8 FUN_100ebd6e8(void)

{
  return 0x403e000000000000;
}



/* Entry: 100ebd6f0; end: 100ebd733;  */

void FUN_100ebd6f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d47f18 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126af360;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d47f18 = puVar1;
  return;
}



/* Entry: 100ebd734; end: 100ebdb3b;  */

void FUN_100ebd734(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined8 unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puVar2;
  
  lVar3 = param_1;
  func_0x000107c4248c();
  func_0x000107c61180();
  uVar13 = param_2;
  if (lVar3 == 0) {
    func_0x000107c5faec();
    uVar13 = param_2;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  puVar2 = PTR_PTR_1126af038;
  func_0x000107c61168();
  iVar1 = (int)puVar2;
  func_0x000107c5dbe4();
  func_0x000107c61170(lVar3);
  lVar3 = param_1;
  func_0x000107c4248c();
  func_0x000107c61180();
  if (iVar1 == 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
      func_0x000107c5faec(0);
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar13);
    }
    puVar2 = PTR_PTR_1126af238;
    func_0x000107c61168();
    func_0x000107c5db38();
  }
  else {
    if (lVar3 == 0) {
      lVar3 = 0;
      func_0x000107c5faec(0);
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar13);
    }
    puVar2 = PTR_PTR_1126af238;
    func_0x000107c61168();
    func_0x000107c424a4();
  }
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  func_0x000107c61174();
  func_0x000107c5064c();
  func_0x000107c61180();
  puVar4 = &UNK_1103628f8;
  func_0x000107c613fc(&UNK_1103628f8,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = unaff_x20;
  *(undefined **)(puVar4 + 0x18) = puVar2;
  puVar5 = &UNK_110362920;
  func_0x000107c613fc(&UNK_110362920,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_100ebdfd0;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar11 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = (code *)0x100ebdfd8;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100ec4088;
  puStack_88 = &UNK_110362938;
  ppuVar6 = &puStack_a0;
  puStack_78 = puVar5;
  func_0x000107c60bc4();
  puVar5 = puStack_78;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61574(puVar5);
  puVar5 = &UNK_110362970;
  func_0x000107c613fc(&UNK_110362970,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = unaff_x20;
  *(undefined **)(puVar5 + 0x18) = puVar2;
  puVar7 = &UNK_110362998;
  func_0x000107c613fc(&UNK_110362998,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x100ebdffc;
  *(undefined **)(puVar7 + 0x18) = puVar5;
  pcStack_80 = (code *)0x100ebe004;
  puStack_a0 = puVar11;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_100ebe090;
  puStack_88 = &UNK_1103629b0;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar7 = puStack_78;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61574(puVar7);
  puVar7 = &UNK_1103629e8;
  func_0x000107c613fc(&UNK_1103629e8,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = unaff_x20;
  *(undefined **)(puVar7 + 0x18) = puVar2;
  puVar9 = &UNK_110362a10;
  func_0x000107c613fc(&UNK_110362a10,0x20,7);
  *(code **)(puVar9 + 0x10) = FUN_100ebe00c;
  *(undefined **)(puVar9 + 0x18) = puVar7;
  pcStack_80 = FUN_100ebe02c;
  puStack_a0 = puVar11;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_10006eb60;
  puStack_88 = &UNK_110362a28;
  ppuVar10 = &puStack_a0;
  puStack_78 = puVar9;
  func_0x000107c60bc4(ppuVar10);
  puVar9 = puStack_78;
  func_0x000107c61174();
  func_0x000107c61574(puVar9);
  puVar9 = &UNK_110362a60;
  func_0x000107c613fc(&UNK_110362a60,0x20,7);
  *(undefined8 *)(puVar9 + 0x10) = unaff_x20;
  *(undefined **)(puVar9 + 0x18) = puVar2;
  puVar11 = &UNK_110362a88;
  func_0x000107c613fc(&UNK_110362a88,0x20,7);
  *(code **)(puVar11 + 0x10) = FUN_100ebe034;
  *(undefined **)(puVar11 + 0x18) = puVar9;
  pcStack_80 = (code *)0x100ebe06c;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_10006eb60;
  puStack_88 = &UNK_110362aa0;
  ppuVar12 = &puStack_a0;
  puStack_78 = puVar11;
  func_0x000107c60bc4(ppuVar12);
  puVar11 = puStack_78;
  func_0x000107c61174(unaff_x20);
  func_0x000107c61574(puVar11);
  func_0x000107c4c5b8(param_1);
  func_0x000107c61170(puVar2);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar4);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100ebdb3c; end: 100ebdbe7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ebdb3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  uStack_48 = 2;
  pcVar1 = *(code **)(**(long **)(param_6 + _DAT_112d47f30) + 0xb0);
  uStack_78 = param_1;
  uStack_70 = param_2;
  uStack_68 = param_3;
  uStack_60 = param_4;
  uStack_58 = param_5;
  uStack_50 = param_7;
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_1);
  func_0x00010006c00c(param_2,param_3);
  func_0x000107c61434(param_5);
  (*pcVar1)(&uStack_78);
  FUN_100ebd2c0(uStack_78,uStack_70,uStack_68,uStack_60,uStack_58,uStack_50,uStack_48);
  return;
}



/* Entry: 100ebdbe8; end: 100ebdc6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ebdbe8(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  pcVar1 = *(code **)(**(long **)(param_2 + _DAT_112d47f30) + 0xb0);
  uStack_68 = param_1;
  uStack_60 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  (*pcVar1)(&uStack_68);
  FUN_100ebd2c0(uStack_68,uStack_60,uStack_58,uStack_50,uStack_48,uStack_40,uStack_38);
  return;
}



/* Entry: 100ebdc6c; end: 100ebdd23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ebdc6c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  code *pcVar1;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  func_0x0001000a8868(param_1 + _DAT_112d47f90,*(undefined8 *)(param_1 + _DAT_112d47f90 + 0x18));
  FUN_100eba534(0xdf,param_3);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  pcVar1 = *(code **)(**(long **)(param_1 + _DAT_112d47f30) + 0xb0);
  uStack_78 = param_2;
  uStack_48 = param_4;
  func_0x000107c61174(param_2);
  (*pcVar1)(&uStack_78);
  FUN_100ebd2c0(uStack_78,uStack_70,uStack_68,uStack_60,uStack_58,uStack_50,uStack_48);
  return;
}



/* Entry: 100ebdd24; end: 100ebdd73; -[_TtC27PhoneEmailFirstLogInFeature26PhoneEmailFirstLogInRouter emailEntryFinished:] */

/* WARNING: Possible PIC construction at 0x000100ebdd5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ebdd60) */

void FUN_100ebdd24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_100ebd734(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100ebdd74; end: 100ebdd77; -[_TtC27PhoneEmailFirstLogInFeature26PhoneEmailFirstLogInRouter emailEntryExited] */

void FUN_100ebdd74(void)

{
  return;
}



/* Entry: 100ebdd78; end: 100ebde1b; -[_TtC27PhoneEmailFirstLogInFeature26PhoneEmailFirstLogInRouter emailEntryStartedOAuthLoginWithOAuthType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ebdd78(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_40 = 0;
  uStack_38 = 6;
  pcVar1 = *(code **)(**(long **)(param_1 + _DAT_112d47f30) + 0xb0);
  uStack_68 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  (*pcVar1)(&uStack_68);
  func_0x000107c61170(param_3);
  FUN_100ebd2c0(uStack_68,uStack_60,uStack_58,uStack_50,uStack_48,uStack_40,uStack_38);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 100ebde1c; end: 100ebdec3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ebde1c(void)

{
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  func_0x000107c4ffe8(*(undefined8 *)(unaff_x20 + _DAT_112d47f48));
  func_0x000107c61180();
  func_0x000107c615e8();
  uStack_58 = 2;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_28 = 7;
  (**(code **)(**(long **)(unaff_x20 + _DAT_112d47f30) + 0xb0))(&uStack_58);
  func_0x0001000a8868(unaff_x20 + _DAT_112d47f90,*(undefined8 *)(unaff_x20 + _DAT_112d47f90 + 0x18))
  ;
  FUN_100eba534(0xdf,6);
  return;
}



/* Entry: 100ebdec4; end: 100ebdeeb; -[_TtC27PhoneEmailFirstLogInFeature26PhoneEmailFirstLogInRouter emailEntrySwitchButtonTapped] */

void FUN_100ebdec4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ebde1c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ebdeec; end: 100ebdf3f; -[_TtC27PhoneEmailFirstLogInFeature26PhoneEmailFirstLogInRouter emailEntryUpdatedEmail] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ebdeec(long param_1)

{
  func_0x0001000a8868(param_1 + _DAT_112d47f90,*(undefined8 *)(param_1 + _DAT_112d47f90 + 0x18));
  func_0x000107c61174(param_1);
  FUN_100eba534(0xdf,3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ebdf40; end: 100ebdf93; -[_TtC27PhoneEmailFirstLogInFeature26PhoneEmailFirstLogInRouter emailEntryExitedWithUnretryableError:] */

void FUN_100ebdf40(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
  }
  else {
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  func_0x00010006e7f4(&uStack_40);
  return;
}



/* Entry: 100ebdf94; end: 100ebdfcf; -[_TtC27PhoneEmailFirstLogInFeature26PhoneEmailFirstLogInRouter emailEntrySkipLocalEmailValidation:] */

bool FUN_100ebdf94(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c5fb5c();
  func_0x000107c6142c(param_2);
  return 2 < param_3;
}



/* Entry: 100ebdfd0; end: 100ebe00b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ebdfd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  code *pcVar1;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  uStack_50 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_48 = 2;
  pcVar1 = *(code **)(**(long **)(*(long *)(unaff_x20 + 0x10) + _DAT_112d47f30) + 0xb0);
  uStack_78 = param_1;
  uStack_70 = param_2;
  uStack_68 = param_3;
  uStack_60 = param_4;
  uStack_58 = param_5;
  func_0x000107c61174(uStack_50);
  func_0x000107c61174(param_1);
  func_0x00010006c00c(param_2,param_3);
  func_0x000107c61434(param_5);
  (*pcVar1)(&uStack_78);
  FUN_100ebd2c0(uStack_78,uStack_70,uStack_68,uStack_60,uStack_58,uStack_50,uStack_48);
  return;
}



/* Entry: 100ebe00c; end: 100ebe02b;  */

void FUN_100ebe00c(void)

{
  long unaff_x20;
  
  FUN_100ebdc6c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),9,4);
  return;
}



/* Entry: 100ebe02c; end: 100ebe033;  */

void FUN_100ebe02c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 100ebe034; end: 100ebe053;  */

void FUN_100ebe034(void)

{
  long unaff_x20;
  
  FUN_100ebdc6c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),8,5);
  return;
}



/* Entry: 100ebe054; end: 100ebe06f;  */

void FUN_100ebe054(long param_1,long param_2)

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



/* Entry: 100ebe070; end: 100ebe08f;  */

void FUN_100ebe070(undefined8 param_1,code *param_2)

{
  (*param_2)();
  return;
}



/* Entry: 100ebe090; end: 100ebe0c7;  */

void FUN_100ebe090(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100ebe0c8; end: 100ebe56f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ebe0c8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  long unaff_x20;
  undefined *puVar16;
  code *pcVar17;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 uStack_80;
  
  func_0x0001000a8868(unaff_x20 + _DAT_112d47f88,*(undefined8 *)(unaff_x20 + _DAT_112d47f88 + 0x18))
  ;
  lVar2 = param_1;
  func_0x000107c4e6c0(param_1);
  func_0x000107c61180();
  lVar3 = lVar2;
  FUN_100ec5ed8();
  func_0x000107c61170(lVar2);
  lVar4 = param_1;
  func_0x000107c4e6c0();
  func_0x000107c61180();
  uVar1 = *(undefined8 *)(lVar4 + _DAT_1130937d8);
  lVar2 = ((undefined8 *)(lVar4 + _DAT_1130937d8))[1];
  func_0x000107c61434(lVar2);
  func_0x000107c61170(lVar4);
  uVar6 = 0;
  if (lVar2 != 0) {
    uVar6 = uVar1;
  }
  lVar4 = -0x2000000000000000;
  if (lVar2 != 0) {
    lVar4 = lVar2;
  }
  puVar5 = PTR_PTR_1126af240;
  func_0x000107c610f8();
  func_0x000107c5fadc(uVar6,lVar4);
  func_0x000107c6142c(lVar4);
  func_0x000107c46210();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar6);
  if (puVar5 == (undefined *)0x0) {
    func_0x0001000a8868(unaff_x20 + _DAT_112d47f90,
                        *(undefined8 *)(unaff_x20 + _DAT_112d47f90 + 0x18));
    FUN_100eba534(0xde,8);
    puStack_98 = (undefined *)0x0;
    pcStack_a0 = (code *)0x0;
    puStack_88 = (undefined *)0x0;
    pcStack_90 = (code *)0x0;
    uStack_a8 = 0;
    puStack_b0 = (undefined *)0x0;
    uStack_80 = 5;
    (**(code **)(**(long **)(unaff_x20 + _DAT_112d47f30) + 0xb0))(&puStack_b0);
    pcVar17 = (code *)0x0;
    puVar16 = (undefined *)0x0;
  }
  else {
    puVar7 = PTR_PTR_1126af238;
    func_0x000107c61168();
    func_0x000107c4e6cc();
    func_0x000107c61180();
    func_0x000107c5064c();
    func_0x000107c61180();
    puVar8 = &UNK_110362ad8;
    func_0x000107c613fc(&UNK_110362ad8,0x20,7);
    *(long *)(puVar8 + 0x10) = unaff_x20;
    *(undefined **)(puVar8 + 0x18) = puVar7;
    puVar16 = &UNK_110362b00;
    func_0x000107c613fc(&UNK_110362b00,0x20,7);
    *(code **)(puVar16 + 0x10) = FUN_100ebe91c;
    *(undefined **)(puVar16 + 0x18) = puVar8;
    puVar14 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_90 = (code *)0x100ebe924;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    pcStack_a0 = FUN_100ec4088;
    puStack_98 = &UNK_110362b18;
    ppuVar9 = &puStack_b0;
    puStack_88 = puVar16;
    func_0x000107c60bc4();
    puVar16 = puStack_88;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61574(puVar16);
    puVar10 = &UNK_110362b50;
    func_0x000107c613fc(&UNK_110362b50,0x20,7);
    *(long *)(puVar10 + 0x10) = unaff_x20;
    *(undefined **)(puVar10 + 0x18) = puVar7;
    puVar16 = &UNK_110362b78;
    func_0x000107c613fc(&UNK_110362b78,0x20,7);
    *(undefined8 *)(puVar16 + 0x10) = 0x100ebe948;
    *(undefined **)(puVar16 + 0x18) = puVar10;
    pcStack_90 = FUN_100ebe950;
    puStack_b0 = puVar14;
    uStack_a8 = 0x42000000;
    pcStack_a0 = FUN_100ebe090;
    puStack_98 = &UNK_110362b90;
    ppuVar11 = &puStack_b0;
    puStack_88 = puVar16;
    func_0x000107c60bc4(ppuVar11);
    puVar16 = puStack_88;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61574(puVar16);
    puVar12 = &UNK_110362bc8;
    func_0x000107c613fc(&UNK_110362bc8,0x20,7);
    *(long *)(puVar12 + 0x10) = unaff_x20;
    *(undefined **)(puVar12 + 0x18) = puVar7;
    puVar16 = &UNK_110362bf0;
    func_0x000107c613fc(&UNK_110362bf0,0x20,7);
    *(code **)(puVar16 + 0x10) = FUN_100ebe970;
    *(undefined **)(puVar16 + 0x18) = puVar12;
    pcStack_90 = FUN_100ebe990;
    puStack_b0 = puVar14;
    uStack_a8 = 0x42000000;
    pcStack_a0 = (code *)&UNK_10006eb60;
    puStack_98 = &UNK_110362c08;
    ppuVar13 = &puStack_b0;
    puStack_88 = puVar16;
    func_0x000107c60bc4(ppuVar13);
    puVar16 = puStack_88;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61574(puVar16);
    puVar16 = &UNK_110362c40;
    func_0x000107c613fc(&UNK_110362c40,0x20,7);
    *(long *)(puVar16 + 0x10) = unaff_x20;
    *(undefined **)(puVar16 + 0x18) = puVar7;
    puVar14 = &UNK_110362c68;
    func_0x000107c613fc(&UNK_110362c68,0x20,7);
    pcVar17 = FUN_100ebe9b0;
    *(code **)(puVar14 + 0x10) = FUN_100ebe9b0;
    *(undefined **)(puVar14 + 0x18) = puVar16;
    pcStack_90 = (code *)0x100ebe9e8;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x42000000;
    pcStack_a0 = (code *)&UNK_10006eb60;
    puStack_98 = &UNK_110362c80;
    ppuVar15 = &puStack_b0;
    puStack_88 = puVar14;
    func_0x000107c60bc4(ppuVar15);
    puVar14 = puStack_88;
    func_0x000107c61174(unaff_x20);
    func_0x000107c61174(puVar7);
    func_0x000107c61574(puVar14);
    func_0x000107c4c5b8(param_1);
    func_0x000107c60bd0(ppuVar15);
    func_0x000107c60bd0(ppuVar13);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c61574(puVar12);
    func_0x000107c61574(puVar10);
    func_0x000107c61574(puVar8);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(param_1);
  }
  func_0x00010058d43c(pcVar17,puVar16);
  return;
}



/* Entry: 100ebe570; end: 100ebe617;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ebe570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  code *pcVar1;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  uStack_48 = 2;
  pcVar1 = *(code **)(**(long **)(param_6 + _DAT_112d47f30) + 0xb0);
  uStack_78 = param_1;
  uStack_70 = param_2;
  uStack_68 = param_3;
  uStack_60 = param_4;
  uStack_58 = param_5;
  uStack_50 = param_7;
  func_0x000107c61174();
  func_0x00010006c00c(param_2,param_3);
  func_0x000107c61434(param_5);
  func_0x000107c61174(param_7);
  (*pcVar1)(&uStack_78);
  FUN_100ebd2c0(uStack_78,uStack_70,uStack_68,uStack_60,uStack_58,uStack_50,uStack_48);
  return;
}



/* Entry: 100ebe618; end: 100ebe697;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ebe618(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_50 = 0;
  uStack_58 = 0;
  uStack_40 = 0;
  uStack_48 = 0;
  uStack_38 = 0;
  pcVar1 = *(code **)(**(long **)(param_2 + _DAT_112d47f30) + 0xb0);
  uStack_68 = param_1;
  uStack_60 = param_3;
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  (*pcVar1)(&uStack_68);
  FUN_100ebd2c0(uStack_68,uStack_60,uStack_58,uStack_50,uStack_48,uStack_40,uStack_38);
  return;
}



/* Entry: 100ebe698; end: 100ebe74f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ebe698(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  code *pcVar1;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  func_0x0001000a8868(param_1 + _DAT_112d47f90,*(undefined8 *)(param_1 + _DAT_112d47f90 + 0x18));
  FUN_100eba534(0xde,param_3);
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  pcVar1 = *(code **)(**(long **)(param_1 + _DAT_112d47f30) + 0xb0);
  uStack_78 = param_2;
  uStack_48 = param_4;
  func_0x000107c61174(param_2);
  (*pcVar1)(&uStack_78);
  FUN_100ebd2c0(uStack_78,uStack_70,uStack_68,uStack_60,uStack_58,uStack_50,uStack_48);
  return;
}



/* Entry: 100ebe750; end: 100ebe79f; -[_TtC27PhoneEmailFirstLogInFeature26PhoneEmailFirstLogInRouter phoneEntryFinishedWithSuccess:] */

/* WARNING: Possible PIC construction at 0x000100ebe788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ebe78c) */

void FUN_100ebe750(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_100ebe0c8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100ebe7a0; end: 100ebe7a3; -[_TtC27PhoneEmailFirstLogInFeature26PhoneEmailFirstLogInRouter phoneEntryExited] */

void FUN_100ebe7a0(void)

{
  return;
}



/* Entry: 100ebe7a4; end: 100ebe84b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ebe7a4(void)

{
  long unaff_x20;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  func_0x0001000a8868(unaff_x20 + _DAT_112d47f90,*(undefined8 *)(unaff_x20 + _DAT_112d47f90 + 0x18))
  ;
  FUN_100eba534(0xde,6);
  func_0x000107c4ffe8(*(undefined8 *)(unaff_x20 + _DAT_112d47f40));
  func_0x000107c61180();
  func_0x000107c615e8();
  uStack_58 = 3;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_30 = 0;
  uStack_28 = 7;
  (**(code **)(**(long **)(unaff_x20 + _DAT_112d47f30) + 0xb0))(&uStack_58);
  return;
}



/* Entry: 100ebe84c; end: 100ebe873; -[_TtC27PhoneEmailFirstLogInFeature26PhoneEmailFirstLogInRouter phoneEntrySwitchButtonTapped] */

void FUN_100ebe84c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100ebe7a4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ebe874; end: 100ebe8c7; -[_TtC27PhoneEmailFirstLogInFeature26PhoneEmailFirstLogInRouter phoneEntryUpdatedPhone] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ebe874(long param_1)

{
  func_0x0001000a8868(param_1 + _DAT_112d47f90,*(undefined8 *)(param_1 + _DAT_112d47f90 + 0x18));
  func_0x000107c61174(param_1);
  FUN_100eba534(0xde,3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ebe8c8; end: 100ebe91b; -[_TtC27PhoneEmailFirstLogInFeature26PhoneEmailFirstLogInRouter phoneEntryExitedWithUnretryableError:] */

void FUN_100ebe8c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
  }
  else {
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  func_0x00010006e7f4(&uStack_40);
  return;
}



/* Entry: 100ebe91c; end: 100ebe94f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ebe91c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long unaff_x20;
  code *pcVar2;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_48 = 2;
  pcVar2 = *(code **)(**(long **)(*(long *)(unaff_x20 + 0x10) + _DAT_112d47f30) + 0xb0);
  uStack_78 = param_1;
  uStack_70 = param_2;
  uStack_68 = param_3;
  uStack_60 = param_4;
  uStack_58 = param_5;
  uStack_50 = uVar1;
  func_0x000107c61174();
  func_0x00010006c00c(param_2,param_3);
  func_0x000107c61434(param_5);
  func_0x000107c61174(uVar1);
  (*pcVar2)(&uStack_78);
  FUN_100ebd2c0(uStack_78,uStack_70,uStack_68,uStack_60,uStack_58,uStack_50,uStack_48);
  return;
}



/* Entry: 100ebe950; end: 100ebe96f;  */

void FUN_100ebe950(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100ebe970; end: 100ebe98f;  */

void FUN_100ebe970(void)

{
  long unaff_x20;
  
  FUN_100ebe698(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),9,4);
  return;
}



/* Entry: 100ebe990; end: 100ebe9af;  */

void FUN_100ebe990(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100ebe9b0; end: 100ebe9cf;  */

void FUN_100ebe9b0(void)

{
  long unaff_x20;
  
  FUN_100ebe698(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),8,5);
  return;
}



/* Entry: 100ebe9d0; end: 100ebe9eb;  */

void FUN_100ebe9d0(long param_1,long param_2)

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



/* Entry: 100ebe9ec; end: 100ebeb7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ebe9ec(undefined8 param_1)

{
  code *pcVar1;
  char *pcVar2;
  long *plVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long *plVar8;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  plVar8 = *(long **)(unaff_x20 + _DAT_112d47f30);
  (**(code **)(*plVar8 + 0x98))();
  pcVar1 = FUN_100ebeb80;
  func_0x0001000bfde0(FUN_100ebeb80,0,&UNK_110364b58);
  func_0x000107c61574(param_1);
  pcVar2 = "begin()";
  func_0x0001000c10c0();
  func_0x000107c61180();
  plVar3 = (long *)pcVar2;
  func_0x000100471e0c();
  func_0x000107c61574(pcVar1);
  func_0x000107c615e8(pcVar2);
  puVar4 = &UNK_110362e08;
  func_0x000107c613fc(&UNK_110362e08,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  pcVar1 = FUN_100ec00b0;
  puVar7 = puVar4;
  (**(code **)(*plVar3 + 0x60))(FUN_100ec00b0);
  func_0x000107c61574(plVar3);
  func_0x000107c61574(puVar4);
  pcVar5 = pcVar1;
  func_0x000107c614f0(pcVar1);
  (**(code **)(puVar7 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112d47f38),pcVar5,puVar7);
  func_0x000107c615e8(pcVar1);
  func_0x0001000285a8(0x112d47fd8,&UNK_10d90eff0);
  uStack_88 = 1;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_60 = 0;
  uStack_58 = 7;
  puVar6 = &uStack_88;
  func_0x000100854cb0(puVar6);
  (**(code **)(*plVar8 + 0xa8))();
  func_0x000107c61574(puVar6);
  return;
}



/* Entry: 100ebeb80; end: 100ebebc3;  */

void FUN_100ebeb80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  FUN_100ec00b8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar7);
  return;
}



/* Entry: 100ebebc4; end: 100ebee27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ebebc4(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined1 auStack_68 [24];
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  uVar8 = param_1[2];
  uVar5 = (uint)(uVar8 >> 0x3c) & 3;
  if (uVar5 < 2) {
    if (uVar5 == 0) {
      func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
      param_2 = param_2 + 0x10;
      func_0x000107c61618();
      if (param_2 == 0) {
        return;
      }
      FUN_100ebefbc(lVar2,lVar3);
    }
    else {
      func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
      param_2 = param_2 + 0x10;
      func_0x000107c61618();
      if (param_2 == 0) {
        return;
      }
      func_0x000100ebf85c(lVar2,lVar3);
    }
  }
  else {
    lVar4 = param_1[3];
    lVar1 = param_1[4];
    lVar6 = param_1[5];
    if (uVar5 == 2) {
      func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
      param_2 = param_2 + 0x10;
      func_0x000107c61618();
      if (param_2 == 0) {
        return;
      }
      uVar7 = *(undefined8 *)(param_2 + _DAT_112d47fa8);
      *(long *)(param_2 + _DAT_112d47fa8) = lVar6;
      func_0x000107c61434(lVar1);
      func_0x000107c61174(lVar6);
      func_0x000107c61170(uVar7);
      lVar2 = *(long *)(param_2 + _DAT_112d47f98);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar2 != 0) {
        func_0x000107c5ee20(lVar3,uVar8 & 0xcfffffffffffffff);
        func_0x000107c5fadc(lVar4,lVar1);
        func_0x000107c3dd48(lVar2);
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(param_2);
        func_0x000107c6142c(lVar1);
        return;
      }
      func_0x000107c6142c(lVar1);
    }
    else if (((lVar6 == 0 && uVar8 == 0x3000000000000000) && lVar2 == 1) &&
             ((lVar4 == 0 && lVar3 == 0) && lVar1 == 0)) {
      func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
      param_2 = param_2 + 0x10;
      func_0x000107c61618();
      if (param_2 == 0) {
        return;
      }
      FUN_100ebee28();
    }
    else {
      if (lVar6 != 0) {
        return;
      }
      if (uVar8 != 0x3000000000000000) {
        return;
      }
      if (lVar2 != 2) {
        return;
      }
      if ((lVar4 != 0 || lVar3 != 0) || lVar1 != 0) {
        return;
      }
      func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
      param_2 = param_2 + 0x10;
      func_0x000107c61618();
      if (param_2 == 0) {
        return;
      }
      func_0x000100ebfbdc();
    }
  }
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100ebee28; end: 100ebefbb;  */

/* WARNING: Possible PIC construction at 0x000100ebee78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ebeec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ebeedc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ebef94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ebeec8) */
/* WARNING: Removing unreachable block (ram,0x000100ebee7c) */
/* WARNING: Removing unreachable block (ram,0x000100ebef98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ebee28(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112d47f70);
  if (lVar4 == 0) {
    uVar3 = 0;
    func_0x000104872184(0);
    func_0x000107c610f8();
    lVar4 = 0;
    func_0x000104871870(0,0,0,0,uVar3);
    func_0x000107c610f8(PTR_PTR_1126af108);
    func_0x000107c453e4();
    func_0x000107c3e2c0(*(undefined8 *)(unaff_x20 + _DAT_112d47f28));
    func_0x000107c610f8(PTR_PTR_1126afb20);
    func_0x000107c49044();
    func_0x000107c52918();
    func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112d47f40));
  }
  else {
    lVar2 = lVar4;
    func_0x000107c4d028();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c40860();
      func_0x000107c61180();
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100ebefbc);
        (*pcVar1)();
      }
      func_0x000107c4088c();
      func_0x000107c61180();
    }
    else {
      func_0x000107c5faec();
      lVar4 = lVar2;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 100ebefbc; end: 100ebf673;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ebefbc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined *puVar14;
  long lVar15;
  ulong uVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long unaff_x20;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *apuStack_1e0 [4];
  long lStack_1c0;
  undefined8 *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  long lStack_188;
  long lStack_180;
  undefined8 auStack_178 [3];
  long lStack_160;
  undefined **ppuStack_158;
  undefined8 auStack_150 [3];
  long lStack_138;
  undefined **ppuStack_130;
  undefined8 auStack_128 [3];
  long lStack_110;
  undefined **ppuStack_108;
  undefined8 auStack_100 [3];
  long lStack_e8;
  undefined **ppuStack_e0;
  undefined1 auStack_d8 [24];
  long lStack_c0;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long alStack_80 [2];
  
  puVar14 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = (undefined *)0x0;
  alStack_80[0] = 0;
  pcStack_90 = FUN_100ebf674;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  pcStack_a0 = FUN_100de6bdc;
  puStack_98 = &UNK_110362ce0;
  ppuVar3 = &puStack_b0;
  uStack_1a0 = param_1;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c61574(puStack_88);
  puVar4 = &UNK_110362d18;
  func_0x000107c613fc(&UNK_110362d18,0x18,7);
  *(long **)(puVar4 + 0x10) = alStack_80;
  puVar5 = &UNK_110362d40;
  func_0x000107c613fc(&UNK_110362d40,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0x100ec004c;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  pcStack_90 = (code *)0x100ec0054;
  puStack_b0 = puVar14;
  uStack_a8 = 0x42000000;
  pcStack_a0 = FUN_100de6bdc;
  puStack_98 = &UNK_110362d58;
  ppuVar6 = &puStack_b0;
  puStack_190 = puVar4;
  puStack_88 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar4 = puStack_88;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar4);
  puVar4 = &UNK_110362d90;
  func_0x000107c613fc(&UNK_110362d90,0x20,7);
  *(long *)(puVar4 + 0x10) = unaff_x20;
  *(long **)(puVar4 + 0x18) = alStack_80;
  puVar7 = &UNK_110362db8;
  func_0x000107c613fc(&UNK_110362db8,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x100ec005c;
  *(undefined **)(puVar7 + 0x18) = puVar4;
  pcStack_90 = (code *)0x100ec0064;
  puStack_b0 = puVar14;
  uStack_a8 = 0x42000000;
  pcStack_a0 = FUN_100ec61cc;
  puStack_98 = &UNK_110362dd0;
  ppuVar8 = &puStack_b0;
  puStack_198 = puVar4;
  puStack_88 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar4 = puStack_88;
  func_0x000107c61174();
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar4);
  func_0x000107c4c7a4(param_2);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c60bd0(ppuVar3);
  lVar15 = alStack_80[0];
  if (alStack_80[0] == 0) {
    lVar15 = 0;
  }
  else {
    puVar4 = PTR_PTR_1126aead8;
    func_0x000107c610f8();
    func_0x000107c61174();
    lStack_1c0 = lVar15;
    func_0x000107c4807c();
    apuStack_1e0[3] = *(undefined8 **)(unaff_x20 + _DAT_112d47f60);
    puStack_1a8 = puVar4;
    FUN_100ec006c(unaff_x20 + _DAT_112d47f88,&puStack_b0);
    FUN_100ec006c(unaff_x20 + _DAT_112d47f90,auStack_d8);
    puVar4 = puStack_98;
    func_0x0001000c6518(&puStack_b0,puStack_98);
    puStack_1b0 = (undefined1 *)apuStack_1e0;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
    puVar19 = (undefined8 *)((long)apuStack_1e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(extraout_x12 + 0x10))(puVar19);
    func_0x0001000c6518(auStack_d8,lStack_c0);
    puStack_1b8 = puVar19;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lStack_c0 + -8) + 0x40));
    puVar20 = (undefined8 *)((long)puVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(extraout_x12_00 + 0x10))(puVar20);
    uVar17 = *puVar19;
    uVar18 = *puVar20;
    lVar9 = 0;
    FUN_100ec618c();
    ppuStack_e0 = &PTR_DAT_110364a48;
    lVar10 = 0;
    auStack_100[0] = uVar17;
    lStack_e8 = lVar9;
    func_0x000100eba64c();
    ppuStack_108 = &PTR_DAT_110362658;
    lVar11 = 0;
    auStack_128[0] = uVar18;
    lStack_110 = lVar10;
    FUN_100ec207c();
    lVar12 = lVar11;
    func_0x000107c610f8();
    func_0x0001000c6518(auStack_100,lVar9);
    apuStack_1e0[2] = puVar20;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
    puVar20 = (undefined8 *)((long)puVar20 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(extraout_x12_01 + 0x10))(puVar20);
    func_0x0001000c6518(auStack_128,lVar10);
    apuStack_1e0[1] = puVar20;
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
    puVar19 = (undefined8 *)((long)puVar20 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
    (**(code **)(extraout_x12_02 + 0x10))(puVar19);
    uVar17 = uStack_1a0;
    lVar15 = lStack_1c0;
    puVar1 = apuStack_1e0[3];
    auStack_150[0] = *puVar20;
    auStack_178[0] = *puVar19;
    ppuStack_130 = &PTR_DAT_110364a48;
    ppuStack_158 = &PTR_DAT_110362658;
    *(undefined8 **)(lVar12 + _DAT_112d48018) = apuStack_1e0[3];
    *(undefined8 *)(lVar12 + _DAT_112d48020) = uStack_1a0;
    *(long *)(lVar12 + _DAT_112d48028) = lStack_1c0;
    lStack_160 = lVar10;
    lStack_138 = lVar9;
    FUN_100ec006c(auStack_150,lVar12 + _DAT_112d48030);
    puVar19 = (undefined8 *)(lVar12 + _DAT_112d48038);
    *puVar19 = 0;
    puVar19[1] = 0xe000000000000000;
    FUN_100ec006c(auStack_178,lVar12 + _DAT_112d48040);
    *(undefined8 *)(lVar12 + _DAT_112d48048) = 0xffffffffffffffff;
    *(undefined8 *)(lVar12 + _DAT_112d48050) = 0xffffffffffffffff;
    puVar4 = PTR_s_init_1125d9248;
    lStack_188 = lVar12;
    lStack_180 = lVar11;
    func_0x000107c61174(lVar15);
    func_0x000107c61174(puVar1);
    func_0x000107c61174(uVar17);
    plVar13 = &lStack_188;
    func_0x000107c61154(plVar13,puVar4);
    func_0x000107c61180();
    FUN_100ec1cb0();
    func_0x000107c61170(plVar13);
    func_0x0001000834e4(auStack_178);
    func_0x0001000834e4(auStack_150);
    func_0x0001000834e4(auStack_128);
    func_0x0001000834e4(auStack_100);
    func_0x0001000834e4(auStack_d8);
    func_0x0001000834e4(&puStack_b0);
    pcVar2 = *(code **)(unaff_x20 + _DAT_112d47f58);
    func_0x000107c61174();
    puVar4 = puStack_1a8;
    func_0x000107c61174();
    puVar14 = puVar4;
    (*pcVar2)();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(plVar13);
    func_0x000107c42c1c(*(undefined8 *)(unaff_x20 + _DAT_112d47f50));
    func_0x000107c61170(lVar15);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(plVar13);
    func_0x000107c61170(puVar14);
    lVar15 = alStack_80[0];
  }
  func_0x000107c61170(lVar15);
  uVar16 = 0;
  func_0x000107c61544(0,"",0x78,0x8b,0x27,1);
  func_0x000107c61574(puStack_190);
  if ((uVar16 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100ebf66c);
    (*pcVar2)();
  }
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x78,0x8d,0x12,1);
  func_0x000107c61574(puStack_198);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100ebf670);
    (*pcVar2)();
  }
  puVar4 = puVar7;
  func_0x000107c61544(puVar7,"",0x78,0x8f,0x18,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100ebf674);
  (*pcVar2)();
}



/* Entry: 100ebf674; end: 100ebf677;  */

void FUN_100ebf674(void)

{
  return;
}



/* Entry: 100ebf678; end: 100ebf6eb;  */

/* WARNING: Possible PIC construction at 0x000100ebf6d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ebf6d4) */

void FUN_100ebf678(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af120;
  func_0x000107c61168(PTR_PTR_1126af120);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c424a8(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ebf6ec; end: 100ebfa97;  */

/* WARNING: Possible PIC construction at 0x000100ebf734: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ebf770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ebf788: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ebf82c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ebf78c) */
/* WARNING: Removing unreachable block (ram,0x000100ebf7dc) */
/* WARNING: Removing unreachable block (ram,0x000100ebf7e4) */
/* WARNING: Removing unreachable block (ram,0x000100ebf774) */
/* WARNING: Removing unreachable block (ram,0x000100ebf738) */
/* WARNING: Removing unreachable block (ram,0x000100ebf830) */

void FUN_100ebf6ec(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x000107c4d028();
  func_0x000107c61180();
  if (lVar2 == 0) {
    func_0x000107c40860();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ebf85c);
      (*pcVar1)();
    }
    func_0x000107c4088c();
    func_0x000107c61180();
  }
  else {
    func_0x000107c5faec();
    param_1 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ebfa98; end: 100ebfd23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ebfa98(long *param_1,byte *param_2,long param_3,long param_4,long param_5)

{
  byte bVar1;
  undefined1 uVar2;
  
  bVar1 = *param_2;
  if (bVar1 == 2) {
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    if (bVar1 == 3) {
      func_0x0001000a8868(param_4 + _DAT_112d47f90,*(undefined8 *)(param_4 + _DAT_112d47f90 + 0x18))
      ;
      FUN_100eba534(0xe0,1);
      *param_1 = 1;
    }
    else {
      if (bVar1 == 4) {
        func_0x0001000a8868(param_4 + _DAT_112d47f90,
                            *(undefined8 *)(param_4 + _DAT_112d47f90 + 0x18));
        FUN_100eba534(0xe0,8);
        param_1[3] = 0;
        param_1[2] = 0;
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[1] = 0;
        *param_1 = 0;
        uVar2 = 5;
        goto LAB_100ebfbc4;
      }
      func_0x000107c3ebf4();
      func_0x000107c61180();
      if (param_3 != 0) {
        func_0x000107c41864(*(undefined8 *)(param_4 + _DAT_112d47f28));
        *param_1 = param_3;
        param_1[1] = (ulong)bVar1 & 1;
        param_1[2] = param_5;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        *(undefined1 *)(param_1 + 6) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_retain_11034d2d8)(param_5);
        return;
      }
      *param_1 = 1;
    }
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[5] = 0;
  }
  uVar2 = 7;
LAB_100ebfbc4:
  *(undefined1 *)(param_1 + 6) = uVar2;
  return;
}



/* Entry: 100ebfd24; end: 100ebfd7f; -[_TtC27PhoneEmailFirstLogInFeature26PhoneEmailFirstLogInRouter init] */

void FUN_100ebfd24(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PhoneEmailFirstLogInFeature.PhoneEmailFirstLogInRouter",0x36,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ebfd50);
  (*pcVar1)();
}



/* Entry: 100ebfd80; end: 100ebfeaf; -[_TtC27PhoneEmailFirstLogInFeature26PhoneEmailFirstLogInRouter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100ebfdac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ebfddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ebfdfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ebfe20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ebfe44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ebfe94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ebfe48) */
/* WARNING: Removing unreachable block (ram,0x000100ebfe24) */
/* WARNING: Removing unreachable block (ram,0x000100ebfe00) */
/* WARNING: Removing unreachable block (ram,0x000100ebfde0) */
/* WARNING: Removing unreachable block (ram,0x000100ebfdb0) */
/* WARNING: Removing unreachable block (ram,0x000100ebfe98) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ebfd80(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d47f20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d47f28));
  return;
}



/* Entry: 100ebfeb0; end: 100ebfecf;  */

void FUN_100ebfeb0(void)

{
  func_0x000107c61168(&PTR_PTR_11279d7c0);
  return;
}



/* Entry: 100ebfed0; end: 100ebfeef;  */

void FUN_100ebfed0(void)

{
  FUN_100ebe9ec();
  return;
}



/* Entry: 100ebfef0; end: 100ec0023;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_100ebfef0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 auStack_58 [3];
  undefined8 uStack_40;
  undefined **ppuStack_38;
  
  uVar2 = 0;
  FUN_100eba80c();
  lVar1 = _DAT_112d47d98;
  ppuStack_38 = &PTR_DAT_1103627d8;
  uVar3 = 0x112d47e00;
  auStack_58[0] = param_1;
  uStack_40 = uVar2;
  func_0x0001000285a8(0x112d47e00,&UNK_10d90edd0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  *(undefined8 *)(param_2 + lVar1) = uVar3;
  lVar1 = _DAT_112d47da0;
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(param_2 + lVar1) = uVar3;
  *(undefined8 *)(param_2 + _DAT_112d47da8) = 0;
  *(undefined8 *)(param_2 + _DAT_112d47db0) = 0;
  *(undefined8 *)(param_2 + _DAT_112d47db8) = 0;
  *(undefined8 *)(param_2 + _DAT_112d47dc0) = 0;
  *(undefined8 *)(param_2 + _DAT_112d47dc8) = 0;
  *(undefined8 *)(param_2 + _DAT_112d47dd0) = 0;
  FUN_100ec006c(auStack_58,param_2 + _DAT_112d47d90);
  uVar3 = 0;
  FUN_100ebc0d0();
  plVar4 = &lStack_68;
  lStack_68 = param_2;
  uStack_60 = uVar3;
  func_0x000107c61154(plVar4,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  func_0x0001000834e4(auStack_58);
  return plVar4;
}



/* Entry: 100ec0024; end: 100ec006b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec0024(long *param_1,byte *param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  bVar2 = *param_2;
  if (bVar2 == 2) {
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    if (bVar2 == 3) {
      func_0x0001000a8868(lVar1 + _DAT_112d47f90,*(undefined8 *)(lVar1 + _DAT_112d47f90 + 0x18));
      FUN_100eba534(0xe0,1);
      *param_1 = 1;
    }
    else {
      if (bVar2 == 4) {
        func_0x0001000a8868(lVar1 + _DAT_112d47f90,*(undefined8 *)(lVar1 + _DAT_112d47f90 + 0x18));
        FUN_100eba534(0xe0,8);
        param_1[3] = 0;
        param_1[2] = 0;
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[1] = 0;
        *param_1 = 0;
        uVar5 = 5;
        goto LAB_100ebfbc4;
      }
      func_0x000107c3ebf4();
      func_0x000107c61180();
      if (lVar3 != 0) {
        func_0x000107c41864(*(undefined8 *)(lVar1 + _DAT_112d47f28));
        *param_1 = lVar3;
        param_1[1] = (ulong)bVar2 & 1;
        param_1[2] = lVar4;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[5] = 0;
        *(undefined1 *)(param_1 + 6) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_retain_11034d2d8)(lVar4);
        return;
      }
      *param_1 = 1;
    }
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[5] = 0;
  }
  uVar5 = 7;
LAB_100ebfbc4:
  *(undefined1 *)(param_1 + 6) = uVar5;
  return;
}



/* Entry: 100ec006c; end: 100ec00af;  */

long FUN_100ec006c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 100ec00b0; end: 100ec00b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec00b0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 auStack_68 [24];
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  uVar9 = param_1[2];
  uVar6 = (uint)(uVar9 >> 0x3c) & 3;
  if (uVar6 < 2) {
    if (uVar6 == 0) {
      func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
      lVar5 = unaff_x20 + 0x10;
      func_0x000107c61618();
      if (lVar5 == 0) {
        return;
      }
      FUN_100ebefbc(lVar2,lVar3);
    }
    else {
      func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
      lVar5 = unaff_x20 + 0x10;
      func_0x000107c61618();
      if (lVar5 == 0) {
        return;
      }
      func_0x000100ebf85c(lVar2,lVar3);
    }
  }
  else {
    lVar4 = param_1[3];
    lVar1 = param_1[4];
    lVar7 = param_1[5];
    if (uVar6 == 2) {
      func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
      lVar5 = unaff_x20 + 0x10;
      func_0x000107c61618();
      if (lVar5 == 0) {
        return;
      }
      uVar8 = *(undefined8 *)(lVar5 + _DAT_112d47fa8);
      *(long *)(lVar5 + _DAT_112d47fa8) = lVar7;
      func_0x000107c61434(lVar1);
      func_0x000107c61174(lVar7);
      func_0x000107c61170(uVar8);
      lVar2 = *(long *)(lVar5 + _DAT_112d47f98);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar2 != 0) {
        func_0x000107c5ee20(lVar3,uVar9 & 0xcfffffffffffffff);
        func_0x000107c5fadc(lVar4,lVar1);
        func_0x000107c3dd48(lVar2);
        func_0x000107c615e8(lVar2);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar5);
        func_0x000107c6142c(lVar1);
        return;
      }
      func_0x000107c6142c(lVar1);
    }
    else if (((lVar7 == 0 && uVar9 == 0x3000000000000000) && lVar2 == 1) &&
             ((lVar4 == 0 && lVar3 == 0) && lVar1 == 0)) {
      func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
      lVar5 = unaff_x20 + 0x10;
      func_0x000107c61618();
      if (lVar5 == 0) {
        return;
      }
      FUN_100ebee28();
    }
    else {
      if (lVar7 != 0) {
        return;
      }
      if (uVar9 != 0x3000000000000000) {
        return;
      }
      if (lVar2 != 2) {
        return;
      }
      if ((lVar4 != 0 || lVar3 != 0) || lVar1 != 0) {
        return;
      }
      func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
      lVar5 = unaff_x20 + 0x10;
      func_0x000107c61618();
      if (lVar5 == 0) {
        return;
      }
      func_0x000100ebfbdc();
    }
  }
  func_0x000107c61170(lVar5);
  return;
}



/* Entry: 100ec00b8; end: 100ec0147;  */

/* WARNING: Possible PIC construction at 0x000100ec00dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec00f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ec00e0) */
/* WARNING: Removing unreachable block (ram,0x000100ec00fc) */

void FUN_100ec00b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  uVar1 = (uint)((ulong)param_3 >> 0x3c) & 3;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
      func_0x000107c61174(param_2);
    }
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_1);
  return;
}



/* Entry: 100ec0148; end: 100ec015b;  */

void FUN_100ec0148(long param_1,long param_2)

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



/* Entry: 100ec015c; end: 100ec08f3;  */

/* WARNING: Possible PIC construction at 0x000100ec01cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec0404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100ec0414: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ec0408) */
/* WARNING: Removing unreachable block (ram,0x000100ec01d0) */
/* WARNING: Removing unreachable block (ram,0x000100ec043c) */
/* WARNING: Removing unreachable block (ram,0x000100ec0440) */
/* WARNING: Removing unreachable block (ram,0x000100ec0454) */
/* WARNING: Removing unreachable block (ram,0x000100ec0478) */
/* WARNING: Removing unreachable block (ram,0x000100ec0498) */
/* WARNING: Removing unreachable block (ram,0x000100ec0200) */
/* WARNING: Removing unreachable block (ram,0x000100ec0204) */
/* WARNING: Removing unreachable block (ram,0x000100ec0218) */
/* WARNING: Removing unreachable block (ram,0x000100ec022c) */
/* WARNING: Removing unreachable block (ram,0x000100ec0244) */
/* WARNING: Removing unreachable block (ram,0x000100ec04c4) */
/* WARNING: Removing unreachable block (ram,0x000100ec04c8) */
/* WARNING: Removing unreachable block (ram,0x000100ec0260) */
/* WARNING: Removing unreachable block (ram,0x000100ec0418) */

void FUN_100ec015c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af038;
  func_0x000107c61168(PTR_PTR_1126af038);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c5dbe4(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100ec08f4; end: 100ec0907;  */

void FUN_100ec08f4(void)

{
  return;
}



/* Entry: 100ec0908; end: 100ec09c7;  */

/* WARNING: Possible PIC construction at 0x000100ec0998: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ec099c) */

void FUN_100ec0908(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 *param_6)

{
  undefined *puVar1;
  
  *param_6 = 1;
  puVar1 = PTR_PTR_1126d0ba8;
  func_0x000107c61168(PTR_PTR_1126d0ba8);
  func_0x000107c5ee20(param_2,param_3);
  func_0x000107c5fadc(param_4,param_5);
  func_0x000107c407ec(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100ec09c8; end: 100ec148f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100ec09c8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined *puVar20;
  undefined **ppuVar21;
  long *plVar22;
  long lVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 uStack_91;
  undefined1 auStack_90 [32];
  
  func_0x000107c61428(param_2 + 0x10,auStack_90,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    uStack_118 = 0;
    pcStack_110 = (code *)0x0;
    puVar25 = (undefined *)0x0;
    uStack_108 = 0;
    uStack_100 = 0;
    puVar30 = (undefined *)0x0;
    puVar32 = (undefined *)0x0;
    uStack_f8 = 0;
    puVar28 = (undefined *)0x0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    puVar29 = (undefined *)0x0;
    puVar27 = (undefined *)0x0;
    pcStack_e0 = (code *)0x0;
    uStack_d8 = 0;
    puVar24 = (undefined *)0x0;
    puVar31 = (undefined *)0x0;
    pcStack_d0 = (code *)0x0;
    puVar26 = (undefined *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    uStack_91 = 0;
    uVar2 = param_1;
    func_0x000107c4c034();
    func_0x000107c61180();
    puVar3 = &UNK_110362f00;
    func_0x000107c613fc(&UNK_110362f00,0x28,7);
    *(undefined1 **)(puVar3 + 0x10) = &uStack_91;
    *(undefined8 *)(puVar3 + 0x18) = param_3;
    *(undefined8 *)(puVar3 + 0x20) = param_4;
    puVar4 = &UNK_110362f28;
    func_0x000107c613fc(&UNK_110362f28,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = 0x100ec1ca8;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0x100ec1af0;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x100eb5728;
    puStack_b0 = &UNK_110362f40;
    ppuVar5 = &puStack_c8;
    puStack_a0 = puVar4;
    func_0x000107c60bc4();
    puVar4 = puStack_a0;
    func_0x000107c6157c(param_4);
    func_0x000107c61574(puVar4);
    puVar6 = &UNK_110362f78;
    func_0x000107c613fc(&UNK_110362f78,0x28,7);
    *(undefined1 **)(puVar6 + 0x10) = &uStack_91;
    *(undefined8 *)(puVar6 + 0x18) = param_3;
    *(undefined8 *)(puVar6 + 0x20) = param_4;
    puVar4 = &UNK_110362fa0;
    func_0x000107c613fc(&UNK_110362fa0,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = 0x100ec1af8;
    *(undefined **)(puVar4 + 0x18) = puVar6;
    uStack_a8 = 0x100ec1b04;
    puStack_c8 = puVar1;
    uStack_c0 = 0x42000000;
    pcStack_b8 = FUN_100eb5768;
    puStack_b0 = &UNK_110362fb8;
    ppuVar7 = &puStack_c8;
    puStack_a0 = puVar4;
    func_0x000107c60bc4();
    puVar4 = puStack_a0;
    func_0x000107c6157c(param_4);
    func_0x000107c61574(puVar4);
    puVar8 = &UNK_110362ff0;
    func_0x000107c613fc(&UNK_110362ff0,0x28,7);
    *(undefined1 **)(puVar8 + 0x10) = &uStack_91;
    *(undefined8 *)(puVar8 + 0x18) = param_3;
    *(undefined8 *)(puVar8 + 0x20) = param_4;
    puVar4 = &UNK_110363018;
    func_0x000107c613fc(&UNK_110363018,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = 0x100ec1b0c;
    *(undefined **)(puVar4 + 0x18) = puVar8;
    uStack_a8 = 0x100ec1b18;
    puStack_c8 = puVar1;
    uStack_c0 = 0x42000000;
    pcStack_b8 = FUN_100de6bdc;
    puStack_b0 = &UNK_110363030;
    ppuVar9 = &puStack_c8;
    puStack_a0 = puVar4;
    func_0x000107c60bc4();
    puVar4 = puStack_a0;
    func_0x000107c6157c(param_4);
    func_0x000107c61574(puVar4);
    puVar4 = &UNK_110363068;
    func_0x000107c613fc(&UNK_110363068,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = param_5;
    *(undefined8 *)(puVar4 + 0x18) = param_6;
    puVar25 = &UNK_110363090;
    func_0x000107c613fc(&UNK_110363090,0x20,7);
    *(undefined8 *)(puVar25 + 0x10) = 0x100ec1b20;
    *(undefined **)(puVar25 + 0x18) = puVar4;
    uStack_a8 = 0x100ec1b28;
    puStack_c8 = puVar1;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x100de58f0;
    puStack_b0 = &UNK_1103630a8;
    ppuVar10 = &puStack_c8;
    puStack_a0 = puVar25;
    func_0x000107c60bc4();
    puVar4 = puStack_a0;
    func_0x000107c6157c(param_6);
    func_0x000107c61574(puVar4);
    puVar4 = &UNK_1103630e0;
    func_0x000107c613fc(&UNK_1103630e0,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = param_5;
    *(undefined8 *)(puVar4 + 0x18) = param_6;
    puVar25 = &UNK_110363108;
    func_0x000107c613fc(&UNK_110363108,0x20,7);
    *(undefined8 *)(puVar25 + 0x10) = 0x100ec1b30;
    *(undefined **)(puVar25 + 0x18) = puVar4;
    uStack_a8 = 0x100ec1c74;
    puStack_c8 = puVar1;
    uStack_c0 = 0x42000000;
    pcStack_b8 = FUN_100de6bdc;
    puStack_b0 = &UNK_110363120;
    ppuVar11 = &puStack_c8;
    puStack_a0 = puVar25;
    func_0x000107c60bc4();
    puVar25 = puStack_a0;
    func_0x000107c6157c(param_6);
    func_0x000107c61574(puVar25);
    puVar25 = &UNK_110363158;
    func_0x000107c613fc(&UNK_110363158,0x20,7);
    *(undefined8 *)(puVar25 + 0x10) = param_3;
    *(undefined8 *)(puVar25 + 0x18) = param_4;
    puVar30 = &UNK_110363180;
    func_0x000107c613fc(&UNK_110363180,0x20,7);
    *(code **)(puVar30 + 0x10) = FUN_100ec1b38;
    *(undefined **)(puVar30 + 0x18) = puVar25;
    uStack_a8 = 0x100ec1c80;
    puStack_c8 = puVar1;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x100eb5728;
    puStack_b0 = &UNK_110363198;
    ppuVar12 = &puStack_c8;
    puStack_a0 = puVar30;
    func_0x000107c60bc4();
    puVar30 = puStack_a0;
    func_0x000107c6157c(param_4);
    func_0x000107c61574(puVar30);
    puVar30 = &UNK_1103631d0;
    func_0x000107c613fc(&UNK_1103631d0,0x20,7);
    *(undefined8 *)(puVar30 + 0x10) = param_3;
    *(undefined8 *)(puVar30 + 0x18) = param_4;
    puVar32 = &UNK_1103631f8;
    func_0x000107c613fc(&UNK_1103631f8,0x20,7);
    *(undefined8 *)(puVar32 + 0x10) = 0x100ec1c84;
    *(undefined **)(puVar32 + 0x18) = puVar30;
    uStack_a8 = 0x100ec1c88;
    puStack_c8 = puVar1;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x100eb5728;
    puStack_b0 = &UNK_110363210;
    ppuVar13 = &puStack_c8;
    puStack_a0 = puVar32;
    func_0x000107c60bc4();
    puVar32 = puStack_a0;
    func_0x000107c6157c(param_4);
    func_0x000107c61574(puVar32);
    puVar32 = &UNK_110363248;
    func_0x000107c613fc(&UNK_110363248,0x20,7);
    *(undefined8 *)(puVar32 + 0x10) = param_5;
    *(undefined8 *)(puVar32 + 0x18) = param_6;
    puVar28 = &UNK_110363270;
    func_0x000107c613fc(&UNK_110363270,0x20,7);
    *(undefined8 *)(puVar28 + 0x10) = 0x100ec1ca0;
    *(undefined **)(puVar28 + 0x18) = puVar32;
    uStack_a8 = 0x100ec1c8c;
    puStack_c8 = puVar1;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x100eb5728;
    puStack_b0 = &UNK_110363288;
    ppuVar14 = &puStack_c8;
    puStack_a0 = puVar28;
    func_0x000107c60bc4();
    puVar28 = puStack_a0;
    func_0x000107c6157c(param_6);
    func_0x000107c61574(puVar28);
    puVar28 = &UNK_1103632c0;
    func_0x000107c613fc(&UNK_1103632c0,0x20,7);
    *(undefined8 *)(puVar28 + 0x10) = param_3;
    *(undefined8 *)(puVar28 + 0x18) = param_4;
    puVar29 = &UNK_1103632e8;
    func_0x000107c613fc(&UNK_1103632e8,0x20,7);
    *(undefined8 *)(puVar29 + 0x10) = 0x100ec1c90;
    *(undefined **)(puVar29 + 0x18) = puVar28;
    uStack_a8 = 0x100ec1c94;
    puStack_c8 = puVar1;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x100eb5728;
    puStack_b0 = &UNK_110363300;
    ppuVar15 = &puStack_c8;
    puStack_a0 = puVar29;
    func_0x000107c60bc4();
    puVar29 = puStack_a0;
    func_0x000107c6157c(param_4);
    func_0x000107c61574(puVar29);
    puVar29 = &UNK_110363338;
    func_0x000107c613fc(&UNK_110363338,0x28,7);
    *(undefined1 **)(puVar29 + 0x10) = &uStack_91;
    *(undefined8 *)(puVar29 + 0x18) = param_3;
    *(undefined8 *)(puVar29 + 0x20) = param_4;
    puVar27 = &UNK_110363360;
    func_0x000107c613fc(&UNK_110363360,0x20,7);
    *(undefined8 *)(puVar27 + 0x10) = 0x100ec1b50;
    *(undefined **)(puVar27 + 0x18) = puVar29;
    uStack_a8 = 0x100ec1c98;
    puStack_c8 = puVar1;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x100eb5728;
    puStack_b0 = &UNK_110363378;
    ppuVar16 = &puStack_c8;
    puStack_a0 = puVar27;
    func_0x000107c60bc4();
    puVar27 = puStack_a0;
    func_0x000107c6157c(param_4);
    func_0x000107c61574(puVar27);
    puVar27 = &UNK_1103633b0;
    func_0x000107c613fc(&UNK_1103633b0,0x28,7);
    *(undefined1 **)(puVar27 + 0x10) = &uStack_91;
    *(undefined8 *)(puVar27 + 0x18) = param_3;
    *(undefined8 *)(puVar27 + 0x20) = param_4;
    puVar24 = &UNK_1103633d8;
    func_0x000107c613fc(&UNK_1103633d8,0x20,7);
    *(undefined8 *)(puVar24 + 0x10) = 0x100ec1cac;
    *(undefined **)(puVar24 + 0x18) = puVar27;
    uStack_a8 = 0x100ec1c9c;
    puStack_c8 = puVar1;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x100eb5728;
    puStack_b0 = &UNK_1103633f0;
    ppuVar17 = &puStack_c8;
    puStack_a0 = puVar24;
    func_0x000107c60bc4();
    puVar24 = puStack_a0;
    func_0x000107c6157c(param_4);
    func_0x000107c61574(puVar24);
    puVar24 = &UNK_110363428;
    func_0x000107c613fc(&UNK_110363428,0x28,7);
    *(undefined1 **)(puVar24 + 0x10) = &uStack_91;
    *(undefined8 *)(puVar24 + 0x18) = param_3;
    *(undefined8 *)(puVar24 + 0x20) = param_4;
    puVar31 = &UNK_110363450;
    func_0x000107c613fc(&UNK_110363450,0x20,7);
    *(code **)(puVar31 + 0x10) = FUN_100ec1b6c;
    *(undefined **)(puVar31 + 0x18) = puVar24;
    uStack_a8 = 0x100ec1b78;
    puStack_c8 = puVar1;
    uStack_c0 = 0x42000000;
    pcStack_b8 = FUN_100de6b64;
    puStack_b0 = &UNK_110363468;
    ppuVar18 = &puStack_c8;
    puStack_a0 = puVar31;
    func_0x000107c60bc4();
    puVar31 = puStack_a0;
    func_0x000107c6157c(param_4);
    func_0x000107c61574(puVar31);
    puVar31 = &UNK_1103634a0;
    func_0x000107c613fc(&UNK_1103634a0,0x20,7);
    *(undefined8 *)(puVar31 + 0x10) = param_5;
    *(undefined8 *)(puVar31 + 0x18) = param_6;
    puVar26 = &UNK_1103634c8;
    func_0x000107c613fc(&UNK_1103634c8,0x20,7);
    *(undefined8 *)(puVar26 + 0x10) = 0x100ec1b80;
    *(undefined **)(puVar26 + 0x18) = puVar31;
    uStack_a8 = 0x100ec1c78;
    puStack_c8 = puVar1;
    uStack_c0 = 0x42000000;
    pcStack_b8 = FUN_100de6bdc;
    puStack_b0 = &UNK_1103634e0;
    ppuVar19 = &puStack_c8;
    puStack_a0 = puVar26;
    func_0x000107c60bc4();
    puVar26 = puStack_a0;
    func_0x000107c6157c(param_6);
    func_0x000107c61574(puVar26);
    puVar26 = &UNK_110363518;
    func_0x000107c613fc(&UNK_110363518,0x20,7);
    *(undefined8 *)(puVar26 + 0x10) = param_5;
    *(undefined8 *)(puVar26 + 0x18) = param_6;
    puVar20 = &UNK_110363540;
    func_0x000107c613fc(&UNK_110363540,0x20,7);
    *(code **)(puVar20 + 0x10) = FUN_100ec1b88;
    *(undefined **)(puVar20 + 0x18) = puVar26;
    uStack_a8 = 0x100ec1ca4;
    puStack_c8 = puVar1;
    uStack_c0 = 0x42000000;
    pcStack_b8 = (code *)0x100eb5728;
    puStack_b0 = &UNK_110363558;
    ppuVar21 = &puStack_c8;
    puStack_a0 = puVar20;
    func_0x000107c60bc4();
    puVar20 = puStack_a0;
    func_0x000107c6157c(param_6);
    func_0x000107c61574(puVar20);
    func_0x000107c4c5c0(uVar2);
    func_0x000107c60bd0(ppuVar21);
    func_0x000107c60bd0(ppuVar19);
    func_0x000107c60bd0(ppuVar18);
    func_0x000107c60bd0(ppuVar17);
    func_0x000107c60bd0(ppuVar16);
    func_0x000107c60bd0(ppuVar15);
    func_0x000107c60bd0(ppuVar14);
    func_0x000107c60bd0(ppuVar13);
    func_0x000107c60bd0(ppuVar12);
    func_0x000107c60bd0(ppuVar11);
    func_0x000107c60bd0(ppuVar10);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(uVar2);
    plVar22 = (long *)(param_2 + _DAT_112d47fe8);
    func_0x0001000a8868(plVar22,plVar22[3]);
    func_0x000107c4458c(param_1);
    func_0x000107c4f544(param_1);
    lVar23 = *(long *)(*plVar22 + 0x18);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar23 == 0) {
      func_0x000107c61574(puVar8);
      func_0x000107c61574(puVar6);
      func_0x000107c61574(puVar3);
      func_0x000107c61170(param_2);
    }
    else {
      func_0x000107c4ba30();
      func_0x000107c61574(puVar8);
      func_0x000107c61574(puVar6);
      func_0x000107c61574(puVar3);
      func_0x000107c61170(param_2);
      func_0x000107c615e8(lVar23);
    }
    uStack_d8 = 0x100ec1b80;
    pcStack_d0 = FUN_100ec1b88;
    uStack_e8 = 0x100ec1cac;
    pcStack_e0 = FUN_100ec1b6c;
    uStack_f0 = 0x100ec1b50;
    uStack_100 = 0x100ec1ca0;
    uStack_f8 = 0x100ec1c90;
    pcStack_110 = FUN_100ec1b38;
    uStack_108 = 0x100ec1c84;
    uStack_118 = 0x100ec1b30;
  }
  FUN_100c9a198();
  func_0x000100c9a19c(uStack_118,puVar4);
  func_0x000100c9a19c(pcStack_110,puVar25);
  func_0x000100c9a19c(uStack_108,puVar30);
  func_0x000100c9a19c(uStack_100,puVar32);
  func_0x000100c9a19c(uStack_f8,puVar28);
  func_0x000100c9a19c(uStack_f0,puVar29);
  func_0x000100c9a19c(uStack_e8,puVar27);
  func_0x000100c9a19c(pcStack_e0,puVar24);
  func_0x000100c9a19c(uStack_d8,puVar31);
  func_0x000100c9a19c(pcStack_d0,puVar26);
  return;
}



/* Entry: 100ec1490; end: 100ec1537;  */

/* WARNING: Possible PIC construction at 0x000100ec14f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100ec14fc) */

void FUN_100ec1490(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined1 *param_4,
                  code *param_5)

{
  undefined *puVar1;
  
  *param_4 = 1;
  if (param_3 == (undefined *)0x0) {
    param_3 = PTR_PTR_1126d0ba8;
    func_0x000107c61168(PTR_PTR_1126d0ba8);
    func_0x000107c4fb08();
    func_0x000107c61180();
    (*param_5)();
  }
  else {
    puVar1 = PTR_PTR_1126d0ba8;
    func_0x000107c61168(PTR_PTR_1126d0ba8);
    func_0x000107c61174(param_3);
    func_0x000107c4c128(puVar1,param_2,param_3);
    func_0x000107c61180();
    (*param_5)();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


