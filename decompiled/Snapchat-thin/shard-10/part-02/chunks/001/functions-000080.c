/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107b34690; end: 107b34717; -[SCOperaPlayerDebuggerLayerView _refreshButton:enabled:] */

void FUN_107b34690(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  _objc_retain(param_3);
  if (param_4 == 0) {
    func_0x00010bf41580(puVar1,param_2,0xffffff);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c23ba80(puVar1,param_2,0xa1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c216160(param_3,param_2,puVar1);
  _objc_release(puVar1);
  func_0x00010c1cbe20(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b34718; end: 107b34737; -[SCOperaPlayerDebuggerLayerView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b34718(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276a994);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b34738; end: 107b3474b; -[SCOperaPlayerDebuggerLayerView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b34738(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276a994,param_3);
  return;
}



/* Entry: 107b3474c; end: 107b34763; -[SCOperaPlayerDebuggerLayerView operaSafeAreaInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b3474c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276a990);
}



/* Entry: 107b34764; end: 107b3477b; -[SCOperaPlayerDebuggerLayerView setOperaSafeAreaInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b34764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11276a990);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 107b3477c; end: 107b347c7; -[SCOperaPlayerDebuggerLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3477c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276a994);
  _objc_storeStrong(param_1 + _DAT_11276a98c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a988,0);
  return;
}



/* Entry: 107b347c8; end: 107b3486b; -[SCOperaPlayerDebuggerLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:sharedResourceManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_107b347c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f9ee8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_initWithConfiguration_layerViewC_1125de030,param_3,param_4,
                      param_5,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11276a998),param_7);
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 107b3486c; end: 107b348d3; -[SCOperaPlayerDebuggerLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3486c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d68b0;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_11276a99c;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 107b348d4; end: 107b34907; -[SCOperaPlayerDebuggerLayerViewController viewDidLoad] */

void FUN_107b348d4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f9ee8;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_viewDidLoad_112684cd8);
  return;
}



/* Entry: 107b34908; end: 107b3490f; -[SCOperaPlayerDebuggerLayerViewController isRecyclable] */

undefined8 FUN_107b34908(void)

{
  return 0;
}



/* Entry: 107b34910; end: 107b3497f; -[SCOperaPlayerDebuggerLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b34910(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = (long)_DAT_11276a99c;
    func_0x00010c125760(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c125750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar1),PTR_s_refreshViewWithPlaybackLogViewer_112626ff0,
               *(undefined1 *)(param_1 + _DAT_11276a9a4));
    return;
  }
  return;
}



/* Entry: 107b34980; end: 107b349c3; -[SCOperaPlayerDebuggerLayerViewController playerDebuggerLayerDidTapStatsBtn:] */

void FUN_107b34980(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d68b8;
  func_0x00010c269bc0(PTR_PTR_1126d68b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdff360(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b349c4; end: 107b34a07; -[SCOperaPlayerDebuggerLayerViewController playerDebuggerLayerDidTapControlBtn:] */

void FUN_107b349c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d68b8;
  func_0x00010c269ba0(PTR_PTR_1126d68b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdff360(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b34a08; end: 107b34afb; -[SCOperaPlayerDebuggerLayerViewController _didReceiveEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b34a08(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126d68b8;
  func_0x00010c269bc0(PTR_PTR_1126d68b8);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0720c0(param_3,param_2,puVar2);
  _objc_release(puVar2);
  if ((int)uVar3 == 0) {
    puVar2 = PTR_PTR_1126d68b8;
    func_0x00010c269ba0(PTR_PTR_1126d68b8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0720c0(param_3,param_2,puVar2);
    _objc_release(puVar2);
    if ((int)uVar3 == 0) goto LAB_107b34ae4;
    lVar4 = (long)_DAT_11276a9a0;
    bVar1 = *(byte *)(param_1 + lVar4);
  }
  else {
    lVar5 = (long)_DAT_11276a9a4;
    *(byte *)(param_1 + lVar5) = *(byte *)(param_1 + lVar5) ^ 1;
    func_0x00010bedd420(param_1);
    lVar4 = (long)_DAT_11276a9a0;
    bVar1 = *(byte *)(param_1 + lVar4);
    if (*(byte *)(param_1 + lVar5) == bVar1) goto LAB_107b34ae4;
  }
  *(byte *)(param_1 + lVar4) = bVar1 ^ 1;
  func_0x00010bedbc40(param_1);
LAB_107b34ae4:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b34afc; end: 107b34b57; -[SCOperaPlayerDebuggerLayerViewController _updatePlaybackLogViewerVisibility] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b34afc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + _DAT_11276a998;
  _objc_loadWeakRetained(lVar1);
  lVar2 = (long)_DAT_11276a9a4;
  func_0x00010c288860();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c125750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276a99c),
             PTR_s_refreshViewWithPlaybackLogViewer_112626ff0,*(undefined1 *)(param_1 + lVar2));
  return;
}



/* Entry: 107b34b58; end: 107b34bc7; -[SCOperaPlayerDebuggerLayerViewController _updateMonitorStatus] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b34b58(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11276a9a0;
  cVar1 = *(char *)(param_1 + lVar3);
  lVar2 = param_1 + _DAT_11276a998;
  _objc_loadWeakRetained(lVar2);
  if (cVar1 == '\x01') {
    func_0x00010beef720();
  }
  else {
    func_0x00010bf65b80();
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010c125770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276a99c),
             PTR_s_refreshViewWithPlaybackMonitorsA_112626ff8,*(undefined1 *)(param_1 + lVar3));
  return;
}



/* Entry: 107b34bc8; end: 107b34c03; -[SCOperaPlayerDebuggerLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b34bc8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276a998);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a99c,0);
  return;
}



/* Entry: 107b34c04; end: 107b34d73; +[SCOperaDefaultLayerViewControllerFactory layerViewControllerWithLayer:configuration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

void FUN_107b34c04(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar2 = param_3;
  func_0x00010c27dd80();
  if (lVar2 == 0x13) {
    lVar2 = param_6;
    func_0x00010bf4ec20();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar1;
    func_0x00010bf56ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    if (lVar2 != 0) goto LAB_107b34d18;
  }
  lVar2 = param_4;
  func_0x00010c10f440();
  if (lVar2 == 1) {
    lVar2 = 0;
  }
  else {
    if (lRam00000001137275a8 != -1) {
      func_0x00010002a2fc(0x1137275a8,&PTR___NSConcreteGlobalBlock_1109fdcc8);
    }
    lVar2 = lRam00000001137275a0;
    func_0x00010c08c640(lRam00000001137275a0);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_107b34d18:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 107b34d74; end: 107b34d9f;  */

void FUN_107b34d74(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126d68c0;
  _objc_opt_new();
  uVar1 = puRam00000001137275a0;
  puRam00000001137275a0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b34da0; end: 107b34e8b; +[SCOperaDefaultLayerViewControllerFactory legacyLayerViewControllerWithLayer:configuration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:sharedResourceManager:] */

void FUN_107b34da0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  func_0x00010c27dd80();
  if (param_3 == 6) {
    ppuVar2 = &PTR_PTR_1126d68c8;
  }
  else {
    if (param_3 != 0x1f) {
      puVar1 = (undefined *)0x0;
      goto LAB_107b34e4c;
    }
    ppuVar2 = &PTR_PTR_1126d68d0;
  }
  puVar1 = *ppuVar2;
  _objc_alloc(puVar1);
  func_0x00010c001aa0();
LAB_107b34e4c:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107b34e8c; end: 107b34edf; -[SCOperaDefaultLayerViewControllerFactoryPlugin supportedLayers] */

void FUN_107b34e8c(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137275b8 != -1) {
    func_0x00010002a2fc(0x1137275b8,&PTR___NSConcreteGlobalBlock_1109fdce8);
  }
  uVar1 = uRam00000001137275b0;
  _objc_retain(uRam00000001137275b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 107b34ee0; end: 107b350b3;  */

void FUN_107b34ee0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar7 = PTR_PTR_1126d68d8;
  _objc_opt_class();
  puVar1 = PTR_PTR_1126d68e0;
  puStack_c8 = puVar7;
  _objc_opt_class();
  puVar7 = PTR_PTR_1126d68e8;
  puStack_c0 = puVar1;
  _objc_opt_class();
  puVar1 = PTR_PTR_1126d68f0;
  puStack_b8 = puVar7;
  _objc_opt_class();
  puVar7 = PTR_PTR_1126d68f8;
  puStack_b0 = puVar1;
  _objc_opt_class();
  puVar1 = PTR_PTR_1126d6900;
  puStack_a8 = puVar7;
  _objc_opt_class();
  puVar7 = PTR_PTR_1126d6908;
  puStack_a0 = puVar1;
  _objc_opt_class();
  puVar1 = PTR_PTR_1126d6910;
  puStack_98 = puVar7;
  _objc_opt_class();
  puVar7 = PTR_PTR_1126d6918;
  puStack_90 = puVar1;
  _objc_opt_class();
  puVar1 = PTR_PTR_1126d6920;
  puStack_88 = puVar7;
  _objc_opt_class();
  puVar7 = PTR_PTR_1126d6928;
  puStack_80 = puVar1;
  _objc_opt_class();
  puVar1 = PTR_PTR_1126d6930;
  puStack_78 = puVar7;
  _objc_opt_class();
  puVar7 = PTR_PTR_1126d6938;
  puStack_70 = puVar1;
  _objc_opt_class();
  puVar1 = PTR_PTR_1126d6940;
  puStack_68 = puVar7;
  _objc_opt_class();
  puVar7 = PTR_PTR_1126d6948;
  puStack_60 = puVar1;
  _objc_opt_class();
  puVar1 = PTR_PTR_1126d6950;
  puStack_58 = puVar7;
  _objc_opt_class();
  puVar7 = PTR_PTR_1126d6958;
  puStack_50 = puVar1;
  _objc_opt_class();
  puVar1 = PTR_PTR_1126d6960;
  puStack_48 = puVar7;
  _objc_opt_class();
  puVar7 = PTR_PTR_1126d6968;
  puStack_40 = puVar1;
  _objc_opt_class();
  puVar1 = PTR_PTR_1126d6970;
  puStack_38 = puVar7;
  _objc_opt_class();
  puVar7 = PTR_PTR_1126d6978;
  puStack_30 = puVar1;
  _objc_opt_class();
  puVar1 = PTR_PTR_1126d6980;
  puStack_28 = puVar7;
  _objc_opt_class();
  ppuVar5 = &puStack_c8;
  uVar6 = 0x16;
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_20 = puVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = puRam00000001137275b0;
  puRam00000001137275b0 = puVar7;
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar5);
  _objc_retain(uVar6);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  ppuVar2 = ppuVar5;
  func_0x00010c27dd80();
  puVar7 = (undefined *)0x0;
  switch(ppuVar2) {
  case (undefined **)0x1:
    puVar7 = PTR_PTR_1126d6988;
    break;
  default:
    goto LAB_107b352cc;
  case (undefined **)0x3:
    puVar7 = PTR_PTR_1126d6990;
    break;
  case (undefined **)0x4:
    puVar7 = PTR_PTR_1126d69a0;
    goto code_r0x000107b351a0;
  case (undefined **)0x7:
    ppuVar2 = ppuVar5;
    func_0x00010c09d3c0();
    puVar7 = PTR_PTR_1126d69d0;
    if (ppuVar2 == (undefined **)0x0) {
code_r0x000107b35310:
      puVar7 = (undefined *)0x0;
      goto LAB_107b352cc;
    }
    break;
  case (undefined **)0x8:
    puVar7 = PTR_PTR_1126d69a8;
    break;
  case (undefined **)0x9:
    puVar7 = PTR_PTR_1126d69b0;
code_r0x000107b351a0:
    _objc_alloc(puVar7);
    uVar3 = param_6;
    func_0x00010c0d78a0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0019e0(puVar7,param_2,uVar6,param_5,param_6,param_7,uVar3);
    _objc_release(uVar3);
    goto LAB_107b352cc;
  case (undefined **)0xa:
    puVar7 = PTR_PTR_1126d69b8;
    break;
  case (undefined **)0xb:
    puVar7 = PTR_PTR_1126d69c0;
    break;
  case (undefined **)0xc:
    puVar7 = PTR_PTR_1126d69c8;
    break;
  case (undefined **)0xd:
    puVar7 = PTR_PTR_1126d69e0;
    break;
  case (undefined **)0xe:
    puVar7 = PTR_PTR_1126d69d8;
    break;
  case (undefined **)0xf:
    puVar7 = PTR_PTR_1126d69f0;
    break;
  case (undefined **)0x10:
    puVar7 = PTR_PTR_1126d69e8;
    break;
  case (undefined **)0x11:
    puVar7 = PTR_PTR_1126d6998;
    break;
  case (undefined **)0x12:
    uVar4 = uVar6;
    func_0x00010c063aa0();
    puVar7 = PTR_PTR_1126d69f8;
    if ((1 < uVar4) && (puVar7 = PTR_PTR_1126d6a00, uVar4 != 2)) goto code_r0x000107b35310;
    break;
  case (undefined **)0x16:
    puVar7 = PTR_PTR_1126d6a08;
    break;
  case (undefined **)0x17:
    puVar7 = PTR_PTR_1126d6a10;
    break;
  case (undefined **)0x18:
    puVar7 = PTR_PTR_1126d6a18;
    break;
  case (undefined **)0x1a:
    puVar7 = PTR_PTR_1126d6a28;
    break;
  case (undefined **)0x1c:
    puVar7 = PTR_PTR_1126d6a20;
    break;
  case (undefined **)0x1d:
    puVar7 = PTR_PTR_1126d6a30;
    break;
  case (undefined **)0x1e:
    puVar7 = PTR_PTR_1126d6a38;
  }
  func_0x00010c08c5e0(puVar7,param_2,uVar6,param_5,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
LAB_107b352cc:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar6);
  _objc_release(ppuVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 107b350b4; end: 107b35317; -[SCOperaDefaultLayerViewControllerFactoryPlugin layerViewControllerWithLayer:configuration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:] */

void FUN_107b350b4(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = param_3;
  func_0x00010c27dd80();
  puVar4 = (undefined *)0x0;
  switch(lVar1) {
  case 1:
    puVar4 = PTR_PTR_1126d6988;
    break;
  default:
    goto LAB_107b352cc;
  case 3:
    puVar4 = PTR_PTR_1126d6990;
    break;
  case 4:
    puVar4 = PTR_PTR_1126d69a0;
    goto code_r0x000107b351a0;
  case 7:
    lVar1 = param_3;
    func_0x00010c09d3c0();
    puVar4 = PTR_PTR_1126d69d0;
    if (lVar1 == 0) {
code_r0x000107b35310:
      puVar4 = (undefined *)0x0;
      goto LAB_107b352cc;
    }
    break;
  case 8:
    puVar4 = PTR_PTR_1126d69a8;
    break;
  case 9:
    puVar4 = PTR_PTR_1126d69b0;
code_r0x000107b351a0:
    _objc_alloc(puVar4);
    uVar2 = param_6;
    func_0x00010c0d78a0(param_6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0019e0(puVar4,param_2,param_4,param_5,param_6,param_7,uVar2);
    _objc_release(uVar2);
    goto LAB_107b352cc;
  case 10:
    puVar4 = PTR_PTR_1126d69b8;
    break;
  case 0xb:
    puVar4 = PTR_PTR_1126d69c0;
    break;
  case 0xc:
    puVar4 = PTR_PTR_1126d69c8;
    break;
  case 0xd:
    puVar4 = PTR_PTR_1126d69e0;
    break;
  case 0xe:
    puVar4 = PTR_PTR_1126d69d8;
    break;
  case 0xf:
    puVar4 = PTR_PTR_1126d69f0;
    break;
  case 0x10:
    puVar4 = PTR_PTR_1126d69e8;
    break;
  case 0x11:
    puVar4 = PTR_PTR_1126d6998;
    break;
  case 0x12:
    uVar3 = param_4;
    func_0x00010c063aa0();
    puVar4 = PTR_PTR_1126d69f8;
    if ((1 < uVar3) && (puVar4 = PTR_PTR_1126d6a00, uVar3 != 2)) goto code_r0x000107b35310;
    break;
  case 0x16:
    puVar4 = PTR_PTR_1126d6a08;
    break;
  case 0x17:
    puVar4 = PTR_PTR_1126d6a10;
    break;
  case 0x18:
    puVar4 = PTR_PTR_1126d6a18;
    break;
  case 0x1a:
    puVar4 = PTR_PTR_1126d6a28;
    break;
  case 0x1c:
    puVar4 = PTR_PTR_1126d6a20;
    break;
  case 0x1d:
    puVar4 = PTR_PTR_1126d6a30;
    break;
  case 0x1e:
    puVar4 = PTR_PTR_1126d6a38;
  }
  func_0x00010c08c5e0(puVar4,param_2,param_4,param_5,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
LAB_107b352cc:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 107b35318; end: 107b353eb; -[SCOperaStreamingLoadingLayerView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107b35318(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f9ef0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276a9a8) = 0;
  }
  puVar2 = PTR_PTR_1126d6890;
  _objc_alloc();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfffc60();
  lVar5 = (long)_DAT_11276a9ac;
  uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
  *(undefined **)((long)puVar1 + lVar5) = puVar2;
  _objc_release(uVar4);
  _objc_release(puVar3);
  func_0x00010befbb60(puVar1);
  func_0x00010c2558c0(*(undefined8 *)((long)puVar1 + lVar5));
  func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar5));
  return (undefined1 *)puVar1;
}



/* Entry: 107b353ec; end: 107b354a3; -[SCOperaStreamingLoadingLayerView setLoadingIndicatorEnabled:] */

/* WARNING: Possible PIC construction at 0x000107b35470: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107b35474) */
/* WARNING: Removing unreachable block (ram,0x00010c1cbe20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b353ec(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  if (*(byte *)(param_1 + _DAT_11276a9a8) == param_3) {
    return;
  }
  *(char *)(param_1 + _DAT_11276a9a8) = (char)param_3;
  lVar4 = (long)_DAT_11276a9ac;
  lVar1 = *(long *)(param_1 + lVar4);
  if (param_3 == 0) {
    func_0x00010c2558c0();
    lVar1 = *(long *)(param_1 + lVar4);
    uVar3 = 1;
  }
  else {
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126afd30;
      _objc_alloc();
      func_0x00010bfffc60();
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      *(undefined **)(param_1 + lVar4) = puVar2;
      _objc_release(uVar3);
      func_0x00010befbb60(param_1);
      lVar1 = *(long *)(param_1 + lVar4);
    }
    uVar3 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(lVar1,PTR_s_setHidden__1126479f8,uVar3);
  return;
}



/* Entry: 107b354a4; end: 107b3561f; -[SCOperaStreamingLoadingLayerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b354a4(double param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  double dVar4;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126f9ef0;
  lStack_70 = param_2;
  _objc_msgSendSuper2(&lStack_70,PTR_s_layoutSubviews_112600e60);
  lVar3 = (long)_DAT_11276a9ac;
  if (*(long *)(param_2 + lVar3) != 0) {
    func_0x00010bf20c00(param_2);
    _CGRectGetWidth();
    param_1 = param_1 + -35.0;
    dVar4 = param_1 * 0.5;
    func_0x00010bf20c00(param_2);
    _CGRectGetHeight();
    func_0x00010c19f0e0(dVar4,(param_1 + -35.0) * 0.5,0x4041800000000000,0x4041800000000000,
                        *(undefined8 *)(param_2 + lVar3));
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    uVar2 = *(undefined8 *)(param_2 + lVar3);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(uVar2);
    _objc_release(puVar1);
    uVar2 = *(undefined8 *)(param_2 + lVar3);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x4000000000000000);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_2 + lVar3);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3f000000);
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_2 + lVar3);
    func_0x00010c08c0e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4010000000000000);
    _objc_release(uVar2);
  }
  return;
}



/* Entry: 107b35620; end: 107b35693; -[SCOperaStreamingLoadingLayerView hitTest:withEvent:] */

void FUN_107b35620(undefined1 *param_1)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puStack_30;
  undefined *puStack_28;
  
  ppuVar1 = &puStack_30;
  puStack_28 = PTR_PTR_1126f9ef0;
  puStack_30 = param_1;
  _objc_msgSendSuper2(&puStack_30,PTR_s_hitTest_withEvent__1125d6850);
  _objc_retainAutoreleasedReturnValue();
  if (ppuVar1 == (undefined1 **)param_1) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    _objc_retain(ppuVar1);
    puVar2 = (undefined1 *)ppuVar1;
  }
  _objc_release(ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 107b35694; end: 107b356a3; -[SCOperaStreamingLoadingLayerView loadingIndicatorEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b35694(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276a9a8);
}



/* Entry: 107b356a4; end: 107b356b7; -[SCOperaStreamingLoadingLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b356a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a9ac,0);
  return;
}



/* Entry: 107b356b8; end: 107b3571f; -[SCOperaStreamingLoadingLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b356b8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d6a40;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_11276a9b0;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c222380(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1bed30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar3),PTR_s_setLoadingIndicatorEnabled__11264d570,0);
  return;
}



/* Entry: 107b35720; end: 107b35733; -[SCOperaStreamingLoadingLayerViewController viewDidFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b35720(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1bed30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276a9b0),PTR_s_setLoadingIndicatorEnabled__11264d570,0
            );
  return;
}



/* Entry: 107b35734; end: 107b35787; -[SCOperaStreamingLoadingLayerViewController teardown] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b35734(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9ef8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_teardown_112678538);
  func_0x00010c1bed20(*(undefined8 *)(param_1 + _DAT_11276a9b0));
  return;
}



/* Entry: 107b35788; end: 107b35857; -[SCOperaStreamingLoadingLayerViewController didReceiveUpdateProperties:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b35788(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c7d68;
  func_0x00010bf90b00(PTR_PTR_1126c7d68);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0e00e0(param_3,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar1);
  if (lVar2 != 0) {
    puVar1 = PTR_PTR_1126c7d68;
    func_0x00010bf90b00(PTR_PTR_1126c7d68);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0e00e0(param_3,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf1f3c0();
    func_0x00010c1bed20(*(undefined8 *)(param_1 + _DAT_11276a9b0),param_2,lVar3);
    _objc_release(lVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b35858; end: 107b3586b; -[SCOperaStreamingLoadingLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b35858(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a9b0,0);
  return;
}



/* Entry: 107b3586c; end: 107b35a2f; -[SCOperaSubscriptionButton initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_107b3586c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  puStack_58 = PTR_PTR_1126f9f00;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar7 = (long)_DAT_11276a9b4;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar6);
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010bfe6ac0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(uVar6);
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar7 = (long)_DAT_11276a9b8;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    _objc_release(uVar6);
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar7);
    func_0x00010bfe6ac0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)((long)puVar1 + lVar7));
    _objc_release(uVar6);
    _objc_release(uVar4);
    func_0x00010beb0340(puVar1);
    puVar5 = (undefined1 *)puVar1;
    func_0x00010c08c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1733a0(0x3ff8000000000000);
    _objc_release(puVar5);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 107b35a30; end: 107b35a6f; -[SCOperaSubscriptionButton sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_107b35a30(double param_1,undefined8 param_2,long param_3)

{
  undefined1 auVar1 [16];
  
  func_0x00010bf20c00(*(undefined8 *)(param_3 + _DAT_11276a9bc));
  _CGRectGetWidth();
  auVar1._0_8_ = param_1 + 36.0;
  auVar1._8_8_ = param_2;
  return auVar1;
}



/* Entry: 107b35a70; end: 107b35ca7; -[SCOperaSubscriptionButton layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b35a70(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  long lStack_80;
  undefined *puStack_78;
  
  puStack_78 = PTR_PTR_1126f9f00;
  lStack_80 = param_5;
  _objc_msgSendSuper2(&lStack_80,PTR_s_layoutSubviews_112600e60);
  lVar1 = (long)_DAT_11276a9bc;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar1));
  lVar2 = (long)_DAT_11276a9c0;
  dVar4 = param_1;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar2));
  _CGRectGetHeight();
  lVar3 = (long)_DAT_11276a9c4;
  dVar5 = dVar4;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar3));
  _CGRectGetHeight();
  if (dVar5 <= dVar4) {
    dVar5 = dVar4;
  }
  func_0x00010bc850d8(param_1,param_2,param_3,param_4,dVar5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar1));
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar3));
  dVar4 = param_1;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar1));
  _CGRectGetMidY();
  dVar5 = dVar4;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar3));
  _CGRectGetMidY();
  func_0x00010bc852e4(param_1,param_2,param_3,param_4,0,dVar4 - dVar5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar3));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar2));
  dVar4 = param_1;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
  _CGRectGetMaxX();
  dVar6 = dVar4 + *(double *)(param_5 + _DAT_11276a9c8);
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar1));
  _CGRectGetMidY();
  dVar5 = dVar4;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar2));
  _CGRectGetMidY();
  func_0x00010bc852e4(param_1,param_2,param_3,param_4,dVar6,dVar4 - dVar5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar2));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar1));
  dVar4 = param_1;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar2));
  _CGRectGetMaxX();
  func_0x00010bc85050(param_1,param_2,param_3,param_4,dVar4);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar1));
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar1));
  dVar4 = param_1;
  func_0x00010bf20c00(param_5);
  _CGRectGetMidY();
  dVar5 = dVar4;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar1));
  _CGRectGetMidY();
  func_0x00010bc852e4(param_1,param_2,param_3,param_4,0x4032000000000000,dVar4 - dVar5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar1));
  return;
}



/* Entry: 107b35ca8; end: 107b35dfb; -[SCOperaSubscriptionButton updateWithConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b35ca8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c25fd80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276a9cc);
  *(undefined8 *)(param_1 + _DAT_11276a9cc) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010c282a40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276a9d0);
  *(undefined8 *)(param_1 + _DAT_11276a9d0) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010c09cc20();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276a9d4);
  *(undefined8 *)(param_1 + _DAT_11276a9d4) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010c140080();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276a9d8);
  *(undefined8 *)(param_1 + _DAT_11276a9d8) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010c2608c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276a9dc);
  *(undefined8 *)(param_1 + _DAT_11276a9dc) = uVar1;
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010c260920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_11276a9e0);
  *(undefined8 *)(param_1 + _DAT_11276a9e0) = uVar1;
  _objc_release(uVar2);
  func_0x00010c216160(*(undefined8 *)(param_1 + _DAT_11276a9b4));
  func_0x00010c216160(*(undefined8 *)(param_1 + _DAT_11276a9b8));
  uVar1 = param_3;
  func_0x00010c260760(param_3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c174a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setButtonState__11263acb0,uVar1);
  return;
}



/* Entry: 107b35dfc; end: 107b360c7; -[SCOperaSubscriptionButton setButtonState:] */

/* WARNING: Possible PIC construction at 0x000107b36058: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107b3605c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b35dfc(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)_DAT_11276a9c4;
  func_0x00010c12c960(*(undefined8 *)(param_1 + lVar4));
  if (1 < param_3) {
    if (param_3 == 2) {
      func_0x00010c195460(param_1);
      uVar3 = *(undefined8 *)(param_1 + _DAT_11276a9d4);
      lVar4 = (long)_DAT_11276a9e4;
      _objc_retain(uVar3);
      uVar1 = *(undefined8 *)(param_1 + lVar4);
      *(undefined8 *)(param_1 + lVar4) = uVar3;
      _objc_release(uVar1);
      uVar3 = *(undefined8 *)(param_1 + _DAT_11276a9e0);
      lVar4 = (long)_DAT_11276a9e8;
      _objc_retain(uVar3);
      uVar1 = *(undefined8 *)(param_1 + lVar4);
      *(undefined8 *)(param_1 + lVar4) = uVar3;
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_1 + _DAT_11276a9dc);
    }
    else {
      if (param_3 != 3) goto LAB_107b36080;
      func_0x00010c195460(param_1);
      uVar3 = *(undefined8 *)(param_1 + _DAT_11276a9d8);
      lVar4 = (long)_DAT_11276a9e4;
      _objc_retain(uVar3);
      uVar1 = *(undefined8 *)(param_1 + lVar4);
      *(undefined8 *)(param_1 + lVar4) = uVar3;
      _objc_release(uVar1);
      uVar3 = *(undefined8 *)(param_1 + _DAT_11276a9dc);
      lVar4 = (long)_DAT_11276a9e8;
      _objc_retain(uVar3);
      uVar1 = *(undefined8 *)(param_1 + lVar4);
      *(undefined8 *)(param_1 + lVar4) = uVar3;
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_1 + _DAT_11276a9e0);
    }
    lVar4 = (long)_DAT_11276a9ec;
    _objc_retain(uVar1);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = uVar1;
    _objc_release(uVar3);
    _objc_alloc(PTR_PTR_1126afd30);
    func_0x00010bfffb60();
    goto code_r0x00010c23d620;
  }
  if (param_3 == 0) {
    func_0x00010c195460(param_1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11276a9cc);
    lVar5 = (long)_DAT_11276a9e4;
    _objc_retain(uVar3);
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = uVar3;
    _objc_release(uVar1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11276a9e0);
    lVar5 = (long)_DAT_11276a9e8;
    _objc_retain(uVar3);
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = uVar3;
    _objc_release(uVar1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11276a9dc);
    lVar5 = (long)_DAT_11276a9ec;
    _objc_retain(uVar3);
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = uVar3;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_11276a9b4);
    _objc_retain(uVar1);
    uVar3 = 0x401c000000000000;
LAB_107b36068:
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = uVar1;
    _objc_release(uVar2);
    *(undefined8 *)(param_1 + _DAT_11276a9c8) = uVar3;
  }
  else if (param_3 == 1) {
    func_0x00010c195460(param_1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11276a9d0);
    lVar5 = (long)_DAT_11276a9e4;
    _objc_retain(uVar3);
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = uVar3;
    _objc_release(uVar1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11276a9dc);
    lVar5 = (long)_DAT_11276a9e8;
    _objc_retain(uVar3);
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = uVar3;
    _objc_release(uVar1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_11276a9e0);
    lVar5 = (long)_DAT_11276a9ec;
    _objc_retain(uVar3);
    uVar1 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = uVar3;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_11276a9b8);
    _objc_retain(uVar1);
    uVar3 = 0x4014000000000000;
    goto LAB_107b36068;
  }
LAB_107b36080:
  func_0x00010bea8700(param_1);
  func_0x00010bea2c00(param_1);
  func_0x00010befbb60(*(undefined8 *)(param_1 + _DAT_11276a9bc));
  func_0x00010c08cdc0(param_1);
code_r0x00010c23d620:
                    /* WARNING: Could not recover jumptable at 0x00010c23d630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 107b360c8; end: 107b361a7; -[SCOperaSubscriptionButton _setupSubviews] */

/* WARNING: Possible PIC construction at 0x000107b36184: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000107b36188) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b360c8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar5 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar6 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
  lVar4 = (long)_DAT_11276a9bc;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar2);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar4));
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar5,uVar6,uVar7,uVar8);
  lVar3 = (long)_DAT_11276a9c0;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1c83a0(0x3fe0000000000000,*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar4),PTR_s_addSubview__11259c880,
             *(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 107b361a8; end: 107b362d7; -[SCOperaSubscriptionButton _setTitle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b361a8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c0c7340(0x4032000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840();
  lVar5 = (long)_DAT_11276a9c0;
  func_0x00010c16b720(*(undefined8 *)(param_1 + lVar5));
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  lVar5 = *(long *)(param_1 + lVar5);
  func_0x00010c23d620();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c16e480();
                    /* WARNING: Could not recover jumptable at 0x00010c1732b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (lVar5,PTR_s_setBorderColor_forState__11263a6c8,*(undefined8 *)(lVar5 + _DAT_11276a9e0),
             0);
  return;
}



/* Entry: 107b362d8; end: 107b3631b; -[SCOperaSubscriptionButton _setColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b362d8(long param_1,undefined8 param_2)

{
  func_0x00010c16e480(param_1,param_2,*(undefined8 *)(param_1 + _DAT_11276a9ec),0);
                    /* WARNING: Could not recover jumptable at 0x00010c1732b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setBorderColor_forState__11263a6c8,
             *(undefined8 *)(param_1 + _DAT_11276a9e0),0);
  return;
}



/* Entry: 107b3631c; end: 107b3641b; -[SCOperaSubscriptionButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3631c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276a9bc,0);
  _objc_storeStrong(param_1 + _DAT_11276a9c4,0);
  _objc_storeStrong(param_1 + _DAT_11276a9c0,0);
  _objc_storeStrong(param_1 + _DAT_11276a9d8,0);
  _objc_storeStrong(param_1 + _DAT_11276a9d4,0);
  _objc_storeStrong(param_1 + _DAT_11276a9d0,0);
  _objc_storeStrong(param_1 + _DAT_11276a9cc,0);
  _objc_storeStrong(param_1 + _DAT_11276a9b8,0);
  _objc_storeStrong(param_1 + _DAT_11276a9b4,0);
  _objc_storeStrong(param_1 + _DAT_11276a9e4,0);
  _objc_storeStrong(param_1 + _DAT_11276a9e8,0);
  _objc_storeStrong(param_1 + _DAT_11276a9ec,0);
  _objc_storeStrong(param_1 + _DAT_11276a9e0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a9dc,0);
  return;
}



/* Entry: 107b3641c; end: 107b36423; -[SCOperaSubscriptionLayerView initWithFrame:] */

void FUN_107b3641c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c014650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFrame_horizontalSwipeToD_1125e2b60,0)
  ;
  return;
}



/* Entry: 107b36424; end: 107b36483; +[SCOperaSubscriptionLayerView layerViewWithFrame:horizontalSwipeToDismiss:] */

void FUN_107b36424(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_alloc(PTR_PTR_1126d6a48);
  func_0x00010c014640(param_1,param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b36484; end: 107b364d3; -[SCOperaSubscriptionLayerView initWithFrame:horizontalSwipeToDismiss:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b36484(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f9f08;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_11276a9f0) = param_3;
  }
  return;
}



/* Entry: 107b364d4; end: 107b36bd7; -[SCOperaSubscriptionLayerView setupViewForLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b364d4(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  ulong uStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf13d40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  uVar9 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar10 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar11 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar12 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x00010c013de0(uVar9,uVar10,uVar11,uVar12);
  lVar7 = (long)_DAT_11276a9f4;
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar2;
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c013de0(uVar9,uVar10,uVar11,uVar12);
  lVar6 = (long)_DAT_11276a9f8;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar2;
  _objc_release(uVar4);
  _objc_initWeak(auStack_98,param_1);
  uVar4 = 0;
  _dispatch_get_global_queue(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_107b36bd8;
  puStack_b0 = &UNK_110841fb0;
  _objc_retain(param_3);
  uStack_a8 = param_3;
  _objc_copyWeak(auStack_a0,auStack_98);
  func_0x00010007380c(uVar4,&puStack_c8);
  _objc_release(uVar4);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar6));
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  uVar1 = param_3;
  func_0x00010bf0b040(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c216160(uVar4);
  _objc_release(uVar1);
  func_0x00010c202c80(0x4062c00000000000,0x4062c00000000000,*(undefined8 *)(param_1 + lVar6));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar7));
  puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc();
  func_0x00010c013de0(uVar9,uVar10,uVar11,uVar12);
  lVar6 = (long)_DAT_11276a9fc;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar2;
  _objc_release(uVar4);
  uVar1 = param_3;
  func_0x00010c2605c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar6));
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf0b040(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(*(undefined8 *)(param_1 + lVar6));
  _objc_release(uVar1);
  dVar8 = 32.0;
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4040000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(*(undefined8 *)(param_1 + lVar6));
  _objc_release(puVar2);
  func_0x00010c213040(*(undefined8 *)(param_1 + lVar6));
  func_0x00010c23d620(*(undefined8 *)(param_1 + lVar6));
  func_0x00010befbb60(*(undefined8 *)(param_1 + lVar7));
  uVar1 = param_3;
  func_0x00010c2344e0();
  if ((uVar1 & 1) == 0) {
    func_0x00010bfe0640(*(undefined8 *)(param_1 + lVar6));
    dVar8 = dVar8 + 200.0;
  }
  else {
    dVar8 = 200.0;
  }
  func_0x00010c202c80(0x4062c00000000000,dVar8,*(undefined8 *)(param_1 + lVar7));
  func_0x00010befbb60(param_1);
  lVar7 = (long)_DAT_11276aa00;
  if (*(long *)(param_1 + lVar7) == 0) {
    uVar1 = param_3;
    func_0x00010c2716a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c08fa60();
    _objc_release(uVar1);
    if (uVar3 != 0) {
      puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
      _objc_alloc();
      func_0x00010c013de0(uVar9,uVar10,uVar11,uVar12);
      uVar4 = *(undefined8 *)(param_1 + lVar7);
      *(undefined **)(param_1 + lVar7) = puVar2;
      _objc_release(uVar4);
    }
  }
  uVar1 = param_3;
  func_0x00010c2716a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c08fa60();
  _objc_release(uVar1);
  if (uVar3 != 0) {
    uVar1 = param_3;
    func_0x00010c2716a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar7));
    _objc_release(uVar1);
    uVar1 = param_3;
    func_0x00010bf0b040(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar7));
    _objc_release(uVar1);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4040000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_1 + lVar7));
    _objc_release(puVar2);
    func_0x00010c213040(*(undefined8 *)(param_1 + lVar7));
    func_0x00010c23d620(*(undefined8 *)(param_1 + lVar7));
    func_0x00010befbb60(param_1);
  }
  lVar5 = (long)_DAT_11276aa04;
  if ((*(long *)(param_1 + lVar5) == 0) && (uVar1 = param_3, func_0x00010c2344e0(), (int)uVar1 != 0)
     ) {
    puVar2 = PTR_PTR_1126d6a50;
    _objc_alloc();
    func_0x00010c013de0(0,0,0x4059000000000000,0x4044000000000000);
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar2;
    _objc_release(uVar4);
    func_0x00010befbd60(*(undefined8 *)(param_1 + lVar5));
  }
  uVar1 = param_3;
  func_0x00010c2344e0();
  if ((int)uVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    func_0x00010c08c0e0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(0x4034000000000000);
    _objc_release(uVar4);
    func_0x00010befbb60(param_1);
  }
  func_0x00010c2344e0(param_3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar6));
  uVar1 = param_3;
  func_0x00010c2716a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  _objc_release(uVar1);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar7));
  uVar1 = param_3;
  func_0x00010c2344e0();
  if ((int)uVar1 != 0) {
    uVar1 = param_3;
    func_0x00010c260780(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c28c620(param_1);
    _objc_release(uVar1);
  }
  puVar2 = PTR__OBJC_CLASS___UIButton_1126aec48;
  func_0x00010bf25cc0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11276aa08;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  *(undefined **)(param_1 + lVar6) = puVar2;
  _objc_release(uVar4);
  if (*(char *)(param_1 + _DAT_11276a9f0) == '\x01') {
    func_0x00010b87f3b0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar4;
    func_0x00010bf138e0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar9;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(uVar4);
    func_0x00010c16e720(*(undefined8 *)(param_1 + lVar6));
    func_0x00010c23d0a0(uVar10);
    func_0x00010c202c80(*(undefined8 *)(param_1 + lVar6));
    uVar1 = param_3;
    func_0x00010bf0b040(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(*(undefined8 *)(param_1 + lVar6));
    _objc_release(uVar1);
    _objc_release(uVar10);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e720(uVar4);
    _objc_release(puVar2);
    func_0x00010c202c80(0x4054000000000000,0x4040400000000000,*(undefined8 *)(param_1 + lVar6));
  }
  func_0x00010befbd60(*(undefined8 *)(param_1 + lVar6));
  func_0x00010befbb60(param_1);
  _objc_destroyWeak(auStack_a0);
  _objc_release(uStack_a8);
  _objc_destroyWeak(auStack_98);
  _objc_release(param_3);
  return;
}



/* Entry: 107b36bd8; end: 107b36d8b;  */

void FUN_107b36bd8(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010bf0b040();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = 1;
  do {
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010c071c60();
    _objc_release(puVar5);
    puVar5 = puVar4;
    if ((uVar6 & 1) == 0) {
      func_0x00010c2bb380(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
    }
    func_0x00010befa120(puVar2);
    _objc_release(puVar5);
    _objc_release(puVar3);
    lVar7 = lVar7 + 1;
  } while (lVar7 != 0x1e);
  _objc_release(uVar1);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_107b36d8c;
  puStack_78 = &UNK_110841fb0;
  _objc_copyWeak(auStack_68,param_1 + 0x28);
  _objc_retain(puVar2);
  puStack_70 = puVar2;
  func_0x000100162d98("APPSTORE",&puStack_90);
  _objc_release(puStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar2);
  return;
}



/* Entry: 107b36d8c; end: 107b36dc7;  */

void FUN_107b36d8c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bead200(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 107b36dc8; end: 107b36dfb; -[SCOperaSubscriptionLayerView startAnimating] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b36dc8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11276a9f8;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar1),param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010c24dbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + lVar1),PTR_s_startAnimating_112671118);
  return;
}



/* Entry: 107b36dfc; end: 107b370df; -[SCOperaSubscriptionLayerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b36dfc(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  long lStack_70;
  undefined *puStack_68;
  
  puStack_68 = PTR_PTR_1126f9f08;
  lStack_70 = param_5;
  _objc_msgSendSuper2(&lStack_70,PTR_s_layoutSubviews_112600e60);
  lVar3 = (long)_DAT_11276a9f4;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
  dVar7 = param_1;
  func_0x00010bf20c00(param_5);
  _CGRectGetMidX();
  dVar6 = dVar7;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar3));
  _CGRectGetMidX();
  dVar7 = dVar7 - dVar6;
  func_0x00010bf20c00(param_5);
  _CGRectGetMidY();
  dVar5 = dVar6;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar3));
  _CGRectGetMidY();
  func_0x00010bc852e4(param_1,param_2,param_3,param_4,dVar7,dVar6 - dVar5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar3));
  lVar4 = (long)_DAT_11276a9f8;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar4));
  dVar7 = param_1;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar3));
  _CGRectGetMidX();
  dVar6 = dVar7;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar4));
  _CGRectGetMidX();
  dVar7 = dVar7 - dVar6;
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar3));
  _CGRectGetMinY();
  func_0x00010bc852e4(param_1,param_2,param_3,param_4,dVar7,dVar6);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar4));
  lVar4 = (long)_DAT_11276a9fc;
  uVar2 = *(ulong *)(param_5 + lVar4);
  func_0x00010c074c20();
  if ((uVar2 & 1) == 0) {
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar4));
    dVar7 = param_1;
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar3));
    _CGRectGetMidX();
    dVar6 = dVar7;
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar4));
    _CGRectGetMidX();
    dVar7 = dVar7 - dVar6;
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar3));
    _CGRectGetMaxY();
    dVar5 = dVar6;
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar4));
    _CGRectGetMaxY();
    func_0x00010bc852e4(param_1,param_2,param_3,param_4,dVar7,dVar6 - dVar5);
    func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar4));
  }
  else {
    func_0x00010bf345e0(param_5);
    dVar7 = param_1;
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
    _CGRectGetMinY();
    func_0x00010c17a6a0(param_1,dVar7 + -20.0,*(undefined8 *)(param_5 + _DAT_11276aa00));
    func_0x00010bf345e0(param_5);
    param_2 = param_1;
    func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
    _CGRectGetMaxY();
    param_2 = param_2 + 1.0;
    func_0x00010c17a6a0(param_1,param_2,*(undefined8 *)(param_5 + _DAT_11276aa04));
  }
  cVar1 = *(char *)(param_5 + _DAT_11276a9f0);
  lVar3 = (long)_DAT_11276aa08;
  func_0x00010bfb68e0(*(undefined8 *)(param_5 + lVar3));
  if (cVar1 == '\x01') {
    dVar7 = 14.0;
    dVar6 = 14.0;
  }
  else {
    dVar7 = param_1;
    func_0x00010bf20c00(param_5);
    _CGRectGetMidX();
    dVar6 = dVar7;
    func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar3));
    _CGRectGetMidX();
    dVar7 = dVar7 - dVar6;
    func_0x00010bf20c00(param_5);
    _CGRectGetMinY();
  }
  func_0x00010bc852e4(param_1,param_2,param_3,param_4,dVar7,dVar6);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar3));
  return;
}



/* Entry: 107b370e0; end: 107b37157; -[SCOperaSubscriptionLayerView updateWithConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b370e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2608c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(uVar1);
  func_0x00010c28c620(*(undefined8 *)(param_1 + _DAT_11276aa04));
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsLayout_1126509b0);
  return;
}



/* Entry: 107b37158; end: 107b3718b; -[SCOperaSubscriptionLayerView didTapSubscriptionButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b37158(long param_1)

{
  param_1 = param_1 + _DAT_11276aa0c;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7d5e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b3718c; end: 107b371bf; -[SCOperaSubscriptionLayerView _didTapExitButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3718c(long param_1)

{
  param_1 = param_1 + _DAT_11276aa0c;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf7caa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 107b371c0; end: 107b37247; -[SCOperaSubscriptionLayerView _setupImageViewAnimation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b371c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11276a9f8;
  func_0x00010c168240(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1681a0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1682a0(*(undefined8 *)(param_1 + lVar3),param_2,1);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010bf03d20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar3),param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 107b37248; end: 107b37267; -[SCOperaSubscriptionLayerView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b37248(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276aa0c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b37268; end: 107b3727b; -[SCOperaSubscriptionLayerView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b37268(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276aa0c,param_3);
  return;
}



/* Entry: 107b3727c; end: 107b3728b; -[SCOperaSubscriptionLayerView actionButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_107b3727c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276aa04);
}



/* Entry: 107b3728c; end: 107b37317; -[SCOperaSubscriptionLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3728c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276aa04,0);
  _objc_destroyWeak(param_1 + _DAT_11276aa0c);
  _objc_storeStrong(param_1 + _DAT_11276aa00,0);
  _objc_storeStrong(param_1 + _DAT_11276aa08,0);
  _objc_storeStrong(param_1 + _DAT_11276a9fc,0);
  _objc_storeStrong(param_1 + _DAT_11276a9f8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276a9f4,0);
  return;
}



/* Entry: 107b37318; end: 107b373b3; -[SCOperaSubscriptionLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b37318(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126d6a48;
  _objc_alloc();
  lVar2 = param_1;
  func_0x00010bf46560(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c298f80();
  func_0x00010c014640(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar4 = (long)_DAT_11276aa10;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined **)(param_1 + lVar4) = puVar1;
  _objc_release(uVar3);
  _objc_release(lVar2);
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4));
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar4));
  return;
}



/* Entry: 107b373b4; end: 107b37423; -[SCOperaSubscriptionLayerViewController updateViewWithPreviousLayer:currentLayer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b373b4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11276aa10);
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2298c0(uVar2,param_2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 107b37424; end: 107b37553; -[SCOperaSubscriptionLayerViewController viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b37424(ulong param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f9f10;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_viewDidFullyAppear_112684c88);
  lVar6 = (long)_DAT_11276aa10;
  func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar6));
  puVar1 = PTR_PTR_1126c9ce8;
  func_0x00010c250c60(PTR_PTR_1126c9ce8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_1);
  _objc_release(puVar1);
  lVar2 = *(long *)(param_1 + lVar6);
  func_0x00010beee0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010beee0c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c174a40();
    _objc_release(uVar3);
  }
  uVar4 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c2344e0();
  _objc_release(uVar4);
  if ((uVar5 & 1) == 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_107b37554;
    puStack_50 = &UNK_110842e18;
    uStack_48 = param_1;
    func_0x000100c749e0(0x3f800000,"APPSTORE",&puStack_68);
  }
  return;
}



/* Entry: 107b37554; end: 107b375ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b37554(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11276aa14) = 1;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1 = PTR_PTR_1126c9ce8;
  func_0x00010c260500(PTR_PTR_1126c9ce8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b375ac; end: 107b375bb; -[SCOperaSubscriptionLayerViewController viewDidFullyDisappear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b375ac(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_11276aa14) = 0;
  return;
}



/* Entry: 107b375bc; end: 107b375ff; -[SCOperaSubscriptionLayerViewController didTapSubscriptionButton] */

void FUN_107b375bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c9ce8;
  func_0x00010c260740(PTR_PTR_1126c9ce8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b37600; end: 107b37643; -[SCOperaSubscriptionLayerViewController didTapExitButton] */

void FUN_107b37600(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2638;
  func_0x00010c152660(PTR_PTR_1126b2638);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf04420(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 107b37644; end: 107b376a3; -[SCOperaSubscriptionLayerViewController pageabilityForRelativePosition:gestureRecognizer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_107b37644(ulong param_1)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2344e0();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + (long)_DAT_11276aa14) ^ 1;
  }
  else {
    bVar1 = 0;
  }
  return bVar1;
}



/* Entry: 107b376a4; end: 107b376ab; -[SCOperaSubscriptionLayerViewController isRecyclable] */

undefined8 FUN_107b376a4(void)

{
  return 0;
}



/* Entry: 107b376ac; end: 107b376bf; -[SCOperaSubscriptionLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b376ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276aa10,0);
  return;
}



/* Entry: 107b376c0; end: 107b376ef; -[SCOperaTapToolTipsLayerView setViewWithTapLeftWidthRatio:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b376c0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11276aa18) = param_1;
  func_0x00010bead580();
                    /* WARNING: Could not recover jumptable at 0x00010beabe70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s__setupDashedLine_112588940);
  return;
}



/* Entry: 107b376f0; end: 107b377f3; -[SCOperaTapToolTipsLayerView _setupLabels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b376f0(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x00010beca7c0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11276aa1c;
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(long *)(param_1 + lVar4) = lVar1;
  _objc_release(uVar3);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar4));
  lVar1 = param_1;
  func_0x00010beca7c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = (long)_DAT_11276aa20;
  uVar3 = *(undefined8 *)(param_1 + lVar5);
  *(long *)(param_1 + lVar5) = lVar1;
  _objc_release(uVar3);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar5));
  func_0x00010befbb60(param_1);
  func_0x00010befbb60(param_1);
  ppuVar2 = &PTR____CFConstantStringClassReference_110eae478;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eae478,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar4));
  _objc_release(ppuVar2);
  ppuVar2 = &PTR____CFConstantStringClassReference_110eae498;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110eae498,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 107b377f4; end: 107b378a7; -[SCOperaTapToolTipsLayerView _tapLabel] */

void FUN_107b377f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_alloc(PTR__OBJC_CLASS___UILabel_1126aec30);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(0x4034000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19e480(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c1cfce0(puVar1,param_2,0);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c213180(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  func_0x00010c213040(puVar1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 107b378a8; end: 107b379af; -[SCOperaTapToolTipsLayerView _setupDashedLine] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b378a8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b52f0;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_11276aa24;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c22a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e8e0();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c22a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdd00(0x4008000000000000);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c22a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdb80();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 107b379b0; end: 107b37bbb; -[SCOperaTapToolTipsLayerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b379b0(double param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  long lStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f9f18;
  lStack_60 = param_2;
  _objc_msgSendSuper2(&lStack_60,PTR_s_layoutSubviews_112600e60);
  lVar3 = (long)_DAT_11276aa24;
  uVar1 = *(undefined8 *)(param_2 + lVar3);
  func_0x00010c22a660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099460();
  func_0x00010c2256c0(*(undefined8 *)(param_2 + lVar3));
  _objc_release(uVar1);
  func_0x00010bfe0640(param_2);
  func_0x00010c1a7d00(*(undefined8 *)(param_2 + lVar3));
  func_0x00010bf20c00(param_2);
  _CGRectGetMaxX();
  lVar4 = (long)_DAT_11276aa18;
  func_0x00010c17a840(param_1 * *(double *)(param_2 + lVar4),*(undefined8 *)(param_2 + lVar3));
  func_0x00010bf20c00(param_2);
  _CGRectGetMinY();
  func_0x00010c2172c0(*(undefined8 *)(param_2 + lVar3));
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf19920(PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0;
  func_0x00010c0d18c0(0,0);
  func_0x00010bfe0640(*(undefined8 *)(param_2 + lVar3));
  dVar5 = 0.0;
  func_0x00010bef98c0(0,uVar1,puVar2);
  _objc_retainAutorelease(puVar2);
  func_0x00010bdc1040();
  uVar1 = *(undefined8 *)(param_2 + lVar3);
  func_0x00010c22a660(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d9820();
  _objc_release(uVar1);
  func_0x00010c2a5040(param_2);
  dVar5 = *(double *)(param_2 + lVar4) * dVar5 + -20.0;
  lVar3 = (long)_DAT_11276aa1c;
  func_0x00010c2256c0(dVar5,*(undefined8 *)(param_2 + lVar3));
  func_0x00010bfe0640(param_2);
  func_0x00010c1a7d00(*(undefined8 *)(param_2 + lVar3));
  func_0x00010bf20c00(param_2);
  _CGRectGetMinX();
  dVar5 = dVar5 + 10.0;
  func_0x00010c1ba100(dVar5,*(undefined8 *)(param_2 + lVar3));
  func_0x00010bf20c00(param_2);
  _CGRectGetMinY();
  func_0x00010c2172c0(*(undefined8 *)(param_2 + lVar3));
  func_0x00010c2a5040(param_2);
  dVar5 = (1.0 - *(double *)(param_2 + lVar4)) * dVar5 + -20.0;
  lVar3 = (long)_DAT_11276aa20;
  func_0x00010c2256c0(dVar5,*(undefined8 *)(param_2 + lVar3));
  func_0x00010bfe0640(param_2);
  func_0x00010c1a7d00(*(undefined8 *)(param_2 + lVar3));
  func_0x00010bf20c00(param_2);
  _CGRectGetMaxX();
  func_0x00010c1ee020(dVar5 + -10.0,*(undefined8 *)(param_2 + lVar3));
  func_0x00010bf20c00(param_2);
  _CGRectGetMinY();
  func_0x00010c2172c0(*(undefined8 *)(param_2 + lVar3));
  _objc_release(puVar2);
  return;
}



/* Entry: 107b37bbc; end: 107b37c0b; -[SCOperaTapToolTipsLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b37bbc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276aa20,0);
  _objc_storeStrong(param_1 + _DAT_11276aa1c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276aa24,0);
  return;
}



/* Entry: 107b37c0c; end: 107b37c67; -[SCOperaTapToolTipsLayerViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b37c0c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f9f20;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewDidAppear__112684bd0);
  func_0x00010bf02e60(*(undefined8 *)(param_1 + _DAT_11276aa28));
  func_0x00010bedc740(param_1);
  return;
}



/* Entry: 107b37c68; end: 107b37f53; -[SCOperaTapToolTipsLayerViewController _updateOperaPropertiesWithBlockingOtherLayers:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b37c68(undefined8 param_1)

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
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uVar19;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c9410;
  func_0x00010c0c5840();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c9410;
  func_0x00010c2708e0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c9410;
  func_0x00010c08ea20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126c9410;
  func_0x00010c0b4de0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126c9410;
  func_0x00010c235980();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126c9410;
  func_0x00010c23a4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126c9410;
  func_0x00010c237680();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126c9410;
  func_0x00010c238dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c118dc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e940();
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = PTR_PTR_1126d6a58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar18 = (long)_DAT_11276aa28;
  uVar19 = *(undefined8 *)(puVar17 + lVar18);
  *(undefined **)(puVar17 + lVar18) = puVar1;
  _objc_release(uVar19);
  func_0x00010c160fc0(*(undefined8 *)(puVar17 + lVar18));
  func_0x00010c222e20(0x3fd54fdf3b645a1d,*(undefined8 *)(puVar17 + lVar18));
  func_0x00010c1677c0(0,*(undefined8 *)(puVar17 + lVar18));
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar17,PTR_s_setView__112666308,*(undefined8 *)(puVar17 + lVar18));
  return;
}



/* Entry: 107b37f54; end: 107b37fdb; -[SCOperaTapToolTipsLayerViewController loadView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b37f54(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d6a58;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar3 = (long)_DAT_11276aa28;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c222e20(0x3fd54fdf3b645a1d,*(undefined8 *)(param_1 + lVar3));
  func_0x00010c1677c0(0,*(undefined8 *)(param_1 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c222390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setView__112666308,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 107b37fdc; end: 107b38143; -[SCOperaTapToolTipsLayerViewController didTryPagingWhenPagingDisabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b37fdc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  *(undefined1 *)(param_1 + _DAT_11276aa2c) = 1;
  lVar1 = param_1;
  func_0x00010bf1d9e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1da00();
  _objc_release(lVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x107b38088;
  puStack_40 = &UNK_110841f20;
  lStack_38 = param_1;
  func_0x00010bf02fc0(*(undefined8 *)(param_1 + _DAT_11276aa28),param_2,&puStack_58);
  func_0x00010bedc740(param_1,param_2,0);
  return;
}



/* Entry: 107b38144; end: 107b3815b; -[SCOperaTapToolTipsLayerViewController isBlocking] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_107b38144(long param_1)

{
  return (*(byte *)(param_1 + _DAT_11276aa2c) ^ 0xff) & 1;
}



/* Entry: 107b3815c; end: 107b3816b; -[SCOperaTapToolTipsLayerViewController isBeingDismissed] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_107b3815c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11276aa2c);
}



/* Entry: 107b3816c; end: 107b38173; -[SCOperaTapToolTipsLayerViewController shouldBlockOtherLayersFromDisplayingWithCurrentPage:] */

undefined8 FUN_107b3816c(void)

{
  return 0;
}



/* Entry: 107b38174; end: 107b3817b; -[SCOperaTapToolTipsLayerViewController pageabilityForRelativePosition:gestureRecognizer:] */

undefined8 FUN_107b38174(void)

{
  return 1;
}



/* Entry: 107b3817c; end: 107b38183; -[SCOperaTapToolTipsLayerViewController isRecyclable] */

undefined8 FUN_107b3817c(void)

{
  return 0;
}



/* Entry: 107b38184; end: 107b381a3; -[SCOperaTapToolTipsLayerViewController blockingViewControllerDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b38184(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11276aa30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 107b381a4; end: 107b381b7; -[SCOperaTapToolTipsLayerViewController setBlockingViewControllerDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b381a4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11276aa30,param_3);
  return;
}



/* Entry: 107b381b8; end: 107b381f3; -[SCOperaTapToolTipsLayerViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b381b8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11276aa30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276aa28,0);
  return;
}



/* Entry: 107b381f4; end: 107b3837b; -[SCOperaToolTipsView initWithFrame:] */

undefined8 * FUN_107b381f4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f9f28;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
    func_0x00010bf8cf60(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
    _objc_alloc(PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0);
    func_0x00010c00ee20();
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(puVar3);
    _objc_release(puVar4);
    func_0x00010befbb60(puVar1);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
  return puVar1;
}



/* Entry: 107b3837c; end: 107b38417; -[SCOperaToolTipsView animateIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3837c(long param_1,undefined8 param_2)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if ((*(byte *)(param_1 + _DAT_11276aa34) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_11276aa34) = 1;
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_107b38418;
    puStack_20 = &UNK_110842e18;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x107b38424;
    puStack_48 = &UNK_110841f20;
    lStack_40 = param_1;
    lStack_18 = param_1;
    func_0x00010bf03420(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_38,
                        &puStack_60);
  }
  return;
}



/* Entry: 107b38418; end: 107b38437;  */

void FUN_107b38418(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x3ff0000000000000,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107b38438; end: 107b3851b; -[SCOperaToolTipsView animateOutWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b38438(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + _DAT_11276aa38) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_11276aa38) = 1;
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_107b3851c;
    puStack_40 = &UNK_110842e18;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    uStack_78 = 0x107b38528;
    puStack_70 = &UNK_110858070;
    lStack_68 = param_1;
    lStack_38 = param_1;
    _objc_retain(param_3);
    uStack_60 = param_3;
    func_0x00010bf03440(0x3fc999999999999a,0,puVar1,param_2,0x30000,&puStack_58,&puStack_88);
    _objc_release(uStack_60);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 107b3851c; end: 107b3854b;  */

void FUN_107b3851c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0,*(undefined8 *)(param_1 + 0x20),PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107b3854c; end: 107b388eb; -[SCOperaTextLayerView setupView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b3854c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  uVar2 = param_3;
  func_0x00010c26b700(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e820(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x00010c08fa60(puVar1);
  uVar8 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  uVar2 = param_3;
  func_0x00010bfb3a80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6f20(puVar1,param_2,uVar8,uVar2,0,puVar3);
  _objc_release(uVar2);
  uVar8 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  uVar2 = param_3;
  func_0x00010c26b920(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef6f20(puVar1,param_2,uVar8,uVar2,0,puVar3);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___NSParagraphStyle_1126af948;
  func_0x00010bf69e80(PTR__OBJC_CLASS___NSParagraphStyle_1126af948);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c0d3c80();
  _objc_release(puVar4);
  uVar2 = param_3;
  func_0x00010bfe4140();
  if (uVar2 < 3) {
    func_0x00010c166c00(puVar5,param_2,2 - uVar2);
  }
  func_0x00010bef6f20(puVar1,param_2,*(undefined8 *)PTR__NSParagraphStyleAttributeName_110345820,
                      puVar5,0,puVar3);
  puVar4 = PTR__OBJC_CLASS___NSShadow_1126b6158;
  _objc_alloc_init(PTR__OBJC_CLASS___NSShadow_1126b6158);
  uVar2 = param_3;
  func_0x00010bf8ac20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fe740(puVar4,param_2,uVar2);
  _objc_release(uVar2);
  func_0x00010bf8ac40(param_3);
  func_0x00010c1fe7a0(puVar4);
  func_0x00010bf8aa60(param_3);
  func_0x00010c1fe720(puVar4);
  func_0x00010bef6f20(puVar1,param_2,*(undefined8 *)PTR__NSShadowAttributeName_110345828,puVar4,0,
                      puVar3);
  lVar6 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b720();
  _objc_release(lVar6);
  lVar6 = param_1;
  func_0x00010c26ca80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2131e0(0x4024000000000000,0x4024000000000000,0x4024000000000000,0x4024000000000000);
  _objc_release(lVar6);
  uVar2 = param_3;
  func_0x00010bfebaa0();
  lVar9 = (long)_DAT_11276aa3c;
  lVar6 = *(long *)(param_1 + lVar9);
  if ((int)uVar2 == 0) {
    uVar8 = 1;
  }
  else {
    if (lVar6 == 0) {
      puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_alloc();
      dVar11 = *(double *)(PTR__CGRectZero_110347608 + 8);
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,dVar11,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      uVar8 = *(undefined8 *)(param_1 + lVar9);
      *(undefined **)(param_1 + lVar9) = puVar3;
      _objc_release(uVar8);
      puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                          &PTR____CFConstantStringClassReference_110eae4b8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c23d0a0();
      dVar10 = dVar11 * 0.5;
      dVar12 = dVar10 + -1.0;
      func_0x00010c23d0a0(puVar3);
      func_0x00010c23d0a0(puVar3);
      dVar11 = dVar11 * 0.5;
      dVar13 = dVar11 + -1.0;
      func_0x00010c23d0a0(puVar3);
      puVar7 = puVar3;
      func_0x00010c13a160(dVar12,dVar10 * 0.5 + -1.0,dVar13,dVar11 * 0.5 + -1.0,puVar3,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar9),param_2,puVar7);
      _objc_release(puVar7);
      func_0x00010c066fa0(param_1,param_2,*(undefined8 *)(param_1 + lVar9),0);
      _objc_release(puVar3);
      lVar6 = *(long *)(param_1 + lVar9);
    }
    uVar8 = 0;
  }
  func_0x00010c1a7f60(lVar6,param_2,uVar8);
  uVar2 = param_3;
  func_0x00010c230ea0();
  if ((int)uVar2 != 0) {
    func_0x00010c1677c0(0,param_1);
  }
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 107b388ec; end: 107b388fb; -[SCOperaTextLayerView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b388ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11276aa40),PTR_s_sizeThatFits__11266cf90);
  return;
}



/* Entry: 107b388fc; end: 107b389ab; -[SCOperaTextLayerView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b388fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f9f30;
  lStack_50 = param_5;
  _objc_msgSendSuper2(&lStack_50,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11276aa3c));
  func_0x00010bf20c00(param_5);
  func_0x00010c26ca80(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(param_5);
  return;
}



/* Entry: 107b389ac; end: 107b38a17; -[SCOperaTextLayerView updateVisible:animationDuration:delay:] */

void FUN_107b389ac(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  double dStack_18;
  
  dStack_18 = (double)param_3;
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_107b38a18;
  puStack_28 = &UNK_110848c48;
  uStack_20 = param_1;
  func_0x00010bf03440(PTR__OBJC_CLASS___UIView_1126aec20,param_2,0x30000,&puStack_40,0);
  return;
}



/* Entry: 107b38a18; end: 107b38a23;  */

void FUN_107b38a18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),
             PTR_s_setAlpha__112637810);
  return;
}



/* Entry: 107b38a24; end: 107b38adb; -[SCOperaTextLayerView textView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b38a24(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11276aa40;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UITextView_1126afb88;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    func_0x00010c193a00(*(undefined8 *)(param_1 + lVar4),param_2,0);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 107b38adc; end: 107b38b1b; -[SCOperaTextLayerView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b38adc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11276aa40,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11276aa3c,0);
  return;
}



/* Entry: 107b38b1c; end: 107b38c5b; -[SCOperaTextLayerViewController viewDidFullyAppear] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_107b38b1c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f9f38;
  lStack_50 = param_1;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidFullyAppear_112684c88);
  lVar2 = param_1;
  func_0x00010c08c0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c26f100();
  _objc_release(lVar2);
  if (0 < lVar3) {
    func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_11276aa44));
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    lVar2 = param_1;
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c26fa80();
    func_0x00010c08c0e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c26f100();
    func_0x00010bf03440((double)((float)lVar3 / 1000.0),(double)((float)lVar4 / 1000.0),puVar1);
    _objc_release(param_1);
    _objc_release(lVar2);
  }
  return;
}


