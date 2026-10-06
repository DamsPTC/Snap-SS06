/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1051efb90; end: 1051efc4f; -[SCContextMessagingHeader updateDisplayName:] */

void FUN_1051efb90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x00010bdd1040();
  _objc_retainAutoreleasedReturnValue();
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x1051efc14;
  puStack_38 = &UNK_110848bd8;
  uStack_30 = param_1;
  uStack_28 = uVar1;
  _objc_retain();
  func_0x00010be9a900(param_1,param_2,&puStack_50);
  _objc_release(uStack_28);
  _objc_release(uVar1);
  return;
}



/* Entry: 1051efc50; end: 1051efd3f; -[SCContextMessagingHeader _scaleUpLabelWithCompletion:] */

void FUN_1051efc50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
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
  
  _objc_retain(param_3);
  _CGAffineTransformMakeScale(&uStack_60,0x3ff0cccccccccccd,0x3ff0cccccccccccd);
  uStack_b8 = uStack_58;
  uStack_c0 = uStack_60;
  uStack_a8 = uStack_48;
  uStack_b0 = uStack_50;
  uStack_98 = uStack_38;
  uStack_a0 = uStack_40;
  _CGAffineTransformTranslate(&uStack_90,0x4010000000000000,0,&uStack_c0);
  uStack_140 = 0xc2000000;
  uStack_118 = uStack_58;
  uStack_120 = uStack_60;
  uStack_108 = uStack_48;
  uStack_110 = uStack_50;
  uStack_f8 = uStack_38;
  uStack_100 = uStack_40;
  uStack_e8 = uStack_88;
  uStack_f0 = uStack_90;
  uStack_d8 = uStack_78;
  uStack_e0 = uStack_80;
  puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_138 = FUN_1051efd40;
  puStack_130 = &UNK_11086fd38;
  uStack_c8 = uStack_68;
  uStack_d0 = uStack_70;
  uStack_128 = param_1;
  func_0x00010bf03440(0x3fc3333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,0x10006,
                      &puStack_148,param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 1051efd40; end: 1051efdbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051efd40(long param_1,undefined8 param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_48 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = *(undefined8 *)(param_1 + 0x38);
  uStack_28 = *(undefined8 *)(param_1 + 0x50);
  uStack_30 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271f3a4),param_2,
                      &uStack_50);
  uStack_48 = *(undefined8 *)(param_1 + 0x60);
  uStack_50 = *(undefined8 *)(param_1 + 0x58);
  uStack_38 = *(undefined8 *)(param_1 + 0x70);
  uStack_40 = *(undefined8 *)(param_1 + 0x68);
  uStack_28 = *(undefined8 *)(param_1 + 0x80);
  uStack_30 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271f3ac),param_2,
                      &uStack_50);
  return;
}



/* Entry: 1051efdbc; end: 1051efe2b; -[SCContextMessagingHeader _scaleDownLabelWithCompletion:] */

void FUN_1051efdbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1051efe2c;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x00010bf03440(0x3fc3333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,6,&puStack_38,
                      param_3);
  return;
}



/* Entry: 1051efe2c; end: 1051efeaf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051efe2c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar3 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uVar1 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uVar6 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar4 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uVar2 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  uStack_50 = uVar1;
  uStack_48 = uVar3;
  uStack_40 = uVar5;
  uStack_38 = uVar6;
  uStack_30 = uVar2;
  uStack_28 = uVar4;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271f3a4),param_2,
                      &uStack_50);
  uStack_50 = uVar1;
  uStack_48 = uVar3;
  uStack_40 = uVar5;
  uStack_38 = uVar6;
  uStack_30 = uVar2;
  uStack_28 = uVar4;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271f3ac),param_2,
                      &uStack_50);
  return;
}



/* Entry: 1051efeb0; end: 1051eff7b; -[SCContextMessagingHeader _rotateSwapIconWithCompletion:] */

void FUN_1051efeb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1051eff7c;
  puStack_40 = &UNK_110842e18;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x1051effec;
  puStack_70 = &UNK_110858070;
  uStack_68 = param_1;
  uStack_60 = param_3;
  uStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010bf03440(0x3fd3333333333333,0,puVar1,param_2,0x20006,&puStack_58,&puStack_88);
  _objc_release(uStack_60);
  _objc_release(param_3);
  return;
}



/* Entry: 1051eff7c; end: 1051f0057;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051eff7c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [48];
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271f3ac);
  if (lVar1 == 0) {
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010c27a460(&uStack_80,lVar1);
  }
  _CGAffineTransformRotate(auStack_50,0xc022d97c7f3321d2,&uStack_80);
  func_0x00010c219960(lVar1,param_2,auStack_50);
  return;
}



/* Entry: 1051f0058; end: 1051f00eb; -[SCContextMessagingHeader _fadeInAndSetLabelAttributedDisplayName:completion:] */

