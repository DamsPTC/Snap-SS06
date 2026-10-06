/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102c58254; end: 102c58313;  */

undefined8 FUN_102c58254(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_102c5838c(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 102c58314; end: 102c58333;  */

void FUN_102c58314(void)

{
  FUN_102c58518();
  return;
}



/* Entry: 102c58334; end: 102c5835f;  */

void FUN_102c58334(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c58360; end: 102c58383;  */

void FUN_102c58360(void)

{
  FUN_102c58518();
  return;
}



/* Entry: 102c58384; end: 102c5838b;  */

undefined8 FUN_102c58384(void)

{
  return 0;
}



/* Entry: 102c5838c; end: 102c584f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c5838c(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  long *plVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  plVar6 = &lStack_70;
  uVar7 = *(undefined8 *)(param_2 + _DAT_11304a478);
  func_0x000107c6157c(uVar7);
  func_0x0001000d224c(&uStack_60);
  func_0x000107c61574(uVar7);
  *(undefined8 *)(unaff_x20 + 0x18) = uStack_58;
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_60;
  uVar8 = *(undefined8 *)(param_3 + _DAT_112f0ded0);
  uVar7 = *(undefined8 *)(param_1 + _DAT_113068e90);
  func_0x000107c6157c(uVar8);
  func_0x000107c5d17c();
  func_0x000107c61180();
  lVar2 = 0;
  FUN_102c589d0();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar1 = _DAT_112f057f0;
  uVar4 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(lVar3 + lVar1) = uVar4;
  lVar1 = _DAT_112f057f8;
  func_0x0001000285a8(0x112f057d8,&UNK_10db39b20);
  func_0x000107c613fc();
  pcVar5 = FUN_102c58614;
  func_0x0001000bdd8c(FUN_102c58614,0);
  *(code **)(lVar3 + lVar1) = pcVar5;
  *(undefined8 *)(lVar3 + _DAT_112f05800) = 0;
  *(undefined8 *)(lVar3 + _DAT_112f057e0) = uVar8;
  *(undefined8 *)(lVar3 + _DAT_112f057e8) = uVar7;
  lStack_70 = lVar3;
  lStack_68 = lVar2;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  *(long **)(unaff_x20 + 0x20) = plVar6;
  return;
}



/* Entry: 102c584f8; end: 102c58517;  */

void FUN_102c584f8(void)

{
  func_0x000107c61168(&PTR_PTR_112f05770);
  return;
}



/* Entry: 102c58518; end: 102c58613;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c58518(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined1 auStack_68 [24];
  long *plStack_50;
  long lStack_48;
  
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,plStack_50);
  plVar1 = plStack_50;
  (**(code **)(lStack_48 + 8))(plStack_50,lStack_48);
  puVar2 = &UNK_1105b8e00;
  func_0x000107c613fc(&UNK_1105b8e00,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  uVar3 = 0x102c58a5c;
  puVar5 = puVar2;
  (**(code **)(*plVar1 + 0x60))(0x102c58a5c);
  func_0x000107c61574(plVar1);
  func_0x000107c61574(puVar2);
  func_0x0001000834e4(auStack_68);
  uVar4 = uVar3;
  func_0x000107c614f0(uVar3);
  (**(code **)(puVar5 + 0x18))(*(undefined8 *)(unaff_x20 + _DAT_112f057f0),uVar4,puVar5);
  func_0x000107c615e8(uVar3);
  return;
}



/* Entry: 102c58614; end: 102c58643;  */

void FUN_102c58614(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000102c5916c();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 102c58644; end: 102c58707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

code * FUN_102c58644(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = _DAT_112f05800;
  pcVar2 = *(code **)(unaff_x20 + _DAT_112f05800);
  pcVar4 = pcVar2;
  if (pcVar2 == (code *)0x0) {
    puVar3 = &UNK_1105b8dd8;
    func_0x000107c613fc(&UNK_1105b8dd8,0x18,7);
    *(long *)(puVar3 + 0x10) = unaff_x20;
    func_0x0001000285a8(0x112f05830,&UNK_10db39b48);
    func_0x000107c613fc();
    func_0x000107c61174();
    pcVar4 = FUN_102c58a54;
    func_0x0001000bdd8c(FUN_102c58a54,puVar3);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(code **)(unaff_x20 + lVar1) = pcVar4;
    func_0x000107c6157c();
    func_0x000107c61574(uVar5);
    pcVar2 = (code *)0x0;
  }
  func_0x000107c6157c(pcVar2);
  return pcVar4;
}



/* Entry: 102c58708; end: 102c58907;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c58708(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  puVar1 = PTR_PTR_1126b0a08;
  func_0x000107c610f8();
  func_0x000107c48e8c();
  func_0x000107c61170(uStack_38);
  func_0x000107c52aa4(puVar1,param_3,1);
  func_0x000107c52684(puVar1,param_3,10);
  func_0x000107c5a070(puVar1,param_3,2);
  func_0x000107c5a06c(puVar1,param_3,0);
  *param_1 = puVar1;
  return;
}



/* Entry: 102c58908; end: 102c58967; -[_TtC24AdPlaybackImplementation23AdAboutGenAIAdsWorkflow init] */

void FUN_102c58908(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlaybackImplementation.AdAboutGenAIAdsWorkflow",0x30,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c58934);
  (*pcVar1)();
}



/* Entry: 102c58968; end: 102c589cf; -[_TtC24AdPlaybackImplementation23AdAboutGenAIAdsWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c58984: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c589a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c58988) */
/* WARNING: Removing unreachable block (ram,0x000102c589a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c58968(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f057e0));
  return;
}



/* Entry: 102c589d0; end: 102c589ef;  */

void FUN_102c589d0(void)

{
  func_0x000107c61168(&PTR_PTR_112899e80);
  return;
}



/* Entry: 102c589f0; end: 102c58a53; -[_TtC24AdPlaybackImplementation23AdAboutGenAIAdsWorkflow didSelectDismissalActionWithHeaderItem:] */

void FUN_102c589f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_28;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102c58644();
  func_0x0001000d224c(&uStack_28);
  func_0x000107c61574(uVar1);
  func_0x000107c42018(uStack_28,param_2,1);
  func_0x000107c61170(uStack_28);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102c58a54; end: 102c58a63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c58a54(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  puVar1 = PTR_PTR_1126b0a08;
  func_0x000107c610f8();
  func_0x000107c48e8c();
  func_0x000107c61170(uStack_38);
  func_0x000107c52aa4(puVar1,param_3,1);
  func_0x000107c52684(puVar1,param_3,10);
  func_0x000107c5a070(puVar1,param_3,2);
  func_0x000107c5a06c(puVar1,param_3,0);
  *param_1 = puVar1;
  return;
}



/* Entry: 102c58a64; end: 102c58a6f; -[_TtC24AdPlaybackImplementation36AdGenAILegalDisclaimerViewController init] */

void FUN_102c58a64(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c02f990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  return;
}



/* Entry: 102c58a70; end: 102c58b5f;  */

undefined1 * FUN_102c58a70(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c6142c(param_2);
  }
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_initWithNibName_bundle_transitio_1125e9860,
                      param_1,param_3,0);
  func_0x000107c61170(param_1);
  func_0x000107c61174(puVar1);
  func_0x000107c5772c();
  puVar2 = puVar1;
  func_0x000107c5a304(puVar1);
  func_0x000107c2bb8c();
  func_0x000107c61180();
  func_0x000107c59e18(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 102c58b60; end: 102c58bbf; -[_TtC24AdPlaybackImplementation36AdGenAILegalDisclaimerViewController initWithNibName:bundle:] */

void FUN_102c58b60(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  func_0x000107c61174(param_4);
  FUN_102c58a70(param_3,param_2,param_4);
  return;
}



/* Entry: 102c58bc0; end: 102c58c17; -[_TtC24AdPlaybackImplementation36AdGenAILegalDisclaimerViewController initWithCoder:] */

void FUN_102c58bc0(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "AdPlaybackImplementation/AdGenAILegalDisclaimerViewController.swift",0x43,2,
                      0x13,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c58c18);
  (*pcVar1)();
}



/* Entry: 102c58c18; end: 102c590e3;  */

void FUN_102c58c18(void)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  puVar2 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  puVar8 = PTR_s_loadView_112604be0;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_loadView_112604be0);
  func_0x000102c58df8();
  puVar3 = puVar2;
  func_0x000107c2bb90();
  func_0x000107c61180();
  if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102c58dec);
    (*pcVar1)();
  }
  puVar4 = puVar3;
  func_0x000107c5faec();
  func_0x000107c61170(puVar3);
  puVar9 = puVar8;
  FUN_102c591e8(puVar4,puVar8);
  func_0x000107c6142c(puVar8);
  puVar3 = puVar2;
  func_0x000107c3d5b4();
  func_0x000107c2bb94();
  func_0x000107c61180();
  if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102c58df0);
    (*pcVar1)();
  }
  puVar5 = puVar3;
  func_0x000107c5faec();
  func_0x000107c61170(puVar3);
  puVar8 = puVar9;
  func_0x000102c594b0(puVar5,puVar9);
  func_0x000107c6142c(puVar9);
  puVar3 = puVar2;
  func_0x000107c3d5b4();
  FUN_102c59778();
  func_0x000107c3d5b4(puVar2);
  func_0x000107c61170();
  func_0x000107c2bb98();
  func_0x000107c61180();
  if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102c58df4);
    (*pcVar1)();
  }
  puVar6 = puVar3;
  func_0x000107c5faec();
  func_0x000107c61170(puVar3);
  puVar9 = puVar8;
  FUN_102c591e8(puVar6,puVar8);
  func_0x000107c6142c(puVar8);
  puVar3 = puVar2;
  func_0x000107c3d5b4();
  func_0x000107c2bb9c();
  func_0x000107c61180();
  if (puVar3 != (undefined1 *)0x0) {
    puVar7 = puVar3;
    func_0x000107c5faec();
    func_0x000107c61170(puVar3);
    func_0x000102c594b0(puVar7,puVar9);
    func_0x000107c6142c(puVar9);
    func_0x000107c3d5b4(puVar2);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c58df8);
  (*pcVar1)();
}



/* Entry: 102c590e4; end: 102c5910b; -[_TtC24AdPlaybackImplementation36AdGenAILegalDisclaimerViewController loadView] */

void FUN_102c590e4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102c58c18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c5910c; end: 102c591e7; -[_TtC24AdPlaybackImplementation36AdGenAILegalDisclaimerViewController initWithNibName:bundle:transitionType:] */

void FUN_102c5910c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlaybackImplementation.AdGenAILegalDisclaimerViewController",0x3d,
                      "init(nibName:bundle:transitionType:)",0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c59138);
  (*pcVar1)();
}



/* Entry: 102c591e8; end: 102c59777;  */

undefined * FUN_102c591e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f8(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x000107c453e4();
  func_0x000107c56ba8();
  func_0x000107c59c74(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c61168();
  func_0x000107c4179c(0x4030000000000000);
  func_0x000107c61180();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar4 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c566f8(0x4038000000000000);
  func_0x000107c56394(0x4038000000000000,puVar4);
  lVar5 = 0x112d48380;
  func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
  func_0x000107c61534();
  *(undefined8 *)(lVar5 + 0x18) = 8;
  *(undefined8 *)(lVar5 + 0x10) = 4;
  uVar9 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  *(undefined8 *)(lVar5 + 0x20) = uVar9;
  uVar6 = 0x112f05860;
  func_0x0001000285a8(0x112f05860,&UNK_10db39b80);
  *(undefined **)(lVar5 + 0x28) = puVar2;
  uVar10 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  *(undefined8 *)(lVar5 + 0x40) = uVar6;
  *(undefined8 *)(lVar5 + 0x48) = uVar10;
  uVar6 = 0;
  FUN_102c59878(0,0x112d48390,&PTR__OBJC_CLASS___UIColor_1126aea70);
  *(undefined **)(lVar5 + 0x50) = puVar3;
  uVar11 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820;
  *(undefined8 *)(lVar5 + 0x68) = uVar6;
  *(undefined8 *)(lVar5 + 0x70) = uVar11;
  uVar6 = 0;
  FUN_102c59878(0,0x112ec7bd8,&PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00);
  *(undefined **)(lVar5 + 0x78) = puVar4;
  uVar12 = *(undefined8 *)PTR__NSKernAttributeName_110345808;
  *(undefined8 *)(lVar5 + 0x90) = uVar6;
  *(undefined8 *)(lVar5 + 0x98) = uVar12;
  *(undefined **)(lVar5 + 0xb8) = PTR___sSiN_11034deb0;
  *(undefined8 *)(lVar5 + 0xa0) = 0;
  func_0x000107c61174(uVar9);
  func_0x000107c61174(puVar2);
  func_0x000107c61174(uVar10);
  func_0x000107c61174(puVar3);
  func_0x000107c61174(uVar11);
  func_0x000107c61174(puVar4);
  func_0x000107c61174(uVar12);
  lVar7 = lVar5;
  func_0x000100ecbca8(lVar5);
  func_0x000107c61588(lVar5);
  uVar6 = 0x112d48398;
  func_0x0001000285a8(0x112d48398,&UNK_10d90f130);
  func_0x000107c61408((undefined8 *)(lVar5 + 0x20),4,uVar6);
  puVar8 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  func_0x000107c5fadc(param_1,param_2);
  uVar9 = 0;
  func_0x000100eca28c(0);
  uVar6 = uVar9;
  func_0x000100ecbdec();
  lVar5 = lVar7;
  func_0x000107c5f9dc(lVar7,uVar9,PTR___sypN_11034f1a8 + 8,uVar6);
  func_0x000107c6142c(lVar7);
  func_0x000107c48af8(puVar8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar5);
  func_0x000107c529c4(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar8);
  return puVar1;
}



/* Entry: 102c59778; end: 102c59877;  */

undefined * FUN_102c59778(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c5a050();
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar3 + 0x18) = 3;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  puVar4 = puVar1;
  func_0x000107c44d9c();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40290(0x4024000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  *(undefined **)(puVar3 + 0x20) = puVar5;
  uVar6 = 0;
  FUN_102c59878(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar4 = puVar3;
  func_0x000107c5fc48(puVar3,uVar6);
  func_0x000107c61574(puVar3);
  func_0x000107c3d048(puVar2);
  func_0x000107c61170(puVar4);
  return puVar1;
}



/* Entry: 102c59878; end: 102c598b7;  */

void FUN_102c59878(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102c598b8; end: 102c59bcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c598b8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lVar12;
  undefined8 uVar13;
  
  lVar1 = unaff_x20;
  func_0x000107c5c270();
  if (lVar1 == 3) {
    lVar12 = *(long *)(unaff_x20 + _DAT_11308c088);
    uVar11 = 0xffffffffffffffff;
    FUN_102c59e44();
    lVar2 = lVar1;
    func_0x000107c30ad8();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar11);
    }
    func_0x000107c3e30c();
    puVar3 = PTR_PTR_1126b8fa8;
    func_0x000107c610f8(PTR_PTR_1126b8fa8);
    lVar4 = lVar2;
    func_0x000107c30b18();
    func_0x000107c61170(lVar2);
    lVar2 = lVar1;
    func_0x000107c30ad8();
    func_0x000107c61180();
    if (lVar2 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(lVar4);
    }
    lVar4 = unaff_x20;
    func_0x000107c5cd28();
    func_0x000107c61180();
    uVar11 = 0;
    if (lVar4 != 0) {
      func_0x000107c5bb6c();
      func_0x000107c61170(lVar4);
      uVar11 = param_1;
    }
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c466c0(uVar11);
    lVar4 = unaff_x20;
    func_0x000107c5cd28();
    func_0x000107c61180();
    uVar11 = 0;
    if (lVar4 != 0) {
      func_0x000107c5bb6c();
      func_0x000107c61170(lVar4);
      uVar11 = param_2;
    }
    puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c466c0(uVar11);
    lVar4 = unaff_x20;
    func_0x000107c5cd28();
    func_0x000107c61180();
    uVar13 = 0;
    if (lVar4 != 0) {
      func_0x000107c5baf8();
      func_0x000107c61170(lVar4);
      uVar13 = uVar11;
    }
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c466c0(uVar13);
    lVar4 = unaff_x20;
    func_0x000107c5cd28();
    func_0x000107c61180();
    uVar11 = 0;
    if (lVar4 != 0) {
      func_0x000107c5bafc();
      func_0x000107c61170(lVar4);
      uVar11 = uVar13;
    }
    puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c466c0(uVar11);
    uVar11 = *(undefined8 *)(lVar12 + _DAT_11308c9e8);
    puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c466c0(uVar11);
    func_0x000107c5cd28();
    func_0x000107c61180();
    if (unaff_x20 != 0) {
      func_0x000107c5c714();
      func_0x000107c61170(unaff_x20);
    }
    puVar10 = PTR_PTR_1126b8fb0;
    func_0x000107c610f8(PTR_PTR_1126b8fb0);
    func_0x000107c30c68();
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(lVar2);
    func_0x00010468506c(0);
    func_0x000107c610f8();
    func_0x000104684b9c(lVar1,puVar3,puVar10);
  }
  return;
}



