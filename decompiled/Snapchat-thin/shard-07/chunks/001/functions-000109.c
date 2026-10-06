/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10521e920; end: 10521e977; -[SCSpectaclesContentPageBusinessLogic _isTransferInProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_10521e920(long param_1)

{
  bool bVar1;
  long lVar2;
  
  if (*(long *)(param_1 + _DAT_11271fec0) == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = *(long *)(param_1 + _DAT_11271fea4);
    func_0x00010c0e00e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 != 0;
    _objc_release();
  }
  return bVar1;
}



/* Entry: 10521e978; end: 10521ea9b; -[SCSpectaclesContentPageBusinessLogic spectaclesStartWiFiController:didConnectWiFiWithDevice:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521e978(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + _DAT_11271fe5c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_3 == lVar1) {
    _objc_initWeak(auStack_38,param_1);
    func_0x00010c0e2ba0();
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10521ea9c;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    (**(code **)(param_1 + 0x10))(param_1,&puStack_60);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10521ea9c; end: 10521eac7;  */

void FUN_10521ea9c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be33640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10521eac8; end: 10521ebeb; -[SCSpectaclesContentPageBusinessLogic spectaclesStartWiFiController:didDisconnectWiFiWithDevice:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521eac8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + _DAT_11271fe5c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_3 == lVar1) {
    _objc_initWeak(auStack_38,param_1);
    func_0x00010c0e2ba0();
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10521ebec;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    (**(code **)(param_1 + 0x10))(param_1,&puStack_60);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10521ebec; end: 10521ec17;  */

void FUN_10521ebec(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be33660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10521ec18; end: 10521ed57; -[SCSpectaclesContentPageBusinessLogic spectaclesStartWiFiController:failedToConnectWiFiWithDevice:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521ec18(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + _DAT_11271fe5c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_3 == lVar1) {
    _objc_initWeak(auStack_48,param_1);
    func_0x00010c0e2ba0();
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10521ed58;
    puStack_58 = &UNK_1108434b0;
    _objc_copyWeak(auStack_50,auStack_48);
    (**(code **)(param_1 + 0x10))(param_1,&puStack_70);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10521ed58; end: 10521ed83;  */

void FUN_10521ed58(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be33660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10521ed84; end: 10521eea7; -[SCSpectaclesContentPageBusinessLogic spectaclesStartWiFiController:userRejectedWiFiWithDevice:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521ed84(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + _DAT_11271fe5c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_3 == lVar1) {
    _objc_initWeak(auStack_38,param_1);
    func_0x00010c0e2ba0();
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10521eea8;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    (**(code **)(param_1 + 0x10))(param_1,&puStack_60);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10521eea8; end: 10521eed3;  */

void FUN_10521eea8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be33660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10521eed4; end: 10521ef83; -[SCSpectaclesContentPageBusinessLogic _handleWiFiDidConnect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521eed4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(param_1 + _DAT_11271fe74) = 1;
  lVar1 = param_1;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11271fe58);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + _DAT_11271fe50);
  uVar3 = *(undefined8 *)(param_1 + _DAT_11271fea4);
  func_0x00010bf002e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24dba0(uVar2,param_2,uVar4,uVar3,0xc);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10521ef84; end: 10521f16b; -[SCSpectaclesContentPageBusinessLogic _handleWiFiDidDisconnect] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521ef84(undefined *param_1,undefined1 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined **unaff_x22;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(param_1 + _DAT_11271fe74) = 2;
  puVar1 = param_1;
  uStack_a8 = param_2;
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(puVar1 + 0x10))();
  _objc_release();
  if (*(long *)(param_1 + _DAT_11271feb0) == 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11271fe88);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c123440();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_40 = uVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_initWeak(auStack_48,param_1);
    puVar4 = param_1;
    func_0x00010c0e2ba0();
    _objc_retainAutoreleasedReturnValue();
    param_1 = *(undefined **)(param_1 + _DAT_11271fe8c);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10521f16c;
    puStack_60 = &UNK_110849380;
    _objc_retain(puVar4);
    unaff_x22 = &puStack_78;
    uStack_a8 = SUB81(auStack_48,0);
    puStack_58 = puVar4;
    _objc_copyWeak(auStack_50);
    func_0x00010bf38080(param_1);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_50);
    _objc_release(puStack_58);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_48);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x22 + 5);
  _objc_destroyWeak(auStack_48);
  puVar4 = puVar1;
  __Unwind_Resume();
  pcStack_88 = FUN_10521f16c;
  lVar5 = *(long *)(puVar4 + 0x20);
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_10521f200;
  puStack_b8 = &UNK_11084ceb8;
  puStack_a0 = param_1;
  puStack_98 = puVar1;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_copyWeak(auStack_b0,puVar4 + 0x28);
  (**(code **)(lVar5 + 0x10))(lVar5,&puStack_d0);
  _objc_destroyWeak(auStack_b0);
  return;
}



/* Entry: 10521f16c; end: 10521f1ff;  */

void FUN_10521f16c(long param_1,undefined1 param_2)

{
  long lVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x20);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10521f200;
  puStack_38 = &UNK_11084ceb8;
  uStack_28 = param_2;
  _objc_copyWeak(auStack_30,param_1 + 0x28);
  (**(code **)(lVar1 + 0x10))(lVar1,&puStack_50);
  _objc_destroyWeak(auStack_30);
  return;
}



/* Entry: 10521f200; end: 10521f23b;  */

void FUN_10521f200(long param_1)

{
  if (*(char *)(param_1 + 0x28) == '\x01') {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010be72a40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10521f23c; end: 10521f34f; -[SCSpectaclesContentPageBusinessLogic exportWorkflowWillStartPostShare:stopWiFi:showLoadingOverlay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521f23c(long param_1,undefined8 param_2,long param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (param_3 == *(long *)(param_1 + _DAT_11271feb0)) {
    _objc_initWeak(auStack_48,param_1);
    func_0x00010c0e2ba0();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10521f350;
    puStack_60 = &UNK_11086a898;
    _objc_copyWeak(auStack_58,auStack_48);
    uStack_50 = param_4;
    uStack_4f = param_5;
    (**(code **)(param_1 + 0x10))(param_1,&puStack_78);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10521f350; end: 10521f387;  */

void FUN_10521f350(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd1140();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10521f388; end: 10521f3a3; -[SCSpectaclesContentPageBusinessLogic handleExportWorkflowWillStartPostShare:showLoadingOverlay:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521f388(long param_1,undefined8 param_2,int param_3,undefined1 param_4)

{
  *(undefined1 *)(param_1 + _DAT_11271fea0) = param_4;
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bec3c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopWifiWithDelay__11258e8b0,0);
    return;
  }
  return;
}



/* Entry: 10521f3a4; end: 10521f4a7; -[SCSpectaclesContentPageBusinessLogic exportWorkflowDidComplete:shouldExit:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521f3a4(long param_1,undefined8 param_2,long param_3,undefined1 param_4)

{
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_3 == *(long *)(param_1 + _DAT_11271feb0)) {
    _objc_initWeak(auStack_38,param_1);
    func_0x00010c0e2ba0();
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10521f4a8;
    puStack_50 = &UNK_11084ceb8;
    _objc_copyWeak(auStack_48,auStack_38);
    uStack_40 = param_4;
    (**(code **)(param_1 + 0x10))(param_1,&puStack_68);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10521f4a8; end: 10521f4db;  */

void FUN_10521f4a8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be29200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10521f4dc; end: 10521f593; -[SCSpectaclesContentPageBusinessLogic _handleExportWorkflowDidComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521f4dc(long param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271fe58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1251a0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11271feb0);
  *(undefined8 *)(param_1 + _DAT_11271feb0) = 0;
  _objc_release(uVar1);
  *(undefined1 *)(param_1 + _DAT_11271fea0) = 0;
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be0c010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__exitContentPageWithStopWiFiDela_1125609a0,0);
    return;
  }
  func_0x00010bde2b00(param_1);
  func_0x00010bf8e1a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10521f594; end: 10521f657; -[SCSpectaclesContentPageBusinessLogic staticThumbnailImageWithContentId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521f594(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11271fea4);
    _objc_retain(param_3);
    func_0x00010c0e00e0(uVar3,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010bf63a60();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126b65f8;
    _objc_alloc(PTR_PTR_1126b65f8);
    uVar2 = uVar3;
    func_0x00010c070dc0(uVar3,param_2,0);
    func_0x00010c008280(puVar4,param_2,uVar1,param_3,0,uVar2);
    _objc_release(param_3);
    _objc_release(uVar1);
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10521f658; end: 10521f73b; -[SCSpectaclesContentPageBusinessLogic animatedThumbnailImageWithContentId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521f658(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11271fea4);
    func_0x00010c0e00e0(uVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0c6c20();
    if ((int)uVar2 == 0xc) {
      uVar2 = uVar1;
      func_0x00010bf63a60(uVar1,param_2,4);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_PTR_1126b65f8;
      _objc_alloc(PTR_PTR_1126b65f8);
      uVar3 = uVar1;
      func_0x00010c070dc0(uVar1,param_2,4);
      func_0x00010c008280(puVar4,param_2,uVar2,param_3,1,uVar3);
      func_0x00010c08fa60(uVar2);
      _objc_release(uVar2);
    }
    else {
      puVar4 = (undefined *)0x0;
    }
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10521f73c; end: 10521f83f; -[SCSpectaclesContentPageBusinessLogic spectaclesTransferSession:onTransferUpdate:] */

void FUN_10521f73c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010c0e2ba0();
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10521f840;
  puStack_58 = &UNK_110842a68;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  uStack_40 = param_4;
  (**(code **)(param_1 + 0x10))(param_1,&puStack_70);
  _objc_release(param_1);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10521f840; end: 10521f877;  */

void FUN_10521f840(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be30a20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10521f878; end: 10521f96b; -[SCSpectaclesContentPageBusinessLogic spectaclesDevice:onDeviceLogsUpdate:] */

void FUN_10521f878(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  if (param_4 == 1) {
    _objc_initWeak(auStack_38,param_1);
    func_0x00010c0e2ba0();
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_10521f96c;
    puStack_48 = &UNK_1108434b0;
    _objc_copyWeak(auStack_40,auStack_38);
    (**(code **)(param_1 + 0x10))(param_1,&puStack_60);
    _objc_release(param_1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10521f96c; end: 10521f99b;  */

void FUN_10521f96c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec3c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10521f99c; end: 10521fbcf; -[SCSpectaclesContentPageBusinessLogic _handleSpectaclesTransferSessionUpdate:withUpdateType:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521f99c(double param_1,long param_2,undefined8 param_3,ulong param_4,long param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  
  _objc_retain(param_4);
  *(undefined8 *)(param_2 + _DAT_11271febc) = 0;
  *(undefined8 *)(param_2 + _DAT_11271feb8) = 0;
  uVar1 = *(undefined8 *)(param_2 + _DAT_11271fec0);
  *(undefined8 *)(param_2 + _DAT_11271fec0) = 0;
  _objc_release(uVar1);
  uVar2 = param_4;
  func_0x00010bf61080();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c23e340();
  if ((uVar3 & 1) == 0) {
    lVar5 = *(long *)(param_2 + _DAT_11271feb0);
    _objc_release(uVar2);
    if (lVar5 == 0) {
      func_0x00010bee3b60(param_2,param_3,param_4);
      goto LAB_10521fa4c;
    }
  }
  else {
    _objc_release(uVar2);
  }
  func_0x00010bee3b40(param_2,param_3,param_4);
LAB_10521fa4c:
  if (param_5 - 6U < 3) {
    puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    uVar2 = param_4;
    dVar6 = param_1;
    func_0x00010c1603a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26f320();
    dVar6 = (param_1 - dVar6) * 1000.0;
    _objc_release(uVar2);
    _objc_release(puVar4);
    if (0.0 < dVar6) {
      if ((param_5 == 8) || (param_5 != 7)) {
        func_0x00010be927e0(param_2);
      }
      uVar2 = param_4;
      func_0x00010bfa5e40(param_4,param_3,4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0b8600();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdd8780(param_2,param_3,uVar3);
      uVar1 = *(undefined8 *)(param_2 + _DAT_11271fe80);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a3de0(dVar6);
      _objc_release(uVar1);
      _objc_release(uVar3);
      _objc_release(uVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10521fbd0; end: 10521fbd7;  */

void FUN_10521fbd0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc3550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_UUID_11254e6f0);
  return;
}



/* Entry: 10521fbd8; end: 10521fd43; -[SCSpectaclesContentPageBusinessLogic .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10521fbd8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271fec8,0);
  _objc_storeStrong(param_1 + _DAT_11271fe84,0);
  _objc_storeStrong(param_1 + _DAT_11271fec4,0);
  _objc_storeStrong(param_1 + _DAT_11271fec0,0);
  _objc_storeStrong(param_1 + _DAT_11271fe90,0);
  _objc_storeStrong(param_1 + _DAT_11271fea4,0);
  _objc_storeStrong(param_1 + _DAT_11271fe9c,0);
  _objc_storeStrong(param_1 + _DAT_11271fe98,0);
  _objc_storeStrong(param_1 + _DAT_11271fe94,0);
  _objc_storeStrong(param_1 + _DAT_11271fe64,0);
  _objc_storeStrong(param_1 + _DAT_11271fecc,0);
  _objc_storeStrong(param_1 + _DAT_11271feb0,0);
  _objc_storeStrong(param_1 + _DAT_11271fe60,0);
  _objc_storeStrong(param_1 + _DAT_11271fe8c,0);
  _objc_storeStrong(param_1 + _DAT_11271fe88,0);
  _objc_storeStrong(param_1 + _DAT_11271fe80,0);
  _objc_storeStrong(param_1 + _DAT_11271fe70,0);
  _objc_storeStrong(param_1 + _DAT_11271fe5c,0);
  _objc_storeStrong(param_1 + _DAT_11271fe58,0);
  _objc_destroyWeak(param_1 + _DAT_11271fe54);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271fe50,0);
  return;
}



/* Entry: 10521fd44; end: 10521ff43; -[SCSpectaclesContentPageExportWorkflow initWithDevice:delegate:progressOverlayScopeExposer:progressOverlayScopeServices:shareScopeExposer:spectaclesManager:temporaryFileWriter:networkConnectivityMonitor:presentingViewController:analyticsLogger:] */

undefined8 *
FUN_10521fd44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

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
  puStack_68 = PTR_PTR_1126e6ff0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 2,param_4);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 10,param_11);
    _objc_retain(param_12);
    uVar2 = puVar1[9];
    puVar1[9] = param_12;
    _objc_release(uVar2);
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



/* Entry: 10521ff44; end: 10522008f; -[SCSpectaclesContentPageExportWorkflow _untransferredBytes] */

undefined1 * FUN_10521ff44(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined1 *puVar23;
  long lVar24;
  ulong uVar25;
  undefined8 *puVar26;
  long lVar27;
  undefined1 auStack_3e0 [8];
  undefined1 auStack_3d8 [8];
  undefined8 uStack_3d0;
  long lStack_3c8;
  long *plStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined *puStack_388;
  undefined8 uStack_380;
  code *pcStack_378;
  undefined *puStack_370;
  undefined1 *puStack_368;
  long lStack_2e0;
  undefined8 uStack_260;
  long lStack_258;
  long *plStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long lStack_198;
  
  lVar19 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar22 = *(long *)(param_1 + 0x60);
  _objc_retain(lVar22);
  lVar24 = lVar22;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  if (lVar24 == 0) {
    puVar23 = (undefined1 *)0x0;
  }
  else {
    puVar23 = (undefined1 *)0x0;
    do {
      lVar27 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar22);
        }
        uVar25 = *(ulong *)(lVar27 * 8);
        func_0x00010c137620();
        uVar1 = uVar25;
        func_0x00010c080760();
        if ((uVar1 & 1) == 0) {
          uVar1 = uVar25;
          func_0x00010c12a3e0();
          func_0x00010c09df20();
          puVar23 = puVar23 + (uVar1 - uVar25);
        }
        lVar27 = lVar27 + 1;
      } while (lVar24 != lVar27);
      lVar24 = lVar22;
      func_0x00010bf52a60();
    } while (lVar24 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar19) {
    return puVar23;
  }
  ___stack_chk_fail();
  puVar18 = &uStack_260;
  lStack_198 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_258 = 0;
  uStack_260 = 0;
  uStack_248 = 0;
  plStack_250 = (long *)0x0;
  uStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  lVar24 = *(long *)(lVar22 + 0x60);
  _objc_retain(lVar24);
  lVar2 = lVar24;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar19 = *plStack_250;
    do {
      lVar27 = 0;
      do {
        if (*plStack_250 != lVar19) {
          _objc_enumerationMutation(lVar24);
        }
        lVar3 = *(long *)(lStack_258 + lVar27 * 8);
        func_0x00010c27dd80();
        lVar4 = *(long *)(lVar22 + 0x60);
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c27dd80();
        _objc_release(lVar4);
        if (lVar3 != lVar5) {
          _objc_release(lVar24);
          puVar23 = (undefined1 *)0x2;
          goto LAB_1052201d0;
        }
        lVar27 = lVar27 + 1;
      } while (lVar2 != lVar27);
      lVar2 = lVar24;
      puVar18 = &uStack_260;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar24);
  lVar24 = *(long *)(lVar22 + 0x60);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar24;
  func_0x00010c27dd80();
  _objc_release(lVar24);
  puVar23 = (undefined1 *)0x0;
  if (lVar2 != 1) {
    puVar23 = (undefined1 *)0x2;
  }
  if (lVar2 == 0) {
    puVar23 = (undefined1 *)0x1;
  }
LAB_1052201d0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_198) {
    return puVar23;
  }
  ___stack_chk_fail();
  lStack_2e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar18);
  _objc_retain(puVar18);
  uVar6 = *(undefined8 *)(puVar23 + 0x58);
  *(undefined8 **)(puVar23 + 0x58) = puVar18;
  _objc_release(uVar6);
  uVar7 = *(undefined8 *)(puVar23 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  puStack_388 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_380 = 0xc2000000;
  pcStack_378 = FUN_1052206ac;
  puStack_370 = &UNK_110870ac0;
  _objc_retain(puVar18);
  uVar21 = uVar6;
  puStack_368 = (undefined1 *)puVar18;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = *(undefined8 *)(puVar23 + 0x60);
  *(undefined8 *)(puVar23 + 0x60) = uVar21;
  _objc_release(uVar20);
  _objc_release(uVar6);
  _objc_release(uVar7);
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_398 = 0;
  uStack_3a0 = 0;
  lStack_3c8 = 0;
  uStack_3d0 = 0;
  uStack_3b8 = 0;
  plStack_3c0 = (long *)0x0;
  lVar24 = *(long *)(puVar23 + 0x60);
  _objc_retain(lVar24);
  lVar2 = lVar24;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar22 = *plStack_3c0;
    do {
      lVar19 = 0;
      do {
        if (*plStack_3c0 != lVar22) {
          _objc_enumerationMutation(lVar24);
        }
        func_0x00010c203060(*(undefined8 *)(lStack_3c8 + lVar19 * 8));
        lVar19 = lVar19 + 1;
      } while (lVar2 != lVar19);
      lVar2 = lVar24;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar24);
  puVar8 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  puVar26 = (undefined8 *)(puVar23 + 0x68);
  uVar6 = *puVar26;
  *puVar26 = puVar8;
  _objc_release(uVar6);
  uVar6 = 0;
  _dispatch_semaphore_create();
  uVar21 = *(undefined8 *)(puVar23 + 0x80);
  *(undefined8 *)(puVar23 + 0x80) = uVar6;
  _objc_release(uVar21);
  uVar6 = *(undefined8 *)(puVar23 + 0x30);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar6);
  puVar9 = puVar23;
  func_0x00010bed2220();
  *(undefined1 **)(puVar23 + 0x70) = puVar9;
  if (puVar9 == (undefined1 *)0x0) {
    func_0x00010c0d9840(*puVar26);
    _dispatch_semaphore_signal(*(undefined8 *)(puVar23 + 0x80));
  }
  else {
    func_0x00010c0d9840(*puVar26);
    uVar6 = *(undefined8 *)(puVar23 + 0x30);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24e640();
    _objc_release(uVar6);
  }
  _objc_initWeak(auStack_3d8,puVar23);
  puVar8 = PTR_PTR_1126ae720;
  puVar9 = auStack_3d8;
  _objc_copyWeak(auStack_3e0,puVar9);
  func_0x00010bf11fe0(puVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar23;
  func_0x00010be1ab40(puVar23);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126b2478;
  _objc_alloc(PTR_PTR_1126b2478);
  func_0x00010c021e80();
  puVar12 = PTR_PTR_1126b2480;
  _objc_alloc();
  func_0x00010c03a960();
  puVar13 = PTR_PTR_1126b2490;
  _objc_alloc(PTR_PTR_1126b2490);
  func_0x00010be5ec80(puVar23);
  func_0x00010c028f20(puVar13);
  puVar14 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  puVar15 = puVar23 + 0x50;
  _objc_loadWeakRetained(puVar15);
  func_0x00010c038f40(puVar14);
  _objc_release(puVar15);
  puVar16 = PTR_PTR_1126b24a0;
  _objc_alloc();
  puVar17 = puVar16;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0574a0(puVar16);
  _objc_release(puVar17);
  func_0x00010bf9d620(*(undefined8 *)(puVar23 + 0x28));
  _objc_release(puVar16);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_destroyWeak(auStack_3e0);
  _objc_destroyWeak(auStack_3d8);
  _objc_release(puStack_368);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_2e0) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_3e0);
    _objc_destroyWeak(auStack_3d8);
    __Unwind_Resume();
    puVar23 = *(undefined1 **)((long)puVar18 + 0x20);
    func_0x00010bdc3540(puVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(puVar23);
    _objc_release(puVar9);
    return puVar23;
  }
  return (undefined1 *)puVar18;
}



/* Entry: 105220090; end: 10522020b; -[SCSpectaclesContentPageExportWorkflow _mediaType] */

undefined1 * FUN_105220090(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 *puVar20;
  long lVar21;
  undefined8 *puVar22;
  long lVar23;
  long lVar24;
  undefined1 auStack_2b0 [8];
  undefined1 auStack_2a8 [8];
  undefined8 uStack_2a0;
  long lStack_298;
  long *plStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined *puStack_258;
  undefined8 uStack_250;
  code *pcStack_248;
  undefined *puStack_240;
  undefined1 *puStack_238;
  long lStack_1b0;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar17 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar21 = *(long *)(param_1 + 0x60);
  _objc_retain(lVar21);
  lVar1 = lVar21;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar23 = *plStack_120;
    do {
      lVar24 = 0;
      do {
        if (*plStack_120 != lVar23) {
          _objc_enumerationMutation(lVar21);
        }
        lVar2 = *(long *)(lStack_128 + lVar24 * 8);
        func_0x00010c27dd80();
        lVar3 = *(long *)(param_1 + 0x60);
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c27dd80();
        _objc_release(lVar3);
        if (lVar2 != lVar4) {
          _objc_release(lVar21);
          puVar20 = (undefined1 *)0x2;
          goto LAB_1052201d0;
        }
        lVar24 = lVar24 + 1;
      } while (lVar1 != lVar24);
      lVar1 = lVar21;
      puVar17 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar21);
  lVar21 = *(long *)(param_1 + 0x60);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar21;
  func_0x00010c27dd80();
  _objc_release(lVar21);
  puVar20 = (undefined1 *)0x0;
  if (lVar1 != 1) {
    puVar20 = (undefined1 *)0x2;
  }
  if (lVar1 == 0) {
    puVar20 = (undefined1 *)0x1;
  }
LAB_1052201d0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar20;
  }
  ___stack_chk_fail();
  lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar17);
  _objc_retain(puVar17);
  uVar5 = *(undefined8 *)(puVar20 + 0x58);
  *(undefined8 **)(puVar20 + 0x58) = puVar17;
  _objc_release(uVar5);
  uVar6 = *(undefined8 *)(puVar20 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar6;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  puStack_258 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_250 = 0xc2000000;
  pcStack_248 = FUN_1052206ac;
  puStack_240 = &UNK_110870ac0;
  _objc_retain(puVar17);
  uVar19 = uVar5;
  puStack_238 = (undefined1 *)puVar17;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(puVar20 + 0x60);
  *(undefined8 *)(puVar20 + 0x60) = uVar19;
  _objc_release(uVar18);
  _objc_release(uVar5);
  _objc_release(uVar6);
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  lStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  plStack_290 = (long *)0x0;
  lVar21 = *(long *)(puVar20 + 0x60);
  _objc_retain(lVar21);
  lVar1 = lVar21;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar23 = *plStack_290;
    do {
      lVar24 = 0;
      do {
        if (*plStack_290 != lVar23) {
          _objc_enumerationMutation(lVar21);
        }
        func_0x00010c203060(*(undefined8 *)(lStack_298 + lVar24 * 8));
        lVar24 = lVar24 + 1;
      } while (lVar1 != lVar24);
      lVar1 = lVar21;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release(lVar21);
  puVar7 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  puVar22 = (undefined8 *)(puVar20 + 0x68);
  uVar5 = *puVar22;
  *puVar22 = puVar7;
  _objc_release(uVar5);
  uVar5 = 0;
  _dispatch_semaphore_create();
  uVar19 = *(undefined8 *)(puVar20 + 0x80);
  *(undefined8 *)(puVar20 + 0x80) = uVar5;
  _objc_release(uVar19);
  uVar5 = *(undefined8 *)(puVar20 + 0x30);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar5);
  puVar8 = puVar20;
  func_0x00010bed2220();
  *(undefined1 **)(puVar20 + 0x70) = puVar8;
  if (puVar8 == (undefined1 *)0x0) {
    func_0x00010c0d9840(*puVar22);
    _dispatch_semaphore_signal(*(undefined8 *)(puVar20 + 0x80));
  }
  else {
    func_0x00010c0d9840(*puVar22);
    uVar5 = *(undefined8 *)(puVar20 + 0x30);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24e640();
    _objc_release(uVar5);
  }
  _objc_initWeak(auStack_2a8,puVar20);
  puVar7 = PTR_PTR_1126ae720;
  puVar8 = auStack_2a8;
  _objc_copyWeak(auStack_2b0,puVar8);
  func_0x00010bf11fe0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar20;
  func_0x00010be1ab40(puVar20);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126b2478;
  _objc_alloc(PTR_PTR_1126b2478);
  func_0x00010c021e80();
  puVar11 = PTR_PTR_1126b2480;
  _objc_alloc();
  func_0x00010c03a960();
  puVar12 = PTR_PTR_1126b2490;
  _objc_alloc(PTR_PTR_1126b2490);
  func_0x00010be5ec80(puVar20);
  func_0x00010c028f20(puVar12);
  puVar13 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  puVar14 = puVar20 + 0x50;
  _objc_loadWeakRetained(puVar14);
  func_0x00010c038f40(puVar13);
  _objc_release(puVar14);
  puVar15 = PTR_PTR_1126b24a0;
  _objc_alloc();
  puVar16 = puVar15;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0574a0(puVar15);
  _objc_release(puVar16);
  func_0x00010bf9d620(*(undefined8 *)(puVar20 + 0x28));
  _objc_release(puVar15);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_destroyWeak(auStack_2b0);
  _objc_destroyWeak(auStack_2a8);
  _objc_release(puStack_238);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b0) {
    ___stack_chk_fail();
    _objc_destroyWeak(auStack_2b0);
    _objc_destroyWeak(auStack_2a8);
    __Unwind_Resume();
    puVar20 = *(undefined1 **)((long)puVar17 + 0x20);
    func_0x00010bdc3540(puVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900(puVar20);
    _objc_release(puVar8);
    return puVar20;
  }
  return (undefined1 *)puVar17;
}



/* Entry: 10522020c; end: 1052206ab; -[SCSpectaclesContentPageExportWorkflow beginWithContentIds:] */

long FUN_10522020c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  long lStack_168;
  long *plStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined *puStack_110;
  long lStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(long *)(param_1 + 0x58) = param_3;
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf4bc60();
  _objc_retainAutoreleasedReturnValue();
  puStack_128 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_120 = 0xc2000000;
  pcStack_118 = FUN_1052206ac;
  puStack_110 = &UNK_110870ac0;
  _objc_retain(param_3);
  uVar12 = uVar1;
  lStack_108 = param_3;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = uVar12;
  _objc_release(uVar11);
  _objc_release(uVar1);
  _objc_release(uVar2);
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  lStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  plStack_160 = (long *)0x0;
  lVar14 = *(long *)(param_1 + 0x60);
  _objc_retain(lVar14);
  lVar13 = lVar14;
  func_0x00010bf52a60();
  if (lVar13 != 0) {
    lVar16 = *plStack_160;
    do {
      lVar17 = 0;
      do {
        if (*plStack_160 != lVar16) {
          _objc_enumerationMutation(lVar14);
        }
        func_0x00010c203060(*(undefined8 *)(lStack_168 + lVar17 * 8));
        lVar17 = lVar17 + 1;
      } while (lVar13 != lVar17);
      lVar13 = lVar14;
      func_0x00010bf52a60();
    } while (lVar13 != 0);
  }
  _objc_release(lVar14);
  puVar3 = PTR_PTR_1126ae820;
  _objc_alloc_init();
  puVar15 = (undefined8 *)(param_1 + 0x68);
  uVar1 = *puVar15;
  *puVar15 = puVar3;
  _objc_release(uVar1);
  uVar1 = 0;
  _dispatch_semaphore_create();
  uVar12 = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(param_1 + 0x80) = uVar1;
  _objc_release(uVar12);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar1);
  lVar13 = param_1;
  func_0x00010bed2220();
  *(long *)(param_1 + 0x70) = lVar13;
  if (lVar13 == 0) {
    func_0x00010c0d9840(*puVar15);
    _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x80));
  }
  else {
    func_0x00010c0d9840(*puVar15);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24e640();
    _objc_release(uVar1);
  }
  _objc_initWeak(auStack_178,param_1);
  puVar3 = PTR_PTR_1126ae720;
  puVar10 = auStack_178;
  _objc_copyWeak(auStack_180,puVar10);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010be1ab40(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2478;
  _objc_alloc(PTR_PTR_1126b2478);
  func_0x00010c021e80();
  puVar5 = PTR_PTR_1126b2480;
  _objc_alloc();
  func_0x00010c03a960();
  puVar6 = PTR_PTR_1126b2490;
  _objc_alloc(PTR_PTR_1126b2490);
  func_0x00010be5ec80(param_1);
  func_0x00010c028f20(puVar6);
  puVar7 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar13 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar13);
  func_0x00010c038f40(puVar7);
  _objc_release(lVar13);
  puVar8 = PTR_PTR_1126b24a0;
  _objc_alloc();
  puVar9 = puVar8;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0574a0(puVar8);
  _objc_release(puVar9);
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x28));
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar14);
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_180);
  _objc_destroyWeak(auStack_178);
  _objc_release(lStack_108);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return param_3;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_180);
  _objc_destroyWeak(auStack_178);
  __Unwind_Resume();
  lVar13 = *(long *)(param_3 + 0x20);
  func_0x00010bdc3540(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(lVar13);
  _objc_release(puVar10);
  return lVar13;
}



/* Entry: 1052206ac; end: 105220737;  */

undefined8 FUN_1052206ac(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdc3540(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar1);
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 105220738; end: 10522090f; -[SCSpectaclesContentPageExportWorkflow _generateShareableMedia] */

void FUN_105220738(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  lVar1 = *(long *)(param_1 + 0x80);
  _dispatch_semaphore_wait(lVar1,0);
  if (lVar1 != 0) {
    puVar5 = PTR_PTR_1126b1c10;
    _objc_alloc(PTR_PTR_1126b1c10);
    func_0x00010c063240(*(undefined8 *)PTR__UIWindowLevelAlert_110345e80);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf23f00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x18));
    _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 0x80),0xffffffffffffffff);
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x18));
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(puVar5);
  }
  *(undefined1 *)(param_1 + 0x89) = 1;
  if (*(long *)(param_1 + 0x90) != 0) {
    func_0x00010be78e80(param_1);
  }
  lVar1 = param_1;
  func_0x00010be15b40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bed2220();
  puVar5 = PTR____NSArray0__struct_11034ab48;
  if ((lVar3 == 0) && ((*(byte *)(param_1 + 0x78) & 1) == 0)) {
    _objc_initWeak(auStack_38,param_1);
    puVar5 = *(undefined **)(param_1 + 0x60);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(lVar1);
    func_0x00010c0b8620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  func_0x00010bddf740(param_1);
  puVar4 = puVar5;
  func_0x00010bf529e0();
  if (puVar4 == (undefined *)0x0) {
    func_0x00010bddf4a0(param_1);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105220910; end: 105220cd7;  */

void FUN_105220910(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  undefined *unaff_x26;
  
  lVar1 = param_2;
  _objc_retain(param_2);
  _objc_autoreleasePoolPush();
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    unaff_x26 = (undefined *)0x0;
    goto LAB_105220c94;
  }
  func_0x00010c137620(param_2);
  lVar3 = param_2;
  func_0x00010bf63a60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    unaff_x26 = (undefined *)0x0;
  }
  else {
    lVar4 = param_2;
    func_0x00010c27dd80();
    if (lVar4 == 1) {
      puVar11 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c14d040();
      _objc_retainAutoreleasedReturnValue();
      if (puVar11 != (undefined *)0x0) {
        uVar7 = *(undefined8 *)(lVar2 + 0x48);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_2;
        func_0x00010bdc3540(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c6c20(param_2);
        lVar10 = param_2;
        func_0x00010c26f500(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a3e40(0,uVar7);
        _objc_release(lVar10);
        _objc_release(lVar4);
        _objc_release(uVar7);
        unaff_x26 = PTR_PTR_1126b1c68;
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        lVar4 = param_2;
        func_0x00010bdc3540(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfe94e0(unaff_x26);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        goto LAB_105220c80;
      }
      unaff_x26 = (undefined *)0x0;
    }
    else {
      if (lVar4 != 0) goto LAB_105220c8c;
      lVar5 = *(long *)(lVar2 + 0x38);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = param_2;
      func_0x00010bdc3540(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar10;
      func_0x00010c25ce20();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar5;
      func_0x00010c2bda80();
      _objc_retainAutoreleasedReturnValue();
      puVar11 = (undefined *)0x0;
      _objc_retain(0);
      _objc_release(lVar6);
      _objc_release(lVar10);
      _objc_release(lVar5);
      unaff_x26 = (undefined *)0x0;
      if (lVar4 != 0) {
        uVar7 = *(undefined8 *)(lVar2 + 0x48);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        lVar10 = param_2;
        func_0x00010bdc3540(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c6c20();
        lVar6 = param_2;
        func_0x00010c26f500(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_2;
        func_0x00010c299d80(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar5;
        func_0x00010c0b4fe0();
        func_0x00010c0a3e40((float)lVar8,uVar7);
        _objc_release(lVar5);
        _objc_release(lVar6);
        _objc_release(lVar10);
        _objc_release(uVar7);
        unaff_x26 = PTR_PTR_1126b1c68;
        puVar9 = PTR__OBJC_CLASS___NSURL_1126ae598;
        func_0x00010bfad300(PTR__OBJC_CLASS___NSURL_1126ae598);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        lVar10 = param_2;
        func_0x00010bdc3540(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c29be00(unaff_x26);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        _objc_release(lVar10);
        _objc_release(puVar9);
      }
LAB_105220c80:
      _objc_release(lVar4);
    }
    _objc_release(puVar11);
  }
LAB_105220c8c:
  _objc_release(lVar3);
LAB_105220c94:
  _objc_release(lVar2);
  _objc_autoreleasePoolPop(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x26);
  return;
}



/* Entry: 105220cd8; end: 105220d87; -[SCSpectaclesContentPageExportWorkflow _generateAsyncShareableMedia] */

void FUN_105220cd8(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  param_1[0x89] = 1;
  if (*(long *)(param_1 + 0x90) != 0) {
    func_0x00010be78e80(param_1);
  }
  puVar1 = param_1;
  func_0x00010be15b40(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = param_1;
  func_0x00010bed2220();
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if ((puVar2 == (undefined *)0x0) && ((param_1[0x78] & 1) == 0)) {
    puVar3 = param_1;
    func_0x00010be1b160(param_1,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bddf740(param_1);
  puVar2 = puVar3;
  func_0x00010bf529e0();
  if (puVar2 == (undefined *)0x0) {
    func_0x00010bddf4a0(param_1);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105220d88; end: 105220e6f; -[SCSpectaclesContentPageExportWorkflow _generateFutureMediaWithFilenameMap:] */

void FUN_105220d88(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010bf43280(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105220e70; end: 105221257;  */

void FUN_105220e70(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined *unaff_x26;
  
  lVar1 = param_2;
  _objc_retain(param_2);
  _objc_autoreleasePoolPush();
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    unaff_x26 = (undefined *)0x0;
    goto LAB_105221214;
  }
  func_0x00010c137620(param_2);
  lVar3 = param_2;
  func_0x00010bf63a60();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    unaff_x26 = (undefined *)0x0;
  }
  else {
    lVar4 = param_2;
    func_0x00010c27dd80();
    if (lVar4 == 1) {
      puVar9 = PTR__OBJC_CLASS___UIImage_1126aea68;
      func_0x00010c14d040();
      _objc_retainAutoreleasedReturnValue();
      if (puVar9 != (undefined *)0x0) {
        uVar6 = *(undefined8 *)(lVar2 + 0x48);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_2;
        func_0x00010bdc3540(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c6c20(param_2);
        lVar10 = param_2;
        func_0x00010c26f500(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a3e40(0,uVar6);
        _objc_release(lVar10);
        _objc_release(lVar4);
        _objc_release(uVar6);
        unaff_x26 = PTR_PTR_1126b2470;
        _objc_retain(puVar9);
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain(uVar6);
        _objc_retain(param_2);
        func_0x00010c2adce0(unaff_x26);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_2);
        _objc_release(uVar6);
        puVar5 = puVar9;
        goto LAB_1052211fc;
      }
      unaff_x26 = (undefined *)0x0;
    }
    else {
      if (lVar4 != 0) goto LAB_10522120c;
      puVar5 = *(undefined **)(lVar2 + 0x38);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_2;
      func_0x00010bdc3540(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar4;
      func_0x00010c25ce20();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = puVar5;
      func_0x00010c2bda80();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(0);
      _objc_release(lVar10);
      _objc_release(lVar4);
      _objc_release(puVar5);
      unaff_x26 = (undefined *)0x0;
      puVar5 = (undefined *)0x0;
      if (puVar9 != (undefined *)0x0) {
        uVar6 = *(undefined8 *)(lVar2 + 0x48);
        func_0x00010c269d40(uVar6);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = param_2;
        func_0x00010bdc3540(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0c6c20();
        lVar10 = param_2;
        func_0x00010c26f500(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar7 = param_2;
        func_0x00010c299d80(param_2);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010c0b4fe0();
        func_0x00010c0a3e40((float)lVar8,uVar6);
        _objc_release(lVar7);
        _objc_release(lVar10);
        _objc_release(lVar4);
        _objc_release(uVar6);
        unaff_x26 = PTR_PTR_1126b2470;
        _objc_retain(puVar9);
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        _objc_retain(uVar6);
        _objc_retain(param_2);
        func_0x00010c2adce0(unaff_x26);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_2);
        _objc_release(uVar6);
        _objc_release(puVar9);
        puVar5 = (undefined *)0x0;
      }
LAB_1052211fc:
      _objc_release(puVar9);
      puVar9 = puVar5;
    }
    _objc_release(puVar9);
  }
LAB_10522120c:
  _objc_release(lVar3);
LAB_105221214:
  _objc_release(lVar2);
  _objc_autoreleasePoolPop(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x26);
  return;
}



/* Entry: 105221258; end: 1052213ff;  */

void FUN_105221258(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR_PTR_1126b1c68;
  puVar1 = PTR__OBJC_CLASS___NSURL_1126ae598;
  _objc_retain(param_2);
  func_0x00010bfad300(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bdc3540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29be00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_2 + 0x10))(param_2,0,puVar4);
  _objc_release(param_2);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105221400; end: 105221747; -[SCSpectaclesContentPageExportWorkflow _filenameMapFromContents] */

void FUN_105221400(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined **unaff_x23;
  long unaff_x24;
  undefined **ppuVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_350 [8];
  undefined1 auStack_348 [8];
  undefined8 uStack_340;
  long lStack_338;
  undefined1 **ppuStack_330;
  code *pcStack_328;
  undefined8 uStack_320;
  long lStack_318;
  long *plStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  long lStack_258;
  long lStack_250;
  undefined **ppuStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  long lStack_230;
  long lStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  long lStack_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined *puStack_1f8;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lVar6 = *(long *)(param_1 + 0x60);
  lStack_210 = param_1;
  puStack_1f8 = puVar1;
  _objc_retain(lVar6);
  lVar2 = lVar6;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar10 = *plStack_1a0;
    ppuStack_208 = &PTR____CFConstantStringClassReference_110eb4a38;
    ppuStack_200 = &PTR____CFConstantStringClassReference_110dc13b8;
    do {
      lVar7 = 0;
      do {
        if (*plStack_1a0 != lVar10) {
          _objc_enumerationMutation(lVar6);
        }
        unaff_x24 = *(long *)(lStack_1a8 + lVar7 * 8);
        lVar11 = unaff_x24;
        func_0x00010c0c6c20();
        unaff_x23 = &PTR____CFConstantStringClassReference_110f72df8;
        if (((int)lVar11 - 2U < 9) || (unaff_x23 = ppuStack_208, (int)lVar11 - 0xbU < 2)) {
          _objc_retain(unaff_x23);
        }
        else {
          unaff_x23 = (undefined **)0x0;
        }
        lVar11 = unaff_x24;
        func_0x00010c27dd80();
        ppuVar8 = &PTR____CFConstantStringClassReference_110dbab38;
        if ((lVar11 == 0) || (ppuVar8 = ppuStack_200, lVar11 == 1)) {
          _objc_retain(ppuVar8);
        }
        else {
          ppuVar8 = (undefined **)0x0;
        }
        func_0x00010c26f500();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = unaff_x23;
        func_0x00010b703f7c(unaff_x23,unaff_x24,ppuVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puStack_1f8);
        _objc_release(ppuVar3);
        _objc_release(unaff_x24);
        _objc_release(ppuVar8);
        _objc_release(unaff_x23);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar6;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar6);
  puVar1 = puStack_1f8;
  func_0x00010bf51e00();
  puVar4 = puVar1;
  func_0x00010b7040d8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc_init();
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lVar10 = *(long *)(lStack_210 + 0x60);
  _objc_retain(lVar10);
  lVar2 = lVar10;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    unaff_x23 = (undefined **)0x0;
    lVar7 = *plStack_1e0;
    do {
      lVar11 = 0;
      do {
        if (*plStack_1e0 != lVar7) {
          _objc_enumerationMutation(lVar10);
        }
        uVar9 = *(undefined8 *)(lStack_1e8 + lVar11 * 8);
        puVar5 = puVar4;
        func_0x00010c0dfd40(puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc3540(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar1);
        _objc_release(uVar9);
        _objc_release(puVar5);
        unaff_x23 = (undefined **)((long)unaff_x23 + 1);
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      lVar2 = lVar10;
      func_0x00010bf52a60();
      unaff_x24 = 0;
    } while (lVar2 != 0);
  }
  _objc_release(lVar10);
  _objc_release(puVar4);
  puVar5 = puStack_1f8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_218 = FUN_105221748;
    lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar9 = *(undefined8 *)(puVar5 + 0x30);
    lStack_250 = unaff_x24;
    ppuStack_248 = unaff_x23;
    puStack_240 = puVar4;
    puStack_238 = puVar1;
    lStack_230 = lVar10;
    lStack_228 = lVar6;
    puStack_220 = &stack0xfffffffffffffff0;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2e160();
    _objc_release(uVar9);
    uStack_2f8 = 0;
    uStack_300 = 0;
    uStack_2e8 = 0;
    uStack_2f0 = 0;
    lStack_318 = 0;
    uStack_320 = 0;
    uStack_308 = 0;
    plStack_310 = (long *)0x0;
    lVar6 = *(long *)(puVar5 + 0x60);
    _objc_retain(lVar6);
    lVar2 = lVar6;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar10 = *plStack_310;
      do {
        lVar7 = 0;
        do {
          if (*plStack_310 != lVar10) {
            _objc_enumerationMutation(lVar6);
          }
          uVar9 = *(undefined8 *)(lStack_318 + lVar7 * 8);
          func_0x00010bf6b920(uVar9);
          func_0x00010c203060(uVar9);
          lVar7 = lVar7 + 1;
        } while (lVar2 != lVar7);
        lVar2 = lVar6;
        func_0x00010bf52a60();
        uVar9 = 0;
      } while (lVar2 != 0);
    }
    lVar2 = lVar6;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_258) {
      ___stack_chk_fail();
      pcStack_328 = FUN_105221870;
      uStack_340 = uVar9;
      lStack_338 = lVar6;
      ppuStack_330 = &puStack_220;
      func_0x00010bddf740();
      _objc_initWeak(auStack_348,lVar2);
      uVar9 = *(undefined8 *)(lVar2 + 0x28);
      func_0x00010c12e1c0(uVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_350,auStack_348);
      func_0x00010c2a4ae0(uVar9);
      _objc_release(uVar9);
      _objc_destroyWeak(auStack_350);
      _objc_destroyWeak(auStack_348);
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105221748; end: 10522186f; -[SCSpectaclesContentPageExportWorkflow _cleanupExportContent] */

void FUN_105221748(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2e160();
  _objc_release(uVar1);
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  lVar3 = *(long *)(param_1 + 0x60);
  _objc_retain(lVar3);
  lVar2 = lVar3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar4 = *plStack_100;
    do {
      lVar5 = 0;
      do {
        if (*plStack_100 != lVar4) {
          _objc_enumerationMutation(lVar3);
        }
        uVar1 = *(undefined8 *)(lStack_108 + lVar5 * 8);
        func_0x00010bf6b920(uVar1);
        func_0x00010c203060(uVar1);
        lVar5 = lVar5 + 1;
      } while (lVar2 != lVar5);
      lVar2 = lVar3;
      func_0x00010bf52a60();
      uVar1 = 0;
    } while (lVar2 != 0);
  }
  lVar2 = lVar3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_105221870;
  uStack_130 = uVar1;
  lStack_128 = lVar3;
  puStack_120 = &stack0xfffffffffffffff0;
  func_0x00010bddf740();
  _objc_initWeak(auStack_138,lVar2);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  func_0x00010c12e1c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_140,auStack_138);
  func_0x00010c2a4ae0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
  return;
}



/* Entry: 105221870; end: 10522193b; -[SCSpectaclesContentPageExportWorkflow _cleanupAndComplete] */

void FUN_105221870(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  func_0x00010bddf740();
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c12e1c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c2a4ae0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10522193c; end: 105221987;  */

void FUN_10522193c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf9d380();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105221988; end: 1052219d7; -[SCSpectaclesContentPageExportWorkflow _isNetworkConnectionAvailable] */

uint FUN_105221988(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf48f60();
  _objc_release(uVar1);
  return (uint)(uVar2 < 5) & 0x16U >> (ulong)((uint)uVar2 & 0x1f);
}



/* Entry: 1052219d8; end: 105221a53; -[SCSpectaclesContentPageExportWorkflow _preparePostShare] */

void FUN_1052219d8(long param_1)

{
  if (*(ulong *)(param_1 + 0x90) < 0x1c &&
      (1L << (*(ulong *)(param_1 + 0x90) & 0x3f) & 0xdff7ffcU) != 0) {
    func_0x00010be422e0(param_1);
  }
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9d3a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105221a54; end: 105221a63; -[SCSpectaclesContentPageExportWorkflow progressOverlayScopeDidCancel:] */

void FUN_105221a54(long param_1)

{
  *(undefined1 *)(param_1 + 0x78) = 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x80));
  return;
}



/* Entry: 105221a64; end: 105221b27; -[SCSpectaclesContentPageExportWorkflow spectaclesTransferSession:onTransferUpdate:] */

void FUN_105221a64(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  double dVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010bf61080(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar3,param_2,param_3);
  _objc_release(param_3);
  if ((int)uVar3 != 0) {
    uVar1 = param_1;
    func_0x00010bed2220();
    uVar3 = *(undefined8 *)(param_1 + 0x68);
    dVar4 = (double)NEON_ucvtf(*(undefined8 *)(param_1 + 0x70));
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df720(1.0 - (double)uVar1 / dVar4,PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,puVar2);
    _objc_release(puVar2);
    if (uVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbdff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__dispatch_semaphore_signal_11034c130)(*(undefined8 *)(param_1 + 0x80));
      return;
    }
  }
  return;
}



/* Entry: 105221b28; end: 105221b4f; -[SCSpectaclesContentPageExportWorkflow handleShareDestination:standardExternalContentShareScope:] */

undefined8 FUN_105221b28(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x90) = param_3;
  if (*(char *)(param_1 + 0x89) == '\x01') {
    func_0x00010be78e80();
  }
  return 0;
}



/* Entry: 105221b50; end: 105221b53; -[SCSpectaclesContentPageExportWorkflow shareSheetDismissedWithShareDestination:] */

void FUN_105221b50(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddf4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanupAndComplete_1125556c8);
  return;
}



/* Entry: 105221b54; end: 105221c0b; -[SCSpectaclesContentPageExportWorkflow .cxx_destruct] */

void FUN_105221b54(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105221c0c; end: 105221d63;  */

void FUN_105221c0c(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
  func_0x00010bf5e300();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c070320();
  _objc_release(puVar1);
  if ((int)puVar2 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
    func_0x00010bf5e300();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c070360();
    _objc_release(puVar1);
    if ((int)puVar2 == 0) {
      puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
      func_0x00010bf5e300();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf43460();
      _objc_release(puVar2);
      _objc_release(puVar1);
      func_0x00010c189b60(param_1);
      puVar1 = param_1;
      func_0x00010c25d400(param_1);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x0001090251c8();
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    func_0x0001090251b0();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105221d64; end: 105221ddb; -[SCSpectaclesContentPageSection initWithContents:] */

undefined1 * FUN_105221d64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e6ff8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105221ddc; end: 105221ebf; -[SCSpectaclesContentPageSection indexsOfContentsInArray:] */

void FUN_105221ddc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x105221e74;
  puStack_30 = &UNK_110870b50;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfed480(uVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105221ec0; end: 105221f5f; -[SCSpectaclesContentPageSection removeContentsInArray:] */

void FUN_105221ec0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar1 = param_1;
  func_0x00010bfed4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar1;
  func_0x00010bf529e0();
  if (lVar5 == 0) {
    lVar5 = 0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,
                        *(undefined8 *)(param_1 + 8));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d480();
    puVar3 = puVar2;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar3;
    _objc_release(uVar4);
    _objc_retain(lVar1);
    _objc_release(puVar2);
    lVar5 = lVar1;
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 105221f60; end: 1052222bf; -[SCSpectaclesContentPageSection viewModelWithContentStateProvider:dateFormatter:] */

void FUN_105221f60(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      uVar12 = 0;
      do {
        lVar3 = *(long *)(param_1 + 8);
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar3;
        func_0x00010c27dd80();
        uStack_68 = PTR_PTR_1126b6600;
        if (lVar1 == 1) {
          uStack_68 = (undefined *)0x0;
        }
        else if (lVar1 == 0) {
          lVar1 = lVar3;
          func_0x00010c299d80(lVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf885a0();
          func_0x00010bfb6060();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar1);
        }
        else {
          uStack_68 = (undefined *)0x0;
        }
        puVar11 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
        func_0x00010c22d4c0();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar3;
        func_0x00010c26f500(lVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar11;
        func_0x00010c25d400();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar1);
        _objc_release(puVar11);
        puVar11 = PTR__OBJC_CLASS___NSDateFormatter_1126af778;
        func_0x00010c22d3a0(PTR__OBJC_CLASS___NSDateFormatter_1126af778);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar3;
        func_0x00010c26f500(lVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar11;
        func_0x00010c25d400(puVar11);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar1);
        _objc_release(puVar11);
        lVar1 = lVar3;
        func_0x00010bdc3540(lVar3);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_3 + 0x10))(param_3,lVar1);
        _objc_release(lVar1);
        puVar11 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR_PTR_1126b6608;
        _objc_alloc(PTR_PTR_1126b6608);
        lVar1 = lVar3;
        func_0x00010bdc3540(lVar3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be43a00(param_1);
        func_0x00010c0035a0(puVar6);
        func_0x00010befa120(puVar2);
        _objc_release(puVar6);
        _objc_release(lVar1);
        _objc_release(puVar11);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(uStack_68);
        _objc_release(lVar3);
        uVar12 = uVar12 + 1;
        uVar7 = *(ulong *)(param_1 + 8);
        func_0x00010bf529e0();
      } while (uVar12 < uVar7);
    }
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfb1920(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c26f500();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = param_4;
    FUN_105221c0c(param_4,uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar9);
    _objc_release(uVar8);
    puVar11 = PTR_PTR_1126b6610;
    _objc_alloc(PTR_PTR_1126b6610);
    func_0x00010c002e20();
    _objc_release(uVar10);
    _objc_release(puVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1052222c0; end: 1052222db; -[SCSpectaclesContentPageSection _isSelectingAllowedAtContentState:] */

uint FUN_1052222c0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (uint)(6 < param_3) | 0x11U >> (ulong)((uint)param_3 & 0x1f) & 1;
}



/* Entry: 1052222dc; end: 1052222e3; -[SCSpectaclesContentPageSection contents] */

undefined8 FUN_1052222dc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1052222e4; end: 1052222ef; -[SCSpectaclesContentPageSection .cxx_destruct] */

void FUN_1052222e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052222f0; end: 1052228fb; -[SCSpectaclesContentPageEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1052222f0(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  lVar17 = (long)_DAT_11271ff20;
  lVar16 = param_1 + lVar17;
  _objc_loadWeakRetained();
  lVar1 = lVar16;
  func_0x00010c253460();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar18;
  func_0x00010bf48720();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = lVar2;
  func_0x00010bf529e0();
  _objc_release(lVar2);
  _objc_release(lVar18);
  _objc_release(lVar1);
  _objc_release(lVar16);
  if (lVar14 != 0) {
    lVar17 = param_1 + lVar17;
    _objc_loadWeakRetained();
    lVar16 = lVar17;
    func_0x00010c253460();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar16;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = lVar1;
    func_0x00010bf48720();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar18;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar18);
    _objc_release(lVar1);
    _objc_release(lVar16);
    _objc_release(lVar17);
    lVar16 = lVar2;
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = lVar16;
    func_0x00010c27f960();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar17;
    func_0x00010bf529e0();
    _objc_release(lVar17);
    _objc_release(lVar16);
    if (lVar1 != 0) {
      lVar16 = lVar2;
      func_0x00010c0692a0();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lVar16;
      func_0x00010c06f0e0();
      _objc_release(lVar16);
      if ((int)lVar17 == 0) {
        _objc_initWeak(auStack_80,param_1);
        puVar3 = PTR_PTR_1126ae720;
        puVar7 = PTR___NSConcreteStackBlock_11034bd00;
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0xc2000000;
        pcStack_a0 = FUN_1052228fc;
        puStack_98 = &UNK_110870b80;
        _objc_copyWeak(auStack_88,auStack_80);
        lStack_90 = lVar2;
        func_0x00010bf11fe0();
        _objc_retainAutoreleasedReturnValue();
        puStack_e0 = puVar7;
        uStack_d8 = 0xc2000000;
        pcStack_d0 = FUN_105222944;
        puStack_c8 = &UNK_110870bb0;
        _objc_copyWeak(auStack_b8,auStack_80);
        ppuVar4 = &puStack_e0;
        lStack_c0 = lVar2;
        _objc_retainBlock();
        puVar5 = PTR_PTR_1126b6618;
        _objc_alloc();
        lVar16 = param_1 + _DAT_11271ff24;
        _objc_loadWeakRetained(lVar16);
        lVar17 = lVar16;
        func_0x00010c0e35c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0312e0();
        _objc_release(lVar17);
        _objc_release(lVar16);
        puVar6 = PTR_PTR_1126ae720;
        puStack_110 = puVar7;
        uStack_108 = 0xc2000000;
        pcStack_100 = FUN_1052229ac;
        puStack_f8 = &UNK_110870be0;
        _objc_copyWeak(auStack_e8,auStack_80);
        lStack_f0 = lVar2;
        func_0x00010bf11fe0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126ae720;
        _objc_copyWeak(auStack_118,auStack_80);
        func_0x00010bf11fe0();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR_PTR_1126b6620;
        _objc_alloc();
        lVar14 = (long)_DAT_11271ff28;
        lVar16 = param_1 + lVar14;
        _objc_loadWeakRetained(lVar16);
        lVar9 = lVar16;
        func_0x00010bf6b020();
        _objc_retainAutoreleasedReturnValue();
        lVar18 = (long)_DAT_11271ff2c;
        lVar17 = param_1 + lVar18;
        _objc_loadWeakRetained(lVar17);
        lVar10 = lVar17;
        func_0x00010c249020();
        _objc_retainAutoreleasedReturnValue();
        lVar1 = param_1 + _DAT_11271ff30;
        _objc_loadWeakRetained();
        lVar11 = lVar1;
        func_0x00010c1067a0();
        _objc_retainAutoreleasedReturnValue();
        lVar18 = param_1 + lVar18;
        _objc_loadWeakRetained();
        lVar12 = lVar18;
        func_0x00010bf027a0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c00be20();
        _objc_release(lVar12);
        _objc_release(lVar18);
        _objc_release(lVar11);
        _objc_release(lVar1);
        _objc_release(lVar10);
        _objc_release(lVar17);
        _objc_release(lVar9);
        _objc_release(lVar16);
        puVar13 = PTR_PTR_1126aec60;
        _objc_alloc();
        func_0x00010bff9c80();
        lVar16 = (long)_DAT_11271ff34;
        uVar15 = *(undefined8 *)(param_1 + lVar16);
        *(undefined **)(param_1 + lVar16) = puVar13;
        _objc_release(uVar15);
        puVar13 = PTR_PTR_1126b6628;
        _objc_alloc(PTR_PTR_1126b6628);
        uVar15 = *(undefined8 *)(param_1 + lVar16);
        func_0x00010c150e00(uVar15);
        _objc_retainAutoreleasedReturnValue();
        lVar16 = lVar2;
        func_0x00010c0d4f60(lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar17 = lVar16;
        func_0x00010bf86080();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c042400(puVar13);
        _objc_release(lVar17);
        _objc_release(lVar16);
        _objc_release(uVar15);
        lVar14 = param_1 + lVar14;
        _objc_loadWeakRetained(lVar14);
        lVar16 = lVar14;
        func_0x00010c27ece0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0c980();
        _objc_release(lVar16);
        _objc_release(lVar14);
        _objc_storeWeak(param_1 + _DAT_11271ff38,puVar13);
        _objc_release(puVar13);
        _objc_release(puVar8);
        _objc_release(puVar7);
        _objc_destroyWeak(auStack_118);
        _objc_release(puVar6);
        _objc_destroyWeak(auStack_e8);
        _objc_release(puVar5);
        _objc_release(ppuVar4);
        _objc_destroyWeak(auStack_b8);
        _objc_release(puVar3);
        _objc_destroyWeak(auStack_88);
        _objc_destroyWeak(auStack_80);
      }
      else {
        func_0x00010beb86e0(param_1);
      }
    }
    _objc_release(lVar2);
  }
  return;
}



/* Entry: 1052228fc; end: 105222943;  */

void FUN_1052228fc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf3a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105222944; end: 1052229ab;  */

void FUN_105222944(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bded880();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1052229ac; end: 105222a33;  */

void FUN_1052229ac(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdeed40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105222a34; end: 105222abf; -[SCSpectaclesContentPageEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105222a34(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + _DAT_11271ff28;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f440();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126e7000;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105222ac0; end: 105222b1b; -[SCSpectaclesContentPageEntryPoint _createSpectaclesStartWiFiControllerWithDevice:] */

void FUN_105222ac0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  
  func_0x000106e937b0();
  _objc_retainAutoreleasedReturnValue();
  if (param_3 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b6630;
    _objc_alloc(PTR_PTR_1126b6630);
    func_0x00010c00bc80();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105222b1c; end: 105222ccb; -[SCSpectaclesContentPageEntryPoint _createExportWorkflowWithDevice:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105222b1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  
  puVar1 = PTR_PTR_1126b6638;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  uVar10 = *(undefined8 *)(param_1 + _DAT_11271ff3c);
  lVar2 = param_1 + _DAT_11271ff40;
  _objc_loadWeakRetained();
  uVar11 = *(undefined8 *)(param_1 + _DAT_11271ff44);
  lVar12 = (long)_DAT_11271ff2c;
  lVar3 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  func_0x00010c249020();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1 + _DAT_11271ff48;
  _objc_loadWeakRetained();
  lVar6 = lVar5;
  func_0x00010c26b280();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + _DAT_11271ff4c;
  _objc_loadWeakRetained();
  lVar8 = lVar7;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_1 + _DAT_11271ff38;
  _objc_loadWeakRetained();
  param_1 = param_1 + lVar12;
  _objc_loadWeakRetained();
  lVar12 = param_1;
  func_0x00010bf027a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00bde0(puVar1,param_2,param_3,param_4,uVar10,lVar2,uVar11,lVar4,lVar6,lVar8,lVar9,
                      lVar12);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar12);
  _objc_release(param_1);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105222ccc; end: 105222f2f; -[SCSpectaclesContentPageEntryPoint _createInterceptorsProviderWithDevice:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105222ccc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae720;
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105222f30;
  puStack_88 = &UNK_110870c40;
  _objc_retain(param_3);
  uStack_80 = param_3;
  func_0x00010bf11fe0(puVar1,param_2,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae720;
  puStack_c8 = puVar3;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_105222f58;
  puStack_b0 = &UNK_110870c70;
  uStack_a8 = param_3;
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar2,param_2,&puStack_c8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b6640;
  _objc_alloc();
  uVar4 = param_3;
  func_0x00010bfa1c80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfb2940();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1 + _DAT_11271ff2c;
  _objc_loadWeakRetained();
  lVar7 = lVar6;
  func_0x00010c249020();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1 + _DAT_11271ff30;
  _objc_loadWeakRetained(lVar8);
  lVar9 = lVar8;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010bfa1c80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010bf11c00();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11271ff50;
  _objc_loadWeakRetained();
  lVar12 = param_1;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00bea0(puVar3,param_2,puVar1,uVar5,puVar2,lVar7,lVar9,uVar11,lVar12,
                      &PTR___NSConcreteGlobalBlock_110870cc0);
  _objc_release(lVar12);
  _objc_release(param_1);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(puVar2);
  _objc_release(uStack_a8);
  _objc_release(puVar1);
  _objc_release(uStack_80);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105222f30; end: 105222f57;  */

void FUN_105222f30(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105222f58; end: 105222f5f;  */

void FUN_105222f58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf48d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_connectionState_1125afcf8);
  return;
}



/* Entry: 105222f60; end: 105222f97;  */

undefined * FUN_105222f60(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lStack_18;
  
  lStack_18 = 0;
  puVar1 = PTR_PTR_1126b24e8;
  func_0x00010bfb7440(PTR_PTR_1126b24e8,param_2,&lStack_18);
  if (lStack_18 != 0) {
    puVar1 = (undefined *)0x0;
  }
  return puVar1;
}



/* Entry: 105222f98; end: 105223017; -[SCSpectaclesContentPageEntryPoint _createInterceptorCheck] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105222f98(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  param_1 = param_1 + _DAT_11271ff38;
  _objc_loadWeakRetained(param_1);
  func_0x00010c038f40(puVar1,param_2,param_1,1);
  _objc_release(param_1);
  puVar2 = PTR_PTR_1126b6648;
  _objc_alloc(PTR_PTR_1126b6648);
  func_0x00010c0564a0();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105223018; end: 10522321f; -[SCSpectaclesContentPageEntryPoint _showConnectedToUSBAlert] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105223018(long param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = auStack_68;
  _objc_initWeak(puVar1,param_1);
  puVar2 = PTR_PTR_1126aed70;
  func_0x0001090250c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc();
  puVar4 = puVar3;
  func_0x0001090251e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x0001090251f8();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0();
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  param_1 = param_1 + _DAT_11271ff28;
  _objc_loadWeakRetained();
  lVar7 = param_1;
  func_0x00010c27ece0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0c980();
  _objc_release(lVar7);
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_70);
  puVar1 = auStack_68;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained();
  if (puVar1 != (undefined1 *)0x0) {
    puVar8 = puVar1 + _DAT_11271ff28;
    _objc_loadWeakRetained(puVar8);
    puVar9 = puVar8;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c248600();
    _objc_release(puVar9);
    _objc_release(puVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105223220; end: 10522328b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105223220(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_11271ff28;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c248600();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10522328c; end: 105223353; -[SCSpectaclesContentPageEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10522328c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271ff44,0);
  _objc_destroyWeak(param_1 + _DAT_11271ff40);
  _objc_storeStrong(param_1 + _DAT_11271ff3c,0);
  _objc_destroyWeak(param_1 + _DAT_11271ff4c);
  _objc_destroyWeak(param_1 + _DAT_11271ff50);
  _objc_destroyWeak(param_1 + _DAT_11271ff48);
  _objc_destroyWeak(param_1 + _DAT_11271ff24);
  _objc_destroyWeak(param_1 + _DAT_11271ff2c);
  _objc_destroyWeak(param_1 + _DAT_11271ff20);
  _objc_destroyWeak(param_1 + _DAT_11271ff28);
  _objc_destroyWeak(param_1 + _DAT_11271ff30);
  _objc_destroyWeak(param_1 + _DAT_11271ff38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271ff34,0);
  return;
}



/* Entry: 105223354; end: 10522344f; -[SCSpectaclesContentPageDeviceConnectionInterceptor initWithDevice:flightManager:deviceConnectionStateReporter:spectaclesManager:] */

undefined1 *
FUN_105223354(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126e7008;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105223450; end: 105223713; -[SCSpectaclesContentPageDeviceConnectionInterceptor interceptIfNeededWithUIContainer:completion:] */

void FUN_105223450(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    if (param_3 == 0) {
      (**(code **)(param_4 + 0x10))(param_4,1);
    }
    else {
      _objc_retain(param_3);
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      *(long *)(param_1 + 0x28) = param_3;
      _objc_release(uVar1);
      lVar2 = param_4;
      _objc_retainBlock();
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      *(long *)(param_1 + 0x30) = lVar2;
      _objc_release(uVar1);
      puVar3 = PTR_PTR_1126ae810;
      _objc_opt_new();
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      *(undefined **)(param_1 + 0x38) = puVar3;
      _objc_release(uVar1);
      _objc_initWeak(auStack_68,param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010bfb2a80(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar4;
      func_0x00010bf870a0();
      _objc_retainAutoreleasedReturnValue();
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_105223714;
      puStack_88 = &UNK_11086e390;
      _objc_copyWeak(auStack_70,auStack_68);
      _objc_retain(param_3);
      lStack_80 = param_3;
      _objc_retain(param_4);
      uVar5 = uVar1;
      lStack_78 = param_4;
      func_0x00010c25ff60(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar5);
      _objc_release(uVar1);
      _objc_release(uVar4);
      uVar4 = *(undefined8 *)(param_1 + 0x18);
      func_0x00010c252740(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar4;
      func_0x00010bf870a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_a8,auStack_68);
      _objc_retain(param_3);
      _objc_retain(param_4);
      uVar5 = uVar1;
      func_0x00010c25ff60(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar5);
      _objc_release(uVar1);
      _objc_release(uVar4);
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef9980();
      _objc_release(uVar1);
      _objc_release(param_4);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_a8);
      _objc_release(lStack_78);
      _objc_release(lStack_80);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
    }
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105223714; end: 1052237b3;  */

void FUN_105223714(long param_1,long param_2)

{
  func_0x00010c2827c0();
  if (param_2 == 1) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010beb8740();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1052237b4; end: 10522385b; -[SCSpectaclesContentPageDeviceConnectionInterceptor _showConnectionInterruptedAlertWithUIContainer:completion:] */

void FUN_1052237b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_10522385c;
  puStack_38 = &UNK_11084aaa8;
  uStack_30 = param_3;
  uStack_28 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(uStack_30);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10522385c; end: 105223a4b;  */

void FUN_10522385c(long param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = auStack_68;
  _objc_initWeak(puVar1,*(undefined8 *)(param_1 + 0x20));
  puVar2 = PTR_PTR_1126aed70;
  func_0x0001090250c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar8);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = puVar3;
  func_0x000109025210();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x000109025228();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar8);
  _objc_destroyWeak(auStack_70);
  puVar1 = auStack_68;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  puVar7 = puVar1 + 0x28;
  _objc_loadWeakRetained(puVar7);
  func_0x00010bf6f440();
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x000105223a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + 0x20) + 0x10))(*(long *)(puVar1 + 0x20),0);
  return;
}



/* Entry: 105223a4c; end: 105223a8f;  */

void FUN_105223a4c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf6f440();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x000105223a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105223a90; end: 105223b17; -[SCSpectaclesContentPageDeviceConnectionInterceptor _showFailedToConnectAlertWithUIContainer:] */

void FUN_105223a90(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_105223b18;
    puStack_30 = &UNK_110842e18;
    _objc_retain(param_3);
    lStack_28 = param_3;
    func_0x0001000d76cc("APPSTORE",&puStack_48);
    _objc_release(lStack_28);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 105223b18; end: 105223cf3;  */

void FUN_105223b18(long param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = auStack_68;
  _objc_initWeak(puVar1,*(undefined8 *)(param_1 + 0x20));
  puVar2 = PTR_PTR_1126aed70;
  func_0x0001090250c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x000109025270();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = puVar3;
  func_0x000109025240();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_70);
  puVar1 = auStack_68;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume(puVar1);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained(puVar1);
  func_0x00010bf6f440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105223cf4; end: 105223d23;  */

void FUN_105223cf4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf6f440();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105223d24; end: 105223dcb; -[SCSpectaclesContentPageDeviceConnectionInterceptor _showConnectedToUSBAlertWithUIContainer:completion:] */

void FUN_105223d24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_105223dcc;
  puStack_38 = &UNK_11084aaa8;
  uStack_30 = param_3;
  uStack_28 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x0001000d76cc("APPSTORE",&puStack_50);
  _objc_release(uStack_28);
  _objc_release(uStack_30);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105223dcc; end: 105223fbb;  */

void FUN_105223dcc(long param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = auStack_68;
  _objc_initWeak(puVar1,*(undefined8 *)(param_1 + 0x20));
  puVar2 = PTR_PTR_1126aed70;
  func_0x0001090250c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar8);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar3 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = puVar3;
  func_0x0001090251e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x0001090251f8();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar3);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010bf0c980(*(undefined8 *)(param_1 + 0x20));
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar8);
  _objc_destroyWeak(auStack_70);
  puVar1 = auStack_68;
  _objc_destroyWeak();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  puVar7 = puVar1 + 0x28;
  _objc_loadWeakRetained(puVar7);
  func_0x00010bf6f440();
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x000105223ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + 0x20) + 0x10))(*(long *)(puVar1 + 0x20),0);
  return;
}



/* Entry: 105223fbc; end: 105223fff;  */

void FUN_105223fbc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf6f440();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x000105223ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105224000; end: 105224013; -[SCSpectaclesContentPageDeviceConnectionInterceptor spectaclesTransferSession:onTransferUpdate:] */

void FUN_105224000(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 == 6) {
                    /* WARNING: Could not recover jumptable at 0x00010beb90d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__showFailedToConnectAlertWithUIC_11258bdd8,
               *(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 105224014; end: 10522408b; -[SCSpectaclesContentPageDeviceConnectionInterceptor spectaclesDevice:didUpdateInfo:] */

void FUN_105224014(long param_1,undefined8 param_2,long param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  if (((param_4 >> 0x11 & 1) != 0) && (lVar1 = *(long *)(param_1 + 8), param_3 == lVar1)) {
    func_0x00010c0692a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c06f0e0();
    _objc_release(lVar1);
    if ((int)lVar2 != 0) {
      func_0x00010beb8700(param_1,param_2,*(undefined8 *)(param_1 + 0x28),
                          *(undefined8 *)(param_1 + 0x30));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10522408c; end: 1052240f7; -[SCSpectaclesContentPageDeviceConnectionInterceptor .cxx_destruct] */

void FUN_10522408c(long param_1)

{
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



/* Entry: 1052240f8; end: 1052241a3; -[SCSpectaclesContentPageGeneralInterceptor initWithConditionChecker:alertPresenter:] */

undefined1 *
FUN_1052240f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e7010;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1052241a4; end: 10522428b; -[SCSpectaclesContentPageGeneralInterceptor interceptIfNeededWithUIContainer:completion:] */

void FUN_1052241a4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 != 0) {
    if (param_3 != 0) {
      lVar1 = *(long *)(param_1 + 8);
      (**(code **)(lVar1 + 0x10))();
      if ((int)lVar1 != 0) {
        puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_60 = 0xc2000000;
        pcStack_58 = FUN_10522428c;
        puStack_50 = &UNK_11084a9e8;
        lStack_48 = param_1;
        _objc_retain(param_3);
        lStack_40 = param_3;
        _objc_retain(param_4);
        lStack_38 = param_4;
        func_0x0001000d76cc("APPSTORE",&puStack_68);
        _objc_release(lStack_38);
        _objc_release(lStack_40);
        goto LAB_105224268;
      }
    }
    (**(code **)(param_4 + 0x10))(param_4,1);
  }
LAB_105224268:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10522428c; end: 1052242a3;  */

void FUN_10522428c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
                    /* WARNING: Could not recover jumptable at 0x0001052242a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30))
  ;
  return;
}



/* Entry: 1052242a4; end: 1052242d3; -[SCSpectaclesContentPageGeneralInterceptor .cxx_destruct] */

void FUN_1052242a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1052242d4; end: 10522447f; -[SCSpectaclesContentPageInterceptorsProvider initWithDevice:flightManager:deviceConnectionStateReporter:spectaclesManager:preferences:autoSaveManager:valdiRuntimeProvider:localDiskSpaceProvider:] */

undefined1 *
FUN_1052242d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126e7018;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_9;
    _objc_release(uVar2);
    uVar2 = param_10;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105224480; end: 10522452f; -[SCSpectaclesContentPageInterceptorsProvider deviceConnectionInterceptor] */

void FUN_105224480(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126b6650;
  _objc_alloc(PTR_PTR_1126b6650);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00be80(puVar1,param_2,uVar2,uVar3,uVar4,*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105224530; end: 105224633; -[SCSpectaclesContentPageInterceptorsProvider wifiOnboardingInterceptorWithDeviceName:] */

void FUN_105224530(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  puVar2 = PTR_PTR_1126b6658;
  _objc_alloc(PTR_PTR_1126b6658);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105224634;
  puStack_50 = &UNK_110848868;
  _objc_retain(uVar3);
  puStack_98 = puVar1;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_105224674;
  puStack_80 = &UNK_110870d10;
  uStack_78 = uVar3;
  uStack_70 = param_3;
  uStack_48 = uVar3;
  _objc_retain(param_3);
  _objc_retain(uVar3);
  func_0x00010c000d40(puVar2,param_2,&puStack_68,&puStack_98);
  _objc_release(uStack_70);
  _objc_release(uStack_78);
  _objc_release(uStack_48);
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105224634; end: 105224673;  */

uint FUN_105224634(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfdbac0();
  _objc_release(uVar1);
  return (uint)uVar2 ^ 1;
}



/* Entry: 105224674; end: 1052248a3;  */

void FUN_105224674(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar9 = param_2;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126aed70;
  uVar8 = param_2;
  _objc_retain(param_2);
  func_0x0001090250c0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar11);
  _objc_retain(param_3);
  func_0x00010beff4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  puVar2 = PTR_PTR_1126aed78;
  _objc_alloc(PTR_PTR_1126aed78);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar3 = puVar2;
  func_0x000109025288();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = puVar4;
  func_0x0001090252a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c052ec0(puVar2);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  func_0x00010c211b40(puVar2);
  func_0x00010bf0c980(param_2);
  _objc_release(param_2);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(uVar11);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf84b00(uVar9);
  uVar8 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a6c00();
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001052248fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x28) + 0x10))(*(long *)(param_3 + 0x28),1);
  return;
}



/* Entry: 1052248a4; end: 1052248ff;  */

void FUN_1052248a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf84b00(param_2,param_2,1,0);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a6c00();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001052248fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),1);
  return;
}



/* Entry: 105224900; end: 10522492f; -[SCSpectaclesContentPageInterceptorsProvider reconnectWiFiInterceptor] */

void FUN_105224900(void)

{
  _objc_alloc(PTR_PTR_1126b6658);
  func_0x00010c000d40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105224930; end: 105224937;  */

undefined8 FUN_105224930(void)

{
  return 1;
}