void FUN_1051f0058(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  func_0x00010c1cbe20(param_1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1051f00ec;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  func_0x00010bf03440(0x3fc3333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,6,&puStack_48,
                      param_4);
  _objc_release(param_4);
  return;
}



/* Entry: 1051f00ec; end: 1051f00f3;  */

void FUN_1051f00ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 1051f00f4; end: 1051f021b; -[SCContextMessagingHeader _crossDisolveDisplayName:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f00f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___CATransition_1126b3c00;
  _objc_retain(param_3);
  func_0x00010bf039a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c192d40(0x3fc3333333333333);
  puVar2 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x00010bfbc100(PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216080(puVar1);
  _objc_release(puVar2);
  func_0x00010c21acc0(puVar1);
  func_0x00010c1ea580(puVar1);
  lVar4 = (long)_DAT_11271f3a4;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6c20();
  _objc_release(uVar3);
  func_0x00010c16b720(*(undefined8 *)(param_1 + lVar4));
  _objc_release(param_3);
  if (param_4 != 0) {
    (**(code **)(param_4 + 0x10))(param_4,1);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1051f021c; end: 1051f023b; -[SCContextMessagingHeader delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f021c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271f3b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051f023c; end: 1051f024f; -[SCContextMessagingHeader setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f023c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271f3b0,param_3);
  return;
}



/* Entry: 1051f0250; end: 1051f02db; -[SCContextMessagingHeader .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f0250(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271f3b0);
  _objc_storeStrong(param_1 + _DAT_11271f3ac,0);
  _objc_storeStrong(param_1 + _DAT_11271f398,0);
  _objc_storeStrong(param_1 + _DAT_11271f39c,0);
  _objc_storeStrong(param_1 + _DAT_11271f3a8,0);
  _objc_storeStrong(param_1 + _DAT_11271f3a4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271f3a0,0);
  return;
}



/* Entry: 1051f02dc; end: 1051f05ab; -[SCContextMessagingViewController initWithDisplayName:sessionParams:recipientUserId:hasAlternateRecipient:showSnapProPublicStoryReplyDisclaimer:showQuestionStickerStoryReplyDisclaimer:swipeDirection:animator:messagingExperimentService:circumstanceEngine:replyOptions:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1051f02dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126e6e08;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar6 = (long)_DAT_11271f3c0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_4;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11271f3c4;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_3;
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271f3c8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271f3c8) = uVar2;
    _objc_release(uVar5);
    *(undefined1 *)((long)puVar1 + (long)_DAT_11271f3cc) = param_6;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11271f3d0) = param_7;
    *(undefined1 *)((long)puVar1 + (long)_DAT_11271f3d4) = param_8;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271f3d8) = param_9;
    lVar7 = (long)_DAT_11271f3dc;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_10;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11271f3e0;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_11;
    _objc_release(uVar2);
    lVar6 = (long)_DAT_11271f3e4;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined8 *)((long)puVar1 + lVar6) = param_12;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271f3e8);
    *(undefined **)((long)puVar1 + (long)_DAT_11271f3e8) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11271f3ec) = param_13;
    func_0x00010c1c8b80(puVar1);
    puVar3 = puVar1;
    func_0x00010c0d66a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c8b80();
    _objc_release(puVar3);
    if (*(long *)((long)puVar1 + lVar7) == 0) {
      puVar4 = PTR_PTR_1126b6148;
      _objc_alloc();
      func_0x00010c04fac0();
      uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271f3f0);
      *(undefined **)((long)puVar1 + (long)_DAT_11271f3f0) = puVar4;
      _objc_release(uVar2);
    }
    func_0x00010c219b20(puVar1);
    puVar4 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271f3f4);
    *(undefined **)((long)puVar1 + (long)_DAT_11271f3f4) = puVar4;
    _objc_release(uVar2);
    func_0x00010c189400(puVar1);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1051f05ac; end: 1051f05bb; -[SCContextMessagingViewController updateHeaderToDisplayName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f05ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c285350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271f3f8),PTR_s_updateDisplayName__11267eef8);
  return;
}



/* Entry: 1051f05bc; end: 1051f065b; -[SCContextMessagingViewController setShowsBackdrop:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f05bc(long param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  *(char *)(param_1 + _DAT_11271f3b4) = (char)param_3;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x3fe0000000000000;
  if (param_3 == 0) {
    uVar3 = 0;
  }
  puVar2 = puVar1;
  func_0x00010bf414e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1051f065c; end: 1051f07c3; -[SCContextMessagingViewController setActionMenuViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f065c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11271f3fc;
  if (*(long *)(param_1 + lVar6) != param_3) {
    lVar1 = param_3;
    func_0x00010c29bf00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 != 0) {
      func_0x00010c12c8e0(*(undefined8 *)(param_1 + lVar6));
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c29bf00(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12c960();
      _objc_release(uVar4);
      _objc_retain(param_3);
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      *(long *)(param_1 + lVar6) = param_3;
      _objc_release(uVar4);
      func_0x00010bef7700(param_1,param_2,*(undefined8 *)(param_1 + lVar6));
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c29bf00(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c219b60();
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c29bf00(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c181f00(0x443b8000);
      _objc_release(uVar4);
      uVar5 = *(undefined8 *)(param_1 + _DAT_11271f400);
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c29bf00(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef6d60(uVar5,param_2,uVar4);
      _objc_release(uVar4);
      func_0x00010bf77e80(*(undefined8 *)(param_1 + lVar6),param_2,param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051f07c4; end: 1051f0877; -[SCContextMessagingViewController _spacerViewIndexToInsert] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1051f07c4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11271f400;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010bf09ee0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271f404);
  func_0x00010c29bf00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010bfecde0(lVar1,param_2,uVar2);
  _objc_release(uVar2);
  _objc_release(lVar1);
  lVar4 = *(long *)(param_1 + lVar4);
  func_0x00010bf09ee0(lVar4);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar4;
  func_0x00010bf529e0();
  _objc_release(lVar4);
  if (lVar3 != 0x7fffffffffffffff) {
    lVar1 = lVar3;
  }
  return lVar1;
}



/* Entry: 1051f0878; end: 1051f0937; -[SCContextMessagingViewController _attachHeader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f0878(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11271f3f8;
  if (*(long *)(param_1 + lVar3) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126b6150;
  _objc_alloc();
  func_0x00010c00d4c0();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c181f00(0x443b8000,*(undefined8 *)(param_1 + lVar3));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c066590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271f400),
             PTR_s_insertArrangedSubview_atIndex__1125f7370,*(undefined8 *)(param_1 + lVar3),0);
  return;
}



/* Entry: 1051f0938; end: 1051f093b; -[SCContextMessagingViewController xButtonPressedOnHeader:] */

void FUN_1051f0938(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd0e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__attemptToDismiss_112551d28);
  return;
}



/* Entry: 1051f093c; end: 1051f096b; -[SCContextMessagingViewController swapButtonPressedOnHeader:] */

void FUN_1051f093c(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c264520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051f096c; end: 1051f09df; -[SCContextMessagingViewController loadView] */

void FUN_1051f096c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0(puVar1);
  func_0x00010c222380(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1051f09e0; end: 1051f0a17; -[SCContextMessagingViewController setInputController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f09e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271f404);
  *(undefined8 *)(param_1 + _DAT_11271f404) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051f0a18; end: 1051f0e87; -[SCContextMessagingViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f0a18(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined1 *puVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_98 = PTR_PTR_1126e6e08;
  lStack_a0 = param_1;
  _objc_msgSendSuper2(&lStack_a0,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c1c8b40(param_1);
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  _objc_opt_new();
  lVar20 = (long)_DAT_11271f400;
  uVar18 = *(undefined8 *)(param_1 + lVar20);
  *(undefined **)(param_1 + lVar20) = puVar1;
  _objc_release(uVar18);
  func_0x00010c16e060(*(undefined8 *)(param_1 + lVar20));
  func_0x00010c190b80(*(undefined8 *)(param_1 + lVar20));
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar20));
  lVar19 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar19);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar2 = *(undefined8 *)(param_1 + lVar20);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar19;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar2;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + lVar20);
  uStack_90 = uVar18;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + lVar20);
  uStack_88 = uVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar9;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = *(undefined8 *)(param_1 + lVar20);
  uStack_80 = uVar11;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar13;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar12;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar15;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar16);
  _objc_release(uVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(lVar10);
  _objc_release(lVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar18);
  _objc_release(lVar3);
  _objc_release(lVar19);
  _objc_release(uVar2);
  lVar19 = (long)_DAT_11271f3dc;
  func_0x00010c1e13c0(*(undefined8 *)(param_1 + lVar19));
  _objc_initWeak(auStack_a8,param_1);
  _objc_copyWeak(auStack_b0,auStack_a8);
  func_0x00010c18f560(*(undefined8 *)(param_1 + lVar19));
  func_0x00010bdd0480(param_1);
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  func_0x00010c18b5e0();
  func_0x00010bef9040(*(undefined8 *)(param_1 + lVar20));
  if (*(long *)(param_1 + _DAT_11271f3d8) != 1) {
    puVar16 = PTR__OBJC_CLASS___UISwipeGestureRecognizer_1126b3870;
    _objc_alloc(PTR__OBJC_CLASS___UISwipeGestureRecognizer_1126b3870);
    func_0x00010c050900();
    func_0x00010c18e180();
    func_0x00010c18b5e0(puVar16);
    func_0x00010bef9040(*(undefined8 *)(param_1 + lVar20));
    _objc_release(puVar16);
  }
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_b0);
  puVar17 = auStack_a8;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_a8);
  __Unwind_Resume(puVar17);
  puVar17 = puVar17 + 0x20;
  _objc_loadWeakRetained(puVar17);
  func_0x00010bdd0e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar17);
  return;
}



/* Entry: 1051f0e88; end: 1051f0eb3;  */