/* Entry: 102c59bd0; end: 102c59e43;  */

/* WARNING: Possible PIC construction at 0x000102c59c30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c59cb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c59d20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c59df4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c59e04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c59e1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c59e08) */
/* WARNING: Removing unreachable block (ram,0x000102c59df8) */
/* WARNING: Removing unreachable block (ram,0x000102c59d24) */
/* WARNING: Removing unreachable block (ram,0x000102c59d50) */
/* WARNING: Removing unreachable block (ram,0x000102c59d90) */
/* WARNING: Removing unreachable block (ram,0x000102c59d58) */
/* WARNING: Removing unreachable block (ram,0x000102c59d60) */
/* WARNING: Removing unreachable block (ram,0x000102c59d2c) */
/* WARNING: Removing unreachable block (ram,0x000102c59d74) */
/* WARNING: Removing unreachable block (ram,0x000102c59d34) */
/* WARNING: Removing unreachable block (ram,0x000102c59d3c) */
/* WARNING: Removing unreachable block (ram,0x000102c59da0) */
/* WARNING: Removing unreachable block (ram,0x000102c59e10) */
/* WARNING: Removing unreachable block (ram,0x000102c59dcc) */
/* WARNING: Removing unreachable block (ram,0x000102c59cb4) */
/* WARNING: Removing unreachable block (ram,0x000102c59c34) */
/* WARNING: Removing unreachable block (ram,0x000102c59e20) */

void FUN_102c59bd0(undefined8 param_1)

{
  FUN_102c59e44(param_1,0xffffffffffffffff);
  func_0x000107c30ad8();
  func_0x000107c61180();
  func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c59e44; end: 102c5a233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102c59e44(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x1e);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f09d460);
  lVar3 = ((undefined8 *)(unaff_x20 + _DAT_11308c9d0))[1];
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_11308c9d0);
  }
  lVar2 = -0x2000000000000000;
  if (lVar3 != 0) {
    lVar2 = lVar3;
  }
  func_0x000107c61434();
  func_0x000107c5fb78(uVar1,lVar2);
  func_0x000107c6142c(lVar2);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  puVar4 = PTR___sSiN_11034deb0;
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
  func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar6);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  func_0x000107c6057c(puVar4,puVar7);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar7);
  func_0x000107c5fb78(0x5f,0xe100000000000000);
  func_0x000107c5fddc(*(undefined8 *)(unaff_x20 + _DAT_11308c9e8),&uStack_50,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  uVar1 = uStack_48;
  uVar5 = uStack_50;
  FUN_102c5a2ec(uStack_50,uStack_48);
  func_0x000107c6142c(uVar1);
  return uVar5;
}



/* Entry: 102c5a234; end: 102c5a293; -[_TtC24AdPlaybackImplementation38AdChromeInteractionAdTrackEventAdaptor init] */

void FUN_102c5a234(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlaybackImplementation.AdChromeInteractionAdTrackEventAdaptor",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c5a260);
  (*pcVar1)();
}



/* Entry: 102c5a294; end: 102c5a2cb; -[_TtC24AdPlaybackImplementation38AdChromeInteractionAdTrackEventAdaptor .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c5a294(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f05870));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f05878));
  return;
}



/* Entry: 102c5a2cc; end: 102c5a2eb;  */

void FUN_102c5a2cc(void)

{
  func_0x000107c61168(&PTR_PTR_11289a010);
  return;
}



/* Entry: 102c5a2ec; end: 102c5a6eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102c5a2ec(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar6 = ((undefined8 *)(unaff_x20 + _DAT_11308c9d0))[1];
  if (lVar6 == 0) {
    uVar10 = 0;
    lVar6 = -0x2000000000000000;
  }
  else {
    uVar10 = *(undefined8 *)(unaff_x20 + _DAT_11308c9d0);
  }
  if (-1 < *(long *)(unaff_x20 + _DAT_11308ca00)) {
    if (-1 < *(long *)(unaff_x20 + _DAT_11308ca08)) {
      uVar9 = *(undefined8 *)(unaff_x20 + _DAT_11308c9f0);
      lVar1 = ((undefined8 *)(unaff_x20 + _DAT_11308c9f0))[1];
      uVar11 = *(undefined8 *)(unaff_x20 + _DAT_11308c9f8);
      lVar2 = ((undefined8 *)(unaff_x20 + _DAT_11308c9f8))[1];
      uVar12 = *(undefined8 *)(unaff_x20 + _DAT_11308ca20);
      lVar3 = ((undefined8 *)(unaff_x20 + _DAT_11308ca20))[1];
      uVar13 = *(undefined8 *)(unaff_x20 + _DAT_11308c9e8);
      uVar8 = *(undefined8 *)(unaff_x20 + _DAT_11308ca38);
      lVar4 = ((undefined8 *)(unaff_x20 + _DAT_11308ca38))[1];
      func_0x000107c61434();
      func_0x000107c5fadc(param_1,param_2);
      func_0x000107c5fadc(uVar10,lVar6);
      func_0x000107c6142c(lVar6);
      if (lVar1 == 0) {
        uVar9 = 0;
      }
      else {
        func_0x000107c5fadc(uVar9,lVar1);
      }
      if (lVar2 == 0) {
        uVar11 = 0;
      }
      else {
        func_0x000107c5fadc(uVar11,lVar2);
      }
      if (lVar3 == 0) {
        uVar12 = 0;
      }
      else {
        func_0x000107c5fadc(uVar12,lVar3);
      }
      if (lVar4 == 0) {
        uVar8 = 0;
      }
      else {
        func_0x000107c5fadc(uVar8,lVar4);
      }
      puVar7 = PTR_PTR_1126b9150;
      func_0x000107c610f8(PTR_PTR_1126b9150);
      func_0x000107c30ad4(uVar13);
      func_0x000107c61170(param_1);
      func_0x000107c61170(uVar10);
      func_0x000107c61170(uVar9);
      func_0x000107c61170(uVar11);
      func_0x000107c61170(uVar12);
      func_0x000107c61170(uVar8);
      return puVar7;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x102c5a594);
    (*pcVar5)();
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x102c5a590);
  (*pcVar5)();
}



/* Entry: 102c5a6ec; end: 102c5a72f;  */

void FUN_102c5a6ec(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c5a730; end: 102c5c59b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102c5a730(long param_1,long param_2,long param_3,long param_4,long param_5,
                  undefined8 param_6,long param_7,long param_8,long param_9,long param_10,
                  long param_11,long param_12,undefined8 param_13,long param_14)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  char *pcVar7;
  char *pcVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 *puVar11;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  code *pcVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long alStack_290 [2];
  code *pcStack_280;
  undefined8 uStack_278;
  char *pcStack_270;
  long *plStack_268;
  long *plStack_260;
  long lStack_258;
  long *plStack_250;
  undefined *puStack_248;
  long *plStack_240;
  long *plStack_238;
  long lStack_230;
  long *plStack_228;
  long lStack_220;
  long *plStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined8 *puStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long *plStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  undefined8 uStack_148;
  long lStack_140;
  long *plStack_138;
  long *plStack_130;
  long lStack_128;
  long *plStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  long lStack_100;
  long lStack_f8;
  undefined8 auStack_f0 [3];
  long *plStack_d8;
  undefined **ppuStack_d0;
  undefined1 auStack_c8 [24];
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long alStack_90 [3];
  undefined8 uStack_78;
  
  lStack_158 = param_12;
  lStack_150 = param_11;
  lStack_160 = param_10;
  lStack_178 = param_7;
  uStack_148 = param_6;
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  uVar12 = *(undefined8 *)(param_3 + _DAT_11304a478);
  lStack_140 = unaff_x20;
  func_0x000107c6157c(uVar12);
  func_0x0001000d224c(&plStack_130);
  func_0x000107c61574(uVar12);
  lStack_168 = lStack_128;
  plStack_170 = plStack_130;
  uVar12 = *(undefined8 *)(param_4 + _DAT_113043d30);
  func_0x000107c6157c(uVar12);
  func_0x0001000d224c(&plStack_130);
  func_0x000107c61574(uVar12);
  plStack_138 = plStack_130;
  uVar12 = *(undefined8 *)(param_8 + _DAT_113010a50);
  func_0x000107c6157c(uVar12);
  func_0x0001000d224c(&plStack_130);
  func_0x000107c61574(uVar12);
  plVar4 = plStack_130;
  FUN_102c5c59c(param_5 + _DAT_112f05cb0,&plStack_130);
  if (plStack_118 == (long *)0x0) {
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(lStack_160);
    func_0x000107c61170(lStack_158);
    func_0x000107c61170(lStack_150);
    func_0x000107c61170(lStack_178);
    func_0x000107c61170(uStack_148);
    func_0x000107c61170(param_13);
    func_0x000107c61170(param_14);
    func_0x000107c615e8(plVar4);
    func_0x000107c615e8(plStack_138);
    func_0x000107c615e8(plStack_170);
    func_0x000102c5c5ec(&plStack_130);
    return lStack_140;
  }
  uStack_1a0 = param_13;
  lStack_198 = param_14;
  lStack_190 = param_4;
  lStack_188 = param_8;
  lStack_180 = param_5;
  FUN_102c5c634(&plStack_130,alStack_90);
  lVar1 = *(long *)(param_9 + _DAT_11306ce28);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c61170(param_3);
    func_0x000107c61170(lStack_190);
    func_0x000107c61170(lStack_188);
    func_0x000107c61170(lStack_180);
  }
  else {
    lStack_1a8 = param_9;
    lVar2 = *(long *)(param_3 + _DAT_11304a480);
    func_0x000107c5c734();
    func_0x000107c61180();
    plVar6 = plStack_138;
    if (lVar2 != 0) {
      lStack_1e0 = _DAT_113068e88;
      uVar13 = *(undefined8 *)(param_1 + _DAT_113068e88);
      puStack_1d8 = (undefined8 *)(param_1 + _DAT_113068e80);
      plStack_1d0 = (long *)_DAT_113069010;
      uVar14 = *(undefined8 *)(param_2 + _DAT_113069010);
      uVar12 = *puStack_1d8;
      uVar15 = puStack_1d8[1];
      lStack_1e8 = _DAT_113069008;
      uVar19 = *(undefined8 *)(param_2 + _DAT_113069008);
      lVar3 = 0;
      lStack_220 = param_3;
      lStack_1b8 = param_1;
      lStack_1b0 = lVar1;
      FUN_102c63b38();
      lVar1 = lVar3;
      func_0x000107c610f8();
      *(undefined8 *)(lVar1 + _DAT_112f05db8) = uVar13;
      puVar11 = (undefined8 *)(lVar1 + _DAT_112f05dc0);
      *puVar11 = uVar12;
      puVar11[1] = uVar15;
      *(undefined8 *)(lVar1 + _DAT_112f05dc8) = uVar14;
      plVar10 = (long *)(lVar1 + _DAT_112f05dd0);
      plVar10[1] = lStack_168;
      *plVar10 = (long)plStack_170;
      *(long *)(lVar1 + _DAT_112f05dd8) = lVar2;
      *(long **)(lVar1 + _DAT_112f05de0) = plVar6;
      *(undefined8 *)(lVar1 + _DAT_112f05df0) = uVar19;
      plStack_228 = plVar4;
      *(long **)(lVar1 + _DAT_112f05de8) = plVar4;
      puVar9 = PTR_s_init_1125d9248;
      lStack_1f0 = lVar2;
      lStack_a0 = lVar1;
      lStack_98 = lVar3;
      func_0x000107c615f0(uVar13);
      func_0x000107c61434(uVar15);
      func_0x000107c61174(uVar14);
      plStack_218 = plStack_170;
      func_0x000107c615f0();
      func_0x000107c615f0(lVar2);
      func_0x000107c615f0(plVar6);
      func_0x000107c615f0(plVar4);
      plVar4 = &lStack_a0;
      func_0x000107c61154(plVar4,puVar9);
      uVar12 = *(undefined8 *)(param_2 + (long)plStack_1d0);
      lVar3 = 0;
      plStack_240 = plVar4;
      FUN_102c5a2cc();
      lVar2 = lVar3;
      func_0x000107c610f8();
      lVar1 = lStack_1b0;
      *(undefined8 *)(lVar2 + _DAT_112f05870) = uVar12;
      *(long *)(lVar2 + _DAT_112f05878) = lStack_1b0;
      puVar9 = PTR_s_init_1125d9248;
      lStack_b0 = lVar2;
      lStack_a8 = lVar3;
      func_0x000107c61174(uVar12);
      func_0x000107c615f0(lVar1);
      plVar4 = &lStack_b0;
      func_0x000107c61154(plVar4,puVar9);
      uVar15 = uStack_148;
      plStack_268 = plVar4;
      func_0x000107c5d254();
      func_0x000107c61180();
      lVar3 = lStack_1b8;
      lVar1 = lStack_1b8 + _DAT_113068e98;
      uVar12 = *(undefined8 *)(lVar1 + 0x18);
      lVar2 = *(long *)(lVar1 + 0x20);
      uStack_1c8 = uVar15;
      func_0x0001000a8868(lVar1,uVar12);
      (**(code **)(lVar2 + 0x38))();
      uVar15 = uVar12;
      func_0x000107c614f0();
      (**(code **)(lVar2 + 8))();
      plStack_250 = (long *)lVar2;
      uStack_1c0 = uVar15;
      func_0x000107c615e8(uVar12);
      lVar16 = *(long *)(lVar3 + _DAT_113068ea0);
      plVar5 = (long *)0x0;
      func_0x000102c5a710();
      plVar6 = plVar5;
      func_0x000107c613fc();
      plVar6[2] = lVar16;
      lVar2 = _DAT_113069018;
      uVar14 = *(undefined8 *)(lVar3 + _DAT_113068e90);
      uStack_200 = uVar14;
      func_0x000107c61428(param_2 + _DAT_113069018,auStack_c8,0,0);
      plVar4 = (long *)(param_2 + lVar2);
      func_0x000107c61618();
      uVar18 = *(undefined8 *)(lVar3 + lStack_1e0);
      alStack_290[0] = *(long *)(lStack_160 + _DAT_11308b850);
      lStack_1e0 = *(undefined8 *)(param_2 + (long)plStack_1d0);
      uStack_210 = *(undefined8 *)(param_2 + _DAT_113068ff8);
      puStack_248 = *(undefined **)(param_2 + lStack_1e8);
      uVar13 = *(undefined8 *)(lStack_158 + _DAT_11308d048);
      lStack_258 = *puStack_1d8;
      uVar12 = puStack_1d8[1];
      uVar15 = *(undefined8 *)(lStack_150 + _DAT_112f0ded0);
      pcStack_270 = *(char **)(lVar1 + 0x18);
      lVar2 = *(long *)(lVar1 + 0x20);
      alStack_290[1] = lVar2;
      lStack_230 = param_2;
      uStack_208 = uVar15;
      uStack_1f8 = uVar13;
      plStack_170 = plVar4;
      func_0x0001000a8868(lVar1);
      pcStack_280 = *(code **)(lVar2 + 8);
      func_0x000107c615f0(lVar16);
      plStack_238 = plVar6;
      func_0x000107c6157c(plVar6);
      func_0x000107c615f0(uVar14);
      plVar4 = plStack_240;
      func_0x000107c61174();
      plStack_260 = plVar4;
      func_0x000107c615f0(uVar18);
      func_0x000107c61434(uVar12);
      plVar4 = plStack_268;
      func_0x000107c61174();
      lVar1 = alStack_290[0];
      plStack_1d0 = plVar4;
      func_0x000107c61174();
      puStack_1d8 = (undefined8 *)lVar1;
      func_0x000107c61174();
      lVar1 = lStack_198;
      func_0x000107c61174();
      lStack_1e8 = lVar1;
      func_0x000107c61174();
      func_0x000107c615f0(uStack_210);
      func_0x000107c6157c(uVar13);
      func_0x000107c6157c(uVar15);
      lVar2 = lStack_1f0;
      func_0x000107c615f0(lStack_1f0);
      plVar10 = plStack_138;
      func_0x000107c615f0(plStack_138);
      pcVar7 = pcStack_270;
      (*pcStack_280)(pcStack_270,alStack_290[1]);
      pcVar8 = 
      "init(profileFeatureLauncher:chromeEventSession:adTrackHelper:adPlaybackUIProvider:adPlaybackDelegate:pagePropertiesProvider:adDataSource:adPageId:adTrackEventAdaptor:adTrackSeqNumProvider:adPlaybackConfig:attachmentHandlerScopeExposer:attachmentHandlerScopeBuilder:adConfigProvider:adConfigProviderObjc:externalPresenter:viewLocation:webBrowsingConfigProvider:pageEventStream:adLifecycleEventObservableV2:mainQueuePerformer:)"
      ;
      plStack_268 = (long *)pcVar7;
      func_0x0001000c10c0();
      func_0x000107c61180();
      ppuStack_110 = &PTR_DAT_1105b8e18;
      lVar3 = 0;
      pcStack_270 = pcVar8;
      plStack_130 = plVar6;
      plStack_118 = plVar5;
      FUN_102c6231c();
      lStack_198 = lVar3;
      func_0x000107c610f8();
      func_0x0001000c6518(&plStack_130,plVar5);
      plStack_240 = alStack_290;
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(plVar5[-1] + 0x40));
      puVar11 = (undefined8 *)((long)alStack_290 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
      (**(code **)(extraout_x12 + 0x10))(puVar11);
      lVar1 = _DAT_112f05a28;
      auStack_f0[0] = *puVar11;
      ppuStack_d0 = &PTR_DAT_1105b8e18;
      puVar9 = PTR_PTR_1126aeea8;
      plStack_d8 = plVar5;
      func_0x000107c610f8();
      func_0x000107c453e4();
      *(undefined **)(lVar3 + lVar1) = puVar9;
      lVar1 = _DAT_112f05a98;
      uVar15 = 0;
      func_0x0001005f60b4();
      func_0x000107c613fc();
      func_0x0001005f60d4();
      *(undefined8 *)(lVar3 + lVar1) = uVar15;
      lVar1 = _DAT_112f05aa0;
      func_0x000107c61614(lVar3 + _DAT_112f05aa0,0);
      *(undefined8 *)(lVar3 + _DAT_112f05aa8) = 0;
      *(undefined8 *)(lVar3 + _DAT_112f05ab0) = 0;
      *(undefined8 *)(lVar3 + _DAT_112f05ab8) = 0;
      *(undefined8 *)(lVar3 + _DAT_112f05ac0) = 0;
      puVar11 = (undefined8 *)(lVar3 + _DAT_112f05ac8);
      *puVar11 = 0;
      puVar11[1] = 0;
      *(undefined1 *)(puVar11 + 2) = 1;
      *(undefined8 *)(lVar3 + _DAT_112f05ad0) = 0;
      *(undefined8 *)(lVar3 + _DAT_112f059f0) = uStack_1c8;
      puVar11 = (undefined8 *)(lVar3 + _DAT_112f059f8);
      *puVar11 = uStack_1c0;
      puVar11[1] = plStack_250;
      FUN_102c5c64c(auStack_f0,lVar3 + _DAT_112f05a00);
      uVar14 = uStack_200;
      *(undefined8 *)(lVar3 + _DAT_112f05a08) = uStack_200;
      func_0x000107c61604(lVar3 + lVar1,plStack_170);
      uVar19 = uStack_1f8;
      uVar13 = uStack_208;
      uVar15 = uStack_210;
      plVar6 = plStack_260;
      plVar4 = plStack_268;
      pcVar8 = pcStack_270;
      *(long **)(lVar3 + _DAT_112f05a10) = plStack_260;
      puVar11 = (undefined8 *)(lVar3 + _DAT_112f05a18);
      *puVar11 = lStack_258;
      puVar11[1] = uVar12;
      *(undefined8 *)(lVar3 + _DAT_112f05a20) = uVar18;
      *(long **)(lVar3 + _DAT_112f05a30) = plStack_1d0;
      *(undefined8 **)(lVar3 + _DAT_112f05a38) = puStack_1d8;
      *(long *)(lVar3 + _DAT_112f05a40) = lStack_1e0;
      *(long *)(lVar3 + _DAT_112f05a48) = lStack_1e8;
      *(undefined8 *)(lVar3 + _DAT_112f05a50) = uStack_1a0;
      *(long **)(lVar3 + _DAT_112f05a58) = plVar10;
      *(long *)(lVar3 + _DAT_112f05a60) = lVar2;
      *(undefined8 *)(lVar3 + _DAT_112f05a68) = uStack_210;
      *(undefined **)(lVar3 + _DAT_112f05a70) = puStack_248;
      *(undefined8 *)(lVar3 + _DAT_112f05a78) = uStack_1f8;
      *(undefined8 *)(lVar3 + _DAT_112f05a80) = uStack_208;
      *(long **)(lVar3 + _DAT_112f05a88) = plStack_268;
      *(char **)(lVar3 + _DAT_112f05a90) = pcStack_270;
      lStack_f8 = lStack_198;
      puStack_248 = PTR_s_init_1125d9248;
      uStack_278 = uVar18;
      lStack_100 = lVar3;
      func_0x000107c615f0(lVar2);
      func_0x000107c615f0(plVar10);
      func_0x000107c615f0(uVar14);
      func_0x000107c61174();
      plStack_250 = plVar6;
      func_0x000107c615f0(uVar18);
      plVar10 = plStack_1d0;
      func_0x000107c61174();
      puVar11 = puStack_1d8;
      plStack_1d0 = plVar10;
      func_0x000107c61174();
      lVar2 = lStack_1e0;
      lStack_258 = (long)puVar11;
      func_0x000107c61174(lStack_1e0);
      lVar1 = lStack_1e8;
      func_0x000107c61174();
      uVar14 = uStack_1a0;
      puStack_1d8 = (undefined8 *)lVar1;
      func_0x000107c61174();
      uStack_1a0 = uVar14;
      func_0x000107c615f0(uVar15);
      func_0x000107c6157c(uVar19);
      func_0x000107c6157c(uVar13);
      uVar13 = uStack_1c8;
      func_0x000107c61174();
      uVar12 = uStack_1c0;
      func_0x000107c615f0(uStack_1c0);
      func_0x000107c6157c(plVar4);
      func_0x000107c615f0(pcVar8);
      plVar5 = &lStack_100;
      func_0x000107c61154(plVar5,puStack_248);
      func_0x000107c61170(uVar13);
      func_0x000107c615e8(uVar12);
      func_0x000107c615e8(uStack_200);
      plVar6 = plStack_250;
      func_0x000107c61170(plStack_250);
      func_0x000107c615e8(uStack_278);
      func_0x000107c61170(plVar10);
      func_0x000107c61170(lStack_258);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(uVar14);
      plVar10 = plStack_138;
      func_0x000107c615e8(plStack_138);
      lVar3 = lStack_1f0;
      func_0x000107c615e8(lStack_1f0);
      func_0x000107c615e8(uVar15);
      func_0x000107c61574(uStack_1f8);
      func_0x000107c61574(uStack_208);
      func_0x000107c61574(plVar4);
      func_0x000107c615e8(pcVar8);
      func_0x000107c615e8(plStack_170);
      FUN_102c5c690(auStack_f0);
      FUN_102c5c690(&plStack_130);
      func_0x000107c61574(plStack_238);
      plVar4 = alStack_90;
      func_0x0001000a8868(plVar4,uStack_78);
      func_0x000107c3d798(*(undefined8 *)(*plVar4 + 0x10));
      lVar16 = lStack_178;
      lVar1 = lStack_178 + _DAT_113068e50;
      uVar12 = *(undefined8 *)(lVar1 + 0x18);
      lVar2 = *(long *)(lVar1 + 0x20);
      func_0x0001000a8868(lVar1,uVar12);
      ppuStack_110 = &PTR_DAT_1105b8e98;
      ppuStack_108 = &PTR_DAT_1105b8e70;
      plStack_118 = (long *)lStack_198;
      pcVar17 = *(code **)(lVar2 + 0x10);
      plStack_130 = plVar5;
      func_0x000107c61174(plVar5);
      (*pcVar17)(&plStack_130,uVar12,lVar2);
      func_0x000107c61170(lStack_220);
      func_0x000107c61170(lStack_190);
      func_0x000107c61170(lStack_188);
      func_0x000107c61170(lStack_180);
      func_0x000107c61170(lStack_1a8);
      func_0x000107c61170(lStack_1b8);
      func_0x000107c61170(lStack_230);
      func_0x000107c61170(lStack_160);
      func_0x000107c61170(lStack_158);
      func_0x000107c61170(lStack_150);
      func_0x000107c61170(lVar16);
      func_0x000107c61170(uStack_148);
      func_0x000107c61170(uStack_1a0);
      func_0x000107c61170(puStack_1d8);
      func_0x000107c61170(plStack_1d0);
      func_0x000107c61170(plVar6);
      func_0x000107c615e8(plStack_228);
      func_0x000107c615e8(plVar10);
      func_0x000107c615e8(lVar3);
      func_0x000107c615e8(plStack_218);
      func_0x000107c615e8(lStack_1b0);
      FUN_102c5c690(&plStack_130);
      *(long **)(lStack_140 + 0x10) = plVar5;
      goto LAB_102c5b644;
    }
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(param_3);
    func_0x000107c61170(lStack_190);
    func_0x000107c61170(lStack_188);
    func_0x000107c61170(lStack_180);
    param_9 = lStack_1a8;
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(lStack_160);
  func_0x000107c61170(lStack_158);
  func_0x000107c61170(lStack_150);
  func_0x000107c61170(lStack_178);
  func_0x000107c61170(uStack_148);
  func_0x000107c61170(uStack_1a0);
  func_0x000107c61170(lStack_198);
  func_0x000107c615e8(plVar4);
  func_0x000107c615e8(plStack_138);
  func_0x000107c615e8(plStack_170);
LAB_102c5b644:
  FUN_102c5c690(alStack_90);
  return lStack_140;
}



