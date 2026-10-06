/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10571fdc8; end: 10571feab; -[SCContactEventsLoggerServiceProvider provide] */

void FUN_10571fdc8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126bd790;
  _objc_alloc(PTR_PTR_1126bd790);
  func_0x00010c002400();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10571feac; end: 10571ff83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10571feac(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126bd788;
    _objc_alloc(PTR_PTR_1126bd788);
    lVar1 = param_1 + _DAT_1127287c0;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c293fc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_1127287c4;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c0fb000();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c05f400(puVar5,param_2,lVar2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10571ff84; end: 10571ffc7; -[SCContactEventsLoggerServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10571ff84(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127287c4);
  _objc_destroyWeak(param_1 + _DAT_1127287c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127287bc);
  return;
}



/* Entry: 10571ffc8; end: 10572006b; -[SCContactPermissionEventsLoggerImpl initWithUserTrackedLogger:phoneNumberProvider:] */

undefined1 *
FUN_10571ffc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e9f60;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10572006c; end: 1057200df; -[SCContactPermissionEventsLoggerImpl logContactPermissionDeny] */

void FUN_10572006c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126bd798;
  _objc_opt_new(PTR_PTR_1126bd798);
  lVar2 = param_1;
  func_0x00010be34aa0(param_1);
  lVar3 = param_1;
  func_0x00010be23c60(param_1,param_2,lVar2);
  func_0x00010c220cc0(puVar1,param_2,lVar3);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1057200e0; end: 105720153; -[SCContactPermissionEventsLoggerImpl logContactPermissionGrant] */

void FUN_1057200e0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126bd7a0;
  _objc_opt_new(PTR_PTR_1126bd7a0);
  lVar2 = param_1;
  func_0x00010be34aa0(param_1);
  lVar3 = param_1;
  func_0x00010be23c60(param_1,param_2,lVar2);
  func_0x00010c220cc0(puVar1,param_2,lVar3);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105720154; end: 1057201c7; -[SCContactPermissionEventsLoggerImpl logContactPermissionContinue] */

void FUN_105720154(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126bd7a8;
  _objc_opt_new(PTR_PTR_1126bd7a8);
  lVar2 = param_1;
  func_0x00010be34aa0(param_1);
  lVar3 = param_1;
  func_0x00010be23c60(param_1,param_2,lVar2);
  func_0x00010c220cc0(puVar1,param_2,lVar3);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1057201c8; end: 10572024b; -[SCContactPermissionEventsLoggerImpl logContactPermissionPromptResponseWithPermissionGranted:permissionPromptType:] */

void FUN_1057201c8(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b6df0;
  _objc_opt_new(PTR_PTR_1126b6df0);
  func_0x00010c1dab80();
  func_0x00010c1dab00(puVar1,param_2,param_3 & 0xffffffff);
  func_0x00010c160cc0(puVar1,param_2,param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10572024c; end: 105720253; -[SCContactPermissionEventsLoggerImpl _getVerificationType:] */

undefined4 FUN_10572024c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  return param_3;
}



/* Entry: 105720254; end: 1057202db; -[SCContactPermissionEventsLoggerImpl _hasVerifiedNumber] */

uint FUN_105720254(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0cf3c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar4,param_2,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (uint)puVar4 ^ 1;
}



/* Entry: 1057202dc; end: 10572030b; -[SCContactPermissionEventsLoggerImpl .cxx_destruct] */

void FUN_1057202dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10572030c; end: 1057203f3; -[SCFriendRequestsReportEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10572030c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126bd7b0;
  _objc_alloc();
  if (param_1 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1 + _DAT_1127287dc;
    _objc_loadWeakRetained(lVar5);
  }
  lVar2 = lVar5;
  func_0x00010bfcdfa0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_1127287d8;
    _objc_loadWeakRetained(lVar6);
  }
  lVar3 = lVar6;
  func_0x00010c244b40(lVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0187a0(puVar1,param_2,lVar2,lVar3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_1127287d0);
  *(undefined **)(param_1 + _DAT_1127287d0) = puVar1;
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release(lVar6);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 1057203f4; end: 105720447; -[SCFriendRequestsReportEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1057203f4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127287dc);
  _objc_destroyWeak(param_1 + _DAT_1127287d8);
  _objc_destroyWeak(param_1 + _DAT_1127287d4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127287d0,0);
  return;
}



/* Entry: 105720448; end: 105720577; -[SCFriendRequestsReporter initWithGrapheneRegistry:snapchattersDataTracker:] */

undefined1 *
FUN_105720448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e9f68;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105720578; end: 105720697; -[SCFriendRequestsReporter didStartSnapchattersUpdateDataRequest:] */

void FUN_105720578(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_105720698;
  puStack_58 = &UNK_1108ad4b0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c0bc6c0(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105720698; end: 10572075f;  */

void FUN_105720698(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    _CACurrentMediaTime();
    *(undefined8 *)(param_2 + 0x20) = param_1;
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_3);
  }
  _objc_release(param_2);
  _objc_release(param_3);
  return;
}



/* Entry: 105720760; end: 105720773;  */

void FUN_105720760(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8f9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__reportFriendRequestsSendWithSou_112581808,
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x28),0);
  return;
}



/* Entry: 105720774; end: 1057207f3;  */

void FUN_105720774(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  long lStack_30;
  undefined8 uStack_28;
  
  param_2 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (param_2 != 0) {
    _CACurrentMediaTime();
    *(undefined8 *)(param_2 + 0x20) = param_1;
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    pcStack_40 = FUN_1057207f4;
    puStack_38 = &UNK_110848c48;
    lStack_30 = param_2;
    uStack_28 = param_4;
    func_0x00010c0f7fc0(*(undefined8 *)(param_2 + 0x28),param_3,&puStack_50);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 1057207f4; end: 10572080b;  */

void FUN_1057207f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8f9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__reportFriendRequestsSendWithSou_112581808,0,
             *(undefined8 *)(param_1 + 0x28),0,1);
  return;
}



/* Entry: 10572080c; end: 105720953; -[SCFriendRequestsReporter didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_10572080c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_98 [8];
  undefined1 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105720954;
  puStack_70 = &UNK_1108ad540;
  _objc_copyWeak(auStack_68,auStack_58);
  uStack_60 = param_4;
  _objc_copyWeak(auStack_98,auStack_58);
  uStack_90 = param_4;
  func_0x00010c0bc6c0(param_3);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105720954; end: 105720a43;  */

void FUN_105720954(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    _CACurrentMediaTime();
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(param_2);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_2);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 105720a44; end: 105720a5f;  */

void FUN_105720a44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8f990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__reportFriendRequestsReponseWith_112581800,
             *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x40),0,
             *(undefined1 *)(param_1 + 0x48));
  return;
}



