/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10900d57c; end: 10900d5b7; -[SCNetworkImageStoriesThumbnailInfo .cxx_destruct] */

void FUN_10900d57c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10900d5b8; end: 10900d68f; -[SCNetworkImageStoriesThumbnailDownloadInfo initWithCoder:] */

undefined1 * FUN_10900d5b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ffd68;
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
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10900d690; end: 10900d767; -[SCNetworkImageStoriesThumbnailDownloadInfo initWithThumbnailURL:thumbnailEncryptionInfo:contentObjectInfo:] */

undefined1 *
FUN_10900d690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ffd68;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10900d768; end: 10900d78b; -[SCNetworkImageStoriesThumbnailDownloadInfo copyWithZone:] */

undefined8 FUN_10900d768(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10900d78c; end: 10900d7ff; -[SCNetworkImageStoriesThumbnailDownloadInfo encodeWithCoder:] */

void FUN_10900d78c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e44c98);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f17798);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110f177b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10900d800; end: 10900d87f; -[SCNetworkImageStoriesThumbnailDownloadInfo hash] */

undefined8 * FUN_10900d800(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10900d918:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10900d924;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10900d924;
          }
          goto LAB_10900d918;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10900d924:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10900d880; end: 10900d93f; -[SCNetworkImageStoriesThumbnailDownloadInfo isEqual:] */

long FUN_10900d880(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10900d918:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10900d924;
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
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10900d924;
          }
          goto LAB_10900d918;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10900d924:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10900d940; end: 10900d947; -[SCNetworkImageStoriesThumbnailDownloadInfo thumbnailURL] */

undefined8 FUN_10900d940(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10900d948; end: 10900d94f; -[SCNetworkImageStoriesThumbnailDownloadInfo thumbnailEncryptionInfo] */

undefined8 FUN_10900d948(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10900d950; end: 10900d957; -[SCNetworkImageStoriesThumbnailDownloadInfo contentObjectInfo] */

undefined8 FUN_10900d950(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10900d958; end: 10900d993; -[SCNetworkImageStoriesThumbnailDownloadInfo .cxx_destruct] */

void FUN_10900d958(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10900d994; end: 10900da6b; -[SCNetworkImageStoriesThumbnailContentObjectInfo initWithCoder:] */

undefined1 * FUN_10900d994(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ffd70;
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
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10900da6c; end: 10900db43; -[SCNetworkImageStoriesThumbnailContentObjectInfo initWithContentObject:key:iv:] */

undefined1 *
FUN_10900da6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126ffd70;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10900db44; end: 10900db67; -[SCNetworkImageStoriesThumbnailContentObjectInfo copyWithZone:] */

undefined8 FUN_10900db44(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10900db68; end: 10900dbdb; -[SCNetworkImageStoriesThumbnailContentObjectInfo encodeWithCoder:] */

void FUN_10900db68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f177d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e2dbb8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e8a338);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10900dbdc; end: 10900dc5b; -[SCNetworkImageStoriesThumbnailContentObjectInfo hash] */

undefined8 * FUN_10900dbdc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10900dcf4:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10900dd00;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10900dd00;
          }
          goto LAB_10900dcf4;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10900dd00:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10900dc5c; end: 10900dd1b; -[SCNetworkImageStoriesThumbnailContentObjectInfo isEqual:] */

long FUN_10900dc5c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10900dcf4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10900dd00;
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
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10900dd00;
          }
          goto LAB_10900dcf4;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10900dd00:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10900dd1c; end: 10900dd23; -[SCNetworkImageStoriesThumbnailContentObjectInfo contentObject] */

undefined8 FUN_10900dd1c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10900dd24; end: 10900dd2b; -[SCNetworkImageStoriesThumbnailContentObjectInfo key] */

undefined8 FUN_10900dd24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10900dd2c; end: 10900dd33; -[SCNetworkImageStoriesThumbnailContentObjectInfo iv] */

undefined8 FUN_10900dd2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10900dd34; end: 10900dd6f; -[SCNetworkImageStoriesThumbnailContentObjectInfo .cxx_destruct] */

void FUN_10900dd34(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10900dd70; end: 10900de1f; -[SCNetworkImageStoriesEncryptionInfo initWithCoder:] */

undefined1 * FUN_10900dd70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126ffd78;
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
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10900de20; end: 10900decb; -[SCNetworkImageStoriesEncryptionInfo initWithKey:iv:] */

undefined1 *
FUN_10900de20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ffd78;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10900decc; end: 10900deef; -[SCNetworkImageStoriesEncryptionInfo copyWithZone:] */

undefined8 FUN_10900decc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10900def0; end: 10900df4f; -[SCNetworkImageStoriesEncryptionInfo encodeWithCoder:] */

void FUN_10900def0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e2dbb8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e8a338);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10900df50; end: 10900dfc3; -[SCNetworkImageStoriesEncryptionInfo hash] */

undefined8 * FUN_10900df50(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10900e044:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10900e050;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_10900e050;
        }
        goto LAB_10900e044;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10900e050:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10900dfc4; end: 10900e06b; -[SCNetworkImageStoriesEncryptionInfo isEqual:] */

long FUN_10900dfc4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10900e044:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10900e050;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10900e050;
        }
        goto LAB_10900e044;
      }
    }
    lVar3 = 0;
  }
LAB_10900e050:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10900e06c; end: 10900e073; -[SCNetworkImageStoriesEncryptionInfo key] */

undefined8 FUN_10900e06c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10900e074; end: 10900e07b; -[SCNetworkImageStoriesEncryptionInfo iv] */

