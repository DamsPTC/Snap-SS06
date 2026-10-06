/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b7b3d74; end: 10b7b3ebb; +[SCAlertErrorView errorWithTitle:message:] */

void FUN_10b7b3d74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126af178;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c22b900();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126af180;
  ppuVar2 = &PTR____CFConstantStringClassReference_110dad758;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dad758,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef320();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010c235c40(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar5);
  func_0x00010c18f620(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10b7b3ebc; end: 10b7b3eef;  */

void FUN_10b7b3ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c18f620(param_3,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b7b3ef0; end: 10b7b404f; -[SCAlertTitleView initWithFrame:hasSeparator:isPromptView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10b7b3ef0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  puStack_68 = PTR_PTR_11270ae70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    lVar5 = (long)_DAT_11279368c;
    *(undefined1 *)((long)puVar1 + lVar5) = param_3;
    *(undefined1 *)((long)puVar1 + (long)_DAT_112793690) = param_4;
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    uVar6 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112793694);
    *(undefined **)((long)puVar1 + (long)_DAT_112793694) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
    lVar4 = (long)_DAT_112793698;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    if ((*(byte *)((long)puVar1 + lVar5) & 1) == 0) {
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c23ba80();
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar4));
    _objc_release(puVar2);
    func_0x00010befbb60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b7b4050; end: 10b7b4193; -[SCAlertTitleView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7b4050(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_11270ae70;
  lStack_60 = param_5;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  lVar2 = (long)_DAT_112793694;
  uVar1 = *(undefined8 *)(param_5 + lVar2);
  func_0x00010bf20c00(param_5);
  func_0x00010c23d5a0(param_3,param_4,uVar1);
  dVar6 = 0.0;
  dVar3 = 0.0;
  if ((*(byte *)(param_5 + _DAT_112793690) & 1) == 0) {
    func_0x00010bf20c00(0,0,param_5);
    _CGRectGetMidX();
    dVar3 = dVar3 + param_3 * -0.5;
  }
  func_0x00010c19f0e0(dVar3,0,param_3,param_4,*(undefined8 *)(param_5 + lVar2));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar2));
  _CGRectGetMinX();
  dVar4 = dVar3;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar2));
  _CGRectGetMaxY();
  dVar5 = dVar4;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar2));
  _CGRectGetWidth();
  if (*(char *)(param_5 + _DAT_11279368c) == '\x01') {
    dVar6 = dVar5;
    _objc_opt_class(param_5);
    func_0x00010c15e4a0();
  }
  func_0x00010c19f0e0(dVar3,dVar4 + 8.0,dVar5,dVar6,*(undefined8 *)(param_5 + _DAT_112793698));
  return;
}



/* Entry: 10b7b4194; end: 10b7b4237; -[SCAlertTitleView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10b7b4194(double param_1,double param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  dVar4 = param_1;
  func_0x00010c23d5a0(*(undefined8 *)(param_3 + _DAT_112793694));
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  dVar4 = 1.0 / dVar4;
  _objc_release(puVar2);
  bVar1 = *(char *)(param_3 + _DAT_11279368c) == '\0';
  if (bVar1) {
    dVar4 = 0.0;
  }
  dVar3 = 8.0;
  if (bVar1) {
    dVar3 = 0.0;
  }
  auVar5._8_8_ = dVar3 + param_2 + 0.0 + dVar4;
  auVar5._0_8_ = param_1;
  return auVar5;
}



/* Entry: 10b7b4238; end: 10b7b4287; +[SCAlertTitleView separatorHeight] */

double FUN_10b7b4238(double param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar1);
  return 1.0 / param_1;
}



/* Entry: 10b7b4288; end: 10b7b4297; -[SCAlertTitleView textLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b7b4288(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112793694);
}



/* Entry: 10b7b4298; end: 10b7b42a7; -[SCAlertTitleView separatorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b7b4298(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112793698);
}



/* Entry: 10b7b42a8; end: 10b7b42e7; -[SCAlertTitleView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7b42a8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112793698,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112793694,0);
  return;
}



/* Entry: 10b7b42e8; end: 10b7b45a7; -[SCAlertView initWithTopView:title:description:hasSeparator:extraContentItems:actions:configuration:dismissHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10b7b42e8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                    undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9,
                    undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_4);
  func_0x00010bf09f00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__UIEdgeInsetsZero_110345bb0;
  uVar8 = 0;
  uVar9 = 0;
  if (param_3 != 0) {
    puVar3 = PTR_PTR_1126af4e0;
    func_0x00010bf4c880(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),PTR_PTR_1126af4e0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar2);
    _objc_release(puVar3);
    uVar9 = 0x4032000000000000;
  }
  lVar4 = param_4;
  func_0x00010c08fa60();
  puVar3 = PTR_PTR_1126af4d8;
  func_0x00010bf547e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar5 = *(undefined8 *)(param_1 + _DAT_11279369c);
  *(undefined **)(param_1 + _DAT_11279369c) = puVar3;
  _objc_release(uVar5);
  puVar3 = PTR_PTR_1126af4e0;
  if (lVar4 != 0) {
    lVar4 = param_5;
    func_0x00010c08fa60();
    uVar8 = 0;
    if (lVar4 != 0) {
      uVar8 = 0x4022000000000000;
    }
  }
  func_0x00010bf4c880(uVar9,0,uVar8,0,puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2);
  puVar6 = PTR_PTR_1126af4d8;
  func_0x00010bf547c0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + _DAT_1127936a0);
  *(undefined **)(param_1 + _DAT_1127936a0) = puVar6;
  _objc_release(uVar8);
  puVar6 = PTR_PTR_1126af4e0;
  func_0x00010bf4c880(*(undefined8 *)puVar1,*(undefined8 *)(puVar1 + 8),
                      *(undefined8 *)(puVar1 + 0x10),*(undefined8 *)(puVar1 + 0x18),
                      PTR_PTR_1126af4e0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar2);
  if (param_7 != 0) {
    func_0x00010befa160(puVar2);
  }
  puStack_78 = PTR_PTR_11270ae78;
  plVar7 = &lStack_80;
  lStack_80 = param_1;
  _objc_msgSendSuper2(plVar7,PTR_s_initWithContentItems_actions_con_1125de760,puVar2,param_8,param_9
                      ,param_10);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  return plVar7;
}



/* Entry: 10b7b45a8; end: 10b7b46f3; -[SCAlertView initWithIcon:title:description:hasSeparator:extraContentItems:actions:configuration:dismissHandler:] */

