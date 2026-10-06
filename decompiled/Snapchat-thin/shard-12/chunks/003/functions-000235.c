/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1090092f8; end: 10900940f; -[SCNetworkImageView _setSuccessImageWithNetworkImage:image:imageSetCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1090092f8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 != 0) {
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11277f8d0));
    uVar1 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277f8e8);
    *(undefined8 *)(param_1 + _DAT_11277f8e8) = uVar1;
    _objc_release(uVar2);
  }
  if (param_5 != 0) {
    (**(code **)(param_5 + 0x10))(param_5,param_4);
  }
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f8f4);
  *(undefined8 *)(param_1 + _DAT_11277f8f4) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f8f0);
  *(undefined8 *)(param_1 + _DAT_11277f8f0) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f8ec);
  *(undefined8 *)(param_1 + _DAT_11277f8ec) = 0;
  _objc_release(uVar1);
  lVar3 = (long)_DAT_11277f8e4;
  _os_unfair_lock_lock(param_1 + lVar3);
  *(undefined1 *)(param_1 + _DAT_11277f8e0) = 1;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f910);
  *(undefined8 *)(param_1 + _DAT_11277f910) = 0;
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + lVar3);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109009410; end: 109009477; -[SCNetworkImageView _setLoadingImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109009410(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11277f8d0),param_2,
                      *(undefined8 *)(param_1 + _DAT_11277f8d8));
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f8e8);
  *(undefined8 *)(param_1 + _DAT_11277f8e8) = 0;
  _objc_release(uVar1);
  lVar2 = (long)_DAT_11277f8e4;
  _os_unfair_lock_lock(param_1 + lVar2);
  *(undefined1 *)(param_1 + _DAT_11277f8e0) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + lVar2);
  return;
}



/* Entry: 109009478; end: 1090095d3; -[SCNetworkImageView _syncDisplayedImageIfNecessaryWithImageSetCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109009478(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + _DAT_11277f900) != 0) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11277f8e8);
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + _DAT_11277f8d0);
    func_0x00010bfe6ac0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bea5580(param_1);
    _objc_initWeak(auStack_48,param_1);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(uVar1);
    _objc_retain(uVar2);
    _objc_retain(param_3);
    func_0x00010bea6360(param_1);
    _objc_release(param_3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1090095d4; end: 10900960b;  */

void FUN_1090095d4(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea82e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10900960c; end: 10900966f; -[SCNetworkImageView _setPendingImageIfPossibleWithPendingImageBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10900960c(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277f900;
  if (*(long *)(param_1 + lVar2) != 0) {
    _objc_retainBlock();
    uVar1 = *(undefined8 *)(param_1 + _DAT_11277f8fc);
    *(long *)(param_1 + _DAT_11277f8fc) = param_3;
    _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c27c2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + lVar2),PTR_s_triggerSync_11267cad0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010900966c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 109009670; end: 109009897; -[SCNetworkImageView _applyAndRescaleImageIfNecessary:image:completion:imageSetCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109009670(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11277f8dc);
  func_0x00010c13a220();
  if (iVar1 == 0) {
    puVar2 = auStack_98;
    _objc_copyWeak(puVar2,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_6);
    func_0x00010bea6360(param_1);
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,param_3,0);
    }
    _objc_release(param_6);
    _objc_release(param_4);
    uVar3 = param_3;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + _DAT_11277f8d4);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_109009898;
    puStack_78 = &UNK_110861a58;
    puVar2 = auStack_50;
    _objc_copyWeak(puVar2,auStack_48);
    _objc_retain(param_4);
    uStack_70 = param_4;
    _objc_retain(param_3);
    uStack_68 = param_3;
    _objc_retain(param_6);
    uStack_60 = param_6;
    _objc_retain(param_5);
    lStack_58 = param_5;
    func_0x00010c0f7fc0(uVar3);
    _objc_release(lStack_58);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
    uVar3 = uStack_70;
  }
  _objc_release(uVar3);
  _objc_destroyWeak(puVar2);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 109009898; end: 1090099b7;  */

void FUN_109009898(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be91fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1090099b8;
  puStack_60 = &UNK_110861a58;
  _objc_copyWeak(auStack_38,param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uStack_58 = uVar3;
  _objc_retain(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  lStack_50 = lVar2;
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  uStack_48 = uVar4;
  _objc_retain(uVar3);
  uStack_40 = uVar3;
  func_0x000107c312cc("APPSTORE",&puStack_78);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(lStack_50);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_38);
  _objc_release(lVar2);
  return;
}



/* Entry: 1090099b8; end: 109009abf;  */

void FUN_1090099b8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [8];
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  _objc_copyWeak(auStack_38,param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar4);
  func_0x00010bea6360(lVar1);
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20),0);
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 109009ac0; end: 109009b2f;  */

void FUN_109009ac0(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea82e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109009b30; end: 109009b3f; -[SCNetworkImageView _rescaleImageIfNeededWithImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109009b30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c13a250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277f8dc),PTR_s_resizeImageIfNeededWithImage__11262c2b0
            );
  return;
}



