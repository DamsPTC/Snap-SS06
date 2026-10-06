/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106517784; end: 10651778b; -[SCChatTableViewV3Presenter modalShown] */

undefined1 FUN_106517784(long param_1)

{
  return *(undefined1 *)(param_1 + 0xf8);
}



/* Entry: 10651778c; end: 106517793; -[SCChatTableViewV3Presenter setModalShown:] */

void FUN_10651778c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0xf8) = param_3;
  return;
}



/* Entry: 106517794; end: 106517883; -[SCChatTableViewV3Presenter .cxx_destruct] */

void FUN_106517794(long param_1)

{
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106517884; end: 1065178f7;  */

void FUN_106517884(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010010fab4(param_2,PTR_DAT_1126a53f8);
  uVar1 = param_2;
  if ((int)uVar2 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar2 = uVar1;
  func_0x00010bfe5ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1065178f8; end: 10651790b; -[SCFastDoubleTableViewTapGestureRecognizer setTableView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065178f8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112749c64,param_3);
  return;
}



/* Entry: 10651790c; end: 106517acb; -[SCFastDoubleTableViewTapGestureRecognizer touchesBegan:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651790c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uStack_60;
  undefined *puStack_58;
  
  puVar1 = PTR_s_touchesBegan_withEvent__11267b780;
  puStack_58 = PTR_PTR_1126f19e0;
  uStack_60 = param_3;
  _objc_retain(param_5);
  _objc_msgSendSuper2(&uStack_60,puVar1,param_5,param_6);
  uVar5 = param_5;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  uVar2 = uVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  lVar6 = (long)_DAT_112749c64;
  lVar7 = param_3 + lVar6;
  _objc_loadWeakRetained(lVar7);
  func_0x00010c09ef00(uVar2);
  _objc_release(lVar7);
  uVar5 = param_3 + lVar6;
  _objc_loadWeakRetained();
  uVar3 = uVar5;
  func_0x00010bfed080(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar5 = uVar2;
  func_0x00010c268ec0();
  uVar4 = param_3;
  func_0x00010c0df4e0();
  lVar7 = (long)_DAT_112749c68;
  if (uVar5 < uVar4) {
    _objc_retain(uVar3);
    uVar5 = *(ulong *)(param_3 + lVar7);
    *(ulong *)(param_3 + lVar7) = uVar3;
  }
  else {
    uVar5 = *(ulong *)(param_3 + lVar7);
    _objc_retain(uVar5);
    _objc_retain(uVar3);
    if (uVar5 != uVar3) {
      if (uVar3 == 0) {
        _objc_release(uVar5);
      }
      else {
        uVar4 = uVar5;
        func_0x00010c071ae0();
        _objc_release(uVar3);
        _objc_release(uVar5);
        if ((uVar4 & 1) != 0) goto LAB_106517aa0;
      }
      func_0x00010c209fc0(param_3);
      goto LAB_106517aa0;
    }
    _objc_release(uVar3);
  }
  _objc_release(uVar5);
LAB_106517aa0:
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



/* Entry: 106517acc; end: 106517c5f; -[SCFastDoubleTableViewTapGestureRecognizer touchesMoved:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106517acc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_5);
  puStack_58 = PTR_PTR_1126f19e0;
  lStack_60 = param_3;
  _objc_msgSendSuper2(&lStack_60,PTR_s_touchesMoved_withEvent__11252ca58,param_5,param_6);
  lVar1 = param_3;
  func_0x00010c252440();
  if (lVar1 != 0) goto LAB_106517c3c;
  uVar2 = param_5;
  func_0x00010bf00560(param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar6 = (long)_DAT_112749c64;
  lVar1 = param_3 + lVar6;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c09ef00(uVar3);
  _objc_release(lVar1);
  uVar7 = param_3 + lVar6;
  _objc_loadWeakRetained();
  uVar4 = uVar7;
  func_0x00010bfed080(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  uVar7 = *(ulong *)(param_3 + _DAT_112749c68);
  _objc_retain(uVar7);
  _objc_retain(uVar4);
  if (uVar7 == uVar4) {
    _objc_release(uVar4);
    _objc_release(uVar7);
  }
  else {
    if (uVar4 == 0) {
      _objc_release(uVar7);
    }
    else {
      uVar5 = uVar7;
      func_0x00010c071ae0();
      _objc_release(uVar4);
      _objc_release(uVar7);
      if ((uVar5 & 1) != 0) goto LAB_106517c2c;
    }
    func_0x00010c209fc0(param_3);
  }
LAB_106517c2c:
  _objc_release(uVar4);
  _objc_release(uVar3);
LAB_106517c3c:
  _objc_release(param_5);
  return;
}



/* Entry: 106517c60; end: 106517c9b; -[SCFastDoubleTableViewTapGestureRecognizer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106517c60(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112749c68,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112749c64);
  return;
}



/* Entry: 106517c9c; end: 106517df3; -[SCLoadingChatsCell initWithStyle:reuseIdentifier:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106517c9c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f19e8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithStyle_reuseIdentifier__1125f1528);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1bef40(puVar1);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440();
    _objc_release(puVar3);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    func_0x00010c0647e0(puVar1);
    func_0x00010c1fbac0(puVar1);
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112749c70);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112749c70) = 0;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112749c74);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112749c74) = 0;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
    _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
    func_0x00010c050900();
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9040();
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106517df4; end: 106517ee3; -[SCLoadingChatsCell initializeRetryIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106517df4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110e534d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c01bf60();
  lVar5 = (long)_DAT_112749c74;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar2;
  _objc_release(uVar4);
  lVar3 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar3);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106517ee4;
  puStack_40 = &UNK_1108471b0;
  lStack_38 = param_1;
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar5),param_2,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5),param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106517ee4; end: 1065180e3;  */

void FUN_106517ee4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c087500(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0xc02e000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bfe0640();
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



/* Entry: 1065180e4; end: 10651813f; -[SCLoadingChatsCell initializeActivityIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065180e4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIActivityIndicatorView_1126b3270;
  _objc_alloc();
  func_0x00010bff0f20();
  lVar3 = (long)_DAT_112749c78;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010befbb60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 106518140; end: 1065182a3; -[SCLoadingChatsCell initializeLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106518140(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar5 = (long)_DAT_112749c70;
  uVar4 = *(undefined8 *)(param_1 + lVar5);
  *(undefined **)(param_1 + lVar5) = puVar1;
  _objc_release(uVar4);
  lVar2 = param_1;
  func_0x00010c087640(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar5));
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010c087800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar5));
  _objc_release(lVar2);
  ppuVar3 = &PTR____CFConstantStringClassReference_110e534f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e534f8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5));
  _objc_release(ppuVar3);
  func_0x00010c23d620(*(undefined8 *)(param_1 + lVar5));
  lVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar5));
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5));
  return;
}



/* Entry: 1065182a4; end: 10651840b;  */

void FUN_1065182a4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0x4022000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10651840c; end: 10651849f; -[SCLoadingChatsCell layoutSubviews] */

void FUN_10651840c(double param_1,undefined8 param_2)

{
  double dVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f19e8;
  uStack_40 = param_2;
  _objc_msgSendSuper2(&uStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_2);
  _CGRectGetWidth();
  dVar1 = param_1 * 0.5;
  func_0x00010bf20c00(param_2);
  _CGRectGetHeight();
  func_0x00010bef15e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17a6a0(dVar1,param_1 * 0.5);
  _objc_release(param_2);
  return;
}



/* Entry: 1065184a0; end: 106518513; -[SCLoadingChatsCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065184a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112749c7c);
  *(undefined8 *)(param_1 + _DAT_112749c7c) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  func_0x00010c09d440(param_3);
  _objc_release(param_3);
  func_0x00010c1bef40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c08cad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_layoutCell_112600cc0);
  return;
}



/* Entry: 106518514; end: 1065185fb; -[SCLoadingChatsCell layoutCell] */

void FUN_106518514(long param_1)

{
  long lVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  lVar1 = param_1;
  func_0x00010c09d440();
  if (lVar1 < 3) {
    if (lVar1 == 1) {
SUB_10c1beb40:
                    /* WARNING: Could not recover jumptable at 0x00010c1beb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setLoading_11264d4f8);
      return;
    }
    if (lVar1 == 2) {
      _objc_initWeak(auStack_28,param_1);
      puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_48 = 0xc2000000;
      pcStack_40 = FUN_1065185fc;
      puStack_38 = &UNK_1108434b0;
      _objc_copyWeak(auStack_30,auStack_28);
      func_0x000100c749e0(0x40000000,"APPSTORE",&puStack_50);
      _objc_destroyWeak(auStack_30);
      _objc_destroyWeak(auStack_28);
    }
  }
  else {
    if (lVar1 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010c1e9c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setReloadable_112658148);
      return;
    }
    if (lVar1 == 5) goto SUB_10c1beb40;
  }
  return;
}



/* Entry: 1065185fc; end: 106518667;  */

void FUN_1065185fc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c09d440();
  _objc_release(lVar1);
  if (lVar2 - 5U < 0xfffffffffffffffe) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010c1beb40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106518668; end: 106518677; -[SCLoadingChatsCell labelTextColor] */

void FUN_106518668(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0xbf);
  return;
}



/* Entry: 106518678; end: 106518687; -[SCLoadingChatsCell labelFontWithSize:] */

void FUN_106518678(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6d690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)param_3,PTR__OBJC_CLASS___UIFont_1126aec38,
             PTR_s_demiBoldAvenirNextFontOfSize__1125b8f48);
  return;
}



/* Entry: 106518688; end: 106518757; -[SCLoadingChatsCell setLoading] */

void FUN_106518688(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bef15e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c074c20();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar1 = param_1;
    func_0x00010bef15e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24dbc0();
    _objc_release(uVar1);
    uVar1 = param_1;
    func_0x00010bef15e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(uVar1);
  }
  uVar1 = param_1;
  func_0x00010c087500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar1);
  func_0x00010c13f720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106518758; end: 10651883f; -[SCLoadingChatsCell setReloadable] */

void FUN_106518758(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c087500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c0648c0(param_1);
  }
  lVar1 = param_1;
  func_0x00010c13f720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010c064a20(param_1);
  }
  lVar1 = param_1;
  func_0x00010c087500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c13f720(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010bef15e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2558c0();
  _objc_release(lVar1);
  func_0x00010bef15e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106518840; end: 10651887b; -[SCLoadingChatsCell onTapToLoad:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106518840(long param_1)

{
  param_1 = param_1 + _DAT_112749c80;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf33e00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10651887c; end: 10651888b; -[SCLoadingChatsCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10651887c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112749c7c);
}



/* Entry: 10651888c; end: 1065188ab; -[SCLoadingChatsCell delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651888c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112749c80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1065188ac; end: 1065188bf; -[SCLoadingChatsCell setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065188ac(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112749c80,param_3);
  return;
}



/* Entry: 1065188c0; end: 1065188cf; -[SCLoadingChatsCell activityIndicator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1065188c0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112749c78);
}



/* Entry: 1065188d0; end: 10651890f; -[SCLoadingChatsCell setActivityIndicator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065188d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112749c78;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106518910; end: 10651891f; -[SCLoadingChatsCell label] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106518910(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112749c70);
}



/* Entry: 106518920; end: 10651895f; -[SCLoadingChatsCell setLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106518920(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112749c70;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106518960; end: 10651896f; -[SCLoadingChatsCell loadingStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106518960(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112749c6c);
}



/* Entry: 106518970; end: 10651897f; -[SCLoadingChatsCell setLoadingStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106518970(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112749c6c) = param_3;
  return;
}



/* Entry: 106518980; end: 10651898f; -[SCLoadingChatsCell retryIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106518980(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112749c74);
}



/* Entry: 106518990; end: 1065189cf; -[SCLoadingChatsCell setRetryIcon:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106518990(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112749c74;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1065189d0; end: 106518a3b; -[SCLoadingChatsCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065189d0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112749c74,0);
  _objc_storeStrong(param_1 + _DAT_112749c70,0);
  _objc_storeStrong(param_1 + _DAT_112749c78,0);
  _objc_destroyWeak(param_1 + _DAT_112749c80);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112749c7c,0);
  return;
}



/* Entry: 106518a3c; end: 106518bbf; -[SCSnapMediaCardView initWithParentVC:delegate:snapCountDownManager:postSnapProvider:actionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_106518a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126f19f0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126cb4d8;
    _objc_alloc();
    func_0x00010bff0120();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112749c84);
    *(undefined **)((long)puVar1 + (long)_DAT_112749c84) = puVar2;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112749c88),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_112749c8c),param_4);
    lVar4 = (long)_DAT_112749c90;
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112749c94;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_112749c98);
    *(undefined **)((long)puVar1 + (long)_DAT_112749c98) = puVar2;
    _objc_release(uVar3);
    func_0x00010befbb60(puVar1);
    func_0x00010be39c80(puVar1);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106518bc0; end: 106518c37; -[SCSnapMediaCardView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106518bc0(long param_1,undefined8 param_2)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c12e920(*(undefined8 *)(param_1 + _DAT_112749c9c),param_2,param_1,
                      PTR_s_onTap_1126175d0);
  func_0x00010c12e920(*(undefined8 *)(param_1 + _DAT_112749ca0));
  puStack_28 = PTR_PTR_1126f19f0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106518c38; end: 106518c6f; -[SCSnapMediaCardView prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106518c38(long param_1)

{
  func_0x00010bf86d80(*(undefined8 *)(param_1 + _DAT_112749c98));
                    /* WARNING: Could not recover jumptable at 0x00010c1097b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112749c84),PTR_s_prepareForReuse_112620008);
  return;
}



/* Entry: 106518c70; end: 106518ecf; -[SCSnapMediaCardView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106518c70(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_112749ca4;
  lVar1 = param_1 + lVar6;
  _objc_loadWeakRetained(lVar1);
  uVar2 = param_3;
  func_0x00010c071ae0();
  _objc_release(lVar1);
  if ((uVar2 & 1) == 0) {
    _objc_storeWeak(param_1 + lVar6,param_3);
    lVar7 = (long)_DAT_112749c84;
    func_0x00010c2226c0(*(undefined8 *)(param_1 + lVar7));
    func_0x00010c1097a0(param_1);
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    lVar1 = param_1 + lVar6;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010bf0df60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20a4e0(uVar5);
    _objc_release(lVar3);
    _objc_release(lVar1);
    lVar1 = param_1 + lVar6;
    _objc_loadWeakRetained();
    lVar3 = lVar1;
    func_0x00010bf9c700();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    lVar1 = param_1 + lVar6;
    _objc_loadWeakRetained(lVar1);
    lVar4 = lVar1;
    if (lVar3 == 0) {
      func_0x00010c25e680();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c20eda0(uVar5);
    }
    else {
      func_0x00010bf9c700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c198b60(uVar5);
    }
    _objc_release(lVar4);
    _objc_release(lVar1);
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    lVar1 = param_1 + lVar6;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010bfbe060();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a1f20(uVar5);
    _objc_release(lVar3);
    _objc_release(lVar1);
    lVar1 = param_1 + lVar6;
    _objc_loadWeakRetained();
    lVar3 = lVar1;
    func_0x00010c2331c0();
    _objc_release(lVar1);
    uVar5 = *(undefined8 *)(param_1 + lVar7);
    if ((int)lVar3 == 0) {
      lVar1 = param_1 + lVar6;
      _objc_loadWeakRetained(lVar1);
      lVar3 = lVar1;
      func_0x00010c253220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23a3c0(uVar5);
      _objc_release(lVar3);
      _objc_release(lVar1);
      func_0x00010c250b00(*(undefined8 *)(param_1 + lVar7));
      lVar1 = param_1 + lVar6;
      _objc_loadWeakRetained();
      lVar3 = lVar1;
      func_0x00010c234600();
      _objc_release(lVar1);
      if ((int)lVar3 != 0) {
        func_0x00010bec1920(param_1);
      }
    }
    else {
      func_0x00010c2359c0(uVar5);
    }
    lVar6 = param_1 + lVar6;
    _objc_loadWeakRetained(lVar6);
    func_0x00010bf86400();
    func_0x00010c18fe00(param_1);
    _objc_release(lVar6);
    func_0x00010c12ff00(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106518ed0; end: 106518ed3; -[SCSnapMediaCardView renderPayload] */

void FUN_106518ed0(void)

{
  return;
}



/* Entry: 106518ed4; end: 1065190bf; -[SCSnapMediaCardView renderPostSnapButtons] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106518ed4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  
  lVar1 = param_1 + _DAT_112749c88;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar4 = (long)_DAT_112749ca4;
    lVar2 = param_1 + lVar4;
    _objc_loadWeakRetained();
    lVar5 = lVar2;
    func_0x00010c1050e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar5 != 0) {
      func_0x00010bf57d20(param_1);
      lVar5 = (long)_DAT_112749ca8;
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1 + lVar4;
      _objc_loadWeakRetained(lVar1);
      lVar2 = lVar1;
      func_0x00010c1050e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf47aa0(uVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(uVar3);
      puVar6 = (undefined8 *)(param_1 + _DAT_112749cac);
      uVar3 = *puVar6;
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_1 + lVar4;
      _objc_loadWeakRetained(lVar4);
      lVar1 = lVar4;
      func_0x00010c1050e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf47aa0(uVar3);
      _objc_release(lVar1);
      _objc_release(lVar4);
      _objc_release(uVar3);
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(uVar3);
      goto LAB_106519080;
    }
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_112749ca8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar3);
  puVar6 = (undefined8 *)(param_1 + _DAT_112749cac);
LAB_106519080:
  uVar3 = *puVar6;
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 1065190c0; end: 1065192af; -[SCSnapMediaCardView createPostSnapButtonsViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065190c0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar6 = (long)_DAT_112749ca8;
  lVar2 = *(long *)(param_1 + lVar6);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    uVar5 = *(undefined8 *)(param_1 + _DAT_112749c94);
    _objc_retain(uVar5);
    puVar3 = PTR_PTR_1126ae720;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1065192b0;
    puStack_78 = &UNK_110929cf0;
    _objc_retain(uVar5);
    uStack_70 = uVar5;
    lStack_68 = param_1;
    func_0x00010c0b8440(puVar3,param_2,&puStack_90);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar3;
    _objc_release(uVar4);
    lVar2 = *(long *)(param_1 + lVar6);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar6));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1,param_2,uVar4);
      _objc_release(uVar4);
    }
    puVar3 = PTR_PTR_1126ae720;
    puStack_c0 = puVar1;
    uStack_b8 = 0xc2000000;
    uStack_b0 = 0x106519330;
    puStack_a8 = &UNK_110929cf0;
    _objc_retain(uVar5);
    uStack_a0 = uVar5;
    lStack_98 = param_1;
    func_0x00010c0b8440(puVar3,param_2,&puStack_c0);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_DAT_112749cac;
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(undefined **)(param_1 + lVar6) = puVar3;
    _objc_release(uVar4);
    lVar2 = *(long *)(param_1 + lVar6);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010bf57500(*(undefined8 *)(param_1 + lVar6));
      _objc_unsafeClaimAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + lVar6);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60(param_1,param_2,uVar4);
      _objc_release(uVar4);
    }
    _objc_release(uStack_a0);
    _objc_release(uStack_70);
    _objc_release(uVar5);
  }
  return;
}



/* Entry: 1065192b0; end: 1065193af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065192b0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(param_1 + 0x28) + (long)_DAT_112749c88;
  _objc_loadWeakRetained(lVar2);
  uVar3 = uVar1;
  func_0x00010bf57d00(uVar1,param_2,lVar2,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1065193b0; end: 1065194db; -[SCSnapMediaCardView _startSnapTimerIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065193b0(double param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  double dVar9;
  
  lVar8 = (long)_DAT_112749ca4;
  lVar2 = param_2 + lVar8;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010c234600();
  _objc_release(lVar2);
  if ((int)lVar3 != 0) {
    uVar4 = param_2 + lVar8;
    _objc_loadWeakRetained();
    puVar5 = PTR_PTR_1126cb470;
    _objc_opt_class(PTR_PTR_1126cb470);
    uVar6 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar5);
    uVar1 = uVar4;
    if ((uVar6 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(uVar4);
    uVar4 = uVar1;
    func_0x00010bf52a80(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010c0cb5a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar7 = *(undefined8 *)(param_2 + _DAT_112749c90);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c155340();
    dVar9 = 0.0;
    if (0.0 <= param_1) {
      dVar9 = param_1;
    }
    _objc_release(uVar7);
    func_0x00010c24e700((double)(long)dVar9,*(undefined8 *)(param_2 + _DAT_112749c84));
    _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1065194dc; end: 1065194eb; -[SCSnapMediaCardView _pauseSnapCountdownTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065194dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f60d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112749c84),PTR_s_pauseTimer_11261b250);
  return;
}



/* Entry: 1065194ec; end: 1065194fb; -[SCSnapMediaCardView _resumeSnapCountdownTimer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065194ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13d9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112749c84),PTR_s_resumeTimer_11262d090);
  return;
}



/* Entry: 1065194fc; end: 1065194ff; -[SCSnapMediaCardView didEndDisplay] */

void FUN_1065194fc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1097b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_prepareForReuse_112620008);
  return;
}



/* Entry: 106519500; end: 1065195b7; -[SCSnapMediaCardView _initGestureRecognizers] */

/* WARNING: Possible PIC construction at 0x000106519560: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000106519564) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106519500(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  _objc_alloc();
  func_0x00010c050900();
  lVar3 = (long)_DAT_112749c9c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010bef9040(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c18b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_setDelegate__112640798,param_1);
  return;
}



/* Entry: 1065195b8; end: 106519687; -[SCSnapMediaCardView onTap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065195b8(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_1 + _DAT_112749ca4;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126cb470;
  _objc_opt_class(PTR_PTR_1126cb470);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112749cb0);
  uVar2 = uVar1;
  func_0x00010c268c20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112749c84);
  func_0x00010c253240(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd0140(uVar6);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106519688; end: 1065196c3; -[SCSnapMediaCardView onLongPress:] */

void FUN_106519688(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c252440();
  if (param_3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00010bf0db70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_attemptToReplaySnap_1125a1080);
    return;
  }
  return;
}