undefined8
FUN_10b7b45a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_retain(param_10);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c01bf60(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c0542e0(param_1,param_2,puVar1,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 10b7b46f4; end: 10b7b4733; -[SCAlertView initWithTitle:description:hasSeparator:extraContentItems:actions:configuration:dismissHandler:] */

void FUN_10b7b46f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  func_0x00010c0542e0(param_1,param_2,0,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  return;
}



/* Entry: 10b7b4734; end: 10b7b4763; -[SCAlertView initWithTitle:description:hasSeparator:actions:configuration:dismissHandler:] */

void FUN_10b7b4734(void)

{
  func_0x00010c052e40();
  return;
}



/* Entry: 10b7b4764; end: 10b7b483b; -[SCAlertView initWithTitle:description:actions:configuration:dismissHandler:] */

undefined8
FUN_10b7b4764(undefined8 param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_4;
    func_0x00010c08fa60(param_4);
    bVar1 = lVar2 != 0;
  }
  func_0x00010c052e20(param_1,param_2,param_3,param_4,bVar1,param_5,param_6,param_7);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10b7b483c; end: 10b7b49b7; +[SCAlertView createAlertTitleView:hasSeparator:] */

void FUN_10b7b483c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126e1390;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c0145a0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar2 = param_3;
  func_0x00010bf51e00(param_3);
  _objc_release(param_3);
  puVar3 = puVar1;
  func_0x00010c26c280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20();
  _objc_release(puVar3);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4032000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c26c280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010c26c280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c26c280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213040();
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c26c280(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cfce0();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b7b49b8; end: 10b7b4acb; +[SCAlertView createAlertDescriptionView:hasTitle:textAlignment:] */

void FUN_10b7b49b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c1bdb00();
  uVar3 = 0x402c000000000000;
  if (param_4 == 0) {
    uVar3 = 0x4032000000000000;
  }
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(uVar3,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c213040(puVar1,param_2,param_5);
  func_0x00010c1cfce0(puVar1,param_2,0);
  uVar3 = param_3;
  func_0x00010bf51e00(param_3);
  _objc_release(param_3);
  func_0x00010c212f20(puVar1,param_2,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b7b4acc; end: 10b7b4bb7; +[SCAlertView alertViewWithTitle:description:hasSeparator:extraContentItems:actions:configuration:dismissHandler:] */

void FUN_10b7b4acc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  _objc_alloc();
  func_0x00010c052e40();
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b7b4bb8; end: 10b7b4c73; +[SCAlertView alertViewWithTitle:description:actions:configuration:dismissHandler:] */

void FUN_10b7b4bb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  _objc_alloc();
  func_0x00010c052e00();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b7b4c74; end: 10b7b4d3f; +[SCAlertView alertViewWithTitle:description:hasSeparator:actions:configuration:dismissHandler:] */

void FUN_10b7b4c74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  _objc_alloc();
  func_0x00010c052e20();
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b7b4d40; end: 10b7b4e2b; +[SCAlertView alertViewWithIcon:title:description:hasSeparator:actions:configuration:dismissHandler:] */

void FUN_10b7b4d40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  _objc_alloc();
  func_0x00010c01aee0();
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b7b4e2c; end: 10b7b4f17; +[SCAlertView alertViewWithTopView:title:description:hasSeparator:actions:configuration:dismissHandler:] */

void FUN_10b7b4e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  _objc_alloc();
  func_0x00010c0542e0();
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b7b4f18; end: 10b7b4f27; -[SCAlertView topIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b7b4f18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127936a4);
}



/* Entry: 10b7b4f28; end: 10b7b4f37; -[SCAlertView titleView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b7b4f28(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11279369c);
}



/* Entry: 10b7b4f38; end: 10b7b4f47; -[SCAlertView descriptionLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b7b4f38(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127936a0);
}



/* Entry: 10b7b4f48; end: 10b7b4f97; -[SCAlertView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7b4f48(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127936a0,0);
  _objc_storeStrong(param_1 + _DAT_11279369c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127936a4,0);
  return;
}



/* Entry: 10b7b4f98; end: 10b7b501f; +[SCAlertViewCoordinator sharedCoordinator] */

void FUN_10b7b4f98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_10b7b5020;
  puStack_30 = &UNK_110848088;
  uStack_28 = param_1;
  if (lRam00000001137f9bd0 != -1) {
    func_0x000107c27d9c(0x1137f9bd0,&puStack_48);
  }
  uVar1 = uRam00000001137f9bc8;
  _objc_retain(uRam00000001137f9bc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b7b5020; end: 10b7b504b;  */

void FUN_10b7b5020(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_opt_class();
  _objc_alloc_init();
  uVar1 = uRam00000001137f9bc8;
  uRam00000001137f9bc8 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7b504c; end: 10b7b519b; -[SCAlertViewCoordinator init] */

undefined1 * FUN_10b7b504c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270ae80;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar5 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    uVar4 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x30) = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar3;
    *(undefined8 *)((long)puVar1 + 0x40) = uVar5;
    *(undefined8 *)((long)puVar1 + 0x38) = uVar4;
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b7b519c; end: 10b7b51eb; -[SCAlertViewCoordinator initWithWindow:] */

long FUN_10b7b519c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bfee200();
  if (param_1 != 0) {
    _objc_storeWeak(param_1 + 0x48,param_3);
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10b7b51ec; end: 10b7b54b7; -[SCAlertViewCoordinator applicationDidEnterBackground:] */

void FUN_10b7b51ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puStack_270;
  undefined8 uStack_268;
  code *pcStack_260;
  undefined *puStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bf51e00();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain();
  lVar3 = lVar2;
  lStack_208 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_1b0,auStack_f0,0x10);
  lStack_1f8 = lVar3;
  if (lVar3 != 0) {
    lStack_200 = *plStack_1a0;
    do {
      lVar2 = 0;
      do {
        if (*plStack_1a0 != lStack_200) {
          _objc_enumerationMutation(lStack_208);
        }
        lVar10 = *(long *)(lStack_1a8 + lVar2 * 8);
        lVar3 = param_1;
        func_0x00010becd400();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar10 == lVar3) goto LAB_10b7b53fc;
        lVar3 = lVar10;
        func_0x00010beff820();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf51e00();
        _objc_release(lVar3);
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        _objc_retain(lVar4);
        lVar3 = lVar4;
        func_0x00010bf52a60(lVar4,param_2,&uStack_1f0,auStack_170,0x10);
        if (lVar3 != 0) {
          lVar12 = *plStack_1e0;
          do {
            lVar9 = 0;
            do {
              if (*plStack_1e0 != lVar12) {
                _objc_enumerationMutation(lVar4);
              }
              uVar11 = *(undefined8 *)(lStack_1e8 + lVar9 * 8);
              uVar8 = uVar11;
              func_0x00010bf46560();
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar8;
              func_0x00010bf83ec0();
              _objc_release(uVar8);
              if ((int)uVar5 != 0) {
                func_0x00010c12aa20(lVar10,param_2,uVar11);
                lVar6 = lVar10;
                func_0x00010beff820();
                _objc_retainAutoreleasedReturnValue();
                lVar7 = lVar6;
                func_0x00010bf529e0();
                _objc_release(lVar6);
                if (lVar7 == 0) {
                  func_0x00010c12d360(*(undefined8 *)(param_1 + 0x18),param_2,lVar10);
                }
              }
              lVar9 = lVar9 + 1;
            } while (lVar3 != lVar9);
            lVar3 = lVar4;
            func_0x00010bf52a60(lVar4,param_2,&uStack_1f0,auStack_170,0x10);
          } while (lVar3 != 0);
        }
        _objc_release(lVar4);
        _objc_release(lVar4);
        lVar2 = lVar2 + 1;
      } while (lVar2 != lStack_1f8);
      lVar3 = lStack_208;
      func_0x00010bf52a60(lStack_208,param_2,&uStack_1b0,auStack_f0,0x10);
      lStack_1f8 = lVar3;
    } while (lVar3 != 0);
  }
LAB_10b7b53fc:
  _objc_release(lStack_208);
  lVar3 = param_1;
  func_0x00010becd3e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar4 = lVar10;
  func_0x00010bf83ec0();
  if ((int)lVar4 != 0) {
    lVar3 = param_1;
    func_0x00010becd400();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7cc40(param_1,param_2,lVar3,0,0);
    _objc_release(lVar3);
  }
  _objc_release(lVar10);
  lVar4 = lStack_208;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_218 = FUN_10b7b54b8;
  uVar8 = *(undefined8 *)(lVar4 + 0x50);
  lStack_240 = lVar3;
  lStack_238 = lVar10;
  lStack_230 = param_1;
  lStack_228 = lVar2;
  puStack_220 = &stack0xfffffffffffffff0;
  func_0x000107c30a2c(uVar8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010becd3e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(uVar8);
  func_0x00010c19f0e0(*(undefined8 *)(lVar4 + 0x50));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_270 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_268 = 0xc2000000;
  pcStack_260 = FUN_10b7b5588;
  puStack_258 = &UNK_110841f80;
  lStack_250 = lVar4;
  lStack_248 = lVar2;
  _objc_retain(lVar2);
  func_0x00010bf03400(0x3fd3333333333333,puVar1,param_2,&puStack_270);
  _objc_release(lStack_248);
  _objc_release(lVar2);
  _objc_release(uVar8);
  return;
}



/* Entry: 10b7b54b8; end: 10b7b5587; -[SCAlertViewCoordinator applicationDidChangeOrientation:] */

void FUN_10b7b54b8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  func_0x000107c30a2c(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010becd3e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00(uVar2);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + 0x50));
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b7b5588;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  lStack_38 = lVar3;
  _objc_retain(lVar3);
  func_0x00010bf03400(0x3fd3333333333333,puVar1,param_2,&puStack_60);
  _objc_release(lStack_38);
  _objc_release(lVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 10b7b5588; end: 10b7b5627;  */

void FUN_10b7b5588(double param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  double dVar3;
  
  uVar1 = *(ulong *)(*(long *)(param_2 + 0x20) + 0x50);
  func_0x00010bf20c00();
  _CGRectGetHeight();
  lVar2 = *(long *)(param_2 + 0x20);
  dVar3 = *(double *)(lVar2 + 0x28);
  _CGRectIsEmpty(dVar3,*(undefined8 *)(lVar2 + 0x30),*(undefined8 *)(lVar2 + 0x38),
                 *(undefined8 *)(lVar2 + 0x40));
  if ((uVar1 & 1) == 0) {
    lVar2 = *(long *)(param_2 + 0x20);
    dVar3 = *(double *)(lVar2 + 0x28);
    _CGRectGetMinY(dVar3,*(undefined8 *)(lVar2 + 0x30),*(undefined8 *)(lVar2 + 0x38),
                   *(undefined8 *)(lVar2 + 0x40));
    if (dVar3 <= param_1) {
      param_1 = dVar3;
    }
  }
  func_0x00010bf20c00(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x50));
  _CGRectGetWidth();
  func_0x00010c19f0e0(0,0,dVar3,param_1,*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x20));
  func_0x00010bf345e0(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c17a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_2 + 0x28),PTR_s_setCenter__11263c3c8)
  ;
  return;
}



/* Entry: 10b7b5628; end: 10b7b571b; -[SCAlertViewCoordinator didPerformTapGestureOnOverlay:] */

void FUN_10b7b5628(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010becd3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c09ef00(param_3,param_2,*(undefined8 *)(param_1 + 0x50));
  _objc_release(param_3);
  uVar1 = param_1;
  func_0x00010becd3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfb68e0();
  _CGRectContainsPoint();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf83ee0();
  if (((uVar3 & 1) == 0) && ((int)uVar1 != 0)) {
    uVar1 = param_1;
    func_0x00010becd400(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be7cc40(param_1,param_2,uVar1,1,0);
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10b7b571c; end: 10b7b58df; -[SCAlertViewCoordinator willChangeKeyboardFrame:] */

void FUN_10b7b571c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_7;
  func_0x00010c0dff20();
  iVar2 = (int)uVar7;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1080();
  *(undefined8 *)(param_5 + 0x28) = param_1;
  *(undefined8 *)(param_5 + 0x30) = param_2;
  *(undefined8 *)(param_5 + 0x38) = param_3;
  *(undefined8 *)(param_5 + 0x40) = param_4;
  _objc_release();
  uVar7 = *(undefined8 *)(param_5 + 0x28);
  _CGRectGetMinY(uVar7,*(undefined8 *)(param_5 + 0x30),*(undefined8 *)(param_5 + 0x38),
                 *(undefined8 *)(param_5 + 0x40));
  uVar8 = *(undefined8 *)(param_5 + 0x28);
  _CGRectIsEmpty(uVar8,*(undefined8 *)(param_5 + 0x30),*(undefined8 *)(param_5 + 0x38),
                 *(undefined8 *)(param_5 + 0x40));
  if (iVar2 != 0) {
    func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x50));
    _CGRectGetHeight();
    uVar7 = uVar8;
  }
  func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x50));
  _CGRectGetWidth();
  uVar3 = param_7;
  uVar9 = uVar8;
  func_0x00010c0e00e0(param_7,param_6,
                      *(undefined8 *)PTR__UIKeyboardAnimationDurationUserInfoKey_110345ce0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  uVar4 = param_7;
  func_0x00010c0e00e0(param_7,param_6,
                      *(undefined8 *)PTR__UIKeyboardAnimationCurveUserInfoKey_110345cd8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c067ec0();
  lVar6 = param_5;
  func_0x00010becd3e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0xc2000000;
  pcStack_b0 = FUN_10b7b58e0;
  puStack_a8 = &UNK_110853530;
  uStack_90 = 0;
  uStack_88 = 0;
  lStack_a0 = param_5;
  lStack_98 = lVar6;
  uStack_80 = uVar8;
  uStack_78 = uVar7;
  _objc_retain();
  func_0x00010bf03440(uVar9,0,puVar1,param_6,(long)(int)uVar5 << 0x10 | 4,&puStack_c0,0);
  _objc_release(lStack_98);
  _objc_release(lVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_7);
  return;
}



/* Entry: 10b7b58e0; end: 10b7b594f;  */

void FUN_10b7b58e0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf20c00(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50));
  _CGRectIntersection();
  func_0x00010c19f0e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _CGRectGetMidX(uVar1,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                 *(undefined8 *)(param_1 + 0x48));
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _CGRectGetMidY(uVar2,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                 *(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010c17a6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar1,uVar2,*(undefined8 *)(param_1 + 0x28),PTR_s_setCenter__11263c3c8);
  return;
}