/* Entry: 109009b40; end: 109009c13; -[SCNetworkImageView didTriggerEventWithEventName:announcerIdentifier:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109009b40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f17078);
  if ((int)uVar1 == 0) {
    func_0x00010bf7dbc0(*(undefined8 *)(param_1 + _DAT_11277f8cc),param_2,param_3,param_4,param_5);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11277f900);
    *(undefined8 *)(param_1 + _DAT_11277f900) = 0;
    _objc_release(uVar1);
    lVar2 = (long)_DAT_11277f8fc;
    if (*(long *)(param_1 + lVar2) != 0) {
      (**(code **)(*(long *)(param_1 + lVar2) + 0x10))();
      uVar1 = *(undefined8 *)(param_1 + lVar2);
      *(undefined8 *)(param_1 + lVar2) = 0;
      _objc_release(uVar1);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 109009c14; end: 109009c9b; -[SCNetworkImageView _announceDownloadEvent:extraData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109009c14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f8cc);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(param_1);
  func_0x00010bf04780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7dbc0(uVar1,param_2,param_3,param_1,param_4);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109009c9c; end: 109009dd7; -[SCNetworkImageView processJobWithJobConfig:input:context:onComplete:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_109009c9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f8d4);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return 0;
}



/* Entry: 109009dd8; end: 109009e0b;  */

void FUN_109009dd8(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2f5a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 109009e0c; end: 109009f97; -[SCNetworkImageView _handleRetryFlow:jobCompletionCallback:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_109009e0c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_58,param_1);
  lVar2 = (long)_DAT_11277f8e4;
  _os_unfair_lock_lock(param_1 + lVar2);
  if (*(char *)(param_1 + _DAT_11277f8e0) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + _DAT_11277f910);
    *(undefined8 *)(param_1 + _DAT_11277f910) = 0;
    _objc_release(uVar1);
    _os_unfair_lock_unlock(param_1 + lVar2);
    (**(code **)(param_4 + 0x10))(param_4,2,0);
  }
  else {
    _os_unfair_lock_unlock(param_1 + lVar2);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(param_4);
    func_0x00010be4e160(param_1);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_60);
  }
  _objc_destroyWeak(auStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 109009f98; end: 10900a003;  */

void FUN_109009f98(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be2aaa0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10900a004; end: 10900a12f; -[SCNetworkImageView _handleImageReloadFinishedWithNetworkImage:jobCompletionCb:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10900a004(long param_1,undefined8 param_2,ulong param_3,long param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar5 = *(ulong *)(param_1 + _DAT_11277f8f8);
  _objc_retain(uVar5);
  _objc_retain(param_3);
  if (uVar5 == param_3) {
    _objc_release(param_3);
    _objc_release(uVar5);
LAB_10900a0a0:
    lVar2 = *(long *)(param_1 + _DAT_11277f8f0);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,param_3,param_5);
    }
    pcVar4 = *(code **)(param_4 + 0x10);
    if (param_5 != 0) {
      (*pcVar4)(param_4,1,param_5);
      goto LAB_10900a108;
    }
    uVar3 = 0;
  }
  else {
    if (param_3 == 0) {
      _objc_release(uVar5);
    }
    else {
      uVar1 = uVar5;
      func_0x00010c071ae0();
      _objc_release(param_3);
      _objc_release(uVar5);
      if ((uVar1 & 1) != 0) goto LAB_10900a0a0;
    }
    pcVar4 = *(code **)(param_4 + 0x10);
    uVar3 = 2;
  }
  (*pcVar4)(param_4,uVar3,0);
  func_0x00010bddf220(param_1);
LAB_10900a108:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10900a130; end: 10900a17b; -[SCNetworkImageView _cleanUpRetryFlowIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10900a130(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277f8e4;
  _os_unfair_lock_lock(param_1 + lVar2);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277f910);
  *(undefined8 *)(param_1 + _DAT_11277f910) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + lVar2);
  return;
}



/* Entry: 10900a17c; end: 10900a31f; -[SCNetworkImageView _submitRetryFlowIfNecessary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10900a17c(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11277f8f8);
  FUN_109006e4c();
  if (iVar1 != 0) {
    lVar7 = (long)_DAT_11277f8e4;
    _os_unfair_lock_lock(param_1 + lVar7);
    lVar8 = (long)_DAT_11277f910;
    lVar6 = *(long *)(param_1 + lVar8);
    lVar2 = param_1 + lVar7;
    _os_unfair_lock_unlock();
    if (lVar6 == 0) {
      func_0x000107c3121c();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126b77c0);
      lVar6 = lVar2;
      func_0x00010beecc40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = lVar6;
      func_0x00010bfe63a0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar2);
      if (lVar3 != 0) {
        lVar2 = lVar6;
        func_0x00010bfe63a0();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = 3;
        func_0x00010aee31d0(3,3,1,2);
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar3;
        func_0x00010c25f1e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        _objc_release(lVar3);
        _objc_release(lVar2);
        _os_unfair_lock_lock(param_1 + lVar7);
        uVar4 = *(undefined8 *)(param_1 + lVar8);
        *(long *)(param_1 + lVar8) = lVar5;
        _objc_release(uVar4);
        _os_unfair_lock_unlock(param_1 + lVar7);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar6);
      return;
    }
  }
  return;
}



/* Entry: 10900a320; end: 10900a327;  */

void FUN_10900a320(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfeb250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_inAppSessionJobScheduler_1125d8658);
  return;
}



/* Entry: 10900a328; end: 10900a3db; -[SCNetworkImageView _logLoadingStatus] */

void FUN_10900a328(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126dce50;
  func_0x00010bfe8160(PTR_PTR_1126dce50);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2ac460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  func_0x00010b256a70();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0d82e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfec2a0();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10900a3dc; end: 10900a4cb; -[SCNetworkImageView prepareForShadow] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10900a3dc(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar1 = param_2;
  func_0x00010bf13d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_DAT_11277f8d0;
  func_0x00010c16e440(*(undefined8 *)(param_2 + lVar4),param_3,lVar1);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08c0e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf525a0();
  uVar2 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1842e0(param_1);
  _objc_release(uVar2);
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010c08c0e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_2,param_3,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 10900a4cc; end: 10900a4db; -[SCNetworkImageView truncateYaxisFromBottom] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10900a4cc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11277f8c8);
}



