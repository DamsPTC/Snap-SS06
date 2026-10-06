/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10254ff6c; end: 10254ff8b;  */

void FUN_10254ff6c(void)

{
  func_0x000107c61168(&PTR_PTR_11284d430);
  return;
}



/* Entry: 10254ff8c; end: 10254ffd7;  */

void FUN_10254ff8c(undefined8 param_1)

{
  func_0x0001000285a8(0x112ea4e18,&UNK_10dab8020);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10255003c,param_1);
  return;
}



/* Entry: 10254ffd8; end: 10255003b;  */

void FUN_10254ffd8(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1025501ec();
  lVar1 = param_2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = param_2;
  param_1[4] = (long)&PTR_DAT_11051f5d8;
  *param_1 = lVar1;
  return;
}



/* Entry: 10255003c; end: 102550043;  */

void FUN_10255003c(long *param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1025501ec();
  lVar1 = unaff_x20;
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = uStack_38;
  param_1[3] = unaff_x20;
  param_1[4] = (long)&PTR_DAT_11051f5d8;
  *param_1 = lVar1;
  return;
}



/* Entry: 102550044; end: 102550073;  */

void FUN_102550044(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 102550074; end: 102550097;  */

void FUN_102550074(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 102550098; end: 1025500cb;  */

void FUN_102550098(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_1025500cc(param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 1025500cc; end: 1025501cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025500cc(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lStack_50;
  long lStack_48;
  
  plVar5 = &lStack_50;
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar2 = &UNK_11051f618;
  func_0x000107c613fc(&UNK_11051f618,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  lVar3 = 0;
  FUN_10254fc7c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112ea4d98) = 0;
  *(undefined8 *)(lVar4 + _DAT_112ea4da0) = uVar6;
  puVar1 = (undefined8 *)(lVar4 + _DAT_112ea4da8);
  *puVar1 = FUN_10255020c;
  puVar1[1] = puVar2;
  puVar2 = PTR_s_initWithNibName_bundle__1125e9850;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(uVar6);
  func_0x000107c61154(&lStack_50,puVar2,0,0);
  puVar2 = PTR__OBJC_CLASS___UINavigationController_1126af6f0;
  func_0x000107c610f8(PTR__OBJC_CLASS___UINavigationController_1126af6f0);
  func_0x000107c483f8();
  (*param_2)();
  func_0x000107c61170(plVar5);
  func_0x000107c61170(puVar2);
  return;
}



/* Entry: 1025501d0; end: 1025501eb;  */

undefined ** FUN_1025501d0(void)

{
  return &PTR_DAT_112f36740;
}



/* Entry: 1025501ec; end: 10255020b;  */

void FUN_1025501ec(void)

{
  func_0x000107c61168(&PTR_PTR_112ea4e78);
  return;
}



/* Entry: 10255020c; end: 102550233;  */

void FUN_10255020c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(0,0);
  return;
}



/* Entry: 102550234; end: 10255025f;  */

undefined ** FUN_102550234(void)

{
  return &PTR_DAT_112f36740;
}



/* Entry: 102550260; end: 1025502ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102550260(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  lVar1 = 0;
  FUN_10254ff6c();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112ea4de8) = uStack_38;
  plVar3 = &lStack_48;
  lStack_48 = lVar2;
  lStack_40 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  uVar4 = 0;
  func_0x00010034c384(0);
  func_0x000107c610f8();
  func_0x0001038bb0a8(plVar3,uVar4);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 1025502f0; end: 102550307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025502f0(long *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  lVar1 = 0;
  FUN_10254ff6c();
  lVar2 = lVar1;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112ea4de8) = uStack_38;
  plVar3 = &lStack_48;
  lStack_48 = lVar2;
  lStack_40 = lVar1;
  func_0x000107c61154(plVar3,PTR_s_init_1125d9248);
  uVar4 = 0;
  func_0x00010034c384(0);
  func_0x000107c610f8();
  func_0x0001038bb0a8(plVar3,uVar4);
  *param_1 = (long)plVar3;
  return;
}



/* Entry: 102550308; end: 10255036b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102550308(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ea4f10;
  lVar2 = *(long *)(unaff_x20 + _DAT_112ea4f10);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_10255036c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 10255036c; end: 1025505d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10255036c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)&puStack_90 - extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar2 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = PTR_PTR_1126b0648;
  func_0x000107c610f8(PTR_PTR_1126b0648);
  func_0x000107c46e04();
  func_0x000107c5a050();
  lVar4 = *(long *)(param_1 + _DAT_112ea4f08);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x000107c61170(puVar2);
  }
  else {
    func_0x000107c5edd0(lVar11,0xd00000000000005d,0x800000010f0a8f60);
    lVar5 = lVar11;
    (**(code **)(lVar12 + 0x30))(lVar11,1,lVar1);
    if ((int)lVar5 == 1) {
      func_0x000107c615e8(lVar4);
      func_0x000107c61170(puVar2);
      FUN_102551828(lVar11,0x112d36580,&UNK_10d9016d0);
    }
    else {
      (**(code **)(lVar12 + 0x20))(lVar10,lVar11,lVar1);
      puVar6 = PTR_PTR_1126b20c0;
      func_0x000107c61168(PTR_PTR_1126b20c0);
      puVar7 = puVar6;
      func_0x000107c5ed90();
      puVar8 = &UNK_11051f6a8;
      func_0x000107c613fc(&UNK_11051f6a8,0x18,7);
      *(undefined **)(puVar8 + 0x10) = puVar2;
      pcStack_70 = FUN_102551868;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_10130cf28;
      puStack_78 = &UNK_11051f6c0;
      ppuVar9 = &puStack_90;
      puStack_68 = puVar8;
      func_0x000107c60bc4(ppuVar9);
      puVar8 = puStack_68;
      func_0x000107c61174(puVar2);
      func_0x000107c61574(puVar8);
      func_0x000106879d48(puVar6,puVar7,lVar4,ppuVar9);
      func_0x000107c615e8(lVar4);
      func_0x000107c60bd0(ppuVar9);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar7);
      (**(code **)(lVar12 + 8))(lVar10,lVar1);
    }
  }
  return puVar3;
}



/* Entry: 1025505d4; end: 1025507d3;  */

undefined * FUN_1025505d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8(PTR_PTR_1126aea58);
  func_0x000107c453e4();
  func_0x000107c61180();
  puVar2 = puVar1;
  FUN_10255276c();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c59c6c(puVar1);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  func_0x000107c59c78(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c5a050(puVar1);
  func_0x000107c5a100(puVar1);
  func_0x000107c59c74(puVar1);
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 1025507d4; end: 10255099b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1025507d4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ea4f28;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112ea4f28);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126aec40;
    func_0x000107c61168();
    func_0x000107c3ee98();
    func_0x000107c61180();
    puVar2 = puVar3;
    func_0x000107c59a2c();
    FUN_102552904();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
    func_0x000107c59e1c(puVar3);
    func_0x000107c61170(puVar2);
    func_0x000107c5a050(puVar3);
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



/* Entry: 10255099c; end: 102550a17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10255099c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ea4f38;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112ea4f38);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8();
    func_0x000107c453e4();
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



/* Entry: 102550a18; end: 10255137b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102550a18(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffff80,PTR_s_viewDidLoad_112684cd8);
  lVar2 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102551370);
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
  if (lVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102551374);
    (*pcVar1)();
  }
  lVar4 = lVar2;
  FUN_10255099c();
  func_0x000107c3d89c(lVar2);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar4);
  lVar2 = _DAT_112ea4f38;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ea4f38);
  func_0x000107c61174(uVar5);
  uVar6 = uVar5;
  FUN_102550308();
  func_0x000107c3d89c(uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x000107c61174(uVar6);
  puVar3 = &DAT_112ea4f18;
  func_0x0001025506a0(&DAT_112ea4f18,0x1025505d4);
  func_0x000107c3d89c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar3);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x000107c61174(uVar6);
  puVar3 = &DAT_112ea4f20;
  func_0x0001025506a0(&DAT_112ea4f20,0x1025506fc);
  func_0x000107c3d89c(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar3);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x000107c61174(uVar5);
  uVar6 = uVar5;
  FUN_1025507d4();
  func_0x000107c3d89c(uVar5);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  lVar7 = *(long *)(unaff_x20 + lVar2);
  func_0x000107c61174();
  lVar4 = lVar7;
  func_0x0001025508b8();
  func_0x000107c3d89c(lVar7);
  func_0x000107c61170(lVar7);
  func_0x000107c61170();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 0x27;
  *(undefined8 *)(lVar4 + 0x10) = 0x13;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x000107c4ace0();
  func_0x000107c61180();
  lVar7 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x102551378);
    (*pcVar1)();
  }
  lVar8 = lVar7;
  func_0x000107c4ace0();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  uVar5 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar8);
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
  func_0x000107c50890();
  func_0x000107c61180();
  lVar7 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar7 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar8 = lVar7;
    func_0x000107c50890(lVar7);
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    uVar5 = uVar6;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(lVar8);
    *(undefined8 *)(lVar4 + 0x28) = uVar5;
    lVar7 = _DAT_112ea4f10;
    uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112ea4f10);
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c515ac(uVar5);
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    uVar5 = uVar9;
    func_0x000107c40284(0x4049000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar9);
    func_0x000107c61170(uVar6);
    *(undefined8 *)(lVar4 + 0x30) = uVar5;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar7);
    func_0x000107c3f75c();
    func_0x000107c61180();
    uVar9 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c3f75c(uVar9);
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar9);
    *(undefined8 *)(lVar4 + 0x38) = uVar6;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar7);
    func_0x000107c5e308();
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c40290(0x4063400000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    *(undefined8 *)(lVar4 + 0x40) = uVar6;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar7);
    func_0x000107c44d9c();
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c40290(0x4063400000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    *(undefined8 *)(lVar4 + 0x48) = uVar6;
    lVar8 = _DAT_112ea4f18;
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ea4f18);
    func_0x000107c4ace0();
    func_0x000107c61180();
    uVar9 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c4ace0(uVar9);
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c40284(0x4040000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar9);
    *(undefined8 *)(lVar4 + 0x50) = uVar6;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar8);
    func_0x000107c50890();
    func_0x000107c61180();
    uVar9 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c50890(uVar9);
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c40284(0xc040000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar9);
    *(undefined8 *)(lVar4 + 0x58) = uVar6;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar8);
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uVar9 = *(undefined8 *)(unaff_x20 + lVar7);
    func_0x000107c3ec1c(uVar9);
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c40284(0x4038000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar9);
    *(undefined8 *)(lVar4 + 0x60) = uVar6;
    lVar7 = _DAT_112ea4f20;
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ea4f20);
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uVar9 = *(undefined8 *)(unaff_x20 + lVar8);
    func_0x000107c3ec1c(uVar9);
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c40284(0x4028000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar9);
    *(undefined8 *)(lVar4 + 0x68) = uVar6;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar7);
    func_0x000107c4ace0();
    func_0x000107c61180();
    uVar9 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c4ace0(uVar9);
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c40284(0x4040000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar9);
    *(undefined8 *)(lVar4 + 0x70) = uVar6;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar7);
    func_0x000107c50890();
    func_0x000107c61180();
    uVar9 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c50890(uVar9);
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c40284(0xc040000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar9);
    *(undefined8 *)(lVar4 + 0x78) = uVar6;
    lVar8 = _DAT_112ea4f28;
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ea4f28);
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uVar9 = *(undefined8 *)(unaff_x20 + lVar7);
    func_0x000107c3ec1c(uVar9);
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c40284(0x4024000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar9);
    *(undefined8 *)(lVar4 + 0x80) = uVar6;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar8);
    func_0x000107c4ace0();
    func_0x000107c61180();
    uVar9 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c4ace0(uVar9);
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c40284(0x4030000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar9);
    *(undefined8 *)(lVar4 + 0x88) = uVar6;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar8);
    func_0x000107c50890();
    func_0x000107c61180();
    uVar9 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c50890(uVar9);
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c40284(0xc030000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar9);
    *(undefined8 *)(lVar4 + 0x90) = uVar6;
    lVar7 = _DAT_112ea4f30;
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112ea4f30);
    func_0x000107c5cbe4();
    func_0x000107c61180();
    uVar9 = *(undefined8 *)(unaff_x20 + lVar8);
    func_0x000107c3ec1c(uVar9);
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c40284(0x4024000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar9);
    *(undefined8 *)(lVar4 + 0x98) = uVar6;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar7);
    func_0x000107c4ace0();
    func_0x000107c61180();
    uVar9 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c4ace0(uVar9);
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c40284(0x4030000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar9);
    *(undefined8 *)(lVar4 + 0xa0) = uVar6;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar7);
    func_0x000107c50890();
    func_0x000107c61180();
    uVar9 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c50890(uVar9);
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c40284(0xc030000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar9);
    *(undefined8 *)(lVar4 + 0xa8) = uVar6;
    uVar5 = *(undefined8 *)(unaff_x20 + lVar7);
    func_0x000107c3ec1c();
    func_0x000107c61180();
    uVar9 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c3ec1c(uVar9);
    func_0x000107c61180();
    uVar6 = uVar5;
    func_0x000107c40284(0xc04b000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar9);
    *(undefined8 *)(lVar4 + 0xb0) = uVar6;
    uVar6 = 0;
    func_0x000100847984(0);
    lVar2 = lVar4;
    func_0x000107c5fc48(lVar4,uVar6);
    func_0x000107c61574(lVar4);
    func_0x000107c3d048(puVar3);
    func_0x000107c61170(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10255137c);
  (*pcVar1)();
}



/* Entry: 10255137c; end: 1025513a3; -[_TtC33MapWidgetOnboardingImplementation38MapWidgetOnboardingIntroViewController viewDidLoad] */

void FUN_10255137c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102550a18();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1025513a4; end: 1025513d7; -[_TtC33MapWidgetOnboardingImplementation38MapWidgetOnboardingIntroViewController initWithCoder:] */

undefined8 FUN_1025513a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_102551788();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 1025513d8; end: 1025514eb; -[_TtC33MapWidgetOnboardingImplementation38MapWidgetOnboardingIntroViewController didTapGetStarted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025513d8(long param_1)

{
  undefined1 auStack_48 [24];
  long lStack_30;
  
  FUN_102551644(param_1 + _DAT_112ea4f00,auStack_48);
  if (lStack_30 == 0) {
    FUN_102551828(auStack_48,0x112ea4f68,&UNK_10dab81b8);
  }
  else {
    func_0x0001000a8868();
    func_0x000107c61174(param_1);
    FUN_102552158();
    func_0x000107c61170(param_1);
    func_0x0001000834e4(auStack_48);
  }
  return;
}



/* Entry: 1025514ec; end: 102551513; -[_TtC33MapWidgetOnboardingImplementation38MapWidgetOnboardingIntroViewController didTapMaybeLater] */

void FUN_1025514ec(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000102551460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102551514; end: 102551573; -[_TtC33MapWidgetOnboardingImplementation38MapWidgetOnboardingIntroViewController initWithNibName:bundle:] */

void FUN_102551514(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapWidgetOnboardingImplementation.MapWidgetOnboardingIntroViewController",
                      0x48,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102551540);
  (*pcVar1)();
}



/* Entry: 102551574; end: 10255161b; -[_TtC33MapWidgetOnboardingImplementation38MapWidgetOnboardingIntroViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001025515b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025515d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001025515f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001025515d4) */
/* WARNING: Removing unreachable block (ram,0x0001025515b4) */
/* WARNING: Removing unreachable block (ram,0x0001025515f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102551574(long param_1)

{
  FUN_102551828(param_1 + _DAT_112ea4f00,0x112ea4f68,&UNK_10dab81b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea4f08));
  return;
}



/* Entry: 10255161c; end: 10255163b;  */

void FUN_10255161c(void)

{
  func_0x000107c61168(&PTR_PTR_11284d4f0);
  return;
}



/* Entry: 10255163c; end: 102551643; -[_TtC33MapWidgetOnboardingImplementation38MapWidgetOnboardingIntroViewController tray:canUseGestureToExpandOrCollapse:] */

undefined8 FUN_10255163c(void)

{
  return 1;
}



/* Entry: 102551644; end: 102551693;  */

undefined8 FUN_102551644(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ea4f68;
  func_0x0001000285a8(0x112ea4f68,&UNK_10dab81b8);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 102551694; end: 102551787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_102551694(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffc0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112ea4f10) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4f18) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4f20) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4f28) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4f30) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4f38) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4f08) = param_1;
  FUN_102551644(param_2,unaff_x20 + _DAT_112ea4f00);
  puVar1 = PTR_s_initWithNibName_bundle__1125e9850;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&stack0xffffffffffffffc0,puVar1,0,0);
  func_0x000107c53dec();
  FUN_102551828(param_2,0x112ea4f68,&UNK_10dab81b8);
  return puVar2;
}



