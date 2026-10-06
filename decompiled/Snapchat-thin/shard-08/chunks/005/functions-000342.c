/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1061e2804; end: 1061e292b; -[SCCameraToolbarButtonImpl pointInside:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1061e2804(double param_1,double param_2,double param_3,double param_4,ulong param_5,
                   undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar3 = param_1;
  dVar5 = param_2;
  func_0x00010bf01b40();
  if ((dVar3 != 0.0) && (uVar1 = param_5, func_0x00010c074c20(), (uVar1 & 1) == 0)) {
    lVar2 = (long)_DAT_112742a30;
    func_0x00010bf01b40(*(undefined8 *)(param_5 + lVar2));
    if (dVar3 != 0.0) {
      uVar1 = *(ulong *)(param_5 + lVar2);
      func_0x00010c074c20();
      if ((uVar1 & 1) == 0) {
        dVar3 = param_1;
        dVar5 = param_2;
        func_0x00010bf512a0(param_1,param_2,param_5,param_6,*(undefined8 *)(param_5 + lVar2));
        uVar1 = *(ulong *)(param_5 + lVar2);
        func_0x00010bf20c00();
        _CGRectContainsPoint();
        if ((uVar1 & 1) != 0) {
          return 1;
        }
      }
    }
    func_0x00010bf20c00(param_5);
    _CGRectInset();
    dVar4 = dVar3;
    dVar6 = dVar5;
    dVar7 = param_3;
    dVar8 = param_4;
    func_0x00010bf628e0(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CGRectContainsPoint_110347550)
              (dVar3 + dVar6,dVar5 + dVar4,param_3 - (dVar6 + dVar8),param_4 - (dVar4 + dVar7),
               param_1,param_2);
    return param_5;
  }
  return 0;
}



/* Entry: 1061e292c; end: 1061e296b; -[SCCameraToolbarButtonImpl accessibilityElements] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e292c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  func_0x00010c14c720();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1061e296c; end: 1061e2aaf; -[SCCameraToolbarButtonImpl newBadgeView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1061e296c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112742a04;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126c51b8;
    func_0x00010c0d8540(PTR_PTR_1126c51b8,param_2,1,0x34);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar4));
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar3 = param_1;
    func_0x00010beecec0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar1,param_2,&PTR____CFConstantStringClassReference_110dae518);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010c087a00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(lVar3);
    func_0x00010c219b60(*(undefined8 *)(param_1 + lVar4),param_2,0);
    func_0x00010be49980(param_1);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
  return lVar3;
}



/* Entry: 1061e2ab0; end: 1061e2de3; -[SCCameraToolbarButtonImpl _setSelected:animated:] */

/* WARNING: Possible PIC construction at 0x0001061e2cc4: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e2ab0(long param_1,undefined8 param_2,int param_3,int param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar6 = (long)_DAT_112742a18;
  *(char *)(param_1 + lVar6) = (char)param_3;
  lVar2 = param_1;
  func_0x00010c07ad80();
  if ((param_4 != 0) && ((int)lVar2 == 0)) {
    func_0x00010bf02ba0(param_1);
  }
  lVar2 = param_1;
  func_0x00010c273a00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c159840();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar3;
  func_0x00010c08fa60();
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = param_1;
  if (lVar5 == 0) {
LAB_1061e2c28:
    if (param_3 == 0) goto LAB_1061e2d28;
LAB_1061e2cd4:
    lVar5 = *(long *)(param_1 + _DAT_1127429d0);
    func_0x00010beed000();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    func_0x00010c08fa60();
    _objc_release(lVar5);
    if (lVar3 == 0) goto LAB_1061e2d28;
    func_0x00010c273a00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010beed000();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    cVar1 = *(char *)(param_1 + lVar6);
    lVar3 = param_1;
    func_0x00010c273a00(param_1);
    _objc_retainAutoreleasedReturnValue();
    if (cVar1 != '\x01') {
      lVar2 = lVar3;
      func_0x00010c0db300();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010089f0e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00(param_1);
      _objc_release(lVar6);
      _objc_release(lVar2);
      _objc_release(lVar3);
      lVar2 = param_1;
      func_0x00010c273a00(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar2;
      func_0x00010c0db2e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(param_1);
      _objc_release(lVar6);
      _objc_release(lVar2);
      goto code_r0x00010bee2300;
    }
    lVar5 = lVar3;
    func_0x00010c159840();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    func_0x00010089f0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(param_1);
    _objc_release(lVar4);
    _objc_release(lVar5);
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010c273a00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c159300();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(param_1);
    _objc_release(lVar5);
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010c273a00();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c159840();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    FUN_1061e0fc8();
    _objc_release(lVar5);
    _objc_release(lVar3);
    if ((int)lVar4 != 0) {
      func_0x00010beaf9e0(param_1);
      goto LAB_1061e2c28;
    }
    func_0x00010be8d300(param_1);
    if (param_3 != 0) goto LAB_1061e2cd4;
LAB_1061e2d28:
    func_0x00010c273a00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010beecfe0();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c1610a0(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (*(char *)(param_1 + lVar6) == '\x01') {
    lVar2 = param_1;
    func_0x00010c273a00();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010c234640();
    _objc_release(lVar2);
    if ((int)lVar6 != 0) {
      func_0x00010bf031a0(param_1);
    }
  }
  lVar2 = param_1;
  func_0x00010c273a00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b4280();
  _objc_release(lVar2);
code_r0x00010bee2300:
                    /* WARNING: Could not recover jumptable at 0x00010bee2310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateTitle_112596268);
  return;
}



/* Entry: 1061e2de4; end: 1061e2e1b; -[SCCameraToolbarButtonImpl _didChangeToolbarItemWithEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e2de4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127429d0);
  func_0x00010c07d660(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bea7250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__setSelected_animated__112587638,uVar1,1);
  return;
}



/* Entry: 1061e2e1c; end: 1061e2eb3; -[SCCameraToolbarButtonImpl _didChangeToolbarItemLoadingStateWithEvent:] */

void FUN_1061e2e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c273a00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c076be0();
  _objc_release(param_3);
  uVar2 = param_1;
  func_0x00010bfe90c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar1 != 0) {
    func_0x00010c1a7f60();
    _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bec0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__startLoadingAnimation_11258dab0);
    return;
  }
  func_0x00010c1a7f60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bec31d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopLoadingAnimation_11258e618);
  return;
}