/* Entry: 10900a4dc; end: 10900a4eb; -[SCNetworkImageView loadingImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10900a4dc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f8d8);
}



/* Entry: 10900a4ec; end: 10900a52b; -[SCNetworkImageView setLoadingImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10900a4ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277f8d8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10900a52c; end: 10900a53b; -[SCNetworkImageView imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10900a52c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f904);
}



/* Entry: 10900a53c; end: 10900a57b; -[SCNetworkImageView setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10900a53c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277f904;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10900a57c; end: 10900a58b; -[SCNetworkImageView networkImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10900a57c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f8f8);
}



/* Entry: 10900a58c; end: 10900a59b; -[SCNetworkImageView imageSynchronizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10900a58c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f900);
}



/* Entry: 10900a59c; end: 10900a6ab; -[SCNetworkImageView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10900a59c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277f900,0);
  _objc_storeStrong(param_1 + _DAT_11277f8f8,0);
  _objc_storeStrong(param_1 + _DAT_11277f8d8,0);
  _objc_storeStrong(param_1 + _DAT_11277f8ec,0);
  _objc_storeStrong(param_1 + _DAT_11277f8f0,0);
  _objc_storeStrong(param_1 + _DAT_11277f8f4,0);
  _objc_storeStrong(param_1 + _DAT_11277f910,0);
  _objc_storeStrong(param_1 + _DAT_11277f8dc,0);
  _objc_storeStrong(param_1 + _DAT_11277f8d4,0);
  _objc_storeStrong(param_1 + _DAT_11277f8fc,0);
  _objc_storeStrong(param_1 + _DAT_11277f8cc,0);
  _objc_storeStrong(param_1 + _DAT_11277f8d0,0);
  _objc_storeStrong(param_1 + _DAT_11277f8e8,0);
  _objc_storeStrong(param_1 + _DAT_11277f90c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277f904,0);
  return;
}



/* Entry: 10900a6ac; end: 10900a7a3; +[SCNetworkImage bitmojiAvatarWithTemplateId:avatarId:friendAvatarId:downloadInfo:] */

void FUN_10900a6ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b4860;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x58);
  *(undefined8 *)(puVar2 + 0x58) = param_6;
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10900a7a4; end: 10900a89b; +[SCNetworkImage bitmojiSelfieWithUserId:avatarId:selfieId:downloadInfo:] */

void FUN_10900a7a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126b4860;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_6;
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10900a89c; end: 10900a907; +[SCNetworkImage imageWithImage:] */

void FUN_10900a89c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b4860;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x60);
  *(undefined8 *)(puVar2 + 0x60) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10900a908; end: 10900a973; +[SCNetworkImage plainURLWithUrl:mediaContextType:] */

void FUN_10900a908(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b4860;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10900a974; end: 10900a9df; +[SCNetworkImage storiesThumbnailWithStoriesThumbnailInfo:] */

void FUN_10900a974(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b4860;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x68);
  *(undefined8 *)(puVar2 + 0x68) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10900a9e0; end: 10900ad5f; -[SCNetworkImage initWithCoder:] */

undefined8 * FUN_10900a9e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_x21;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_50 = PTR_PTR_1126ffd38;
  puVar1 = &uStack_58;
  uStack_58 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x21 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = unaff_x21;
    func_0x00010c0720c0();
    if ((int)uVar4 == 0) {
      uVar4 = unaff_x21;
      func_0x00010c0720c0();
      if ((int)uVar4 == 0) {
        uVar4 = unaff_x21;
        func_0x00010c0720c0();
        if ((int)uVar4 == 0) {
          uVar4 = unaff_x21;
          func_0x00010c0720c0();
          if ((int)uVar4 == 0) {
            uVar4 = unaff_x21;
            func_0x00010c0720c0();
            if ((int)uVar4 == 0) goto LAB_10900acec;
            uVar4 = param_3;
            func_0x00010bf67000();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = puVar1[0xd];
            puVar1[0xd] = uVar4;
            _objc_release(uVar3);
            uVar4 = 4;
          }
          else {
            uVar4 = param_3;
            func_0x00010bf67000();
            _objc_retainAutoreleasedReturnValue();
            uVar3 = puVar1[0xc];
            puVar1[0xc] = uVar4;
            _objc_release(uVar3);
            uVar4 = 3;
          }
        }
        else {
          uVar4 = param_3;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = puVar1[8];
          puVar1[8] = uVar4;
          _objc_release(uVar3);
          uVar4 = param_3;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = puVar1[9];
          puVar1[9] = uVar4;
          _objc_release(uVar3);
          uVar4 = param_3;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = puVar1[10];
          puVar1[10] = uVar4;
          _objc_release(uVar3);
          uVar4 = param_3;
          func_0x00010bf67000();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = puVar1[0xb];
          puVar1[0xb] = uVar4;
          _objc_release(uVar3);
          uVar4 = 2;
        }
      }
      else {
        uVar4 = param_3;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = puVar1[4];
        puVar1[4] = uVar4;
        _objc_release(uVar3);
        uVar4 = param_3;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = puVar1[5];
        puVar1[5] = uVar4;
        _objc_release(uVar3);
        uVar4 = param_3;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = puVar1[6];
        puVar1[6] = uVar4;
        _objc_release(uVar3);
        uVar4 = param_3;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = puVar1[7];
        puVar1[7] = uVar4;
        _objc_release(uVar3);
        uVar4 = 1;
      }
    }
    else {
      uVar4 = param_3;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = puVar1[2];
      puVar1[2] = uVar4;
      _objc_release(uVar3);
      uVar3 = param_3;
      func_0x00010bf66f40();
      uVar4 = 0;
      puVar1[3] = uVar3;
    }
    puVar1[1] = uVar4;
    _objc_release(unaff_x21);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_10900acec:
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSException_1126af520;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110db7158;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_40 = unaff_x21;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar2);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 10900ad60; end: 10900ad83; -[SCNetworkImage copyWithZone:] */

