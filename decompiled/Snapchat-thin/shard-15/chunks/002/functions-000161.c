/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b965f54; end: 10b965f83;  */

undefined8 FUN_10b965f54(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],param_2[2],*(uint *)(param_2 + 3) & 1);
  return 0;
}



/* Entry: 10b965f84; end: 10b965fd3;  */

void FUN_10b965f84(void)

{
  func_0x00010b9661f0();
  func_0x00010b9661e0();
  func_0x00010b9661b0(FUN_10b966120);
  func_0x00010b9661f8();
  func_0x00010b9661cc();
  func_0x00010b9661d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b965fd4; end: 10b965fff;  */

undefined8 FUN_10b965fd4(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,param_2[1],*(uint *)(param_2 + 2) & 1);
  return 0;
}



/* Entry: 10b966000; end: 10b96604f;  */

void FUN_10b966000(void)

{
  func_0x00010b9661f0();
  func_0x00010b9661e0();
  func_0x00010b9661b0(0x10b966154);
  func_0x00010b9661f8();
  func_0x00010b9661cc();
  func_0x00010b9661d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b966050; end: 10b966073;  */

undefined8 FUN_10b966050(code *param_1,undefined8 *param_2)

{
  (*param_1)(param_2[1],*param_2);
  return 0;
}



/* Entry: 10b966074; end: 10b9660c3;  */

void FUN_10b966074(void)

{
  func_0x00010b9661f0();
  func_0x00010b9661e0();
  func_0x00010b9661b0(0x10b966184);
  func_0x00010b9661f8();
  func_0x00010b9661cc();
  func_0x00010b9661d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b9660c4; end: 10b96611f;  */

undefined8 FUN_10b9660c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e1b38;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  func_0x00010b9661d8();
  return param_1;
}



/* Entry: 10b966120; end: 10b9661af;  */

void FUN_10b966120(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10b9661b0; end: 10b9661ff;  */

void FUN_10b9661b0(undefined8 param_1)

{
  undefined8 uStack0000000000000018;
  
  uStack0000000000000018 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10b966200; end: 10b966217; +[SCValdiINavigatorPageConfig valdiMarshallableObjectDescriptor] */

void FUN_10b966200(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_110d79fb8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b966218; end: 10b96627b; -[SCValdiImage initWithImage:] */

undefined1 * FUN_10b966218(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  
  puVar1 = &stack0xffffffffffffffd0;
  func_0x00010b9666dc();
  _objc_msgSendSuper2(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    _objc_retain();
    uVar2 = *(undefined8 *)(puVar1 + 8);
    *(undefined8 *)(puVar1 + 8) = unaff_x19;
    _objc_release(uVar2);
  }
  func_0x00010b9666d4();
  return puVar1;
}



/* Entry: 10b96627c; end: 10b9662c7; -[SCValdiImage toPNG] */

void FUN_10b96627c(long param_1)

{
  func_0x00010bdc2ae0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    _UIImagePNGRepresentation(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010b9666d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b9662c8; end: 10b9662eb; -[SCValdiImage UIImageRepresentation] */

void FUN_10b9662c8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b9662ec; end: 10b9662f3; -[SCValdiImage size] */

void FUN_10b9662ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23d0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_size_11266ce50);
  return;
}



/* Entry: 10b9662f4; end: 10b9663d3; +[SCValdiImage imageWithModuleName:resourcePath:] */

void FUN_10b9662f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_4;
  func_0x00010c25cfc0(param_4,param_2,&PTR____CFConstantStringClassReference_110db3638,
                      &PTR____CFConstantStringClassReference_110dc1338);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8260(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,uVar1,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      param_1 = 0;
      goto LAB_10b9663a8;
    }
  }
  _objc_alloc(param_1);
  func_0x00010c01bf60();
  func_0x00010b9666ec();
LAB_10b9663a8:
  _objc_release(uVar1);
  func_0x00010b9666d4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b9663d4; end: 10b966543; +[SCValdiImage imageWithFilePath:error:] */

void FUN_10b9663d4(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = param_4;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe9380(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    param_1 = (undefined *)0x0;
    if (param_4 != (undefined8 *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
      func_0x00010bf69bc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfacbe0();
      puVar3 = puVar2;
      func_0x00010b9666ec();
      puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      if (((ulong)puVar2 & 1) != 0) {
        func_0x00010b9666fc();
        puVar4 = puVar3;
      }
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      puVar7 = (undefined8 *)0x0;
      func_0x00010bf99240(puVar5,param_2,&PTR____CFConstantStringClassReference_110daafd8,0,puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *param_4 = puVar5;
      _objc_release(puVar4);
      param_1 = (undefined *)0x0;
    }
  }
  else {
    _objc_alloc();
    func_0x00010c01bf60();
  }
  _objc_release();
  func_0x00010b9666d4();
  func_0x00010b966710(uVar8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    uVar8 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe93c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSError_1126ae858;
    if (ppuVar6 == (undefined **)0x0) {
      func_0x00010b9666fc();
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      ppuVar6 = &PTR____CFConstantStringClassReference_110daafd8;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *puVar7 = puVar5;
      func_0x00010b9666ec();
      param_1 = (undefined *)0x0;
    }
    else {
      func_0x00010bfe9800();
      _objc_retainAutoreleasedReturnValue();
      param_1 = puVar1;
    }
    func_0x00010b9666d4();
    func_0x00010b966710(uVar8);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      if (ppuVar6 == (undefined **)0x0) {
        param_1 = (undefined *)0x0;
      }
      else {
        func_0x00010b9666dc();
        _objc_alloc(param_1);
        func_0x00010c01bf60();
        func_0x00010b9666d4();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b966544; end: 10b96663b; +[SCValdiImage imageWithData:error:] */

void FUN_10b966544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 in_ZR;
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe93c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (ppuVar1 == (undefined **)0x0) {
    func_0x00010b9666fc();
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_autorelease();
    *param_4 = puVar2;
    func_0x00010b9666ec();
    param_1 = 0;
  }
  else {
    func_0x00010bfe9800();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010b9666d4();
  func_0x00010b966710(uVar3);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    if (ppuVar1 == (undefined **)0x0) {
      param_1 = 0;
    }
    else {
      func_0x00010b9666dc();
      _objc_alloc(param_1);
      func_0x00010c01bf60();
      func_0x00010b9666d4();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10b96663c; end: 10b96667b; +[SCValdiImage imageWithUIImage:] */

void FUN_10b96663c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 unaff_x20;
  
  if (param_3 == 0) {
    unaff_x20 = 0;
  }
  else {
    func_0x00010b9666dc();
    _objc_alloc();
    func_0x00010c01bf60();
    func_0x00010b9666d4();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 10b96667c; end: 10b9666c7; +[SCValdiImage urlStringForBundleName:imageName:] */

void FUN_10b96667c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  
  if (param_3 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f9df98;
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f9dfb8;
  }
  func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b9666c8; end: 10b966723; -[SCValdiImage .cxx_destruct] */

void FUN_10b9666c8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b966724; end: 10b9667a3; -[SCValdiImageViewInner setValdiImage:shouldFlip:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b966724(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 in_w3;
  undefined1 *extraout_x8;
  undefined1 *extraout_x8_00;
  undefined1 *puVar3;
  long unaff_x19;
  long unaff_x20;
  long lVar4;
  
  FUN_10b9673cc();
  lVar4 = (long)_DAT_112795e0c;
  uVar1 = *(long *)(unaff_x20 + lVar4) == unaff_x19;
  if ((bool)uVar1) {
    func_0x00010b967470();
    puVar3 = extraout_x8_00;
    if ((bool)uVar1) {
      uVar2 = 0;
      goto LAB_10b96678c;
    }
LAB_10b96677c:
    *puVar3 = in_w3;
  }
  else {
    func_0x00010b967450();
    uVar2 = *(undefined8 *)(unaff_x20 + lVar4);
    *(long *)(unaff_x20 + lVar4) = unaff_x19;
    _objc_release(uVar2);
    func_0x00010b967470();
    puVar3 = extraout_x8;
    if (!(bool)uVar1) goto LAB_10b96677c;
  }
  func_0x00010bed9700();
  uVar2 = 1;
LAB_10b96678c:
  func_0x00010b967410();
  return uVar2;
}



/* Entry: 10b9667a4; end: 10b966807; -[SCValdiImageViewInner setTintColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b9667a4(long param_1,undefined8 param_2,long param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270c048;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setTintColor__112663280);
  if ((bool)*(char *)(param_1 + _DAT_112795e14) != (param_3 != 0)) {
    *(bool *)(param_1 + _DAT_112795e14) = param_3 != 0;
    func_0x00010bed9700(param_1);
  }
  return;
}



/* Entry: 10b966808; end: 10b9668b3; -[SCValdiImageViewInner _updateImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b966808(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112795e0c);
  func_0x00010bdc2ae0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_1 + _DAT_112795e10) == '\x01') {
    func_0x00010bfe9480(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b967438();
  }
  if (*(char *)(param_1 + _DAT_112795e14) == '\x01') {
    func_0x00010bfe9720(uVar1,param_2,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b967438();
  }
  func_0x00010c1a9f00(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b9668b4; end: 10b9668c3; -[SCValdiImageViewInner shouldFlip] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b9668b4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112795e10);
}



/* Entry: 10b9668c4; end: 10b9668d7; -[SCValdiImageViewInner .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b9668c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112795e0c,0);
  return;
}



/* Entry: 10b9668d8; end: 10b966997; -[SCValdiImageView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b9668d8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_11270c050;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126e1b40;
    _objc_alloc();
    func_0x00010c01bf60();
    lVar4 = (long)_DAT_112795e18;
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar2;
    _objc_release(uVar3);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar4));
    func_0x00010befbb60(puVar1);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112795e1c) = 0x3ff0000000000000;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112795e20) = 0x3ff0000000000000;
    *(undefined8 *)((long)puVar1 + (long)_DAT_112795e24) = 0;
    func_0x00010c17d4c0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10b966998; end: 10b966a87; -[SCValdiImageView onValdiAssetDidChange:shouldFlip:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b966998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  long unaff_x20;
  long lVar3;
  
  FUN_10b9673cc();
  puVar1 = PTR_PTR_1126b27a8;
  func_0x00010b967450();
  _objc_opt_class();
  func_0x00010b9674b8();
  if (((ulong)puVar1 & 1) == 0) {
    unaff_x19 = 0;
  }
  _objc_retain(unaff_x19);
  func_0x00010b967410();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112795e18);
  func_0x00010c21fee0(uVar2,param_4,unaff_x19,param_6);
  lVar3 = (long)_DAT_112795e28;
  if ((*(long *)(unaff_x20 + lVar3) != 0) && ((int)uVar2 != 0)) {
    FUN_10b97f424();
    func_0x00010c23d0a0(unaff_x19);
    func_0x00010b97f870(uVar2);
    func_0x00010c23d0a0(unaff_x19);
    func_0x00010b97f870(param_2,uVar2);
    func_0x00010c0f9540(*(undefined8 *)(unaff_x20 + lVar3),param_4,uVar2);
    func_0x00010b967460();
  }
  _objc_release(unaff_x19);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b966a88; end: 10b966aef; -[SCValdiImageView onLoad:loadedAsset:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b966a88(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_3 != *(long *)(param_1 + _DAT_112795e2c)) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_112795e18);
  _objc_retain(param_4);
  func_0x00010c2306c0(uVar1);
  func_0x00010c0e77c0(param_1,param_2,param_4,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10b966af0; end: 10b966bcf; -[SCValdiImageView _applyAsset:shouldFlip:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b966af0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  func_0x00010b9673fc();
  lVar4 = (long)_DAT_112795e2c;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 != param_3) {
    _objc_retain(lVar3);
    func_0x00010b967450();
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = param_3;
    _objc_release(uVar1);
    lVar5 = (long)_DAT_112795e30;
    if (*(char *)(param_1 + lVar5) == '\x01') {
      *(undefined1 *)(param_1 + lVar5) = 0;
      func_0x00010c12cfc0(lVar3,param_2,param_1);
    }
    func_0x00010c0e77c0(param_1,param_2,0,param_4);
    if (*(long *)(param_1 + lVar4) != 0) {
      *(undefined1 *)(param_1 + lVar5) = 1;
      uVar1 = *(undefined8 *)(param_1 + lVar4);
      puVar2 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9a20(uVar1,param_2,param_1,1,0,0,puVar2);
      func_0x00010b967430();
    }
    func_0x00010b967438();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b966bd0; end: 10b966c8f; -[SCValdiImageView valdi_setObjectFit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b966bd0(ulong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  
  FUN_10b9673cc();
  if (unaff_x19 == 0) {
    func_0x00010c182220(*(undefined8 *)(unaff_x20 + _DAT_112795e18),param_2,0);
    uVar2 = 1;
    goto LAB_10b966c78;
  }
  func_0x00010b967450();
  func_0x00010b967458();
  if ((param_1 & 1) == 0) {
    func_0x00010b967458();
    if ((param_1 & 1) != 0) {
      uVar2 = 0;
      goto LAB_10b966c60;
    }
    func_0x00010b967458();
    iVar1 = (int)param_1;
    if ((param_1 & 1) != 0) {
      uVar2 = 2;
      goto LAB_10b966c60;
    }
    func_0x00010b967458();
    if (iVar1 != 0) {
      uVar2 = 1;
      goto LAB_10b966c60;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 4;
LAB_10b966c60:
    func_0x00010c182220(*(undefined8 *)(unaff_x20 + _DAT_112795e18),param_2,uVar2);
    uVar2 = 1;
  }
  func_0x00010b967410();
LAB_10b966c78:
  func_0x00010b967410();
  return uVar2;
}



/* Entry: 10b966c90; end: 10b966cb3; -[SCValdiImageView valdi_setImageTintColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b966c90(long param_1)

{
  func_0x00010c216160(*(undefined8 *)(param_1 + _DAT_112795e18));
  return 1;
}



/* Entry: 10b966cb4; end: 10b966d0f; -[SCValdiImageView setAsset:tintColor:flipOnRtl:] */

void FUN_10b966cb4(void)

{
  int in_w4;
  
  FUN_10b9673cc();
  func_0x00010c295e40();
  if (in_w4 != 0) {
    func_0x00010bf8d060();
  }
  func_0x00010bdcda80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b966d10; end: 10b966eb3; -[SCValdiImageView valdi_setContentTransform:animator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b966d10(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **unaff_x24;
  undefined8 unaff_d8;
  
  func_0x00010b9673fc();
  _objc_retain(param_4);
  if (param_3 == 0) {
    *(undefined8 *)(param_1 + _DAT_112795e1c) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + _DAT_112795e20) = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + _DAT_112795e24) = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    _objc_opt_class();
    func_0x00010b9674b8();
    if (((ulong)puVar2 & 1) == 0) {
      param_3 = 0;
    }
    _objc_retain(param_3);
    lVar3 = param_3;
    func_0x00010bf529e0();
    if (lVar3 != 3) {
      func_0x00010b967488();
      uVar4 = 0;
      goto LAB_10b966e88;
    }
    func_0x00010c0dfd40(param_3,param_2,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x00010b967418();
    func_0x00010b9673ec();
    func_0x00010b967430();
    func_0x00010b967490();
    func_0x00010b967404();
    *(undefined8 *)(param_1 + _DAT_112795e1c) = unaff_d8;
    func_0x00010c0dfd40(param_3,param_2,1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b96749c();
    func_0x00010b967418();
    func_0x00010b9673ec();
    func_0x00010b967430();
    func_0x00010b967490();
    func_0x00010b967404();
    *(undefined8 *)(param_1 + _DAT_112795e20) = unaff_d8;
    func_0x00010c0dfd40(param_3,param_2,2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b96749c();
    func_0x00010b967418();
    func_0x00010b9673ec();
    func_0x00010b967430();
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_111186260;
    if (unaff_x24 != (undefined **)0x0) {
      ppuVar1 = unaff_x24;
    }
    func_0x00010bf885a0(ppuVar1);
    func_0x00010b967404();
    *(undefined8 *)(param_1 + _DAT_112795e24) = unaff_d8;
    func_0x00010b967488();
  }
  func_0x00010bf08220(param_1);
  uVar4 = 1;
LAB_10b966e88:
  func_0x00010b967438();
  func_0x00010b967410();
  return uVar4;
}



/* Entry: 10b966eb4; end: 10b966eb7; -[SCValdiImageView valdi_applySlowClipping:animator:] */

void FUN_10b966eb4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c17d4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setClipsToBounds__11263cf50);
  return;
}



/* Entry: 10b966eb8; end: 10b967033; +[SCValdiImageView bindAttributes:] */

void FUN_10b966eb8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010b9673fc();
  func_0x00010bf1a020(param_3);
  uVar1 = param_3;
  func_0x00010bf1a0c0();
  func_0x00010b9674a8();
  func_0x00010b9673dc();
  func_0x00010b9674a8();
  func_0x00010b9673dc();
  func_0x00010b9674a8();
  func_0x00010b9673dc();
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a200(param_3);
  func_0x00010b967430();
  func_0x00010bf1a140(param_3);
  func_0x00010bf1a1e0(param_3);
  func_0x00010b967410();
  func_0x00010b967488();
  _objc_release(uVar1);
  func_0x00010b967438();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c295e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_valdi_setImageTintColor__1126831b8);
  return;
}



/* Entry: 10b967034; end: 10b967087;  */

void FUN_10b967034(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c295e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_valdi_setImageTintColor__1126831b8);
  return;
}



/* Entry: 10b967088; end: 10b9670b7; -[SCValdiImageView valdi_setOnImageDecodedCallback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b967088(void)

{
  undefined8 uVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_10b9673cc();
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112795e28);
  *(undefined8 *)(unaff_x20 + _DAT_112795e28) = unaff_x19;
  _objc_release(uVar1);
  return 1;
}



/* Entry: 10b9670b8; end: 10b9670e7; -[SCValdiImageView willEnqueueIntoValdiPool] */

bool FUN_10b9670b8(undefined *param_1)

{
  undefined *puVar1;
  
  _objc_opt_class();
  puVar1 = PTR_PTR_1126d7b90;
  _objc_opt_class(PTR_PTR_1126d7b90);
  return param_1 == puVar1;
}



/* Entry: 10b9670e8; end: 10b9670eb; -[SCValdiImageView clipsToBoundsByDefault] */

undefined8 FUN_10b9670e8(void)

{
  return 1;
}



/* Entry: 10b9670ec; end: 10b96712b; -[SCValdiImageView layoutSubviews] */

void FUN_10b9670ec(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_11270c050;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf08220(param_1);
  return;
}



/* Entry: 10b96712c; end: 10b967293; -[SCValdiImageView applyContentTransform] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b96712c(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
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
  
  func_0x00010bf20c00();
  func_0x00010bf20c00(param_5);
  lVar1 = (long)_DAT_112795e18;
  lVar2 = (long)_DAT_112795e1c;
  lVar3 = (long)_DAT_112795e20;
  dVar6 = param_3 * *(double *)(param_5 + lVar2);
  dVar7 = param_4 * *(double *)(param_5 + lVar3);
  func_0x00010c1739e0(0,0,dVar6,dVar7,*(undefined8 *)(param_5 + lVar1));
  func_0x00010c17a6a0(dVar6 * 0.5 - (dVar6 - param_3) * 0.5,dVar7 * 0.5 - (dVar7 - param_4) * 0.5,
                      *(undefined8 *)(param_5 + lVar1));
  uStack_78 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  uStack_80 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
  uStack_68 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  uStack_70 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  uStack_58 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_60 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  dVar6 = *(double *)(param_5 + lVar3);
  uVar4 = 0xbff0000000000000;
  if ((*(double *)(param_5 + lVar2) < 0.0) || (uVar4 = 0x3ff0000000000000, dVar6 < 0.0)) {
    uVar5 = 0xbff0000000000000;
    if (0.0 <= dVar6) {
      uVar5 = 0x3ff0000000000000;
    }
    uStack_b0 = uStack_80;
    uStack_a8 = uStack_78;
    uStack_a0 = uStack_70;
    uStack_98 = uStack_68;
    uStack_90 = uStack_60;
    uStack_88 = uStack_58;
    _CGAffineTransformScale(&uStack_80,uVar4,uVar5,&uStack_b0);
  }
  if (*(double *)(param_5 + _DAT_112795e24) != 0.0) {
    uStack_d8 = uStack_78;
    uStack_e0 = uStack_80;
    uStack_c8 = uStack_68;
    uStack_d0 = uStack_70;
    uStack_b8 = uStack_58;
    uStack_c0 = uStack_60;
    _CGAffineTransformRotate(&uStack_b0,&uStack_e0);
    uStack_78 = uStack_a8;
    uStack_80 = uStack_b0;
    uStack_68 = uStack_98;
    uStack_70 = uStack_a0;
    uStack_58 = uStack_88;
    uStack_60 = uStack_90;
  }
  uStack_a8 = uStack_78;
  uStack_b0 = uStack_80;
  uStack_98 = uStack_68;
  uStack_a0 = uStack_70;
  uStack_88 = uStack_58;
  uStack_90 = uStack_60;
  func_0x00010c219960(*(undefined8 *)(param_5 + lVar1),param_6,&uStack_b0);
  return;
}



/* Entry: 10b967294; end: 10b967323; -[SCValdiImageView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10b967294(double param_1,double param_2,long param_3)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  lVar1 = (long)_DAT_112795e2c;
  if (*(long *)(param_3 + lVar1) == 0) {
    dVar3 = *(double *)PTR__CGSizeZero_110347620;
    dVar2 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    dVar2 = -1.0;
    if (param_1 != 1.79769313486232e+308) {
      dVar2 = param_1;
    }
    dVar4 = -1.0;
    if (param_2 != 1.79769313486232e+308) {
      dVar4 = param_2;
    }
    dVar3 = dVar2;
    func_0x00010c0c3f40(dVar2,dVar4);
    func_0x00010c0c3ea0(dVar2,dVar4,*(undefined8 *)(param_3 + lVar1));
  }
  auVar5._8_8_ = dVar2;
  auVar5._0_8_ = dVar3;
  return auVar5;
}



/* Entry: 10b967324; end: 10b967333; -[SCValdiImageView intrinsicContentSize] */

void FUN_10b967324(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x7fefffffffffffff,0x7fefffffffffffff,param_1,PTR_s_sizeThatFits__11266cf90);
  return;
}



/* Entry: 10b967334; end: 10b967337; -[SCValdiImageView isAccessibilityElement] */

undefined8 FUN_10b967334(void)

{
  return 1;
}



/* Entry: 10b967338; end: 10b967347; -[SCValdiImageView accessibilityLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b967338(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beecf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112795e18),PTR_s_accessibilityLabel_112598d68);
  return;
}



/* Entry: 10b967348; end: 10b967357; -[SCValdiImageView accessibilityHint] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b967348(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beece70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112795e18),PTR_s_accessibilityHint_112598d40);
  return;
}



/* Entry: 10b967358; end: 10b967367; -[SCValdiImageView accessibilityValue] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b967358(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beecfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112795e18),PTR_s_accessibilityValue_112598d98);
  return;
}



/* Entry: 10b967368; end: 10b967377; -[SCValdiImageView accessibilityTraits] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b967368(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010beecfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112795e18),PTR_s_accessibilityTraits_112598d90);
  return;
}



/* Entry: 10b967378; end: 10b96737b; -[SCValdiImageView requiresLayoutWhenAnimatingBounds] */

undefined8 FUN_10b967378(void)

{
  return 1;
}



/* Entry: 10b96737c; end: 10b9673cb; -[SCValdiImageView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b96737c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112795e28,0);
  _objc_storeStrong(param_1 + _DAT_112795e18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112795e2c,0);
  return;
}



/* Entry: 10b9673cc; end: 10b9674d7;  */

void FUN_10b9673cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b9674d8; end: 10b9674df; -[SCValdiWrappedObjCInstance objcInstance] */

undefined8 FUN_10b9674d8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b9674e0; end: 10b96750f; -[SCValdiWrappedObjCInstance setObjcInstance:] */

void FUN_10b9674e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b967510; end: 10b96751b; -[SCValdiWrappedObjCInstance .cxx_destruct] */

void FUN_10b967510(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b96751c; end: 10b9675bf;  */

/* WARNING: Removing unreachable block (ram,0x00010b967598) */

void FUN_10b96751c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = param_1;
  _objc_retain();
  FUN_10b97f424();
  plVar2 = param_1;
  func_0x00010c11c3e0(param_1);
  plVar3 = plVar1;
  FUN_10b97fda4(plVar1,plVar2,1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*plVar1 + 8))(plVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar3);
  return;
}



/* Entry: 10b9675c0; end: 10b967617; -[SCValdiMarshallableObject initWithObjectRegistry:storage:] */

long FUN_10b9675c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c39f38();
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
    *(undefined8 *)(param_1 + 0x10) = param_4;
  }
  return param_1;
}



/* Entry: 10b967618; end: 10b96763b; -[SCValdiMarshallableObject copyWithZone:] */

undefined8 FUN_10b967618(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b96763c; end: 10b96764b; -[SCValdiMarshallableObject pushToValdiMarshaller:] */

void FUN_10b96763c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0bbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_marshallObject_toMarshaller__11260c9a0,param_1,
             param_3);
  return;
}



/* Entry: 10b96764c; end: 10b9676cf; -[SCValdiMarshallableObject isEqual:] */

undefined8 FUN_10b96764c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if (param_3 == param_1) {
    uVar3 = 1;
  }
  else {
    lVar1 = param_1;
    _objc_opt_class();
    lVar2 = lVar1;
    func_0x000107c39f40();
    if (lVar1 == lVar2) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c0dfc80(uVar3,param_2,param_1,param_3,lVar1);
    }
    else {
      uVar3 = 0;
    }
  }
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 10b9676d0; end: 10b9676d3; -[SCValdiMarshallableObject description] */

/* WARNING: Removing unreachable block (ram,0x00010b967598) */

void FUN_10b9676d0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = param_1;
  _objc_retain();
  FUN_10b97f424();
  plVar2 = param_1;
  func_0x00010c11c3e0(param_1);
  plVar3 = plVar1;
  FUN_10b97fda4(plVar1,plVar2,1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*plVar1 + 8))(plVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar3);
  return;
}



/* Entry: 10b9676d4; end: 10b967777; +[SCValdiMarshallableObject objectFromDictionary:] */

/* WARNING: Removing unreachable block (ram,0x00010b96774c) */

void FUN_10b9676d4(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = param_3;
  _objc_retain();
  FUN_10b97f424();
  plVar2 = plVar1;
  FUN_10b97f8a0();
  plVar3 = plVar1;
  FUN_10b967778(plVar1,plVar2,param_1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*plVar1 + 8))(plVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar3);
  return;
}



/* Entry: 10b967778; end: 10b9677d3;  */

void FUN_10b967778(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c30e68();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c281860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b9677d4; end: 10b9677eb; +[SCValdiMarshallableObject valdiMarshallableObjectDescriptor] */

void FUN_10b9677d4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0x1137fd248;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10b9677ec; end: 10b967893;  */

undefined8 FUN_10b9677ec(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c30e68();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0bbe20();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 10b967894; end: 10b96789f; -[SCValdiProxyMarshallableObject isEqual:] */

bool FUN_10b967894(long param_1,undefined8 param_2,long param_3)

{
  return param_1 == param_3;
}



/* Entry: 10b9678a0; end: 10b9678fb; -[SCValdiMarshallableGenericObject pushToValdiMarshaller:] */

undefined8 FUN_10b9678a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x00010c25d9e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  FUN_10b97f738(param_3,puVar1);
  func_0x00010b967914();
  return param_3;
}



/* Entry: 10b9678fc; end: 10b96791f;  */

void FUN_10b9678fc(void)

{
  return;
}



/* Entry: 10b967920; end: 10b96792f;  */

void FUN_10b967920(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  *(undefined1 *)(param_1 + 3) = param_5;
  return;
}



/* Entry: 10b967930; end: 10b967987;  */

uint FUN_10b967930(ulong param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(0x6c6962646f6f76 >> ((param_1 & 7) << 3));
  if (6 < (uint)param_1) {
    uVar1 = 0x76;
  }
  return uVar1 & 0x7f;
}



/* Entry: 10b967988; end: 10b9679ab;  */

void FUN_10b967988(undefined8 param_1,undefined8 param_2)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbdd0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__class_getMethodImplementation_11034d120)(param_1,param_2);
  return;
}



