/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1021c0f9c; end: 1021c0fef; -[_TtC29SCPlaceSettingsImplementation28MapSettingsRowProviderPlugin handleWithContext:] */

/* WARNING: Possible PIC construction at 0x0001021c0fd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021c0fdc) */

void FUN_1021c0f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1021c078c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1021c0ff0; end: 1021c104f; -[_TtC29SCPlaceSettingsImplementation28MapSettingsRowProviderPlugin init] */

void FUN_1021c0ff0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCPlaceSettingsImplementation.MapSettingsRowProviderPlugin",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021c101c);
  (*pcVar1)();
}



/* Entry: 1021c1050; end: 1021c1147; -[_TtC29SCPlaceSettingsImplementation28MapSettingsRowProviderPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c1050(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e60590));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e60580));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e605a0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e60578));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e60570));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e605c8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e605c0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e605a8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e60598));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e605b0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e605b8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e605d0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e60588));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e60568));
  return;
}



/* Entry: 1021c1148; end: 1021c1157;  */

undefined1  [16] FUN_1021c1148(void)

{
  return ZEXT816(0x1104dc288);
}



/* Entry: 1021c1158; end: 1021c1177;  */

void FUN_1021c1158(void)

{
  func_0x000107c61168(&PTR_PTR_112824fa0);
  return;
}



/* Entry: 1021c1178; end: 1021c137b;  */

undefined * FUN_1021c1178(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126ae728;
  func_0x000107c61168(PTR_PTR_1126ae728);
  func_0x000107c3edf4();
  func_0x000107c61180();
  uVar5 = 0x800000010ef34920;
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef34920);
  puVar3 = puVar1;
  func_0x000107c545b8(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c57f3c(puVar1);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c59d5c(puVar1);
  func_0x000107c61180();
  func_0x000107c61170();
  func_0x000107c5343c(puVar1);
  func_0x000107c61180();
  func_0x000107c61170();
  puVar3 = PTR_PTR_1126b0380;
  func_0x000107c61168();
  func_0x000107c5d8e4();
  func_0x000107c61180();
  if (puVar3 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar5);
  }
  puVar4 = puVar1;
  func_0x000107c5a2ec(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar4);
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f06bd30);
  func_0x000107c4e60c(param_2);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010f06bd50);
  func_0x000107c40a28(param_1);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  puVar3 = PTR_PTR_1126a8b40;
  func_0x000107c610f8(PTR_PTR_1126a8b40);
  func_0x000107c49088();
  func_0x000107c61170(puVar1);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(param_1);
  return puVar3;
}



/* Entry: 1021c137c; end: 1021c1407;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021c137c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e60608;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112e60608);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126d5f68;
    func_0x000107c610f8();
    func_0x000107c4610c();
    func_0x000107c5a050();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1021c1408; end: 1021c17cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1021c1408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffff80;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112e60608) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e60610) = 0;
  uVar2 = 0;
  FUN_1021c2644();
  func_0x000107c610f8();
  func_0x000107c469a4(param_1,param_2,param_3,param_4);
  lVar1 = _DAT_112e60600;
  *(undefined8 *)(unaff_x20 + _DAT_112e60600) = uVar2;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174(uVar2);
  func_0x000107c3fa94(puVar3);
  func_0x000107c61180();
  func_0x000107c52b50(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c534b0(*(undefined8 *)(unaff_x20 + lVar1));
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff80,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c61174();
  func_0x000107c534b0();
  func_0x000107c5a050(puVar4);
  puVar5 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  puVar6 = puVar5;
  FUN_1021c137c();
  func_0x000107c3d89c(puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar7 = puVar3;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar7 + 0x18) = 9;
  *(undefined8 *)(puVar7 + 0x10) = 4;
  lVar1 = _DAT_112e60608;
  uVar8 = *(undefined8 *)(puVar4 + _DAT_112e60608);
  func_0x000107c4ace0();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c4ace0();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar2 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar6);
  *(undefined8 *)(puVar7 + 0x20) = uVar2;
  uVar8 = *(undefined8 *)(puVar4 + lVar1);
  func_0x000107c50890();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c50890();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar2 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar6);
  *(undefined8 *)(puVar7 + 0x28) = uVar2;
  uVar8 = *(undefined8 *)(puVar4 + lVar1);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  puVar6 = puVar5;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar2 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar6);
  *(undefined8 *)(puVar7 + 0x30) = uVar2;
  uVar8 = *(undefined8 *)(puVar4 + lVar1);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40510(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar6 = puVar5;
  func_0x000107c3ec1c(puVar5);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  uVar2 = uVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar6);
  *(undefined8 *)(puVar7 + 0x38) = uVar2;
  uVar2 = 0;
  func_0x000100847984(0);
  puVar9 = puVar7;
  func_0x000107c5fc48(puVar7,uVar2);
  func_0x000107c61574(puVar7);
  func_0x000107c3d048(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar9);
  return puVar4;
}



/* Entry: 1021c17cc; end: 1021c17eb; -[_TtC29SCPlaceSettingsImplementation23PlaceSettingsToggleCell initWithFrame:] */

void FUN_1021c17cc(void)

{
  FUN_1021c1408();
  return;
}



/* Entry: 1021c17ec; end: 1021c185b; -[_TtC29SCPlaceSettingsImplementation23PlaceSettingsToggleCell initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c17ec(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112e60608) = 0;
  *(undefined8 *)(param_1 + _DAT_112e60610) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCPlaceSettingsImplementation/PlaceSettingsToggleCell.swift",0x3b,2,0x30,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021c185c);
  (*pcVar1)();
}



/* Entry: 1021c185c; end: 1021c18af; -[_TtC29SCPlaceSettingsImplementation23PlaceSettingsToggleCell systemLayoutSizeFittingSize:withHorizontalFittingPriority:verticalFittingPriority:] */