undefined8 FUN_10900ad60(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10900ad84; end: 10900af17; -[SCNetworkImage encodeWithCoder:] */

void FUN_10900ad84(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                          &PTR____CFConstantStringClassReference_110e89218);
      func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                          &PTR____CFConstantStringClassReference_110f17158);
      ppuVar1 = &PTR____CFConstantStringClassReference_110e891f8;
    }
    else {
      if (lVar2 != 1) goto LAB_10900af08;
      func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                          &PTR____CFConstantStringClassReference_110f17198);
      func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                          &PTR____CFConstantStringClassReference_110f171b8);
      func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                          &PTR____CFConstantStringClassReference_110f171d8);
      func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                          &PTR____CFConstantStringClassReference_110f171f8);
      ppuVar1 = &PTR____CFConstantStringClassReference_110f17178;
    }
  }
  else if (lVar2 == 2) {
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                        &PTR____CFConstantStringClassReference_110e89258);
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                        &PTR____CFConstantStringClassReference_110e89278);
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                        &PTR____CFConstantStringClassReference_110e89298);
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x58),
                        &PTR____CFConstantStringClassReference_110f17218);
    ppuVar1 = &PTR____CFConstantStringClassReference_110e89238;
  }
  else if (lVar2 == 3) {
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                        &PTR____CFConstantStringClassReference_110e892b8);
    ppuVar1 = &PTR____CFConstantStringClassReference_110dc6f98;
  }
  else {
    if (lVar2 != 4) goto LAB_10900af08;
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x68),
                        &PTR____CFConstantStringClassReference_110f17258);
    ppuVar1 = &PTR____CFConstantStringClassReference_110f17238;
  }
  func_0x00010c14cb00(param_3,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110db7018);
LAB_10900af08:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10900af18; end: 10900b007; -[SCNetworkImage hash] */

void FUN_10900af18(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
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
  long lStack_28;
  
  puVar4 = &uStack_90;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_90 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar1 = *(long *)(param_1 + 0x18);
  uStack_78 = *(undefined8 *)(param_1 + 0x20);
  lStack_80 = -lVar1;
  if (-1 < lVar1) {
    lStack_80 = lVar1;
  }
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_68 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_58 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_48 = uVar3;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uStack_38 = uVar3;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_90,0xd);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_b8 = PTR_PTR_1126ffd38;
  puStack_c0 = (undefined1 *)puVar4;
  _objc_msgSendSuper2(&puStack_c0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10900b008; end: 10900b04b; -[SCNetworkImage internalInit] */

void FUN_10900b008(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ffd38;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10900b04c; end: 10900b1eb; -[SCNetworkImage isEqual:] */

long FUN_10900b04c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10900b1c4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10900b1d0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x40);
                if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x48);
                  if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x50);
                    if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x58);
                      if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x60);
                        if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                           (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x68);
                          if (lVar3 != *(long *)(param_3 + 0x68)) {
                            func_0x00010c071ae0();
                            goto LAB_10900b1d0;
                          }
                          goto LAB_10900b1c4;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10900b1d0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10900b1ec; end: 10900b31b; -[SCNetworkImage matchPlainURL:bitmojiSelfie:bitmojiAvatar:image:storiesThumbnail:] */

void FUN_10900b1ec(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar5 = *(long *)(param_1 + 8);
  if (lVar5 < 2) {
    if (lVar5 == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))
                  (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
      }
      goto LAB_10900b2e4;
    }
    if ((lVar5 != 1) || (param_4 == 0)) goto LAB_10900b2e4;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    pcVar6 = *(code **)(param_4 + 0x10);
    lVar5 = param_4;
  }
  else {
    if (lVar5 != 2) {
      if (lVar5 == 3) {
        if (param_6 == 0) goto LAB_10900b2e4;
        uVar1 = *(undefined8 *)(param_1 + 0x60);
        pcVar6 = *(code **)(param_6 + 0x10);
        lVar5 = param_6;
      }
      else {
        if ((lVar5 != 4) || (param_7 == 0)) goto LAB_10900b2e4;
        uVar1 = *(undefined8 *)(param_1 + 0x68);
        pcVar6 = *(code **)(param_7 + 0x10);
        lVar5 = param_7;
      }
      (*pcVar6)(lVar5,uVar1);
      goto LAB_10900b2e4;
    }
    if (param_5 == 0) goto LAB_10900b2e4;
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    uVar4 = *(undefined8 *)(param_1 + 0x58);
    pcVar6 = *(code **)(param_5 + 0x10);
    lVar5 = param_5;
  }
  (*pcVar6)(lVar5,uVar1,uVar2,uVar3,uVar4);
LAB_10900b2e4:
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10900b31c; end: 10900b3b7; -[SCNetworkImage .cxx_destruct] */

void FUN_10900b31c(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10900b3b8; end: 10900b47b; +[SCNetworkImageDownloadInfo bitmojiInfoWithContexts:feature:scale:imageType:canUsePrior:renderStyle:] */

void FUN_10900b3b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_8);
  puVar1 = PTR_PTR_1126b4858;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  *(undefined4 *)(puVar2 + 0x28) = param_4;
  *(undefined8 *)(puVar2 + 0x30) = param_5;
  *(undefined8 *)(puVar2 + 0x38) = param_6;
  puVar2[0x40] = param_7;
  uVar3 = *(undefined8 *)(puVar2 + 0x48);
  *(undefined8 *)(puVar2 + 0x48) = param_8;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10900b47c; end: 10900b54b; +[SCNetworkImageDownloadInfo bitmojiSelfieInfoWithContexts:feature:type:scale:canUsePrior:selfieIdModifier:renderStyle:] */