/* Entry: 1061e2eb4; end: 1061e3027; -[SCCameraToolbarButtonImpl _startLoadingAnimation] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e2eb4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010c09cba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb20(lVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_2,
                      &PTR____CFConstantStringClassReference_110e44ab8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  func_0x00010c216920(puVar3,param_2,&PTR__OBJC_CLASS___NSConstantDoubleNumber_111184870);
  func_0x00010c192d40(0x4000000000000000,puVar3);
  func_0x00010c1eabe0(0x7f800000,puVar3);
  func_0x00010c1ea580(puVar3,param_2,0);
  func_0x00010bef6c20(*(undefined8 *)(param_1 + _DAT_112742a24),param_2,puVar3,0);
  puVar4 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x00010bf04040(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_2,
                      &PTR____CFConstantStringClassReference_110e44ab8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1180();
  func_0x00010c216920(puVar4,param_2,&PTR__OBJC_CLASS___NSConstantDoubleNumber_111184880);
  func_0x00010c192d40(0x3ff8000000000000,puVar4);
  func_0x00010c1eabe0(0x7f800000,puVar4);
  func_0x00010c1ea580(puVar4,param_2,0);
  func_0x00010bef6c20(*(undefined8 *)(param_1 + _DAT_112742a28),param_2,puVar4,0);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1061e3028; end: 1061e306b; -[SCCameraToolbarButtonImpl _stopLoadingAnimation] */

/* WARNING: Possible PIC construction at 0x0001061e3054: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001061e3058) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e3028(long param_1)

{
  func_0x00010c12c940(*(undefined8 *)(param_1 + _DAT_112742a20));
                    /* WARNING: Could not recover jumptable at 0x00010c12aab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112742a24),PTR_s_removeAllAnimations_1126284c8);
  return;
}



/* Entry: 1061e306c; end: 1061e35b7; -[SCCameraToolbarButtonImpl showImageAnimationWithImage:duration:delay:] */

/* WARNING: Possible PIC construction at 0x0001061e313c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001061e3140) */
/* WARNING: Removing unreachable block (ram,0x0001061e34f4) */
/* WARNING: Removing unreachable block (ram,0x0001061e34f8) */
/* WARNING: Removing unreachable block (ram,0x0001061e3590) */
/* WARNING: Removing unreachable block (ram,0x0001061e35b0) */
/* WARNING: Removing unreachable block (ram,0x0001061e3564) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e306c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  func_0x00010be8c480(param_1);
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  lVar3 = (long)_DAT_112742a3c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar3));
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(0x4020000000000000);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + lVar3),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1061e35b8; end: 1061e35cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e35b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112742a3c),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 1061e35d0; end: 1061e368f;  */

