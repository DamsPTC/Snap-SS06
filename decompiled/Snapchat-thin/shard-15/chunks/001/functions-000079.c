/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b816430; end: 10b81648b;  */

undefined1  [16]
FUN_10b816430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_1;
  _CGRectGetMidX();
  _CGRectGetMidY(param_1,param_2,param_3,param_4);
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Entry: 10b81648c; end: 10b816527;  */

void FUN_10b81648c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  uVar1 = param_5;
  _CGRectGetMidX(param_5,param_6,param_7,param_8);
  _CGRectGetMidY(param_5,param_6,param_7,param_8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)(param_1,param_2,param_3,param_4,uVar1,param_5);
  return;
}



/* Entry: 10b816528; end: 10b8165a3;  */

double FUN_10b816528(double param_1)

{
  double dVar1;
  
  dVar1 = param_1;
  FUN_10b816218();
  FUN_10b816218();
  FUN_10b816218();
  FUN_10b816218();
  return (double)(long)(param_1 * dVar1) / dVar1;
}



/* Entry: 10b8165a4; end: 10b81666f;  */

undefined1  [16] FUN_10b8165a4(double param_1,double param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  dVar1 = param_1;
  FUN_10b816218();
  dVar2 = (double)(long)(param_1 * dVar1) / dVar1;
  FUN_10b816218();
  auVar3._8_8_ = (double)(long)(param_2 * dVar1) / dVar1;
  auVar3._0_8_ = dVar2;
  return auVar3;
}



/* Entry: 10b816670; end: 10b8166bf;  */

double FUN_10b816670(double param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar1);
  return 1.0 / param_1;
}



/* Entry: 10b8166c0; end: 10b8166f7;  */

bool FUN_10b8166c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010c15b1c0();
  func_0x00010c292b00(puVar1,param_2,param_1);
  return puVar1 == (undefined *)0x1;
}



/* Entry: 10b8166f8; end: 10b81694b;  */

double FUN_10b8166f8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = param_1;
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  uVar1 = param_5;
  func_0x00010c15b1c0(param_5);
  func_0x00010c292b00(puVar2,param_6,uVar1);
  if (puVar2 == (undefined *)0x1) {
    func_0x00010bf20c00(param_5);
    _CGRectGetWidth();
    dVar4 = param_1;
    _CGRectGetMinX(param_1,param_2,param_3,param_4);
    dVar5 = param_1;
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    _CGRectGetMinY(param_1,param_2,param_3,param_4);
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    _CGRectGetHeight(param_1,param_2,param_3,param_4);
    param_1 = (dVar3 - dVar4) - dVar5;
  }
  _objc_release(param_5);
  return param_1;
}



/* Entry: 10b81694c; end: 10b8169fb;  */

undefined1  [16]
FUN_10b81694c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  _objc_retain();
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x00010c15b1c0(param_4);
  func_0x00010c292b00();
  if (puVar1 == (undefined *)0x1) {
    func_0x00010bf20c00(param_4);
    _CGRectGetWidth();
    dVar2 = param_1;
    func_0x00010bf345e0(param_3);
    param_1 = param_1 - dVar2;
    func_0x00010bf345e0(param_3);
  }
  else {
    func_0x00010bf345e0(param_3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 10b8169fc; end: 10b816a87;  */

double FUN_10b8169fc(double param_1)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  dVar2 = param_1;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetWidth();
  dVar3 = dVar2;
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _CGRectGetHeight();
  _objc_release(puVar1);
  if (dVar3 <= dVar2) {
    dVar2 = dVar3;
  }
  return param_1 * dVar2;
}



/* Entry: 10b816a88; end: 10b816b5b;  */

void FUN_10b816a88(double param_1,double param_2,double param_3,double param_4,double param_5,
                  double param_6,double param_7,double param_8,undefined8 param_9,
                  undefined8 param_10,undefined8 param_11)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = param_1;
  dVar2 = param_2;
  dVar3 = param_3;
  dVar4 = param_4;
  _objc_retain(param_11);
  _objc_retain(param_10);
  _objc_opt_self(param_9);
  func_0x00010bf20c00(param_10);
  func_0x00010bdcea60(param_1,param_2,param_3,param_4,param_6 + dVar1,param_5 + dVar2,
                      dVar3 - (param_6 + param_8),dVar4 - (param_5 + param_7),PTR_PTR_1126b08d8);
  _objc_release(param_11);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_10);
  return;
}



/* Entry: 10b816b5c; end: 10b816d4f;  */

undefined * FUN_10b816b5c(undefined *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar9 = param_1;
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar9;
  func_0x00010c2a72c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  if (puVar2 == (undefined *)0x0) {
    puVar9 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar9;
    func_0x00010bf48a60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar4 = puVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    puVar9 = (undefined *)0x0;
    puVar8 = puVar3;
    if (puVar4 != (undefined *)0x0) {
      puVar8 = (undefined *)0x0;
      do {
        puVar10 = (undefined *)0x0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(puVar3);
          }
          puVar9 = *(undefined **)((long)puVar10 * 8);
          puVar5 = PTR__OBJC_CLASS___UIWindowScene_1126b6b80;
          _objc_opt_class(PTR__OBJC_CLASS___UIWindowScene_1126b6b80);
          puVar6 = puVar9;
          _objc_opt_isKindOfClass(puVar9,puVar5);
          if (((ulong)puVar6 & 1) != 0) {
            puVar5 = puVar9;
            func_0x00010bef0360();
            if (puVar5 == (undefined *)0x0) {
              func_0x00010c0690e0(puVar9);
              _objc_release(puVar3);
              goto LAB_10b816cf0;
            }
            if (puVar8 == (undefined *)0x0) {
              _objc_retain(puVar9);
              puVar8 = puVar9;
            }
          }
          puVar10 = puVar10 + 1;
        } while (puVar4 != puVar10);
        puVar4 = puVar3;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined *)0x0);
      _objc_release(puVar3);
      if (puVar8 == (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
        goto LAB_10b816cf8;
      }
      puVar9 = puVar8;
      func_0x00010c0690e0(puVar8);
    }