/* Entry: 102551788; end: 102551827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102551788(void)

{
  code *pcVar1;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112ea4f10) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4f18) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4f20) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4f28) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4f30) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4f38) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000040,0x800000010ef218f0,
                      "MapWidgetOnboardingImplementation/MapWidgetOnboardingIntroViewController.swift"
                      ,0x4e,2,0x7b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102551828);
  (*pcVar1)();
}



/* Entry: 102551828; end: 102551867;  */

undefined8 FUN_102551828(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 102551868; end: 10255189b;  */

void FUN_102551868(long param_1,long param_2)

{
  long unaff_x20;
  
  if ((param_2 == 0) && (param_1 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(unaff_x20 + 0x10),PTR_s_next__112614028,param_1);
    return;
  }
  return;
}



/* Entry: 10255189c; end: 102551927;  */

void FUN_10255189c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e98ad8;
  func_0x0001000285a8(0x112e98ad8,&UNK_10daa42f0);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 102551928; end: 10255192f;  */

void FUN_102551928(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e98ad8;
  func_0x0001000285a8(0x112e98ad8,&UNK_10daa42f0);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 102551930; end: 102551aeb;  */

void FUN_102551930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ea4f70,&UNK_10dab81c8);
  puVar1 = &UNK_11051f6f8;
  func_0x000107c613fc(&UNK_11051f6f8,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_102551aec,puVar1);
  return;
}