/* Entry: 10b7b5950; end: 10b7b5993; -[SCAlertViewCoordinator showAlertWithTitle:description:actions:configuration:dismissHandler:] */

void FUN_10b7b5950(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af4d8;
  func_0x00010beff880(PTR_PTR_1126af4d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c00(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b7b5994; end: 10b7b59d7; -[SCAlertViewCoordinator showAlertWithTitle:description:hasSeparator:actions:configuration:dismissHandler:] */

void FUN_10b7b5994(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126af4d8;
  func_0x00010beff8a0(PTR_PTR_1126af4d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c235c00(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b7b59d8; end: 10b7b5aa7; -[SCAlertViewCoordinator showAlertView:] */

void FUN_10b7b59d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  puVar2 = PTR_PTR_1126d4c40;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bff29c0();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c235c20(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_1126d4c40;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  _objc_alloc();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010bff29c0();
  _objc_release(puVar5);
  puVar3 = puVar4;
  func_0x00010c235c20(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  puVar5 = puVar3;
  func_0x00010beff820();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar5;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar2 != (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(puVar5);
      }
      func_0x00010be718c0(puVar4);
      puVar8 = puVar8 + 1;
    } while (puVar2 != puVar8);
    puVar2 = puVar5;
    func_0x00010bf52a60();
  }
  _objc_release(puVar5);
  puVar2 = PTR_PTR_1126b99e8;
  _objc_retain(puVar3);
  func_0x00010bf0c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa340();
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(puVar3 + 0x20);
  _objc_retain(param_2);
  func_0x00010be84b00(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 10b7b5aa8; end: 10b7b5b77; -[SCAlertViewCoordinator showBaseAlertView:] */

void FUN_10b7b5aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  puVar2 = PTR_PTR_1126d4c40;
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bff29c0();
  _objc_release(puVar3);
  puVar3 = puVar2;
  func_0x00010c235c20(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar3);
  puVar4 = puVar3;
  func_0x00010beff820();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(puVar4);
      }
      func_0x00010be718c0(puVar2);
      puVar8 = puVar8 + 1;
    } while (puVar5 != puVar8);
    puVar5 = puVar4;
    func_0x00010bf52a60();
  }
  _objc_release(puVar4);
  puVar2 = PTR_PTR_1126b99e8;
  _objc_retain(puVar3);
  func_0x00010bf0c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa340();
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(puVar3 + 0x20);
  _objc_retain(param_2);
  func_0x00010be84b00(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 10b7b5b78; end: 10b7b5d1f; -[SCAlertViewCoordinator showAlertViewFlow:] */

void FUN_10b7b5b78(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010beff820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar3);
      }
      func_0x00010be718c0(param_1);
      lVar8 = lVar8 + 1;
    } while (lVar4 != lVar8);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  puVar5 = PTR_PTR_1126b99e8;
  _objc_retain(param_3);
  func_0x00010bf0c0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x00010c0b6ba0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa340();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  _objc_retain(param_2);
  func_0x00010be84b00(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 10b7b5d20; end: 10b7b5db7;  */

void FUN_10b7b5d20(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010be84b00(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 10b7b5db8; end: 10b7b5dbf;  */

void FUN_10b7b5db8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 10b7b5dc0; end: 10b7b5e0f; -[SCAlertViewCoordinator enqueueAlertView:inAlertViewFlow:] */

void FUN_10b7b5dc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  func_0x00010bf96260(param_4,param_2,param_3);
  func_0x00010be718c0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7b5e10; end: 10b7b5e43; -[SCAlertViewCoordinator isVisible] */

bool FUN_10b7b5e10(long param_1)

{
  func_0x00010becd3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 10b7b5e44; end: 10b7b60a7; -[SCAlertViewCoordinator didPerformPanGesture:] */

void FUN_10b7b5e44(undefined8 param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined *puStack_130;
  undefined8 uStack_128;
  code *pcStack_120;
  undefined *puStack_118;
  long lStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_5);
  func_0x00010c27adc0(param_5,param_4,*(undefined8 *)(param_3 + 0x50));
  lVar3 = param_5;
  dVar8 = param_2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf83f00();
  _objc_release(lVar4);
  lVar4 = param_5;
  func_0x00010c252440();
  if (lVar4 == 2) {
    if ((int)lVar5 == 0) {
      param_2 = param_2 * 0.2;
    }
    _CGAffineTransformMakeTranslation(&uStack_80,0,param_2);
    uStack_a8 = uStack_78;
    uStack_b0 = uStack_80;
    uStack_98 = uStack_68;
    uStack_a0 = uStack_70;
    uStack_88 = uStack_58;
    uStack_90 = uStack_60;
    func_0x00010c219960(lVar3,param_4,&uStack_b0);
    goto LAB_10b7b607c;
  }
  lVar4 = param_5;
  func_0x00010c252440();
  if ((lVar4 != 3) && (lVar4 = param_5, func_0x00010c252440(), lVar4 != 4)) goto LAB_10b7b607c;
  func_0x00010c297a00(param_5,param_4,*(undefined8 *)(param_3 + 0x50));
  dVar6 = 1200.0;
  if (dVar8 <= 1200.0) {
LAB_10b7b600c:
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_130 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_128 = 0xc2000000;
    pcStack_120 = FUN_10b7b617c;
    puStack_118 = &UNK_110842e18;
    _objc_retain(lVar3);
    lStack_110 = lVar3;
    func_0x00010bf03460(0x3fd999999999999a,0,0x3fe0000000000000,0x4000000000000000,puVar1,param_4,6,
                        &puStack_130,0);
    lVar4 = lStack_110;
  }
  else {
    lVar4 = lVar3;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf83f00();
    _objc_release(lVar4);
    if ((int)lVar5 == 0) goto LAB_10b7b600c;
    func_0x00010bf20c00(*(undefined8 *)(param_3 + 0x50));
    _CGRectGetHeight();
    dVar7 = dVar6;
    func_0x00010bfb68e0(lVar3);
    _CGRectGetMinY();
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_10b7b60a8;
    puStack_c8 = &UNK_110841f80;
    _objc_retain(lVar3);
    puStack_108 = puVar1;
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_10b7b6134;
    puStack_f0 = &UNK_110841f20;
    lStack_e8 = param_3;
    lStack_c0 = lVar3;
    lStack_b8 = param_3;
    func_0x00010bf03420(ABS(dVar6 - dVar7) / dVar8,puVar2,param_4,&puStack_e0,&puStack_108);
    lVar4 = lStack_c0;
  }
  _objc_release(lVar4);
LAB_10b7b607c:
  _objc_release(lVar3);
  _objc_release(param_5);
  return;
}



/* Entry: 10b7b60a8; end: 10b7b6133;  */

void FUN_10b7b60a8(long param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  double dStack_40;
  undefined8 uStack_38;
  
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_60 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  dVar1 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  dStack_40 = dVar1;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_60);
  func_0x00010bf345e0(*(undefined8 *)(param_1 + 0x20));
  dVar2 = dVar1;
  func_0x00010bf20c00(*(undefined8 *)(*(long *)(param_1 + 0x28) + 0x50));
  _CGRectGetHeight();
  dVar3 = dVar2;
  func_0x00010bf20c00(*(undefined8 *)(param_1 + 0x20));
  _CGRectGetMidY();
  func_0x00010c17a6a0(dVar1,dVar2 + dVar3,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b7b6134; end: 10b7b617b;  */

void FUN_10b7b6134(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = uVar2;
  func_0x00010becd400(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7cc40(uVar2,param_2,uVar1,1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7b617c; end: 10b7b61b7;  */

void FUN_10b7b617c(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_40 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_18 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_20 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_40);
  return;
}



/* Entry: 10b7b61b8; end: 10b7b634f; -[SCAlertViewCoordinator didSelectActionButton:] */

void FUN_10b7b61b8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010becd400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beff820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010beef260();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bfecde0();
  _objc_release(param_3);
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010beef480();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf529e0();
  _objc_release(uVar2);
  if (uVar4 < uVar5) {
    uVar2 = uVar3;
    func_0x00010beef480();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0dfd20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar4;
    func_0x00010beee460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar2 != 0) {
      uVar2 = uVar4;
      func_0x00010beee460();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(uVar2 + 0x10))();
      _objc_release(uVar2);
    }
    _objc_release(uVar4);
  }
  uVar2 = uVar3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf83e80();
  _objc_release(uVar2);
  if ((int)uVar4 != 0) {
    func_0x00010be7cc40(param_1);
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7b6350; end: 10b7b6393; -[SCAlertViewCoordinator dismissCurrentAlertView] */

void FUN_10b7b6350(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010becd400();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7cc40(param_1,param_2,uVar1,1,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7b6394; end: 10b7b64a3; -[SCAlertViewCoordinator dismissCurrentAlertViewWithAction:] */

void FUN_10b7b6394(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010becd400();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beff820();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010beef480();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf4b900();
  _objc_release(uVar2);
  if ((int)uVar4 != 0) {
    lVar5 = param_3;
    func_0x00010beee460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 != 0) {
      lVar5 = param_3;
      func_0x00010beee460();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar5 + 0x10))();
      _objc_release(lVar5);
    }
    func_0x00010be7cc40(param_1);
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7b64a4; end: 10b7b6507; -[SCAlertViewCoordinator dismissCurrentAlertViewWithCompletion:] */

void FUN_10b7b64a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010becd400(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7cc40(param_1,param_2,uVar1,1,param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7b6508; end: 10b7b6567; -[SCAlertViewCoordinator dismissAlertViewIfVisible:] */

void FUN_10b7b6508(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010becd3e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar1 == param_3) {
    func_0x00010bf83740(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b7b6568; end: 10b7b6767; -[SCAlertViewCoordinator _presentNextAlertViewInFlow:animated:completion:] */

void FUN_10b7b6568(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar5);
  lVar2 = param_3;
  func_0x00010bf6df00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf83a40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = lVar2;
    func_0x00010bf83a40();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))();
    _objc_release(lVar3);
  }
  lVar3 = param_3;
  func_0x00010beff820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  puVar1 = PTR_PTR_1126e1398;
  if (lVar4 == 0) {
    lVar3 = param_1;
    func_0x00010becd400();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (param_3 == lVar3) {
      func_0x00010bf96260(param_3);
      func_0x00010be75880(param_1);
    }
  }
  else {
    _objc_retain(lVar2);
    _objc_retain(lVar4);
    _objc_retain(uVar5);
    _objc_retain(param_5);
    func_0x00010bf84a80(puVar1);
    _objc_release(param_5);
    _objc_release(uVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
  }
  _objc_release(lVar4);
  _objc_release(lVar2);
  _objc_release(uVar5);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10b7b6768; end: 10b7b6823;  */

void FUN_10b7b6768(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  func_0x00010c12c960(*(undefined8 *)(param_5 + 0x20));
  uVar1 = *(undefined8 *)(param_5 + 0x28);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x30));
  func_0x00010c23d5a0(param_3,param_4,uVar1);
  dVar2 = param_3;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x30));
  _CGRectGetMidX();
  dVar3 = dVar2 + param_3 * -0.5;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x30));
  _CGRectGetHeight();
  func_0x00010c19f0e0(dVar3,dVar2,param_3,param_4,*(undefined8 *)(param_5 + 0x28));
  func_0x00010befbb60(*(undefined8 *)(param_5 + 0x30));
  func_0x00010be718e0(*(undefined8 *)(param_5 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010c10ed50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126e1398,PTR_s_presentView_inView_withPresentat_112621570,
             *(undefined8 *)(param_5 + 0x28),*(undefined8 *)(param_5 + 0x30),
             (ulong)*(byte *)(param_5 + 0x48) << 1,*(undefined8 *)(param_5 + 0x40));
  return;
}



/* Entry: 10b7b6824; end: 10b7b6b43; -[SCAlertViewCoordinator _pushAlertViewFlow:animated:completion:] */

void FUN_10b7b6824(long param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5
                  )

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_5);
  uVar2 = param_3;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    uVar7 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    func_0x00010befa120(uVar7);
  }
  else {
    _objc_retain();
    _dispatch_group_create();
    lVar3 = *(long *)(param_1 + 0x18);
    func_0x00010bf529e0();
    puVar8 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar3 == 0) {
      _dispatch_group_enter(uVar2);
      lVar3 = param_1 + 0x48;
      _objc_loadWeakRetained();
      lVar4 = lVar3;
      if (lVar3 == 0) {
        func_0x000107c30a2c();
        _objc_retainAutoreleasedReturnValue();
      }
      puStack_90 = puVar8;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_10b7b6b44;
      puStack_78 = &UNK_110842e18;
      _objc_retain(uVar2);
      uStack_70 = uVar2;
      func_0x00010bdc7ba0(param_1);
      if (lVar3 == 0) {
        _objc_release(lVar4);
      }
      _objc_release(lVar3);
      _objc_release(uStack_70);
    }
    lVar3 = param_1;
    func_0x00010becd400(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be84ae0(param_1);
    *(undefined1 *)(param_1 + 0x10) = 1;
    lVar4 = lVar3;
    func_0x00010beff820(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    uVar7 = param_3;
    func_0x00010beff820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    uVar6 = uVar7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar7);
    if (param_4 == 0) {
      func_0x00010bfb68e0(lVar5);
      func_0x00010c19f0e0(uVar6);
      func_0x00010c12c960(lVar5);
      func_0x00010befbb60(uVar7);
    }
    else {
      _dispatch_group_enter(uVar2);
      puVar1 = PTR_PTR_1126e1398;
      puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_d8 = 0xc2000000;
      pcStack_d0 = FUN_10b7b6b4c;
      puStack_c8 = &UNK_11097c050;
      _objc_retain(uVar6);
      uStack_c0 = uVar6;
      _objc_retain(uVar7);
      uStack_98 = (undefined1)param_4;
      uStack_b8 = uVar7;
      lStack_b0 = param_1;
      _objc_retain(param_5);
      uStack_a0 = param_5;
      _objc_retain(uVar2);
      puVar8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a8 = uVar2;
      func_0x00010bf84a80(puVar1);
      _objc_release(uStack_a8);
      _objc_release(uStack_a0);
      _objc_release(uStack_b8);
      _objc_release(uStack_c0);
    }
    uStack_100 = 0xc2000000;
    pcStack_f8 = FUN_10b7b6d10;
    puStack_f0 = &UNK_110849530;
    puStack_108 = puVar8;
    _objc_retain(param_5);
    uStack_e8 = param_5;
    func_0x000107c27d98(uVar2,PTR___dispatch_main_q_11034be20,&puStack_108);
    _objc_release(uStack_e8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(lVar5);
    _objc_release(lVar3);
  }
  _objc_release(uVar2);
  _objc_release(param_5);
  return;
}



/* Entry: 10b7b6b44; end: 10b7b6b4b;  */

void FUN_10b7b6b44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b7b6b4c; end: 10b7b6c8f;  */

void FUN_10b7b6b4c(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  
  uVar1 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x28));
  func_0x00010c23d5a0(param_3,param_4,uVar1);
  dVar7 = param_3;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x28));
  _CGRectGetMidX();
  dVar8 = dVar7 + param_3 * -0.5;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + 0x28));
  _CGRectGetHeight();
  func_0x00010c19f0e0(dVar8,dVar7,param_3,param_4,*(undefined8 *)(param_5 + 0x20));
  func_0x00010befbb60(*(undefined8 *)(param_5 + 0x28),param_6,*(undefined8 *)(param_5 + 0x20));
  func_0x00010be718e0(*(undefined8 *)(param_5 + 0x30),param_6,*(undefined8 *)(param_5 + 0x20));
  puVar4 = PTR_PTR_1126e1398;
  uVar1 = *(undefined8 *)(param_5 + 0x20);
  uVar2 = *(undefined8 *)(param_5 + 0x28);
  uVar3 = *(undefined1 *)(param_5 + 0x48);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10b7b6c90;
  puStack_88 = &UNK_110864938;
  uStack_80 = *(undefined8 *)(param_5 + 0x30);
  uVar6 = *(undefined8 *)(param_5 + 0x40);
  uStack_68 = uVar3;
  _objc_retain(uVar6);
  uVar5 = *(undefined8 *)(param_5 + 0x38);
  uStack_70 = uVar6;
  _objc_retain(uVar5);
  uStack_78 = uVar5;
  func_0x00010c10ed40(puVar4,param_6,uVar1,uVar2,uVar3,&puStack_a0);
  _objc_release(uStack_78);
  _objc_release(uStack_70);
  return;
}