void FUN_1061e35d0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [48];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe90c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0);
  _objc_release(uVar1);
  _CGAffineTransformMakeScale(auStack_50,0x3fe8000000000000,0x3fe8000000000000);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe90c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(uVar1);
  return;
}



/* Entry: 1061e3690; end: 1061e3693; -[SCCameraToolbarButtonImpl hideImageAnimation] */

void FUN_1061e3690(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8c490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__removeImageOverlay_112580ac0);
  return;
}



/* Entry: 1061e3694; end: 1061e372b; -[SCCameraToolbarButtonImpl _hideImageOverlay] */

void FUN_1061e3694(undefined8 param_1,undefined8 param_2)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_1061e372c;
  puStack_28 = &UNK_110848c48;
  uStack_18 = 0x3fe5555555555556;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1061e3974;
  puStack_50 = &UNK_110841f20;
  uStack_48 = param_1;
  uStack_20 = param_1;
  func_0x00010bf02ee0(0x3fd3333333333333,0,PTR__OBJC_CLASS___UIView_1126aec20,param_2,0xc00,
                      &puStack_40,&puStack_68);
  return;
}



/* Entry: 1061e372c; end: 1061e3817;  */

void FUN_1061e372c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1061e3818;
  puStack_50 = &UNK_110842e18;
  uStack_48 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef95a0(0,*(undefined8 *)(param_1 + 0x28),PTR__OBJC_CLASS___UIView_1126aec20,param_2,
                      &puStack_68);
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  uStack_80 = 0x1061e38ac;
  puStack_78 = &UNK_110842e18;
  uStack_70 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef95a0(0,0x3fe6666666666666,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_90);
  puStack_b8 = puVar1;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x1061e3918;
  puStack_a0 = &UNK_110842e18;
  uStack_98 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bef95a0(0x3fe6666666666666,0x3fd3333333333333,PTR__OBJC_CLASS___UIView_1126aec20,
                      param_2,&puStack_b8);
  return;
}



/* Entry: 1061e3818; end: 1061e3973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e3818(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar2 = (long)_DAT_112742a3c;
  func_0x00010c1677c0(0,*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2));
  _CGAffineTransformMakeScale(&uStack_50,0x3fc999999999999a,0x3fc999999999999a);
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + lVar2),param_2,&uStack_80);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe90c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
  _objc_release(uVar1);
  return;
}



/* Entry: 1061e3974; end: 1061e3983;  */

void FUN_1061e3974(long param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be8c490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__removeImageOverlay_112580ac0);
    return;
  }
  return;
}