void FUN_10900b47c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_9);
  puVar1 = PTR_PTR_1126b4858;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  *(undefined4 *)(puVar2 + 0x58) = param_4;
  *(undefined8 *)(puVar2 + 0x60) = param_5;
  *(undefined8 *)(puVar2 + 0x68) = param_6;
  puVar2[0x70] = param_7;
  uVar3 = *(undefined8 *)(puVar2 + 0x80);
  *(undefined8 *)(puVar2 + 0x78) = param_8;
  *(undefined8 *)(puVar2 + 0x80) = param_9;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10900b54c; end: 10900b5b7; +[SCNetworkImageDownloadInfo mediaInfoWithContexts:mediaContextType:] */

void FUN_10900b54c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b4858;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10900b5b8; end: 10900b8c3; -[SCNetworkImageDownloadInfo initWithCoder:] */

undefined8 * FUN_10900b5b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_x21;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_50 = PTR_PTR_1126ffd40;
  puVar1 = &uStack_58;
  uStack_58 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x21 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = unaff_x21;
    func_0x00010c0720c0();
    if ((int)uVar4 == 0) {
      uVar4 = unaff_x21;
      func_0x00010c0720c0();
      if ((int)uVar4 == 0) {
        uVar4 = unaff_x21;
        func_0x00010c0720c0();
        if ((int)uVar4 == 0) goto LAB_10900b850;
        uVar4 = param_3;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = puVar1[10];
        puVar1[10] = uVar4;
        _objc_release(uVar3);
        uVar4 = param_3;
        func_0x00010bf66ee0();
        *(int *)(puVar1 + 0xb) = (int)uVar4;
        uVar4 = param_3;
        func_0x00010bf66f40();
        puVar1[0xc] = uVar4;
        uVar4 = param_3;
        func_0x00010bf66f40();
        puVar1[0xd] = uVar4;
        uVar4 = param_3;
        func_0x00010bf66ce0();
        *(char *)(puVar1 + 0xe) = (char)uVar4;
        uVar4 = param_3;
        func_0x00010bf66f40();
        puVar1[0xf] = uVar4;
        uVar4 = param_3;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = puVar1[0x10];
        puVar1[0x10] = uVar4;
        _objc_release(uVar3);
        uVar4 = 2;
      }
      else {
        uVar4 = param_3;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = puVar1[4];
        puVar1[4] = uVar4;
        _objc_release(uVar3);
        uVar4 = param_3;
        func_0x00010bf66ee0();
        *(int *)(puVar1 + 5) = (int)uVar4;
        uVar4 = param_3;
        func_0x00010bf66f40();
        puVar1[6] = uVar4;
        uVar4 = param_3;
        func_0x00010bf66f40();
        puVar1[7] = uVar4;
        uVar4 = param_3;
        func_0x00010bf66ce0();
        *(char *)(puVar1 + 8) = (char)uVar4;
        uVar4 = param_3;
        func_0x00010bf67000();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = puVar1[9];
        puVar1[9] = uVar4;
        _objc_release(uVar3);
        uVar4 = 1;
      }
    }
    else {
      uVar4 = param_3;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = puVar1[2];
      puVar1[2] = uVar4;
      _objc_release(uVar3);
      uVar3 = param_3;
      func_0x00010bf66f40();
      uVar4 = 0;
      puVar1[3] = uVar3;
    }
    puVar1[1] = uVar4;
    _objc_release(unaff_x21);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_10900b850:
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSException_1126af520;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110db7158;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_40 = unaff_x21;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar2);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 10900b8c4; end: 10900b8e7; -[SCNetworkImageDownloadInfo copyWithZone:] */

undefined8 FUN_10900b8c4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10900b8e8; end: 10900ba87; -[SCNetworkImageDownloadInfo encodeWithCoder:] */

void FUN_10900b8e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 2) {
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x50),
                        &PTR____CFConstantStringClassReference_110f173d8);
    func_0x00010bf92f80(param_3,param_2,*(undefined4 *)(param_1 + 0x58),
                        &PTR____CFConstantStringClassReference_110f173f8);
    func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x60),
                        &PTR____CFConstantStringClassReference_110f17418);
    func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x68),
                        &PTR____CFConstantStringClassReference_110f17438);
    func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x70),
                        &PTR____CFConstantStringClassReference_110f17458);
    func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x78),
                        &PTR____CFConstantStringClassReference_110f17478);
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x80),
                        &PTR____CFConstantStringClassReference_110f17498);
    ppuVar1 = &PTR____CFConstantStringClassReference_110f173b8;
  }
  else if (lVar2 == 1) {
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                        &PTR____CFConstantStringClassReference_110f172f8);
    func_0x00010bf92f80(param_3,param_2,*(undefined4 *)(param_1 + 0x28),
                        &PTR____CFConstantStringClassReference_110f17318);
    func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                        &PTR____CFConstantStringClassReference_110f17338);
    func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                        &PTR____CFConstantStringClassReference_110f17358);
    func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0x40),
                        &PTR____CFConstantStringClassReference_110f17378);
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x48),
                        &PTR____CFConstantStringClassReference_110f17398);
    ppuVar1 = &PTR____CFConstantStringClassReference_110f172d8;
  }
  else {
    if (lVar2 != 0) goto LAB_10900ba78;
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                        &PTR____CFConstantStringClassReference_110f17298);
    func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                        &PTR____CFConstantStringClassReference_110f172b8);
    ppuVar1 = &PTR____CFConstantStringClassReference_110f17278;
  }
  func_0x00010c14cb00(param_3,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110db7018);
