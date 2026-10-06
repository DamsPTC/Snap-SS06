/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108e04f64; end: 108e04fab; -[SCAutoCaptionsTextView setFrame:] */

void FUN_108e04f64(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fe9d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setFrame__112645658);
  func_0x00010be88000(param_1);
  return;
}



/* Entry: 108e04fac; end: 108e0503f; -[SCAutoCaptionsTextView sizeThatFits:] */

undefined1  [16]
FUN_108e04fac(double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined8 uStack_50;
  undefined *puStack_48;
  
  dVar1 = param_1;
  dVar2 = param_2;
  func_0x00010c26ba40();
  func_0x00010c26ba40(param_5);
  func_0x00010c26ba40(param_5);
  func_0x00010c26ba40(param_5);
  param_1 = param_1 - (dVar2 + param_4);
  param_2 = param_2 - (dVar1 + param_3);
  puStack_48 = PTR_PTR_1126fe9d0;
  uStack_50 = param_5;
  _objc_msgSendSuper2(param_1,param_2,&uStack_50,PTR_s_sizeThatFits__11266cf90);
  auVar3._0_8_ = dVar2 + param_4 + param_1;
  auVar3._8_8_ = dVar1 + param_3 + param_2;
  return auVar3;
}



/* Entry: 108e05040; end: 108e05043; -[SCAutoCaptionsTextView layoutManagerDidInvalidateLayout:] */

void FUN_108e05040(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be88010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__redrawLineBackgrounds_11257f9a0);
  return;
}



/* Entry: 108e05044; end: 108e05183; -[SCAutoCaptionsTextView _redrawLineBackgrounds] */