/* Entry: 102551aec; end: 102551afb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102551aec(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar7 = &lStack_70;
  lVar5 = lVar1;
  func_0x000100083b20(&uStack_58,lVar1,uVar2,*(undefined8 *)(unaff_x20 + 0x20),uVar3,
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&uStack_60);
  FUN_102552554();
  lVar6 = lVar5;
  func_0x000107c610f8();
  *(undefined8 *)(lVar6 + _DAT_112ea4f78) = 0;
  *(undefined8 *)(lVar6 + _DAT_112ea4f80) = 0;
  *(long *)(lVar6 + _DAT_112ea4f88) = lVar1;
  *(undefined8 *)(lVar6 + _DAT_112ea4f90) = uVar2;
  *(undefined8 *)(lVar6 + _DAT_112ea4f98) = uStack_58;
  *(undefined8 *)(lVar6 + _DAT_112ea4fa0) = uVar3;
  *(undefined8 *)(lVar6 + _DAT_112ea4fa8) = uStack_60;
  puVar4 = PTR_s_init_1125d9248;
  lStack_70 = lVar6;
  lStack_68 = lVar5;
  func_0x000107c6157c(lVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar3);
  func_0x000107c61154(&lStack_70,puVar4);
  *param_1 = plVar7;
  return;
}



/* Entry: 102551afc; end: 102551ca7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102551afc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ea4f78) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4f80) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4f88) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4f90) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4f98) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4fa0) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ea4fa8) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102551ca8; end: 102551e83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102551ca8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lStack_38;
  
  func_0x000102551bb0();
  puVar2 = PTR_PTR_1126b0a08;
  func_0x000107c610f8();
  func_0x000107c48e84();
  func_0x000107c61170(param_1);
  lVar4 = _DAT_112ea4f78;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112ea4f78);
  *(undefined **)(unaff_x20 + _DAT_112ea4f78) = puVar2;
  func_0x000107c61170(uVar3);
  if (*(long *)(unaff_x20 + lVar4) != 0) {
    func_0x000107c5a070();
    if (*(long *)(unaff_x20 + lVar4) != 0) {
      func_0x000107c52684();
      if (*(long *)(unaff_x20 + lVar4) != 0) {
        func_0x000107c5a05c();
        if (*(long *)(unaff_x20 + lVar4) != 0) {
          func_0x000107c52aa4();
          if (*(long *)(unaff_x20 + lVar4) != 0) {
            func_0x000107c5a074();
            if (*(long *)(unaff_x20 + lVar4) != 0) {
              func_0x000107c4ef38();
            }
          }
        }
      }
    }
  }
  func_0x000100083b20(&lStack_38);
  lVar4 = lStack_38;
  func_0x000107c3dda8();
  func_0x000107c61180();
  func_0x000107c61170(lStack_38);
  lVar5 = lVar4;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar4);
  if (lVar5 != 0) {
    puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112ea4f98) + _DAT_112fa9678);
    uVar3 = *puVar1;
    uVar6 = puVar1[1];
    func_0x000107c61434(uVar6);
    func_0x000107c5fadc(uVar3,uVar6);
    func_0x000107c6142c(uVar6);
    uVar6 = 0xd000000000000018;
    func_0x000107c5fadc(0xd000000000000018,0x800000010f0a9120);
    func_0x000107c59a04(lVar5);
    func_0x000107c615e8(lVar5);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar6);
  }
  return;
}



/* Entry: 102551e84; end: 102551eab; -[_TtC33MapWidgetOnboardingImplementation24WidgetOnboardingWorkflow beginWorkflow] */

