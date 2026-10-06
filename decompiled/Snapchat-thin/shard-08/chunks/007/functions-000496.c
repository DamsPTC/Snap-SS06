/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106550d90; end: 106550e5b; -[SCChatDisabledInputFooterView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106550d90(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11274a448;
  uVar3 = *(ulong *)(param_1 + lVar4);
  _objc_retain(uVar3);
  _objc_retain(param_3);
  if (uVar3 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar3);
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar3);
    }
    else {
      uVar1 = uVar3;
      func_0x00010c071ae0(uVar3,param_2,param_3);
      _objc_release(param_3);
      _objc_release(uVar3);
      if ((uVar1 & 1) != 0) goto LAB_106550e44;
    }
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(ulong *)(param_1 + lVar4) = param_3;
    _objc_release(uVar2);
    func_0x00010bea5080(param_1);
    func_0x00010c1cbe20(param_1);
  }
LAB_106550e44:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106550e5c; end: 106550eef; -[SCChatDisabledInputFooterView layoutSubviews] */

void FUN_106550e5c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f1ae8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_layoutSubviews_112600e60);
  puVar1 = PTR_PTR_1126b08d8;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010085b3c8(0x4036000000000000,0x3ff0000000000000,0,0xc000000000000000,puVar1,param_1,
                      puVar2);
  _objc_release(puVar2);
  return;
}



/* Entry: 106550ef0; end: 10655139f; -[SCChatDisabledInputFooterView _createLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106550ef0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  undefined **ppuStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_opt_new();
  lVar12 = (long)_DAT_11274a44c;
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  *(undefined **)(param_1 + lVar12) = puVar1;
  _objc_release(uVar10);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar12));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_1 + lVar12));
  _objc_release(puVar1);
  func_0x00010befbb60(param_1);
  puVar1 = PTR_PTR_1126aea58;
  _objc_opt_new();
  lVar11 = (long)_DAT_11274a450;
  uVar10 = *(undefined8 *)(param_1 + lVar11);
  *(undefined **)(param_1 + lVar11) = puVar1;
  _objc_release(uVar10);
  func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar11));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar11));
  _objc_release(puVar1);
  func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar11));
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar11));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar11));
  func_0x00010c165e00(*(undefined8 *)(param_1 + lVar11));
  func_0x00010bea5080(param_1);
  func_0x00010befbb60(param_1);
  puStack_108 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = *(long *)(param_1 + lVar12);
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  lStack_b8 = lVar2;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lStack_c0 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  lStack_c8 = lVar2;
  lStack_b0 = lVar2;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  uStack_d0 = uVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lStack_d8 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar12);
  uStack_e0 = uVar10;
  uStack_a8 = uVar10;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  uStack_e8 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lStack_f0 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_1 + lVar12);
  uStack_f8 = uVar4;
  uStack_a0 = uVar4;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uStack_100 = uVar10;
  func_0x00010bf49420(0x3fe0000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar11);
  uStack_110 = uVar10;
  uStack_98 = uVar10;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  uStack_120 = uVar4;
  func_0x00010c149040();
  _objc_retainAutoreleasedReturnValue();
  lStack_118 = lVar3;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + lVar11);
  uStack_130 = uVar4;
  uStack_90 = uVar4;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c08de00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar5;
  func_0x00010bf493c0(0x4033000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + lVar11);
  uStack_88 = uVar10;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c2793a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010bf493c0(0xc033000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar11);
  uStack_80 = uVar4;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar12);
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010bf493c0(0x4033000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar9;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puStack_108);
  _objc_release(puVar1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(uVar6);
  _objc_release(uVar10);
  _objc_release(lVar3);
  _objc_release(uVar5);
  _objc_release(uStack_130);
  _objc_release(lStack_128);
  _objc_release(lStack_118);
  _objc_release(uStack_120);
  _objc_release(uStack_110);
  _objc_release(uStack_100);
  _objc_release(uStack_f8);
  _objc_release(lStack_f0);
  _objc_release(uStack_e8);
  _objc_release(uStack_e0);
  _objc_release(lStack_d8);
  _objc_release(uStack_d0);
  _objc_release(lStack_c8);
  _objc_release(lStack_c0);
  lVar3 = lStack_b8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_1065513a0;
  puStack_178 = &uStack_180;
  uStack_180 = 0;
  uStack_170 = 0x3032000000;
  pcStack_168 = FUN_1065514a0;
  uStack_160 = 0x1065514b0;
  ppuStack_158 = &PTR____CFConstantStringClassReference_110daafd8;
  uStack_150 = uVar6;
  uStack_148 = uVar8;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010c0beb00(*(undefined8 *)(lVar3 + _DAT_11274a448));
  func_0x00010c212f20(*(undefined8 *)(lVar3 + _DAT_11274a450));
  __Block_object_dispose(&uStack_180,8);
  _objc_release(ppuStack_158);
  return;
}



/* Entry: 1065513a0; end: 10655149f; -[SCChatDisabledInputFooterView _setLabelString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065513a0(long param_1,undefined8 param_2)

{
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined **ppuStack_28;
  
  puStack_80 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1065514a0;
  uStack_30 = 0x1065514b0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110daafd8;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1065514b8;
  puStack_60 = &UNK_110847180;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1065514fc;
  puStack_88 = &UNK_110842b58;
  puStack_58 = puStack_80;
  puStack_48 = puStack_80;
  func_0x00010c0beb00(*(undefined8 *)(param_1 + _DAT_11274a448),param_2,&puStack_78,&puStack_a0);
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11274a450));
  __Block_object_dispose(&uStack_50,8);
  _objc_release(ppuStack_28);
  return;
}



/* Entry: 1065514a0; end: 1065514b7;  */

void FUN_1065514a0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1065514b8; end: 1065514fb;  */

