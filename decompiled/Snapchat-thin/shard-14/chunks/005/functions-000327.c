/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b29c41c; end: 10b29c4db; -[SCBarButton titleLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29c41c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11278e0cc;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    puVar1 = PTR_PTR_1126d3f50;
    func_0x00010bfb4200(PTR_PTR_1126d3f50,param_2,0xf,3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b29c4dc; end: 10b29c547; -[SCBarButton imageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29c4dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11278e0c8;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b29c548; end: 10b29c557; -[SCBarButton title] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b29c548(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e0d0);
}



/* Entry: 10b29c558; end: 10b29c567; -[SCBarButton image] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b29c558(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e0d4);
}



/* Entry: 10b29c568; end: 10b29c577; -[SCBarButton highlightedImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b29c568(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e0d8);
}



/* Entry: 10b29c578; end: 10b29c5b7; -[SCBarButton setImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29c578(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e0c8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b29c5b8; end: 10b29c5f7; -[SCBarButton setTitleLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29c5b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e0cc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b29c5f8; end: 10b29c667; -[SCBarButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29c5f8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278e0cc,0);
  _objc_storeStrong(param_1 + _DAT_11278e0c8,0);
  _objc_storeStrong(param_1 + _DAT_11278e0d8,0);
  _objc_storeStrong(param_1 + _DAT_11278e0d4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e0d0,0);
  return;
}



/* Entry: 10b29c668; end: 10b29c673; +[SCButton layerClass] */

void FUN_10b29c668(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  return;
}



/* Entry: 10b29c674; end: 10b29c887; -[SCButton init] */

undefined1 * FUN_10b29c674(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_112706190;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c271420(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213040();
    _objc_release(puVar2);
    func_0x00010c181ee0(puVar1);
    puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4031000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c271420(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480();
    _objc_release(puVar2);
    _objc_release(puVar3);
    func_0x00010c17d4c0(puVar1);
    func_0x00010c2163a0(0,0x4034000000000000,0,0x4034000000000000,puVar1);
    func_0x00010c167fc0(puVar1);
    func_0x00010c200280(puVar1);
    puVar3 = PTR__OBJC_CLASS___CALayer_1126b1750;
    func_0x00010c08c0e0(PTR__OBJC_CLASS___CALayer_1126b1750);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c223b20(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c29ff00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar2);
    _objc_release(puVar3);
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c29ff00(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c2c00();
    _objc_release(puVar4);
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c22a660(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19bc00();
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b29c888; end: 10b29ca57; -[SCButton layoutSubviews] */

void FUN_10b29c888(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_112706190;
  uStack_70 = param_5;
  _objc_msgSendSuper2(&uStack_70,PTR_s_layoutSubviews_112600e60);
  uVar1 = param_5;
  func_0x00010c29ff00(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uVar3 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c166440();
  _objc_release(uVar1);
  func_0x00010bf20c00(param_5);
  uVar1 = param_5;
  func_0x00010c29ff00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(uVar3,uVar5);
  _objc_release(uVar1);
  func_0x00010c074c20(param_5);
  func_0x00010beaa2c0(param_5);
  func_0x00010c112640(param_5);
  dVar6 = param_3;
  dVar7 = param_4;
  func_0x00010bf20c00(param_5);
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  if ((param_3 != dVar6) || (param_4 != dVar7)) {
    func_0x00010bf20c00(param_5);
    uVar1 = param_5;
    uVar4 = uVar3;
    func_0x00010c08c0e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf525a0();
    func_0x00010bf19a00(uVar3,uVar5,dVar6,dVar7,uVar4,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    uVar3 = param_5;
    func_0x00010c22a660(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820();
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(uVar1);
    func_0x00010bf20c00(param_5);
    func_0x00010c1e2500(param_5);
  }
  return;
}



/* Entry: 10b29ca58; end: 10b29cb03; -[SCButton setSelected:] */

void FUN_10b29ca58(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_112706190;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setSelected__11265c598);
  uVar1 = param_1;
  if (param_3 == 0) {
    func_0x00010bf13dc0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf13de0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c22a660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(param_1);
  _objc_release(uVar1);
  return;
}



/* Entry: 10b29cb04; end: 10b29cbaf; -[SCButton setHighlighted:] */

void FUN_10b29cb04(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_112706190;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_setHighlighted__112647c38);
  uVar1 = param_1;
  if (param_3 == 0) {
    func_0x00010bf13dc0(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf13de0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  func_0x00010c22a660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(param_1);
  _objc_release(uVar1);
  return;
}



/* Entry: 10b29cbb0; end: 10b29ccef; -[SCButton activityIndicatorView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29cbb0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar4 = (long)_DAT_11278e0f0;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
    _objc_alloc();
    func_0x00010bff0f20();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,1);
    func_0x00010c162dc0(param_1,param_2,0);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x10b29cc88;
    puStack_40 = &UNK_1108471b0;
    lStack_38 = param_1;
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar4),param_2,&puStack_58);
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b29ccf0; end: 10b29ccf3; -[SCButton shapeLayer] */

void FUN_10b29ccf0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08c0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layer_112600a48);
  return;
}



/* Entry: 10b29ccf4; end: 10b29ccf7; -[SCButton backgroundColor] */

void FUN_10b29ccf4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf13dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_backgroundColorNormal_1125a2918);
  return;
}



/* Entry: 10b29ccf8; end: 10b29cdeb; -[SCButton setBackgroundColor:] */

void FUN_10b29ccf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  
  _objc_retainAutorelease(param_3);
  _objc_retain(param_3);
  func_0x00010bdc0fe0(param_3);
  uVar1 = param_1;
  func_0x00010c22a660(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(uVar1);
  func_0x00010c16e4a0(param_1,param_2,param_3);
  uVar1 = param_3;
  func_0x00010bfc9760(param_3,param_2,&dStack_38,&dStack_40,&dStack_48,&uStack_50);
  _objc_release(param_3);
  if ((int)uVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41620(dStack_38 * 0.8,dStack_40 * 0.8,dStack_48 * 0.8,uStack_50,
                        PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c16e4c0(param_1,param_2,puVar2);
  _objc_release(puVar2);
  return;
}



/* Entry: 10b29cdec; end: 10b29cfd3; -[SCButton setActivityIndicatorHidden:alignment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29cdec(undefined *param_1,undefined8 param_2,int param_3,undefined *param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 auStack_80 [5];
  undefined8 auStack_58 [5];
  
  if (param_3 == 0) {
    if (param_4 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c216380(param_1,param_2,puVar3,0);
      _objc_release(puVar3);
    }
    puVar3 = param_1;
    func_0x00010bef1620();
    if (param_4 != puVar3) {
      func_0x00010c162dc0(param_1,param_2,param_4);
      puVar3 = param_1;
      func_0x00010bef1600(param_1);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = auStack_58;
      if (param_4 != (undefined *)0x0) {
        puVar1 = auStack_80;
      }
      pcVar2 = (code *)0x10b29cf6c;
      if (param_4 != (undefined *)0x0) {
        pcVar2 = FUN_10b29cfd4;
      }
      *puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      puVar1[1] = 0xc2000000;
      puVar1[2] = pcVar2;
      puVar1[3] = &UNK_1108471b0;
      puVar1[4] = param_1;
      func_0x00010c0bbfe0();
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar3);
    }
    puVar3 = param_1;
    func_0x00010bef1600(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(puVar3);
    func_0x00010bef1600(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24dbc0();
  }
  else {
    lVar4 = (long)_DAT_11278e0f0;
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar4),param_2,1);
    func_0x00010c2558c0(*(undefined8 *)(param_1 + lVar4));
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216380(param_1,param_2,puVar3,0);
    param_1 = puVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b29cfd4; end: 10b29d0fb;  */

void FUN_10b29cfd4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0xc034000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b29d0fc; end: 10b29d19f; -[SCButton setHidden:animated:] */

void FUN_10b29d0fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  undefined8 uVar1;
  
  if ((param_4 & 1) == 0) {
    func_0x00010c1a7f60(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010beaa2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__setVisibleMaskTransform__112588258,param_3);
    return;
  }
  uVar1 = param_1;
  func_0x00010c074c20();
  if (((int)param_3 == (int)uVar1) && (uVar1 = param_1, func_0x00010bf03940(), (int)uVar1 == 0)) {
    return;
  }
  uVar1 = param_1;
  func_0x00010bf03940();
  if ((int)uVar1 != 0) {
    func_0x00010c200280(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c19c9f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setFinalHiddenState__112644c98,param_3);
    return;
  }
  func_0x00010c167fc0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdcacd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__animateHiding__1125504d0,param_3);
  return;
}



/* Entry: 10b29d1a0; end: 10b29d24b; -[SCButton _setVisibleMaskTransform:] */

void FUN_10b29d1a0(double param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if (param_4 == 0) {
    _CGAffineTransformMakeTranslation(&uStack_b0,0,0);
    func_0x00010c29ff00(param_2);
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = uStack_a8;
    uStack_80 = uStack_b0;
    uStack_68 = uStack_98;
    uStack_70 = uStack_a0;
  }
  else {
    func_0x00010bf20c00(param_2);
    _CGRectGetWidth();
    _CGAffineTransformMakeTranslation(&uStack_50,-param_1,0);
    func_0x00010c29ff00(param_2);
    _objc_retainAutoreleasedReturnValue();
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_68 = uStack_38;
    uStack_70 = uStack_40;
  }
  func_0x00010c166440();
  _objc_release(param_2);
  return;
}



/* Entry: 10b29d24c; end: 10b29d30b; -[SCButton _animateHiding:] */

void FUN_10b29d24c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uVar1 = param_1;
  func_0x00010c074c20();
  if ((int)uVar1 != 0) {
    func_0x00010c1a7f60(param_1,param_2,0);
  }
  func_0x00010bf17a60(PTR__OBJC_CLASS___CATransaction_1126b5718);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b29d30c;
  puStack_48 = &UNK_110845ce0;
  uStack_38 = (undefined1)param_3;
  uStack_40 = param_1;
  func_0x00010c17fb40(PTR__OBJC_CLASS___CATransaction_1126b5718,param_2,&puStack_60);
  func_0x00010c220220(PTR__OBJC_CLASS___CATransaction_1126b5718,param_2,
                      &PTR__OBJC_CLASS___NSConstantFloatNumber_111186570,
                      *(undefined8 *)PTR__kCATransactionAnimationDuration_110346d90);
  func_0x00010beaa2c0(param_1,param_2,param_3);
  func_0x00010bf42760(PTR__OBJC_CLASS___CATransaction_1126b5718);
  return;
}



/* Entry: 10b29d30c; end: 10b29d3a3;  */

void FUN_10b29d30c(long param_1,undefined8 param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined1 *)(param_1 + 0x28));
  func_0x00010c167fc0(*(undefined8 *)(param_1 + 0x20));
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c22e8a0();
  if (iVar2 != 0) {
    bVar1 = *(byte *)(param_1 + 0x28);
    uVar3 = (uint)*(undefined8 *)(param_1 + 0x20);
    func_0x00010bfaefa0();
    if (bVar1 != uVar3) {
      func_0x00010c167fc0(*(undefined8 *)(param_1 + 0x20));
    }
  }
  func_0x00010c200280(*(undefined8 *)(param_1 + 0x20));
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bf03940();
  if (iVar2 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = uVar5;
    func_0x00010bfaefa0(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdcacd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar5,PTR_s__animateHiding__1125504d0,uVar4);
    return;
  }
  return;
}



/* Entry: 10b29d3a4; end: 10b29d3e3; -[SCButton setActivityIndicatorView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29d3a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e0f0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b29d3e4; end: 10b29d3f3; -[SCButton activityIndicatorViewAlignment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b29d3e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e0dc);
}



/* Entry: 10b29d3f4; end: 10b29d403; -[SCButton setActivityIndicatorViewAlignment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29d3f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11278e0dc) = param_3;
  return;
}



/* Entry: 10b29d404; end: 10b29d413; -[SCButton animating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b29d404(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278e0e0);
}



/* Entry: 10b29d414; end: 10b29d423; -[SCButton setAnimating:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29d414(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11278e0e0) = param_3;
  return;
}



/* Entry: 10b29d424; end: 10b29d433; -[SCButton backgroundColorNormal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b29d424(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e0f4);
}



/* Entry: 10b29d434; end: 10b29d473; -[SCButton setBackgroundColorNormal:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29d434(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e0f4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b29d474; end: 10b29d483; -[SCButton backgroundColorSelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b29d474(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e0f8);
}



/* Entry: 10b29d484; end: 10b29d4c3; -[SCButton setBackgroundColorSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29d484(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e0f8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b29d4c4; end: 10b29d4d3; -[SCButton finalHiddenState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b29d4c4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278e0e4);
}



/* Entry: 10b29d4d4; end: 10b29d4e3; -[SCButton setFinalHiddenState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29d4d4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11278e0e4) = param_3;
  return;
}



/* Entry: 10b29d4e4; end: 10b29d4f3; -[SCButton shouldChangeToFinalHiddenState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b29d4e4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278e0e8);
}



/* Entry: 10b29d4f4; end: 10b29d503; -[SCButton setShouldChangeToFinalHiddenState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29d4f4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11278e0e8) = param_3;
  return;
}



/* Entry: 10b29d504; end: 10b29d513; -[SCButton visibleMask] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b29d504(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e0fc);
}



/* Entry: 10b29d514; end: 10b29d553; -[SCButton setVisibleMask:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29d514(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e0fc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b29d554; end: 10b29d56b; -[SCButton previousBounds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b29d554(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e0ec);
}



/* Entry: 10b29d56c; end: 10b29d583; -[SCButton setPreviousBounds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29d56c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11278e0ec);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 10b29d584; end: 10b29d5e3; -[SCButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29d584(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11278e0fc,0);
  _objc_storeStrong(param_1 + _DAT_11278e0f8,0);
  _objc_storeStrong(param_1 + _DAT_11278e0f4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e0f0,0);
  return;
}



/* Entry: 10b29d5e4; end: 10b29d73f; -[SCExpandedButton hitTest:withEvent:] */

void FUN_10b29d5e4(undefined8 param_1,double param_2,double param_3,double param_4,
                  undefined1 *param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  ushort uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 *puStack_50;
  undefined *puStack_48;
  
  uVar7 = (undefined2)((ulong)param_1 >> 0x30);
  uVar8 = (undefined2)((ulong)param_1 >> 0x20);
  uVar6 = (undefined2)((ulong)param_1 >> 0x10);
  ppuVar3 = &puStack_50;
  uVar5 = (short)param_1;
  dVar9 = param_2;
  _objc_retain(param_7);
  func_0x00010bfe3a60(param_5);
  uVar4 = NEON_uminv(CONCAT26(-(ushort)(param_4 ==
                                       *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18)),
                              CONCAT24(-(ushort)(param_3 ==
                                                *(double *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10))
                                       ,CONCAT22(-(ushort)(dVar9 == *(double *)
                                                                     (
                                                  PTR__UIEdgeInsetsZero_110345bb0 + 8)),
                                                 -(ushort)((double)CONCAT26(uVar7,CONCAT24(uVar8,
                                                  CONCAT22(uVar6,uVar5))) ==
                                                  *(double *)PTR__UIEdgeInsetsZero_110345bb0)))),2);
  uVar5 = 0;
  uVar6 = 0;
  uVar8 = 0;
  if ((((uVar4 & 1) == 0) && (puVar2 = param_5, func_0x00010c071800(), (int)puVar2 != 0)) &&
     (puVar2 = param_5, func_0x00010c074c20(), ((ulong)puVar2 & 1) == 0)) {
    func_0x00010bf01b40(param_5);
    dVar9 = 1e-05;
    if (1e-05 <= (double)CONCAT26(uVar8,CONCAT24(uVar6,CONCAT22(uVar5,uVar4)))) {
      func_0x00010bfb68e0(param_5);
      dVar10 = param_3;
      func_0x00010bfb68e0(param_5);
      puVar2 = param_5;
      dVar11 = param_4;
      func_0x00010bfe3a60();
      iVar1 = (int)puVar2;
      _CGRectContainsPoint
                (SUB82(dVar9 + 0.0,0),
                 (double)CONCAT26(uVar8,CONCAT24(uVar6,CONCAT22(uVar5,uVar4))) + 0.0,
                 param_3 - (dVar9 + dVar11),
                 param_4 - ((double)CONCAT26(uVar8,CONCAT24(uVar6,CONCAT22(uVar5,uVar4))) + dVar10),
                 param_1,param_2);
      if (iVar1 == 0) {
        param_5 = (undefined1 *)0x0;
      }
      else {
        _objc_retain(param_5);
      }
      goto LAB_10b29d6b0;
    }
  }
  puStack_48 = PTR_PTR_112706198;
  puStack_50 = param_5;
  _objc_msgSendSuper2((short)param_1,param_2,&puStack_50,PTR_s_hitTest_withEvent__1125d6850,param_7)
  ;
  _objc_retainAutoreleasedReturnValue();
  param_5 = (undefined1 *)ppuVar3;
LAB_10b29d6b0:
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 10b29d740; end: 10b29d747; -[SCExpandedButton borderWithColor:] */

void FUN_10b29d740(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1fcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4000000000000000,param_1,PTR_s_borderWithColor_width__1125a58d8);
  return;
}



/* Entry: 10b29d748; end: 10b29d7df; -[SCExpandedButton borderWithColor:width:] */

void FUN_10b29d748(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_4);
  uVar1 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1733a0(param_1);
  _objc_release(uVar1);
  _objc_retainAutorelease(param_4);
  func_0x00010bdc0fe0();
  _objc_release(param_4);
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c173280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b29d7e0; end: 10b29d7f7; -[SCExpandedButton hitTestEdgeInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b29d7e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e100);
}



/* Entry: 10b29d7f8; end: 10b29d80f; -[SCExpandedButton setHitTestEdgeInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29d7f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11278e100);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 10b29d810; end: 10b29d87b; +[SCExtendedHitButton SCExtendedHitButtonWithHitEdgeInsets:] */

void FUN_10b29d810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d5b70;
  func_0x00010bf25cc0(PTR_PTR_1126d5b70,param_6,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a8b80(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b29d87c; end: 10b29d8db; -[SCExtendedHitButton initWithFrame:] */

undefined1 * FUN_10b29d87c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127061a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1a8b80(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                        *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18),puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b29d8dc; end: 10b29d95b; -[SCExtendedHitButton initWithFrame:hitEdgeInsets:] */

undefined1 * FUN_10b29d8dc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 in_d4;
  undefined8 in_d5;
  undefined8 in_d6;
  undefined8 in_d7;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1127061a0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1a8b80(in_d4,in_d5,in_d6,in_d7,puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b29d95c; end: 10b29d9df; -[SCExtendedHitButton pointInside:withEvent:] */

void FUN_10b29d95c(double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = param_1;
  dVar3 = param_2;
  func_0x00010bf20c00();
  dVar2 = dVar1;
  dVar4 = dVar3;
  dVar5 = param_3;
  dVar6 = param_4;
  func_0x00010bfe39c0(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)
            (dVar1 + dVar4,dVar3 + dVar2,param_3 - (dVar4 + dVar6),param_4 - (dVar2 + dVar5),param_1
             ,param_2);
  return;
}



/* Entry: 10b29d9e0; end: 10b29d9f7; -[SCExtendedHitButton hitEdgeInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b29d9e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e104);
}



/* Entry: 10b29d9f8; end: 10b29da0f; -[SCExtendedHitButton setHitEdgeInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29d9f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11278e104);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 10b29da10; end: 10b29da1f; -[SCGrowingButton maximumScale] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b29da10(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e108);
}



/* Entry: 10b29da20; end: 10b29da2f; -[SCGrowingButton minimumScale] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b29da20(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e10c);
}



/* Entry: 10b29da30; end: 10b29dab3; -[SCScalingButton pointInside:withEvent:] */

void FUN_10b29da30(double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = param_1;
  dVar3 = param_2;
  func_0x00010bf20c00();
  dVar2 = dVar1;
  dVar4 = dVar3;
  dVar5 = param_3;
  dVar6 = param_4;
  func_0x00010c277500(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)
            (dVar1 + dVar4,dVar3 + dVar2,param_3 - (dVar4 + dVar6),param_4 - (dVar2 + dVar5),param_1
             ,param_2);
  return;
}



/* Entry: 10b29dab4; end: 10b29db43; -[SCScalingButton sizeThatFits:] */

undefined1  [16] FUN_10b29dab4(double param_1,double param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  uVar1 = param_3;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar3 = param_1;
  func_0x00010bfe7f60(param_3);
  uVar2 = param_3;
  func_0x00010bfe6ac0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  dVar4 = param_2;
  func_0x00010bfe7f60(param_3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  auVar5._8_8_ = param_2 + dVar4;
  auVar5._0_8_ = param_1 + dVar3;
  return auVar5;
}



/* Entry: 10b29db44; end: 10b29dd2f; -[SCScalingButton press:] */

void FUN_10b29db44(undefined8 param_1,undefined8 param_2,double param_3,double param_4,code *param_5
                  ,undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  
  _objc_retain(param_7);
  uVar1 = param_7;
  func_0x00010c29bf00(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00(param_7);
  _objc_release(uVar1);
  uVar1 = param_7;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release();
  _CGRectContainsPoint(-param_3,-param_4,param_3 * 3.0,param_4 * 3.0,param_1,param_2);
  uVar2 = param_7;
  func_0x00010c252440();
  if (uVar2 != 1) {
    uVar2 = param_7;
    func_0x00010c252440();
    if (uVar2 == 2) {
      pcVar3 = param_5;
      func_0x00010c07ad80();
      if ((int)uVar1 == (int)pcVar3) goto LAB_10b29dd10;
    }
    else {
      uVar2 = param_7;
      func_0x00010c252440();
      if ((uVar2 == 3) && (pcVar3 = param_5, func_0x00010c07ad80(), (int)pcVar3 != 0)) {
        pcVar3 = param_5;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = param_5;
        func_0x00010beedca0(param_5);
        pcVar5 = pcVar3;
        _objc_opt_respondsToSelector(pcVar3,pcVar4);
        _objc_release(pcVar3);
        if ((((ulong)pcVar5 & 1) != 0) &&
           (pcVar3 = param_5, func_0x00010c071800(), (int)pcVar3 != 0)) {
          pcVar3 = param_5;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010beedca0(param_5);
          pcVar4 = pcVar3;
          func_0x00010c0cc960();
          _objc_release(pcVar3);
          pcVar3 = param_5;
          func_0x00010c269d40(param_5);
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = param_5;
          func_0x00010beedca0(param_5);
          (*pcVar4)(pcVar3,pcVar5,param_5);
          _objc_release(pcVar3);
        }
      }
      if (((uVar1 & 1) == 0) && (pcVar3 = param_5, func_0x00010c07ad80(), (int)pcVar3 == 0))
      goto LAB_10b29dd10;
    }
  }
  func_0x00010c1e16e0(param_5);
LAB_10b29dd10:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 10b29dd30; end: 10b29dd47; -[SCScalingButton setPressed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29dd30(long param_1,undefined8 param_2,int param_3)

{
  *(char *)(param_1 + _DAT_11278e110) = (char)param_3;
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be7fa70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__pressDownAnimate_11257d838);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7fa90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__pressUpAnimate_11257d840);
  return;
}



/* Entry: 10b29dd48; end: 10b29ddc7; -[SCScalingButton animateButtonSizeScale:alpha:completion:] */

void FUN_10b29dd48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b29ddc8;
  puStack_30 = &UNK_110858dc0;
  uStack_28 = param_3;
  uStack_20 = param_1;
  uStack_18 = param_2;
  func_0x00010bf03460(0x3fc3333340000000,0,0x3ff0000000000000,0x3fb99999a0000000,
                      PTR__OBJC_CLASS___UIView_1126aec20,param_4,6,&puStack_48,param_5);
  return;
}



/* Entry: 10b29ddc8; end: 10b29e017;  */

void FUN_10b29ddc8(long param_1)

{
  double dVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  double dStack_110;
  double dStack_108;
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
  double dStack_b0;
  double dStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  double dStack_80;
  double dStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  func_0x00010c0e8ba0();
  lVar6 = *(long *)(param_1 + 0x20);
  if ((uVar2 & 1) == 0) {
    _objc_retain(lVar6);
  }
  else {
    func_0x00010bfe90c0();
    _objc_retainAutoreleasedReturnValue();
  }
  if (lVar6 == 0) {
    fVar8 = 0.0;
    fVar7 = 0.0;
  }
  else {
    func_0x00010c27a460(&dStack_80,lVar6);
    dVar1 = dStack_78;
    func_0x00010c27a460(&dStack_b0,lVar6);
    fVar7 = (float)dVar1;
    fVar8 = (float)dStack_b0;
  }
  _atan2f(fVar7,fVar8);
  _CGAffineTransformMakeRotation(&dStack_b0,(double)fVar7);
  _CGAffineTransformMakeScale
            (&dStack_e0,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x28));
  _CGAffineTransformConcat(&dStack_80,&dStack_b0,&dStack_e0);
  dStack_a8 = dStack_78;
  dStack_b0 = dStack_80;
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  func_0x00010c219960(lVar6);
  lVar3 = *(long *)(param_1 + 0x20);
  if (lVar6 == lVar3) {
    func_0x00010c1677c0(*(undefined8 *)(param_1 + 0x30),lVar6);
    lVar3 = *(long *)(param_1 + 0x20);
  }
  func_0x00010bf9e7a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = *(long *)(param_1 + 0x20);
    func_0x00010bf9e7a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      dStack_a8 = 0.0;
      dStack_b0 = 0.0;
      fVar7 = 0.0;
    }
    else {
      func_0x00010c27a460(&dStack_b0,lVar3);
      fVar7 = (float)dStack_a8;
    }
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010bf9e7a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      uStack_c8 = 0;
      uStack_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_d8 = 0;
      dStack_e0 = 0.0;
      fVar8 = 0.0;
    }
    else {
      func_0x00010c27a460(&dStack_e0,lVar4);
      fVar8 = (float)dStack_e0;
    }
    _atan2f(fVar7,fVar8);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _CGAffineTransformMakeRotation(&dStack_b0,(double)fVar7);
    _CGAffineTransformMakeScale
              (&dStack_e0,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x28));
    _CGAffineTransformConcat(&dStack_110,&dStack_b0,&dStack_e0);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf9e7a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    dStack_a8 = dStack_108;
    dStack_b0 = dStack_110;
    uStack_98 = uStack_f8;
    uStack_a0 = uStack_100;
    uStack_88 = uStack_e8;
    uStack_90 = uStack_f0;
    func_0x00010c219960();
    _objc_release(uVar5);
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf9e7a0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1677c0(uVar9);
    _objc_release(uVar5);
  }
  _objc_release(lVar6);
  return;
}



/* Entry: 10b29e018; end: 10b29e0ff; -[SCScalingButton _pressDownAnimate] */

void FUN_10b29e018(double param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x00010bf2e3a0();
  func_0x00010c110040(param_2);
  dVar1 = param_1;
  func_0x00010c110060(param_2);
  param_1 = param_1 * dVar1;
  func_0x00010bf01b40(param_2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x10b29e0ac;
  puStack_40 = &UNK_110841f20;
  uStack_38 = param_2;
  func_0x00010bf02d00(param_1,dVar1,param_2,param_3,&puStack_58);
  return;
}



/* Entry: 10b29e100; end: 10b29e187; -[SCScalingButton _pressUpAnimate] */

void FUN_10b29e100(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x00010bf2e3a0();
  func_0x00010c110100(param_2);
  uVar1 = param_1;
  func_0x00010bf01b40(param_2);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10b29e188;
  puStack_40 = &UNK_110841f20;
  uStack_38 = param_2;
  func_0x00010bf02d00(param_1,uVar1,param_2,param_3,&puStack_58);
  return;
}



/* Entry: 10b29e188; end: 10b29e1c3;  */

void FUN_10b29e188(undefined8 param_1,long param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    func_0x00010bf01b40(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bf02d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (0x3ff0000000000000,param_1,uVar1,PTR_s_animateButtonSizeScale_alpha_com_11259e4e8,0);
    return;
  }
  return;
}



/* Entry: 10b29e1c4; end: 10b29e233; -[SCScalingButton animate] */

void FUN_10b29e1c4(undefined8 param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010be7fa60();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10b29e234;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  func_0x000107c312d4(0x3d99999a,"APPSTORE",&puStack_48);
  return;
}



/* Entry: 10b29e234; end: 10b29e23b;  */

void FUN_10b29e234(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7fa90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__pressUpAnimate_11257d840);
  return;
}



/* Entry: 10b29e23c; end: 10b29e2d7; -[SCScalingButton gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

bool FUN_10b29e23c(int param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c123080();
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = param_4;
    func_0x00010c29bf00(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c29bf00(param_3);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 == lVar3;
    _objc_release();
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10b29e2d8; end: 10b29e567; -[SCScalingButton cancelExistingTransformAnimationsIfNeeded] */

void FUN_10b29e2d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
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
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bfe90c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9e7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(param_1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(puVar5);
  puVar6 = puVar5;
  func_0x00010bf52a60();
  if (puVar6 != (undefined *)0x0) {
    lVar12 = *plStack_120;
    do {
      puVar13 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar12) {
          _objc_enumerationMutation(puVar5);
        }
        uVar11 = *(ulong *)(lStack_128 + (long)puVar13 * 8);
        uVar7 = uVar11;
        func_0x00010bf03c40();
        _objc_retainAutoreleasedReturnValue();
        if (uVar7 != 0) {
          uVar8 = uVar11;
          func_0x00010c10f4e0();
          _objc_retainAutoreleasedReturnValue();
          puVar9 = PTR__OBJC_CLASS___CALayer_1126b1750;
          _objc_opt_class(PTR__OBJC_CLASS___CALayer_1126b1750);
          uVar10 = uVar8;
          _objc_opt_isKindOfClass(uVar8,puVar9);
          _objc_release(uVar8);
          _objc_release(uVar7);
          if ((uVar10 & 1) != 0) {
            uVar7 = uVar11;
            func_0x00010c10f4e0();
            _objc_retainAutoreleasedReturnValue();
            if (uVar7 == 0) {
              uStack_148 = 0;
              uStack_150 = 0;
              uStack_138 = 0;
              uStack_140 = 0;
              uStack_168 = 0;
              uStack_170 = 0;
              uStack_158 = 0;
              uStack_160 = 0;
              uStack_188 = 0;
              uStack_190 = 0;
              uStack_178 = 0;
              uStack_180 = 0;
              uStack_1a8 = 0;
              uStack_1b0 = 0;
              uStack_198 = 0;
              uStack_1a0 = 0;
            }
            else {
              func_0x00010c27a460(&uStack_1b0,uVar7);
            }
            func_0x00010c219960(uVar11);
            _objc_release(uVar7);
            func_0x00010c12b200(uVar11);
          }
        }
        puVar13 = puVar13 + 1;
      } while (puVar6 != puVar13);
      puVar6 = puVar5;
      func_0x00010bf52a60();
    } while (puVar6 != (undefined *)0x0);
  }
  _objc_release(puVar5);
  _objc_release(puVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = puVar5;
  func_0x00010c0b4e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(puVar6);
  func_0x00010c0b4e20(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 10b29e568; end: 10b29e5c3; -[SCScalingButton interruptGestures] */

void FUN_10b29e568(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c0b4e20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
  _objc_release(uVar1);
  func_0x00010c0b4e20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b29e5c4; end: 10b29e5cb; -[SCScalingButton isAccessibilityElement] */

undefined8 FUN_10b29e5c4(void)

{
  return 1;
}



/* Entry: 10b29e5cc; end: 10b29e60f; -[SCScalingButton accessibilityTraits] */

ulong FUN_10b29e5cc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_1127061b0;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_accessibilityTraits_112598d90);
  return *(ulong *)PTR__UIAccessibilityTraitButton_110345920 | (ulong)puVar1;
}



/* Entry: 10b29e610; end: 10b29e61f; -[SCScalingButton pressDownScale] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b29e610(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e11c);
}



/* Entry: 10b29e620; end: 10b29e62f; -[SCScalingButton pressDownAdditionalScale] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b29e620(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e120);
}



/* Entry: 10b29e630; end: 10b29e63f; -[SCScalingButton pressUpScale] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b29e630(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e124);
}



/* Entry: 10b29e640; end: 10b29e64f; -[SCScalingButton recognizesGesturesSimultaneously] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b29e640(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278e128);
}



/* Entry: 10b29e650; end: 10b29e65f; -[SCScalingButton onlyScaleImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b29e650(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278e134);
}



/* Entry: 10b29e660; end: 10b29e66f; -[SCScalingButton isPressed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b29e660(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278e110);
}



/* Entry: 10b29e670; end: 10b29e67f; -[SCScalingButton extraAnimationView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b29e670(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e150);
}



/* Entry: 10b29e680; end: 10b29e6bf; -[SCScalingButton setExtraAnimationView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29e680(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e150;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b29e6c0; end: 10b29e6cf; -[SCScalingButton isEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b29e6c0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278e148);
}



/* Entry: 10b29e6d0; end: 10b29e6df; -[SCScalingButton imageName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b29e6d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e154);
}



/* Entry: 10b29e6e0; end: 10b29e6f7; -[SCScalingButton touchTargetInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b29e6e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e138);
}



/* Entry: 10b29e6f8; end: 10b29e70f; -[SCScalingButton setTouchTargetInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29e6f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11278e138);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 10b29e710; end: 10b29e71f; -[SCScalingButton action] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b29e710(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e13c);
}



/* Entry: 10b29e720; end: 10b29e73f; -[SCScalingButton target] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29e720(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11278e158);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b29e740; end: 10b29e87f; -[SCScalingButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b29e740(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11278e158);
  _objc_storeStrong(param_1 + _DAT_11278e14c,0);
  _objc_storeStrong(param_1 + _DAT_11278e154,0);
  _objc_storeStrong(param_1 + _DAT_11278e150,0);
  _objc_storeStrong(param_1 + _DAT_11278e140,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278e144,0);
  return;
}



/* Entry: 10b29e880; end: 10b29e94f;  */

/* WARNING: Possible PIC construction at 0x00010b29e8c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b29e8cc) */

void FUN_10b29e880(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c14d380();
  if ((int)uVar1 != 0) {
    func_0x00010c26f540(param_1);
    func_0x00010c207c40(0x3f800000,param_1);
    func_0x00010c214e40(0,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c16fd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(0,param_1,PTR_s_setBeginTime__112639970);
    return;
  }
  return;
}



/* Entry: 10b29e950; end: 10b29e96b;  */

bool FUN_10b29e950(float param_1)

{
  func_0x00010c249ca0();
  return param_1 == 0.0;
}



/* Entry: 10b29e96c; end: 10b29ebcf;  */

void FUN_10b29e96c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 in_x5;
  ulong unaff_x19;
  long lVar10;
  ulong unaff_x22;
  ulong uVar11;
  long unaff_x27;
  undefined **unaff_x28;
  undefined8 uStack_310;
  long lStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined1 auStack_2c8 [128];
  long lStack_248;
  undefined **ppuStack_240;
  long lStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  ulong *puStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010c10f4e0();
  _objc_retainAutoreleasedReturnValue();
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uVar2 = param_1;
  uStack_1f8 = uVar1;
  func_0x00010bf03d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf52a60();
  if (uVar1 != 0) {
    unaff_x27 = *plStack_1a0;
    unaff_x28 = &PTR_PTR_1126e0000;
    do {
      unaff_x19 = 0;
      do {
        if (*plStack_1a0 != unaff_x27) {
          _objc_enumerationMutation(uVar2);
        }
        uVar11 = param_1;
        func_0x00010bf03c40();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___CAPropertyAnimation_1126e00d0;
        _objc_opt_class(PTR__OBJC_CLASS___CAPropertyAnimation_1126e00d0);
        uVar4 = uVar11;
        _objc_opt_isKindOfClass(uVar11,puVar3);
        if ((uVar4 & 1) != 0) {
          uVar4 = uVar11;
          func_0x00010c086900();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uStack_1f8;
          func_0x00010c296f80(uStack_1f8);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar11;
          func_0x00010c086900(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c220240(param_1);
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(uVar4);
        }
        _objc_release(uVar11);
        unaff_x19 = unaff_x19 + 1;
      } while (uVar1 != unaff_x19);
      uVar1 = uVar2;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (uVar1 != 0);
  }
  _objc_release(uVar2);
  func_0x00010c12aaa0(param_1);
  func_0x00010c14d980(param_1);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  puStack_1e0 = (ulong *)0x0;
  func_0x00010c25ec40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf52a60();
  if (uVar1 != 0) {
    unaff_x19 = *puStack_1e0;
    do {
      unaff_x22 = 0;
      do {
        if (*puStack_1e0 != unaff_x19) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c14cd60(*(undefined8 *)(lStack_1e8 + unaff_x22 * 8));
        unaff_x22 = unaff_x22 + 1;
      } while (uVar1 != unaff_x22);
      uVar1 = param_1;
      func_0x00010bf52a60();
      uVar2 = 0;
    } while (uVar1 != 0);
  }
  _objc_release(param_1);
  uVar1 = uStack_1f8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar7 = &uStack_310;
  pcStack_208 = FUN_10b29ebd0;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_240 = unaff_x28;
  lStack_238 = unaff_x27;
  uStack_230 = unaff_x22;
  uStack_228 = uVar2;
  uStack_220 = param_1;
  uStack_218 = unaff_x19;
  puStack_210 = &stack0xfffffffffffffff0;
  func_0x00010c12aaa0();
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  lStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  plStack_300 = (long *)0x0;
  func_0x00010c25ec40();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = auStack_2c8;
  uVar9 = 0x10;
  uVar2 = uVar1;
  func_0x00010bf52a60();
  if (uVar2 != 0) {
    lVar10 = *plStack_300;
    do {
      uVar11 = 0;
      do {
        if (*plStack_300 != lVar10) {
          _objc_enumerationMutation(uVar1);
        }
        func_0x00010c14d940(*(undefined8 *)(lStack_308 + uVar11 * 8));
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
      puVar8 = auStack_2c8;
      uVar9 = 0x10;
      uVar2 = uVar1;
      puVar7 = &uStack_310;
      func_0x00010bf52a60();
    } while (uVar2 != 0);
  }
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = PTR_PTR_1126e00d8;
  _objc_retain(in_x5);
  _objc_retain(uVar9);
  _objc_retain(puVar8);
  _objc_retain(puVar7);
  _objc_opt_new(puVar3);
  func_0x00010c168300();
  _objc_release(uVar9);
  func_0x00010c1680a0(puVar3);
  _objc_release(in_x5);
  func_0x00010c18b5e0(puVar7);
  func_0x00010bef6c20(uVar1);
  _objc_release(puVar8);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10b29ebd0; end: 10b29eccb;  */

void FUN_10b29ebd0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 in_x5;
  long lVar6;
  long lVar7;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar3 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c12aaa0();
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  func_0x00010c25ec40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = auStack_c8;
  uVar5 = 0x10;
  lVar1 = param_1;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar6 = *plStack_100;
    do {
      lVar7 = 0;
      do {
        if (*plStack_100 != lVar6) {
          _objc_enumerationMutation(param_1);
        }
        func_0x00010c14d940(*(undefined8 *)(lStack_108 + lVar7 * 8));
        lVar7 = lVar7 + 1;
      } while (lVar1 != lVar7);
      puVar4 = auStack_c8;
      uVar5 = 0x10;
      lVar1 = param_1;
      puVar3 = &uStack_110;
      func_0x00010bf52a60(param_1,param_2,&uStack_110,puVar4,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126e00d8;
  _objc_retain(in_x5);
  _objc_retain(uVar5);
  _objc_retain(puVar4);
  _objc_retain(puVar3);
  _objc_opt_new(puVar2);
  func_0x00010c168300();
  _objc_release(uVar5);
  func_0x00010c1680a0(puVar2,param_2,in_x5);
  _objc_release(in_x5);
  func_0x00010c18b5e0(puVar3,param_2,puVar2);
  func_0x00010bef6c20(param_1,param_2,puVar3,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10b29eccc; end: 10b29ed8f;  */

void FUN_10b29eccc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e00d8;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c168300();
  _objc_release(param_5);
  func_0x00010c1680a0(puVar1,param_2,param_6);
  _objc_release(param_6);
  func_0x00010c18b5e0(param_3,param_2,puVar1);
  func_0x00010bef6c20(param_1,param_2,param_3,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b29ed90; end: 10b29eda7; -[SCCAAnimationDelegate animationDidStart:] */

void FUN_10b29ed90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b29eda0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 10b29eda8; end: 10b29edc3; -[SCCAAnimationDelegate animationDidStop:finished:] */

void FUN_10b29eda8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b29edbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4);
    return;
  }
  return;
}



/* Entry: 10b29edc4; end: 10b29edcb; -[SCCAAnimationDelegate animationStartBlock] */

undefined8 FUN_10b29edc4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b29edcc; end: 10b29edd3; -[SCCAAnimationDelegate setAnimationStartBlock:] */

void FUN_10b29edcc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b29edd4; end: 10b29eddb; -[SCCAAnimationDelegate animationCompleteBlock] */

undefined8 FUN_10b29edd4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b29eddc; end: 10b29ede3; -[SCCAAnimationDelegate setAnimationCompleteBlock:] */

void FUN_10b29eddc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b29ede4; end: 10b29ee13; -[SCCAAnimationDelegate .cxx_destruct] */

void FUN_10b29ede4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b29ee14; end: 10b29ee1f; +[SCCardBackgroundView layerClass] */

void FUN_10b29ee14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
  return;
}



/* Entry: 10b29ee20; end: 10b29eeb7; -[SCCardBackgroundView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b29ee20(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1127061b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278e168) = 0x4028000000000000;
    *(undefined8 *)((long)puVar1 + (long)_DAT_11278e16c) = 3;
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e600(puVar1);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b29eeb8; end: 10b29eebb; -[SCCardBackgroundView shapeLayer] */

void FUN_10b29eeb8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08c0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layer_112600a48);
  return;
}