/* Entry: 10b7b6c90; end: 10b7b6d0f;  */

void FUN_10b7b6c90(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x10) = 0;
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010c12d360(*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),param_2,lVar1);
      func_0x00010be84b00(*(undefined8 *)(param_1 + 0x20),param_2,lVar1,
                          *(undefined1 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x30));
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b7b6d10; end: 10b7b6d23;  */

void FUN_10b7b6d10(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b7b6d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b7b6d24; end: 10b7b7047; -[SCAlertViewCoordinator _popAlertViewFlowAnimated:completion:] */

void FUN_10b7b6d24(long param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined1 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_4);
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar11);
  lVar3 = param_1;
  func_0x00010be75860();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_1;
  func_0x00010becd400();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  _dispatch_group_create();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar4 == 0) {
    _dispatch_group_enter(lVar5);
    uVar12 = *(undefined8 *)(param_1 + 0x50);
    _objc_retain(uVar12);
    puStack_98 = puVar1;
    uStack_90 = 0xc2000000;
    pcStack_88 = FUN_10b7b7048;
    puStack_80 = &UNK_110841f80;
    _objc_retain(lVar5);
    lStack_78 = lVar5;
    uStack_70 = uVar12;
    _objc_retain(uVar12);
    func_0x00010be8cc60(param_1);
    uVar6 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x50) = 0;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar6);
    _objc_release(uStack_70);
    _objc_release(lStack_78);
    _objc_release(uVar12);
  }
  lVar7 = lVar4;
  func_0x00010beff820();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  func_0x00010c23d620(lVar8);
  func_0x00010befbb60(uVar11);
  lVar7 = lVar3;
  func_0x00010beff820();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar7;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  if (param_3 == 0) {
    func_0x00010c12c960(lVar9);
    func_0x00010bfb68e0(lVar9);
    func_0x00010c19f0e0(lVar8);
  }
  else {
    _dispatch_group_enter(lVar5);
    puVar2 = PTR_PTR_1126e1398;
    lVar7 = lVar3;
    func_0x00010beff820(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar7;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    puStack_e8 = puVar1;
    uStack_e0 = 0xc2000000;
    pcStack_d8 = FUN_10b7b7070;
    puStack_d0 = &UNK_110867cb8;
    _objc_retain(lVar9);
    lStack_c8 = lVar9;
    lStack_c0 = param_1;
    _objc_retain(lVar8);
    lStack_b8 = lVar8;
    _objc_retain(uVar11);
    uStack_a0 = (undefined1)param_3;
    uStack_b0 = uVar11;
    _objc_retain(lVar5);
    lStack_a8 = lVar5;
    func_0x00010bf84a80(puVar2);
    _objc_release(lVar10);
    _objc_release(lVar7);
    _objc_release(lStack_a8);
    _objc_release(uStack_b0);
    _objc_release(lStack_b8);
    _objc_release(lStack_c8);
  }
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x10b7b712c;
  puStack_f8 = &UNK_110849530;
  uStack_f0 = param_4;
  _objc_retain(param_4);
  func_0x000107c27d98(lVar5,PTR___dispatch_main_q_11034be20,&puStack_110);
  _objc_release(uStack_f0);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(uVar11);
  _objc_release(param_4);
  return;
}