void FUN_102551e84(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102551ca8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102551eac; end: 102551fab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102551eac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  ulong *puVar3;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  lVar2 = lStack_48;
  lVar1 = lStack_48;
  func_0x000107c5194c();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar1 != 0) {
    func_0x000107c61170(lVar1);
    func_0x000100083b20(&lStack_48);
    lVar2 = lStack_48;
    func_0x000107c4ffe8(lStack_48);
    func_0x000107c61180();
    func_0x000107c61170(lStack_48);
    func_0x000107c615e8(lVar2);
  }
  puVar3 = *(ulong **)(unaff_x20 + _DAT_112ea4f98);
  lVar2 = *(long *)((long)puVar3 + _DAT_112fa9670);
  func_0x000107c41864(lVar2,param_2,0);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar3) + 0x68))();
  if (lVar2 != 0) {
    func_0x000107c4c468();
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 102551fac; end: 10255200b; -[_TtC33MapWidgetOnboardingImplementation24WidgetOnboardingWorkflow init] */

void FUN_102551fac(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapWidgetOnboardingImplementation.WidgetOnboardingWorkflow",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102551fd8);
  (*pcVar1)();
}



/* Entry: 10255200c; end: 102552093; -[_TtC33MapWidgetOnboardingImplementation24WidgetOnboardingWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102552028: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102552078: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010255202c) */
/* WARNING: Removing unreachable block (ram,0x00010255207c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10255200c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea4f98));
  return;
}



/* Entry: 102552094; end: 1025520cb; -[_TtC33MapWidgetOnboardingImplementation24WidgetOnboardingWorkflow tray:positionDidChange:] */

void FUN_102552094(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 2) {
    func_0x000107c61174();
    FUN_102551eac(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1025520cc; end: 102552157; -[_TtC33MapWidgetOnboardingImplementation24WidgetOnboardingWorkflow tray:heightForPosition:] */

undefined8 FUN_1025520cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_d3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102551bb0();
  if (param_4 == 2) {
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_1);
    in_d3 = 0xbff0000000000000;
  }
  else {
    uVar2 = uVar1;
    FUN_10255099c();
    func_0x000107c438d4();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_1);
  }
  return in_d3;
}