/* Entry: 105720a60; end: 105720b0b;  */

void FUN_105720a60(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  lVar1 = param_2 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    _CACurrentMediaTime();
    lStack_40 = (long)((param_1 - *(double *)(lVar1 + 0x20)) * 1000.0);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105720b0c;
    puStack_58 = &UNK_110875e90;
    uStack_38 = *(undefined1 *)(param_2 + 0x28);
    lStack_50 = lVar1;
    uStack_48 = param_4;
    func_0x00010c0f7fc0(*(undefined8 *)(lVar1 + 0x28),param_3,&puStack_70);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 105720b0c; end: 105720b2b;  */

void FUN_105720b0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be8f990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__reportFriendRequestsReponseWith_112581800,0,
             *(undefined8 *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x30),1,
             *(undefined1 *)(param_1 + 0x38));
  return;
}



/* Entry: 105720b2c; end: 105720c33; -[SCFriendRequestsReporter _reportFriendRequestsSendWithSource:placement:snapchatter:isMultiAdd:] */

void FUN_105720b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  func_0x00010be1f400(param_1,param_2,param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010be1cce0(param_1,param_2,param_3,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010901fab4(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b17f0;
  func_0x00010bfb8a00(PTR_PTR_1126b17f0);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010be603e0(param_1,param_2,puVar3,uVar1,uVar2,param_4,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  func_0x00010be89fc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(param_1);
  _objc_release(uVar4);
  _objc_release(param_4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105720c34; end: 105720df3; -[SCFriendRequestsReporter _reportFriendRequestsReponseWithSource:placement:snapchatter:latencyMs:isMultiAdd:success:] */

void FUN_105720c34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_1;
  func_0x00010be1f400(param_1,param_2,param_5,param_7);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010be1cce0(param_1,param_2,param_3,param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010901fab4(param_4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b17f0;
  ppuVar1 = &PTR____CFConstantStringClassReference_110db8118;
  if (param_8 == 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110db8138;
  }
  _objc_retain(ppuVar1);
  func_0x00010bfb89e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010be603e0(param_1,param_2,puVar4,uVar2,uVar3,param_4,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  uVar6 = param_1;
  func_0x00010be89fc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(uVar6);
  puVar4 = PTR_PTR_1126b17f0;
  func_0x00010bfb89c0(PTR_PTR_1126b17f0);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010be603e0(param_1,param_2,puVar4,uVar2,uVar3,param_4,ppuVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar1);
  _objc_release(puVar4);
  func_0x00010be89fc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbfe0();
  _objc_release(param_1);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(param_4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105720df4; end: 105720e5f; -[SCFriendRequestsReporter _registeredGraphene] */

void FUN_105720df4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 8);
  if (lVar4 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bfb94e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_release(uVar1);
    lVar4 = *(long *)(param_1 + 8);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105720e60; end: 105720f6b; -[SCFriendRequestsReporter _metricWithDimension:friendAction:addSource:placement:result:] */

void FUN_105720e60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  func_0x00010c2ac460(param_3,param_2,&PTR____CFConstantStringClassReference_110df9a58,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c2ac460(uVar1,param_2,&PTR____CFConstantStringClassReference_110df9a98,param_6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(uVar1);
  uVar1 = uVar2;
  if (param_7 != 0) {
    func_0x00010c2ac460(uVar2,param_2,&PTR____CFConstantStringClassReference_110dce878,param_7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105720f6c; end: 105720f9b; -[SCFriendRequestsReporter _getAddSourceDimensionWithSource:isMultiAdd:] */

void FUN_105720f6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  if ((param_4 & 1) == 0) {
    func_0x00010901fb98(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105720f9c; end: 105720ffb; -[SCFriendRequestsReporter _getFriendActionDimensionWithSnapchatter:isMultiAdd:] */

undefined ** FUN_105720f9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  
  _objc_retain(param_3);
  ppuVar2 = &PTR____CFConstantStringClassReference_110df9ad8;
  if ((param_4 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010901c6c4();
    ppuVar2 = &PTR____CFConstantStringClassReference_110dbea58;
    if ((int)uVar1 == 0) {
      ppuVar2 = &PTR____CFConstantStringClassReference_110df9ad8;
    }
  }
  _objc_release(param_3);
  return ppuVar2;
}



/* Entry: 105720ffc; end: 105721043; -[SCFriendRequestsReporter .cxx_destruct] */

void FUN_105720ffc(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105721044; end: 10572104b; -[SCFriendingPageViewRecord pageType] */

undefined8 FUN_105721044(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10572104c; end: 105721053; -[SCFriendingPageViewRecord setPageType:] */

void FUN_10572104c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 105721054; end: 10572105b; -[SCFriendingPageViewRecord sessionInitTime] */

undefined8 FUN_105721054(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10572105c; end: 105721063; -[SCFriendingPageViewRecord setSessionInitTime:] */

void FUN_10572105c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 105721064; end: 10572106b; -[SCFriendingPageViewRecord sessionStartTime] */

undefined8 FUN_105721064(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10572106c; end: 105721073; -[SCFriendingPageViewRecord setSessionStartTime:] */

void FUN_10572106c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 105721074; end: 10572107b; -[SCFriendingPageViewRecord sessionPauseTime] */

undefined8 FUN_105721074(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10572107c; end: 105721083; -[SCFriendingPageViewRecord setSessionPauseTime:] */

void FUN_10572107c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 105721084; end: 10572108b; -[SCFriendingPageViewRecord sessionDuration] */

undefined8 FUN_105721084(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10572108c; end: 105721093; -[SCFriendingPageViewRecord setSessionDuration:] */

void FUN_10572108c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x28) = param_1;
  return;
}



/* Entry: 105721094; end: 10572109b; -[SCFriendingPageViewRecord sessionTeminateTime] */

undefined8 FUN_105721094(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10572109c; end: 1057210a3; -[SCFriendingPageViewRecord setSessionTeminateTime:] */

void FUN_10572109c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x30) = param_1;
  return;
}



/* Entry: 1057210a4; end: 1057210ab; -[SCFriendingPageViewRecord firstItemLoadedTime] */

undefined8 FUN_1057210a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1057210ac; end: 1057210b3; -[SCFriendingPageViewRecord setFirstItemLoadedTime:] */

void FUN_1057210ac(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x38) = param_1;
  return;
}



/* Entry: 1057210b4; end: 1057210bb; -[SCFriendingPageViewRecord lastItemLoadedTime] */

undefined8 FUN_1057210b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1057210bc; end: 1057210c3; -[SCFriendingPageViewRecord setLastItemLoadedTime:] */

void FUN_1057210bc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x40) = param_1;
  return;
}



/* Entry: 1057210c4; end: 1057210cb; -[SCFriendingPageViewRecord entryType] */

undefined8 FUN_1057210c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1057210cc; end: 1057210d3; -[SCFriendingPageViewRecord setEntryType:] */

void FUN_1057210cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 1057210d4; end: 1057210db; -[SCFriendingPageViewRecord entryPoint] */

undefined8 FUN_1057210d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1057210dc; end: 1057210e3; -[SCFriendingPageViewRecord setEntryPoint:] */

void FUN_1057210dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 1057210e4; end: 1057210eb; -[SCFriendingPageViewRecord sourcePage] */

undefined8 FUN_1057210e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1057210ec; end: 10572111b; -[SCFriendingPageViewRecord setSourcePage:] */

void FUN_1057210ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10572111c; end: 105721123; -[SCFriendingPageViewRecord visitedSectionCount] */

undefined8 FUN_10572111c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 105721124; end: 105721153; -[SCFriendingPageViewRecord setVisitedSectionCount:] */

void FUN_105721124(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105721154; end: 10572115b; -[SCFriendingPageViewRecord visitedUnviewedSectionCount] */

undefined8 FUN_105721154(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 10572115c; end: 10572118b; -[SCFriendingPageViewRecord setVisitedUnviewedSectionCount:] */

void FUN_10572115c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10572118c; end: 105721193; -[SCFriendingPageViewRecord visitedSections] */

undefined8 FUN_10572118c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 105721194; end: 1057211c3; -[SCFriendingPageViewRecord setVisitedSections:] */

void FUN_105721194(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057211c4; end: 1057211cb; -[SCFriendingPageViewRecord seenPinnedAddedMeUserIds] */

undefined8 FUN_1057211c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1057211cc; end: 1057211fb; -[SCFriendingPageViewRecord setSeenPinnedAddedMeUserIds:] */

void FUN_1057211cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057211fc; end: 105721203; -[SCFriendingPageViewRecord smsClickCount] */

undefined8 FUN_1057211fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 105721204; end: 10572120b; -[SCFriendingPageViewRecord setSmsClickCount:] */

void FUN_105721204(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x80) = param_3;
  return;
}



/* Entry: 10572120c; end: 105721213; -[SCFriendingPageViewRecord emailClickCount] */

undefined8 FUN_10572120c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 105721214; end: 10572121b; -[SCFriendingPageViewRecord setEmailClickCount:] */

void FUN_105721214(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 10572121c; end: 105721223; -[SCFriendingPageViewRecord moreClickCount] */

undefined8 FUN_10572121c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 105721224; end: 10572122b; -[SCFriendingPageViewRecord setMoreClickCount:] */

void FUN_105721224(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x90) = param_3;
  return;
}



/* Entry: 10572122c; end: 105721233; -[SCFriendingPageViewRecord snapcodeClickCount] */

undefined8 FUN_10572122c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 105721234; end: 10572123b; -[SCFriendingPageViewRecord setSnapcodeClickCount:] */

void FUN_105721234(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x98) = param_3;
  return;
}



/* Entry: 10572123c; end: 105721243; -[SCFriendingPageViewRecord queryCount] */

undefined8 FUN_10572123c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 105721244; end: 10572124b; -[SCFriendingPageViewRecord setQueryCount:] */

void FUN_105721244(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  return;
}



/* Entry: 10572124c; end: 105721253; -[SCFriendingPageViewRecord pullToRefreshCount] */

undefined8 FUN_10572124c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 105721254; end: 10572125b; -[SCFriendingPageViewRecord setPullToRefreshCount:] */

void FUN_105721254(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xa8) = param_3;
  return;
}



/* Entry: 10572125c; end: 105721263; -[SCFriendingPageViewRecord viewMoreClickCount] */

undefined8 FUN_10572125c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 105721264; end: 10572126b; -[SCFriendingPageViewRecord setViewMoreClickCount:] */

void FUN_105721264(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  return;
}



/* Entry: 10572126c; end: 105721273; -[SCFriendingPageViewRecord snapButtonClickCount] */

undefined8 FUN_10572126c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 105721274; end: 10572127b; -[SCFriendingPageViewRecord setSnapButtonClickCount:] */

void FUN_105721274(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb8) = param_3;
  return;
}



/* Entry: 10572127c; end: 105721283; -[SCFriendingPageViewRecord chatButtonClickCount] */

undefined8 FUN_10572127c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 105721284; end: 10572128b; -[SCFriendingPageViewRecord setChatButtonClickCount:] */

void FUN_105721284(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xc0) = param_3;
  return;
}



/* Entry: 10572128c; end: 105721293; -[SCFriendingPageViewRecord pageSessionId] */

undefined8 FUN_10572128c(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 105721294; end: 1057212c3; -[SCFriendingPageViewRecord setPageSessionId:] */

void FUN_105721294(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 200);
  *(undefined8 *)(param_1 + 200) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057212c4; end: 1057212cb; -[SCFriendingPageViewRecord suggestionFetchRequestId] */

undefined8 FUN_1057212c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd0);
}



/* Entry: 1057212cc; end: 1057212fb; -[SCFriendingPageViewRecord setSuggestionFetchRequestId:] */

void FUN_1057212cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd0);
  *(undefined8 *)(param_1 + 0xd0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1057212fc; end: 105721303; -[SCFriendingPageViewRecord badgeID] */

undefined8 FUN_1057212fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 105721304; end: 105721333; -[SCFriendingPageViewRecord setBadgeID:] */

void FUN_105721304(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105721334; end: 10572133b; -[SCFriendingPageViewRecord badgingInfo] */

undefined8 FUN_105721334(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 10572133c; end: 10572136b; -[SCFriendingPageViewRecord setBadgingInfo:] */

void FUN_10572133c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10572136c; end: 105721373; -[SCFriendingPageViewRecord incomingFriendsCount] */

undefined8 FUN_10572136c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 105721374; end: 10572137b; -[SCFriendingPageViewRecord setIncomingFriendsCount:] */

void FUN_105721374(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xe8) = param_3;
  return;
}



/* Entry: 10572137c; end: 105721383; -[SCFriendingPageViewRecord suggestedFriendsCount] */

undefined8 FUN_10572137c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 105721384; end: 10572138b; -[SCFriendingPageViewRecord setSuggestedFriendsCount:] */

void FUN_105721384(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xf0) = param_3;
  return;
}



/* Entry: 10572138c; end: 10572140f; -[SCFriendingPageViewRecord .cxx_destruct] */

void FUN_10572138c(long param_1)

{
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x58,0);
  return;
}



/* Entry: 105721410; end: 10572157f; -[SCFriendingMetricsDefaultLogger initWithUserTrackedLogger:grapheneRegistry:preferences:badgeLogger:appStartExperimentReader:performer:] */

undefined1 *
FUN_105721410(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e9f70;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
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



/* Entry: 105721580; end: 105721783; -[SCFriendingMetricsDefaultLogger logViewPage:fromEntryType:sourcePage:pageSessionId:isFromAppForeground:] */

void FUN_105721580(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_6);
  _objc_retain(param_7);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_80,param_2);
  uStack_b0 = 0;
  uStack_a0 = 0x3032000000;
  pcStack_98 = FUN_105721784;
  uStack_90 = 0x105721794;
  uStack_88 = 0;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_100 = FUN_10572179c;
  puStack_f8 = &UNK_1108ad5a0;
  uStack_108 = 0xc2000000;
  puStack_a8 = &uStack_b0;
  _objc_copyWeak(auStack_d8,auStack_80);
  uStack_d0 = param_4;
  uStack_c8 = param_5;
  _objc_retain(param_6);
  uStack_f0 = param_6;
  uStack_c0 = param_1;
  _objc_retain(param_7);
  uStack_e8 = param_7;
  puStack_e0 = &uStack_b0;
  uStack_b8 = param_8;
  func_0x00010c0f7fc0(uVar1);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_118,auStack_80);
  func_0x00010bf152c0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_118);
  _objc_release(uStack_e8);
  _objc_release(uStack_f0);
  _objc_destroyWeak(auStack_d8);
  __Block_object_dispose(&uStack_b0,8);
  _objc_release(uStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_7);
  _objc_release(param_6);
  return;
}



/* Entry: 105721784; end: 10572179b;  */

void FUN_105721784(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10572179c; end: 1057218bb;  */

void FUN_10572179c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bdf0dc0(*(undefined8 *)(param_1 + 0x50),lVar1,param_2,
                        *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                        *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                        *(undefined1 *)(param_1 + 0x58));
    uVar4 = *(undefined8 *)(lVar1 + 0x30);
    lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
    _objc_retain(uVar4);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = uVar4;
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1057218bc; end: 105721907;  */

void FUN_1057218bc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  if (lVar1 != 0) {
    func_0x00010c16ec20(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bee5ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s__uploadViewPageRecord__112597158,
               *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
    return;
  }
  return;
}



/* Entry: 105721908; end: 1057219d3; -[SCFriendingMetricsDefaultLogger pausePage:] */

void FUN_105721908(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _CACurrentMediaTime();
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_4;
  uStack_50 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1057219d4; end: 105721a0b;  */

void FUN_1057219d4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be70dc0(*(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105721a0c; end: 105721ad7; -[SCFriendingMetricsDefaultLogger resumePage:] */

void FUN_105721a0c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _CACurrentMediaTime();
  _objc_initWeak(auStack_48,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  _objc_copyWeak(auStack_60,auStack_48);
  uStack_58 = param_4;
  uStack_50 = param_1;
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_48);
  return;
}