void FUN_1065514b8(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_2 != 0) {
    lVar1 = param_1;
    FUN_10655d184();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(long *)(lVar3 + 0x28) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1065514fc; end: 106551587;  */

void FUN_1065514fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_2;
  _objc_retain(param_2);
  func_0x00010655d1b4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar3 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar2;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106551588; end: 1065515d7; -[SCChatDisabledInputFooterView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106551588(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274a448,0);
  _objc_storeStrong(param_1 + _DAT_11274a44c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274a450,0);
  return;
}



/* Entry: 1065515d8; end: 10655177f; -[SCChatTableContainerMaskView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1065515d8(double param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_x4;
  undefined *unaff_x23;
  undefined *unaff_x24;
  long lVar11;
  undefined8 *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 *puStack_130;
  undefined8 *puStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  undefined8 *puStack_108;
  undefined *puStack_100;
  undefined **ppuStack_f8;
  undefined8 *puStack_f0;
  undefined *puStack_e8;
  undefined **ppuStack_e0;
  long lStack_d8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_80 = PTR_PTR_1126f1af0;
  puVar1 = &uStack_88;
  uStack_88 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_78 = puVar3;
    func_0x00010bf41680(0,0x3ff0000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_70 = puVar3;
    func_0x00010bf41680(0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    param_1 = 0.0;
    unaff_x23 = PTR__OBJC_CLASS___UIColor_1126aea70;
    puStack_68 = puVar3;
    func_0x00010bf41680(0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = unaff_x23;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    unaff_x24 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_60 = puVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bfcd9c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17eb60();
    _objc_release(puVar6);
    _objc_release(unaff_x24);
    _objc_release(unaff_x23);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar2);
  }
  puVar6 = puVar1;
  func_0x00010c21e900();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_106551780;
  lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_100 = PTR_PTR_1126f1af0;
  puStack_108 = puVar6;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_108,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(puVar6);
  _CGRectGetHeight();
  ppuStack_f8 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c63a0;
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720((param_1 + -40.0 + -23.0) / param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_f0 = puVar1;
  func_0x00010c0df720((param_1 + -23.0) / param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_e0 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c63b8;
  uVar10 = 4;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_e8 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcd9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c1bff00();
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  puVar7 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_d8) {
    return puVar7;
  }
  ___stack_chk_fail();
  ppuVar8 = &puStack_160;
  pcStack_118 = FUN_1065518d0;
  puStack_150 = unaff_x24;
  puStack_148 = unaff_x23;
  puStack_140 = puVar3;
  puStack_138 = puVar2;
  puStack_130 = puVar1;
  puStack_128 = puVar6;
  ppuStack_120 = &puStack_a0;
  _objc_retain(puVar4);
  _objc_retain(uVar10);
  _objc_retain(in_x4);
  puStack_158 = PTR_PTR_1126f1af8;
  puStack_160 = puVar7;
  _objc_msgSendSuper2(&puStack_160,PTR_s_init_1125d9248);
  if (ppuVar8 != (undefined8 **)0x0) {
    lVar11 = (long)_DAT_11274a454;
    _objc_retain(puVar4);
    uVar9 = *(undefined8 *)((long)ppuVar8 + lVar11);
    *(undefined **)((long)ppuVar8 + lVar11) = puVar4;
    _objc_release(uVar9);
    _objc_storeWeak((undefined1 *)((long)ppuVar8 + (long)_DAT_11274a458),uVar10);
    lVar11 = (long)_DAT_11274a45c;
    _objc_retain(in_x4);
    uVar9 = *(undefined8 *)((long)ppuVar8 + lVar11);
    *(undefined8 *)((long)ppuVar8 + lVar11) = in_x4;
    _objc_release(uVar9);
    func_0x00010c17d4c0(ppuVar8);
    func_0x00010befbb60(ppuVar8);
  }
  _objc_release(in_x4);
  _objc_release(uVar10);
  _objc_release(puVar4);
  return ppuVar8;
}



/* Entry: 106551780; end: 1065518cf; -[SCChatTableContainerMaskView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_106551780(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 in_x4;
  long lVar8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined **ppuStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_70 = PTR_PTR_1126f1af0;
  uStack_78 = param_2;
  _objc_msgSendSuper2(&uStack_78,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  ppuStack_68 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c63a0;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df720((param_1 + -40.0 + -23.0) / param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puStack_60 = puVar1;
  func_0x00010c0df720((param_1 + -23.0) / param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuStack_50 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c63b8;
  uVar7 = 4;
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_58 = puVar2;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcd9c0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c1bff00();
  _objc_release(param_2);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  ppuVar4 = &puStack_d0;
  _objc_retain(puVar6);
  _objc_retain(uVar7);
  _objc_retain(in_x4);
  puStack_c8 = PTR_PTR_1126f1af8;
  puStack_d0 = puVar1;
  _objc_msgSendSuper2(&puStack_d0,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined **)0x0) {
    lVar8 = (long)_DAT_11274a454;
    _objc_retain(puVar6);
    uVar5 = *(undefined8 *)((long)ppuVar4 + lVar8);
    *(undefined **)((long)ppuVar4 + lVar8) = puVar6;
    _objc_release(uVar5);
    _objc_storeWeak((undefined1 *)((long)ppuVar4 + (long)_DAT_11274a458),uVar7);
    lVar8 = (long)_DAT_11274a45c;
    _objc_retain(in_x4);
    uVar5 = *(undefined8 *)((long)ppuVar4 + lVar8);
    *(undefined8 *)((long)ppuVar4 + lVar8) = in_x4;
    _objc_release(uVar5);
    func_0x00010c17d4c0(ppuVar4);
    func_0x00010befbb60(ppuVar4);
  }
  _objc_release(in_x4);
  _objc_release(uVar7);
  _objc_release(puVar6);
  return (undefined *)ppuVar4;
}



/* Entry: 1065518d0; end: 1065519c7; -[SCChatTableContainerViewV3 initWithTableView:newChatsAffordanceDelegate:messagingExperimentService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1065518d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f1af8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11274a454;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11274a458),param_4);
    lVar3 = (long)_DAT_11274a45c;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    func_0x00010c17d4c0(puVar1);
    func_0x00010befbb60(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1065519c8; end: 106551b5f; -[SCChatTableContainerViewV3 layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065519c8(double param_1,undefined8 param_2,double param_3,undefined8 param_4,ulong param_5
                  )

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  ulong uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f1af8;
  uStack_60 = param_5;
  _objc_msgSendSuper2(&uStack_60,PTR_s_layoutSubviews_112600e60);
  uVar2 = param_5;
  func_0x00010c0bc260();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126cb768;
  _objc_opt_class(PTR_PTR_1126cb768);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  _objc_release(uVar2);
  if ((uVar4 & 1) != 0) {
    func_0x00010bf20c00(param_5);
    uVar2 = param_5;
    func_0x00010c0bc260(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
    _objc_release(uVar2);
  }
  lVar5 = (long)_DAT_11274a460;
  iVar1 = (int)*(undefined8 *)(param_5 + lVar5);
  func_0x00010c083820();
  if (iVar1 != 0) {
    func_0x00010bf20c00(param_5);
    func_0x00010c2a5040(*(undefined8 *)(param_5 + lVar5));
    param_3 = param_3 - param_1;
    dVar8 = param_3 * 0.5;
    lVar6 = (long)_DAT_11274a454;
    func_0x00010befda00(*(undefined8 *)(param_5 + lVar6));
    iVar1 = (int)*(undefined8 *)(param_5 + lVar5);
    dVar9 = param_3;
    func_0x00010bf49300();
    if (iVar1 == 0) {
      dVar9 = 10.0;
      param_3 = param_3 + 10.0;
    }
    else {
      func_0x00010bf20c00(param_5);
      _CGRectGetMaxY();
      dVar7 = dVar9;
      func_0x00010bfe0640(*(undefined8 *)(param_5 + lVar5));
      dVar9 = dVar9 - dVar7;
      func_0x00010c0cd580(*(undefined8 *)(param_5 + lVar6));
      dVar9 = dVar9 - dVar7;
      param_3 = dVar9 + -10.0;
    }
    func_0x00010c2a5040(*(undefined8 *)(param_5 + lVar5));
    dVar7 = dVar9;
    func_0x00010bfe0640(*(undefined8 *)(param_5 + lVar5));
    func_0x00010c19f0e0(dVar8,param_3,dVar9,dVar7,*(undefined8 *)(param_5 + lVar5));
  }
  return;
}



/* Entry: 106551b60; end: 106551c17; -[SCChatTableContainerViewV3 newChatsAffordanceView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106551b60(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11274a460;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126cb770;
    _objc_alloc();
    lVar3 = param_1 + _DAT_11274a458;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c00aa40(puVar1,param_2,lVar3,*(undefined8 *)(param_1 + _DAT_11274a45c));
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    _objc_release(lVar3);
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar4));
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
  return lVar3;
}



/* Entry: 106551c18; end: 106551cdf; -[SCChatTableContainerViewV3 showChatAffordanceOnTopIfNecessary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106551c18(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11274a460;
  uVar2 = *(ulong *)(param_1 + lVar3);
  func_0x00010c083820();
  if ((uVar2 & 1) != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
    func_0x00010bf49300();
    if (iVar1 != 0) {
      func_0x00010bfe1be0(param_1);
    }
    return;
  }
  lVar3 = param_1;
  func_0x00010c0d86a0(param_1);
  func_0x00010c286d40();
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010be0df50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fadeInNewChatsAffordance_112561170);
  return;
}



/* Entry: 106551ce0; end: 106551d17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106551ce0(long param_1,undefined8 param_2)

{
  func_0x00010c286d40(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274a460),param_2,
                      *(undefined1 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010be0df50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fadeInNewChatsAffordance_112561170);
  return;
}



/* Entry: 106551d18; end: 106551ddf; -[SCChatTableContainerViewV3 showChatAffordanceOnBottomIfNecessary:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106551d18(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11274a460;
  uVar2 = *(ulong *)(param_1 + lVar3);
  func_0x00010c083820();
  if ((uVar2 & 1) != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
    func_0x00010bf49320();
    if (iVar1 != 0) {
      func_0x00010bfe1be0(param_1);
    }
    return;
  }
  lVar3 = param_1;
  func_0x00010c0d86a0(param_1);
  func_0x00010c286d00();
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010be0df50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fadeInNewChatsAffordance_112561170);
  return;
}



/* Entry: 106551de0; end: 106551e17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106551de0(long param_1,undefined8 param_2)

{
  func_0x00010c286d00(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274a460),param_2,
                      *(undefined1 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010be0df50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fadeInNewChatsAffordance_112561170);
  return;
}



/* Entry: 106551e18; end: 106551ecf; -[SCChatTableContainerViewV3 _fadeInNewChatsAffordance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106551e18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  func_0x00010c1cbe20();
  lVar2 = (long)_DAT_11274a460;
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar2),param_2,1);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106551ed0;
  puStack_30 = &UNK_110842e18;
  lStack_28 = param_1;
  func_0x00010bf03460(0x3ff0000000000000,0,0x3fecccccc0000000,0,PTR__OBJC_CLASS___UIView_1126aec20,
                      param_2,6,&puStack_48,0);
  return;
}



/* Entry: 106551ed0; end: 106551ee7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106551ed0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274a460),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 106551ee8; end: 106551f33; -[SCChatTableContainerViewV3 hideChatAffordanceIfNecessaryAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106551ee8(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11274a460);
  func_0x00010c083820();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfe1bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_hideChatAffordanceAnimated_compl_1125d60b8,param_3,0);
    return;
  }
  return;
}



/* Entry: 106551f34; end: 10655206f; -[SCChatTableContainerViewV3 hideChatAffordanceAnimated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106551f34(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_4);
  lVar3 = (long)_DAT_11274a460;
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar3),param_2,0);
  func_0x00010c286d20(*(undefined8 *)(param_1 + lVar3));
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  if ((param_3 & 1) == 0) {
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar3));
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106552070;
    puStack_50 = &UNK_110842e18;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    uStack_80 = 0x106552088;
    puStack_78 = &UNK_110842508;
    lStack_48 = param_1;
    _objc_retain(param_4);
    lStack_70 = param_4;
    func_0x00010bf03460(0x3ff0000000000000,0,0x3fecccccc0000000,0,puVar1,param_2,4,&puStack_68,
                        &puStack_90);
    _objc_release(lStack_70);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 106552070; end: 10655209f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106552070(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11274a460),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1065520a0; end: 10655212f; -[SCChatTableContainerViewV3 setMaskViewVisible:] */

/* WARNING: Possible PIC construction at 0x00010655211c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106552120) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */

void FUN_1065520a0(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    lVar1 = param_1;
    func_0x00010c0bc260();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      return;
    }
    puVar2 = PTR_PTR_1126cb768;
    _objc_alloc(PTR_PTR_1126cb768);
    func_0x00010bf20c00(param_1);
    func_0x00010c013de0(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1c2cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setMaskView__11264e550,puVar2);
  return;
}



/* Entry: 106552130; end: 10655218b; -[SCChatTableContainerViewV3 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106552130(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274a45c,0);
  _objc_storeStrong(param_1 + _DAT_11274a454,0);
  _objc_destroyWeak(param_1 + _DAT_11274a458);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274a460,0);
  return;
}



/* Entry: 10655218c; end: 10655283f; -[SCChatTableViewV3Delegate initWithScrollDelegate:withParentVC:savableCellDelegate:reactableCellDelegate:replayCellDelegate:chatInputContext:chatActionHandler:circumstanceEngine:userSession:pluginManager:polaroidTooltipManager:valdiRuntimeProvider:composerAnimatedImageViewFactory:grapheneRegistry:quotedMessageSubject:snapCountDownManager:legacyChatTooltipsService:chatLogger:loadMessageLogger:internalActionHandler:conversationDataFetcher:chatMediaFetchingServices:messagingExperimentService:chatAttachmentHandlerScopeExposer:postSnapProvider:onDemandResourceDownloader:mapExternalUrlServices:] */

