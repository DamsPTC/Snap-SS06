/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108b9d768; end: 108b9d77f;  */

void FUN_108b9d768(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108b9d780; end: 108b9d9cb;  */

void FUN_108b9d780(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0dfd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_78,*(undefined8 *)(param_1 + 0x28));
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  dVar14 = 1.60807493534087e-314;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_108b9d9cc;
  puStack_b0 = &UNK_110ab5708;
  uStack_90 = *(undefined8 *)(param_1 + 0x40);
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  uStack_80 = param_3;
  _objc_retain(uVar12);
  puVar9 = auStack_78;
  uStack_a8 = uVar12;
  _objc_copyWeak(auStack_88);
  _objc_retain(param_2);
  lStack_a0 = param_2;
  _objc_retain(uVar1);
  ppuVar2 = &puStack_c8;
  uStack_98 = uVar1;
  _objc_retainBlock();
  puVar3 = PTR_PTR_1126b4bc0;
  _objc_alloc();
  func_0x00010c05ace0();
  uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b19f8;
  func_0x00010bf1aae0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar4;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar3;
  puVar11 = puVar5;
  func_0x00010bfaa020(uVar12);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(uVar12);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  _objc_release(uStack_98);
  _objc_release(lStack_a0);
  _objc_destroyWeak(auStack_88);
  _objc_release(uStack_a8);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  __Unwind_Resume();
  _objc_retain(puVar9);
  _objc_retain(puVar10);
  _objc_retain(puVar11);
  if (puVar9 == (undefined1 *)0x0) {
    param_2 = param_2 + 0x40;
    _objc_loadWeakRetained(param_2);
    func_0x00010be0fdc0();
    puVar13 = (undefined1 *)0x0;
  }
  else {
    func_0x00010c23d0a0(puVar9);
    dVar16 = dVar14 * 0.79;
    func_0x00010c23d0a0(puVar9);
    dVar15 = 0.5;
    func_0x00010c23d0a0(puVar9);
    puVar13 = puVar9;
    func_0x00010bf5c780((dVar14 - dVar16) * 0.5,dVar15 * 0.11,dVar16,dVar16,puVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x38) + 8) + 0x28);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar1);
    _objc_release(puVar3);
    lVar6 = *(long *)(*(long *)(*(long *)(param_2 + 0x38) + 8) + 0x28);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010bf529e0();
    lVar8 = *(long *)(param_2 + 0x20);
    func_0x00010bf529e0();
    _objc_release(lVar6);
    if (lVar7 != lVar8) goto LAB_108b9db34;
    param_2 = param_2 + 0x40;
    _objc_loadWeakRetained(param_2);
    func_0x00010bdfdd20();
  }
  _objc_release(param_2);
LAB_108b9db34:
  _objc_release(puVar11);
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar13);
  return;
}



/* Entry: 108b9d9cc; end: 108b9db63;  */

void FUN_108b9d9cc(double param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_3 == 0) {
    param_2 = param_2 + 0x40;
    _objc_loadWeakRetained(param_2);
    func_0x00010be0fdc0();
    lVar5 = 0;
  }
  else {
    func_0x00010c23d0a0(param_3);
    dVar8 = param_1 * 0.79;
    func_0x00010c23d0a0(param_3);
    dVar7 = 0.5;
    func_0x00010c23d0a0(param_3);
    lVar5 = param_3;
    func_0x00010bf5c780((param_1 - dVar8) * 0.5,dVar7 * 0.11,dVar8,dVar8,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x38) + 8) + 0x28);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar6);
    _objc_release(puVar1);
    lVar2 = *(long *)(*(long *)(*(long *)(param_2 + 0x38) + 8) + 0x28);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf529e0();
    lVar4 = *(long *)(param_2 + 0x20);
    func_0x00010bf529e0();
    _objc_release(lVar2);
    if (lVar3 != lVar4) goto LAB_108b9db34;
    param_2 = param_2 + 0x40;
    _objc_loadWeakRetained(param_2);
    func_0x00010bdfdd20();
  }
  _objc_release(param_2);
LAB_108b9db34:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 108b9db64; end: 108b9dc23; -[SCBitmojiAvatarImagesProvider _didFetchAllAvatarImages:] */

void FUN_108b9db64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf002e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c246d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  _objc_opt_new(PTR__OBJC_CLASS___UIImage_1126aea68);
  uVar1 = param_3;
  func_0x00010c0e0340(param_3,param_2,uVar2,puVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar3);
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x18),param_2,uVar1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108b9dc24; end: 108b9dc77; -[SCBitmojiAvatarImagesProvider _fetchAvatarImagesFailed] */