/* Entry: 1065196c4; end: 106519783; -[SCSnapMediaCardView gestureRecognizer:shouldReceiveTouch:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1065196c4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 == *(long *)(param_1 + _DAT_112749c9c)) {
    param_1 = param_1 + _DAT_112749ca4;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c2323e0();
  }
  else {
    if (param_3 != *(long *)(param_1 + _DAT_112749ca0)) {
      lVar1 = 0;
      goto LAB_106519760;
    }
    param_1 = param_1 + _DAT_112749ca4;
    _objc_loadWeakRetained(param_1);
    lVar1 = param_1;
    func_0x00010c2323c0();
  }
  _objc_release(param_1);
LAB_106519760:
  _objc_release(param_4);
  _objc_release(param_3);
  return lVar1;
}



/* Entry: 106519784; end: 1065197df; -[SCSnapMediaCardView gestureRecognizer:shouldReceivePress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106519784(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != *(long *)(param_1 + _DAT_112749ca0)) {
    return 0;
  }
  param_1 = param_1 + _DAT_112749ca4;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c2323c0();
  _objc_release(param_1);
  return lVar1;
}



/* Entry: 1065197e0; end: 1065198bf; -[SCSnapMediaCardView gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1065197e0(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1 + _DAT_112749ca4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c2323c0();
  if (((int)lVar2 != 0) && (param_3 == *(long *)(param_1 + _DAT_112749ca0))) {
    puVar3 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    _objc_opt_class(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
    uVar4 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar3);
    if ((uVar4 & 1) != 0) {
      uVar4 = param_4;
      func_0x00010c29bf00(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c070780(param_1);
      _objc_release(uVar4);
      goto LAB_106519890;
    }
  }
  param_1 = 0;
LAB_106519890:
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1065198c0; end: 1065199d3; -[SCSnapMediaCardView getSnapIconViewRect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1065198c0(double param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  
  lVar2 = (long)_DAT_112749c84;
  uVar1 = *(undefined8 *)(param_2 + lVar2);
  func_0x00010c253240(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetMinX();
  dVar3 = param_1;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + lVar2);
  func_0x00010c253240(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetMinY();
  _objc_release(uVar1);
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar2));
  _CGRectGetMinX();
  func_0x00010bfb68e0(*(undefined8 *)(param_2 + lVar2));
  _CGRectGetMinY();
  uVar1 = *(undefined8 *)(param_2 + lVar2);
  func_0x00010c253240(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetWidth();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_2 + lVar2);
  func_0x00010c253240(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  _CGRectGetHeight();
  _objc_release(uVar1);
  return param_1 + dVar3;
}



/* Entry: 1065199d4; end: 1065199df; -[SCSnapMediaCardView height] */

