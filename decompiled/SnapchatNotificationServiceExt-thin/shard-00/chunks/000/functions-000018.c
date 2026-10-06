/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100065438; end: 1000655bf; -[SCNotifExtAvatar addImageToMutableNotificationContent:imageName:overlayIconName:] */

undefined8
FUN_100065438(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,long param_6,long param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((param_5 == 0) || (lVar2 = param_6, func_0x0001000713a0(), lVar2 == 0)) {
    param_3 = 0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIImage_1000d1f40;
    func_0x00010006fe00(PTR__OBJC_CLASS___UIImage_1000d1f40,param_4,param_6);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
    if (puVar3 == (undefined *)0x0) {
      param_3 = 0;
    }
    else {
      func_0x000100073b20(puVar3);
      func_0x000100071f20(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
      func_0x000100073b20(puVar3);
      func_0x000100071f20(param_2,puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar4);
      lVar2 = param_6;
      func_0x000100071be0(param_6);
      lVar5 = param_7;
      func_0x0001000713a0();
      if (lVar5 != 0) {
        func_0x00010006dce0(lVar2,param_4,&PTR____CFConstantStringClassReference_1000aa008);
        func_0x00010006dce0(lVar2,param_4,param_7);
      }
      lVar5 = lVar2;
      func_0x000100073de0(lVar2,param_4,&PTR____CFConstantStringClassReference_1000a4e88);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010006c400(param_3,param_4,puVar3,lVar5,param_7,param_5);
      _objc_release(lVar5);
      _objc_release(lVar2);
    }
    _objc_release(puVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  return param_3;
}



/* Entry: 1000655c0; end: 1000656c7; -[SCNotifExtAvatar _createImageAndAttachToNotification:key:overlayIconName:mutableNotificationContent:] */

undefined *
FUN_1000655c0(undefined *param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1000d2360;
    func_0x00010006db20(PTR_PTR_1000d2360,param_2,param_5,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined *)0x0) {
      puVar2 = param_1;
      func_0x00010006c9a0();
      puVar3 = puVar1;
      if (((ulong)puVar2 & 1) == 0) {
        puVar3 = param_1;
        func_0x00010006d2c0(param_1,param_2,puVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        if (puVar3 == (undefined *)0x0) goto LAB_10006569c;
      }
      ppuVar4 = &PTR____CFConstantStringClassReference_1000aa028;
      func_0x000100073e00(&PTR____CFConstantStringClassReference_1000aa028,param_2,param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010006c2c0(param_1,param_2,puVar3,ppuVar4,param_6);
      _objc_release(ppuVar4);
      _objc_release(puVar3);
      goto LAB_1000656a0;
    }
  }
LAB_10006569c:
  param_1 = (undefined *)0x0;
LAB_1000656a0:
  _objc_release(param_6);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 1000656c8; end: 10006589b; -[SCNotifExtAvatar _attachImageToNotification:withName:mutableNotificationContent:] */

bool FUN_1000656c8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar4 = PTR__OBJC_CLASS___NSURL_1000d2020;
  bVar1 = false;
  if ((param_3 != 0) && (param_4 != 0)) {
    lVar2 = param_3;
    _objc_retain(param_3);
    _SCCacheDirectory();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000100073dc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006f480(puVar4,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    lVar2 = param_3;
    _UIImagePNGRepresentation();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    if (lVar2 == 0) {
      bVar1 = false;
    }
    else {
      func_0x000100072880(lVar2,param_2,puVar4,1);
      func_0x00010006cfc0(param_1,param_2,param_4,puVar4);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = param_1 != 0;
      if (param_1 != 0) {
        puVar5 = PTR__OBJC_CLASS___NSMutableArray_1000d1c48;
        func_0x00010006dd80(PTR__OBJC_CLASS___NSMutableArray_1000d1c48);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = param_5;
        func_0x00010006df60();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar3 != 0) {
          lVar3 = param_5;
          func_0x00010006df60(param_5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010006db00(puVar5,param_2,lVar3);
          _objc_release(lVar3);
        }
        func_0x00010006dae0(puVar5,param_2,param_1);
        puVar6 = puVar5;
        func_0x00010006e800(puVar5);
        func_0x000100072b00(param_5,param_2,puVar6);
        _objc_release(puVar6);
        _objc_release(puVar5);
      }
      _objc_release(param_1);
    }
    _objc_release(lVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return bVar1;
}



/* Entry: 10006589c; end: 100065923; -[SCNotifExtAvatar _makeAttachmentWithIdentifier:fileURL:] */

void FUN_10006589c(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UNNotificationAttachment_1000d2250;
  func_0x00010006df40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(0);
  if (puVar1 == (undefined *)0x0) {
    func_0x000100071580(0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
  }
  else {
    _objc_retain(puVar1);
  }
  _objc_release(puVar1);
  _objc_release(0);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar1);
  return;
}



/* Entry: 100065924; end: 100065a87; -[SCNotifExtAvatar _padImageByPercentageHorizontally:] */

void FUN_100065924(double param_1,double param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  double dStack_68;
  double dStack_60;
  double dStack_58;
  
  _objc_retain(param_5);
  if (param_5 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    func_0x000100073b20(param_5);
    func_0x000100073b20(param_5);
    lVar1 = *(long *)(param_3 + 8);
    func_0x000100072140();
    dVar5 = (double)((float)lVar1 / 100.0) * 2.0 + 1.0;
    dVar6 = param_1 / dVar5;
    param_2 = param_2 / dVar5;
    puVar2 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1000d2368;
    _objc_alloc_init(PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1000d2368);
    func_0x0001000728a0(param_5);
    func_0x0001000735c0(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1000d2370;
    _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1000d2370);
    func_0x000100070bc0(param_1,param_2);
    puStack_90 = PTR___NSConcreteStackBlock_1000a00f0;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_100065a88;
    puStack_78 = &UNK_1000a36c0;
    _objc_retain(param_5);
    puVar4 = puVar3;
    lStack_70 = param_5;
    dStack_68 = (param_1 - dVar6) * 0.5;
    dStack_60 = dVar6;
    dStack_58 = param_2;
    func_0x00010006fe40(puVar3,param_4,&puStack_90);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lStack_70);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar4);
  return;
}



/* Entry: 100065a88; end: 100065a9f;  */

void FUN_100065a88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006f130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (*(undefined8 *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x30),
             *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x20),
             PTR_s_drawInRect__1000d0440);
  return;
}



/* Entry: 100065aa0; end: 100065acf; -[SCNotifExtAvatar _isUserOnIOS14] */

undefined8 FUN_100065aa0(void)

{
  return 0;
}



/* Entry: 100065ad0; end: 100065c43; -[SCNotifExtAvatar _logGrapheneExtensionAvatarRequestSuccessLatency:notificationType:avatarType:fromCache:is3D:] */

void FUN_100065ad0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_4);
  func_0x000100065aa8();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  ppuVar3 = &PTR____CFConstantStringClassReference_1000aa2a8;
  func_0x000100070720();
  puVar5 = puVar2;
  func_0x00010006db80((double)param_3,*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_4);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(puVar5);
  func_0x000100065aa8();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar3);
  puVar4 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(puVar1 + 0x20));
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar2 + 0x30,0);
  _objc_storeStrong(puVar2 + 0x28,0);
  _objc_storeStrong(puVar2 + 0x20,0);
  _objc_storeStrong(puVar2 + 0x18,0);
  _objc_storeStrong(puVar2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar2 + 8,0);
  return;
}



/* Entry: 100065c44; end: 100065db3; -[SCNotifExtAvatar _logGrapheneExtensionAvatarRequestFailureWithNotifType:avatarType:fromCache:is3D:] */

void FUN_100065c44(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_3);
  func_0x000100065aa8();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  func_0x00010006ecc0(PTR__OBJC_CLASS___NSDictionary_1000d1d40);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  puVar2 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x30,0);
  _objc_storeStrong(puVar1 + 0x28,0);
  _objc_storeStrong(puVar1 + 0x20,0);
  _objc_storeStrong(puVar1 + 0x18,0);
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar1 + 8,0);
  return;
}



