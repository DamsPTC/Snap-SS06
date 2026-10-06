/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105a5de00; end: 105a5de5f; -[SCSpectaclesCheeriosOTAManager currentVersionString] */

void FUN_105a5de00(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfb0d20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105a5de60; end: 105a5dec3; -[SCSpectaclesCheeriosOTAManager updateAvailableVersionString] */

void FUN_105a5de60(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x80);
  func_0x00010c252d60();
  if (lVar1 != 2) {
    lVar1 = *(long *)(param_1 + 0x80);
    func_0x00010c252d60();
    if (lVar1 != 10) {
      lVar1 = *(long *)(param_1 + 0x80);
      func_0x00010c252d60();
      if (lVar1 != 0xd) goto LAB_105a5deb0;
    }
  }
  func_0x00010c0edd40(*(undefined8 *)(param_1 + 0xa8));
  _objc_retainAutoreleasedReturnValue();
LAB_105a5deb0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a5dec4; end: 105a5decb; -[SCSpectaclesCheeriosOTAManager hasRequiredUpdate] */

void FUN_105a5dec4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c07c6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0xa8),PTR_s_isRequiredUpdate_1125fcbb8);
  return;
}



/* Entry: 105a5decc; end: 105a5dfc7; -[SCSpectaclesCheeriosOTAManager _handleConnectionState:] */