undefined8 FUN_1065199d4(void)

{
  return 0x4049000000000000;
}



/* Entry: 1065199e0; end: 106519a6b; -[SCSnapMediaCardView rerenderWithBoundingSize:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1065199e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined *puVar1;
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
  
  puVar1 = PTR_PTR_1126cb468;
  func_0x00010bfb68e0();
  func_0x00010c27a580(&uStack_60,param_3,param_4,param_1,param_2,puVar1);
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  func_0x00010c219960(param_5,param_6,&uStack_90);
  func_0x00010c20eda0(*(undefined8 *)(param_5 + _DAT_112749c84),param_6,0);
  return;
}



/* Entry: 106519a6c; end: 106519b93; -[SCSnapMediaCardView resetWithOriginalSettings] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106519a6c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_70 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_48 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_50 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  func_0x00010c219960(param_1,param_2,&uStack_70);
  lVar5 = (long)_DAT_112749ca4;
  lVar1 = param_1 + lVar5;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf9c700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  lVar6 = (long)_DAT_112749c84;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  lVar1 = param_1 + lVar5;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  if (lVar2 == 0) {
    func_0x00010c25e680();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c20eda0(uVar4,param_2,lVar3);
  }
  else {
    func_0x00010bf9c700();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c198b60(uVar4,param_2,lVar3);
  }
  _objc_release(lVar3);
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  param_1 = param_1 + lVar5;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfbe060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a1f20(uVar4,param_2,lVar1);
  _objc_release(lVar1);
  _objc_release(param_1);
  return;
}



/* Entry: 106519b94; end: 106519c3b; -[SCSnapMediaCardView attemptToReplaySnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106519b94(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar2 = param_1 + _DAT_112749ca4;
  _objc_loadWeakRetained();
  puVar3 = PTR_PTR_1126cb470;
  _objc_opt_class(PTR_PTR_1126cb470);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  uVar5 = *(undefined8 *)(param_1 + _DAT_112749cb0);
  uVar2 = uVar1;
  func_0x00010c0b4ce0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010bfd0140(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106519c3c; end: 106519d0b; -[SCSnapMediaCardView thumbnailViewForMediaId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106519c3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_112749ca4;
  _objc_retain(param_3);
  uVar1 = param_1 + lVar5;
  _objc_loadWeakRetained();
  puVar2 = PTR_PTR_1126cb470;
  _objc_opt_class(PTR_PTR_1126cb470);
  uVar3 = uVar1;
  _objc_opt_isKindOfClass(uVar1,puVar2);
  uVar4 = uVar1;
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar1);
  uVar1 = uVar4;
  func_0x00010c26ddc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  uVar4 = uVar1;
  func_0x00010c0720c0();
  _objc_release(param_3);
  _objc_release(uVar1);
  if ((int)uVar4 != 0) {
    func_0x00010c253240(*(undefined8 *)(param_1 + _DAT_112749c84));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106519d0c; end: 106519d1b; -[SCSnapMediaCardView setReplayDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106519d0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1eadf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112749c84),PTR_s_setReplayDelegate__1126585a0);
  return;
}



/* Entry: 106519d1c; end: 10651a077; -[SCSnapMediaCardView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106519d1c(undefined8 param_1,double param_2,double param_3,double param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  long lStack_a0;
  undefined *puStack_98;
  
  puStack_98 = PTR_PTR_1126f19f0;
  lStack_a0 = param_5;
  _objc_msgSendSuper2(&lStack_a0,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  lVar9 = (long)_DAT_112749cac;
  lVar2 = *(long *)(param_5 + lVar9);
  dVar14 = param_2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    bVar1 = false;
  }
  else {
    uVar3 = *(ulong *)(param_5 + lVar9);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c074c20();
    if ((uVar4 & 1) == 0) {
      lVar5 = *(long *)(param_5 + lVar9);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      func_0x00010bf25d00();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar6;
      func_0x00010bf529e0();
      bVar1 = lVar10 != 0;
      _objc_release(lVar6);
      _objc_release(lVar5);
    }
    else {
      bVar1 = false;
    }
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
  lVar2 = (long)_DAT_112749c84;
  func_0x00010c0699c0(*(undefined8 *)(param_5 + lVar2));
  if (dVar14 == *(double *)PTR__UIViewNoIntrinsicMetric_110345e70) {
    dVar14 = 40.0;
  }
  dVar15 = *(double *)PTR__CGPointZero_110347540;
  uVar16 = *(undefined8 *)(PTR__CGPointZero_110347540 + 8);
  dVar13 = param_3 + -56.0;
  if (!bVar1) {
    dVar13 = param_3;
  }
  dVar11 = dVar15;
  func_0x00010c1739e0(dVar15,uVar16,dVar13,dVar14,*(undefined8 *)(param_5 + lVar2));
  lVar10 = (long)_DAT_112749ca8;
  lVar6 = *(long *)(param_5 + lVar10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 != 0) {
    uVar7 = *(undefined8 *)(param_5 + lVar10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c074c20();
    _objc_release(uVar7);
    _objc_release(lVar6);
    if ((int)uVar8 == 0) {
      lVar6 = param_5 + _DAT_112749ca4;
      _objc_loadWeakRetained(lVar6);
      func_0x00010c1050c0();
      _objc_release(lVar6);
      uVar8 = *(undefined8 *)(param_5 + lVar10);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      dVar12 = 0.0;
      func_0x00010c19f0e0(0,param_4 - dVar11,param_3,dVar11);
      _objc_release(uVar8);
      if (bVar1) {
        dVar15 = 56.0;
        if (56.0 <= dVar14) {
          dVar15 = dVar14;
        }
        dVar12 = dVar15 * 0.5 + ((param_4 - dVar11) - dVar15) * 0.5;
        dVar15 = dVar12 - dVar14 * 0.5;
        uVar16 = 0;
        _CGRectGetMidX(0,dVar15,dVar13,dVar14);
        uVar8 = 0;
        _CGRectGetMidY(0,dVar15,dVar13,dVar14);
        func_0x00010c17a6a0(uVar16,uVar8,*(undefined8 *)(param_5 + lVar2));
        dVar12 = dVar12 + -28.0;
      }
      else {
        _CGRectGetMidX(dVar15,uVar16,dVar13,dVar14);
        func_0x00010c17a6a0(*(undefined8 *)(param_5 + lVar2));
      }
      uVar16 = *(undefined8 *)(param_5 + lVar9);
      func_0x00010c269d40(uVar16);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19f0e0(dVar13,dVar12,0x404c000000000000,0x404c000000000000);
      _objc_release(uVar16);
      return;
    }
  }
  uVar16 = param_1;
  _CGRectGetMidX(param_1,param_2,param_3,param_4);
  _CGRectGetMidY(param_1,param_2,param_3,param_4);
  func_0x00010c17a6a0(uVar16,param_1,*(undefined8 *)(param_5 + lVar2));
  return;
}



/* Entry: 10651a078; end: 10651a087; -[SCSnapMediaCardView actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10651a078(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112749cb0);
}



/* Entry: 10651a088; end: 10651a0c7; -[SCSnapMediaCardView setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651a088(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112749cb0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10651a0c8; end: 10651a0e7; -[SCSnapMediaCardView replayDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651a0c8(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_112749cb4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10651a0e8; end: 10651a0f7; -[SCSnapMediaCardView tapGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10651a0e8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112749c9c);
}



/* Entry: 10651a0f8; end: 10651a1d7; -[SCSnapMediaCardView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651a0f8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112749c9c,0);
  _objc_destroyWeak(param_1 + _DAT_112749cb4);
  _objc_storeStrong(param_1 + _DAT_112749cb0,0);
  _objc_storeStrong(param_1 + _DAT_112749c98,0);
  _objc_storeStrong(param_1 + _DAT_112749c94,0);
  _objc_storeStrong(param_1 + _DAT_112749c90,0);
  _objc_destroyWeak(param_1 + _DAT_112749c8c);
  _objc_destroyWeak(param_1 + _DAT_112749c88);
  _objc_destroyWeak(param_1 + _DAT_112749ca4);
  _objc_storeStrong(param_1 + _DAT_112749cac,0);
  _objc_storeStrong(param_1 + _DAT_112749ca8,0);
  _objc_storeStrong(param_1 + _DAT_112749ca0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112749c84,0);
  return;
}



/* Entry: 10651a1d8; end: 10651a267; -[SCActionMenuGenericContentView initWithContentView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10651a1d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f19f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112749cb8;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010befbb60(puVar1);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10651a268; end: 10651a2df; -[SCActionMenuGenericContentView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651a268(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f19f8;
  lStack_40 = param_4;
  _objc_msgSendSuper2(&lStack_40,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_4);
  func_0x00010bf20c00(param_4);
  func_0x00010c19f0e0(0,0,param_3,*(undefined8 *)(param_4 + _DAT_112749cb8));
  return;
}



/* Entry: 10651a2e0; end: 10651a2ef; -[SCActionMenuGenericContentView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651a2e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112749cb8),PTR_s_sizeThatFits__11266cf90);
  return;
}



/* Entry: 10651a2f0; end: 10651a367; -[SCActionMenuGenericContentView rerenderWithBoundingSize:] */