void FUN_108e05044(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_90;
  func_0x00010be8c6a0();
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_108e05184;
  uStack_40 = 0x108e05194;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  puStack_58 = &uStack_60;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_108e0519c;
  puStack_78 = &UNK_110ac5c50;
  uStack_70 = param_1;
  puStack_68 = &uStack_60;
  puStack_38 = puVar1;
  _objc_retainBlock(&puStack_90);
  uVar3 = param_1;
  func_0x00010c08ce80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c26b700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x00010bf97d80(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  func_0x00010bdc73e0(param_1);
  _objc_release(ppuVar2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puStack_38);
  return;
}



/* Entry: 108e05184; end: 108e0519b;  */

void FUN_108e05184(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108e0519c; end: 108e051ef;  */

void FUN_108e0519c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_d4;
  undefined8 in_d5;
  undefined8 in_d6;
  undefined8 in_d7;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  func_0x00010bdd23e0(in_d4,in_d5,in_d6,in_d7,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(uVar2,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e051f0; end: 108e052ff; -[SCAutoCaptionsTextView _removeLineBackgrounds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e051f0(undefined8 param_1,double param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_1f8 [128];
  long lStack_178;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar7 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar9 = (long)_DAT_11277be58;
  lVar8 = *(long *)(param_4 + lVar9);
  _objc_retain(lVar8);
  lVar1 = lVar8;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar10 = *plStack_110;
    do {
      lVar11 = 0;
      do {
        if (*plStack_110 != lVar10) {
          _objc_enumerationMutation(lVar8);
        }
        func_0x00010c12c940(*(undefined8 *)(lStack_118 + lVar11 * 8));
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      lVar1 = lVar8;
      puVar7 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar8);
  lVar1 = *(long *)(param_4 + lVar9);
  *(undefined8 *)(param_4 + lVar9) = 0;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar7);
  dVar13 = 0.0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  puVar2 = (undefined1 *)puVar7;
  func_0x00010bf52a60(puVar7,param_5,&uStack_240,auStack_1f8,0x10);
  if (puVar2 != (undefined1 *)0x0) {
    lVar8 = *plStack_230;
    do {
      puVar12 = (undefined1 *)0x0;
      do {
        if (*plStack_230 != lVar8) {
          _objc_enumerationMutation(puVar7);
        }
        lVar9 = lVar1;
        func_0x00010c08c0e0(lVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c066f40();
        _objc_release(lVar9);
        puVar12 = puVar12 + 1;
      } while (puVar2 != puVar12);
      puVar2 = (undefined1 *)puVar7;
      func_0x00010bf52a60(puVar7,param_5,&uStack_240,auStack_1f8,0x10);
    } while (puVar2 != (undefined1 *)0x0);
  }
  uVar3 = *(undefined8 *)(lVar1 + _DAT_11277be58);
  *(undefined8 **)(lVar1 + _DAT_11277be58) = puVar7;
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___CALayer_1126b1750;
  dVar15 = param_2;
  _objc_alloc_init(PTR__OBJC_CLASS___CALayer_1126b1750);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_5,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c16e440(puVar4,param_5,puVar6);
  _objc_release(puVar5);
  dVar14 = 5.25111068000947e-315;
  func_0x00010c1d4bc0(0x3f59999a,puVar4);
  func_0x00010c26ba40(uVar3);
  dVar16 = param_2 + -2.0 + dVar14;
  func_0x000108e05530();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099280();
  _objc_release(uVar3);
  func_0x00010c19f0e0(dVar13 + dVar15,dVar16,param_3,dVar14 + 4.0,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108e05300; end: 108e0542b; -[SCAutoCaptionsTextView _addLineBackgrounds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e05300(undefined8 param_1,double param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_6);
  dVar9 = 0.0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = param_6;
  func_0x00010bf52a60(param_6,param_5,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(param_6);
        }
        lVar2 = param_4;
        func_0x00010c08c0e0(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c066f40();
        _objc_release(lVar2);
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = param_6;
      func_0x00010bf52a60(param_6,param_5,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  uVar3 = *(undefined8 *)(param_4 + _DAT_11277be58);
  *(long *)(param_4 + _DAT_11277be58) = param_6;
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR__OBJC_CLASS___CALayer_1126b1750;
  dVar11 = param_2;
  _objc_alloc_init(PTR__OBJC_CLASS___CALayer_1126b1750);
  puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_5,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c16e440(puVar4,param_5,puVar6);
  _objc_release(puVar5);
  dVar10 = 5.25111068000947e-315;
  func_0x00010c1d4bc0(0x3f59999a,puVar4);
  func_0x00010c26ba40(uVar3);
  dVar12 = param_2 + -2.0 + dVar10;
  func_0x000108e05530();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099280();
  _objc_release(uVar3);
  func_0x00010c19f0e0(dVar9 + dVar11,dVar12,param_3,dVar10 + 4.0,puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108e0542c; end: 108e0551b; -[SCAutoCaptionsTextView _backgroundLayerForLineRect:] */

void FUN_108e0542c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  puVar1 = PTR__OBJC_CLASS___CALayer_1126b1750;
  dVar5 = param_2;
  _objc_alloc_init(PTR__OBJC_CLASS___CALayer_1126b1750);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_5,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c16e440(puVar1,param_5,puVar3);
  _objc_release(puVar2);
  dVar4 = 5.25111068000947e-315;
  func_0x00010c1d4bc0(0x3f59999a,puVar1);
  func_0x00010c26ba40(param_4);
  dVar6 = param_2 + -2.0 + dVar4;
  func_0x000108e05530();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099280();
  _objc_release(param_4);
  func_0x00010c19f0e0(param_1 + dVar5,dVar6,param_3,dVar4 + 4.0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e0551c; end: 108e05547; -[SCAutoCaptionsTextView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e0551c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277be58,0);
  return;
}



/* Entry: 108e05548; end: 108e056b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108e05548(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_e0;
  undefined *puStack_d8;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_new();
  func_0x00010c1bdcc0(0x401c000000000000);
  func_0x00010c166c00(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bfb41a0(0x4034000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  uVar6 = param_1;
  func_0x00010c04e840();
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_e0;
  _objc_retain(uVar6);
  puStack_d8 = PTR_PTR_1126fe9d8;
  uVar9 = 0x406f800000000000;
  puStack_e0 = puVar1;
  _objc_msgSendSuper2(0,0,0x406f800000000000,0x4052c00000000000,&puStack_e0,
                      PTR_s_initWithFrame__1125e2948);
  if (ppuVar5 != (undefined **)0x0) {
    puVar1 = PTR_PTR_1126b36f0;
    func_0x00010c27f980();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_11277be5c;
    uVar8 = *(undefined8 *)((long)ppuVar5 + lVar7);
    *(undefined **)((long)ppuVar5 + lVar7) = puVar1;
    _objc_release(uVar8);
    func_0x00010c212f20(*(undefined8 *)((long)ppuVar5 + lVar7));
    func_0x00010befbb60(ppuVar5);
    uVar8 = 0x7fefffffffffffff;
    func_0x00010c23d5a0(0x406f800000000000,*(undefined8 *)((long)ppuVar5 + lVar7));
    func_0x00010c19f0e0(0,0,uVar9,uVar8,*(undefined8 *)((long)ppuVar5 + lVar7));
    func_0x00010bfb68e0(ppuVar5);
    func_0x00010c19f0e0(ppuVar5);
  }
  _objc_release(uVar6);
  return (undefined1 *)ppuVar5;
}



/* Entry: 108e056b8; end: 108e057eb; -[SCPreviewAutoCaptionsView initWithText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_108e056b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  puStack_58 = PTR_PTR_1126fe9d8;
  uVar5 = 0x406f800000000000;
  uStack_60 = param_1;
  _objc_msgSendSuper2(0,0,0x406f800000000000,0x4052c00000000000,&uStack_60,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126b36f0;
    func_0x00010c27f980();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = (long)_DAT_11277be5c;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c212f20(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    uVar3 = 0x7fefffffffffffff;
    func_0x00010c23d5a0(0x406f800000000000,*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010c19f0e0(0,0,uVar5,uVar3,*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010bfb68e0(puVar1);
    func_0x00010c19f0e0(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e057ec; end: 108e057fb; -[SCPreviewAutoCaptionsView text] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e057ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26b710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277be5c),PTR_s_text_1126787e8);
  return;
}



/* Entry: 108e057fc; end: 108e05813; -[SCPreviewAutoCaptionsView isTracking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_108e057fc(long param_1)

{
  return *(long *)(param_1 + _DAT_11277be60) != 0;
}



/* Entry: 108e05814; end: 108e05843; -[SCPreviewAutoCaptionsView trajectoryManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e05814(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277be60);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e05844; end: 108e05853; -[SCPreviewAutoCaptionsView targetTrajectory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e05844(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26a1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277be60),PTR_s_targetTrajectory_112678290);
  return;
}



/* Entry: 108e05854; end: 108e058b3; -[SCPreviewAutoCaptionsView enableTrackingWithManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e05854(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11277be60;
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar2),param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e058b4; end: 108e058eb; -[SCPreviewAutoCaptionsView disableTracking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e058b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277be60;
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar2),param_2,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108e058ec; end: 108e059b3; -[SCPreviewAutoCaptionsView trajectoryManager:didOutputTransform:shouldAnimate:] */

void FUN_108e058ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  undefined **ppuVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  _objc_retain(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108e059b4;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_1;
  _objc_retain(param_4);
  uStack_38 = param_4;
  _objc_retainBlock();
  if (param_5 == 0) {
    (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
  }
  else {
    func_0x00010bf03400(0x3f9eb851eb851eb8,PTR__OBJC_CLASS___UIView_1126aec20,param_2,ppuVar1);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_38);
  _objc_release(param_4);
  return;
}



/* Entry: 108e059b4; end: 108e05a1f;  */

void FUN_108e059b4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x00010c14e120(*(undefined8 *)(param_2 + 0x28));
  uVar1 = param_1;
  func_0x00010c14e120(*(undefined8 *)(param_2 + 0x28));
  _CGAffineTransformMakeScale(&uStack_60,param_1,uVar1);
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  func_0x00010c219960(*(undefined8 *)(param_2 + 0x20),param_3,&uStack_90);
  return;
}



/* Entry: 108e05a20; end: 108e05a83; +[SCPreviewAutoCaptionsView canContainText:] */

bool FUN_108e05a20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  double in_d3;
  
  FUN_108e05548(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20bc0(0x406f800000000000,0x7fefffffffffffff);
  _objc_release(param_3);
  return in_d3 < 75.0;
}



/* Entry: 108e05a84; end: 108e05acb; -[SCPreviewAutoCaptionsView _isRTL] */

bool FUN_108e05a84(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c292ae0();
  _objc_release(puVar1);
  return puVar2 == (undefined *)0x1;
}



/* Entry: 108e05acc; end: 108e05b0b; -[SCPreviewAutoCaptionsView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108e05acc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277be60,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277be5c,0);
  return;
}



/* Entry: 108e05b0c; end: 108e05d17; -[SCGeoFilterImagesFetchRequest initWithGeoFilters:skipLensContent:updateBlock:completeBlock:] */

undefined1 *
FUN_108e05b0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fe9e0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release();
    *(undefined8 *)((long)puVar1 + 0x28) = 0;
    func_0x000107c3121c();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b88d8);
    uVar2 = uVar3;
    func_0x00010beecc20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar4);
    _objc_release();
    func_0x000107c3121c();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bcc68);
    uVar2 = uVar3;
    func_0x00010beecc20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar4);
    _objc_release();
    func_0x000107c3121c();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126bcca0);
    uVar2 = uVar3;
    func_0x00010beecc20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar4);
    _objc_release();
    func_0x000107c3121c();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126c40f0);
    uVar2 = uVar3;
    func_0x00010beecc20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e05d18; end: 108e05f0f; -[SCGeoFilterImagesFetchRequest fetchWithFilterContext:userSession:] */

void FUN_108e05d18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x28) == 0) {
    *(undefined8 *)(param_1 + 0x28) = 1;
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      *(undefined8 *)(param_1 + 0x28) = 2;
      func_0x00010bde2920(param_1);
    }
    else {
      lVar1 = *(long *)(param_1 + 0x30);
      func_0x00010bfe63a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 == 0) {
        _objc_initWeak(auStack_58,param_1);
        uVar5 = 0;
        func_0x000107c312b8(0,0);
        _objc_retainAutoreleasedReturnValue();
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0xc2000000;
        pcStack_80 = FUN_108e05f10;
        puStack_78 = &UNK_110848218;
        _objc_copyWeak(auStack_60,auStack_58);
        _objc_retain(param_3);
        uStack_70 = param_3;
        _objc_retain(param_4);
        uStack_68 = param_4;
        func_0x000107c27d8c(uVar5,&puStack_90);
        _objc_release(uVar5);
        _objc_release(uStack_68);
        _objc_release(uStack_70);
        _objc_destroyWeak(auStack_60);
        _objc_destroyWeak(auStack_58);
      }
      else {
        uVar2 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010bfe63a0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar2;
        func_0x00010bf85f80();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf60aa0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        _objc_release(uVar5);
        _objc_release(uVar2);
        func_0x00010be11c20(param_1);
        _objc_release(uVar4);
      }
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108e05f10; end: 108e05f43;  */

void FUN_108e05f10(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be1eb00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e05f44; end: 108e06047; -[SCGeoFilterImagesFetchRequest _getDisplayNameAndfetchImageWithFilterContext:userSession:] */

void FUN_108e05f44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0e4060(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108e06048; end: 108e060d3;  */

void FUN_108e06048(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf85f80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be11c20();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108e060d4; end: 108e06203; -[SCGeoFilterImagesFetchRequest _fetchImageWithFilterContext:userSession:displayName:] */

void FUN_108e060d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bed0ac0(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108e06204; end: 108e0628f;  */

void FUN_108e06204(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c269d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be11c40(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e06290; end: 108e06423; -[SCGeoFilterImagesFetchRequest _ucoDataFetcherWithContext:completion:] */

void FUN_108e06290(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == 0) {
LAB_108e06390:
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  else {
    lVar1 = param_3;
    func_0x00010c06d0a0();
    if ((int)lVar1 != 0) {
      uVar2 = *(ulong *)(param_1 + 0x38);
      func_0x00010bfe63a0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c27e640();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf92260();
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      if ((uVar5 & 1) == 0) goto LAB_108e06390;
    }
    lVar1 = param_3;
    func_0x00010bfbac00();
    if ((int)lVar1 == 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x40);
      _objc_retain(param_4);
      func_0x00010c0e4060(uVar6);
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 0x48);
      _objc_retain(param_4);
      func_0x00010c0e4060(uVar6);
    }
    _objc_release(param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108e06424; end: 108e064ab;  */

void FUN_108e06424(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c27e5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108e064ac; end: 108e06793; -[SCGeoFilterImagesFetchRequest _fetchImageWithFilterContext:userSession:displayName:ucoDataFetcher:] */

void FUN_108e064ac(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined *puStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined **ppuStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  long lStack_210;
  undefined1 uStack_208;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  undefined8 *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined8 uStack_178;
  long lStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1d8 = param_3;
  _objc_retain(param_3);
  uStack_1e0 = param_4;
  _objc_retain(param_4);
  lStack_1e8 = param_5;
  _objc_retain(param_5);
  lVar1 = param_6;
  lStack_1f0 = param_6;
  _objc_retain();
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x2020000000;
  uStack_108 = 0;
  _dispatch_group_create();
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  lVar6 = *(long *)(param_1 + 8);
  _objc_retain(lVar6);
  lStack_1f8 = lVar6;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    param_6 = *plStack_150;
    do {
      unaff_x22 = 0;
      do {
        if (*plStack_150 != param_6) {
          _objc_enumerationMutation(lStack_1f8);
        }
        uVar7 = *(undefined8 *)(lStack_158 + unaff_x22 * 8);
        _dispatch_group_enter(lVar1);
        puStack_1a0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_198 = 0xc2000000;
        pcStack_190 = FUN_108e06794;
        puStack_188 = &UNK_110ac5d40;
        puStack_168 = &uStack_120;
        lVar2 = lVar1;
        lStack_180 = param_1;
        uStack_178 = uVar7;
        _objc_retain();
        lStack_170 = lVar1;
        FUN_108e07094();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x000108e07010();
        _objc_retainAutoreleasedReturnValue();
        param_5 = lVar4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uStack_208 = *(undefined1 *)(param_1 + 0x10);
        lStack_210 = lStack_1e8;
        func_0x00010bfc1220(uVar7);
        _objc_release(param_5);
        _objc_release(lVar4);
        _objc_release(lVar3);
        _objc_release(lVar2);
        _objc_release(lStack_170);
        unaff_x22 = unaff_x22 + 1;
      } while (lVar6 != unaff_x22);
      lVar6 = lStack_1f8;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release(lStack_1f8);
  puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1c8 = 0xc2000000;
  pcStack_1c0 = FUN_108e0691c;
  puStack_1b8 = &UNK_11084b9d0;
  puStack_1a8 = &uStack_120;
  ppuVar5 = &puStack_1d0;
  lStack_1b0 = param_1;
  func_0x000107c27d98(lVar1,PTR___dispatch_main_q_11034be20);
  _objc_release(lVar1);
  __Block_object_dispose(&uStack_120,8);
  _objc_release(lStack_1f0);
  _objc_release(lStack_1e8);
  _objc_release(uStack_1e0);
  lVar1 = lStack_1d8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = 8;
  __Block_object_dispose(&uStack_120);
  lVar6 = lVar1;
  __Unwind_Resume();
  pcStack_218 = FUN_108e06794;
  lStack_240 = unaff_x22;
  lStack_238 = param_6;
  lStack_230 = param_5;
  lStack_228 = lVar1;
  puStack_220 = &stack0xfffffffffffffff0;
  _objc_retain(uVar7);
  _objc_retain(ppuVar5);
  puStack_290 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_288 = 0xc2000000;
  uStack_280 = 0x108e06874;
  puStack_278 = &UNK_1108ddbd8;
  uStack_248 = *(undefined8 *)(lVar6 + 0x38);
  uStack_270 = *(undefined8 *)(lVar6 + 0x20);
  uVar9 = *(undefined8 *)(lVar6 + 0x30);
  uVar8 = *(undefined8 *)(lVar6 + 0x28);
  uStack_268 = uVar7;
  ppuStack_260 = ppuVar5;
  _objc_retain(*(undefined8 *)(lVar6 + 0x30));
  uStack_258 = uVar8;
  uStack_250 = uVar9;
  _objc_retain(ppuVar5);
  _objc_retain(uVar7);
  func_0x000107c312d0("APPSTORE",&puStack_290);
  _objc_release(uStack_250);
  _objc_release(ppuStack_260);
  _objc_release(uStack_268);
  _objc_release(ppuVar5);
  _objc_release(uVar7);
  return;
}



/* Entry: 108e06794; end: 108e0691b;  */

void FUN_108e06794(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x108e06874;
  puStack_68 = &UNK_1108ddbd8;
  uStack_38 = *(undefined8 *)(param_1 + 0x38);
  uStack_60 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_58 = param_2;
  uStack_50 = param_3;
  _objc_retain(*(undefined8 *)(param_1 + 0x30));
  uStack_48 = uVar1;
  uStack_40 = uVar2;
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x000107c312d0("APPSTORE",&puStack_80);
  _objc_release(uStack_40);
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 108e0691c; end: 108e0695b;  */

void FUN_108e0691c(long param_1)

{
  undefined8 uVar1;
  byte bVar2;
  
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x28) == 1) {
    bVar2 = *(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18);
    uVar1 = 2;
    if (bVar2 != 0) {
      uVar1 = 3;
    }
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bde2930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__completeCallbackWithSucceeded_c_1125563e8,
               bVar2 ^ 1,0);
    return;
  }
  return;
}



/* Entry: 108e0695c; end: 108e0697f; -[SCGeoFilterImagesFetchRequest cancel] */

void FUN_108e0695c(long param_1)

{
  if (*(long *)(param_1 + 0x28) == 1) {
    *(undefined8 *)(param_1 + 0x28) = 4;
                    /* WARNING: Could not recover jumptable at 0x00010bde2930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__completeCallbackWithSucceeded_c_1125563e8,0,1);
    return;
  }
  return;
}



/* Entry: 108e06980; end: 108e0699b; -[SCGeoFilterImagesFetchRequest _updateCallbackWithGeoFilterImage:geoFilterAppearanceSetting:] */

void FUN_108e06980(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108e06994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4);
    return;
  }
  return;
}



/* Entry: 108e0699c; end: 108e069ef; -[SCGeoFilterImagesFetchRequest _completeCallbackWithSucceeded:cancelled:] */

void FUN_108e0699c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4);
  }
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108e069f0; end: 108e06a5b; -[SCGeoFilterImagesFetchRequest .cxx_destruct] */

void FUN_108e069f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e06a5c; end: 108e06af3; -[SCGeoFilterImagesFetcher initWithContextData:] */

undefined1 * FUN_108e06a5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126fe9e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    _objc_retain(param_3);
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e06af4; end: 108e06b07; -[SCGeoFilterImagesFetcher fetchGeoFilterImagesWithGeoFilters:userSession:updateBlock:completeBlock:] */

void FUN_108e06af4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfa7630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_fetchGeoFilterImagesWithGeoFilte_1125c7730,param_3,0,param_4,param_5,
             param_6);
  return;
}



/* Entry: 108e06b08; end: 108e06bd7; -[SCGeoFilterImagesFetcher fetchGeoFilterImagesWithGeoFilters:skipLensContent:userSession:updateBlock:completeBlock:] */

void FUN_108e06b08(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010bf2dba0(uVar2);
  puVar1 = PTR_PTR_1126dbfb0;
  _objc_alloc();
  func_0x00010c0178a0();
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar1;
  _objc_release(uVar2);
  func_0x00010bfab6e0(*(undefined8 *)(param_1 + 8),param_2,*(undefined8 *)(param_1 + 0x18),param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 108e06bd8; end: 108e06ddb; -[SCGeoFilterImagesFetcher updateGeoFilter:userSession:updateBlock:] */

void FUN_108e06bd8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar6 = *(long *)(param_1 + 0x10);
  _objc_retain(param_5);
  _objc_retain(param_4);
  lVar3 = param_3;
  func_0x00010bfadea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  if (lVar6 != 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    lVar3 = param_3;
    func_0x00010bfadea0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e00e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2dba0();
    _objc_release(uVar7);
    _objc_release(lVar3);
  }
  puVar1 = PTR_PTR_1126dbfb0;
  _objc_alloc(PTR_PTR_1126dbfb0);
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0178a0(puVar1);
  _objc_release(param_5);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  lVar3 = param_3;
  func_0x00010bfadea0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar7);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  lVar3 = param_3;
  func_0x00010bfadea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfab6e0();
  _objc_release(param_4);
  _objc_release(uVar7);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf2dba0(*(undefined8 *)(param_3 + 8));
  uVar7 = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(param_3 + 8) = 0;
  _objc_release(uVar7);
  lVar4 = *(long *)(param_3 + 0x10);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar4;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(lVar4);
      }
      func_0x00010bf2dba0(*(undefined8 *)(lVar8 * 8));
      lVar8 = lVar8 + 1;
    } while (lVar3 != lVar8);
    lVar3 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  lVar3 = *(long *)(param_3 + 0x10);
  func_0x00010c12adc0(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar3 + 0x18,0);
  _objc_storeStrong(lVar3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar3 + 8,0);
  return;
}



/* Entry: 108e06ddc; end: 108e06eef; -[SCGeoFilterImagesFetcher cancel] */

void FUN_108e06ddc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 8));
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar2);
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar3);
      }
      func_0x00010bf2dba0(*(undefined8 *)(lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar4 != lVar6);
    lVar4 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  lVar4 = *(long *)(param_1 + 0x10);
  func_0x00010c12adc0(lVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(lVar4 + 0x18,0);
  _objc_storeStrong(lVar4 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar4 + 8,0);
  return;
}



/* Entry: 108e06ef0; end: 108e06f2b; -[SCGeoFilterImagesFetcher .cxx_destruct] */

void FUN_108e06ef0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e06f2c; end: 108e06fcf; -[SCUcoMemoriesSpectaclesServices initWithUcoDataFetcher:ucoViewModelGenerator:] */

undefined1 *
FUN_108e06f2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fe9f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e06fd0; end: 108e06fd7; -[SCUcoMemoriesSpectaclesServices ucoDataFetcher] */

undefined8 FUN_108e06fd0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e06fd8; end: 108e06fdf; -[SCUcoMemoriesSpectaclesServices ucoViewModelGenerator] */

undefined8 FUN_108e06fd8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108e06fe0; end: 108e0708b; -[SCUcoMemoriesSpectaclesServices .cxx_destruct] */

void FUN_108e06fe0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e0708c; end: 108e07093;  */

void FUN_108e0708c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf13110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_avatarProvider_1125a25e8);
  return;
}