void FUN_1051f0e88(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd0e20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051f0eb4; end: 1051f11e3; -[SCContextMessagingViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f0eb4(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126e6e08;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_viewWillAppear__1126853f0);
  uVar1 = param_1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 == 0) {
    return;
  }
  lVar6 = (long)_DAT_11271f408;
  if ((*(byte *)(param_1 + lVar6) & 1) != 0) {
    return;
  }
  func_0x00010c1cbec0(param_1);
  uVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cbfa0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c06d1e0();
  if ((int)uVar1 == 0) goto LAB_1051f1160;
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar2);
  lVar5 = (long)_DAT_11271f40c;
  if (*(long *)(param_1 + lVar5) == 0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_opt_new();
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar2;
    _objc_release(uVar3);
    func_0x00010c181f00(0x437a0000,*(undefined8 *)(param_1 + lVar5));
    uVar3 = *(undefined8 *)(param_1 + (long)_DAT_11271f400);
    func_0x00010bebe7c0(param_1);
    func_0x00010c066580(uVar3);
  }
  uVar4 = *(ulong *)(param_1 + (long)_DAT_11271f404);
  _objc_retain(uVar4);
  uVar1 = uVar4;
  func_0x00010c0f3ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    func_0x00010c2a6740(uVar4);
    uVar1 = uVar4;
    func_0x00010c29bf00(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12c960();
    _objc_release(uVar1);
    func_0x00010c12c8e0(uVar4);
  }
  func_0x00010bef7700(param_1);
  func_0x00010bf77e80(uVar4);
  uVar1 = uVar4;
  func_0x00010c29bf00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + (long)_DAT_11271f400);
  uVar1 = uVar4;
  func_0x00010c29bf00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6d60(uVar3);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (*(char *)(param_1 + (long)_DAT_11271f3d0) == '\x01') {
    uVar1 = param_1;
    func_0x00010be17ce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdeb720(param_1);
LAB_1051f1150:
    _objc_release(uVar1);
  }
  else if (*(char *)(param_1 + (long)_DAT_11271f3d4) == '\x01') {
    func_0x000106491304();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdeb720(param_1);
    _objc_release(puVar2);
    goto LAB_1051f1150;
  }
  _objc_release(uVar4);
LAB_1051f1160:
  uVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(uVar1);
  uVar1 = param_1;
  func_0x00010c23e1e0();
  if ((uVar1 & 1) == 0) {
    if (*(long *)(param_1 + (long)_DAT_11271f3d8) == 1) {
      func_0x00010c27a900();
    }
    else {
      func_0x00010bf179a0(*(undefined8 *)(param_1 + (long)_DAT_11271f404));
    }
  }
  *(undefined1 *)(param_1 + lVar6) = 1;
  return;
}



/* Entry: 1051f11e4; end: 1051f12b3; -[SCContextMessagingViewController _firstNameFromDisplayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f11e4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11271f3c4;
  lVar1 = *(long *)(param_1 + lVar4);
  func_0x00010bf44740(lVar1,param_2,&PTR____CFConstantStringClassReference_110db2d98);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    lVar4 = *(long *)(param_1 + lVar4);
    lVar2 = lVar4;
    _objc_retain(lVar4);
  }
  else {
    lVar2 = lVar1;
    func_0x00010c0dfd40(lVar1,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000106491334();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1051f12b4; end: 1051f190f; -[SCContextMessagingViewController _createBottomDisclaimerLabelWithText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1051f12b4(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  
  puVar2 = PTR__OBJC_CLASS___NSShadow_1126b6158;
  lVar23 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar27 = (long)_DAT_11271f410;
  if (*(long *)(param_1 + lVar27) == 0) {
    _objc_retain(param_3);
    _objc_opt_new();
    func_0x00010c1fe720(0x4008000000000000);
    func_0x00010c1fe7a0(*(undefined8 *)PTR__CGSizeZero_110347620,
                        *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),puVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf414e0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740(puVar2);
    _objc_release(puVar4);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc();
    func_0x00010c04e840();
    _objc_release(param_3);
    puVar5 = PTR_PTR_1126aea58;
    _objc_opt_new();
    uVar24 = *(undefined8 *)(param_1 + lVar27);
    *(undefined **)(param_1 + lVar27) = puVar5;
    _objc_release(uVar24);
    func_0x00010c21ad00(*(undefined8 *)(param_1 + lVar27));
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar27));
    _objc_release(puVar5);
    func_0x00010c16b720(*(undefined8 *)(param_1 + lVar27));
    func_0x00010c1cfce0(*(undefined8 *)(param_1 + lVar27));
    func_0x00010c213040(*(undefined8 *)(param_1 + lVar27));
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar27));
    lVar26 = (long)_DAT_11271f400;
    lVar6 = *(long *)(param_1 + lVar26);
    func_0x00010bf09ee0();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = (long)_DAT_11271f404;
    uVar24 = *(undefined8 *)(param_1 + lVar25);
    func_0x00010c29bf00(uVar24);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bfecde0();
    _objc_release(uVar24);
    _objc_release(lVar6);
    iVar1 = 2;
    func_0x000100029b9c(2,0xf,4,0);
    if (iVar1 == 0) {
      if (lVar7 == 0x7fffffffffffffff) {
        func_0x00010bef6d60();
      }
      else {
        func_0x00010c066580(*(undefined8 *)(param_1 + lVar26));
      }
      puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      uVar12 = *(undefined8 *)(param_1 + lVar27);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = *(undefined8 *)(param_1 + lVar26);
      func_0x00010c08de00(uVar14);
      _objc_retainAutoreleasedReturnValue();
      uVar24 = uVar12;
      func_0x00010bf493c0(0x4044000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar17 = *(undefined8 *)(param_1 + lVar27);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar18 = *(undefined8 *)(param_1 + lVar26);
      func_0x00010c2793a0(uVar18);
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar17;
      func_0x00010bf493c0(0xc044000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar5);
      _objc_release(puVar20);
      _objc_release(uVar19);
      _objc_release(uVar18);
      _objc_release(uVar17);
      _objc_release(uVar24);
      _objc_release(uVar14);
      _objc_release(uVar12);
      puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar21 = *(undefined **)(param_1 + lVar27);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = *(undefined **)(param_1 + lVar25);
      func_0x00010c29bf00(puVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar8;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar22 = puVar21;
      func_0x00010bf493c0(0xc024000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar5);
    }
    else {
      puVar21 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc_init();
      func_0x00010c219b60();
      func_0x00010befbb60(puVar21);
      if (lVar7 == 0x7fffffffffffffff) {
        func_0x00010bef6d60();
      }
      else {
        func_0x00010c066580(*(undefined8 *)(param_1 + lVar26));
      }
      puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar8 = *(undefined **)(param_1 + lVar27);
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar21;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar22 = puVar8;
      func_0x00010bf493c0(0x4044000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = *(undefined **)(param_1 + lVar27);
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar21;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar9;
      func_0x00010bf493c0(0xc044000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + lVar27);
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar21;
      func_0x00010c274200(puVar21);
      _objc_retainAutoreleasedReturnValue();
      uVar24 = uVar12;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar14 = *(undefined8 *)(param_1 + lVar27);
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar21;
      func_0x00010bf1ff80(puVar21);
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar14;
      func_0x00010bf493c0(0xc024000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010beef8c0(puVar5);
      _objc_release(puVar16);
      _objc_release(uVar19);
      _objc_release(puVar15);
      _objc_release(uVar14);
      _objc_release(uVar24);
      _objc_release(puVar13);
      _objc_release(uVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
    }
    _objc_release(puVar9);
    _objc_release(puVar22);
    _objc_release(puVar20);
    _objc_release(puVar8);
    _objc_release(puVar21);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    param_1 = puVar2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar23) {
    return param_1;
  }
  ___stack_chk_fail();
  return (undefined *)0x1;
}



/* Entry: 1051f1910; end: 1051f1917; -[SCContextMessagingViewController shouldPopToRootViewControllerLater] */

undefined8 FUN_1051f1910(void)

{
  return 1;
}