/* Entry: 102c5c59c; end: 102c5c633;  */

undefined8 FUN_102c5c59c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f05948;
  func_0x0001000285a8(0x112f05948,&UNK_10db39c40);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102c5c634; end: 102c5c64b;  */

undefined8 * FUN_102c5c634(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 102c5c64c; end: 102c5c68f;  */

long FUN_102c5c64c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 102c5c690; end: 102c5c6af;  */

void FUN_102c5c690(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000102c5c6a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 102c5c6b0; end: 102c5c6eb;  */

void FUN_102c5c6b0(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (lVar1 != 0) {
    func_0x000107c61174();
    FUN_102c5c838();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 102c5c6ec; end: 102c5c763;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102c5c6ec(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = _DAT_112f05ab8;
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if (lVar3 != 0) {
    lVar4 = *(long *)(lVar3 + _DAT_112f05ab8);
    if (lVar4 != 0) {
      lVar2 = lVar3;
      func_0x000107c61174(lVar3);
      func_0x000107c61174(lVar4);
      FUN_102c662c8();
      func_0x000107c61170(lVar4);
      uVar5 = *(undefined8 *)(lVar3 + lVar1);
      *(undefined8 *)(lVar3 + lVar1) = 0;
      func_0x000107c61170(lVar2);
      func_0x000107c61170(uVar5);
    }
  }
  return 0;
}



/* Entry: 102c5c764; end: 102c5c787;  */

void FUN_102c5c764(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102c5c788; end: 102c5c7eb;  */

void FUN_102c5c788(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *(long *)(*unaff_x20 + 0x10);
  if (lVar1 != 0) {
    func_0x000107c61174();
    FUN_102c5c838();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 102c5c7ec; end: 102c5c837;  */

void FUN_102c5c7ec(void)

{
  func_0x000107c61168(&PTR_PTR_112f05990);
  return;
}



/* Entry: 102c5c838; end: 102c5cbf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c5c838(void)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  code *pcVar7;
  int iVar8;
  long unaff_x20;
  long *plVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  
  iVar8 = (int)*(undefined8 *)(unaff_x20 + _DAT_112f05a60);
  uVar2 = 0xd000000000000038;
  func_0x000107c5fadc(0xd000000000000038,0x800000010f103b60);
  func_0x000107c4dfc0();
  func_0x000107c61170(uVar2);
  if ((iVar8 != 0) && (*(long *)(unaff_x20 + _DAT_112f05a88) != 0)) {
    plVar9 = *(long **)(unaff_x20 + _DAT_112f05a90);
    plVar3 = plVar9;
    func_0x000107c615f0();
    func_0x000100471e0c();
    func_0x000107c615e8(plVar9);
    puVar4 = &UNK_1105b8eb8;
    func_0x000107c613fc(&UNK_1105b8eb8,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    uVar2 = 0x102c62c00;
    puVar6 = puVar4;
    (**(code **)(*plVar3 + 0x60))(0x102c62c00);
    func_0x000107c61574(plVar3);
    func_0x000107c61574(puVar4);
    uVar5 = uVar2;
    func_0x000107c614f0(uVar2);
    (**(code **)(puVar6 + 0x18))(*(undefined8 *)(unaff_x20 + _DAT_112f05a98),uVar5,puVar6);
    func_0x000107c615e8(uVar2);
  }
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f059f8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112f059f8))[1];
  func_0x000107c614f0(uVar2);
  puVar4 = &UNK_1105b8eb8;
  puVar6 = puVar4;
  func_0x000107c613fc(&UNK_1105b8eb8,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  pcVar10 = *(code **)(lVar1 + 8);
  func_0x000107c6157c(puVar6);
  pcVar7 = FUN_102c62b88;
  (*pcVar10)(FUN_102c62b88,puVar6,uVar2,lVar1);
  func_0x000107c61578(puVar6,2);
  pcVar12 = pcVar7;
  func_0x000107c614f0(pcVar7);
  puVar6 = puVar4;
  func_0x000107c613fc(&UNK_1105b8eb8,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  pcVar11 = *(code **)(lVar1 + 0x18);
  func_0x000107c6157c(puVar6);
  pcVar10 = FUN_102c62bb4;
  (*pcVar11)(FUN_102c62bb4,puVar6,pcVar12,lVar1);
  func_0x000107c615e8(pcVar7);
  func_0x000107c61578(puVar6,2);
  pcVar7 = pcVar10;
  func_0x000107c614f0(pcVar10);
  puVar6 = puVar4;
  func_0x000107c613fc(&UNK_1105b8eb8,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  pcVar12 = *(code **)(lVar1 + 0x10);
  func_0x000107c6157c(puVar6);
  uVar2 = 0x102c62bbc;
  (*pcVar12)(0x102c62bbc,puVar6,pcVar7,lVar1);
  func_0x000107c615e8(pcVar10);
  func_0x000107c61578(puVar6,2);
  uVar5 = uVar2;
  func_0x000107c614f0(uVar2);
  puVar6 = puVar4;
  func_0x000107c613fc(&UNK_1105b8eb8,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  pcVar10 = *(code **)(lVar1 + 0x20);
  func_0x000107c6157c(puVar6);
  pcVar7 = FUN_102c62bc4;
  (*pcVar10)(FUN_102c62bc4,puVar6,uVar5,lVar1);
  func_0x000107c615e8(uVar2);
  func_0x000107c61578(puVar6,2);
  pcVar12 = pcVar7;
  func_0x000107c614f0(pcVar7);
  puVar6 = puVar4;
  func_0x000107c613fc(&UNK_1105b8eb8,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  pcVar11 = *(code **)(lVar1 + 0x28);
  func_0x000107c6157c(puVar6);
  pcVar10 = FUN_102c62bf0;
  (*pcVar11)(FUN_102c62bf0,puVar6,pcVar12,lVar1);
  func_0x000107c615e8(pcVar7);
  func_0x000107c61578(puVar6,2);
  pcVar7 = pcVar10;
  func_0x000107c614f0(pcVar10);
  func_0x000107c613fc(&UNK_1105b8eb8,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  pcVar12 = *(code **)(lVar1 + 0x30);
  func_0x000107c6157c(puVar4);
  (*pcVar12)(0x102c62bf8,puVar4,pcVar7,lVar1);
  func_0x000107c615e8();
  func_0x000107c615e8(pcVar10);
  func_0x000107c61578(puVar4,2);
  return;
}



/* Entry: 102c5cbf8; end: 102c5cc97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c5cbf8(long *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_11308c0c8;
  lVar4 = *param_1;
  iVar2 = (int)*(undefined8 *)(lVar4 + _DAT_11308c0c8);
  func_0x000107c30b1c();
  if (iVar2 == 0xe) {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      uVar3 = *(undefined8 *)(lVar4 + lVar1);
      func_0x000107c30b40();
      func_0x000107c61180();
      uVar5 = *(undefined8 *)(param_2 + _DAT_112f05ad0);
      *(undefined8 *)(param_2 + _DAT_112f05ad0) = uVar3;
      func_0x000107c61170(param_2);
      func_0x000107c61170(uVar5);
    }
  }
  return;
}



/* Entry: 102c5cc98; end: 102c5cd6b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c5cc98(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_2 + _DAT_112f05aa0;
    func_0x000107c61618();
    func_0x000107c61170(param_2);
    if (lVar1 != 0) {
      func_0x000107c420b0(lVar1);
      func_0x000107c615e8(lVar1);
    }
  }
  return;
}



/* Entry: 102c5cd6c; end: 102c5cf8f;  */

/* WARNING: Possible PIC construction at 0x000102c5cdbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5cdec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5cec4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5cf5c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5cf6c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5cefc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c5cf70) */
/* WARNING: Removing unreachable block (ram,0x000102c5cf60) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x000102c5cec8) */
/* WARNING: Removing unreachable block (ram,0x000102c5cdf0) */
/* WARNING: Removing unreachable block (ram,0x000102c5cef8) */
/* WARNING: Removing unreachable block (ram,0x000102c5ce04) */
/* WARNING: Removing unreachable block (ram,0x000102c5cf20) */
/* WARNING: Removing unreachable block (ram,0x000102c5cf30) */
/* WARNING: Removing unreachable block (ram,0x000102c5ce80) */
/* WARNING: Removing unreachable block (ram,0x000102c5cdc0) */
/* WARNING: Removing unreachable block (ram,0x000102c5cef0) */
/* WARNING: Removing unreachable block (ram,0x000102c5cdc8) */
/* WARNING: Removing unreachable block (ram,0x000102c5cf00) */
/* WARNING: Removing unreachable block (ram,0x000102c5cf04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c5cd6c(long param_1)

{
  func_0x0001041f3970();
  if (param_1 != 0) {
    func_0x000107c61174(*(undefined8 *)(param_1 + _DAT_113068f40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 102c5cf90; end: 102c5d037;  */

void FUN_102c5cf90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_5 + 0x10,auStack_68,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61618();
  if (param_5 != 0) {
    FUN_102c5d038(param_1,param_2,param_3,param_4,param_6,param_7,param_8);
    func_0x000107c61170(param_5);
  }
  return;
}



/* Entry: 102c5d038; end: 102c5d307;  */

/* WARNING: Possible PIC construction at 0x000102c5d0a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5d0d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5d2dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5d234: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5d2c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c5d238) */
/* WARNING: Removing unreachable block (ram,0x000102c5d2e0) */
/* WARNING: Removing unreachable block (ram,0x000102c5d0d8) */
/* WARNING: Removing unreachable block (ram,0x000102c5d0e4) */
/* WARNING: Removing unreachable block (ram,0x000102c5d14c) */
/* WARNING: Removing unreachable block (ram,0x000102c5d248) */
/* WARNING: Removing unreachable block (ram,0x000102c5d264) */
/* WARNING: Removing unreachable block (ram,0x000102c5d160) */
/* WARNING: Removing unreachable block (ram,0x000102c5d280) */
/* WARNING: Removing unreachable block (ram,0x000102c5d298) */
/* WARNING: Removing unreachable block (ram,0x000102c5d1e8) */
/* WARNING: Removing unreachable block (ram,0x000102c5d110) */
/* WARNING: Removing unreachable block (ram,0x000102c5d0a8) */
/* WARNING: Removing unreachable block (ram,0x000102c5d2e4) */
/* WARNING: Removing unreachable block (ram,0x000102c5d0b0) */
/* WARNING: Removing unreachable block (ram,0x000102c5d2c4) */
/* WARNING: Removing unreachable block (ram,0x000102c5d2d4) */
/* WARNING: Removing unreachable block (ram,0x000102c5d2d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c5d038(long param_1)

{
  func_0x0001041f3970();
  if (param_1 != 0) {
    func_0x000107c61174(*(undefined8 *)(param_1 + _DAT_113068f40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 102c5d308; end: 102c5d3af;  */

void FUN_102c5d308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_8 + 0x10,auStack_68,0,0);
  param_8 = param_8 + 0x10;
  func_0x000107c61618();
  if (param_8 != 0) {
    FUN_102c5d3b0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    func_0x000107c61170(param_8);
  }
  return;
}



/* Entry: 102c5d3b0; end: 102c5e01f;  */

/* WARNING: Possible PIC construction at 0x000102c5d420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5d450: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5d49c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5d5dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5d62c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5d700: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5d72c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5da44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5dae8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5daf8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5db74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5dbbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5dd38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5df40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5df58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5dfc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5df28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5de30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5de60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5deac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5ded4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5dee4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5def4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5df90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5dfa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5dfb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5dfc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5df78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5dda8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5dd7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5d518: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c5dd80) */
/* WARNING: Removing unreachable block (ram,0x000102c5ddac) */
/* WARNING: Removing unreachable block (ram,0x000102c5df7c) */
/* WARNING: Removing unreachable block (ram,0x000102c5dfc4) */
/* WARNING: Removing unreachable block (ram,0x000102c5dfb4) */
/* WARNING: Removing unreachable block (ram,0x000102c5dfc0) */
/* WARNING: Removing unreachable block (ram,0x000102c5dfa4) */
/* WARNING: Removing unreachable block (ram,0x000102c5df94) */
/* WARNING: Removing unreachable block (ram,0x000102c5def8) */
/* WARNING: Removing unreachable block (ram,0x000102c5dee8) */
/* WARNING: Removing unreachable block (ram,0x000102c5ded8) */
/* WARNING: Removing unreachable block (ram,0x000102c5deb0) */
/* WARNING: Removing unreachable block (ram,0x000102c5df8c) */
/* WARNING: Removing unreachable block (ram,0x000102c5deb8) */
/* WARNING: Removing unreachable block (ram,0x000102c5de64) */
/* WARNING: Removing unreachable block (ram,0x000102c5df6c) */
/* WARNING: Removing unreachable block (ram,0x000102c5de68) */
/* WARNING: Removing unreachable block (ram,0x000102c5de34) */
/* WARNING: Removing unreachable block (ram,0x000102c5df5c) */
/* WARNING: Removing unreachable block (ram,0x000102c5df60) */
/* WARNING: Removing unreachable block (ram,0x000102c5dfc8) */
/* WARNING: Removing unreachable block (ram,0x000102c5df44) */
/* WARNING: Removing unreachable block (ram,0x000102c5dd3c) */
/* WARNING: Removing unreachable block (ram,0x000102c5df08) */
/* WARNING: Removing unreachable block (ram,0x000102c5dd50) */
/* WARNING: Removing unreachable block (ram,0x000102c5df18) */
/* WARNING: Removing unreachable block (ram,0x000102c5dd5c) */
/* WARNING: Removing unreachable block (ram,0x000102c5df2c) */
/* WARNING: Removing unreachable block (ram,0x000102c5dbc0) */
/* WARNING: Removing unreachable block (ram,0x000102c5dcb0) */
/* WARNING: Removing unreachable block (ram,0x000102c5dbc4) */
/* WARNING: Removing unreachable block (ram,0x000102c5dcb8) */
/* WARNING: Removing unreachable block (ram,0x000102c5daec) */
/* WARNING: Removing unreachable block (ram,0x000102c5da48) */
/* WARNING: Removing unreachable block (ram,0x000102c5dafc) */
/* WARNING: Removing unreachable block (ram,0x000102c5db18) */
/* WARNING: Removing unreachable block (ram,0x000102c5db78) */
/* WARNING: Removing unreachable block (ram,0x000102c5db3c) */
/* WARNING: Removing unreachable block (ram,0x000102c5da4c) */
/* WARNING: Removing unreachable block (ram,0x000102c5d730) */
/* WARNING: Removing unreachable block (ram,0x000102c5d734) */
/* WARNING: Removing unreachable block (ram,0x000102c5d704) */
/* WARNING: Removing unreachable block (ram,0x000102c5d754) */
/* WARNING: Removing unreachable block (ram,0x000102c5d75c) */
/* WARNING: Removing unreachable block (ram,0x000102c5d70c) */
/* WARNING: Removing unreachable block (ram,0x000102c5d630) */
/* WARNING: Removing unreachable block (ram,0x000102c5d5e0) */
/* WARNING: Removing unreachable block (ram,0x000102c5d4a0) */
/* WARNING: Removing unreachable block (ram,0x000102c5d4b8) */
/* WARNING: Removing unreachable block (ram,0x000102c5e008) */
/* WARNING: Removing unreachable block (ram,0x000102c5e00c) */
/* WARNING: Removing unreachable block (ram,0x000102c5e01c) */
/* WARNING: Removing unreachable block (ram,0x000102c5d4c4) */
/* WARNING: Removing unreachable block (ram,0x000102c5d4cc) */
/* WARNING: Removing unreachable block (ram,0x000102c5d544) */
/* WARNING: Removing unreachable block (ram,0x000102c5d550) */
/* WARNING: Removing unreachable block (ram,0x000102c5e004) */
/* WARNING: Removing unreachable block (ram,0x000102c5d558) */
/* WARNING: Removing unreachable block (ram,0x000102c5d564) */
/* WARNING: Removing unreachable block (ram,0x000102c5d4d4) */
/* WARNING: Removing unreachable block (ram,0x000102c5d4d8) */
/* WARNING: Removing unreachable block (ram,0x000102c5d4f4) */
/* WARNING: Removing unreachable block (ram,0x000102c5e000) */
/* WARNING: Removing unreachable block (ram,0x000102c5d4fc) */
/* WARNING: Removing unreachable block (ram,0x000102c5d508) */
/* WARNING: Removing unreachable block (ram,0x000102c5d570) */
/* WARNING: Removing unreachable block (ram,0x000102c5d574) */
/* WARNING: Removing unreachable block (ram,0x000102c5d5e8) */
/* WARNING: Removing unreachable block (ram,0x000102c5d634) */
/* WARNING: Removing unreachable block (ram,0x000102c5d638) */
/* WARNING: Removing unreachable block (ram,0x000102c5d658) */
/* WARNING: Removing unreachable block (ram,0x000102c5d6b0) */
/* WARNING: Removing unreachable block (ram,0x000102c5d76c) */
/* WARNING: Removing unreachable block (ram,0x000102c5d6c8) */
/* WARNING: Removing unreachable block (ram,0x000102c5d66c) */
/* WARNING: Removing unreachable block (ram,0x000102c5dff0) */
/* WARNING: Removing unreachable block (ram,0x000102c5d778) */
/* WARNING: Removing unreachable block (ram,0x000102c5d858) */
/* WARNING: Removing unreachable block (ram,0x000102c5d864) */
/* WARNING: Removing unreachable block (ram,0x000102c5d8a8) */
/* WARNING: Removing unreachable block (ram,0x000102c5d8ac) */
/* WARNING: Removing unreachable block (ram,0x000102c5d8f0) */
/* WARNING: Removing unreachable block (ram,0x000102c5d8f4) */
/* WARNING: Removing unreachable block (ram,0x000102c5d96c) */
/* WARNING: Removing unreachable block (ram,0x000102c5d970) */
/* WARNING: Removing unreachable block (ram,0x000102c5dc90) */
/* WARNING: Removing unreachable block (ram,0x000102c5dcbc) */
/* WARNING: Removing unreachable block (ram,0x000102c5dd68) */
/* WARNING: Removing unreachable block (ram,0x000102c5dcfc) */
/* WARNING: Removing unreachable block (ram,0x000102c5dd94) */
/* WARNING: Removing unreachable block (ram,0x000102c5dd00) */
/* WARNING: Removing unreachable block (ram,0x000102c5ddbc) */
/* WARNING: Removing unreachable block (ram,0x000102c5dd38) */
/* WARNING: Removing unreachable block (ram,0x000102c5d9f4) */
/* WARNING: Removing unreachable block (ram,0x000102c5d6a0) */
/* WARNING: Removing unreachable block (ram,0x000102c5d6d8) */
/* WARNING: Removing unreachable block (ram,0x000102c5d628) */
/* WARNING: Removing unreachable block (ram,0x000102c5d5ac) */
/* WARNING: Removing unreachable block (ram,0x000102c5d454) */
/* WARNING: Removing unreachable block (ram,0x000102c5d514) */
/* WARNING: Removing unreachable block (ram,0x000102c5d468) */
/* WARNING: Removing unreachable block (ram,0x000102c5d424) */
/* WARNING: Removing unreachable block (ram,0x000102c5d50c) */
/* WARNING: Removing unreachable block (ram,0x000102c5d42c) */
/* WARNING: Removing unreachable block (ram,0x000102c5d51c) */
/* WARNING: Removing unreachable block (ram,0x000102c5d520) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c5d3b0(long param_1)

{
  func_0x0001041f3970();
  if (param_1 != 0) {
    func_0x000107c61174(*(undefined8 *)(param_1 + _DAT_113068f40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 102c5e020; end: 102c5e0af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c5e020(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f05ab8;
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + _DAT_112f05ab8);
    if (lVar2 != 0) {
      func_0x000107c61174(lVar2);
      FUN_102c662c8();
      func_0x000107c61170(lVar2);
      *(undefined8 *)(param_2 + lVar1) = 0;
      func_0x000107c61170(param_2);
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 102c5e0b0; end: 102c5e623;  */

/* WARNING: Possible PIC construction at 0x000102c5e130: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5e144: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5e364: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5e3d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5e4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5e548: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5e5b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5e5c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5e5d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c5e5cc) */
/* WARNING: Removing unreachable block (ram,0x000102c5e5bc) */
/* WARNING: Removing unreachable block (ram,0x000102c5e54c) */
/* WARNING: Removing unreachable block (ram,0x000102c5e5c4) */
/* WARNING: Removing unreachable block (ram,0x000102c5e58c) */
/* WARNING: Removing unreachable block (ram,0x000102c5e4b0) */
/* WARNING: Removing unreachable block (ram,0x000102c5e4c4) */
/* WARNING: Removing unreachable block (ram,0x000102c5e520) */
/* WARNING: Removing unreachable block (ram,0x000102c5e3d8) */
/* WARNING: Removing unreachable block (ram,0x000102c5e368) */
/* WARNING: Removing unreachable block (ram,0x000102c5e148) */
/* WARNING: Removing unreachable block (ram,0x000102c5e14c) */
/* WARNING: Removing unreachable block (ram,0x000102c5e1ac) */
/* WARNING: Removing unreachable block (ram,0x000102c5e60c) */
/* WARNING: Removing unreachable block (ram,0x000102c5e610) */
/* WARNING: Removing unreachable block (ram,0x000102c5e620) */
/* WARNING: Removing unreachable block (ram,0x000102c5e1b8) */
/* WARNING: Removing unreachable block (ram,0x000102c5e1c0) */
/* WARNING: Removing unreachable block (ram,0x000102c5e238) */
/* WARNING: Removing unreachable block (ram,0x000102c5e244) */
/* WARNING: Removing unreachable block (ram,0x000102c5e608) */
/* WARNING: Removing unreachable block (ram,0x000102c5e24c) */
/* WARNING: Removing unreachable block (ram,0x000102c5e258) */
/* WARNING: Removing unreachable block (ram,0x000102c5e264) */
/* WARNING: Removing unreachable block (ram,0x000102c5e1c8) */
/* WARNING: Removing unreachable block (ram,0x000102c5e1d4) */
/* WARNING: Removing unreachable block (ram,0x000102c5e1f0) */
/* WARNING: Removing unreachable block (ram,0x000102c5e604) */
/* WARNING: Removing unreachable block (ram,0x000102c5e1f8) */
/* WARNING: Removing unreachable block (ram,0x000102c5e204) */
/* WARNING: Removing unreachable block (ram,0x000102c5e208) */
/* WARNING: Removing unreachable block (ram,0x000102c5e268) */
/* WARNING: Removing unreachable block (ram,0x000102c5e36c) */
/* WARNING: Removing unreachable block (ram,0x000102c5e374) */
/* WARNING: Removing unreachable block (ram,0x000102c5e3dc) */
/* WARNING: Removing unreachable block (ram,0x000102c5e3e0) */
/* WARNING: Removing unreachable block (ram,0x000102c5e388) */
/* WARNING: Removing unreachable block (ram,0x000102c5e314) */
/* WARNING: Removing unreachable block (ram,0x000102c5e134) */
/* WARNING: Removing unreachable block (ram,0x000102c5e214) */
/* WARNING: Removing unreachable block (ram,0x000102c5e138) */
/* WARNING: Removing unreachable block (ram,0x000102c5e5dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c5e0b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f05a20);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f05a18);
  func_0x000107c5fadc(uVar1,((undefined8 *)(unaff_x20 + _DAT_112f05a18))[1]);
  func_0x000107c3d368(uVar2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102c5e624; end: 102c5e7ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102c5e624(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  long unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112f05a20);
  func_0x000107c5fadc();
  func_0x000107c3d368(lVar2,param_2,param_1);
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar2 != 0) {
    func_0x0001041f3970();
    func_0x000107c61170(lVar2);
    if (param_1 != 0) {
      lVar2 = *(long *)(*(long *)(param_1 + _DAT_113068f48) + _DAT_11308f208);
      if (((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + _DAT_113091068), lVar2 != 0)) &&
         (lVar2 = *(long *)(lVar2 + _DAT_113090658), lVar2 != 0)) {
        iVar1 = *(int *)(lVar2 + *param_3);
        func_0x000107c61170(param_1);
        return iVar1 == 2;
      }
      func_0x000107c61170(param_1);
    }
  }
  return false;
}



/* Entry: 102c5e7f0; end: 102c5ea27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c5e7f0(ulong param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined1 auStack_70 [8];
  long lStack_68;
  
  lVar1 = 0;
  func_0x000100b91584();
  lStack_68 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar6 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0x112f05bd0;
  func_0x0001000285a8(0x112f05bd0,&UNK_10db39d18);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)puVar6 - extraout_x8_00;
  lVar1 = 0;
  func_0x000100b915bc();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  lVar7 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  iVar9 = (int)*(undefined8 *)(unaff_x20 + _DAT_112f05a60);
  uVar2 = 0xd000000000000038;
  func_0x000107c5fadc(0xd000000000000038,0x800000010f103b60);
  func_0x000107c4dfc0();
  func_0x000107c61170(uVar2);
  if ((iVar9 == 0) || (uVar3 = param_1, FUN_102c61c50(param_1,param_2), (uVar3 & 1) == 0)) {
    uVar3 = param_1;
    FUN_102c6177c(param_1,param_2);
    if ((uVar3 & 1) == 0) {
      FUN_102c60180(lVar8,param_1,param_2);
      lVar4 = lVar8;
      (**(code **)(lVar5 + 0x30))(lVar8,1,lVar1);
      if ((int)lVar4 != 1) {
        FUN_102853610(lVar8,lVar7);
        func_0x0001041bb118(0);
        FUN_102458e68(lVar7,puVar6);
        func_0x000107c6159c(puVar6,lStack_68,0);
        func_0x0001041b84d4(puVar6);
        func_0x000102458eec(lVar7);
        return;
      }
      func_0x000102c62d94(lVar8,0x112f05bd0,&UNK_10db39d18);
    }
    FUN_102c618f4(param_1,param_2,0,1);
  }
  else {
    uVar3 = param_1;
    func_0x000102c61d04(param_1,param_2);
    FUN_102c618f4(param_1,param_2,uVar3,0);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 102c5ea28; end: 102c5eb27;  */

/* WARNING: Possible PIC construction at 0x000102c5eac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5eaf0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c5eacc) */
/* WARNING: Removing unreachable block (ram,0x000102c5ead0) */
/* WARNING: Removing unreachable block (ram,0x000102c5eaf4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c5ea28(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    return;
  }
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112f05a18);
  uVar1 = ((ulong *)(unaff_x20 + _DAT_112f05a18))[1];
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  FUN_102c61c50(uVar2,uVar1);
  if ((uVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f05a60);
    param_3 = 0xd000000000000038;
    func_0x000107c5fadc(0xd000000000000038,0x800000010f103b60);
    func_0x000107c4dfc0(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102c5eb28; end: 102c5ecd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102c5eb28(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lStack_60;
  long lStack_58;
  
  plVar4 = &lStack_60;
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f05a48);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112f05a50);
  lVar2 = 0;
  FUN_102c66854();
  lVar3 = lVar2;
  func_0x000107c610f8();
  func_0x000107c61614(lVar3 + _DAT_112f05f40,0);
  puVar1 = (undefined8 *)(lVar3 + _DAT_112f05f58);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61614(lVar3 + _DAT_112f05f60,0);
  *(undefined8 *)(lVar3 + _DAT_112f05f48) = uVar9;
  *(undefined8 *)(lVar3 + _DAT_112f05f50) = uVar10;
  puVar5 = PTR_s_init_1125d9248;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c61174(uVar9);
  func_0x000107c615f0(uVar10);
  func_0x000107c61154(&lStack_60,puVar5);
  puVar5 = &UNK_1105b8eb8;
  func_0x000107c613fc(&UNK_1105b8eb8,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  puVar6 = &UNK_1105b8ee0;
  func_0x000107c613fc(&UNK_1105b8ee0,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,plVar4);
  puVar7 = &UNK_1105b8f08;
  func_0x000107c613fc(&UNK_1105b8f08,0x20,7);
  *(undefined **)(puVar7 + 0x10) = puVar5;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  puVar1 = (undefined8 *)((long)plVar4 + _DAT_112f05f58);
  uVar9 = *puVar1;
  uVar10 = puVar1[1];
  *puVar1 = FUN_102c62b5c;
  puVar1[1] = puVar7;
  puVar8 = (undefined1 *)plVar4;
  func_0x000107c61174(plVar4);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(puVar6);
  func_0x00010058d43c(uVar9,uVar10);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar6);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112f05ab8);
  *(long **)(unaff_x20 + _DAT_112f05ab8) = plVar4;
  func_0x000107c61170(uVar9);
  return puVar8;
}



/* Entry: 102c5ecd8; end: 102c5ed87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c5ecd8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_50,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      lVar2 = *(long *)(param_1 + _DAT_112f05ab8);
      lVar1 = param_1;
      if (lVar2 != 0 && param_2 == lVar2) {
        *(undefined8 *)(param_1 + _DAT_112f05ab8) = 0;
        func_0x000107c61170();
        lVar1 = param_2;
        param_2 = lVar2;
      }
      param_1 = param_2;
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102c5ed88; end: 102c5eec3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102c5ed88(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112f05a20);
  lVar1 = *(long *)(unaff_x20 + _DAT_112f05a18);
  func_0x000107c5fadc(lVar1,((long *)(unaff_x20 + _DAT_112f05a18))[1]);
  func_0x000107c3d368();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar4 != 0) {
    func_0x0001041f3970();
    func_0x000107c61170(lVar4);
    if (lVar1 != 0) {
      uVar6 = *(undefined8 *)(lVar1 + _DAT_113068f48);
      uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f05a70);
      uVar7 = *(ulong *)(unaff_x20 + _DAT_112f05a08);
      uVar2 = uVar7;
      func_0x000107c61150(uVar7,PTR_s_respondsToSelector__11262c7e0,
                          PTR_s_operaNavigationStyle_112618428);
      func_0x000107c61174(uVar6);
      if ((uVar2 & 1) == 0) {
        uVar7 = 1;
      }
      else {
        func_0x000107c4dee4(uVar7);
      }
      uVar3 = uVar6;
      func_0x0001084cc9c4(uVar6,uVar5,uVar7,*(undefined8 *)(lVar1 + _DAT_113068f40),
                          *(undefined8 *)(unaff_x20 + _DAT_112f05a60));
      func_0x000107c61170(lVar1);
      func_0x000107c61170(uVar6);
      return uVar3;
    }
  }
  return 0;
}



/* Entry: 102c5eec4; end: 102c5f077;  */

/* WARNING: Possible PIC construction at 0x000102c5f024: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c5f044: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c5f028) */
/* WARNING: Removing unreachable block (ram,0x000102c5f048) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c5eec4(undefined8 param_1,undefined8 param_2,int param_3,uint param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  
  uVar3 = 0x5c;
  if (param_3 != 6) {
    uVar3 = 0x13;
  }
  uVar1 = 0;
  func_0x000104316d84(0);
  func_0x000104316bcc(uVar3,0,0xe000000000000000,6,uVar1);
  uVar2 = uVar3;
  FUN_102c5f078();
  if ((uVar2 & 1) == 0) {
    func_0x000107c5fb1c(param_1,param_2);
    func_0x000104318244(0);
    func_0x000107c610f8();
    func_0x000107c61174(uVar3);
    func_0x0001043179f8(param_1,param_2,uVar3,0,0,1,1,0);
    uVar1 = param_1;
    func_0x000102c5f9c0();
    func_0x0001003378b0(0);
    func_0x000107c610f8();
    func_0x000107c615f0(uVar1);
    func_0x000107c61174(param_1);
    func_0x000107c61174();
    func_0x0001043160ec(uVar1,param_1);
    uVar3 = *(ulong *)(unaff_x20 + _DAT_112f05aa8);
    *(undefined8 *)(unaff_x20 + _DAT_112f05aa8) = uVar1;
    func_0x000107c61174();
  }
  else {
    FUN_102c5f244(param_1,param_2,param_4 & 1,uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 102c5f078; end: 102c5f243;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102c5f078(void)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long unaff_x20;
  ulong uVar7;
  
  iVar5 = (int)*(undefined8 *)(unaff_x20 + _DAT_112f05a60);
  uVar1 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f103b10);
  func_0x000107c4dfc0();
  func_0x000107c61170(uVar1);
  if (iVar5 != 0) {
    lVar6 = *(long *)(unaff_x20 + _DAT_112f05a20);
    uVar2 = *(ulong *)(unaff_x20 + _DAT_112f05a18);
    func_0x000107c5fadc(uVar2,((ulong *)(unaff_x20 + _DAT_112f05a18))[1]);
    func_0x000107c3d368();
    func_0x000107c61180();
    func_0x000107c61170();
    if (lVar6 != 0) {
      func_0x0001041f3970();
      func_0x000107c61170(lVar6);
      if (uVar2 != 0) {
        func_0x000103bffd54(0);
        uVar3 = *(ulong *)(*(long *)(uVar2 + _DAT_113068f48) + _DAT_11308f1e0);
        func_0x000103bfe3f4(uVar3,*(undefined8 *)
                                   (*(long *)(uVar2 + _DAT_113068f48) + _DAT_11308f1e8),
                            *(undefined8 *)(unaff_x20 + _DAT_112f05a70));
        uVar7 = *(ulong *)(unaff_x20 + _DAT_112f05a08);
        uVar4 = uVar7;
        func_0x000107c61150(uVar7,PTR_s_respondsToSelector__11262c7e0,
                            PTR_s_operaNavigationStyle_112618428);
        if ((uVar4 & 1) == 0) {
          uVar4 = 1;
        }
        else {
          uVar4 = uVar7;
          func_0x000107c4dee4(uVar7);
        }
        func_0x000103bfe408(uVar3,uVar4);
        if (((uVar3 & 1) == 0) ||
           (uVar4 = uVar7,
           func_0x000107c61150(uVar7,PTR_s_respondsToSelector__11262c7e0,
                               PTR_s_operaPresentingViewController_112618648), (uVar4 & 1) == 0)) {
          uVar1 = 0;
        }
        else {
          func_0x000107c4df38();
          func_0x000107c61180();
          func_0x000107c61170(uVar2);
          if (uVar7 == 0) {
            return 0;
          }
          uVar1 = 1;
          uVar2 = uVar7;
        }
        func_0x000107c61170(uVar2);
        return uVar1;
      }
    }
  }
  return 0;
}



/* Entry: 102c5f244; end: 102c6017f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c5f244(double param_1,ulong param_2,undefined8 param_3,byte param_4,undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  undefined8 extraout_x13;
  uint uVar14;
  undefined8 uVar15;
  long unaff_x20;
  ulong uVar16;
  long lVar17;
  long lVar18;
  code *pcVar19;
  undefined8 uStack_f0;
  byte abStack_e8 [8];
  undefined1 auStack_e0 [8];
  long lStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined1 *puStack_88;
  long lStack_80;
  long lStack_78;
  
  lVar5 = 0x112f05bd8;
  func_0x0001000285a8(0x112f05bd8,&UNK_10db39d28);
  lStack_90 = lVar5;
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  puStack_88 = auStack_e0 + -extraout_x8;
  func_0x000100b91584();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  uVar16 = (long)(auStack_e0 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0x112f05bd0;
  func_0x0001000285a8(0x112f05bd0,&UNK_10db39d18);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar13 = uVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_98 = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar13 - extraout_x12;
  lStack_80 = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar13 - extraout_x12_00;
  lStack_78 = lVar13;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar13 - extraout_x12_01;
  lVar5 = 0;
  func_0x000100b915bc();
  lVar17 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar18 = (lVar13 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_02;
  if (*(long *)(unaff_x20 + _DAT_112f05ab0) != 0) {
    return;
  }
  if (*(long *)(unaff_x20 + _DAT_112f05aa8) != 0) {
    return;
  }
  lStack_a8 = _DAT_112f05ab0;
  lStack_a0 = _DAT_112f05aa8;
  uStack_c0 = extraout_x13;
  lStack_b8 = lVar5;
  func_0x000107c5fb1c(param_2,param_3);
  uStack_b0 = param_2;
  func_0x000104318244(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_5);
  *(undefined1 *)(lVar18 + -7) = 0;
  *(byte *)(lVar18 + -8) = param_4 & 1;
  *(undefined8 *)(lVar18 + -0x10) = 0;
  uVar6 = uStack_b0;
  func_0x0001043179f8(uStack_b0,param_3,param_5,0,0,0,0,0);
  lVar7 = 0;
  func_0x000102c6233c();
  lVar5 = lVar7;
  func_0x000107c613fc();
  func_0x000107c61614(lVar5 + 0x10,0);
  *(undefined1 *)(lVar5 + 0x18) = 0;
  *(undefined8 *)(lVar5 + 0x20) = 0;
  *(undefined1 *)(lVar5 + 0x28) = 0;
  *(undefined8 *)(lVar5 + 0x30) = 0;
  if (*(long *)(unaff_x20 + _DAT_112f05ac0) == 8) {
    uVar8 = *(ulong *)(unaff_x20 + _DAT_112f05a18);
    uVar10 = ((ulong *)(unaff_x20 + _DAT_112f05a18))[1];
    puVar11 = &DAT_11308ede0;
  }
  else {
    if (*(long *)(unaff_x20 + _DAT_112f05ac0) != 7) goto LAB_102c5f8d8;
    uVar8 = *(ulong *)(unaff_x20 + _DAT_112f05a18);
    uVar10 = ((ulong *)(unaff_x20 + _DAT_112f05a18))[1];
    puVar11 = &DAT_11308edd8;
  }
  lStack_c8 = lVar7;
  uStack_b0 = uVar8;
  FUN_102c5e624(uVar8,uVar10,puVar11);
  uVar2 = uStack_b0;
  if ((uVar8 & 1) == 0) goto LAB_102c5f8d8;
  lStack_d8 = lVar5;
  uStack_d0 = uVar6;
  FUN_102c60180(lVar13,uStack_b0,uVar10);
  pcVar19 = *(code **)(lVar17 + 0x30);
  lVar5 = lVar13;
  (*pcVar19)(lVar13,1,lStack_b8);
  if ((int)lVar5 == 1) {
    func_0x000102c62d94(lVar13,0x112f05bd0,&UNK_10db39d18);
    uVar16 = uVar2;
    FUN_102c618f4(uVar2,uVar10,0,0);
    uVar6 = uStack_d0;
    lVar5 = lStack_d8;
    if (uVar16 == 0) goto LAB_102c5f8d8;
  }
  else {
    FUN_102853610(lVar13,lVar18);
    func_0x0001041bb118(0);
    func_0x000102458e68(lVar18,uVar16);
    func_0x000107c6159c(uVar16,lVar4,0);
    func_0x0001041b84d4();
    func_0x000102458eec(lVar18);
  }
  lVar5 = lStack_78;
  if (*(long *)(unaff_x20 + _DAT_112f05ab8) != 0) {
    func_0x000107c61170(uVar16);
    uVar6 = uStack_d0;
    lVar5 = lStack_d8;
    goto LAB_102c5f8d8;
  }
  uStack_b0 = uVar16;
  func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112f05a28));
  param_1 = param_1 * 1000.0;
  FUN_102c60180(lVar5,uVar2,uVar10);
  lVar18 = lStack_80;
  lVar4 = lStack_b8;
  (**(code **)(lVar17 + 0x38))(lStack_80,1,1,lStack_b8);
  puVar3 = puStack_88;
  iVar1 = *(int *)(lStack_90 + 0x30);
  func_0x000102c62d44(lVar5,puStack_88);
  func_0x000102c62d44(lVar18,puVar3 + iVar1);
  puVar9 = puVar3;
  (*pcVar19)(puVar3,1,lVar4);
  lVar13 = lStack_98;
  if ((int)puVar9 == 1) {
    func_0x000102c62d94(lVar18,0x112f05bd0,&UNK_10db39d18);
    func_0x000102c62d94(lVar5,0x112f05bd0,&UNK_10db39d18);
    puVar9 = puVar3 + iVar1;
    (*pcVar19)(puVar9,1,lVar4);
    lVar5 = lStack_d8;
    if ((int)puVar9 == 1) {
      func_0x000102c62d94(puVar3,0x112f05bd0,&UNK_10db39d18);
      uVar14 = 1;
    }
    else {
LAB_102c5f76c:
      lVar5 = lStack_d8;
      func_0x000102c62d94(puVar3,0x112f05bd8,&UNK_10db39d28);
      uVar14 = 0;
    }
  }
  else {
    func_0x000102c62d44(puVar3,lStack_98);
    puVar9 = puVar3 + iVar1;
    (*pcVar19)(puVar9,1,lVar4);
    if ((int)puVar9 == 1) {
      func_0x000102c62d94(lStack_80,0x112f05bd0,&UNK_10db39d18);
      func_0x000102c62d94(lVar5,0x112f05bd0,&UNK_10db39d18);
      func_0x000102458eec(lVar13);
      goto LAB_102c5f76c;
    }
    FUN_102853610(puVar3 + iVar1,uStack_c0);
    lVar4 = lVar13;
    func_0x0001041b6de4(lVar13,uStack_c0);
    uVar14 = (uint)lVar4;
    func_0x000102458eec(uStack_c0);
    func_0x000102c62d94(lStack_80,0x112f05bd0,&UNK_10db39d18);
    func_0x000102c62d94(lVar5,0x112f05bd0,&UNK_10db39d18);
    func_0x000102458eec(lVar13);
    func_0x000102c62d94(puVar3,0x112f05bd0,&UNK_10db39d18);
    lVar5 = lStack_d8;
  }
  uVar15 = 0x800000010efbc4a0;
  lVar4 = -0x2fffffffffffffdf;
  uVar12 = 0;
  FUN_102c60500(param_1,0xd000000000000021,0x800000010efbc4a0,0);
  if (lVar4 != 0) {
    FUN_102c59bd0(6,0);
    FUN_102c59bd0(4,2,uVar15);
    if ((uVar14 & 1) == 0) {
      FUN_102c60b20(param_1);
    }
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(lVar4);
  }
  func_0x000102c61094();
  func_0x000107c61574(lVar5);
  lVar5 = lStack_c8;
  func_0x000107c613fc(lStack_c8,0x38,7);
  func_0x000107c61614(lVar5 + 0x10,0);
  *(undefined1 *)(lVar5 + 0x18) = 0;
  *(ulong *)(lVar5 + 0x20) = uStack_b0;
  *(byte *)(lVar5 + 0x28) = ((byte)uVar14 ^ 1) & 1;
  *(double *)(lVar5 + 0x30) = param_1;
  uVar6 = uStack_d0;
LAB_102c5f8d8:
  lVar4 = unaff_x20 + _DAT_112f05aa0;
  func_0x000107c61618();
  if (lVar4 != 0) {
    func_0x000107c4e470();
    func_0x000107c615e8(lVar4);
  }
  uVar15 = *(undefined8 *)(unaff_x20 + lStack_a8);
  *(long *)(unaff_x20 + lStack_a8) = lVar5;
  func_0x000107c6157c(lVar5);
  func_0x000107c61574(uVar15);
  func_0x0001003378b0(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  lVar4 = unaff_x20;
  func_0x000107c61174();
  uVar16 = uVar6;
  func_0x000104316380();
  uVar15 = *(undefined8 *)(unaff_x20 + lStack_a0);
  *(ulong *)(unaff_x20 + lStack_a0) = uVar16;
  func_0x000107c61174();
  func_0x000107c61170(uVar15);
  func_0x000107c4ab34(*(undefined8 *)(lVar4 + _DAT_112f059f0));
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar6);
  func_0x000107c61574(lVar5);
  return;
}



/* Entry: 102c60180; end: 102c604ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c60180(long param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  code *pcVar15;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar8 = 0;
  func_0x000107c5ede0();
  lVar14 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar12 = (long)&uStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar11 = *(long *)(unaff_x20 + _DAT_112f05a20);
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c3d368();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar11 != 0) {
    func_0x0001041f3970();
    func_0x000107c61170(lVar11);
    lVar11 = _DAT_113068f48;
    if (param_2 != 0) {
      lVar9 = *(long *)(param_2 + _DAT_113068f48);
      func_0x000107c5e224();
      func_0x000107c61180();
      if (lVar9 != 0) {
        lVar10 = lVar9;
        func_0x000107c5d7e8();
        func_0x000107c61180();
        if (lVar10 != 0) {
          func_0x000107c5edb4(lVar12);
          func_0x000107c61170(lVar10);
          pcVar15 = *(code **)(lVar14 + 0x20);
          (*pcVar15)(lVar12 - extraout_x12,lVar12,lVar8);
          lVar14 = *(long *)(param_2 + _DAT_113068f40);
          puVar1 = (undefined8 *)(lVar14 + _DAT_11308f138);
          puVar2 = (undefined8 *)(lVar14 + _DAT_11308f140);
          puVar3 = (undefined8 *)(*(long *)(param_2 + lVar11) + _DAT_11308f1f0);
          uStack_68 = *(undefined8 *)(lVar14 + _DAT_113815200);
          uStack_78 = *puVar3;
          uVar5 = puVar3[1];
          uStack_80 = *(undefined8 *)(lVar14 + _DAT_11308f128);
          uStack_70 = *(undefined8 *)(lVar14 + _DAT_113815300);
          iVar6 = *(int *)(lVar9 + _DAT_113091358);
          uStack_88 = puVar1[1];
          uStack_90 = *puVar1;
          uVar13 = puVar1[1];
          uStack_98 = puVar2[1];
          uStack_a0 = *puVar2;
          func_0x000107c61434(puVar2[1]);
          func_0x000107c61434(uVar5);
          func_0x000107c61434(uVar13);
          func_0x000107c61170(param_2);
          (*pcVar15)(param_1,lVar12 - extraout_x12,lVar8);
          uVar7 = *(undefined1 *)(lVar9 + _DAT_1130913e8);
          func_0x000107c61170(lVar9);
          lVar8 = 0;
          func_0x000100b915bc();
          *(ulong *)(param_1 + *(int *)(lVar8 + 0x14)) = (ulong)(iVar6 == 3);
          puVar4 = (undefined4 *)(param_1 + *(int *)(lVar8 + 0x18));
          *puVar4 = 0;
          *(undefined8 *)(puVar4 + 4) = 0;
          *(undefined8 *)(puVar4 + 2) = 0;
          *(undefined8 *)(puVar4 + 8) = 0;
          *(undefined8 *)(puVar4 + 6) = 0;
          *(undefined8 *)(puVar4 + 0xc) = 0;
          *(undefined8 *)(puVar4 + 10) = 0;
          *(undefined8 *)((long)puVar4 + 0x39) = 0;
          *(undefined8 *)((long)puVar4 + 0x31) = 0;
          *(undefined8 *)(param_1 + *(int *)(lVar8 + 0x1c)) = 0;
          puVar1 = (undefined8 *)(param_1 + *(int *)(lVar8 + 0x20));
          puVar1[1] = uStack_88;
          *puVar1 = uStack_90;
          puVar1[3] = uStack_98;
          puVar1[2] = uStack_a0;
          puVar1[4] = uStack_78;
          puVar1[5] = uVar5;
          puVar1[6] = uStack_68;
          puVar1[7] = uStack_80;
          puVar1[8] = 0xd000000000000021;
          puVar1[9] = 0x800000010efbc4a0;
          puVar1[10] = 0;
          puVar1[0xb] = 0;
          *(undefined1 *)(puVar1 + 0xc) = 1;
          puVar1[0xd] = uStack_70;
          puVar1 = (undefined8 *)(param_1 + *(int *)(lVar8 + 0x24));
          puVar1[1] = 0;
          *puVar1 = 0;
          puVar1[3] = 0;
          puVar1[2] = 0;
          puVar1 = (undefined8 *)(param_1 + *(int *)(lVar8 + 0x28));
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined1 *)(param_1 + *(int *)(lVar8 + 0x2c)) = 0;
          puVar1 = (undefined8 *)(param_1 + *(int *)(lVar8 + 0x30));
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined1 *)(param_1 + *(int *)(lVar8 + 0x34)) = uVar7;
          (**(code **)(*(long *)(lVar8 + -8) + 0x38))(param_1,0,1,lVar8);
          return;
        }
        func_0x000107c61170(param_2);
        param_2 = lVar9;
      }
      func_0x000107c61170(param_2);
    }
  }
  lVar8 = 0;
  func_0x000100b915bc();
                    /* WARNING: Could not recover jumptable at 0x000102c604fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar8 + -8) + 0x38))(param_1,1,1,lVar8);
  return;
}



/* Entry: 102c60500; end: 102c60b1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102c60500(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  long unaff_x20;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 uVar25;
  long lStack_c0;
  long lStack_90;
  
  lVar19 = *(long *)(unaff_x20 + _DAT_112f05a20);
  lVar2 = *(long *)(unaff_x20 + _DAT_112f05a18);
  lVar4 = ((long *)(unaff_x20 + _DAT_112f05a18))[1];
  lVar10 = lVar2;
  func_0x000107c5fadc(lVar2,lVar4);
  func_0x000107c3d368();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar19 == 0) {
    return 0;
  }
  func_0x0001041f3970();
  func_0x000107c61170(lVar19);
  lVar19 = _DAT_113068f40;
  if (lVar10 == 0) {
    return 0;
  }
  uVar11 = *(ulong *)(lVar10 + _DAT_113068f48);
  lVar20 = *(long *)(lVar10 + _DAT_113068f40);
  uVar3 = *(undefined8 *)(lVar20 + _DAT_11308f130);
  uVar5 = ((undefined8 *)(lVar20 + _DAT_11308f130))[1];
  func_0x000107c61174();
  func_0x000107c61434(uVar5);
  func_0x0001084c6f7c(lVar20,uVar11);
  uVar21 = *(ulong *)(*(long *)(lVar10 + lVar19) + _DAT_113815208);
  if (uVar21 != 0) {
    uVar24 = uVar21 & 0xffffffffffffff8;
    if (uVar21 >> 0x3e == 0) {
      uVar23 = *(ulong *)(uVar24 + 0x10);
    }
    else {
      uVar23 = uVar21;
      if (-1 < (long)uVar21) {
        uVar23 = uVar24;
      }
      func_0x000107c60480();
    }
    if (uVar23 == 0) {
      uVar22 = 0;
      goto LAB_102c60708;
    }
    if ((uVar21 & 0xc000000000000001) != 0) {
      func_0x000107c61434(uVar21);
      uVar22 = 0;
      do {
        uVar24 = uVar22;
        func_0x000100e471e4(uVar22,uVar21);
        func_0x000107c615e8();
        if (uVar24 == uVar11) goto LAB_102c60678;
        uVar24 = uVar22 + 1;
        if (SCARRY8(uVar22,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x102c606e4);
          (*pcVar9)();
        }
        uVar22 = uVar22 + 1;
      } while (uVar24 != uVar23);
      uVar22 = 0;
LAB_102c60678:
      func_0x000107c6142c(uVar21);
      goto LAB_102c60708;
    }
    uVar22 = 0;
    do {
      if (*(ulong *)(uVar24 + 0x10) == uVar22) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x102c606e8);
        (*pcVar9)();
      }
      if (*(ulong *)(uVar21 + 0x20 + uVar22 * 8) == uVar11) goto LAB_102c60708;
      uVar22 = uVar22 + 1;
    } while (uVar23 != uVar22);
  }
  uVar22 = 0;
LAB_102c60708:
  lVar12 = *(long *)(unaff_x20 + _DAT_112f05a38);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar12 == 0) {
    lStack_90 = 0;
    lStack_c0 = 0;
  }
  else {
    puVar1 = (undefined8 *)(uVar11 + _DAT_11308f1f0);
    uVar13 = *puVar1;
    uVar6 = puVar1[1];
    func_0x000107c615f0();
    func_0x000107c61434(uVar6);
    func_0x000107c5fadc(uVar13,uVar6);
    func_0x000107c6142c(uVar6);
    lStack_c0 = lVar12;
    func_0x000107c5ce1c();
    func_0x000107c615e8(lVar12);
    func_0x000107c61170(uVar13);
    uVar13 = *puVar1;
    uVar6 = puVar1[1];
    func_0x000107c615f0(lVar12);
    func_0x000107c61434(uVar6);
    func_0x000107c5fadc(uVar13,uVar6);
    func_0x000107c6142c(uVar6);
    lStack_90 = lVar12;
    func_0x000107c5df18();
    func_0x000107c615e8(lVar12);
    func_0x000107c61170(uVar13);
  }
  lVar17 = *(long *)(lVar10 + lVar19);
  uVar13 = *(undefined8 *)(lVar17 + _DAT_11308f140);
  uVar7 = ((undefined8 *)(lVar17 + _DAT_11308f140))[1];
  uVar18 = *(undefined8 *)(lVar17 + _DAT_113815200);
  uVar6 = *(undefined8 *)(lVar17 + _DAT_11308f138);
  uVar8 = ((undefined8 *)(lVar17 + _DAT_11308f138))[1];
  uVar25 = *(undefined8 *)(lVar17 + _DAT_11308f128);
  uVar14 = 0;
  func_0x00010469d938();
  func_0x000107c610f8();
  uVar15 = param_4;
  func_0x000107c61174();
  func_0x000107c61438(lVar4,3);
  func_0x000107c61438(param_3,3);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar7);
  func_0x000107c61434(uVar8);
  uVar16 = uVar3;
  func_0x00010469cf8c(param_1,uVar3,uVar5,uVar22,param_4,uVar13,uVar7,uVar6,uVar8,lStack_c0,
                      lStack_90,uVar18,uVar25,lVar2,lVar4,lVar20,lVar20,param_2,param_3);
  lVar17 = *(long *)(lVar10 + lVar19);
  uVar13 = *(undefined8 *)(lVar17 + _DAT_11308f140);
  uVar7 = ((undefined8 *)(lVar17 + _DAT_11308f140))[1];
  uVar6 = *(undefined8 *)(lVar17 + _DAT_11308f138);
  uVar8 = ((undefined8 *)(lVar17 + _DAT_11308f138))[1];
  uVar18 = *(undefined8 *)(lVar17 + _DAT_113815200);
  uVar25 = *(undefined8 *)(lVar17 + _DAT_11308f128);
  func_0x000107c610f8();
  func_0x000107c61434(uVar8);
  func_0x000107c61434(uVar5);
  func_0x000107c61174();
  func_0x000107c61434(uVar7);
  func_0x00010469cf8c(param_1 + 1.0,uVar3,uVar5,uVar22,param_4,uVar13,uVar7,uVar6,uVar8,lStack_c0,
                      lStack_90,uVar18,uVar25,lVar2,lVar4,lVar20,lVar20,param_2,param_3);
  lVar19 = *(long *)(lVar10 + lVar19);
  uVar13 = *(undefined8 *)(lVar19 + _DAT_11308f140);
  uVar7 = ((undefined8 *)(lVar19 + _DAT_11308f140))[1];
  uVar6 = *(undefined8 *)(lVar19 + _DAT_11308f138);
  uVar8 = ((undefined8 *)(lVar19 + _DAT_11308f138))[1];
  uVar18 = *(undefined8 *)(lVar19 + _DAT_113815200);
  uVar25 = *(undefined8 *)(lVar19 + _DAT_11308f128);
  func_0x000107c610f8(uVar14);
  func_0x000107c61434(uVar8);
  func_0x000107c61434(uVar5);
  func_0x000107c61174(uVar15);
  func_0x000107c61434(uVar7);
  func_0x00010469cf8c(param_1 + 2.0,uVar3,uVar5,uVar22,param_4,uVar13,uVar7,uVar6,uVar8,lStack_c0,
                      lStack_90,uVar18,uVar25,lVar2,lVar4,lVar20,lVar20,param_2,param_3);
  func_0x000107c6142c(uVar5);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c615e8(lVar12);
  return uVar16;
}



/* Entry: 102c60b20; end: 102c6143f;  */

/* WARNING: Possible PIC construction at 0x000102c60b9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c60bb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c60d68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c60e20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c60f24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c60fb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c61018: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c61028: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c61038: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c6102c) */
/* WARNING: Removing unreachable block (ram,0x000102c6101c) */
/* WARNING: Removing unreachable block (ram,0x000102c60fb8) */
/* WARNING: Removing unreachable block (ram,0x000102c61024) */
/* WARNING: Removing unreachable block (ram,0x000102c60fec) */
/* WARNING: Removing unreachable block (ram,0x000102c60f28) */
/* WARNING: Removing unreachable block (ram,0x000102c60f2c) */
/* WARNING: Removing unreachable block (ram,0x000102c60f30) */
/* WARNING: Removing unreachable block (ram,0x000102c60f34) */
/* WARNING: Removing unreachable block (ram,0x000102c60f44) */
/* WARNING: Removing unreachable block (ram,0x000102c60f48) */
/* WARNING: Removing unreachable block (ram,0x000102c60f4c) */
/* WARNING: Removing unreachable block (ram,0x000102c60f50) */
/* WARNING: Removing unreachable block (ram,0x000102c60e24) */
/* WARNING: Removing unreachable block (ram,0x000102c60d6c) */
/* WARNING: Removing unreachable block (ram,0x000102c60bb4) */
/* WARNING: Removing unreachable block (ram,0x000102c60bb8) */
/* WARNING: Removing unreachable block (ram,0x000102c60c28) */
/* WARNING: Removing unreachable block (ram,0x000102c6107c) */
/* WARNING: Removing unreachable block (ram,0x000102c61080) */
/* WARNING: Removing unreachable block (ram,0x000102c61090) */
/* WARNING: Removing unreachable block (ram,0x000102c60c34) */
/* WARNING: Removing unreachable block (ram,0x000102c60c3c) */
/* WARNING: Removing unreachable block (ram,0x000102c60cbc) */
/* WARNING: Removing unreachable block (ram,0x000102c60cc8) */
/* WARNING: Removing unreachable block (ram,0x000102c61078) */
/* WARNING: Removing unreachable block (ram,0x000102c60cd0) */
/* WARNING: Removing unreachable block (ram,0x000102c60cdc) */
/* WARNING: Removing unreachable block (ram,0x000102c60ce8) */
/* WARNING: Removing unreachable block (ram,0x000102c60c44) */
/* WARNING: Removing unreachable block (ram,0x000102c60c50) */
/* WARNING: Removing unreachable block (ram,0x000102c60c6c) */
/* WARNING: Removing unreachable block (ram,0x000102c61074) */
/* WARNING: Removing unreachable block (ram,0x000102c60c74) */
/* WARNING: Removing unreachable block (ram,0x000102c60c80) */
/* WARNING: Removing unreachable block (ram,0x000102c60c84) */
/* WARNING: Removing unreachable block (ram,0x000102c60cec) */
/* WARNING: Removing unreachable block (ram,0x000102c60d70) */
/* WARNING: Removing unreachable block (ram,0x000102c60d74) */
/* WARNING: Removing unreachable block (ram,0x000102c60e2c) */
/* WARNING: Removing unreachable block (ram,0x000102c60e40) */
/* WARNING: Removing unreachable block (ram,0x000102c60ef0) */
/* WARNING: Removing unreachable block (ram,0x000102c60ef4) */
/* WARNING: Removing unreachable block (ram,0x000102c60ef8) */
/* WARNING: Removing unreachable block (ram,0x000102c60dbc) */
/* WARNING: Removing unreachable block (ram,0x000102c60d18) */
/* WARNING: Removing unreachable block (ram,0x000102c60ba0) */
/* WARNING: Removing unreachable block (ram,0x000102c60c90) */
/* WARNING: Removing unreachable block (ram,0x000102c60ba4) */
/* WARNING: Removing unreachable block (ram,0x000102c6103c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c60b20(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f05a20);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f05a18);
  func_0x000107c5fadc(uVar1,((undefined8 *)(unaff_x20 + _DAT_112f05a18))[1]);
  func_0x000107c3d368(uVar2);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102c61440; end: 102c61683;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c61440(undefined8 param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_88,0,0);
  lVar2 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar2 == 0) {
LAB_102c614e8:
    func_0x000107c61428(param_4 + 0x10,auStack_a0,0,0);
    lVar2 = param_4 + 0x10;
    func_0x000107c61618();
    if (lVar2 == 0) goto LAB_102c61628;
    func_0x000107c61428(param_2 + 0x10,auStack_b8,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    param_3 = lVar2;
    if (param_2 != 0) {
      lVar5 = *(long *)(lVar2 + _DAT_112f05ab8);
      param_3 = param_2;
      if (lVar5 != 0 && param_2 == lVar5) {
        *(undefined8 *)(lVar2 + _DAT_112f05ab8) = 0;
        func_0x000107c61170(lVar2);
        param_3 = lVar5;
        lVar2 = param_2;
      }
      goto LAB_102c61614;
    }
  }
  else {
    lVar5 = lVar2 + _DAT_112f05f40;
    func_0x000107c61618();
    lVar1 = _DAT_112f05f48;
    if (lVar5 == 0) {
LAB_102c614e0:
      func_0x000107c61170(lVar2);
      goto LAB_102c614e8;
    }
    lVar3 = *(long *)(lVar2 + _DAT_112f05f48);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar3 != 0) {
      func_0x000107c61170();
      func_0x000107c61170(lVar5);
      goto LAB_102c614e0;
    }
    lVar3 = lVar5;
    FUN_102c66388();
    uVar6 = *(undefined8 *)(lVar2 + _DAT_112f05f50);
    func_0x000107c614f0(uVar6);
    func_0x0001041bb580(0);
    func_0x000107c610f8();
    uVar4 = 0xd000000000000021;
    func_0x0001041bb5a4(0xd000000000000021,0x800000010efbc4a0);
    func_0x00010418bb88(param_3,lVar3,uVar4,lVar2,uVar6);
    func_0x000107c61170(uVar4);
    func_0x000107c61604(lVar2 + _DAT_112f05f60,param_3);
    func_0x000107c42c1c(*(undefined8 *)(lVar2 + lVar1));
    func_0x000107c61170(lVar5);
    func_0x000107c615e8(lVar3);
LAB_102c61614:
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61170(param_3);
LAB_102c61628:
  if ((param_5 & 1) == 0) {
    func_0x000107c61428(param_4 + 0x10,auStack_d0,0,0);
    param_4 = param_4 + 0x10;
    func_0x000107c61618();
    if (param_4 != 0) {
      FUN_102c60b20(param_1);
      func_0x000107c61170(param_4);
    }
  }
  return;
}



/* Entry: 102c61684; end: 102c6177b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c61684(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f05f60;
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112f05f60;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar4 = *(long *)(param_1 + _DAT_112f05f48);
      lVar3 = lVar4;
      func_0x000107c5194c();
      func_0x000107c61180();
      if ((lVar3 != 0) && (func_0x000107c61170(), lVar3 == lVar2)) {
        func_0x000107c61604(param_1 + lVar1,0);
        func_0x000107c4ffe8(lVar4);
        func_0x000107c61180();
        func_0x000107c61170(param_1);
        func_0x000107c61170(lVar2);
        func_0x000107c615e8(lVar4);
        return;
      }
      func_0x000107c61170(lVar2);
    }
    func_0x000107c61604(param_1 + lVar1,0);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102c6177c; end: 102c618f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102c6177c(long param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112f05a20);
  func_0x000107c5fadc();
  func_0x000107c3d368(lVar4,param_2,param_1);
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar4 != 0) {
    func_0x0001041f3970();
    func_0x000107c61170(lVar4);
    if (param_1 != 0) {
      lVar3 = *(long *)(param_1 + _DAT_113068f48);
      func_0x000107c61174();
      func_0x000107c61170(param_1);
      lVar4 = lVar3;
      func_0x000107c5e224();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      if (lVar4 != 0) {
        lVar3 = *(long *)(lVar4 + _DAT_113091378);
        if (lVar3 == 0) {
          func_0x000107c61170(lVar4);
          return false;
        }
        lVar5 = *(long *)(lVar3 + _DAT_113091470);
        iVar1 = *(int *)(lVar3 + _DAT_113091478);
        func_0x000107c61174();
        if (iVar1 == 2) {
          if (lVar5 == 0) {
            func_0x000107c61170(lVar4);
            func_0x000107c61170(lVar3);
            return true;
          }
          bVar2 = true;
        }
        else {
          bVar2 = iVar1 == 3;
          if (lVar5 == 0) {
            func_0x000107c61170(lVar4);
            func_0x000107c61170(lVar3);
            return bVar2;
          }
        }
        iVar1 = *(int *)(lVar4 + _DAT_113091358);
        func_0x000107c61170();
        func_0x000107c61170(lVar4);
        if (iVar1 != 3) {
          return bVar2;
        }
        return true;
      }
    }
  }
  return false;
}



/* Entry: 102c618f4; end: 102c61c4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102c618f4(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  long lVar15;
  long unaff_x20;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  lVar15 = *(long *)(unaff_x20 + _DAT_112f05a20);
  uVar5 = param_1;
  func_0x000107c5fadc();
  func_0x000107c3d368();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar15 != 0) {
    func_0x0001041f3970();
    func_0x000107c61170(lVar15);
    lVar3 = _DAT_11308f1e0;
    lVar15 = _DAT_113068f48;
    if (uVar5 == 0) {
      return 0;
    }
    lVar16 = *(long *)(uVar5 + _DAT_113068f48);
    iVar1 = *(int *)(lVar16 + _DAT_11308f1e0);
    lVar6 = lVar16;
    func_0x000107c61174();
    if (iVar1 == 10) {
      lVar7 = lVar6;
      func_0x000107c3fd64();
      if ((int)lVar7 == 3) goto LAB_102c61a00;
      lVar7 = lVar6;
      func_0x000107c3fd64();
      bVar4 = (int)lVar7 == 1;
      iVar1 = *(int *)(lVar16 + lVar3);
    }
    else {
      bVar4 = false;
    }
    if (((iVar1 == 1) || (bVar4)) ||
       (((param_4 & 1) != 0 && (FUN_102c6177c(param_1,param_2), (param_1 & 1) != 0)))) {
LAB_102c61a00:
      uStack_78 = 0;
      uVar8 = *(undefined8 *)(uVar5 + lVar15);
      uVar17 = *(undefined8 *)(uVar5 + _DAT_113068f40);
      uVar18 = *(undefined8 *)(unaff_x20 + _DAT_112f05a70);
      func_0x000107c61174(uVar8);
      func_0x000107c61174(uVar17);
      func_0x000107c5fe40();
      uVar9 = uVar8;
      func_0x000107c3e2ec(uVar8);
      func_0x000107c61180();
      func_0x000107c61170(uVar8);
      func_0x000107c61170(uVar17);
      func_0x000107c61170(uVar18);
      puVar10 = &UNK_1105b8f30;
      func_0x000107c613fc(&UNK_1105b8f30,0x18,7);
      *(undefined8 **)(puVar10 + 0x10) = &uStack_78;
      puVar11 = &UNK_1105b8f58;
      func_0x000107c613fc(&UNK_1105b8f58,0x20,7);
      *(undefined8 *)(puVar11 + 0x10) = 0x102c62c74;
      *(undefined **)(puVar11 + 0x18) = puVar10;
      puVar2 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_88 = FUN_102c62ca0;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_102062118;
      puStack_90 = &UNK_1105b8f70;
      ppuVar12 = &puStack_a8;
      puStack_80 = puVar11;
      func_0x000107c60bc4(ppuVar12);
      func_0x000107c61574(puStack_80);
      puVar11 = &UNK_1105b8eb8;
      func_0x000107c613fc(&UNK_1105b8eb8,0x18,7);
      func_0x000107c61614(puVar11 + 0x10);
      puVar13 = &UNK_1105b8fa8;
      func_0x000107c613fc(&UNK_1105b8fa8,0x20,7);
      *(undefined8 *)(puVar13 + 0x10) = 0x102c62cc4;
      *(undefined **)(puVar13 + 0x18) = puVar11;
      pcStack_88 = (code *)0x102c62ccc;
      puStack_a8 = puVar2;
      uStack_a0 = 0x42000000;
      puStack_98 = &UNK_100e27b38;
      puStack_90 = &UNK_1105b8fc0;
      ppuVar14 = &puStack_a8;
      puStack_80 = puVar13;
      func_0x000107c60bc4(ppuVar14);
      func_0x000107c61574(puStack_80);
      func_0x000107c4c754(uVar9);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(lVar6);
      func_0x000107c60bd0(ppuVar14);
      func_0x000107c60bd0(ppuVar12);
      func_0x000107c61170(uVar9);
      uVar9 = uStack_78;
      func_0x000107c61574(puVar11);
      func_0x000107c61574(puVar10);
      return uVar9;
    }
    func_0x000107c61170(uVar5);
    func_0x000107c61170(lVar6);
  }
  return 0;
}



/* Entry: 102c61c50; end: 102c61def;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102c61c50(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112f05a20);
  func_0x000107c5fadc();
  func_0x000107c3d368(lVar2,param_2,param_1);
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar2 != 0) {
    func_0x0001041f3970();
    func_0x000107c61170(lVar2);
    if (param_1 != 0) {
      lVar2 = *(long *)(param_1 + _DAT_113068f48);
      func_0x000107c61174();
      func_0x000107c61170(param_1);
      iVar1 = *(int *)(lVar2 + _DAT_11308f1e0);
      func_0x000107c61170(lVar2);
      return iVar1 == 10;
    }
  }
  return false;
}



/* Entry: 102c61df0; end: 102c61e87;  */

void FUN_102c61df0(long param_1,long param_2)

{
  undefined8 uVar1;
  long lStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    if (param_1 == 0) {
      func_0x000107c61170();
    }
    else {
      lStack_40 = param_1;
      func_0x000107c614b0(param_1);
      uVar1 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c5fb18(&lStack_40,uVar1);
      func_0x000107c61170(param_2);
      func_0x000107c6142c(uVar1);
    }
  }
  return;
}



/* Entry: 102c61e88; end: 102c620ff;  */

/* WARNING: Possible PIC construction at 0x000102c6200c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c6209c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c620ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c62010) */
/* WARNING: Removing unreachable block (ram,0x000102c620a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c61e88(double param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_260 [160];
  ulong uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  double dStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
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
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  double dStack_f8;
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
  
  lVar3 = *(long *)(param_2 + _DAT_113067d28);
  if (lVar3 == 0) {
    return;
  }
  iVar1 = *(int *)(lVar3 + _DAT_113813190);
  uVar6 = param_3;
  func_0x000107c61174();
  if (iVar1 == 1) {
    uVar8 = 8;
  }
  else {
    lVar7 = *(long *)(unaff_x20 + _DAT_112f05a78);
    if (lVar7 == 0) goto code_r0x000107c61170;
    func_0x000107c6157c(lVar7);
    func_0x0001000d224c(&uStack_120);
    uVar2 = uStack_120;
    uVar4 = uStack_120;
    func_0x000107c426c8();
    func_0x000107c615e8(uVar2);
    func_0x000107c61574(lVar7);
    if ((uVar4 & 1) == 0) goto code_r0x000107c61170;
    uVar8 = 1;
  }
  func_0x000107c5ed70(_DAT_113813188);
  func_0x000107c61174(param_3);
  func_0x00010469c5e8(&uStack_1c0);
  uStack_b8 = uStack_158;
  uStack_c0 = uStack_160;
  uStack_a8 = uStack_148;
  uStack_b0 = uStack_150;
  uStack_98 = uStack_138;
  uStack_a0 = uStack_140;
  uStack_88 = uStack_128;
  uStack_90 = uStack_130;
  uStack_d8 = uStack_178;
  uStack_e0 = uStack_180;
  uStack_c8 = uStack_168;
  uStack_d0 = uStack_170;
  uStack_118 = uStack_1b8;
  uStack_120 = uStack_1c0;
  uStack_108 = uStack_1a8;
  uStack_110 = uStack_1b0;
  uStack_100 = uStack_1a0;
  uStack_e8 = uStack_188;
  uStack_f0 = uStack_190;
  dStack_198 = param_1 + 3.0;
  dStack_f8 = param_1 + 3.0;
  func_0x00010469d938(0);
  func_0x000107c610f8();
  FUN_102c62cd4(&uStack_120,auStack_260);
  puVar5 = &uStack_120;
  func_0x00010469d28c(puVar5);
  func_0x000102c62d10(&uStack_1c0);
  func_0x000102c59fd0(uVar8,lVar3,uVar6,puVar5);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 102c62100; end: 102c6215f; -[_TtC24AdPlaybackImplementation27AdChromeInteractionWorkflow init] */

void FUN_102c62100(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AdPlaybackImplementation.AdChromeInteractionWorkflow",0x34,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102c6212c);
  (*pcVar1)();
}



/* Entry: 102c62160; end: 102c6231b; -[_TtC24AdPlaybackImplementation27AdChromeInteractionWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102c6217c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c621bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c62200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c62220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c622e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c62300: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c622e4) */
/* WARNING: Removing unreachable block (ram,0x000102c62224) */
/* WARNING: Removing unreachable block (ram,0x000102c62204) */
/* WARNING: Removing unreachable block (ram,0x000102c621c0) */
/* WARNING: Removing unreachable block (ram,0x000102c62180) */
/* WARNING: Removing unreachable block (ram,0x000102c62304) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c62160(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f059f0));
  return;
}



/* Entry: 102c6231c; end: 102c6235b;  */

void FUN_102c6231c(void)

{
  func_0x000107c61168(&PTR_PTR_11289a0d8);
  return;
}



/* Entry: 102c6235c; end: 102c62463;  */

/* WARNING: Possible PIC construction at 0x000102c62390: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c62394) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c6235c(void)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112f05ab8);
  if (lVar2 == 0) {
    *(undefined8 *)(unaff_x20 + _DAT_112f05ab8) = 0;
    func_0x000107c61170();
    *(undefined8 *)(unaff_x20 + _DAT_112f05ac0) = 0;
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f05ac8);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined1 *)(puVar1 + 2) = 1;
    lVar2 = *(long *)(unaff_x20 + _DAT_112f05ab0);
    if (lVar2 != 0) {
      *(undefined8 *)(unaff_x20 + _DAT_112f05ab0) = 0;
      lVar3 = unaff_x20 + _DAT_112f05aa0;
      func_0x000107c61618();
      if (lVar3 != 0) {
        func_0x000107c50724();
        func_0x000107c615e8(lVar3);
      }
      if (*(char *)(lVar2 + 0x18) == '\x01') {
        func_0x000107c41b1c(*(undefined8 *)(unaff_x20 + _DAT_112f05a08));
      }
      func_0x000107c61574(lVar2);
    }
    lVar3 = _DAT_112f05aa8;
    if (*(long *)(unaff_x20 + _DAT_112f05aa8) == 0) {
      lVar2 = 0;
    }
    else {
      func_0x000107c42848(*(undefined8 *)(unaff_x20 + _DAT_112f059f0));
      lVar2 = *(long *)(unaff_x20 + lVar3);
    }
    *(undefined8 *)(unaff_x20 + lVar3) = 0;
  }
  else {
    func_0x000107c61174();
    FUN_102c662c8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 102c62464; end: 102c6248b; -[_TtC24AdPlaybackImplementation27AdChromeInteractionWorkflow unifiedPublicProfilesPresenterScopeDidComplete] */

void FUN_102c62464(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102c6235c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c6248c; end: 102c6251f; -[_TtC24AdPlaybackImplementation27AdChromeInteractionWorkflow presentingViewControllerForUnifiedPublicProfilesPresenterScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c6248c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = *(undefined **)(param_1 + _DAT_112f05a08);
  puVar1 = puVar2;
  func_0x000107c61150(puVar2,PTR_s_respondsToSelector__11262c7e0,
                      PTR_s_operaPresentingViewController_112618648);
  func_0x000107c61174(param_1);
  if (((ulong)puVar1 & 1) != 0) {
    func_0x000107c4df38();
    func_0x000107c61180();
    if (puVar2 != (undefined *)0x0) goto LAB_102c62504;
  }
  puVar2 = PTR__OBJC_CLASS___UIViewController_1126af898;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIViewController_1126af898);
  func_0x000107c453e4();
LAB_102c62504:
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 102c62520; end: 102c6253f; -[_TtC24AdPlaybackImplementation27AdChromeInteractionWorkflow unifiedPublicProfilesPresenterScopeDidFinishPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c62520(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(long *)(param_1 + _DAT_112f05ab0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)
              (*(long *)(param_1 + _DAT_112f05ab0) + 0x10,param_3);
    return;
  }
  return;
}



/* Entry: 102c62540; end: 102c627a3;  */

/* WARNING: Possible PIC construction at 0x000102c625e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c62674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c62750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c6276c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c6277c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c62714: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102c6273c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c62718) */
/* WARNING: Removing unreachable block (ram,0x000102c62780) */
/* WARNING: Removing unreachable block (ram,0x000102c62770) */
/* WARNING: Removing unreachable block (ram,0x000102c62678) */
/* WARNING: Removing unreachable block (ram,0x000102c625ec) */
/* WARNING: Removing unreachable block (ram,0x000102c62784) */
/* WARNING: Removing unreachable block (ram,0x000102c62740) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c62540(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  
  lVar6 = *(long *)(unaff_x20 + _DAT_112f05ab0);
  if ((lVar6 == 0) || ((*(byte *)(lVar6 + 0x18) & 1) != 0)) {
    return;
  }
  *(undefined1 *)(lVar6 + 0x18) = 1;
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f05a08);
  func_0x000107c6157c(lVar6);
  func_0x000107c41c58(uVar7);
  lVar8 = *(long *)(lVar6 + 0x20);
  if (lVar8 != 0) {
    lVar2 = lVar6 + 0x10;
    func_0x000107c61618();
    lVar1 = _DAT_112f05ab8;
    if ((lVar2 != 0) && (*(long *)(unaff_x20 + _DAT_112f05ab8) == 0)) {
      func_0x000107c61174();
      lVar3 = lVar8;
      FUN_102c5eb28();
      lVar4 = _DAT_112f05f40;
      func_0x000107c61604(lVar3 + _DAT_112f05f40,lVar2);
      lVar4 = lVar3 + lVar4;
      func_0x000107c61618();
      if (lVar4 == 0) {
        lVar8 = *(long *)(unaff_x20 + lVar1);
        if ((lVar8 == 0) || (lVar3 != lVar8)) {
          if ((*(byte *)(lVar6 + 0x28) & 1) == 0) {
            FUN_102c60b20(*(undefined8 *)(lVar6 + 0x30));
          }
          goto code_r0x000107c61574;
        }
        *(undefined8 *)(unaff_x20 + lVar1) = 0;
      }
      else {
        lVar6 = *(long *)(lVar3 + _DAT_112f05f48);
        func_0x000107c5194c();
        func_0x000107c61180();
        if (lVar6 == 0) {
          FUN_102c66388(lVar4);
          uVar7 = *(undefined8 *)(lVar3 + _DAT_112f05f50);
          func_0x000107c614f0();
          func_0x0001041bb580(0);
          func_0x000107c610f8();
          uVar5 = 0xd000000000000021;
          func_0x0001041bb5a4(0xd000000000000021,0x800000010efbc4a0);
          func_0x00010418bb88(lVar8,lVar4,uVar5,lVar3,uVar7);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
  }
code_r0x000107c61574:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(lVar6);
  return;
}



/* Entry: 102c627a4; end: 102c627cb; -[_TtC24AdPlaybackImplementation27AdChromeInteractionWorkflow unifiedPublicProfilesPresenterScopePresentingViewControllerViewDidAppear] */

void FUN_102c627a4(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102c62540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102c627cc; end: 102c627e3; -[_TtC24AdPlaybackImplementation27AdChromeInteractionWorkflow isPresentingProfile] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_102c627cc(long param_1)

{
  return *(long *)(param_1 + _DAT_112f05aa8) != 0;
}



/* Entry: 102c627e4; end: 102c62877; -[_TtC24AdPlaybackImplementation27AdChromeInteractionWorkflow adsDrivenSwipeLeftToShowAttachmentWithPageId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_102c627e4(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  
  if (param_3 == 0) {
    uVar2 = 0;
    goto LAB_102c62864;
  }
  func_0x000107c5faec();
  if (param_3 == *(ulong *)(param_1 + _DAT_112f05a18) &&
      param_2 == ((ulong *)(param_1 + _DAT_112f05a18))[1]) {
LAB_102c62838:
    func_0x000107c61174(param_1);
    lVar1 = param_1;
    FUN_102c5ed88();
    uVar2 = (uint)lVar1;
    func_0x000107c61170(param_1);
  }
  else {
    func_0x000107c605b8();
    uVar2 = 0;
    if ((param_3 & 1) != 0) goto LAB_102c62838;
  }
  func_0x000107c6142c(param_2);
LAB_102c62864:
  return uVar2 & 1;
}



/* Entry: 102c62878; end: 102c628bb; -[_TtC24AdPlaybackImplementation27AdChromeInteractionWorkflow shouldTriggerAttachmentOnTapChromeWithPageId:] */

uint FUN_102c62878(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  FUN_102c6297c(&DAT_11308ede0,0x112f06490);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 102c628bc; end: 102c628ff; -[_TtC24AdPlaybackImplementation27AdChromeInteractionWorkflow shouldTriggerAttachmentOnTapChromeProfileIconWithPageId:] */

uint FUN_102c628bc(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  FUN_102c6297c(&DAT_11308edd8,0x112f064d0);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 102c62900; end: 102c6293b;  */

void FUN_102c62900(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f05bc0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f05bc0,&UNK_10db39d08);
  func_0x000107c5fb18(&uStack_18,uVar1);
  return;
}



/* Entry: 102c6293c; end: 102c62967;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c6293c(void)

{
  FUN_102c63be0();
  return;
}



/* Entry: 102c62968; end: 102c6297b;  */

undefined * FUN_102c62968(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uStack_80;
  ulong uStack_78;
  undefined1 auStack_70 [32];
  
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar8 = *(undefined **)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(0x112d4b5f8,&UNK_10d9121b0);
    puVar5 = puVar8;
    func_0x000107c60498();
    puVar9 = puVar9 + 0x20;
    func_0x000107c6157c();
    do {
      func_0x000100216788(puVar9,&uStack_80);
      uVar3 = uStack_78;
      uVar2 = uStack_80;
      uVar6 = uStack_80;
      uVar7 = uStack_78;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100214b8c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      func_0x000100102924(auStack_70,*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100214b90);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar9 = puVar9 + 0x30;
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 102c6297c; end: 102c62b5b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_102c6297c(long *param_1,char *param_2)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)(unaff_x20 + _DAT_112f05a20);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f05a18);
  func_0x000107c5fadc(lVar3,((long *)(unaff_x20 + _DAT_112f05a18))[1]);
  func_0x000107c3d368();
  func_0x000107c61180();
  func_0x000107c61170();
  if (lVar6 != 0) {
    func_0x0001041f3970();
    func_0x000107c61170(lVar6);
    if (lVar3 == 0) {
      return 0;
    }
    lVar6 = *(long *)(lVar3 + _DAT_113068f40);
    lVar7 = *(long *)(lVar3 + _DAT_113068f48);
    if (*(long *)(lVar7 + _DAT_11308f270 + 8) == 0) {
      bVar2 = false;
    }
    else {
      bVar2 = *(long *)(lVar6 + _DAT_1138152e0) != 0;
    }
    if (((*(long *)(lVar7 + _DAT_11308f208) == 0) ||
        (lVar5 = *(long *)(*(long *)(lVar7 + _DAT_11308f208) + _DAT_113091068), lVar5 == 0)) ||
       (lVar5 = *(long *)(lVar5 + _DAT_113090658), lVar5 == 0)) {
      func_0x000107c61174(lVar6);
      func_0x000107c61174(lVar7);
    }
    else {
      iVar1 = *(int *)(lVar5 + *param_1);
      lVar5 = lVar6;
      func_0x000107c61174(lVar6);
      lVar4 = lVar7;
      func_0x000107c61174(lVar7);
      if (iVar1 == 1) {
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar5);
        if (!bVar2) {
          return 1;
        }
        return 0;
      }
    }
    if (*param_2 == '\x01') {
      lVar5 = lVar7;
      func_0x000107c44730();
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar6);
      if (!bVar2 && (((uint)lVar5 ^ 0xffffffff) & 1) == 0) {
        return 1;
      }
    }
    else {
      func_0x000107c61170(lVar7);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar6);
    }
  }
  return 0;
}



/* Entry: 102c62b5c; end: 102c62b63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c62b5c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar1 + 0x10,auStack_38,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c61428(lVar2 + 0x10,auStack_50,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar4 = *(long *)(lVar1 + _DAT_112f05ab8);
      lVar3 = lVar1;
      if (lVar4 != 0 && lVar2 == lVar4) {
        *(undefined8 *)(lVar1 + _DAT_112f05ab8) = 0;
        func_0x000107c61170();
        lVar3 = lVar2;
        lVar2 = lVar4;
      }
      lVar1 = lVar2;
      func_0x000107c61170(lVar3);
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102c62b64; end: 102c62b87;  */

undefined8 FUN_102c62b64(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102c62b88; end: 102c62bb3;  */

void FUN_102c62b88(void)

{
  FUN_102c5cf90();
  return;
}



/* Entry: 102c62bb4; end: 102c62bc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c62bb4(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112f05aa0;
    func_0x000107c61618();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c420b0(lVar2);
      func_0x000107c615e8(lVar2);
    }
  }
  return;
}



/* Entry: 102c62bc4; end: 102c62bef;  */

void FUN_102c62bc4(void)

{
  FUN_102c5cf90();
  return;
}



/* Entry: 102c62bf0; end: 102c62c07;  */

void FUN_102c62bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_102c5d3b0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102c62c08; end: 102c62c9f;  */

/* WARNING: Possible PIC construction at 0x000102c62c20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102c62c24) */

void FUN_102c62c08(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 102c62ca0; end: 102c62cd3;  */

void FUN_102c62ca0(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (param_1,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 102c62cd4; end: 102c62dd3;  */

undefined8 FUN_102c62cd4(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_104673508)(param_2,param_1);
  return param_2;
}



/* Entry: 102c62dd4; end: 102c62e07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102c62dd4(void)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  lVar7 = *(long *)(unaff_x20 + 0x18);
  lVar8 = *(long *)(unaff_x20 + 0x20);
  bVar1 = *(byte *)(unaff_x20 + 0x28);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar5 + 0x10,auStack_88,0,0);
  lVar3 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar3 == 0) {
LAB_102c614e8:
    func_0x000107c61428(lVar8 + 0x10,auStack_a0,0,0);
    lVar3 = lVar8 + 0x10;
    func_0x000107c61618();
    if (lVar3 == 0) goto LAB_102c61628;
    func_0x000107c61428(lVar5 + 0x10,auStack_b8,0,0);
    lVar5 = lVar5 + 0x10;
    func_0x000107c61618();
    lVar7 = lVar3;
    if (lVar5 != 0) {
      lVar9 = *(long *)(lVar3 + _DAT_112f05ab8);
      lVar7 = lVar5;
      if (lVar9 != 0 && lVar5 == lVar9) {
        *(undefined8 *)(lVar3 + _DAT_112f05ab8) = 0;
        func_0x000107c61170(lVar3);
        lVar7 = lVar9;
        lVar3 = lVar5;
      }
      goto LAB_102c61614;
    }
  }
  else {
    lVar9 = lVar3 + _DAT_112f05f40;
    func_0x000107c61618();
    lVar2 = _DAT_112f05f48;
    if (lVar9 == 0) {
LAB_102c614e0:
      func_0x000107c61170(lVar3);
      goto LAB_102c614e8;
    }
    lVar4 = *(long *)(lVar3 + _DAT_112f05f48);
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar4 != 0) {
      func_0x000107c61170();
      func_0x000107c61170(lVar9);
      goto LAB_102c614e0;
    }
    lVar5 = lVar9;
    FUN_102c66388();
    uVar10 = *(undefined8 *)(lVar3 + _DAT_112f05f50);
    func_0x000107c614f0(uVar10);
    func_0x0001041bb580(0);
    func_0x000107c610f8();
    uVar6 = 0xd000000000000021;
    func_0x0001041bb5a4(0xd000000000000021,0x800000010efbc4a0);
    func_0x00010418bb88(lVar7,lVar5,uVar6,lVar3,uVar10);
    func_0x000107c61170(uVar6);
    func_0x000107c61604(lVar3 + _DAT_112f05f60,lVar7);
    func_0x000107c42c1c(*(undefined8 *)(lVar3 + lVar2));
    func_0x000107c61170(lVar9);
    func_0x000107c615e8(lVar5);
LAB_102c61614:
    func_0x000107c61170(lVar3);
  }
  func_0x000107c61170(lVar7);
LAB_102c61628:
  if ((bVar1 & 1) == 0) {
    func_0x000107c61428(lVar8 + 0x10,auStack_d0,0,0);
    lVar8 = lVar8 + 0x10;
    func_0x000107c61618();
    if (lVar8 != 0) {
      FUN_102c60b20(uVar11);
      func_0x000107c61170(lVar8);
    }
  }
  return;
}