/* Entry: 10b7b7048; end: 10b7b706f;  */

void FUN_10b7b7048(long param_1)

{
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 10b7b7070; end: 10b7b7123;  */

void FUN_10b7b7070(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  func_0x00010c12c960(*(undefined8 *)(param_1 + 0x20));
  func_0x00010be718e0(*(undefined8 *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x30));
  puVar4 = PTR_PTR_1126e1398;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  bVar3 = *(byte *)(param_1 + 0x48);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10b7b7124;
  puStack_50 = &UNK_110842e18;
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar5);
  uStack_48 = uVar5;
  func_0x00010c10ed40(puVar4,param_2,uVar1,uVar2,(ulong)bVar3 << 1,&puStack_68);
  _objc_release(uStack_48);
  return;
}



/* Entry: 10b7b7124; end: 10b7b713f;  */

void FUN_10b7b7124(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b7b7140; end: 10b7b73af; -[SCAlertViewCoordinator _addOverlayToView:animated:completion:] */

void FUN_10b7b7140(double param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5,
                  long param_6)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  if (*(long *)(param_2 + 0x50) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010bf20c00(param_4);
    func_0x00010c013de0();
    uVar4 = *(undefined8 *)(param_2 + 0x50);
    *(undefined **)(param_2 + 0x50) = puVar1;
    _objc_release(uVar4);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_2 + 0x50),param_3,puVar1);
    _objc_release(puVar1);
    uVar2 = *(ulong *)(param_2 + 0x50);
    func_0x00010bf20c00();
    _CGRectGetHeight();
    dVar5 = *(double *)(param_2 + 0x28);
    _CGRectIsEmpty(dVar5,*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38),
                   *(undefined8 *)(param_2 + 0x40));
    if ((uVar2 & 1) == 0) {
      dVar5 = *(double *)(param_2 + 0x28);
      _CGRectGetMinY(dVar5,*(undefined8 *)(param_2 + 0x30),*(undefined8 *)(param_2 + 0x38),
                     *(undefined8 *)(param_2 + 0x40));
      if (dVar5 <= param_1) {
        param_1 = dVar5;
      }
    }
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010bf20c00(*(undefined8 *)(param_2 + 0x50));
    _CGRectGetWidth();
    func_0x00010c013de0(0,0,dVar5,param_1);
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    *(undefined **)(param_2 + 0x20) = puVar1;
    _objc_release(uVar4);
    func_0x00010befbb60(*(undefined8 *)(param_2 + 0x50),param_3,*(undefined8 *)(param_2 + 0x20));
    puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010c178280();
    func_0x00010bef9040(*(undefined8 *)(param_2 + 0x50),param_3,puVar1);
    func_0x00010befbb60(param_4,param_3,*(undefined8 *)(param_2 + 0x50));
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puVar3 = PTR__OBJC_CLASS___UIView_1126aec20;
  }
  PTR__OBJC_CLASS___UIColor_1126aea70 = puVar1;
  PTR__OBJC_CLASS___UIView_1126aec20 = puVar3;
  if (param_5 == 0) {
    func_0x00010bf1c920(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010bf414e0(0x3fd47ae147ae147b);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_2 + 0x50),param_3,puVar3);
    _objc_release(puVar3);
    _objc_release(puVar1);
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6);
    }
  }
  else {
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_10b7b73b0;
    puStack_70 = &UNK_11084a9e8;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    lStack_68 = param_2;
    _objc_retain(param_4);
    uStack_60 = param_4;
    _objc_retain(param_6);
    lStack_58 = param_6;
    func_0x00010bf03400(0x3fd3333333333333,puVar3,param_3,&puStack_88);
    _objc_release(lStack_58);
    _objc_release(uStack_60);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 10b7b73b0; end: 10b7b73c3;  */

void FUN_10b7b73b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc7bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__addOverlayToView_animated_compl_11254f888,
             *(undefined8 *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10b7b73c4; end: 10b7b750b; -[SCAlertViewCoordinator _removeOverlayAnimated:completion:] */

void FUN_10b7b73c4(undefined8 param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined *puVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  if (param_3 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x10b7b74a0;
    puStack_40 = &UNK_110842e18;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_10b7b750c;
    puStack_68 = &UNK_110842508;
    uStack_38 = param_1;
    _objc_retain(param_4);
    lStack_60 = param_4;
    func_0x00010bf03420(0x3fd3333333333333,puVar1,param_2,&puStack_58,&puStack_80);
    _objc_release(lStack_60);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 10b7b750c; end: 10b7b751f;  */

void FUN_10b7b750c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b7b7518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b7b7520; end: 10b7b76f7; -[SCAlertViewCoordinator _performConfigurationForAlertView:] */

void FUN_10b7b7520(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010beef480();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(lVar1);
      }
      uVar10 = *(ulong *)(lVar11 * 8);
      puVar3 = PTR_PTR_1126af180;
      _objc_opt_class(PTR_PTR_1126af180);
      uVar4 = uVar10;
      _objc_opt_isKindOfClass(uVar10,puVar3);
      if ((uVar4 & 1) != 0) {
        func_0x00010beef220();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___UIButton_1126aec48;
        _objc_opt_class(PTR__OBJC_CLASS___UIButton_1126aec48);
        uVar5 = uVar10;
        _objc_opt_isKindOfClass(uVar10,puVar3);
        uVar4 = uVar10;
        if ((uVar5 & 1) == 0) {
          uVar4 = 0;
        }
        _objc_retain(uVar4);
        _objc_release(uVar10);
        func_0x00010befbd60(uVar4);
        _objc_release(uVar4);
      }
      lVar11 = lVar11 + 1;
    } while (lVar2 != lVar11);
    lVar2 = lVar1;
    func_0x00010bf52a60();
  }
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
  _objc_alloc();
  func_0x00010c050900();
  puVar8 = puVar3;
  func_0x00010bef9040(param_3);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  puVar3 = puVar8;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010bf83c60();
  _objc_release(puVar3);
  if ((int)puVar6 != 0) {
    func_0x00010bf94800(*(undefined8 *)(param_3 + 0x50));
    lVar2 = param_3 + 0x48;
    _objc_loadWeakRetained();
    if (lVar2 == 0) {
      lVar7 = *(long *)(param_3 + 0x50);
      func_0x000107c30a2c(lVar7);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(lVar2);
      lVar7 = lVar2;
    }
    _objc_release(lVar2);
    func_0x00010bf94800(lVar7);
    _objc_release(lVar7);
  }
  puVar3 = puVar8;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010bf179c0();
  _objc_release(puVar3);
  if ((int)puVar6 != 0) {
    func_0x00010bf179a0(puVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar8);
  return;
}



/* Entry: 10b7b76f8; end: 10b7b77df; -[SCAlertViewCoordinator _performConfigurationForTransitionToAlertView:] */

void FUN_10b7b76f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf83c60();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010bf94800(*(undefined8 *)(param_1 + 0x50),param_2,0);
    lVar3 = param_1 + 0x48;
    _objc_loadWeakRetained();
    if (lVar3 == 0) {
      lVar4 = *(long *)(param_1 + 0x50);
      func_0x000107c30a2c(lVar4);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(lVar3);
      lVar4 = lVar3;
    }
    _objc_release(lVar3);
    func_0x00010bf94800(lVar4,param_2,0);
    _objc_release(lVar4);
  }
  uVar1 = param_3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf179c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    func_0x00010bf179a0(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7b77e0; end: 10b7b77e7; -[SCAlertViewCoordinator _pushAlertViewFlow:] */

void FUN_10b7b77e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_addObject__11259c1f0)
  ;
  return;
}