/* Entry: 10b9679ac; end: 10b9679db;  */

void FUN_10b9679ac(undefined8 param_1,long param_2)

{
  long unaff_x19;
  
  func_0x000107c39f44();
  *(undefined8 *)(param_2 + *(long *)(unaff_x19 + 0x20) * 8) = param_1;
  return;
}



/* Entry: 10b9679dc; end: 10b967b5f;  */

void FUN_10b9679dc(long param_1,undefined8 param_2,ulong param_3)

{
  long unaff_x20;
  
  func_0x000107c39f50();
  *(ulong *)(param_1 + *(long *)(unaff_x20 + 0x20) * 8) = param_3 & 0xffffffff;
  return;
}



/* Entry: 10b967b60; end: 10b967c03;  */

void FUN_10b967b60(long param_1,long param_2,long param_3,long param_4)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  
  puVar4 = (undefined1 *)(param_3 + 2);
  for (lVar3 = 0; param_2 != lVar3; lVar3 = lVar3 + 1) {
    if (puVar4[-2] == '\x02') {
      uVar1 = *puVar4;
      uVar2 = *(undefined8 *)(param_4 + lVar3 * 8);
      func_0x000107c30e10(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107c30e24(param_1,lVar3,uVar1,uVar2);
      _objc_release(uVar2);
    }
    else {
      *(undefined8 *)(param_1 + lVar3 * 8) = *(undefined8 *)(param_4 + lVar3 * 8);
    }
    puVar4 = puVar4 + 0x10;
  }
  return;
}