undefined1  [16] FUN_1021c185c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  func_0x000107c61174();
  FUN_1021c1a00(param_1,param_2);
  func_0x000107c61170(param_3);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 1021c18b0; end: 1021c18e3;  */

void FUN_1021c18b0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021c18e4; end: 1021c191b; -[_TtC29SCPlaceSettingsImplementation23PlaceSettingsToggleCell .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021c1900: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021c1904) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c18e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e60600));
  return;
}



/* Entry: 1021c191c; end: 1021c193b;  */

void FUN_1021c191c(void)

{
  func_0x000107c61168(&PTR_PTR_1128250c8);
  return;
}



/* Entry: 1021c193c; end: 1021c19af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c193c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1021bb618();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c520f4();
  func_0x000107c61170(uVar1);
  FUN_1021c1ab0(param_1);
  return;
}



/* Entry: 1021c19b0; end: 1021c19ef;  */

void FUN_1021c19b0(undefined8 param_1)

{
  FUN_1021c137c();
  func_0x000107c59a2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021c19f0; end: 1021c19ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c19f0(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112e60610) = param_1;
  return;
}



/* Entry: 1021c1a00; end: 1021c1aaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1021c1a00(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  FUN_1021c137c();
  dVar3 = 1.79769313486232e+308;
  func_0x000107c5c614(param_1,0x7fefffffffffffff,0x447a0000,0x42480000);
  dVar2 = param_1;
  func_0x000107c61170(param_2);
  puVar1 = PTR_PTR_1126b2780;
  func_0x000107c61168(PTR_PTR_1126b2780);
  func_0x000107c5c224(*(undefined8 *)(unaff_x20 + _DAT_112e60608));
  func_0x000107c44da8(puVar1);
  if (dVar2 < dVar3) {
    dVar2 = dVar3;
  }
  auVar4._8_8_ = dVar2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 1021c1ab0; end: 1021c1c0f;  */

/* WARNING: Possible PIC construction at 0x0001021c1be8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021c1bec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c1ab0(long param_1,long param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar9 = param_1;
  FUN_1021bb0f0();
  lVar7 = *(long *)(unaff_x20 + _DAT_112e60660);
  if (lVar9 == 0) {
    FUN_1021bafa4();
    if (param_2 == 0) {
      lVar9 = 0;
    }
    else {
      lVar6 = param_2;
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
      param_2 = lVar6;
    }
    func_0x000107c59c6c(lVar7);
    func_0x000107c61170(lVar9);
  }
  else {
    func_0x000107c529c4(lVar7);
    func_0x000107c61170(lVar9);
    if (*(ulong *)(param_1 + 0x10) >> 0x3d == 3) {
      uVar8 = *(undefined8 *)(param_1 + 0x18);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x000107c6157c();
    }
    else {
      uVar8 = 0;
      uVar5 = 0;
    }
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e60650);
    uVar3 = *puVar1;
    param_2 = puVar1[1];
    *puVar1 = uVar8;
    puVar1[1] = uVar5;
    func_0x000100ce8f8c(uVar3);
  }
  func_0x000107c42450();
  lVar9 = lVar7;
  func_0x000107c59c74();
  FUN_1021bb7cc();
  if (lVar9 != 0) {
    lVar6 = lVar9;
    FUN_1021c1c10();
    func_0x000107c56c28();
    func_0x000107c61170(lVar6);
    plVar2 = (long *)(unaff_x20 + _DAT_112e60648);
    lVar6 = *plVar2;
    lVar4 = plVar2[1];
    *plVar2 = lVar9;
    plVar2[1] = param_2;
    func_0x000100ce8f8c(lVar6,lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c23d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar7,PTR_s_sizeToFit_11266cfb0);
  return;
}



/* Entry: 1021c1c10; end: 1021c1e47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021c1c10(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  lVar1 = _DAT_112e60640;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112e60640);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UISwitch_1126b0680;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c61174();
    uVar4 = 0xd000000000000017;
    func_0x000107c5fadc(0xd000000000000017,0x800000010f06bdc0);
    func_0x000107c520f4(puVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c5a050(puVar3);
    func_0x000107c61170(puVar3);
    func_0x000107c3d8b8(puVar3);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1021c1e48; end: 1021c1fa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1021c1e48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long unaff_x20;
  
  puVar5 = &stack0xffffffffffffff90;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112e60640) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e60648);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112e60650);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _DAT_112e60658;
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f8();
  func_0x000107c469a4(0,0,0,0);
  puVar4 = puVar3;
  func_0x000107c5a050();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _DAT_112e60660;
  func_0x0001021c1ce8();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffff90,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  func_0x000107c534b0();
  func_0x000107c53fcc(*(undefined8 *)(puVar5 + _DAT_112e60660));
  func_0x000107c3d89c(*(undefined8 *)(puVar5 + _DAT_112e60658));
  puVar6 = puVar5;
  func_0x000107c3d89c(puVar5);
  func_0x0001021c1c10();
  func_0x000107c3d89c(puVar5);
  func_0x000107c61170(puVar6);
  FUN_1021c1fa8();
  func_0x000107c61170(puVar5);
  return puVar5;
}



/* Entry: 1021c1fa8; end: 1021c24b7;  */