/* Entry: 100065db4; end: 100065e13; -[SCNotifExtAvatar .cxx_destruct] */

void FUN_100065db4(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100065e14; end: 10006607f; +[SCNotifExtOverlayAdder addOverlay:toImage:] */

void FUN_100065e14(double param_1,double param_2,long param_3,undefined8 param_4,long param_5,
                  undefined *param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (((param_6 == (undefined *)0x0) || (func_0x000100073b20(param_6), param_1 <= 0.0)) ||
     (func_0x000100073b20(param_6), param_2 <= 0.0)) {
    puVar5 = (undefined *)0x0;
  }
  else {
    lVar1 = param_5;
    func_0x0001000713a0();
    puVar5 = param_6;
    if (lVar1 == 0) {
      _objc_retain(param_6);
    }
    else {
      lVar1 = param_3;
      func_0x00010006c680(param_3,param_4,param_5);
      _objc_retainAutoreleasedReturnValue();
      if (((lVar1 == 0) || (func_0x000100073b20(lVar1), param_1 <= 0.0)) ||
         (func_0x000100073b20(lVar1), param_2 <= 0.0)) {
        _objc_retain(param_6);
      }
      else {
        func_0x000100073b20(param_6);
        dVar6 = param_1;
        dVar9 = param_2;
        func_0x000100073b20(lVar1);
        dVar7 = dVar6;
        func_0x00010006d4e0(param_3,param_4,param_5);
        func_0x00010006d2a0(dVar6,dVar9,dVar7,param_1,param_2,param_3);
        lVar2 = param_3;
        func_0x00010006d280(param_3,param_4,param_5);
        dVar7 = dVar6;
        func_0x00010006c9c0(dVar6,param_1,param_3,param_4,lVar2);
        dVar8 = dVar9;
        func_0x00010006d880(dVar9,param_2,param_3,param_4,lVar2);
        puVar3 = PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1000d2368;
        _objc_alloc_init(PTR__OBJC_CLASS___UIGraphicsImageRendererFormat_1000d2368);
        func_0x0001000728a0(param_6);
        func_0x0001000735c0(puVar3);
        puVar4 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1000d2370;
        _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1000d2370);
        func_0x000100070bc0(param_1,param_2);
        puStack_d0 = PTR___NSConcreteStackBlock_1000a00f0;
        uStack_c8 = 0xc2000000;
        pcStack_c0 = FUN_100066080;
        puStack_b8 = &UNK_1000a3768;
        _objc_retain(param_6);
        puStack_b0 = param_6;
        dStack_a0 = param_1;
        dStack_98 = param_2;
        _objc_retain(lVar1);
        puVar5 = puVar4;
        lStack_a8 = lVar1;
        dStack_90 = dVar7;
        dStack_88 = dVar8;
        dStack_80 = dVar6;
        dStack_78 = dVar9;
        func_0x00010006fe40(puVar4,param_4,&puStack_d0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lStack_a8);
        _objc_release(puStack_b0);
        _objc_release(puVar4);
        _objc_release(puVar3);
      }
      _objc_release(lVar1);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar5);
  return;
}



/* Entry: 100066080; end: 1000660bb;  */

/* WARNING: Possible PIC construction at 0x0001000660a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000660a4) */

void FUN_100066080(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006f130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (0,0,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x20),PTR_s_drawInRect__1000d0440);
  return;
}



/* Entry: 1000660bc; end: 1000660e3; +[SCNotifExtOverlayAdder _overlaySize:scaleOfOverlay:backgroundImageSize:] */

undefined1  [16]
FUN_1000660bc(double param_1,double param_2,double param_3,double param_4,double param_5)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  dVar2 = (param_1 / param_2) * param_3 * param_5;
  dVar1 = param_3 * param_5;
  if (param_4 <= param_5) {
    dVar2 = param_3 * param_4;
    dVar1 = (param_2 / param_1) * param_3 * param_4;
  }
  auVar3._8_8_ = dVar1;
  auVar3._0_8_ = dVar2;
  return auVar3;
}



/* Entry: 1000660e4; end: 10006610b; +[SCNotifExtOverlayAdder _leftMarginForOverlayOfWidth:positionOfOverlay:backgroundImageWidth:] */

double FUN_1000660e4(double param_1,double param_2,double param_3,undefined8 param_4,
                    undefined8 param_5,long param_6)

{
  if (param_6 == 0) {
    param_3 = param_2 - param_1;
  }
  else if (param_6 == 1) {
    param_3 = (param_2 - param_1) * 0.5;
  }
  return param_3;
}



/* Entry: 10006610c; end: 100066133; +[SCNotifExtOverlayAdder _topMarginForOverlayOfHeight:positionOfOverlay:backgroundImageHeight:] */

double FUN_10006610c(double param_1,double param_2,double param_3,undefined8 param_4,
                    undefined8 param_5,long param_6)

{
  if (param_6 == 0) {
    param_3 = param_2 - param_1;
  }
  else if (param_6 == 1) {
    param_3 = (param_2 - param_1) * 0.5;
  }
  return param_3;
}



/* Entry: 100066134; end: 10006613b; +[SCNotifExtOverlayAdder _overlayPosition:] */

undefined8 FUN_100066134(void)

{
  return 0;
}



/* Entry: 10006613c; end: 100066147; +[SCNotifExtOverlayAdder _scaleOfOverlay:] */

undefined8 FUN_10006613c(void)

{
  return 0x3fd5555555555555;
}



/* Entry: 100066148; end: 1000661a7; +[SCNotifExtOverlayAdder _getOverlayImage:] */

void FUN_100066148(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x0001000713a0();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIImage_1000d1f40;
    func_0x00010006fe00(PTR__OBJC_CLASS___UIImage_1000d1f40,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar2);
  return;
}



/* Entry: 1000661a8; end: 100066497;  */

void FUN_1000661a8(undefined *param_1,long param_2,ulong param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar2 = param_1;
  func_0x0001000713a0();
  puVar10 = param_1;
  if (puVar2 == (undefined *)0x0) {
    _objc_retain(param_1);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSRegularExpression_1000d2378;
    func_0x000100072580();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001000713a0(param_1);
    puVar3 = puVar2;
    func_0x00010006f520();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined *)0x0) {
      _objc_retain(param_1);
    }
    else {
      func_0x000100072420(puVar3);
      puVar4 = param_1;
      func_0x000100073fc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000100072420(puVar3);
      puVar5 = param_1;
      func_0x000100073fc0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x0001000713a0();
      if (puVar6 == (undefined *)0x0) {
        _objc_retain(param_1);
      }
      else {
        lVar7 = param_2;
        func_0x00010006e240();
        lVar8 = param_2;
        func_0x00010006e280(param_2);
        func_0x00010006e2a0(param_2);
        FUN_100066498(lVar7,lVar8,puVar5,0,puVar4);
        lVar7 = param_2;
        func_0x00010006e2e0();
        puVar6 = PTR__OBJC_CLASS___NSMutableArray_1000d1c48;
        ppuVar1 = &PTR____CFConstantStringClassReference_1000aa348;
        if ((int)lVar7 == 0) {
          ppuVar1 = &PTR____CFConstantStringClassReference_1000aa328;
        }
        _objc_retain(ppuVar1);
        func_0x00010006dd80();
        _objc_retainAutoreleasedReturnValue();
        if ((param_3 & 1) == 0) {
          func_0x00010006dae0(puVar6);
        }
        func_0x00010006dae0(puVar6);
        lVar7 = param_2;
        func_0x00010006e200();
        if (lVar7 == 3) {
          puVar11 = PTR__OBJC_CLASS___NSString_1000d1d68;
          func_0x000100072860();
          _objc_retainAutoreleasedReturnValue();
          if (puVar11 != (undefined *)0x0) {
            func_0x00010006dae0(puVar6);
          }
        }
        else {
          puVar11 = (undefined *)0x0;
        }
        puVar10 = PTR__OBJC_CLASS___NSString_1000d1d68;
        puVar9 = puVar6;
        func_0x00010006e5e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x000100072860(puVar10);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar1);
        _objc_release(puVar9);
        _objc_release(puVar11);
        _objc_release(puVar6);
      }
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar10);
  return;
}