/* Entry: 10b967c04; end: 10b967d43;  */

bool FUN_10b967c04(long param_1,long param_2,ulong param_3,byte *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  ulong uVar4;
  ulong uVar5;
  
  func_0x000107c30e20();
  func_0x000107c30e20();
  for (uVar4 = 0; uVar5 = param_3, param_3 != uVar4; uVar4 = uVar4 + 1) {
    if (*param_4 - 1 < 6) {
      dVar1 = *(double *)(param_1 + uVar4 * 8);
      dVar2 = *(double *)(param_2 + uVar4 * 8);
      uVar5 = uVar4;
      switch((uint)*param_4) {
      case 1:
        if (dVar1 != dVar2) goto code_r0x00010b967d20;
        break;
      case 2:
        func_0x000107c30e10();
        _objc_retainAutoreleasedReturnValue();
        func_0x000107c30e10();
        _objc_retainAutoreleasedReturnValue();
        dVar3 = (double)(ulong)(dVar1 == 0.0 && dVar2 == 0.0);
        if ((dVar1 != 0.0) && (dVar2 != 0.0)) {
          dVar3 = dVar1;
          func_0x00010c071ae0();
        }
        _objc_release(dVar2);
        _objc_release(dVar1);
        if (((ulong)dVar3 & 1) == 0) goto code_r0x00010b967d20;
        break;
      default:
        if (dVar1 != dVar2) goto code_r0x00010b967d20;
        break;
      case 4:
        if (((SUB84(dVar2,0) ^ SUB84(dVar1,0)) & 1) != 0) goto code_r0x00010b967d20;
        break;
      case 5:
        if (SUB84(dVar1,0) != SUB84(dVar2,0)) goto code_r0x00010b967d20;
      }
    }
    param_4 = param_4 + 0x10;
  }
code_r0x00010b967d20:
  return param_3 <= uVar5;
}