/* Entry: 1061e3984; end: 1061e3aa7; -[SCCameraToolbarButtonImpl _removeImageOverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e3984(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = (long)_DAT_112742a40;
  if (*(long *)(param_1 + lVar3) != 0) {
    func_0x00010c069d00();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = 0;
    _objc_release(uVar1);
  }
  lVar4 = (long)_DAT_112742a3c;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(uVar1);
  lVar3 = param_1;
  func_0x00010bfe90c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12aaa0();
  _objc_release(lVar2);
  _objc_release(lVar3);
  if (*(long *)(param_1 + lVar4) != 0) {
    func_0x00010c12c960();
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = 0;
    _objc_release(uVar1);
  }
  lVar3 = param_1;
  func_0x00010bfe90c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(0x3ff0000000000000);
  _objc_release(lVar3);
  func_0x00010bfe90c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219960();
  _objc_release(param_1);
  return;
}



/* Entry: 1061e3aa8; end: 1061e3abf; -[SCCameraToolbarButtonImpl customTapAreaInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061e3aa8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127429d8);
}



/* Entry: 1061e3ac0; end: 1061e3ad7; -[SCCameraToolbarButtonImpl setCustomTapAreaInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e3ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_1127429d8);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 1061e3ad8; end: 1061e3af7; -[SCCameraToolbarButtonImpl delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e3ad8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112742a2c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061e3af8; end: 1061e3b07; -[SCCameraToolbarButtonImpl doesProvideHapticFeedback] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1061e3af8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_1127429cc);
}



/* Entry: 1061e3b08; end: 1061e3b47; -[SCCameraToolbarButtonImpl setTitleLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e3b08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112742a30;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061e3b48; end: 1061e3b87; -[SCCameraToolbarButtonImpl setNewBadgeView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e3b48(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112742a04;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061e3b88; end: 1061e3bc7; -[SCCameraToolbarButtonImpl setLableView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e3b88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112742a34;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061e3bc8; end: 1061e3bd7; -[SCCameraToolbarButtonImpl hintTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061e3bc8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127429f0);
}



/* Entry: 1061e3bd8; end: 1061e3c17; -[SCCameraToolbarButtonImpl setHintTimer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e3bd8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127429f0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061e3c18; end: 1061e3c27; -[SCCameraToolbarButtonImpl tooltipTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061e3c18(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127429f4);
}



/* Entry: 1061e3c28; end: 1061e3c67; -[SCCameraToolbarButtonImpl setTooltipTimer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e3c28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127429f4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061e3c68; end: 1061e3c77; -[SCCameraToolbarButtonImpl labelTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061e3c68(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127429f8);
}



/* Entry: 1061e3c78; end: 1061e3cb7; -[SCCameraToolbarButtonImpl setLabelTimer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e3c78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127429f8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061e3cb8; end: 1061e3cc7; -[SCCameraToolbarButtonImpl tooltipBalloon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061e3cb8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112742a14);
}



/* Entry: 1061e3cc8; end: 1061e3d07; -[SCCameraToolbarButtonImpl setTooltipBalloon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e3cc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112742a14;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061e3d08; end: 1061e3d47; -[SCCameraToolbarButtonImpl setLabelsConstraints:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e3d08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112742a38;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061e3d48; end: 1061e3d57; -[SCCameraToolbarButtonImpl buttonLifecycle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061e3d48(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127429e4);
}



/* Entry: 1061e3d58; end: 1061e3d97; -[SCCameraToolbarButtonImpl setButtonLifecycle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e3d58(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127429e4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061e3d98; end: 1061e3db7; -[SCCameraToolbarButtonImpl cameraUserActionLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e3d98(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_1127429d4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061e3db8; end: 1061e3dcb; -[SCCameraToolbarButtonImpl setCameraUserActionLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e3db8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127429d4,param_3);
  return;
}



/* Entry: 1061e3dcc; end: 1061e3e0b; -[SCCameraToolbarButtonImpl setLoadingAnimationLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e3dcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112742a20;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061e3e0c; end: 1061e3e1b; -[SCCameraToolbarButtonImpl loadingAnimationOuterCircle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061e3e0c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112742a24);
}



/* Entry: 1061e3e1c; end: 1061e3e5b; -[SCCameraToolbarButtonImpl setLoadingAnimationOuterCircle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e3e1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112742a24;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061e3e5c; end: 1061e3e6b; -[SCCameraToolbarButtonImpl loadingAnimationInnerCircle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061e3e5c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112742a28);
}



/* Entry: 1061e3e6c; end: 1061e3eab; -[SCCameraToolbarButtonImpl setLoadingAnimationInnerCircle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e3e6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112742a28;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061e3eac; end: 1061e3fff; -[SCCameraToolbarButtonImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e3eac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112742a28,0);
  _objc_storeStrong(param_1 + _DAT_112742a24,0);
  _objc_storeStrong(param_1 + _DAT_112742a20,0);
  _objc_destroyWeak(param_1 + _DAT_1127429d4);
  _objc_storeStrong(param_1 + _DAT_1127429e4,0);
  _objc_storeStrong(param_1 + _DAT_112742a38,0);
  _objc_storeStrong(param_1 + _DAT_112742a14,0);
  _objc_storeStrong(param_1 + _DAT_1127429f8,0);
  _objc_storeStrong(param_1 + _DAT_1127429f4,0);
  _objc_storeStrong(param_1 + _DAT_1127429f0,0);
  _objc_storeStrong(param_1 + _DAT_112742a34,0);
  _objc_storeStrong(param_1 + _DAT_112742a04,0);
  _objc_storeStrong(param_1 + _DAT_112742a30,0);
  _objc_destroyWeak(param_1 + _DAT_112742a2c);
  _objc_storeStrong(param_1 + _DAT_1127429d0,0);
  _objc_storeStrong(param_1 + _DAT_112742a40,0);
  _objc_storeStrong(param_1 + _DAT_112742a3c,0);
  _objc_destroyWeak(param_1 + _DAT_1127429e8);
  _objc_storeStrong(param_1 + _DAT_112742a10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127429ec,0);
  return;
}



/* Entry: 1061e4000; end: 1061e404f; -[SCCameraToolbarItemImpl didCancelEvent] */