undefined8 *
FUN_10655218c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined4 param_23,undefined4 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  puStack_70 = PTR_PTR_1126f1b00;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 0x2a) = 0;
    _objc_storeWeak(puVar1 + 2,param_3);
    _objc_storeWeak(puVar1 + 3,param_4);
    _objc_storeWeak(puVar1 + 4,param_5);
    _objc_storeWeak(puVar1 + 5,param_6);
    _objc_storeWeak(puVar1 + 6,param_7);
    _objc_storeWeak(puVar1 + 7,param_8);
    *(undefined1 *)(puVar1 + 9) = 0;
    puVar2 = PTR_PTR_1126cb778;
    _objc_alloc();
    func_0x00010bff0120();
    uVar4 = puVar1[10];
    puVar1[10] = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_9);
    uVar4 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar4);
    _objc_retain(param_13);
    uVar4 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar4);
    _objc_retain(param_11);
    uVar4 = puVar1[0xd];
    puVar1[0xd] = param_11;
    _objc_release(uVar4);
    _objc_retain(param_12);
    uVar4 = puVar1[0xe];
    puVar1[0xe] = param_12;
    _objc_release(uVar4);
    _objc_retain(param_30);
    uVar4 = puVar1[0x1c];
    puVar1[0x1c] = param_30;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar4 = puVar1[0xf];
    puVar1[0xf] = puVar2;
    _objc_release(uVar4);
    _objc_retain(param_10);
    uVar4 = puVar1[0x11];
    puVar1[0x11] = param_10;
    _objc_release(uVar4);
    _objc_retain(param_14);
    uVar4 = puVar1[0x12];
    puVar1[0x12] = param_14;
    _objc_release(uVar4);
    _objc_retain(param_15);
    uVar4 = puVar1[0x13];
    puVar1[0x13] = param_15;
    _objc_release(uVar4);
    _objc_retain(param_20);
    uVar4 = puVar1[0x1a];
    puVar1[0x1a] = param_20;
    _objc_release(uVar4);
    _objc_retain(param_21);
    uVar4 = puVar1[0x1b];
    puVar1[0x1b] = param_21;
    _objc_release(uVar4);
    _objc_retain(param_16);
    uVar4 = puVar1[0x14];
    puVar1[0x14] = param_16;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc();
    puVar3 = puVar1 + 3;
    _objc_loadWeakRetained(puVar3);
    func_0x00010c038f40();
    uVar4 = puVar1[0x15];
    puVar1[0x15] = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126b3530;
    _objc_alloc();
    puVar3 = puVar1 + 3;
    _objc_loadWeakRetained(puVar3);
    func_0x00010c038f40();
    uVar4 = puVar1[0x16];
    puVar1[0x16] = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_retain(param_17);
    uVar4 = puVar1[0x17];
    puVar1[0x17] = param_17;
    _objc_release(uVar4);
    _objc_retain(param_18);
    uVar4 = puVar1[0x18];
    puVar1[0x18] = param_18;
    _objc_release(uVar4);
    _objc_retain(param_19);
    uVar4 = puVar1[0x19];
    puVar1[0x19] = param_19;
    _objc_release(uVar4);
    _objc_retain(param_22);
    uVar4 = puVar1[0x1d];
    puVar1[0x1d] = param_22;
    _objc_release(uVar4);
    _objc_retain(param_25);
    uVar4 = puVar1[0x1f];
    puVar1[0x1f] = param_25;
    _objc_release(uVar4);
    _objc_retain(param_26);
    uVar4 = puVar1[0x20];
    puVar1[0x20] = param_26;
    _objc_release(uVar4);
    _objc_retain(param_27);
    uVar4 = puVar1[0x1e];
    puVar1[0x1e] = param_27;
    _objc_release(uVar4);
    _objc_retain(param_28);
    uVar4 = puVar1[0x21];
    puVar1[0x21] = param_28;
    _objc_release(uVar4);
    _objc_retain(param_29);
    uVar4 = puVar1[0x22];
    puVar1[0x22] = param_29;
    _objc_release(uVar4);
    uVar4 = puVar1[0x23];
    puVar1[0x23] = 0;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar4 = puVar1[0x28];
    puVar1[0x28] = puVar2;
    _objc_release(uVar4);
    uVar4 = param_26;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x24];
    puVar1[0x24] = uVar4;
    _objc_release(uVar5);
    uVar4 = param_26;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x25];
    puVar1[0x25] = uVar4;
    _objc_release(uVar5);
    uVar4 = param_26;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[0x26];
    puVar1[0x26] = uVar4;
    _objc_release(uVar5);
  }
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106552840; end: 1065529e3;  */