/* Entry: 102552158; end: 10255223f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102552158(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000102551bb0();
  puVar2 = PTR_PTR_1126aead8;
  func_0x000107c610f8(PTR_PTR_1126aead8);
  func_0x000107c4807c();
  func_0x000107c61170(param_1);
  lVar3 = *(long *)(unaff_x20 + _DAT_112ea4fa8);
  func_0x000107c3eda0(lVar3);
  func_0x000107c61180();
  lVar1 = _DAT_11307c228;
  func_0x000107c61428(lVar3 + _DAT_11307c228,auStack_48,1,0);
  func_0x000107c61604(lVar3 + lVar1);
  func_0x000100083b20(&uStack_50);
  func_0x000107c42c1c(uStack_50);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uStack_50);
  return;
}



/* Entry: 102552240; end: 102552273; -[_TtC33MapWidgetOnboardingImplementation24WidgetOnboardingWorkflow title] */

void FUN_102552240(undefined8 param_1,undefined8 param_2)

{
  FUN_10255276c();
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 102552274; end: 1025522b7; -[_TtC33MapWidgetOnboardingImplementation24WidgetOnboardingWorkflow pages] */

void FUN_102552274(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_10255236c();
  uVar1 = 0;
  func_0x000102552574(0);
  uVar2 = param_1;
  func_0x000107c5fc48(param_1,uVar1);
  func_0x000107c6142c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1025522b8; end: 10255233f; -[_TtC33MapWidgetOnboardingImplementation24WidgetOnboardingWorkflow buttonConfiguration] */

void FUN_1025522b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000102552c58();
  puVar2 = PTR_PTR_1126ae5a0;
  func_0x000107c610f8(PTR_PTR_1126ae5a0);
  func_0x000107c5fadc(uVar1,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c48c90(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 102552340; end: 10255236b; -[_TtC33MapWidgetOnboardingImplementation24WidgetOnboardingWorkflow userEducationTrayDidComplete:] */

void FUN_102552340(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102551eac(1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10255236c; end: 102552533;  */

long FUN_10255236c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  FUN_10254fd94();
  lVar4 = ((ulong)*(uint *)(param_1 + 0x30) + 7 & 0x1fffffff8) + 0x18;
  func_0x000107c613fc();
  *(undefined8 *)(param_1 + 0x18) = 7;
  *(undefined8 *)(param_1 + 0x10) = 3;
  lVar1 = param_1;
  func_0x0001025529f4();
  puVar2 = PTR_PTR_1126ae588;
  func_0x000107c610f8();
  uVar3 = 0xd00000000000005d;
  func_0x000107c5fadc(0xd00000000000005d,0x800000010f0a9000);
  lVar5 = lVar4;
  func_0x000107c5fadc(lVar1,lVar4);
  func_0x000107c6142c(lVar4);
  func_0x000107c46e1c();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar1);
  *(undefined **)(param_1 + 0x20) = puVar2;
  func_0x000102552ac0();
  puVar2 = PTR_PTR_1126ae588;
  func_0x000107c610f8();
  uVar3 = 0xd00000000000005d;
  func_0x000107c5fadc(0xd00000000000005d,0x800000010f0a9060);
  lVar4 = lVar5;
  func_0x000107c5fadc(lVar1,lVar5);
  func_0x000107c6142c(lVar5);
  func_0x000107c46e1c();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar1);
  *(undefined **)(param_1 + 0x28) = puVar2;
  func_0x000102552b8c();
  puVar2 = PTR_PTR_1126ae588;
  func_0x000107c610f8();
  uVar3 = 0xd00000000000005d;
  func_0x000107c5fadc(0xd00000000000005d,0x800000010f0a90c0);
  func_0x000107c5fadc(lVar1,lVar4);
  func_0x000107c6142c(lVar4);
  func_0x000107c46e1c();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar1);
  *(undefined **)(param_1 + 0x30) = puVar2;
  return param_1;
}



/* Entry: 102552534; end: 102552553;  */

undefined1  [16] FUN_102552534(void)

{
  return ZEXT816(0x11051f738);
}



/* Entry: 102552554; end: 1025525b7;  */

void FUN_102552554(void)

{
  func_0x000107c61168(&PTR_PTR_11284d5e8);
  return;
}



/* Entry: 1025525b8; end: 102552603;  */

void FUN_1025525b8(undefined8 param_1)

{
  func_0x0001000285a8(0x112e412f8,&UNK_10da2fc60);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102552658,param_1);
  return;
}



/* Entry: 102552604; end: 102552657;  */

void FUN_102552604(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_2;
  FUN_10255274c();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(long *)(lVar2 + 0x10) = param_2;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11051f770;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 102552658; end: 10255265f;  */

void FUN_102552658(long *param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  FUN_10255274c();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(long *)(lVar2 + 0x10) = unaff_x20;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11051f770;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 102552660; end: 10255268f;  */

void FUN_102552660(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 102552690; end: 1025526b3;  */

void FUN_102552690(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1025526b4; end: 10255273b;  */

void FUN_1025526b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_40;
  undefined **ppuStack_38;
  
  func_0x000100083b20(&uStack_58);
  uVar1 = uStack_58;
  func_0x000107c614f0(uStack_58);
  puStack_40 = &UNK_11051f658;
  ppuStack_38 = &PTR_DAT_11051f640;
  func_0x000104471544(&uStack_58,param_1,param_2,uVar1,uStack_50);
  func_0x000107c615e8(uStack_58);
  func_0x0001000834e4(&uStack_58);
  return;
}



/* Entry: 10255273c; end: 10255274b;  */

undefined1  [16] FUN_10255273c(void)

{
  return ZEXT816(0x11051f790);
}



/* Entry: 10255274c; end: 10255276b;  */

void FUN_10255274c(void)

{
  func_0x000107c61168(&PTR_PTR_112ea5018);
  return;
}



/* Entry: 10255276c; end: 102552903;  */

undefined1  [16] FUN_10255276c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe9;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f0a9210);
  uVar3 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f0a9140);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102552838);
  (*pcVar1)();
}