void FUN_10651a2f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
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
  
  puVar1 = PTR_PTR_1126cb468;
  func_0x00010bf20c00();
  func_0x00010c27a580(&uStack_60,param_3,param_4,param_1,param_2,puVar1);
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  func_0x00010c219960(param_5,param_6,&uStack_90);
  return;
}



/* Entry: 10651a368; end: 10651a39f; -[SCActionMenuGenericContentView resetWithOriginalSettings] */

void FUN_10651a368(undefined8 param_1,undefined8 param_2)

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
  func_0x00010c219960(param_1,param_2,&uStack_40);
  return;
}



/* Entry: 10651a3a0; end: 10651a3b3; -[SCActionMenuGenericContentView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651a3a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112749cb8,0);
  return;
}



/* Entry: 10651a3b4; end: 10651a95b;  */

void FUN_10651a3b4(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  undefined *unaff_x27;
  
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  puVar4 = PTR_PTR_1126c6d00;
  _objc_opt_class(PTR_PTR_1126c6d00);
  uVar5 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar4);
  uVar2 = param_1;
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  if (uVar2 != 0) {
    _objc_retain(param_2);
    _objc_retain(param_3);
    uVar6 = param_1;
    func_0x00010c0cb340();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010010fab4();
    uVar5 = uVar6;
    if ((int)uVar7 == 0) {
      uVar5 = 0;
    }
    _objc_retain(uVar5);
    _objc_release(uVar6);
    if (uVar5 == 0) {
      unaff_x27 = (undefined *)0x0;
    }
    else {
      uVar7 = param_2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c101c60(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c101ba0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      _objc_release(uVar7);
      uVar7 = uVar8;
      func_0x00010010fab4(uVar8,PTR_DAT_1126a5408);
      uVar6 = uVar8;
      if ((uVar7 & 1) == 0) {
        uVar6 = 0;
      }
      _objc_retain(uVar6);
      _objc_release(uVar8);
      uVar7 = uVar6;
      func_0x00010010fab4(uVar6,PTR_DAT_1126a53f0);
      puVar4 = PTR_DAT_1126a5410;
      uVar1 = 0;
      if (uVar6 != 0) {
        uVar1 = (uint)uVar7;
      }
      _objc_retain(uVar6);
      uVar9 = uVar6;
      func_0x00010010fab4(uVar6,puVar4);
      uVar3 = uVar6;
      if ((int)uVar9 == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      _objc_release(uVar6);
      if (uVar3 == 0) {
        uVar8 = uVar6;
        func_0x00010010fab4(uVar6,PTR_DAT_1126a53e8);
        unaff_x27 = (undefined *)0x0;
        if (((((uint)uVar8 | (uint)uVar7) & 1) != 0) && (uVar6 != 0)) goto LAB_10651a5ac;
      }
      else {
        _objc_release(uVar8);
LAB_10651a5ac:
        uVar7 = uVar6;
        func_0x00010c101d20();
        if (uVar7 == 1) {
          ppuVar11 = &PTR_PTR_1126cb520;
        }
        else {
          if (uVar7 != 0) {
            unaff_x27 = (undefined *)0x0;
            goto LAB_10651a608;
          }
          ppuVar11 = &PTR_PTR_1126cb320;
          if (uVar1 == 0) {
            ppuVar11 = &PTR_PTR_1126cb518;
          }
        }
        unaff_x27 = *ppuVar11;
        _objc_alloc();
        func_0x00010c033780();
      }
LAB_10651a608:
      _objc_release(uVar6);
    }
    _objc_release(uVar5);
    _objc_release(param_3);
    _objc_release(param_2);
    if (unaff_x27 != (undefined *)0x0) goto LAB_10651a894;
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(param_8);
    uVar5 = param_1;
    func_0x00010c13fd60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010c0720c0();
    if ((int)uVar6 == 0) {
      uVar6 = uVar5;
      func_0x00010c0720c0();
      unaff_x27 = PTR_PTR_1126cb528;
      if ((((int)uVar6 == 0) &&
          (uVar6 = uVar5, func_0x00010c0720c0(), unaff_x27 = PTR_PTR_1126cb530, (int)uVar6 == 0)) &&
         (uVar6 = uVar5, func_0x00010c0720c0(), unaff_x27 = PTR_PTR_1126cb4e8, (int)uVar6 == 0)) {
        uVar6 = uVar5;
        func_0x00010c0720c0();
        if ((int)uVar6 == 0) {
          uVar6 = uVar5;
          func_0x00010c0720c0();
          unaff_x27 = PTR_PTR_1126cb538;
          if (((int)uVar6 != 0) ||
             (uVar6 = uVar5, func_0x00010c0720c0(), unaff_x27 = PTR_PTR_1126cb518, (int)uVar6 != 0))
          goto LAB_10651a6ec;
          unaff_x27 = (undefined *)0x0;
        }
        else {
          unaff_x27 = PTR_PTR_1126cb4b8;
          _objc_alloc();
          func_0x00010c04ec80();
        }
      }
      else {
LAB_10651a6ec:
        _objc_alloc();
        func_0x00010c033780();
      }
    }
    else {
      unaff_x27 = PTR_PTR_1126cb318;
      _objc_alloc();
      func_0x00010c0337a0();
    }
    _objc_release(uVar5);
    _objc_release(param_8);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    if (unaff_x27 != (undefined *)0x0) goto LAB_10651a894;
  }
  puVar4 = PTR_PTR_1126cb510;
  _objc_retain(param_1);
  _objc_opt_class(puVar4);
  uVar6 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar4);
  uVar5 = param_1;
  if ((uVar6 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(param_1);
  uVar6 = uVar5;
  func_0x00010c29da00();
  _objc_release(uVar5);
  _objc_retain(param_3);
  puVar4 = PTR_PTR_1126cb4f0;
  if ((long)uVar6 < 4) {
    if ((long)uVar6 < 2) {
      puVar4 = PTR_PTR_1126cb4e0;
      if ((uVar6 == 0) || (puVar4 = PTR_PTR_1126cb4e8, uVar6 == 1)) goto LAB_10651a87c;
    }
    else if (uVar6 == 2) {
      unaff_x27 = PTR_PTR_1126cb4b8;
      _objc_alloc(PTR_PTR_1126cb4b8);
      uVar10 = param_3;
      func_0x00010c13fda0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04ec80(unaff_x27);
      _objc_release(uVar10);
    }
    else if (uVar6 == 3) goto LAB_10651a87c;
  }
  else if ((long)uVar6 < 6) {
    puVar4 = PTR_PTR_1126cb4f8;
    if ((uVar6 == 4) || (puVar4 = PTR_PTR_1126cb500, uVar6 == 5)) goto LAB_10651a87c;
  }
  else if ((uVar6 == 6) || ((puVar4 = PTR_PTR_1126cb508, uVar6 == 7 || (uVar6 == 8)))) {
LAB_10651a87c:
    _objc_alloc(puVar4);
    func_0x00010c033780();
    unaff_x27 = puVar4;
  }
  _objc_release(param_3);
LAB_10651a894:
  _objc_release(uVar2);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x27);
  return;
}



/* Entry: 10651a95c; end: 10651aadf; -[SCChatTableViewGenericComposerContentHolderCell initWithParameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10651a95c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126f1a00;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithParameters__1125ea7e0,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    uVar6 = param_3;
    func_0x00010c101ca0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_112749cbc;
    _objc_storeWeak((undefined1 *)((long)puVar1 + lVar7),uVar6);
    _objc_release(uVar6);
    uVar6 = param_3;
    func_0x00010c0cbd40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06e5c0();
    *(char *)((long)puVar1 + (long)_DAT_112749cc0) = (char)uVar3;
    _objc_release(uVar2);
    _objc_release(uVar6);
    puVar4 = PTR_PTR_1126cb540;
    _objc_alloc();
    puVar5 = (undefined1 *)((long)puVar1 + lVar7);
    _objc_loadWeakRetained(puVar5);
    func_0x00010c061b40();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112749cc4);
    *(undefined **)((long)puVar1 + (long)_DAT_112749cc4) = puVar4;
    _objc_release(uVar6);
    _objc_release(puVar5);
    puVar4 = PTR_PTR_1126cb548;
    _objc_alloc();
    func_0x00010c003f40();
    lVar7 = (long)_DAT_112749cc8;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar4;
    _objc_release(uVar6);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar7));
    puVar5 = (undefined1 *)puVar1;
    func_0x00010c0f6720(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar5);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10651aae0; end: 10651ab37; -[SCChatTableViewGenericComposerContentHolderCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651aae0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1a00;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf4c5c0(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112749cc8));
  return;
}



/* Entry: 10651ab38; end: 10651abff; -[SCChatTableViewGenericComposerContentHolderCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651ab38(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bee7640();
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126f1a00;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_setViewModel__1126663d8,param_3);
  _objc_release(param_3);
  lVar2 = param_1;
  func_0x00010bee7640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1835a0(*(undefined8 *)(param_1 + _DAT_112749cc4));
  if (lVar1 != lVar2) {
    func_0x00010bed5960(param_1);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 10651ac00; end: 10651ac67; -[SCChatTableViewGenericComposerContentHolderCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651ac00(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1a00;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010c1097a0(*(undefined8 *)(param_1 + _DAT_112749cc4));
  func_0x00010c1dcbe0(param_1);
  func_0x00010bea33c0(param_1);
  return;
}



/* Entry: 10651ac68; end: 10651acd7; -[SCChatTableViewGenericComposerContentHolderCell didChangeVisibility:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651ac68(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1a00;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_didChangeVisibility__1125ba7b8);
  func_0x00010bea33c0(param_1);
  func_0x00010bf73840(*(undefined8 *)(param_1 + _DAT_112749cc4));
  func_0x00010bed5960(param_1);
  return;
}



/* Entry: 10651acd8; end: 10651ad23; -[SCChatTableViewGenericComposerContentHolderCell endDisplayingCell] */

void FUN_10651acd8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1a00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_endDisplayingCell_1125c2b90);
  func_0x00010bf73840(param_1);
  return;
}