/* Entry: 100066498; end: 1000665cb;  */

undefined8
FUN_100066498(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x0001000713a0();
  puVar1 = PTR__OBJC_CLASS___NSString_1000d1d68;
  func_0x000100072860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(param_4);
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010006bf80();
  puVar3 = puVar1;
  func_0x0001000713c0(puVar1);
  FUN_1000665cc(puVar2,puVar3,0);
  if (param_1 * 10000.0 <=
      (float)(uint)((int)puVar2 + (int)(((ulong)puVar2 & 0xffffffff) / 10000) * -10000)) {
    param_3 = param_2;
  }
  _objc_release(puVar1);
  _objc_release(param_5);
  return param_3;
}



/* Entry: 1000665cc; end: 1000666ef;  */

uint FUN_1000665cc(long param_1,ulong param_2,uint param_3)

{
  byte *pbVar1;
  int *piVar2;
  ulong uVar3;
  uint uVar4;
  int *piVar5;
  
  piVar2 = (int *)(param_2 & 0xfffffffffffffffc);
  _malloc();
  _memcpy();
  if (3 < param_2) {
    uVar3 = param_2 >> 2;
    piVar5 = piVar2;
    do {
      param_3 = ((uint)(*piVar5 * -0x3361d2af) >> 0x11 | *piVar5 * 0x16a88000) * 0x1b873593 ^
                param_3;
      param_3 = (param_3 >> 0x13 | param_3 << 0xd) * 5 + 0xe6546b64;
      uVar3 = uVar3 - 1;
      piVar5 = piVar5 + 1;
    } while (uVar3 != 0);
  }
  _free(piVar2);
  uVar4 = 0;
  pbVar1 = (byte *)(param_1 + (long)(param_2 & 0xfffffffffffffffc));
  uVar3 = param_2 & 3;
  if (uVar3 < 2) {
    if (uVar3 == 0) goto LAB_1000666b0;
  }
  else {
    if (uVar3 != 2) {
      uVar4 = (uint)pbVar1[2] << 0x10;
    }
    uVar4 = uVar4 | (uint)pbVar1[1] << 8;
  }
  param_3 = ((uVar4 ^ *pbVar1) * -0x3361d2af >> 0x11 | (uVar4 ^ *pbVar1) * 0x16a88000) * 0x1b873593
            ^ param_3;
LAB_1000666b0:
  param_3 = param_3 ^ (uint)param_2;
  uVar4 = (param_3 ^ param_3 >> 0x10) * -0x7a143595;
  uVar4 = (uVar4 ^ uVar4 >> 0xd) * -0x3d4d51cb;
  return uVar4 ^ uVar4 >> 0x10;
}



/* Entry: 1000666f0; end: 1000667d3; +[BMCompactAvatarId descriptor] */

void FUN_1000666f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam00000001000e9ef0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8;
    func_0x00010006dc00(PTR__OBJC_CLASS___GPBDescriptor_1000d1ed8,param_2,&PTR_PTR_1000dcd10,
                        &PTR____CFConstantStringClassReference_1000aa448,
                        &PTR_s_snapchat_bitmoji_avatar_1000e82a0,&PTR_s_id_p_1000e82b8,3,0x18,0x1c);
    puRam00000001000e9ef0 = puVar1;
  }
  return;
}



/* Entry: 1000667d4; end: 1000667e3;  */

bool FUN_1000667d4(uint param_1)

{
  return (param_1 & 0xfffffffa) == 0;
}



/* Entry: 1000667e4; end: 1000668b3;  */

void FUN_1000667e4(long param_1)

