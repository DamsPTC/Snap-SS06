/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105215f04; end: 105215f9f; -[SCComposerSubscreenPresentationController dismissalTransitionWillBegin] */

void FUN_105215f04(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c27a780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105215fa0;
  puStack_40 = &UNK_110870710;
  uStack_38 = param_1;
  func_0x00010bf02c20(uVar2,param_2,&puStack_58,0);
  _objc_release(uVar2);
  return;
}



/* Entry: 105215fa0; end: 105215fb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105215fa0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c193d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271fd58),
             PTR_s_setEffect__112642968,0);
  return;
}



/* Entry: 105215fb8; end: 105215fcf; -[SCComposerSubscreenPresentationController presentationTransitionDidEnd:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105215fb8(long param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c12c970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271fd58),PTR_s_removeFromSuperview_112628c78);
  return;
}



/* Entry: 105215fd0; end: 105215fdf; -[SCComposerSubscreenPresentationController sourceViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105215fd0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271fd54);
}



/* Entry: 105215fe0; end: 10521601f; -[SCComposerSubscreenPresentationController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105215fe0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271fd54,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271fd58,0);
  return;
}



/* Entry: 105216020; end: 10521602b; -[SCComposerSubscreenSearchBoxPresentingTransition transitionDuration:] */

undefined8 FUN_105216020(void)

{
  return 0x3fd47ae147ae147b;
}



/* Entry: 10521602c; end: 1052162e7; -[SCComposerSubscreenSearchBoxPresentingTransition animateTransition:] */

void FUN_10521602c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c29c220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17b00();
  uVar3 = uVar2;
  func_0x00010c10f380();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b6568;
  _objc_opt_class(PTR_PTR_1126b6568);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c247e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar5 = uVar3;
  func_0x00010010fab4(uVar3,PTR_DAT_1126a4f50);
  uVar1 = uVar3;
  if ((int)uVar5 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  puVar4 = PTR_DAT_1126a4f58;
  _objc_retain(uVar2);
  uVar5 = uVar2;
  func_0x00010010fab4(uVar2,puVar4);
  uVar3 = uVar2;
  if ((int)uVar5 == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar2);
  if (uVar3 == 0) {
    uVar5 = param_3;
    func_0x00010bf4b2a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar5);
    uVar5 = uVar2;
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbe20();
    _objc_release(uVar5);
    uVar5 = uVar2;
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(uVar5);
    func_0x00010c27ac00(param_3);
    func_0x00010bf43bc0(param_3);
    func_0x00010bf941a0(uVar2);
  }
  else {
    uVar5 = uVar2;
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d4bc0(0);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_retain(param_3);
    _objc_retain(uVar2);
    _objc_retain(uVar2);
    _objc_retain(uVar1);
    func_0x00010c0e6be0(uVar2);
    _objc_release(uVar1);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_3);
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 1052162e8; end: 1052166b3;  */