/* WARNING: Possible PIC construction at 0x0001021c2044: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c2084: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c20e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c2138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c219c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c21f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c2248: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c22a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c22f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c2358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c23ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c2400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c2454: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021c2404) */
/* WARNING: Removing unreachable block (ram,0x0001021c23b0) */
/* WARNING: Removing unreachable block (ram,0x0001021c235c) */
/* WARNING: Removing unreachable block (ram,0x0001021c22fc) */
/* WARNING: Removing unreachable block (ram,0x0001021c22a4) */
/* WARNING: Removing unreachable block (ram,0x0001021c224c) */
/* WARNING: Removing unreachable block (ram,0x0001021c21f8) */
/* WARNING: Removing unreachable block (ram,0x0001021c21a0) */
/* WARNING: Removing unreachable block (ram,0x0001021c213c) */
/* WARNING: Removing unreachable block (ram,0x0001021c20e8) */
/* WARNING: Removing unreachable block (ram,0x0001021c2088) */
/* WARNING: Removing unreachable block (ram,0x0001021c2048) */
/* WARNING: Removing unreachable block (ram,0x0001021c2458) */

void FUN_1021c1fa8(void)

{
  long lVar1;
  
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  lVar1 = 0x112d360b8;
  FUN_1021c2780(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0x19;
  *(undefined8 *)(lVar1 + 0x10) = 0xc;
  FUN_1021c1c10();
  func_0x000107c4acb0();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1021c24b8; end: 1021c24d7; -[_TtC29SCPlaceSettingsImplementation23PlaceSettingsToggleView initWithFrame:] */

void FUN_1021c24b8(void)

{
  FUN_1021c1e48();
  return;
}



/* Entry: 1021c24d8; end: 1021c24ff; -[_TtC29SCPlaceSettingsImplementation23PlaceSettingsToggleView initWithCoder:] */

void FUN_1021c24d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x0001021c27f8();
  return;
}



/* Entry: 1021c2500; end: 1021c259f; -[_TtC29SCPlaceSettingsImplementation23PlaceSettingsToggleView onSwitchChange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c2500(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + _DAT_112e60648);
  if (pcVar1 == (code *)0x0) {
    return;
  }
  uVar2 = ((undefined8 *)(param_1 + _DAT_112e60648))[1];
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100ce8f9c(pcVar1,uVar2);
  (*pcVar1)(param_3);
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



/* Entry: 1021c25a0; end: 1021c25d3;  */

void FUN_1021c25a0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021c25d4; end: 1021c2643; -[_TtC29SCPlaceSettingsImplementation23PlaceSettingsToggleView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021c25f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c2628: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021c25f4) */
/* WARNING: Removing unreachable block (ram,0x0001021c262c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c25d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e60640));
  return;
}



/* Entry: 1021c2644; end: 1021c2663;  */

void FUN_1021c2644(void)

{
  func_0x000107c61168(&PTR_PTR_112825190);
  return;
}



/* Entry: 1021c2664; end: 1021c275b; -[_TtC29SCPlaceSettingsImplementation23PlaceSettingsToggleView textView:shouldInteractWithURL:inRange:interaction:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1021c2664(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long extraout_x8;
  undefined8 uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  long lVar5;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edb4(puVar3,param_4);
  pcVar4 = *(code **)(param_1 + _DAT_112e60650);
  if (pcVar4 == (code *)0x0) {
    pcVar4 = *(code **)(lVar5 + 8);
    func_0x000107c61174(param_1);
    (*pcVar4)(puVar3,lVar1);
    func_0x000107c61170(param_1);
  }
  else {
    uVar2 = ((undefined8 *)(param_1 + _DAT_112e60650))[1];
    func_0x000107c61174();
    func_0x000100ce8f9c(pcVar4,uVar2);
    (*pcVar4)();
    func_0x000100ce8f8c(pcVar4,uVar2);
    func_0x000107c61170(param_1);
    (**(code **)(lVar5 + 8))(puVar3,lVar1);
  }
  return 0;
}



/* Entry: 1021c275c; end: 1021c277f;  */

void FUN_1021c275c(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112e60690;
  plVar5 = (long *)&UNK_10da686d0;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1021c28cc(0,0x112e60560,&PTR_PTR_1126b1d38);
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1021c2780; end: 1021c28cb;  */

void FUN_1021c2780(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1021c28cc(0,param_1,param_2);
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



/* Entry: 1021c28cc; end: 1021c290b;  */

void FUN_1021c28cc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1021c290c; end: 1021c2a37;  */

/* WARNING: Possible PIC construction at 0x0001021c2970: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c29f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021c2974) */
/* WARNING: Removing unreachable block (ram,0x0001021c29e8) */
/* WARNING: Removing unreachable block (ram,0x0001021c29a0) */
/* WARNING: Removing unreachable block (ram,0x0001021c29b8) */
/* WARNING: Removing unreachable block (ram,0x0001021c29c4) */
/* WARNING: Removing unreachable block (ram,0x0001021c29d0) */
/* WARNING: Removing unreachable block (ram,0x0001021c29d8) */
/* WARNING: Removing unreachable block (ram,0x0001021c29e0) */
/* WARNING: Removing unreachable block (ram,0x0001021c29ec) */
/* WARNING: Removing unreachable block (ram,0x0001021c29fc) */

void FUN_1021c290c(undefined8 param_1,long param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c5d200();
  func_0x000107c61180();
  FUN_1021bafa4();
  if (param_2 != 0) {
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c59e44(unaff_x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 1021c2a38; end: 1021c2a9b; -[_TtC29SCPlaceSettingsImplementation20SIGCellWithViewModel systemLayoutSizeFittingSize:withHorizontalFittingPriority:verticalFittingPriority:] */

void FUN_1021c2a38(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_2;
  func_0x000107c614f0();
  uStack_40 = param_2;
  uStack_38 = uVar1;
  func_0x000107c61154(param_1,0x7fefffffffffffff,0x447a0000,0x42480000,&uStack_40,
                      PTR_s_systemLayoutSizeFittingSize_with_112677640);
  return;
}



/* Entry: 1021c2a9c; end: 1021c2b13; -[_TtC29SCPlaceSettingsImplementation20SIGCellWithViewModel initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c2a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_5;
  func_0x000107c614f0();
  *(undefined8 *)(param_5 + _DAT_112e60698) = 0;
  lStack_50 = param_5;
  lStack_48 = lVar1;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&lStack_50,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 1021c2b14; end: 1021c2b67;  */

void FUN_1021c2b14(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1021c2b68; end: 1021c2b8b;  */

/* WARNING: Possible PIC construction at 0x0001021c2970: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c29f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021c2974) */
/* WARNING: Removing unreachable block (ram,0x0001021c29e8) */
/* WARNING: Removing unreachable block (ram,0x0001021c29a0) */
/* WARNING: Removing unreachable block (ram,0x0001021c29b8) */
/* WARNING: Removing unreachable block (ram,0x0001021c29c4) */
/* WARNING: Removing unreachable block (ram,0x0001021c29d0) */
/* WARNING: Removing unreachable block (ram,0x0001021c29d8) */
/* WARNING: Removing unreachable block (ram,0x0001021c29e0) */
/* WARNING: Removing unreachable block (ram,0x0001021c29ec) */
/* WARNING: Removing unreachable block (ram,0x0001021c29fc) */

void FUN_1021c2b68(undefined8 param_1,long param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c5d200();
  func_0x000107c61180();
  FUN_1021bafa4();
  if (param_2 != 0) {
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c59e44(unaff_x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 1021c2b8c; end: 1021c35ef;  */

undefined1  [16] FUN_1021c2b8c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffec;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f06be20);
  uVar3 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f06be40);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021c2c5c);
  (*pcVar1)();
}



/* Entry: 1021c35f0; end: 1021c35ff;  */

undefined1  [16] FUN_1021c35f0(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x70616d;
  func_0x000107c5fadc(0x70616d,0xe300000000000000);
  uVar3 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f06be40);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021c3d38);
  (*pcVar1)();
}



/* Entry: 1021c3600; end: 1021c3c5f;  */

undefined1  [16] FUN_1021c3600(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffde;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f06c050);
  uVar3 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f06be40);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021c36cc);
  (*pcVar1)();
}



/* Entry: 1021c3c60; end: 1021c3c87;  */

undefined1  [16] FUN_1021c3c60(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x6c65636e6163;
  func_0x000107c5fadc(0x6c65636e6163,0xe600000000000000);
  uVar3 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f06be40);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021c3d38);
  (*pcVar1)();
}