/* Entry: 102552904; end: 102552943;  */

undefined1  [16] FUN_102552904(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x726174735f746567;
  func_0x000107c5fadc(0x726174735f746567,0xeb00000000646574);
  uVar3 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f0a9140);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025529f4);
  (*pcVar1)();
}



/* Entry: 102552944; end: 102552d23;  */

undefined1  [16] FUN_102552944(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  func_0x000107c5fadc();
  uVar2 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f0a9140);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025529f4);
  (*pcVar1)();
}



/* Entry: 102552d24; end: 102552eaf;  */

/* WARNING: Possible PIC construction at 0x000102552e18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102552e28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102552e38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102552e48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102552e58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102552e68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102552e78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102552e88: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102552e7c) */
/* WARNING: Removing unreachable block (ram,0x000102552e6c) */
/* WARNING: Removing unreachable block (ram,0x000102552e5c) */
/* WARNING: Removing unreachable block (ram,0x000102552e4c) */
/* WARNING: Removing unreachable block (ram,0x000102552e3c) */
/* WARNING: Removing unreachable block (ram,0x000102552e2c) */
/* WARNING: Removing unreachable block (ram,0x000102552e1c) */
/* WARNING: Removing unreachable block (ram,0x000102552e8c) */

void FUN_102552d24(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  code *pcVar18;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x88);
  puVar16 = &UNK_11051f888;
  func_0x000107c613fc(&UNK_11051f888,0x90,7);
  *(undefined8 *)(puVar16 + 0x10) = uVar1;
  *(undefined8 *)(puVar16 + 0x18) = uVar8;
  *(undefined8 *)(puVar16 + 0x20) = uVar17;
  *(undefined8 *)(puVar16 + 0x28) = uVar9;
  *(undefined8 *)(puVar16 + 0x30) = uVar2;
  *(undefined8 *)(puVar16 + 0x38) = uVar10;
  *(undefined8 *)(puVar16 + 0x40) = uVar3;
  *(undefined8 *)(puVar16 + 0x48) = uVar11;
  *(undefined8 *)(puVar16 + 0x50) = uVar4;
  *(undefined8 *)(puVar16 + 0x58) = uVar12;
  *(undefined8 *)(puVar16 + 0x60) = uVar5;
  *(undefined8 *)(puVar16 + 0x68) = uVar13;
  *(undefined8 *)(puVar16 + 0x70) = uVar6;
  *(undefined8 *)(puVar16 + 0x78) = uVar14;
  *(undefined8 *)(puVar16 + 0x80) = uVar7;
  *(undefined8 *)(puVar16 + 0x88) = uVar15;
  uVar17 = 0x112ea5080;
  func_0x0001000285a8(0x112ea5080,&UNK_10dab8348);
  func_0x000107c613fc();
  pcVar18 = FUN_102552f5c;
  func_0x0001000841fc(FUN_102552f5c,puVar16,uVar17);
  func_0x000100084214(&UNK_10dab8320,0x27,2);
  *param_1 = pcVar18;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 102552eb0; end: 102552ebf;  */

undefined1  [16] FUN_102552eb0(void)

{
  return ZEXT816(0x11051f868);
}



/* Entry: 102552ec0; end: 102552f5b;  */

void FUN_102552ec0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102552f5c; end: 10255307b;  */

void FUN_102552f5c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x88);
  func_0x0001000285a8(0x112ea5088,&UNK_10dab8350);
  func_0x0001000838ec(param_2);
  FUN_1025538e0();
  func_0x000100082720("ShakeToReportScopeExposerServiceProvider",0x28,2);
  FUN_1025539c0(uVar12,param_2,uVar1,uVar6,uVar2,uVar7,uVar3,uVar8,uVar15,uVar16,uVar4,uVar9,uVar11,
                uVar13,uVar14,uVar5,uVar10);
  func_0x000107c61574(uVar11);
  func_0x000107c61574(param_2);
  func_0x000100082720("PlaceAlertsViewControllerEntryPointProvider",0x2b,2);
  *param_1 = uVar12;
  return;
}



/* Entry: 10255307c; end: 1025530db; -[_TtC25PlaceAlertsImplementation23PlaceAlertsPageLauncher init] */

void FUN_10255307c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlaceAlertsImplementation.PlaceAlertsPageLauncher",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1025530a8);
  (*pcVar1)();
}



/* Entry: 1025530dc; end: 102553113; -[_TtC25PlaceAlertsImplementation23PlaceAlertsPageLauncher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025530dc(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ea50a0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ea5098));
  return;
}



/* Entry: 102553114; end: 102553157;  */

void FUN_102553114(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ea5090 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126ce4e0;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ea5090 = puVar1;
  return;
}



/* Entry: 102553158; end: 10255315b; -[_TtC25PlaceAlertsImplementation23PlaceAlertsPageLauncher setComposerPayloadClass:] */

void FUN_102553158(void)

{
  return;
}



/* Entry: 10255315c; end: 10255315f; -[_TtC25PlaceAlertsImplementation23PlaceAlertsPageLauncher setPayloadClass:] */

void FUN_10255315c(void)

{
  return;
}



/* Entry: 102553160; end: 102553167; -[_TtC25PlaceAlertsImplementation23PlaceAlertsPageLauncher payloadType] */

