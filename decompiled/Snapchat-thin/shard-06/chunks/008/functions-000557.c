/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104ea7e40; end: 104ea7e9f; -[SCShareFriendViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea7e40(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1 + _DAT_112715938;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c22aae0();
  _objc_release(lVar1);
  puStack_28 = PTR_PTR_1126e4bb8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 104ea7ea0; end: 104ea7fbf; -[SCShareFriendViewController _updateDescriptionLabelWithUsername:scoreString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea7ea0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar2 = param_3;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010befa120(puVar1,param_2,param_3);
  }
  lVar2 = param_4;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010befa120(puVar1,param_2,param_4);
  }
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010b8166c0();
  _objc_release(lVar2);
  if ((int)lVar3 != 0) {
    func_0x00010c13fee0(puVar1);
  }
  puVar4 = puVar1;
  func_0x00010bf446e0(puVar1,param_2,&PTR____CFConstantStringClassReference_110db8fb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_112715958),param_2,puVar4);
  _objc_release(puVar4);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbe20();
  _objc_release(param_1);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ea7fc0; end: 104ea7fcf; -[SCShareFriendViewController _userTappedExportButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea7fc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22b250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112715944),PTR_s_shareUsernameURL_1126686b8);
  return;
}



/* Entry: 104ea7fd0; end: 104ea7fdf; -[SCShareFriendViewController _userTappedSendButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea7fd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15d910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112715944),PTR_s_sendUsername_112635060);
  return;
}



/* Entry: 104ea7fe0; end: 104ea7feb; -[SCShareFriendViewController _userTappedBackButton] */