/* Entry: 1051f1918; end: 1051f199f; -[SCContextMessagingViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f1918(ulong param_1)

{
  ulong uVar1;
  ulong uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6e08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidAppear__112684bd0);
  if ((*(long *)(param_1 + (long)_DAT_11271f3d8) == 1) &&
     (uVar1 = param_1, func_0x00010c23e1e0(), (uVar1 & 1) == 0)) {
    func_0x00010bf90900(*(undefined8 *)(param_1 + (long)_DAT_11271f404));
  }
  func_0x00010c202fe0(param_1);
  func_0x00010c066400(*(undefined8 *)(param_1 + (long)_DAT_11271f404));
  return;
}



/* Entry: 1051f19a0; end: 1051f1a5f; -[SCContextMessagingViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f19a0(long param_1)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e6e08;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidDisappear__112684c48);
  *(undefined1 *)(param_1 + _DAT_11271f408) = 0;
  func_0x00010c066420(*(undefined8 *)(param_1 + _DAT_11271f404));
  lVar1 = param_1;
  func_0x00010c06d1a0();
  if ((int)lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(0x3ff0000000000000);
    _objc_release(lVar1);
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0cbf80();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 1051f1a60; end: 1051f1aab; -[SCContextMessagingViewController modalAccessoryDidDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f1a60(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf179b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11271f404),PTR_s_becomeFirstResponder_1125a3810);
    return;
  }
  return;
}



/* Entry: 1051f1aac; end: 1051f1ab3; -[SCContextMessagingViewController pageViewName] */

undefined8 FUN_1051f1aac(void)

{
  return 0x96;
}



/* Entry: 1051f1ab4; end: 1051f1b07; -[SCContextMessagingViewController _attemptToDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f1ab4(long param_1)

{
  if (*(long *)(param_1 + _DAT_11271f3d8) == 1) {
    func_0x00010bf801e0();
  }
  else {
    func_0x00010c13a0e0(*(undefined8 *)(param_1 + _DAT_11271f404));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 1051f1b08; end: 1051f1b0f; -[SCContextMessagingViewController prefersStatusBarHidden] */

undefined8 FUN_1051f1b08(void)

{
  return 0;
}



/* Entry: 1051f1b10; end: 1051f1b17; -[SCContextMessagingViewController preferredStatusBarUpdateAnimation] */

undefined8 FUN_1051f1b10(void)

{
  return 1;
}



/* Entry: 1051f1b18; end: 1051f1b8b; -[SCContextMessagingViewController setNeedsStatusBarAppearanceUpdate] */

void FUN_1051f1b18(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6e08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setNeedsStatusBarAppearanceUpdat_1126509d8);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1070e0(param_1);
  func_0x00010c14dc20(puVar1);
  _objc_release(puVar1);
  return;
}



/* Entry: 1051f1b8c; end: 1051f1c4b; -[SCContextMessagingViewController gestureRecognizer:shouldReceiveTouch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1051f1b8c(double param_1,double param_2,ulong param_3,undefined8 param_4,undefined8 param_5
                  ,undefined8 param_6)

{
  ulong uVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  double dVar5;
  
  _objc_retain(param_6);
  uVar1 = param_3;
  func_0x00010c06d1a0();
  if ((uVar1 & 1) == 0) {
    lVar4 = (long)_DAT_11271f3f8;
    func_0x00010c09ef00(param_6,param_4,*(undefined8 *)(param_3 + lVar4));
    dVar5 = param_2;
    func_0x00010bf20c00(*(undefined8 *)(param_3 + lVar4));
    _CGRectGetHeight();
    uVar2 = *(undefined8 *)(param_3 + (long)_DAT_11271f404);
    func_0x00010c29bf00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(param_6,param_4,uVar2);
    _objc_release(uVar2);
    bVar3 = false;
    if (dVar5 < 0.0) {
      bVar3 = param_1 <= param_2;
    }
  }
  else {
    bVar3 = false;
  }
  _objc_release(param_6);
  return bVar3;
}



/* Entry: 1051f1c4c; end: 1051f1c57; -[SCContextMessagingViewController defaultProjectNameV2] */

undefined ** FUN_1051f1c4c(void)

{
  return &PTR____CFConstantStringClassReference_110dcb198;
}



/* Entry: 1051f1c58; end: 1051f1c67; -[SCContextMessagingViewController chatPresentationAnimatingViewForInputBar] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f1c58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c065730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271f404),PTR_s_inputBar_1125f6fd8);
  return;
}



/* Entry: 1051f1c68; end: 1051f1c77; -[SCContextMessagingViewController chatPresentationAnimatingViewForAccessoryStackView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f1c68(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beed170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11271f404),PTR_s_accessoryContainerView_112598e00);
  return;
}



/* Entry: 1051f1c78; end: 1051f1cc7; -[SCContextMessagingViewController chatPresentationAnimatingViewForBackgroundView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f1c78(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271f404);
  func_0x00010bf14800(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1051f1cc8; end: 1051f1ce7; -[SCContextMessagingViewController delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f1cc8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271f414);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051f1ce8; end: 1051f1cfb; -[SCContextMessagingViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f1ce8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271f414,param_3);
  return;
}



/* Entry: 1051f1cfc; end: 1051f1d0b; -[SCContextMessagingViewController header] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1051f1cfc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271f3f8);
}



/* Entry: 1051f1d0c; end: 1051f1d1b; -[SCContextMessagingViewController inputController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1051f1d0c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271f404);
}



/* Entry: 1051f1d1c; end: 1051f1d2b; -[SCContextMessagingViewController skipFocusingKeyboardOnNextFullscreenAppearance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1051f1d1c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11271f3bc);
}



/* Entry: 1051f1d2c; end: 1051f1d3b; -[SCContextMessagingViewController setSkipFocusingKeyboardOnNextFullscreenAppearance:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f1d2c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11271f3bc) = param_3;
  return;
}



/* Entry: 1051f1d3c; end: 1051f1d53; -[SCContextMessagingViewController frameToTransitionFrom] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1051f1d3c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271f3b8);
}



/* Entry: 1051f1d54; end: 1051f1d63; -[SCContextMessagingViewController showsBackdrop] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1051f1d54(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11271f3b4);
}



/* Entry: 1051f1d64; end: 1051f1d73; -[SCContextMessagingViewController actionMenuViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1051f1d64(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11271f3fc);
}



/* Entry: 1051f1d74; end: 1051f1e9f; -[SCContextMessagingViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f1d74(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271f404,0);
  _objc_storeStrong(param_1 + _DAT_11271f3f8,0);
  _objc_destroyWeak(param_1 + _DAT_11271f414);
  _objc_storeStrong(param_1 + _DAT_11271f3f0,0);
  _objc_storeStrong(param_1 + _DAT_11271f3dc,0);
  _objc_storeStrong(param_1 + _DAT_11271f3c4,0);
  _objc_storeStrong(param_1 + _DAT_11271f3c8,0);
  _objc_storeStrong(param_1 + _DAT_11271f3f4,0);
  _objc_storeStrong(param_1 + _DAT_11271f3e4,0);
  _objc_storeStrong(param_1 + _DAT_11271f3e0,0);
  _objc_storeStrong(param_1 + _DAT_11271f3c0,0);
  _objc_storeStrong(param_1 + _DAT_11271f3fc,0);
  _objc_storeStrong(param_1 + _DAT_11271f410,0);
  _objc_storeStrong(param_1 + _DAT_11271f40c,0);
  _objc_storeStrong(param_1 + _DAT_11271f3e8,0);
  _objc_storeStrong(param_1 + _DAT_11271f418,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271f400,0);
  return;
}



/* Entry: 1051f1ea0; end: 1051f1eb7;  */