undefined8 FUN_10900e074(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10900e07c; end: 10900e0ab; -[SCNetworkImageStoriesEncryptionInfo .cxx_destruct] */

void FUN_10900e07c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10900e0ac; end: 10900e10f; -[SCSearchActionButton initWithFrame:] */

undefined1 * FUN_10900e0ac(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126ffd80;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c198080(puVar1);
    func_0x00010c160fc0(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 10900e110; end: 10900e67f; -[SCSearchActionButton layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10900e110(double param_1,double param_2,double param_3,double param_4,long param_5)

{
  double *pdVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
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
  double dStack_d0;
  long lStack_a0;
  undefined *puStack_98;
  
  puStack_98 = PTR_PTR_1126ffd80;
  lStack_a0 = param_5;
  _objc_msgSendSuper2(&lStack_a0,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf20c00(param_5);
  lVar8 = (long)_DAT_11277f9fc;
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar8));
  lVar7 = (long)_DAT_11277fa00;
  dVar10 = param_1;
  dVar11 = param_2;
  dVar12 = param_3;
  dVar13 = param_4;
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4,*(undefined8 *)(param_5 + lVar7));
  func_0x00010bf20c00(*(undefined8 *)(param_5 + lVar8));
  dVar19 = dVar10;
  _CGRectGetHeight();
  puVar3 = PTR_PTR_1126b1918;
  dVar18 = dVar19 * 0.5;
  uVar6 = *(ulong *)(param_5 + _DAT_11277fa04);
  _objc_retain(uVar6);
  _objc_opt_class(puVar3);
  uVar4 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar3);
  uVar2 = uVar6;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar6);
  if ((uVar2 != 0) && (uVar4 = uVar6, func_0x00010bf25920(), uVar4 == 4)) {
    func_0x00010bf613e0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf612a0();
    _objc_release(uVar6);
    dVar18 = dVar19;
  }
  uVar6 = *(ulong *)(param_5 + lVar8);
  func_0x00010c22a660();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar6;
  func_0x00010c0f5800();
  _CGPathGetBoundingBox();
  _CGRectEqualToRect();
  _objc_release(uVar6);
  if ((uVar4 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
    func_0x00010bf19a00(dVar10,dVar11,dVar12,dVar13,dVar18,PTR__OBJC_CLASS___UIBezierPath_1126aec18)
    ;
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc1040();
    uVar5 = *(undefined8 *)(param_5 + lVar8);
    func_0x00010c22a660(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820();
    _objc_release(uVar5);
    _objc_retainAutorelease(puVar3);
    func_0x00010bdc1040();
    uVar5 = *(undefined8 *)(param_5 + lVar8);
    func_0x00010c22a660(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe820();
    _objc_release(uVar5);
    _objc_retainAutorelease(puVar3);
    func_0x00010bdc1040();
    uVar5 = *(undefined8 *)(param_5 + lVar7);
    func_0x00010c22a660(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d9820();
    _objc_release(uVar5);
    _objc_release(puVar3);
  }
  dVar10 = *(double *)(param_5 + _DAT_11277fa08 + 8);
  param_1 = param_1 + dVar10;
  dVar19 = 0.0;
  param_2 = param_2 + 0.0;
  param_3 = param_3 - (dVar10 + *(double *)(param_5 + _DAT_11277fa08 + 0x18));
  dVar10 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  pdVar1 = (double *)(param_5 + _DAT_11277fa0c);
  if (0.0 < *pdVar1) {
    dVar19 = *(double *)(param_5 + _DAT_11277fa10);
  }
  dVar19 = (dVar10 - *pdVar1) - dVar19;
  lVar7 = (long)_DAT_11277fa14;
  uVar5 = *(undefined8 *)(param_5 + lVar7);
  dVar10 = param_1;
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  dVar11 = dVar19;
  func_0x00010c23d5a0(uVar5);
  if (dVar11 <= dVar19) {
    dVar19 = dVar11;
  }
  dStack_d0 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  dVar11 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  lVar9 = (long)_DAT_11277fa10;
  dStack_d0 = dStack_d0 + (((dVar11 - *(double *)(param_5 + lVar9)) - *pdVar1) - dVar19) * 0.5;
  lVar8 = (long)_DAT_11277fa18;
  dVar11 = param_3;
  dVar12 = param_4;
  func_0x00010c23d5a0(*(undefined8 *)(param_5 + lVar8));
  if (*(long *)(param_5 + _DAT_11277fa1c) == 1) {
    dVar13 = 0.0;
    if (0.0 < *pdVar1) {
      dVar13 = *(double *)(param_5 + lVar9);
    }
    dVar13 = dVar19 + dStack_d0 + dVar13;
  }
  else {
    dVar13 = dStack_d0;
    if (*(long *)(param_5 + _DAT_11277fa1c) == 0) {
      dVar18 = 0.0;
      if (0.0 < *pdVar1) {
        dVar18 = *(double *)(param_5 + lVar9);
      }
      dStack_d0 = dStack_d0 + *pdVar1 + dVar18;
    }
  }
  dVar18 = param_1;
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  dVar14 = param_1;
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  dVar16 = *pdVar1;
  dVar17 = pdVar1[1];
  dVar18 = dVar18 + (dVar14 - dVar17) * 0.5;
  func_0x00010b816528(dVar13,dVar18,dVar16);
  dVar14 = param_1;
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  dVar14 = dVar14 + (param_1 - dVar10) * 0.5;
  func_0x00010b8162e0();
  dVar20 = dVar13;
  _CGRectGetMinX(dVar13,dVar18,dVar16,dVar17);
  dVar20 = dVar20 + (*pdVar1 - dVar11) * 0.5;
  dVar15 = dVar13;
  _CGRectGetMinY(dVar13,dVar18,dVar16,dVar17);
  dVar15 = dVar15 + (pdVar1[1] - dVar12) * 0.5;
  func_0x00010b816528(dVar20,dVar15,dVar11);
  func_0x00010b8166f8(dVar13,dVar18,dVar16,dVar17,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + _DAT_11277fa20));
  func_0x00010b8166f8(dStack_d0,dVar14,dVar19,dVar10,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar7));
  func_0x00010b8166f8(dVar20,dVar15,dVar11,dVar12,param_5);
  func_0x00010c19f0e0(*(undefined8 *)(param_5 + lVar8));
  _objc_release(uVar2);
  return;
}



/* Entry: 10900e680; end: 10900e6c3; -[SCSearchActionButton sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10900e680(undefined8 param_1,undefined8 param_2)

{
  _objc_opt_class();
                    /* WARNING: Could not recover jumptable at 0x00010c23d6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,param_2);
  return;
}



/* Entry: 10900e6c4; end: 10900e7ab; -[SCSearchActionButton pointInside:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10900e6c4(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  double *pdVar1;
  long *plVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  long lStack_70;
  undefined *puStack_68;
  
  dVar3 = param_1;
  dVar4 = param_2;
  _objc_retain(param_7);
  func_0x00010bf20c00(param_5);
  pdVar1 = (double *)(param_5 + _DAT_11277f9f4);
  dVar7 = *pdVar1;
  dVar5 = pdVar1[1];
  dVar8 = pdVar1[2];
  dVar6 = pdVar1[3];
  puStack_68 = PTR_PTR_1126ffd80;
  plVar2 = &lStack_70;
  lStack_70 = param_5;
  _objc_msgSendSuper2(param_1,param_2,plVar2,PTR_s_pointInside_withEvent__11261e4e8,param_7);
  _objc_release(param_7);
  if (((ulong)plVar2 & 1) == 0) {
    _CGRectContainsPoint
              (dVar3 + dVar5,dVar4 + dVar7,param_3 - (dVar5 + dVar6),param_4 - (dVar7 + dVar8),
               param_1,param_2);
  }
  return;
}



/* Entry: 10900e7ac; end: 10900e7bb; -[SCSearchActionButton intrinsicContentSize] */

void FUN_10900e7ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23d5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x7fefffffffffffff,0x7fefffffffffffff,param_1,PTR_s_sizeThatFits__11266cf90);
  return;
}



/* Entry: 10900e7bc; end: 10900e803; -[SCSearchActionButton traitCollectionDidChange:] */

void FUN_10900e7bc(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ffd80;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_traitCollectionDidChange__11267bf88);
  func_0x00010bee4fe0(param_1);
  return;
}