{
  long lVar1;
  long lVar2;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010006e840();
  if (lVar1 != 0) {
    lVar1 = param_1;
    func_0x00010006e840();
    lVar2 = param_1;
    if (lVar1 == 3) {
      FUN_1000668b4(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_100066898;
    }
    lVar1 = param_1;
    func_0x00010006e840();
    if (lVar1 == 2) {
      FUN_100066be8(param_1);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_100066898;
    }
    lVar1 = param_1;
    func_0x00010006e840();
    if (lVar1 == 1) {
      lVar1 = param_1;
      func_0x00010006f540(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      FUN_100066e30();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      goto LAB_100066898;
    }
  }
  lVar2 = 0;
LAB_100066898:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(lVar2);
  return;
}



/* Entry: 1000668b4; end: 100066be7;  */

void FUN_1000668b4(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010006f540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_100066f6c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x000100071320(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  FUN_100066f6c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x000100072000(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  FUN_100066f6c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010006f540();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  FUN_10006705c();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x000100071320();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar2;
  FUN_10006705c();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x000100072000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar8 = uVar2;
  FUN_10006705c();
  _objc_release(uVar2);
  dVar19 = 150.0;
  dVar9 = dVar19;
  dVar15 = dVar19;
  FUN_100067118(0x4062c00000000000,0x4062c00000000000,0x3fe8a3d70a3d70a4,uVar3,uVar6,0);
  dVar10 = dVar19;
  dVar16 = dVar19;
  FUN_100067118(0x4062c00000000000,0x4062c00000000000,0x3fe8a3d70a3d70a4,uVar4,uVar7,1);
  dVar17 = dVar19;
  FUN_100067118(0x4062c00000000000,0x4062c00000000000,0x3fe8a3d70a3d70a4,uVar5,uVar8,1);
  dVar11 = (150.0 - dVar15) + 9.0;
  if ((int)uVar6 == 0) {
    dVar11 = 150.0 - dVar15;
  }
  dVar12 = (150.0 - dVar16) + -7.5;
  bVar1 = (int)uVar7 == 0;
  dVar13 = dVar12 + 9.0;
  if (bVar1) {
    dVar13 = dVar12;
  }
  uVar2 = 0xc01dffffffffffff;
  if (bVar1) {
    uVar2 = 0xc036800000000000;
  }
  dVar14 = (150.0 - dVar19) + 22.5;
  dVar18 = (150.0 - dVar17) + -7.5;
  dVar20 = dVar14 + -15.0;
  dVar12 = dVar18 + 9.0;
  if ((int)uVar8 == 0) {
    dVar20 = dVar14;
    dVar12 = dVar18;
  }
  _UIGraphicsBeginImageContextWithOptions(0x4062c00000000000,0x4062c00000000000,0,0);
  func_0x00010006f140(uVar2,dVar13,dVar10,dVar16,0x3fe3333333333333,uVar4);
  func_0x00010006f140(dVar20,dVar12,dVar19,dVar17,0x3fe3333333333333,uVar5);
  uVar2 = uVar3;
  func_0x00010006f120((150.0 - dVar9) * 0.5,dVar11,dVar9,dVar15,uVar3);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
  uVar6 = uVar2;
  func_0x0001000671c0(0x4062c00000000000,0x4062c00000000000,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar6);
  return;
}



/* Entry: 100066be8; end: 100066e2f;  */

void FUN_100066be8(undefined8 param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010006f540(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_100066f6c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x000100071320(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  FUN_100066f6c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x00010006f540();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  FUN_10006705c();
  _objc_release(uVar2);
  uVar2 = param_1;
  func_0x000100071320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar6 = uVar2;
  FUN_10006705c();
  _objc_release(uVar2);
  dVar11 = 150.0;
  dVar7 = dVar11;
  dVar9 = dVar11;
  FUN_100067118(0x4062c00000000000,0x4062c00000000000,0x3febd70a3d70a3d7,uVar3,uVar5,0);
  dVar10 = dVar11;
  FUN_100067118(0x4062c00000000000,0x4062c00000000000,0x3febd70a3d70a3d7,uVar4,uVar6,1);
  dVar8 = (150.0 - dVar9) + 9.0;
  if ((int)uVar5 == 0) {
    dVar8 = 150.0 - dVar9;
  }
  bVar1 = (int)uVar6 == 0;
  dVar12 = (150.0 - dVar10) + 9.0;
  if (bVar1) {
    dVar12 = 150.0 - dVar10;
  }
  uVar2 = 0xc030800000000000;
  if (bVar1) {
    uVar2 = 0xc03f800000000000;
  }
  _UIGraphicsBeginImageContextWithOptions(0x4062c00000000000,0x4062c00000000000,0,0);
  func_0x00010006f140(uVar2,dVar12,dVar11,dVar10,0x3fe3333333333333,uVar4);
  uVar2 = uVar3;
  func_0x00010006f120((150.0 - dVar7) * 0.5 + 15.0,dVar8,dVar7,dVar9,uVar3);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
  uVar5 = uVar2;
  func_0x0001000671c0(0x4062c00000000000,0x4062c00000000000,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar5);
  return;
}



/* Entry: 100066e30; end: 100066f6b;  */

void FUN_100066e30(double param_1,double param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  
  _objc_retain();
  uVar1 = param_3;
  FUN_100066f6c(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  FUN_10006705c();
  _objc_release(param_3);
  if ((int)uVar2 == 0) {
    func_0x000100073b20(uVar1);
    uVar2 = uVar1;
    func_0x0001000671c0(uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain();
    func_0x000100073b20(uVar1);
    func_0x000100073b20(uVar1);
    _objc_release(uVar1);
    dVar4 = (param_1 / param_2) * 138.0;
    _UIGraphicsBeginImageContextWithOptions(0x4062c00000000000,0x4062c00000000000,0,0);
    uVar3 = uVar1;
    func_0x00010006f120((150.0 - dVar4) * 0.5,0x4035000000000000,dVar4,0x4061400000000000,uVar1);
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    _UIGraphicsEndImageContext();
    uVar2 = uVar3;
    func_0x0001000671c0(0x4062c00000000000,0x4062c00000000000,uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar2);
  return;
}



/* Entry: 100066f6c; end: 10006705b;  */

void FUN_100066f6c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_1000672ac;
  uStack_30 = 0x1000672bc;
  uStack_28 = 0;
  func_0x000100071940(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar1);
  return;
}



/* Entry: 10006705c; end: 100067117;  */

undefined1 FUN_10006705c(undefined8 param_1)

{
  undefined1 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x000100071940(param_1);
  uVar1 = *(undefined1 *)(puStack_38 + 3);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 100067118; end: 1000672ab;  */

undefined1  [16]
FUN_100067118(double param_1,double param_2,double param_3,undefined8 param_4,int param_5,
             int param_6)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  if (param_5 == 0) {
    dVar1 = param_1 * 0.92 * param_3;
    dVar2 = param_2 * 0.92 * param_3;
    if (param_6 == 0) {
      dVar1 = param_1 * 0.92;
      dVar2 = param_2 * 0.92;
    }
  }
  else {
    dVar1 = param_2;
    _objc_retain();
    func_0x000100073b20(param_4);
    func_0x000100073b20(param_4);
    _objc_release(param_4);
    dVar2 = param_2 * 0.92 * param_3;
    if (param_6 == 0) {
      dVar2 = param_2 * 0.92;
    }
    dVar1 = dVar2 * (param_1 / dVar1);
  }
  auVar3._8_8_ = dVar2;
  auVar3._0_8_ = dVar1;
  return auVar3;
}



/* Entry: 1000672ac; end: 1000672c3;  */

void FUN_1000672ac(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1000672c4; end: 100067333;  */

void FUN_1000672c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(uVar1);
  return;
}



/* Entry: 100067334; end: 10006734b;  */

void FUN_100067334(void)

{
  return;
}



/* Entry: 10006734c; end: 1000673af; +[SCExtensionGroupAvatarBitmoji bitmojiWithImage:] */

void FUN_10006734c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1000d2288;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000100071060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar2);
  return;
}



/* Entry: 1000673b0; end: 10006741b; +[SCExtensionGroupAvatarBitmoji silhouetteWithImage:] */

void FUN_1000673b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1000d2288;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000100071060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar2);
  return;
}



/* Entry: 10006741c; end: 10006743f; -[SCExtensionGroupAvatarBitmoji copyWithZone:] */

undefined8 FUN_10006741c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 100067440; end: 1000674b7; -[SCExtensionGroupAvatarBitmoji hash] */

void FUN_100067440(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_1000a0110;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010006fd00();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010006fd00();
  uStack_30 = uVar2;
  _SCRemodelHash(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1000d2728;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1000d07d0);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 1000674b8; end: 1000674fb; -[SCExtensionGroupAvatarBitmoji internalInit] */

void FUN_1000674b8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1000d2728;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 1000674fc; end: 1000675b3; -[SCExtensionGroupAvatarBitmoji isEqual:] */

long FUN_1000674fc(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10006758c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_100067598;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x0001000710e0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x0001000710e0();
          goto LAB_100067598;
        }
        goto LAB_10006758c;
      }
    }
    lVar3 = 0;
  }
LAB_100067598:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1000675b4; end: 100067637; -[SCExtensionGroupAvatarBitmoji matchBitmoji:silhouette:] */

void FUN_1000675b4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_10006761c;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_10006761c;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10006761c:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 100067638; end: 100067667; -[SCExtensionGroupAvatarBitmoji .cxx_destruct] */

void FUN_100067638(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 0x10,0);
  return;
}



/* Entry: 100067668; end: 1000676e7; -[SCStoryViewMilestoneNotificationModifier initWithProcessingScope:] */

undefined1 * FUN_100067668(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d2730;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000676e8; end: 10006796f; -[SCStoryViewMilestoneNotificationModifier didReceiveNotificationRequest:withModifierCallback:suppressionEnabled:] */

void FUN_1000676e8(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100071be0();
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  *(ulong *)(param_1 + 0x10) = uVar2;
  _objc_release(uVar10);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = uVar2;
  func_0x000100072060(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1000d1d68;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
  uVar6 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar5);
  uVar1 = uVar4;
  if ((uVar6 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  uVar6 = uVar2;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1000d1d68;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
  uVar7 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar5);
  uVar4 = uVar6;
  if ((uVar7 & 1) == 0) {
    uVar4 = 0;
  }
  _objc_retain(uVar4);
  _objc_release(uVar6);
  uVar7 = uVar2;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1000d1d68;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
  uVar8 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar5);
  uVar6 = uVar7;
  if ((uVar8 & 1) == 0) {
    uVar6 = 0;
  }
  _objc_retain(uVar6);
  _objc_release(uVar7);
  uVar7 = uVar4;
  func_0x0001000713a0();
  if (uVar7 != 0) {
    func_0x000100071100(&PTR____CFConstantStringClassReference_1000aa4e8);
  }
  func_0x00010006d400(param_1);
  func_0x000100073660(*(undefined8 *)(param_1 + 0x10));
  lVar9 = param_1;
  func_0x00010006d100(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100073760(*(undefined8 *)(param_1 + 0x10));
  _objc_release(lVar9);
  lVar9 = param_1;
  func_0x00010006d000(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar1);
  func_0x000100072ba0(*(undefined8 *)(param_1 + 0x10));
  _objc_release(lVar9);
  func_0x0001000720a0(param_4);
  _objc_release(param_4);
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(uVar2);
  return;
}



/* Entry: 100067970; end: 100067af3; -[SCStoryViewMilestoneNotificationModifier _replaceNotificationWithSameKey:] */

void FUN_100067970(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  uVar1 = 0;
  _dispatch_semaphore_create();
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_100067af4;
  uStack_50 = 0x100067b04;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1000d1c48;
  _objc_opt_new();
  uVar3 = *(undefined8 *)(param_1 + 8);
  puStack_48 = puVar2;
  func_0x000100071d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  _objc_retain(uVar1);
  func_0x00010006f6e0(uVar3);
  _dispatch_semaphore_wait(uVar1,0xffffffffffffffff);
  lVar4 = puStack_68[5];
  func_0x00010006e840();
  if (lVar4 != 0) {
    uVar5 = *(undefined8 *)(param_1 + 8);
    func_0x000100071d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001000725c0();
    _objc_release(uVar5);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(puStack_48);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 100067af4; end: 100067b0b;  */

void FUN_100067af4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 100067b0c; end: 100067ce3;  */

void FUN_100067b0c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010006e860();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar10 = *(undefined8 *)(lVar9 * 8);
      uVar3 = uVar10;
      func_0x0001000726a0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar3;
      func_0x00010006e720();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar11;
      func_0x000100074620();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x000100072060();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar11);
      _objc_release(uVar3);
      uVar3 = uVar5;
      func_0x000100071100();
      if ((int)uVar3 != 0) {
        uVar11 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
        func_0x0001000726a0(uVar10);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar10;
        func_0x00010006fda0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010006dae0(uVar11);
        _objc_release(uVar3);
        _objc_release(uVar10);
      }
      _objc_release(uVar5);
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    lVar2 = param_2;
    func_0x00010006e860();
  }
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x28));
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  ppuVar6 = &PTR____CFConstantStringClassReference_1000aa508;
  _SCLocalizedStringFromTable
            (&PTR____CFConstantStringClassReference_1000aa508,
             &PTR____CFConstantStringClassReference_1000aa528,0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___SCNotifExtLocalizer_1000d1c20;
  func_0x000100073ee0(PTR__OBJC_CLASS___SCNotifExtLocalizer_1000d1c20);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar6);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar7);
  return;
}