/* Entry: 10651ad24; end: 10651ad6f; -[SCChatTableViewGenericComposerContentHolderCell willDisplayCell] */

void FUN_10651ad24(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1a00;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_willDisplayCell_112687218);
  func_0x00010bf73840(param_1);
  return;
}



/* Entry: 10651ad70; end: 10651ae0b; -[SCChatTableViewGenericComposerContentHolderCell _updateComposerVisibility:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651ad70(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  if (*(char *)(param_1 + _DAT_112749cc0) != '\x01') {
    return;
  }
  lVar1 = param_1;
  func_0x00010bee7640();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 != 0) {
    func_0x00010bf20c00(*(undefined8 *)(param_1 + _DAT_112749cc4));
  }
  func_0x00010c223d80(lVar2);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10651ae0c; end: 10651ae2f; -[SCChatTableViewGenericComposerContentHolderCell _setCurrentlyVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651ae0c(long param_1,undefined8 param_2,undefined1 param_3)

{
  if (*(char *)(param_1 + _DAT_112749cc0) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_112749ccc) = param_3;
  }
  return;
}



/* Entry: 10651ae30; end: 10651ae5f; -[SCChatTableViewGenericComposerContentHolderCell thumbnailViewForMediaId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651ae30(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112749cc4);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10651ae60; end: 10651af5b; -[SCChatTableViewGenericComposerContentHolderCell contentFrameInPayloadView] */