/* Entry: 10b7b77e8; end: 10b7b782b; -[SCAlertViewCoordinator _popAlertViewFlow] */

void FUN_10b7b77e8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 0x18),param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b7b782c; end: 10b7b7833; -[SCAlertViewCoordinator _topAlertViewFlow] */

void FUN_10b7b782c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c089830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_lastObject_112600018)
  ;
  return;
}



/* Entry: 10b7b7834; end: 10b7b7897; -[SCAlertViewCoordinator _topAlertView] */

void FUN_10b7b7834(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010becd400();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010beff820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b7b7898; end: 10b7b789f; -[SCAlertViewCoordinator overlayView] */

undefined8 FUN_10b7b7898(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10b7b78a0; end: 10b7b78ef; -[SCAlertViewCoordinator .cxx_destruct] */

void FUN_10b7b78a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_destroyWeak(param_1 + 0x48);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7b78f0; end: 10b7b7a53; -[SCAlertViewFlow initWithAlertViews:] */

undefined8 * FUN_10b7b78f0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  long lStack_48;
  
  puVar6 = &uStack_120;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = param_3;
  _objc_retain(param_3);
  puStack_d0 = PTR_PTR_11270ae88;
  puVar1 = &uStack_d8;
  uStack_d8 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bf529e0(param_3);
    func_0x00010bffc4a0();
    uVar4 = puVar1[1];
    puVar1[1] = puVar2;
    _objc_release(uVar4);
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    _objc_retain(param_3);
    puVar3 = param_3;
    func_0x00010bf52a60();
    if (puVar3 != (undefined8 *)0x0) {
      lVar5 = *plStack_110;
      do {
        puVar6 = (undefined8 *)0x0;
        do {
          if (*plStack_110 != lVar5) {
            _objc_enumerationMutation(param_3);
          }
          func_0x00010bf96260(puVar1);
          puVar6 = (undefined8 *)((long)puVar6 + 1);
        } while (puVar3 != puVar6);
        puVar3 = param_3;
        puVar6 = &uStack_120;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined8 *)0x0);
    }
    _objc_release(param_3);
    puVar3 = puVar6;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  if (puVar3 != (undefined8 *)0x0) {
    uVar4 = param_3[1];
    _objc_retain(puVar3);
    func_0x00010befa120(uVar4);
    func_0x00010c166ba0(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return puVar3;
  }
  return param_3;
}



/* Entry: 10b7b7a54; end: 10b7b7aab; -[SCAlertViewFlow enqueueAlertView:] */

void FUN_10b7b7a54(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    func_0x00010befa120(uVar1,param_2,param_3);
    func_0x00010c166ba0(param_3,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_3);
    return;
  }
  return;
}



/* Entry: 10b7b7aac; end: 10b7b7aef; -[SCAlertViewFlow dequeueAlertView] */

void FUN_10b7b7aac(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c12d360(*(undefined8 *)(param_1 + 8),param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b7b7af0; end: 10b7b7af7; -[SCAlertViewFlow removeAlertView:] */

void FUN_10b7b7af0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12d370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_removeObject__112628ef8)
  ;
  return;
}



/* Entry: 10b7b7af8; end: 10b7b7b1f; -[SCAlertViewFlow alertViewQueue] */

void FUN_10b7b7af8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b7b7b20; end: 10b7b7b2b; -[SCAlertViewFlow .cxx_destruct] */

void FUN_10b7b7b20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7b7b2c; end: 10b7b7ba3; +[SCAlertContentItem contentItemWithContentView:edgeInsets:] */

void FUN_10b7b7b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  _objc_retain(param_7);
  _objc_alloc(param_5);
  func_0x00010c003f60(param_1,param_2,param_3,param_4);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 10b7b7ba4; end: 10b7b7c3f; -[SCAlertContentItem initWithContentView:edgeInsets:] */

undefined1 *
FUN_10b7b7ba4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_11270ae90;
  uStack_50 = param_5;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_7;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 10b7b7c40; end: 10b7b7c47; -[SCAlertContentItem contentView] */

undefined8 FUN_10b7b7c40(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b7b7c48; end: 10b7b7c77; -[SCAlertContentItem setContentView:] */

void FUN_10b7b7c48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b7b7c78; end: 10b7b7c83; -[SCAlertContentItem edgeInsets] */

undefined8 FUN_10b7b7c78(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b7b7c84; end: 10b7b7c8f; -[SCAlertContentItem setEdgeInsets:] */

void FUN_10b7b7c84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x10) = param_1;
  *(undefined8 *)(param_5 + 0x18) = param_2;
  *(undefined8 *)(param_5 + 0x20) = param_3;
  *(undefined8 *)(param_5 + 0x28) = param_4;
  return;
}



/* Entry: 10b7b7c90; end: 10b7b7c9b; -[SCAlertContentItem .cxx_destruct] */

void FUN_10b7b7c90(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b7b7c9c; end: 10b7b8127; -[SCBaseAlertView initWithContentItems:actions:configuration:dismissHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_10b7b7c9c(undefined8 param_1,undefined8 param_2,long param_3,undefined *param_4,
             undefined *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_198 = PTR_PTR_11270ae98;
  uVar15 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar18 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  puVar4 = &uStack_1a0;
  uStack_1a0 = param_1;
  _objc_msgSendSuper2(uVar15,uVar16,uVar17,uVar18,puVar4,PTR_s_initWithFrame__1125e2948);
  if (puVar4 != (undefined8 *)0x0) {
    lVar8 = param_3;
    func_0x00010bf51e00();
    lVar12 = (long)_DAT_1127936d0;
    uVar5 = *(undefined8 *)((long)puVar4 + lVar12);
    *(long *)((long)puVar4 + lVar12) = lVar8;
    _objc_release(uVar5);
    puVar1 = param_4;
    func_0x00010bf51e00();
    puVar2 = PTR____NSArray0__struct_11034ab48;
    if (puVar1 != (undefined *)0x0) {
      puVar2 = puVar1;
    }
    lVar7 = (long)_DAT_1127936d4;
    _objc_retain(puVar2);
    uVar5 = *(undefined8 *)((long)puVar4 + lVar7);
    *(undefined **)((long)puVar4 + lVar7) = puVar2;
    _objc_release(uVar5);
    _objc_release(puVar1);
    uVar5 = param_6;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)puVar4 + (long)_DAT_1127936d8);
    *(undefined8 *)((long)puVar4 + (long)_DAT_1127936d8) = uVar5;
    _objc_release(uVar6);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar15,uVar16,uVar17,uVar18);
    lVar14 = (long)_DAT_1127936dc;
    uVar5 = *(undefined8 *)((long)puVar4 + lVar14);
    *(undefined **)((long)puVar4 + lVar14) = puVar2;
    _objc_release(uVar5);
    func_0x00010befbb60(puVar4);
    lVar11 = *(long *)((long)puVar4 + lVar12);
    _objc_retain(lVar11);
    lVar8 = lVar11;
    func_0x00010bf52a60();
    lVar12 = lRam0000000000000000;
    while (lVar8 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(lVar11);
        }
        uVar5 = *(undefined8 *)(lVar9 * 8);
        uVar6 = *(undefined8 *)((long)puVar4 + lVar14);
        func_0x00010bf4dce0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(uVar6);
        _objc_release(uVar5);
        lVar9 = lVar9 + 1;
      } while (lVar8 != lVar9);
      lVar8 = lVar11;
      func_0x00010bf52a60();
    }
    _objc_release(lVar11);
    lVar7 = *(long *)((long)puVar4 + lVar7);
    _objc_retain(lVar7);
    lVar8 = lVar7;
    func_0x00010bf52a60();
    lVar12 = lRam0000000000000000;
    while (lVar8 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(lVar7);
        }
        uVar5 = *(undefined8 *)(lVar11 * 8);
        uVar6 = *(undefined8 *)((long)puVar4 + lVar14);
        func_0x00010beef220(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befbb60(uVar6);
        _objc_release(uVar5);
        lVar11 = lVar11 + 1;
      } while (lVar8 != lVar11);
      lVar8 = lVar7;
      func_0x00010bf52a60();
    }
    _objc_release(lVar7);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar15,uVar16,uVar17,uVar18);
    lVar8 = (long)_DAT_1127936e0;
    uVar15 = *(undefined8 *)((long)puVar4 + lVar8);
    *(undefined **)((long)puVar4 + lVar8) = puVar2;
    _objc_release(uVar15);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar4 + lVar8));
    _objc_release(puVar2);
    func_0x00010befbb60(*(undefined8 *)((long)puVar4 + lVar14));
    puVar3 = puVar4;
    func_0x00010c08c0e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4030000000000000);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar4);
    _objc_release(puVar2);
    *(undefined8 *)((long)puVar4 + (long)_DAT_1127936e4) = 0x3fe51eb851eb851f;
    puVar2 = PTR_PTR_1126e1388;
    _objc_alloc_init();
    puVar1 = puVar2;
    if (param_5 != (undefined *)0x0) {
      puVar1 = param_5;
      (**(code **)(param_5 + 0x10))(param_5,puVar4,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
    }
    uVar15 = *(undefined8 *)((long)puVar4 + (long)_DAT_1127936e8);
    *(undefined **)((long)puVar4 + (long)_DAT_1127936e8) = puVar1;
    _objc_release(uVar15);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return puVar4;
  }
  ___stack_chk_fail();
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar14 = (long)_DAT_1127936d4;
  lVar7 = *(long *)(param_3 + lVar14);
  _objc_retain(lVar7);
  lVar12 = lVar7;
  func_0x00010bf52a60();
  lVar8 = lRam0000000000000000;
  if (lVar12 != 0) {
    lVar9 = 0;
    do {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(lVar7);
        }
        lVar10 = *(long *)(lVar13 * 8);
        func_0x00010bf179a0(lVar10);
        func_0x00010beff7c0();
        if (lVar10 == 1) {
          lVar9 = lVar9 + 1;
        }
        lVar13 = lVar13 + 1;
      } while (lVar12 != lVar13);
      lVar12 = lVar7;
      func_0x00010bf52a60();
    } while (lVar12 != 0);
    _objc_release();
    if (lVar9 < 2) goto LAB_10b7b82b0;
    lVar7 = *(long *)(param_3 + lVar14);
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf52a60();
    lVar12 = lRam0000000000000000;
    while (lVar8 != 0) {
      lVar14 = 0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(lVar7);
        }
        func_0x00010bf179a0(*(undefined8 *)(lVar14 * 8));
        lVar14 = lVar14 + 1;
      } while (lVar8 != lVar14);
      lVar8 = lVar7;
      func_0x00010bf52a60();
    }
  }
  _objc_release();