void FUN_104ea7fe0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 104ea7fec; end: 104ea806b; -[SCShareFriendViewController transitionDuration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_104ea7fec(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  double dVar2;
  
  func_0x00010c29c220(param_3,param_2,
                      *(undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c06d1e0();
  if ((uVar1 & 1) == 0) {
    dVar2 = 0.25;
    if (0.0 < *(double *)(param_1 + _DAT_11271596c)) {
      dVar2 = *(double *)(param_1 + _DAT_11271596c);
    }
  }
  else {
    dVar2 = 0.45;
  }
  _objc_release(param_3);
  return dVar2;
}



/* Entry: 104ea806c; end: 104ea838b; -[SCShareFriendViewController animateTransition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea806c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  long lStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_7);
  uVar4 = param_7;
  func_0x00010c29c220(param_7,param_6,
                      *(undefined8 *)PTR__UITransitionContextFromViewControllerKey_110345e48);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_7;
  func_0x00010c29c220(param_7,param_6,
                      *(undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_7;
  func_0x00010bf4b2a0(param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar5;
  func_0x00010c06d1e0();
  uVar1 = uVar4;
  if ((uint)uVar7 == 0) {
    uVar1 = uVar5;
  }
  _objc_retain(uVar1);
  func_0x00010c27a940(param_5,param_6,param_7);
  uVar2 = (uint)uVar7 ^ 1;
  func_0x00010bf17b00(uVar1,param_6,uVar2,1);
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_104ea838c;
  puStack_a0 = &UNK_110856e10;
  _objc_retain(param_7);
  uStack_80 = (undefined1)uVar7;
  uStack_98 = param_7;
  _objc_retain(uVar5);
  uStack_90 = uVar5;
  _objc_retain(uVar1);
  ppuVar8 = &puStack_b8;
  uStack_88 = uVar1;
  _objc_retainBlock(ppuVar8);
  if ((uVar2 & 1) == 0) {
    uVar7 = uVar5;
    func_0x00010c29bf00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60(uVar6,param_6,uVar7);
    _objc_release(uVar7);
    uVar7 = uVar5;
    func_0x00010c29bf00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1cbe20();
    _objc_release(uVar7);
    uVar7 = uVar5;
    func_0x00010c29bf00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(uVar7);
    puVar9 = PTR_PTR_1126affa8;
    func_0x00010c22bc20(PTR_PTR_1126affa8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8760();
    _objc_release(puVar9);
    func_0x00010c193d20(*(undefined8 *)(param_5 + _DAT_112715948),param_6,0);
    lVar10 = (long)_DAT_11271594c;
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar10));
    _CGAffineTransformMakeTranslation(&uStack_e8,0,param_4);
    uStack_118 = uStack_e0;
    uStack_120 = uStack_e8;
    uStack_108 = uStack_d0;
    uStack_110 = uStack_d8;
    uStack_f8 = uStack_c0;
    uStack_100 = uStack_c8;
    func_0x00010c219960(*(undefined8 *)(param_5 + lVar10),param_6,&uStack_120);
    func_0x00010c1677c0(0,*(undefined8 *)(param_5 + _DAT_112715964));
    puStack_148 = puVar3;
    uStack_140 = 0xc2000000;
    uStack_138 = 0x104ea8414;
    puStack_130 = &UNK_110842e18;
    lStack_128 = param_5;
    func_0x00010bf03460(param_1,0,0x3fe6666666666666,0x3ff0000000000000,
                        PTR__OBJC_CLASS___UIView_1126aec20,param_6,2,&puStack_148,ppuVar8);
  }
  else {
    puStack_170 = puVar3;
    uStack_168 = 0xc2000000;
    uStack_160 = 0x104ea84c0;
    puStack_158 = &UNK_110842e18;
    lStack_150 = param_5;
    func_0x00010bf03440(param_1,0,PTR__OBJC_CLASS___UIView_1126aec20,param_6,0x30002,&puStack_170,
                        ppuVar8);
  }
  _objc_release(ppuVar8);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uVar1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(param_7);
  return;
}



/* Entry: 104ea838c; end: 104ea855b;  */

void FUN_104ea838c(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = (uint)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c27ac00();
  if (*(char *)(param_1 + 0x38) == '\x01' && uVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(uVar2);
  }
  func_0x00010bf43bc0(*(undefined8 *)(param_1 + 0x20));
  if (((uVar1 ^ 1) & 1) == 0) {
    func_0x00010bf17b00(*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf941b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_endAppearanceTransition_1125c2a10);
  return;
}



/* Entry: 104ea855c; end: 104ea855f; -[SCShareFriendViewController animationControllerForPresentedController:presentingController:sourceController:] */

void FUN_104ea855c(void)

{
  return;
}



/* Entry: 104ea8560; end: 104ea8563; -[SCShareFriendViewController animationControllerForDismissedController:] */

void FUN_104ea8560(void)

{
  return;
}



/* Entry: 104ea8564; end: 104ea888f; -[SCShareFriendViewController _didPan:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea8564(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  double dVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  double dStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  double dStack_68;
  
  lVar5 = (long)_DAT_112715968;
  uVar3 = *(undefined8 *)(param_5 + lVar5);
  lVar2 = param_5;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27adc0(uVar3,param_6,lVar2);
  dVar7 = param_2;
  _objc_release(lVar2);
  if (param_2 < 0.0) {
    param_2 = ABS(param_2);
    _pow(param_2,0x3fe8000000000000);
    dVar6 = param_2;
    func_0x00010b816218();
    dVar7 = -(double)(long)(param_2 * dVar6);
    param_2 = dVar7 / dVar6;
  }
  lVar4 = (long)_DAT_11271596c;
  *(undefined8 *)(param_5 + lVar4) = 0;
  lVar2 = *(long *)(param_5 + lVar5);
  func_0x00010c252440();
  if (lVar2 == 1) {
    if (*(long *)(param_5 + _DAT_11271594c) == 0) {
      dStack_68 = 0.0;
    }
    else {
      func_0x00010c27a460(&uStack_90);
    }
    *(double *)(param_5 + _DAT_112715970) = dStack_68;
  }
  else {
    lVar2 = *(long *)(param_5 + lVar5);
    func_0x00010c252440();
    if (lVar2 == 2) {
      _CGAffineTransformMakeTranslation
                (&uStack_c0,0,param_2 + *(double *)(param_5 + _DAT_112715970));
      lVar2 = (long)_DAT_11271594c;
      uStack_88 = uStack_b8;
      uStack_90 = uStack_c0;
      uStack_78 = uStack_a8;
      uStack_80 = uStack_b0;
      dStack_68 = dStack_98;
      uStack_70 = uStack_a0;
      func_0x00010c219960(*(undefined8 *)(param_5 + lVar2),param_6,&uStack_90);
      if (*(long *)(param_5 + lVar2) == 0) {
        uStack_78 = 0;
        uStack_80 = 0;
        dStack_68 = 0.0;
        uStack_70 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        func_0x00010c27a460(&uStack_90);
      }
      dVar7 = dStack_68;
      lVar2 = param_5;
      func_0x00010c29bf00(param_5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf20c00();
      func_0x00010c1677c0(dVar7 / (param_4 * -0.5) + 1.0,*(undefined8 *)(param_5 + _DAT_112715964));
      _objc_release(lVar2);
    }
    else {
      lVar2 = *(long *)(param_5 + lVar5);
      func_0x00010c252440();
      if (lVar2 == 3) {
        uVar3 = *(undefined8 *)(param_5 + lVar5);
        lVar2 = param_5;
        func_0x00010c29bf00(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c297a00(uVar3,param_6,lVar2);
        dVar6 = dVar7;
        _objc_release(lVar2);
        lVar2 = (long)_DAT_11271594c;
        if (*(long *)(param_5 + lVar2) == 0) {
          uStack_78 = 0;
          uStack_80 = 0;
          dStack_68 = 0.0;
          uStack_70 = 0;
          uStack_88 = 0;
          uStack_90 = 0;
        }
        else {
          func_0x00010c27a460(&uStack_90);
        }
        dVar1 = dStack_68;
        dVar9 = *(double *)(param_5 + _DAT_112715970);
        lVar5 = param_5;
        func_0x00010c29bf00(param_5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf20c00();
        dVar8 = param_4;
        _objc_release(lVar5);
        if (dVar7 <= 2000.0) {
          if (dVar1 - dVar9 <= param_4 * 0.15) {
            puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_e0 = 0xc2000000;
            pcStack_d8 = FUN_104ea8890;
            puStack_d0 = &UNK_110842e18;
            lStack_c8 = param_5;
            func_0x00010bf03460(0x3fd999999999999a,0,0x3fe6666666666666,0x3ff0000000000000,
                                PTR__OBJC_CLASS___UIView_1126aec20,param_6,2,&puStack_e8,0);
            return;
          }
        }
        else {
          lVar5 = param_5;
          func_0x00010c29bf00(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf20c00();
          func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar2));
          _objc_release(lVar5);
          *(double *)(param_5 + lVar4) = ABS(dVar8 - dVar6) / dVar7;
        }
        func_0x00010bf84b00(param_5,param_6,1,0);
      }
    }
  }
  return;
}



/* Entry: 104ea8890; end: 104ea88fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea8890(long param_1,undefined8 param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_50 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_38 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_40 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_28 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_30 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271594c),param_2,
                      &uStack_50);
  func_0x00010c1677c0(0x3ff0000000000000,
                      *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112715964));
  return;
}



/* Entry: 104ea88fc; end: 104ea8977; -[SCShareFriendViewController _iconPaperPlaneFillImage] */

void FUN_104ea88fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126b0c40;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe7ac0(0x4032000000000000,0x4030000000000000,0x3ff0000000000000,0x3ff0000000000000,
                      0x3ff0000000000000,0x3ff0000000000000,puVar2,param_2,0x25,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ea8978; end: 104ea8a9f; -[SCShareFriendViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea8978(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112715944,0);
  _objc_storeStrong(param_1 + _DAT_112715968,0);
  _objc_storeStrong(param_1 + _DAT_112715964,0);
  _objc_storeStrong(param_1 + _DAT_112715960,0);
  _objc_storeStrong(param_1 + _DAT_11271595c,0);
  _objc_storeStrong(param_1 + _DAT_112715958,0);
  _objc_storeStrong(param_1 + _DAT_112715954,0);
  _objc_storeStrong(param_1 + _DAT_112715950,0);
  _objc_storeStrong(param_1 + _DAT_11271594c,0);
  _objc_storeStrong(param_1 + _DAT_112715948,0);
  _objc_storeStrong(param_1 + _DAT_11271593c,0);
  _objc_storeStrong(param_1 + _DAT_11271592c,0);
  _objc_storeStrong(param_1 + _DAT_112715940,0);
  _objc_destroyWeak(param_1 + _DAT_112715938);
  _objc_destroyWeak(param_1 + _DAT_112715934);
  _objc_storeStrong(param_1 + _DAT_112715930,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112715928,0);
  return;
}



/* Entry: 104ea8aa0; end: 104ea8af7; -[SCSnapchattersErrorHandler observe:inLifeCycle:] */

void FUN_104ea8aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010c25ff60(param_3,param_2,&PTR___NSConcreteGlobalBlock_110856e60);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104ea8af8; end: 104ea8dd7;  */

void FUN_104ea8af8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bdc13c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf0aa20();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    lVar3 = lVar2;
    func_0x00010bf0a700();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) goto LAB_104ea8b58;
    lVar3 = lVar2;
    func_0x00010bf0a5e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) goto LAB_104ea8b5c;
    if (param_2 == 0) goto LAB_104ea8b70;
    lVar3 = param_2;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) goto LAB_104ea8b70;
    lVar3 = param_2;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf3ec40();
    if (lVar4 != -0x3f3) {
      lVar4 = lVar3;
      func_0x00010bf87dc0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c0720c0();
      if (((int)lVar5 == 0) || (lVar5 = lVar3, func_0x00010bf3ec40(), lVar5 < 400)) {
        _objc_release(lVar4);
      }
      else {
        lVar5 = lVar3;
        func_0x00010bf3ec40();
        _objc_release(lVar4);
        if (lVar5 < 600) goto LAB_104ea8b6c;
      }
      lVar4 = lVar3;
      func_0x00010c292820();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
LAB_104ea8d4c:
        puVar1 = PTR_PTR_1126afca8;
        func_0x00010bcbea20();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c237520(puVar1);
      }
      else {
        lVar5 = lVar3;
        func_0x00010c292820();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar6 == 0) {
          lVar6 = lVar3;
          func_0x00010c292820();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar6);
          _objc_release(lVar5);
          _objc_release(lVar4);
          if (lVar7 == 0) goto LAB_104ea8d4c;
        }
        else {
          _objc_release();
          _objc_release(lVar5);
          _objc_release(lVar4);
        }
        puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_70 = 0xc2000000;
        pcStack_68 = FUN_104ea8dd8;
        puStack_60 = &UNK_110842e18;
        _objc_retain(lVar3);
        lStack_58 = lVar3;
        func_0x000100162d98("APPSTORE",&puStack_78);
        lVar4 = lStack_58;
      }
      _objc_release(lVar4);
      lVar4 = lVar3;
      func_0x00010c292820();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 != 0) {
        func_0x00010c292820(lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar3);
        _objc_release(lVar4);
      }
    }
  }
  else {
LAB_104ea8b58:
    _objc_release();
LAB_104ea8b5c:
    func_0x00010bf987e0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_104ea8b6c:
  _objc_release();
LAB_104ea8b70:
  _objc_release(lVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 104ea8dd8; end: 104ea8e8b;  */

void FUN_104ea8dd8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c292820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126afca8;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c292820(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c237520(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 104ea8e8c; end: 104ea8f6f; -[SCSnapchattersErrorHandlerEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea8e8c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  lVar6 = (long)_DAT_112715974;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar1;
  _objc_release(uVar4);
  lVar5 = param_1 + _DAT_112715984;
  _objc_loadWeakRetained(lVar5);
  lVar2 = lVar5;
  func_0x00010c244f20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = lVar2;
  func_0x00010c269d40(lVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar5;
  func_0x00010c244ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  puVar1 = PTR_PTR_1126b1a78;
  _objc_opt_new();
  lVar5 = (long)_DAT_112715978;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  func_0x00010c0e0720(*(undefined8 *)(param_1 + lVar5),param_2,lVar3,
                      *(undefined8 *)(param_1 + lVar6));
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 104ea8f70; end: 104ea8fd3; -[SCSnapchattersErrorHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea8f70(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112715984);
  _objc_destroyWeak(param_1 + _DAT_112715980);
  _objc_destroyWeak(param_1 + _DAT_11271597c);
  _objc_storeStrong(param_1 + _DAT_112715974,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112715978,0);
  return;
}



/* Entry: 104ea8fd4; end: 104ea9047; -[SCLensCollectionDeepLinkHandlerPlugin initWithLensCollectionsActivator:] */

undefined1 * FUN_104ea8fd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e4bc0;
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



/* Entry: 104ea9048; end: 104ea9137; -[SCLensCollectionDeepLinkHandlerPlugin canHandleDeepLink:] */

uint FUN_104ea9048(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  uint uVar4;
  
  _objc_retain(param_3);
  ppuVar1 = param_3;
  func_0x00010bfa1820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c0720c0();
  _objc_release(ppuVar1);
  if ((int)ppuVar2 == 0) {
    uVar4 = 0;
  }
  else {
    ppuVar2 = param_3;
    func_0x00010c11d6e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar3 != (undefined **)0x0) {
      ppuVar1 = ppuVar3;
    }
    _objc_retain(ppuVar1);
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    ppuVar2 = ppuVar1;
    func_0x00010c0720c0(ppuVar1,param_2,&PTR____CFConstantStringClassReference_110db9078);
    _objc_release(ppuVar1);
    uVar4 = (uint)ppuVar2 ^ 1;
  }
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 104ea9138; end: 104ea91af; -[SCLensCollectionDeepLinkHandlerPlugin handleDeepLink:additionalInfo:uiContainer:sourceViewController:] */

void FUN_104ea9138(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010c0e00e0(param_4,param_2,&PTR____CFConstantStringClassReference_110db9038);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_4);
  if ((int)puVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beefd40();
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104ea91b0; end: 104ea91bb; -[SCLensCollectionDeepLinkHandlerPlugin .cxx_destruct] */

void FUN_104ea91b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104ea91bc; end: 104ea9257; -[SCLensCollectionDeepLinkProcessor initWithNavigationDelegate:lensCollectionPresenter:] */

undefined1 *
FUN_104ea91bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e4bc8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ea9258; end: 104ea94df; -[SCLensCollectionDeepLinkProcessor processDeepLinkURL:additionalInfo:delegate:] */

void FUN_104ea9258(long param_1,undefined8 param_2,undefined **param_3,long param_4,
                  undefined8 param_5)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  if (param_4 != 0) {
    func_0x00010bef7f60(puVar2);
  }
  ppuVar3 = param_3;
  func_0x00010c0f5820();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = param_3;
  func_0x00010c11d6e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar5 != (undefined **)0x0) {
    ppuVar1 = ppuVar5;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar5);
  _objc_release(ppuVar4);
  if (ppuVar3 != (undefined **)0x0) {
    func_0x00010c1d0640(puVar2);
  }
  lVar6 = param_1;
  func_0x00010be42040();
  if ((int)lVar6 == 0) {
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010c10d100();
    _objc_release(param_1);
    func_0x00010bf94720(param_5);
  }
  else {
    _objc_initWeak(auStack_68,param_5);
    func_0x00010c0720c0(ppuVar1);
    lVar6 = param_1;
    func_0x00010bdd2c80(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = *(undefined8 *)(param_1 + 0x10);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    lVar7 = param_1;
    func_0x00010c2a0180();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x00010c10ba80(uVar8);
    _objc_release(lVar7);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_70);
    _objc_release(lVar6);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(ppuVar1);
  _objc_release(ppuVar3);
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104ea94e0; end: 104ea950f;  */

void FUN_104ea94e0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf94720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104ea9510; end: 104ea9517; -[SCLensCollectionDeepLinkProcessor shouldForceNavigation] */

undefined8 FUN_104ea9510(void)

{
  return 0;
}



/* Entry: 104ea9518; end: 104ea951b; -[SCLensCollectionDeepLinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:] */

void FUN_104ea9518(void)

{
  return;
}



/* Entry: 104ea951c; end: 104ea957b; -[SCLensCollectionDeepLinkProcessor _isModularCameraViewType:] */

ulong FUN_104ea951c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110db9098);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110db90b8);
  }
  else {
    uVar1 = 1;
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 104ea957c; end: 104ea95f3; -[SCLensCollectionDeepLinkProcessor _basicReplyParamsWithAddToMyStory:] */

void FUN_104ea957c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae6c0;
  func_0x00010c25bbc0(PTR_PTR_1126ae6c0,param_2,&PTR____CFConstantStringClassReference_110daafd8,0,0
                      ,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae6d0;
  _objc_alloc(PTR_PTR_1126ae6d0);
  func_0x00010c03e5a0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104ea95f4; end: 104ea961f; -[SCLensCollectionDeepLinkProcessor .cxx_destruct] */

void FUN_104ea95f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104ea9620; end: 104ea96bb; -[SCLensCollectionDeepLinkProcessorPlugin initWithNavigationDelegate:lensCollectionPresenter:] */

undefined1 *
FUN_104ea9620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e4bd0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104ea96bc; end: 104ea96cf; -[SCLensCollectionDeepLinkProcessorPlugin identifier] */

void FUN_104ea96bc(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbc488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__NSStringFromClass_1103455e8)();
  return;
}



/* Entry: 104ea96d0; end: 104ea96d7; -[SCLensCollectionDeepLinkProcessorPlugin priority] */

undefined8 FUN_104ea96d0(void)

{
  return 1000;
}



/* Entry: 104ea96d8; end: 104ea96eb; -[SCLensCollectionDeepLinkProcessorPlugin canProvideProcessorForFeature:] */

void FUN_104ea96d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0720d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_isEqualToString__1125fa240,
             &PTR____CFConstantStringClassReference_110f83a78);
  return;
}



/* Entry: 104ea96ec; end: 104ea9737; -[SCLensCollectionDeepLinkProcessorPlugin isValidDeepLink:] */

undefined8 FUN_104ea96ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bfa1820(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 104ea9738; end: 104ea9797; -[SCLensCollectionDeepLinkProcessorPlugin makeDeepLinkProcessor] */

void FUN_104ea9738(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b1a80;
  _objc_alloc(PTR_PTR_1126b1a80);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c02e740(puVar1,param_2,lVar2,*(undefined8 *)(param_1 + 0x10));
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ea9798; end: 104ea97c3; -[SCLensCollectionDeepLinkProcessorPlugin .cxx_destruct] */

void FUN_104ea9798(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104ea97c4; end: 104ea981f; -[SCLensCollectionActivationServiceProvider provide] */

void FUN_104ea97c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1a88;
  _objc_alloc(PTR_PTR_1126b1a88);
  func_0x00010bdef3a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0232a0(puVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ea9820; end: 104ea98e3; -[SCLensCollectionActivationServiceProvider _createLensCollectionCarouselPresenter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea9820(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  param_1 = param_1 + _DAT_11271599c;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010c11a2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c091780();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104ea98e4;
  puStack_40 = &UNK_110856e80;
  puVar3 = PTR_PTR_1126ae720;
  lStack_38 = lVar2;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104ea98e4; end: 104ea9943;  */

void FUN_104ea98e4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b1a90;
  _objc_alloc(PTR_PTR_1126b1a90);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfa1820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c023420(puVar1,param_2,uVar2,1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104ea9944; end: 104ea9bf7; -[SCLensCollectionActivationServiceProvider _createLensCollectionCarouselActivator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea9944(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined1 auStack_68 [8];
  
  _objc_initWeak(auStack_68,param_1);
  _objc_retain();
  lVar1 = param_1;
  func_0x00010bdef3c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  lVar2 = param_1 + _DAT_1127159a0;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c278c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1 + _DAT_1127159a4;
  _objc_loadWeakRetained();
  lVar4 = lVar2;
  func_0x00010c091500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = param_1 + _DAT_1127159a8;
  _objc_loadWeakRetained();
  lVar5 = lVar2;
  func_0x00010c090c20();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c090c40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar2);
  lVar2 = param_1 + _DAT_1127159ac;
  _objc_loadWeakRetained();
  lVar5 = lVar2;
  func_0x00010c0911a0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar5;
  func_0x00010c091180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar2);
  lVar2 = param_1 + _DAT_1127159b0;
  _objc_loadWeakRetained();
  lVar5 = lVar2;
  func_0x00010c090f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_1127159b4;
  _objc_loadWeakRetained();
  lVar2 = param_1;
  func_0x00010c095b60();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(param_1);
  puVar9 = PTR_PTR_1126ae720;
  _objc_retain(lVar1);
  _objc_retain(lVar8);
  func_0x00010bf11fe0(puVar9);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar8);
  _objc_release(lVar1);
  _objc_release(lVar8);
  _objc_release(lVar5);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar1);
  _objc_destroyWeak(auStack_68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 104ea9bf8; end: 104ea9bff;  */

void FUN_104ea9bf8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0b6bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_mainQueuePerformer_11260b508);
  return;
}



/* Entry: 104ea9c00; end: 104ea9c47;  */

void FUN_104ea9c00(void)

{
  _objc_alloc(PTR_PTR_1126b1a98);
  func_0x00010c025b60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104ea9c48; end: 104ea9cc7; -[SCLensCollectionActivationServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea9c48(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127159ac);
  _objc_destroyWeak(param_1 + _DAT_1127159b0);
  _objc_destroyWeak(param_1 + _DAT_1127159b4);
  _objc_destroyWeak(param_1 + _DAT_1127159a8);
  _objc_destroyWeak(param_1 + _DAT_1127159a0);
  _objc_destroyWeak(param_1 + _DAT_1127159a4);
  _objc_destroyWeak(param_1 + _DAT_1127159b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271599c);
  return;
}



/* Entry: 104ea9cc8; end: 104ea9d87; -[SCLensCollectionDeepLinkHandlerPluginEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea9cc8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b1aa0;
  _objc_alloc(PTR_PTR_1126b1aa0);
  lVar2 = param_1 + _DAT_1127159bc;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c0914c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0233a0(puVar1,param_2,lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  param_1 = param_1 + _DAT_1127159c0;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ea9d88; end: 104ea9dcb; -[SCLensCollectionDeepLinkHandlerPluginEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea9d88(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127159bc);
  _objc_destroyWeak(param_1 + _DAT_1127159c4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127159c0);
  return;
}



/* Entry: 104ea9dcc; end: 104ea9f23; -[SCLensCollectionDeepLinkProcessorEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea9dcc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126b1aa8;
  _objc_alloc(PTR_PTR_1126b1aa8);
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_1127159d0;
    _objc_loadWeakRetained(lVar6);
  }
  lVar2 = lVar6;
  func_0x00010c0d6760(lVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_1127159d4;
    _objc_loadWeakRetained(lVar7);
  }
  lVar4 = lVar7;
  func_0x00010c091660(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02e740(puVar1,param_2,lVar3,lVar5);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar6);
  lVar6 = 0;
  if (param_1 != 0) {
    lVar6 = param_1 + _DAT_1127159c8;
    _objc_loadWeakRetained(lVar6);
  }
  lVar2 = lVar6;
  func_0x00010c1018e0(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c125b60();
  _objc_release(lVar2);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104ea9f24; end: 104ea9f73; -[SCLensCollectionDeepLinkProcessorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104ea9f24(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127159d4);
  _objc_destroyWeak(param_1 + _DAT_1127159d0);
  _objc_destroyWeak(param_1 + _DAT_1127159cc);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127159c8);
  return;
}



/* Entry: 104ea9f74; end: 104eaa10b; -[SCLensCollectionActivator initWithLensUnlocker:lensCollectionsPresenter:lensCollectionDataProvider:mainQueuePerformer:lensCarouselManager:lensCarouselSettings:carouselRestorationStateProvider:] */

undefined1 *
FUN_104ea9f74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126e4bd8;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104eaa10c; end: 104eaa2b3; -[SCLensCollectionActivator activateLensCarouselCollectionWithId:] */

void FUN_104eaa10c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x40));
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c091560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c268560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0e0ea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  uVar6 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 104eaa2b4; end: 104eaa397;  */

void FUN_104eaa2b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 104eaa398; end: 104eaa3df;  */

void FUN_104eaa398(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7c2a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104eaa3e0; end: 104eaa3e3;  */

void FUN_104eaa3e0(void)

{
  return;
}



/* Entry: 104eaa3e4; end: 104eaa4bf; -[SCLensCollectionActivator _presentLensCollectionWithMetadata:] */

void FUN_104eaa3e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c098240(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf3fe40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed15a0(param_1,param_2,uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf3fe40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bdc4d80(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104eaa4c0; end: 104eaa5bb; -[SCLensCollectionActivator _unlockLensWithId:collectionId:] */

void FUN_104eaa4c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3);
  puVar2 = PTR_PTR_1126b1ab0;
  if ((int)puVar1 != 0) {
    puVar1 = PTR_PTR_1126b1ab8;
    _objc_alloc(PTR_PTR_1126b1ab8);
    func_0x00010c024960();
    func_0x00010c094620(puVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8040();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104eaa5bc; end: 104eaa5c3; -[SCLensCollectionActivator lensCollectionsPresenter] */

void FUN_104eaa5bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_target_112678178);
  return;
}



/* Entry: 104eaa5c4; end: 104eaa5ff; -[SCLensCollectionActivator isPresented] */

undefined8 FUN_104eaa5c4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c091800();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c07aae0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 104eaa600; end: 104eaa79f; -[SCLensCollectionActivator _activateLensCollectionWithId:] */

void FUN_104eaa600(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bef1060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c268560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c0e0ec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  uVar6 = uVar5;
  func_0x00010c25ff60(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_3);
  return;
}



/* Entry: 104eaa7a0; end: 104eaa807;  */

void FUN_104eaa7a0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1f3c0(param_2);
  _objc_release(param_2);
  func_0x00010bdc4aa0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104eaa808; end: 104eaa837; -[SCLensCollectionActivator dismissLensCollectionCarousel] */

void FUN_104eaa808(undefined8 param_1)

{
  func_0x00010c091800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83ca0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104eaa838; end: 104eaa913; -[SCLensCollectionActivator _activateCollectionCarouselWithId:carouselActivated:] */

void FUN_104eaa838(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if ((param_4 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf02120();
    if ((uVar2 & 1) == 0) {
      uVar3 = *(ulong *)(param_1 + 0x38);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010bfdcae0();
      _objc_release(uVar3);
      _objc_release(uVar1);
      if ((uVar2 & 1) != 0) goto LAB_104eaa8d0;
      uVar1 = *(ulong *)(param_1 + 0x28);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef6e0();
    }
    _objc_release(uVar1);
  }
LAB_104eaa8d0:
  func_0x00010c091800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10ca40();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104eaa914; end: 104eaa98b; -[SCLensCollectionActivator .cxx_destruct] */

void FUN_104eaa914(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104eaa98c; end: 104eaa9ff; -[SCLensCollectionActivationServices initWithLensCollectionActivator:] */

undefined1 * FUN_104eaa98c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e4be0;
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



/* Entry: 104eaaa00; end: 104eaaa07; -[SCLensCollectionActivationServices lensCollectionActivator] */

undefined8 FUN_104eaaa00(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104eaaa08; end: 104eaaa13; -[SCLensCollectionActivationServices .cxx_destruct] */

void FUN_104eaaa08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104eaaa14; end: 104eaab07; -[SCLensUnlockCardActionHandler initWithUIContainer:lensUnlocker:lensCollectionsPresenter:deepLinkSendToPresenter:] */

undefined1 *
FUN_104eaaa14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e4be8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104eaab08; end: 104eaab0f; -[SCLensUnlockCardActionHandler lensUnlocker] */

void FUN_104eaab08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_target_112678178);
  return;
}



/* Entry: 104eaab10; end: 104eaab17; -[SCLensUnlockCardActionHandler lensCollectionsPresenter] */

void FUN_104eaab10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_target_112678178);
  return;
}



/* Entry: 104eaab18; end: 104eaab1f; -[SCLensUnlockCardActionHandler deepLinkSendToPresenter] */

void FUN_104eaab18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_target_112678178);
  return;
}



/* Entry: 104eaab20; end: 104eaac23; -[SCLensUnlockCardActionHandler handleUnlockCardAction:completion:] */

void FUN_104eaab20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104eaac24;
  puStack_50 = &UNK_110849530;
  _objc_retain(param_4);
  puStack_98 = puVar1;
  uStack_90 = 0xc2000000;
  uStack_88 = 0x104eaac30;
  puStack_80 = &UNK_110856fa8;
  uStack_78 = param_1;
  uStack_48 = param_4;
  _objc_retain(param_4);
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x104eaac44;
  puStack_b0 = &UNK_110856fd8;
  uStack_a8 = param_1;
  uStack_a0 = param_4;
  uStack_70 = param_4;
  _objc_retain(param_4);
  func_0x00010c0bf180(param_3,param_2,&puStack_68,&puStack_98,0,&puStack_c8);
  _objc_release(uStack_a0);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104eaac24; end: 104eaac57;  */

void FUN_104eaac24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104eaac2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 104eaac58; end: 104eaacdf; -[SCLensUnlockCardActionHandler _handleLensUnlockForLensId:collectionId:completion:] */

void FUN_104eaac58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bed15a0(param_1,param_2,param_3,param_4);
  func_0x00010c091800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10ca40();
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104eaace0; end: 104eaadcb; -[SCLensUnlockCardActionHandler _unlockLensWithId:collectionId:] */

void FUN_104eaace0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1ab8;
  puVar2 = PTR_PTR_1126b1ab0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c024960();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c094620(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010c097b20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8040();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104eaadcc; end: 104eaae77; -[SCLensUnlockCardActionHandler _handleSendToActionWithLensCollectionId:imageFuture:completion:] */

void FUN_104eaadcc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bf68160(param_1);
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c10e120(lVar1,param_2,param_1,param_3,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104eaae78; end: 104eaaebb; -[SCLensUnlockCardActionHandler .cxx_destruct] */

void FUN_104eaae78(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 104eaaebc; end: 104eaafbf; -[SCLensUnlockLensCollectionCardDataProvider initWithLensCollectionId:lensCollectionDataProvider:mediaDownloader:performerProvider:] */

undefined1 *
FUN_104eaaebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e4bf0;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104eaafc0; end: 104eaafc7; -[SCLensUnlockLensCollectionCardDataProvider lensCollectionDataProvider] */

void FUN_104eaafc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_target_112678178);
  return;
}



/* Entry: 104eaafc8; end: 104eaafcf; -[SCLensUnlockLensCollectionCardDataProvider mediaDownloader] */

void FUN_104eaafc8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_target_112678178);
  return;
}



/* Entry: 104eaafd0; end: 104eaaff7; -[SCLensUnlockLensCollectionCardDataProvider dataObservable] */

void FUN_104eaafd0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104eaaff8; end: 104eab107; -[SCLensUnlockLensCollectionCardDataProvider loadUnlockCardData] */

void FUN_104eaaff8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  func_0x00010c091500(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c091560();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 104eab108; end: 104eab1f3;  */

void FUN_104eab108(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_104eab1f4;
  puStack_50 = &UNK_110856f20;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0c0800(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 104eab1f4; end: 104eab283;  */

void FUN_104eab1f4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2c480();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104eab284; end: 104eab3c7; -[SCLensUnlockLensCollectionCardDataProvider unlockCardIconForURL:scaledToSize:] */

void FUN_104eab284(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_PTR_1126ae820;
  uVar5 = param_1;
  _objc_retain(param_5);
  _objc_opt_new();
  lVar2 = param_3;
  func_0x00010be37380(param_3,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar3);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104eab3c8;
  puStack_78 = &UNK_110857008;
  uStack_68 = param_1;
  uStack_60 = param_2;
  uStack_58 = uVar5;
  _objc_retain(puVar1);
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  puStack_70 = puVar1;
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c0680e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(lVar2,param_4,&puStack_90,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puStack_70);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104eab3c8; end: 104eab477;  */

void FUN_104eab3c8(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (param_3 != 0) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(param_2);
  func_0x00010bf3ae40(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c14e700(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),uVar3,param_2)
  ;
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf436e0(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104eab478; end: 104eab4eb; -[SCLensUnlockLensCollectionCardDataProvider _imageFutureForURL:] */

void FUN_104eab478(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010c0c4b00(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfe79c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104eab4ec; end: 104eab69b; -[SCLensUnlockLensCollectionCardDataProvider _handleMetadataLoaded:] */

void FUN_104eab4ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  uVar8 = param_3;
  func_0x00010c26ec00(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010be37380(param_1,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  lVar2 = param_1;
  func_0x00010bdc4820(param_1,param_2,param_3,lVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar3 = lVar2;
  FUN_104ead4c8();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010c14de00(puVar4,param_2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  _objc_release(lVar3);
  puVar5 = PTR_PTR_1126b1ac0;
  _objc_alloc(PTR_PTR_1126b1ac0);
  uVar8 = param_3;
  func_0x00010c0d4f60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c26ec00(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c052d60(puVar5,param_2,uVar8,puVar4,uVar6,lVar2);
  _objc_release(uVar6);
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  puVar7 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar8,param_2,puVar7);
  _objc_release(puVar7);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104eab69c; end: 104eab6df; -[SCLensUnlockLensCollectionCardDataProvider _completeLoadDataWithError:] */

void FUN_104eab69c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104eab6e0; end: 104eab8cf; -[SCLensUnlockLensCollectionCardDataProvider _actionsForLensCollection:lensCollectionImageFuture:] */

void FUN_104eab6e0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_4);
  func_0x00010bf09f00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c098240();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  if (lVar3 != 0) {
    lVar2 = param_3;
    func_0x00010c098240(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_3;
    func_0x00010bf3fe40(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010bde1d60(param_1,param_2,lVar2,lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    uVar6 = param_1;
    func_0x00010bed14c0(param_1,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1,param_2,uVar6);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(lVar4);
  }
  lVar2 = param_3;
  func_0x00010bf3fe40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bde1d20(param_1,param_2,lVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar2);
  uVar6 = param_1;
  func_0x00010bde1d00(param_1,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_2,uVar6);
  _objc_release(uVar6);
  func_0x00010bdda300(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1,param_2,param_1);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104eab8d0; end: 104eab953; -[SCLensUnlockLensCollectionCardDataProvider _unlockCollectionActionWithHandler:] */

void FUN_104eab8d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1ac8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = puVar1;
  func_0x000104ead4e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052c20(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110db9178,param_3
                     );
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104eab954; end: 104eab9d7; -[SCLensUnlockLensCollectionCardDataProvider _collectionSendToActionWithHandler:] */

void FUN_104eab954(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1ac8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  puVar2 = puVar1;
  func_0x000104ead4f8();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052c20(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110db9198,param_3
                     );
  _objc_release(param_3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104eab9d8; end: 104eaba3f; -[SCLensUnlockLensCollectionCardDataProvider _cancelAction] */

void FUN_104eab9d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b1ac8;
  _objc_alloc(PTR_PTR_1126b1ac8);
  puVar2 = puVar1;
  func_0x00010b75e3ec();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052c20(puVar1,param_2,puVar2,&PTR____CFConstantStringClassReference_110db91b8,
                      &PTR___NSConcreteGlobalBlock_110857058);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104eaba40; end: 104eaba4b;  */

void FUN_104eaba40(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ddbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126b1ad0,PTR_s_null_112615110);
  return;
}



/* Entry: 104eaba4c; end: 104eabafb; -[SCLensUnlockLensCollectionCardDataProvider _collectionUnlockHandlerForCollectionId:lensId:] */

void FUN_104eaba4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104eabafc;
  puStack_48 = &UNK_110857078;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retainBlock(&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 104eabafc; end: 104eabb0f;  */

void FUN_104eabafc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf40110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b1ad0,PTR_s_collectionUnlockActionWithLensId_1125ad9e8,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104eabb10; end: 104eabbbf; -[SCLensUnlockLensCollectionCardDataProvider _collectionSendToHandlerForCollectionId:attachedImageFuture:] */

void FUN_104eabb10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar1 = &puStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104eabbc0;
  puStack_48 = &UNK_110857078;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock(&puStack_60);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 104eabbc0; end: 104eabbd3;  */

void FUN_104eabbc0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c15cf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b1ad0,PTR_s_sendToActionWithCollectionId_att_112634de0,
             *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104eabbd4; end: 104eabc33; -[SCLensUnlockLensCollectionCardDataProvider .cxx_destruct] */

void FUN_104eabbd4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104eabc34; end: 104eabd1b; -[SCLensUnlockLensCollectionCardEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eabc34(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar1 = param_1;
  func_0x00010bdef6e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bdea3e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1ad8;
  _objc_alloc();
  lVar4 = param_1 + _DAT_112715a24;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038b80(puVar3,param_2,lVar1,lVar5,lVar2);
  lVar7 = (long)_DAT_112715a28;
  uVar6 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar3;
  _objc_release(uVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  func_0x00010c18b5e0(lVar1,param_2,*(undefined8 *)(param_1 + lVar7));
  func_0x00010bf17a60(*(undefined8 *)(param_1 + lVar7));
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104eabd1c; end: 104eabdef; -[SCLensUnlockLensCollectionCardEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104eabd1c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126afc98;
  func_0x00010bf0c040();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_112715a2c;
  _objc_retain();
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112715a28);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_104eabdf0;
  puStack_40 = &UNK_110842e18;
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  func_0x00010bf95bc0(uVar2,param_2,&puStack_58);
  puVar3 = puVar1;
  func_0x00010c117720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}