/* Entry: 1021c3c88; end: 1021c3d37;  */

undefined1  [16] FUN_1021c3c88(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  func_0x000107c5fadc();
  uVar2 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f06be40);
  uVar3 = 0;
  func_0x000107c5fe40(0);
  lVar4 = param_1;
  uVar6 = uVar2;
  func_0x0001000f6108(param_1,uVar2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5faec(lVar4);
    func_0x000107c61170(lVar4);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021c3d38);
  (*pcVar1)();
}



/* Entry: 1021c3d38; end: 1021c3d67;  */

void FUN_1021c3d38(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c3ea80();
  func_0x000107c61180();
  puRam0000000112e60770 = puVar1;
  return;
}



/* Entry: 1021c3d68; end: 1021c3dbf; -[_TtC48ExternalMusicProfileSettingsPluginImplementation51ExternalMusicProfileSettingsContainerViewController initWithCoder:] */

void FUN_1021c3d68(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "ExternalMusicProfileSettingsPluginImplementation/ExternalMusicProfileSettingsContainerViewController.swift"
                      ,0x6a,2,0x20,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021c3dc0);
  (*pcVar1)();
}



/* Entry: 1021c3dc0; end: 1021c4157;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c3dc0(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  
  lVar8 = *(long *)(unaff_x20 + _DAT_112e60738);
  func_0x000107c3d614();
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1021c4130);
    (*pcVar1)();
  }
  lVar3 = lVar8;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1021c4134);
    (*pcVar1)();
  }
  func_0x000107c3d89c(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  lVar2 = lVar8;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1021c4138);
    (*pcVar1)();
  }
  func_0x000107c5a050();
  func_0x000107c61170();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x18) = 9;
  *(undefined8 *)(lVar2 + 0x10) = 4;
  lVar3 = lVar8;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1021c413c);
    (*pcVar1)();
  }
  lVar4 = lVar3;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1021c4140);
    (*pcVar1)();
  }
  lVar5 = lVar3;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar5);
  *(long *)(lVar2 + 0x20) = lVar3;
  lVar3 = lVar8;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1021c4144);
    (*pcVar1)();
  }
  lVar4 = lVar3;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1021c4148);
    (*pcVar1)();
  }
  lVar5 = lVar3;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar4;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar5);
  *(long *)(lVar2 + 0x28) = lVar3;
  lVar3 = lVar8;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    lVar3 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1021c4150);
      (*pcVar1)();
    }
    lVar5 = lVar3;
    func_0x000107c4acb0();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    lVar3 = lVar4;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar5);
    *(long *)(lVar2 + 0x30) = lVar3;
    lVar3 = lVar8;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      func_0x000107c5de64();
      func_0x000107c61180();
      if (unaff_x20 != 0) {
        puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
        func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
        lVar3 = unaff_x20;
        func_0x000107c5ce8c(unaff_x20);
        func_0x000107c61180();
        func_0x000107c61170(unaff_x20);
        lVar5 = lVar4;
        func_0x000107c40280();
        func_0x000107c61180();
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar3);
        *(long *)(lVar2 + 0x38) = lVar5;
        uVar7 = 0;
        func_0x000100847984(0);
        lVar3 = lVar2;
        func_0x000107c5fc48(lVar2,uVar7);
        func_0x000107c61574(lVar2);
        func_0x000107c3d048(puVar6);
        func_0x000107c61170(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bf77e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_msgSend_11034d288)(lVar8,PTR_s_didMoveToParentViewController__1125bb948)
        ;
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1021c4158);
      (*pcVar1)();
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1021c4154);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021c414c);
  (*pcVar1)();
}



/* Entry: 1021c4158; end: 1021c41b3; -[_TtC48ExternalMusicProfileSettingsPluginImplementation51ExternalMusicProfileSettingsContainerViewController viewDidLoad] */