void FUN_1061e4000(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x58);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    *(undefined **)(param_1 + 0x58) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x58);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1061e4050; end: 1061e409f; -[SCCameraToolbarItemImpl didChangePositions] */

void FUN_1061e4050(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x100);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126ae820;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + 0x100);
    *(undefined **)(param_1 + 0x100) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + 0x100);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1061e40a0; end: 1061e4103; -[SCCameraToolbarItemImpl setIsLoading:] */

void FUN_1061e40a0(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1;
  func_0x00010c076be0();
  *(char *)(param_1 + 8) = (char)param_3;
  if (param_3 != (int)lVar1) {
    puVar2 = PTR_PTR_1126c87c8;
    _objc_alloc(PTR_PTR_1126c87c8);
    func_0x00010c0540a0();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x80),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 1061e4104; end: 1061e4167; -[SCCameraToolbarItemImpl setIsShowingWidget:] */

void FUN_1061e4104(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1;
  func_0x00010c07e020();
  *(char *)(param_1 + 10) = (char)param_3;
  if (param_3 != (int)lVar1) {
    puVar2 = PTR_PTR_1126c87c8;
    _objc_alloc(PTR_PTR_1126c87c8);
    func_0x00010c0540a0();
    func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x68),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 1061e4168; end: 1061e419b; -[SCCameraToolbarItemImpl toggleSelection] */

void FUN_1061e4168(undefined8 param_1)

{
  func_0x00010c07d660();
  func_0x00010c1b4280(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsDisplay__112650980,1);
  return;
}



/* Entry: 1061e419c; end: 1061e41f3; -[SCCameraToolbarItemImpl setNeedsDisplay:] */

void FUN_1061e419c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c87c8;
  _objc_alloc(PTR_PTR_1126c87c8);
  func_0x00010c0540a0();
  func_0x00010c167e40();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x98),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1061e41f4; end: 1061e4237; -[SCCameraToolbarItemImpl setNeedsCheckVisibilityOfChildItem] */

void FUN_1061e41f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c87c8;
  _objc_alloc(PTR_PTR_1126c87c8);
  func_0x00010c0540a0();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0xa8),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1061e4238; end: 1061e423f; -[SCCameraToolbarItemImpl actionType] */

undefined8 FUN_1061e4238(void)

{
  return 4;
}



/* Entry: 1061e4240; end: 1061e4247; -[SCCameraToolbarItemImpl isLoading] */