void FUN_106552840(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0cbf60(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067f00();
  func_0x00010c0df760(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1065529e4; end: 106552a23; -[SCChatTableViewV3Delegate tableView:numberOfRowsInSection:] */

undefined8 FUN_1065529e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0cbaa0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf529e0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 106552a24; end: 10655321f; -[SCChatTableViewV3Delegate tableView:cellForRowAtIndexPath:] */

void FUN_106552a24(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar4 = *(ulong *)(param_2 + 8);
  func_0x00010c29d580();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126cb510;
  _objc_opt_class(PTR_PTR_1126cb510);
  uVar16 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  if ((uVar16 & 1) == 0) {
    puVar5 = PTR_PTR_1126c6d00;
    _objc_opt_class(PTR_PTR_1126c6d00);
    uVar16 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    if ((uVar16 & 1) == 0) {
      uVar16 = 0;
      goto LAB_106553100;
    }
  }
  puVar5 = PTR_PTR_1126cb510;
  _objc_retain(uVar4);
  _objc_opt_class(puVar5);
  uVar16 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar1 = uVar4;
  if ((uVar16 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126c6d00;
  _objc_retain(uVar4);
  _objc_opt_class(puVar5);
  uVar16 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar2 = uVar4;
  if ((uVar16 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar4);
  uVar3 = uVar2;
  if (uVar1 != 0) {
    uVar3 = uVar4;
  }
  uVar6 = uVar3;
  func_0x00010c13fd60();
  _objc_retainAutoreleasedReturnValue();
  uVar16 = param_4;
  func_0x00010bf6e060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  func_0x00010c0cb340(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4c660(param_2);
  _objc_release(uVar7);
  uVar7 = uVar4;
  func_0x00010c11edc0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar7;
  func_0x00010c11ec80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4c660(param_2);
  _objc_release(uVar9);
  _objc_release(uVar7);
  uVar7 = uVar4;
  func_0x00010bf19480(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4c660(param_2);
  _objc_release(uVar7);
  uVar7 = uVar4;
  func_0x00010bf5d020(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4c660(param_2);
  _objc_release(uVar7);
  puVar5 = PTR_PTR_1126cb780;
  if (*(long *)(param_2 + 0x80) == 0) {
    puVar5 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar8 = *(undefined8 *)(param_2 + 0x80);
    *(undefined **)(param_2 + 0x80) = puVar5;
    _objc_release(uVar8);
    puVar5 = PTR_PTR_1126cb780;
  }
  PTR_PTR_1126cb780 = puVar5;
  if (uVar16 == 0) {
    _objc_alloc(puVar5);
    lVar10 = param_2 + 0x18;
    _objc_loadWeakRetained(lVar10);
    func_0x00010c0400a0(puVar5,*(undefined8 *)(param_2 + 0xe0),uVar6,lVar10,
                        *(undefined8 *)(param_2 + 0x68),*(undefined8 *)(param_2 + 0x90),
                        *(undefined8 *)(param_2 + 0x88),*(undefined8 *)(param_2 + 0xb8),
                        *(undefined8 *)(param_2 + 0xc0),*(undefined8 *)(param_2 + 0x98),
                        *(undefined8 *)(param_2 + 0xd8),*(undefined8 *)(param_2 + 0xe8),
                        *(undefined8 *)(param_2 + 0xf8),*(undefined8 *)(param_2 + 0x100),
                        *(undefined8 *)(param_2 + 0x108),*(undefined8 *)(param_2 + 0x70),
                        *(undefined8 *)(param_2 + 0x110),*(undefined8 *)(param_2 + 0x40),
                        *(undefined8 *)(param_2 + 0x80),*(undefined8 *)(param_2 + 0xe0));
    _objc_release(lVar10);
    uVar15 = *(undefined8 *)(param_2 + 0x70);
    uVar17 = *(undefined8 *)(param_2 + 0xf0);
    uVar14 = *(undefined8 *)(param_2 + 0x88);
    uVar8 = *(undefined8 *)(param_2 + 0xa8);
    uVar11 = *(undefined8 *)(param_2 + 0xb0);
    uVar13 = *(undefined8 *)(param_2 + 0xa0);
    lVar10 = param_2 + 0x38;
    _objc_loadWeakRetained();
    uVar16 = uVar4;
    FUN_10651a3b4(uVar4,uVar15,puVar5,uVar17,uVar14,uVar11,uVar8,uVar13,lVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    _objc_release(puVar5);
  }
  puVar5 = PTR_DAT_1126a4e90;
  _objc_retain(uVar16);
  uVar7 = uVar16;
  func_0x00010010fab4(uVar16,puVar5);
  _objc_release(uVar16);
  puVar5 = PTR_DAT_1126a4e90;
  if (((int)uVar7 != 0) && (uVar16 != 0)) {
    _objc_retain(uVar16);
    uVar9 = uVar16;
    func_0x00010010fab4(uVar16,puVar5);
    uVar7 = uVar16;
    if ((int)uVar9 == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(uVar16);
    func_0x00010c161980(uVar7);
    _objc_release(uVar7);
  }
  puVar5 = PTR_PTR_1126cb4b0;
  _objc_retain(uVar16);
  _objc_opt_class(puVar5);
  uVar9 = uVar16;
  _objc_opt_isKindOfClass(uVar16,puVar5);
  uVar7 = uVar16;
  if ((uVar9 & 1) == 0) {
    uVar7 = 0;
  }
  _objc_retain(uVar7);
  _objc_release(uVar16);
  uVar9 = uVar7;
  _objc_opt_respondsToSelector(uVar7,PTR_s_quotedMessageDelegate_1125310a0);
  if ((uVar9 & 1) != 0) {
    lVar10 = param_2 + 0x18;
    _objc_loadWeakRetained(lVar10);
    func_0x00010c1e6ce0(uVar7);
    _objc_release(lVar10);
  }
  if (uVar7 != 0) {
    lVar10 = param_2 + 0x28;
    _objc_loadWeakRetained(lVar10);
    func_0x00010c1e7b20(uVar16);
    _objc_release(lVar10);
  }
  if (uVar2 == 0) {
LAB_106552d80:
    puVar5 = PTR_PTR_1126cb4d0;
    _objc_opt_class(PTR_PTR_1126cb4d0);
    uVar9 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar5);
    uVar12 = uVar7;
    if ((uVar9 & 1) != 0) goto LAB_106552ee8;
    puVar5 = PTR_PTR_1126cb568;
    _objc_opt_class(PTR_PTR_1126cb568);
    uVar9 = uVar1;
    _objc_opt_isKindOfClass(uVar1,puVar5);
    uVar12 = uVar16;
    if ((uVar9 & 1) != 0) goto LAB_106552ee8;
    puVar5 = PTR_PTR_1126cb4b8;
    _objc_opt_class(PTR_PTR_1126cb4b8);
    uVar9 = uVar16;
    _objc_opt_isKindOfClass(uVar16,puVar5);
    puVar5 = PTR_PTR_1126cb4b8;
    if ((uVar9 & 1) == 0) {
      puVar5 = PTR_PTR_1126cb4e0;
      _objc_opt_class(PTR_PTR_1126cb4e0);
      uVar9 = uVar16;
      _objc_opt_isKindOfClass(uVar16,puVar5);
      puVar5 = PTR_DAT_1126a5418;
      if ((uVar9 & 1) != 0) {
        _objc_retain(uVar1);
        uVar12 = uVar1;
        func_0x00010010fab4(uVar1,puVar5);
        uVar9 = uVar1;
        if ((int)uVar12 == 0) {
          uVar9 = 0;
        }
        _objc_retain(uVar9);
        _objc_release(uVar1);
        func_0x00010c2226c0(uVar16);
        goto LAB_106553214;
      }
    }
    else {
      _objc_retain(uVar16);
      _objc_opt_class(puVar5);
      _objc_opt_isKindOfClass(uVar16,puVar5);
      uVar9 = uVar16;
      if ((uVar12 & 1) == 0) {
        uVar9 = 0;
      }
      _objc_retain(uVar9);
      _objc_release(uVar16);
      func_0x00010c2226c0(uVar9);
      func_0x00010c18b5e0(uVar9);
LAB_106553214:
      _objc_release(uVar9);
    }
  }
  else {
    puVar5 = PTR_PTR_1126cb4a0;
    _objc_opt_class(PTR_PTR_1126cb4a0);
    uVar9 = uVar16;
    _objc_opt_isKindOfClass(uVar16,puVar5);
    uVar12 = uVar16;
    if ((uVar9 & 1) == 0) goto LAB_106552d80;
LAB_106552ee8:
    func_0x00010c2226c0(uVar12);
  }
  puVar5 = PTR_PTR_1126cb4a0;
  _objc_opt_class(PTR_PTR_1126cb4a0);
  uVar9 = uVar16;
  _objc_opt_isKindOfClass(uVar16,puVar5);
  if ((uVar9 & 1) != 0) {
    func_0x00010bf85440(uVar16);
  }
  puVar5 = PTR_PTR_1126cb6e8;
  _objc_opt_class(PTR_PTR_1126cb6e8);
  uVar9 = uVar16;
  _objc_opt_isKindOfClass(uVar16,puVar5);
  if ((uVar9 & 1) != 0) {
    _objc_retain(uVar16);
    lVar10 = param_2 + 0x20;
    _objc_loadWeakRetained(lVar10);
    func_0x00010c1f5700(uVar16);
    _objc_release(lVar10);
    uVar8 = param_5;
    func_0x00010c071ae0();
    if ((int)uVar8 != 0) {
      uVar8 = *(undefined8 *)(param_2 + 0x118);
      *(undefined8 *)(param_2 + 0x118) = 0;
      _objc_release(uVar8);
      func_0x00010bfe30a0(uVar16);
    }
    _objc_release(uVar16);
  }
  puVar5 = PTR_PTR_1126cb530;
  _objc_opt_class(PTR_PTR_1126cb530);
  uVar9 = uVar16;
  _objc_opt_isKindOfClass(uVar16,puVar5);
  if ((uVar9 & 1) != 0) {
    _objc_retain(uVar16);
    lVar10 = param_2 + 0x30;
    _objc_loadWeakRetained(lVar10);
    func_0x00010c1eade0(uVar16);
    _objc_release(uVar16);
    _objc_release(lVar10);
  }
  puVar5 = PTR_PTR_1126cb560;
  _objc_opt_class(PTR_PTR_1126cb560);
  uVar9 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar5);
  if ((uVar9 & 1) != 0) {
    uVar9 = *(ulong *)(param_2 + 0x60);
    func_0x00010c06f880();
    if ((uVar9 & 1) == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_2 + 0x60));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    _objc_retain(uVar1);
    lVar10 = *(long *)(param_2 + 0x60);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar10 != 0) {
      uVar9 = uVar1;
      func_0x00010c07d980();
      _objc_release(lVar10);
      if ((int)uVar9 != 0) {
        uVar11 = *(undefined8 *)(param_2 + 0x60);
        func_0x00010c269d40(uVar11);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bddc400(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = param_2;
        func_0x00010c0c45c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c26e640(uVar1);
        uVar8 = param_1;
        func_0x00010c26dd80(uVar1);
        func_0x00010befc4e0(param_1,uVar8,uVar11);
        _objc_release(lVar10);
        _objc_release(param_2);
        _objc_release(uVar11);
      }
    }
    _objc_release(uVar1);
  }
  func_0x00010bfe1300(uVar3);
  func_0x00010c1a7f60(uVar16);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar1);
LAB_106553100:
  _objc_release(uVar4);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar16);
  return;
}



/* Entry: 106553220; end: 1065533b7; -[SCChatTableViewV3Delegate _listenForLayoutChangesIfNecessary:tableView:atIndexPath:] */

void FUN_106553220(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR_DAT_1126a5470;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010010fab4(param_3,puVar2);
  lVar1 = param_3;
  if ((int)lVar3 == 0) {
    lVar1 = 0;
  }
  _objc_retain(lVar1);
  _objc_release(param_3);
  if (lVar1 != 0) {
    lVar3 = param_3;
    func_0x00010c13fda0();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_48,param_1);
    _objc_initWeak(auStack_50,param_4);
    _objc_copyWeak(auStack_60,auStack_48);
    _objc_retain(lVar3);
    _objc_copyWeak(auStack_58,auStack_50);
    func_0x00010c0e4c00(param_3);
    _objc_destroyWeak(auStack_58);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1065533b8; end: 106553413;  */

void FUN_1065533b8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee1ae0(lVar1,param_2,uVar2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106553414; end: 106553537; -[SCChatTableViewV3Delegate _updateTableForLayoutChange:tableView:] */

void FUN_106553414(double param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x120);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(uVar1);
    if ((long)param_1 < 1) {
      _objc_initWeak(auStack_48,param_2);
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_106553538;
      puStack_60 = &UNK_110841fb0;
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_5);
      lStack_58 = param_5;
      func_0x000100162d98("APPSTORE",&puStack_78);
      _objc_release(lStack_58);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    else {
      func_0x00010bec8680(param_2);
      func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x140));
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 106553538; end: 10655356b;  */

void FUN_106553538(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be72b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10655356c; end: 106553723; -[SCChatTableViewV3Delegate _subscribeToTableUpdates:] */

void FUN_10655356c(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_2 + 0x150);
  if (*(long *)(param_2 + 0x148) == 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x120);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf885a0();
    _objc_release(uVar1);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar1 = *(undefined8 *)(param_2 + 0x148);
    *(undefined **)(param_2 + 0x148) = puVar2;
    _objc_release(uVar1);
    puVar3 = auStack_58;
    _objc_initWeak(puVar3,param_2);
    uVar4 = *(undefined8 *)(param_2 + 0x140);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26d5a0(param_1 / 1000.0,uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_4);
    uVar1 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar1);
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _os_unfair_lock_unlock(param_2 + 0x150);
  _objc_release(param_4);
  return;
}



/* Entry: 106553724; end: 106553757;  */

void FUN_106553724(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be72b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106553758; end: 1065538b3; -[SCChatTableViewV3Delegate _performTableUpdateForLayoutChange:] */

void FUN_106553758(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cb498;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x128);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf1f3c0();
    _objc_release(uVar4);
    if ((int)uVar5 != 0) {
      uVar3 = param_3;
      func_0x00010bf363a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f9060();
      _objc_release(uVar3);
      goto LAB_106553874;
    }
  }
  _objc_initWeak(auStack_38,param_3);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f9680(puVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
LAB_106553874:
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1065538b4; end: 1065538fb;  */

void FUN_1065538b4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf18e80();
  _objc_release(lVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf95a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1065538fc; end: 106553933; -[SCChatTableViewV3Delegate _accessibilityIdentifierForIndex:] */

void FUN_1065538fc(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110e53c58);
  return;
}



/* Entry: 106553934; end: 106553a3b; -[SCChatTableViewV3Delegate tableView:didEndDisplayingCell:forRowAtIndexPath:] */

void FUN_106553934(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_4);
  func_0x00010bddc400(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c0c6ae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c139240();
  _objc_release(uVar2);
  _objc_release(param_1);
  puVar3 = PTR_PTR_1126cb530;
  _objc_retain(param_4);
  _objc_opt_class(puVar3);
  uVar4 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar3);
  uVar1 = param_4;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  func_0x00010c1396c0(uVar1);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126cb4a0;
  _objc_retain(param_4);
  _objc_opt_class(puVar3);
  uVar4 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar3);
  uVar1 = param_4;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_4);
  func_0x00010bf947a0(uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106553a3c; end: 106553b3b; -[SCChatTableViewV3Delegate didConversationViewModelChange:metricsTracker:] */

void FUN_106553a3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c0cbaa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar4 = lVar3;
  func_0x00010010fab4(lVar3,PTR_DAT_1126a5478);
  lVar2 = lVar3;
  if ((int)lVar4 == 0) {
    lVar2 = 0;
  }
  _objc_retain(lVar2);
  _objc_release(lVar3);
  lVar3 = lVar2;
  func_0x00010c0f2920();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0720c0();
  if ((int)lVar4 == 0) {
    _objc_release(lVar3);
  }
  else {
    lVar4 = lVar2;
    func_0x00010c09d440();
    _objc_release(lVar3);
    if (lVar4 != 3) goto LAB_106553b1c;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  _objc_release(uVar1);
LAB_106553b1c:
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106553b3c; end: 106554263; -[SCChatTableViewV3Delegate tableView:willDisplayCell:forRowAtIndexPath:] */

void FUN_106553b3c(undefined8 param_1,double param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined **ppuVar20;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar2 = *(undefined **)(param_3 + 8);
  func_0x00010c29d580();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be12960(param_3);
  uVar19 = param_3;
  func_0x00010c267fe0();
  uVar3 = param_3;
  func_0x00010bddc400();
  _objc_retainAutoreleasedReturnValue();
  if (((uVar19 & 1) == 0) && (uVar3 != 0)) {
    func_0x00010c09c6a0(uVar3);
  }
  if ((uVar19 & 1) == 0) {
    uVar4 = param_5;
    func_0x00010c29fc60(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar11 = uVar4;
    func_0x00010c0d3c80();
    _objc_release(uVar4);
    func_0x00010befa120(uVar11);
    func_0x00010be64ea0(param_3);
    _objc_release(uVar11);
    uVar4 = *(undefined8 *)(param_3 + 0x60);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23a940();
  }
  else {
    uVar4 = *(undefined8 *)(param_3 + 0x60);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe2c40();
  }
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126cb4b0;
  _objc_retain(param_6);
  _objc_opt_class(puVar5);
  uVar6 = param_6;
  _objc_opt_isKindOfClass(param_6,puVar5);
  uVar1 = param_6;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_6);
  if (uVar1 != 0) {
    func_0x00010c1b41c0(param_6);
  }
  if ((((int)uVar19 != 0) && (func_0x00010bf4cdc0(param_5), param_2 < 500.0)) ||
     (func_0x00010bf4cdc0(param_5), param_2 == 0.0)) {
    uVar6 = *(ulong *)(param_3 + 8);
    func_0x00010c0cbaa0();
    _objc_retainAutoreleasedReturnValue();
    uVar19 = uVar6;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    uVar7 = uVar19;
    func_0x00010010fab4(uVar19,PTR_DAT_1126a5478);
    uVar6 = uVar19;
    if ((int)uVar7 == 0) {
      uVar6 = 0;
    }
    _objc_retain(uVar6);
    _objc_release(uVar19);
    if (uVar6 == 0) {
      uVar19 = 0;
    }
    else if (*(long *)(param_3 + 0x58) == 0) {
      func_0x00010be4d720(param_3);
    }
  }
  else {
    puVar5 = PTR_PTR_1126cb4b8;
    _objc_opt_class(PTR_PTR_1126cb4b8);
    uVar19 = param_6;
    _objc_opt_isKindOfClass(param_6,puVar5);
    puVar5 = PTR_PTR_1126cb4b8;
    if ((uVar19 & 1) == 0) goto LAB_106553dc4;
    _objc_retain(param_6);
    _objc_opt_class(puVar5);
    uVar6 = param_6;
    _objc_opt_isKindOfClass(param_6,puVar5);
    uVar19 = param_6;
    if ((uVar6 & 1) == 0) {
      uVar19 = 0;
    }
    _objc_retain(uVar19);
    _objc_release(param_6);
    func_0x00010be4d700(param_3);
  }
  _objc_release(uVar19);
LAB_106553dc4:
  puVar5 = PTR_PTR_1126cb4a0;
  _objc_retain(param_6);
  _objc_opt_class(puVar5);
  uVar6 = param_6;
  _objc_opt_isKindOfClass(param_6,puVar5);
  uVar19 = param_6;
  if ((uVar6 & 1) == 0) {
    uVar19 = 0;
  }
  _objc_retain(uVar19);
  _objc_release(param_6);
  func_0x00010c2a5fc0(uVar19);
  _objc_release(uVar19);
  puVar8 = puVar2;
  func_0x00010c13fd60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126cb6f0;
  _objc_retain(puVar2);
  _objc_opt_class(puVar5);
  puVar9 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar5);
  puVar5 = puVar2;
  if (((ulong)puVar9 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  _objc_retain(puVar5);
  _objc_release(puVar2);
  puVar9 = puVar8;
  if (puVar5 != (undefined *)0x0) {
    puVar9 = puVar2;
    func_0x00010c0c6fa0();
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar9;
    func_0x00010c0c6c20();
    if (puVar10 + -1 < (undefined *)0x15) {
      ppuVar20 = (undefined **)(&PTR_PTR_11092a770)[(long)(puVar10 + -1)];
    }
    else {
      ppuVar20 = &PTR____CFConstantStringClassReference_110db6dd8;
    }
    _objc_retain(ppuVar20);
    _objc_release(puVar9);
    puVar9 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar20);
    _objc_release(puVar8);
  }
  puVar8 = PTR_PTR_1126b2950;
  func_0x00010bf34240();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar8;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  uVar11 = *(undefined8 *)(param_3 + 0xa0);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar11;
  func_0x00010bf366a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar4);
  _objc_release(uVar11);
  puVar8 = PTR_PTR_1126cb330;
  _objc_retain(puVar2);
  _objc_opt_class(puVar8);
  puVar12 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar8);
  puVar8 = puVar2;
  if (((ulong)puVar12 & 1) == 0) {
    puVar8 = (undefined *)0x0;
  }
  _objc_retain(puVar8);
  _objc_release(puVar2);
  puVar12 = PTR_PTR_1126cb328;
  _objc_retain(puVar2);
  _objc_opt_class(puVar12);
  puVar13 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar12);
  puVar12 = puVar2;
  if (((ulong)puVar13 & 1) == 0) {
    puVar12 = (undefined *)0x0;
  }
  _objc_retain(puVar12);
  _objc_release(puVar2);
  puVar13 = puVar12;
  if (puVar8 != (undefined *)0x0) {
    puVar13 = puVar8;
  }
  _objc_retain(puVar13);
  if (puVar13 != (undefined *)0x0) {
    puVar14 = PTR_PTR_1126b2950;
    func_0x00010c24d3c0(PTR_PTR_1126b2950);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar14;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar14);
    puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    puVar16 = puVar13;
    func_0x00010c24d420(puVar13);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    func_0x00010c0df840(puVar14);
    _objc_retainAutoreleasedReturnValue();
    puVar17 = puVar14;
    func_0x00010c25d700();
    _objc_retainAutoreleasedReturnValue();
    puVar18 = puVar15;
    func_0x00010c2ac460(puVar15);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar15);
    _objc_release(puVar17);
    _objc_release(puVar14);
    _objc_release(puVar16);
    uVar11 = *(undefined8 *)(param_3 + 0xa0);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar11;
    func_0x00010bf366a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfec2a0();
    _objc_release(uVar4);
    _objc_release(uVar11);
    _objc_release(puVar18);
  }
  puVar14 = PTR_PTR_1126c6d00;
  _objc_retain(puVar2);
  _objc_opt_class(puVar14);
  puVar15 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar14);
  puVar14 = puVar2;
  if (((ulong)puVar15 & 1) == 0) {
    puVar14 = (undefined *)0x0;
  }
  _objc_retain(puVar14);
  _objc_release(puVar2);
  if (puVar14 != (undefined *)0x0) {
    puVar15 = puVar2;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    puVar16 = puVar15;
    func_0x00010bf344a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar15);
    if (puVar16 != (undefined *)0x0) {
      uVar4 = *(undefined8 *)(param_3 + 0x40);
      puVar15 = puVar2;
      func_0x00010c0cb340(puVar2);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar15;
      func_0x00010bf344a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd0140(uVar4);
      _objc_release(puVar16);
      _objc_release(puVar15);
    }
  }
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar8);
  _objc_release(puVar10);
  _objc_release(puVar5);
  _objc_release(puVar9);
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(puVar2);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 106554264; end: 106554407; -[SCChatTableViewV3Delegate _fetchMetadataForMessageViewModel:cell:] */