undefined8 FUN_102553160(void)

{
  return 6;
}



/* Entry: 102553168; end: 10255322f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102553168(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined **ppuStack_48;
  
  ppuStack_48 = (undefined **)0x0;
  func_0x000107c61614(auStack_50,0);
  ppuStack_48 = &PTR_DAT_11051f928;
  auStack_68[0] = param_1;
  uStack_60 = param_2;
  uStack_58 = param_3;
  func_0x000107c61604(auStack_50);
  func_0x000107c61434(param_3);
  func_0x00010008a7c8(&uStack_70,auStack_68);
  func_0x000100083b20(&uStack_78);
  func_0x000107c61574(uStack_70);
  FUN_1025533f0(auStack_68);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ea5098);
  *(undefined8 *)(unaff_x20 + _DAT_112ea5098) = uStack_78;
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 102553230; end: 1025532e7; -[_TtC25PlaceAlertsImplementation23PlaceAlertsPageLauncher launchWithPayload:completion:] */

void FUN_102553230(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined1 auStack_50 [32];
  
  func_0x000107c60bc4();
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  if (param_4 == 0) {
    puVar2 = (undefined *)0x0;
    pcVar1 = (code *)0x0;
  }
  else {
    puVar2 = &UNK_11051f948;
    func_0x000107c613fc(&UNK_11051f948,0x18,7);
    *(long *)(puVar2 + 0x10) = param_4;
    pcVar1 = FUN_1025533e8;
  }
  FUN_1025532fc(auStack_50);
  func_0x000100f1d208(pcVar1,puVar2);
  func_0x000107c61170(param_1);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1025532e8; end: 1025532fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025532e8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ea5098);
  *(undefined8 *)(unaff_x20 + _DAT_112ea5098) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1025532fc; end: 1025533c7;  */

void FUN_1025532fc(undefined8 param_1)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long lStack_68;
  undefined1 auStack_60 [32];
  
  func_0x0001000bb420(param_1,auStack_60);
  uVar1 = 0;
  FUN_102553114(0);
  plVar2 = &lStack_68;
  puVar5 = auStack_60;
  func_0x000107c6147c(plVar2,puVar5,PTR___sypN_11034f1a8 + 8,uVar1,6);
  if ((int)plVar2 != 0) {
    lVar3 = lStack_68;
    func_0x000107c4a168(lStack_68);
    lVar4 = lStack_68;
    func_0x000107c43600();
    func_0x000107c61180();
    if (lVar4 == 0) {
      lVar6 = 0;
      puVar5 = (undefined1 *)0x0;
    }
    else {
      lVar6 = lVar4;
      func_0x000107c5faec();
      func_0x000107c61170(lVar4);
    }
    FUN_102553168(lVar3,lVar6,puVar5);
    func_0x000107c61170(lStack_68);
    func_0x000107c6142c(puVar5);
  }
  return;
}



/* Entry: 1025533c8; end: 1025533e7;  */

void FUN_1025533c8(void)

{
  func_0x000107c61168(&PTR_PTR_11284d6d8);
  return;
}



/* Entry: 1025533e8; end: 1025533ef;  */

void FUN_1025533e8(long param_1,undefined8 param_2)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  func_0x000100f1d1c0(param_2,auStack_70,0x112d387f8,&UNK_10d902650);
  if (lStack_58 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_70,lStack_58);
    lVar4 = *(long *)(lStack_58 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
    puVar3 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar4 + 0x10))(puVar3);
    puVar2 = puVar3;
    func_0x000107c605b0(puVar3,lStack_58);
    (**(code **)(lVar4 + 8))(puVar3,lStack_58);
    func_0x000100183ab8(auStack_70);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(puVar2);
  return;
}



/* Entry: 1025533f0; end: 102553423;  */

undefined8 FUN_1025533f0(undefined8 param_1)

{
  (*(code *)&DAT_1038b47c8)();
  return param_1;
}



/* Entry: 102553424; end: 102553427; -[_TtC25PlaceAlertsImplementation23PlaceAlertsPageLauncher composerPayloadClass] */

void FUN_102553424(void)