undefined1 FUN_1061e4240(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1061e4248; end: 1061e424f; -[SCCameraToolbarItemImpl accessibilityValueSelected] */

undefined8 FUN_1061e4248(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1061e4250; end: 1061e4257; -[SCCameraToolbarItemImpl setAttributedSelectedTitle:] */

void FUN_1061e4250(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1061e4258; end: 1061e425f; -[SCCameraToolbarItemImpl shouldKeepToolbarExpandedOnTap] */

undefined1 FUN_1061e4258(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 1061e4260; end: 1061e4267; -[SCCameraToolbarItemImpl setShouldKeepToolbarExpandedOnTap:] */

void FUN_1061e4260(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xb) = param_3;
  return;
}



/* Entry: 1061e4268; end: 1061e426f; -[SCCameraToolbarItemImpl maskImageName] */

undefined8 FUN_1061e4268(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 1061e4270; end: 1061e4277; -[SCCameraToolbarItemImpl setMaskImageName:] */

void FUN_1061e4270(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1061e4278; end: 1061e427f; -[SCCameraToolbarItemImpl selectedBackgroundColor] */

undefined8 FUN_1061e4278(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 1061e4280; end: 1061e4287; -[SCCameraToolbarItemImpl setPosition:] */

void FUN_1061e4280(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  return;
}



/* Entry: 1061e4288; end: 1061e428f; -[SCCameraToolbarItemImpl shouldShowTitleUponSelection] */

undefined1 FUN_1061e4288(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 1061e4290; end: 1061e4297; -[SCCameraToolbarItemImpl selectedImageName] */

undefined8 FUN_1061e4290(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 1061e4298; end: 1061e429f; -[SCCameraToolbarItemImpl composerCameraMode] */

undefined4 FUN_1061e4298(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* Entry: 1061e42a0; end: 1061e42a7; -[SCCameraToolbarItemImpl setComposerCameraMode:] */

void FUN_1061e42a0(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 1061e42a8; end: 1061e42af; -[SCCameraToolbarItemImpl shouldShowNewBadge] */

undefined1 FUN_1061e42a8(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd);
}



/* Entry: 1061e42b0; end: 1061e42b7; -[SCCameraToolbarItemImpl setItemType:] */

void FUN_1061e42b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x110) = param_3;
  return;
}



/* Entry: 1061e42b8; end: 1061e441b; -[SCCameraToolbarItemImpl .cxx_destruct] */

void FUN_1061e42b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_destroyWeak(param_1 + 0xf8);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
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
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 1061e441c; end: 1061e442b; -[SCCameraToolbarNGSBackgroundView style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061e441c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112742afc);
}



/* Entry: 1061e442c; end: 1061e443b; -[SCCameraToolbarNGSBackgroundView theme] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061e442c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112742af0);
}



/* Entry: 1061e443c; end: 1061e448b; -[SCCameraToolbarNGSBackgroundView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e443c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112742af8,0);
  _objc_storeStrong(param_1 + _DAT_112742af4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112742b00,0);
  return;
}



/* Entry: 1061e448c; end: 1061e4493; -[SCCameraToolbarItemPreloadingInfo hidden] */

undefined1 FUN_1061e448c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1061e4494; end: 1061e449b; -[SCCameraToolbarItemPreloadingInfo setHidden:] */

void FUN_1061e4494(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 1061e449c; end: 1061e4623; -[SCCameraToolbarView accessibilityElements] */

undefined * FUN_1061e449c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
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
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_1);
        }
        lVar5 = *(long *)(lStack_128 + lVar7 * 8);
        lVar3 = lVar5;
        func_0x00010c06b4e0();
        if ((int)lVar3 != 0) {
          func_0x00010befa120(puVar1,param_2,lVar5);
        }
        lVar3 = lVar5;
        func_0x00010beece40();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf529e0();
        _objc_release(lVar3);
        if (lVar4 != 0) {
          func_0x00010beece40(lVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa160(puVar1,param_2,lVar5);
          _objc_release(lVar5);
        }
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_1;
      func_0x00010bf52a60(param_1,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  return (undefined *)0x0;
}



/* Entry: 1061e4624; end: 1061e462b; -[SCCameraToolbarView isAccessibilityElement] */

undefined8 FUN_1061e4624(void)

{
  return 0;
}



/* Entry: 1061e462c; end: 1061e479f; -[SCCameraToolbarView pointInside:withEvent:] */

ulong FUN_1061e462c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                   ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
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
  _objc_retain(param_5);
  uVar5 = param_3;
  func_0x00010bf4ba40(param_1,param_2);
  uVar1 = param_3;
  func_0x00010c230a80();
  if (((int)uVar1 != 0) && ((uVar5 & 1) == 0)) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uVar1 = param_3;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf52a60();
    uVar5 = 0;
    if (uVar2 != 0) {
      lVar4 = *plStack_120;
      do {
        uVar5 = 0;
        do {
          if (*plStack_120 != lVar4) {
            _objc_enumerationMutation(uVar1);
          }
          uVar3 = *(ulong *)(lStack_128 + uVar5 * 8);
          func_0x00010bf512a0(param_1,param_2,param_3,param_4,uVar3);
          func_0x00010c102b20(uVar3,param_4,param_5);
          if ((uVar3 & 1) != 0) {
            uVar5 = 1;
            goto LAB_1061e4750;
          }
          uVar5 = uVar5 + 1;
        } while (uVar2 != uVar5);
        uVar2 = uVar1;
        func_0x00010bf52a60(uVar1,param_4,&uStack_130,auStack_e8,0x10);
      } while (uVar2 != 0);
      uVar5 = 0;
    }
LAB_1061e4750:
    _objc_release(uVar1);
  }
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar5;
  }
  ___stack_chk_fail();
  func_0x00010bf20c00();
  _CGRectInset();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return param_5;
}



/* Entry: 1061e47a0; end: 1061e47d7; -[SCCameraToolbarView containsPointWithBoundsOffset:] */

void FUN_1061e47a0(void)

{
  func_0x00010bf20c00();
  _CGRectInset();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)();
  return;
}



/* Entry: 1061e47d8; end: 1061e47e7; -[SCCameraToolbarView shouldHandleOutOfBoundTouch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1061e47d8(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112742b0c);
}



/* Entry: 1061e47e8; end: 1061e4827; -[SCCameraToolbarView setBackgroundView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e47e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112742b08;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1061e4828; end: 1061e483b; -[SCCameraToolbarView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e4828(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112742b08,0);
  return;
}



/* Entry: 1061e483c; end: 1061e49b3; -[SCCameraToolbarOverlayView hitTest:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e483c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lStack_70;
  undefined *puStack_68;
  
  plVar7 = &lStack_70;
  _objc_retain(param_5);
  lVar8 = (long)_DAT_112742b10;
  lVar1 = param_3 + lVar8;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_3 + lVar8;
    _objc_loadWeakRetained(lVar1);
    uVar9 = param_1;
    uVar10 = param_2;
    func_0x00010bf512a0(param_1,param_2,param_3);
    _objc_release(lVar1);
    lVar1 = param_3 + lVar8;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c102b20(uVar9,uVar10);
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      puVar3 = (undefined1 *)(param_3 + lVar8);
      _objc_loadWeakRetained();
      puVar4 = puVar3;
      func_0x00010bfe3a40(uVar9,uVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      if (puVar4 != (undefined1 *)0x0) goto LAB_1061e4988;
    }
  }
  uVar5 = param_3 + _DAT_112742b14;
  _objc_loadWeakRetained();
  uVar6 = uVar5;
  func_0x00010c102c40(param_1,param_2);
  if ((uVar6 & 1) == 0) {
    puStack_68 = PTR_PTR_1126f04b0;
    lStack_70 = param_3;
    _objc_msgSendSuper2(param_1,param_2,&lStack_70,PTR_s_hitTest_withEvent__1125d6850,param_5);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    plVar7 = (long *)0x0;
  }
  _objc_release(uVar5);
  puVar4 = (undefined1 *)plVar7;
LAB_1061e4988:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1061e49b4; end: 1061e49d3; -[SCCameraToolbarOverlayView containerView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e49b4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112742b14);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061e49d4; end: 1061e49f3; -[SCCameraToolbarOverlayView toolbarView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e49d4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112742b10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061e49f4; end: 1061e4a13; -[SCCameraToolbarOverlayView circumstanceEngine] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e49f4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112742b18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061e4a14; end: 1061e4a33; -[SCCameraToolbarOverlayView appStartExperimentReader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e4a14(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112742b1c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1061e4a34; end: 1061e4af3; -[SCCameraToolbarOverlayView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e4a34(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112742b1c);
  _objc_destroyWeak(param_1 + _DAT_112742b18);
  _objc_destroyWeak(param_1 + _DAT_112742b10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112742b14);
  return;
}



/* Entry: 1061e4af4; end: 1061e4afb;  */

void FUN_1061e4af4(void)

{
  return;
}



/* Entry: 1061e4afc; end: 1061e4bd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e4afc(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf3fb00(param_1,param_2,0);
    *(undefined1 *)(param_1 + _DAT_112742b48) = 0;
    func_0x00010be94100(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061e4bd4; end: 1061e4c6b;  */

void FUN_1061e4bd4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010bdc47e0();
    if ((int)lVar2 != 0) {
      func_0x00010bee2ec0(lVar1);
      func_0x00010bee2e80(lVar1);
    }
    lVar2 = lVar1;
    func_0x00010beeb260();
    if (((int)lVar2 != 0) && (lVar2 = lVar1, func_0x00010beb5ce0(), (int)lVar2 != 0)) {
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1061e4c6c; end: 1061e4cbf; -[SCCameraVerticalToolbar dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e4c6c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c256420();
  func_0x00010bf86d40(*(undefined8 *)(param_1 + _DAT_112742b68));
  puStack_28 = PTR_PTR_1126f04b8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1061e4cc0; end: 1061e4d8f; -[SCCameraVerticalToolbar _changeToolbarItemPosition:newPosition:reloadToolbar:] */

void FUN_1061e4cc0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,int param_5
                  )

{
  _objc_retain(param_3);
  if ((param_3 != 0) && (func_0x00010c1dee80(param_3,param_2,param_4), param_5 != 0)) {
    func_0x00010c129060(param_1,param_2,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1061e4d90; end: 1061e4e87;  */

void FUN_1061e4d90(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdd9520();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1061e4e88; end: 1061e4e93;  */

void FUN_1061e4e88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee41d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateVisiblityOfChildItemOfIte_112596a18,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1061e4e94; end: 1061e4f27; -[SCCameraVerticalToolbar _expandToolbarAnimated:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e4e94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  _objc_retain(param_4);
  if ((*(byte *)(param_1 + _DAT_112742b8c) & 1) == 0) {
    func_0x00010be49b60(param_1);
  }
  puVar1 = PTR_PTR_1126c7808;
  _objc_alloc(PTR_PTR_1126c7808);
  func_0x00010c062540();
  func_0x00010be915a0(param_1,param_2,puVar1,param_3,0,*(undefined8 *)(param_1 + _DAT_112742b2c),
                      param_4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1061e4f28; end: 1061e4f33; -[SCCameraVerticalToolbar collapseToolbarAnimated:] */

void FUN_1061e4f28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bde1c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__collapseToolbarAnimated_isSelec_1125560a0,param_3,0,0);
  return;
}



/* Entry: 1061e4f34; end: 1061e4f53; -[SCCameraVerticalToolbar _collapseToolbarAnimated:isSelectionChanged:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e4f34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x00010be915b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__requestOrchestratorStateChangeW_112581f08,0,param_3,0,
             *(undefined8 *)(param_1 + _DAT_112742b2c),param_5);
  return;
}



/* Entry: 1061e4f54; end: 1061e4fbb; -[SCCameraVerticalToolbar indexOfItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1061e4f54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112742ba4;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar2 = 0x7fffffffffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    func_0x00010bfecde0(uVar2,param_2,param_3);
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 1061e4fbc; end: 1061e4fbf; -[SCCameraVerticalToolbar viewForToolbarItem:] */

void FUN_1061e4fbc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd7310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__buttonForToolbarItem__112553660);
  return;
}



/* Entry: 1061e4fc0; end: 1061e4fcb; -[SCCameraVerticalToolbar buttonForToolbarItem:] */

void FUN_1061e4fc0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdd7310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__buttonForToolbarItem__112553660);
  return;
}



/* Entry: 1061e4fcc; end: 1061e4fdb; -[SCCameraVerticalToolbar toolbarView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e4fcc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112742bac),PTR_s_target_112678178);
  return;
}



/* Entry: 1061e4fdc; end: 1061e51ab; -[SCCameraVerticalToolbar cancelActiveToolbarGestures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1061e4fdc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
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
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar1 = *(long *)(param_1 + _DAT_112742b84);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar9 = *plStack_1a0;
    do {
      lVar10 = 0;
      do {
        if (*plStack_1a0 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        lVar3 = *(long *)(lStack_1a8 + lVar10 * 8);
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        func_0x00010bfc1c00();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf51e00();
        _objc_release(lVar3);
        lVar3 = lVar4;
        func_0x00010bf52a60(lVar4,param_2,&uStack_1f0,auStack_168,0x10);
        if (lVar3 != 0) {
          lVar11 = *plStack_1e0;
          do {
            lVar12 = 0;
            do {
              if (*plStack_1e0 != lVar11) {
                _objc_enumerationMutation(lVar4);
              }
              uVar8 = *(undefined8 *)(lStack_1e8 + lVar12 * 8);
              uVar6 = uVar8;
              func_0x00010c071800();
              if ((int)uVar6 != 0) {
                func_0x00010c195460(uVar8,param_2,0);
                func_0x00010c195460(uVar8,param_2,1);
              }
              lVar12 = lVar12 + 1;
            } while (lVar3 != lVar12);
            lVar3 = lVar4;
            func_0x00010bf52a60(lVar4,param_2,&uStack_1f0,auStack_168,0x10);
          } while (lVar3 != 0);
        }
        _objc_release(lVar4);
        lVar10 = lVar10 + 1;
      } while (lVar10 != lVar2);
      lVar2 = lVar1;
      func_0x00010bf52a60(lVar1,param_2,&uStack_1b0,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  uVar6 = *(undefined8 *)(lVar1 + _DAT_112742b84);
  func_0x00010bf00d20(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff4000(puVar5,param_2,uVar6);
  _objc_release(uVar6);
  if (*(long *)(lVar1 + _DAT_112742bb0) != 0) {
    func_0x00010befa120(puVar5);
  }
  if (*(long *)(lVar1 + _DAT_112742bb4) != 0) {
    func_0x00010befa120(puVar5);
  }
  puVar7 = puVar5;
  func_0x00010bf51e00(puVar5);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}