void FUN_1052162e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 in_d3;
  double dVar8;
  undefined *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  long lStack_1a0;
  undefined *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  long lStack_170;
  long lStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  double dStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  double dStack_e0;
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
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b2a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c29bf00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar3,param_2,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c29bf00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(uVar3);
  lVar5 = *(long *)(param_1 + 0x30);
  func_0x00010bfcae80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = *(long *)(param_1 + 0x38);
  func_0x00010bfc9f40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfcae60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b2a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    func_0x00010c14f8c0(&uStack_a0,lVar5,param_2,lVar6,uVar4);
  }
  _objc_release(uVar4);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b2a0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
  }
  else {
    func_0x00010c14f8c0(&uStack_d0,lVar6,param_2,lVar5,uVar4);
  }
  _objc_release(uVar4);
  uStack_f8 = uStack_98;
  uStack_100 = uStack_a0;
  uStack_e8 = uStack_88;
  uStack_f0 = uStack_90;
  uStack_d8 = uStack_78;
  dStack_e0 = (double)uStack_80;
  func_0x00010c219960(lVar5,param_2,&uStack_100);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c29bf00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGAffineTransformMakeTranslation(&uStack_130,0,in_d3);
  uStack_f8 = uStack_128;
  uStack_100 = uStack_130;
  uStack_e8 = uStack_118;
  uStack_f0 = uStack_120;
  uStack_d8 = uStack_108;
  dStack_e0 = dStack_110;
  func_0x00010c219960(uVar3,param_2,&uStack_100);
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010c27a940(*(undefined8 *)(param_1 + 0x40),param_2,*(undefined8 *)(param_1 + 0x20));
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  dVar8 = dStack_110 * 0.6;
  puStack_198 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_190 = 0xc2000000;
  pcStack_188 = FUN_1052166b4;
  puStack_180 = &UNK_110870740;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uStack_178 = uVar4;
  lStack_170 = lVar5;
  _objc_retain(lVar6);
  uStack_158 = uStack_c8;
  uStack_160 = uStack_d0;
  uStack_148 = uStack_b8;
  uStack_150 = uStack_c0;
  uStack_138 = uStack_a8;
  uStack_140 = uStack_b0;
  puStack_1c0 = puVar1;
  uStack_1b8 = 0xc2000000;
  pcStack_1b0 = FUN_105216760;
  puStack_1a8 = &UNK_110841f20;
  lStack_1a0 = lVar6;
  lStack_168 = lVar6;
  _objc_retain(lVar6);
  _objc_retain(lVar5);
  func_0x00010bf03440(dVar8,0,puVar2,param_2,2,&puStack_198,&puStack_1c0);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010c27a940(*(undefined8 *)(param_1 + 0x40),param_2,*(undefined8 *)(param_1 + 0x20));
  puStack_1e8 = puVar1;
  uStack_1e0 = 0xc2000000;
  uStack_1d8 = 0x10521679c;
  puStack_1d0 = &UNK_110842e18;
  puStack_218 = puVar1;
  uStack_210 = 0xc2000000;
  pcStack_208 = FUN_1052167d8;
  puStack_200 = &UNK_110848bd8;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  uStack_1c8 = uVar3;
  _objc_retain(uVar7);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uStack_1f8 = uVar7;
  _objc_retain(uVar4);
  uStack_1f0 = uVar4;
  _objc_retain(uVar3);
  func_0x00010bf03460(dVar8,0,0x3ff0000000000000,0,puVar2,param_2,2,&puStack_1e8,&puStack_218);
  _objc_release(uStack_1f0);
  _objc_release(uStack_1f8);
  _objc_release(uStack_1c8);
  _objc_release(lStack_1a0);
  _objc_release(lStack_168);
  _objc_release(lStack_170);
  _objc_release(uStack_178);
  _objc_release(uVar3);
  _objc_release(lVar6);
  _objc_release(lVar5);
  return;
}



/* Entry: 1052166b4; end: 10521675f;  */

void FUN_1052166b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0x3f800000);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_60 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x28),param_2,&uStack_60);
  uStack_58 = *(undefined8 *)(param_1 + 0x40);
  uStack_60 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = *(undefined8 *)(param_1 + 0x50);
  uStack_50 = *(undefined8 *)(param_1 + 0x48);
  uStack_38 = *(undefined8 *)(param_1 + 0x60);
  uStack_40 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x30),param_2,&uStack_60);
  return;
}



/* Entry: 105216760; end: 1052167d7;  */

void FUN_105216760(long param_1,undefined8 param_2)

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



/* Entry: 1052167d8; end: 10521680f;  */

void FUN_1052167d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c27ac00(uVar1);
  func_0x00010bf43bc0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf941b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_endAppearanceTransition_1125c2a10);
  return;
}



/* Entry: 105216810; end: 10521681b; -[SCComposerSubscreenSearchBoxDismissingTransition transitionDuration:] */

undefined8 FUN_105216810(void)

{
  return 0x3fc70a3d70a3d70a;
}



/* Entry: 10521681c; end: 105216c0b; -[SCComposerSubscreenSearchBoxDismissingTransition animateTransition:] */

