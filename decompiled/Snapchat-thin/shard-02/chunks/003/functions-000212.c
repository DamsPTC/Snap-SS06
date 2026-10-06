/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101b81434; end: 101b81453;  */

void FUN_101b81434(void)

{
  FUN_101b80954();
  return;
}



/* Entry: 101b81454; end: 101b8149f;  */

void FUN_101b81454(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  if ((param_1 != 0) && (param_2 == 0)) {
    lVar1 = param_1;
    func_0x000107c615f0(param_1,0,unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
    func_0x000107c5ed90();
    func_0x000107c4b788(param_1);
    func_0x000107c615e8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 101b814a0; end: 101b814d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b814a0(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c41864(*(undefined8 *)(lVar1 + _DAT_112e063a0));
    lVar2 = lVar1 + _DAT_112e06390;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c44600();
      func_0x000107c615e8(lVar2);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101b814d8; end: 101b8153f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101b814d8(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e06428;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e06428);
  lVar3 = lVar2;
  if (lVar2 == 1) {
    FUN_101b81540();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = param_1;
    func_0x000107c61174();
    FUN_101b821b0(uVar4);
    lVar3 = param_1;
  }
  func_0x000101b821c0(lVar2);
  return lVar3;
}



/* Entry: 101b81540; end: 101b81833;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b81540(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  long unaff_x20;
  undefined8 uVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar7 = &puStack_90;
  ppuVar8 = &puStack_90;
  ppuVar10 = &puStack_90;
  lVar2 = *(long *)(unaff_x20 + _DAT_112e06400);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar3 != 0) {
      puVar4 = PTR_PTR_1126a8b68;
      func_0x000107c610f8(PTR_PTR_1126a8b68);
      func_0x000107c453e4();
      lVar2 = ((undefined8 *)(unaff_x20 + _DAT_112e06410))[1];
      if (lVar2 == 0) {
        uVar11 = 0;
        lVar2 = -0x2000000000000000;
      }
      else {
        uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112e06410);
      }
      func_0x000107c61434();
      func_0x000107c5fadc(uVar11,lVar2);
      func_0x000107c6142c(lVar2);
      func_0x000107c59e18(puVar4);
      func_0x000107c61170(uVar11);
      uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112e06418);
      func_0x000107c5fadc(uVar11,((undefined8 *)(unaff_x20 + _DAT_112e06418))[1]);
      func_0x000107c59a40(puVar4);
      func_0x000107c61170(uVar11);
      puVar5 = PTR_PTR_1126a8b70;
      func_0x000107c610f8(PTR_PTR_1126a8b70);
      func_0x000107c453e4();
      puVar9 = &UNK_11044e6b0;
      puVar6 = puVar9;
      func_0x000107c613fc(&UNK_11044e6b0,0x18,7);
      func_0x000107c61614(puVar6 + 0x10);
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_70 = FUN_101b821d0;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_11044e6c8;
      puStack_68 = puVar6;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      func_0x000107c56ca0(puVar5);
      func_0x000107c60bd0(ppuVar7);
      puVar6 = puVar9;
      func_0x000107c613fc(&UNK_11044e6b0,0x18,7);
      func_0x000107c61614(puVar6 + 0x10);
      pcStack_70 = FUN_101b8220c;
      puStack_90 = puVar1;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_11044e6f0;
      puStack_68 = puVar6;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      func_0x000107c56c9c(puVar5);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c613fc(&UNK_11044e6b0,0x18,7);
      func_0x000107c61614(puVar9 + 0x10);
      pcStack_70 = (code *)0x101b8222c;
      puStack_90 = puVar1;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_11044e718;
      puStack_68 = puVar9;
      func_0x000107c60bc4(&puStack_90);
      func_0x000107c61574(puStack_68);
      func_0x000107c56edc(puVar5);
      func_0x000107c60bd0(ppuVar10);
      puVar9 = PTR_PTR_1126a8b78;
      func_0x000107c610f8(PTR_PTR_1126a8b78);
      func_0x000107c61174(puVar4);
      func_0x000107c61174(puVar5);
      func_0x000107c49520(puVar9);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar5);
      func_0x000107c615e8(lVar3);
    }
  }
  return;
}



/* Entry: 101b81834; end: 101b818ab; -[_TtC25SCLegalComplianceTakeover37LegalComplianceTakeoverViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101b81834(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = param_1 + _DAT_112e06408;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  lVar1 = _DAT_112e06428;
  *(undefined8 *)(param_1 + _DAT_112e06428) = 1;
  func_0x000101b82304();
  FUN_101b821b0(*(undefined8 *)(param_1 + lVar1));
  func_0x000107c61464(param_1,lVar2,0x50,7);
  return 0;
}



/* Entry: 101b818ac; end: 101b81c57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b818ac(void)

{
  code *pcVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_loadView_112604be0);
  FUN_101b814d8();
  if (puVar2 != (undefined1 *)0x0) {
    lVar3 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b81c48);
      (*pcVar1)();
    }
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c3d89c(lVar3);
    func_0x000107c61170(lVar3);
    func_0x000107c5a050(puVar2);
    func_0x000107c61170(puVar2);
    lVar3 = 0x112d360b8;
    FUN_101b8224c(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                  &UNK_10d9011a0);
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 9;
    *(undefined8 *)(lVar3 + 0x10) = 4;
    puVar4 = puVar2;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    lVar5 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b81c4c);
      (*pcVar1)();
    }
    lVar6 = lVar5;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    puVar7 = puVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar6);
    *(undefined1 **)(lVar3 + 0x20) = puVar7;
    puVar4 = puVar2;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    lVar5 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b81c50);
      (*pcVar1)();
    }
    lVar6 = lVar5;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    puVar7 = puVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar6);
    *(undefined1 **)(lVar3 + 0x28) = puVar7;
    puVar4 = puVar2;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    lVar5 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b81c54);
      (*pcVar1)();
    }
    lVar6 = lVar5;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    puVar7 = puVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar6);
    *(undefined1 **)(lVar3 + 0x30) = puVar7;
    puVar4 = puVar2;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    lVar5 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b81c58);
      (*pcVar1)();
    }
    puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar6 = lVar5;
    func_0x000107c5cbe4(lVar5);
    func_0x000107c61180();
    func_0x000107c61170(lVar5);
    puVar7 = puVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(lVar6);
    *(undefined1 **)(lVar3 + 0x38) = puVar7;
    uVar9 = 0;
    FUN_101b822c4(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar5 = lVar3;
    func_0x000107c5fc48(lVar3,uVar9);
    func_0x000107c61574(lVar3);
    func_0x000107c3d048(puVar8);
    func_0x000107c61170(lVar5);
    lVar3 = unaff_x20 + _DAT_112e06408;
    func_0x000107c61618();
    if (lVar3 == 0) {
      func_0x000107c61170(puVar2);
    }
    else {
      lVar5 = lVar3 + _DAT_112e06390;
      func_0x000107c61618();
      if (lVar5 != 0) {
        func_0x000107c44668();
        func_0x000107c615e8(lVar5);
      }
      func_0x000107c61170(puVar2);
      func_0x000107c615e8(lVar3);
    }
  }
  return;
}



/* Entry: 101b81c58; end: 101b81c7f; -[_TtC25SCLegalComplianceTakeover37LegalComplianceTakeoverViewController loadView] */

void FUN_101b81c58(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101b818ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101b81c80; end: 101b81cff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b81c80(long param_1,code *param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_112e06408;
    func_0x000107c61618();
    if (lVar1 != 0) {
      (*param_2)();
      func_0x000107c615e8(lVar1);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 101b81d00; end: 101b81e13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b81d00(void)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  puVar1 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_viewDidLoad_112684cd8);
  FUN_101b814d8();
  if (puVar1 != (undefined1 *)0x0) {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e06420);
    lVar2 = 0x112d360b0;
    FUN_101b8224c(0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d36e80,&UNK_10d904c70);
    func_0x000107c613fc();
    *(undefined8 *)(lVar2 + 0x18) = 3;
    *(undefined8 *)(lVar2 + 0x10) = 1;
    *(undefined1 **)(lVar2 + 0x20) = puVar1;
    uVar3 = 0;
    FUN_101b822c4(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000107c61174(puVar1);
    lVar4 = lVar2;
    func_0x000107c5fc48(lVar2,uVar3);
    func_0x000107c61574(lVar2);
    func_0x000107c497d0(uVar5);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 101b81e14; end: 101b81e3b; -[_TtC25SCLegalComplianceTakeover37LegalComplianceTakeoverViewController viewDidLoad] */

void FUN_101b81e14(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101b81d00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101b81e3c; end: 101b81e9b; -[_TtC25SCLegalComplianceTakeover37LegalComplianceTakeoverViewController initWithNibName:bundle:] */

void FUN_101b81e3c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLegalComplianceTakeover.LegalComplianceTakeoverViewController",0x3f,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b81e68);
  (*pcVar1)();
}



/* Entry: 101b81e9c; end: 101b81f1b; -[_TtC25SCLegalComplianceTakeover37LegalComplianceTakeoverViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101b81eb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b81ebc) */
/* WARNING: Removing unreachable block (ram,0x000101b821b0) */
/* WARNING: Removing unreachable block (ram,0x000101b821bc) */
/* WARNING: Removing unreachable block (ram,0x000101b821b8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b81e9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e06400));
  return;
}



/* Entry: 101b81f1c; end: 101b81f3b;  */

void FUN_101b81f1c(void)

{
  func_0x000107c61168(&PTR_PTR_1127fb2b0);
  return;
}



/* Entry: 101b81f3c; end: 101b81f43; -[_TtC25SCLegalComplianceTakeover37LegalComplianceTakeoverViewController pageViewName] */

undefined8 FUN_101b81f3c(void)

{
  return 0x8c;
}



/* Entry: 101b81f44; end: 101b81f47; -[_TtC25SCLegalComplianceTakeover37LegalComplianceTakeoverViewController cardToExpandTransition] */

void FUN_101b81f44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 101b81f48; end: 101b81f53; -[_TtC25SCLegalComplianceTakeover37LegalComplianceTakeoverViewController cardTransitionWillBeginWithView:] */

void FUN_101b81f48(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 101b81f54; end: 101b8201f;  */

undefined8 FUN_101b81f54(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_3;
  FUN_101b814d8();
  if (uVar1 != 0) {
    FUN_101b822c4(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(param_3,uVar1);
    if ((param_3 & 1) == 0) {
      func_0x000107c61170(uVar1);
    }
    else {
      uVar2 = uVar1;
      func_0x000107c3f42c(param_1,param_2);
      if ((int)uVar2 != 0) {
        func_0x000107c61170(uVar1);
        return 0;
      }
      uVar2 = uVar1;
      func_0x000107c3f42c(param_1,param_2);
      func_0x000107c61170(uVar1);
      if ((uVar2 & 1) != 0) {
        return 0;
      }
    }
  }
  return 1;
}



/* Entry: 101b82020; end: 101b82093; -[_TtC25SCLegalComplianceTakeover37LegalComplianceTakeoverViewController cardTransitionShouldBeginWithView:touchLocation:] */

uint FUN_101b82020(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  uVar1 = param_5;
  FUN_101b81f54(param_1,param_2,param_5);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 101b82094; end: 101b82157;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b82094(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x20;
  
  uVar1 = param_1;
  FUN_101b814d8();
  if (uVar1 != 0) {
    FUN_101b822c4(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000107c61174();
    uVar2 = param_1;
    func_0x000107c60118();
    func_0x000107c61170(param_1);
    func_0x000107c61170(uVar1);
    if (((uVar2 & 1) != 0) && (param_2 == 1)) {
      lVar3 = unaff_x20 + _DAT_112e06408;
      func_0x000107c61618();
      if (lVar3 != 0) {
        FUN_101b80e54();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar3);
        return;
      }
    }
  }
  return;
}



/* Entry: 101b82158; end: 101b821af; -[_TtC25SCLegalComplianceTakeover37LegalComplianceTakeoverViewController cardTransitionEndedWithView:transitionType:] */

/* WARNING: Possible PIC construction at 0x000101b82198: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b8219c) */

void FUN_101b82158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101b82094(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101b821b0; end: 101b821cf;  */

void FUN_101b821b0(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 101b821d0; end: 101b821ef;  */

void FUN_101b821d0(void)

{
  FUN_101b81c80();
  return;
}



/* Entry: 101b821f0; end: 101b8220b;  */

void FUN_101b821f0(long param_1,long param_2)

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



/* Entry: 101b8220c; end: 101b8224b;  */

void FUN_101b8220c(void)

{
  FUN_101b81c80();
  return;
}



/* Entry: 101b8224c; end: 101b822c3;  */

void FUN_101b8224c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_101b822c4(0,param_1,param_2);
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



/* Entry: 101b822c4; end: 101b82327;  */

void FUN_101b822c4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101b82328; end: 101b82337;  */

void FUN_101b82328(long param_1,long param_2)

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



/* Entry: 101b82338; end: 101b823a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b82338(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101b8272c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e06460) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101b823a4; end: 101b8240f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b823a4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e06460) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b82410; end: 101b8246f; -[_TtC39PhotoPickerScopedFactoryServiceProvider27SCPhotoPickerScopedServices init] */

void FUN_101b82410(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PhotoPickerScopedFactoryServiceProvider.SCPhotoPickerScopedServices",0x43,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b8243c);
  (*pcVar1)();
}



/* Entry: 101b82470; end: 101b8247f; -[_TtC39PhotoPickerScopedFactoryServiceProvider27SCPhotoPickerScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b82470(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e06460));
  return;
}



/* Entry: 101b82480; end: 101b824eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b82480(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11044e908;
  func_0x000107c613fc(&UNK_11044e908,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101b827c4,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101b824ec; end: 101b82587;  */

void FUN_101b824ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11044e818;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11044e818;
  return;
}



/* Entry: 101b82588; end: 101b825bf;  */

void FUN_101b82588(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 101b825c0; end: 101b825c7;  */

undefined8 FUN_101b825c0(void)

{
  return 0x1b;
}



/* Entry: 101b825c8; end: 101b826fb;  */

void FUN_101b825c8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11044e930;
  func_0x000107c613fc(&UNK_11044e930,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101b8279c;
  func_0x00010058fa64(FUN_101b8279c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101b826fc; end: 101b8272b;  */

undefined ** FUN_101b826fc(void)

{
  return &PTR_DAT_113066e38;
}



/* Entry: 101b8272c; end: 101b8274b;  */

void FUN_101b8272c(void)

{
  func_0x000107c61168(&PTR_PTR_1127fb398);
  return;
}



/* Entry: 101b8274c; end: 101b8279b;  */

undefined1  [16] FUN_101b8274c(void)

{
  return ZEXT816(0x11044e868);
}



/* Entry: 101b8279c; end: 101b827c3;  */

void FUN_101b8279c(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101b827c4; end: 101b827c7;  */

void FUN_101b827c4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101b827c8; end: 101b82843;  */

void FUN_101b827c8(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112e064d0,&UNK_10d9d9e30);
  func_0x000107c613fc();
  pcVar1 = FUN_101b82b58;
  func_0x0001000841fc(FUN_101b82b58,param_2);
  func_0x000100084214(&UNK_10d9d9e00,0x29,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101b82844; end: 101b8285b;  */

void FUN_101b82844(undefined8 *param_1)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112e064d0,&UNK_10d9d9e30);
  func_0x000107c613fc();
  pcVar1 = FUN_101b82b58;
  func_0x0001000841fc();
  func_0x000100084214(&UNK_10d9d9e00,0x29,2);
  *param_1 = pcVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101b8285c; end: 101b82b57;  */

void FUN_101b8285c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar9 = *param_2;
  func_0x0001000285a8(0x112e064d8,&UNK_10d9d9e38);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_101b837fc();
  func_0x000100082720("PhotoPickerScopeGraphBridgeServicesServiceProvider",0x32,2);
  func_0x0001000285a8(0x112e064e0,&UNK_10d9d9e40);
  puVar3 = &UNK_11044e990;
  func_0x000107c613fc(&UNK_11044e990,0x20,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  uVar9 = 0x101b82b60;
  func_0x0001000823a8(0x101b82b60,puVar3);
  func_0x000100082720("SCPhotoPickerEntryPointWrapperServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_101b82588;
  func_0x0001000823a8(FUN_101b82588,0);
  func_0x000100082720("SCPhotoPickerScopedServicesCleanupRelayServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e064e8,&UNK_10d9d9e50);
  puVar3 = &UNK_11044e9b8;
  func_0x000107c613fc(&UNK_11044e9b8,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar9;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x101b82b68;
  func_0x0001000823a8(0x101b82b68,puVar3);
  func_0x000100082720("SCPhotoPickerScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112e06468,&UNK_10d9d9c00);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x101b82b74;
  func_0x0001000823a8(0x101b82b74,uVar5);
  func_0x000100082720("SCPhotoPickerScopeInitializationServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112e06458,&UNK_10d9d9bf0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x101b82b7c;
  func_0x0001000823a8(0x101b82b7c,uVar6);
  func_0x000100082720("SCPhotoPickerScopedServicesServiceProvider",0x2a,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_11044e9e0;
  func_0x000107c613fc(&UNK_11044e9e0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar8 = FUN_101b82bb0;
  func_0x0001000823a8(FUN_101b82bb0,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCPhotoPickerScopeEntryPointProvider",0x24,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 101b82b58; end: 101b82b83;  */

void FUN_101b82b58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar9 = *param_2;
  func_0x0001000285a8(0x112e064d8,&UNK_10d9d9e38);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_101b837fc();
  func_0x000100082720("PhotoPickerScopeGraphBridgeServicesServiceProvider",0x32,2);
  func_0x0001000285a8(0x112e064e0,&UNK_10d9d9e40);
  puVar3 = &UNK_11044e990;
  func_0x000107c613fc(&UNK_11044e990,0x20,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = unaff_x20;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c();
  uVar9 = 0x101b82b60;
  func_0x0001000823a8(0x101b82b60,puVar3);
  func_0x000100082720("SCPhotoPickerEntryPointWrapperServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_101b82588;
  func_0x0001000823a8(FUN_101b82588,0);
  func_0x000100082720("SCPhotoPickerScopedServicesCleanupRelayServiceProvider",0x36,2);
  func_0x0001000285a8(0x112e064e8,&UNK_10d9d9e50);
  puVar3 = &UNK_11044e9b8;
  func_0x000107c613fc(&UNK_11044e9b8,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar9;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x101b82b68;
  func_0x0001000823a8(0x101b82b68,puVar3);
  func_0x000100082720("SCPhotoPickerScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  func_0x0001000285a8(0x112e06468,&UNK_10d9d9c00);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x101b82b74;
  func_0x0001000823a8(0x101b82b74,uVar5);
  func_0x000100082720("SCPhotoPickerScopeInitializationServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112e06458,&UNK_10d9d9bf0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x101b82b7c;
  func_0x0001000823a8(0x101b82b7c,uVar6);
  func_0x000100082720("SCPhotoPickerScopedServicesServiceProvider",0x2a,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_11044e9e0;
  func_0x000107c613fc(&UNK_11044e9e0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar8 = FUN_101b82bb0;
  func_0x0001000823a8(FUN_101b82bb0,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCPhotoPickerScopeEntryPointProvider",0x24,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 101b82b84; end: 101b82baf;  */

void FUN_101b82b84(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101b82bb0; end: 101b82bb7;  */

void FUN_101b82bb0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11044e818;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11044e818;
  return;
}



/* Entry: 101b82bb8; end: 101b82c9f;  */

void FUN_101b82bb8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  FUN_101b82f08();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_101b82dbc(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 101b82ca0; end: 101b82ccb;  */

void FUN_101b82ca0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101b82ccc; end: 101b82cd3;  */

undefined8 FUN_101b82ccc(void)

{
  return 0x1b;
}



/* Entry: 101b82cd4; end: 101b82d57;  */

void FUN_101b82cd4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101b82f48,param_2,FUN_101b82f4c,param_2,FUN_101b82f74,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101b82d58; end: 101b82da7;  */

undefined8 FUN_101b82d58(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101b82da8; end: 101b82dbb;  */

void FUN_101b82da8(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_11044e9f8;
  return;
}



/* Entry: 101b82dbc; end: 101b82eeb;  */

void FUN_101b82dbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a8b80;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f0013e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef20b70);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101b82eec; end: 101b82f07;  */

undefined ** FUN_101b82eec(void)

{
  return &PTR_DAT_113066e38;
}



/* Entry: 101b82f08; end: 101b82f27;  */

void FUN_101b82f08(void)

{
  func_0x000107c61168(&PTR_PTR_112e06558);
  return;
}



/* Entry: 101b82f28; end: 101b82f4b;  */

undefined1  [16] FUN_101b82f28(void)

{
  return ZEXT816(0x11044ea38);
}



/* Entry: 101b82f4c; end: 101b82f73;  */

void FUN_101b82f4c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101b82f74; end: 101b82f7b;  */

undefined8 FUN_101b82f74(void)

{
  undefined8 uVar1;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + 0x10);
  func_0x000107c427dc(uVar1);
  func_0x000107c61180();
  func_0x000107c61574(lStack_28);
  return uVar1;
}



/* Entry: 101b82f7c; end: 101b82fb7;  */

void FUN_101b82f7c(undefined8 *param_1,undefined8 param_2)

{
  FUN_101b82fb8();
  func_0x0001000a7f38("SCPhotoPickerScopeInitializationPluginRegistryServiceProvider",0x3d,2);
  *param_1 = param_2;
  return;
}



/* Entry: 101b82fb8; end: 101b831a3;  */

void FUN_101b82fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074da28;
  ppuVar4 = &PTR_DAT_113066e38;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_11044ea88;
  func_0x000107c613fc(&UNK_11044ea88,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e065c0;
  func_0x0001000285a8(0x112e065c0,&UNK_10d9d9f60);
  func_0x0001000a6ee8(&UNK_11044ec98,"PhotoPickerScopeGraphBridgeScopeInitializationPluginKey",0x37,
                      2,FUN_101b831a4,puVar2,uVar3,&UNK_11044ec98,&PTR_DAT_112e06650);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_11044ea38,"SCPhotoPickerEntryPointWrapperScopeInitializationPluginKey",
                      0x3a,2,FUN_101b83258,param_3,uVar3,&UNK_11044ea38,&PTR_DAT_112e064f0);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_11044eab0;
  func_0x000107c613fc(&UNK_11044eab0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_11044e8a8,"SCPhotoPickerScopedServicesScopeInitializationPluginKey",0x37,
                      2,FUN_101b83308,puVar2,uVar3,&UNK_11044e8a8,&PTR_DAT_112e06470);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e065c8;
  func_0x0001000285a8(0x112e065c8,&UNK_10d9d9f68);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 101b831a4; end: 101b831e3;  */

void FUN_101b831a4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101b838e0(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("PhotoPickerScopeGraphBridgeScopeInitializationPluginProvider",0x3c,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101b831e4; end: 101b83257;  */

void FUN_101b831e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x101b83344;
  func_0x0001000823a8(0x101b83344,param_3);
  func_0x000100082720("SCPhotoPickerEntryPointWrapperScopeInitializationPluginProvider",0x3f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101b83258; end: 101b8325f;  */

void FUN_101b83258(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x101b83344;
  func_0x0001000823a8();
  func_0x000100082720("SCPhotoPickerEntryPointWrapperScopeInitializationPluginProvider",0x3f,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101b83260; end: 101b83307;  */

void FUN_101b83260(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11044ead8;
  func_0x000107c613fc(&UNK_11044ead8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101b8333c;
  func_0x0001000823a8(FUN_101b8333c,puVar1);
  func_0x000100082720("SCPhotoPickerScopedServicesScopeInitializationPluginProvider",0x3c,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101b83308; end: 101b8330f;  */

void FUN_101b83308(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_11044ead8;
  func_0x000107c613fc(&UNK_11044ead8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101b8333c;
  func_0x0001000823a8(FUN_101b8333c,puVar3);
  func_0x000100082720("SCPhotoPickerScopedServicesScopeInitializationPluginProvider",0x3c,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 101b83310; end: 101b8333b;  */

void FUN_101b83310(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101b8333c; end: 101b8334b;  */

void FUN_101b8333c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_11044e930;
  func_0x000107c613fc(&UNK_11044e930,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101b8279c;
  func_0x00010058fa64(FUN_101b8279c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101b8334c; end: 101b833d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101b8334c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_101b8370c();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e065d0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e065d8) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b833d4);
  (*pcVar1)();
}



/* Entry: 101b833d4; end: 101b83433; -[_TtC27PhotoPickerScopeGraphBridge42PhotoPickerScopeGraphBridgeSaberEntryPoint init] */

void FUN_101b833d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PhotoPickerScopeGraphBridge.PhotoPickerScopeGraphBridgeSaberEntryPoint",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b83400);
  (*pcVar1)();
}



/* Entry: 101b83434; end: 101b8346b; -[_TtC27PhotoPickerScopeGraphBridge42PhotoPickerScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101b83450: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b83454) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b83434(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e065d0));
  return;
}



/* Entry: 101b8346c; end: 101b83493;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b8346c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e065d8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e065d0));
  return;
}



/* Entry: 101b83494; end: 101b834b3;  */

void FUN_101b83494(void)

{
  func_0x000107c61168(&PTR_PTR_1127fb458);
  return;
}



/* Entry: 101b834b4; end: 101b8353b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101b834b4(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e06608) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e06610);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101b8353c);
  (*pcVar2)();
}



/* Entry: 101b8353c; end: 101b83623;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101b8353c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e06608);
  *(undefined **)(unaff_x20 + _DAT_112e06608) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e06610);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e06610))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_11044ebf8;
  func_0x000107c613fc(&UNK_11044ebf8,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101b83628,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101b83624; end: 101b8362f;  */

void FUN_101b83624(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101b83630; end: 101b8368f; -[_TtC27PhotoPickerScopeGraphBridge42SCPhotoPickerScopedServicesSaberEntryPoint init] */

void FUN_101b83630(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PhotoPickerScopeGraphBridge.SCPhotoPickerScopedServicesSaberEntryPoint",0x46,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101b8365c);
  (*pcVar1)();
}



/* Entry: 101b83690; end: 101b836c7; -[_TtC27PhotoPickerScopeGraphBridge42SCPhotoPickerScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b83690(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e06610));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e06608));
  return;
}



/* Entry: 101b836c8; end: 101b836cb;  */

void FUN_101b836c8(void)

{
  return;
}



/* Entry: 101b836cc; end: 101b836eb;  */

void FUN_101b836cc(void)

{
  FUN_101b8353c();
  return;
}



/* Entry: 101b836ec; end: 101b8370b;  */

void FUN_101b836ec(void)

{
  func_0x000107c61168(&PTR_PTR_1127fb520);
  return;
}



/* Entry: 101b8370c; end: 101b837db;  */

undefined8 FUN_101b8370c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112e06640,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_101b837dc();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101b837dc; end: 101b837fb;  */

void FUN_101b837dc(void)

{
  func_0x000107c61168(&PTR_PTR_1127fb5e8);
  return;
}



/* Entry: 101b837fc; end: 101b83867;  */

void FUN_101b837fc(void)

{
  func_0x0001000285a8(0x112e06648,&UNK_10d9da018);
  func_0x0001000823a8(0x101b8383c,0);
  return;
}



/* Entry: 101b83868; end: 101b838a3; -[_TtC27PhotoPickerScopeGraphBridge35PhotoPickerScopeGraphBridgeServices init] */

void FUN_101b83868(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101b838a4; end: 101b838d7;  */

void FUN_101b838a4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101b838d8; end: 101b838df;  */

undefined8 FUN_101b838d8(void)

{
  return 0x1b;
}



/* Entry: 101b838e0; end: 101b83a57;  */

void FUN_101b838e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_11044ec40;
  func_0x000107c613fc(&UNK_11044ec40,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101b83a58,puVar1);
  return;
}



/* Entry: 101b83a58; end: 101b83a5f;  */

void FUN_101b83a58(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112e06640,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e06640,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_11044ecd8;
  func_0x000107c613fc(&UNK_11044ecd8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101b83b0c;
  func_0x00010058fa64(0x101b83b0c,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101b83a60; end: 101b83abb;  */

void FUN_101b83a60(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e06640,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e06640,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101b83abc; end: 101b83b13;  */

undefined ** FUN_101b83abc(void)

{
  return &PTR_DAT_113066e38;
}



/* Entry: 101b83b14; end: 101b83b5b; -[SCPhotoPickerScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b83b14(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e066a0;
  func_0x000107c61428(param_1 + _DAT_112e066a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101b83b5c; end: 101b83bb3; -[SCPhotoPickerScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b83b5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e066a0;
  func_0x000107c61428(param_1 + _DAT_112e066a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101b83bb4; end: 101b83bfb; -[SCPhotoPickerScopeGraphBridgeSaberEntryPoint photoPickerScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b83bb4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e066a8;
  func_0x000107c61428(param_1 + _DAT_112e066a8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101b83bfc; end: 101b83c5f; -[SCPhotoPickerScopeGraphBridgeSaberEntryPoint setPhotoPickerScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b83bfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e066a8;
  func_0x000107c61428(param_1 + _DAT_112e066a8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101b83c60; end: 101b83d93;  */

/* WARNING: Possible PIC construction at 0x000101b83d18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b83d34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101b83d50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101b83d1c) */
/* WARNING: Removing unreachable block (ram,0x000101b83d38) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101b83c60(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c4e6f8();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_101b83494();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_101b8370c();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101b83d94);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e065d0) = lVar5;
    *(long *)(lVar4 + _DAT_112e065d8) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101b83d94; end: 101b83dbb; -[SCPhotoPickerScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101b83d94(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101b83c60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101b83dbc; end: 101b83dff; -[SCPhotoPickerScopeGraphBridgeSaberEntryPoint end] */

void FUN_101b83dbc(undefined8 param_1)

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



/* Entry: 101b83e00; end: 101b83f97;  */

void FUN_101b83e00(long param_1,long param_2,long param_3)

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
    if ((param_2 != -0x2fffffffffffffd6) || (param_3 != -0x7ffffffef0ffe9e0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd00000000000002a,0x800000010f001620,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        func_0x000107c602fc(0x15);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c5fb78(param_2,param_3);
        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                            "PhotoPickerScopeGraphBridge/SCPhotoPickerScopeGraphBridgeSaberEntryPoint.swift"
                            ,0x4e,2,0x2f,0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101b83f98);
        (*pcVar1)();
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5737c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}