void FUN_105a5decc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bf1ca20();
  if (lVar1 == 2) {
    lVar1 = *(long *)(param_1 + 0x80);
    if ((lVar1 == 0) || (func_0x00010c252d60(), lVar1 == 0)) {
      func_0x00010c266260(param_1);
    }
  }
  else {
    lVar1 = param_3;
    func_0x00010bf1ca20();
    if ((lVar1 != 2) && (lVar1 = *(long *)(param_1 + 0x80), lVar1 != 0)) {
      func_0x00010c252d60();
      if (lVar1 == 6) {
        puVar2 = PTR_PTR_1126c1a78;
        _objc_alloc(PTR_PTR_1126c1a78);
        func_0x00010c04c2c0();
        func_0x00010bea5fc0(param_1,param_2,puVar2);
        _objc_release(puVar2);
        func_0x00010bec15c0(param_1);
      }
      else {
        lVar1 = *(long *)(param_1 + 0x80);
        func_0x00010c252d60();
        if (lVar1 != 7) {
          func_0x00010be95360(param_1);
        }
      }
    }
  }
  lVar1 = param_3;
  func_0x00010c2a51e0();
  if ((lVar1 == 2) && (lVar1 = param_1, func_0x00010be3fe00(), (int)lVar1 != 0)) {
    func_0x00010bec2000(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a5dfc8; end: 105a5dfcf; -[SCSpectaclesCheeriosOTAManager autoUpdateManager] */

void FUN_105a5dfc8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 105a5dfd0; end: 105a5e037; -[SCSpectaclesCheeriosOTAManager syncOTAAutoUpdateEnabledSettings] */

void FUN_105a5dfd0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  puVar1 = PTR_PTR_1126c1a80;
  _objc_alloc(PTR_PTR_1126c1a80);
  func_0x00010be3e4e0(param_1);
  func_0x00010c00f9c0(puVar1,param_2,param_1,0,0);
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a5e038; end: 105a5e18f; -[SCSpectaclesCheeriosOTAManager setOTAAutoUpdateEnabled:] */

void FUN_105a5e038(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x60),param_2,puVar5,
                      &PTR____CFConstantStringClassReference_110e194b8);
  _objc_release(puVar5);
  lVar1 = param_1;
  func_0x00010be423c0();
  if ((int)lVar1 != 0) {
    if (param_3 == 0) {
      puVar5 = *(undefined **)(param_1 + 0x50);
      func_0x00010c269d40(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf2efc0();
    }
    else {
      puVar5 = PTR_PTR_1126c1a88;
      _objc_alloc(PTR_PTR_1126c1a88);
      uVar2 = *(undefined8 *)(param_1 + 0xa8);
      func_0x00010c0edd60(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_1 + 0xa8);
      func_0x00010c0edd40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0xa8);
      func_0x00010c0706e0(uVar4);
      func_0x00010c050ba0(puVar5,param_2,uVar2,uVar3,(uint)uVar4 ^ 1);
      _objc_release(uVar3);
      _objc_release(uVar2);
      uVar2 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1502a0();
      _objc_release(uVar2);
    }
    _objc_release(puVar5);
  }
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  puVar5 = PTR_PTR_1126c1a80;
  _objc_alloc(PTR_PTR_1126c1a80);
  func_0x00010c00f9c0();
  func_0x00010c0d9840(uVar2,param_2,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105a5e190; end: 105a5e24f; -[SCSpectaclesCheeriosOTAManager spectaclesDevice:didUpdateInfo:] */

void FUN_105a5e190(long param_1,undefined8 param_2,long param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  _objc_release(param_3);
  if (param_3 != lVar1) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  lVar2 = *(long *)(param_1 + 0x80);
  func_0x00010c252d60();
  _objc_release(lVar1);
  if (lVar2 == 7) {
    if ((param_4 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x91) = 1;
    }
    if ((param_4 >> 2 & 1) == 0) {
      if (*(char *)(param_1 + 0x92) != '\x01') {
        return;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x92) = 1;
    }
    if (*(char *)(param_1 + 0x91) == '\x01') {
      func_0x00010c266260(param_1);
      *(undefined2 *)(param_1 + 0x91) = 0;
    }
  }
  return;
}



/* Entry: 105a5e250; end: 105a5e2db; -[SCSpectaclesCheeriosOTAManager _freezeActivateDeviceForFirmwareUpdate] */

void FUN_105a5e250(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained();
  lVar2 = param_1 + 0x10;
  _objc_loadWeakRetained();
  lVar3 = lVar2;
  func_0x00010bef07c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar1 != lVar3) {
    return;
  }
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb76c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a5e2dc; end: 105a5e307; -[SCSpectaclesCheeriosOTAManager _unfreezeActivateDevice] */

void FUN_105a5e2dc(long param_1)

{
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c27fb40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a5e308; end: 105a5e3df; -[SCSpectaclesCheeriosOTAManager _restartOTASync] */

void FUN_105a5e308(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = 0;
  _objc_release(uVar1);
  func_0x00010c1a9bc0(*(undefined8 *)(param_1 + 0xb0));
  *(undefined2 *)(param_1 + 0x90) = 1;
  *(undefined1 *)(param_1 + 0x92) = 0;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105a5e3e0;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  func_0x00010c266260(param_1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105a5e3e0; end: 105a5e40b;  */

void FUN_105a5e3e0(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed10a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a5e40c; end: 105a5e52b; -[SCSpectaclesCheeriosOTAManager _startRestartTimer] */

void FUN_105a5e40c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010bddace0();
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x105a5e4c0;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  uVar1 = 0;
  func_0x0001008553e8(0,&puStack_50);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0xa0) = uVar1;
  _objc_release(uVar2);
  func_0x000100c749e0(0x43160000,"APPSTORE",*(undefined8 *)(param_1 + 0xa0));
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 105a5e52c; end: 105a5e567; -[SCSpectaclesCheeriosOTAManager _cancelRestartTimer] */

void FUN_105a5e52c(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0xa0) != 0) {
    _dispatch_block_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    *(undefined8 *)(param_1 + 0xa0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105a5e568; end: 105a5e5b3; -[SCSpectaclesCheeriosOTAManager _disableTransfer] */

void FUN_105a5e568(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2197e0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a5e5b4; end: 105a5e5ff; -[SCSpectaclesCheeriosOTAManager _enableTransfer] */

void FUN_105a5e5b4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2197e0();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a5e600; end: 105a5e683; -[SCSpectaclesCheeriosOTAManager _canRequestOTAUpdateFromCurrentOTAUpdateStatus] */

bool FUN_105a5e600(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x80);
  func_0x00010c252d60();
  if (lVar1 != 2) {
    lVar1 = *(long *)(param_1 + 0x80);
    func_0x00010c252d60();
    if (lVar1 != 8) {
      lVar1 = *(long *)(param_1 + 0x80);
      func_0x00010c252d60();
      if (lVar1 != 9) {
        lVar1 = *(long *)(param_1 + 0x80);
        func_0x00010c252d60();
        if (lVar1 != 10) {
          lVar1 = *(long *)(param_1 + 0x80);
          func_0x00010c252d60();
          if (lVar1 != 0xd) {
            lVar1 = *(long *)(param_1 + 0x80);
            func_0x00010c252d60(lVar1);
            return lVar1 == 0xe;
          }
        }
      }
    }
  }
  return true;
}



/* Entry: 105a5e684; end: 105a5e6ef; -[SCSpectaclesCheeriosOTAManager _didChangeOtaTag] */

uint FUN_105a5e684(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1;
  func_0x00010bdf7740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x88);
  if (lVar3 == 0 || lVar2 == 0) {
    uVar1 = (uint)((lVar2 != 0) != (lVar3 != 0));
  }
  else {
    func_0x00010c0720c0(lVar3,param_2,lVar2);
    uVar1 = (uint)lVar3 ^ 1;
  }
  _objc_release(lVar2);
  return uVar1;
}



/* Entry: 105a5e6f0; end: 105a5e75f; -[SCSpectaclesCheeriosOTAManager _canRequestAvailabilityCheck] */

long FUN_105a5e6f0(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x80);
  if (uVar1 != 0) {
    func_0x00010c252d60();
    if (0xe < uVar1) {
      return 0;
    }
    if ((1L << (uVar1 & 0x3f) & 0x6781U) == 0) {
      if ((1L << (uVar1 & 0x3f) & 0xeU) == 0) {
        return 0;
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdfc9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__didChangeOtaTag_11255cc10);
      return param_1;
    }
  }
  return 1;
}



/* Entry: 105a5e760; end: 105a5e94b; -[SCSpectaclesCheeriosOTAManager _startUpload] */

void FUN_105a5e760(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(long *)(param_1 + 0x30) == 0) {
    puVar4 = PTR_PTR_1126c1a78;
    _objc_alloc();
    func_0x00010c04c2c0();
    func_0x00010bea5fc0(param_1);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
                    /* WARNING: Could not recover jumptable at 0x00010c266270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_syncOTAUpdateState_1126772c0);
      return;
    }
  }
  else {
    if ((param_1[0x90] & 1) == 0) {
      puVar4 = PTR_PTR_1126c1a78;
      _objc_alloc(PTR_PTR_1126c1a78);
      puVar1 = PTR_PTR_1126c1a90;
      func_0x00010c117b20(PTR_PTR_1126c1a90);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04c2c0(puVar4);
      func_0x00010bea5fc0(param_1);
      _objc_release(puVar4);
      _objc_release(puVar1);
    }
    puVar1 = PTR_PTR_1126b6720;
    _objc_alloc();
    puVar4 = param_1 + 8;
    _objc_loadWeakRetained(puVar4);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = param_1;
    _objc_opt_class();
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c00c100();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    *(undefined **)(param_1 + 0x20) = puVar1;
    _objc_release(uVar6);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar4);
    func_0x00010c064d40(*(undefined8 *)(param_1 + 0x18));
    func_0x00010be01da0();
    puVar4 = param_1;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
      return;
    }
  }
  ___stack_chk_fail();
  if (*(long *)(puVar4 + 0x20) != 0) {
    func_0x00010bf2e1e0(*(undefined8 *)(puVar4 + 0x18));
    uVar6 = *(undefined8 *)(puVar4 + 0x20);
    *(undefined8 *)(puVar4 + 0x20) = 0;
    _objc_release(uVar6);
    uVar6 = *(undefined8 *)(puVar4 + 0x30);
    *(undefined8 *)(puVar4 + 0x30) = 0;
    _objc_release(uVar6);
  }
  puVar4[0x90] = 1;
  func_0x00010c1a9bc0(*(undefined8 *)(puVar4 + 0xb0));
  *(undefined2 *)(puVar4 + 0x91) = 0;
  puVar1 = PTR_PTR_1126c1a78;
  _objc_alloc(PTR_PTR_1126c1a78);
  func_0x00010c04c2c0();
  func_0x00010bea5fc0(puVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be09130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar4,PTR_s__enableTransfer_11255fde8);
  return;
}



/* Entry: 105a5e94c; end: 105a5e9db; -[SCSpectaclesCheeriosOTAManager _stopUpload] */

void FUN_105a5e94c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    func_0x00010bf2e1e0(*(undefined8 *)(param_1 + 0x18));
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    _objc_release(uVar1);
  }
  *(undefined1 *)(param_1 + 0x90) = 1;
  func_0x00010c1a9bc0(*(undefined8 *)(param_1 + 0xb0));
  *(undefined2 *)(param_1 + 0x91) = 0;
  puVar2 = PTR_PTR_1126c1a78;
  _objc_alloc(PTR_PTR_1126c1a78);
  func_0x00010c04c2c0();
  func_0x00010bea5fc0(param_1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be09130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__enableTransfer_11255fde8);
  return;
}



/* Entry: 105a5e9dc; end: 105a5ea93; -[SCSpectaclesCheeriosOTAManager _setOTAUpdateAppState:] */

void FUN_105a5e9dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x80);
  func_0x00010c252d60();
  if (lVar1 != 10) {
    uVar2 = *(ulong *)(param_1 + 0x80);
    func_0x00010c071ae0(uVar2,param_2,param_3);
    if ((uVar2 & 1) != 0) goto LAB_105a5ea80;
  }
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = param_3;
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010bf51e00(uVar3);
  func_0x00010c0d9840(uVar4,param_2,uVar3);
  _objc_release(uVar3);
  lVar1 = param_1;
  func_0x00010beb2960();
  if ((int)lVar1 != 0) {
    func_0x00010c266260(param_1);
  }
  lVar1 = *(long *)(param_1 + 0x80);
  func_0x00010c252d60();
  if (lVar1 != 7) {
    func_0x00010bddace0(param_1);
  }
LAB_105a5ea80:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a5ea94; end: 105a5eb8b; -[SCSpectaclesCheeriosOTAManager _shouldAutomaticallyResetWhenFailed] */

bool FUN_105a5ea94(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar2 = *(long *)(param_1 + 0x80);
  func_0x00010c252d60();
  if (lVar2 == 8) {
    puStack_38 = &uStack_40;
    uStack_40 = 0;
    uStack_30 = 0x2020000000;
    uStack_28 = 0;
    uVar3 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010bfed8e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bc9a0();
    _objc_release(uVar3);
    bVar1 = puStack_38[3] - 6 < 3;
    __Block_object_dispose(&uStack_40,8);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 105a5eb8c; end: 105a5eb9b;  */

void FUN_105a5eb8c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 105a5eb9c; end: 105a5ec8b; -[SCSpectaclesCheeriosOTAManager _checkForUpdate] */

void FUN_105a5eb9c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdf7740(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf38660(uVar1);
  _objc_release(param_1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105a5ec8c; end: 105a5ed77;  */

void FUN_105a5ec8c(long param_1,undefined8 param_2)

{
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105a5ed78;
  puStack_50 = &UNK_1108cfa38;
  _objc_copyWeak(auStack_48,param_1 + 0x20);
  _objc_copyWeak(auStack_70,param_1 + 0x20);
  func_0x00010c0c0800(param_2);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_2);
  return;
}



/* Entry: 105a5ed78; end: 105a5ee17;  */

void FUN_105a5ed78(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bddd7a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a5ee18; end: 105a5f11f; -[SCSpectaclesCheeriosOTAManager _checkFirmwareVersionFromServerInfo:] */

void FUN_105a5ee18(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c0c68;
  _objc_alloc();
  uVar3 = param_3;
  func_0x00010c0edd40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e820();
  _objc_release(uVar3);
  lVar4 = param_1 + 8;
  _objc_loadWeakRetained(lVar4);
  lVar5 = lVar4;
  func_0x00010bfb0d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  puVar6 = puVar2;
  func_0x00010c083040();
  if ((int)puVar6 == 0) {
    puVar6 = PTR_PTR_1126c1a78;
    _objc_alloc(PTR_PTR_1126c1a78);
    func_0x00010c04c2c0();
    func_0x00010bea5fc0(param_1);
    _objc_release(puVar6);
    func_0x00010c1a9bc0(*(undefined8 *)(param_1 + 0xb0));
    _objc_initWeak(auStack_68,param_1);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105a5f120;
    puStack_78 = &UNK_1108434b0;
    _objc_copyWeak(auStack_70,auStack_68);
    func_0x0001000d76cc("APPSTORE",&puStack_90);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  else {
    func_0x00010bea75a0(param_1);
    puVar6 = PTR_PTR_1126c1a90;
    lVar4 = param_1 + 8;
    _objc_loadWeakRetained(lVar4);
    lVar7 = lVar4;
    func_0x00010bfb0d20();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    func_0x00010bf6e340();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_3;
    func_0x00010c0edd40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07c6a0(param_3);
    func_0x00010bf12580(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(lVar8);
    _objc_release(lVar7);
    _objc_release(lVar4);
    puVar9 = PTR_PTR_1126c1a78;
    _objc_alloc(PTR_PTR_1126c1a78);
    func_0x00010c04c2c0();
    func_0x00010bea5fc0(param_1);
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126c1a78;
    _objc_alloc(PTR_PTR_1126c1a78);
    bVar1 = *(byte *)(param_1 + 0x90);
    if ((bVar1 & 1) == 0) {
      puVar10 = PTR_PTR_1126c1a90;
      func_0x00010c117b20(PTR_PTR_1126c1a90);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar10 = (undefined *)0x0;
    }
    func_0x00010c04c2c0(puVar9);
    func_0x00010bea5fc0(param_1);
    _objc_release(puVar9);
    if ((bVar1 & 1) == 0) {
      _objc_release(puVar10);
    }
    func_0x00010be06320(param_1);
    func_0x00010c07c6a0(*(undefined8 *)(param_1 + 0xa8));
    func_0x00010be2f2a0(param_1);
    _objc_release(puVar6);
  }
  _objc_release(lVar5);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 105a5f120; end: 105a5f14b;  */

void FUN_105a5f120(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed10a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a5f14c; end: 105a5f31f; -[SCSpectaclesCheeriosOTAManager _downloadUpdate:] */

void FUN_105a5f14c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010be3ff20();
  if (lVar2 == 0) {
    _objc_initWeak(auStack_68,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x58);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105a5f320;
    puStack_78 = &UNK_1108cfa68;
    _objc_copyWeak(auStack_70,auStack_68);
    puStack_b8 = puVar1;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105a5f38c;
    puStack_a0 = &UNK_11084fd28;
    _objc_copyWeak(auStack_98,auStack_68);
    _objc_copyWeak(auStack_c0,auStack_68);
    _objc_retain(param_3);
    uVar4 = uVar3;
    func_0x00010bf891e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x48) = uVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  else {
    func_0x00010be2d100(param_1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105a5f320; end: 105a5f38b;  */

void FUN_105a5f320(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfb67a0(param_2);
  _objc_release(param_2);
  func_0x00010be06060(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a5f38c; end: 105a5f3bb;  */

void FUN_105a5f38c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2d100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a5f3bc; end: 105a5f40f;  */

void FUN_105a5f3bc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec1ea0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a5f410; end: 105a5f68f; -[SCSpectaclesCheeriosOTAManager _startUpdateWithContentResult:packageServerInfo:] */

void FUN_105a5f410(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar5 = PTR_PTR_1126c1a90;
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bfb0d20();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010c0edd40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07c6a0(param_4);
  func_0x00010bf12580(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar7 = PTR_PTR_1126c1a78;
  _objc_alloc(PTR_PTR_1126c1a78);
  func_0x00010c04c2c0();
  func_0x00010bea5fc0(param_1);
  _objc_release(puVar7);
  _objc_retain(param_3);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
  _objc_release(uVar6);
  ppuVar1 = &PTR_PTR_1126c1a98;
  if (*(char *)(param_1 + 0x90) == '\0') {
    ppuVar1 = &PTR_PTR_1126c1aa0;
  }
  puVar7 = *ppuVar1;
  _objc_alloc();
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bfc5880(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c012f20();
  uVar8 = *(undefined8 *)(param_1 + 0x30);
  *(undefined **)(param_1 + 0x30) = puVar7;
  _objc_release(uVar8);
  _objc_release(uVar6);
  if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
    _objc_initWeak(auStack_58,param_1);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105a5f690;
    puStack_68 = &UNK_1108434b0;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x0001000d76cc("APPSTORE",&puStack_80);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
  }
  else {
    lVar2 = param_1;
    func_0x00010be3fe00();
    if ((int)lVar2 != 0) {
      lVar2 = param_1 + 8;
      _objc_loadWeakRetained();
      lVar3 = lVar2;
      func_0x00010bf48d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010bf489a0();
      _objc_release(lVar3);
      _objc_release(lVar2);
      if ((int)lVar4 != 0) {
        func_0x00010bec2000(param_1);
      }
    }
  }
  _objc_release(puVar5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a5f690; end: 105a5f6bb;  */

void FUN_105a5f690(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c288060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a5f6bc; end: 105a5f79b; -[SCSpectaclesCheeriosOTAManager _downloadProgressState:] */

void FUN_105a5f6bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  lVar3 = *(long *)(param_1 + 0x80);
  func_0x00010c252d60();
  if (lVar3 != 0xd) {
    lVar3 = *(long *)(param_1 + 0x80);
    func_0x00010c252d60();
    if (lVar3 != 4) {
      return;
    }
  }
  puVar4 = PTR_PTR_1126c1a78;
  _objc_alloc(PTR_PTR_1126c1a78);
  bVar2 = *(byte *)(param_1 + 0x90);
  uVar1 = 0xd;
  if (bVar2 == 0) {
    uVar1 = 4;
  }
  if ((bVar2 & 1) == 0) {
    puVar5 = PTR_PTR_1126c1a90;
    func_0x00010c117b20(PTR_PTR_1126c1a90,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar5 = (undefined *)0x0;
  }
  func_0x00010c04c2c0(puVar4,param_2,uVar1,puVar5);
  func_0x00010bea5fc0(param_1,param_2,puVar4);
  _objc_release(puVar4);
  if ((bVar2 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105a5f79c; end: 105a5f80f; -[SCSpectaclesCheeriosOTAManager _isEligibleForUpdateDownload] */

undefined8 FUN_105a5f79c(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0xa8);
  func_0x00010bf19fe0();
  func_0x000106fd2d2c();
  if (iVar1 == 0) {
    uVar3 = 3;
  }
  else if (*(char *)(param_1 + 0x90) == '\x01') {
    lVar2 = *(long *)(param_1 + 0x40);
    func_0x00010bf48f60();
    if (lVar2 == 2) {
      func_0x00010be3e640();
      uVar3 = 0;
      if ((int)param_1 == 0) {
        uVar3 = 0x10;
      }
    }
    else {
      uVar3 = 0x11;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



/* Entry: 105a5f810; end: 105a5f8af; -[SCSpectaclesCheeriosOTAManager _isBatteryCharging] */

bool FUN_105a5f810(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c06d140();
  _objc_release(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
    func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16faa0();
    _objc_release(puVar1);
  }
  puVar1 = PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x00010bf5e640(PTR__OBJC_CLASS___UIDevice_1126aeb10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf176e0();
  _objc_release(puVar1);
  return ((ulong)puVar2 & 0xfffffffffffffffe) == 2;
}



/* Entry: 105a5f8b0; end: 105a5fa03; -[SCSpectaclesCheeriosOTAManager _isEligibleForUpdate] */

undefined8 FUN_105a5f8b0(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_2 + 8;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c06e420();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if ((int)lVar3 == 0) {
    uVar4 = 9;
  }
  else {
    lVar1 = param_2 + 8;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c246060();
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (lVar3 < 0x3d) {
      lVar1 = param_2 + 8;
      _objc_loadWeakRetained();
      lVar2 = lVar1;
      func_0x00010c0692a0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c246060();
      _objc_release(lVar2);
      _objc_release(lVar1);
      if (lVar3 < 0xc) {
        uVar4 = 8;
      }
      else {
        param_2 = param_2 + 8;
        _objc_loadWeakRetained(param_2);
        lVar1 = param_2;
        func_0x00010c0692a0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar1;
        func_0x00010bf17500();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb2c80();
        _objc_release(lVar2);
        _objc_release(lVar1);
        _objc_release(param_2);
        uVar4 = 6;
        if (40.0 <= param_1) {
          uVar4 = 0;
        }
      }
    }
    else {
      uVar4 = 7;
    }
  }
  return uVar4;
}



/* Entry: 105a5fa04; end: 105a5fa6b; -[SCSpectaclesCheeriosOTAManager _isEligibleForAutomaticUpdateTransfer] */

void FUN_105a5fa04(ulong param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = param_1;
  func_0x00010be3e4e0();
  if ((((int)uVar1 != 0) && (uVar1 = param_1, func_0x00010be423c0(), (uVar1 & 1) == 0)) &&
     (*(long *)(param_1 + 0x38) != 0)) {
    lVar2 = *(long *)(param_1 + 0x80);
    func_0x00010c252d60();
    if (lVar2 != 2) {
      func_0x00010c252d60(*(undefined8 *)(param_1 + 0x80));
    }
  }
  return;
}



/* Entry: 105a5fa6c; end: 105a5faeb; -[SCSpectaclesCheeriosOTAManager _setFailedOTAUpdateStateWithError:] */

void FUN_105a5fa6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c1a78;
  _objc_alloc(PTR_PTR_1126c1a78);
  puVar2 = PTR_PTR_1126c1a90;
  func_0x00010bf99320(PTR_PTR_1126c1a90,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04c2c0(puVar1,param_2,10,puVar2);
  func_0x00010bea5fc0(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105a5faec; end: 105a5fb97; -[SCSpectaclesCheeriosOTAManager _handleOTAUpdateErrorType:] */

void FUN_105a5faec(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  
  func_0x00010c1a9bc0(*(undefined8 *)(param_1 + 0xb0),param_2,0);
  if (param_3 < 0x12) {
    if ((1L << (param_3 & 0x3f) & 0x7c8U) == 0) {
      if ((1L << (param_3 & 0x3f) & 0x30000U) == 0) goto LAB_105a5fb84;
    }
    else if (*(char *)(param_1 + 0x90) != '\x01') {
      func_0x00010bea3d20(param_1,param_2,param_3);
      goto LAB_105a5fb84;
    }
    puVar1 = PTR_PTR_1126c1a78;
    _objc_alloc(PTR_PTR_1126c1a78);
    func_0x00010c04c2c0();
    func_0x00010bea5fc0(param_1,param_2,puVar1);
    _objc_release(puVar1);
  }
LAB_105a5fb84:
  *(undefined1 *)(param_1 + 0x90) = 1;
  return;
}



/* Entry: 105a5fb98; end: 105a5fbc7; -[SCSpectaclesCheeriosOTAManager _setServerInfo:] */

void FUN_105a5fb98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0xa8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a5fbc8; end: 105a5fc5b; -[SCSpectaclesCheeriosOTAManager _handleRequiredUpdateStatus:] */

void FUN_105a5fbc8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 8;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c0692a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2197e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7ffa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105a5fc5c; end: 105a5fcb7; -[SCSpectaclesCheeriosOTAManager _customOTATag] */

void FUN_105a5fc5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x00010b6fc1d4();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_1);
  if (((ulong)puVar1 & 1) == 0) {
    uVar2 = param_1;
    func_0x00010bf51e00(param_1);
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105a5fcb8; end: 105a5fe03; -[SCSpectaclesCheeriosOTAManager _setupOTAStateObservable] */

void FUN_105a5fcb8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfb0b00();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010c0e0ea0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105a5fe04; end: 105a5fe4b;  */

void FUN_105a5fe04(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2d120();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a5fe4c; end: 105a5ffa7; -[SCSpectaclesCheeriosOTAManager _setupDeviceConnectionStateObservable] */

void FUN_105a5fe4c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf48d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c252740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010c0e0ea0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  lVar5 = lVar4;
  func_0x00010c25ff60(lVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105a5ffa8; end: 105a5ffef;  */

void FUN_105a5ffa8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be27520();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a5fff0; end: 105a6011b; -[SCSpectaclesCheeriosOTAManager _startReachabilityWatcher] */

void FUN_105a5fff0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c0d7a00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0e0ea0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105a6011c; end: 105a6017b;  */

void FUN_105a6011c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf5e480(param_2);
  _objc_release(param_2);
  func_0x00010be629c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a6017c; end: 105a601db; -[SCSpectaclesCheeriosOTAManager _networkConnectivityStatusDidChange:] */

void FUN_105a6017c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x80);
  func_0x00010c252d60();
  if (((param_3 != 2) && (lVar1 == 4)) && (*(char *)(param_1 + 0x90) == '\x01')) {
    func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010be2d110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__handleOTAUpdateErrorType__112568de0,10);
    return;
  }
  return;
}



/* Entry: 105a601dc; end: 105a6061f; -[SCSpectaclesCheeriosOTAManager _handleOTAUpdateEvent:] */

void FUN_105a601dc(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c1a78;
  _objc_alloc(PTR_PTR_1126c1a78);
  if ((*(byte *)(param_1 + 0x90) & 1) == 0) {
    _objc_retain(param_3);
    if (param_3 != 0) {
      func_0x00010c252d60();
    }
    _objc_release(param_3);
  }
  lVar2 = param_3;
  func_0x00010bfed8e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04c2c0(puVar1);
  func_0x00010bea5fc0(param_1);
  _objc_release(puVar1);
  _objc_release(lVar2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x2020000000;
  uStack_58 = 0;
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_105a60620;
  uStack_80 = 0x105a60630;
  ppuStack_78 = &PTR____CFConstantStringClassReference_110daafd8;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x2020000000;
  uStack_a8 = 0;
  puStack_d8 = &uStack_e0;
  uStack_e0 = 0;
  uStack_d0 = 0x2020000000;
  uStack_c8 = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010bfed8e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bc9a0();
  _objc_release(uVar3);
  lVar2 = param_3;
  func_0x00010c252d60();
  if (lVar2 == 8) {
    uVar4 = puStack_98[5];
    _objc_retain(uVar4);
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    *(undefined8 *)(param_1 + 0x98) = uVar4;
    _objc_release(uVar3);
    if (*(long *)(param_1 + 0x38) != 0) {
      if ((*(char *)(param_1 + 0x90) == '\x01') &&
         (lVar2 = param_1, func_0x00010be3e4e0(), (int)lVar2 != 0)) {
        puVar1 = PTR_PTR_1126c1a88;
        _objc_alloc(PTR_PTR_1126c1a88);
        uVar3 = *(undefined8 *)(param_1 + 0xa8);
        func_0x00010c0edd60(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(param_1 + 0xa8);
        func_0x00010c0edd40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0706e0(*(undefined8 *)(param_1 + 0xa8));
        func_0x00010c050ba0(puVar1);
        _objc_release(uVar4);
        _objc_release(uVar3);
        uVar3 = *(undefined8 *)(param_1 + 0x50);
        func_0x00010c269d40(uVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1502a0();
        _objc_release(uVar3);
        _objc_release(puVar1);
      }
      else {
        lVar2 = param_1;
        func_0x00010be3ff00();
        if (lVar2 == 0) {
          func_0x00010bee8500(param_1);
        }
        else {
          func_0x00010be2d100(param_1);
        }
      }
    }
  }
  else {
    lVar2 = param_3;
    func_0x00010c252d60();
    if (lVar2 == 10) {
      func_0x00010bfb7400(*(undefined8 *)(param_1 + 0x38));
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 *)(param_1 + 0x38) = 0;
      _objc_release(uVar3);
      func_0x00010be2f2a0(param_1);
      uVar3 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c122040();
      _objc_release(uVar3);
      func_0x00010be09120(param_1);
    }
    else {
      lVar2 = param_3;
      func_0x00010c252d60();
      if (lVar2 == 0xc) {
        func_0x00010be2d160(param_1);
      }
      else {
        lVar2 = param_3;
        func_0x00010c252d60();
        if (lVar2 == 0xd) {
          func_0x00010be2d140(param_1);
        }
      }
    }
  }
  __Block_object_dispose(&uStack_e0,8);
  __Block_object_dispose(&uStack_c0,8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(ppuStack_78);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(param_3);
  return;
}



/* Entry: 105a60620; end: 105a60647;  */

void FUN_105a60620(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105a60648; end: 105a6067f;  */

void FUN_105a60648(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a60680; end: 105a6069f;  */

void FUN_105a60680(long param_1,undefined1 param_2)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 105a606a0; end: 105a6071f; -[SCSpectaclesCheeriosOTAManager _handleOTAUpdateWasScheduledSuccessfully:] */

void FUN_105a606a0(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (((param_3 & 1) == 0) && (lVar1 = param_1, func_0x00010be423c0(), (int)lVar1 != 0)) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x60),param_2,PTR____kCFBooleanFalse_11034ab60,
                        &PTR____CFConstantStringClassReference_110e194b8);
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    puVar2 = PTR_PTR_1126c1a80;
    _objc_alloc(PTR_PTR_1126c1a80);
    func_0x00010c00f9c0();
    func_0x00010c0d9840(uVar3,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 105a60720; end: 105a6079f; -[SCSpectaclesCheeriosOTAManager _handleOTAUpdateWasCancelledSuccessfully:] */

void FUN_105a60720(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (((param_3 & 1) == 0) && (lVar1 = param_1, func_0x00010be423c0(), (int)lVar1 != 0)) {
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x60),param_2,PTR____kCFBooleanTrue_11034ab68,
                        &PTR____CFConstantStringClassReference_110e194b8);
    uVar3 = *(undefined8 *)(param_1 + 0x70);
    puVar2 = PTR_PTR_1126c1a80;
    _objc_alloc(PTR_PTR_1126c1a80);
    func_0x00010c00f9c0();
    func_0x00010c0d9840(uVar3,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 105a607a0; end: 105a607e7; -[SCSpectaclesCheeriosOTAManager _isAutomaticUpdatesEnabled] */

undefined8 FUN_105a607a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c0e00e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110e194b8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f3c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a607e8; end: 105a60833; -[SCSpectaclesCheeriosOTAManager _isNewestFirmwareBinaryOnCheeriosDevice] */

undefined8 FUN_105a607e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010c0edd60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c071ae0(uVar2,param_2,uVar1);
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a60834; end: 105a608e3; -[SCSpectaclesCheeriosOTAManager _verifyChecksum:] */

void FUN_105a60834(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0xa8);
  _objc_retain(param_3);
  func_0x00010c0edd60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c071ae0(param_3,param_2,uVar3);
  _objc_release(param_3);
  _objc_release(uVar3);
  if ((int)uVar2 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0xa8);
    func_0x00010c0706e0();
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    if (iVar1 == 0) {
      func_0x00010bf08560();
    }
    else {
      func_0x00010bf08760();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 105a608e4; end: 105a608f7; -[SCSpectaclesCheeriosOTAManager dataFlowsRequest:failedToExecutedTask:error:] */

void FUN_105a608e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 != *(long *)(param_1 + 0x30)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec3b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopUpload_11258e868);
  return;
}



/* Entry: 105a608f8; end: 105a6094f; -[SCSpectaclesCheeriosOTAManager dataFlowsRequestCompleted:] */

void FUN_105a608f8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != *(long *)(param_1 + 0x20)) {
    return;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc3940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a60950; end: 105a60963; -[SCSpectaclesCheeriosOTAManager dataFlowsRequestCancelled:] */

void FUN_105a60950(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != *(long *)(param_1 + 0x20)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec3b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopUpload_11258e868);
  return;
}



/* Entry: 105a60964; end: 105a60977; -[SCSpectaclesCheeriosOTAManager dataFlowsRequest:failedWithError:] */

void FUN_105a60964(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != *(long *)(param_1 + 0x20)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec3b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopUpload_11258e868);
  return;
}



/* Entry: 105a60978; end: 105a60acf; -[SCSpectaclesCheeriosOTAManager dataFlowsRequest:updatedProgressForTask:] */

void FUN_105a60978(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  if (param_3 == *(long *)(param_1 + 0x20)) {
    puVar2 = PTR_PTR_1126c1aa0;
    _objc_opt_class(PTR_PTR_1126c1aa0);
    uVar3 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar2);
    uVar4 = param_4;
    if ((uVar3 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    if (uVar4 == 0) {
      uVar4 = 0;
    }
    else {
      uVar3 = param_4;
      func_0x00010bfad040();
      uVar4 = param_4;
      if (uVar3 != 0) {
        func_0x00010bf25fe0(param_4);
        func_0x00010bfad040(param_4);
        puVar2 = PTR_PTR_1126c1a78;
        _objc_alloc(PTR_PTR_1126c1a78);
        bVar1 = *(byte *)(param_1 + 0x90);
        if ((bVar1 & 1) == 0) {
          puVar5 = PTR_PTR_1126c1a90;
          func_0x00010c117b20(PTR_PTR_1126c1a90);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          puVar5 = (undefined *)0x0;
        }
        func_0x00010c04c2c0(puVar2);
        func_0x00010bea5fc0(param_1);
        _objc_release(puVar2);
        if ((bVar1 & 1) == 0) {
          _objc_release(puVar5);
        }
      }
    }
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105a60ad0; end: 105a60ad7; -[SCSpectaclesCheeriosOTAManager stateObservable] */

undefined8 FUN_105a60ad0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 105a60ad8; end: 105a60adf; -[SCSpectaclesCheeriosOTAManager autoUpdateSettingsObservable] */

undefined8 FUN_105a60ad8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 105a60ae0; end: 105a60be7; -[SCSpectaclesCheeriosOTAManager .cxx_destruct] */

void FUN_105a60ae0(long param_1)

{
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105a60be8; end: 105a60cdb; -[SCSpectaclesCheeriosOTAMetricsEmitter initWithOTAManager:currentDevice:logger:performer:] */

undefined1 *
FUN_105a60be8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126eb770;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_4);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    func_0x00010beae720(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a60cdc; end: 105a60e17; -[SCSpectaclesCheeriosOTAMetricsEmitter _setupObservable] */

void FUN_105a60cdc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  *(undefined **)(param_1 + 0x40) = puVar1;
  _objc_release(uVar5);
  _objc_initWeak(auStack_48,param_1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c252740();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  lVar4 = lVar3;
  func_0x00010c25ff60(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105a60e18; end: 105a60e5f;  */

void FUN_105a60e18(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be560e0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a60e60; end: 105a61373; -[SCSpectaclesCheeriosOTAMetricsEmitter _logMetricsWithOtaState:] */

void FUN_105a60e60(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c252d60();
  lVar3 = param_1;
  if (lVar1 < 8) {
    if (lVar1 < 5) {
      if (lVar1 == 2) {
        lVar1 = param_3;
        func_0x00010bfed8e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be9a0e0(param_1,param_2,lVar1);
        _objc_release(lVar1);
        uVar4 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010bdfbe00(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb0be0(uVar4,param_2,param_1);
        goto LAB_105a61358;
      }
      if (lVar1 != 4) goto LAB_105a6135c;
      lVar1 = param_3;
      func_0x00010bfed8e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010be82f20(param_1,param_2,lVar1);
      _objc_release(lVar1);
      if (lVar2 == 100) {
        uVar4 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010bdfbe00(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bedfb60(param_1,param_2,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb0ac0(uVar4,param_2,lVar3,param_1);
      }
      else {
        if (lVar2 != 0) goto LAB_105a6135c;
        uVar4 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010bdfbe00(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bedfb60(param_1,param_2,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb0aa0(uVar4,param_2,lVar3,param_1);
      }
    }
    else if (lVar1 == 5) {
      lVar1 = param_3;
      func_0x00010bfed8e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010be82f20(param_1,param_2,lVar1);
      _objc_release(lVar1);
      if (lVar2 == 100) {
        uVar4 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010bdfbe00(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bedfb60(param_1,param_2,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb0c80(uVar4,param_2,lVar3,param_1);
      }
      else {
        if (lVar2 != 0) goto LAB_105a6135c;
        uVar4 = *(undefined8 *)(param_1 + 0x18);
        lVar1 = param_1;
        func_0x00010bdfbe00(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb0c40(uVar4,param_2,lVar1);
        _objc_release(lVar1);
        uVar4 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010bdfbe00(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bedfb60(param_1,param_2,1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb0c60(uVar4,param_2,lVar3,param_1);
      }
    }
    else {
      if (lVar1 != 6) goto LAB_105a6135c;
      lVar1 = param_3;
      func_0x00010bfed8e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010be82f20(param_1,param_2,lVar1);
      _objc_release(lVar1);
      if (lVar2 != 100) {
        if ((lVar2 == 0) && ((*(byte *)(param_1 + 0x48) & 1) == 0)) {
          uVar4 = *(undefined8 *)(param_1 + 0x18);
          lVar1 = param_1;
          func_0x00010bdfbe00(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bedfb60(param_1,param_2,1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb0c00(uVar4,param_2,lVar1,lVar3);
          _objc_release(lVar3);
          _objc_release(lVar1);
          *(undefined1 *)(param_1 + 0x48) = 1;
        }
        goto LAB_105a6135c;
      }
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010bdfbe00(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = 1;
LAB_105a6132c:
      func_0x00010bedfb60(param_1,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb0c20(uVar5,param_2,lVar3,param_1);
    }
LAB_105a61350:
    _objc_release(param_1);
    param_1 = lVar3;
  }
  else {
    if (lVar1 < 0xd) {
      if ((lVar1 != 8) && (lVar1 != 10)) goto LAB_105a6135c;
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      lVar3 = param_3;
      func_0x00010bfed8e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
      func_0x00010be0af80(param_1,param_2,lVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010bdfbe00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bedfb60(param_1,param_2,1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb0b20(uVar4,param_2,lVar1,lVar2,param_1);
      _objc_release(param_1);
      _objc_release(lVar2);
      param_1 = lVar1;
      goto LAB_105a61350;
    }
    if (lVar1 == 0xd) {
      lVar1 = param_3;
      func_0x00010bfed8e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010be82f20(param_1,param_2,lVar1);
      _objc_release(lVar1);
      if (lVar2 == 100) {
        uVar5 = *(undefined8 *)(param_1 + 0x18);
        func_0x00010bdfbe00(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = 0;
        goto LAB_105a6132c;
      }
      if (lVar2 != 0) goto LAB_105a6135c;
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010bdfbe00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bedfb60(param_1,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb0c00(uVar4,param_2,lVar3,param_1);
      goto LAB_105a61350;
    }
    if (lVar1 != 0xe) {
      if (lVar1 == 0xf) {
        lVar1 = param_3;
        func_0x00010bfed8e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be9a0e0(param_1,param_2,lVar1);
        _objc_release(lVar1);
        func_0x00010be94300(param_1);
      }
      goto LAB_105a6135c;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010bdfbe00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb0c40(uVar4,param_2,param_1);
  }
LAB_105a61358:
  _objc_release(param_1);
LAB_105a6135c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a61374; end: 105a613ab; -[SCSpectaclesCheeriosOTAMetricsEmitter _resetUpdateSession] */

void FUN_105a61374(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + 0x48) = 0;
  return;
}



/* Entry: 105a613ac; end: 105a613fb; -[SCSpectaclesCheeriosOTAMetricsEmitter _updateSessionId] */

void FUN_105a613ac(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(long *)(param_1 + 0x30) = lVar2;
    _objc_release(uVar1);
    lVar2 = *(long *)(param_1 + 0x30);
  }
  _objc_retain(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105a613fc; end: 105a61457; -[SCSpectaclesCheeriosOTAMetricsEmitter _updateDuration] */

double FUN_105a613fc(double param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  
  lVar1 = *(long *)(param_2 + 0x38);
  if (lVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    *(undefined **)(param_2 + 0x38) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_2 + 0x38);
  }
  func_0x00010c26f3a0(lVar1);
  dVar4 = -param_1;
  if (0.0 <= param_1) {
    dVar4 = param_1;
  }
  return dVar4;
}



/* Entry: 105a61458; end: 105a614ab; -[SCSpectaclesCheeriosOTAMetricsEmitter _deviceInfo] */

void FUN_105a61458(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c1aa8;
  _objc_alloc(PTR_PTR_1126c1aa8);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c04ae60(puVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a614ac; end: 105a6154b; -[SCSpectaclesCheeriosOTAMetricsEmitter _updateSessionWithManualUpdate:] */

void FUN_105a614ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126c0c68;
  _objc_alloc(PTR_PTR_1126c0c68);
  func_0x00010c04e820();
  puVar2 = PTR_PTR_1126c1ab0;
  _objc_alloc(PTR_PTR_1126c1ab0);
  uVar3 = param_1;
  func_0x00010bedfb00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed7360(param_1);
  func_0x00010c0452e0(puVar2,param_2,uVar3,puVar1,param_3);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a6154c; end: 105a6163b; -[SCSpectaclesCheeriosOTAMetricsEmitter _errorFromInfo:] */

void FUN_105a6154c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105a6163c;
  uStack_30 = 0x105a6164c;
  uStack_28 = 0;
  func_0x00010c0bc9a0(param_3);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a6163c; end: 105a61653;  */

void FUN_105a6163c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105a61654; end: 105a61693;  */

void FUN_105a61654(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_105a67688();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a61694; end: 105a616ff; -[SCSpectaclesCheeriosOTAMetricsEmitter _saveTargetVersionFromInfo:] */

void FUN_105a61694(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105a61700;
  puStack_20 = &UNK_11085d290;
  uStack_18 = param_1;
  func_0x00010c0bc9a0(param_3,param_2,&puStack_38,0,0,0,0,0);
  return;
}



/* Entry: 105a61700; end: 105a61733;  */

void FUN_105a61700(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a61734; end: 105a61803; -[SCSpectaclesCheeriosOTAMetricsEmitter _progressFromInfo:] */

undefined8 FUN_105a61734(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0xffffffffffffffff;
  func_0x00010c0bc9a0(param_3);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 105a61804; end: 105a61813;  */

void FUN_105a61804(long param_1,undefined8 param_2)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  return;
}



/* Entry: 105a61814; end: 105a61883; -[SCSpectaclesCheeriosOTAMetricsEmitter .cxx_destruct] */

void FUN_105a61814(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 105a61884; end: 105a6192b; -[SCSpectaclesFirmwareUpdateRPCClient initWithConnectionHub:] */

undefined1 * FUN_105a61884(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eb778;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    func_0x00010befac20(*(undefined8 *)((long)puVar1 + 8));
    func_0x00010befb0c0(*(undefined8 *)((long)puVar1 + 8));
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a6192c; end: 105a6196f; -[SCSpectaclesFirmwareUpdateRPCClient applyPatch] */

void FUN_105a6192c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bfb08a0(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a61970; end: 105a619b3; -[SCSpectaclesFirmwareUpdateRPCClient applyFullUpdate] */

void FUN_105a61970(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bfb0880(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a619b4; end: 105a619f7; -[SCSpectaclesFirmwareUpdateRPCClient getChecksum] */

void FUN_105a619b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bfb09a0(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a619f8; end: 105a61a3b; -[SCSpectaclesFirmwareUpdateRPCClient rebootAndSwitchParition] */

void FUN_105a619f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bfb0d60(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a61a3c; end: 105a61a7f; -[SCSpectaclesFirmwareUpdateRPCClient getScheduledUpdateStatus] */

void FUN_105a61a3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bfb09e0(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a61a80; end: 105a61b6b; -[SCSpectaclesFirmwareUpdateRPCClient scheduleUpdate:] */

void FUN_105a61a80(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  puVar1 = PTR_PTR_1126c0c68;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_3;
  func_0x00010c26a240(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e820(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b6718;
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar2 = param_3;
  func_0x00010c269f40(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0740c0(param_3);
  _objc_release(param_3);
  func_0x00010bfb0a40(puVar4,param_2,puVar1,uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar5,param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a61b6c; end: 105a61baf; -[SCSpectaclesFirmwareUpdateRPCClient cancelScheduledUpdate] */

void FUN_105a61b6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bfb08c0(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a61bb0; end: 105a61bf3; -[SCSpectaclesFirmwareUpdateRPCClient disableFlightForRequiredUpdate:] */

void FUN_105a61bb0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126c19b8;
  func_0x00010bf7ffe0(PTR_PTR_1126c19b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a61bf4; end: 105a61cb3; -[SCSpectaclesFirmwareUpdateRPCClient handleResponse:] */

void FUN_105a61bf4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfb0ae0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = param_3;
  if (lVar1 == 0) {
    lVar1 = param_3;
    func_0x00010bfb0b80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) goto LAB_105a61ca0;
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bfb0b80(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bfb0ae0(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar1 = lVar2;
  func_0x00010bf51e00();
  func_0x00010c0d9840(uVar3,param_2,lVar1);
  _objc_release(lVar1);
  _objc_release(lVar2);
LAB_105a61ca0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a61cb4; end: 105a61cbb; -[SCSpectaclesFirmwareUpdateRPCClient responseMonitorState] */

undefined8 FUN_105a61cb4(void)

{
  return 0;
}



/* Entry: 105a61cbc; end: 105a61cc3; -[SCSpectaclesFirmwareUpdateRPCClient firmwareUpdateEventObservable] */

undefined8 FUN_105a61cbc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105a61cc4; end: 105a61cf3; -[SCSpectaclesFirmwareUpdateRPCClient .cxx_destruct] */

void FUN_105a61cc4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a61cf4; end: 105a61de7; -[SCSpectaclesOTAUpdateAWSFetcher initWithDevice:otaServiceClient:metadataFetcher:otaDownloader:] */

undefined1 *
FUN_105a61cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126eb780;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