/* Entry: 100067ce4; end: 100067d47; -[SCStoryViewMilestoneNotificationModifier _makeTitle] */

void FUN_100067ce4(void)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_1000aa508;
  _SCLocalizedStringFromTable
            (&PTR____CFConstantStringClassReference_1000aa508,
             &PTR____CFConstantStringClassReference_1000aa528,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___SCNotifExtLocalizer_1000d1c20;
  func_0x000100073ee0(PTR__OBJC_CLASS___SCNotifExtLocalizer_1000d1c20);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar2);
  return;
}



/* Entry: 100067d48; end: 100067e6f; -[SCStoryViewMilestoneNotificationModifier _makeBodyWithViewCount:customizedMessage:isSpotlight:] */

void FUN_100067d48(undefined8 param_1,undefined8 param_2,long param_3,undefined **param_4,
                  int param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_5 == 0) {
    if (param_3 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_1000aa568;
LAB_100067e08:
      _SCLocalizedStringFromTable(ppuVar2,&PTR____CFConstantStringClassReference_1000aa528,0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_100067e24;
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_1000aa548;
  }
  else {
    if (param_4 != (undefined **)0x0) {
      _objc_retain(param_4);
      ppuVar2 = param_4;
      goto LAB_100067e24;
    }
    if (param_3 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_1000aa5a8;
      goto LAB_100067e08;
    }
    ppuVar1 = &PTR____CFConstantStringClassReference_1000aa588;
  }
  _SCLocalizedStringFromTable(ppuVar1,&PTR____CFConstantStringClassReference_1000aa528,0);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1000d1d68;
  func_0x000100072860(PTR__OBJC_CLASS___NSString_1000d1d68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
LAB_100067e24:
  puVar3 = PTR__OBJC_CLASS___SCNotifExtLocalizer_1000d1c20;
  func_0x000100073ee0(PTR__OBJC_CLASS___SCNotifExtLocalizer_1000d1c20);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar3);
  return;
}



/* Entry: 100067e70; end: 100067e97; -[SCStoryViewMilestoneNotificationModifier bestAttemptContent] */

void FUN_100067e70(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar1);
  return;
}



/* Entry: 100067e98; end: 100067ec7; -[SCStoryViewMilestoneNotificationModifier .cxx_destruct] */