LAB_10900ba78:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10900ba88; end: 10900bb57; -[SCNetworkImageDownloadInfo hash] */

void FUN_10900ba88(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a8 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  lVar1 = *(long *)(param_1 + 0x18);
  uStack_90 = *(undefined8 *)(param_1 + 0x20);
  lStack_98 = -lVar1;
  if (-1 < lVar1) {
    lStack_98 = lVar1;
  }
  uStack_a0 = uVar2;
  func_0x00010bfde980();
  lStack_88 = (long)*(int *)(param_1 + 0x28);
  uStack_78 = *(undefined8 *)(param_1 + 0x38);
  uStack_80 = *(undefined8 *)(param_1 + 0x30);
  uStack_70 = (ulong)*(byte *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uStack_68 = uVar2;
  func_0x00010bfde980();
  lStack_58 = (long)*(int *)(param_1 + 0x58);
  uStack_48 = *(undefined8 *)(param_1 + 0x68);
  uStack_50 = *(undefined8 *)(param_1 + 0x60);
  uStack_40 = (ulong)*(byte *)(param_1 + 0x70);
  uStack_38 = *(undefined8 *)(param_1 + 0x78);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  uStack_60 = uVar3;
  func_0x00010bfde980();
  puVar4 = &uStack_a8;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar4,0x10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_d8 = PTR_PTR_1126ffd40;
  puStack_e0 = puVar4;
  _objc_msgSendSuper2(&puStack_e0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10900bb58; end: 10900bb9b; -[SCNetworkImageDownloadInfo internalInit] */

void FUN_10900bb58(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ffd40;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10900bb9c; end: 10900bd3b; -[SCNetworkImageDownloadInfo isEqual:] */

long FUN_10900bb9c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10900bd14:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10900bd20;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
            (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) &&
           (*(int *)(param_1 + 0x28) == *(int *)(param_3 + 0x28))) &&
          ((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
           (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))))))) &&
        (*(char *)(param_1 + 0x40) == *(char *)(param_3 + 0x40))) &&
       (((*(int *)(param_1 + 0x58) == *(int *)(param_3 + 0x58) &&
         (*(long *)(param_1 + 0x60) == *(long *)(param_3 + 0x60))) &&
        ((*(long *)(param_1 + 0x68) == *(long *)(param_3 + 0x68) &&
         ((*(char *)(param_1 + 0x70) == *(char *)(param_3 + 0x70) &&
          (*(long *)(param_1 + 0x78) == *(long *)(param_3 + 0x78))))))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x48);
          if ((lVar3 == *(long *)(param_3 + 0x48)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x50);
            if ((lVar3 == *(long *)(param_3 + 0x50)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x80);
              if (lVar3 != *(long *)(param_3 + 0x80)) {
                func_0x00010c071ae0();
                goto LAB_10900bd20;
              }
              goto LAB_10900bd14;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10900bd20:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10900bd3c; end: 10900be13; -[SCNetworkImageDownloadInfo matchMediaInfo:bitmojiInfo:bitmojiSelfieInfo:] */

void FUN_10900bd3c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))
                (param_5,*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58),
                 *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),
                 *(undefined1 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78),
                 *(undefined8 *)(param_1 + 0x80));
    }
  }
  else if (lVar1 == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28),
                 *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                 *(undefined1 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
    }
  }
  else if ((lVar1 == 0) && (param_3 != 0)) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10900be14; end: 10900be67; -[SCNetworkImageDownloadInfo .cxx_destruct] */