LAB_10b816cf0:
    _objc_release(puVar8);
  }
  else {
    puVar9 = puVar2;
    func_0x00010c0690e0(puVar2);
  }
LAB_10b816cf8:
  _objc_release(puVar2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    puVar9 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0e9b80(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar9);
    return puVar9;
  }
  return puVar9;
}



/* Entry: 10b816d50; end: 10b816e2f;  */

void FUN_10b816d50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598,param_2,
                      *(undefined8 *)PTR__UIApplicationOpenSettingsURLString_110345a80);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e9b80(param_1,param_2,puVar1,PTR____NSDictionary0__struct_11034ab58,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b816e30; end: 10b816e33;  */

void FUN_10b816e30(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14d6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_sc_openSettings_112630fd8);
  return;
}



/* Entry: 10b816e34; end: 10b816fa3;  */

void FUN_10b816e34(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (puRam00000001137fbb60 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMapTable_1126b4428;
    func_0x00010c2a2be0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puRam00000001137fbb60;
    puRam00000001137fbb60 = puVar1;
    _objc_release(puVar2);
  }
  puVar2 = puRam00000001137fbb60;
  func_0x00010c0dff20(puRam00000001137fbb60,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puRam00000001137fbb60,param_2,puVar2,param_1);
  }
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010befa120(puVar2,param_2,puVar3);
  func_0x00010c14dc00(param_1,param_2,1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b816fa4; end: 10b81751f;  */

void FUN_10b816fa4(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fbb70 != -1) {
    func_0x000107c27d9c(0x1137fbb70,&PTR___NSConcreteGlobalBlock_110d62318);
  }
  uVar1 = uRam00000001137fbb68;
  _objc_retain(uRam00000001137fbb68);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b817520; end: 10b8175a3;  */

void FUN_10b817520(code *param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if (lRam00000001137fbbc0 != -1) {
    func_0x000107c27d9c(0x1137fbbc0,&PTR___NSConcreteGlobalBlock_110d623b8);
  }
  UNRECOVERED_JUMPTABLE = param_1;
  func_0x00010c0cc960();
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00010b817578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,uRam00000001137fbbb8,param_3);
    return;
  }
  return;
}



/* Entry: 10b8175a4; end: 10b81766b;  */

void FUN_10b8175a4(void)

{
  bool bVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  byte abStack_50 [40];
  long lStack_28;
  
  pbVar2 = abStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  abStack_50[8] = 0xa9;
  abStack_50[9] = 0x90;
  abStack_50[10] = 0x93;
  abStack_50[0xb] = 0x8a;
  abStack_50[0] = 0x8c;
  abStack_50[1] = 0x9a;
  abStack_50[2] = 0x8b;
  abStack_50[3] = 0xa8;
  abStack_50[4] = 0x9e;
  abStack_50[5] = 0x91;
  abStack_50[6] = 0x8b;
  abStack_50[7] = 0x8c;
  abStack_50[0x14] = 0xba;
  abStack_50[0x15] = 0x89;
  abStack_50[0x16] = 0x9a;
  abStack_50[0x17] = 0x91;
  abStack_50[0x18] = 0x8b;
  abStack_50[0x19] = 0x8c;
  abStack_50[0x1a] = 0xc5;
  abStack_50[0x1b] = 0;
  abStack_50[0xc] = 0x92;
  abStack_50[0xd] = 0x9a;
  abStack_50[0xe] = 0xbd;
  abStack_50[0xf] = 0x8a;
  abStack_50[0x10] = 0x8b;
  abStack_50[0x11] = 0x8b;
  abStack_50[0x12] = 0x90;
  abStack_50[0x13] = 0x91;
  _strlen();
  if (pbVar2 != (undefined1 *)0x0) {
    puVar5 = (undefined1 *)0x0;
    puVar6 = (undefined1 *)0x1;
    do {
      abStack_50[(long)puVar5] = ~abStack_50[(long)puVar5];
      bVar1 = puVar6 < pbVar2;
      puVar5 = puVar6;
      puVar6 = (undefined1 *)(ulong)((int)puVar6 + 1);
    } while (bVar1);
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _NSSelectorFromString();
  puRam00000001137fbbb8 = puVar4;
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c14d730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b81766c; end: 10b817673;  */

void FUN_10b81766c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14d730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_sc_openSnapchatAppStorePageWithC_112630fe8,0)
  ;
  return;
}



/* Entry: 10b817674; end: 10b81770f;  */

void FUN_10b817674(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf2cf00();
  if ((int)uVar2 == 0) {
    if (param_3 != 0) {
      (**(code **)(param_3 + 0x10))(param_3,0);
    }
  }
  else {
    func_0x00010c0e9b80(param_1);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b817710; end: 10b81775f;  */

undefined8 FUN_10b817710(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c292b20();
    _objc_release(param_1);
    uVar1 = 3;
    if (lVar2 == 2) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 3;
}



/* Entry: 10b817760; end: 10b81776b;  */

void FUN_10b817760(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c252e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIWindow_1126c3e70,PTR_s_statusBarWindow_1126725c0);
  return;
}



/* Entry: 10b81776c; end: 10b8177ab;  */

void FUN_10b81776c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14dda0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1677c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b8177ac; end: 10b817827;  */

void FUN_10b8177ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010c14dda0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  uVar2 = uVar1;
  func_0x00010bfb68e0(param_2);
  _CGRectGetWidth();
  uVar3 = uVar2;
  func_0x00010bfb68e0(param_2);
  _CGRectGetHeight();
  func_0x00010c19f0e0(uVar1,param_1,uVar2,uVar3,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b817828; end: 10b81782b;  */

void FUN_10b817828(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c20a2f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setStatusBarHidden__1126602e0);
  return;
}



/* Entry: 10b81782c; end: 10b817953;  */

void FUN_10b81782c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c07f8e0();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1e27b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s_setPreviousStatusBarStyle__112656410,param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c20a330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setStatusBarStyle__1126602f0,param_3);
  return;
}



/* Entry: 10b817954; end: 10b817a83;  */