void FUN_100067e98(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100067ec8; end: 100067f3b; -[SCStoryViewMilestoneNotificationModifierProvider initWithProcessingScope:] */

undefined1 * FUN_100067ec8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d2738;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100067f3c; end: 100067f6b; -[SCStoryViewMilestoneNotificationModifierProvider getModifier:] */

void FUN_100067f3c(void)

{
  _objc_alloc(PTR_PTR_1000d2388);
  func_0x0001000707c0();
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 100067f6c; end: 100067f73; -[SCStoryViewMilestoneNotificationModifierProvider getTaskHandlers:] */

undefined8 FUN_100067f6c(void)

{
  return 0;
}



/* Entry: 100067f74; end: 100067f7b; -[SCStoryViewMilestoneNotificationModifierProvider getBadgeCountProviders] */

undefined8 FUN_100067f74(void)

{
  return 0;
}



/* Entry: 100067f7c; end: 100067f87; -[SCStoryViewMilestoneNotificationModifierProvider .cxx_destruct] */

void FUN_100067f7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100067f88; end: 100067ffb; -[SCTIVNotificationModifierProvider initWithProcessingScope:] */

undefined1 * FUN_100067f88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d2740;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100067ffc; end: 100068003; -[SCTIVNotificationModifierProvider getModifier:] */

undefined8 FUN_100067ffc(void)

{
  return 0;
}



/* Entry: 100068004; end: 10006809b; -[SCTIVNotificationModifierProvider getTaskHandlers:] */

undefined * FUN_100068004(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar1 = PTR_PTR_1000d2390;
  _objc_alloc();
  func_0x0001000707c0();
  puVar2 = PTR__OBJC_CLASS___NSArray_1000d1d38;
  puStack_30 = puVar1;
  func_0x00010006de40(PTR__OBJC_CLASS___NSArray_1000d1d38,param_2,&puStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  return (undefined *)0x0;
}



/* Entry: 10006809c; end: 1000680a3; -[SCTIVNotificationModifierProvider getBadgeCountProviders] */

undefined8 FUN_10006809c(void)

{
  return 0;
}



/* Entry: 1000680a4; end: 100068153; -[SCTIVNotificationModifierProvider getSDNTaskHandlers:] */

void FUN_1000680a4(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1000a0110;
  func_0x00010006f360();
  if ((int)param_3 == 9) {
    param_3 = PTR_PTR_1000d2398;
    _objc_alloc();
    func_0x0001000707c0();
    puVar2 = PTR__OBJC_CLASS___NSArray_1000d1d38;
    func_0x00010006de40(PTR__OBJC_CLASS___NSArray_1000d1d38);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar2);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_3 + 8,0);
  return;
}



/* Entry: 100068154; end: 10006815f; -[SCTIVNotificationModifierProvider .cxx_destruct] */

void FUN_100068154(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100068160; end: 1000681d3; -[SCTIVNotificationTaskHandler initWithProcessingScope:] */

undefined1 * FUN_100068160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d2748;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000681d4; end: 1000683d7; -[SCTIVNotificationTaskHandler didReceiveNotificationRequest:withCompletionHandler:] */

void FUN_1000681d4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000100074120();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100074180();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x00010006e360();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar6 == 0) {
    lVar3 = param_3;
    func_0x00010006e720();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x000100074620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar4;
    func_0x000100072060(lVar4,param_2,&PTR____CFConstantStringClassReference_1000aa5e8);
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
    else {
      puVar5 = PTR__OBJC_CLASS___SCExtensionSharedFile_1000d1d98;
      _objc_alloc(PTR__OBJC_CLASS___SCExtensionSharedFile_1000d1d98);
      uVar6 = *(undefined8 *)(param_1 + 8);
      func_0x000100074680(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar6;
      func_0x0001000745e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x000100070000(puVar5,param_2,uVar2,&PTR____CFConstantStringClassReference_1000aa5c8,0);
      _objc_release(uVar2);
      _objc_release(uVar6);
      puStack_78 = PTR___NSConcreteStackBlock_1000a00f0;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_1000683d8;
      puStack_60 = &UNK_1000a1fb8;
      _objc_retain(lVar3);
      uStack_80 = 0;
      lStack_58 = lVar3;
      func_0x000100071b60(puVar5,param_2,&puStack_78,&uStack_80);
      uVar2 = uStack_80;
      _objc_retain(uStack_80);
      (**(code **)(param_4 + 0x10))(param_4);
      _objc_release(lStack_58);
      _objc_release(uVar2);
      _objc_release(puVar5);
    }
    _objc_release(lVar3);
    _objc_release(lVar4);
  }
  else {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1000683d8; end: 1000684f7;  */

void FUN_1000683d8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x0001000713a0();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1000d1da0;
    _objc_alloc();
    func_0x00010006ffa0();
    func_0x000100073560();
    puVar3 = puVar2;
    func_0x00010006eb40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1000d1c48;
    _objc_opt_class(PTR__OBJC_CLASS___NSMutableArray_1000d1c48);
    puVar5 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar4);
    puVar4 = puVar3;
    if (((ulong)puVar5 & 1) == 0) {
      puVar4 = (undefined *)0x0;
    }
    _objc_retain(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (puVar4 != (undefined *)0x0) goto LAB_100068498;
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1000d1c48;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1000d1c48);
LAB_100068498:
  func_0x00010006dae0(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSKeyedArchiver_1000d1db0;
  func_0x00010006dd60(PTR__OBJC_CLASS___NSKeyedArchiver_1000d1db0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar4);
  return;
}



/* Entry: 1000684f8; end: 100068503; -[SCTIVNotificationTaskHandler .cxx_destruct] */

void FUN_1000684f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100068504; end: 100068577; -[SCTIVSDNTaskHandler initWithProcessingScope:] */

undefined1 * FUN_100068504(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d2750;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100068578; end: 1000687ab; -[SCTIVSDNTaskHandler handleNotification:notificationType:notificationId:completion:] */

void FUN_100068578(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010006f340();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010006f360();
  _objc_release(lVar1);
  if ((int)lVar2 == 9) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x000100074120();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x000100074180();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar4;
    func_0x00010006e360();
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((int)uVar7 == 0) {
      lVar1 = param_3;
      func_0x00010006f340();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x000100074300();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x000100071300();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 == 0) {
        (**(code **)(param_6 + 0x10))(param_6,0);
      }
      else {
        puVar6 = PTR__OBJC_CLASS___SCExtensionSharedFile_1000d1d98;
        _objc_alloc(PTR__OBJC_CLASS___SCExtensionSharedFile_1000d1d98);
        uVar7 = *(undefined8 *)(param_1 + 8);
        func_0x000100074680(uVar7);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar7;
        func_0x0001000745e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x000100070000(puVar6);
        _objc_release(uVar4);
        _objc_release(uVar7);
        _objc_retain(lVar5);
        func_0x000100071b60(puVar6);
        _objc_retain(0);
        (**(code **)(param_6 + 0x10))(param_6,1);
        _objc_release(lVar5);
        _objc_release(0);
        _objc_release(puVar6);
      }
      _objc_release(lVar5);
      _objc_release(lVar2);
      _objc_release(lVar1);
      goto LAB_100068780;
    }
  }
  (**(code **)(param_6 + 0x10))(param_6,0);
LAB_100068780:
  _objc_release(param_6);
  _objc_release(param_3);
  return;
}



/* Entry: 1000687ac; end: 1000688d3;  */

void FUN_1000687ac(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x0001000713a0();
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1000d1da0;
    _objc_alloc();
    func_0x00010006ffa0();
    func_0x000100073560();
    puVar3 = puVar2;
    func_0x00010006eb40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_1000d1c48;
    _objc_opt_class(PTR__OBJC_CLASS___NSMutableArray_1000d1c48);
    puVar5 = puVar3;
    _objc_opt_isKindOfClass(puVar3,puVar4);
    puVar4 = puVar3;
    if (((ulong)puVar5 & 1) == 0) {
      puVar4 = (undefined *)0x0;
    }
    _objc_retain(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    if (puVar4 != (undefined *)0x0) goto LAB_10006886c;
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1000d1c48;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1000d1c48);
LAB_10006886c:
  func_0x00010006e840(puVar3);
  func_0x00010006dae0(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSKeyedArchiver_1000d1db0;
  func_0x00010006dd60(PTR__OBJC_CLASS___NSKeyedArchiver_1000d1db0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar4);
  return;
}



/* Entry: 1000688d4; end: 1000688df; -[SCTIVSDNTaskHandler identifier] */

undefined ** FUN_1000688d4(void)

{
  return &PTR____CFConstantStringClassReference_1000aa628;
}



/* Entry: 1000688e0; end: 1000688eb; -[SCTIVSDNTaskHandler .cxx_destruct] */

void FUN_1000688e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 1000688ec; end: 1000688f3; -[SCTimeboundCompletion initWithCompletion:timeout:] */

void FUN_1000688ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100070210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (param_1,PTR_s_initWithCompletion_timeout_qos__1000d0878,param_3,0x15);
  return;
}



/* Entry: 1000688f4; end: 10006898b; -[SCTimeboundCompletion initWithCompletion:timeout:qos:] */

undefined1 *
FUN_1000688f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1000d2758;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    *(undefined4 *)((long)puVar1 + 0x20) = param_5;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10006898c; end: 100068a77; -[SCTimeboundCompletion start] */

void FUN_10006898c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  uVar1 = (ulong)*(uint *)(param_1 + 0x20);
  _SCDispatchGetGlobalQueue(uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___dispatch_source_type_timer_1000a0128;
  _dispatch_source_create(PTR___dispatch_source_type_timer_1000a0128,0,0,uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar2;
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = 0;
  _dispatch_time(0,(long)(*(double *)(param_1 + 0x18) * 1000000000.0));
  _dispatch_source_set_timer(uVar4,uVar3,0xffffffffffffffff,0);
  puStack_58 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_100068a78;
  puStack_40 = &UNK_1000a1cc8;
  lStack_38 = param_1;
  _dispatch_source_set_event_handler(*(undefined8 *)(param_1 + 0x10),&puStack_58);
  _dispatch_resume(*(undefined8 *)(param_1 + 0x10));
  _objc_release(uVar1);
  return;
}



/* Entry: 100068a78; end: 100068a7f;  */

void FUN_100068a78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000742d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)(*(undefined8 *)(param_1 + 0x20),PTR_s_timeout_1000d18a8);
  return;
}



/* Entry: 100068a80; end: 100068a87; -[SCTimeboundCompletion complete] */

void FUN_100068a80(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)(param_1,PTR_s__executeCompletionTimedOut__1000cf950,0);
  return;
}



/* Entry: 100068a88; end: 100068a8f; -[SCTimeboundCompletion timeout] */

void FUN_100068a88(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006c570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)(param_1,PTR_s__executeCompletionTimedOut__1000cf950,1);
  return;
}



/* Entry: 100068a90; end: 100068b13; -[SCTimeboundCompletion _executeCompletionTimedOut:] */

void FUN_100068a90(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  if (*(long *)(param_1 + 8) != 0) {
    _dispatch_source_cancel(*(undefined8 *)(param_1 + 0x10));
    (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    _objc_release(uVar1);
  }
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_1);
  return;
}



/* Entry: 100068b14; end: 100068b43; -[SCTimeboundCompletion .cxx_destruct] */