void FUN_106554264(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c107c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    uVar1 = param_3;
    func_0x00010c107c20(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010c101ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar3 = uVar5;
    func_0x00010010fab4(uVar5,PTR_DAT_1126a5280);
    uVar2 = uVar5;
    if ((int)uVar3 == 0) {
      uVar2 = 0;
    }
    _objc_retain(uVar2);
    _objc_release(uVar5);
    func_0x00010c074920();
    uVar5 = *(undefined8 *)(param_1 + 0x78);
    _objc_retain(param_3);
    _objc_retain(uVar2);
    func_0x00010c0f7fc0(uVar5);
    _objc_release(param_3);
    _objc_release(uVar2);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  puVar4 = PTR_PTR_1126cb6f0;
  _objc_opt_class(PTR_PTR_1126cb6f0);
  uVar1 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  if ((uVar1 & 1) == 0) {
    puVar4 = PTR_PTR_1126cb788;
    _objc_opt_class(PTR_PTR_1126cb788);
    uVar1 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((uVar1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x48) = 1;
    }
  }
  else {
    func_0x00010be12660(param_1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106554408; end: 106554417;  */

void FUN_106554408(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c107570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_prefetchDataForMessageViewModel__11261f778,
             *(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30));
  return;
}



/* Entry: 106554418; end: 10655441b; -[SCChatTableViewV3Delegate tableView:didSelectRowAtIndexPath:] */

void FUN_106554418(void)

{
  return;
}



/* Entry: 10655441c; end: 106554467; -[SCChatTableViewV3Delegate tableView:heightForRowAtIndexPath:] */

undefined8
FUN_10655441c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  func_0x00010c29d580(uVar1,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe0640();
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 106554468; end: 10655452f; -[SCChatTableViewV3Delegate scrollViewDidScroll:] */

void FUN_106554468(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c152b20();
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x130);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf1f3c0();
    _objc_release(uVar2);
    _objc_release(lVar1);
    if ((int)uVar3 != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x70);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0cb6c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar3);
      return;
    }
  }
  return;
}



