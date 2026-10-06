/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108bd64b4; end: 108bd6543; -[SCSnapchatterFriendStatusManagerDefault _addFriendStatusBasedOnSnapchatter:] */

undefined8 FUN_108bd64b4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c06d560();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x000100bf119c();
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010901c6c4();
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        func_0x00010bfb8280();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        uVar2 = 0;
        if (uVar1 != 0) {
          uVar2 = 4;
        }
      }
      else {
        uVar2 = 6;
      }
    }
    else {
      uVar2 = 10;
    }
  }
  else {
    uVar2 = 0xc;
  }
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 108bd6544; end: 108bd671f; -[SCSnapchatterFriendStatusManagerDefault _updateAddFriendStatusBasedOnAction:forSnapchatterId:] */

void FUN_108bd6544(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c0dff20(lVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar3 = *(long *)(param_1 + 0x38);
  }
  else {
    lVar3 = param_1;
    func_0x00010c253180(param_1,param_2,param_4);
  }
  _objc_release(lVar1);
  switch(param_3) {
  case 1:
    lVar1 = param_1;
    func_0x00010be3de60(param_1,param_2,lVar3);
    if ((int)lVar1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 7;
    }
    break;
  case 2:
    lVar1 = param_1;
    func_0x00010be3de60(param_1,param_2,lVar3);
    if ((int)lVar1 == 0) {
      func_0x00010bed2bc0(param_1,param_2,2,param_4);
      func_0x00010bed2c40(param_1,param_2,param_4);
    }
    else {
      func_0x00010bed2bc0(param_1,param_2,8,param_4);
      func_0x00010bed2c20(param_1,param_2,param_4);
    }
    goto LAB_108bd66e8;
  case 3:
  case 5:
    lVar1 = param_1;
    func_0x00010be3de60(param_1,param_2,lVar3);
    if ((int)lVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 6;
    }
    break;
  case 4:
    lVar1 = param_1;
    func_0x00010be3de60(param_1,param_2,lVar3);
    if ((int)lVar1 == 0) {
      uVar2 = 5;
    }
    else {
      uVar2 = 0xb;
    }
    break;
  case 6:
    lVar1 = param_1;
    func_0x00010be3de60(param_1,param_2,lVar3);
    if ((int)lVar1 == 0) {
      uVar2 = 3;
    }
    else {
      uVar2 = 9;
    }
    break;
  default:
    goto LAB_108bd66e8;
  case 8:
  case 0xc:
    uVar2 = 0xc;
    break;
  case 9:
    func_0x00010bed2c00(param_1,param_2,param_4);
    goto LAB_108bd66e8;
  case 10:
    uVar2 = 0xd;
    break;
  case 0xb:
    func_0x00010bed2bc0(param_1,param_2,0xe,param_4);
    func_0x00010bed2c60(param_1,param_2,param_4);
    goto LAB_108bd66e8;
  }
  func_0x00010bed2bc0(param_1,param_2,uVar2,param_4);
LAB_108bd66e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108bd6720; end: 108bd6813; -[SCSnapchatterFriendStatusManagerDefault _updateAddFriendStatusToPostAddedStateAfterDelayForSnapchatterId:] */

void FUN_108bd6720(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x108bd67d4;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x000107c312d0("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 108bd6814; end: 108bd688b; -[SCSnapchatterFriendStatusManagerDefault _updateAddFriendStatusToPostAddedStateIfNecessaryForSnapchatterId:] */

void FUN_108bd6814(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c0dff20(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((lVar1 != 0) && (lVar1 = param_1, func_0x00010c253180(param_1,param_2,param_3), lVar1 == 2)) {
    func_0x00010bed2bc0(param_1,param_2,3,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bd688c; end: 108bd697f; -[SCSnapchatterFriendStatusManagerDefault _updateAddFriendStatusToPostAcceptedStateAfterDelayForSnapchatterId:] */

void FUN_108bd688c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x108bd6940;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x000107c312d0("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 108bd6980; end: 108bd69f7; -[SCSnapchatterFriendStatusManagerDefault _updateAddFriendStatusToPostAcceptedStateIfNecessaryForSnapchatterId:] */

void FUN_108bd6980(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c0dff20(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((lVar1 != 0) && (lVar1 = param_1, func_0x00010c253180(param_1,param_2,param_3), lVar1 == 8)) {
    func_0x00010bed2bc0(param_1,param_2,9,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108bd69f8; end: 108bd6aeb; -[SCSnapchatterFriendStatusManagerDefault _updateAddFriendStatusToPostUnblockedStateAfterDelayForSnapchatterId:] */

void FUN_108bd69f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x108bd6aac;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x000107c312d0("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 108bd6aec; end: 108bd6bdf; -[SCSnapchatterFriendStatusManagerDefault _updateAddFriendStatusToNonBlockedStateIfNecessaryForSnapchatterId:] */

void FUN_108bd6aec(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0;
    func_0x000107c312b8(0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    func_0x00010c2448c0(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(param_3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 108bd6be0; end: 108bd6bf7;  */

void FUN_108bd6be0(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bed2bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateAddFriendStatus_forSnapch_112592498,0xf,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108bd6bf8; end: 108bd6cdb; -[SCSnapchatterFriendStatusManagerDefault _updateAddFriendStatus:forSnapchatterId:] */

void FUN_108bd6bf8(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c0dff20(lVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar3 = *(long *)(param_1 + 0x38);
  }
  else {
    lVar3 = param_1;
    func_0x00010c253180(param_1,param_2,param_4);
  }
  _objc_release(lVar1);
  if (lVar3 != param_3) {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_108bd6cdc;
    puStack_60 = &UNK_110844b80;
    _objc_retain(param_4);
    uStack_58 = param_4;
    lStack_50 = param_1;
    lStack_48 = param_3;
    func_0x00010c0f9420(uVar2,param_2,&puStack_78);
    _objc_release(uStack_58);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 108bd6cdc; end: 108bd6d7b;  */

void FUN_108bd6cdc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (*(long *)(param_1 + 0x20) == 0) {
    *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38) = *(undefined8 *)(param_1 + 0x30);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,
                        *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28));
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar1);
    _objc_release(puVar2);
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28);
    *(undefined **)(*(long *)(param_1 + 0x28) + 0x28) = puVar1;
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010be03d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s__dispatchAddFriendStatusUpdate_11255e8e0);
  return;
}



/* Entry: 108bd6d7c; end: 108bd6df7; -[SCSnapchatterFriendStatusManagerDefault _dispatchAddFriendStatusUpdate] */

void FUN_108bd6d7c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000107c312b8(0,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x000107c27d8c();
  _objc_release(uVar1);
  return;
}



/* Entry: 108bd6df8; end: 108bd6e0f;  */

void FUN_108bd6df8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7e9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 8),
             PTR_s_didUpdateWithAnnouncerIdentifier_1125bd418,
             &PTR____CFConstantStringClassReference_110f698f8);
  return;
}



/* Entry: 108bd6e10; end: 108bd6e27; -[SCSnapchatterFriendStatusManagerDefault _isAcceptingFriendRequestRelatedStatus:] */

uint FUN_108bd6e10(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  return (uint)(param_3 < 0xc) & 0xbc0U >> (ulong)((uint)param_3 & 0x1f);
}



/* Entry: 108bd6e28; end: 108bd6e87; -[SCSnapchatterFriendStatusManagerDefault .cxx_destruct] */

void FUN_108bd6e28(long param_1)

{
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



/* Entry: 108bd6e88; end: 108bd6e8f;  */

void FUN_108bd6e88(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 108bd6e90; end: 108bd6f1f;  */

bool FUN_108bd6e90(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  _objc_retain(param_2);
  uVar4 = *(ulong *)(param_1 + 0x20);
  lVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  if ((uVar4 & 1) == 0) {
    lVar3 = param_2;
    func_0x00010c2923e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar3 == 0;
    _objc_release();
  }
  else {
    bVar1 = true;
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  return bVar1;
}



/* Entry: 108bd6f20; end: 108bd714f; -[SCDocObjectCachedSnapchatterPublicInfoFetcher initWithDocObjectContext:usernameSnapchatterFetcher:remoteSnapchatterFetcher:userIdSnapchatterFetcher:currentDateProvider:grapheneLogger:] */

undefined1 *
FUN_108bd6f20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_68 = PTR_PTR_1126fdc00;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfef240();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126db078;
    _objc_alloc();
    func_0x00010c00db60();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar3;
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



/* Entry: 108bd7150; end: 108bd7157;  */

void FUN_108bd7150(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined4 uStack_8c;
  long lStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126d1590);
  if (param_2 == 0) {
    uStack_40 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_70,param_2);
  }
  lStack_88 = 0;
  lStack_80 = 0;
  uStack_78 = 0;
  uStack_8c = 0;
  puVar1 = &uStack_70;
  func_0x000107c310d0(puVar1,&lStack_88,&uStack_8c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_88 != 0) {
    lStack_80 = lStack_88;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108bd7158; end: 108bd72b7; -[SCDocObjectCachedSnapchatterPublicInfoFetcher cachedSnapchatterWithUserId:] */

void FUN_108bd7158(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  undefined *unaff_x23;
  undefined8 uVar4;
  long unaff_x24;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  long lStack_90;
  undefined *puStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010c08fa60();
  if (puVar1 == (undefined *)0x0) {
    lVar3 = 0;
  }
  else {
    unaff_x20 = *(long *)(param_1 + 0x48);
    puVar2 = param_3;
    func_0x00010c2448a0();
    _objc_retainAutoreleasedReturnValue();
    if (unaff_x20 == 0) {
      func_0x00010c244ce0();
      _objc_retainAutoreleasedReturnValue();
      param_4 = 1;
      unaff_x23 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_50 = param_3;
      func_0x00010bf0a140();
      _objc_retainAutoreleasedReturnValue();
      unaff_x24 = param_1;
      puVar2 = unaff_x23;
      func_0x00010c244d00();
      _objc_retainAutoreleasedReturnValue();
      unaff_x22 = unaff_x24;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x24);
      _objc_release(unaff_x23);
      _objc_release(param_1);
      if (unaff_x22 == 0) {
        lVar3 = 0;
      }
      else {
        lVar3 = unaff_x22;
        func_0x000108c20b50();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(unaff_x22);
    }
    else {
      _objc_retain(unaff_x20);
      lVar3 = unaff_x20;
    }
    _objc_release(unaff_x20);
  }
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
    return;
  }
  ___stack_chk_fail();
  pcStack_58 = FUN_108bd72b8;
  lStack_90 = unaff_x24;
  puStack_88 = unaff_x23;
  lStack_80 = unaff_x22;
  lStack_78 = lVar3;
  lStack_70 = unaff_x20;
  puStack_68 = param_3;
  puStack_60 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((param_5 != 0) && (param_6 != 0)) {
    _objc_initWeak(auStack_98,puVar1);
    uVar4 = *(undefined8 *)(puVar1 + 0x28);
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_108bd73f8;
    puStack_c8 = &UNK_110845158;
    _objc_copyWeak(auStack_a8,auStack_98);
    _objc_retain(puVar2);
    puStack_c0 = puVar2;
    uStack_a0 = param_4;
    _objc_retain(param_5);
    lStack_b8 = param_5;
    _objc_retain(param_6);
    lStack_b0 = param_6;
    func_0x000107c2a728(uVar4,&puStack_e0);
    _objc_release(lStack_b0);
    _objc_release(lStack_b8);
    _objc_release(puStack_c0);
    _objc_destroyWeak(auStack_a8);
    _objc_destroyWeak(auStack_98);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(puVar2);
  return;
}



/* Entry: 108bd72b8; end: 108bd73f7; -[SCDocObjectCachedSnapchatterPublicInfoFetcher snapchattersWithUserIds:requestSource:completionQueue:completionHandler:] */

void FUN_108bd72b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((param_5 != 0) && (param_6 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_108bd73f8;
    puStack_78 = &UNK_110845158;
    _objc_copyWeak(auStack_58,auStack_48);
    _objc_retain(param_3);
    uStack_70 = param_3;
    uStack_50 = param_4;
    _objc_retain(param_5);
    lStack_68 = param_5;
    _objc_retain(param_6);
    lStack_60 = param_6;
    func_0x000107c2a728(uVar1,&puStack_90);
    _objc_release(lStack_60);
    _objc_release(lStack_68);
    _objc_release(uStack_70);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108bd73f8; end: 108bd746b;  */

void FUN_108bd73f8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be14360();
  _objc_release(lVar1);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5a080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bd746c; end: 108bd75df; -[SCDocObjectCachedSnapchatterPublicInfoFetcher snapchattersWithUserIds:requestSource:completionQueue:localFetchCompletionHandler:remoteFetchCompletionHandler:] */

void FUN_108bd746c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,long param_7)

{
  undefined8 uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (((param_5 != 0) && (param_6 != 0)) && (param_7 != 0)) {
    _objc_initWeak(auStack_58,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_108bd75e0;
    puStack_90 = &UNK_110952b60;
    _objc_copyWeak(auStack_68,auStack_58);
    _objc_retain(param_3);
    uStack_88 = param_3;
    uStack_60 = param_4;
    _objc_retain(param_5);
    lStack_80 = param_5;
    _objc_retain(param_6);
    lStack_78 = param_6;
    _objc_retain(param_7);
    lStack_70 = param_7;
    func_0x000107c2a728(uVar1,&puStack_a8);
    _objc_release(lStack_70);
    _objc_release(lStack_78);
    _objc_release(lStack_80);
    _objc_release(uStack_88);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108bd75e0; end: 108bd7653;  */

void FUN_108bd75e0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be14360();
  _objc_release(lVar1);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  func_0x00010be5a080();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bd7654; end: 108bd7793; -[SCDocObjectCachedSnapchatterPublicInfoFetcher localAndRemoteSnapchattersWithUserIds:requestSource:completionQueue:completionHandler:] */

void FUN_108bd7654(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  long lStack_60;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if ((param_5 != 0) && (param_6 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_108bd7794;
    puStack_78 = &UNK_110845158;
    _objc_copyWeak(auStack_58,auStack_48);
    _objc_retain(param_3);
    uStack_70 = param_3;
    uStack_50 = param_4;
    _objc_retain(param_5);
    lStack_68 = param_5;
    _objc_retain(param_6);
    lStack_60 = param_6;
    func_0x000107c2a728(uVar1,&puStack_90);
    _objc_release(lStack_60);
    _objc_release(lStack_68);
    _objc_release(uStack_70);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108bd7794; end: 108bd77d7;  */

void FUN_108bd7794(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebd8c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bd77d8; end: 108bd77df; -[SCDocObjectCachedSnapchatterPublicInfoFetcher remoteSnapchatterPublicInfoFetcherRequestLimit] */

void FUN_108bd77d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12a430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_remoteSnapchatterPublicInfoFetch_112628328);
  return;
}



/* Entry: 108bd77e0; end: 108bd7a4b; -[SCDocObjectCachedSnapchatterPublicInfoFetcher _snapchattersWithUserIds:requestSource:completionQueue:completionHandler:localFetchCompletionHandler:remoteFetchCompletionHandler:] */

void FUN_108bd77e0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  ppuVar3 = &puStack_f0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_108bd7a4c;
    puStack_70 = &UNK_110849530;
    _objc_retain(param_6);
    puStack_68 = param_6;
    func_0x000107c27d8c(param_5,&puStack_88);
    puVar2 = puStack_68;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c225c20();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_90,param_1);
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_108bd7a60;
    puStack_d8 = &UNK_110ab66d0;
    _objc_retain(param_3);
    lStack_d0 = param_3;
    _objc_retain(puVar2);
    puStack_c8 = puVar2;
    _objc_copyWeak(auStack_a0,auStack_90);
    uStack_98 = param_4;
    _objc_retain(param_5);
    uStack_c0 = param_5;
    _objc_retain(param_6);
    puStack_b8 = param_6;
    _objc_retain(param_7);
    uStack_b0 = param_7;
    _objc_retain(param_8);
    uStack_a8 = param_8;
    _objc_retainBlock();
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c244e60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)((long)ppuVar3 + 0x10))(ppuVar3,uVar4,0);
    func_0x00010c0a1ec0(*(undefined8 *)(param_1 + 0x20));
    _objc_release(uVar4);
    _objc_release(ppuVar3);
    _objc_release(uStack_a8);
    _objc_release(uStack_b0);
    _objc_release(puStack_b8);
    _objc_release(uStack_c0);
    _objc_destroyWeak(auStack_a0);
    _objc_release(puStack_c8);
    _objc_release(lStack_d0);
    _objc_destroyWeak(auStack_90);
  }
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108bd7a4c; end: 108bd7a5f;  */

void FUN_108bd7a4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bd7a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 108bd7a60; end: 108bd7c2f;  */

void FUN_108bd7a60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = param_2;
  func_0x00010bf002e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ce860(uVar4);
  _objc_release(puVar2);
  _objc_release(uVar1);
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_108bd7c30;
    puStack_70 = &UNK_110ab66a0;
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    lVar3 = *(long *)(param_1 + 0x38);
    _objc_retain(lVar3);
    lStack_58 = lVar3;
    _objc_retain(param_2);
    uStack_68 = param_2;
    _objc_retain(param_3);
    uVar5 = *(undefined8 *)(param_1 + 0x40);
    uStack_60 = param_3;
    _objc_retain(uVar5);
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    uStack_50 = uVar5;
    _objc_retain(uVar4);
    uStack_48 = uVar4;
    func_0x000107c27d8c(uVar1,&puStack_88);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    _objc_release(uStack_60);
    _objc_release(uStack_68);
    lVar3 = lStack_58;
  }
  else {
    lVar3 = param_1 + 0x50;
    _objc_loadWeakRetained(lVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf00560(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_2;
    func_0x00010bf00d20(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be14360(lVar3);
    _objc_release(uVar1);
    _objc_release(uVar4);
  }
  _objc_release(lVar3);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 108bd7c30; end: 108bd7ceb;  */

void FUN_108bd7c30(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf00d20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1,*(undefined8 *)(param_1 + 0x28));
    _objc_release(uVar1);
  }
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf00d20(uVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1,*(undefined8 *)(param_1 + 0x28));
    _objc_release(uVar1);
  }
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108bd7cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,PTR____NSArray0__struct_11034ab48,0);
    return;
  }
  return;
}



/* Entry: 108bd7cec; end: 108bd801f; -[SCDocObjectCachedSnapchatterPublicInfoFetcher _fetchSnapchattersFromCacheForUserIds:fetchedSnapchatters:requestSource:completionQueue:completionHandler:localFetchCompletionHandler:remoteFetchCompletionHandler:] */

void FUN_108bd7cec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8,undefined *param_9
                  )

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010c244ce0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c244d00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x000107c31908(lVar2,&PTR___NSConcreteGlobalBlock_110ab67e0);
  uVar3 = param_4;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  lVar4 = lVar2;
  func_0x00010c0ba200();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ce860();
  if (param_8 != 0) {
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0xc2000000;
    uStack_88 = 0x108bd8028;
    puStack_80 = &UNK_11084aaa8;
    _objc_retain(param_8);
    lStack_70 = param_8;
    _objc_retain(uVar3);
    uStack_78 = uVar3;
    func_0x000107c27d8c(param_6,&puStack_98);
    _objc_release(uStack_78);
    _objc_release(lStack_70);
  }
  puVar6 = puVar5;
  func_0x00010bf529e0();
  if (puVar6 == (undefined *)0x0) {
    if (param_7 != 0) {
      puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_c0 = 0xc2000000;
      uStack_b8 = 0x108bd803c;
      puStack_b0 = &UNK_11084aaa8;
      _objc_retain(param_7);
      lStack_a0 = param_7;
      _objc_retain(uVar3);
      uStack_a8 = uVar3;
      func_0x000107c27d8c(param_6,&puStack_c8);
      _objc_release(uStack_a8);
      _objc_release(lStack_a0);
    }
    if (param_9 == (undefined *)0x0) goto LAB_108bd7f70;
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    uStack_e0 = 0x108bd8050;
    puStack_d8 = &UNK_110849530;
    _objc_retain(param_9);
    puStack_d0 = param_9;
    func_0x000107c27d8c(param_6,&puStack_f0);
    puVar6 = puStack_d0;
  }
  else {
    puVar6 = puVar5;
    func_0x00010bf00560(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be14380(param_1);
  }
  _objc_release(puVar6);
LAB_108bd7f70:
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf529e0(lVar1);
  func_0x00010c0a1e80(uVar7);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf529e0(param_3);
  func_0x00010c0a1ee0(uVar7);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(uVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 108bd8020; end: 108bd8067;  */

void FUN_108bd8020(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 108bd8068; end: 108bd83c3; -[SCDocObjectCachedSnapchatterPublicInfoFetcher _fetchSnapchattersFromServerForUserIds:fetchedSnapchatters:requestSource:completionQueue:completionHandler:remoteFetchCompletionHandler:] */

void FUN_108bd8068(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_e0 [8];
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar1 = param_1;
  func_0x00010be16100();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    if (param_7 != 0) {
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_108bd83c4;
      puStack_80 = &UNK_11084aaa8;
      _objc_retain(param_7);
      lStack_70 = param_7;
      _objc_retain(param_4);
      uStack_78 = param_4;
      func_0x000107c27d8c(param_6,&puStack_98);
      _objc_release(uStack_78);
      _objc_release(lStack_70);
    }
    if (param_8 != 0) {
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0xc2000000;
      uStack_b0 = 0x108bd83d8;
      puStack_a8 = &UNK_110849530;
      _objc_retain(param_8);
      lStack_a0 = param_8;
      func_0x000107c27d8c(param_6,&puStack_c0);
      _objc_release(lStack_a0);
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf529e0(lVar1);
    func_0x00010c0a1ea0(uVar6);
    func_0x00010bf529e0(param_3);
    func_0x00010c12a420(*(undefined8 *)(param_1 + 8));
    func_0x00010c12a420();
    func_0x00010bf529e0();
    lVar2 = lVar1;
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    _objc_initWeak(auStack_c8,param_1);
    puVar3 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf17b60();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bf17b60();
    _objc_release(puVar3);
    uVar6 = *(undefined8 *)(param_1 + 8);
    puStack_d8 = puVar5;
    _objc_retain(param_7);
    _objc_retain(param_4);
    _objc_retain(param_8);
    _objc_copyWeak(auStack_e0,auStack_c8);
    _objc_retain(lVar2);
    puStack_d0 = puVar4;
    func_0x00010c244ea0(uVar6);
    func_0x00010c0a1ec0(*(undefined8 *)(param_1 + 0x20));
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_e0);
    _objc_release(param_8);
    _objc_release(param_4);
    _objc_release(param_7);
    _objc_destroyWeak(auStack_c8);
    lVar1 = lVar2;
  }
  _objc_release(lVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bd83c4; end: 108bd83ef;  */

void FUN_108bd83c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bd83d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108bd83f0; end: 108bd8567;  */

void FUN_108bd83f0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf09f80(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000107c31914();
    uVar4 = uVar3;
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),uVar4,param_3);
    _objc_release(uVar4);
  }
  lVar5 = *(long *)(param_1 + 0x38);
  if (lVar5 != 0) {
    (**(code **)(lVar5 + 0x10))(lVar5,param_2,param_3);
  }
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_3 == 0) {
      func_0x00010bee6160(param_1);
      func_0x00010bed9e20(param_1);
    }
    else {
      func_0x00010c0a1ec0(*(undefined8 *)(param_1 + 0x20));
    }
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf941e0();
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108bd8568; end: 108bd85bb; -[SCDocObjectCachedSnapchatterPublicInfoFetcher _filterInvalidUserId:] */

void FUN_108bd8568(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108bd85bc;
  puStack_20 = &UNK_110856a28;
  uStack_18 = param_1;
  func_0x000107c31910(param_3,&puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bd85bc; end: 108bd8693;  */

bool FUN_108bd85bc(double param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c078c00();
  if (((ulong)puVar2 & 1) == 0) {
    lVar3 = *(long *)(*(long *)(param_2 + 0x20) + 0x38);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      bVar1 = true;
    }
    else {
      uVar4 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x38);
      func_0x00010c0e00e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf885a0();
      dVar5 = param_1;
      func_0x0001090216c8(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18));
      bVar1 = 86400.0 <= ABS(dVar5 - param_1);
      _objc_release(uVar4);
    }
  }
  else {
    bVar1 = false;
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 108bd8694; end: 108bd8767; -[SCDocObjectCachedSnapchatterPublicInfoFetcher _updateInvalidUserIdsFromSnapchatters:userIds:] */

void FUN_108bd8694(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  lVar2 = param_4;
  func_0x00010bf529e0();
  if (lVar1 != lVar2) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_108bd8768;
    puStack_50 = &UNK_110848ba8;
    _objc_retain(param_4);
    lStack_48 = param_4;
    _objc_retain(param_3);
    lStack_40 = param_3;
    lStack_38 = param_1;
    func_0x00010c0f7fc0(uVar3,param_2,&puStack_68);
    _objc_release(lStack_40);
    _objc_release(lStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bd8768; end: 108bd891b;  */

void FUN_108bd8768(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  undefined *puVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c225c20(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0,param_2,
                      *(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  ppuVar7 = &PTR___NSConcreteGlobalBlock_110ab6770;
  func_0x000107c31908(uVar3,&PTR___NSConcreteGlobalBlock_110ab6770);
  func_0x00010c225c20(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c0ce860(puVar2);
  _objc_retain(puVar2);
  puVar5 = puVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar5 != (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(puVar2);
      }
      puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x0001090216c8(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x18));
      func_0x00010c0df720(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x38));
      _objc_release(puVar6);
      puVar9 = puVar9 + 1;
    } while (puVar5 != puVar9);
    puVar5 = puVar2;
    func_0x00010bf52a60();
  }
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(ppuVar7,PTR_s_userId_112682320);
  return;
}



/* Entry: 108bd891c; end: 108bd8923;  */

void FUN_108bd891c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 108bd8924; end: 108bd89fb; -[SCDocObjectCachedSnapchatterPublicInfoFetcher _upsertDocObjectFromSnapchatters:] */

void FUN_108bd8924(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c0f7fc0(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 108bd89fc; end: 108bd8a87;  */

void FUN_108bd89fc(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108bd8a88;
  puStack_30 = &UNK_110ab6790;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_28 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c31908(uVar1,&puStack_48);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be82800();
  _objc_release(param_1);
  _objc_release(uVar1);
  return;
}



/* Entry: 108bd8a88; end: 108bd8c4f;  */

void FUN_108bd8a88(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126d1590;
  uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x18);
  _objc_retain(uVar9);
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c294420(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf85d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a6a0(param_3);
  uVar5 = param_3;
  func_0x00010bf1bae0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c242760(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001090216c8(uVar9);
  _objc_release(uVar9);
  uVar9 = param_3;
  func_0x00010bf5b820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26e7a0();
  uVar7 = param_3;
  func_0x00010bf5b820();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c116cc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06bb80();
  func_0x00010c05c0c0(param_1,puVar1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108bd8c50; end: 108bd8cdf; -[SCDocObjectCachedSnapchatterPublicInfoFetcher _processUpsertDocObjectFromPublicInfo:] */

void FUN_108bd8c50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108bd8ce0;
  puStack_30 = &UNK_11085adb8;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1,param_2,&puStack_48,0,0);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 108bd8ce0; end: 108bd8deb;  */

void FUN_108bd8ce0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar5 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar5);
  lVar2 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      func_0x000108bf6060(param_2,*(undefined8 *)(lVar6 * 8));
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c24f780(*(undefined8 *)(param_2 + 0x40));
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  _objc_retain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108bd8dec; end: 108bd8e1f; -[SCDocObjectCachedSnapchatterPublicInfoFetcher snapchattersPublicInfoObserver] */

void FUN_108bd8dec(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c24f780(*(undefined8 *)(param_1 + 0x40));
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108bd8e20; end: 108bd8e23; -[SCDocObjectCachedSnapchatterPublicInfoFetcher _logUnexpectedUserIds:requestSource:] */

void FUN_108bd8e20(void)

{
  return;
}



/* Entry: 108bd8e24; end: 108bd8f6b; -[SCDocObjectCachedSnapchatterPublicInfoFetcher localAndRemoteSnapchatterWithUsername:completionQueue:completionHandler:] */

void FUN_108bd8e24(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  long lStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((param_4 != 0) && (param_5 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    func_0x00010c0b2b00(*(undefined8 *)(param_1 + 0x20));
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_108bd8f6c;
    puStack_70 = &UNK_110857fd0;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    uStack_68 = param_3;
    _objc_retain(param_4);
    lStack_60 = param_4;
    _objc_retain(param_5);
    lStack_58 = param_5;
    func_0x000107c2a728(uVar1,&puStack_88);
    _objc_release(lStack_58);
    _objc_release(lStack_60);
    _objc_release(uStack_68);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bd8f6c; end: 108bd8fa3;  */

void FUN_108bd8f6c(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bebd780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bd8fa4; end: 108bd915b; -[SCDocObjectCachedSnapchatterPublicInfoFetcher _snapchatterWithUsername:completionQueue:completionHandler:] */

void FUN_108bd8fa4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_108bd915c;
    puStack_50 = &UNK_110849530;
    _objc_retain(param_5);
    uStack_48 = param_5;
    func_0x000107c27d8c(param_4,&puStack_68);
    _objc_release(uStack_48);
  }
  else {
    _objc_initWeak(auStack_70,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_copyWeak(auStack_78,auStack_70);
    func_0x00010c244960(uVar3);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_78);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_70);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bd915c; end: 108bd916f;  */

void FUN_108bd915c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bd916c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0);
  return;
}



/* Entry: 108bd9170; end: 108bd925f;  */

void FUN_108bd9170(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_2 == 0) {
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained(param_1);
    func_0x00010be141a0();
  }
  else {
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_108bd9260;
    puStack_50 = &UNK_11084a9e8;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    lVar2 = *(long *)(param_1 + 0x30);
    _objc_retain(lVar2);
    lStack_38 = lVar2;
    _objc_retain(param_2);
    lStack_48 = param_2;
    _objc_retain(param_3);
    uStack_40 = param_3;
    func_0x000107c27d8c(uVar1,&puStack_68);
    _objc_release(uStack_40);
    _objc_release(lStack_48);
    param_1 = lStack_38;
  }
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 108bd9260; end: 108bd9273;  */

void FUN_108bd9260(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bd9270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 108bd9274; end: 108bd93af; -[SCDocObjectCachedSnapchatterPublicInfoFetcher _fetchSnapchatterFromCacheForUsername:completionQueue:completionHandler:] */

void FUN_108bd9274(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010c244ce0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c244d20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    func_0x00010be141e0(param_1);
  }
  else {
    lVar1 = lVar2;
    func_0x000108c20b50();
    _objc_retainAutoreleasedReturnValue();
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_108bd93b0;
    puStack_58 = &UNK_11084aaa8;
    _objc_retain(param_5);
    lStack_50 = lVar1;
    uStack_48 = param_5;
    _objc_retain(lVar1);
    func_0x000107c27d8c(param_4,&puStack_70);
    _objc_release(lStack_50);
    _objc_release(uStack_48);
    _objc_release(lVar1);
  }
  _objc_release(lVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bd93b0; end: 108bd93c3;  */

void FUN_108bd93b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bd93c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108bd93c4; end: 108bd94e7; -[SCDocObjectCachedSnapchatterPublicInfoFetcher _fetchSnapchatterFromServerForUsername:completionQueue:completionHandler:] */

void FUN_108bd93c4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_50,auStack_48);
  func_0x00010c244960(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bd94e8; end: 108bd95bf;  */

void FUN_108bd94e8(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2,param_3);
  if ((param_2 != 0) && (param_3 == 0)) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained();
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bee6160(param_1);
    _objc_release(puVar1);
    _objc_release(param_1);
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar2) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_2 + 0x48,0);
  _objc_storeStrong(param_2 + 0x40,0);
  _objc_storeStrong(param_2 + 0x38,0);
  _objc_storeStrong(param_2 + 0x30,0);
  _objc_storeStrong(param_2 + 0x28,0);
  _objc_storeStrong(param_2 + 0x20,0);
  _objc_storeStrong(param_2 + 0x18,0);
  _objc_storeStrong(param_2 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_2 + 8,0);
  return;
}



/* Entry: 108bd95c0; end: 108bd9643; -[SCDocObjectCachedSnapchatterPublicInfoFetcher .cxx_destruct] */

void FUN_108bd95c0(long param_1)

{
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



/* Entry: 108bd9644; end: 108bd9653;  */

void FUN_108bd9644(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c26e7a0(param_2);
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c116d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  func_0x000108c09008(puVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126b15c8;
  _objc_alloc();
  uVar2 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010bf85d80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07a6a0(param_2);
  uVar6 = param_2;
  func_0x00010bf1bae0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010c242760();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_2;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06bb80();
  func_0x00010c05c0e0(puVar1);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(puVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108bd9654; end: 108bd967b;  */

void FUN_108bd9654(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 108bd967c; end: 108bd9973; -[SCDocObjectIncomingFriendsRepository initWithDocObjectContext:snapchattersFetchedResultObserverRepository:incomingFriendsLastViewedTimestamp:userPreferences:appStartExperimentReader:] */

undefined8 *
FUN_108bd967c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_80 = PTR_PTR_1126fdc08;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    uVar2 = 0;
    _dispatch_queue_attr_make_with_qos_class(0,0x11,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = &UNK_10f507771;
    _dispatch_queue_create(&UNK_10f507771,uVar2);
    _objc_release(uVar2);
    _objc_retain(puVar3);
    uVar2 = puVar1[2];
    puVar1[2] = puVar3;
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    _objc_opt_new();
    func_0x00010c21b4a0();
    _objc_retain(param_7);
    uVar2 = puVar1[9];
    puVar1[9] = param_7;
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[6];
    puVar1[6] = puVar5;
    _objc_release(uVar2);
    puVar5 = PTR_PTR_1126ae720;
    _objc_retain(param_3);
    _objc_retain(puVar3);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR_PTR_1126ae720;
    _objc_retain(param_5);
    _objc_retain(puVar4);
    _objc_retain(puVar5);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[3];
    puVar1[3] = puVar4;
    _objc_retain(puVar4);
    _objc_release(uVar2);
    uVar2 = puVar1[7];
    puVar1[7] = puVar5;
    _objc_retain(puVar5);
    _objc_release(uVar2);
    uVar2 = puVar1[8];
    puVar1[8] = puVar6;
    _objc_release(uVar2);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(param_5);
    _objc_release(puVar5);
    _objc_release(puVar3);
    _objc_release(param_3);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108bd9974; end: 108bd9983;  */

/* WARNING: Possible PIC construction at 0x000108bf204c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000108bf2050) */
/* WARNING: Removing unreachable block (ram,0x000108bf2208) */
/* WARNING: Removing unreachable block (ram,0x000108bf2210) */
/* WARNING: Removing unreachable block (ram,0x000108bf2218) */
/* WARNING: Removing unreachable block (ram,0x000108bf2220) */
/* WARNING: Removing unreachable block (ram,0x000108bf2234) */
/* WARNING: Removing unreachable block (ram,0x000108bf2240) */
/* WARNING: Removing unreachable block (ram,0x000108bf224c) */
/* WARNING: Removing unreachable block (ram,0x000108bf2258) */
/* WARNING: Removing unreachable block (ram,0x000108bf2260) */
/* WARNING: Removing unreachable block (ram,0x000108bf2264) */
/* WARNING: Removing unreachable block (ram,0x000108bf2278) */
/* WARNING: Removing unreachable block (ram,0x000108bf2284) */
/* WARNING: Removing unreachable block (ram,0x000108bf2290) */
/* WARNING: Removing unreachable block (ram,0x000108bf229c) */
/* WARNING: Removing unreachable block (ram,0x000108bf22a4) */
/* WARNING: Removing unreachable block (ram,0x000108bf22a8) */
/* WARNING: Removing unreachable block (ram,0x000108bf22bc) */
/* WARNING: Removing unreachable block (ram,0x000108bf22c8) */
/* WARNING: Removing unreachable block (ram,0x000108bf22d4) */
/* WARNING: Removing unreachable block (ram,0x000108bf22e0) */
/* WARNING: Removing unreachable block (ram,0x000108bf22e8) */
/* WARNING: Removing unreachable block (ram,0x000108bf22ec) */
/* WARNING: Removing unreachable block (ram,0x000108bf2300) */
/* WARNING: Removing unreachable block (ram,0x000108bf230c) */
/* WARNING: Removing unreachable block (ram,0x000108bf2318) */
/* WARNING: Removing unreachable block (ram,0x000108bf2324) */
/* WARNING: Removing unreachable block (ram,0x000108bf232c) */
/* WARNING: Removing unreachable block (ram,0x000108bf2330) */
/* WARNING: Removing unreachable block (ram,0x000108bf234c) */
/* WARNING: Removing unreachable block (ram,0x000108bf2358) */
/* WARNING: Removing unreachable block (ram,0x000108bf2364) */
/* WARNING: Removing unreachable block (ram,0x000108bf2370) */
/* WARNING: Removing unreachable block (ram,0x000108bf23f8) */
/* WARNING: Removing unreachable block (ram,0x000108bf2450) */
/* WARNING: Removing unreachable block (ram,0x000108bf2470) */
/* WARNING: Removing unreachable block (ram,0x000108bf23d4) */
/* WARNING: Removing unreachable block (ram,0x000108bf10ec) */
/* WARNING: Removing unreachable block (ram,0x000108bf1134) */
/* WARNING: Removing unreachable block (ram,0x000108bf10f8) */
/* WARNING: Removing unreachable block (ram,0x000108bf113c) */
/* WARNING: Removing unreachable block (ram,0x000108bf1288) */
/* WARNING: Removing unreachable block (ram,0x000108bf1290) */
/* WARNING: Removing unreachable block (ram,0x000108bf1298) */
/* WARNING: Removing unreachable block (ram,0x000108bf12a0) */
/* WARNING: Removing unreachable block (ram,0x000108bf12b4) */
/* WARNING: Removing unreachable block (ram,0x000108bf12c0) */
/* WARNING: Removing unreachable block (ram,0x000108bf12cc) */
/* WARNING: Removing unreachable block (ram,0x000108bf12d8) */
/* WARNING: Removing unreachable block (ram,0x000108bf12e0) */
/* WARNING: Removing unreachable block (ram,0x000108bf12e4) */
/* WARNING: Removing unreachable block (ram,0x000108bf12f8) */
/* WARNING: Removing unreachable block (ram,0x000108bf1304) */
/* WARNING: Removing unreachable block (ram,0x000108bf1310) */
/* WARNING: Removing unreachable block (ram,0x000108bf131c) */
/* WARNING: Removing unreachable block (ram,0x000108bf1324) */
/* WARNING: Removing unreachable block (ram,0x000108bf1328) */
/* WARNING: Removing unreachable block (ram,0x000108bf133c) */
/* WARNING: Removing unreachable block (ram,0x000108bf1348) */
/* WARNING: Removing unreachable block (ram,0x000108bf1354) */
/* WARNING: Removing unreachable block (ram,0x000108bf1360) */
/* WARNING: Removing unreachable block (ram,0x000108bf1368) */
/* WARNING: Removing unreachable block (ram,0x000108bf136c) */

void FUN_108bd9974(long param_1)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined ***pppuVar8;
  undefined ***pppuVar9;
  undefined ***pppuVar10;
  undefined ***pppuVar11;
  undefined4 uVar12;
  undefined **ppuVar13;
  undefined1 *puVar14;
  undefined ***pppuVar15;
  undefined8 uVar16;
  undefined4 uStack_14a4;
  long lStack_14a0;
  long lStack_1498;
  undefined8 uStack_1490;
  undefined **ppuStack_1488;
  undefined4 uStack_1480;
  undefined4 uStack_1470;
  undefined1 uStack_1458;
  undefined8 uStack_1450;
  undefined8 uStack_1448;
  long lStack_1440;
  undefined8 uStack_1438;
  undefined8 uStack_1430;
  long *plStack_1428;
  long *plStack_1420;
  undefined1 uStack_1411;
  undefined **ppuStack_1410;
  undefined4 uStack_1408;
  undefined2 uStack_13f8;
  byte bStack_13f6;
  byte bStack_13f5;
  undefined1 *puStack_13d8;
  undefined ***pppuStack_13d0;
  long lStack_13c8;
  undefined8 uStack_13c0;
  undefined8 uStack_13b8;
  long *plStack_13b0;
  long *plStack_13a8;
  undefined1 uStack_1399;
  undefined **ppuStack_1398;
  undefined4 uStack_1390;
  undefined2 uStack_1380;
  byte bStack_137e;
  byte bStack_137d;
  undefined1 *puStack_1360;
  undefined ***pppuStack_1358;
  long lStack_1350;
  undefined8 uStack_1348;
  undefined8 uStack_1340;
  long *plStack_1338;
  long *plStack_1330;
  undefined8 uStack_1328;
  undefined8 uStack_1320;
  undefined8 uStack_1318;
  undefined ***pppuStack_1310;
  undefined ***pppuStack_1308;
  undefined *puStack_1300;
  undefined *puStack_12f8;
  undefined *puStack_12f0;
  undefined ***pppuStack_12e8;
  undefined ***pppuStack_12e0;
  undefined ***pppuStack_12d8;
  undefined8 ****ppppuStack_12d0;
  undefined *puStack_12c8;
  undefined4 uStack_12b8;
  undefined1 uStack_12b1;
  long lStack_12b0;
  long lStack_12a8;
  undefined8 uStack_12a0;
  long lStack_1298;
  long lStack_1290;
  undefined **ppuStack_1280;
  undefined4 uStack_1278;
  undefined4 uStack_1268;
  undefined8 uStack_1250;
  undefined8 uStack_1248;
  undefined8 uStack_1240;
  long lStack_1238;
  long lStack_1230;
  undefined8 uStack_1228;
  long *plStack_1220;
  long *plStack_1218;
  undefined1 uStack_1209;
  undefined **ppuStack_1208;
  undefined4 uStack_1200;
  undefined2 uStack_11f0;
  byte bStack_11ee;
  byte bStack_11ed;
  undefined1 *puStack_11d0;
  undefined ***pppuStack_11c8;
  long lStack_11c0;
  long lStack_11b8;
  undefined8 uStack_11b0;
  long *plStack_11a8;
  long *plStack_11a0;
  undefined **ppuStack_1198;
  undefined4 uStack_1190;
  undefined4 uStack_1180;
  undefined1 uStack_1168;
  undefined8 uStack_1160;
  undefined8 uStack_1158;
  long lStack_1150;
  undefined8 uStack_1148;
  undefined8 uStack_1140;
  long *plStack_1138;
  long *plStack_1130;
  undefined1 uStack_1121;
  undefined **ppuStack_1120;
  undefined4 uStack_1118;
  undefined2 uStack_1108;
  byte bStack_1106;
  byte bStack_1105;
  undefined1 *puStack_10e8;
  undefined ***pppuStack_10e0;
  long lStack_10d8;
  undefined8 uStack_10d0;
  undefined8 uStack_10c8;
  long *plStack_10c0;
  long *plStack_10b8;
  undefined1 uStack_10a9;
  undefined **ppuStack_10a8;
  undefined4 uStack_10a0;
  undefined2 uStack_1090;
  byte bStack_108e;
  byte bStack_108d;
  undefined1 *puStack_1070;
  undefined ***pppuStack_1068;
  long lStack_1060;
  undefined8 uStack_1058;
  undefined8 uStack_1050;
  long *plStack_1048;
  long *plStack_1040;
  undefined **ppuStack_1038;
  undefined4 uStack_1030;
  undefined2 uStack_1020;
  byte bStack_101e;
  byte bStack_101d;
  undefined ***pppuStack_1000;
  undefined ***pppuStack_ff8;
  long lStack_ff0;
  undefined8 uStack_fe8;
  undefined8 uStack_fe0;
  long *plStack_fd8;
  long *plStack_fd0;
  undefined8 uStack_fc8;
  undefined8 uStack_fc0;
  undefined8 uStack_fb8;
  undefined8 uStack_fb0;
  undefined1 uStack_fa8;
  undefined1 uStack_fa7;
  undefined4 uStack_fa4;
  undefined *puStack_fa0;
  undefined8 uStack_f98;
  long alStack_f90 [2];
  undefined8 ****ppppuStack_f20;
  undefined *puStack_f18;
  undefined4 uStack_f08;
  undefined1 uStack_f01;
  long lStack_f00;
  long lStack_ef8;
  undefined8 uStack_ef0;
  long lStack_ee8;
  long lStack_ee0;
  undefined **ppuStack_ed0;
  undefined4 uStack_ec8;
  undefined4 uStack_eb8;
  undefined1 uStack_ea0;
  undefined8 uStack_e98;
  undefined8 uStack_e90;
  long lStack_e88;
  undefined8 uStack_e80;
  undefined8 uStack_e78;
  long *plStack_e70;
  long *plStack_e68;
  undefined1 uStack_e59;
  undefined **ppuStack_e58;
  undefined4 uStack_e50;
  undefined2 uStack_e40;
  byte bStack_e3e;
  byte bStack_e3d;
  undefined1 *puStack_e20;
  undefined ***pppuStack_e18;
  long lStack_e10;
  undefined8 uStack_e08;
  undefined8 uStack_e00;
  long *plStack_df8;
  long *plStack_df0;
  undefined1 uStack_de1;
  undefined **ppuStack_de0;
  undefined4 uStack_dd8;
  undefined2 uStack_dc8;
  byte bStack_dc6;
  byte bStack_dc5;
  undefined1 *puStack_da8;
  undefined ***pppuStack_da0;
  long lStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  long *plStack_d80;
  long *plStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined1 uStack_d50;
  undefined1 uStack_d4f;
  undefined4 uStack_d4c;
  undefined *puStack_d48;
  undefined8 uStack_d40;
  long lStack_d38;
  undefined1 *puStack_d30;
  long lStack_d28;
  undefined ***pppuStack_d20;
  undefined1 *puStack_d18;
  undefined **ppuStack_d10;
  undefined8 uStack_d08;
  undefined8 *puStack_d00;
  undefined ***pppuStack_cf8;
  undefined8 ****ppppuStack_cf0;
  undefined *puStack_ce8;
  undefined8 uStack_ce0;
  long lStack_cd8;
  undefined8 *puStack_cd0;
  undefined8 uStack_cc8;
  undefined8 uStack_cc0;
  undefined8 uStack_cb8;
  undefined8 uStack_cb0;
  undefined8 uStack_ca8;
  undefined **appuStack_ca0 [17];
  long lStack_c18;
  undefined ***pppuStack_c10;
  undefined ***pppuStack_c08;
  undefined ***pppuStack_c00;
  undefined1 *puStack_bf8;
  undefined **ppuStack_bf0;
  undefined ***pppuStack_be8;
  undefined ***pppuStack_be0;
  long lStack_bd8;
  undefined1 ****ppppuStack_bd0;
  undefined *puStack_bc8;
  undefined1 auStack_b88 [232];
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined1 auStack_a81 [120];
  undefined8 uStack_a09;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_8f0;
  undefined ***pppuStack_8e0;
  undefined ***pppuStack_8d8;
  undefined **ppuStack_8d0;
  undefined8 uStack_8c8;
  undefined ***pppuStack_8c0;
  undefined ***pppuStack_8b8;
  undefined *puStack_8b0;
  long lStack_8a8;
  undefined ***pppuStack_8a0;
  long lStack_898;
  undefined1 ***pppuStack_890;
  undefined *puStack_888;
  undefined4 uStack_878;
  undefined1 uStack_871;
  long lStack_870;
  long lStack_868;
  undefined8 uStack_860;
  undefined **ppuStack_858;
  undefined **ppuStack_850;
  undefined **ppuStack_840;
  undefined4 uStack_838;
  undefined4 uStack_828;
  undefined1 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  long lStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  long *plStack_7e0;
  long *plStack_7d8;
  undefined1 uStack_7c9;
  undefined **ppuStack_7c8;
  undefined4 uStack_7c0;
  undefined2 uStack_7b0;
  byte bStack_7ae;
  byte bStack_7ad;
  undefined1 *puStack_790;
  undefined ***pppuStack_788;
  long lStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  long *plStack_768;
  long *plStack_760;
  undefined1 uStack_751;
  undefined **ppuStack_750;
  undefined4 uStack_748;
  undefined2 uStack_738;
  byte bStack_736;
  byte bStack_735;
  undefined1 *puStack_718;
  undefined ***pppuStack_710;
  long lStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  long *plStack_6f0;
  long *plStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined1 uStack_6c0;
  undefined1 uStack_6bf;
  undefined4 uStack_6bc;
  undefined *puStack_6b8;
  undefined8 uStack_6b0;
  long lStack_6a8;
  undefined ***pppuStack_6a0;
  undefined ***pppuStack_698;
  undefined ***pppuStack_690;
  undefined ***pppuStack_688;
  undefined *puStack_680;
  long lStack_678;
  undefined ***pppuStack_670;
  long lStack_668;
  undefined1 **ppuStack_660;
  undefined *puStack_658;
  undefined ***pppuStack_648;
  long lStack_640;
  undefined4 uStack_638;
  undefined1 uStack_631;
  long lStack_630;
  long lStack_628;
  undefined8 uStack_620;
  long lStack_618;
  long lStack_610;
  undefined **ppuStack_600;
  undefined4 uStack_5f8;
  undefined4 uStack_5e8;
  undefined1 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  long lStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  long *plStack_5a0;
  long *plStack_598;
  undefined1 uStack_589;
  undefined **ppuStack_588;
  undefined4 uStack_580;
  undefined2 uStack_570;
  byte bStack_56e;
  byte bStack_56d;
  undefined1 *puStack_550;
  undefined ***pppuStack_548;
  long lStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  long *plStack_528;
  long *plStack_520;
  undefined **ppuStack_518;
  undefined4 uStack_510;
  undefined4 uStack_500;
  undefined1 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  long lStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  long *plStack_4b8;
  long *plStack_4b0;
  undefined1 uStack_4a1;
  undefined **ppuStack_4a0;
  undefined4 uStack_498;
  undefined2 uStack_488;
  byte bStack_486;
  byte bStack_485;
  undefined1 *puStack_468;
  undefined ***pppuStack_460;
  long lStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  long *plStack_440;
  long *plStack_438;
  undefined1 uStack_42a;
  undefined1 uStack_429;
  undefined **ppuStack_428;
  undefined4 uStack_420;
  undefined1 uStack_410;
  byte bStack_40f;
  byte bStack_40e;
  byte bStack_40d;
  undefined1 *puStack_3f0;
  undefined1 *puStack_3e8;
  long lStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  long *plStack_3c8;
  long *plStack_3c0;
  undefined **ppuStack_3b8;
  undefined4 uStack_3b0;
  undefined2 uStack_3a0;
  byte bStack_39e;
  byte bStack_39d;
  undefined ***pppuStack_380;
  undefined ***pppuStack_378;
  long lStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  long *plStack_358;
  long *plStack_350;
  undefined **ppuStack_348;
  undefined4 uStack_340;
  undefined2 uStack_330;
  byte bStack_32e;
  byte bStack_32d;
  undefined ***pppuStack_310;
  undefined ***pppuStack_308;
  long lStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long *plStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined1 uStack_2b8;
  undefined1 uStack_2b7;
  undefined4 uStack_2b4;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  long alStack_2a0 [2];
  undefined1 *puStack_240;
  undefined *puStack_238;
  undefined4 uStack_228;
  undefined1 uStack_221;
  long lStack_220;
  long lStack_218;
  undefined8 uStack_210;
  long lStack_208;
  long lStack_200;
  undefined **ppuStack_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1d8;
  undefined1 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long *plStack_190;
  long *plStack_188;
  undefined1 uStack_179;
  undefined **ppuStack_178;
  undefined4 uStack_170;
  undefined2 uStack_160;
  byte bStack_15e;
  byte bStack_15d;
  undefined1 *puStack_140;
  undefined ***pppuStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long *plStack_118;
  long *plStack_110;
  undefined1 uStack_101;
  undefined **ppuStack_100;
  undefined4 uStack_f8;
  undefined2 uStack_e8;
  byte bStack_e6;
  byte bStack_e5;
  undefined1 *puStack_c8;
  undefined ***pppuStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined4 uStack_6c;
  undefined *puStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar7 = *(long *)(param_1 + 0x20);
  uVar16 = *(undefined8 *)(param_1 + 0x28);
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(uVar16);
  _objc_opt_class(PTR_PTR_1126b15c8);
  if (lVar7 == 0) {
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010bfa8fc0(&uStack_90,lVar7);
  }
  puVar2 = &uStack_101;
  func_0x000108c2e2f8();
  puVar14 = &uStack_179;
  func_0x000107c2a7fc();
  uStack_1e8 = 0xf;
  uStack_1d8 = 0x100;
  uStack_1c0 = 0;
  ppuStack_1f0 = &PTR_DAT_1108629c8;
  uStack_1b0 = 0;
  uStack_1b8 = 0;
  uStack_1a0 = 0;
  lStack_1a8 = 0;
  plStack_190 = (long *)0x0;
  uStack_198 = 0;
  plStack_188 = (long *)0x0;
  bStack_15e = puVar14[0x1a];
  bStack_15d = puVar14[0x1b];
  uStack_170 = 10;
  uStack_160 = 0x100;
  ppuStack_178 = &PTR_DAT_1108629c8;
  pppuStack_138 = &ppuStack_1f0;
  uStack_128 = 0;
  lStack_130 = 0;
  plStack_118 = (long *)0x0;
  uStack_120 = 0;
  plStack_110 = (long *)0x0;
  bStack_e6 = puVar2[0x1a] | bStack_15e;
  bStack_e5 = puVar2[0x1b] & bStack_15d;
  uStack_f8 = 4;
  uStack_e8 = 0x100;
  ppuStack_100 = &PTR_DAT_1108629c8;
  pppuStack_c0 = &ppuStack_178;
  uStack_b0 = 0;
  lStack_b8 = 0;
  plStack_a0 = (long *)0x0;
  uStack_a8 = 0;
  plStack_98 = (long *)0x0;
  puVar3 = &uStack_221;
  puStack_140 = puVar14;
  puStack_c8 = puVar2;
  func_0x000108c2db04();
  uStack_78 = *(undefined8 *)(puVar3 + 0x10);
  uStack_70 = puVar3[0x19];
  uStack_6f = puVar3[0x18];
  uStack_60 = *(undefined8 *)(puVar3 + 0x28);
  uStack_6c = 1;
  puStack_68 = &UNK_108bf5ed4;
  lStack_218 = 0;
  uStack_210 = 0;
  lStack_220 = 0;
  func_0x000100c435d0(&lStack_220,&uStack_78,&lStack_58,1);
  func_0x000100c436b8(&lStack_208,&lStack_220);
  uStack_228 = 200;
  puVar4 = &uStack_90;
  pppuVar8 = &ppuStack_100;
  func_0x000108c7f678(puVar4,pppuVar8,&lStack_208,&uStack_228);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_208 != 0) {
    lStack_200 = lStack_208;
    __ZdlPv();
  }
  if (lStack_220 != 0) {
    lStack_218 = lStack_220;
    __ZdlPv();
  }
  plVar1 = plStack_98;
  ppuStack_100 = &PTR_DAT_1108629c8;
  plStack_98 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_a0;
  plStack_a0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_b8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_110;
  ppuStack_178 = &PTR_DAT_1108629c8;
  plStack_110 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_118;
  plStack_118 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_130 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_188;
  ppuStack_1f0 = &PTR_DAT_1108629c8;
  plStack_188 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_190;
  plStack_190 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_1a8 != 0) {
    __ZdlPv();
  }
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uVar16);
  lVar5 = lVar7;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    func_0x000105007830(&ppuStack_100);
    func_0x000105007830(&ppuStack_178);
    func_0x000105007830(&ppuStack_1f0);
    _objc_release(uStack_80);
    _objc_release(uStack_88);
    _objc_release(uVar16);
    _objc_release(lVar7);
    __Unwind_Resume();
    puStack_238 = &SUB_108bf16a0;
    alStack_2a0[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_240 = &stack0xfffffffffffffff0;
    _objc_retain();
    _objc_retain(pppuVar8);
    pppuStack_648 = pppuVar8;
    lStack_640 = lVar5;
    _objc_opt_class(PTR_PTR_1126b15c8);
    if (lVar5 == 0) {
      uStack_2d8 = 0;
      uStack_2d0 = 0;
      uStack_2c8 = 0;
    }
    else {
      func_0x00010bfa8fc0(&uStack_2d8,lVar5);
    }
    puVar14 = &uStack_429;
    func_0x000108c2e2f8();
    puVar3 = &uStack_42a;
    func_0x000108c2d860();
    bStack_40d = puVar14[0x1b] & puVar3[0x1b];
    bStack_40f = (puVar14[0x19] | puVar3[0x19]) & 1;
    bStack_40e = (puVar14[0x1a] | puVar3[0x1a]) & 1;
    uStack_420 = 4;
    uStack_410 = 0;
    ppuStack_428 = &PTR_DAT_1108629c8;
    plStack_3c0 = (long *)0x0;
    plStack_3c8 = (long *)0x0;
    uStack_3d0 = 0;
    uStack_3d8 = 0;
    lStack_3e0 = 0;
    puVar2 = &uStack_4a1;
    puStack_3f0 = puVar14;
    puStack_3e8 = puVar3;
    func_0x000107c2a7fc();
    uStack_510 = 0xf;
    uStack_500 = 0x100;
    uStack_4e8 = 0;
    ppuStack_518 = &PTR_DAT_1108629c8;
    uStack_4d8 = 0;
    uStack_4e0 = 0;
    uStack_4c8 = 0;
    lStack_4d0 = 0;
    plStack_4b8 = (long *)0x0;
    uStack_4c0 = 0;
    plStack_4b0 = (long *)0x0;
    bStack_486 = puVar2[0x1a];
    bStack_485 = puVar2[0x1b];
    uStack_498 = 10;
    uStack_488 = 0x100;
    ppuStack_4a0 = &PTR_DAT_1108629c8;
    pppuStack_460 = &ppuStack_518;
    plStack_438 = (long *)0x0;
    uStack_450 = 0;
    lStack_458 = 0;
    plStack_440 = (long *)0x0;
    uStack_448 = 0;
    bStack_39e = bStack_40e | bStack_486;
    bStack_39d = bStack_40d & bStack_485;
    uStack_3b0 = 4;
    uStack_3a0 = 0x100;
    ppuStack_3b8 = &PTR_DAT_1108629c8;
    pppuStack_380 = &ppuStack_428;
    pppuStack_378 = &ppuStack_4a0;
    uStack_368 = 0;
    lStack_370 = 0;
    plStack_358 = (long *)0x0;
    uStack_360 = 0;
    plStack_350 = (long *)0x0;
    puVar14 = &uStack_589;
    puStack_468 = puVar2;
    func_0x000108c2dcd4();
    uStack_5f8 = 0xf;
    uStack_5e8 = 0x100;
    uStack_5d0 = 0;
    ppuStack_600 = &PTR_DAT_1108629c8;
    uStack_5c0 = 0;
    uStack_5c8 = 0;
    uStack_5b0 = 0;
    lStack_5b8 = 0;
    plStack_5a0 = (long *)0x0;
    uStack_5a8 = 0;
    plStack_598 = (long *)0x0;
    bStack_56e = puVar14[0x1a];
    bStack_56d = puVar14[0x1b];
    uStack_580 = 10;
    uStack_570 = 0x100;
    ppuStack_588 = &PTR_DAT_1108629c8;
    pppuStack_548 = &ppuStack_600;
    plStack_520 = (long *)0x0;
    uStack_538 = 0;
    lStack_540 = 0;
    plStack_528 = (long *)0x0;
    uStack_530 = 0;
    bStack_32e = bStack_39e | bStack_56e;
    bStack_32d = bStack_39d & bStack_56d;
    uStack_340 = 4;
    uStack_330 = 0x100;
    ppuStack_348 = &PTR_DAT_1108629c8;
    pppuStack_310 = &ppuStack_3b8;
    pppuStack_308 = &ppuStack_588;
    uStack_2f8 = 0;
    lStack_300 = 0;
    plStack_2e8 = (long *)0x0;
    uStack_2f0 = 0;
    plStack_2e0 = (long *)0x0;
    puVar3 = &uStack_631;
    puStack_550 = puVar14;
    func_0x000108c2db04();
    uStack_2c0 = *(undefined8 *)(puVar3 + 0x10);
    uStack_2b8 = puVar3[0x19];
    uStack_2b7 = puVar3[0x18];
    uStack_2a8 = *(undefined8 *)(puVar3 + 0x28);
    uStack_2b4 = 1;
    puStack_2b0 = &UNK_108bf5ed4;
    lStack_628 = 0;
    uStack_620 = 0;
    lStack_630 = 0;
    func_0x000100c435d0(&lStack_630,&uStack_2c0,alStack_2a0,1);
    func_0x000100c436b8(&lStack_618,&lStack_630);
    uStack_638 = 200;
    puVar4 = &uStack_2d8;
    pppuVar8 = &ppuStack_348;
    func_0x000108c7f678(puVar4,pppuVar8,&lStack_618,&uStack_638);
    _objc_retainAutoreleasedReturnValue();
    if (lStack_618 != 0) {
      lStack_610 = lStack_618;
      __ZdlPv();
    }
    lVar7 = lStack_640;
    pppuVar15 = pppuStack_648;
    if (lStack_630 != 0) {
      lStack_628 = lStack_630;
      __ZdlPv();
    }
    plVar1 = plStack_2e0;
    ppuStack_348 = &PTR_DAT_1108629c8;
    plStack_2e0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_2e8;
    plStack_2e8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_300 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_520;
    ppuStack_588 = &PTR_DAT_1108629c8;
    plStack_520 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_528;
    plStack_528 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_540 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_598;
    ppuStack_600 = &PTR_DAT_1108629c8;
    plStack_598 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_5a0;
    plStack_5a0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_5b8 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_350;
    ppuStack_3b8 = &PTR_DAT_1108629c8;
    plStack_350 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_358;
    plStack_358 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_370 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_438;
    ppuStack_4a0 = &PTR_DAT_1108629c8;
    plStack_438 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_440;
    plStack_440 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_458 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_4b0;
    ppuStack_518 = &PTR_DAT_1108629c8;
    plStack_4b0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_4b8;
    plStack_4b8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_4d0 != 0) {
      __ZdlPv();
    }
    plVar1 = plStack_3c0;
    ppuStack_428 = &PTR_DAT_1108629c8;
    plStack_3c0 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = plStack_3c8;
    plStack_3c8 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (lStack_3e0 != 0) {
      __ZdlPv();
    }
    _objc_release(uStack_2c8);
    _objc_release(uStack_2d0);
    _objc_release(pppuVar15);
    lVar5 = lVar7;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_2a0[0]) {
      ___stack_chk_fail();
      func_0x000105007830(&ppuStack_348);
      func_0x000105007830(&ppuStack_588);
      func_0x000105007830(&ppuStack_600);
      func_0x000105007830(&ppuStack_3b8);
      func_0x000105007830(&ppuStack_4a0);
      func_0x000105007830(&ppuStack_518);
      func_0x000105007830(&ppuStack_428);
      _objc_release(uStack_2c8);
      _objc_release(uStack_2d0);
      _objc_release(pppuStack_648);
      _objc_release(lStack_640);
      lVar6 = lVar5;
      __Unwind_Resume();
      puStack_680 = &UNK_1108629b8;
      pppuStack_670 = pppuVar15;
      lStack_668 = lVar7;
      puStack_658 = &SUB_108bf1c4c;
      lStack_6a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
      pppuStack_6a0 = &ppuStack_518;
      pppuStack_698 = &ppuStack_428;
      pppuStack_690 = &ppuStack_600;
      pppuStack_688 = &ppuStack_348;
      lStack_678 = lVar5;
      ppuStack_660 = &puStack_240;
      _objc_retain();
      _objc_retain(pppuVar8);
      _objc_opt_class(PTR_PTR_1126b15c8);
      if (lVar6 == 0) {
        uStack_6e0 = 0;
        uStack_6d8 = 0;
        uStack_6d0 = 0;
      }
      else {
        func_0x00010bfa8fc0(&uStack_6e0,lVar6);
      }
      pppuVar15 = &ppuStack_840;
      puVar2 = &uStack_751;
      func_0x000100c43338();
      puVar14 = &uStack_7c9;
      func_0x000107c2a7fc();
      uStack_838 = 0xf;
      uStack_828 = 0x100;
      uStack_810 = 0;
      ppuStack_840 = &PTR_DAT_1108629c8;
      uStack_800 = 0;
      uStack_808 = 0;
      uStack_7f0 = 0;
      lStack_7f8 = 0;
      plStack_7e0 = (long *)0x0;
      uStack_7e8 = 0;
      plStack_7d8 = (long *)0x0;
      bStack_7ae = puVar14[0x1a];
      bStack_7ad = puVar14[0x1b];
      uStack_7c0 = 10;
      uStack_7b0 = 0x100;
      ppuStack_7c8 = &PTR_DAT_1108629c8;
      pppuStack_788 = &ppuStack_840;
      uStack_778 = 0;
      lStack_780 = 0;
      plStack_768 = (long *)0x0;
      uStack_770 = 0;
      plStack_760 = (long *)0x0;
      bStack_736 = puVar2[0x1a] | bStack_7ae;
      bStack_735 = puVar2[0x1b] & bStack_7ad;
      uStack_748 = 4;
      uStack_738 = 0x100;
      ppuStack_750 = &PTR_DAT_1108629c8;
      pppuStack_710 = &ppuStack_7c8;
      uStack_700 = 0;
      lStack_708 = 0;
      plStack_6f0 = (long *)0x0;
      uStack_6f8 = 0;
      plStack_6e8 = (long *)0x0;
      puVar3 = &uStack_871;
      puStack_790 = puVar14;
      puStack_718 = puVar2;
      func_0x000100c434a4();
      uStack_6c8 = *(undefined8 *)(puVar3 + 0x10);
      uStack_6c0 = puVar3[0x19];
      uStack_6bf = puVar3[0x18];
      uStack_6b0 = *(undefined8 *)(puVar3 + 0x28);
      uStack_6bc = 1;
      puStack_6b8 = &UNK_108bf5ed4;
      lStack_868 = 0;
      uStack_860 = 0;
      lStack_870 = 0;
      func_0x000100c435d0(&lStack_870,&uStack_6c8,&lStack_6a8,1);
      func_0x000100c436b8(&ppuStack_858,&lStack_870);
      uStack_878 = 0;
      puVar4 = &uStack_6e0;
      pppuVar9 = &ppuStack_750;
      pppuVar10 = &ppuStack_858;
      func_0x000108c7f678(puVar4,pppuVar9,pppuVar10,&uStack_878);
      _objc_retainAutoreleasedReturnValue();
      if (ppuStack_858 != (undefined **)0x0) {
        ppuStack_850 = ppuStack_858;
        __ZdlPv();
      }
      if (lStack_870 != 0) {
        lStack_868 = lStack_870;
        __ZdlPv();
      }
      plVar1 = plStack_6e8;
      ppuStack_750 = &PTR_DAT_1108629c8;
      plStack_6e8 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_6f0;
      plStack_6f0 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_708 != 0) {
        __ZdlPv();
      }
      plVar1 = plStack_760;
      ppuStack_7c8 = &PTR_DAT_1108629c8;
      plStack_760 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_768;
      plStack_768 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_780 != 0) {
        __ZdlPv();
      }
      plVar1 = plStack_7d8;
      ppuStack_840 = &PTR_DAT_1108629c8;
      plStack_7d8 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      plVar1 = plStack_7e0;
      plStack_7e0 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
      }
      if (lStack_7f8 != 0) {
        __ZdlPv();
      }
      _objc_release(uStack_6d0);
      _objc_release(uStack_6d8);
      _objc_release(pppuVar8);
      lVar7 = lVar6;
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_6a8) {
        ___stack_chk_fail();
        func_0x000105007830(&ppuStack_750);
        func_0x000105007830(&ppuStack_7c8);
        func_0x000105007830(&ppuStack_840);
        _objc_release(uStack_6d0);
        _objc_release(uStack_6d8);
        _objc_release(pppuVar8);
        _objc_release(lVar6);
        lVar5 = lVar7;
        __Unwind_Resume();
        ppuStack_8d0 = &PTR_DAT_1108629c8;
        uStack_8c8 = 4;
        puStack_8b0 = &UNK_1108629b8;
        puStack_888 = &SUB_108bf1fa4;
        uStack_8f0 = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        pppuStack_8e0 = &ppuStack_518;
        pppuStack_8d8 = &ppuStack_428;
        pppuStack_8c0 = pppuVar15;
        pppuStack_8b8 = &ppuStack_750;
        lStack_8a8 = lVar7;
        pppuStack_8a0 = pppuVar8;
        lStack_898 = lVar6;
        pppuStack_890 = &ppuStack_660;
        _objc_retain();
        _objc_retain(pppuVar9);
        _objc_retain(pppuVar10);
        _objc_opt_class(PTR_PTR_1126b15c8);
        if (lVar5 == 0) {
          uStack_928 = 0;
          uStack_920 = 0;
          uStack_918 = 0;
        }
        else {
          func_0x00010bfa8fc0(&uStack_928,lVar5);
        }
        ppuVar13 = (undefined **)&uStack_a09;
        func_0x000100c486cc();
        puVar14 = auStack_a81;
        func_0x000107c2a7f8();
        uVar12 = SUB84(&uStack_ce0,0);
        puStack_bc8 = &UNK_108bf2050;
        lStack_c18 = *(long *)PTR____stack_chk_guard_11034bdc0;
        pppuStack_c10 = &ppuStack_518;
        pppuStack_c08 = &ppuStack_428;
        pppuStack_c00 = pppuVar15;
        puStack_bf8 = puVar14;
        ppuStack_bf0 = ppuVar13;
        pppuStack_be8 = pppuVar10;
        pppuStack_be0 = pppuVar9;
        lStack_bd8 = lVar5;
        ppppuStack_bd0 = &pppuStack_890;
        _objc_retain(pppuVar10);
        uStack_a98 = 0;
        uStack_a90 = 0;
        uStack_aa0 = 0;
        pppuVar8 = pppuVar10;
        func_0x00010bf529e0();
        func_0x000107c281a4(&uStack_aa0);
        lStack_cd8 = 0;
        uStack_ce0 = 0;
        uStack_cc8 = 0;
        puStack_cd0 = (undefined8 *)0x0;
        uStack_cb8 = 0;
        uStack_cc0 = 0;
        uStack_ca8 = 0;
        uStack_cb0 = 0;
        _objc_retain(pppuVar10);
        pppuVar9 = pppuVar10;
        func_0x00010bf52a60();
        if (pppuVar9 != (undefined ***)0x0) {
          puVar14 = (undefined1 *)*puStack_cd0;
          do {
            pppuVar15 = (undefined ***)0x0;
            do {
              if ((undefined1 *)*puStack_cd0 != puVar14) {
                _objc_enumerationMutation(pppuVar10);
              }
              ppuVar13 = *(undefined ***)(lStack_cd8 + (long)pppuVar15 * 8);
              _objc_retain(ppuVar13);
              pppuVar8 = appuStack_ca0;
              appuStack_ca0[0] = ppuVar13;
              func_0x000107c281a8(&uStack_aa0);
              _objc_release(appuStack_ca0[0]);
              pppuVar15 = (undefined ***)((long)pppuVar15 + 1);
            } while (pppuVar9 != pppuVar15);
            pppuVar9 = pppuVar10;
            uVar12 = (int)&uStack_ce0;
            func_0x00010bf52a60();
          } while (pppuVar9 != (undefined ***)0x0);
        }
        _objc_release(pppuVar10);
        pppuVar9 = pppuVar10;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c18) {
          return;
        }
        ___stack_chk_fail();
        if ((int)pppuVar8 == 0) {
          __Unwind_Resume();
        }
        func_0x000104bd46a0();
        puStack_ce8 = &SUB_108bf25dc;
        lStack_d38 = *(long *)PTR____stack_chk_guard_11034bdc0;
        puStack_d30 = auStack_b88;
        lStack_d28 = (long)&uStack_a09 + 1;
        pppuStack_d20 = pppuVar15;
        puStack_d18 = puVar14;
        ppuStack_d10 = ppuVar13;
        uStack_d08 = 0;
        puStack_d00 = &uStack_aa0;
        pppuStack_cf8 = pppuVar10;
        ppppuStack_cf0 = &ppppuStack_bd0;
        _objc_retain();
        _objc_retain(pppuVar8);
        _objc_opt_class(PTR_PTR_1126b15c8);
        if (pppuVar9 == (undefined ***)0x0) {
          uStack_d70 = 0;
          uStack_d68 = 0;
          uStack_d60 = 0;
        }
        else {
          func_0x00010bfa8fc0(&uStack_d70,pppuVar9);
        }
        puVar2 = &uStack_de1;
        func_0x000100c43338();
        puVar14 = &uStack_e59;
        func_0x000107c2a7fc();
        uStack_ec8 = 0xf;
        uStack_eb8 = 0x100;
        uStack_ea0 = 0;
        ppuStack_ed0 = &PTR_DAT_1108629c8;
        uVar16 = 0;
        uStack_e90 = 0;
        uStack_e98 = 0;
        uStack_e80 = 0;
        lStack_e88 = 0;
        plStack_e70 = (long *)0x0;
        uStack_e78 = 0;
        plStack_e68 = (long *)0x0;
        bStack_e3e = puVar14[0x1a];
        bStack_e3d = puVar14[0x1b];
        uStack_e50 = 10;
        uStack_e40 = 0x100;
        ppuStack_e58 = &PTR_DAT_1108629c8;
        pppuStack_e18 = &ppuStack_ed0;
        uStack_e08 = 0;
        lStack_e10 = 0;
        plStack_df8 = (long *)0x0;
        uStack_e00 = 0;
        plStack_df0 = (long *)0x0;
        bStack_dc6 = puVar2[0x1a] | bStack_e3e;
        bStack_dc5 = puVar2[0x1b] & bStack_e3d;
        uStack_dd8 = 4;
        uStack_dc8 = 0x100;
        ppuStack_de0 = &PTR_DAT_1108629c8;
        pppuStack_da0 = &ppuStack_e58;
        uStack_d90 = 0;
        lStack_d98 = 0;
        plStack_d80 = (long *)0x0;
        uStack_d88 = 0;
        plStack_d78 = (long *)0x0;
        puVar3 = &uStack_f01;
        puStack_e20 = puVar14;
        puStack_da8 = puVar2;
        func_0x000100c434a4();
        uStack_d58 = *(undefined8 *)(puVar3 + 0x10);
        uStack_d50 = puVar3[0x19];
        uStack_d4f = puVar3[0x18];
        uStack_d40 = *(undefined8 *)(puVar3 + 0x28);
        uStack_d4c = 1;
        puStack_d48 = &UNK_108bf5ed4;
        lStack_ef8 = 0;
        uStack_ef0 = 0;
        lStack_f00 = 0;
        func_0x000100c435d0(&lStack_f00,&uStack_d58,&lStack_d38,1);
        func_0x000100c436b8(&lStack_ee8,&lStack_f00);
        puVar4 = &uStack_d70;
        pppuVar15 = &ppuStack_de0;
        uStack_f08 = uVar12;
        func_0x000108c7f678(puVar4,pppuVar15,&lStack_ee8,&uStack_f08);
        _objc_retainAutoreleasedReturnValue();
        if (lStack_ee8 != 0) {
          lStack_ee0 = lStack_ee8;
          __ZdlPv();
        }
        if (lStack_f00 != 0) {
          lStack_ef8 = lStack_f00;
          __ZdlPv();
        }
        plVar1 = plStack_d78;
        ppuStack_de0 = &PTR_DAT_1108629c8;
        plStack_d78 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_d80;
        plStack_d80 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (lStack_d98 != 0) {
          __ZdlPv();
        }
        plVar1 = plStack_df0;
        ppuStack_e58 = &PTR_DAT_1108629c8;
        plStack_df0 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_df8;
        plStack_df8 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (lStack_e10 != 0) {
          __ZdlPv();
        }
        plVar1 = plStack_e68;
        ppuStack_ed0 = &PTR_DAT_1108629c8;
        plStack_e68 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        plVar1 = plStack_e70;
        plStack_e70 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 8))();
        }
        if (lStack_e88 != 0) {
          __ZdlPv();
        }
        _objc_release(uStack_d60);
        _objc_release(uStack_d68);
        _objc_release(pppuVar8);
        pppuVar10 = pppuVar9;
        _objc_release();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d38) {
          ___stack_chk_fail();
          func_0x000105007830(&ppuStack_de0);
          func_0x000105007830(&ppuStack_e58);
          func_0x000105007830(&ppuStack_ed0);
          _objc_release(uStack_d60);
          _objc_release(uStack_d68);
          _objc_release(pppuVar8);
          _objc_release(pppuVar9);
          __Unwind_Resume();
          puStack_f18 = &SUB_108bf2938;
          alStack_f90[0] = *(long *)PTR____stack_chk_guard_11034bdc0;
          ppppuStack_f20 = &ppppuStack_cf0;
          _objc_retain();
          _objc_retain(pppuVar15);
          _objc_opt_class(PTR_PTR_1126b15c8);
          if (pppuVar10 == (undefined ***)0x0) {
            uStack_fc8 = 0;
            uStack_fc0 = 0;
            uStack_fb8 = 0;
          }
          else {
            func_0x00010bfa8fc0(&uStack_fc8,pppuVar10);
          }
          puVar14 = &uStack_10a9;
          func_0x000100c43338();
          puVar3 = &uStack_1121;
          func_0x000107c2a7fc();
          uStack_1190 = 0xf;
          uStack_1180 = 0x100;
          uStack_1168 = 0;
          ppuStack_1198 = &PTR_DAT_1108629c8;
          uStack_1158 = 0;
          uStack_1160 = 0;
          uStack_1148 = 0;
          lStack_1150 = 0;
          plStack_1138 = (long *)0x0;
          uStack_1140 = 0;
          plStack_1130 = (long *)0x0;
          bStack_1106 = puVar3[0x1a];
          bStack_1105 = puVar3[0x1b];
          uStack_1118 = 10;
          uStack_1108 = 0x100;
          ppuStack_1120 = &PTR_DAT_1108629c8;
          pppuStack_10e0 = &ppuStack_1198;
          uStack_10d0 = 0;
          lStack_10d8 = 0;
          plStack_10c0 = (long *)0x0;
          uStack_10c8 = 0;
          plStack_10b8 = (long *)0x0;
          bStack_108e = puVar14[0x1a] | bStack_1106;
          bStack_108d = puVar14[0x1b] & bStack_1105;
          uStack_10a0 = 4;
          uStack_1090 = 0x100;
          ppuStack_10a8 = &PTR_DAT_1108629c8;
          pppuStack_1068 = &ppuStack_1120;
          uStack_1058 = 0;
          lStack_1060 = 0;
          plStack_1048 = (long *)0x0;
          uStack_1050 = 0;
          plStack_1040 = (long *)0x0;
          puVar2 = &uStack_1209;
          puStack_10e8 = puVar3;
          puStack_1070 = puVar14;
          func_0x000100c434a4();
          uStack_1278 = 0xf;
          uStack_1268 = 0x100;
          ppuStack_1280 = &PTR_DAT_11086d7d0;
          uStack_1240 = 0;
          uStack_1248 = 0;
          lStack_1230 = 0;
          lStack_1238 = 0;
          plStack_1220 = (long *)0x0;
          uStack_1228 = 0;
          plStack_1218 = (long *)0x0;
          bStack_11ee = puVar2[0x1a];
          bStack_11ed = puVar2[0x1b];
          uStack_1200 = 6;
          uStack_11f0 = 0x100;
          ppuStack_1208 = &PTR_DAT_11089b010;
          pppuStack_11c8 = &ppuStack_1280;
          plStack_11a0 = (long *)0x0;
          lStack_11b8 = 0;
          lStack_11c0 = 0;
          plStack_11a8 = (long *)0x0;
          uStack_11b0 = 0;
          bStack_101e = bStack_108e | bStack_11ee;
          bStack_101d = bStack_108d & bStack_11ed;
          uStack_1030 = 4;
          uStack_1020 = 0x100;
          ppuStack_1038 = &PTR_DAT_1108629c8;
          pppuStack_1000 = &ppuStack_10a8;
          pppuStack_ff8 = &ppuStack_1208;
          uStack_fe8 = 0;
          lStack_ff0 = 0;
          plStack_fd8 = (long *)0x0;
          uStack_fe0 = 0;
          plStack_fd0 = (long *)0x0;
          puVar14 = &uStack_12b1;
          uStack_1250 = uVar16;
          puStack_11d0 = puVar2;
          func_0x000100c434a4();
          uStack_fb0 = *(undefined8 *)(puVar14 + 0x10);
          uStack_fa8 = puVar14[0x19];
          uStack_fa7 = puVar14[0x18];
          uStack_f98 = *(undefined8 *)(puVar14 + 0x28);
          uStack_fa4 = 1;
          puStack_fa0 = &UNK_108bf5ed4;
          lStack_12a8 = 0;
          uStack_12a0 = 0;
          lStack_12b0 = 0;
          func_0x000100c435d0(&lStack_12b0,&uStack_fb0,alStack_f90,1);
          func_0x000100c436b8(&lStack_1298,&lStack_12b0);
          uStack_12b8 = 0;
          puVar4 = &uStack_fc8;
          pppuVar8 = &ppuStack_1038;
          func_0x000108c7f678(puVar4,pppuVar8,&lStack_1298,&uStack_12b8);
          _objc_retainAutoreleasedReturnValue();
          if (lStack_1298 != 0) {
            lStack_1290 = lStack_1298;
            __ZdlPv();
          }
          if (lStack_12b0 != 0) {
            lStack_12a8 = lStack_12b0;
            __ZdlPv();
          }
          plVar1 = plStack_fd0;
          ppuStack_1038 = &PTR_DAT_1108629c8;
          plStack_fd0 = (long *)0x0;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          plVar1 = plStack_fd8;
          plStack_fd8 = (long *)0x0;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          if (lStack_ff0 != 0) {
            __ZdlPv();
          }
          plVar1 = plStack_11a0;
          ppuStack_1208 = &PTR_DAT_11089b010;
          plStack_11a0 = (long *)0x0;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          plVar1 = plStack_11a8;
          plStack_11a8 = (long *)0x0;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          if (lStack_11c0 != 0) {
            lStack_11b8 = lStack_11c0;
            __ZdlPv();
          }
          plVar1 = plStack_1218;
          ppuStack_1280 = &PTR_DAT_11086d7d0;
          plStack_1218 = (long *)0x0;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          plVar1 = plStack_1220;
          plStack_1220 = (long *)0x0;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          if (lStack_1238 != 0) {
            lStack_1230 = lStack_1238;
            __ZdlPv();
          }
          plVar1 = plStack_1040;
          ppuStack_10a8 = &PTR_DAT_1108629c8;
          plStack_1040 = (long *)0x0;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          plVar1 = plStack_1048;
          plStack_1048 = (long *)0x0;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          if (lStack_1060 != 0) {
            __ZdlPv();
          }
          plVar1 = plStack_10b8;
          ppuStack_1120 = &PTR_DAT_1108629c8;
          plStack_10b8 = (long *)0x0;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          plVar1 = plStack_10c0;
          plStack_10c0 = (long *)0x0;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          if (lStack_10d8 != 0) {
            __ZdlPv();
          }
          plVar1 = plStack_1130;
          ppuStack_1198 = &PTR_DAT_1108629c8;
          plStack_1130 = (long *)0x0;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          plVar1 = plStack_1138;
          plStack_1138 = (long *)0x0;
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 8))();
          }
          if (lStack_1150 != 0) {
            __ZdlPv();
          }
          _objc_release(uStack_fb8);
          _objc_release(uStack_fc0);
          _objc_release(pppuVar15);
          pppuVar9 = pppuVar10;
          _objc_release();
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != alStack_f90[0]) {
            ___stack_chk_fail();
            func_0x000105007830(&ppuStack_1038);
            func_0x0001055b9024(&ppuStack_1208);
            func_0x000105187b98(&ppuStack_1280);
            func_0x000105007830(&ppuStack_10a8);
            func_0x000105007830(&ppuStack_1120);
            func_0x000105007830(&ppuStack_1198);
            _objc_release(uStack_fb8);
            _objc_release(uStack_fc0);
            _objc_release(&UNK_1108629b8);
            _objc_release(pppuVar10);
            pppuVar11 = pppuVar9;
            __Unwind_Resume();
            puStack_1300 = &UNK_11089b000;
            puStack_12f8 = &UNK_11086d7c0;
            puStack_12f0 = &UNK_1108629b8;
            puStack_12c8 = &SUB_108bf2e5c;
            pppuStack_1310 = &ppuStack_1280;
            pppuStack_1308 = &ppuStack_10a8;
            pppuStack_12e8 = pppuVar9;
            pppuStack_12e0 = pppuVar15;
            pppuStack_12d8 = pppuVar10;
            ppppuStack_12d0 = &ppppuStack_f20;
            _objc_retain();
            _objc_retain(pppuVar8);
            _objc_opt_class(PTR_PTR_1126b15c8);
            if (pppuVar11 == (undefined ***)0x0) {
              uStack_1328 = 0;
              uStack_1320 = 0;
              uStack_1318 = 0;
            }
            else {
              func_0x00010bfa8fc0(&uStack_1328,pppuVar11);
            }
            puVar3 = &uStack_1399;
            func_0x000108c2e464();
            puVar14 = &uStack_1411;
            func_0x000107c2a7fc();
            uStack_1480 = 0xf;
            uStack_1470 = 0x100;
            uStack_1458 = 0;
            ppuStack_1488 = &PTR_DAT_1108629c8;
            uStack_1448 = 0;
            uStack_1450 = 0;
            uStack_1438 = 0;
            lStack_1440 = 0;
            plStack_1428 = (long *)0x0;
            uStack_1430 = 0;
            plStack_1420 = (long *)0x0;
            bStack_13f6 = puVar14[0x1a];
            bStack_13f5 = puVar14[0x1b];
            uStack_1408 = 10;
            uStack_13f8 = 0x100;
            ppuStack_1410 = &PTR_DAT_1108629c8;
            uStack_13c0 = 0;
            lStack_13c8 = 0;
            plStack_13b0 = (long *)0x0;
            uStack_13b8 = 0;
            plStack_13a8 = (long *)0x0;
            bStack_137e = puVar3[0x1a] | bStack_13f6;
            bStack_137d = puVar3[0x1b] & bStack_13f5;
            uStack_1390 = 4;
            uStack_1380 = 0x100;
            ppuStack_1398 = &PTR_DAT_1108629c8;
            pppuStack_1358 = &ppuStack_1410;
            uStack_1348 = 0;
            lStack_1350 = 0;
            plStack_1338 = (long *)0x0;
            uStack_1340 = 0;
            plStack_1330 = (long *)0x0;
            lStack_14a0 = 0;
            lStack_1498 = 0;
            uStack_1490 = 0;
            uStack_14a4 = 0;
            puVar4 = &uStack_1328;
            puStack_13d8 = puVar14;
            pppuStack_13d0 = &ppuStack_1488;
            puStack_1360 = puVar3;
            func_0x000108c7f678(puVar4,&ppuStack_1398,&lStack_14a0,&uStack_14a4);
            _objc_retainAutoreleasedReturnValue();
            if (lStack_14a0 != 0) {
              lStack_1498 = lStack_14a0;
              __ZdlPv();
            }
            plVar1 = plStack_1330;
            ppuStack_1398 = &PTR_DAT_1108629c8;
            plStack_1330 = (long *)0x0;
            if (plVar1 != (long *)0x0) {
              (**(code **)(*plVar1 + 8))();
            }
            plVar1 = plStack_1338;
            plStack_1338 = (long *)0x0;
            if (plVar1 != (long *)0x0) {
              (**(code **)(*plVar1 + 8))();
            }
            if (lStack_1350 != 0) {
              __ZdlPv();
            }
            plVar1 = plStack_13a8;
            ppuStack_1410 = &PTR_DAT_1108629c8;
            plStack_13a8 = (long *)0x0;
            if (plVar1 != (long *)0x0) {
              (**(code **)(*plVar1 + 8))();
            }
            plVar1 = plStack_13b0;
            plStack_13b0 = (long *)0x0;
            if (plVar1 != (long *)0x0) {
              (**(code **)(*plVar1 + 8))();
            }
            if (lStack_13c8 != 0) {
              __ZdlPv();
            }
            plVar1 = plStack_1420;
            ppuStack_1488 = &PTR_DAT_1108629c8;
            plStack_1420 = (long *)0x0;
            if (plVar1 != (long *)0x0) {
              (**(code **)(*plVar1 + 8))();
            }
            plVar1 = plStack_1428;
            plStack_1428 = (long *)0x0;
            if (plVar1 != (long *)0x0) {
              (**(code **)(*plVar1 + 8))();
            }
            if (lStack_1440 != 0) {
              __ZdlPv();
            }
            _objc_release(uStack_1318);
            _objc_release(uStack_1320);
            _objc_release(pppuVar8);
            _objc_release(pppuVar11);
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108bd9984; end: 108bd9a3f;  */

void FUN_108bd9984(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e0e60(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf41860(uVar1,param_2,uVar2,&PTR___NSConcreteGlobalBlock_110ab6860);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c11ac40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 108bd9a40; end: 108bd9b23;  */

void FUN_108bd9a40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x108bd9acc;
  puStack_30 = &UNK_11085a548;
  uStack_28 = param_2;
  _objc_retain(param_2);
  func_0x000107c31910(param_3,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 108bd9b24; end: 108bd9b2b; -[SCDocObjectIncomingFriendsRepository unviewedIncomingFriends] */

void FUN_108bd9b24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x40),PTR_s_target_112678178);
  return;
}



/* Entry: 108bd9b2c; end: 108bd9baf; -[SCDocObjectIncomingFriendsRepository .cxx_destruct] */

void FUN_108bd9b2c(long param_1)

{
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



/* Entry: 108bd9bb0; end: 108bd9d57; -[SCDocObjectSnapchattersDataSearcher initWithSnapchattersDataFetcher:snapchattersFetchedResultObserverRepository:suggestedSnapchatterFetcher:userIdToSnapchatterFetcher:grapheneLogger:] */

undefined1 *
FUN_108bd9bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_1126fdc10;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfef240();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    _objc_retain(puVar3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108bd9d58; end: 108bd9e6f; -[SCDocObjectSnapchattersDataSearcher searchFriendSnapchattersWithQuery:filter:completionQueue:completionHandler:] */

void FUN_108bd9d58(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_108bd9e70;
  puStack_60 = &UNK_110a489e8;
  uStack_58 = param_3;
  uStack_50 = param_4;
  uStack_48 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0eea40(uVar1,param_2,param_5,&puStack_78);
  _objc_release(param_5);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_58);
  _objc_release(uStack_50);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 108bd9e70; end: 108bd9f37;  */

void FUN_108bd9e70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108bd9f38;
  puStack_48 = &UNK_110ab6880;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  _objc_retain(uVar2);
  uStack_40 = uVar2;
  _objc_retain(param_3);
  func_0x000107c31910(param_2,&puStack_60);
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_2,param_3);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(uStack_40);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_38);
  return;
}



/* Entry: 108bd9f38; end: 108bd9f47;  */

void FUN_108bd9f38(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000108bd9f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),param_2,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108bd9f48; end: 108bd9fb3; -[SCDocObjectSnapchattersDataSearcher .cxx_destruct] */

void FUN_108bd9f48(long param_1)

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



/* Entry: 108bd9fb4; end: 108bda197; -[SCDocObjectSnapchattersObservableRepository initWithDocObjectContext:currentUserId:snapchattersDataSearcher:userIdToSnapchatterFetcher:snapchattersPublicInfoFetcher:pinnedSuggestedSnapchattersObservable:fetchedResultObserverRepository:] */

undefined1 *
FUN_108bd9fb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
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
  puStack_68 = PTR_PTR_1126fdc18;
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_9;
    _objc_release(uVar2);
    uVar2 = 0;
    _dispatch_queue_attr_make_with_qos_class(0,0x11,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = &UNK_10f507820;
    _dispatch_queue_create(&UNK_10f507820,uVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108bda198; end: 108bda21f; -[SCDocObjectSnapchattersObservableRepository incomingSnapchatterObservableWithQueue:bypassSizeLimit:] */

void FUN_108bda198(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_3;
  if (param_3 == 0) {
    lVar2 = *(long *)(param_1 + 0x30);
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x000108bf1098(uVar3,lVar2,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108bda220; end: 108bda227;  */

void FUN_108bda220(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0a550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_asArray_1125a02f8);
  return;
}



/* Entry: 108bda228; end: 108bda2a7; -[SCDocObjectSnapchattersObservableRepository pendingSnapchatterObservableWithQueue:] */

void FUN_108bda228(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_3;
  if (param_3 == 0) {
    lVar2 = *(long *)(param_1 + 0x30);
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x000108bf16a0(uVar3,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108bda2a8; end: 108bda2af;  */

void FUN_108bda2a8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0a550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_asArray_1125a02f8);
  return;
}



/* Entry: 108bda2b0; end: 108bda32f; -[SCDocObjectSnapchattersObservableRepository outgoingSnapchatterObservableWithQueue:] */

void FUN_108bda2b0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_3;
  if (param_3 == 0) {
    lVar2 = *(long *)(param_1 + 0x30);
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x000108bf1c4c(uVar3,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108bda330; end: 108bda337;  */

void FUN_108bda330(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0a550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_asArray_1125a02f8);
  return;
}



/* Entry: 108bda338; end: 108bda493; -[SCDocObjectSnapchattersObservableRepository outgoingSnapchatterObservableWithoutCurrentUserWithQueue:] */

void FUN_108bda338(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  lVar4 = param_3;
  if (param_3 == 0) {
    lVar4 = *(long *)(param_1 + 0x30);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(lVar4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010c0eea00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  func_0x00010bf18640(uVar1,param_2,0);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar6);
  uVar5 = uVar1;
  func_0x00010c244400(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c0e0500();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_108bda494;
  puStack_60 = &UNK_110ab6910;
  uStack_58 = uVar6;
  _objc_retain(uVar6);
  uVar3 = uVar2;
  func_0x00010c0b8600(uVar2,param_2,&puStack_78);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_58);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108bda494; end: 108bda573;  */

void FUN_108bda494(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x00010bf0a540(param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x108bda52c;
  puStack_30 = &UNK_11085a548;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = param_2;
  uStack_28 = uVar2;
  func_0x000107c31910(param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108bda574; end: 108bda66f; -[SCDocObjectSnapchattersObservableRepository mutualFriendsObservableWithQueue:exceptUserIds:] */

void FUN_108bda574(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _objc_retain(param_4);
  lVar5 = param_3;
  if (param_3 == 0) {
    lVar5 = *(long *)(param_1 + 0x30);
  }
  _objc_retain(lVar5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  lVar2 = param_4;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    func_0x00010befa160(puVar1);
  }
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    func_0x00010befa120(puVar1);
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x000108bf1fa4(uVar3,lVar5,puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(puVar1);
  _objc_release(lVar5);
  _objc_release(param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 108bda670; end: 108bda6af;  */

void FUN_108bda670(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c31910(param_2,&PTR___NSConcreteGlobalBlock_110ab6960);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bda6b0; end: 108bda737; -[SCDocObjectSnapchattersObservableRepository outgoingSnapchatterObservableWithQueryLimit:queue:] */

void FUN_108bda6b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_4;
  if (param_4 == 0) {
    lVar2 = *(long *)(param_1 + 0x30);
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x000108bf25dc(uVar3,lVar2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108bda738; end: 108bda73f;  */

void FUN_108bda738(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0a550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_asArray_1125a02f8);
  return;
}



/* Entry: 108bda740; end: 108bda7cf; -[SCDocObjectSnapchattersObservableRepository outgoingSnapchatterObservableWithTimestampLowerBound:queue:] */

void FUN_108bda740(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_4;
  if (param_4 == 0) {
    lVar2 = *(long *)(param_2 + 0x30);
  }
  uVar3 = *(undefined8 *)(param_2 + 8);
  _objc_retain(param_4);
  func_0x000108bf2938(param_1,uVar3,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108bda7d0; end: 108bda7d7;  */

void FUN_108bda7d0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0a550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_asArray_1125a02f8);
  return;
}



/* Entry: 108bda7d8; end: 108bda857; -[SCDocObjectSnapchattersObservableRepository nonFriendContactSnapchatterObservableWithQueue:] */

void FUN_108bda7d8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_3;
  if (param_3 == 0) {
    lVar2 = *(long *)(param_1 + 0x30);
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x000108bf30d8(uVar3,lVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108bda858; end: 108bda85f;  */

void FUN_108bda858(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0a550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_asArray_1125a02f8);
  return;
}



/* Entry: 108bda860; end: 108bda9d3; -[SCDocObjectSnapchattersObservableRepository suggestedSnapchatterObservableForSuggestionPage:queue:] */

void FUN_108bda860(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = param_4;
  if (param_4 == 0) {
    lVar3 = *(long *)(param_1 + 0x30);
  }
  _objc_retain(lVar3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bec8e60(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x000108bf2e5c(uVar2,lVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  lVar3 = lVar1;
  func_0x00010bf41860(lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 108bda9d4; end: 108bda9db;  */

void FUN_108bda9d4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 108bda9dc; end: 108bdaa03;  */

void FUN_108bda9dc(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 108bdaa04; end: 108bdaa0f;  */

void FUN_108bdaa04(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 108bdaa10; end: 108bdab8f; -[SCDocObjectSnapchattersObservableRepository bestFriendSnapchatterObservableWithQueue:] */

void FUN_108bdaa10(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = param_3;
  if (param_3 == 0) {
    lVar6 = *(long *)(param_1 + 0x30);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(lVar6);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bf195a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  func_0x00010bf18640(uVar1,param_2,0);
  uVar5 = uVar1;
  func_0x00010c244400(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010c0e0500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf19560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c24f780(uVar5);
  uVar3 = uVar5;
  func_0x00010bfab8e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e0500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(uVar3);
  uVar3 = uVar4;
  func_0x00010bf41860(uVar4,param_2,uVar2,&PTR___NSConcreteGlobalBlock_110ab6a80);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108bdab90; end: 108bdad33;  */

void FUN_108bdab90(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010c294400();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  uVar3 = param_3;
  if (lVar2 == 0) {
    func_0x000107c31914(param_3,&PTR___NSConcreteGlobalBlock_110ab6ae0,
                        &PTR___NSConcreteGlobalBlock_110ab6b00);
    _objc_release(param_3);
    lVar1 = param_2;
    func_0x00010c294860(param_2);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    uStack_70 = 0x108bdade4;
    puStack_68 = &UNK_11089b0f0;
    uStack_60 = uVar3;
    _objc_retain(uVar3);
    lVar2 = lVar1;
    func_0x000107c31908(lVar1,&puStack_80);
    _objc_release(lVar1);
    uVar4 = uStack_60;
  }
  else {
    func_0x000107c31914(param_3,&PTR___NSConcreteGlobalBlock_110ab6aa0,
                        &PTR___NSConcreteGlobalBlock_110ab6ac0);
    _objc_release(param_3);
    lVar1 = param_2;
    func_0x00010c294400(param_2);
    _objc_retainAutoreleasedReturnValue();
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    uStack_48 = 0x108bdad64;
    puStack_40 = &UNK_11089b0f0;
    uStack_38 = uVar3;
    _objc_retain(uVar3);
    lVar2 = lVar1;
    func_0x000107c31908(lVar1,&puStack_58);
    _objc_release(lVar1);
    uVar4 = uStack_38;
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 108bdad34; end: 108bdad3b;  */

void FUN_108bdad34(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 108bdad3c; end: 108bdadb3;  */

void FUN_108bdad3c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 108bdadb4; end: 108bdadbb;  */

void FUN_108bdadb4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c294430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_username_112682b30);
  return;
}



/* Entry: 108bdadbc; end: 108bdae33;  */

void FUN_108bdadbc(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 108bdae34; end: 108bdae5b; -[SCDocObjectSnapchattersObservableRepository pinnedSuggestedSnapchatterObservable] */

void FUN_108bdae34(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