void FUN_100068b14(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100068b44; end: 100068c3f;  */

void FUN_100068b44(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  uVar1 = param_1;
  FUN_100068c40(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_100068d2c;
  uStack_40 = 0x100068d3c;
  uStack_38 = 0;
  func_0x0001000719a0();
  uVar2 = puStack_58[5];
  _objc_retain(uVar2);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar2);
  return;
}



/* Entry: 100068c40; end: 100068d2b;  */

void FUN_100068c40(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSData_1000d1e40;
  func_0x00010006ea20(PTR__OBJC_CLASS___NSData_1000d1e40,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1000d23a0;
    func_0x00010006f2c0(PTR_PTR_1000d23a0,param_2,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___SCPBNClientPayload_1000d23a8;
    _objc_alloc();
    func_0x000100070280();
    _objc_retain(0);
    puVar3 = PTR_PTR_1000d23a0;
    if (puVar2 == (undefined *)0x0) {
      func_0x00010006f2c0(PTR_PTR_1000d23a0,param_2,0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x000100074000(PTR_PTR_1000d23a0,param_2,puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar2);
    _objc_release(0);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar3);
  return;
}



/* Entry: 100068d2c; end: 100068d43;  */

void FUN_100068d2c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 100068d44; end: 100068d7b;  */

void FUN_100068d44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(uVar1);
  return;
}



/* Entry: 100068d7c; end: 100068e57;  */

void FUN_100068d7c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_100068d2c;
  uStack_30 = 0x100068d3c;
  uStack_28 = 0;
  func_0x0001000719a0(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar1);
  return;
}



/* Entry: 100068e58; end: 100068e8f;  */

void FUN_100068e58(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(uVar1);
  return;
}



/* Entry: 100068e90; end: 100068f6b;  */

void FUN_100068e90(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_100068d2c;
  uStack_30 = 0x100068d3c;
  uStack_28 = 0;
  func_0x0001000719a0(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar1);
  return;
}



/* Entry: 100068f6c; end: 100068fa3;  */

void FUN_100068f6c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(uVar1);
  return;
}



/* Entry: 100068fa4; end: 100069043;  */

void FUN_100068fa4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar3 = param_1;
  func_0x00010006fc40();
  if ((int)uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x000100071d00();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010006fc80();
    if ((int)uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      uVar2 = uVar1;
      func_0x000100072920(uVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x000100072980();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar3);
  return;
}



/* Entry: 100069044; end: 1000697b3;  */

void FUN_100069044(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_1000a0110;
  func_0x00010006e800();
  puVar1 = param_1;
  func_0x00010006fa80();
  if ((int)puVar1 != 0) {
    puVar1 = param_1;
    func_0x00010006ee00();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010006fa60();
    _objc_release(puVar1);
    if ((int)puVar2 != 0) {
      puVar1 = param_1;
      func_0x00010006ee00();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010006ede0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = puVar2;
      func_0x000100074100();
      if ((int)puVar1 == 2) {
        puVar1 = puVar2;
        func_0x000100074740();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        func_0x0001000742e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x0001000713a0();
        _objc_release(puVar3);
        if (puVar4 != (undefined *)0x0) {
          puVar3 = puVar1;
          func_0x0001000742e0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          FUN_1000697b4();
          _objc_retainAutoreleasedReturnValue();
          func_0x000100073760(puVar1,param_2,puVar4);
          _objc_release(puVar4);
          _objc_release(puVar3);
        }
        puVar3 = puVar1;
        func_0x00010006e340();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x0001000713a0();
        _objc_release(puVar3);
        if (puVar4 != (undefined *)0x0) {
          puVar3 = puVar1;
          func_0x00010006e340(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          FUN_1000697b4();
          _objc_retainAutoreleasedReturnValue();
          func_0x000100072ba0(puVar1,param_2,puVar4);
          _objc_release(puVar4);
          _objc_release(puVar3);
        }
        puVar3 = puVar1;
        func_0x00010006fbc0();
        if ((int)puVar3 != 0) {
          puVar3 = puVar1;
          func_0x000100071560(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          FUN_10006982c();
          _objc_retainAutoreleasedReturnValue();
          func_0x000100073120(puVar1,param_2,puVar4);
          _objc_release(puVar4);
          _objc_release(puVar3);
        }
        puVar3 = puVar1;
        func_0x00010006fb80();
        if ((int)puVar3 != 0) {
          puVar3 = puVar1;
          func_0x000100071520(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          FUN_10006982c();
          _objc_retainAutoreleasedReturnValue();
          func_0x0001000730e0(puVar1,param_2,puVar4);
          _objc_release(puVar4);
          _objc_release(puVar3);
        }
        uStack_108 = 0;
        uStack_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        lStack_128 = 0;
        uStack_130 = 0;
        uStack_118 = 0;
        plStack_120 = (long *)0x0;
        puVar3 = puVar1;
        func_0x00010006ee60();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010006e860();
        if (puVar4 != (undefined *)0x0) {
          lVar8 = *plStack_120;
          do {
            puVar9 = (undefined *)0x0;
            do {
              if (*plStack_120 != lVar8) {
                _objc_enumerationMutation(puVar3);
              }
              lVar7 = *(long *)(lStack_128 + (long)puVar9 * 8);
              lVar5 = lVar7;
              func_0x000100073f40();
              if ((int)lVar5 == 1) {
                func_0x00010006e520();
                _objc_retainAutoreleasedReturnValue();
                lVar5 = lVar7;
                func_0x0001000742e0();
                _objc_retainAutoreleasedReturnValue();
                lVar6 = lVar5;
                func_0x0001000713a0();
                _objc_release(lVar5);
                if (lVar6 != 0) {
                  lVar5 = lVar7;
                  func_0x0001000742e0(lVar7);
                  _objc_retainAutoreleasedReturnValue();
                  lVar6 = lVar5;
                  FUN_1000697b4();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x000100073760(lVar7,param_2,lVar6);
                  _objc_release(lVar6);
                  _objc_release(lVar5);
                }
                lVar5 = lVar7;
                func_0x00010006e340();
                _objc_retainAutoreleasedReturnValue();
                lVar6 = lVar5;
                func_0x0001000713a0();
                _objc_release(lVar5);
                if (lVar6 != 0) {
                  lVar5 = lVar7;
                  func_0x00010006e340(lVar7);
                  _objc_retainAutoreleasedReturnValue();
                  lVar6 = lVar5;
                  FUN_1000697b4();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x000100072ba0(lVar7,param_2,lVar6);
                  _objc_release(lVar6);
                  _objc_release(lVar5);
                }
                lVar5 = lVar7;
                func_0x000100073fe0();
                _objc_retainAutoreleasedReturnValue();
                lVar6 = lVar5;
                func_0x0001000713a0();
                _objc_release(lVar5);
                if (lVar6 != 0) {
                  lVar5 = lVar7;
                  func_0x000100073fe0(lVar7);
                  _objc_retainAutoreleasedReturnValue();
                  lVar6 = lVar5;
                  FUN_1000697b4();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x000100073680(lVar7,param_2,lVar6);
                  _objc_release(lVar6);
                  _objc_release(lVar5);
                }
                lVar5 = lVar7;
                func_0x00010006dc60();
                _objc_retainAutoreleasedReturnValue();
                lVar6 = lVar5;
                func_0x0001000713a0();
                _objc_release(lVar5);
                if (lVar6 != 0) {
                  lVar5 = lVar7;
                  func_0x00010006dc60(lVar7);
                  _objc_retainAutoreleasedReturnValue();
                  lVar6 = lVar5;
                  FUN_1000697b4();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x000100072a80(lVar7,param_2,lVar6);
                  _objc_release(lVar6);
                  _objc_release(lVar5);
                }
                lVar5 = lVar7;
                func_0x00010006fbc0();
                if ((int)lVar5 != 0) {
                  lVar5 = lVar7;
                  func_0x000100071560(lVar7);
                  _objc_retainAutoreleasedReturnValue();
                  lVar6 = lVar5;
                  FUN_10006982c();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x000100073120(lVar7,param_2,lVar6);
                  _objc_release(lVar6);
                  _objc_release(lVar5);
                }
                lVar5 = lVar7;
                func_0x00010006fb80();
                if ((int)lVar5 != 0) {
                  lVar5 = lVar7;
                  func_0x000100071520(lVar7);
                  _objc_retainAutoreleasedReturnValue();
                  lVar6 = lVar5;
                  FUN_10006982c();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x0001000730e0(lVar7,param_2,lVar6);
                  _objc_release(lVar6);
                  _objc_release(lVar5);
                }
                lVar5 = lVar7;
                func_0x00010006fba0();
                if ((int)lVar5 != 0) {
                  lVar5 = lVar7;
                  func_0x000100071540(lVar7);
                  _objc_retainAutoreleasedReturnValue();
                  lVar6 = lVar5;
                  FUN_10006982c();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x000100073100(lVar7,param_2,lVar6);
                  _objc_release(lVar6);
                  _objc_release(lVar5);
                }
                lVar5 = lVar7;
                func_0x00010006fb60();
                if ((int)lVar5 != 0) {
                  lVar5 = lVar7;
                  func_0x000100071500(lVar7);
                  _objc_retainAutoreleasedReturnValue();
                  lVar6 = lVar5;
                  FUN_10006982c();
                  _objc_retainAutoreleasedReturnValue();
                  func_0x0001000730c0(lVar7,param_2,lVar6);
                  _objc_release(lVar6);
                  _objc_release(lVar5);
                }
                _objc_release(lVar7);
              }
              puVar9 = puVar9 + 1;
            } while (puVar4 != puVar9);
            puVar4 = puVar3;
            func_0x00010006e860(puVar3,param_2,&uStack_130,auStack_f0,0x10);
          } while (puVar4 != (undefined *)0x0);
        }
        _objc_release(puVar3);
        _objc_release(puVar1);
      }
      puVar1 = puVar2;
      func_0x00010006fb40();
      if ((int)puVar1 != 0) {
        puVar1 = puVar2;
        func_0x00010006fec0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        func_0x0001000742e0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x0001000713a0();
        _objc_release(puVar3);
        if (puVar4 != (undefined *)0x0) {
          puVar3 = puVar1;
          func_0x0001000742e0(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          FUN_1000697b4();
          _objc_retainAutoreleasedReturnValue();
          func_0x000100073760(puVar1,param_2,puVar4);
          _objc_release(puVar4);
          _objc_release(puVar3);
        }
        puVar3 = puVar1;
        func_0x00010006e340();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x0001000713a0();
        _objc_release(puVar3);
        if (puVar4 != (undefined *)0x0) {
          puVar3 = puVar1;
          func_0x00010006e340(puVar1);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          FUN_1000697b4();
          _objc_retainAutoreleasedReturnValue();
          func_0x000100072ba0(puVar1,param_2,puVar4);
          _objc_release(puVar4);
          _objc_release(puVar3);
        }
        puVar3 = puVar1;
        func_0x00010006fbc0();
        if ((int)puVar3 != 0) {
          puVar3 = puVar1;
          func_0x000100071560(puVar1);
          _objc_retainAutoreleasedReturnValue();
          FUN_10006982c();
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar3);
        }
        puVar3 = puVar1;
        func_0x00010006fb80();
        if ((int)puVar3 != 0) {
          puVar3 = puVar1;
          func_0x000100071520(puVar1);
          _objc_retainAutoreleasedReturnValue();
          FUN_10006982c();
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(puVar3);
        }
        _objc_release(puVar1);
      }
      _objc_release(puVar2);
    }
  }
  puVar1 = param_1;
  func_0x00010006ec60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_1000a0110 != lStack_70) {
    ___stack_chk_fail();
    puVar1 = PTR__OBJC_CLASS___NSString_1000d1d68;
    puVar2 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
    func_0x0001000713a0();
    func_0x000100071fa0(puVar2,param_2,param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100072860(puVar1,param_2,&PTR____CFConstantStringClassReference_1000aa648);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar1);
  return;
}



/* Entry: 1000697b4; end: 10006982b;  */

void FUN_1000697b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSString_1000d1d68;
  puVar1 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
  func_0x0001000713a0();
  func_0x000100071fa0(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100072860(puVar2,param_2,&PTR____CFConstantStringClassReference_1000aa648);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar2);
  return;
}



/* Entry: 10006982c; end: 100069967;  */

void FUN_10006982c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = param_1;
    func_0x00010006e800();
    lVar1 = lVar3;
    func_0x00010006ec00();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x0001000713a0();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar1 = param_1;
      func_0x00010006ec00(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      FUN_1000697b4();
      _objc_retainAutoreleasedReturnValue();
      func_0x000100072e00(lVar3,param_2,lVar2);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    func_0x000100072ae0(lVar3,param_2,0);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(lVar3);
  return;
}



/* Entry: 100069968; end: 1000699d3; +[SCClientPayloadParseResult errorWithError:] */

void FUN_100069968(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1000d23a0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000100071060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar2);
  return;
}



/* Entry: 1000699d4; end: 100069a37; +[SCClientPayloadParseResult successWithClientPayload:] */

void FUN_1000699d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1000d23a0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x000100071060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar2);
  return;
}



/* Entry: 100069a38; end: 100069a5b; -[SCClientPayloadParseResult copyWithZone:] */

undefined8 FUN_100069a38(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 100069a5c; end: 100069ad3; -[SCClientPayloadParseResult hash] */

void FUN_100069a5c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_1000a0110;
  uStack_40 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010006fd00();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar1;
  func_0x00010006fd00();
  uStack_30 = uVar2;
  _SCRemodelHash(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_68 = PTR_PTR_1000d2760;
  puStack_70 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_70,PTR_s_init_1000d07d0);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 100069ad4; end: 100069b17; -[SCClientPayloadParseResult internalInit] */

void FUN_100069ad4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1000d2760;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 100069b18; end: 100069bcf; -[SCClientPayloadParseResult isEqual:] */

long FUN_100069b18(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_100069ba8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_100069bb4;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x0001000710e0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if (lVar3 != *(long *)(param_3 + 0x18)) {
          func_0x0001000710e0();
          goto LAB_100069bb4;
        }
        goto LAB_100069ba8;
      }
    }
    lVar3 = 0;
  }