/* Entry: 106554530; end: 1065545f7; -[SCChatTableViewV3Delegate scrollViewDidEndDragging:willDecelerate:] */

void FUN_106554530(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c152aa0();
  _objc_release(lVar1);
  if ((param_4 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___UITableView_1126aed40;
    _objc_opt_class(PTR__OBJC_CLASS___UITableView_1126aed40);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    if ((uVar3 & 1) != 0) {
      _objc_retain(param_3);
      func_0x00010be4ee40(param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23a940();
      _objc_release(uVar4);
      func_0x00010bea4e60(0x3ff0000000000000,param_1);
      _objc_release(param_3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065545f8; end: 10655463f; -[SCChatTableViewV3Delegate scrollViewDidEndScrollingAnimation:] */

void FUN_1065545f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c152ae0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106554640; end: 106554703; -[SCChatTableViewV3Delegate scrollViewWillBeginDragging:] */

void FUN_106554640(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c152ca0();
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe2c40();
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_retain(param_3);
  _objc_opt_class(puVar4);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar4);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  func_0x00010bea4e40(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106554704; end: 1065547ab; -[SCChatTableViewV3Delegate scrollViewDidEndDecelerating:] */

void FUN_106554704(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___UITableView_1126aed40;
  _objc_opt_class(PTR__OBJC_CLASS___UITableView_1126aed40);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    func_0x00010be4ee40(param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23a940();
    _objc_release(uVar4);
    func_0x00010bea4e60(0x3ff0000000000000,param_1);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065547ac; end: 106554933; -[SCChatTableViewV3Delegate _setIsScrollViewScrolling:forMessagingCells:] */

void FUN_1065547ac(double param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 *param_5)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined1 *puStack_188;
  undefined1 *puStack_180;
  undefined1 uStack_178;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_5;
  _objc_retain(param_5);
  if (param_5 != (undefined1 *)0x0) {
    puVar2 = param_5;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar2 != (undefined1 *)0x0) {
      param_1 = 0.0;
      uStack_108 = 0;
      uStack_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      lStack_128 = 0;
      uStack_130 = 0;
      uStack_118 = 0;
      plStack_120 = (long *)0x0;
      puVar2 = param_5;
      func_0x00010c29fc60();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = auStack_e8;
      puVar3 = puVar2;
      param_4 = (char)&uStack_130;
      func_0x00010bf52a60();
      if (puVar3 != (undefined1 *)0x0) {
        lVar7 = *plStack_120;
        do {
          puVar8 = (undefined1 *)0x0;
          do {
            if (*plStack_120 != lVar7) {
              _objc_enumerationMutation(puVar2);
            }
            puVar4 = PTR_PTR_1126cb4b0;
            uVar6 = *(ulong *)(lStack_128 + (long)puVar8 * 8);
            _objc_retain(uVar6);
            _objc_opt_class(puVar4);
            uVar5 = uVar6;
            _objc_opt_isKindOfClass(uVar6,puVar4);
            uVar1 = uVar6;
            if ((uVar5 & 1) == 0) {
              uVar1 = 0;
            }
            _objc_retain(uVar1);
            _objc_release(uVar6);
            func_0x00010c1b41c0(uVar1);
            _objc_release(uVar1);
            puVar8 = puVar8 + 1;
          } while (puVar3 != puVar8);
          puVar8 = auStack_e8;
          puVar3 = puVar2;
          param_4 = (char)&uStack_130;
          func_0x00010bf52a60();
        } while (puVar3 != (undefined1 *)0x0);
      }
      _objc_release(puVar2);
    }
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  if (param_1 == 0.0) {
    func_0x00010bea4e40(param_5);
  }
  else {
    puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a0 = 0xc2000000;
    pcStack_198 = FUN_106554a00;
    puStack_190 = &UNK_11084d5f8;
    puStack_188 = param_5;
    uStack_178 = param_4;
    _objc_retain(puVar8);
    puStack_180 = puVar8;
    func_0x000100c749e0((float)param_1,"APPSTORE",&puStack_1a8);
    _objc_release(puStack_180);
  }
  _objc_release(puVar8);
  return;
}



/* Entry: 106554934; end: 1065549ff; -[SCChatTableViewV3Delegate _setIsScrollViewScrolling:forMessagingCells:delay:] */

void FUN_106554934(double param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_5);
  if (param_1 == 0.0) {
    func_0x00010bea4e40(param_2);
  }
  else {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106554a00;
    puStack_60 = &UNK_11084d5f8;
    uStack_58 = param_2;
    uStack_48 = param_4;
    _objc_retain(param_5);
    uStack_50 = param_5;
    func_0x000100c749e0((float)param_1,"APPSTORE",&puStack_78);
    _objc_release(uStack_50);
  }
  _objc_release(param_5);
  return;
}



/* Entry: 106554a00; end: 106554a47;  */

void FUN_106554a00(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  bVar1 = *(byte *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c267fe0(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
  if ((uint)bVar1 == (uint)uVar2) {
                    /* WARNING: Could not recover jumptable at 0x00010bea4e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__setIsScrollViewScrolling_forMes_112586d38,
               *(undefined1 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 106554a48; end: 106554bdb; -[SCChatTableViewV3Delegate _notifyPluginManagerOfVisibleCells:inTableView:] */

void FUN_106554a48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  func_0x000100817178(param_3,&PTR___NSConcreteGlobalBlock_11092a750);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c223b40();
  _objc_release(uVar1);
  _objc_storeWeak(param_1 + 0x138,param_4);
  _objc_release(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c7220();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106554bdc; end: 106554fc7; -[SCChatTableViewV3Delegate visibleHeightFractionForMessageId:] */

undefined8 *
FUN_106554bdc(double param_1,double param_2,double param_3,double param_4,long param_5,
             undefined8 param_6,undefined8 *param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_7;
  _objc_retain(param_7);
  param_5 = param_5 + 0x138;
  _objc_loadWeakRetained();
  lVar1 = param_5;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c148fc0(param_5);
    dVar18 = param_1;
    _objc_release(lVar1);
    if (0.0 < param_1) {
      func_0x00010bf20c00(param_5);
      dVar13 = dVar18;
      dVar16 = param_2;
      dVar17 = param_3;
      dVar14 = param_4;
      func_0x00010c148fc0(param_5);
      dVar18 = dVar18 + dVar16;
      param_2 = param_2 + dVar13;
      param_3 = param_3 - (dVar16 + dVar14);
      param_4 = param_4 - (dVar13 + dVar17);
      func_0x00010bf51460(dVar18,param_2,param_5);
      lVar1 = param_5;
      dVar13 = dVar18;
      dVar16 = param_2;
      dVar17 = param_3;
      dVar14 = param_4;
      func_0x00010c2a71e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      _CGRectIntersection(dVar18,param_2,param_3,param_4,dVar13,dVar16,dVar17,dVar14);
      dVar13 = param_2;
      dVar16 = param_3;
      dVar17 = param_4;
      _objc_release(lVar1);
      dVar14 = 0.0;
      uStack_148 = 0;
      uStack_150 = 0;
      uStack_138 = 0;
      uStack_140 = 0;
      lStack_168 = 0;
      uStack_170 = 0;
      uStack_158 = 0;
      plStack_160 = (long *)0x0;
      lVar1 = param_5;
      func_0x00010c29fc60();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = &uStack_170;
      lVar2 = lVar1;
      func_0x00010bf52a60();
      if (lVar2 != 0) {
        lVar12 = *plStack_160;
        do {
          lVar9 = 0;
          do {
            if (*plStack_160 != lVar12) {
              _objc_enumerationMutation(lVar1);
            }
            puVar3 = PTR_PTR_1126cb4b0;
            uVar11 = *(ulong *)(lStack_168 + lVar9 * 8);
            _objc_retain(uVar11);
            _objc_opt_class(puVar3);
            uVar4 = uVar11;
            _objc_opt_isKindOfClass(uVar11,puVar3);
            uVar7 = uVar11;
            if ((uVar4 & 1) == 0) {
              uVar7 = 0;
            }
            _objc_retain(uVar7);
            _objc_release(uVar11);
            if (uVar7 != 0) {
              uVar4 = uVar11;
              func_0x00010c29d560();
              _objc_retainAutoreleasedReturnValue();
              if (uVar4 != 0) {
                uVar5 = uVar11;
                func_0x00010c2a71e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                _objc_release(uVar4);
                if (uVar5 != 0) {
                  uVar4 = uVar11;
                  func_0x00010c0cb300();
                  _objc_retainAutoreleasedReturnValue();
                  uVar5 = uVar4;
                  func_0x00010bfe5ec0();
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar4);
                  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
                  uVar6 = uVar5;
                  _objc_opt_isKindOfClass(uVar5,puVar3);
                  uVar4 = uVar5;
                  if ((uVar6 & 1) == 0) {
                    uVar4 = 0;
                  }
                  _objc_retain(uVar4);
                  _objc_release(uVar5);
                  uVar5 = uVar4;
                  func_0x00010c0720c0();
                  _objc_release(uVar4);
                  if ((uVar5 & 1) != 0) {
                    func_0x00010bf20c00(uVar11);
                    puVar8 = (undefined8 *)0x0;
                    uVar7 = uVar11;
                    func_0x00010bf51460();
                    dVar15 = dVar14;
                    _CGRectGetHeight();
                    if (0.0 < dVar15) {
                      _CGRectIntersection(dVar14,dVar13,dVar16,dVar17,dVar18,param_2,param_3,param_4
                                         );
                      _CGRectIsNull();
                      if ((uVar7 & 1) == 0) {
                        _CGRectGetHeight(dVar14,dVar13,dVar16,dVar17);
                      }
                    }
                    _objc_release(uVar11);
                    goto LAB_106554f60;
                  }
                }
              }
            }
            _objc_release(uVar7);
            lVar9 = lVar9 + 1;
          } while (lVar2 != lVar9);
          puVar8 = &uStack_170;
          lVar2 = lVar1;
          func_0x00010bf52a60();
        } while (lVar2 != 0);
      }
LAB_106554f60:
      _objc_release(lVar1);
    }
  }
  _objc_release(param_5);
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return param_7;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  puVar10 = puVar8;
  func_0x00010c070ea0();
  if (((ulong)puVar10 & 1) == 0) {
    puVar10 = puVar8;
    func_0x00010c070400(puVar8);
  }
  else {
    puVar10 = (undefined8 *)0x1;
  }
  _objc_release(puVar8);
  return puVar10;
}



/* Entry: 106554fc8; end: 106555017; -[SCChatTableViewV3Delegate tableViewIsScrolling:] */

ulong FUN_106554fc8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c070ea0();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c070400(param_3);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 106555018; end: 106555057; -[SCChatTableViewV3Delegate _loadHistoryForLoadingCell:] */

void FUN_106555018(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c29d560(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4d720(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106555058; end: 1065550e7; -[SCChatTableViewV3Delegate _loadHistoryForLoadingViewModel:] */

void FUN_106555058(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c09d440();
  if (lVar1 - 5U < 0xfffffffffffffffe) {
    lVar1 = param_3;
    func_0x00010bf85ba0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0f2920(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09b660(param_1,param_2,lVar1,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065550e8; end: 10655515b; -[SCChatTableViewV3Delegate loadHistoryWithActionModel:paginationToken:] */

void FUN_1065550e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010bfd0140(*(undefined8 *)(param_1 + 0x50),param_2,param_1,param_3,0);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10655515c; end: 1065551db; -[SCChatTableViewV3Delegate cellHandleTapToLoad:] */

void FUN_10655515c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c29d560(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c269140();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0f2920(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09b660(param_1,param_2,uVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1065551dc; end: 106555337; -[SCChatTableViewV3Delegate _loadVideoForVisibleCells:] */

void FUN_1065551dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_3;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c29fc60();
    _objc_retainAutoreleasedReturnValue();
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lVar2 = lVar1;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar4 = *plStack_110;
      do {
        lVar5 = 0;
        do {
          if (*plStack_110 != lVar4) {
            _objc_enumerationMutation(lVar1);
          }
          uVar3 = param_1;
          func_0x00010bddc400(param_1,param_2,*(undefined8 *)(lStack_118 + lVar5 * 8));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c09c6a0();
          _objc_release(uVar3);
          lVar5 = lVar5 + 1;
        } while (lVar2 != lVar5);
        lVar2 = lVar1;
        func_0x00010bf52a60(lVar1,param_2,&uStack_120,auStack_d8,0x10);
      } while (lVar2 != 0);
    }
    lVar2 = lVar1;
    func_0x00010be64ea0(param_1,param_2,lVar1,param_3);
    _objc_release(lVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar2);
  lVar1 = param_3 + 0x18;
  _objc_loadWeakRetained();
  lVar4 = lVar1;
  func_0x00010bf36980();
  _objc_release(lVar1);
  if ((int)lVar4 != 0) {
    func_0x00010c109b60(param_3,param_2,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106555338; end: 106555397; -[SCChatTableViewV3Delegate displayMediaForVisibleCells:] */

void FUN_106555338(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf36980();
  _objc_release(lVar1);
  if ((int)lVar2 != 0) {
    func_0x00010c109b60(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106555398; end: 1065554f3; -[SCChatTableViewV3Delegate prepareMediaForVisibleCells:] */

void FUN_106555398(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_3;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3;
    func_0x00010c29fc60();
    _objc_retainAutoreleasedReturnValue();
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lVar2 = lVar1;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar4 = *plStack_110;
      do {
        lVar5 = 0;
        do {
          if (*plStack_110 != lVar4) {
            _objc_enumerationMutation(lVar1);
          }
          uVar3 = param_1;
          func_0x00010bddc400(param_1,param_2,*(undefined8 *)(lStack_118 + lVar5 * 8));
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12fe40();
          _objc_release(uVar3);
          lVar5 = lVar5 + 1;
        } while (lVar2 != lVar5);
        lVar2 = lVar1;
        func_0x00010bf52a60(lVar1,param_2,&uStack_120,auStack_d8,0x10);
      } while (lVar2 != 0);
    }
    lVar2 = lVar1;
    func_0x00010be64ea0(param_1,param_2,lVar1,param_3);
    _objc_release(lVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar2);
  uVar3 = *(undefined8 *)(param_3 + 0x118);
  *(long *)(param_3 + 0x118) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1065554f4; end: 106555523; -[SCChatTableViewV3Delegate highlightCellAtIndexPath:] */

void FUN_1065554f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x118) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106555524; end: 10655568f; -[SCChatTableViewV3Delegate clearMediaForCells:] */

void FUN_106555524(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar2 = param_3;
    func_0x00010c29fc60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar6 = *plStack_120;
      do {
        lVar7 = 0;
        do {
          if (*plStack_120 != lVar6) {
            _objc_enumerationMutation(lVar2);
          }
          uVar4 = param_1;
          func_0x00010bddc400(param_1,param_2,*(undefined8 *)(lStack_128 + lVar7 * 8));
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c0c6ae0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c138600();
          _objc_release(uVar5);
          _objc_release(uVar4);
          lVar7 = lVar7 + 1;
        } while (lVar3 != lVar7);
        lVar3 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,&uStack_130,auStack_e8,0x10);
      } while (lVar3 != 0);
    }
    _objc_release(lVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (*(char *)(param_3 + 0x48) == '\x01') {
    iVar1 = (int)*(undefined8 *)(param_3 + 8);
    func_0x00010c074920();
    uVar4 = *(undefined8 *)(param_3 + 200);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_3 + 8);
    func_0x00010bf50280(uVar5);
    _objc_retainAutoreleasedReturnValue();
    if (iVar1 == 0) {
      func_0x00010c190260(uVar4,param_2,uVar5);
    }
    else {
      func_0x00010c190280();
    }
    _objc_release(uVar5);
    _objc_release(uVar4);
    *(undefined1 *)(param_3 + 0x48) = 0;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x60);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 106555690; end: 10655573b; -[SCChatTableViewV3Delegate viewDidSwipeOut] */

void FUN_106555690(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x48) == '\x01') {
    iVar1 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010c074920();
    uVar2 = *(undefined8 *)(param_1 + 200);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf50280(uVar3);
    _objc_retainAutoreleasedReturnValue();
    if (iVar1 == 0) {
      func_0x00010c190260(uVar2,param_2,uVar3);
    }
    else {
      func_0x00010c190280();
    }
    _objc_release(uVar3);
    _objc_release(uVar2);
    *(undefined1 *)(param_1 + 0x48) = 0;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10655573c; end: 10655585b; -[SCChatTableViewV3Delegate _fetchMedia:messageId:conversationId:isGroupConversation:] */

void FUN_10655573c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c0c56c0();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126cb2d0;
    func_0x00010c22ba80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c231e40();
    _objc_release(puVar2);
    if ((int)puVar3 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0xd0);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010c0c5180(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a2ee0(uVar4,param_2,lVar1,&PTR____CFConstantStringClassReference_110e53c78);
      _objc_release(lVar1);
      _objc_release(uVar4);
      func_0x00010c09b920(*(undefined8 *)(param_1 + 0xe8),param_2,param_5,param_4,param_3,param_6,5,
                          1,0);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10655585c; end: 10655592b; -[SCChatTableViewV3Delegate _fetchMediaForMediaViewModel:] */

void FUN_10655585c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c0c6fa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      lVar1 = param_3;
      func_0x00010c0c6fa0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010c0cb5a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_3;
      func_0x00010bf50280(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_3;
      func_0x00010c074920(param_3);
      func_0x00010be12580(param_1,param_2,lVar1,lVar2,lVar3,lVar4);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10655592c; end: 106555987; -[SCChatTableViewV3Delegate _cellToMediaCell:] */

void FUN_10655592c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar2 = PTR_PTR_1126cb4f0;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106555988; end: 1065559fb; -[SCChatTableViewV3Delegate _uiTestMessageIndexForMessageAtRow:viewModels:] */

long FUN_106555988(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  func_0x00010bfb1920(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c13fd60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(param_4);
  return param_3 - (uVar2 & 0xffffffff);
}



/* Entry: 1065559fc; end: 106555bd7; -[SCChatTableViewV3Delegate .cxx_destruct] */

void FUN_1065559fc(long param_1)

{
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_storeStrong(param_1 + 0x140,0);
  _objc_destroyWeak(param_1 + 0x138);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106555bd8; end: 106555d0f; -[SCNewChatsAffordanceView initWithDelegate:messagingExperimentService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106555bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f1b08;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11274a50c),param_3);
    uVar2 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0e9060();
    *(char *)((long)puVar1 + (long)_DAT_11274a510) = (char)uVar3;
    _objc_release(uVar2);
    func_0x00010be3bc80(puVar1);
    func_0x00010be3bb40(puVar1);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    func_0x00010bef9040(puVar1);
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106555d10; end: 106555db3; -[SCNewChatsAffordanceView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106555d10(double param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f1b08;
  lStack_40 = param_2;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  uVar2 = NEON_fminnm(param_1 * 0.5,0x4049000000000000);
  lVar1 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(uVar2);
  _objc_release(lVar1);
  func_0x00010bf20c00(param_2);
  func_0x00010c19f0e0(*(undefined8 *)(param_2 + _DAT_11274a514));
  return;
}



/* Entry: 106555db4; end: 106555e7f; -[SCNewChatsAffordanceView _initializeSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106555db4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126aec40;
  func_0x00010bf25ce0(PTR_PTR_1126aec40,param_2,3,&PTR___NSConcreteGlobalBlock_11092a818);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_11274a514;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c20eaa0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 106555e80; end: 106555f2b; -[SCNewChatsAffordanceView _initializeShadow] */

void FUN_106555e80(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe7a0(0x3ff0000000000000,0x4000000000000000);
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe840(0x4010000000000000);
  _objc_release(uVar1);
  func_0x00010c08c0e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe800(0x3e4ccccd);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106555f2c; end: 106555f57; -[SCNewChatsAffordanceView width] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106555f2c(double param_1,long param_2)

{
  func_0x00010c0699c0(*(undefined8 *)(param_2 + _DAT_11274a514));
  return (double)(float)(int)param_1;
}



/* Entry: 106555f58; end: 106555f83; -[SCNewChatsAffordanceView height] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_106555f58(undefined8 param_1,double param_2,long param_3)

{
  func_0x00010c0699c0(*(undefined8 *)(param_3 + _DAT_11274a514));
  return (double)(float)(int)param_2;
}



/* Entry: 106555f84; end: 106555f97; -[SCNewChatsAffordanceView _setLabelText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106555f84(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c216270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11274a514),PTR_s_setTitle_forState__1126632c0,param_3,0)
  ;
  return;
}



/* Entry: 106555f98; end: 106555fff; -[SCNewChatsAffordanceView _setImageForBottom:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106555f98(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = 0x84;
  if (param_3 == 0) {
    uVar1 = 0x8a;
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_11274a514);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c23bba0(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,uVar1,1,0x3e);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9fc0(uVar3,param_2,puVar2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106556000; end: 10655606b; -[SCNewChatsAffordanceView updateLabelForTop:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106556000(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  if ((param_3 & 1) == 0) {
    func_0x00010658a4dc();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010658a4f4();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bea50a0(param_1,param_2,lVar1);
  func_0x00010bea4840(param_1,param_2,0);
  *(undefined8 *)(param_1 + _DAT_11274a518) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10655606c; end: 1065560f7; -[SCNewChatsAffordanceView updateLabelForBottom:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10655606c(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  if ((param_3 & 1) == 0) {
    if ((*(byte *)(param_1 + _DAT_11274a510) & 1) == 0) {
      func_0x00010658a4c4();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010658a50c();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x00010658a4f4();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bea50a0(param_1,param_2,lVar1);
  func_0x00010bea4840(param_1,param_2,1);
  *(undefined8 *)(param_1 + _DAT_11274a518) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1065560f8; end: 106556107; -[SCNewChatsAffordanceView updateLabelForHidden] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065560f8(long param_1)

{
  *(undefined8 *)(param_1 + _DAT_11274a518) = 0;
  return;
}



/* Entry: 106556108; end: 10655611f; -[SCNewChatsAffordanceView constrainedOnBottom] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106556108(long param_1)

{
  return *(long *)(param_1 + _DAT_11274a518) == 2;
}



/* Entry: 106556120; end: 106556137; -[SCNewChatsAffordanceView constrainedOnTop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_106556120(long param_1)

{
  return *(long *)(param_1 + _DAT_11274a518) == 1;
}



/* Entry: 106556138; end: 10655616f; -[SCNewChatsAffordanceView isVisible] */

ulong FUN_106556138(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010bf49320();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf49310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_constrainedOnBottom_1125afe68);
  return param_1;
}



/* Entry: 106556170; end: 1065561bb; -[SCNewChatsAffordanceView chatAffordanceTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106556170(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c083820();
  if ((int)lVar1 != 0) {
    param_1 = param_1 + _DAT_11274a50c;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf35e60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1065561bc; end: 1065561f7; -[SCNewChatsAffordanceView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065561bc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11274a514,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11274a50c);
  return;
}



/* Entry: 1065561f8; end: 1065561fb; -[SCChatMergedStatusContentViewModel attributedTextForStatusMessageLabel] */

void FUN_1065561f8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0e270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_attributedStatusText_1125a1240);
  return;
}



/* Entry: 1065561fc; end: 1065561ff; -[SCChatMergedStatusContentViewModel heightForStatusMessageLabel] */

void FUN_1065561fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_height_1125d5b50);
  return;
}



/* Entry: 106556200; end: 106556203; -[SCChatMergedStatusContentViewModel topMarginForStatusMessageLabel] */

void FUN_106556200(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2746f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_topMargin_11267abe0);
  return;
}



/* Entry: 106556204; end: 10655620b; -[SCChatMessageCellViewModel headerIndex] */

undefined8 FUN_106556204(void)

{
  return 0;
}



/* Entry: 10655620c; end: 10655620f; -[SCChatMessageCellViewModel setHeaderIndex:] */

void FUN_10655620c(void)

{
  return;
}



/* Entry: 106556210; end: 10655624b; -[SCChatMessageCellViewModel bottomRightCornerIsRounded] */

ulong FUN_106556210(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010c149e00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf52540();
  _objc_release(param_1);
  return uVar1 >> 3 & 1;
}



/* Entry: 10655624c; end: 10655624f; -[SCChatMessageCellViewModel setBottomRightCornerIsRounded:] */

void FUN_10655624c(void)

{
  return;
}



/* Entry: 106556250; end: 10655628b; -[SCChatMessageCellViewModel topRightCornerIsRounded] */

ulong FUN_106556250(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010c149e00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf52540();
  _objc_release(param_1);
  return uVar1 >> 1 & 1;
}



/* Entry: 10655628c; end: 10655628f; -[SCChatMessageCellViewModel setTopRightCornerIsRounded:] */

void FUN_10655628c(void)

{
  return;
}



/* Entry: 106556290; end: 1065562cb; -[SCChatMessageCellViewModel hidden] */

undefined8 FUN_106556290(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfe1300();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1065562cc; end: 106556377; -[SCChatMessageCellViewModel height] */

double FUN_1065562cc(undefined8 param_1,double param_2,ulong param_3)

{
  ulong uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  uVar1 = param_3;
  func_0x00010bfe1300();
  dVar2 = 0.0;
  if ((uVar1 & 1) == 0) {
    func_0x00010be5fde0(param_3);
    dVar4 = param_2;
    func_0x00010c11eba0(param_3);
    dVar3 = dVar4;
    func_0x00010c105120(param_3);
    dVar5 = 0.0;
    if (0.0 < dVar3) {
      func_0x00010c105120(param_3);
      dVar2 = 4.0;
      dVar5 = dVar3 + 4.0;
    }
    func_0x00010c0f6740(param_3);
    dVar3 = 0.0;
    if (0.0 <= param_2 + dVar2) {
      dVar3 = param_2 + dVar2;
    }
    dVar4 = dVar4 + dVar3;
    func_0x00010c0f6440(param_3);
    dVar4 = dVar3 + dVar4;
    func_0x00010bfe06e0(param_3);
    dVar2 = dVar5 + dVar3 + dVar4;
  }
  return dVar2;
}



/* Entry: 106556378; end: 10655637b; -[SCChatMessageCellViewModel setHeight:] */

void FUN_106556378(void)

{
  return;
}



/* Entry: 10655637c; end: 106556383; -[SCChatMessageCellViewModel topMargin] */

undefined8 FUN_10655637c(void)

{
  return 0;
}



/* Entry: 106556384; end: 10655638b; -[SCChatMessageCellViewModel bodyTopMargin] */

undefined8 FUN_106556384(void)

{
  return 0;
}