double FUN_10651ae60(undefined8 param_1,double param_2,undefined8 param_3)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = param_3;
  func_0x00010bee7640();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cb300(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f6540();
  dVar2 = param_2;
  _objc_release(param_3);
  func_0x00010c0bafa0(uVar1);
  func_0x00010c0bafa0(uVar1);
  func_0x00010c0bafa0(uVar1);
  func_0x00010c0bafa0(uVar1);
  func_0x00010bf4d5e0(uVar1);
  func_0x00010c0bafa0(uVar1);
  func_0x00010c0bafa0(uVar1);
  _objc_release(uVar1);
  return param_2 + dVar2;
}



/* Entry: 10651af5c; end: 10651af5f; -[SCChatTableViewGenericComposerContentHolderCell configureWithCollectionViewDelegate:] */

void FUN_10651af5c(void)

{
  return;
}



/* Entry: 10651af60; end: 10651b08b; -[SCChatTableViewGenericComposerContentHolderCell contentViewForFocusedContent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651af60(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    lVar5 = param_1 + (long)_DAT_112749cbc;
    _objc_loadWeakRetained(lVar5);
    lVar6 = lVar5;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bee7640(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c101c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c101d60(lVar6);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  uVar7 = *(undefined8 *)(param_1 + (long)_DAT_112749cc8);
  _objc_retain(uVar7);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
  return;
}



/* Entry: 10651b08c; end: 10651b1db; -[SCChatTableViewGenericComposerContentHolderCell resetWithOriginalContent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651b08c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar4 = uVar2;
  _objc_opt_isKindOfClass(uVar2,puVar3);
  uVar1 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar2);
  if (uVar1 != 0) {
    lVar6 = param_1 + (long)_DAT_112749cbc;
    _objc_loadWeakRetained(lVar6);
    lVar5 = lVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_1;
    func_0x00010bee7640(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c101c60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c101d60(lVar5);
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_release(lVar5);
    _objc_release(lVar6);
  }
  uVar2 = param_1;
  func_0x00010c0f6720(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_112749cc8;
  func_0x00010befbb60();
  _objc_release(uVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c1cbe20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10651b1dc; end: 10651b25b; -[SCChatTableViewGenericComposerContentHolderCell setPlaceholderView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651b1dc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112749cd0;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar2));
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(long *)(param_1 + lVar2) = param_3;
  _objc_release(uVar1);
  if (param_3 != 0) {
    func_0x00010c0f6720(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10651b25c; end: 10651b303; -[SCChatTableViewGenericComposerContentHolderCell _valdiContextWrapper] */