LAB_100069bb4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 100069bd0; end: 100069c53; -[SCClientPayloadParseResult matchSuccess:error:] */

void FUN_100069bd0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_100069c38;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_100069c38;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_100069c38:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 100069c54; end: 100069cf7; -[SCClientPayloadParseResult .cxx_destruct] */

void FUN_100069c54(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 0x10,0);
  return;
}



/* Entry: 100069cf8; end: 100069f03; -[SCProcessedNotificationPersister initWithUserId:] */

undefined * FUN_100069cf8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  
  puVar1 = PTR__OBJC_CLASS___NSDateFormatter_1000d1c00;
  if (param_3 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    _objc_retain(param_3);
    _objc_alloc_init(puVar1);
    func_0x000100072da0();
    puVar2 = PTR__OBJC_CLASS___NSDate_1000d1bb8;
    func_0x00010006ea60();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDate_1000d1bb8;
    func_0x00010006eaa0(0xc0f5180000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x000100073e80(puVar1,param_2,puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x000100073e80(puVar1,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = &PTR____CFConstantStringClassReference_1000aa668;
    ppuVar6 = ppuVar7;
    func_0x000100073e00(&PTR____CFConstantStringClassReference_1000aa668,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100073e00(&PTR____CFConstantStringClassReference_1000aa668,param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___SCExtensionSharedFile_1000d1d98;
    _objc_alloc(PTR__OBJC_CLASS___SCExtensionSharedFile_1000d1d98);
    func_0x000100070000();
    puVar9 = PTR__OBJC_CLASS___SCExtensionSharedFile_1000d1d98;
    _objc_alloc(PTR__OBJC_CLASS___SCExtensionSharedFile_1000d1d98);
    func_0x000100070000();
    puVar11 = PTR_PTR_1000d1d00;
    _objc_alloc(PTR_PTR_1000d1d00);
    puVar10 = PTR__OBJC_CLASS___SCExtensionSharedDirectory_1000d1f78;
    _objc_alloc(PTR__OBJC_CLASS___SCExtensionSharedDirectory_1000d1f78);
    func_0x00010006ffc0();
    func_0x000100070ec0(puVar11,param_2,param_3,puVar10,ppuVar6,ppuVar7,puVar8,puVar9);
    _objc_release(param_3);
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(ppuVar7);
    _objc_release(ppuVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  return puVar11;
}



/* Entry: 100069f04; end: 10006a057; -[SCProcessedNotificationPersister initWithUserId:sharedExtensionFolder:todayFileName:yesterdayFileName:notifProcessedTodayFile:notifProcessedYesterdayFile:] */

undefined1 *
FUN_100069f04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1000d2768;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