/* Entry: 10900e804; end: 10900e867; -[SCSearchActionButton setHighlighted:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10900e804(long param_1,undefined8 param_2,int param_3)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ffd80;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_setHighlighted__112647c38);
  if (param_3 != 0) {
    func_0x00010be3a0e0(param_1);
  }
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11277fa00));
  return;
}



/* Entry: 10900e868; end: 10900e9f7; -[SCSearchActionButton setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10900e868(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b1918;
  _objc_retain(param_3);
  _objc_opt_class(puVar2);
  uVar5 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  lVar6 = (long)_DAT_11277fa04;
  uVar5 = *(ulong *)(param_1 + lVar6);
  _objc_retain(uVar1);
  _objc_retain(uVar5);
  if (uVar1 == uVar5) {
    _objc_release(uVar5);
    _objc_release(uVar1);
  }
  else {
    if (uVar5 == 0) {
      _objc_release();
    }
    else {
      uVar3 = uVar1;
      func_0x00010c071ae0();
      _objc_release(uVar5);
      _objc_release(uVar1);
      if ((uVar3 & 1) != 0) goto LAB_10900e9b4;
    }
    uVar5 = uVar1;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(ulong *)(param_1 + lVar6) = uVar5;
    _objc_release(uVar4);
    _objc_initWeak(auStack_48,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_10900e9f8;
    puStack_58 = &UNK_1108434b0;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x000107c312cc("APPSTORE",&puStack_70);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
LAB_10900e9b4:
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10900e9f8; end: 10900ea23;  */