void FUN_10900be14(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10900be68; end: 10900be93; +[SCGrapheneNetworkimageviewMetric imageLoadingStatus] */

void FUN_10900be68(void)

{
  _objc_alloc(PTR_PTR_1126dce50);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10900be94; end: 10900bf33; -[SCGrapheneNetworkimageviewMetric description] */

void FUN_10900be94(undefined8 param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  ppuVar1 = &PTR____CFConstantStringClassReference_110f174b8;
  func_0x00010c25ce40(&PTR____CFConstantStringClassReference_110f174b8,param_2,
                      &PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_1126ffd48;
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



/* Entry: 10900bf34; end: 10900c077; -[SCGrapheneRegistry networkimageviewGraphene] */

void FUN_10900bf34(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x10900bfbc;
  puStack_30 = &UNK_110842e18;
  uStack_28 = param_1;
  if (lRam0000000113730678 != -1) {
    func_0x000107c27d9c(0x113730678,&puStack_48);
  }
  uVar1 = uRam0000000113730670;
  _objc_retain(uRam0000000113730670);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10900c078; end: 10900c09f;  */

undefined ** FUN_10900c078(long param_1)

{
  if (param_1 - 1U < 5) {
    return (undefined **)(&PTR_PTR_110ad3658)[param_1 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110dabe78;
}



/* Entry: 10900c0a0; end: 10900c0f7;  */

void FUN_10900c0a0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                      &PTR____CFConstantStringClassReference_110dae518);
  return;
}



/* Entry: 10900c0f8; end: 10900c397;  */

void FUN_10900c0f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf26940(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010c26e380(param_1);
  _objc_release(param_1);
  uVar3 = uVar1;
  FUN_10900c0a0(uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10900c398; end: 10900c5a3;  */

void FUN_10900c398(double param_1,double param_2,long param_3,ulong param_4,int param_5,long param_6
                  )

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  if (param_3 == 0) {
    uVar3 = 0;
    goto LAB_10900c584;
  }
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c23d0a0(param_3);
  if (param_6 == 5) {
LAB_10900c3f8:
    dVar5 = 160.0;
    dVar6 = 284.0;
  }
  else if (param_6 == 3) {
    dVar5 = param_1 * 0.2;
    dVar6 = param_2 * 0.2;
  }
  else {
    if (param_6 == 2) goto LAB_10900c3f8;
    dVar5 = 102.0;
    dVar6 = dVar5;
  }
  func_0x00010c23d0a0(param_3);
  func_0x00010c23d0a0(param_3);
  dVar7 = dVar6 / param_2;
  if (dVar6 / param_2 <= dVar5 / param_1) {
    dVar7 = dVar5 / param_1;
  }
  dVar4 = dVar7 * 1.4142135623730951;
  dVar8 = dVar4;
  if (param_5 == 0) {
    dVar8 = dVar7;
  }
  func_0x00010c23d0a0(param_3);
  dVar7 = dVar7 * dVar8;
  func_0x00010c23d0a0(param_3);
  dVar4 = dVar4 * dVar8;
  dVar8 = (dVar5 - dVar7) * 0.5;
  dVar9 = (dVar6 - dVar4) * 0.5;
  _UIGraphicsBeginImageContextWithOptions(dVar5,dVar6,0,1);
  func_0x00010bf89920(dVar8,dVar9,dVar7,dVar4,param_3);
  _objc_release(param_3);
  func_0x00010bf89920(dVar8,dVar9,dVar7,dVar4,param_4);
  _objc_release();
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
  uVar1 = param_4;
  _UIImageJPEGRepresentation(0x3fe3333333333333);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c08fa60();
  if ((param_6 == 1) && (0x4000 < uVar3)) {
    uVar2 = uVar1;
    func_0x00010c08fa60(uVar1);
    uVar3 = param_4;
    _UIImageJPEGRepresentation((16384.0 / (double)uVar2) * (16384.0 / (double)uVar2) * 0.6,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(uVar1);
    uVar3 = uVar1;
  }
  _objc_release(uVar1);
  _objc_release(param_4);
LAB_10900c584:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10900c5a4; end: 10900c6cb; -[SCNetworkImageStoriesBoltContentInfo initWithCoder:] */

undefined1 * FUN_10900c5a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ffd50;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10900c6cc; end: 10900c803; -[SCNetworkImageStoriesBoltContentInfo initWithLegacyZipped:media:overlay:thumbnail:firstFrame:] */

undefined1 *
FUN_10900c6cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126ffd50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10900c804; end: 10900c827; -[SCNetworkImageStoriesBoltContentInfo copyWithZone:] */

undefined8 FUN_10900c804(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10900c828; end: 10900c8c3; -[SCNetworkImageStoriesBoltContentInfo encodeWithCoder:] */

void FUN_10900c828(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f175f8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110eb6cd8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110df3378);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110ebd518);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f17618);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10900c8c4; end: 10900c95b; -[SCNetworkImageStoriesBoltContentInfo hash] */

undefined8 * FUN_10900c8c4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10900ca24:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10900ca30;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
              if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_10900ca30;
              }
              goto LAB_10900ca24;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10900ca30:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10900c95c; end: 10900ca4b; -[SCNetworkImageStoriesBoltContentInfo isEqual:] */

long FUN_10900c95c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10900ca24:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10900ca30;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if (lVar3 != *(long *)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_10900ca30;
              }
              goto LAB_10900ca24;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10900ca30:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10900ca4c; end: 10900ca53; -[SCNetworkImageStoriesBoltContentInfo legacyZipped] */

undefined8 FUN_10900ca4c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10900ca54; end: 10900ca5b; -[SCNetworkImageStoriesBoltContentInfo media] */

undefined8 FUN_10900ca54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10900ca5c; end: 10900ca63; -[SCNetworkImageStoriesBoltContentInfo overlay] */

undefined8 FUN_10900ca5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10900ca64; end: 10900ca6b; -[SCNetworkImageStoriesBoltContentInfo thumbnail] */

undefined8 FUN_10900ca64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10900ca6c; end: 10900ca73; -[SCNetworkImageStoriesBoltContentInfo firstFrame] */

undefined8 FUN_10900ca6c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10900ca74; end: 10900cac7; -[SCNetworkImageStoriesBoltContentInfo .cxx_destruct] */

void FUN_10900ca74(long param_1)

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



/* Entry: 10900cac8; end: 10900cc53; -[SCNetworkImageStoriesMediaInfo initWithCoder:] */

undefined1 * FUN_10900cac8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ffd58;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f00();
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 10) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10900cc54; end: 10900cdc7; -[SCNetworkImageStoriesMediaInfo initWithMediaId:appUrl:directToStorageUrl:mediaEncryptionInfo:type:storyType:isZipped:needsAuth:boltContentInfo:isEligibleForStreaming:] */

undefined8 *
FUN_10900cc54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined1 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126ffd58;
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    puVar1[6] = param_7;
    puVar1[7] = param_8;
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 9) = param_9._1_1_;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 10) = param_12;
  }
  _objc_release(param_11);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10900cdc8; end: 10900cdeb; -[SCNetworkImageStoriesMediaInfo copyWithZone:] */

undefined8 FUN_10900cdc8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10900cdec; end: 10900ceeb; -[SCNetworkImageStoriesMediaInfo encodeWithCoder:] */

void FUN_10900cdec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110ebbe58);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f17638);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f17658);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110f17678);
  func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x30),
                      &PTR____CFConstantStringClassReference_110e2dc78);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x38),
                      &PTR____CFConstantStringClassReference_110ea8958);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110f17698);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110f176b8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x40),
                      &PTR____CFConstantStringClassReference_110f176d8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 10),
                      &PTR____CFConstantStringClassReference_110f176f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10900ceec; end: 10900cfa3; -[SCNetworkImageStoriesMediaInfo hash] */

