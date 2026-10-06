/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105f5e308; end: 105f5e317;  */

void FUN_105f5e308(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108fb0d8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 105f5e318; end: 105f5e337;  */

void FUN_105f5e318(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1108fb0d8;
  __ZNSt3__119__shared_weak_countD2Ev();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105f5e338; end: 105f5e39f;  */

void FUN_105f5e338(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -8;
        _objc_destroyWeak(lVar2);
      } while (lVar2 != lVar3);
      lVar1 = *(long *)(param_1 + 0x18);
    }
    *(long *)(param_1 + 0x20) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 105f5e3a0; end: 105f5e3a3;  */

void FUN_105f5e3a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 105f5e3a4; end: 105f5e417; -[SCGrapheneMapViewportMetric2 init] */

undefined1 * FUN_105f5e3a4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ee300;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105f5e418; end: 105f5e48f;  */

void FUN_105f5e418(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108fb118,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105f5e490; end: 105f5e507;  */

void FUN_105f5e490(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108fb168,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105f5e508; end: 105f5e57f;  */

void FUN_105f5e508(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108fb1b8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105f5e580; end: 105f5e5f7;  */

void FUN_105f5e580(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108fb208,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105f5e5f8; end: 105f5e66f;  */

void FUN_105f5e5f8(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108fb258,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105f5e670; end: 105f5e6e7;  */

void FUN_105f5e670(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108fb2a8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105f5e6e8; end: 105f5e75f;  */

void FUN_105f5e6e8(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_1108fb2f8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x00010007e5dc(&puStack_28);
  }
  return;
}



/* Entry: 105f5e760; end: 105f5e873;  */

ulong FUN_105f5e760(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf33560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010bf33560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    if ((uVar3 & 1) == 0) {
      uVar3 = param_1;
      func_0x00010bf33560();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0720c0();
      if ((uVar4 & 1) == 0) {
        uVar4 = param_1;
        func_0x00010bf33560(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c0720c0();
        _objc_release(uVar4);
      }
      else {
        uVar5 = 1;
      }
      _objc_release(uVar3);
    }
    else {
      uVar5 = 1;
    }
    _objc_release(uVar2);
  }
  else {
    uVar5 = 1;
  }
  _objc_release(uVar1);
  _objc_release(param_1);
  return uVar5;
}



/* Entry: 105f5e874; end: 105f5e943; -[SCMapLayerTrayViewController initWithValdiRootView:layerName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105f5e874(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ee308;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1931e0(puVar1);
    puVar2 = PTR_PTR_1126b1e38;
    _objc_alloc();
    func_0x00010c05fb60();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273b138);
    *(undefined **)((long)puVar1 + (long)_DAT_11273b138) = puVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273b13c;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f5e944; end: 105f5ea13; -[SCMapLayerTrayViewController initWithValdiRootView:trayName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_105f5e944(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ee308;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c1931e0(puVar1);
    puVar2 = PTR_PTR_1126b1e38;
    _objc_alloc();
    func_0x00010c05fb60();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273b138);
    *(undefined **)((long)puVar1 + (long)_DAT_11273b138) = puVar2;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11273b140;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105f5ea14; end: 105f5ea23; -[SCMapLayerTrayViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f5ea14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + _DAT_11273b138));
  return;
}



/* Entry: 105f5ea24; end: 105f5ea6f; -[SCMapLayerTrayViewController viewDidLoad] */

void FUN_105f5ea24(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ee308;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewDidLoad_112684cd8);
  func_0x00010c189400(param_1);
  return;
}



/* Entry: 105f5ea70; end: 105f5ea7f; -[SCMapLayerTrayViewController scrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f5ea70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c065590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273b138),PTR_s_innerScrollView_1125f6f70);
  return;
}



/* Entry: 105f5ea80; end: 105f5eacb; -[SCMapLayerTrayViewController handleGripperAreaTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f5ea80(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273b138);
  func_0x00010c065580(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c182300(*(undefined8 *)PTR__CGPointZero_110347540,
                      *(undefined8 *)(PTR__CGPointZero_110347540 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105f5eacc; end: 105f5ead3; -[SCMapLayerTrayViewController autoSizingEnabled] */

undefined8 FUN_105f5eacc(void)

{
  return 1;
}



/* Entry: 105f5ead4; end: 105f5eb6f; -[SCMapLayerTrayViewController trayFeatureName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f5ead4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + _DAT_11273b13c);
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    lVar3 = (long)_DAT_11273b140;
    lVar1 = *(long *)(param_1 + lVar3);
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110e32898;
    }
    else {
      ppuVar2 = *(undefined ***)(param_1 + lVar3);
      _objc_retain(ppuVar2);
    }
  }
  else {
    ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                        &PTR____CFConstantStringClassReference_110db9f38);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 105f5eb70; end: 105f5ebbf; -[SCMapLayerTrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f5eb70(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11273b140,0);
  _objc_storeStrong(param_1 + _DAT_11273b13c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273b138,0);
  return;
}



/* Entry: 105f5ebc0; end: 105f5ed53; -[SCMapTraySubscreenView initWithValdiRootView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_105f5ebc0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puStack_48 = PTR_PTR_1126ee310;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),puVar1,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c65b0;
    _objc_alloc_init();
    lVar5 = (long)_DAT_11273b144;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar5);
    _objc_retain(uVar6);
    func_0x00010c160fc0(uVar6);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105f5ed54;
    puStack_60 = &UNK_110868d10;
    uStack_58 = uVar6;
    _objc_retain(uVar6);
    ppuVar3 = &puStack_78;
    _objc_retainBlock(ppuVar3);
    uVar4 = param_3;
    func_0x00010c295200(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126c65b0);
    func_0x00010c127580(uVar4);
    _objc_release(uVar4);
    func_0x00010befbb60(puVar1);
    func_0x00010c14c940(param_3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar1);
    _objc_release(puVar2);
    _objc_release(ppuVar3);
    _objc_release(uStack_58);
    _objc_release(uVar6);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105f5ed54; end: 105f5eda3;  */

void FUN_105f5ed54(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar2);
  }
  else {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105f5eda4; end: 105f5edb3; -[SCMapTraySubscreenView innerScrollView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f5eda4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c065590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273b144),PTR_s_innerScrollView_1125f6f70);
  return;
}



/* Entry: 105f5edb4; end: 105f5edc7; -[SCMapTraySubscreenView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105f5edb4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11273b144,0);
  return;
}



/* Entry: 105f5edc8; end: 105f5eddb; +[SCCMemoriesCreateVideoLauncher valdiMarshallableObjectDescriptor] */

void FUN_105f5edc8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108fb348;
  param_1[1] = &PTR_s_SCCMemTwoDataEntity_1108fb390;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105f5eddc; end: 105f5edef; +[SCCMemoriesTwoPickerActionHandler valdiMarshallableObjectDescriptor] */

void FUN_105f5eddc(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108fb3a0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105f5edf0; end: 105f5ee03; +[SCCMemoriesTwoPickerCameraLauncher valdiMarshallableObjectDescriptor] */

void FUN_105f5edf0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108fb400;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105f5ee04; end: 105f5ee17; +[SCCMemoriesTwoPickerDataPostFilter valdiMarshallableObjectDescriptor] */

void FUN_105f5ee04(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108fb430;
  param_1[1] = &PTR_s_SCCMemTwoDataEntity_1108fb460;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105f5ee18; end: 105f5ee2b; +[SCCMemoriesTwoPickerMultiCallbacks valdiMarshallableObjectDescriptor] */

void FUN_105f5ee18(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108fb478;
  param_1[1] = &PTR_DAT_1108fb4c0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105f5ee2c; end: 105f5ee3f; +[SCCMemoriesTwoPickerSingleCallbacks valdiMarshallableObjectDescriptor] */

void FUN_105f5ee2c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108fb4d8;
  param_1[1] = &PTR_DAT_1108fb508;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105f5ee40; end: 105f5ee53; +[SCCMemoriesTwoPickerThumbnailBarSkipConfig valdiMarshallableObjectDescriptor] */

void FUN_105f5ee40(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108fb520;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105f5ee54; end: 105f5ee67; +[SCCMemoriesTwoPickerTrimEditorLauncher valdiMarshallableObjectDescriptor] */

void FUN_105f5ee54(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108fb568;
  param_1[1] = &PTR_DAT_1108fb598;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105f5ee68; end: 105f5ee7b; +[SCCMemoriesV2CreateVideoCtaTreatmentProvider valdiMarshallableObjectDescriptor] */

void FUN_105f5ee68(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108fb5b8;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105f5ee7c; end: 105f5ee8f; +[SCMemoriesTwoChatMediaDrawerActionHandler valdiMarshallableObjectDescriptor] */

void FUN_105f5ee7c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108fb5e8;
  param_1[1] = &PTR_DAT_1108fb660;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105f5ee90; end: 105f5eea3; +[SCMemoriesTwoChatMediaDrawerEditLauncher valdiMarshallableObjectDescriptor] */

void FUN_105f5ee90(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108fb678;
  param_1[1] = &PTR_DAT_1108fb6a8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105f5eea4; end: 105f5eeaf; +[SCCMemoriesTwoPickerView componentPath] */

undefined ** FUN_105f5eea4(void)

{
  return &PTR____CFConstantStringClassReference_110e33658;
}



/* Entry: 105f5eeb0; end: 105f5eecf; -[SCCMemoriesTwoPickerView initWithViewModel:componentContext:runtime:] */

void FUN_105f5eeb0(void)

{
  func_0x000105f5f248(PTR_PTR_1126ee318);
  return;
}



/* Entry: 105f5eed0; end: 105f5ef03; -[SCCMemoriesTwoPickerView setViewModel:] */

void FUN_105f5eed0(void)

{
  func_0x000105f5f25c();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f5f284();
  func_0x000105f5f290();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105f5ef04; end: 105f5ef3b; -[SCCMemoriesTwoPickerView viewModel] */

void FUN_105f5ef04(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f5f278();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f5ef3c; end: 105f5ef47; +[SCCMemoriesV2LandingPage componentPath] */

undefined ** FUN_105f5ef3c(void)

{
  return &PTR____CFConstantStringClassReference_110e33678;
}



/* Entry: 105f5ef48; end: 105f5ef67; -[SCCMemoriesV2LandingPage initWithViewModel:componentContext:runtime:] */

void FUN_105f5ef48(void)

{
  func_0x000105f5f248(PTR_PTR_1126ee320);
  return;
}



/* Entry: 105f5ef68; end: 105f5ef9b; -[SCCMemoriesV2LandingPage setViewModel:] */

void FUN_105f5ef68(void)

{
  func_0x000105f5f25c();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f5f284();
  func_0x000105f5f290();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105f5ef9c; end: 105f5efd3; -[SCCMemoriesV2LandingPage viewModel] */

void FUN_105f5ef9c(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f5f278();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f5efd4; end: 105f5efdf; +[SCCMemoriesV2LockSnapsPageView componentPath] */

undefined ** FUN_105f5efd4(void)

{
  return &PTR____CFConstantStringClassReference_110e33698;
}



/* Entry: 105f5efe0; end: 105f5efff; -[SCCMemoriesV2LockSnapsPageView initWithViewModel:componentContext:runtime:] */

void FUN_105f5efe0(void)

{
  func_0x000105f5f248(PTR_PTR_1126ee328);
  return;
}



/* Entry: 105f5f000; end: 105f5f033; -[SCCMemoriesV2LockSnapsPageView setViewModel:] */

void FUN_105f5f000(void)

{
  func_0x000105f5f25c();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f5f284();
  func_0x000105f5f290();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105f5f034; end: 105f5f06b; -[SCCMemoriesV2LockSnapsPageView viewModel] */

void FUN_105f5f034(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f5f278();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f5f06c; end: 105f5f077; +[SCCMemoriesV2LockedSnapsInGridModal componentPath] */

undefined ** FUN_105f5f06c(void)

{
  return &PTR____CFConstantStringClassReference_110e336b8;
}



/* Entry: 105f5f078; end: 105f5f097; -[SCCMemoriesV2LockedSnapsInGridModal initWithViewModel:componentContext:runtime:] */

void FUN_105f5f078(void)

{
  func_0x000105f5f248(PTR_PTR_1126ee330);
  return;
}



/* Entry: 105f5f098; end: 105f5f0cb; -[SCCMemoriesV2LockedSnapsInGridModal setViewModel:] */

void FUN_105f5f098(void)

{
  func_0x000105f5f25c();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f5f284();
  func_0x000105f5f290();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105f5f0cc; end: 105f5f103; -[SCCMemoriesV2LockedSnapsInGridModal viewModel] */

void FUN_105f5f0cc(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f5f278();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f5f104; end: 105f5f10f; +[SCCMemoriesV2QuotaStatusBar componentPath] */

undefined ** FUN_105f5f104(void)

{
  return &PTR____CFConstantStringClassReference_110e336d8;
}



/* Entry: 105f5f110; end: 105f5f12f; -[SCCMemoriesV2QuotaStatusBar initWithViewModel:componentContext:runtime:] */

void FUN_105f5f110(void)

{
  func_0x000105f5f248(PTR_PTR_1126ee338);
  return;
}



/* Entry: 105f5f130; end: 105f5f163; -[SCCMemoriesV2QuotaStatusBar setViewModel:] */

void FUN_105f5f130(void)

{
  func_0x000105f5f25c();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f5f284();
  func_0x000105f5f290();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105f5f164; end: 105f5f19b; -[SCCMemoriesV2QuotaStatusBar viewModel] */

void FUN_105f5f164(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f5f278();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f5f19c; end: 105f5f1a7; +[SCMemoriesTwoChatMediaDrawer componentPath] */

undefined ** FUN_105f5f19c(void)

{
  return &PTR____CFConstantStringClassReference_110e336f8;
}



/* Entry: 105f5f1a8; end: 105f5f1c7; -[SCMemoriesTwoChatMediaDrawer initWithViewModel:componentContext:runtime:] */

void FUN_105f5f1a8(void)

{
  func_0x000105f5f248(PTR_PTR_1126ee340);
  return;
}



/* Entry: 105f5f1c8; end: 105f5f1fb; -[SCMemoriesTwoChatMediaDrawer setViewModel:] */

void FUN_105f5f1c8(void)

{
  func_0x000105f5f25c();
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f5f284();
  func_0x000105f5f290();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105f5f1fc; end: 105f5f233; -[SCMemoriesTwoChatMediaDrawer viewModel] */

void FUN_105f5f1fc(void)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f5f278();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f5f234; end: 105f5f2af;  */

void FUN_105f5f234(undefined8 *param_1)

{
  undefined8 in_x9;
  undefined8 in_x10;
  
  *param_1 = in_x9;
  param_1[1] = in_x10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105f5f2b0; end: 105f5f2bb; +[SCCMapMemoriesDataProviderFactory modulePath] */

undefined ** FUN_105f5f2b0(void)

{
  return &PTR____CFConstantStringClassReference_110e33718;
}



/* Entry: 105f5f2bc; end: 105f5f2c3; +[SCCMapMemoriesDataProviderFactory asyncStrictMode] */

undefined8 FUN_105f5f2bc(void)

{
  return 0;
}



/* Entry: 105f5f2c4; end: 105f5f333; -[SCCMapMemoriesDataProviderFactory createMapMemoriesDataProviderWithMemTwoDataService:] */

void FUN_105f5f2c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  (**(code **)(param_1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105f5f334; end: 105f5f4a3; +[SCCMapMemoriesDataProviderFactory invokeWithJSRuntimeProvider:memTwoDataService:completionHandler:] */

void FUN_105f5f334(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  (**(code **)(param_3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x105f5f418;
  puStack_50 = &UNK_11084a9e8;
  lStack_48 = param_3;
  uStack_40 = param_4;
  uStack_38 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf85140(param_3,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(lStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105f5f4a4; end: 105f5f4c7; +[SCCMapMemoriesDataProviderFactory valdiMarshallableObjectDescriptor] */

void FUN_105f5f4a4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108fb6b8;
  param_1[1] = &PTR_DAT_1108fb6e8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 105f5f4c8; end: 105f5f4d3; +[SCCCreateMemTwoTundraEngineFactory modulePath] */

undefined ** FUN_105f5f4c8(void)

{
  return &PTR____CFConstantStringClassReference_110e33738;
}



/* Entry: 105f5f4d4; end: 105f5f4db; +[SCCCreateMemTwoTundraEngineFactory asyncStrictMode] */

undefined8 FUN_105f5f4d4(void)

{
  return 0;
}



/* Entry: 105f5f4dc; end: 105f5f52f; -[SCCCreateMemTwoTundraEngineFactory createMemTwoTundraEngineProxyWithParams:] */

void FUN_105f5f4dc(void)

{
  long unaff_x20;
  
  func_0x000105f5f878();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(unaff_x20 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f5f870();
  func_0x000105f5f860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 105f5f530; end: 105f5f62b; +[SCCCreateMemTwoTundraEngineFactory invokeWithJSRuntimeProvider:params:completionHandler:] */

void FUN_105f5f530(void)

{
  long unaff_x21;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000105f5f800();
  _objc_retain();
  (**(code **)(unaff_x21 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f5f8ac();
  func_0x000105f5f7e0(0x105f5f5bc,0xc2000000);
  _objc_retain();
  _objc_retain();
  func_0x000105f5f8a0();
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  func_0x000105f5f860();
  func_0x000105f5f870();
  func_0x000105f5f868();
  return;
}



/* Entry: 105f5f62c; end: 105f5f63f; +[SCCCreateMemTwoTundraEngineFactory valdiMarshallableObjectDescriptor] */

void FUN_105f5f62c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108fb700;
  param_1[1] = &PTR_DAT_1108fb730;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 105f5f640; end: 105f5f64b; +[SCCMemTwoDataServiceFactory modulePath] */

undefined ** FUN_105f5f640(void)

{
  return &PTR____CFConstantStringClassReference_110e33758;
}



/* Entry: 105f5f64c; end: 105f5f653; +[SCCMemTwoDataServiceFactory asyncStrictMode] */

undefined8 FUN_105f5f64c(void)

{
  return 0;
}



/* Entry: 105f5f654; end: 105f5f6a7; -[SCCMemTwoDataServiceFactory getMemTwoDataServiceWithParams:] */

void FUN_105f5f654(void)

{
  long unaff_x20;
  
  func_0x000105f5f878();
  func_0x00010bf27da0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(unaff_x20 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f5f870();
  func_0x000105f5f860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x20);
  return;
}



/* Entry: 105f5f6a8; end: 105f5f7a3; +[SCCMemTwoDataServiceFactory invokeWithJSRuntimeProvider:params:completionHandler:] */

void FUN_105f5f6a8(void)

{
  long unaff_x21;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000105f5f800();
  _objc_retain();
  (**(code **)(unaff_x21 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  func_0x000105f5f8ac();
  func_0x000105f5f7e0(0x105f5f734,0xc2000000);
  _objc_retain();
  _objc_retain();
  func_0x000105f5f8a0();
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  func_0x000105f5f860();
  func_0x000105f5f870();
  func_0x000105f5f868();
  return;
}



/* Entry: 105f5f7a4; end: 105f5f7b7; +[SCCMemTwoDataServiceFactory valdiMarshallableObjectDescriptor] */

void FUN_105f5f7a4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108fb748;
  param_1[1] = &PTR_DAT_1108fb778;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  return;
}



/* Entry: 105f5f7b8; end: 105f5f7cb; +[SCCBackupServiceProvider valdiMarshallableObjectDescriptor] */

void FUN_105f5f7b8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108fb790;
  param_1[1] = &PTR_DAT_1108fb7c0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105f5f7cc; end: 105f5f8bf; +[SCCMemTwoTundraEngine valdiMarshallableObjectDescriptor] */

void FUN_105f5f7cc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108fb7d0;
  param_1[1] = &PTR_DAT_1108fb800;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105f5f8c0; end: 105f5f8f7; +[SCCMemoriesBackupCofStore valdiMarshallableObjectDescriptor] */

void FUN_105f5f8c0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108fb858;
  param_1[1] = 0;
  param_1[2] = &PTR_DAT_1108fb810;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105f5f8f8; end: 105f5f947;  */

void FUN_105f5f8f8(void)

{
  func_0x000105f5fe8c();
  func_0x000105f5fe70();
  func_0x000105f5fe30(FUN_105f5fd38);
  func_0x000105f5fe94();
  func_0x000105f5fe40();
  func_0x000105f5fe58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f5f948; end: 105f5f95f;  */

void FUN_105f5f948(code *UNRECOVERED_JUMPTABLE,undefined8 *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000105f5f95c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2[3],*param_2,param_2[1],param_2[2]);
  return;
}



/* Entry: 105f5f960; end: 105f5f9af;  */

void FUN_105f5f960(void)

{
  func_0x000105f5fe8c();
  func_0x000105f5fe70();
  func_0x000105f5fe30(0x105f5fd68);
  func_0x000105f5fe94();
  func_0x000105f5fe40();
  func_0x000105f5fe58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f5f9b0; end: 105f5f9c3; +[SCCMemoriesBackupJobSchedulingDelegate valdiMarshallableObjectDescriptor] */

void FUN_105f5f9b0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108fb8d0;
  param_1[1] = &PTR_DAT_1108fb900;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105f5f9c4; end: 105f5f9d7; +[SCCMemoriesBackupLocalNotificationSchedulingDelegate valdiMarshallableObjectDescriptor] */

void FUN_105f5f9c4(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108fb910;
  param_1[1] = &PTR_DAT_1108fb958;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105f5f9d8; end: 105f5f9fb; +[SCCMemoriesBackupRuntimeConditionsDelegate valdiMarshallableObjectDescriptor] */

void FUN_105f5f9d8(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108fb998;
  param_1[1] = &PTR_DAT_1108fba88;
  param_1[2] = &PTR_DAT_1108fb968;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105f5f9fc; end: 105f5fa1b;  */

ulong FUN_105f5f9fc(code *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  (*param_1)(uVar1,param_2[1]);
  return uVar1 & 0xffffffff;
}



/* Entry: 105f5fa1c; end: 105f5fa6b;  */

void FUN_105f5fa1c(void)

{
  func_0x000105f5fe8c();
  func_0x000105f5fe70();
  func_0x000105f5fe30(0x105f5fd90);
  func_0x000105f5fe94();
  func_0x000105f5fe40();
  func_0x000105f5fe58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f5fa6c; end: 105f5fa7f; +[SCCMemoriesBackupService valdiMarshallableObjectDescriptor] */

void FUN_105f5fa6c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108fba98;
  param_1[1] = &PTR_DAT_1108fbc78;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105f5fa80; end: 105f5fa93; +[SCCMemoriesBackupStatusDelegate valdiMarshallableObjectDescriptor] */

void FUN_105f5fa80(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108fbca0;
  param_1[1] = &PTR_DAT_1108fbcd0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105f5fa94; end: 105f5faa7; +[SCCMemoriesCleanupService valdiMarshallableObjectDescriptor] */

void FUN_105f5fa94(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108fbce0;
  param_1[1] = &PTR_DAT_1108fbd10;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105f5faa8; end: 105f5fadf;  */

void FUN_105f5faa8(void)

{
  func_0x000105f5fe80();
  func_0x000105f5fe68();
  func_0x000105f5fe60();
  func_0x000105f5fdfc();
  func_0x000105f5fe18();
  return;
}



/* Entry: 105f5fae0; end: 105f5fb1f; +[SCCMemoriesContentUnderstandBackfillProxy valdiMarshallableObjectDescriptor] */

void FUN_105f5fae0(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108fbd58;
  param_1[1] = &PTR_DAT_1108fbd88;
  param_1[2] = &PTR_DAT_1108fbd28;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105f5fb20; end: 105f5fb6f;  */

void FUN_105f5fb20(void)

{
  func_0x000105f5fe8c();
  func_0x000105f5fe70();
  func_0x000105f5fe30(0x105f5fdb8);
  func_0x000105f5fe94();
  func_0x000105f5fe40();
  func_0x000105f5fe58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105f5fb70; end: 105f5fb83; +[SCCMemoriesFlipperService valdiMarshallableObjectDescriptor] */

void FUN_105f5fb70(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_DAT_1108fbd98;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105f5fb84; end: 105f5fbbb;  */

void FUN_105f5fb84(void)

{
  func_0x000105f5fe80();
  func_0x000105f5fe68();
  func_0x000105f5fe60();
  func_0x000105f5fdfc();
  func_0x000105f5fe18();
  return;
}



/* Entry: 105f5fbbc; end: 105f5fbcf; +[SCCMemoriesService valdiMarshallableObjectDescriptor] */

void FUN_105f5fbbc(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108fbdc8;
  param_1[1] = &PTR_DAT_1108fbe28;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105f5fbd0; end: 105f5fc07;  */

void FUN_105f5fbd0(void)

{
  func_0x000105f5fe80();
  func_0x000105f5fe68();
  func_0x000105f5fe60();
  func_0x000105f5fdfc();
  func_0x000105f5fe18();
  return;
}



/* Entry: 105f5fc08; end: 105f5fc1b; +[SCCMemoriesSnapDocRenderService valdiMarshallableObjectDescriptor] */

void FUN_105f5fc08(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_1108fbe50;
  param_1[1] = &PTR_DAT_1108fbe80;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 105f5fc1c; end: 105f5fc53;  */

void FUN_105f5fc1c(void)

{
  func_0x000105f5fe80();
  func_0x000105f5fe68();
  func_0x000105f5fe60();
  func_0x000105f5fdfc();
  func_0x000105f5fe18();
  return;
}