void FUN_10521681c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
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
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010c29c220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17b00();
  uVar3 = uVar2;
  func_0x00010c10f380();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b6568;
  _objc_opt_class(PTR_PTR_1126b6568);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c247e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar5 = uVar3;
  func_0x00010010fab4(uVar3,PTR_DAT_1126a4f50);
  uVar1 = uVar3;
  if ((int)uVar5 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  puVar4 = PTR_DAT_1126a4f58;
  _objc_retain(uVar2);
  uVar5 = uVar2;
  func_0x00010010fab4(uVar2,puVar4);
  uVar3 = uVar2;
  if ((int)uVar5 == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(uVar2);
  if (uVar3 == 0) {
    func_0x00010c27ac00(param_3);
    func_0x00010bf43bc0(param_3);
    func_0x00010bf941a0(uVar2);
  }
  else {
    uVar5 = uVar2;
    func_0x00010bfcae80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010bfc9f40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar2;
    func_0x00010bfcae60();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_3;
    func_0x00010bf4b2a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    if (uVar5 == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
    }
    else {
      func_0x00010c14f8c0(&uStack_b0,uVar5);
    }
    _objc_release(uVar8);
    uVar8 = param_3;
    func_0x00010bf4b2a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    if (uVar6 == 0) {
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
    }
    else {
      func_0x00010c14f8c0(&uStack_e0,uVar6);
    }
    _objc_release(uVar8);
    func_0x00010c1a7f60(uVar6);
    uVar9 = uStack_c0;
    func_0x00010c219960(uVar6);
    uVar8 = uVar7;
    func_0x00010c065580(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f7b20();
    _objc_release(uVar8);
    uVar8 = uVar7;
    func_0x00010c065580(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4cdc0();
    func_0x00010c182300(uVar7);
    _objc_release(uVar8);
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x00010c27a940(param_1);
    _objc_retain(uVar2);
    _objc_retain(uVar5);
    _objc_retain(param_3);
    _objc_retain(uVar2);
    _objc_retain(uVar5);
    _objc_retain(uVar7);
    _objc_retain(uVar6);
    func_0x00010bf03420(uVar9,puVar4);
    _objc_release(uVar2);
    _objc_release(param_3);
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 105216c0c; end: 105216cff;  */

void FUN_105216c0c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 in_d3;
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
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uStack_58 = *(undefined8 *)(param_1 + 0x48);
  uStack_60 = *(undefined8 *)(param_1 + 0x40);
  uStack_48 = *(undefined8 *)(param_1 + 0x58);
  uStack_50 = *(undefined8 *)(param_1 + 0x50);
  uStack_38 = *(undefined8 *)(param_1 + 0x68);
  uStack_40 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x28),param_2,&uStack_60);
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_60 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x30),param_2,&uStack_60);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGAffineTransformMakeTranslation(&uStack_90,0,in_d3);
  uStack_58 = uStack_88;
  uStack_60 = uStack_90;
  uStack_48 = uStack_78;
  uStack_50 = uStack_80;
  uStack_38 = uStack_68;
  uStack_40 = uStack_70;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x38),param_2,&uStack_60);
  _objc_release(uVar2);
  return;
}



/* Entry: 105216d00; end: 105216d63;  */