void FUN_1021c4158(undefined8 param_1)

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
  FUN_1021c3dc0();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1021c41b4; end: 1021c428f;  */

void FUN_1021c41b4(uint param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_viewDidAppear__112684bd0,param_1 & 1);
  lVar1 = unaff_x20;
  func_0x000107c4d508();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x000107c49888();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar2 != 0) {
      func_0x000107c53fcc(lVar2);
      func_0x000107c61170(lVar2);
    }
  }
  func_0x000107c4d508();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar1 = unaff_x20;
    func_0x000107c49888();
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    if (lVar1 != 0) {
      func_0x000107c54514(lVar1);
      func_0x000107c61170(lVar1);
    }
  }
  return;
}



/* Entry: 1021c4290; end: 1021c42bf; -[_TtC48ExternalMusicProfileSettingsPluginImplementation51ExternalMusicProfileSettingsContainerViewController viewDidAppear:] */

void FUN_1021c4290(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  FUN_1021c41b4(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1021c42c0; end: 1021c439b; -[_TtC48ExternalMusicProfileSettingsPluginImplementation51ExternalMusicProfileSettingsContainerViewController viewDidLayoutSubviews] */

void FUN_1021c42c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  puVar2 = PTR_s_viewDidLayoutSubviews_112684cc8;
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar2);
  puVar2 = PTR_PTR_1126b08d8;
  func_0x000107c61168(PTR_PTR_1126b08d8);
  uVar1 = param_1;
  func_0x000107c5de64(param_1);
  func_0x000107c61180();
  if (lRam0000000112e60768 != -1) {
    func_0x000107c61568(0x112e60768,FUN_1021c3d38);
  }
  func_0x00010085b3c8(0x4014000000000000,0x3fc3333333333333,0x3ff0000000000000,0,puVar2,uVar1,
                      uRam0000000112e60770);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1021c439c; end: 1021c43fb; -[_TtC48ExternalMusicProfileSettingsPluginImplementation51ExternalMusicProfileSettingsContainerViewController initWithNibName:bundle:] */

void FUN_1021c439c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ExternalMusicProfileSettingsPluginImplementation.ExternalMusicProfileSettingsContainerViewController"
                      ,100,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021c43c8);
  (*pcVar1)();
}



/* Entry: 1021c43fc; end: 1021c440b; -[_TtC48ExternalMusicProfileSettingsPluginImplementation51ExternalMusicProfileSettingsContainerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c43fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e60738));
  return;
}



/* Entry: 1021c440c; end: 1021c4457; -[_TtC48ExternalMusicProfileSettingsPluginImplementation51ExternalMusicProfileSettingsContainerViewController pageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c440c(long param_1)

{
  long lVar1;
  undefined *puStack_18;
  
  lVar1 = *(long *)(param_1 + _DAT_112e60738);
  puStack_18 = PTR_DAT_11269cb90;
  func_0x000107c61494(lVar1,1,&puStack_18);
  if (lVar1 != 0) {
    func_0x000107c4e2ec();
  }
  return;
}



/* Entry: 1021c4458; end: 1021c445f; -[_TtC48ExternalMusicProfileSettingsPluginImplementation51ExternalMusicProfileSettingsContainerViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_1021c4458(void)

{
  return 1;
}



/* Entry: 1021c4460; end: 1021c4467; -[_TtC48ExternalMusicProfileSettingsPluginImplementation51ExternalMusicProfileSettingsContainerViewController shouldPopToRootViewController] */

undefined8 FUN_1021c4460(void)

{
  return 0;
}



/* Entry: 1021c4468; end: 1021c446f; -[_TtC48ExternalMusicProfileSettingsPluginImplementation51ExternalMusicProfileSettingsContainerViewController shouldPopToRootViewControllerLater] */

undefined8 FUN_1021c4468(void)

{
  return 1;
}



/* Entry: 1021c4470; end: 1021c447f; -[_TtC48ExternalMusicProfileSettingsPluginImplementation51ExternalMusicProfileSettingsContainerViewController timeBeforeReturningToCamera] */

undefined8 FUN_1021c4470(void)

{
  return 0x4072c00000000000;
}



/* Entry: 1021c4480; end: 1021c449f;  */

void FUN_1021c4480(void)

{
  func_0x000107c61168(&PTR_PTR_1128252b0);
  return;
}



/* Entry: 1021c44a0; end: 1021c451f;  */

void FUN_1021c44a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e5f8a8,&UNK_10da67960);
  puVar1 = &UNK_1104dc3b8;
  func_0x000107c613fc(&UNK_1104dc3b8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_1021c45fc,puVar1);
  return;
}