void FUN_10b817954(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = param_1;
  func_0x00010c06d720();
  if (((ulong)puVar1 & 1) == 0) {
    _objc_retain(param_1);
  }
  else {
    puVar1 = param_1;
    func_0x00010bfb3ce0(param_1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c265a80();
    puVar3 = puVar1;
    func_0x00010bfb3d60(puVar1,param_2,(uint)puVar2 ^ 2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c102de0(param_1);
    func_0x00010bfb4160(puVar1,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    param_1 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b817a84; end: 10b817abf;  */

uint FUN_10b817a84(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfb3ce0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c265a80();
  _objc_release(param_1);
  return (uint)uVar1 >> 1 & 1;
}



/* Entry: 10b817ac0; end: 10b817b6b;  */

void FUN_10b817ac0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uStack_48;
  
  _CGDataProviderCreateWithCFData();
  uVar1 = param_4;
  _CGFontCreateWithDataProvider();
  uVar2 = uVar1;
  _CTFontManagerRegisterGraphicsFont();
  if ((uVar2 & 1) == 0) {
    _CFRelease(uStack_48);
  }
  uVar2 = uVar1;
  _CGFontCopyPostScriptName(uVar1);
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bfb41a0(param_1,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    _CFRelease(uVar1);
  }
  if (param_4 != 0) {
    _CFRelease(param_4);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b817b6c; end: 10b817b7f;  */

void FUN_10b817b6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14cff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,0x3ff0000000000000,PTR__OBJC_CLASS___UIImage_1126aea68,
             PTR_s_sc_imageWithColor_size__112630e18);
  return;
}



/* Entry: 10b817b80; end: 10b817c1b;  */

void FUN_10b817b80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  uVar3 = param_1;
  _objc_retain(param_5);
  func_0x00010c0b6c20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010c14d000(param_1,param_2,uVar3,puVar2,param_4,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b817c1c; end: 10b817cd3;  */

void FUN_10b817c1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_6);
  uVar1 = 0;
  _UIGraphicsBeginImageContextWithOptions(param_1,param_2,param_3,0);
  _UIGraphicsGetCurrentContext();
  uVar2 = param_6;
  _objc_retainAutorelease(param_6);
  func_0x00010bdc0fe0();
  _objc_release(param_6);
  _CGContextSetFillColorWithColor(uVar1,uVar2);
  _CGContextFillRect(0,0,param_1,param_2,uVar1);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b817cd4; end: 10b817db7;  */

void FUN_10b817cd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  uVar3 = param_1;
  _objc_retain(param_10);
  _objc_retain(param_9);
  func_0x00010c0b6c20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010c14d0e0(param_1,param_2,param_3,param_4,param_5,param_6,uVar3,puVar2,param_8,param_9,
                      param_10);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b817db8; end: 10b817f47;  */

void FUN_10b817db8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_11);
  _objc_retain(param_10);
  uVar1 = 0;
  _UIGraphicsBeginImageContextWithOptions(param_5,param_6,param_7);
  _UIGraphicsGetCurrentContext();
  uVar2 = uVar1;
  _CGColorSpaceCreateDeviceRGB();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  _objc_release(param_10);
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  _objc_release(param_11);
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  _CGGradientCreateWithColors(uVar2,puVar3,0);
  _objc_release(puVar3);
  _CFRelease(uVar2);
  uVar5 = 0;
  _CGContextDrawLinearGradient(param_1,param_2,param_3,param_4,uVar1,uVar4,0);
  _CGGradientRelease();
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar4;
  _UIGraphicsEndImageContext();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    _objc_retain(uVar5);
    func_0x00010c23d0a0(uVar2);
    puVar3 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    uVar4 = param_1;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14e120();
    _UIGraphicsBeginImageContextWithOptions(param_1,param_2,uVar4,0);
    _objc_release(puVar3);
    func_0x00010c23d0a0(uVar2);
    func_0x00010c23d0a0(uVar2);
    func_0x00010bf89920(0,0,param_1,param_2,uVar2);
    func_0x00010c1607a0(uVar5);
    _objc_release(uVar5);
    uVar4 = 0x14;
    _UIRectFillUsingBlendMode(0,0,param_1,param_2,0x14);
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    _UIGraphicsEndImageContext();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 10b817f48; end: 10b818037;  */

void FUN_10b817f48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  func_0x00010c23d0a0(param_3);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  uVar2 = param_1;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _UIGraphicsBeginImageContextWithOptions(param_1,param_2,uVar2,0);
  _objc_release(puVar1);
  func_0x00010c23d0a0(param_3);
  func_0x00010c23d0a0(param_3);
  func_0x00010bf89920(0,0,param_1,param_2,param_3);
  func_0x00010c1607a0(param_5);
  _objc_release(param_5);
  uVar2 = 0x14;
  _UIRectFillUsingBlendMode(0,0,param_1,param_2,0x14);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b818038; end: 10b81838f;  */

void FUN_10b818038(double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  byte bStack_bc;
  byte bStack_bb;
  byte bStack_ba;
  byte bStack_b9;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar13 = param_1;
  dVar10 = param_2;
  func_0x00010c23d0a0();
  bVar1 = false;
  if ((dVar13 == *(double *)PTR__CGSizeZero_110347620) &&
     (bVar1 = false, !NAN(dVar10) && !NAN(*(double *)(PTR__CGSizeZero_110347620 + 8)))) {
    bVar1 = dVar10 == *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  if (bVar1) {
    puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___CIImage_1126b3128;
    _objc_alloc();
    func_0x00010c01bf60();
    if (puVar2 == (undefined *)0x0) {
      puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010c23d0a0(param_5);
      if (dVar13 <= param_1) {
        param_1 = dVar13;
      }
      if (param_1 <= 0.0) {
        param_1 = 0.0;
      }
      func_0x00010c23d0a0(param_5);
      if (dVar10 <= param_2) {
        param_2 = dVar10;
      }
      dVar13 = param_2;
      if (param_2 <= 0.0) {
        dVar13 = 0.0;
      }
      func_0x00010c23d0a0(param_5);
      if (param_2 - param_1 <= param_3) {
        param_3 = param_2 - param_1;
      }
      if (param_3 <= 1.0) {
        param_3 = 1.0;
      }
      func_0x00010c23d0a0(param_5);
      if (dVar10 - dVar13 <= param_4) {
        param_4 = dVar10 - dVar13;
      }
      if (param_4 <= 1.0) {
        param_4 = 1.0;
      }
      puVar3 = PTR__OBJC_CLASS___CIVector_1126d8aa0;
      func_0x00010c2979c0(param_1,dVar13,param_3,param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___CIFilter_1126c7620;
      puVar8 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfae9c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      if (puVar4 == (undefined *)0x0) {
        puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar5 = puVar4;
        func_0x00010c0eedc0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___CIContext_1126b3120;
        puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
        func_0x00010c0ddbe0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4f640(puVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_release(puVar8);
        func_0x00010c12f5c0(0,0,0x3ff0000000000000,0x3ff0000000000000,puVar7);
        dVar13 = (double)NEON_ucvtf((ulong)bStack_bc);
        dVar10 = (double)NEON_ucvtf((ulong)bStack_bb);
        dVar11 = (double)NEON_ucvtf((ulong)bStack_ba);
        dVar12 = (double)NEON_ucvtf((ulong)bStack_b9);
        puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010bf41620(dVar13 / 255.0,dVar10 / 255.0,dVar11 / 255.0,dVar12 / 255.0,
                            PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(puVar5);
      }
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bddea30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 10b818390; end: 10b8183af;  */

void FUN_10b818390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddea30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__chevronWithColor_size_lineWidth_112555428,param_3,0);
  return;
}



/* Entry: 10b8183b0; end: 10b81848f;  */

void FUN_10b8183b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
  func_0x00010c0469e0(param_1,param_2);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_10b818490;
  puStack_78 = &UNK_110d623d8;
  uStack_70 = param_6;
  uStack_68 = param_3;
  uStack_60 = param_1;
  uStack_58 = param_2;
  _objc_retain(param_6);
  puVar2 = puVar1;
  func_0x00010bfe91c0(puVar1,param_5,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_70);
  _objc_release(param_6);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b818490; end: 10b81854b;  */

void FUN_10b818490(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_1 + 0x28) * 0.5;
  func_0x00010bdc1000(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retainAutorelease(uVar1);
  func_0x00010bdc0fe0();
  _CGContextSetStrokeColorWithColor(param_2,uVar1);
  _CGContextSetLineWidth(*(undefined8 *)(param_1 + 0x28),param_2);
  _CGContextSetLineCap(param_2,1);
  _CGContextMoveToPoint(dVar2,dVar2,param_2);
  _CGContextAddLineToPoint
            (*(double *)(param_1 + 0x30) - dVar2,*(double *)(param_1 + 0x38) - dVar2,param_2);
  _CGContextMoveToPoint(dVar2,*(double *)(param_1 + 0x38) - dVar2,param_2);
  _CGContextAddLineToPoint(*(double *)(param_1 + 0x30) - dVar2,dVar2,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbaf1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGContextStrokePath_110347318)(param_2);
  return;
}



/* Entry: 10b81854c; end: 10b8187cb;  */

void FUN_10b81854c(double param_1,double param_2,undefined8 param_3,double param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  double dStack_70;
  undefined8 uStack_68;
  double dStack_60;
  double dStack_58;
  
  _objc_retain(param_7);
  param_1 = param_1 + param_4 * 2.0;
  param_2 = param_2 + param_4 * 2.0;
  puVar1 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  _objc_alloc(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
  func_0x00010c0469e0(param_1,param_2);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x10b818644;
  puStack_88 = &UNK_110ac97d8;
  uStack_80 = param_7;
  uStack_78 = param_3;
  dStack_70 = param_4;
  uStack_68 = param_8;
  dStack_60 = param_1;
  dStack_58 = param_2;
  _objc_retain(param_7);
  puVar2 = puVar1;
  func_0x00010bfe91c0(puVar1,param_6,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_80);
  _objc_release(param_7);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b8187cc; end: 10b81889b;  */

void FUN_10b8187cc(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  puVar3 = puVar1;
  func_0x00010c1400c0(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar4) {
    ___stack_chk_fail();
    lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar3);
    uVar12 = 0;
    uVar2 = 0;
    _UIGraphicsBeginImageContextWithOptions(param_1,param_2,0,0);
    _UIGraphicsGetCurrentContext();
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    _CGContextSetFillColorWithColor(uVar2,puVar7);
    _objc_release(puVar1);
    _CGContextGetClipBoundingBox(uVar2);
    _CGContextFillRect(uVar2);
    _objc_retain(puVar3);
    puVar1 = puVar3;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (puVar1 != (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(puVar3);
        }
        uVar6 = *(undefined8 *)((long)puVar7 * 8);
        _CGContextSaveGState(uVar2);
        _CGContextScaleCTM(0x3ff0000000000000,0xbff0000000000000,uVar2);
        dVar8 = param_1;
        _CGRectGetHeight(param_1,param_2,uVar12,param_4);
        _CGContextTranslateCTM(0,-dVar8,uVar2);
        dVar8 = param_1;
        _CGRectGetWidth(param_1,param_2,uVar12,param_4);
        dVar9 = dVar8;
        func_0x00010c23d0a0(uVar6);
        dVar10 = param_1;
        dVar11 = param_2;
        _CGRectGetHeight(param_1,param_2,uVar12,param_4);
        func_0x00010c23d0a0(uVar6);
        dVar10 = dVar10 - dVar11;
        dVar13 = dVar10 * 0.5;
        func_0x00010c23d0a0(uVar6);
        func_0x00010c23d0a0(uVar6);
        _objc_retainAutorelease(uVar6);
        func_0x00010bdc1020();
        _CGContextClipToMask((dVar8 - dVar9) * 0.5,dVar13,dVar10,dVar11,uVar2,uVar6);
        _CGContextClearRect(param_1,param_2,uVar12,param_4,uVar2);
        _CGContextRestoreGState(uVar2);
        puVar7 = puVar7 + 1;
      } while (puVar1 != puVar7);
      puVar1 = puVar3;
      func_0x00010bf52a60();
    }
    param_5 = puVar3;
    _objc_release();
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    _UIGraphicsEndImageContext();
    _objc_release(puVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
      ___stack_chk_fail();
      uVar2 = *(undefined8 *)PTR__UTTypeGIF_11034b130;
      func_0x00010bfe5ec0(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf63b40(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      param_5 = puVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 10b81889c; end: 10b818b3f;  */

void FUN_10b81889c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  double dVar14;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  uVar13 = 0;
  uVar2 = 0;
  _UIGraphicsBeginImageContextWithOptions(param_1,param_2,0,0);
  _UIGraphicsGetCurrentContext();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  _CGContextSetFillColorWithColor(uVar2,puVar4);
  _objc_release(puVar3);
  _CGContextGetClipBoundingBox(uVar2);
  _CGContextFillRect(uVar2);
  _objc_retain(param_7);
  lVar5 = param_7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_7);
      }
      uVar7 = *(undefined8 *)(lVar8 * 8);
      _CGContextSaveGState(uVar2);
      _CGContextScaleCTM(0x3ff0000000000000,0xbff0000000000000,uVar2);
      dVar9 = param_1;
      _CGRectGetHeight(param_1,param_2,uVar13,param_4);
      _CGContextTranslateCTM(0,-dVar9,uVar2);
      dVar9 = param_1;
      _CGRectGetWidth(param_1,param_2,uVar13,param_4);
      dVar10 = dVar9;
      func_0x00010c23d0a0(uVar7);
      dVar11 = param_1;
      dVar12 = param_2;
      _CGRectGetHeight(param_1,param_2,uVar13,param_4);
      func_0x00010c23d0a0(uVar7);
      dVar11 = dVar11 - dVar12;
      dVar14 = dVar11 * 0.5;
      func_0x00010c23d0a0(uVar7);
      func_0x00010c23d0a0(uVar7);
      _objc_retainAutorelease(uVar7);
      func_0x00010bdc1020();
      _CGContextClipToMask((dVar9 - dVar10) * 0.5,dVar14,dVar11,dVar12,uVar2,uVar7);
      _CGContextClearRect(param_1,param_2,uVar13,param_4,uVar2);
      _CGContextRestoreGState(uVar2);
      lVar8 = lVar8 + 1;
    } while (lVar5 != lVar8);
    lVar5 = param_7;
    func_0x00010bf52a60();
  }
  lVar5 = param_7;
  _objc_release();
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    uVar2 = *(undefined8 *)PTR__UTTypeGIF_11034b130;
    func_0x00010bfe5ec0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf63b40(param_7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    lVar5 = param_7;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 10b818b40; end: 10b818b9b;  */

void FUN_10b818b40(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)PTR__UTTypeGIF_11034b130;
  func_0x00010bfe5ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf63b40(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b818b9c; end: 10b818df7;  */

long FUN_10b818b9c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)PTR__UTTypeGIF_11034b130;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_40 = lVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b9a0(param_1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  uVar3 = *(undefined8 *)PTR__UTTypeQuickTimeMovie_11034b150;
  func_0x00010bfe5ec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar1;
  func_0x00010bf63b40(lVar1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    uVar5 = *(undefined8 *)PTR__UTTypeMPEG4Movie_11034b148;
    func_0x00010bfe5ec0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf63b40(lVar1,param_2,uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
  }
  else {
    _objc_retain(lVar4);
    lVar1 = lVar4;
  }
  _objc_release(lVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return lVar1;
}



/* Entry: 10b818df8; end: 10b818e77;  */

void FUN_10b818df8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)PTR__UTTypeHEIC_11034b138;
  func_0x00010bfe5ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf63b40(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe93c0(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b818e78; end: 10b818f33;  */

undefined * FUN_10b818e78(undefined *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)PTR__UTTypeHEIC_11034b138;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_40 = uVar1;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b9a0(param_1,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return param_1;
  }
  ___stack_chk_fail();
  uVar3 = *(undefined8 *)PTR__UTTypeHEIF_11034b140;
  func_0x00010bfe5ec0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf63b40(uVar1,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe93c0(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return puVar2;
}



/* Entry: 10b818f34; end: 10b818fb3;  */

void FUN_10b818f34(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = *(undefined8 *)PTR__UTTypeHEIF_11034b140;
  func_0x00010bfe5ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf63b40(param_1,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe93c0(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10b818fb4; end: 10b81906f;  */

undefined8 FUN_10b818fb4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)PTR__UTTypeHEIF_11034b140;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b9a0();
  _objc_release(puVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return param_1;
  }
  ___stack_chk_fail();
  uVar1 = 0x1137fbbc8;
  _objc_storeWeak(0x1137fbbc8,0);
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15b480();
  _objc_release(puVar2);
  _objc_loadWeakRetained(0x1137fbbc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return uVar1;
}



/* Entry: 10b819070; end: 10b8190db;  */

void FUN_10b819070(void)

{
  undefined *puVar1;
  
  _objc_storeWeak(0x1137fbbc8,0);
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15b480();
  _objc_release(puVar1);
  _objc_loadWeakRetained(0x1137fbbc8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b8190dc; end: 10b8190eb;  */

void FUN_10b8190dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(0x1137fbbc8,param_1);
  return;
}



/* Entry: 10b8190ec; end: 10b81947b;  */

bool FUN_10b8190ec(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  func_0x00010bfb2220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(param_4);
  return param_3 == 320.0;
}



/* Entry: 10b81947c; end: 10b8195bf;  */

double FUN_10b81947c(double param_1,undefined8 param_2)

{
  double dVar1;
  
  func_0x00010c14c760();
  _CGRectGetWidth();
  dVar1 = param_1;
  func_0x00010c14e120(param_2);
  return param_1 * dVar1;
}



/* Entry: 10b8195c0; end: 10b8195eb;  */

void FUN_10b8195c0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bdd5640();
                    /* WARNING: Could not recover jumptable at 0x00010c1822f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(0,param_1,param_2,PTR_s_setContentOffset__11263e2d8);
  return;
}



/* Entry: 10b8195ec; end: 10b8196cb;  */

undefined1  [16] FUN_10b8195ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  func_0x00010bf4cdc0();
  func_0x00010bfb68e0(param_3);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 10b8196cc; end: 10b81974b;  */

undefined8 FUN_10b8196cc(double param_1,double param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((0.0 <= param_1) && (0.0 < param_2)) {
    func_0x00010c028a80(0x3ff0000000000000,
                        (6.283185307179586 / param_2) * (6.283185307179586 / param_2),
                        (param_1 * 12.566370614359172) / param_2,0,0,param_3);
    _objc_retain();
    uVar1 = param_3;
  }
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10b81974c; end: 10b8197ab;  */

double FUN_10b81974c(double param_1)

{
  undefined *puVar1;
  double dVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  dVar2 = param_1;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  _objc_release(puVar1);
  return (double)(float)(int)(param_1 * dVar2) / dVar2;
}



/* Entry: 10b8197ac; end: 10b8197bf;  */

void FUN_10b8197ac(void)

{
  func_0x00010bfb68e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectGetMidX_110347588)();
  return;
}



/* Entry: 10b8197c0; end: 10b819823;  */

void FUN_10b8197c0(double param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  func_0x00010bfb68e0();
  _CGRectStandardize();
  FUN_10b81974c(param_1 + param_3 * -0.5);
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_4,PTR_s_setFrame__112645658);
  return;
}



/* Entry: 10b819824; end: 10b819837;  */

void FUN_10b819824(void)

{
  func_0x00010bfb68e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectGetMidY_110347590)();
  return;
}



/* Entry: 10b819838; end: 10b81989f;  */

void FUN_10b819838(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  undefined8 param_5)

{
  double dVar1;
  
  dVar1 = param_1;
  func_0x00010bfb68e0();
  _CGRectStandardize();
  param_1 = param_1 + param_4 * -0.5;
  FUN_10b81974c(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (dVar1,param_1,param_3,param_4,param_5,PTR_s_setFrame__112645658);
  return;
}



/* Entry: 10b8198a0; end: 10b8198b3;  */

void FUN_10b8198a0(void)

{
  func_0x00010bfb68e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb42c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectGetMinY_1103475a0)();
  return;
}



/* Entry: 10b8198b4; end: 10b8198eb;  */

void FUN_10b8198b4(undefined8 param_1)

{
  func_0x00010bfb68e0();
  _CGRectStandardize();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setFrame__112645658);
  return;
}



/* Entry: 10b8198ec; end: 10b8198ff;  */

void FUN_10b8198ec(void)

{
  func_0x00010bfb68e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectGetMaxX_110347578)();
  return;
}



/* Entry: 10b819900; end: 10b819937;  */

void FUN_10b819900(double param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  func_0x00010bfb68e0();
  _CGRectStandardize();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1 - param_3,param_4,PTR_s_setFrame__112645658);
  return;
}



/* Entry: 10b819938; end: 10b81994b;  */

void FUN_10b819938(void)

{
  func_0x00010bfb68e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectGetMinX_110347598)();
  return;
}



/* Entry: 10b81994c; end: 10b819983;  */

void FUN_10b81994c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bfb68e0();
  _CGRectStandardize();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,param_2,PTR_s_setFrame__112645658);
  return;
}



/* Entry: 10b819984; end: 10b819997;  */

void FUN_10b819984(void)

{
  func_0x00010bfb68e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectGetMaxY_110347580)();
  return;
}



/* Entry: 10b819998; end: 10b819a3f;  */

void FUN_10b819998(undefined8 param_1)

{
  func_0x00010bfb68e0();
  _CGRectStandardize();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setFrame__112645658);
  return;
}



/* Entry: 10b819a40; end: 10b819a53;  */

void FUN_10b819a40(void)

{
  func_0x00010bfb68e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb4a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectStandardize_1103475f8)();
  return;
}



/* Entry: 10b819a54; end: 10b819ad3;  */

void FUN_10b819a54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bfb68e0();
  _CGRectStandardize();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,param_2,param_3,PTR_s_setFrame__112645658);
  return;
}



/* Entry: 10b819ad4; end: 10b819afb;  */

void FUN_10b819ad4(void)

{
  func_0x00010bf20c00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectGetWidth_1103475a8)();
  return;
}



/* Entry: 10b819afc; end: 10b819b0b;  */

void FUN_10b819afc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setAssociatedObject_11034d300)
            (param_1,PTR_s_dragGestureRecognizer_1125bff30,param_3,0x301);
  return;
}



/* Entry: 10b819b0c; end: 10b819b83;  */

void FUN_10b819b0c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = param_1;
  _objc_getAssociatedObject(param_1,PTR_s_dragGestureRecognizer_1125bff30);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68;
    _objc_alloc(PTR__OBJC_CLASS___UIPanGestureRecognizer_1126b1a68);
    func_0x00010c050900();
    func_0x00010c191680(param_1);
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b819b84; end: 10b819bf7;  */

void FUN_10b819b84(undefined8 param_1)

{
  func_0x00010bf89620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178280();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b819bf8; end: 10b819ccb;  */

void FUN_10b819bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar2;
  
  uVar4 = param_3;
  func_0x00010bfb68e0();
  uVar2 = param_5;
  func_0x00010bfb68e0();
  iVar1 = (int)uVar2;
  _CGRectContainsRect(0,0,uVar4);
  if (iVar1 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    func_0x00010c2971a0(param_1,param_2,param_3,param_4,PTR__OBJC_CLASS___NSValue_1126afdf8);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(param_5,PTR_s_handle_1125d1978,puVar3,0x301);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 10b819ccc; end: 10b819d37;  */

undefined8 FUN_10b819ccc(undefined8 param_1,undefined8 param_2)

{
  _objc_getAssociatedObject(param_2,PTR_s_handle_1125d1978);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1080();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10b819d38; end: 10b819d87;  */

void FUN_10b819d38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_draggingStartedBlock_1125bff68;
  _objc_retainBlock(param_3);
  _objc_setAssociatedObject(param_1,puVar1,param_3,0x301);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b819d88; end: 10b819d93;  */

void FUN_10b819d88(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getAssociatedObject_11034d240)(param_1,PTR_s_draggingStartedBlock_1125bff68);
  return;
}



/* Entry: 10b819d94; end: 10b819de3;  */

void FUN_10b819d94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_draggingMovedBlock_1125bff58;
  _objc_retainBlock(param_3);
  _objc_setAssociatedObject(param_1,puVar1,param_3,0x301);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b819de4; end: 10b819def;  */

void FUN_10b819de4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getAssociatedObject_11034d240)(param_1,PTR_s_draggingMovedBlock_1125bff58);
  return;
}



/* Entry: 10b819df0; end: 10b819e3f;  */

void FUN_10b819df0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_s_draggingEndedBlock_1125bff50;
  _objc_retainBlock(param_3);
  _objc_setAssociatedObject(param_1,puVar1,param_3,0x301);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b819e40; end: 10b819e4b;  */

void FUN_10b819e40(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getAssociatedObject_11034d240)(param_1,PTR_s_draggingEndedBlock_1125bff50);
  return;
}