/* Entry: 108e07094; end: 108e0710f;  */

void FUN_108e07094(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c3121c();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b8308;
  _objc_opt_class(PTR_PTR_1126b8308);
  uVar2 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar1,&PTR___NSConcreteGlobalBlock_110ac5d90);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010bfe63a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108e07110; end: 108e07117;  */

void FUN_108e07110(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe7730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_imageFetcher_1125d7790);
  return;
}



/* Entry: 108e07118; end: 108e07193;  */

void FUN_108e07118(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c3121c();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126bded0;
  _objc_opt_class(PTR_PTR_1126bded0);
  uVar2 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar1,&PTR___NSConcreteGlobalBlock_110ac5dd0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010bfe63a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108e07194; end: 108e0719b;  */

void FUN_108e07194(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c153230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_search_1126326a8);
  return;
}



/* Entry: 108e0719c; end: 108e07217;  */

void FUN_108e0719c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c3121c();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126dbfb8;
  _objc_opt_class(PTR_PTR_1126dbfb8);
  uVar2 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar1,&PTR___NSConcreteGlobalBlock_110ac5e10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010bfe63a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108e07218; end: 108e0721f;  */

void FUN_108e07218(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_eventLogger_1125c41a0);
  return;
}



/* Entry: 108e07220; end: 108e0729b;  */