/* Entry: 1021c4520; end: 1021c45fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c4520(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long lStack_60;
  long lStack_58;
  
  plVar5 = &lStack_60;
  lVar2 = param_2;
  FUN_1021c4b00();
  lVar3 = lVar2;
  func_0x000107c610f8();
  lVar1 = _DAT_112e60778;
  puVar4 = PTR_PTR_1126aeae0;
  func_0x000107c61168();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c5e2b8();
  func_0x000107c61180();
  *(undefined **)(lVar3 + lVar1) = puVar4;
  *(undefined8 *)(lVar3 + _DAT_112e60780) = 0;
  *(undefined8 *)(lVar3 + _DAT_112e60788) = 0;
  *(long *)(lVar3 + _DAT_112e60790) = param_2;
  *(undefined8 *)(lVar3 + _DAT_112e60798) = param_3;
  lStack_60 = lVar3;
  lStack_58 = lVar2;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  *param_1 = plVar5;
  return;
}



/* Entry: 1021c45fc; end: 1021c4603;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c45fc(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar7 = &lStack_60;
  lVar4 = lVar1;
  FUN_1021c4b00();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar3 = _DAT_112e60778;
  puVar6 = PTR_PTR_1126aeae0;
  func_0x000107c61168();
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c5e2b8();
  func_0x000107c61180();
  *(undefined **)(lVar5 + lVar3) = puVar6;
  *(undefined8 *)(lVar5 + _DAT_112e60780) = 0;
  *(undefined8 *)(lVar5 + _DAT_112e60788) = 0;
  *(long *)(lVar5 + _DAT_112e60790) = lVar1;
  *(undefined8 *)(lVar5 + _DAT_112e60798) = uVar2;
  lStack_60 = lVar5;
  lStack_58 = lVar4;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  *param_1 = plVar7;
  return;
}



/* Entry: 1021c4604; end: 1021c46b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c4604(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112e60778;
  puVar2 = PTR_PTR_1126aeae0;
  func_0x000107c61168();
  func_0x000107c5e2b8();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112e60780) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e60788) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e60790) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e60798) = param_2;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021c46b4; end: 1021c46c3; -[_TtC48ExternalMusicProfileSettingsPluginImplementation45ExternalMusicProfileSettingsRowProviderPlugin sectionRow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c46b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112e60778));
  return;
}



/* Entry: 1021c46c4; end: 1021c46f7; -[_TtC48ExternalMusicProfileSettingsPluginImplementation45ExternalMusicProfileSettingsRowProviderPlugin rowViewModel] */

void FUN_1021c46c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1021c46f8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1021c46f8; end: 1021c47d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021c46f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c49d38();
  func_0x000107c615e8(uStack_38);
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar3 = PTR_PTR_1126ae750;
  func_0x000107c61168(PTR_PTR_1126ae750);
  if ((int)uVar1 == 0) {
    func_0x000107c4d73c();
    func_0x000107c61180();
  }
  else {
    puVar4 = puVar3;
    FUN_1021c47d8();
    func_0x000107c5b58c(puVar3,param_2,puVar4);
    func_0x000107c61180();
    func_0x000107c61170(puVar4);
  }
  func_0x000107c4a8a4(puVar2,param_2,puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  return puVar2;
}



/* Entry: 1021c47d8; end: 1021c489b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021c47d8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112e60780;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112e60780);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    FUN_1021c4d94();
    puVar3 = PTR_PTR_1126aeaf0;
    func_0x000107c610f8();
    func_0x000107c5fadc(puVar2,param_2);
    func_0x000107c6142c(param_2);
    func_0x000107c48db0();
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



/* Entry: 1021c489c; end: 1021c49d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c489c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lStack_58;
  
  lVar1 = _DAT_112e60788;
  lVar4 = *(long *)(unaff_x20 + _DAT_112e60788);
  if ((lVar4 != 0) && ((*(byte *)(lVar4 + 0x20) & 1) == 0)) {
    *(undefined1 *)(lVar4 + 0x20) = 1;
    func_0x000107c41864(*(undefined8 *)(lVar4 + 0x18),param_2,0);
  }
  if (param_1 != 0) {
    func_0x000107c4d508();
    func_0x000107c61180();
    if (param_1 != 0) {
      func_0x000100083b20(&lStack_58);
      uVar5 = *(undefined8 *)(lStack_58 + 0x10);
      lVar4 = 0;
      func_0x0001021c4b20();
      func_0x000107c613fc();
      *(undefined1 *)(lVar4 + 0x20) = 0;
      puVar2 = PTR_PTR_1126aead0;
      func_0x000107c610f8();
      func_0x000107c6157c(uVar5);
      func_0x000107c47994();
      *(undefined8 *)(lVar4 + 0x10) = uVar5;
      *(undefined **)(lVar4 + 0x18) = puVar2;
      uVar3 = uVar5;
      func_0x000107c6157c(uVar5);
      FUN_1021c4c2c();
      func_0x000107c3e2c0(*(undefined8 *)(lVar4 + 0x18));
      func_0x000107c61574(lStack_58);
      func_0x000107c61170(param_1);
      func_0x000107c61574(uVar5);
      func_0x000107c61170(uVar3);
      uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
      *(long *)(unaff_x20 + lVar1) = lVar4;
      func_0x000107c61574(uVar3);
    }
  }
  return;
}



/* Entry: 1021c49d4; end: 1021c4a27; -[_TtC48ExternalMusicProfileSettingsPluginImplementation45ExternalMusicProfileSettingsRowProviderPlugin handleWithContext:] */

/* WARNING: Possible PIC construction at 0x0001021c4a10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021c4a14) */

void FUN_1021c49d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1021c489c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1021c4a28; end: 1021c4a87; -[_TtC48ExternalMusicProfileSettingsPluginImplementation45ExternalMusicProfileSettingsRowProviderPlugin init] */

void FUN_1021c4a28(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ExternalMusicProfileSettingsPluginImplementation.ExternalMusicProfileSettingsRowProviderPlugin"
                      ,0x5e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021c4a54);
  (*pcVar1)();
}



/* Entry: 1021c4a88; end: 1021c4aef; -[_TtC48ExternalMusicProfileSettingsPluginImplementation45ExternalMusicProfileSettingsRowProviderPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021c4aa4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021c4aa8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c4a88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e60790));
  return;
}



/* Entry: 1021c4af0; end: 1021c4aff;  */

undefined1  [16] FUN_1021c4af0(void)

{
  return ZEXT816(0x1104dc3e0);
}



/* Entry: 1021c4b00; end: 1021c4b3f;  */

void FUN_1021c4b00(void)

{
  func_0x000107c61168(&PTR_PTR_112825370);
  return;
}