LAB_10b7b82b0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return (undefined8 *)0x1;
  }
  ___stack_chk_fail();
  puVar4 = *(undefined8 **)(lVar7 + _DAT_1127936d4);
                    /* WARNING: Could not recover jumptable at 0x00010c296f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar4,PTR_s_valueForKey__112683600,&PTR____CFConstantStringClassReference_110f82918);
  return puVar4;
}



/* Entry: 10b7b8128; end: 10b7b82ef; -[SCBaseAlertView becomeFirstResponder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b7b8128(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = (long)_DAT_1127936d4;
  lVar5 = *(long *)(param_1 + lVar7);
  _objc_retain(lVar5);
  lVar1 = lVar5;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  if (lVar1 != 0) {
    lVar8 = 0;
    do {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar5);
        }
        lVar6 = *(long *)(lVar9 * 8);
        func_0x00010bf179a0(lVar6);
        func_0x00010beff7c0();
        if (lVar6 == 1) {
          lVar8 = lVar8 + 1;
        }
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar9);
      lVar1 = lVar5;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    _objc_release();
    if (lVar8 < 2) goto LAB_10b7b82b0;
    lVar5 = *(long *)(param_1 + lVar7);
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar5;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar5);
        }
        func_0x00010bf179a0(*(undefined8 *)(lVar7 * 8));
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar5;
      func_0x00010bf52a60();
    }
  }
  _objc_release();
LAB_10b7b82b0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return 1;
  }
  ___stack_chk_fail();
  uVar3 = *(undefined8 *)(lVar5 + _DAT_1127936d4);
                    /* WARNING: Could not recover jumptable at 0x00010c296f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (uVar3,PTR_s_valueForKey__112683600,&PTR____CFConstantStringClassReference_110f82918);
  return uVar3;
}



/* Entry: 10b7b82f0; end: 10b7b8307; -[SCBaseAlertView actionViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7b82f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c296f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127936d4),PTR_s_valueForKey__112683600,
             &PTR____CFConstantStringClassReference_110f82918);
  return;
}



/* Entry: 10b7b8308; end: 10b7b837b; -[SCBaseAlertView setAccessoryView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7b8308(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_1127936ec;
  if (*(long *)(param_1 + lVar2) != param_3) {
    func_0x00010c12c960();
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar2));
    func_0x00010c1cbe20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7b837c; end: 10b7b83ef; -[SCBaseAlertView setRightAccessoryView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b7b837c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_1127936f0;
  if (*(long *)(param_1 + lVar2) != param_3) {
    func_0x00010c12c960();
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar2));
    func_0x00010c1cbe20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b7b83f0; end: 10b7b883b; -[SCBaseAlertView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_10b7b83f0(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  long lStack_1a8;
  undefined *puStack_1a0;
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_1a0 = PTR_PTR_11270ae98;
  lStack_1a8 = param_5;
  _objc_msgSendSuper2(&lStack_1a8,PTR_s_layoutSubviews_112600e60);
  lVar4 = (long)_DAT_1127936ec;
  uVar2 = *(undefined8 *)(param_5 + lVar4);
  func_0x00010bf20c00(param_5);
  func_0x00010c23d5a0(param_3,param_4,uVar2);
  dVar9 = param_3;
  func_0x00010bf20c00(param_5);
  _CGRectGetMidX();
  dVar9 = dVar9 + param_3 * -0.5;
  _CGRectIntegral(dVar9,-((1.0 - *(double *)(param_5 + _DAT_1127936e4)) * param_4),param_3,param_4);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar4));
  if (*(long *)(param_5 + lVar4) == 0) {
    dVar12 = 18.0;
  }
  else {
    func_0x00010bfb68e0();
    _CGRectGetMaxY();
    dVar12 = dVar9 + 10.0;
  }
  func_0x00010bf20c00(param_5);
  _CGRectGetWidth();
  dVar13 = dVar9 + -36.0;
  func_0x00010bf20c00(param_5);
  _CGRectGetHeight();
  dVar9 = dVar9 - dVar12;
  _CGRectIntegral(0x4032000000000000);
  lVar6 = (long)_DAT_1127936dc;
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar6));
  lVar3 = *(long *)(param_5 + _DAT_1127936d0);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  if (lVar1 != 0) {
    dVar14 = 0.0;
    do {
      lVar8 = 0;
      dVar16 = dVar9;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(lVar3);
        }
        uVar5 = *(undefined8 *)(lVar8 * 8);
        func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar6));
        func_0x00010bf8c020(uVar5);
        dVar13 = dVar13 - dVar16;
        func_0x00010bf8c020(uVar5);
        dVar13 = dVar13 - dVar12;
        func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar6));
        uVar2 = uVar5;
        func_0x00010bf4dce0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        dVar9 = dVar13;
        dVar12 = dVar16;
        func_0x00010c23d5a0(dVar13,dVar16);
        func_0x00010bfc40c0(dVar13,dVar16,dVar9,dVar12,param_5);
        dVar10 = dVar13;
        _objc_release(uVar2);
        func_0x00010bf8c020(uVar5);
        dVar14 = dVar14 + dVar10;
        func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar6));
        _CGRectGetMidX();
        uVar2 = uVar5;
        func_0x00010bf4dce0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        dVar12 = dVar14;
        dVar9 = dVar16;
        func_0x00010c19f0e0(dVar10 + dVar13 * -0.5);
        _objc_release(uVar2);
        func_0x00010bf8c020(uVar5);
        dVar14 = dVar16 + dVar14 + dVar13;
        lVar8 = lVar8 + 1;
        dVar16 = dVar9;
      } while (lVar1 != lVar8);
      lVar1 = lVar3;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar3);
  lVar4 = (long)_DAT_1127936f0;
  dVar13 = 1.79769313486232e+308;
  dVar14 = 1.79769313486232e+308;
  func_0x00010c23d5a0(*(undefined8 *)(param_5 + lVar4));
  dVar9 = dVar13;
  func_0x00010bf20c00(param_5);
  _CGRectGetWidth();
  dVar9 = ((dVar9 - dVar13) + -18.0) - ((double *)(param_5 + _DAT_1127936f4))[3];
  func_0x00010c19f0e0(dVar9,*(double *)(param_5 + _DAT_1127936f4) + 14.0,dVar13,dVar14,
                      *(undefined8 *)(param_5 + lVar4));
  func_0x00010bfcaa00(param_5);
  dVar12 = 0.0;
  lVar3 = *(long *)(param_5 + _DAT_1127936d4);
  _objc_retain(lVar3);
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar8 = 0;
    dVar16 = dVar9;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      uVar5 = *(undefined8 *)(lVar8 * 8);
      uVar2 = uVar5;
      func_0x00010befdb80();
      dVar9 = dVar16;
      if (((int)uVar2 != 0) && (func_0x00010beef240(uVar5), dVar9 = dVar12, dVar12 <= dVar16)) {
        dVar9 = dVar16;
      }
      lVar8 = lVar8 + 1;
      dVar16 = dVar9;
    } while (lVar4 != lVar8);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar6));
  _CGRectGetWidth();
  if (dVar12 <= dVar9) {
    dVar9 = dVar12;
  }
  dVar12 = 10.0;
  func_0x00010c08ca80(0x4024000000000000,dVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_98) {
    ___stack_chk_fail();
    lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
    dVar16 = *(double *)(PTR__CGSizeZero_110347620 + 8);
    func_0x00010bfcc240();
    lVar8 = (long)_DAT_1127936ec;
    dVar11 = dVar9;
    func_0x00010c23d5a0(dVar12 + -36.0,dVar9,*(undefined8 *)(param_5 + lVar8));
    lVar6 = *(long *)(param_5 + _DAT_1127936d0);
    dVar10 = dVar11;
    _objc_retain(lVar6);
    lVar4 = lVar6;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar6);
        }
        uVar5 = *(undefined8 *)(lVar7 * 8);
        func_0x00010bf8c020(uVar5);
        func_0x00010bf8c020(uVar5);
        dVar15 = ((dVar12 + -36.0) - dVar10) - dVar14;
        uVar2 = uVar5;
        func_0x00010bf4dce0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        dVar10 = dVar9;
        func_0x00010c23d5a0(dVar15);
        dVar16 = dVar16 + dVar10;
        _objc_release(uVar2);
        func_0x00010bf8c020(uVar5);
        func_0x00010bf8c020(uVar5);
        dVar16 = dVar16 + dVar15 + dVar13;
        lVar7 = lVar7 + 1;
      } while (lVar4 != lVar7);
      lVar4 = lVar6;
      func_0x00010bf52a60();
    }
    _objc_release(lVar6);
    dVar16 = dVar16 + *(double *)(param_5 + _DAT_1127936e4) * dVar11;
    dVar9 = 18.0;
    if (*(long *)(param_5 + lVar8) != 0) {
      dVar9 = 10.0;
    }
    dVar13 = dVar16 + dVar9;
    lVar4 = param_5;
    func_0x00010beef480(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec380(param_5);
    dVar13 = dVar13 + dVar16;
    _objc_release(lVar4);
    lVar4 = param_5;
    func_0x00010beef260();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar4;
    func_0x00010bf529e0();
    _objc_release(lVar4);
    if (lVar1 != 0) {
      dVar13 = dVar13 + 10.0;
    }
    uVar5 = *(undefined8 *)(param_5 + _DAT_1127936d4);
    func_0x00010c089820();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c137700();
    dVar14 = dVar13 + 18.0;
    if ((int)uVar2 == 0) {
      dVar14 = dVar13;
    }
    _objc_release(uVar5);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
      auVar18._8_8_ = dVar14;
      auVar18._0_8_ = dVar12;
      return auVar18;
    }
    ___stack_chk_fail();
    auVar19._8_8_ = dVar9;
    auVar19._0_8_ = 0x4066e00000000000;
    return auVar19;
  }
  auVar17._8_8_ = dVar9;
  auVar17._0_8_ = dVar12;
  return auVar17;
}



/* Entry: 10b7b883c; end: 10b7b8ab7; -[SCBaseAlertView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_10b7b883c(double param_1,double param_2,double param_3,double param_4,long param_5,
             undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [128];
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar11 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  func_0x00010bfcc240();
  lVar5 = (long)_DAT_1127936ec;
  dVar8 = param_2;
  func_0x00010c23d5a0(param_1 + -36.0,param_2,*(undefined8 *)(param_5 + lVar5));
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lVar3 = *(long *)(param_5 + _DAT_1127936d0);
  dVar9 = dVar8;
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010bf52a60(lVar3,param_6,&uStack_160,auStack_118,0x10);
  if (lVar1 != 0) {
    lVar6 = *plStack_150;
    do {
      lVar7 = 0;
      do {
        if (*plStack_150 != lVar6) {
          _objc_enumerationMutation(lVar3);
        }
        uVar4 = *(undefined8 *)(lStack_158 + lVar7 * 8);
        func_0x00010bf8c020(uVar4);
        func_0x00010bf8c020(uVar4);
        dVar10 = ((param_1 + -36.0) - dVar9) - param_4;
        uVar2 = uVar4;
        func_0x00010bf4dce0(uVar4);
        _objc_retainAutoreleasedReturnValue();
        dVar9 = param_2;
        func_0x00010c23d5a0(dVar10);
        dVar11 = dVar11 + dVar9;
        _objc_release(uVar2);
        func_0x00010bf8c020(uVar4);
        func_0x00010bf8c020(uVar4);
        dVar11 = dVar11 + dVar10 + param_3;
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      lVar1 = lVar3;
      func_0x00010bf52a60(lVar3,param_6,&uStack_160,auStack_118,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar3);
  dVar11 = dVar11 + *(double *)(param_5 + _DAT_1127936e4) * dVar8;
  dVar8 = 18.0;
  if (*(long *)(param_5 + lVar5) != 0) {
    dVar8 = 10.0;
  }
  dVar9 = dVar11 + dVar8;
  lVar1 = param_5;
  func_0x00010beef480(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec380(param_5,param_6,lVar1);
  dVar9 = dVar9 + dVar11;
  _objc_release(lVar1);
  lVar1 = param_5;
  func_0x00010beef260();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar3 != 0) {
    dVar9 = dVar9 + 10.0;
  }
  uVar4 = *(undefined8 *)(param_5 + _DAT_1127936d4);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  func_0x00010c137700();
  dVar11 = dVar9 + 18.0;
  if ((int)uVar2 == 0) {
    dVar11 = dVar9;
  }
  _objc_release(uVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    auVar12._8_8_ = dVar11;
    auVar12._0_8_ = param_1;
    return auVar12;
  }
  ___stack_chk_fail();
  auVar13._8_8_ = dVar8;
  auVar13._0_8_ = 0x4066e00000000000;
  return auVar13;
}



/* Entry: 10b7b8ab8; end: 10b7b8ac3; -[SCBaseAlertView getStandardWidth] */