void FUN_10651b25c(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c6d00;
  _objc_opt_class(PTR_PTR_1126c6d00);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar3 = uVar1;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR_PTR_1126cb4c0;
  _objc_opt_class(PTR_PTR_1126cb4c0);
  uVar4 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar2);
  uVar1 = uVar3;
  if ((uVar4 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10651b304; end: 10651b35f; -[SCChatTableViewGenericComposerContentHolderCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651b304(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112749cbc);
  _objc_storeStrong(param_1 + _DAT_112749cd0,0);
  _objc_storeStrong(param_1 + _DAT_112749cc4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112749cc8,0);
  return;
}



/* Entry: 10651b360; end: 10651b4e3; -[SCChatTableViewGenericComposerStackedContentHolderCell initWithParameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10651b360(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126f1a08;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithParameters__1125ea7e0,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    uVar6 = param_3;
    func_0x00010c101ca0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_DAT_112749cd4;
    _objc_storeWeak((undefined1 *)((long)puVar1 + lVar7),uVar6);
    _objc_release(uVar6);
    uVar6 = param_3;
    func_0x00010c0cbd40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06e5c0();
    *(char *)((long)puVar1 + (long)_DAT_112749cd8) = (char)uVar3;
    _objc_release(uVar2);
    _objc_release(uVar6);
    puVar4 = PTR_PTR_1126cb550;
    _objc_alloc();
    puVar5 = (undefined1 *)((long)puVar1 + lVar7);
    _objc_loadWeakRetained(puVar5);
    func_0x00010c061b40();
    uVar6 = *(undefined8 *)((long)puVar1 + (long)_DAT_112749cdc);
    *(undefined **)((long)puVar1 + (long)_DAT_112749cdc) = puVar4;
    _objc_release(uVar6);
    _objc_release(puVar5);
    puVar4 = PTR_PTR_1126cb548;
    _objc_alloc();
    func_0x00010c003f40();
    lVar7 = (long)_DAT_112749ce0;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar4;
    _objc_release(uVar6);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar7));
    puVar5 = (undefined1 *)puVar1;
    func_0x00010c0f6720(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar5);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10651b4e4; end: 10651b53b; -[SCChatTableViewGenericComposerStackedContentHolderCell layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651b4e4(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1a08;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf4c5c0(param_1);
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112749ce0));
  return;
}



/* Entry: 10651b53c; end: 10651b7cf; -[SCChatTableViewGenericComposerStackedContentHolderCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651b53c(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  ulong uVar9;
  long lStack_190;
  undefined *puStack_188;
  long lStack_180;
  ulong uStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  long lStack_158;
  ulong uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined *puStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bebf320();
  _objc_retainAutoreleasedReturnValue();
  puStack_f8 = PTR_PTR_1126f1a08;
  uStack_150 = uVar1;
  lStack_148 = param_3;
  uStack_100 = param_1;
  _objc_msgSendSuper2(&uStack_100,PTR_s_setViewModel__1126663d8,param_3);
  uVar2 = param_1;
  func_0x00010bebf320();
  _objc_retainAutoreleasedReturnValue();
  lStack_158 = (long)_DAT_112749cdc;
  func_0x00010c209100(*(undefined8 *)(param_1 + lStack_158));
  uVar3 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c6d00;
  _objc_opt_class(PTR_PTR_1126c6d00);
  uVar5 = uVar3;
  _objc_opt_isKindOfClass(uVar3,puVar4);
  uVar1 = uVar3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar3 = uVar1;
  func_0x00010c0cbb20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf529e0();
  func_0x00010bf0a0e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uVar3 = uVar1;
  func_0x00010c0cbb20();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf52a60();
  if (uVar5 != 0) {
    unaff_x20 = *plStack_130;
    do {
      uVar9 = 0;
      do {
        if (*plStack_130 != unaff_x20) {
          _objc_enumerationMutation(uVar3);
        }
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c07d080(*(undefined8 *)(lStack_138 + uVar9 * 8));
        func_0x00010c0df6e0(puVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar4);
        _objc_release(puVar6);
        uVar9 = uVar9 + 1;
      } while (uVar5 != uVar9);
      uVar5 = uVar3;
      func_0x00010bf52a60();
    } while (uVar5 != 0);
  }
  _objc_release(uVar3);
  uVar8 = *(undefined8 *)(param_1 + lStack_158);
  func_0x00010c12f740(uVar1);
  func_0x00010c1f5ba0(uVar8);
  uVar3 = uStack_150;
  if (uStack_150 != uVar2) {
    func_0x00010bed5960(param_1);
  }
  _objc_release(puVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar3);
  lVar7 = lStack_148;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uStack_178 = uVar3;
  pcStack_168 = FUN_10651b7d0;
  puStack_188 = PTR_PTR_1126f1a08;
  lStack_190 = lVar7;
  lStack_180 = unaff_x20;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&lStack_190,PTR_s_prepareForReuse_112620008);
  func_0x00010c1097a0(*(undefined8 *)(lVar7 + _DAT_112749cdc));
  func_0x00010c1dcbe0(lVar7);
  func_0x00010bea33c0(lVar7);
  return;
}



/* Entry: 10651b7d0; end: 10651b837; -[SCChatTableViewGenericComposerStackedContentHolderCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651b7d0(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1a08;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010c1097a0(*(undefined8 *)(param_1 + _DAT_112749cdc));
  func_0x00010c1dcbe0(param_1);
  func_0x00010bea33c0(param_1);
  return;
}



/* Entry: 10651b838; end: 10651b8a7; -[SCChatTableViewGenericComposerStackedContentHolderCell didChangeVisibility:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651b838(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1a08;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_didChangeVisibility__1125ba7b8);
  func_0x00010bea33c0(param_1);
  func_0x00010bf73840(*(undefined8 *)(param_1 + _DAT_112749cdc));
  func_0x00010bed5960(param_1);
  return;
}



/* Entry: 10651b8a8; end: 10651b8f3; -[SCChatTableViewGenericComposerStackedContentHolderCell endDisplayingCell] */

void FUN_10651b8a8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1a08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_endDisplayingCell_1125c2b90);
  func_0x00010bf73840(param_1);
  return;
}