void FUN_108b9dc24(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                      &PTR____CFConstantStringClassReference_110ee9978,1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43ca0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108b9dc78; end: 108b9ddd3; -[SCBitmojiAvatarImagesProvider _fetchSilhouetteImage] */

void FUN_108b9dc78(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aebd8;
  func_0x00010c14e3a0(PTR_PTR_1126aebd8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126aebf0;
  _objc_alloc(PTR_PTR_1126aebf0);
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c011b80(puVar3);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010bf88c20(uVar1);
  _objc_release(puVar3);
  _objc_release(param_1);
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 108b9ddd4; end: 108b9de1b;  */

void FUN_108b9ddd4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfe020();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108b9de1c; end: 108b9de57; -[SCBitmojiAvatarImagesProvider _didFetchSilhouetteImage:] */

void FUN_108b9de1c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010bdf6220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf43d60(*(undefined8 *)(param_1 + 0x28),param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108b9de58; end: 108b9deeb; -[SCBitmojiAvatarImagesProvider _cropSilhouetteImageToSquare:] */

void FUN_108b9de58(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  _objc_retain(param_5);
  func_0x00010c23d0a0(param_5);
  dVar2 = 0.92;
  param_2 = param_2 * 0.92;
  func_0x00010c23d0a0(param_5);
  dVar3 = 0.5;
  func_0x00010c23d0a0(param_5);
  uVar1 = param_5;
  func_0x00010bf5c780((dVar2 - param_2) * 0.5,dVar3 * -0.06,param_2,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108b9deec; end: 108b9df3f; -[SCBitmojiAvatarImagesProvider .cxx_destruct] */

void FUN_108b9deec(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108b9df40; end: 108b9dfc3;  */

void FUN_108b9df40(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  double dVar1;
  
  _CGRectIntegral();
  dVar1 = param_1;
  func_0x00010c14e120(param_5);
  _UIGraphicsBeginImageContextWithOptions(param_3,param_4,dVar1,0);
  func_0x00010bf897c0(-param_1,-param_2,param_5);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 108b9dfc4; end: 108b9e27f; -[SCBitmojiCameraPermissionRequestBusinessLogic initWithDelegate:permissionRequester:imageProvider:logger:cameraBIPAScopeExposer:cameraBIPAScopeServices:cameraBIPAConfiguration:circumstanceEngine:goToAppHelper:appInfoProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_108b9dfc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126fd5b8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((long)puVar1 + (long)_DAT_112777ebc,param_3);
    lVar3 = (long)_DAT_112777ec0;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112777ec4;
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112777ec8;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112777ecc;
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112777ed0;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112777ed4;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112777ed8;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_10;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112777edc;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_11;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112777ee0;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_12;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112777ee4) = 0;
    uVar2 = param_10;
    func_0x00010bf1f440();
    *(char *)((long)puVar1 + (long)_DAT_112777ee8) = (char)uVar2;
  }
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



/* Entry: 108b9e280; end: 108b9e4b3; -[SCBitmojiCameraPermissionRequestBusinessLogic begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9e280(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126fd5b8;
  lStack_70 = param_1;
  _objc_msgSendSuper2(&lStack_70,PTR_s_begin_1125a3840);
  func_0x00010c0a1a80(*(undefined8 *)(param_1 + _DAT_112777ec8));
  _objc_initWeak(auStack_78,param_1);
  lVar4 = (long)_DAT_112777ec4;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010bf13020(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_108b9e4b4;
  puStack_88 = &UNK_1108434e0;
  _objc_copyWeak(auStack_80,auStack_78);
  puVar3 = PTR_PTR_1126ae790;
  lVar2 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcd0e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar1);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c23c660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_a8,auStack_78);
  puVar3 = PTR_PTR_1126ae790;
  lVar2 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcd0e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar1);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(uVar1);
  func_0x00010be0fe60(param_1);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 108b9e4b4; end: 108b9e583;  */

void FUN_108b9e4b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be15660();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108b9e584; end: 108b9e603; -[SCBitmojiCameraPermissionRequestBusinessLogic _fetchedAvatarImages:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9e584(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_112777eec;
  lVar1 = *(long *)(param_1 + lVar3);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = param_3;
    _objc_release(uVar2);
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108b9e604; end: 108b9e67f; -[SCBitmojiCameraPermissionRequestBusinessLogic _fetchedSilhouetteImages:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9e604(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_112777ef0;
  if (*(long *)(param_1 + lVar2) == 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_3;
    _objc_release(uVar1);
    func_0x00010bf8e1a0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_1 + 0x10))();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108b9e680; end: 108b9e733; -[SCBitmojiCameraPermissionRequestBusinessLogic _fetchBitmojiAppUpsellEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9e680(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112777ee0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06d3c0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112777ed8);
    func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110dfe298,0,0);
    *(char *)(param_1 + _DAT_112777ee4) = (char)uVar2;
    if ((int)uVar2 != 0) {
      func_0x00010bf8e1a0();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 108b9e734; end: 108b9e7f7; -[SCBitmojiCameraPermissionRequestBusinessLogic viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9e734(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar3 = PTR_PTR_1126daf20;
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_1 + _DAT_112777eec);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112777ef0);
  uVar1 = *(undefined1 *)(param_1 + _DAT_112777ef4);
  uVar2 = *(undefined1 *)(param_1 + _DAT_112777ef8);
  puVar4 = puVar3;
  FUN_108ba0898();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff61e0(puVar3,param_2,uVar5,uVar6,uVar1,uVar2,0,0,puVar4,0,
                      *(undefined1 *)(param_1 + _DAT_112777ee4));
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 108b9e7f8; end: 108b9e8b3; -[SCBitmojiCameraPermissionRequestBusinessLogic handleAction:] */

void FUN_108b9e7f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108b9e8b4;
  puStack_20 = &UNK_110842e18;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x108b9e8bc;
  puStack_48 = &UNK_110842e18;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x108b9e8c4;
  puStack_70 = &UNK_110842e18;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x108b9e8cc;
  puStack_98 = &UNK_110842e18;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  uStack_c8 = 0x108b9e8d4;
  puStack_c0 = &UNK_110842e18;
  uStack_b8 = param_1;
  uStack_90 = param_1;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bf580(param_3,param_2,&puStack_38,&puStack_60,&puStack_88,&puStack_b0,&puStack_d8);
  return;
}



/* Entry: 108b9e8b4; end: 108b9e8db;  */

void FUN_108b9e8b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be7fad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__pressedContinueButton_11257d850);
  return;
}



/* Entry: 108b9e8dc; end: 108b9e95f; -[SCBitmojiCameraPermissionRequestBusinessLogic _requestBitmojiCameraPermissionIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9e8dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112777ec0);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c083180();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    param_1 = param_1 + _DAT_112777ebc;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf1b000();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be7d6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__presentPrePrompt_11257cf58);
  return;
}



/* Entry: 108b9e960; end: 108b9ea4b; -[SCBitmojiCameraPermissionRequestBusinessLogic _pressedContinueButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9e960(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x00010c0b28c0(*(undefined8 *)(param_1 + _DAT_112777ec8));
  uVar1 = *(undefined8 *)(param_1 + _DAT_112777ed4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c2332e0();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    _objc_initWeak(auStack_38,param_1);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_108b9ea4c;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x000107c312d0("APPSTORE",&puStack_60);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be90990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__requestBitmojiCameraPermissionI_112581c00);
  return;
}



/* Entry: 108b9ea4c; end: 108b9eb43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9ea4c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112777ed0);
    _objc_copyWeak(auStack_48,param_1 + 0x20);
    func_0x00010bf23be0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(lVar1 + _DAT_112777ecc));
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 108b9eb44; end: 108b9ec0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9eb44(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112777ecc);
    func_0x00010c12e1c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_38,param_1 + 0x20);
    func_0x00010c2a4ae0(uVar2);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 108b9ec10; end: 108b9ec3b;  */

void FUN_108b9ec10(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be90980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108b9ec3c; end: 108b9ec83; -[SCBitmojiCameraPermissionRequestBusinessLogic _pressedSkipButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9ec3c(long param_1)

{
  func_0x00010c0b2d80(*(undefined8 *)(param_1 + _DAT_112777ec8));
  param_1 = param_1 + _DAT_112777ebc;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1b0a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108b9ec84; end: 108b9ecd7; -[SCBitmojiCameraPermissionRequestBusinessLogic _acceptedPrePrompt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9ec84(long param_1,undefined8 param_2)

{
  func_0x00010c0a2300(*(undefined8 *)(param_1 + _DAT_112777ec8),param_2,1);
  func_0x00010be90a40(param_1);
  param_1 = param_1 + _DAT_112777ebc;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1b0c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108b9ecd8; end: 108b9ed2b; -[SCBitmojiCameraPermissionRequestBusinessLogic _deniedPrePrompt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9ecd8(long param_1,undefined8 param_2)

{
  func_0x00010c0a2300(*(undefined8 *)(param_1 + _DAT_112777ec8),param_2,0);
  func_0x00010be03100(param_1);
  param_1 = param_1 + _DAT_112777ebc;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1b0e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108b9ed2c; end: 108b9ee2f; -[SCBitmojiCameraPermissionRequestBusinessLogic _linkExisting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9ed2c(long param_1)

{
  undefined1 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined1 auStack_38 [8];
  undefined1 uStack_30;
  undefined1 auStack_28 [8];
  
  func_0x00010c0b2ae0(*(undefined8 *)(param_1 + _DAT_112777ec8));
  uVar1 = (undefined1)*(undefined8 *)(param_1 + _DAT_112777ed8);
  func_0x00010bf1f440();
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x108b9edf0;
  puStack_40 = &UNK_11084ceb8;
  uStack_30 = uVar1;
  _objc_copyWeak(auStack_38,auStack_28);
  func_0x000107c312d0("APPSTORE",&puStack_58);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 108b9ee30; end: 108b9eec3; -[SCBitmojiCameraPermissionRequestBusinessLogic _createDeferToAppRequest] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9ee30(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126daf28;
  _objc_alloc(PTR_PTR_1126daf28);
  func_0x00010c04a800();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112777edc);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b420();
  _objc_release(uVar2);
  _objc_release(puVar1);
  param_1 = param_1 + _DAT_112777ebc;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1b040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108b9eec4; end: 108b9ef3b; -[SCBitmojiCameraPermissionRequestBusinessLogic _goToBitmojiApp] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9eec4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112777edc);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcd3a0();
  _objc_release(uVar1);
  param_1 = param_1 + _DAT_112777ebc;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf1b040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108b9ef3c; end: 108b9ef8b; -[SCBitmojiCameraPermissionRequestBusinessLogic _presentPrePrompt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9ef3c(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112777ef4) = 1;
  *(undefined1 *)(param_1 + _DAT_112777ef8) = 1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108b9ef8c; end: 108b9efd7; -[SCBitmojiCameraPermissionRequestBusinessLogic _dismissPrePrompt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9ef8c(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112777ef4) = 0;
  *(undefined1 *)(param_1 + _DAT_112777ef8) = 0;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108b9efd8; end: 108b9f0e7; -[SCBitmojiCameraPermissionRequestBusinessLogic _requestCameraPermission] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9efd8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  *(undefined1 *)(param_1 + _DAT_112777ef4) = 0;
  *(undefined1 *)(param_1 + _DAT_112777ef8) = 1;
  lVar1 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
  _objc_initWeak(auStack_38,param_1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112777ec0);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c1347a0(uVar2);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 108b9f0e8; end: 108b9f11b;  */

void FUN_108b9f0e8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be90a60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108b9f11c; end: 108b9f1a7; -[SCBitmojiCameraPermissionRequestBusinessLogic _requestCameraPermissionDidCompleteWithGranted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9f11c(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  
  func_0x00010c0b1700(*(undefined8 *)(param_1 + _DAT_112777ec8));
  *(undefined1 *)(param_1 + _DAT_112777ef8) = 0;
  lVar1 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_112777ebc;
  _objc_loadWeakRetained(param_1);
  if (param_3 == 0) {
    func_0x00010bf1afe0();
  }
  else {
    func_0x00010bf1b000();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108b9f1a8; end: 108b9f1b7; -[SCBitmojiCameraPermissionRequestBusinessLogic uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108b9f1a8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112777efc);
}



/* Entry: 108b9f1b8; end: 108b9f1f7; -[SCBitmojiCameraPermissionRequestBusinessLogic setUiContainer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9f1b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112777efc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108b9f1f8; end: 108b9f2e3; -[SCBitmojiCameraPermissionRequestBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9f1f8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112777efc,0);
  _objc_storeStrong(param_1 + _DAT_112777ee0,0);
  _objc_storeStrong(param_1 + _DAT_112777edc,0);
  _objc_storeStrong(param_1 + _DAT_112777ed8,0);
  _objc_storeStrong(param_1 + _DAT_112777ed4,0);
  _objc_storeStrong(param_1 + _DAT_112777ed0,0);
  _objc_storeStrong(param_1 + _DAT_112777ecc,0);
  _objc_storeStrong(param_1 + _DAT_112777ec4,0);
  _objc_storeStrong(param_1 + _DAT_112777ef0,0);
  _objc_storeStrong(param_1 + _DAT_112777eec,0);
  _objc_storeStrong(param_1 + _DAT_112777ec8,0);
  _objc_storeStrong(param_1 + _DAT_112777ec0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112777ebc);
  return;
}



/* Entry: 108b9f2e4; end: 108b9f3cb; -[SCBitmojiCameraPermissionRequestViewController initWithScreen:valdiRuntimeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_108b9f2e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126fd5c0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112777f00;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112777f04;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bfdf5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18f820();
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108b9f3cc; end: 108b9f3d3; -[SCBitmojiCameraPermissionRequestViewController loadScrollView] */

undefined8 FUN_108b9f3cc(void)

{
  return 0;
}



/* Entry: 108b9f3d4; end: 108b9f423; -[SCBitmojiCameraPermissionRequestViewController viewDidLoad] */

void FUN_108b9f3d4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126fd5c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010be3a720(param_1);
  func_0x00010bec1580(param_1);
  return;
}



/* Entry: 108b9f424; end: 108b9f4cb; -[SCBitmojiCameraPermissionRequestViewController viewWillLayoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9f424(long param_1)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126fd5c0;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewWillLayoutSubviews_112526958);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112777f08));
  _objc_release(lVar1);
  lVar1 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c19f0e0(*(undefined8 *)(param_1 + _DAT_112777f0c));
  _objc_release(lVar1);
  return;
}



/* Entry: 108b9f4cc; end: 108b9f57b; -[SCBitmojiCameraPermissionRequestViewController _startRenderingViewModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9f4cc(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112777f00);
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c250380(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 108b9f57c; end: 108b9f5c3;  */

void FUN_108b9f57c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beaa120();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108b9f5c4; end: 108b9f66b; -[SCBitmojiCameraPermissionRequestViewController _setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9f5c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar2 = param_3;
  func_0x00010bf1aa60(param_3);
  uVar3 = param_3;
  func_0x00010c2900a0(param_3);
  func_0x00010bea9900(param_1,param_2,uVar2,uVar3);
  lVar1 = (long)_DAT_112777f0c;
  func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_112777f08),param_2,
                      *(undefined8 *)(param_1 + lVar1));
  uVar2 = param_3;
  func_0x00010c22f9c0();
  if ((int)uVar2 == 0) {
    func_0x00010be35ba0(param_1);
  }
  else {
    func_0x00010be04bc0(param_1);
  }
  uVar2 = param_3;
  func_0x00010c22fa40(param_3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar1),param_2,(uint)uVar2 ^ 1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108b9f66c; end: 108b9f90f; -[SCBitmojiCameraPermissionRequestViewController _setUpRegPromptValdiViewWithBitmojiAppUpsell:useDarkerSkipButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9f66c(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  ppuVar3 = &puStack_f0;
  _objc_initWeak(auStack_78,param_1);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_108b9f910;
  puStack_88 = &UNK_1108434b0;
  _objc_copyWeak(auStack_80,auStack_78);
  ppuVar1 = &puStack_a0;
  _objc_retainBlock(ppuVar1);
  puStack_c8 = puVar4;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x108b9f93c;
  puStack_b0 = &UNK_1108434b0;
  _objc_copyWeak(auStack_a8,auStack_78);
  ppuVar2 = &puStack_c8;
  _objc_retainBlock(ppuVar2);
  puStack_f0 = puVar4;
  uStack_e8 = 0xc2000000;
  uStack_e0 = 0x108b9f968;
  puStack_d8 = &UNK_1108434b0;
  _objc_copyWeak(auStack_d0,auStack_78);
  _objc_retainBlock(&puStack_f0);
  puVar4 = PTR_PTR_1126daf30;
  _objc_alloc_init(PTR_PTR_1126daf30);
  func_0x00010c1d3aa0();
  func_0x00010c1d3dc0(puVar4);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b2360(puVar4);
  _objc_release(puVar5);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21d6e0(puVar4);
  _objc_release(puVar5);
  func_0x00010c1d3b20(puVar4);
  puVar5 = PTR_PTR_1126daf38;
  _objc_alloc();
  uVar6 = *(undefined8 *)(param_1 + _DAT_112777f04);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40();
  uVar8 = *(undefined8 *)(param_1 + _DAT_112777f08);
  *(undefined **)(param_1 + _DAT_112777f08) = puVar5;
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(param_1);
  _objc_release(puVar4);
  _objc_release(ppuVar3);
  _objc_destroyWeak(auStack_d0);
  _objc_release(ppuVar2);
  _objc_destroyWeak(auStack_a8);
  _objc_release(ppuVar1);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  return;
}



/* Entry: 108b9f910; end: 108b9f993;  */

void FUN_108b9f910(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bde87c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108b9f994; end: 108b9fa47; -[SCBitmojiCameraPermissionRequestViewController _initSubviews] */

void FUN_108b9f994(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be3a1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__initPrePromptView_11256c210);
  return;
}



/* Entry: 108b9fa48; end: 108b9fea7; -[SCBitmojiCameraPermissionRequestViewController _initPrePromptView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9fa48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  func_0x00010c013de0();
  lVar15 = (long)_DAT_112777f0c;
  uVar14 = *(undefined8 *)(param_5 + lVar15);
  *(undefined **)(param_5 + lVar15) = puVar1;
  _objc_release(uVar14);
  _objc_release(lVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = 0x3fc3333333333333;
  puVar3 = puVar1;
  func_0x00010bf414e0(0x3fc3333333333333);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(param_5 + lVar15));
  _objc_release(puVar3);
  _objc_release(puVar1);
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60();
  _objc_release(lVar2);
  _objc_initWeak(auStack_b8,param_5);
  puVar1 = PTR_PTR_1126daf40;
  _objc_alloc();
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bfb68e0();
  func_0x000108ba08b0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x000108ba08c8();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126daf48;
  _objc_opt_new(PTR_PTR_1126daf48);
  puVar6 = puVar3;
  func_0x000108ba08e0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x000108ba08f8();
  _objc_retainAutoreleasedReturnValue();
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_108b9fea8;
  puStack_c8 = &UNK_110ab5798;
  _objc_copyWeak(auStack_c0,auStack_b8);
  _objc_copyWeak(auStack_e8,auStack_b8);
  func_0x00010c0144e0(uVar14,param_2,param_3,param_4);
  lVar16 = (long)_DAT_112777f10;
  uVar14 = *(undefined8 *)(param_5 + lVar16);
  *(undefined **)(param_5 + lVar16) = puVar1;
  _objc_release(uVar14);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar2);
  func_0x00010c160fc0(*(undefined8 *)(param_5 + lVar15));
  func_0x00010befbb60(*(undefined8 *)(param_5 + lVar15));
  func_0x00010c219b60(*(undefined8 *)(param_5 + lVar16));
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar8 = *(undefined8 *)(param_5 + lVar16);
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_5 + lVar15);
  func_0x00010bf34860(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = uVar8;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = *(undefined8 *)(param_5 + lVar16);
  uStack_b0 = uVar14;
  func_0x00010bf348e0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_5 + lVar15);
  func_0x00010bf348e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar10;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_a8 = uVar12;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar14);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_destroyWeak(auStack_e8);
  _objc_destroyWeak(auStack_c0);
  puVar13 = auStack_b8;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_e8);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_b8);
  __Unwind_Resume(puVar13);
  puVar13 = puVar13 + 0x20;
  _objc_loadWeakRetained(puVar13);
  func_0x00010be76b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar13);
  return;
}



/* Entry: 108b9fea8; end: 108b9feff;  */

void FUN_108b9fea8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be76b40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108b9ff00; end: 108b9ff4b; -[SCBitmojiCameraPermissionRequestViewController _continueButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9ff00(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112777f00);
  puVar1 = PTR_PTR_1126daf50;
  func_0x00010c110020(PTR_PTR_1126daf50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108b9ff4c; end: 108b9ff97; -[SCBitmojiCameraPermissionRequestViewController _skipButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9ff4c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112777f00);
  puVar1 = PTR_PTR_1126daf50;
  func_0x00010c23df20(PTR_PTR_1126daf50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108b9ff98; end: 108b9ffe3; -[SCBitmojiCameraPermissionRequestViewController _prePromptAccepted] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9ff98(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112777f00);
  puVar1 = PTR_PTR_1126daf50;
  func_0x00010beecae0(PTR_PTR_1126daf50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108b9ffe4; end: 108ba002f; -[SCBitmojiCameraPermissionRequestViewController _prePromptDenied] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108b9ffe4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112777f00);
  puVar1 = PTR_PTR_1126daf50;
  func_0x00010bf6d8a0(PTR_PTR_1126daf50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ba0030; end: 108ba007b; -[SCBitmojiCameraPermissionRequestViewController _linkButtonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ba0030(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112777f00);
  puVar1 = PTR_PTR_1126daf50;
  func_0x00010c0996e0(PTR_PTR_1126daf50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf8dd80(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ba007c; end: 108ba016b; -[SCBitmojiCameraPermissionRequestViewController _displayPrePrompt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ba007c(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
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
  
  lVar2 = (long)_DAT_112777f10;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010c074c20();
  if (iVar1 != 0) {
    _CGAffineTransformMakeScale(&uStack_50,0x3f847ae147ae147b,0x3f847ae147ae147b);
    uStack_78 = uStack_48;
    uStack_80 = uStack_50;
    uStack_68 = uStack_38;
    uStack_70 = uStack_40;
    uStack_58 = uStack_28;
    uStack_60 = uStack_30;
    func_0x00010c219960(*(undefined8 *)(param_1 + lVar2),param_2,&uStack_80);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar2),param_2,0);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_108ba016c;
    puStack_90 = &UNK_110842e18;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_108ba01b4;
    puStack_b8 = &UNK_110841f20;
    lStack_b0 = param_1;
    lStack_88 = param_1;
    func_0x00010bf03460(0x3fc999999999999a,0,0x3fe6666666666666,0,PTR__OBJC_CLASS___UIView_1126aec20
                        ,param_2,0x20000,&puStack_a8,&puStack_d0);
  }
  return;
}



/* Entry: 108ba016c; end: 108ba01b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ba016c(long param_1,undefined8 param_2)

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
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112777f10),param_2,
                      &uStack_40);
  return;
}



/* Entry: 108ba01b4; end: 108ba01d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ba01b4(long param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c195030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112777f10),
               PTR_s_setEnablePulsingRingAnimation__112642e28,1);
    return;
  }
  return;
}



/* Entry: 108ba01d4; end: 108ba020b; -[SCBitmojiCameraPermissionRequestViewController _hidePrePrompt] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ba01d4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112777f10;
  func_0x00010c195020(*(undefined8 *)(param_1 + lVar1),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_setHidden__1126479f8,1);
  return;
}



/* Entry: 108ba020c; end: 108ba029b; -[SCBitmojiCameraPermissionRequestViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108ba020c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112777f08,0);
  _objc_storeStrong(param_1 + _DAT_112777f10,0);
  _objc_storeStrong(param_1 + _DAT_112777f0c,0);
  _objc_storeStrong(param_1 + _DAT_112777f14,0);
  _objc_storeStrong(param_1 + _DAT_112777f18,0);
  _objc_storeStrong(param_1 + _DAT_112777f04,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112777f00,0);
  return;
}



/* Entry: 108ba029c; end: 108ba02cf; -[SCBitmojiCameraPrePromptDialogLayoutProvider allowButtonFont] */

void FUN_108ba029c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf25520();
                    /* WARNING: Could not recover jumptable at 0x00010c266f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,*(undefined8 *)PTR__UIFontWeightBold_110345c30,puVar1,
             PTR_s_systemFontOfSize_weight__112677600);
  return;
}



/* Entry: 108ba02d0; end: 108ba02df; -[SCBitmojiCameraPrePromptDialogLayoutProvider denyButtonColorForState:] */

void FUN_108ba02d0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color__11266c8c8,0x7f);
  return;
}



/* Entry: 108ba02e0; end: 108ba055f; -[SCBitmojiCameraPermissionRequestUIRouterActions initWithUIContainer:permissionRequester:imageProvider:logger:cameraBIPAScopeExposer:cameraBIPAScopeServices:cameraBIPAConfiguration:valdiRuntimeProvider:circumstanceEngine:appInfoProvider:goToAppHelper:] */

undefined8 *
FUN_108ba02e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126fd5c8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[3];
    puVar1[3] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_13;
    _objc_release(uVar2);
  }
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



/* Entry: 108ba0560; end: 108ba0683; -[SCBitmojiCameraPermissionRequestUIRouterActions showCameraPermissionRequestPageWithDelegate:] */

void FUN_108ba0560(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126daf58;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c00ab00();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126aec60;
  _objc_alloc();
  func_0x00010bff9c80();
  uVar4 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar2;
  _objc_release(uVar4);
  puVar2 = PTR_PTR_1126daf60;
  _objc_alloc(PTR_PTR_1126daf60);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c150e00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c042540(puVar2,param_2,uVar4,*(undefined8 *)(param_1 + 0x48));
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010c038f40();
  func_0x00010c21b220(puVar1,param_2,puVar3);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x10),param_2,puVar2);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 108ba0684; end: 108ba072b; -[SCBitmojiCameraPermissionRequestUIRouterActions .cxx_destruct] */

void FUN_108ba0684(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 108ba072c; end: 108ba07c7; -[SCBitmojiCameraPermissionRequestWorkflow initWithRouter:delegate:] */

undefined1 *
FUN_108ba072c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fd5d0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108ba07c8; end: 108ba081f; -[SCBitmojiCameraPermissionRequestWorkflow beginWorkflow] */

void FUN_108ba07c8(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108ba0820;
  puStack_20 = &UNK_110ab57c8;
  lStack_18 = param_1;
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 108ba0820; end: 108ba086b;  */

void FUN_108ba0820(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  lVar1 = lVar1 + 0x10;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c236660(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108ba086c; end: 108ba0897; -[SCBitmojiCameraPermissionRequestWorkflow .cxx_destruct] */

void FUN_108ba086c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108ba0898; end: 108ba090f;  */

void FUN_108ba0898(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ee9a38;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110ee9a38,
                      &PTR____CFConstantStringClassReference_110ee9a58,0);
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



/* Entry: 108ba0910; end: 108ba093b; +[SCGrapheneBitmojiCameraPermissionMetric signupPageReach] */

void FUN_108ba0910(void)

{
  _objc_alloc(PTR_PTR_1126daf08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ba093c; end: 108ba0967; +[SCGrapheneBitmojiCameraPermissionMetric loginSignupPageview] */

void FUN_108ba093c(void)

{
  _objc_alloc(PTR_PTR_1126daf08);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ba0968; end: 108ba0a07; -[SCGrapheneBitmojiCameraPermissionMetric description] */

void FUN_108ba0968(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110ee9af8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110ee9af8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126fd5d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_description_1125b9278);
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar1;
  func_0x00010c25ce40(ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 108ba0a08; end: 108ba0b53; -[SCGrapheneRegistry bitmojiCameraPermissionGraphene] */

void FUN_108ba0a08(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x108ba0a90;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam000000011372d990 != -1) {
    func_0x000107c27d9c(0x11372d990,&puStack_48);
  }
  uVar1 = uRam000000011372d988;
  _objc_retain(uRam000000011372d988);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108ba0b54; end: 108ba0b9f; +[SCBitmojiCameraPermissionRequestAction acceptPrePrompt] */

void FUN_108ba0b54(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126daf50;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ba0ba0; end: 108ba0beb; +[SCBitmojiCameraPermissionRequestAction denyPrePrompt] */

void FUN_108ba0ba0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126daf50;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ba0bec; end: 108ba0c37; +[SCBitmojiCameraPermissionRequestAction linkExisting] */

void FUN_108ba0bec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126daf50;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ba0c38; end: 108ba0c7f; +[SCBitmojiCameraPermissionRequestAction pressContinueButton] */

void FUN_108ba0c38(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126daf50;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ba0c80; end: 108ba0ccb; +[SCBitmojiCameraPermissionRequestAction skip] */

void FUN_108ba0c80(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126daf50;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108ba0ccc; end: 108ba0cef; -[SCBitmojiCameraPermissionRequestAction copyWithZone:] */

undefined8 FUN_108ba0ccc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ba0cf0; end: 108ba0cf7; -[SCBitmojiCameraPermissionRequestAction hash] */

undefined8 FUN_108ba0cf0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108ba0cf8; end: 108ba0d3b; -[SCBitmojiCameraPermissionRequestAction internalInit] */

void FUN_108ba0cf8(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126fd5e0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108ba0d3c; end: 108ba0dc3; -[SCBitmojiCameraPermissionRequestAction isEqual:] */

bool FUN_108ba0d3c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108ba0dc4; end: 108ba0ebf; -[SCBitmojiCameraPermissionRequestAction matchPressContinueButton:skip:acceptPrePrompt:denyPrePrompt:linkExisting:] */

void FUN_108ba0dc4(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    lVar1 = param_3;
    if ((lVar2 != 0) && (lVar1 = param_4, lVar2 != 1)) goto LAB_108ba0e70;
  }
  else {
    lVar1 = param_5;
    if ((lVar2 != 2) && ((lVar1 = param_6, lVar2 != 3 && (lVar1 = param_7, lVar2 != 4))))
    goto LAB_108ba0e70;
  }
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))();
  }
LAB_108ba0e70:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108ba0ec0; end: 108ba100f; -[SCBitmojiCameraPermissionRequestViewModel initWithAvatarImages:silhouetteImage:shouldDisplayPrePrompt:shouldDisplayPromptOverlay:bitmojiFullbodyAssetTreatment:enableFullBodyAssetPage:continueButtonText:continueButtonImage:bitmojiAppUpsellEnabled:useDarkerSkipButton:] */

undefined8 *
FUN_108ba0ec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9,undefined8 param_10,undefined4 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126fd5e8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = param_5;
    *(undefined1 *)((long)puVar1 + 9) = param_6;
    puVar1[4] = param_7;
    *(undefined1 *)((long)puVar1 + 10) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 0xb) = (undefined1)param_11;
    *(undefined1 *)((long)puVar1 + 0xc) = param_11._1_1_;
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108ba1010; end: 108ba1033; -[SCBitmojiCameraPermissionRequestViewModel copyWithZone:] */

undefined8 FUN_108ba1010(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108ba1034; end: 108ba10e7; -[SCBitmojiCameraPermissionRequestViewModel hash] */

undefined8 * FUN_108ba1034(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  long lStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uStack_68 = (ulong)*(byte *)(param_1 + 8);
  uStack_60 = (ulong)*(byte *)(param_1 + 9);
  lVar5 = *(long *)(param_1 + 0x20);
  uStack_48 = *(undefined8 *)(param_1 + 0x28);
  lStack_58 = -lVar5;
  if (-1 < lVar5) {
    lStack_58 = lVar5;
  }
  uStack_50 = (ulong)*(byte *)(param_1 + 10);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 0xb);
  uStack_30 = (ulong)*(byte *)(param_1 + 0xc);
  puVar3 = &uStack_78;
  uStack_40 = uVar1;
  func_0x000107c3191c(puVar3,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_108ba11f8:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108ba1204;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((((ulong)puVar4 & 1) != 0) &&
        ((((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) &&
           (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))) &&
          (puVar3[4] == param_3[4])) &&
         ((*(char *)((long)puVar3 + 10) == *(char *)((long)param_3 + 10) &&
          (*(char *)((long)puVar3 + 0xb) == *(char *)((long)param_3 + 0xb))))))) &&
       (*(char *)((long)puVar3 + 0xc) == *(char *)((long)param_3 + 0xc))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[5];
          if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = (undefined8 *)puVar3[6];
            if (puVar6 != (undefined8 *)param_3[6]) {
              func_0x00010c071ae0();
              goto LAB_108ba1204;
            }
            goto LAB_108ba11f8;
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108ba1204:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108ba10e8; end: 108ba121f; -[SCBitmojiCameraPermissionRequestViewModel isEqual:] */

long FUN_108ba10e8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108ba11f8:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108ba1204;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((uVar2 & 1) != 0) &&
        ((((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
           (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) &&
          (*(long *)(param_1 + 0x20) == *(long *)(param_3 + 0x20))) &&
         ((*(char *)(param_1 + 10) == *(char *)(param_3 + 10) &&
          (*(char *)(param_1 + 0xb) == *(char *)(param_3 + 0xb))))))) &&
       (*(char *)(param_1 + 0xc) == *(char *)(param_3 + 0xc))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if (lVar3 != *(long *)(param_3 + 0x30)) {
              func_0x00010c071ae0();
              goto LAB_108ba1204;
            }
            goto LAB_108ba11f8;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108ba1204:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108ba1220; end: 108ba1227; -[SCBitmojiCameraPermissionRequestViewModel avatarImages] */

undefined8 FUN_108ba1220(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108ba1228; end: 108ba122f; -[SCBitmojiCameraPermissionRequestViewModel silhouetteImage] */

undefined8 FUN_108ba1228(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108ba1230; end: 108ba1237; -[SCBitmojiCameraPermissionRequestViewModel shouldDisplayPrePrompt] */

undefined1 FUN_108ba1230(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108ba1238; end: 108ba123f; -[SCBitmojiCameraPermissionRequestViewModel shouldDisplayPromptOverlay] */

undefined1 FUN_108ba1238(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 108ba1240; end: 108ba1247; -[SCBitmojiCameraPermissionRequestViewModel bitmojiFullbodyAssetTreatment] */

undefined8 FUN_108ba1240(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108ba1248; end: 108ba124f; -[SCBitmojiCameraPermissionRequestViewModel enableFullBodyAssetPage] */

undefined1 FUN_108ba1248(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 108ba1250; end: 108ba1257; -[SCBitmojiCameraPermissionRequestViewModel continueButtonText] */

undefined8 FUN_108ba1250(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108ba1258; end: 108ba125f; -[SCBitmojiCameraPermissionRequestViewModel continueButtonImage] */

undefined8 FUN_108ba1258(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 108ba1260; end: 108ba1267; -[SCBitmojiCameraPermissionRequestViewModel bitmojiAppUpsellEnabled] */

undefined1 FUN_108ba1260(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 108ba1268; end: 108ba126f; -[SCBitmojiCameraPermissionRequestViewModel useDarkerSkipButton] */

undefined1 FUN_108ba1268(long param_1)

{
  return *(undefined1 *)(param_1 + 0xc);
}



/* Entry: 108ba1270; end: 108ba12b7; -[SCBitmojiCameraPermissionRequestViewModel .cxx_destruct] */

void FUN_108ba1270(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}