/* Entry: 10b819e4c; end: 10b81a16f;  */

void FUN_10b819e4c(double param_1,double param_2,ulong param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  
  _objc_retain(param_5);
  func_0x00010c09ef00(param_5);
  uVar1 = param_3;
  func_0x00010bfcff40();
  _CGRectContainsPoint();
  if (((uVar1 & 1) != 0) || (lVar2 = param_5, func_0x00010c252440(), lVar2 != 1)) {
    func_0x00010befd820(param_3);
    lVar2 = param_5;
    func_0x00010c252440();
    if (lVar2 == 1) {
      uVar1 = param_3;
      func_0x00010bf89700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar1 != 0) {
        uVar1 = param_3;
        func_0x00010bf89700();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(uVar1 + 0x10))();
        _objc_release(uVar1);
      }
    }
    lVar2 = param_5;
    func_0x00010c252440();
    if (lVar2 == 2) {
      uVar1 = param_3;
      func_0x00010bf896c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar1 != 0) {
        uVar1 = param_3;
        func_0x00010bf896c0();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(uVar1 + 0x10))();
        _objc_release(uVar1);
      }
    }
    lVar2 = param_5;
    func_0x00010c252440();
    if (lVar2 == 3) {
      uVar1 = param_3;
      func_0x00010bf896a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar1 != 0) {
        uVar1 = param_3;
        func_0x00010bf896a0();
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(uVar1 + 0x10))();
        _objc_release(uVar1);
      }
    }
    uVar1 = param_3;
    func_0x00010c262ca0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27adc0(param_5);
    dVar3 = param_1;
    _objc_release(uVar1);
    func_0x00010bfb68e0(param_3);
    _CGRectGetMinX();
    param_1 = param_1 + dVar3;
    func_0x00010bfb68e0(param_3);
    _CGRectGetMinY();
    param_2 = param_2 + dVar3;
    func_0x00010bfb68e0(param_3);
    _CGRectGetWidth();
    dVar4 = dVar3;
    func_0x00010bfb68e0(param_3);
    _CGRectGetHeight();
    func_0x00010c19f0e0(param_1,param_2,dVar3,dVar4,param_3);
    func_0x00010c262ca0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219ba0(0,0,param_5);
    _objc_release(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10b81a170; end: 10b81a1a3;  */

void FUN_10b81a170(undefined8 param_1)

{
  func_0x00010bf89620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c195460();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b81a1a4; end: 10b81a28f;  */

void FUN_10b81a1a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = param_4;
  func_0x00010bf89620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c3c20();
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bf89620(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c8320();
  _objc_release(uVar1);
  func_0x00010bf2f700(param_4);
  uVar1 = param_4;
  func_0x00010bf89620(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c178280();
  _objc_release(uVar1);
  func_0x00010bfb68e0(param_4);
  func_0x00010bfb68e0(param_4);
  func_0x00010c1a5140(0,0,param_3,param_4);
  uVar1 = param_4;
  func_0x00010bf89620(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9040(param_4,param_5,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b81a290; end: 10b81a2df;  */

void FUN_10b81a290(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c297340(PTR__OBJC_CLASS___NSValue_1126afdf8);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(param_1,&PTR_PTR_110d62408,puVar1,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b81a2e0; end: 10b81a34b;  */

undefined8 FUN_10b81a2e0(undefined8 param_1,undefined8 param_2)

{
  _objc_getAssociatedObject(param_2,&PTR_PTR_110d62408);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc2aa0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10b81a34c; end: 10b81a3cf;  */

void FUN_10b81a34c(double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

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
  func_0x00010bfe3aa0(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CGRectContainsPoint_110347550)
            (dVar1 + dVar4,dVar3 + dVar2,param_3 - (dVar4 + dVar6),param_4 - (dVar2 + dVar5),param_1
             ,param_2);
  return;
}



/* Entry: 10b81a3d0; end: 10b81a56b;  */

void FUN_10b81a3d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined *puVar11;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c219b60(param_5,param_6,0);
  puVar9 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar1 = param_5;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_5;
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf493a0(puVar1,param_6,puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_5;
  puStack_78 = puVar4;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c262ca0(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = param_5;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010bf493a0(puVar5,param_6,puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar7;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_6,&puStack_78,2);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar8;
  func_0x00010beef8c0(puVar9);
  iVar10 = (int)puVar11;
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(param_5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  if (iVar10 == 0) {
    func_0x00010c245f60();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf20c00();
    _UIGraphicsBeginImageContextWithOptions(param_3,param_4,0,0);
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar1;
    _UIGraphicsGetCurrentContext();
    func_0x00010c12fc60(puVar1,param_6,puVar9);
    _objc_release(puVar1);
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    _UIGraphicsEndImageContext();
    puVar9 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
    func_0x00010c01bf60();
    func_0x00010c182220();
    _objc_release(puVar1);
    puVar1 = puVar9;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10b81a56c; end: 10b81a623;  */

void FUN_10b81a56c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined8 param_6,int param_7)

{
  undefined *puVar1;
  
  if (param_7 == 0) {
    func_0x00010c245f60();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf20c00();
    _UIGraphicsBeginImageContextWithOptions(param_3,param_4,0,0);
    func_0x00010c08c0e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_5;
    _UIGraphicsGetCurrentContext();
    func_0x00010c12fc60(param_5,param_6,puVar1);
    _objc_release(param_5);
    _UIGraphicsGetImageFromCurrentImageContext();
    _objc_retainAutoreleasedReturnValue();
    _UIGraphicsEndImageContext();
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
    func_0x00010c01bf60();
    func_0x00010c182220();
    _objc_release(param_5);
    param_5 = puVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 10b81a624; end: 10b81a6f7;  */

void FUN_10b81a624(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1;
  _class_getInstanceMethod();
  lVar2 = param_1;
  _class_getInstanceMethod(param_1,param_3);
  if ((lVar1 != 0) && (lVar2 != 0)) {
    lVar3 = lVar2;
    _method_getImplementation(lVar2);
    lVar4 = lVar2;
    _method_getTypeEncoding(lVar2);
    lVar5 = param_1;
    _class_addMethod(param_1,param_2,lVar3,lVar4);
    if ((int)lVar5 != 0) {
      lVar2 = lVar1;
      _method_getImplementation(lVar1);
      _method_getTypeEncoding(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdd3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__class_replaceMethod_11034d140)(param_1,param_3,lVar2,lVar1);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__method_exchangeImplementations_11034d178)(lVar1,lVar2);
    return;
  }
  return;
}



/* Entry: 10b81a6f8; end: 10b81a763;  */

void FUN_10b81a6f8(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  pcStack_28 = FUN_10b81a764;
  puStack_20 = &UNK_110848088;
  if (lRam00000001137fbbd0 != -1) {
    uStack_18 = param_1;
    func_0x000107c27d9c(0x1137fbbd0,&puStack_38);
  }
  return;
}



/* Entry: 10b81a764; end: 10b81a7af;  */

void FUN_10b81a764(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 0x20);
  _objc_opt_class();
  FUN_10b81a624();
  puVar2 = PTR_s_sc_didMoveToWindow_112630ca8;
  puVar1 = PTR_s_didMoveToWindow_112527020;
  lVar3 = lVar8;
  _class_getInstanceMethod();
  lVar4 = lVar8;
  _class_getInstanceMethod(lVar8,puVar2);
  if ((lVar3 != 0) && (lVar4 != 0)) {
    lVar5 = lVar4;
    _method_getImplementation(lVar4);
    lVar6 = lVar4;
    _method_getTypeEncoding(lVar4);
    lVar7 = lVar8;
    _class_addMethod(lVar8,puVar1,lVar5,lVar6);
    if ((int)lVar7 != 0) {
      lVar4 = lVar3;
      _method_getImplementation(lVar3);
      _method_getTypeEncoding(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdd3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__class_replaceMethod_11034d140)(lVar8,puVar2,lVar4,lVar3);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__method_exchangeImplementations_11034d178)(lVar3,lVar4);
    return;
  }
  return;
}



/* Entry: 10b81a7b0; end: 10b81a89f;  */

void FUN_10b81a7b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  lVar1 = lRam00000001137fbbd8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 != 0) {
    uVar2 = param_1;
    _objc_opt_class();
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    _objc_opt_class();
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar4,param_2,&PTR____CFConstantStringClassReference_110f8a9b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    func_0x00010c08e2e0(lVar1,param_2,puVar4);
    _objc_release(puVar4);
  }
  func_0x00010c14dfe0(param_1,param_2,param_3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b81a8a0; end: 10b81a94f;  */

void FUN_10b81a8a0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  lVar1 = lRam00000001137fbbd8;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar1 != 0) {
    uVar2 = param_1;
    _objc_opt_class();
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110f8a9d8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    func_0x00010c08e2e0(lVar1,param_2,puVar3);
    _objc_release(puVar3);
  }
  func_0x00010c14ca20(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b81a950; end: 10b81a98b;  */

void FUN_10b81a950(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = uRam00000001137fbbd8;
  uRam00000001137fbbd8 = uVar2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c14de90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_sc_swizzleSelectors_1126311c0);
  return;
}



/* Entry: 10b81a98c; end: 10b81a993;  */

void FUN_10b81a98c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0fcb50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_pixelIsTransparentAtLoc_extensio_11261ccf0,5)
  ;
  return;
}



/* Entry: 10b81a994; end: 10b81aa7b;  */

bool FUN_10b81a994(double param_1,double param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  uVar2 = param_5 << 1 | 1;
  uVar7 = (ulong)(uVar2 * uVar2);
  uVar4 = uVar7;
  _calloc(uVar7,1);
  uVar5 = uVar4;
  _CGBitmapContextCreate();
  _CGContextTranslateCTM((double)param_5 - param_1,(double)param_5 - param_2);
  func_0x00010c08c0e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12fc60();
  _objc_release(param_3);
  _CGContextRelease(uVar5);
  lVar6 = 0;
  do {
    cVar1 = *(char *)(uVar4 + lVar6);
    bVar3 = uVar7 - 1 != lVar6;
    lVar6 = lVar6 + 1;
  } while (cVar1 == '\0' && bVar3);
  _free(uVar4);
  return cVar1 == '\0';
}



/* Entry: 10b81aa7c; end: 10b81aa83;  */

void FUN_10b81aa7c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14f8f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_scdiag_becomeKeyWindow_112631858);
  return;
}



/* Entry: 10b81aa84; end: 10b81aaaf;  */

void FUN_10b81aa84(void)

{
  undefined8 uVar1;
  
  uVar1 = uRam00000001137fbbe0;
  _objc_retain(uRam00000001137fbbe0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b81aab0; end: 10b81ab13; -[SIGActionBarContentView layoutSubviews] */

void FUN_10b81aab0(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270b320;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beedda0();
  _objc_release(param_1);
  return;
}