/* Entry: 10b967d44; end: 10b967d7b;  */

void FUN_10b967d44(void)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010bdbdd0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__class_getMethodImplementation_11034d120)();
  return;
}



/* Entry: 10b967d7c; end: 10b967e2b; -[SCValdiNativeAction initWithSelectorName:actionHandlerHolder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10b967d7c(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 in_x3;
  undefined8 unaff_x19;
  long lVar3;
  
  puVar1 = &stack0xffffffffffffffb0;
  FUN_10b968174();
  _objc_retain(in_x3);
  _objc_msgSendSuper2(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    lVar3 = (long)_DAT_112795e40;
    _objc_retain();
    uVar2 = *(undefined8 *)(puVar1 + lVar3);
    *(undefined8 *)(puVar1 + lVar3) = unaff_x19;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_112795e44;
    _objc_retain(in_x3);
    uVar2 = *(undefined8 *)(puVar1 + lVar3);
    *(undefined8 *)(puVar1 + lVar3) = in_x3;
    _objc_release(uVar2);
  }
  _objc_release(in_x3);
  _objc_release();
  return puVar1;
}



/* Entry: 10b967e2c; end: 10b967e73; -[SCValdiNativeAction performWithSender:] */

void FUN_10b967e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10b963478(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f95a0(param_1,param_2,param_3);
  _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b967e74; end: 10b967f23; -[SCValdiNativeAction performWithParameters:] */

undefined8 FUN_10b967e74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x00010c077480();
  if ((int)puVar1 == 0) {
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_10b967f24;
    puStack_38 = &UNK_110841f80;
    uStack_30 = param_1;
    _objc_retain(param_3);
    uStack_28 = param_3;
    func_0x000107c27d8c(PTR___dispatch_main_q_11034be20,&puStack_50);
    _objc_release(uStack_28);
  }
  else {
    func_0x00010be05700(param_1);
  }
  _objc_release(param_3);
  return 0;
}