/* Entry: 1021c4b40; end: 1021c4c07;  */

void FUN_1021c4b40(undefined8 param_1)

{
  func_0x0001000285a8(0x112e607c8,&UNK_10da68800);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1021c4cd8,param_1);
  return;
}



/* Entry: 1021c4c08; end: 1021c4c2b;  */

void FUN_1021c4c08(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1021c4c2c; end: 1021c4cd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1021c4c2c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  func_0x000107c6157c();
  func_0x00010008a7c8(&uStack_50,&stack0xffffffffffffffb8);
  func_0x0001048580f8(&uStack_58);
  func_0x000107c61574(uStack_50);
  lVar1 = 0;
  FUN_1021c4480();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112e60738) = uStack_58;
  plVar3 = &lStack_68;
  lStack_68 = lVar2;
  lStack_60 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  FUN_1021c4d60(&stack0xffffffffffffffb8);
  return plVar3;
}



/* Entry: 1021c4cd8; end: 1021c4cdf;  */

void FUN_1021c4cd8(long *param_1)

{
  long unaff_x20;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  FUN_1021c4d40();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = uStack_28;
  *param_1 = unaff_x20;
  return;
}



/* Entry: 1021c4ce0; end: 1021c4d0b;  */

void FUN_1021c4ce0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1021c4d0c; end: 1021c4d3f;  */

void FUN_1021c4d0c(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  if ((*(byte *)(lVar1 + 0x20) & 1) != 0) {
    return;
  }
  *(undefined1 *)(lVar1 + 0x20) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bf6f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(lVar1 + 0x18),PTR_s_detachUI__1125b96b8,0);
  return;
}



/* Entry: 1021c4d40; end: 1021c4d5f;  */

void FUN_1021c4d40(void)

{
  func_0x000107c61168(&PTR_PTR_112e60810);
  return;
}



/* Entry: 1021c4d60; end: 1021c4d93;  */

undefined8 FUN_1021c4d60(undefined8 param_1)

{
  (*(code *)&DAT_1028e9950)();
  return param_1;
}



/* Entry: 1021c4d94; end: 1021c4e5f;  */

undefined1  [16] FUN_1021c4d94(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe5;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f06c2c0);
  uVar3 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f06c2e0);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021c4e60);
  (*pcVar1)();
}



/* Entry: 1021c4e60; end: 1021c4fb7;  */

void FUN_1021c4e60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e5f8a8,&UNK_10da67960);
  puVar1 = &UNK_1104dc4d8;
  func_0x000107c613fc(&UNK_1104dc4d8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_1021c4fb8,puVar1);
  return;
}



/* Entry: 1021c4fb8; end: 1021c4fc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c4fb8(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_1021c55a8();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112e60920) = 0;
  *(undefined8 *)(lVar2 + _DAT_112e60928) = uStack_48;
  *(undefined8 *)(lVar2 + _DAT_112e60930) = uStack_50;
  *(undefined8 *)(lVar2 + _DAT_112e60938) = uStack_58;
  plVar3 = &lStack_68;
  lStack_68 = lVar2;
  lStack_60 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 1021c4fc4; end: 1021c5043;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c4fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e60920) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112e60928) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e60930) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e60938) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021c5044; end: 1021c5077; -[_TtC45PlusStreakRestoreSettingsPluginImplementation42PlusStreakRestoreSettingsRowProviderPlugin sectionRow] */

void FUN_1021c5044(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1021c5078();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1021c5078; end: 1021c5127;  */

/* WARNING: Possible PIC construction at 0x0001021c509c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021c50a0) */
/* WARNING: Removing unreachable block (ram,0x0001021c5124) */
/* WARNING: Removing unreachable block (ram,0x0001021c50a4) */
/* WARNING: Removing unreachable block (ram,0x0001021c510c) */
/* WARNING: Removing unreachable block (ram,0x0001021c5104) */
/* WARNING: Removing unreachable block (ram,0x0001021c5110) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c5078(void)

{
  long unaff_x20;
  
  func_0x000107c3fa04(*(undefined8 *)(unaff_x20 + _DAT_112e60928));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1021c5128; end: 1021c515b; -[_TtC45PlusStreakRestoreSettingsPluginImplementation42PlusStreakRestoreSettingsRowProviderPlugin rowViewModel] */

void FUN_1021c5128(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1021c515c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1021c515c; end: 1021c532b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021c515c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112e60930);
  func_0x000107c4cdb8();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c4a544();
    func_0x000107c615e8();
    if ((int)lVar1 != 0) {
      FUN_1021c55c8();
      puVar3 = PTR_PTR_1126aeaf0;
      func_0x000107c610f8(PTR_PTR_1126aeaf0);
      lVar1 = lVar2;
      func_0x000107c5fadc(lVar2,param_2);
      uVar4 = 0x616e735f74736f6c;
      func_0x000107c5fadc(0x616e735f74736f6c,0xef6b616572747370);
      func_0x000107c5fadc(lVar2,param_2);
      func_0x000107c6142c(param_2);
      func_0x000107c48db4(puVar3);
      func_0x000107c61170(lVar1);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(lVar2);
      puVar5 = PTR_PTR_1126ae6b8;
      func_0x000107c61168(PTR_PTR_1126ae6b8);
      puVar6 = PTR_PTR_1126ae750;
      func_0x000107c61168(PTR_PTR_1126ae750);
      func_0x000107c5b58c();
      func_0x000107c61180();
      func_0x000107c4a8a4(puVar5);
      func_0x000107c61180();
      func_0x000107c61170(puVar3);
      goto LAB_1021c5308;
    }
  }
  puVar5 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar6 = PTR_PTR_1126ae750;
  func_0x000107c61168(PTR_PTR_1126ae750);
  func_0x000107c4d73c();
  func_0x000107c61180();
  func_0x000107c4a8a4(puVar5);
  func_0x000107c61180();