void FUN_1051f1ea0(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dcb1b8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dcb1b8,
                      &PTR____CFConstantStringClassReference_110dcb1d8,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1051f1eb8; end: 1051f1f83; -[SCContextOperaChromeLayerPlaylistPlugin initWithContentProductPlaybackScopeExposer:currentUserId:contentProductPlaybackScopeServices:] */

undefined1 *
FUN_1051f1eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e6e10;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051f1f84; end: 1051f1f87; -[SCContextOperaChromeLayerPlaylistPlugin setPlaylistItemController:] */

void FUN_1051f1f84(void)

{
  return;
}



/* Entry: 1051f1f88; end: 1051f200b; -[SCContextOperaChromeLayerPlaylistPlugin setOperaControlling:] */

void FUN_1051f1f88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x28,param_3);
  uVar1 = param_3;
  func_0x00010c27f040(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c0f1880(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 0x10,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1051f200c; end: 1051f20e7; -[SCContextOperaChromeLayerPlaylistPlugin registeredEventsForOperaSession] */

void FUN_1051f200c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined **ppuVar6;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  ppuVar6 = &puStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126b6160;
  func_0x00010c0fe8e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b6160;
  puStack_50 = puVar1;
  func_0x00010c261120();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b6160;
  puStack_48 = puVar2;
  func_0x00010c277180();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar3;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_5);
  puVar2 = PTR_PTR_1126b6160;
  _objc_retain(ppuVar6);
  func_0x00010c0fe8e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = (undefined1 *)ppuVar6;
  func_0x00010c0720c0(ppuVar6,param_2,puVar2);
  _objc_release(ppuVar6);
  _objc_release(puVar2);
  if ((int)puVar5 != 0) {
    func_0x00010be47820(puVar1,param_2,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1051f20e8; end: 1051f217b; -[SCContextOperaChromeLayerPlaylistPlugin operaViewDidSendEvent:page:params:] */

void FUN_1051f20e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b6160;
  _objc_retain(param_3);
  func_0x00010c0fe8e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  if ((int)uVar2 != 0) {
    func_0x00010be47820(param_1,param_2,param_5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1051f217c; end: 1051f23cf; -[SCContextOperaChromeLayerPlaylistPlugin _launchContentProductPlaybackScopeWithParams:] */

void FUN_1051f217c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b6168;
  func_0x00010bf39320(PTR_PTR_1126b6168);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010c08fa60();
  if (uVar3 != 0) {
    lVar5 = param_1 + 0x10;
    _objc_loadWeakRetained();
    if (lVar5 != 0) {
      puVar2 = PTR_PTR_1126b4d28;
      _objc_alloc(PTR_PTR_1126b4d28);
      func_0x00010c04dcc0();
      puVar6 = PTR_PTR_1126b4d30;
      _objc_alloc(PTR_PTR_1126b4d30);
      func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
      func_0x00010c04bca0(puVar6);
      puVar7 = PTR_PTR_1126b4d40;
      _objc_alloc(PTR_PTR_1126b4d40);
      puVar8 = PTR_PTR_1126b6168;
      func_0x00010bf392e0(PTR_PTR_1126b6168);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_3;
      func_0x00010c0e00e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = param_1 + 0x10;
      _objc_loadWeakRetained(lVar9);
      func_0x00010bff7200(puVar7);
      _objc_release(lVar9);
      _objc_release(uVar3);
      _objc_release(puVar8);
      func_0x00010c0720c0();
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf22a20(uVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d620(*(undefined8 *)(param_1 + 8));
      _objc_release(uVar10);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar2);
    }
    _objc_release(lVar5);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051f23d0; end: 1051f244f; -[SCContextOperaChromeLayerPlaylistPlugin playbackPresenterDidTearDown:playbackScope:] */

void FUN_1051f23d0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar2);
  lVar1 = lVar2;
  func_0x00010c0cfb40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cfa60();
  _objc_release(lVar1);
  _objc_release(lVar2);
  lVar2 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1051f2450; end: 1051f24bf; -[SCContextOperaChromeLayerPlaylistPlugin setPageNameLoggingViewController:] */

void FUN_1051f2450(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___UIViewController_1126af898;
  _objc_opt_class(PTR__OBJC_CLASS___UIViewController_1126af898);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_storeWeak(param_1 + 0x10,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1051f24c0; end: 1051f24d7; -[SCContextOperaChromeLayerPlaylistPlugin operaControlling] */

void FUN_1051f24c0(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051f24d8; end: 1051f2523; -[SCContextOperaChromeLayerPlaylistPlugin .cxx_destruct] */

void FUN_1051f24d8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051f2524; end: 1051f25ef; -[SCContextOperaChromeLayerPluginProvider initWithContentProductPlaybackScopeExposer:currentUserId:contentProductPlaybackScopeServices:] */

undefined1 *
FUN_1051f2524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e6e18;
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1051f25f0; end: 1051f2623; -[SCContextOperaChromeLayerPluginProvider createContextChromeLayerPlugin] */

void FUN_1051f25f0(void)

{
  _objc_alloc(PTR_PTR_1126b6170);
  func_0x00010c003a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051f2624; end: 1051f265f; -[SCContextOperaChromeLayerPluginProvider .cxx_destruct] */

void FUN_1051f2624(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1051f2660; end: 1051f27d7; -[SCContextOperaChromeLayerPluginServicesEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f2660(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_11271f43c;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar7;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(lVar7);
  if (param_1 == 0) {
    _objc_retain(0);
    uVar6 = 0;
    lVar7 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + _DAT_11271f448);
    _objc_retain(uVar6);
    lVar7 = param_1 + _DAT_11271f440;
    _objc_loadWeakRetained();
  }
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1051f27d8;
  puStack_60 = &UNK_11086fd68;
  puVar3 = PTR_PTR_1126ae720;
  uStack_58 = uVar6;
  lStack_50 = lVar2;
  lStack_48 = lVar7;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b6180;
  _objc_alloc(PTR_PTR_1126b6180);
  func_0x00010c037620();
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + _DAT_11271f444);
  }
  func_0x00010bf9d660(uVar5,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(lVar7);
  _objc_release(uVar6);
  _objc_release(lVar2);
  return;
}



/* Entry: 1051f27d8; end: 1051f280b;  */

void FUN_1051f27d8(void)

{
  _objc_alloc(PTR_PTR_1126b6178);
  func_0x00010c003a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051f280c; end: 1051f2863; -[SCContextOperaChromeLayerPluginServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f280c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271f448,0);
  _objc_storeStrong(param_1 + _DAT_11271f444,0);
  _objc_destroyWeak(param_1 + _DAT_11271f440);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271f43c);
  return;
}



/* Entry: 1051f2864; end: 1051f2987; -[SCContextStoryPlaybackEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f2864(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + _DAT_11271f44c) = param_1;
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1051f2988;
  uStack_40 = 0x1051f2998;
  uStack_38 = 0;
  param_2 = param_2 + _DAT_11271f458;
  _objc_loadWeakRetained(param_2);
  lVar1 = param_2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c1240();
  _objc_release(lVar1);
  _objc_release(param_2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  return;
}



/* Entry: 1051f2988; end: 1051f299f;  */

void FUN_1051f2988(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1051f29a0; end: 1051f29c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f29a0(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11271f458);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051f29c4; end: 1051f29cf;  */

void FUN_1051f29c4(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be14b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__fetchStorySummaryInfoWithUserId_112562c60,
             param_2);
  return;
}



/* Entry: 1051f29d0; end: 1051f2ab3;  */

void FUN_1051f29d0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107a8819c();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126b23f8;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0087a0();
  lVar6 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar5 = *(undefined8 *)(lVar6 + 0x28);
  *(undefined **)(lVar6 + 0x28) = puVar1;
  _objc_release(uVar5);
  _objc_release(puVar2);
  uVar5 = param_2;
  func_0x00010be7ebc0(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar5);
  puVar1 = PTR_PTR_1126b6188;
  _objc_opt_new();
  func_0x00010c18b5e0();
  _objc_initWeak(auStack_88,param_2);
  FUN_1051f29a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf16340();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_90,auStack_88);
  _objc_retain(uVar5);
  func_0x00010c10d920(puVar1);
  _objc_release(uVar3);
  _objc_release(param_2);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_release(puVar1);
  _objc_release(uVar5);
  return;
}



/* Entry: 1051f2ab4; end: 1051f2bef; -[SCContextStoryPlaybackEntryPoint _presentStoryPlaybackScopeWithOperaPlayableDataModel:] */

void FUN_1051f2ab4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b6188;
  _objc_opt_new();
  func_0x00010c18b5e0();
  _objc_initWeak(auStack_48,param_1);
  FUN_1051f29a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf16340();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010c10d920(puVar1);
  _objc_release(uVar2);
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1051f2bf0; end: 1051f2ca3;  */

void FUN_1051f2bf0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be0cc60();
  _objc_release(param_2);
  _objc_release(lVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1051f2ca4;
  puStack_40 = &UNK_1108434b0;
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  ppuVar2 = &puStack_58;
  _objc_retainBlock(ppuVar2);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 1051f2ca4; end: 1051f2ce7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f2ca4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  func_0x00010c12e1c0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051f2ce8; end: 1051f2f53; -[SCContextStoryPlaybackEntryPoint _exposeContentPlaybackScopeWithOperaPlayableDataModel:delegate:presentingVC:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f2ce8(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  
  puVar1 = PTR_PTR_1126b4d30;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_alloc(puVar1);
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  param_1 = param_1 * 1000.0;
  lVar6 = (long)param_1;
  uVar4 = param_4;
  func_0x00010c259cc0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04bca0(puVar1,param_3,7,8,lVar6,0x1a,param_4,uVar4,0,0);
  _objc_release(param_4);
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126b4d40;
  _objc_alloc(PTR_PTR_1126b4d40);
  lVar6 = param_2;
  FUN_1051f29a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010bf16300();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7200(puVar2,param_3,lVar3,param_6,0,param_5,0,1,0,0);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(lVar3);
  _objc_release(lVar6);
  lVar6 = param_2 + _DAT_11271f450;
  _objc_loadWeakRetained(lVar6);
  lVar3 = lVar6;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = (long)_DAT_11271f44c;
  dVar8 = *(double *)(param_2 + lVar7);
  _CACurrentMediaTime();
  uVar4 = 0x1a;
  func_0x000108534a80(0x1a);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ab9c0((double)(long)((param_1 - dVar8) * 1000.0),lVar3,param_3,
                      &PTR____CFConstantStringClassReference_110dc6038,uVar4);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar6);
  puVar5 = PTR_PTR_1126b4d48;
  _objc_alloc(PTR_PTR_1126b4d48);
  func_0x00010bff0a00(*(undefined8 *)(param_2 + lVar7));
  lVar6 = param_2 + _DAT_11271f4f0;
  _objc_loadWeakRetained(lVar6);
  lVar3 = lVar6;
  func_0x00010bf22a20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  func_0x00010bf9d620(*(undefined8 *)(param_2 + _DAT_11271f4bc),param_3,lVar3);
  _objc_release(lVar3);
  _objc_release(puVar5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1051f2f54; end: 1051f30b7; -[SCContextStoryPlaybackEntryPoint _fetchStorySummaryInfoWithUserId:] */

void FUN_1051f2f54(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  ppuVar2 = &puStack_80;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_58,param_1);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1051f30b8;
    puStack_68 = &UNK_110866f40;
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retainBlock(&puStack_80);
    FUN_1051f3110(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c12a480();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    func_0x00010bfaa9c0(uVar4);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(param_1);
    _objc_release(ppuVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1051f30b8; end: 1051f310f;  */

void FUN_1051f30b8(long param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x000107a8819c(param_2);
    _objc_retainAutoreleasedReturnValue();
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be7ebc0();
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 1051f3110; end: 1051f3133;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f3110(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11271f468);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051f3134; end: 1051f32db; -[SCContextStoryPlaybackEntryPoint _presentOperaSessionScopeWithLaunchingCandidates:] */

void FUN_1051f3134(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b23f0;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011ae0();
  _objc_release(puVar2);
  uVar3 = param_1;
  FUN_1051f29a0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126b6188;
  _objc_opt_new();
  func_0x00010c18b5e0();
  _objc_initWeak(auStack_48,param_1);
  uVar4 = uVar3;
  func_0x00010bf16340(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010c10c320(puVar2);
  _objc_release(uVar4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar2);
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1051f32dc; end: 1051f3577;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f32dc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined **ppuVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = lVar1 + _DAT_11271f4b4;
    _objc_loadWeakRetained();
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf16300(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2400;
  _objc_alloc(PTR_PTR_1126b2400);
  dVar9 = 0.0;
  func_0x00010c018aa0(0);
  lVar4 = param_1 + 0x40;
  _objc_loadWeakRetained();
  lVar5 = lVar4;
  func_0x00010be6dc60();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar8;
  func_0x00010bf23920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(lVar8);
  _objc_release(lVar1);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar8 = lVar1 + _DAT_11271f450;
    _objc_loadWeakRetained(lVar8);
    lVar4 = lVar8;
    func_0x00010bfcdf20();
    _objc_retainAutoreleasedReturnValue();
    dVar10 = *(double *)(lVar1 + _DAT_11271f44c);
    _CACurrentMediaTime();
    uVar2 = 0x1a;
    func_0x000108534a80(0x1a);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ab9c0((double)(long)((dVar9 - dVar10) * 1000.0),lVar4);
    _objc_release(uVar2);
    _objc_release(lVar4);
    _objc_release(lVar8);
  }
  lVar8 = param_1 + 0x40;
  _objc_loadWeakRetained();
  func_0x00010bf9d620();
  _objc_release(lVar8);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1051f3578;
  puStack_88 = &UNK_110841fb0;
  _objc_copyWeak(auStack_78,param_1 + 0x40);
  ppuVar7 = &puStack_a0;
  lStack_80 = lVar6;
  _objc_retainBlock(ppuVar7);
  _objc_destroyWeak(auStack_78);
  _objc_release(lVar1);
  _objc_release(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar7);
  return;
}



/* Entry: 1051f3578; end: 1051f35c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f3578(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  func_0x00010c12e1e0();
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051f35c4; end: 1051f4217; -[SCContextStoryPlaybackEntryPoint _operaPlugins] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f35c4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  undefined *puVar52;
  undefined *puVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  long lVar57;
  long lVar58;
  long lVar59;
  long lVar60;
  long lVar61;
  long lVar62;
  long lVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  long lVar67;
  long lVar68;
  long lVar69;
  long lVar70;
  long lVar71;
  long lVar72;
  long lVar73;
  long lVar74;
  long lVar75;
  long lVar76;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined8 uStack_200;
  long lStack_118;
  long lStack_e8;
  undefined8 uStack_c8;
  long lStack_a8;
  
  lVar74 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c26f3c0(PTR__OBJC_CLASS___NSDate_1126ae770);
  if (param_1 == 0) {
    lVar75 = 0;
  }
  else {
    lVar75 = param_1 + _DAT_11271f484;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar75;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  FUN_1051f3110();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c12a480();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar54 = 0;
  }
  else {
    lVar54 = param_1 + _DAT_11271f470;
    _objc_loadWeakRetained();
  }
  lVar5 = lVar54;
  func_0x00010c2587e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lStack_a8 = 0;
    lVar55 = 0;
  }
  else {
    lStack_a8 = param_1 + _DAT_11271f480;
    _objc_loadWeakRetained();
    lVar55 = param_1 + _DAT_11271f47c;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar55;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  FUN_1051f4218();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c244d60();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar56 = 0;
  }
  else {
    lVar56 = param_1 + _DAT_11271f490;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar56;
  func_0x00010bf9e260();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uStack_c8 = 0;
    lVar57 = 0;
  }
  else {
    uStack_c8 = *(undefined8 *)(param_1 + _DAT_11271f49c);
    _objc_retain();
    lVar57 = param_1 + _DAT_11271f48c;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar57;
  func_0x00010c14a6e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    _objc_retain(0);
    uStack_200 = 0;
    lVar58 = 0;
  }
  else {
    uStack_200 = *(undefined8 *)(param_1 + _DAT_11271f4b8);
    _objc_retain();
    lVar58 = param_1 + _DAT_11271f494;
    _objc_loadWeakRetained();
  }
  lVar12 = lVar58;
  func_0x00010c26b280();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar59 = 0;
  }
  else {
    lVar59 = param_1 + _DAT_11271f488;
    _objc_loadWeakRetained();
  }
  lVar13 = lVar59;
  func_0x00010c0dc400();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lStack_e8 = 0;
    lVar60 = 0;
  }
  else {
    lStack_e8 = param_1 + _DAT_11271f4a4;
    _objc_loadWeakRetained();
    lVar60 = param_1 + _DAT_11271f498;
    _objc_loadWeakRetained();
  }
  lVar14 = lVar60;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_1;
  func_0x0001051f423c();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar15;
  func_0x00010c24c220();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = param_1;
  func_0x0001051f423c();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010c24ba80();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1;
  func_0x00010bf819a0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010c08d460();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = param_1;
  func_0x00010bf81ca0();
  _objc_retainAutoreleasedReturnValue();
  lVar22 = lVar21;
  func_0x00010c08d4a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lStack_118 = 0;
    lVar61 = 0;
  }
  else {
    lStack_118 = param_1 + _DAT_11271f474;
    _objc_loadWeakRetained();
    lVar61 = param_1 + _DAT_11271f460;
    _objc_loadWeakRetained();
  }
  lVar23 = lVar61;
  func_0x00010c22ac60();
  _objc_retainAutoreleasedReturnValue();
  lVar24 = param_1 + _DAT_11271f454;
  _objc_loadWeakRetained();
  lVar25 = lVar24;
  func_0x00010c258e40();
  _objc_retainAutoreleasedReturnValue();
  lVar26 = param_1;
  func_0x0001051f4260();
  _objc_retainAutoreleasedReturnValue();
  lVar27 = lVar26;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar28 = lVar27;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar62 = 0;
  }
  else {
    lVar62 = param_1 + _DAT_11271f450;
    _objc_loadWeakRetained();
  }
  lVar29 = lVar62;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar63 = 0;
  }
  else {
    lVar63 = param_1 + _DAT_11271f4c0;
    _objc_loadWeakRetained();
  }
  lVar30 = lVar63;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar64 = 0;
  }
  else {
    lVar64 = param_1 + _DAT_11271f4c4;
    _objc_loadWeakRetained();
  }
  lVar31 = lVar64;
  func_0x00010c08f6e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar65 = 0;
  }
  else {
    lVar65 = param_1 + _DAT_11271f4c8;
    _objc_loadWeakRetained();
  }
  lVar32 = lVar65;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar33 = lVar32;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar66 = 0;
  }
  else {
    lVar66 = param_1 + _DAT_11271f4cc;
    _objc_loadWeakRetained();
  }
  lVar34 = lVar66;
  func_0x00010bf0b640();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = param_1;
  func_0x0001051f4260();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = lVar35;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar36;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar67 = 0;
  }
  else {
    lVar67 = param_1 + _DAT_11271f4d0;
    _objc_loadWeakRetained();
  }
  lVar38 = lVar67;
  func_0x00010bfe7580();
  _objc_retainAutoreleasedReturnValue();
  lVar39 = lVar38;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar40 = param_1;
  func_0x00010bf819a0();
  _objc_retainAutoreleasedReturnValue();
  lVar41 = lVar40;
  func_0x00010c08d460();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar68 = 0;
  }
  else {
    lVar68 = param_1 + _DAT_11271f4d4;
    _objc_loadWeakRetained();
  }
  lVar42 = lVar68;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar69 = 0;
  }
  else {
    lVar69 = param_1 + _DAT_11271f4d8;
    _objc_loadWeakRetained();
  }
  lVar43 = lVar69;
  func_0x00010c101cc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar70 = 0;
  }
  else {
    lVar70 = param_1 + _DAT_11271f4dc;
    _objc_loadWeakRetained();
  }
  lVar44 = lVar70;
  func_0x00010c2814a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar71 = 0;
  }
  else {
    lVar71 = param_1 + _DAT_11271f4e4;
    _objc_loadWeakRetained();
  }
  lVar45 = lVar71;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar72 = 0;
  }
  else {
    lVar72 = param_1 + _DAT_11271f4e0;
    _objc_loadWeakRetained();
  }
  lVar46 = lVar72;
  func_0x00010c2928c0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar73 = 0;
  }
  else {
    lVar73 = param_1 + _DAT_11271f4e8;
    _objc_loadWeakRetained();
  }
  lVar47 = lVar73;
  func_0x00010c0e1840();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar76 = 0;
  }
  else {
    lVar76 = param_1 + _DAT_11271f4ec;
    _objc_loadWeakRetained();
  }
  lVar48 = lVar76;
  func_0x00010c0ffb20();
  _objc_retainAutoreleasedReturnValue();
  lVar49 = param_1;
  FUN_1051f4218();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = lVar49;
  func_0x00010c2445a0();
  _objc_retainAutoreleasedReturnValue();
  lVar51 = lVar1;
  func_0x000107204770(lVar1,lVar4,lVar6,0,lStack_a8,
                      (long)((double)CONCAT17(in_register_00005007,
                                              CONCAT16(in_register_00005006,
                                                       CONCAT15(in_register_00005005,
                                                                CONCAT14(in_register_00005004,
                                                                         CONCAT13(
                                                  in_register_00005003,
                                                  CONCAT12(in_register_00005002,
                                                           CONCAT11(in_register_00005001,in_b0))))))
                                             ) * 1000.0),0,0x1a);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_200);
  _objc_release(lVar50);
  _objc_release(lVar49);
  _objc_release(lVar48);
  _objc_release(lVar76);
  _objc_release(lVar47);
  _objc_release(lVar73);
  _objc_release(lVar46);
  _objc_release(lVar72);
  _objc_release(lVar45);
  _objc_release(lVar71);
  _objc_release(lVar44);
  _objc_release(lVar70);
  _objc_release(lVar43);
  _objc_release(lVar69);
  _objc_release(lVar42);
  _objc_release(lVar68);
  _objc_release(lVar41);
  _objc_release(lVar40);
  _objc_release(lVar39);
  _objc_release(lVar38);
  _objc_release(lVar67);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(lVar35);
  _objc_release(lVar34);
  _objc_release(lVar66);
  _objc_release(lVar33);
  _objc_release(lVar32);
  _objc_release(lVar65);
  _objc_release(lVar31);
  _objc_release(lVar64);
  _objc_release(lVar30);
  _objc_release(lVar63);
  _objc_release(lVar29);
  _objc_release(lVar62);
  _objc_release(lVar28);
  _objc_release(lVar27);
  _objc_release(lVar26);
  _objc_release(lVar25);
  _objc_release(lVar24);
  _objc_release(lVar23);
  _objc_release(lVar61);
  _objc_release(lStack_118);
  _objc_release(lVar22);
  _objc_release(lVar21);
  _objc_release(lVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar60);
  _objc_release(lStack_e8);
  _objc_release(lVar13);
  _objc_release(lVar59);
  _objc_release(lVar12);
  _objc_release(lVar58);
  _objc_release(uStack_c8);
  _objc_release(lVar11);
  _objc_release(lVar57);
  _objc_release(lVar10);
  _objc_release(lVar56);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar55);
  _objc_release(lStack_a8);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar54);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar75);
  puVar52 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar53 = puVar52;
  func_0x00010c0d3c80();
  _objc_release(puVar52);
  if (param_1 == 0) {
    lVar75 = 0;
  }
  else {
    lVar75 = param_1 + _DAT_11271f478;
    _objc_loadWeakRetained();
  }
  lVar1 = lVar75;
  func_0x00010c101cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf556a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar75);
  if (lVar3 != 0) {
    func_0x00010befa120(puVar53);
  }
  lVar75 = 0;
  if (param_1 != 0) {
    lVar75 = param_1 + _DAT_11271f4a0;
    _objc_loadWeakRetained(lVar75);
  }
  lVar1 = lVar75;
  func_0x00010c101aa0(lVar75);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf81f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(lVar75);
  func_0x00010befa120(puVar53);
  func_0x00010bf51e00(puVar53);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(puVar53);
  _objc_release();
  if ((*(long *)PTR____stack_chk_guard_11034bdc0 != lVar74) && (___stack_chk_fail(), lVar51 != 0)) {
    _objc_loadWeakRetained(lVar51 + _DAT_11271f45c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051f4218; end: 1051f4283;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f4218(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_11271f45c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051f4284; end: 1051f42cf; -[SCContextStoryPlaybackEntryPoint modalOperaViewController:didBeginPlayingPlaylistGroupDataModel:] */

void FUN_1051f4284(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1051f29a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4f2e0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051f42d0; end: 1051f431b; -[SCContextStoryPlaybackEntryPoint modalOperaViewControllerDidDismiss:] */

void FUN_1051f42d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1051f29a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4f2c0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1051f431c; end: 1051f433b; -[SCContextStoryPlaybackEntryPoint discoverFeedLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f431c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271f4a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051f433c; end: 1051f434f; -[SCContextStoryPlaybackEntryPoint setDiscoverFeedLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f433c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271f4a8,param_3);
  return;
}



/* Entry: 1051f4350; end: 1051f436f; -[SCContextStoryPlaybackEntryPoint discoverFeedRankingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f4350(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11271f4ac);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1051f4370; end: 1051f4383; -[SCContextStoryPlaybackEntryPoint setDiscoverFeedRankingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f4370(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11271f4ac,param_3);
  return;
}



/* Entry: 1051f4384; end: 1051f459f; -[SCContextStoryPlaybackEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f4384(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11271f4f0);
  _objc_destroyWeak(param_1 + _DAT_11271f4ec);
  _objc_destroyWeak(param_1 + _DAT_11271f4e8);
  _objc_destroyWeak(param_1 + _DAT_11271f4e4);
  _objc_destroyWeak(param_1 + _DAT_11271f4e0);
  _objc_destroyWeak(param_1 + _DAT_11271f4dc);
  _objc_destroyWeak(param_1 + _DAT_11271f4d8);
  _objc_destroyWeak(param_1 + _DAT_11271f4d4);
  _objc_destroyWeak(param_1 + _DAT_11271f4d0);
  _objc_destroyWeak(param_1 + _DAT_11271f4cc);
  _objc_destroyWeak(param_1 + _DAT_11271f4c8);
  _objc_destroyWeak(param_1 + _DAT_11271f4c4);
  _objc_destroyWeak(param_1 + _DAT_11271f4c0);
  _objc_destroyWeak(param_1 + _DAT_11271f454);
  _objc_storeStrong(param_1 + _DAT_11271f4bc,0);
  _objc_storeStrong(param_1 + _DAT_11271f4b8,0);
  _objc_destroyWeak(param_1 + _DAT_11271f4b4);
  _objc_storeStrong(param_1 + _DAT_11271f4b0,0);
  _objc_destroyWeak(param_1 + _DAT_11271f4ac);
  _objc_destroyWeak(param_1 + _DAT_11271f4a8);
  _objc_destroyWeak(param_1 + _DAT_11271f4a4);
  _objc_destroyWeak(param_1 + _DAT_11271f4a0);
  _objc_storeStrong(param_1 + _DAT_11271f49c,0);
  _objc_destroyWeak(param_1 + _DAT_11271f498);
  _objc_destroyWeak(param_1 + _DAT_11271f494);
  _objc_destroyWeak(param_1 + _DAT_11271f490);
  _objc_destroyWeak(param_1 + _DAT_11271f48c);
  _objc_destroyWeak(param_1 + _DAT_11271f450);
  _objc_destroyWeak(param_1 + _DAT_11271f488);
  _objc_destroyWeak(param_1 + _DAT_11271f484);
  _objc_destroyWeak(param_1 + _DAT_11271f480);
  _objc_destroyWeak(param_1 + _DAT_11271f47c);
  _objc_destroyWeak(param_1 + _DAT_11271f478);
  _objc_destroyWeak(param_1 + _DAT_11271f474);
  _objc_destroyWeak(param_1 + _DAT_11271f470);
  _objc_destroyWeak(param_1 + _DAT_11271f46c);
  _objc_destroyWeak(param_1 + _DAT_11271f468);
  _objc_destroyWeak(param_1 + _DAT_11271f464);
  _objc_destroyWeak(param_1 + _DAT_11271f460);
  _objc_destroyWeak(param_1 + _DAT_11271f45c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11271f458);
  return;
}



/* Entry: 1051f45a0; end: 1051f4603; -[SCModalOperaViewController viewDidLoad] */

void FUN_1051f45a0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e6e20;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(param_1);
  return;
}



/* Entry: 1051f4604; end: 1051f4757; -[SCModalOperaViewController presentFromBaseViewController:withPresenterProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f4604(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + _DAT_11271f4f4) == 0) {
    func_0x00010c1c8b80(param_1);
    func_0x00010c219b20(param_1);
    _objc_storeWeak(param_1 + _DAT_11271f4f8,param_3);
    _objc_initWeak(auStack_48,param_1);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1051f4758;
    puStack_60 = &UNK_110848708;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    ppuVar1 = &puStack_78;
    uStack_58 = param_4;
    _objc_retainBlock();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11271f4fc);
    *(undefined ***)(param_1 + _DAT_11271f4fc) = ppuVar1;
    _objc_release(uVar2);
    func_0x00010c10eda0(param_3);
    _objc_release(uStack_58);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051f4758; end: 1051f47b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f4758(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    (**(code **)(lVar2 + 0x10))(lVar2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + _DAT_11271f4f4);
    *(long *)(lVar1 + _DAT_11271f4f4) = lVar2;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1051f47b8; end: 1051f490b; -[SCModalOperaViewController presentPlaybackFromBaseViewController:withPresenterProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f47b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + _DAT_11271f4f4) == 0) {
    func_0x00010c1c8b80(param_1);
    func_0x00010c219b20(param_1);
    _objc_storeWeak(param_1 + _DAT_11271f4f8,param_3);
    _objc_initWeak(auStack_48,param_1);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_1051f490c;
    puStack_60 = &UNK_110848708;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_4);
    ppuVar1 = &puStack_78;
    uStack_58 = param_4;
    _objc_retainBlock();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11271f4fc);
    *(undefined ***)(param_1 + _DAT_11271f4fc) = ppuVar1;
    _objc_release(uVar2);
    func_0x00010c10eda0(param_3);
    _objc_release(uStack_58);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1051f490c; end: 1051f496b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f490c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    (**(code **)(lVar2 + 0x10))(lVar2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(lVar1 + _DAT_11271f4f4);
    *(long *)(lVar1 + _DAT_11271f4f4) = lVar2;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1051f496c; end: 1051f49c7; -[SCModalOperaViewController dismissViewControllerAnimated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1051f496c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271f500);
  *(undefined8 *)(param_1 + _DAT_11271f500) = param_4;
  _objc_release(uVar1);
  if (*(long *)(param_1 + _DAT_11271f4f4) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001051f49b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + _DAT_11271f4f4) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1051f49c8; end: 1051f4a07; -[SCModalOperaViewController pageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1051f49c8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + _DAT_11271f4f8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0f2220();
  _objc_release(param_1);
  return lVar1;
}