/* Entry: 10b967f24; end: 10b967f2f;  */

void FUN_10b967f24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be05710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__doPerformWithParameters__11255ef60,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10b967f30; end: 10b968133; -[SCValdiNativeAction _doPerformWithParameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b967f30(void)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x21;
  undefined8 unaff_x22;
  undefined8 uVar7;
  long lVar8;
  
  FUN_10b968174();
  pcVar2 = *(code **)(unaff_x21 + _DAT_112795e44);
  func_0x00010beee460();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar2 == (code *)0x0) {
    pcVar4 = pcVar2;
    FUN_10b96bf1c();
    iVar1 = (int)pcVar4;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b968184();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (iVar1 != 0) {
LAB_10b9680dc:
      func_0x00010c25d9e0(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0eeea0(unaff_x22);
      _objc_release(puVar6);
    }
  }
  else {
    lVar8 = (long)_DAT_112795e40;
    iVar1 = (int)*(undefined8 *)(unaff_x21 + lVar8);
    func_0x00010bfdcf80();
    uVar3 = *(undefined8 *)(unaff_x21 + lVar8);
    if (iVar1 == 0) {
      func_0x00010c25ce40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = uVar3;
      _NSSelectorFromString();
      _objc_release(uVar3);
      uVar5 = *(undefined8 *)(unaff_x21 + lVar8);
      _NSSelectorFromString(uVar5);
    }
    else {
      _NSSelectorFromString();
      uVar7 = *(undefined8 *)(unaff_x21 + lVar8);
      func_0x00010c08fa60(uVar7);
      func_0x00010c260c20(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar7;
      _NSSelectorFromString();
      _objc_release(uVar7);
      unaff_x22 = uVar3;
    }
    pcVar4 = pcVar2;
    _objc_opt_respondsToSelector(pcVar2,unaff_x22);
    if (((ulong)pcVar4 & 1) != 0) {
      pcVar4 = pcVar2;
      func_0x00010c0cc960();
      (*pcVar4)(pcVar2,unaff_x22);
      goto LAB_10b96810c;
    }
    pcVar4 = pcVar2;
    _objc_opt_respondsToSelector(pcVar2,uVar5);
    iVar1 = (int)pcVar4;
    if (((ulong)pcVar4 & 1) != 0) {
      pcVar4 = pcVar2;
      func_0x00010c0cc960();
      (*pcVar4)(pcVar2,unaff_x22);
      goto LAB_10b96810c;
    }
    FUN_10b96bf1c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010b968184();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (iVar1 != 0) {
      _objc_opt_class();
      goto LAB_10b9680dc;
    }
  }
  _objc_release(unaff_x22);
LAB_10b96810c:
  _objc_release(pcVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b968134; end: 10b968173; -[SCValdiNativeAction .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b968134(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112795e44,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112795e40,0);
  return;
}



/* Entry: 10b968174; end: 10b96818f;  */

void FUN_10b968174(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_3);
  return;
}



/* Entry: 10b968190; end: 10b96819b; -[SCValdiNoAnimationDelegate actionForLayer:forKey:] */

void FUN_10b968190(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ddbf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR__OBJC_CLASS___NSNull_1126aef28,PTR_s_null_112615110);
  return;
}



/* Entry: 10b96819c; end: 10b9681ef; +[SCValdiNoAnimationDelegate sharedInstance] */

void FUN_10b96819c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137fd270 != -1) {
    func_0x000107c27d9c(0x1137fd270,&PTR___NSConcreteGlobalBlock_110d7a358);
  }
  uVar1 = uRam00000001137fd278;
  _objc_retain(uRam00000001137fd278);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b9681f0; end: 10b96821b;  */