/* Entry: 10651b8f4; end: 10651b93f; -[SCChatTableViewGenericComposerStackedContentHolderCell willDisplayCell] */

void FUN_10651b8f4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f1a08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_willDisplayCell_112687218);
  func_0x00010bf73840(param_1);
  return;
}



/* Entry: 10651b940; end: 10651bb1b; -[SCChatTableViewGenericComposerStackedContentHolderCell _updateComposerVisibility:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651b940(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,int param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (*(char *)(param_5 + (long)_DAT_112749cd8) == '\x01') {
    uVar5 = param_5;
    func_0x00010bebf320();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(ulong *)(param_5 + (long)_DAT_112749cdc);
    func_0x00010bf09ee0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar5;
    func_0x00010bf4f6a0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar9;
    func_0x00010bf529e0();
    _objc_release(uVar9);
    if (uVar7 != 0) {
      uVar9 = 0;
      uVar10 = *(undefined8 *)PTR__CGRectZero_110347608;
      uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
      uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
      uVar13 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
      do {
        uVar7 = uVar5;
        func_0x00010bf4f6a0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        uVar1 = uVar10;
        uVar2 = uVar11;
        uVar3 = uVar12;
        uVar4 = uVar13;
        if ((param_7 != 0) && (uVar7 = uVar6, func_0x00010bf529e0(), uVar9 < uVar7)) {
          uVar7 = uVar6;
          func_0x00010c0dfd40(uVar6,param_6,uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf20c00();
          _objc_release(uVar7);
          uVar1 = param_1;
          uVar2 = param_2;
          uVar3 = param_3;
          uVar4 = param_4;
        }
        param_4 = uVar4;
        param_3 = uVar3;
        param_2 = uVar2;
        param_1 = uVar1;
        uVar7 = uVar8;
        func_0x00010c295200(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c223d80(param_1,param_2,param_3,param_4);
        _objc_release(uVar7);
        _objc_release(uVar8);
        uVar9 = uVar9 + 1;
        uVar7 = uVar5;
        func_0x00010bf4f6a0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar7;
        func_0x00010bf529e0();
        _objc_release(uVar7);
      } while (uVar9 < uVar8);
    }
    _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar5);
    return;
  }
  return;
}



/* Entry: 10651bb1c; end: 10651bb3f; -[SCChatTableViewGenericComposerStackedContentHolderCell _setCurrentlyVisible:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651bb1c(long param_1,undefined8 param_2,undefined1 param_3)

{
  if (*(char *)(param_1 + _DAT_112749cd8) == '\x01') {
    *(undefined1 *)(param_1 + _DAT_112749ce4) = param_3;
  }
  return;
}



/* Entry: 10651bb40; end: 10651bb6f; -[SCChatTableViewGenericComposerStackedContentHolderCell thumbnailViewForMediaId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10651bb40(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112749cdc);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