{
  FUN_102553114(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 102553428; end: 10255342b; -[_TtC25PlaceAlertsImplementation23PlaceAlertsPageLauncher payloadClass] */

void FUN_102553428(void)

{
  FUN_102553114(0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_getObjCClassFromMetadata_11034f3a0)();
  return;
}



/* Entry: 10255342c; end: 102553477;  */

void FUN_10255342c(undefined8 param_1)

{
  func_0x0001000285a8(0x112e4c7e0,&UNK_10da460f0);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102553598,param_1);
  return;
}



/* Entry: 102553478; end: 102553597;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102553478(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  FUN_102553854();
  lVar2 = param_2;
  func_0x000107c610f8();
  lVar3 = 0;
  FUN_1025533c8();
  pcVar6 = FUN_1025533c8;
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(undefined8 *)(lVar4 + _DAT_112ea5098) = 0;
  *(undefined8 *)(lVar4 + _DAT_112ea50a0) = uStack_58;
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = lVar4;
  lStack_60 = lVar3;
  func_0x000107c6157c(uStack_58);
  plVar5 = &lStack_68;
  func_0x000107c61154(plVar5,puVar1);
  FUN_102553874(FUN_1025533c8,0x112ea5100,&UNK_10dab8400);
  func_0x000107c613fc();
  *(undefined8 *)(pcVar6 + 0x18) = 3;
  *(undefined8 *)(pcVar6 + 0x10) = 1;
  *(long **)(pcVar6 + 0x20) = plVar5;
  *(code **)(lVar2 + _DAT_112ea50d0) = pcVar6;
  plVar5 = &lStack_78;
  lStack_78 = lVar2;
  lStack_70 = param_2;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  func_0x000107c61574(uStack_58);
  *param_1 = (long)plVar5;
  return;
}



/* Entry: 102553598; end: 10255359f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102553598(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined1 auStack_78 [16];
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  func_0x000100083b20(&uStack_58);
  FUN_102553854();
  func_0x000107c610f8();
  lVar2 = 0;
  FUN_1025533c8();
  pcVar5 = FUN_1025533c8;
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112ea5098) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ea50a0) = uStack_58;
  puVar1 = PTR_s_init_1125d9248;
  lStack_68 = lVar3;
  lStack_60 = lVar2;
  func_0x000107c6157c(uStack_58);
  plVar4 = &lStack_68;
  func_0x000107c61154(plVar4,puVar1);
  FUN_102553874(FUN_1025533c8,0x112ea5100,&UNK_10dab8400);
  func_0x000107c613fc();
  *(undefined8 *)(pcVar5 + 0x18) = 3;
  *(undefined8 *)(pcVar5 + 0x10) = 1;
  *(long **)(pcVar5 + 0x20) = plVar4;
  *(code **)(unaff_x20 + _DAT_112ea50d0) = pcVar5;
  puVar6 = auStack_78;
  func_0x000107c61154(puVar6,PTR_s_init_1125d9248);
  func_0x000107c61574(uStack_58);
  *param_1 = (long)puVar6;
  return;
}



/* Entry: 1025535a0; end: 1025536a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1025535a0(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined1 auStack_60 [8];
  long lStack_50;
  long lStack_48;
  
  puVar6 = auStack_60;
  func_0x000107c610f8();
  lVar2 = 0;
  FUN_1025533c8();
  pcVar5 = FUN_1025533c8;
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112ea5098) = 0;
  *(undefined8 *)(lVar3 + _DAT_112ea50a0) = param_1;
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c6157c(param_1);
  plVar4 = &lStack_50;
  func_0x000107c61154(plVar4,puVar1);
  FUN_102553874(FUN_1025533c8,0x112ea5100,&UNK_10dab8400);
  func_0x000107c613fc();
  *(undefined8 *)(pcVar5 + 0x18) = 3;
  *(undefined8 *)(pcVar5 + 0x10) = 1;
  *(long **)(pcVar5 + 0x20) = plVar4;
  *(code **)(unaff_x20 + _DAT_112ea50d0) = pcVar5;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar6;
}



/* Entry: 1025536a4; end: 1025536b7; -[_TtC25PlaceAlertsImplementation29PlaceAlertsPageLauncherPlugin composerNativePayloadHandlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1025536a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 0x112d4bc30;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112ea50d0);
  func_0x000107c61174();
  FUN_1025536bc(uVar3,0x112d4bc30,&DAT_10d912660);
  func_0x000107c61170(param_1);
  func_0x0001000285a8(0x112d4bc30,&DAT_10d912660);
  uVar2 = uVar3;
  func_0x000107c5fc48(uVar3,uVar1);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1025536b8; end: 1025536bb; -[_TtC25PlaceAlertsImplementation29PlaceAlertsPageLauncherPlugin setComposerNativePayloadHandlers:] */

void FUN_1025536b8(void)

{
  return;
}



/* Entry: 1025536bc; end: 10255373b;  */

ulong FUN_1025536bc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  if (param_1 >> 0x3e == 0) {
    func_0x000107c61434();
    func_0x000107c605f8();
    uVar1 = param_1;
  }
  else {
    uVar1 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar1 = param_1;
    }
    func_0x000107c61434();
    func_0x0001000285a8(param_2,param_3);
    func_0x000107c60458(uVar1,param_2);
    func_0x000107c6142c(param_1);
  }
  return uVar1;
}



/* Entry: 10255373c; end: 10255374f; -[_TtC25PlaceAlertsImplementation29PlaceAlertsPageLauncherPlugin nativePayloadHandlers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10255373c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 0x112d4bc28;
  uVar3 = *(undefined8 *)(param_1 + _DAT_112ea50d0);
  func_0x000107c61174();
  FUN_1025536bc(uVar3,0x112d4bc28,&DAT_10d9133e0);
  func_0x000107c61170(param_1);
  func_0x0001000285a8(0x112d4bc28,&DAT_10d9133e0);
  uVar2 = uVar3;
  func_0x000107c5fc48(uVar3,uVar1);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 102553750; end: 1025537cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102553750(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ea50d0);
  func_0x000107c61174();
  FUN_1025536bc(uVar2,param_3,param_4);
  func_0x000107c61170(param_1);
  func_0x0001000285a8(param_3,param_4);
  uVar1 = uVar2;
  func_0x000107c5fc48(uVar2,param_3);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1025537d0; end: 1025537d3; -[_TtC25PlaceAlertsImplementation29PlaceAlertsPageLauncherPlugin setNativePayloadHandlers:] */

void FUN_1025537d0(void)

{
  return;
}



/* Entry: 1025537d4; end: 102553833; -[_TtC25PlaceAlertsImplementation29PlaceAlertsPageLauncherPlugin init] */

void FUN_1025537d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlaceAlertsImplementation.PlaceAlertsPageLauncherPlugin",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102553800);
  (*pcVar1)();
}



/* Entry: 102553834; end: 102553853; -[_TtC25PlaceAlertsImplementation29PlaceAlertsPageLauncherPlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102553834(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ea50d0));
  return;
}



/* Entry: 102553854; end: 102553873;  */

void FUN_102553854(void)

{
  func_0x000107c61168(&PTR_PTR_11284d7a0);
  return;
}



/* Entry: 102553874; end: 1025538df;  */

void FUN_102553874(code *param_1,ulong *param_2,long *param_3)

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



/* Entry: 1025538e0; end: 10255392b;  */

void FUN_1025538e0(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_1025539b8,param_1);
  return;
}



/* Entry: 10255392c; end: 1025539b7;  */

void FUN_10255392c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112dd2e10;
  func_0x0001000285a8(0x112dd2e10,&UNK_10dab8500);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 1025539b8; end: 1025539bf;  */

void FUN_1025539b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112dd2e10;
  func_0x0001000285a8(0x112dd2e10,&UNK_10dab8500);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}