undefined8 FUN_10b7b8ab8(void)

{
  return 0x4066e00000000000;
}



/* Entry: 10b7b8ac4; end: 10b7b8acf; -[SCBaseAlertView getViewSizeWidth] */

undefined8 FUN_10b7b8ac4(void)

{
  return 0x4071800000000000;
}



/* Entry: 10b7b8ad0; end: 10b7b8adb; -[SCBaseAlertView getContentItemSize:contentItemSize:contentItem:] */

undefined1  [16]
FUN_10b7b8ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 10b7b8adc; end: 10b7b8d3b; -[SCBaseAlertView layoutButtons:contentItems:contentView:textButtonPadding:standardWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b7b8adc(double param_1,double param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *unaff_x23;
  long lVar7;
  long unaff_x24;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_238 [128];
  long lStack_1b8;
  double dStack_1b0;
  double dStack_1a8;
  long lStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  long lStack_180;
  long lStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined1 auStack_118 [128];
  long lStack_98;
  
  lStack_98 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = &DAT_1127936d0;
  uVar1 = *(undefined8 *)(param_3 + _DAT_1127936d0);
  dVar12 = param_2;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf4dce0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetMaxY();
  _objc_release(uVar5);
  _objc_release(uVar1);
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  lVar4 = *(long *)(param_3 + _DAT_1127936d4);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60(lVar4,param_4,&uStack_160,auStack_118,0x10);
  if (lVar2 != 0) {
    dVar9 = 10.0;
    dVar13 = param_1 + 10.0;
    unaff_x24 = *plStack_150;
    do {
      lVar8 = 0;
      do {
        dVar10 = dVar12;
        if (*plStack_150 != unaff_x24) {
          _objc_enumerationMutation(lVar4);
          dVar10 = dVar12;
        }
        puVar6 = *(undefined **)(lStack_158 + lVar8 * 8);
        func_0x00010bf8c020(puVar6);
        dVar12 = dVar9;
        func_0x00010beef240(puVar6);
        puVar3 = puVar6;
        param_1 = dVar12;
        func_0x00010befdb80();
        lVar7 = (long)_DAT_1127936dc;
        dVar11 = param_2;
        if ((int)puVar3 == 0) {
          func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar7));
          _CGRectGetWidth();
          dVar11 = dVar12;
          if (param_1 <= dVar12) {
            dVar11 = param_1;
          }
        }
        dVar12 = dVar13 + dVar9;
        func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar7));
        _CGRectGetMidX();
        param_1 = param_1 + dVar11 * -0.5;
        _CGRectIntegral(param_1,dVar12,dVar11,dVar10);
        puVar3 = puVar6;
        func_0x00010beef220(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c19f0e0();
        _objc_release(puVar3);
        unaff_x23 = puVar6;
        func_0x00010beef220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb68e0();
        _CGRectGetMaxY();
        dVar9 = param_1;
        func_0x00010bf8c020(puVar6);
        dVar13 = param_1 + dVar11;
        _objc_release(unaff_x23);
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar4;
      func_0x00010bf52a60(lVar4,param_4,&uStack_160,auStack_118,0x10);
      uVar5 = 0;
    } while (lVar2 != 0);
  }
  lVar2 = lVar4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_98) {
    return lVar2;
  }
  ___stack_chk_fail();
  pcStack_168 = FUN_10b7b8d3c;
  lStack_1b8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  plStack_270 = (long *)0x0;
  uStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  dStack_1b0 = param_1;
  dStack_1a8 = param_2;
  lStack_1a0 = unaff_x24;
  puStack_198 = unaff_x23;
  puStack_190 = puVar6;
  uStack_188 = uVar5;
  lStack_180 = lVar4;
  lStack_178 = param_3;
  puStack_170 = &stack0xfffffffffffffff0;
  func_0x00010beef480();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar8 = *plStack_270;
    do {
      lVar7 = 0;
      do {
        if (*plStack_270 != lVar8) {
          _objc_enumerationMutation(lVar2);
        }
        uVar5 = *(undefined8 *)(lStack_278 + lVar7 * 8);
        func_0x00010beef240(uVar5);
        func_0x00010bf8c020(uVar5);
        func_0x00010bf8c020(uVar5);
        lVar7 = lVar7 + 1;
      } while (lVar4 != lVar7);
      lVar4 = lVar2;
      func_0x00010bf52a60(lVar2,param_4,&uStack_280,auStack_238,0x10);
    } while (lVar4 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1b8) {
    return lVar2;
  }
  ___stack_chk_fail();
  return *(long *)(lVar2 + _DAT_1127936d0);
}