void FUN_10b9681f0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d91e0;
  _objc_opt_new();
  uVar1 = puRam00000001137fd278;
  puRam00000001137fd278 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b96821c; end: 10b968273; -[SCValdiResolvedPromise initWithValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b96821c(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10b9684cc();
  func_0x00010b9684d4(PTR_PTR_11270c068);
  if (param_1 != 0) {
    _objc_retain(param_3);
    func_0x00010b968508();
  }
  func_0x00010b9684e8();
  return param_1;
}



/* Entry: 10b968274; end: 10b96828b; -[SCValdiResolvedPromise onCompleteWithCallback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b968274(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e6d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_onSuccessWithValue__112617578,*(undefined8 *)(param_1 + _DAT_112795e48));
  return;
}



/* Entry: 10b96828c; end: 10b96828f; -[SCValdiResolvedPromise cancel] */

void FUN_10b96828c(void)

{
  return;
}



/* Entry: 10b968290; end: 10b968293; -[SCValdiResolvedPromise isCancelable] */

undefined8 FUN_10b968290(void)

{
  return 0;
}



/* Entry: 10b968294; end: 10b968297; -[SCValdiResolvedPromise setPeer:] */

void FUN_10b968294(void)

{
  return;
}



/* Entry: 10b968298; end: 10b96829f; -[SCValdiResolvedPromise getPeer] */

undefined8 FUN_10b968298(void)

{
  return 0;
}



/* Entry: 10b9682a0; end: 10b9682ab; -[SCValdiResolvedPromise .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b9682a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112795e48,0);
  return;
}



/* Entry: 10b9682ac; end: 10b968303; -[SCValdiRejectedPromise initWithError:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10b9682ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10b9684cc();
  func_0x00010b9684d4(PTR_PTR_11270c070);
  if (param_1 != 0) {
    _objc_retain(param_3);
    func_0x00010b968508();
  }
  func_0x00010b9684e8();
  return param_1;
}



/* Entry: 10b968304; end: 10b96831b; -[SCValdiRejectedPromise onCompleteWithCallback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b968304(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e4170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_onFailureWithError__112616a70,*(undefined8 *)(param_1 + _DAT_112795e4c));
  return;
}



/* Entry: 10b96831c; end: 10b96831f; -[SCValdiRejectedPromise cancel] */

void FUN_10b96831c(void)

{
  return;
}



/* Entry: 10b968320; end: 10b968323; -[SCValdiRejectedPromise isCancelable] */

undefined8 FUN_10b968320(void)

{
  return 0;
}



/* Entry: 10b968324; end: 10b968327; -[SCValdiRejectedPromise setPeer:] */

void FUN_10b968324(void)

{
  return;
}



/* Entry: 10b968328; end: 10b96832f; -[SCValdiRejectedPromise getPeer] */

undefined8 FUN_10b968328(void)

{
  return 0;
}



/* Entry: 10b968330; end: 10b96833b; -[SCValdiRejectedPromise .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b968330(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112795e4c,0);
  return;
}



/* Entry: 10b96833c; end: 10b96834b; -[SCValdiPromiseCallback onSuccessWithValue:] */

void FUN_10b96833c(void)

{
  FUN_10b9684cc();
  FUN_10b965d04();
  FUN_10b9684cc();
  FUN_10b965d04();
  FUN_10b9684cc();
  FUN_10b965d04();
  FUN_10b9684cc();
  FUN_10b965d04();
  return;
}