undefined8 * FUN_10900ceec(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x30);
  uStack_50 = *(undefined8 *)(param_1 + 0x38);
  lStack_58 = -lVar5;
  if (-1 < lVar5) {
    lStack_58 = lVar5;
  }
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uStack_40 = (ulong)*(byte *)(param_1 + 9);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 10);
  puVar3 = &uStack_78;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar3,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10900d0bc:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10900d0c8;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((((puVar3[6] == param_3[6] && (puVar3[7] == param_3[7])) &&
         (*(char *)(puVar3 + 1) == *(char *)(param_3 + 1))) &&
        ((*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9) &&
         (*(char *)((long)puVar3 + 10) == *(char *)((long)param_3 + 10))))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = (undefined8 *)puVar3[8];
              if (puVar6 != (undefined8 *)param_3[8]) {
                func_0x00010c071ae0();
                goto LAB_10900d0c8;
              }
              goto LAB_10900d0bc;
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10900d0c8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10900cfa4; end: 10900d0e3; -[SCNetworkImageStoriesMediaInfo isEqual:] */

long FUN_10900cfa4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10900d0bc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10900d0c8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
          (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) &&
         (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
        ((*(char *)(param_1 + 9) == *(char *)(param_3 + 9) &&
         (*(char *)(param_1 + 10) == *(char *)(param_3 + 10))))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x40);
              if (lVar3 != *(long *)(param_3 + 0x40)) {
                func_0x00010c071ae0();
                goto LAB_10900d0c8;
              }
              goto LAB_10900d0bc;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10900d0c8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10900d0e4; end: 10900d0eb; -[SCNetworkImageStoriesMediaInfo mediaId] */

undefined8 FUN_10900d0e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10900d0ec; end: 10900d0f3; -[SCNetworkImageStoriesMediaInfo appUrl] */

undefined8 FUN_10900d0ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10900d0f4; end: 10900d0fb; -[SCNetworkImageStoriesMediaInfo directToStorageUrl] */

undefined8 FUN_10900d0f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10900d0fc; end: 10900d103; -[SCNetworkImageStoriesMediaInfo mediaEncryptionInfo] */

undefined8 FUN_10900d0fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10900d104; end: 10900d10b; -[SCNetworkImageStoriesMediaInfo type] */

undefined8 FUN_10900d104(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10900d10c; end: 10900d113; -[SCNetworkImageStoriesMediaInfo storyType] */

undefined8 FUN_10900d10c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10900d114; end: 10900d11b; -[SCNetworkImageStoriesMediaInfo isZipped] */

undefined1 FUN_10900d114(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10900d11c; end: 10900d123; -[SCNetworkImageStoriesMediaInfo needsAuth] */

undefined1 FUN_10900d11c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10900d124; end: 10900d12b; -[SCNetworkImageStoriesMediaInfo boltContentInfo] */

undefined8 FUN_10900d124(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10900d12c; end: 10900d133; -[SCNetworkImageStoriesMediaInfo isEligibleForStreaming] */

undefined1 FUN_10900d12c(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 10900d134; end: 10900d187; -[SCNetworkImageStoriesMediaInfo .cxx_destruct] */

void FUN_10900d134(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10900d188; end: 10900d26f; -[SCNetworkImageStoriesThumbnailInfo initWithCacheKeyPrefix:thumbnailType:downloadInfo:snapMediaInfo:] */

undefined1 *
FUN_10900d188(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126ffd60;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10900d270; end: 10900d35b; -[SCNetworkImageStoriesThumbnailInfo initWithCoder:] */

undefined1 * FUN_10900d270(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ffd60;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10900d35c; end: 10900d37f; -[SCNetworkImageStoriesThumbnailInfo copyWithZone:] */

undefined8 FUN_10900d35c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10900d380; end: 10900d407; -[SCNetworkImageStoriesThumbnailInfo encodeWithCoder:] */

void FUN_10900d380(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f17718);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f17738);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f17758);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110f17778);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10900d408; end: 10900d48b; -[SCNetworkImageStoriesThumbnailInfo hash] */

undefined8 * FUN_10900d408(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_40 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar1;
  func_0x000107c3191c(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10900d534:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10900d540;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (puVar3[2] == param_3[2])) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = (undefined8 *)puVar3[4];
          if (puVar6 != (undefined8 *)param_3[4]) {
            func_0x00010c071ae0();
            goto LAB_10900d540;
          }
          goto LAB_10900d534;
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10900d540:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10900d48c; end: 10900d55b; -[SCNetworkImageStoriesThumbnailInfo isEqual:] */

long FUN_10900d48c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10900d534:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10900d540;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_10900d540;
          }
          goto LAB_10900d534;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10900d540:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10900d55c; end: 10900d563; -[SCNetworkImageStoriesThumbnailInfo cacheKeyPrefix] */

undefined8 FUN_10900d55c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10900d564; end: 10900d56b; -[SCNetworkImageStoriesThumbnailInfo thumbnailType] */

undefined8 FUN_10900d564(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10900d56c; end: 10900d573; -[SCNetworkImageStoriesThumbnailInfo downloadInfo] */

undefined8 FUN_10900d56c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10900d574; end: 10900d57b; -[SCNetworkImageStoriesThumbnailInfo snapMediaInfo] */

undefined8 FUN_10900d574(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