LAB_1021c5308:
  func_0x000107c61170(puVar6);
  return puVar5;
}



/* Entry: 1021c532c; end: 1021c5473;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c532c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar1 = _DAT_112e60920;
  if (*(long *)(unaff_x20 + _DAT_112e60920) == 0 && param_1 != 0) {
    func_0x000102919834(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    uVar2 = 0x1c;
    func_0x000102919858(0x1c,0,0);
    lVar3 = param_1;
    func_0x000107c5d17c();
    func_0x000107c61180();
    func_0x0001003344b0(0);
    func_0x000107c610f8();
    func_0x000107c61174(uVar2);
    lVar4 = unaff_x20;
    func_0x000107c61174();
    func_0x000102919194(lVar3,uVar2,lVar4);
    lStack_60 = lVar3;
    func_0x00010008a7c8(&uStack_58,&lStack_60);
    func_0x000100083b20(&lStack_60);
    func_0x000107c61574(uStack_58);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar3);
    uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lStack_60;
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 1021c5474; end: 1021c54c7; -[_TtC45PlusStreakRestoreSettingsPluginImplementation42PlusStreakRestoreSettingsRowProviderPlugin handleWithContext:] */

/* WARNING: Possible PIC construction at 0x0001021c54b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021c54b4) */

void FUN_1021c5474(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1021c532c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1021c54c8; end: 1021c5527; -[_TtC45PlusStreakRestoreSettingsPluginImplementation42PlusStreakRestoreSettingsRowProviderPlugin init] */

void FUN_1021c54c8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlusStreakRestoreSettingsPluginImplementation.PlusStreakRestoreSettingsRowProviderPlugin"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021c54f4);
  (*pcVar1)();
}



/* Entry: 1021c5528; end: 1021c557f; -[_TtC45PlusStreakRestoreSettingsPluginImplementation42PlusStreakRestoreSettingsRowProviderPlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001021c5544: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001021c5564: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001021c5548) */
/* WARNING: Removing unreachable block (ram,0x0001021c5568) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c5528(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e60930));
  return;
}



/* Entry: 1021c5580; end: 1021c55a7; -[_TtC45PlusStreakRestoreSettingsPluginImplementation42PlusStreakRestoreSettingsRowProviderPlugin streakSupportPageDismissed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c5580(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e60920);
  *(undefined8 *)(param_1 + _DAT_112e60920) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1021c55a8; end: 1021c55c7;  */

void FUN_1021c55a8(void)

{
  func_0x000107c61168(&PTR_PTR_112825450);
  return;
}



/* Entry: 1021c55c8; end: 1021c5693;  */

undefined1  [16] FUN_1021c55c8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffdf;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f06c380);
  uVar3 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010f06c3b0);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1021c5694);
  (*pcVar1)();
}



/* Entry: 1021c5694; end: 1021c580b;  */

void FUN_1021c5694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e5f8a8,&UNK_10da67960);
  puVar1 = &UNK_1104dc5a0;
  func_0x000107c613fc(&UNK_1104dc5a0,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_1021c580c,puVar1);
  return;
}



/* Entry: 1021c580c; end: 1021c5817;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c580c(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  plVar3 = &lStack_70;
  func_0x000100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  func_0x000100083b20(&uStack_60);
  FUN_1021c6240();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112e60968) = uStack_48;
  *(undefined8 *)(lVar2 + _DAT_112e60970) = uStack_50;
  *(undefined8 *)(lVar2 + _DAT_112e60978) = uStack_58;
  *(undefined8 *)(lVar2 + _DAT_112e60980) = uStack_60;
  lStack_70 = lVar2;
  lStack_68 = lVar1;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  *param_1 = plVar3;
  return;
}



/* Entry: 1021c5818; end: 1021c58a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1021c5818(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e60968) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e60970) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e60978) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112e60980) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1021c58a4; end: 1021c58cf; -[_TtC21FanPassSettingsPlugin32FanPassSettingsRowProviderPlugin sectionRow] */

void FUN_1021c58a4(void)

{
  func_0x000107c61168(PTR_PTR_1126aeae0);
  func_0x000107c3cf30();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1021c58d0; end: 1021c5903; -[_TtC21FanPassSettingsPlugin32FanPassSettingsRowProviderPlugin rowViewModel] */

void FUN_1021c58d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1021c5904();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1021c5904; end: 1021c5bcb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1021c5904(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112e60980);
  func_0x000107c42e5c();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c42df4();
    func_0x000107c615e8(lVar2);
    if ((int)lVar1 != 0) {
      FUN_1021c6278();
      puVar3 = PTR_PTR_1126aeaf0;
      func_0x000107c610f8(PTR_PTR_1126aeaf0);
      func_0x000107c5fadc(lVar2,param_2);
      func_0x000107c6142c(param_2);
      func_0x000107c48dac(puVar3);
      func_0x000107c61170(lVar2);
      puVar4 = PTR_PTR_1126ae6b8;
      func_0x000107c61168(PTR_PTR_1126ae6b8);
      puVar5 = PTR_PTR_1126ae750;
      func_0x000107c61168(PTR_PTR_1126ae750);
      func_0x000107c5b58c();
      func_0x000107c61180();
      func_0x000107c4a8a4(puVar4);
      func_0x000107c61180();
      func_0x000107c61170(puVar3);
      goto LAB_1021c5a4c;
    }
  }
  puVar4 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar5 = PTR_PTR_1126ae750;
  func_0x000107c61168(PTR_PTR_1126ae750);
  func_0x000107c4d73c();
  func_0x000107c61180();
  func_0x000107c4a8a4(puVar4);
  func_0x000107c61180();
LAB_1021c5a4c:
  func_0x000107c61170(puVar5);
  return puVar4;
}