void FUN_10900e9f8(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee4fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10900ea24; end: 10900ecab; +[SCSearchActionButton sizeWithViewModel:constrainedToSize:] */

undefined1  [16]
FUN_10900ea24(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
             undefined8 param_6,undefined *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *unaff_x22;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126b1918;
  _objc_opt_class(PTR_PTR_1126b1918);
  puVar2 = param_7;
  _objc_opt_isKindOfClass(param_7,puVar1);
  puVar1 = param_7;
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  if (puVar1 == (undefined *)0x0) {
    dVar5 = *(double *)PTR__CGSizeZero_110347620;
    dVar6 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    puVar2 = param_7;
    func_0x00010bf25920();
    dVar6 = 0.0;
    if ((long)puVar2 < 2) {
      if (puVar2 == (undefined *)0x0) {
LAB_10900eae0:
        dVar6 = 30.0;
      }
      else {
        dVar6 = 24.0;
        if (puVar2 != (undefined *)0x1) {
          dVar6 = 0.0;
        }
      }
    }
    else if (puVar2 == (undefined *)0x2) {
      dVar6 = 44.0;
    }
    else if (puVar2 == (undefined *)0x4) {
      puVar2 = param_7;
      func_0x00010bf613e0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf612e0();
      _objc_release(puVar2);
      dVar6 = param_1;
    }
    else if (puVar2 == (undefined *)0x3) goto LAB_10900eae0;
    puVar2 = param_7;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    unaff_x22 = param_7;
    FUN_10900ecac();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    dVar5 = 1.79769313486232e+308;
    param_1 = 1.79769313486232e+308;
    func_0x00010bf20ba0(puVar2);
    _objc_release(puVar3);
    _objc_release(unaff_x22);
    _objc_release(puVar2);
    func_0x00010900ede4(param_7);
    func_0x00010bf4c7e0(param_7);
    param_1 = param_3 + dVar5 + param_1;
    param_4 = param_4 + param_1;
    if ((0.0 < dVar5) && (0.0 < param_3)) {
      _objc_retain(param_7);
      puVar2 = param_7;
      func_0x00010bf257e0();
      dVar5 = param_1;
      dVar7 = 4.0;
      if (puVar2 == (undefined *)0x1) {
        puVar2 = param_7;
        func_0x00010bf613e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf629c0();
        dVar5 = param_1;
        _objc_release(puVar2);
        dVar7 = param_1;
      }
      param_1 = dVar5;
      _objc_release(param_7);
      param_4 = param_4 + dVar7;
    }
    dVar5 = dVar6;
    if (dVar6 <= param_4) {
      dVar5 = param_4;
    }
    func_0x00010b816218();
    dVar5 = (double)(long)(param_1 * dVar5) / param_1;
    func_0x00010b816218();
    param_2 = (double)(long)(dVar6 * param_1);
    dVar6 = param_2 / param_1;
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    auVar8._8_8_ = dVar6;
    auVar8._0_8_ = dVar5;
    return auVar8;
  }
  ___stack_chk_fail();
  _objc_retain();
  puVar1 = param_7;
  func_0x00010bf25920();
  if (puVar1 < (undefined *)0x2) {
LAB_10900ed5c:
    dVar6 = 13.0;
  }
  else {
    if ((undefined *)0x1 < puVar1 + -2) {
      if (puVar1 == (undefined *)0x4) {
        puVar1 = param_7;
        func_0x00010bf613e0(param_7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf61580();
        puVar2 = param_7;
        dVar6 = param_1;
        func_0x00010bf613e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010bf615a0();
        if (puVar3 < (undefined *)0x2) {
          unaff_x22 = PTR__OBJC_CLASS___UIFont_1126aec38;
          func_0x00010c0c7340(param_1,PTR__OBJC_CLASS___UIFont_1126aec38);
          _objc_retainAutoreleasedReturnValue();
          dVar6 = param_1;
        }
        else if (puVar3 == (undefined *)0x2) {
          unaff_x22 = PTR__OBJC_CLASS___UIFont_1126aec38;
          func_0x00010bf6d680(param_1,PTR__OBJC_CLASS___UIFont_1126aec38);
          _objc_retainAutoreleasedReturnValue();
          dVar6 = param_1;
        }
        else if (puVar3 == (undefined *)0x3) {
          unaff_x22 = PTR__OBJC_CLASS___UIFont_1126aec38;
          func_0x00010bf1ecc0(param_1,PTR__OBJC_CLASS___UIFont_1126aec38);
          _objc_retainAutoreleasedReturnValue();
          dVar6 = param_1;
        }
        _objc_release(puVar2);
        _objc_release(puVar1);
        goto LAB_10900ed78;
      }
      goto LAB_10900ed5c;
    }
    dVar6 = 17.0;
  }
  unaff_x22 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(dVar6,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
LAB_10900ed78:
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x22);
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = dVar6;
  return auVar9;
}



/* Entry: 10900ecac; end: 10900ef1b;  */

void FUN_10900ecac(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *unaff_x22;
  undefined8 uVar4;
  
  _objc_retain();
  uVar1 = param_2;
  func_0x00010bf25920();
  if (uVar1 < 2) {
LAB_10900ed5c:
    uVar4 = 0x402a000000000000;
  }
  else {
    if (1 < uVar1 - 2) {
      if (uVar1 == 4) {
        uVar1 = param_2;
        func_0x00010bf613e0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf61580();
        uVar2 = param_2;
        func_0x00010bf613e0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf615a0();
        if (uVar3 < 2) {
          unaff_x22 = PTR__OBJC_CLASS___UIFont_1126aec38;
          func_0x00010c0c7340(param_1,PTR__OBJC_CLASS___UIFont_1126aec38);
          _objc_retainAutoreleasedReturnValue();
        }
        else if (uVar3 == 2) {
          unaff_x22 = PTR__OBJC_CLASS___UIFont_1126aec38;
          func_0x00010bf6d680(param_1,PTR__OBJC_CLASS___UIFont_1126aec38);
          _objc_retainAutoreleasedReturnValue();
        }
        else if (uVar3 == 3) {
          unaff_x22 = PTR__OBJC_CLASS___UIFont_1126aec38;
          func_0x00010bf1ecc0(param_1,PTR__OBJC_CLASS___UIFont_1126aec38);
          _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(uVar2);
        _objc_release(uVar1);
        goto LAB_10900ed78;
      }
      goto LAB_10900ed5c;
    }
    uVar4 = 0x4031000000000000;
  }
  unaff_x22 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bf6d680(uVar4,PTR__OBJC_CLASS___UIFont_1126aec38);
  _objc_retainAutoreleasedReturnValue();
LAB_10900ed78:
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(unaff_x22);
  return;
}



/* Entry: 10900ef1c; end: 10900f1bf; -[SCSearchActionButton _updateWithViewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10900ef1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  
  puVar3 = PTR_PTR_1126b1918;
  uVar7 = *(ulong *)(param_5 + _DAT_11277fa04);
  _objc_retain(uVar7);
  _objc_opt_class(puVar3);
  uVar4 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar3);
  uVar2 = uVar7;
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar7);
  lVar8 = (long)_DAT_11277fa10;
  *(undefined8 *)(param_5 + lVar8) = 0x4010000000000000;
  if ((uVar2 != 0) && (uVar4 = uVar7, func_0x00010bf257e0(), uVar4 == 1)) {
    uVar4 = uVar7;
    func_0x00010bf613e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf629c0();
    *(undefined8 *)(param_5 + lVar8) = param_1;
    _objc_release(uVar4);
  }
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar4 = uVar2;
  func_0x00010c2711a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00();
  _objc_release(uVar4);
  if ((int)puVar3 != 0) {
    *(undefined8 *)(param_5 + lVar8) = 0;
  }
  func_0x00010be3bdc0(param_5);
  func_0x00010bed57e0(param_5);
  uVar4 = uVar2;
  FUN_10900ecac(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)_DAT_11277fa14;
  func_0x00010c19e480(*(undefined8 *)(param_5 + lVar8));
  _objc_release(uVar4);
  uVar4 = uVar2;
  func_0x00010c2711a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c212f20(*(undefined8 *)(param_5 + lVar8));
  _objc_release(uVar4);
  uVar4 = uVar2;
  func_0x00010bfe6ac0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_5 + _DAT_11277fa20));
  _objc_release(uVar4);
  uVar4 = uVar2;
  func_0x00010bf25760();
  *(ulong *)(param_5 + _DAT_11277fa1c) = uVar4;
  uVar4 = uVar2;
  func_0x00010c0cfdc0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bf51e00();
  uVar6 = *(undefined8 *)(param_5 + _DAT_11277fa24);
  *(ulong *)(param_5 + _DAT_11277fa24) = uVar5;
  _objc_release(uVar6);
  _objc_release(uVar4);
  puVar1 = (undefined8 *)(param_5 + _DAT_11277fa08);
  func_0x00010bf4c7e0(uVar2);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  lVar8 = (long)_DAT_11277fa0c;
  func_0x00010900ede4(uVar2);
  *(undefined8 *)(param_5 + lVar8) = param_1;
  ((undefined8 *)(param_5 + lVar8))[1] = param_2;
  if ((uVar2 != 0) && (uVar4 = uVar7, func_0x00010bf257e0(), uVar4 == 1)) {
    func_0x00010be39500(param_5);
    func_0x00010bf613e0(uVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf612c0();
    uVar6 = *(undefined8 *)(param_5 + _DAT_11277f9fc);
    func_0x00010c22a660(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bdd00(param_1);
    _objc_release(uVar6);
    _objc_release(uVar7);
  }
  func_0x00010c076be0(uVar2);
  func_0x00010bea5560(param_5);
  func_0x00010c1cbe20(param_5);
  func_0x00010c069fa0(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10900f1c0; end: 10900f423; -[SCSearchActionButton _setLoading:] */

/* WARNING: Possible PIC construction at 0x00010900f400: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010900f404) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10900f1c0(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar7 = (long)_DAT_11277fa18;
  if (param_3 == 0) {
    func_0x00010c12c960();
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    *(undefined8 *)(param_1 + lVar7) = 0;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + _DAT_11277fa20);
    uVar5 = 0;
    goto code_r0x00010c1a7f60;
  }
  if (*(long *)(param_1 + lVar7) != 0) {
    func_0x00010c12c960();
  }
  puVar2 = PTR_PTR_1126b1918;
  uVar6 = *(ulong *)(param_1 + _DAT_11277fa04);
  _objc_retain(uVar6);
  _objc_opt_class(puVar2);
  uVar3 = uVar6;
  _objc_opt_isKindOfClass(uVar6,puVar2);
  uVar1 = uVar6;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar6);
  _objc_retain(uVar1);
  uVar3 = uVar1;
  func_0x00010bf25480();
  uVar6 = uVar1;
  if ((long)uVar3 < 3) {
    if (uVar3 == 0) {
LAB_10900f2dc:
      func_0x00010c270f20();
      _objc_retainAutoreleasedReturnValue();
      if (uVar6 != 0) {
        func_0x00010bfcbfc0(uVar6);
      }
LAB_10900f360:
      _objc_release(uVar6);
    }
  }
  else if ((long)uVar3 < 5) {
    if ((uVar3 != 3) && (uVar3 == 4)) goto LAB_10900f2dc;
  }
  else if (uVar3 == 5) {
    func_0x00010bf613e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar6;
    func_0x00010bf618e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar3 != 0) {
      func_0x00010bfcbfc0(uVar3);
    }
    _objc_release(uVar3);
    goto LAB_10900f360;
  }
  uVar3 = uVar1;
  func_0x00010bf25920();
  if (uVar3 == 4) {
    uVar3 = uVar1;
    func_0x00010bf613e0(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09d0c0();
    _objc_release(uVar3);
  }
  puVar2 = PTR_PTR_1126aeff0;
  _objc_alloc();
  func_0x00010bfffb60();
  _objc_release(uVar1);
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  *(undefined **)(param_1 + lVar7) = puVar2;
  _objc_release(uVar4);
  func_0x00010befbb60(param_1);
  func_0x00010c24dbc0(*(undefined8 *)(param_1 + lVar7));
  uVar4 = *(undefined8 *)(param_1 + _DAT_11277fa20);
  uVar5 = 1;
code_r0x00010c1a7f60:
                    /* WARNING: Could not recover jumptable at 0x00010c1a7f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar4,PTR_s_setHidden__1126479f8,uVar5);
  return;
}



/* Entry: 10900f424; end: 10900f4c3; -[SCSearchActionButton sendAction:to:forEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10900f424(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(char *)(param_1 + _DAT_11277f9f8) == '\x01') {
    func_0x00010bea5560(param_1);
  }
  puStack_38 = PTR_PTR_1126ffd80;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_sendAction_to_forEvent__11253f060,param_3,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10900f4c4; end: 10900f95f; -[SCSearchActionButton _updateColorWithModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10900f4c4(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c270f20();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    func_0x00010bfcbfc0(puVar1,param_2,&uStack_68);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uStack_68);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010bf25480();
  puVar6 = (undefined *)0x0;
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if ((long)puVar1 < 3) {
    if (puVar1 == (undefined *)0x0) {
      _objc_retain(puVar5);
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar5);
      puVar3 = puVar5;
      puVar6 = puVar5;
      goto LAB_10900f7d4;
    }
    if (puVar1 == (undefined *)0x1) {
      func_0x00010c23bb00(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc4,0x48);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(puVar5);
      _objc_retain(puVar5);
      puVar2 = puVar5;
      puVar6 = puVar5;
      goto LAB_10900f7d4;
    }
    puVar3 = (undefined *)0x0;
    puVar2 = (undefined *)0x0;
    if (puVar1 != (undefined *)0x2) goto LAB_10900f7d4;
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23bb00(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd4,0xc4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23bb00(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x34,0x6a);
    _objc_retainAutoreleasedReturnValue();
    if (2 < lRam00000001138466f0) {
      uVar4 = 0x6a;
      goto LAB_10900f680;
    }
  }
  else {
    if (4 < (long)puVar1) {
      if (puVar1 == (undefined *)0x5) {
        puVar1 = param_3;
        func_0x00010bf613e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar1;
        func_0x00010bf615c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        puVar1 = param_3;
        func_0x00010bf613e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x00010bf61240();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        puVar1 = param_3;
        func_0x00010bf613e0(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar1;
        func_0x00010bf61280();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        goto LAB_10900f7d4;
      }
      puVar3 = (undefined *)0x0;
      puVar2 = (undefined *)0x0;
      if (puVar1 != (undefined *)0x6) goto LAB_10900f7d4;
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbd);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd9);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = 0xd9;
LAB_10900f680:
      puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10900f7d4;
    }
    if (puVar1 != (undefined *)0x3) {
      puVar3 = (undefined *)0x0;
      puVar2 = (undefined *)0x0;
      if (puVar1 == (undefined *)0x4) {
        _objc_retain(puVar5);
        puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar5;
      }
      goto LAB_10900f7d4;
    }
    func_0x00010c23bb00(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x82,0xcd);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_retain(puVar5);
  puVar6 = puVar5;
LAB_10900f7d4:
  func_0x00010c213180(*(undefined8 *)(param_1 + _DAT_11277fa14),param_2,puVar3);
  _objc_retainAutorelease(puVar2);
  func_0x00010bdc0fe0();
  lVar7 = (long)_DAT_11277f9fc;
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c22a660(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(uVar4);
  _objc_retainAutorelease(puVar6);
  func_0x00010bdc0fe0();
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  func_0x00010c22a660(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e8e0();
  _objc_release(uVar4);
  func_0x00010c216160(*(undefined8 *)(param_1 + _DAT_11277fa20),param_2,puVar3);
  puVar1 = param_3;
  func_0x00010c239de0();
  if ((int)puVar1 != 0) {
    _objc_retainAutorelease(puVar6);
    func_0x00010bdc0fe0();
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c22a660(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe740();
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c22a660(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe800(0x3f000000);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c22a660(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe7a0(0,0x4000000000000000);
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c22a660(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fe840(0x4018000000000000);
    _objc_release(uVar4);
  }
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 10900f960; end: 10900f9fb; -[SCSearchActionButton _initializeViewsWithViewModel:] */

void FUN_10900f960(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    func_0x00010be3a8c0(param_1);
  }
  uVar1 = param_3;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 != 0) {
    func_0x00010be39de0(param_1);
  }
  uVar1 = param_3;
  func_0x00010bf25480();
  if ((uVar1 < 7) && (uVar1 != 4)) {
    func_0x00010be39500(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10900f9fc; end: 10900faab; -[SCSearchActionButton _initBackgroundViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10900f9fc(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277f9fc;
  if (*(long *)(param_2 + lVar3) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126b52f0;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  *(undefined **)(param_2 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010b816670();
  uVar2 = *(undefined8 *)(param_2 + lVar3);
  func_0x00010c22a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdd00(param_1);
  _objc_release(uVar2);
  func_0x00010c21e900(*(undefined8 *)(param_2 + lVar3));
                    /* WARNING: Could not recover jumptable at 0x00010c066fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_insertSubview_atIndex__1125f75f8,*(undefined8 *)(param_2 + lVar3),0);
  return;
}



/* Entry: 10900faac; end: 10900fbbf; -[SCSearchActionButton _initOverlayViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10900faac(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277fa00;
  if (*(long *)(param_1 + lVar3) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126b52f0;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar3));
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c22a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19bc00();
  _objc_release(uVar2);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  func_0x00010c22a660(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d4bc0(0x3dcccccd);
  _objc_release(uVar2);
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar3));
  func_0x00010befbb60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf21310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_bringSubviewToFront__1125a5e68,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 10900fbc0; end: 10900fc37; -[SCSearchActionButton _initTitleLabelIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10900fbc0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277fa14;
  if (*(long *)(param_1 + lVar3) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  if (*(long *)(param_1 + _DAT_11277fa00) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c066ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_insertSubview_belowSubview__1125f7608);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 10900fc38; end: 10900fcaf; -[SCSearchActionButton _initImageViewIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10900fc38(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11277fa20;
  if (*(long *)(param_1 + lVar3) != 0) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_opt_new();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  if (*(long *)(param_1 + _DAT_11277fa00) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c066ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_insertSubview_belowSubview__1125f7608);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010befbb70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_addSubview__11259c880,*(undefined8 *)(param_1 + lVar3));
  return;
}



/* Entry: 10900fcb0; end: 10900fcbf; -[SCSearchActionButton viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10900fcb0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277fa04);
}



/* Entry: 10900fcc0; end: 10900fcd7; -[SCSearchActionButton hitTestEdgeInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10900fcc0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277f9f4);
}



/* Entry: 10900fcd8; end: 10900fcef; -[SCSearchActionButton setHitTestEdgeInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10900fcd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11277f9f4);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 10900fcf0; end: 10900fcff; -[SCSearchActionButton actionModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10900fcf0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277fa24);
}



/* Entry: 10900fd00; end: 10900fd8f; -[SCSearchActionButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10900fd00(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277fa04,0);
  _objc_storeStrong(param_1 + _DAT_11277fa18,0);
  _objc_storeStrong(param_1 + _DAT_11277fa24,0);
  _objc_storeStrong(param_1 + _DAT_11277fa20,0);
  _objc_storeStrong(param_1 + _DAT_11277fa14,0);
  _objc_storeStrong(param_1 + _DAT_11277fa00,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277f9fc,0);
  return;
}



/* Entry: 10900fd90; end: 10900fdcb;  */

void FUN_10900fd90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x00010c296da0(PTR__OBJC_CLASS___NSValue_1126afdf8,param_2,&uStack_18,&UNK_10f543b19);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10900fdcc; end: 10900ff7f; -[SCSearchActionButtonViewModel initWithTitle:image:tintColor:buttonStyle:buttonImageStyle:buttonColorStyle:buttonLabelOffsetStyle:buttonImageSizeStyle:contentInsets:isLoading:model:customConfig:showShadow:] */

undefined8 *
FUN_10900fdcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined1 param_15,undefined4 param_16,
             undefined8 param_17,undefined8 param_18,undefined1 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_90;
  undefined *puStack_88;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_17);
  _objc_retain(param_18);
  puStack_88 = PTR_PTR_1126ffd88;
  puVar1 = &uStack_90;
  uStack_90 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    puVar1[5] = param_10;
    puVar1[6] = param_11;
    puVar1[7] = param_12;
    puVar1[8] = param_13;
    puVar1[9] = param_14;
    puVar1[0xc] = param_1;
    puVar1[0xd] = param_2;
    puVar1[0xe] = param_3;
    puVar1[0xf] = param_4;
    *(undefined1 *)(puVar1 + 1) = param_15;
    uVar2 = param_17;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_18;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_19;
  }
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 10900ff80; end: 10900ffa3; -[SCSearchActionButtonViewModel copyWithZone:] */

undefined8 FUN_10900ff80(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10900ffa4; end: 1090100e7; -[SCSearchActionButtonViewModel hash] */

undefined8 * FUN_10900ffa4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ushort uVar9;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uStack_a8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_a0 = uVar3;
  func_0x00010bfde980();
  lVar6 = *(long *)(param_1 + 0x48);
  uStack_40 = *(undefined8 *)(param_1 + 0x50);
  lStack_70 = -lVar6;
  if (-1 < lVar6) {
    lStack_70 = lVar6;
  }
  uVar7 = ~*(ulong *)(param_1 + 0x60) + *(ulong *)(param_1 + 0x60) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_68 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x68) + *(ulong *)(param_1 + 0x68) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x70) + *(ulong *)(param_1 + 0x70) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_60 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar7 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_58 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x78) + *(ulong *)(param_1 + 0x78) * 0x40000;
  uStack_90 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uStack_88 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uStack_80 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  uStack_78 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x40));
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_50 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_48 = (ulong)*(byte *)(param_1 + 8);
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uStack_98 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  puVar4 = &uStack_a8;
  uStack_38 = uVar2;
  func_0x000107c3191c(puVar4,0x10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == param_3) {
LAB_10901024c:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar4 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_109010250;
    puVar8 = puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((((ulong)puVar5 & 1) != 0) &&
         ((((puVar4[5] == param_3[5] && (puVar4[6] == param_3[6])) && (puVar4[7] == param_3[7])) &&
          ((puVar4[8] == param_3[8] && (puVar4[9] == param_3[9])))))) &&
        (*(char *)(puVar4 + 1) == *(char *)(param_3 + 1))) &&
       (*(char *)((long)puVar4 + 9) == *(char *)((long)param_3 + 9))) {
      uVar9 = NEON_uminv(CONCAT26(-(ushort)((double)puVar4[0xf] == (double)param_3[0xf]),
                                  CONCAT24(-(ushort)((double)puVar4[0xe] == (double)param_3[0xe]),
                                           CONCAT22(-(ushort)((double)puVar4[0xd] ==
                                                             (double)param_3[0xd]),
                                                    -(ushort)((double)puVar4[0xc] ==
                                                             (double)param_3[0xc])))),2);
      if ((uVar9 & 1) != 0) {
        lVar6 = puVar4[2];
        if ((lVar6 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
          lVar6 = puVar4[3];
          if ((lVar6 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
            lVar6 = puVar4[4];
            if ((lVar6 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
              lVar6 = puVar4[10];
              if ((lVar6 == param_3[10]) || (func_0x00010c071ae0(), (int)lVar6 != 0)) {
                puVar8 = (undefined8 *)puVar4[0xb];
                if (puVar8 != (undefined8 *)param_3[0xb]) {
                  func_0x00010c071ae0();
                  goto LAB_109010250;
                }
                goto LAB_10901024c;
              }
            }
          }
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_109010250:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 1090100e8; end: 10901026b; -[SCSearchActionButtonViewModel isEqual:] */

long FUN_1090100e8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ushort uVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10901024c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_109010250;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28) &&
            (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
           (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) &&
          ((*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40) &&
           (*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48))))))) &&
        (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) &&
       (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))) {
      uVar4 = NEON_uminv(CONCAT26(-(ushort)(*(double *)(param_1 + 0x78) ==
                                           *(double *)(param_3 + 0x78)),
                                  CONCAT24(-(ushort)(*(double *)(param_1 + 0x70) ==
                                                    *(double *)(param_3 + 0x70)),
                                           CONCAT22(-(ushort)(*(double *)(param_1 + 0x68) ==
                                                             *(double *)(param_3 + 0x68)),
                                                    -(ushort)(*(double *)(param_1 + 0x60) ==
                                                             *(double *)(param_3 + 0x60))))),2);
      if ((uVar4 & 1) != 0) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x50);
              if ((lVar3 == *(long *)(param_3 + 0x50)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x58);
                if (lVar3 != *(long *)(param_3 + 0x58)) {
                  func_0x00010c071ae0();
                  goto LAB_109010250;
                }
                goto LAB_10901024c;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_109010250:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10901026c; end: 109010273; -[SCSearchActionButtonViewModel title] */

undefined8 FUN_10901026c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109010274; end: 10901027b; -[SCSearchActionButtonViewModel image] */

undefined8 FUN_109010274(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10901027c; end: 109010283; -[SCSearchActionButtonViewModel tintColor] */

undefined8 FUN_10901027c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 109010284; end: 10901028b; -[SCSearchActionButtonViewModel buttonStyle] */

undefined8 FUN_109010284(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10901028c; end: 109010293; -[SCSearchActionButtonViewModel buttonImageStyle] */

undefined8 FUN_10901028c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 109010294; end: 10901029b; -[SCSearchActionButtonViewModel buttonColorStyle] */

undefined8 FUN_109010294(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10901029c; end: 1090102a3; -[SCSearchActionButtonViewModel buttonLabelOffsetStyle] */

undefined8 FUN_10901029c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1090102a4; end: 1090102ab; -[SCSearchActionButtonViewModel buttonImageSizeStyle] */

undefined8 FUN_1090102a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1090102ac; end: 1090102b7; -[SCSearchActionButtonViewModel contentInsets] */

undefined8 FUN_1090102ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1090102b8; end: 1090102bf; -[SCSearchActionButtonViewModel isLoading] */

undefined1 FUN_1090102b8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1090102c0; end: 1090102c7; -[SCSearchActionButtonViewModel model] */

undefined8 FUN_1090102c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1090102c8; end: 1090102cf; -[SCSearchActionButtonViewModel customConfig] */

undefined8 FUN_1090102c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1090102d0; end: 1090102d7; -[SCSearchActionButtonViewModel showShadow] */

undefined1 FUN_1090102d0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1090102d8; end: 10901032b; -[SCSearchActionButtonViewModel .cxx_destruct] */

void FUN_1090102d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10901032c; end: 109010347; +[SCSearchActionButtonViewModelBuilder searchActionButtonViewModel] */

void FUN_10901032c(void)

{
  _objc_alloc_init(PTR_PTR_1126b56d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 109010348; end: 109010643; +[SCSearchActionButtonViewModelBuilder searchActionButtonViewModelFromExistingSearchActionButtonViewModel:] */

void FUN_109010348(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined *puVar20;
  
  puVar1 = PTR_PTR_1126b56d8;
  _objc_retain(param_3);
  func_0x00010c153280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c2711a0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x00010c2bb3c0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bfe6ac0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2afa20(puVar3,param_2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c270f20();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2bb380(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf25920(param_3);
  puVar9 = puVar7;
  func_0x00010c2a9bc0(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf25760(param_3);
  puVar10 = puVar9;
  func_0x00010c2a9b80(puVar9,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf25480(param_3);
  puVar11 = puVar10;
  func_0x00010c2a9b40(puVar10,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf257e0(param_3);
  puVar12 = puVar11;
  func_0x00010c2a9ba0(puVar11,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf25740(param_3);
  puVar13 = puVar12;
  func_0x00010c2a9b60(puVar12,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4c7e0(param_3);
  puVar14 = puVar13;
  func_0x00010c2aae00(puVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c076be0(param_3);
  puVar15 = puVar14;
  func_0x00010c2b0d60(puVar14,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c0cfdc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010c2b40e0(puVar15,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar17 = param_3;
  func_0x00010bf613e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar16;
  func_0x00010c2ab940(puVar16,param_2,uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar19 = param_3;
  func_0x00010c239de0(param_3);
  _objc_release(param_3);
  puVar20 = puVar18;
  func_0x00010c2b8f40(puVar18,param_2,uVar19);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar18);
  _objc_release(uVar17);
  _objc_release(puVar16);
  _objc_release(uVar8);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar20);
  return;
}



/* Entry: 109010644; end: 1090106ab; -[SCSearchActionButtonViewModelBuilder build] */

void FUN_109010644(long param_1)

{
  _objc_alloc(PTR_PTR_1126b1918);
  func_0x00010c053140(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1090106ac; end: 1090106e3; -[SCSearchActionButtonViewModelBuilder withTitle:] */

long FUN_1090106ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1090106e4; end: 10901071b; -[SCSearchActionButtonViewModelBuilder withImage:] */

long FUN_1090106e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10901071c; end: 109010753; -[SCSearchActionButtonViewModelBuilder withTintColor:] */

long FUN_10901071c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 109010754; end: 10901075b; -[SCSearchActionButtonViewModelBuilder withButtonStyle:] */

void FUN_109010754(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = param_3;
  return;
}



/* Entry: 10901075c; end: 109010763; -[SCSearchActionButtonViewModelBuilder withButtonImageStyle:] */

void FUN_10901075c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 109010764; end: 10901076b; -[SCSearchActionButtonViewModelBuilder withButtonColorStyle:] */

void FUN_109010764(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10901076c; end: 109010773; -[SCSearchActionButtonViewModelBuilder withButtonLabelOffsetStyle:] */

void FUN_10901076c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 109010774; end: 10901077b; -[SCSearchActionButtonViewModelBuilder withButtonImageSizeStyle:] */

void FUN_109010774(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 10901077c; end: 109010787; -[SCSearchActionButtonViewModelBuilder withContentInsets:] */

void FUN_10901077c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  *(undefined8 *)(param_5 + 0x48) = param_1;
  *(undefined8 *)(param_5 + 0x50) = param_2;
  *(undefined8 *)(param_5 + 0x58) = param_3;
  *(undefined8 *)(param_5 + 0x60) = param_4;
  return;
}



/* Entry: 109010788; end: 10901078f; -[SCSearchActionButtonViewModelBuilder withIsLoading:] */

void FUN_109010788(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x68) = param_3;
  return;
}



/* Entry: 109010790; end: 1090107c7; -[SCSearchActionButtonViewModelBuilder withModel:] */

long FUN_109010790(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 1090107c8; end: 1090107ff; -[SCSearchActionButtonViewModelBuilder withCustomConfig:] */

long FUN_1090107c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 109010800; end: 109010807; -[SCSearchActionButtonViewModelBuilder withShowShadow:] */

void FUN_109010800(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x80) = param_3;
  return;
}



/* Entry: 109010808; end: 10901085b; -[SCSearchActionButtonViewModelBuilder .cxx_destruct] */

void FUN_109010808(long param_1)

{
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10901085c; end: 1090109fb; -[SCSearchActionButtonViewModelCustomConfig initWithCustomFontSize:customFontStyle:customBorderRadius:customBorderWidth:customButtonHeight:customBorderColor:customBackgroundColor:customForegroundColor:customLabelColor:customLoadingColor:loadingIndicatorSize:customTitleLeftOffset:customImageWidth:customImageHeight:] */

undefined1 *
FUN_10901085c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_a0;
  undefined *puStack_98;
  
  puVar1 = &uStack_a0;
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  puStack_98 = PTR_PTR_1126ffd90;
  uStack_a0 = param_8;
  _objc_msgSendSuper2(&uStack_a0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_10;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_15;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x58) = param_16;
    *(undefined8 *)((long)puVar1 + 0x60) = param_5;
    *(undefined8 *)((long)puVar1 + 0x68) = param_6;
    *(undefined8 *)((long)puVar1 + 0x70) = param_7;
  }
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  return (undefined1 *)puVar1;
}



/* Entry: 1090109fc; end: 109010a1f; -[SCSearchActionButtonViewModelCustomConfig copyWithZone:] */

undefined8 FUN_1090109fc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 109010a20; end: 109010bab; -[SCSearchActionButtonViewModelCustomConfig hash] */

ulong * FUN_109010a20(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puVar9;
  double dVar10;
  double dVar11;
  ulong uStack_98;
  long lStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = *(long *)(param_1 + 0x10);
  uVar8 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_98 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_98 = uStack_98 ^ uStack_98 >> 0x16;
  lStack_90 = -lVar2;
  if (-1 < lVar2) {
    lStack_90 = lVar2;
  }
  uVar8 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_88 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_88 = uStack_88 ^ uStack_88 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_80 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_80 = uStack_80 ^ uStack_80 >> 0x16;
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  uVar8 = ~*(ulong *)(param_1 + 0x28) + *(ulong *)(param_1 + 0x28) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_78 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_78 = uStack_78 ^ uStack_78 >> 0x16;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uStack_70 = uVar5;
  func_0x00010bfde980();
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uStack_68 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  uStack_60 = uVar5;
  func_0x00010bfde980();
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  uStack_58 = uVar4;
  func_0x00010bfde980();
  uStack_48 = *(undefined8 *)(param_1 + 0x58);
  uVar8 = ~*(ulong *)(param_1 + 0x60) + *(ulong *)(param_1 + 0x60) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x68) + *(ulong *)(param_1 + 0x68) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_40 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_40 = uStack_40 ^ uStack_40 >> 0x16;
  uVar8 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_38 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uVar8 = ~*(ulong *)(param_1 + 0x70) + *(ulong *)(param_1 + 0x70) * 0x40000;
  uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
  uStack_30 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar6 = &uStack_98;
  uStack_50 = uVar5;
  func_0x000107c3191c(puVar6,0xe);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar6;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar6 == param_3) {
LAB_109010e08:
    puVar9 = (ulong *)0x1;
  }
  else {
    puVar9 = (ulong *)0x0;
    if ((puVar6 == (ulong *)0x0) || (param_3 == (ulong *)0x0)) goto LAB_109010e14;
    puVar9 = puVar6;
    _objc_opt_class(puVar6);
    puVar7 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar9);
    if ((((ulong)puVar7 & 1) != 0) && ((puVar6[2] == param_3[2] && (puVar6[0xb] == param_3[0xb]))))
    {
      dVar11 = ABS((double)puVar6[1] - (double)param_3[1]);
      dVar10 = ABS((double)puVar6[1] + (double)param_3[1]) * 2.220446049250313e-16;
      bVar3 = true;
      if ((2.2250738585072014e-308 <= dVar11) && (bVar3 = false, !NAN(dVar11) && !NAN(dVar10))) {
        bVar3 = dVar11 < dVar10;
      }
      if (bVar3) {
        dVar11 = ABS((double)puVar6[3] - (double)param_3[3]);
        dVar10 = ABS((double)puVar6[3] + (double)param_3[3]) * 2.220446049250313e-16;
        bVar3 = true;
        if ((2.2250738585072014e-308 <= dVar11) && (bVar3 = false, !NAN(dVar11) && !NAN(dVar10))) {
          bVar3 = dVar11 < dVar10;
        }
        if (bVar3) {
          dVar11 = ABS((double)puVar6[4] - (double)param_3[4]);
          dVar10 = ABS((double)puVar6[4] + (double)param_3[4]) * 2.220446049250313e-16;
          bVar3 = true;
          if ((2.2250738585072014e-308 <= dVar11) && (bVar3 = false, !NAN(dVar11) && !NAN(dVar10)))
          {
            bVar3 = dVar11 < dVar10;
          }
          if (bVar3) {
            dVar11 = ABS((double)puVar6[5] - (double)param_3[5]);
            dVar10 = ABS((double)puVar6[5] + (double)param_3[5]) * 2.220446049250313e-16;
            bVar3 = true;
            if ((2.2250738585072014e-308 <= dVar11) && (bVar3 = false, !NAN(dVar11) && !NAN(dVar10))
               ) {
              bVar3 = dVar11 < dVar10;
            }
            if (bVar3) {
              dVar10 = ABS((double)puVar6[0xc] - (double)param_3[0xc]);
              if ((dVar10 < 2.2250738585072014e-308) ||
                 (dVar10 < ABS((double)puVar6[0xc] + (double)param_3[0xc]) * 2.220446049250313e-16))
              {
                dVar10 = ABS((double)puVar6[0xd] - (double)param_3[0xd]);
                if ((dVar10 < 2.2250738585072014e-308) ||
                   (dVar10 < ABS((double)puVar6[0xd] + (double)param_3[0xd]) * 2.220446049250313e-16
                   )) {
                  dVar10 = ABS((double)puVar6[0xe] - (double)param_3[0xe]);
                  if ((((dVar10 < 2.2250738585072014e-308) ||
                       (dVar10 < ABS((double)puVar6[0xe] + (double)param_3[0xe]) *
                                 2.220446049250313e-16)) &&
                      ((uVar8 = puVar6[6], uVar8 == param_3[6] ||
                       (func_0x00010c071c60(), (int)uVar8 != 0)))) &&
                     ((((uVar8 = puVar6[7], uVar8 == param_3[7] ||
                        (func_0x00010c071c60(), (int)uVar8 != 0)) &&
                       ((uVar8 = puVar6[8], uVar8 == param_3[8] ||
                        (func_0x00010c071c60(), (int)uVar8 != 0)))) &&
                      ((uVar8 = puVar6[9], uVar8 == param_3[9] ||
                       (func_0x00010c071c60(), (int)uVar8 != 0)))))) {
                    puVar9 = (ulong *)puVar6[10];
                    if (puVar9 != (ulong *)param_3[10]) {
                      func_0x00010c071ae0();
                      goto LAB_109010e14;
                    }
                    goto LAB_109010e08;
                  }
                }
              }
            }
          }
        }
      }
    }
    puVar9 = (ulong *)0x0;
  }
LAB_109010e14:
  _objc_release(param_3);
  return puVar9;
}



/* Entry: 109010bac; end: 109010e2f; -[SCSearchActionButtonViewModelCustomConfig isEqual:] */

long FUN_109010bac(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_109010e08:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_109010e14;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       ((*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10) &&
        (*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58))))) {
      dVar6 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
      dVar5 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
        dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (bVar1) {
          dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
          dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
            bVar1 = dVar6 < dVar5;
          }
          if (bVar1) {
            dVar6 = ABS(*(double *)(param_1 + 0x28) - *(double *)(param_3 + 0x28));
            dVar5 = ABS(*(double *)(param_1 + 0x28) + *(double *)(param_3 + 0x28)) *
                    2.220446049250313e-16;
            bVar1 = true;
            if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
              bVar1 = dVar6 < dVar5;
            }
            if (bVar1) {
              dVar5 = ABS(*(double *)(param_1 + 0x60) - *(double *)(param_3 + 0x60));
              if ((dVar5 < 2.2250738585072014e-308) ||
                 (dVar5 < ABS(*(double *)(param_1 + 0x60) + *(double *)(param_3 + 0x60)) *
                          2.220446049250313e-16)) {
                dVar5 = ABS(*(double *)(param_1 + 0x68) - *(double *)(param_3 + 0x68));
                if ((dVar5 < 2.2250738585072014e-308) ||
                   (dVar5 < ABS(*(double *)(param_1 + 0x68) + *(double *)(param_3 + 0x68)) *
                            2.220446049250313e-16)) {
                  dVar5 = ABS(*(double *)(param_1 + 0x70) - *(double *)(param_3 + 0x70));
                  if ((((dVar5 < 2.2250738585072014e-308) ||
                       (dVar5 < ABS(*(double *)(param_1 + 0x70) + *(double *)(param_3 + 0x70)) *
                                2.220446049250313e-16)) &&
                      ((lVar4 = *(long *)(param_1 + 0x30), lVar4 == *(long *)(param_3 + 0x30) ||
                       (func_0x00010c071c60(), (int)lVar4 != 0)))) &&
                     ((((lVar4 = *(long *)(param_1 + 0x38), lVar4 == *(long *)(param_3 + 0x38) ||
                        (func_0x00010c071c60(), (int)lVar4 != 0)) &&
                       ((lVar4 = *(long *)(param_1 + 0x40), lVar4 == *(long *)(param_3 + 0x40) ||
                        (func_0x00010c071c60(), (int)lVar4 != 0)))) &&
                      ((lVar4 = *(long *)(param_1 + 0x48), lVar4 == *(long *)(param_3 + 0x48) ||
                       (func_0x00010c071c60(), (int)lVar4 != 0)))))) {
                    lVar4 = *(long *)(param_1 + 0x50);
                    if (lVar4 != *(long *)(param_3 + 0x50)) {
                      func_0x00010c071ae0();
                      goto LAB_109010e14;
                    }
                    goto LAB_109010e08;
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_109010e14:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 109010e30; end: 109010e37; -[SCSearchActionButtonViewModelCustomConfig customFontSize] */

undefined8 FUN_109010e30(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 109010e38; end: 109010e3f; -[SCSearchActionButtonViewModelCustomConfig customFontStyle] */

undefined8 FUN_109010e38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 109010e40; end: 109010e47; -[SCSearchActionButtonViewModelCustomConfig customBorderRadius] */

undefined8 FUN_109010e40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 109010e48; end: 109010e4f; -[SCSearchActionButtonViewModelCustomConfig customBorderWidth] */

undefined8 FUN_109010e48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 109010e50; end: 109010e57; -[SCSearchActionButtonViewModelCustomConfig customButtonHeight] */

undefined8 FUN_109010e50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}