void FUN_108e07220(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c3121c();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b9780;
  _objc_opt_class(PTR_PTR_1126b9780);
  uVar2 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar1,&PTR___NSConcreteGlobalBlock_110ac5e50);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010bfe63a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108e0729c; end: 108e072a3;  */

void FUN_108e0729c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c292c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userLinkingServices_112682540);
  return;
}



/* Entry: 108e072a4; end: 108e0731f;  */

void FUN_108e072a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c3121c();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b9780;
  _objc_opt_class(PTR_PTR_1126b9780);
  uVar2 = param_1;
  func_0x00010beecc40(param_1,param_2,puVar1,&PTR___NSConcreteGlobalBlock_110ac5e70);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = uVar2;
  func_0x00010bfe63a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108e07320; end: 108e07327;  */

void FUN_108e07320(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c292c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userLinkingContentServices_112682538);
  return;
}



/* Entry: 108e07328; end: 108e07333; -[SCBitmojiFriendInfoServices .cxx_destruct] */

void FUN_108e07328(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e07334; end: 108e0733b; -[SCBitmojiUserServices userLinkingServices] */

undefined8 FUN_108e07334(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108e0733c; end: 108e07343; -[SCBitmojiUserServices userLinkingContentServices] */

undefined8 FUN_108e0733c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108e07344; end: 108e07373; -[SCBitmojiUserServices .cxx_destruct] */

void FUN_108e07344(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108e07374; end: 108e0742f; -[SCCTPCTItemInstance imageWithCTPItemViewService:imageSize:feature:disposableBag:completion:] */

void FUN_108e07374(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bc960;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010c290480(puVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe92c0(param_1,param_2,param_3,param_4,param_5,puVar1,param_6,param_7);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e07430; end: 108e075cb; -[SCCTPCTItemInstance imageWithCTPItemViewService:imageSize:feature:presentationModelType:disposableBag:completion:] */

void FUN_108e07430(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_3;
  func_0x00010bf2d360();
  if ((uVar1 & 1) == 0) {
    (**(code **)(param_8 + 0x10))(param_8,0);
  }
  else {
    uVar1 = param_3;
    func_0x00010c29ce00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e0460();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0e0ea0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_8);
    uVar5 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_8);
    _objc_release(uVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 108e075cc; end: 108e07687;  */

void FUN_108e075cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108e07688; end: 108e077cb;  */

void FUN_108e07688(long param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_s_imageFuture_1125d7900;
  _objc_retain(param_2);
  uVar2 = param_2;
  _objc_opt_respondsToSelector(param_2,puVar1);
  if ((uVar2 & 1) != 0) {
    uVar2 = param_2;
    func_0x00010bfe7ce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = uVar5;
    _objc_retain(uVar5);
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar5);
    return;
  }
  lVar6 = *(long *)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x00010bfe90c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar4 = uVar2;
  func_0x00010bfe6ac0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(lVar6,uVar4);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108e077cc; end: 108e077e7;  */

void FUN_108e077cc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108e077d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 108e077e8; end: 108e07983; -[SCCTPCTItemInstance animatedImageWithCTPItemViewService:imageSize:feature:presentationModelType:disposableBag:completion:] */

void FUN_108e077e8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  uVar1 = param_3;
  func_0x00010bf2d360();
  if ((uVar1 & 1) == 0) {
    (**(code **)(param_8 + 0x10))(param_8,0);
  }
  else {
    uVar1 = param_3;
    func_0x00010c29ce00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e0460();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0e0ea0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_8);
    uVar5 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_8);
    _objc_release(uVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 108e07984; end: 108e07a3f;  */

void FUN_108e07984(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108e07a40; end: 108e07b87;  */

void FUN_108e07a40(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x000107c318f8(param_2,PTR_DAT_1126a5b28);
  lVar2 = param_2;
  if ((int)lVar1 == 0) {
    lVar2 = 0;
  }
  _objc_retain(lVar2);
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    lVar2 = param_2;
    func_0x00010bfe90c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(0);
    lVar1 = lVar2;
    func_0x00010bfe6ac0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))(lVar3,lVar1);
    _objc_release(lVar1);
  }
  else {
    lVar1 = param_2;
    func_0x00010bf03820(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    lVar2 = *(long *)(param_1 + 0x20);
    lVar3 = lVar2;
    _objc_retain(lVar2);
    func_0x000107c30a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c297260(lVar1);
    _objc_release(lVar3);
    _objc_release(lVar1);
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 108e07b88; end: 108e07ba3;  */

void FUN_108e07b88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108e07b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 108e07ba4; end: 108e07ed7;  */

void FUN_108e07ba4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  undefined *puVar13;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b0cc0;
  _objc_opt_new(PTR_PTR_1126b0cc0);
  puVar2 = PTR_PTR_1126b0cb8;
  _objc_opt_new(PTR_PTR_1126b0cb8);
  puVar3 = PTR_PTR_1126b37c0;
  _objc_opt_new();
  puVar4 = PTR_PTR_1126ba7e0;
  _objc_opt_new(PTR_PTR_1126ba7e0);
  puVar5 = PTR_PTR_1126ba7e8;
  _objc_opt_new(PTR_PTR_1126ba7e8);
  puVar8 = PTR_PTR_1126b5938;
  uVar6 = param_1;
  func_0x00010bfebc60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c2540c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbab60(puVar8,param_2,uVar7,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar6);
  puVar13 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (puVar8 == (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    uVar6 = param_1;
    func_0x00010bfebc60();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c2540c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar13,param_2,&PTR____CFConstantStringClassReference_110efb0b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
    _objc_release(uVar6);
    puVar9 = puVar8;
    func_0x00010c130220();
    _objc_retainAutoreleasedReturnValue();
    if (puVar9 == (undefined *)0x0) {
      iVar12 = 0;
    }
    else {
      puVar10 = puVar8;
      func_0x00010c130220();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar10;
      func_0x00010c067ec0();
      _objc_release(puVar10);
      iVar12 = (int)puVar11;
      if (iVar12 != 3) {
        iVar12 = 0;
      }
    }
    _objc_release(puVar9);
    puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
    func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778,param_2,puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0(puVar2,param_2,puVar9);
    _objc_release(puVar9);
    puVar9 = puVar8;
    func_0x00010c26afc0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17ece0(puVar4,param_2,puVar9);
    _objc_release(puVar9);
    puVar9 = puVar8;
    func_0x00010bfb7be0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21acc0(puVar4,param_2,puVar9 != (undefined *)0x0);
    _objc_release(puVar9);
    puVar9 = puVar8;
    func_0x00010bf12ea0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16da00(puVar5,param_2,puVar9);
    _objc_release(puVar9);
    puVar9 = puVar8;
    func_0x00010bfb7be0(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19fa20(puVar5,param_2,puVar9);
    _objc_release(puVar9);
    func_0x00010c1ea920(puVar5,param_2,iVar12);
    func_0x00010c171580(puVar3,param_2,puVar4);
    func_0x00010c196600(puVar2,param_2,puVar3);
    func_0x00010c1b5d40(puVar1,param_2,puVar2);
    puVar9 = puVar1;
    func_0x00010c0cc0c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1715c0();
    _objc_release(puVar9);
    _objc_retain(puVar1);
    _objc_release(puVar13);
    puVar13 = puVar1;
  }
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 108e07ed8; end: 108e0819b;  */

void FUN_108e07ed8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126b0cc0;
  _objc_opt_new(PTR_PTR_1126b0cc0);
  puVar2 = PTR_PTR_1126b0cb8;
  _objc_opt_new(PTR_PTR_1126b0cb8);
  puVar3 = PTR_PTR_1126b37c0;
  _objc_opt_new(PTR_PTR_1126b37c0);
  puVar4 = PTR_PTR_1126babb0;
  _objc_opt_new(PTR_PTR_1126babb0);
  puVar5 = PTR_PTR_1126b0ce8;
  _objc_alloc_init(PTR_PTR_1126b0ce8);
  puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar6 = param_1;
  func_0x00010bfebc60();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c2540c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  _objc_release(uVar6);
  puVar9 = PTR__OBJC_CLASS___NSData_1126ae778;
  func_0x00010bf649c0(PTR__OBJC_CLASS___NSData_1126ae778);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0(puVar2);
  _objc_release(puVar9);
  puVar9 = PTR_PTR_1126dbfc0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_108e0819c;
  uStack_70 = 0x108e081ac;
  uStack_68 = 0;
  _objc_retain(param_1);
  func_0x00010c2554c0(puVar9);
  func_0x00010c182a60(puVar5);
  func_0x00010c214440(puVar5);
  uVar6 = param_1;
  func_0x00010bfebc60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c2540c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cafa0(puVar4);
  _objc_release(uVar7);
  _objc_release(uVar6);
  uVar6 = param_1;
  func_0x00010bfebc60(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf034a0();
  func_0x00010c1af280(puVar4);
  _objc_release(uVar6);
  func_0x00010c1c4360(puVar4);
  func_0x00010c2056e0(puVar3);
  func_0x00010c196600(puVar2);
  func_0x00010c1b5d40(puVar1);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108e0819c; end: 108e081b3;  */

void FUN_108e0819c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108e081b4; end: 108e082a3;  */

void FUN_108e081b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  func_0x00010bf44780(PTR__OBJC_CLASS___NSURLComponents_1126ae5c8,param_2,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfebc60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c2540c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010c25ce00(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined **)(lVar6 + 0x28) = puVar2;
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108e082a4; end: 108e0835f;  */

void FUN_108e082a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR_PTR_1126b5938;
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bfebc60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2540c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfbab60(puVar3,param_2,uVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_1;
  if (puVar3 == (undefined *)0x0) {
    FUN_108e07ed8(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    FUN_108e07ba4();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e08360; end: 108e0863b;  */

void FUN_108e08360(undefined *param_1,ulong param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_1 == (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    goto LAB_108e08610;
  }
  puVar2 = PTR_PTR_1126b0cc0;
  _objc_opt_new(PTR_PTR_1126b0cc0);
  puVar9 = param_1;
  func_0x00010c2544c0();
  iVar1 = (int)puVar9;
  if (iVar1 < 2) {
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        puVar9 = param_1;
        func_0x00010bfebc60();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar9;
        func_0x00010c2551e0();
        _objc_release(puVar9);
        puVar5 = param_1;
        if ((int)puVar6 == 0) {
          FUN_108e07ed8();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar9 = param_1;
          func_0x00010bfebc60();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar9;
          func_0x00010c2551e0();
          _objc_release(puVar9);
          if ((int)puVar6 == 1) {
            FUN_108e07ba4();
            _objc_retainAutoreleasedReturnValue();
          }
          else {
            puVar9 = param_1;
            func_0x00010bfebc60();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar9;
            func_0x00010c2551e0();
            _objc_release(puVar9);
            if ((int)puVar6 != 2) goto LAB_108e085fc;
            FUN_108e082a4(param_1);
            _objc_retainAutoreleasedReturnValue();
          }
        }
        goto LAB_108e085f4;
      }
      goto LAB_108e085fc;
    }
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126b0cb8;
    if (iVar1 == 2) {
      _objc_opt_new(PTR_PTR_1126b0cb8);
      puVar5 = PTR_PTR_1126b37c0;
      _objc_opt_new(PTR_PTR_1126b37c0);
      puVar6 = PTR_PTR_1126ba828;
      _objc_opt_new(PTR_PTR_1126ba828);
      func_0x00010c188860(puVar5);
      uVar7 = param_2;
      FUN_109161ad0();
      uVar8 = param_2;
      if ((uVar7 & 1) == 0) {
        _objc_retain(param_2);
      }
      else {
        FUN_109161b18(param_2);
        _objc_retainAutoreleasedReturnValue();
      }
      uVar7 = uVar8;
      FUN_109161630(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a99c0(puVar9);
      _objc_release(uVar7);
      func_0x00010c196600(puVar9);
      func_0x00010c1b5d40(puVar2);
      _objc_release(uVar8);
    }
    else {
      if (iVar1 != 3) goto LAB_108e085fc;
      _objc_opt_new(PTR_PTR_1126b0cb8);
      puVar5 = PTR_PTR_1126b37c0;
      _objc_opt_new(PTR_PTR_1126b37c0);
      puVar6 = PTR_PTR_1126ba850;
      _objc_opt_new(PTR_PTR_1126ba850);
      puVar3 = param_1;
      func_0x00010bf8e2c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      FUN_109163c84();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f40(puVar6);
      _objc_release(puVar4);
      _objc_release(puVar3);
      func_0x00010c194460(puVar5);
      func_0x00010c196600(puVar9);
      func_0x00010c1b5d40(puVar2);
    }
    _objc_release(puVar6);
    _objc_release(puVar5);
    puVar5 = puVar2;
    puVar2 = puVar9;
LAB_108e085f4:
    _objc_release(puVar2);
    puVar2 = puVar5;
LAB_108e085fc:
    _objc_retain(puVar2);
    puVar9 = puVar2;
  }
  _objc_release(puVar2);
LAB_108e08610:
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 108e0863c; end: 108e08783; -[SCUserSession dynamicCaptionFetcher] */

void FUN_108e0863c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x000107c3121c();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126dbfc8);
  lVar2 = lVar1;
  func_0x00010beecc40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bfe63a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar4 = lVar3;
  func_0x000107c318f8(lVar3,PTR_DAT_1126a5b30);
  lVar1 = lVar3;
  if ((int)lVar4 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(lVar3);
  lVar3 = lVar1;
  func_0x00010bf2ff00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar3 == 0) {
    _NSStringFromSelector(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e0000(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
  else {
    _objc_retain(lVar3);
    param_1 = lVar3;
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 108e08784; end: 108e0878b;  */

void FUN_108e08784(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2fe50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_captionDataProvider_1125a9938);
  return;
}



/* Entry: 108e0878c; end: 108e0883b;  */

void FUN_108e0878c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_110ac5f10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126dbfd8;
  _objc_alloc(PTR_PTR_1126dbfd8);
  func_0x00010c018300();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108e0883c; end: 108e089a7; -[SCCaptionDataProviderAggregatorImpl initWithRemoteDataSource:initWithLocalDataSource:captionFetcher:grapheneLogger:] */

undefined1 *
FUN_108e0883c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126fea08;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_6;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    func_0x00010c1062c0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = uVar2;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + 0x30) = 0;
    *(undefined8 *)((long)puVar1 + 0x38) = 0;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108e089a8; end: 108e08b1f; -[SCCaptionDataProviderAggregatorImpl _initializeDataSourceObserving] */

void FUN_108e089a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf30540();
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108e08b20;
  puStack_68 = &UNK_110842c58;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar2 = uVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf30540();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_58);
  uVar2 = uVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 108e08b20; end: 108e08baf;  */

void FUN_108e08b20(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be01660();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108e08bb0; end: 108e08c1b; -[SCCaptionDataProviderAggregatorImpl captionStyleForIndex:] */

void FUN_108e08bb0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010bdc9d00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  uVar2 = 0;
  if ((-1 < (long)param_3) && (param_3 < uVar1)) {
    uVar2 = param_1;
    func_0x00010c0dfd20(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108e08c1c; end: 108e08c1f; -[SCCaptionDataProviderAggregatorImpl loadCaptionStyles] */

void FUN_108e08c1c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be3b3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__initializeDataSourceObserving_11256c688);
  return;
}



/* Entry: 108e08c20; end: 108e08c47; -[SCCaptionDataProviderAggregatorImpl captionFetcher] */

void FUN_108e08c20(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e08c48; end: 108e08c83; -[SCCaptionDataProviderAggregatorImpl totalNumberOfStyles] */

undefined8 FUN_108e08c48(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdc9d00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf529e0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 108e08c84; end: 108e08df3; -[SCCaptionDataProviderAggregatorImpl findAvailableCaptionStyleByStyleId:] */

undefined1 * FUN_108e08c84(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010bdc9d00();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar10 = *plStack_120;
    do {
      lVar11 = 0;
      do {
        if (*plStack_120 != lVar10) {
          _objc_enumerationMutation(param_1);
        }
        puVar9 = *(undefined1 **)(lStack_128 + lVar11 * 8);
        puVar8 = puVar9;
        func_0x00010c113040();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar8;
        func_0x00010c25e080();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        puVar7 = (undefined8 *)param_3;
        func_0x00010c0720c0();
        _objc_release(puVar2);
        _objc_release(puVar8);
        if (((ulong)puVar3 & 1) != 0) {
          _objc_retain(puVar9);
          goto LAB_108e08da4;
        }
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      lVar1 = param_1;
      puVar7 = &uStack_130;
      func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar1 != 0);
  }
  puVar9 = (undefined1 *)0x0;
LAB_108e08da4:
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return puVar9;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  func_0x00010bdc9d00();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_3;
  func_0x00010bf529e0();
  if (puVar8 != (undefined1 *)0x0) {
    puVar8 = (undefined1 *)0x0;
    do {
      puVar2 = param_3;
      func_0x00010c0dfd40(param_3,param_2,puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010c113040();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar3;
      func_0x00010c25e080();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = (undefined1 *)puVar7;
      func_0x00010c113040(puVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c25e080();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar9;
      func_0x00010c0720c0(puVar9,param_2,puVar5);
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar9);
      _objc_release(puVar3);
      _objc_release(puVar2);
      if ((int)puVar6 != 0) goto LAB_108e08ef0;
      puVar8 = puVar8 + 1;
      puVar2 = param_3;
      func_0x00010bf529e0();
    } while (puVar8 < puVar2);
  }
  puVar8 = (undefined1 *)0x7fffffffffffffff;
LAB_108e08ef0:
  _objc_release(param_3);
  _objc_release(puVar7);
  return puVar8;
}



/* Entry: 108e08df4; end: 108e08f1f; -[SCCaptionDataProviderAggregatorImpl indexOfCaptionStyle:] */

ulong FUN_108e08df4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  func_0x00010bdc9d00();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010bf529e0();
  if (uVar7 != 0) {
    uVar7 = 0;
    do {
      uVar1 = param_1;
      func_0x00010c0dfd40(param_1,param_2,uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c113040();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c25e080();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010c113040(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c25e080();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010c0720c0(uVar3,param_2,uVar5);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((int)uVar6 != 0) goto LAB_108e08ef0;
      uVar7 = uVar7 + 1;
      uVar1 = param_1;
      func_0x00010bf529e0();
    } while (uVar7 < uVar1);
  }
  uVar7 = 0x7fffffffffffffff;
LAB_108e08ef0:
  _objc_release(param_1);
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 108e08f20; end: 108e08f27; -[SCCaptionDataProviderAggregatorImpl updateRecentsWithCaptionStyle:] */

void FUN_108e08f20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c289190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_updateRecentsWithCaptionStyle__11267fe88);
  return;
}



/* Entry: 108e08f28; end: 108e08f63; -[SCCaptionDataProviderAggregatorImpl allStyles] */

void FUN_108e08f28(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdc9d00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf51e00();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e08f64; end: 108e08f9f; -[SCCaptionDataProviderAggregatorImpl allStylesWithoutRecents] */

void FUN_108e08f64(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdc9d20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf51e00();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108e08fa0; end: 108e090af; -[SCCaptionDataProviderAggregatorImpl _didUpdateFromRemote:] */

void FUN_108e08fa0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  func_0x00010bf529e0(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a2760();
  _objc_release(uVar1);
  if (param_3 != 0) {
    func_0x00010bf529e0(param_3);
  }
  func_0x00010bea6bc0(param_1,param_2,param_3);
  lVar2 = param_1;
  func_0x00010be4f260(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed5120(param_1,param_2,lVar2,param_3);
  _objc_release(lVar2);
  func_0x00010bed2fa0(param_1,param_2,param_3);
  lVar2 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar2);
  lVar3 = param_1;
  func_0x00010bf00b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf51e00();
  func_0x00010bf2fe60(lVar2,param_2,param_1,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e090b0; end: 108e0917f; -[SCCaptionDataProviderAggregatorImpl _didUpdateFromLocal:] */

void FUN_108e090b0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x00010bf529e0(param_3);
  }
  func_0x00010bea5640(param_1,param_2,param_3);
  lVar1 = param_1;
  func_0x00010be8b160(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed5120(param_1,param_2,param_3,lVar1);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar1);
  lVar2 = param_1;
  func_0x00010bf00b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf51e00();
  func_0x00010bf2fe60(lVar1,param_2,param_1,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e09180; end: 108e0939f; -[SCCaptionDataProviderAggregatorImpl _updateChangeInCaptionStylesWithLocalCaptionStyles:remoteCaptionStyles:] */

void FUN_108e09180(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_3e0;
  long lStack_3d8;
  long *plStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  long lStack_398;
  long *plStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined1 auStack_358 [128];
  undefined1 auStack_2d8 [128];
  long lStack_258;
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
  undefined1 auStack_168 [128];
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  _objc_opt_new();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_3);
  lVar8 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_1b0,auStack_e8,0x10);
  if (lVar8 != 0) {
    lVar9 = *plStack_1a0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_1a0 != lVar9) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010bdc8760(param_1,param_2,*(undefined8 *)(lStack_1a8 + lVar11 * 8),puVar2,puVar1);
        lVar11 = lVar11 + 1;
      } while (lVar8 != lVar11);
      lVar8 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_1b0,auStack_e8,0x10);
    } while (lVar8 != 0);
  }
  _objc_release(param_3);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  _objc_retain(param_4);
  lVar8 = param_4;
  func_0x00010bf52a60(param_4,param_2,&uStack_1f0,auStack_168,0x10);
  if (lVar8 != 0) {
    lVar9 = *plStack_1e0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_1e0 != lVar9) {
          _objc_enumerationMutation(param_4);
        }
        func_0x00010bdc8760(param_1,param_2,*(undefined8 *)(lStack_1e8 + lVar11 * 8),puVar2,puVar1);
        lVar11 = lVar11 + 1;
      } while (lVar8 != lVar11);
      lVar8 = param_4;
      func_0x00010bf52a60(param_4,param_2,&uStack_1f0,auStack_168,0x10);
    } while (lVar8 != 0);
  }
  _objc_release(param_4);
  puVar3 = puVar1;
  func_0x00010bf51e00();
  puVar5 = puVar3;
  func_0x00010bea1bc0(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  _objc_opt_new();
  lStack_398 = 0;
  uStack_3a0 = 0;
  uStack_388 = 0;
  plStack_390 = (long *)0x0;
  uStack_378 = 0;
  uStack_380 = 0;
  uStack_368 = 0;
  uStack_370 = 0;
  lVar9 = *(long *)(param_3 + 0x10);
  func_0x00010c1062c0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar9;
  func_0x00010bf52a60();
  if (lVar8 != 0) {
    lVar11 = *plStack_390;
    do {
      lVar12 = 0;
      do {
        if (*plStack_390 != lVar11) {
          _objc_enumerationMutation(lVar9);
        }
        func_0x00010bdc8760(param_3,param_2,*(undefined8 *)(lStack_398 + lVar12 * 8),puVar2,puVar1);
        lVar12 = lVar12 + 1;
      } while (lVar8 != lVar12);
      lVar8 = lVar9;
      func_0x00010bf52a60(lVar9,param_2,&uStack_3a0,auStack_2d8,0x10);
    } while (lVar8 != 0);
  }
  _objc_release(lVar9);
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  lStack_3d8 = 0;
  uStack_3e0 = 0;
  uStack_3c8 = 0;
  plStack_3d0 = (long *)0x0;
  _objc_retain(puVar5);
  puVar6 = auStack_358;
  uVar7 = 0x10;
  puVar3 = puVar5;
  func_0x00010bf52a60(puVar5,param_2,&uStack_3e0,puVar6,0x10);
  if (puVar3 != (undefined *)0x0) {
    lVar8 = *plStack_3d0;
    do {
      puVar10 = (undefined *)0x0;
      do {
        if (*plStack_3d0 != lVar8) {
          _objc_enumerationMutation(puVar5);
        }
        func_0x00010bdc8760(param_3,param_2,*(undefined8 *)(lStack_3d8 + (long)puVar10 * 8),puVar2,
                            puVar1);
        puVar10 = puVar10 + 1;
      } while (puVar3 != puVar10);
      puVar6 = auStack_358;
      uVar7 = 0x10;
      puVar3 = puVar5;
      func_0x00010bf52a60(puVar5,param_2,&uStack_3e0,puVar6,0x10);
    } while (puVar3 != (undefined *)0x0);
  }
  _objc_release(puVar5);
  puVar3 = puVar1;
  func_0x00010bf51e00();
  puVar10 = puVar3;
  func_0x00010bea1be0(param_3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar10);
  _objc_retain(puVar6);
  _objc_retain(uVar7);
  puVar1 = puVar10;
  func_0x00010c113040(puVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25e080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar4 = puVar6;
  func_0x00010bf4b900(puVar6,param_2,puVar2);
  if ((puVar10 != (undefined *)0x0) && (((ulong)puVar4 & 1) == 0)) {
    func_0x00010befa120(puVar6,param_2,puVar2);
    func_0x00010befa120(uVar7,param_2,puVar10);
  }
  _objc_release(puVar2);
  _objc_release(uVar7);
  _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar10);
  return;
}



/* Entry: 108e093a0; end: 108e095b3; -[SCCaptionDataProviderAggregatorImpl _updateAllStylesWithoutRecentsFromChangeInRemoteCaptionStyles:] */

void FUN_108e093a0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
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
  undefined1 auStack_168 [128];
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
  _objc_opt_new();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar3 = *(long *)(param_1 + 0x10);
  func_0x00010c1062c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar10 = *plStack_1a0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_1a0 != lVar10) {
          _objc_enumerationMutation(lVar3);
        }
        func_0x00010bdc8760(param_1,param_2,*(undefined8 *)(lStack_1a8 + lVar11 * 8),puVar2,puVar1);
        lVar11 = lVar11 + 1;
      } while (lVar4 != lVar11);
      lVar4 = lVar3;
      func_0x00010bf52a60(lVar3,param_2,&uStack_1b0,auStack_e8,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(lVar3);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  _objc_retain(param_3);
  puVar8 = auStack_168;
  uVar9 = 0x10;
  lVar4 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_1f0,puVar8,0x10);
  if (lVar4 != 0) {
    lVar3 = *plStack_1e0;
    do {
      lVar10 = 0;
      do {
        if (*plStack_1e0 != lVar3) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010bdc8760(param_1,param_2,*(undefined8 *)(lStack_1e8 + lVar10 * 8),puVar2,puVar1);
        lVar10 = lVar10 + 1;
      } while (lVar4 != lVar10);
      puVar8 = auStack_168;
      uVar9 = 0x10;
      lVar4 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_1f0,puVar8,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(param_3);
  puVar5 = puVar1;
  func_0x00010bf51e00();
  puVar7 = puVar5;
  func_0x00010bea1be0(param_1);
  _objc_release(puVar5);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  _objc_retain(uVar9);
  puVar1 = puVar7;
  func_0x00010c113040(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c25e080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar6 = puVar8;
  func_0x00010bf4b900(puVar8,param_2,puVar2);
  if ((puVar7 != (undefined *)0x0) && (((ulong)puVar6 & 1) == 0)) {
    func_0x00010befa120(puVar8,param_2,puVar2);
    func_0x00010befa120(uVar9,param_2,puVar7);
  }
  _objc_release(puVar2);
  _objc_release(uVar9);
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar7);
  return;
}



/* Entry: 108e095b4; end: 108e09673; -[SCCaptionDataProviderAggregatorImpl _addStyleIfPossibleWithStyle:styleIds:availableStyles:] */

void FUN_108e095b4(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c113040(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c25e080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar3 = param_4;
  func_0x00010bf4b900(param_4,param_2,lVar2);
  if ((param_3 != 0) && ((uVar3 & 1) == 0)) {
    func_0x00010befa120(param_4,param_2,lVar2);
    func_0x00010befa120(param_5,param_2,param_3);
  }
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108e09674; end: 108e096af; -[SCCaptionDataProviderAggregatorImpl _allCaptionStyles] */

void FUN_108e09674(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