void FUN_105216d00(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_48 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = *(undefined8 *)(param_1 + 0x50);
  uStack_40 = *(undefined8 *)(param_1 + 0x48);
  uStack_28 = *(undefined8 *)(param_1 + 0x60);
  uStack_30 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_50);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = uVar2;
  func_0x00010c27ac00(uVar2);
  func_0x00010bf43bc0(uVar2,param_2,(uint)uVar1 ^ 1);
  func_0x00010bf941a0(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 105216d64; end: 105216dbf; -[SCComposerSubscreenSearchBoxTransition animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_105216d64(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a4f58);
  puVar2 = (undefined *)0x0;
  if ((param_3 != 0) && ((int)lVar1 != 0)) {
    puVar2 = PTR_PTR_1126b6570;
    _objc_opt_new(PTR_PTR_1126b6570);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105216dc0; end: 105216e1b; -[SCComposerSubscreenSearchBoxTransition animationControllerForDismissedController:] */

void FUN_105216dc0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010010fab4(param_3,PTR_DAT_1126a4f58);
  puVar2 = (undefined *)0x0;
  if ((param_3 != 0) && ((int)lVar1 != 0)) {
    puVar2 = PTR_PTR_1126b6578;
    _objc_opt_new(PTR_PTR_1126b6578);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105216e1c; end: 105216e9f; -[SCComposerSubscreenSearchBoxTransition presentationControllerForPresentedViewController:presentingViewController:sourceViewController:] */

void FUN_105216e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6568;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c038a40();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105216ea0; end: 105217073;  */

void FUN_105216ea0(undefined8 *param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  puVar1 = PTR__CGAffineTransformIdentity_110347008;
  if (param_8 != 0) {
    _objc_retain(param_9);
    _objc_retain(param_8);
    uVar6 = param_6;
    func_0x00010c262ca0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0(param_6);
    func_0x00010bf51460(uVar6,param_7,param_9);
    dVar3 = param_2;
    uVar7 = param_3;
    uVar8 = param_4;
    uVar9 = param_5;
    _objc_release(uVar6);
    lVar2 = param_8;
    func_0x00010c262ca0(param_8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb68e0(param_8);
    _objc_release(param_8);
    func_0x00010bf51460(dVar3,uVar7,uVar8,uVar9,lVar2,param_7,param_9);
    _objc_release(param_9);
    _objc_release(lVar2);
    dVar4 = dVar3;
    _CGRectGetMinX(dVar3,uVar7,uVar8,uVar9);
    dVar5 = param_2;
    _CGRectGetMinX(param_2,param_3,param_4,param_5);
    _CGRectGetMinY(dVar3,uVar7,uVar8,uVar9);
    _CGRectGetMinY(param_2,param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbaac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CGAffineTransformMakeTranslation_110347030)
              (param_1,dVar4 - dVar5,dVar3 - param_2);
    return;
  }
  uVar6 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar7 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  param_1[1] = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  *param_1 = uVar6;
  param_1[3] = uVar8;
  param_1[2] = uVar7;
  uVar6 = *(undefined8 *)(puVar1 + 0x20);
  param_1[5] = *(undefined8 *)(puVar1 + 0x28);
  param_1[4] = uVar6;
  return;
}



/* Entry: 105217074; end: 10521713b; -[SCComposerStoriesWatchStateStore initWithStoryIdsToObserve:readReceiptCoordinator:] */

undefined1 *
FUN_105217074(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6f68;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10521713c; end: 1052171ab; -[SCComposerStoriesWatchStateStore dealloc] */

void FUN_10521713c(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12cf80();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126e6f68;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1052171ac; end: 1052171b7; -[SCComposerStoriesWatchStateStore pushToValdiMarshaller:] */

undefined8 FUN_1052171ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b75c180(param_3,param_1);
  func_0x00010b75c188();
  func_0x00010b75c14c();
  func_0x00010b75c15c();
  return param_3;
}



/* Entry: 1052171b8; end: 1052171f7; -[SCComposerStoriesWatchStateStore _removeWatchStoryUpdateCallback] */

void FUN_1052171b8(long param_1)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1052171f8; end: 10521735b; -[SCComposerStoriesWatchStateStore getWatchStatesWithCompletion:] */

void FUN_1052171f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1052172a8;
  puStack_40 = &UNK_110865eb8;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c108ee0(uVar1,param_2,uVar2,&puStack_58);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10521735c; end: 1052173ff;  */

void FUN_10521735c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b6580;
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c259cc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010bf08ca0(param_3);
  _objc_release(param_3);
  func_0x00010c04d840(puVar1,param_2,uVar2,(int)uVar3 == 100);
  func_0x00010befa120(uVar4,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105217400; end: 1052174ab; -[SCComposerStoriesWatchStateStore onWatchStatesUpdatedWithCallback:] */

void FUN_105217400(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain();
  _objc_retain(param_3);
  _objc_sync_enter(param_1);
  uVar1 = param_3;
  _objc_retainBlock();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1052174ac;
  puStack_40 = &UNK_110842e18;
  lStack_38 = param_1;
  _objc_retainBlock(&puStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1052174ac; end: 1052174b3;  */

void FUN_1052174ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8df90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__removeWatchStoryUpdateCallback_112581180);
  return;
}



/* Entry: 1052174b4; end: 10521750b; -[SCComposerStoriesWatchStateStore _updateStoryDidGetGenerateNewReadReceipt:] */

void FUN_1052174b4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf4b900(uVar2,param_2,param_3);
    if (((int)uVar2 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
      (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10521750c; end: 1052175d3; -[SCComposerStoriesWatchStateStore didUpdateWithStoriesSnapReadReceiptUpdateRequest:fromPullToRefreshSync:] */

void FUN_10521750c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0bc800(param_3);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1052175d4; end: 1052175d7;  */

void FUN_1052175d4(void)

{
  return;
}



/* Entry: 1052175d8; end: 10521761f;  */

void FUN_1052175d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee0ee0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105217620; end: 10521765b; -[SCComposerStoriesWatchStateStore .cxx_destruct] */

void FUN_105217620(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10521765c; end: 1052176cf; -[SCComposerStoriesWatchStateStoreFactory initWithReadReceiptCoordinator:] */

undefined1 * FUN_10521765c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6f70;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1052176d0; end: 1052176db; -[SCComposerStoriesWatchStateStoreFactory pushToValdiMarshaller:] */

undefined8 FUN_1052176d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b75c180(param_3,param_1);
  func_0x00010b75c188();
  func_0x00010b75c14c();
  func_0x00010b75c15c();
  return param_3;
}



/* Entry: 1052176dc; end: 1052177df; -[SCComposerStoriesWatchStateStoreFactory getPublisherWatchStateStoreWithReq:callback:] */

void FUN_1052176dc(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = *(long *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    puVar2 = PTR_PTR_1126b3588;
    _objc_alloc(PTR_PTR_1126b3588);
    func_0x00010c02b2e0();
    (**(code **)(param_4 + 0x10))(param_4,0,puVar2);
  }
  else {
    puVar1 = PTR_PTR_1126b6588;
    _objc_alloc(PTR_PTR_1126b6588);
    puVar2 = param_3;
    func_0x00010c259d40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04dd60(puVar1);
    (**(code **)(param_4 + 0x10))(param_4,puVar1,0);
    _objc_release(param_4);
    param_4 = puVar1;
  }
  _objc_release(param_4);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1052177e0; end: 1052177eb; -[SCComposerStoriesWatchStateStoreFactory .cxx_destruct] */

void FUN_1052177e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052177ec; end: 10521785f; -[SCMusicFeatureProviderServices initWithMusicFeatureProviderFactory:] */

undefined1 * FUN_1052177ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6f78;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105217860; end: 105217867; -[SCMusicFeatureProviderServices musicFeatureProviderFactory] */

undefined8 FUN_105217860(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105217868; end: 105217873; -[SCMusicFeatureProviderServices .cxx_destruct] */

void FUN_105217868(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105217874; end: 1052178e7; -[SCDeeplinkActionHandler initWithDeepLinkHandling:] */

undefined1 * FUN_105217874(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6f80;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1052178e8; end: 105217933; +[SCDeeplinkActionHandler _responseWithError:] */

void FUN_1052178e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b6590;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c196ee0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105217934; end: 105217bd3; -[SCDeeplinkActionHandler openDeeplinkURLWithRequest:] */

void FUN_105217934(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae6b8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105217a0c;
  puStack_48 = &UNK_11084f340;
  uStack_40 = uVar1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bf54280(puVar2,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105217bd4; end: 105217d07;  */

void FUN_105217bd4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  func_0x00010c0be280(param_2);
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105217d08; end: 105217d9b;  */

void FUN_105217d08(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b6528;
  func_0x00010be95260(PTR_PTR_1126b6528,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105217d9c; end: 105217e0b;  */

void FUN_105217d9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b6528;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c09e4e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be95260(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105217e0c; end: 105217e57;  */

void FUN_105217e0c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126b6528;
  func_0x00010be95260(PTR_PTR_1126b6528,param_2,&PTR____CFConstantStringClassReference_110dcbb58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105217e58; end: 105217e63; -[SCDeeplinkActionHandler pushToValdiMarshaller:] */

undefined8 FUN_105217e58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df428;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  _objc_release(param_1);
  return param_3;
}



/* Entry: 105217e64; end: 105217e6f; -[SCDeeplinkActionHandler .cxx_destruct] */

void FUN_105217e64(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105217e70; end: 105217f53; -[SCSearchV2S2CellBridgeImpl getS2CellIdForLatLngWithLat:lng:level:] */

void FUN_105217e70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_5);
  _CLLocationCoordinate2DMake(param_1,param_2);
  puVar1 = PTR_PTR_1126b6598;
  func_0x00010bf33ee0(PTR_PTR_1126b6598);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  if (param_5 != 0) {
    lVar2 = param_5;
    func_0x00010c067ec0(param_5);
    func_0x00010c0f3ae0(puVar1,param_4,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  puVar1 = PTR_PTR_1126b65a0;
  _objc_alloc(PTR_PTR_1126b65a0);
  puVar4 = puVar3;
  func_0x00010bfc6400(puVar3);
  func_0x00010af28d88();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c046780(puVar1,param_4,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105217f54; end: 105217f5b; -[SCSearchV2S2CellBridgeImpl shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_105217f54(void)

{
  return 0;
}



/* Entry: 105217f5c; end: 105217f67; -[SCSearchV2S2CellBridgeImpl pushToValdiMarshaller:] */

undefined8 FUN_105217f5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b899130(param_3,param_1);
  func_0x00010b899128();
  func_0x00010b8990f4();
  func_0x00010b899104();
  return param_3;
}



/* Entry: 105217f68; end: 10521802b; -[SCOdlvScope initWithDelegate:uiContainer:challenge:] */

undefined1 *
FUN_105217f68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e6f88;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10521802c; end: 105218043; -[SCOdlvScope delegate] */

void FUN_10521802c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105218044; end: 10521804b; -[SCOdlvScope uiContainer] */

undefined8 FUN_105218044(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10521804c; end: 105218053; -[SCOdlvScope challenge] */

undefined8 FUN_10521804c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105218054; end: 10521808b; -[SCOdlvScope .cxx_destruct] */

void FUN_105218054(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10521808c; end: 10521814f; -[SCTwoFAScope initWithDelegate:uiContainer:context:] */

undefined1 *
FUN_10521808c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e6f90;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105218150; end: 105218167; -[SCTwoFAScope delegate] */

void FUN_105218150(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105218168; end: 10521816f; -[SCTwoFAScope uiContainer] */

undefined8 FUN_105218168(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105218170; end: 105218177; -[SCTwoFAScope context] */

undefined8 FUN_105218170(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105218178; end: 1052181af; -[SCTwoFAScope .cxx_destruct] */

void FUN_105218178(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1052181b0; end: 105218223; +[SCTwoFAContext cosSMS2FARequiredWithObfuscatedPhone:isSwitchable:] */

void FUN_1052181b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af358;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_3;
  _objc_release(uVar3);
  puVar2[0x38] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105218224; end: 10521827f; +[SCTwoFAContext cosTOTP2FARequiredWithIsSwitchable:] */

void FUN_105218224(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126af358;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  puVar2[0x28] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105218280; end: 1052182eb; +[SCTwoFAContext otpTwoFARequiredWithChallenge:smsEnabled:] */

void FUN_105218280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af358;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
  puVar2[0x18] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1052182ec; end: 105218357; +[SCTwoFAContext smsTwoFARequiredWithChallenge:] */

void FUN_1052182ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126af358;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105218358; end: 10521837b; -[SCTwoFAContext copyWithZone:] */

undefined8 FUN_105218358(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10521837c; end: 10521840b; -[SCTwoFAContext hash] */

void FUN_10521837c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_50 = (ulong)*(byte *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 0x38);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_1126e6f98;
  puStack_90 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10521840c; end: 10521844f; -[SCTwoFAContext internalInit] */

void FUN_10521840c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e6f98;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105218450; end: 10521854f; -[SCTwoFAContext isEqual:] */

long FUN_105218450(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105218528:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105218534;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
          (*(char *)(param_1 + 0x18) == *(char *)(param_3 + 0x18))) &&
         (*(char *)(param_1 + 0x28) == *(char *)(param_3 + 0x28))))) &&
       (*(char *)(param_1 + 0x38) == *(char *)(param_3 + 0x38))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x30);
          if (lVar3 != *(long *)(param_3 + 0x30)) {
            func_0x00010c071ae0();
            goto LAB_105218534;
          }
          goto LAB_105218528;
        }
      }
    }
    lVar3 = 0;
  }
LAB_105218534:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105218550; end: 10521864f; -[SCTwoFAContext matchOtpTwoFARequired:smsTwoFARequired:cosTOTP2FARequired:cosSMS2FARequired:] */

void FUN_105218550(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 < 2) {
    if (lVar3 != 0) {
      if ((lVar3 == 1) && (param_4 != 0)) {
        (**(code **)(param_4 + 0x10))(param_4,*(undefined8 *)(param_1 + 0x20));
      }
      goto LAB_105218620;
    }
    if (param_3 == 0) goto LAB_105218620;
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    uVar1 = *(undefined1 *)(param_1 + 0x18);
    pcVar4 = *(code **)(param_3 + 0x10);
    lVar3 = param_3;
  }
  else {
    if (lVar3 == 2) {
      if (param_5 != 0) {
        (**(code **)(param_5 + 0x10))(param_5,*(undefined1 *)(param_1 + 0x28));
      }
      goto LAB_105218620;
    }
    if ((lVar3 != 3) || (param_6 == 0)) goto LAB_105218620;
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar1 = *(undefined1 *)(param_1 + 0x38);
    pcVar4 = *(code **)(param_6 + 0x10);
    lVar3 = param_6;
  }
  (*pcVar4)(lVar3,uVar2,uVar1);
LAB_105218620:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105218650; end: 10521868b; -[SCTwoFAContext .cxx_destruct] */

void FUN_105218650(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10521868c; end: 1052187af; -[SCNGOPhoneEntryScope initWithUiContainer:phoneNumber:context:service:delegate:dataSource:] */

undefined1 *
FUN_10521868c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e6fa0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x28),param_6);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x30),param_7);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x38),param_8);
    *(undefined1 *)((long)puVar1 + 8) = 1;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1052187b0; end: 1052187b7; -[SCNGOPhoneEntryScope uiContainer] */

undefined8 FUN_1052187b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1052187b8; end: 1052187bf; -[SCNGOPhoneEntryScope phoneNumber] */

undefined8 FUN_1052187b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1052187c0; end: 1052187c7; -[SCNGOPhoneEntryScope context] */

undefined8 FUN_1052187c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1052187c8; end: 1052187df; -[SCNGOPhoneEntryScope service] */

void FUN_1052187c8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1052187e0; end: 1052187f7; -[SCNGOPhoneEntryScope delegate] */

void FUN_1052187e0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1052187f8; end: 10521880f; -[SCNGOPhoneEntryScope dataSource] */

void FUN_1052187f8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105218810; end: 105218817; -[SCNGOPhoneEntryScope asciiKeypadEnabled] */

undefined1 FUN_105218810(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105218818; end: 10521881f; -[SCNGOPhoneEntryScope setAsciiKeypadEnabled:] */

void FUN_105218818(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 105218820; end: 105218867; -[SCNGOPhoneEntryScope .cxx_destruct] */

void FUN_105218820(long param_1)

{
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105218868; end: 1052188cb; +[SCNGOPhoneEntrySubmitRequestError retryableErrorWithMessage:] */

void FUN_105218868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126afb48;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1052188cc; end: 105218963; +[SCNGOPhoneEntrySubmitRequestError unretryableErrorWithMessage:errorData:] */

void FUN_1052188cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126afb48;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105218964; end: 105218987; -[SCNGOPhoneEntrySubmitRequestError copyWithZone:] */

undefined8 FUN_105218964(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105218988; end: 105218a0b; -[SCNGOPhoneEntrySubmitRequestError hash] */

void FUN_105218988(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126e6fa8;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105218a0c; end: 105218a4f; -[SCNGOPhoneEntrySubmitRequestError internalInit] */

void FUN_105218a0c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e6fa8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105218a50; end: 105218b1f; -[SCNGOPhoneEntrySubmitRequestError isEqual:] */

long FUN_105218a50(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105218af8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105218b04;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_105218b04;
          }
          goto LAB_105218af8;
        }
      }
    }
    lVar3 = 0;
  }
LAB_105218b04:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105218b20; end: 105218ba7; -[SCNGOPhoneEntrySubmitRequestError matchRetryableError:unretryableError:] */

void FUN_105218b20(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + 0x10));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105218ba8; end: 105218be3; -[SCNGOPhoneEntrySubmitRequestError .cxx_destruct] */

void FUN_105218ba8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105218be4; end: 105218c97; -[SCNGOPhoneEntrySubmitRequestSuccess initWithVerificationNeeded:prompt:response:] */

undefined1 *
FUN_105218be4(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e6fb0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105218c98; end: 105218cbb; -[SCNGOPhoneEntrySubmitRequestSuccess copyWithZone:] */

undefined8 FUN_105218c98(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105218cbc; end: 105218d37; -[SCNGOPhoneEntrySubmitRequestSuccess hash] */

ulong * FUN_105218cbc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (ulong *)param_3) {
LAB_105218dc8:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105218dd4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
        if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_105218dd4;
        }
        goto LAB_105218dc8;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105218dd4:
  _objc_release(param_3);
  return (ulong *)puVar6;
}



/* Entry: 105218d38; end: 105218def; -[SCNGOPhoneEntrySubmitRequestSuccess isEqual:] */

long FUN_105218d38(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105218dc8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105218dd4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_105218dd4;
        }
        goto LAB_105218dc8;
      }
    }
    lVar3 = 0;
  }
LAB_105218dd4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105218df0; end: 105218df7; -[SCNGOPhoneEntrySubmitRequestSuccess verificationNeeded] */

undefined1 FUN_105218df0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105218df8; end: 105218dff; -[SCNGOPhoneEntrySubmitRequestSuccess prompt] */

undefined8 FUN_105218df8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105218e00; end: 105218e07; -[SCNGOPhoneEntrySubmitRequestSuccess response] */

undefined8 FUN_105218e00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105218e08; end: 105218e37; -[SCNGOPhoneEntrySubmitRequestSuccess .cxx_destruct] */

void FUN_105218e08(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105218e38; end: 105218ee3; -[SCNGOPhoneEntrySubmitRequestSuccessPrompt initWithTitle:message:] */

undefined1 *
FUN_105218e38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e6fb8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105218ee4; end: 105218f07; -[SCNGOPhoneEntrySubmitRequestSuccessPrompt copyWithZone:] */

undefined8 FUN_105218ee4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105218f08; end: 105218f7b; -[SCNGOPhoneEntrySubmitRequestSuccessPrompt hash] */

undefined8 * FUN_105218f08(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_105218ffc:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105219008;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_105219008;
        }
        goto LAB_105218ffc;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105219008:
  _objc_release(param_3);
  return puVar6;
}


