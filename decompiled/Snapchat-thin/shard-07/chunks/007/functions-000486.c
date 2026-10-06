/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10592598c; end: 105925997; -[SCFideliusEncryptedDatabaseV2 dbUrl] */

void FUN_10592598c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,0x28,1);
  return;
}



/* Entry: 105925998; end: 10592599f; -[SCFideliusEncryptedDatabaseV2 setDbUrl:] */

void FUN_105925998(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1059259a0; end: 1059259f3; -[SCFideliusEncryptedDatabaseV2 .cxx_destruct] */

void FUN_1059259a0(long param_1)

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



/* Entry: 1059259f4; end: 1059259f7; -[SCFideliusFriendDeviceInfoCacheV2 insertObject:forUserId:] */

void FUN_1059259f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c130f30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_replaceObject_forUserId__112629de8);
  return;
}



/* Entry: 1059259f8; end: 105925b67; -[SCFideliusFriendDeviceInfoCacheV2 replaceObject:forUserId:] */

uint FUN_1059259f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = &UNK_10f30db0a;
  func_0x0001000ba800(&UNK_10f30db0a);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c06fc80();
  if (iVar1 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f8240(uVar4);
    _objc_release(param_4);
    _objc_release(param_3);
    uVar2 = (uint)*(byte *)(puStack_58 + 3);
  }
  else {
    func_0x00010be8eae0();
    uVar2 = (uint)param_1;
    *(char *)(puStack_58 + 3) = (char)param_1;
  }
  __Block_object_dispose(&uStack_60,8);
  func_0x0001000e2a84(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar2 & 1;
}



/* Entry: 105925b68; end: 105925b9b;  */

void FUN_105925b68(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be8eae0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30))
  ;
  *(char *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x18) = (char)uVar1;
  return;
}



/* Entry: 105925b9c; end: 105925cf3; -[SCFideliusFriendDeviceInfoCacheV2 replaceDeviceInfos:] */

uint FUN_105925b9c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puVar2 = &UNK_10f30db45;
  func_0x0001000ba800(&UNK_10f30db45);
  lVar3 = param_3;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    uVar4 = 1;
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010c06fc80();
    if (iVar1 == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      _objc_retain(param_3);
      func_0x00010c0f8240(uVar5);
      _objc_release(param_3);
      uVar4 = (uint)*(byte *)(puStack_48 + 3);
    }
    else {
      func_0x00010be8eb00();
      uVar4 = (uint)param_1;
      *(char *)(puStack_48 + 3) = (char)param_1;
    }
    __Block_object_dispose(&uStack_50,8);
  }
  func_0x0001000e2a84(puVar2);
  _objc_release(param_3);
  return uVar4 & 1;
}



/* Entry: 105925cf4; end: 105925d27;  */

void FUN_105925cf4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be8eb00(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  *(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (char)uVar1;
  return;
}



/* Entry: 105925d28; end: 105925e7f; -[SCFideliusFriendDeviceInfoCacheV2 deleteDeviceInfos:] */

uint FUN_105925d28(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puVar2 = &UNK_10f30db7b;
  func_0x0001000ba800(&UNK_10f30db7b);
  lVar3 = param_3;
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    uVar4 = 1;
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    func_0x00010c06fc80();
    if (iVar1 == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x10);
      _objc_retain(param_3);
      func_0x00010c0f8240(uVar5);
      _objc_release(param_3);
      uVar4 = (uint)*(byte *)(puStack_48 + 3);
    }
    else {
      func_0x00010bdf9e60();
      uVar4 = (uint)param_1;
      *(char *)(puStack_48 + 3) = (char)param_1;
    }
    __Block_object_dispose(&uStack_50,8);
  }
  func_0x0001000e2a84(puVar2);
  _objc_release(param_3);
  return uVar4 & 1;
}



/* Entry: 105925e80; end: 105925eb3;  */

void FUN_105925e80(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdf9e60(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  *(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (char)uVar1;
  return;
}



/* Entry: 105925eb4; end: 105926053; -[SCFideliusFriendDeviceInfoCacheV2 deleteAllFriendDevicesForUserId:] */

undefined1 FUN_105925eb4(long param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  puVar3 = &UNK_10f30dbb0;
  func_0x0001000ba800(&UNK_10f30dbb0);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c06fc80();
  if (iVar2 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_3);
    func_0x00010c0f8240(uVar6);
    lVar4 = param_3;
  }
  else {
    lVar4 = param_1;
    func_0x00010be192a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    iVar2 = (int)*(undefined8 *)(param_1 + 8);
    func_0x00010bf6bd60();
    *(char *)(puStack_58 + 3) = (char)iVar2;
    if (iVar2 != 0) {
      lVar5 = lVar4;
      func_0x00010c296f80(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d4a0(*(undefined8 *)(param_1 + 0x18));
      func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x20));
      _objc_release(lVar5);
    }
  }
  _objc_release(lVar4);
  uVar1 = *(undefined1 *)(puStack_58 + 3);
  __Block_object_dispose(&uStack_60,8);
  func_0x0001000e2a84(puVar3);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 105926054; end: 1059260ff;  */

void FUN_105926054(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be192a0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010bf6bd60(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
  *(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (char)uVar2;
  if (*(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) == '\x01') {
    uVar2 = uVar1;
    func_0x00010c296f80(uVar1,param_2,&PTR____CFConstantStringClassReference_110e0e858);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d4a0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18),param_2,uVar2);
    func_0x00010c12d3e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),param_2,
                        *(undefined8 *)(param_1 + 0x28));
    _objc_release(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105926100; end: 10592620f; -[SCFideliusFriendDeviceInfoCacheV2 deleteAllFriends] */

uint FUN_105926100(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  lVar3 = param_1;
  func_0x00010bf000a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c06fc80();
  if (iVar1 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(lVar3);
    func_0x00010c0f8240(uVar4);
    _objc_release(lVar3);
    uVar2 = (uint)*(byte *)(puStack_48 + 3);
  }
  else {
    func_0x00010bdf9e60();
    uVar2 = (uint)param_1;
    *(char *)(puStack_48 + 3) = (char)param_1;
  }
  __Block_object_dispose(&uStack_50,8);
  _objc_release(lVar3);
  return uVar2 & 1;
}



/* Entry: 105926210; end: 105926243;  */

void FUN_105926210(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdf9e60(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  *(char *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (char)uVar1;
  return;
}



/* Entry: 105926244; end: 105926377; -[SCFideliusFriendDeviceInfoCacheV2 allFriends] */

void FUN_105926244(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = &UNK_10f30dc18;
  func_0x0001000ba800(&UNK_10f30dc18);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105926378;
  uStack_30 = 0x105926388;
  uStack_28 = 0;
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c06fc80();
  if (iVar1 == 0) {
    func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x10));
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfc57a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = puStack_48[5];
    puStack_48[5] = uVar3;
    _objc_release(uVar4);
  }
  uVar3 = puStack_48[5];
  _objc_retain(uVar3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  func_0x0001000e2a84(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105926378; end: 10592638f;  */

void FUN_105926378(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105926390; end: 1059263d3;  */

void FUN_105926390(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010bfc57a0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1059263d4; end: 10592653f; -[SCFideliusFriendDeviceInfoCacheV2 friendDevicesForUserId:] */

void FUN_1059263d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar2 = &UNK_10f30dc46;
  func_0x0001000ba800(&UNK_10f30dc46);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105926378;
  uStack_40 = 0x105926388;
  uStack_38 = 0;
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c06fc80();
  if (iVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_3);
    func_0x00010c0f8240(uVar3);
    uVar3 = param_3;
  }
  else {
    func_0x00010be192a0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puStack_58[5];
    puStack_58[5] = param_1;
  }
  _objc_release(uVar3);
  uVar3 = puStack_58[5];
  _objc_retain(uVar3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  func_0x0001000e2a84(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105926540; end: 105926583;  */

void FUN_105926540(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be192a0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105926584; end: 1059266ef; -[SCFideliusFriendDeviceInfoCacheV2 userIdToDeviceListDict:] */

void FUN_105926584(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar2 = &UNK_10f30dc80;
  func_0x0001000ba800(&UNK_10f30dc80);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105926378;
  uStack_40 = 0x105926388;
  uStack_38 = 0;
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c06fc80();
  if (iVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_3);
    func_0x00010c0f8240(uVar3);
    uVar3 = param_3;
  }
  else {
    func_0x00010bee6ca0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puStack_58[5];
    puStack_58[5] = param_1;
  }
  _objc_release(uVar3);
  uVar3 = puStack_58[5];
  _objc_retain(uVar3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  func_0x0001000e2a84(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1059266f0; end: 105926733;  */

void FUN_1059266f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bee6ca0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105926734; end: 10592689f; -[SCFideliusFriendDeviceInfoCacheV2 userIdToDeviceListDictBatch:] */

void FUN_105926734(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar2 = &UNK_10f30dcba;
  func_0x0001000ba800(&UNK_10f30dcba);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_105926378;
  uStack_40 = 0x105926388;
  uStack_38 = 0;
  iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
  func_0x00010c06fc80();
  if (iVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_3);
    func_0x00010c0f8240(uVar3);
    uVar3 = param_3;
  }
  else {
    func_0x00010bee6cc0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puStack_58[5];
    puStack_58[5] = param_1;
  }
  _objc_release(uVar3);
  uVar3 = puStack_58[5];
  _objc_retain(uVar3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  func_0x0001000e2a84(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1059268a0; end: 1059268e3;  */

void FUN_1059268a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bee6cc0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1059268e4; end: 105926beb; -[SCFideliusFriendDeviceInfoCacheV2 _userIdToDeviceListDict:] */

undefined * FUN_1059268e4(long param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined *unaff_x19;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 unaff_x25;
  undefined8 *puVar18;
  long unaff_x26;
  undefined **ppuVar19;
  long unaff_x28;
  undefined8 uVar20;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  long *plStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  long lStack_270;
  long lStack_260;
  undefined **ppuStack_258;
  long lStack_250;
  undefined8 uStack_248;
  undefined8 *puStack_240;
  undefined *puStack_238;
  long lStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
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
  _objc_retain(param_3);
  puVar3 = &UNK_10f30dcf9;
  func_0x0001000ba800();
  ppuVar19 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
  puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_1f8 = puVar3;
  _objc_alloc();
  func_0x00010bf529e0(param_3);
  func_0x00010bffc4a0();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  _objc_retain(param_3);
  puVar9 = &uStack_1b0;
  puVar4 = param_3;
  func_0x00010bf52a60();
  if (puVar4 != (undefined *)0x0) {
    unaff_x28 = *plStack_1a0;
    do {
      unaff_x19 = (undefined *)0x0;
      do {
        if (*plStack_1a0 != unaff_x28) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x25 = *(undefined8 *)(lStack_1a8 + (long)unaff_x19 * 8);
        iVar2 = (int)*(undefined8 *)(param_1 + 0x28);
        func_0x00010bf4b900();
        if (iVar2 == 0) {
          func_0x00010befa120(puVar3);
        }
        else {
          unaff_x26 = param_1;
          func_0x00010bdd7fe0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar11);
          _objc_release(unaff_x26);
        }
        unaff_x19 = unaff_x19 + 1;
      } while (puVar4 != unaff_x19);
      puVar9 = &uStack_1b0;
      puVar4 = param_3;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined *)0x0);
  }
  puVar17 = (undefined8 *)0x0;
  _objc_release(param_3);
  puVar4 = puVar3;
  func_0x00010bf529e0();
  if (puVar4 != (undefined *)0x0) {
    puVar17 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    lStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    _objc_retain(puVar3);
    puVar4 = puVar3;
    func_0x00010bf52a60();
    if (puVar4 != (undefined *)0x0) {
      unaff_x28 = *plStack_1e0;
      do {
        unaff_x19 = (undefined *)0x0;
        do {
          if (*plStack_1e0 != unaff_x28) {
            _objc_enumerationMutation(puVar3);
          }
          unaff_x26 = *(long *)(lStack_1e8 + (long)unaff_x19 * 8);
          ppuVar19 = *(undefined ***)(param_1 + 8);
          func_0x00010bfc57c0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar17);
          _objc_release(ppuVar19);
          unaff_x19 = unaff_x19 + 1;
        } while (puVar4 != unaff_x19);
        puVar4 = puVar3;
        func_0x00010bf52a60();
      } while (puVar4 != (undefined *)0x0);
    }
    unaff_x25 = 0;
    _objc_release(puVar3);
    func_0x00010bed4820(param_1);
    puVar9 = puVar17;
    func_0x00010bef7f60(puVar11);
    _objc_release(puVar17);
  }
  _objc_release(puVar3);
  func_0x0001000e2a84(puStack_1f8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    func_0x0001000e2a84(puStack_1f8);
    puVar4 = param_3;
    __Unwind_Resume();
    _objc_terminate();
    pcStack_208 = FUN_105926bec;
    lStack_270 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lStack_260 = unaff_x28;
    ppuStack_258 = ppuVar19;
    lStack_250 = unaff_x26;
    uStack_248 = unaff_x25;
    puStack_240 = puVar17;
    puStack_238 = puVar3;
    lStack_230 = param_1;
    puStack_228 = puVar11;
    puStack_220 = param_3;
    puStack_218 = unaff_x19;
    puStack_210 = &stack0xfffffffffffffff0;
    _objc_retain(puVar9);
    puVar3 = &UNK_10f30dd34;
    func_0x0001000ba800();
    puVar11 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc();
    func_0x00010bf529e0(puVar9);
    func_0x00010bffc4a0();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc_init();
    uStack_388 = 0;
    uStack_390 = 0;
    uStack_378 = 0;
    uStack_380 = 0;
    uStack_3a8 = 0;
    uStack_3b0 = 0;
    uStack_398 = 0;
    plStack_3a0 = (long *)0x0;
    _objc_retain(puVar9);
    puVar17 = &uStack_3b0;
    puVar6 = puVar9;
    func_0x00010bf52a60();
    if (puVar6 != (undefined8 *)0x0) {
      lVar15 = *plStack_3a0;
      do {
        puVar17 = (undefined8 *)0x0;
        do {
          if (*plStack_3a0 != lVar15) {
            _objc_enumerationMutation(puVar9);
          }
          iVar2 = (int)*(undefined8 *)(puVar4 + 0x28);
          func_0x00010bf4b900();
          if (iVar2 == 0) {
            func_0x00010befa120(puVar5);
          }
          else {
            puVar7 = puVar4;
            func_0x00010bdd7fe0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0640(puVar11);
            _objc_release(puVar7);
          }
          puVar17 = (undefined8 *)((long)puVar17 + 1);
        } while (puVar6 != puVar17);
        puVar17 = &uStack_3b0;
        puVar6 = puVar9;
        func_0x00010bf52a60();
      } while (puVar6 != (undefined8 *)0x0);
    }
    _objc_release(puVar9);
    puVar7 = puVar5;
    func_0x00010bf529e0();
    if (puVar7 != (undefined *)0x0) {
      puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_alloc_init();
      lVar8 = *(long *)(puVar4 + 8);
      func_0x00010bfc57e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      lVar15 = lVar8;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar15 != 0) {
        lVar16 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar8);
          }
          uVar20 = *(undefined8 *)(lVar16 * 8);
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          puVar17 = puVar6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar17 == (undefined8 *)0x0) {
            puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
            func_0x00010c1d0640(puVar6);
            _objc_release(puVar7);
          }
          puVar17 = puVar6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120();
          _objc_release(puVar17);
          _objc_release(uVar20);
          lVar16 = lVar16 + 1;
        } while (lVar15 != lVar16);
        lVar15 = lVar8;
        func_0x00010bf52a60();
      }
      _objc_release(lVar8);
      func_0x00010bed4820(puVar4);
      puVar17 = puVar6;
      func_0x00010bef7f60(puVar11);
      _objc_release(lVar8);
      _objc_release(puVar6);
    }
    _objc_release(puVar5);
    func_0x0001000e2a84(puVar3);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_270) {
      ___stack_chk_fail();
      func_0x0001000e2a84(puVar3);
      __Unwind_Resume();
      _objc_terminate();
      _objc_retain(puVar17);
      puVar3 = &UNK_10f30dd74;
      func_0x0001000ba800(&UNK_10f30dd74);
      puVar6 = puVar17;
      func_0x000100504554(puVar17,&PTR___NSConcreteGlobalBlock_1108c06f0);
      puVar10 = puVar17;
      func_0x000100504554(puVar17,&PTR___NSConcreteGlobalBlock_1108c0710);
      puVar11 = (undefined *)puVar9[1];
      func_0x00010bf6bd80();
      if ((int)puVar11 != 0) {
        func_0x00010c12d4a0(puVar9[3]);
        for (puVar18 = (undefined8 *)0x0; puVar12 = puVar10, func_0x00010bf529e0(),
            puVar18 < puVar12; puVar18 = (undefined8 *)((long)puVar18 + 1)) {
          puVar12 = puVar10;
          func_0x00010c0dfd40(puVar10);
          _objc_retainAutoreleasedReturnValue();
          puVar13 = puVar9;
          func_0x00010bdd4160(puVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar14 = puVar6;
          func_0x00010c0dfd40(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c12d360(puVar13);
          _objc_release(puVar14);
          _objc_release(puVar13);
          _objc_release(puVar12);
        }
      }
      _objc_release(puVar10);
      _objc_release(puVar6);
      func_0x0001000e2a84(puVar3);
      _objc_release(puVar17);
      return puVar11;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return puVar11;
}



/* Entry: 105926bec; end: 105926f77; -[SCFideliusFriendDeviceInfoCacheV2 _userIdToDeviceListDictBatch:] */

undefined * FUN_105926bec(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = &UNK_10f30dd34;
  func_0x0001000ba800();
  puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc();
  func_0x00010bf529e0(param_3);
  func_0x00010bffc4a0();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  _objc_retain(param_3);
  puVar7 = &uStack_1b0;
  lVar4 = param_3;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar12 = *plStack_1a0;
    do {
      lVar14 = 0;
      do {
        if (*plStack_1a0 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
        func_0x00010bf4b900();
        if (iVar1 == 0) {
          func_0x00010befa120(puVar3);
        }
        else {
          lVar13 = param_1;
          func_0x00010bdd7fe0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar9);
          _objc_release(lVar13);
        }
        lVar14 = lVar14 + 1;
      } while (lVar4 != lVar14);
      puVar7 = &uStack_1b0;
      lVar4 = param_3;
      func_0x00010bf52a60();
    } while (lVar4 != 0);
  }
  _objc_release(param_3);
  puVar5 = puVar3;
  func_0x00010bf529e0();
  if (puVar5 != (undefined *)0x0) {
    puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    lVar14 = *(long *)(param_1 + 8);
    func_0x00010bfc57e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    lVar4 = lVar14;
    func_0x00010bf52a60();
    lVar12 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar12) {
          _objc_enumerationMutation(lVar14);
        }
        uVar16 = *(undefined8 *)(lVar13 * 8);
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar7 == (undefined8 *)0x0) {
          puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
          _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
          func_0x00010c1d0640(puVar6);
          _objc_release(puVar5);
        }
        puVar7 = puVar6;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120();
        _objc_release(puVar7);
        _objc_release(uVar16);
        lVar13 = lVar13 + 1;
      } while (lVar4 != lVar13);
      lVar4 = lVar14;
      func_0x00010bf52a60();
    }
    _objc_release(lVar14);
    func_0x00010bed4820(param_1);
    puVar7 = puVar6;
    func_0x00010bef7f60(puVar9);
    _objc_release(lVar14);
    _objc_release(puVar6);
  }
  _objc_release(puVar3);
  func_0x0001000e2a84(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
    return puVar9;
  }
  ___stack_chk_fail();
  func_0x0001000e2a84(puVar2);
  __Unwind_Resume();
  _objc_terminate();
  _objc_retain(puVar7);
  puVar2 = &UNK_10f30dd74;
  func_0x0001000ba800(&UNK_10f30dd74);
  puVar6 = puVar7;
  func_0x000100504554(puVar7,&PTR___NSConcreteGlobalBlock_1108c06f0);
  puVar8 = puVar7;
  func_0x000100504554(puVar7,&PTR___NSConcreteGlobalBlock_1108c0710);
  puVar9 = *(undefined **)(param_3 + 8);
  func_0x00010bf6bd80();
  if ((int)puVar9 != 0) {
    func_0x00010c12d4a0(*(undefined8 *)(param_3 + 0x18));
    for (puVar15 = (undefined8 *)0x0; puVar10 = puVar8, func_0x00010bf529e0(), puVar15 < puVar10;
        puVar15 = (undefined8 *)((long)puVar15 + 1)) {
      puVar10 = puVar8;
      func_0x00010c0dfd40(puVar8);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_3;
      func_0x00010bdd4160(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar6;
      func_0x00010c0dfd40(puVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360(lVar4);
      _objc_release(puVar11);
      _objc_release(lVar4);
      _objc_release(puVar10);
    }
  }
  _objc_release(puVar8);
  _objc_release(puVar6);
  func_0x0001000e2a84(puVar2);
  _objc_release(puVar7);
  return puVar9;
}



/* Entry: 105926f78; end: 1059270ef; -[SCFideliusFriendDeviceInfoCacheV2 _deleteDeviceInfos:] */

undefined8 FUN_105926f78(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
  puVar1 = &UNK_10f30dd74;
  func_0x0001000ba800(&UNK_10f30dd74);
  uVar2 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108c06f0);
  uVar3 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108c0710);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf6bd80();
  if ((int)uVar4 != 0) {
    func_0x00010c12d4a0(*(undefined8 *)(param_1 + 0x18));
    for (uVar8 = 0; uVar5 = uVar3, func_0x00010bf529e0(), uVar8 < uVar5; uVar8 = uVar8 + 1) {
      uVar5 = uVar3;
      func_0x00010c0dfd40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_1;
      func_0x00010bdd4160(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar2;
      func_0x00010c0dfd40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d360(lVar6);
      _objc_release(uVar7);
      _objc_release(lVar6);
      _objc_release(uVar5);
    }
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 1059270f0; end: 1059270ff;  */

void FUN_1059270f0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c26cfd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_theirOutBeta_112678e18);
  return;
}



/* Entry: 105927100; end: 105927317; -[SCFideliusFriendDeviceInfoCacheV2 _replaceDeviceInfos:] */

undefined8 FUN_105927100(long param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  puVar10 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = &UNK_10f30ddd9;
  func_0x0001000ba800();
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar3 = param_3;
  func_0x00010c0667e0(uVar2,param_2,param_3);
  if ((int)uVar2 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_3);
    param_4 = auStack_f0;
    puVar3 = param_3;
    func_0x00010bf52a60(param_3,param_2,&uStack_130,param_4,0x10);
    if (puVar3 != (undefined1 *)0x0) {
      lVar14 = *plStack_120;
      do {
        puVar15 = (undefined1 *)0x0;
        do {
          if (*plStack_120 != lVar14) {
            _objc_enumerationMutation(param_3);
          }
          uVar11 = *(undefined8 *)(lStack_128 + (long)puVar15 * 8);
          uVar13 = *(undefined8 *)(param_1 + 0x18);
          uVar12 = uVar11;
          func_0x00010c26cfc0(uVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(uVar13,param_2,uVar11,uVar12);
          _objc_release(uVar12);
          uVar12 = uVar11;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = param_1;
          func_0x00010bdd4160(param_1,param_2,uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26cfc0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(lVar4,param_2,uVar11);
          _objc_release(uVar11);
          _objc_release(lVar4);
          _objc_release(uVar12);
          puVar15 = puVar15 + 1;
        } while (puVar3 != puVar15);
        param_4 = auStack_f0;
        puVar3 = param_3;
        puVar10 = &uStack_130;
        func_0x00010bf52a60(param_3,param_2,&uStack_130,param_4,0x10);
      } while (puVar3 != (undefined1 *)0x0);
    }
    _objc_release(param_3);
    puVar3 = (undefined1 *)puVar10;
  }
  func_0x0001000e2a84(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return uVar2;
  }
  ___stack_chk_fail();
  func_0x0001000e2a84(puVar1);
  __Unwind_Resume();
  _objc_terminate();
  _objc_retain(puVar3);
  _objc_retain(param_4);
  puVar1 = &UNK_10f30de10;
  func_0x0001000ba800(&UNK_10f30de10);
  uVar2 = *(undefined8 *)(param_3 + 8);
  puVar15 = puVar3;
  func_0x00010c26cfc0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x00010c2923e0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar3;
  func_0x00010c0d4ee0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar7 = puVar3;
  func_0x00010c298be0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c067ec0();
  func_0x00010c0df760(puVar9,param_2,puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0667c0(uVar2,param_2,puVar15,puVar5,puVar6,puVar9);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar15);
  if ((int)uVar2 != 0) {
    uVar12 = *(undefined8 *)(param_3 + 0x18);
    puVar15 = puVar3;
    func_0x00010c26cfc0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar12,param_2,puVar3,puVar15);
    _objc_release(puVar15);
    puVar15 = puVar3;
    func_0x00010c2923e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd4160(param_3,param_2,puVar15);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010c26cfc0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(param_3,param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(param_3);
    _objc_release(puVar15);
  }
  func_0x0001000e2a84(puVar1);
  _objc_release(param_4);
  _objc_release(puVar3);
  return uVar2;
}



/* Entry: 105927318; end: 105927547; -[SCFideliusFriendDeviceInfoCacheV2 _replaceDeviceInfo:forUserId:] */

undefined8 FUN_105927318(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = &UNK_10f30de10;
  func_0x0001000ba800(&UNK_10f30de10);
  uVar7 = *(undefined8 *)(param_1 + 8);
  uVar2 = param_3;
  func_0x00010c26cfc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010c0d4ee0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar4 = param_3;
  func_0x00010c298be0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c067ec0();
  func_0x00010c0df760(puVar6,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0667c0(uVar7,param_2,uVar2,uVar8,uVar3,puVar6);
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar8);
  _objc_release(uVar2);
  if ((int)uVar7 != 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = param_3;
    func_0x00010c26cfc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar8,param_2,param_3,uVar2);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd4160(param_1,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = param_3;
    func_0x00010c26cfc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(param_1,param_2,uVar8);
    _objc_release(uVar8);
    _objc_release(param_1);
    _objc_release(uVar2);
  }
  func_0x0001000e2a84(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return uVar7;
}



/* Entry: 105927548; end: 10592769f; -[SCFideliusFriendDeviceInfoCacheV2 _friendDevicesForUserId:] */

void FUN_105927548(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = &UNK_10f30de46;
  func_0x0001000ba800();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf4b900(uVar2,param_2,param_3);
  puVar5 = param_3;
  if ((int)uVar2 == 0) {
    lVar3 = *(long *)(param_1 + 8);
    func_0x00010bfc57c0(lVar3,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if ((param_3 != (undefined *)0x0) && (lVar3 != 0)) {
      puVar4 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      puStack_58 = param_3;
      lStack_50 = lVar3;
      func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&lStack_50,&puStack_58,1)
      ;
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010bed4820(param_1,param_2,puVar4);
      _objc_release(puVar4);
    }
  }
  else {
    lVar3 = param_1;
    func_0x00010bdd7fe0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x0001000e2a84(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
    return;
  }
  ___stack_chk_fail();
  func_0x0001000e2a84(puVar1);
  puVar4 = param_3;
  __Unwind_Resume();
  _objc_terminate();
  pcStack_68 = FUN_1059276a0;
  lStack_90 = lVar3;
  lStack_88 = param_1;
  puStack_80 = puVar1;
  puStack_78 = param_3;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_retain(puVar5);
  puVar1 = &UNK_10f30de81;
  func_0x0001000ba800(&UNK_10f30de81);
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_105927750;
  puStack_a0 = &UNK_1108c0730;
  puStack_98 = puVar4;
  func_0x00010bf97ce0(puVar5,param_2,&puStack_b8);
  func_0x0001000e2a84(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1059276a0; end: 10592774f; -[SCFideliusFriendDeviceInfoCacheV2 _updateCacheWithUserIdToDeviceListDict:] */

void FUN_1059276a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = &UNK_10f30de81;
  func_0x0001000ba800(&UNK_10f30de81);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105927750;
  puStack_40 = &UNK_1108c0730;
  uStack_38 = param_1;
  func_0x00010bf97ce0(param_3,param_2,&puStack_58);
  func_0x0001000e2a84(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105927750; end: 1059278ff;  */

void FUN_105927750(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdd4160();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      uVar8 = *(undefined8 *)(lVar10 * 8);
      uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
      uVar4 = uVar8;
      func_0x00010c26cfc0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar9);
      _objc_release(uVar4);
      func_0x00010c26cfc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar2);
      _objc_release(uVar8);
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  uVar4 = param_2;
  func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(uVar4);
  puVar5 = &UNK_10f30deee;
  func_0x0001000ba800(&UNK_10f30deee);
  func_0x00010bdd4160(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bf529e0(param_2);
  func_0x00010bffc4a0();
  _objc_retain(uVar4);
  _objc_retain(puVar6);
  func_0x00010bf97e80(param_2);
  _objc_retain(puVar6);
  _objc_release(puVar6);
  _objc_release(uVar4);
  _objc_release(puVar6);
  _objc_release(param_2);
  func_0x0001000e2a84(puVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105927900; end: 105927a4b; -[SCFideliusFriendDeviceInfoCacheV2 _cachedDeviceListForUser:] */

void FUN_105927900(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  puVar2 = &UNK_10f30deee;
  func_0x0001000ba800(&UNK_10f30deee);
  uVar3 = param_1;
  func_0x00010bdd4160(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  uVar5 = uVar3;
  func_0x00010bf529e0(uVar3);
  func_0x00010bffc4a0(puVar4,param_2,uVar5);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105927a4c;
  puStack_60 = &UNK_1108c0760;
  uStack_58 = param_1;
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(puVar4);
  puStack_48 = puVar4;
  func_0x00010bf97e80(uVar3,param_2,&puStack_78);
  puVar1 = puStack_48;
  _objc_retain(puVar4);
  _objc_release(puVar1);
  _objc_release(uStack_50);
  _objc_release(puVar4);
  _objc_release(uVar3);
  func_0x0001000e2a84(puVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105927a4c; end: 105927a97;  */

void FUN_105927a4c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x18);
  func_0x00010c0e00e0(lVar1,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105927a98; end: 105927b6f; -[SCFideliusFriendDeviceInfoCacheV2 _betasForUserId:] */

void FUN_105927a98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = &UNK_10f30df2a;
  func_0x0001000ba800(&UNK_10f30df2a);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c0e00e0(lVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x20),param_2,puVar3,param_3);
    _objc_release(puVar3);
  }
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar4,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000e2a84(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105927b70; end: 105927bc3; -[SCFideliusFriendDeviceInfoCacheV2 .cxx_destruct] */

void FUN_105927b70(long param_1)

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



/* Entry: 105927bc4; end: 105927bf7; -[SCAccessOrderedDictionary initWithMaxSize:] */

void FUN_105927bc4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eaf00;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithMaxSize__1125e7d48);
  return;
}



/* Entry: 105927bf8; end: 105927c83; -[SCAccessOrderedDictionary objectForKeyedSubscript:] */

void FUN_105927bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_1);
  _objc_sync_enter(param_1);
  uVar1 = param_1;
  func_0x00010c0e0060(param_1,param_2,param_3,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105927c84; end: 105927c87; -[SCAccessOrderedDictionary onOrderUpdated] */

void FUN_105927c84(void)

{
  return;
}



/* Entry: 105927c88; end: 105927cbb; -[SCAccessOrderedDictionary encodeWithCoder:] */

void FUN_105927c88(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eaf00;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_encodeWithCoder__1125c2658);
  return;
}



/* Entry: 105927cbc; end: 105927d5f; -[SCDbInitResult initWithDb:error:] */

undefined1 *
FUN_105927cbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eaf08;
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



/* Entry: 105927d60; end: 105927d67; -[SCDbInitResult mgr] */

undefined8 FUN_105927d60(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105927d68; end: 105927d97; -[SCDbInitResult setMgr:] */

void FUN_105927d68(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 105927d98; end: 105927d9f; -[SCDbInitResult error] */

undefined8 FUN_105927d98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105927da0; end: 105927dcf; -[SCDbInitResult setError:] */

void FUN_105927da0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105927dd0; end: 105927dff; -[SCDbInitResult .cxx_destruct] */

void FUN_105927dd0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105927e00; end: 105928093; -[SCFideliusAckRetryService _processArroyoRetries:recipientId:recipientKeys:source:withBackground:retryType:] */

void FUN_105927e00(undefined **param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
                  undefined **param_5,undefined **param_6,undefined **param_7,undefined **param_8)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined **unaff_x23;
  undefined *puVar20;
  undefined **unaff_x24;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined *puStack_430;
  undefined8 uStack_428;
  code *pcStack_420;
  undefined *puStack_418;
  undefined1 *puStack_410;
  undefined **ppuStack_408;
  long lStack_380;
  undefined **ppuStack_370;
  undefined **ppuStack_368;
  undefined **ppuStack_360;
  undefined **ppuStack_358;
  undefined **ppuStack_350;
  undefined **ppuStack_348;
  undefined **ppuStack_340;
  undefined **ppuStack_338;
  undefined **ppuStack_330;
  undefined **ppuStack_328;
  undefined1 **ppuStack_320;
  code *pcStack_318;
  undefined8 uStack_310;
  undefined *puStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f0;
  undefined **ppuStack_2e8;
  undefined4 uStack_2dc;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined4 uStack_2b4;
  undefined8 uStack_2b0;
  long lStack_2a8;
  long *plStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined1 auStack_270 [128];
  long lStack_1f0;
  undefined **ppuStack_1e0;
  undefined **ppuStack_1d8;
  undefined **ppuStack_1d0;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined **ppuStack_1a0;
  undefined **ppuStack_198;
  undefined1 *puStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  undefined **ppuStack_168;
  undefined **ppuStack_160;
  undefined4 uStack_154;
  undefined **ppuStack_150;
  undefined **ppuStack_148;
  undefined4 uStack_13c;
  undefined **ppuStack_138;
  undefined *puStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *apuStack_f0 [16];
  long lStack_70;
  
  uStack_154 = SUB84(param_8,0);
  uStack_13c = SUB84(param_7,0);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar15 = param_6;
  _objc_retain(param_3);
  ppuStack_148 = param_4;
  _objc_retain(param_4);
  ppuStack_150 = param_5;
  _objc_retain(param_5);
  ppuStack_138 = param_6;
  _objc_retain(param_6);
  lStack_128 = 0;
  puStack_130 = (undefined *)0x0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  ppuVar17 = &puStack_130;
  ppuVar4 = apuStack_f0;
  ppuVar13 = (undefined **)0x10;
  ppuVar2 = param_3;
  ppuStack_160 = param_3;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    param_6 = (undefined **)*plStack_120;
    param_5 = &PTR____CFConstantStringClassReference_110e0e878;
    ppuStack_168 = param_6;
    do {
      unaff_x24 = (undefined **)0x0;
      do {
        if ((undefined **)*plStack_120 != param_6) {
          _objc_enumerationMutation(ppuStack_160);
        }
        param_3 = *(undefined ***)(lStack_128 + (long)unaff_x24 * 8);
        unaff_x27 = param_3;
        func_0x00010c271e60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a5bc0(param_1[5]);
        param_4 = param_1;
        func_0x00010be46700();
        _objc_retainAutoreleasedReturnValue();
        if (param_4 == (undefined **)0x0) {
          puVar18 = param_1[5];
          ppuVar17 = param_3;
          func_0x00010c0cb5a0();
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = ppuVar17;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = param_3;
          func_0x00010bf50280();
          _objc_retainAutoreleasedReturnValue();
          ppuVar15 = (undefined **)0x1;
          param_7 = (undefined **)0x0;
          param_8 = &PTR____CFConstantStringClassReference_110e0e898;
          uStack_180 = unaff_x27;
          ppuStack_178 = unaff_x23;
          ppuStack_170 = unaff_x26;
          func_0x00010c0a0380(puVar18);
          _objc_release(unaff_x26);
          _objc_release(unaff_x23);
          _objc_release(ppuVar17);
          puVar18 = param_1[7];
          param_4 = param_3;
          FUN_105946274();
          _objc_retainAutoreleasedReturnValue();
          param_6 = ppuStack_168;
          func_0x00010befc2a0(puVar18);
        }
        else {
          uStack_180 = (undefined **)CONCAT44(uStack_154,(undefined4)uStack_180);
          uStack_180 = (undefined **)((ulong)CONCAT61(uStack_180._2_6_,(char)uStack_13c) << 8);
          ppuVar15 = ppuStack_138;
          param_7 = param_3;
          param_8 = unaff_x27;
          func_0x00010be97420(param_1);
        }
        _objc_release(param_4);
        _objc_release(unaff_x27);
        unaff_x24 = (undefined **)((long)unaff_x24 + 1);
      } while (ppuVar2 != unaff_x24);
      ppuVar17 = &puStack_130;
      ppuVar4 = apuStack_f0;
      ppuVar13 = (undefined **)0x10;
      ppuVar2 = ppuStack_160;
      func_0x00010bf52a60();
      unaff_x28 = (undefined **)0x0;
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(ppuStack_138);
  _objc_release(ppuStack_150);
  _objc_release(ppuStack_148);
  ppuVar2 = ppuStack_160;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_188 = FUN_105928094;
  uStack_2dc = SUB84(param_8,0);
  uStack_2b4 = SUB84(param_7,0);
  lStack_1f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar16 = ppuVar15;
  ppuStack_1e0 = unaff_x28;
  ppuStack_1d8 = unaff_x27;
  ppuStack_1d0 = unaff_x26;
  ppuStack_1c8 = param_1;
  ppuStack_1c0 = unaff_x24;
  ppuStack_1b8 = unaff_x23;
  ppuStack_1b0 = param_6;
  ppuStack_1a8 = param_5;
  ppuStack_1a0 = param_4;
  ppuStack_198 = param_3;
  puStack_190 = &stack0xfffffffffffffff0;
  _objc_retain(ppuVar17);
  ppuStack_2d0 = ppuVar4;
  _objc_retain(ppuVar4);
  ppuStack_2d8 = ppuVar13;
  _objc_retain(ppuVar13);
  _objc_retain(ppuVar15);
  lStack_2a8 = 0;
  uStack_2b0 = 0;
  uStack_298 = 0;
  plStack_2a0 = (long *)0x0;
  uStack_288 = 0;
  uStack_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  puVar10 = &uStack_2b0;
  puVar12 = auStack_270;
  uVar14 = 0x10;
  ppuVar3 = ppuVar17;
  ppuStack_2e8 = ppuVar17;
  func_0x00010bf52a60();
  if (ppuVar3 != (undefined **)0x0) {
    unaff_x23 = (undefined **)*plStack_2a0;
    ppuStack_2f0 = unaff_x23;
    do {
      unaff_x27 = (undefined **)0x0;
      do {
        if ((undefined **)*plStack_2a0 != unaff_x23) {
          _objc_enumerationMutation(ppuStack_2e8);
        }
        ppuVar17 = *(undefined ***)(lStack_2a8 + (long)unaff_x27 * 8);
        ppuVar13 = ppuVar17;
        func_0x00010bf50280();
        _objc_retainAutoreleasedReturnValue();
        ppuVar16 = ppuVar13;
        func_0x00010bfe2ee0();
        ppuVar4 = ppuVar13;
        func_0x00010c0b5940(ppuVar13);
        func_0x000100c4a928(ppuVar16,ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        ppuVar4 = ppuVar16;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar16);
        ppuVar16 = ppuVar17;
        func_0x00010c0cb5a0();
        unaff_x26 = ppuVar4;
        uStack_310 = ppuVar16;
        func_0x00010c25cde0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar4);
        _objc_release(ppuVar13);
        func_0x00010c0a5bc0(ppuVar2[5]);
        unaff_x28 = ppuVar2;
        func_0x00010be46720();
        _objc_retainAutoreleasedReturnValue();
        puVar18 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (unaff_x28 == (undefined **)0x0) {
          puStack_2c8 = ppuVar2[5];
          func_0x00010c0cb5a0(ppuVar17);
          func_0x00010c0df7c0();
          _objc_retainAutoreleasedReturnValue();
          puStack_2c0 = puVar18;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = ppuVar17;
          func_0x00010bf50280();
          _objc_retainAutoreleasedReturnValue();
          ppuVar13 = ppuVar4;
          func_0x00010bfe2ee0();
          ppuVar16 = ppuVar4;
          func_0x00010c0b5940(ppuVar4);
          func_0x000100c4a928(ppuVar13,ppuVar16);
          _objc_retainAutoreleasedReturnValue();
          ppuVar5 = ppuVar13;
          func_0x00010c0b5ac0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar13);
          ppuVar16 = (undefined **)0x1;
          param_7 = (undefined **)0x0;
          param_8 = &PTR____CFConstantStringClassReference_110e0e898;
          uStack_310 = unaff_x26;
          puStack_308 = puVar18;
          ppuStack_300 = ppuVar5;
          func_0x00010c0a0380(puStack_2c8);
          _objc_release(ppuVar5);
          unaff_x23 = ppuStack_2f0;
          _objc_release(ppuVar4);
          _objc_release(puVar18);
          _objc_release(puStack_2c0);
          func_0x00010befc2a0(ppuVar2[7]);
          ppuVar4 = ppuVar15;
          unaff_x28 = ppuVar2;
        }
        else {
          uStack_310 = (undefined **)CONCAT44(uStack_2dc,(undefined4)uStack_310);
          uStack_310 = (undefined **)((ulong)CONCAT61(uStack_310._2_6_,(char)uStack_2b4) << 8);
          ppuVar16 = ppuVar15;
          param_7 = ppuVar17;
          param_8 = unaff_x26;
          func_0x00010be97440(ppuVar2);
          _objc_release(unaff_x28);
        }
        ppuVar13 = &PTR____CFConstantStringClassReference_110db3bb8;
        _objc_release(unaff_x26);
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar3 != unaff_x27);
      puVar10 = &uStack_2b0;
      puVar12 = auStack_270;
      uVar14 = 0x10;
      ppuVar3 = ppuStack_2e8;
      func_0x00010bf52a60();
      unaff_x24 = (undefined **)0x0;
    } while (ppuVar3 != (undefined **)0x0);
  }
  _objc_release(ppuVar15);
  _objc_release(ppuStack_2d8);
  _objc_release(ppuStack_2d0);
  ppuVar3 = ppuStack_2e8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1f0) {
    return;
  }
  ___stack_chk_fail();
  pcStack_318 = FUN_1059283fc;
  lStack_380 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_370 = unaff_x28;
  ppuStack_368 = unaff_x27;
  ppuStack_360 = unaff_x26;
  ppuStack_358 = ppuVar2;
  ppuStack_350 = unaff_x24;
  ppuStack_348 = unaff_x23;
  ppuStack_340 = ppuVar15;
  ppuStack_338 = ppuVar13;
  ppuStack_330 = ppuVar4;
  ppuStack_328 = ppuVar17;
  ppuStack_320 = &puStack_190;
  _objc_retain(puVar10);
  _objc_retain(puVar12);
  _objc_retain(uVar14);
  _objc_retain(ppuVar16);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar6 = PTR_PTR_1126c03e0;
  _objc_alloc();
  puVar18 = PTR_PTR_1126c0388;
  puVar7 = ppuVar3[2];
  func_0x00010bf19880(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar7;
  func_0x00010c11a480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8420(puVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c298be0(ppuVar3[2]);
  func_0x00010c05b920();
  _objc_release(puVar18);
  _objc_release(puVar19);
  _objc_release(puVar7);
  uVar8 = uVar14;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  puStack_430 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_428 = 0xc2000000;
  pcStack_420 = FUN_10592882c;
  puStack_418 = &UNK_1108c0790;
  _objc_retain(puVar12);
  ppuVar17 = &puStack_430;
  uVar9 = uVar8;
  puStack_410 = puVar12;
  ppuStack_408 = ppuVar3;
  func_0x000100504554(uVar8,ppuVar17);
  _objc_release(uVar8);
  puVar18 = PTR_PTR_1126c03f0;
  func_0x00010c2bd680();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = ppuVar3[2];
  func_0x00010bf19880(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = puVar7;
  func_0x00010c11a4c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be790a0(ppuVar3);
  _objc_release(puVar19);
  _objc_release(puVar7);
  puVar19 = puVar18;
  func_0x00010c0ccc20();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar19;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (puVar7 == (undefined *)0x0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110dab0d8;
  }
  else {
    ppuVar4 = &PTR____CFConstantStringClassReference_110dab0d8;
    do {
      puVar20 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar19);
        }
        ppuVar13 = *(undefined ***)((long)puVar20 * 8);
        ppuVar2 = ppuVar13;
        func_0x00010c13ca20();
        _objc_retainAutoreleasedReturnValue();
        ppuVar15 = ppuVar2;
        func_0x00010c0720c0();
        _objc_release(ppuVar2);
        if (((ulong)ppuVar15 & 1) == 0) {
          func_0x00010c121ea0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = ppuVar13;
          goto LAB_10592870c;
        }
        puVar20 = puVar20 + 1;
      } while (puVar7 != puVar20);
      puVar7 = puVar19;
      func_0x00010bf52a60();
    } while (puVar7 != (undefined *)0x0);
  }
LAB_10592870c:
  _objc_release(puVar19);
  puVar19 = ppuVar3[5];
  ppuVar2 = param_7;
  func_0x00010c0cb5a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar15 = ppuVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar13 = param_7;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a0380(puVar19);
  _objc_release(ppuVar13);
  _objc_release(ppuVar15);
  _objc_release(ppuVar2);
  _objc_release(ppuVar4);
  _objc_release(puVar18);
  _objc_release(uVar9);
  _objc_release(puStack_410);
  _objc_release(puVar6);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(ppuVar16);
  _objc_release(uVar14);
  _objc_release(puVar12);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_380) {
    ___stack_chk_fail();
    puVar18 = PTR_PTR_1126c0388;
    uVar14 = *(undefined8 *)(puVar10[5] + 0x10);
    _objc_retain(ppuVar17);
    func_0x00010bf19880(uVar14);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd3660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar17);
    _objc_release(uVar14);
    puVar6 = PTR_PTR_1126c0388;
    if (puVar18 == (undefined *)0x0) {
      puVar19 = (undefined *)0x0;
    }
    else {
      puVar19 = puVar18;
      func_0x00010c26cfc0(puVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff6b40(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar19);
      puVar19 = PTR_PTR_1126c03e8;
      _objc_alloc(PTR_PTR_1126c03e8);
      puVar7 = puVar18;
      func_0x00010c2923e0(puVar18);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar18;
      func_0x00010c0d4ee0(puVar18);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar18;
      func_0x00010c298be0(puVar18);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      func_0x00010c05b900(puVar19);
      _objc_release(puVar11);
      _objc_release(puVar20);
      _objc_release(puVar7);
      _objc_release(puVar6);
    }
    _objc_release(puVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
    return;
  }
  return;
}



/* Entry: 105928094; end: 1059283fb; -[SCFideliusAckRetryService _processArroyoRetriesV2:recipientId:recipientKeys:source:withBackground:retryType:] */

void FUN_105928094(long param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
                  undefined **param_5,undefined **param_6,undefined **param_7,undefined **param_8)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  undefined *puVar17;
  long unaff_x23;
  undefined *puVar18;
  undefined8 unaff_x24;
  undefined **ppuVar19;
  undefined **unaff_x26;
  undefined **unaff_x27;
  long unaff_x28;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  code *pcStack_2a0;
  undefined *puStack_298;
  undefined1 *puStack_290;
  undefined **ppuStack_288;
  long lStack_200;
  long lStack_1f0;
  undefined **ppuStack_1e8;
  undefined **ppuStack_1e0;
  long lStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined **ppuStack_1c0;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1b0;
  undefined **ppuStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined **ppuStack_180;
  long lStack_170;
  undefined **ppuStack_168;
  undefined4 uStack_15c;
  undefined **ppuStack_158;
  undefined **ppuStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined4 uStack_134;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  uStack_15c = SUB84(param_8,0);
  uStack_134 = SUB84(param_7,0);
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar16 = param_6;
  _objc_retain(param_3);
  ppuStack_150 = param_4;
  _objc_retain(param_4);
  ppuStack_158 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_6);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar12 = &uStack_130;
  puVar14 = auStack_f0;
  uVar15 = 0x10;
  ppuVar2 = param_3;
  ppuStack_168 = param_3;
  func_0x00010bf52a60();
  if (ppuVar2 != (undefined **)0x0) {
    unaff_x23 = *plStack_120;
    lStack_170 = unaff_x23;
    do {
      unaff_x27 = (undefined **)0x0;
      do {
        if (*plStack_120 != unaff_x23) {
          _objc_enumerationMutation(ppuStack_168);
        }
        param_3 = *(undefined ***)(lStack_128 + (long)unaff_x27 * 8);
        ppuVar16 = param_3;
        func_0x00010bf50280();
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = ppuVar16;
        func_0x00010bfe2ee0();
        ppuVar4 = ppuVar16;
        func_0x00010c0b5940(ppuVar16);
        func_0x000100c4a928(ppuVar3,ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        param_4 = ppuVar3;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar3);
        ppuVar3 = param_3;
        func_0x00010c0cb5a0();
        unaff_x26 = param_4;
        uStack_190 = ppuVar3;
        func_0x00010c25cde0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_4);
        _objc_release(ppuVar16);
        func_0x00010c0a5bc0(*(undefined8 *)(param_1 + 0x28));
        unaff_x28 = param_1;
        func_0x00010be46720();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        if (unaff_x28 == 0) {
          uStack_148 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c0cb5a0(param_3);
          func_0x00010c0df7c0();
          _objc_retainAutoreleasedReturnValue();
          puStack_140 = puVar5;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          ppuVar3 = param_3;
          func_0x00010bf50280();
          _objc_retainAutoreleasedReturnValue();
          ppuVar16 = ppuVar3;
          func_0x00010bfe2ee0();
          ppuVar4 = ppuVar3;
          func_0x00010c0b5940(ppuVar3);
          func_0x000100c4a928(ppuVar16,ppuVar4);
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = ppuVar16;
          func_0x00010c0b5ac0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(ppuVar16);
          ppuVar16 = (undefined **)0x1;
          param_7 = (undefined **)0x0;
          param_8 = &PTR____CFConstantStringClassReference_110e0e898;
          uStack_190 = unaff_x26;
          puStack_188 = puVar5;
          ppuStack_180 = ppuVar4;
          func_0x00010c0a0380(uStack_148);
          _objc_release(ppuVar4);
          unaff_x23 = lStack_170;
          _objc_release(ppuVar3);
          _objc_release(puVar5);
          _objc_release(puStack_140);
          func_0x00010befc2a0(*(undefined8 *)(param_1 + 0x38));
          param_4 = param_6;
          unaff_x28 = param_1;
        }
        else {
          uStack_190 = (undefined **)CONCAT44(uStack_15c,(undefined4)uStack_190);
          uStack_190 = (undefined **)((ulong)CONCAT61(uStack_190._2_6_,(char)uStack_134) << 8);
          ppuVar16 = param_6;
          param_7 = param_3;
          param_8 = unaff_x26;
          func_0x00010be97440(param_1);
          _objc_release(unaff_x28);
        }
        param_5 = &PTR____CFConstantStringClassReference_110db3bb8;
        _objc_release(unaff_x26);
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar2 != unaff_x27);
      puVar12 = &uStack_130;
      puVar14 = auStack_f0;
      uVar15 = 0x10;
      ppuVar2 = ppuStack_168;
      func_0x00010bf52a60();
      unaff_x24 = 0;
    } while (ppuVar2 != (undefined **)0x0);
  }
  _objc_release(param_6);
  _objc_release(ppuStack_158);
  _objc_release(ppuStack_150);
  ppuVar2 = ppuStack_168;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_198 = FUN_1059283fc;
  lStack_200 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1f0 = unaff_x28;
  ppuStack_1e8 = unaff_x27;
  ppuStack_1e0 = unaff_x26;
  lStack_1d8 = param_1;
  uStack_1d0 = unaff_x24;
  lStack_1c8 = unaff_x23;
  ppuStack_1c0 = param_6;
  ppuStack_1b8 = param_5;
  ppuStack_1b0 = param_4;
  ppuStack_1a8 = param_3;
  puStack_1a0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar12);
  _objc_retain(puVar14);
  _objc_retain(uVar15);
  _objc_retain(ppuVar16);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar6 = PTR_PTR_1126c03e0;
  _objc_alloc();
  puVar5 = PTR_PTR_1126c0388;
  puVar7 = ppuVar2[2];
  func_0x00010bf19880(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar7;
  func_0x00010c11a480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8420(puVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c298be0(ppuVar2[2]);
  func_0x00010c05b920();
  _objc_release(puVar5);
  _objc_release(puVar17);
  _objc_release(puVar7);
  uVar8 = uVar15;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  puStack_2b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2a8 = 0xc2000000;
  pcStack_2a0 = FUN_10592882c;
  puStack_298 = &UNK_1108c0790;
  _objc_retain(puVar14);
  ppuVar3 = &puStack_2b0;
  uVar9 = uVar8;
  puStack_290 = puVar14;
  ppuStack_288 = ppuVar2;
  func_0x000100504554(uVar8,ppuVar3);
  _objc_release(uVar8);
  puVar5 = PTR_PTR_1126c03f0;
  func_0x00010c2bd680();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = ppuVar2[2];
  func_0x00010bf19880(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar7;
  func_0x00010c11a4c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be790a0(ppuVar2);
  _objc_release(puVar17);
  _objc_release(puVar7);
  puVar17 = puVar5;
  func_0x00010c0ccc20();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar17;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (puVar7 == (undefined *)0x0) {
    ppuVar4 = &PTR____CFConstantStringClassReference_110dab0d8;
  }
  else {
    ppuVar4 = &PTR____CFConstantStringClassReference_110dab0d8;
    do {
      puVar18 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar17);
        }
        ppuVar19 = *(undefined ***)((long)puVar18 * 8);
        ppuVar10 = ppuVar19;
        func_0x00010c13ca20();
        _objc_retainAutoreleasedReturnValue();
        ppuVar11 = ppuVar10;
        func_0x00010c0720c0();
        _objc_release(ppuVar10);
        if (((ulong)ppuVar11 & 1) == 0) {
          func_0x00010c121ea0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar4 = ppuVar19;
          goto LAB_10592870c;
        }
        puVar18 = puVar18 + 1;
      } while (puVar7 != puVar18);
      puVar7 = puVar17;
      func_0x00010bf52a60();
    } while (puVar7 != (undefined *)0x0);
  }
LAB_10592870c:
  _objc_release(puVar17);
  puVar17 = ppuVar2[5];
  ppuVar2 = param_7;
  func_0x00010c0cb5a0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar10 = ppuVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = param_7;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a0380(puVar17);
  _objc_release(ppuVar11);
  _objc_release(ppuVar10);
  _objc_release(ppuVar2);
  _objc_release(ppuVar4);
  _objc_release(puVar5);
  _objc_release(uVar9);
  _objc_release(puStack_290);
  _objc_release(puVar6);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(ppuVar16);
  _objc_release(uVar15);
  _objc_release(puVar14);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_200) {
    ___stack_chk_fail();
    puVar5 = PTR_PTR_1126c0388;
    uVar15 = *(undefined8 *)(puVar12[5] + 0x10);
    _objc_retain(ppuVar3);
    func_0x00010bf19880(uVar15);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd3660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar3);
    _objc_release(uVar15);
    puVar6 = PTR_PTR_1126c0388;
    if (puVar5 == (undefined *)0x0) {
      puVar17 = (undefined *)0x0;
    }
    else {
      puVar17 = puVar5;
      func_0x00010c26cfc0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff6b40(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar17);
      puVar17 = PTR_PTR_1126c03e8;
      _objc_alloc(PTR_PTR_1126c03e8);
      puVar7 = puVar5;
      func_0x00010c2923e0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar5;
      func_0x00010c0d4ee0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar5;
      func_0x00010c298be0(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      func_0x00010c05b900(puVar17);
      _objc_release(puVar13);
      _objc_release(puVar18);
      _objc_release(puVar7);
      _objc_release(puVar6);
    }
    _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
    return;
  }
  return;
}



/* Entry: 1059283fc; end: 10592882b; -[SCFideliusAckRetryService _rewrapAndSubmitSingleMessage:recipientId:recipientKeys:source:arroyoId:uniqueId:isCrossDeviceRetry:withBackground:retryType:] */

void FUN_1059283fc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar2 = PTR_PTR_1126c03e0;
  _objc_alloc();
  puVar4 = PTR_PTR_1126c0388;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf19880(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar3;
  func_0x00010c11a480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8420(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c298be0(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c05b920();
  _objc_release(puVar4);
  _objc_release(uVar16);
  _objc_release(uVar3);
  uVar16 = param_5;
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_10592882c;
  puStack_108 = &UNK_1108c0790;
  _objc_retain(param_4);
  ppuVar11 = &puStack_120;
  uVar3 = uVar16;
  uStack_100 = param_4;
  lStack_f8 = param_1;
  func_0x000100504554(uVar16,ppuVar11);
  _objc_release(uVar16);
  puVar4 = PTR_PTR_1126c03f0;
  func_0x00010c2bd680();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf19880(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar5;
  func_0x00010c11a4c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be790a0(param_1);
  _objc_release(uVar16);
  _objc_release(uVar5);
  puVar13 = puVar4;
  func_0x00010c0ccc20();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar13;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (puVar6 == (undefined *)0x0) {
    ppuVar12 = &PTR____CFConstantStringClassReference_110dab0d8;
  }
  else {
    ppuVar12 = &PTR____CFConstantStringClassReference_110dab0d8;
    do {
      puVar15 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar13);
        }
        ppuVar17 = *(undefined ***)((long)puVar15 * 8);
        ppuVar7 = ppuVar17;
        func_0x00010c13ca20();
        _objc_retainAutoreleasedReturnValue();
        ppuVar8 = ppuVar7;
        func_0x00010c0720c0();
        _objc_release(ppuVar7);
        if (((ulong)ppuVar8 & 1) == 0) {
          func_0x00010c121ea0();
          _objc_retainAutoreleasedReturnValue();
          ppuVar12 = ppuVar17;
          goto LAB_10592870c;
        }
        puVar15 = puVar15 + 1;
      } while (puVar6 != puVar15);
      puVar6 = puVar13;
      func_0x00010bf52a60();
    } while (puVar6 != (undefined *)0x0);
  }
LAB_10592870c:
  _objc_release(puVar13);
  uVar14 = *(undefined8 *)(param_1 + 0x28);
  uVar16 = param_7;
  func_0x00010c0cb5a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar16;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_7;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a0380(uVar14);
  _objc_release(uVar9);
  _objc_release(uVar5);
  _objc_release(uVar16);
  _objc_release(ppuVar12);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uStack_100);
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar4 = PTR_PTR_1126c0388;
    uVar16 = *(undefined8 *)(*(long *)(param_3 + 0x28) + 0x10);
    _objc_retain(ppuVar11);
    func_0x00010bf19880(uVar16);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd3660();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar11);
    _objc_release(uVar16);
    puVar2 = PTR_PTR_1126c0388;
    if (puVar4 == (undefined *)0x0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar13 = puVar4;
      func_0x00010c26cfc0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff6b40(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar13);
      puVar13 = PTR_PTR_1126c03e8;
      _objc_alloc(PTR_PTR_1126c03e8);
      puVar6 = puVar4;
      func_0x00010c2923e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar4;
      func_0x00010c0d4ee0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar4;
      func_0x00010c298be0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      func_0x00010c05b900(puVar13);
      _objc_release(puVar10);
      _objc_release(puVar15);
      _objc_release(puVar6);
      _objc_release(puVar2);
    }
    _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
    return;
  }
  return;
}



/* Entry: 10592882c; end: 1059289a3;  */

void FUN_10592882c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126c0388;
  uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
  _objc_retain(param_2);
  func_0x00010bf19880(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd3660();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar7);
  puVar2 = PTR_PTR_1126c0388;
  if (puVar1 == (undefined *)0x0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = puVar1;
    func_0x00010c26cfc0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff6b40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126c03e8;
    _objc_alloc(PTR_PTR_1126c03e8);
    puVar3 = puVar1;
    func_0x00010c2923e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c0d4ee0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c298be0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x00010c05b900(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1059289a4; end: 105928e33; -[SCFideliusAckRetryService _rewrapAndSubmitSingleMessageV2:recipientId:recipientKeys:source:arroyoId:uniqueId:isCrossDeviceRetry:withBackground:retryType:] */

void FUN_1059289a4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar2 = PTR_PTR_1126c03e0;
  _objc_alloc();
  puVar4 = PTR_PTR_1126c0388;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf19880(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar3;
  func_0x00010c11a480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8420(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c298be0(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c05b920();
  _objc_release(puVar4);
  _objc_release(uVar12);
  _objc_release(uVar3);
  uVar12 = param_5;
  func_0x00010bfb8020();
  _objc_retainAutoreleasedReturnValue();
  puStack_120 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_118 = 0xc2000000;
  pcStack_110 = FUN_105928e34;
  puStack_108 = &UNK_1108c07c0;
  _objc_retain(param_4);
  uVar3 = uVar12;
  uStack_100 = param_4;
  lStack_f8 = param_1;
  func_0x000100504554(uVar12,&puStack_120);
  _objc_release(uVar12);
  puVar4 = PTR_PTR_1126c03f0;
  func_0x00010c2bd680();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf19880(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar5;
  func_0x00010c11a4c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be78fa0(param_1);
  _objc_release(uVar12);
  _objc_release(uVar5);
  puVar6 = puVar4;
  func_0x00010c0ccc20();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (puVar7 == (undefined *)0x0) {
    ppuVar19 = &PTR____CFConstantStringClassReference_110dab0d8;
  }
  else {
    ppuVar19 = &PTR____CFConstantStringClassReference_110dab0d8;
    do {
      puVar17 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar6);
        }
        ppuVar18 = *(undefined ***)((long)puVar17 * 8);
        ppuVar8 = ppuVar18;
        func_0x00010c13ca20();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar8;
        func_0x00010c0720c0();
        _objc_release(ppuVar8);
        if (((ulong)ppuVar9 & 1) == 0) {
          func_0x00010c121ea0(ppuVar18);
          _objc_retainAutoreleasedReturnValue();
          ppuVar19 = ppuVar18;
          goto LAB_105928cb8;
        }
        puVar17 = puVar17 + 1;
      } while (puVar7 != puVar17);
      puVar7 = puVar6;
      func_0x00010bf52a60();
    } while (puVar7 != (undefined *)0x0);
  }
LAB_105928cb8:
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar16 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0cb5a0(param_7);
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_7;
  func_0x00010bf50280();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar12;
  func_0x00010bfe2ee0();
  uVar10 = uVar12;
  func_0x00010c0b5940(uVar12);
  func_0x000100c4a928(uVar5,uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar5;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  func_0x00010c0a0380(uVar16);
  _objc_release(uVar11);
  _objc_release(uVar12);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(ppuVar19);
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(uStack_100);
  _objc_release(puVar2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar4 = PTR_PTR_1126c0388;
    _objc_retain(uVar10);
    uVar12 = uVar10;
    func_0x00010c11a480(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef8420(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010bf15da0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_release(uVar12);
    puVar7 = PTR_PTR_1126c03f8;
    _objc_alloc(PTR_PTR_1126c03f8);
    func_0x00010c298be0(uVar10);
    _objc_release(uVar10);
    func_0x00010c0326c0(puVar7);
    puVar4 = PTR_PTR_1126c0388;
    uVar12 = *(undefined8 *)(*(long *)(param_3 + 0x28) + 0x10);
    func_0x00010bf19880(uVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfd3680();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    puVar2 = PTR_PTR_1126c0388;
    if (puVar4 == (undefined *)0x0) {
      puVar17 = (undefined *)0x0;
    }
    else {
      puVar17 = puVar7;
      func_0x00010c0ee500(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff6b40(puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar17);
      puVar17 = PTR_PTR_1126c03e8;
      _objc_alloc(PTR_PTR_1126c03e8);
      puVar13 = puVar4;
      func_0x00010c2923e0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar4;
      func_0x00010c0d4ee0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar4;
      func_0x00010c298be0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067ec0();
      func_0x00010c05b900(puVar17);
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(puVar13);
      _objc_release(puVar2);
    }
    _objc_release(puVar4);
    _objc_release(puVar7);
    _objc_release(puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar17);
    return;
  }
  return;
}



/* Entry: 105928e34; end: 105929043;  */

void FUN_105928e34(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  puVar1 = PTR_PTR_1126c0388;
  _objc_retain(param_2);
  uVar4 = param_2;
  func_0x00010c11a480(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8420(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar4);
  puVar3 = PTR_PTR_1126c03f8;
  _objc_alloc(PTR_PTR_1126c03f8);
  func_0x00010c298be0(param_2);
  _objc_release(param_2);
  func_0x00010c0326c0(puVar3);
  puVar1 = PTR_PTR_1126c0388;
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10);
  func_0x00010bf19880(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd3680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126c0388;
  if (puVar1 == (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = puVar3;
    func_0x00010c0ee500(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff6b40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar9);
    puVar9 = PTR_PTR_1126c03e8;
    _objc_alloc(PTR_PTR_1126c03e8);
    puVar6 = puVar1;
    func_0x00010c2923e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar1;
    func_0x00010c0d4ee0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar1;
    func_0x00010c298be0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c067ec0();
    func_0x00010c05b900(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 105929044; end: 1059294c7; -[SCFideliusAckRetryService _unwrapSingleArroyoRetryInfo:] */

void FUN_105929044(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfac3c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c122e00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126c03e0;
  _objc_alloc();
  uVar6 = uVar1;
  func_0x00010c122e00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c0388;
  uVar8 = param_3;
  func_0x00010c122aa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff6b40(puVar4,param_2,uVar8,&PTR____CFConstantStringClassReference_110e0e8d8);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar1;
  func_0x00010c122ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar18 = uVar11;
  func_0x00010c067ec0();
  func_0x00010c05b920(puVar3,param_2,uVar6,puVar4,uVar18);
  _objc_release(uVar11);
  _objc_release(puVar4);
  _objc_release(uVar8);
  _objc_release(uVar6);
  puVar5 = PTR_PTR_1126c0400;
  _objc_alloc();
  uVar6 = param_3;
  func_0x00010c122aa0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar8 = uVar1;
  func_0x00010c122ec0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0326c0(puVar5,param_2,uVar6,uVar8);
  _objc_release(uVar8);
  _objc_release(uVar6);
  puVar4 = PTR_PTR_1126c0388;
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf19880(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd3660(puVar4,param_2,uVar2,puVar5,uVar6,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  puVar7 = PTR_PTR_1126c03e8;
  _objc_alloc();
  puVar9 = PTR_PTR_1126c0388;
  uVar18 = *(undefined8 *)(param_1 + 0x20);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf19880(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar8;
  func_0x00010c11a480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8420(puVar9,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar4;
  func_0x00010c0d4ee0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c298be0(uVar11);
  func_0x00010c05b900(puVar7,param_2,uVar18,puVar9,puVar10,uVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(uVar6);
  _objc_release(uVar8);
  puVar12 = PTR_PTR_1126c0408;
  _objc_alloc(PTR_PTR_1126c0408);
  uVar6 = uVar1;
  func_0x00010c15df40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar1;
  func_0x00010c122e00();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar3;
  func_0x00010c11a480(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_PTR_1126c0388;
  uVar11 = uVar1;
  func_0x00010c0d4f40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff6b40(puVar9,param_2,uVar11,&PTR____CFConstantStringClassReference_110e0e8d8);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR_PTR_1126c0388;
  uVar18 = uVar1;
  func_0x00010c0faa60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff6b40(puVar10,param_2,uVar18,&PTR____CFConstantStringClassReference_110e0e8d8);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126c0388;
  uVar14 = uVar1;
  func_0x00010c268120(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff6b40(puVar15,param_2,uVar14,&PTR____CFConstantStringClassReference_110e0e8d8);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar1;
  func_0x00010c122ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar17 = uVar16;
  func_0x00010c067ec0();
  func_0x00010c0446e0(puVar12,param_2,uVar6,uVar8,puVar13,puVar9,puVar10,puVar15,(int)uVar17);
  _objc_release(uVar16);
  _objc_release(puVar15);
  _objc_release(uVar14);
  _objc_release(puVar10);
  _objc_release(uVar18);
  _objc_release(puVar9);
  _objc_release(uVar11);
  _objc_release(puVar13);
  _objc_release(uVar8);
  _objc_release(uVar6);
  puVar9 = PTR_PTR_1126c03f0;
  func_0x00010c282f00(PTR_PTR_1126c03f0,param_2,puVar12,
                      &PTR____CFConstantStringClassReference_110dbddd8,puVar3,puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar12);
  _objc_release(puVar7);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1059294c8; end: 10592983f; -[SCFideliusAckRetryService _unwrapSingleArroyoRetryInfoV2:recipientId:] */

void FUN_1059294c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar1 = PTR_PTR_1126c03e0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  puVar2 = PTR_PTR_1126c0388;
  uVar5 = param_3;
  func_0x00010c11a480(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8420(puVar2,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c086b40(param_3);
  func_0x00010c05b920(puVar1,param_2,param_4,puVar2,uVar7);
  _objc_release(puVar2);
  _objc_release(uVar5);
  puVar3 = PTR_PTR_1126c03f8;
  _objc_alloc();
  puVar2 = PTR_PTR_1126c0388;
  uVar5 = param_3;
  func_0x00010c11a480(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8420(puVar2,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c086b40(param_3);
  func_0x00010c0326c0(puVar3,param_2,puVar4,uVar7);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(uVar5);
  puVar2 = PTR_PTR_1126c0388;
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf19880(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd3680(puVar2,param_2,param_4,puVar3,uVar5,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  puVar6 = PTR_PTR_1126c03e8;
  _objc_alloc(PTR_PTR_1126c03e8);
  puVar4 = PTR_PTR_1126c0388;
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf19880(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar7;
  func_0x00010c11a480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef8420(puVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar2;
  func_0x00010c0d4ee0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c298be0(uVar9);
  func_0x00010c05b900(puVar6,param_2,uVar12,puVar4,puVar8,uVar9);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(uVar5);
  _objc_release(uVar7);
  puVar4 = PTR_PTR_1126c0408;
  _objc_alloc(PTR_PTR_1126c0408);
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = param_3;
  func_0x00010c11a480(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_3;
  func_0x00010c149460(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010c0faa60(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = param_3;
  func_0x00010c296c80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_3;
  func_0x00010c086b40();
  _objc_release(param_3);
  func_0x00010c0446e0(puVar4,param_2,uVar11,param_4,uVar5,uVar7,uVar9,uVar12,(int)uVar10);
  _objc_release(param_4);
  _objc_release(uVar12);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar5);
  puVar8 = PTR_PTR_1126c03f0;
  func_0x00010c282f00(PTR_PTR_1126c03f0,param_2,puVar4,
                      &PTR____CFConstantStringClassReference_110dbddd8,puVar1,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105929840; end: 105929b43; -[SCFideliusAckRetryService _processArroyoRetryInfos:recipientId:recipientKeys:source:withBackground:retryType:] */

void FUN_105929840(ulong param_1,undefined8 param_2,ulong param_3,undefined8 param_4,ulong param_5,
                  undefined **param_6,undefined8 param_7,uint param_8)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  ulong uVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined **ppuVar25;
  undefined **ppuVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long lVar29;
  ulong unaff_x23;
  undefined8 *puVar30;
  undefined8 unaff_x25;
  undefined8 unaff_x26;
  ulong unaff_x27;
  undefined8 unaff_x28;
  undefined8 *puStack_2c8;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined1 auStack_280 [128];
  long lStack_200;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  undefined **ppuStack_1c0;
  ulong uStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined1 *puStack_1a0;
  code *pcStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  uint uStack_16c;
  ulong uStack_168;
  undefined8 uStack_160;
  ulong uStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined4 uStack_13c;
  undefined **ppuStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  uStack_13c = (undefined4)param_7;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar25 = param_6;
  uStack_16c = param_8;
  _objc_retain(param_3);
  uStack_160 = param_4;
  _objc_retain(param_4);
  uStack_168 = param_5;
  _objc_retain(param_5);
  ppuStack_138 = param_6;
  _objc_retain(param_6);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar10 = &uStack_130;
  puVar21 = auStack_f0;
  uVar23 = 0x10;
  uVar20 = param_3;
  uStack_158 = param_3;
  func_0x00010bf52a60();
  if (uVar20 != 0) {
    lStack_148 = *plStack_120;
    do {
      unaff_x27 = 0;
      do {
        if (*plStack_120 != lStack_148) {
          _objc_enumerationMutation(uStack_158);
        }
        unaff_x28 = *(undefined8 *)(lStack_128 + unaff_x27 * 8);
        func_0x00010bf0a360();
        _objc_retainAutoreleasedReturnValue();
        param_4 = unaff_x28;
        func_0x00010c271e60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0a5bc0(*(undefined8 *)(param_1 + 0x28));
        param_5 = param_1;
        func_0x00010bed22a0();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_5;
        func_0x00010c261740();
        if ((uVar1 & 1) == 0) {
          uVar1 = param_5;
          func_0x00010c0ccc20();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          unaff_x23 = uVar2;
          func_0x00010c121ea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar2);
          _objc_release(uVar1);
          uStack_150 = *(undefined8 *)(param_1 + 0x28);
          unaff_x26 = unaff_x28;
          func_0x00010c0cb5a0();
          _objc_retainAutoreleasedReturnValue();
          uVar23 = unaff_x26;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          uVar24 = unaff_x28;
          func_0x00010bf50280();
          _objc_retainAutoreleasedReturnValue();
          ppuVar25 = (undefined **)0x1;
          param_7 = 1;
          uVar1 = unaff_x23;
          uStack_190 = param_4;
          uStack_188 = uVar23;
          uStack_180 = uVar24;
          func_0x00010c0a0380(uStack_150);
          param_8 = (uint)uVar1;
          _objc_release(uVar24);
          _objc_release(uVar23);
          _objc_release(unaff_x26);
          param_3 = uVar20;
        }
        else {
          unaff_x23 = param_5;
          func_0x00010c086560();
          _objc_retainAutoreleasedReturnValue();
          uStack_190 = CONCAT44(uStack_16c,(undefined4)uStack_190);
          uStack_190 = CONCAT71(CONCAT61(uStack_190._2_6_,(char)uStack_13c),1);
          ppuVar25 = ppuStack_138;
          param_7 = unaff_x28;
          uVar23 = param_4;
          func_0x00010be97420(param_1);
          param_8 = (uint)uVar23;
        }
        param_6 = &PTR____CFConstantStringClassReference_110e0e878;
        _objc_release(unaff_x23);
        _objc_release(param_5);
        _objc_release(param_4);
        _objc_release(unaff_x28);
        unaff_x27 = unaff_x27 + 1;
      } while (uVar20 != unaff_x27);
      puVar10 = &uStack_130;
      puVar21 = auStack_f0;
      uVar23 = 0x10;
      uVar20 = uStack_158;
      func_0x00010bf52a60();
      unaff_x25 = 0;
    } while (uVar20 != 0);
  }
  _objc_release(ppuStack_138);
  _objc_release(uStack_168);
  _objc_release(uStack_160);
  uVar20 = uStack_158;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  pcStack_198 = FUN_105929b44;
  lStack_200 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar26 = ppuVar25;
  uStack_1f0 = unaff_x28;
  uStack_1e8 = unaff_x27;
  uStack_1e0 = unaff_x26;
  uStack_1d8 = unaff_x25;
  uStack_1d0 = param_1;
  uStack_1c8 = unaff_x23;
  ppuStack_1c0 = param_6;
  uStack_1b8 = param_5;
  uStack_1b0 = param_4;
  uStack_1a8 = param_3;
  puStack_1a0 = &stack0xfffffffffffffff0;
  _objc_retain(puVar10);
  _objc_retain(puVar21);
  _objc_retain(uVar23);
  _objc_retain(ppuVar25);
  lStack_2b8 = 0;
  uStack_2c0 = 0;
  uStack_2a8 = 0;
  plStack_2b0 = (long *)0x0;
  uStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  uStack_290 = 0;
  puVar30 = &uStack_2c0;
  puVar22 = auStack_280;
  uVar24 = 0x10;
  puStack_2c8 = puVar10;
  func_0x00010bf52a60();
  if (puStack_2c8 != (undefined8 *)0x0) {
    lVar29 = *plStack_2b0;
    do {
      puVar30 = (undefined8 *)0x0;
      do {
        if (*plStack_2b0 != lVar29) {
          _objc_enumerationMutation(puVar10);
        }
        uVar28 = *(undefined8 *)(lStack_2b8 + (long)puVar30 * 8);
        func_0x00010c0cb5a0();
        _objc_retainAutoreleasedReturnValue();
        uVar24 = uVar28;
        func_0x00010bf50280();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar24;
        func_0x00010bfe2ee0();
        uVar4 = uVar24;
        func_0x00010c0b5940(uVar24);
        func_0x000100c4a928(uVar3,uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar3);
        func_0x00010c0cb5a0();
        uVar3 = uVar4;
        func_0x00010c25cde0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
        _objc_release(uVar24);
        func_0x00010c0a5bc0(*(undefined8 *)(uVar20 + 0x28));
        uVar1 = uVar20;
        func_0x00010bed22c0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c261740();
        if ((uVar2 & 1) == 0) {
          uVar2 = uVar1;
          func_0x00010c0ccc20();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar2;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c121ea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          _objc_release(uVar2);
          puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar27 = *(undefined8 *)(uVar20 + 0x28);
          func_0x00010c0cb5a0(uVar28);
          func_0x00010c0df7c0();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          uVar24 = uVar28;
          func_0x00010bf50280();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar24;
          func_0x00010bfe2ee0();
          uVar9 = uVar24;
          func_0x00010c0b5940(uVar24);
          func_0x000100c4a928(uVar4,uVar9);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar4;
          func_0x00010c0b5ac0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
          ppuVar26 = (undefined **)0x1;
          param_7 = 1;
          uVar2 = uVar6;
          func_0x00010c0a0380(uVar27);
          param_8 = (uint)uVar2;
          _objc_release(uVar9);
          _objc_release(uVar24);
          _objc_release(puVar8);
          _objc_release(puVar7);
        }
        else {
          uVar6 = uVar1;
          func_0x00010c086560();
          _objc_retainAutoreleasedReturnValue();
          ppuVar26 = ppuVar25;
          param_7 = uVar28;
          uVar24 = uVar3;
          func_0x00010be97440(uVar20);
          param_8 = (uint)uVar24;
        }
        _objc_release(uVar6);
        _objc_release(uVar1);
        _objc_release(uVar3);
        _objc_release(uVar28);
        puVar30 = (undefined8 *)((long)puVar30 + 1);
      } while (puStack_2c8 != puVar30);
      puVar30 = &uStack_2c0;
      puVar22 = auStack_280;
      uVar24 = 0x10;
      puStack_2c8 = puVar10;
      func_0x00010bf52a60();
    } while (puStack_2c8 != (undefined8 *)0x0);
  }
  _objc_release(ppuVar25);
  _objc_release(uVar23);
  _objc_release(puVar21);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_200) {
    return;
  }
  ___stack_chk_fail();
  lVar29 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(ppuVar26);
  _objc_retain(uVar24);
  _objc_retain(puVar22);
  func_0x00010c2bd720();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar30;
  func_0x00010050471c();
  _objc_release(puVar30);
  puVar8 = PTR_PTR_1126c0418;
  _objc_alloc();
  func_0x00010c012aa0();
  puVar12 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR_PTR_1126c0420;
  _objc_opt_new();
  puVar14 = puVar13;
  func_0x00010c16a440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar24);
  puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c298be0(puVar10[2]);
  func_0x00010c0df780(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c19b7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar15;
  func_0x00010c19b780();
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar16;
  func_0x00010c1fcb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar26);
  puVar18 = puVar17;
  func_0x00010c1edb60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  puVar19 = puVar18;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar7);
  _objc_release(puVar14);
  _objc_release(puVar13);
  uVar20 = (ulong)param_8;
  puVar7 = puVar19;
  FUN_105946360(puVar19,uVar20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc2a0(puVar10[8]);
  _objc_release(puVar22);
  _objc_release(puVar7);
  _objc_release(puVar19);
  _objc_release(puVar12);
  _objc_release(puVar8);
  _objc_release(puVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar29) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c122d40(uVar20);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar20;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105929b44; end: 105929f23; -[SCFideliusAckRetryService _processArroyoRetryInfosV2:recipientId:recipientKeys:source:withBackground:retryType:] */

void FUN_105929b44(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,uint param_8)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined1 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar21 = param_6;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  puVar8 = &uStack_130;
  puVar19 = auStack_f0;
  uVar20 = 0x10;
  lStack_138 = param_3;
  func_0x00010bf52a60();
  if (lStack_138 != 0) {
    lVar24 = *plStack_120;
    do {
      lVar25 = 0;
      do {
        if (*plStack_120 != lVar24) {
          _objc_enumerationMutation(param_3);
        }
        uVar23 = *(undefined8 *)(lStack_128 + lVar25 * 8);
        func_0x00010c0cb5a0();
        _objc_retainAutoreleasedReturnValue();
        uVar21 = uVar23;
        func_0x00010bf50280();
        _objc_retainAutoreleasedReturnValue();
        uVar20 = uVar21;
        func_0x00010bfe2ee0();
        uVar1 = uVar21;
        func_0x00010c0b5940(uVar21);
        func_0x000100c4a928(uVar20,uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar20;
        func_0x00010c0b5ac0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar20);
        func_0x00010c0cb5a0();
        uVar20 = uVar1;
        func_0x00010c25cde0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
        _objc_release(uVar21);
        func_0x00010c0a5bc0(*(undefined8 *)(param_1 + 0x28));
        uVar18 = param_1;
        func_0x00010bed22c0();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar18;
        func_0x00010c261740();
        if ((uVar2 & 1) == 0) {
          uVar2 = uVar18;
          func_0x00010c0ccc20();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          func_0x00010c121ea0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar3);
          _objc_release(uVar2);
          puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
          uVar22 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c0cb5a0(uVar23);
          func_0x00010c0df7c0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar5;
          func_0x00010c25d700();
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar23;
          func_0x00010bf50280();
          _objc_retainAutoreleasedReturnValue();
          uVar21 = uVar1;
          func_0x00010bfe2ee0();
          uVar7 = uVar1;
          func_0x00010c0b5940(uVar1);
          func_0x000100c4a928(uVar21,uVar7);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar21;
          func_0x00010c0b5ac0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar21);
          uVar21 = 1;
          param_7 = 1;
          uVar2 = uVar4;
          func_0x00010c0a0380(uVar22);
          param_8 = (uint)uVar2;
          _objc_release(uVar7);
          _objc_release(uVar1);
          _objc_release(puVar6);
          _objc_release(puVar5);
        }
        else {
          uVar4 = uVar18;
          func_0x00010c086560();
          _objc_retainAutoreleasedReturnValue();
          uVar21 = param_6;
          param_7 = uVar23;
          uVar1 = uVar20;
          func_0x00010be97440(param_1);
          param_8 = (uint)uVar1;
        }
        _objc_release(uVar4);
        _objc_release(uVar18);
        _objc_release(uVar20);
        _objc_release(uVar23);
        lVar25 = lVar25 + 1;
      } while (lStack_138 != lVar25);
      puVar8 = &uStack_130;
      puVar19 = auStack_f0;
      uVar20 = 0x10;
      lStack_138 = param_3;
      func_0x00010bf52a60();
    } while (lStack_138 != 0);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  lVar24 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(uVar21);
  _objc_retain(uVar20);
  _objc_retain(puVar19);
  func_0x00010c2bd720();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010050471c();
  _objc_release(puVar8);
  puVar6 = PTR_PTR_1126c0418;
  _objc_alloc();
  func_0x00010c012aa0();
  puVar10 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR_PTR_1126c0420;
  _objc_opt_new();
  puVar12 = puVar11;
  func_0x00010c16a440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar20);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c298be0(*(undefined8 *)(param_3 + 0x10));
  func_0x00010c0df780(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010c19b7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010c19b780();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar14;
  func_0x00010c1fcb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar21);
  puVar16 = puVar15;
  func_0x00010c1edb60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  puVar17 = puVar16;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar5);
  _objc_release(puVar12);
  _objc_release(puVar11);
  uVar18 = (ulong)param_8;
  puVar5 = puVar17;
  FUN_105946360(puVar17,uVar18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc2a0(*(undefined8 *)(param_3 + 0x40));
  _objc_release(puVar19);
  _objc_release(puVar5);
  _objc_release(puVar17);
  _objc_release(puVar10);
  _objc_release(puVar6);
  _objc_release(puVar9);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar24) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c122d40(uVar18);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar18;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105929f24; end: 10592a1a7; -[SCFideliusAckRetryService _prepareSOJUAndSubmit:recipientId:arroyoId:myBetaString:source:retryType:] */

void FUN_105929f24(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,uint param_8)

{
  undefined8 uVar1;
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
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c2bd720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010050471c();
  _objc_release(param_3);
  puVar2 = PTR_PTR_1126c0418;
  _objc_alloc();
  func_0x00010c012aa0();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126c0420;
  _objc_opt_new();
  puVar5 = puVar4;
  func_0x00010c16a440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c298be0(*(undefined8 *)(param_1 + 0x10));
  func_0x00010c0df780(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c19b7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c19b780();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c1fcb40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  puVar10 = puVar9;
  func_0x00010c1edb60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  puVar11 = puVar10;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  uVar13 = (ulong)param_8;
  puVar6 = puVar11;
  FUN_105946360(puVar11,uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befc2a0(*(undefined8 *)(param_1 + 0x40));
  _objc_release(param_4);
  _objc_release(puVar6);
  _objc_release(puVar11);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c122d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar13;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar12);
  return;
}



/* Entry: 10592a1a8; end: 10592a1f3;  */

void FUN_10592a1a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c122d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10592a1f4; end: 10592a447;  */

void FUN_10592a1f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c149460();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c0faa60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = param_2;
  func_0x00010c0b6060();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf15da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126c0410;
  _objc_opt_new();
  puVar6 = puVar5;
  func_0x00010c1caf80();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c1db040();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar7;
  func_0x00010c211780();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c15de20(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar8;
  func_0x00010c1fcb80(puVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_2;
  func_0x00010c122b80(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010c1e8a60(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c122ec0(param_2);
  _objc_release(param_2);
  func_0x00010c0df760(puVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar11;
  func_0x00010c1e8ac0(puVar11);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = puVar13;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(uVar10);
  _objc_release(puVar9);
  _objc_release(uVar1);
  _objc_release(puVar8);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 10592a448; end: 10592a5c3; -[SCFideliusAckRetryService _prepareRecryptAndSubmitV2:recipientId:arroyoId:myBetaString:source:retryType:] */

void FUN_10592a448(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_PTR_1126c0428;
  _objc_retain(param_7);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc_init(puVar2);
  ppuVar3 = (undefined **)PTR_PTR_1126c03a0;
  func_0x00010beedae0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar3;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c1eb8;
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar1 = ppuVar4;
  }
  _objc_retain(ppuVar1);
  _objc_release(ppuVar4);
  _objc_release(ppuVar3);
  func_0x00010c067fc0(ppuVar1);
  _objc_release(ppuVar1);
  func_0x00010c1edb60(puVar2);
  func_0x00010c1edbc0(puVar2);
  func_0x00010c1c6f00(puVar2);
  _objc_release(param_5);
  uVar5 = param_3;
  func_0x00010c2bd720(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar6 = uVar5;
  func_0x000100504554(uVar5,&PTR___NSConcreteGlobalBlock_1108c0890);
  _objc_release(uVar5);
  uVar5 = uVar6;
  func_0x00010c0d3c80(uVar6);
  func_0x00010c18ca60(puVar2);
  _objc_release(uVar5);
  func_0x00010befc2a0(*(undefined8 *)(param_1 + 0x40));
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10592a5c4; end: 10592a6eb;  */

void FUN_10592a5c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126c0430;
  _objc_retain(param_2);
  _objc_alloc_init(puVar1);
  puVar3 = PTR_PTR_1126c0388;
  uVar2 = param_2;
  func_0x00010c122d40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c5a0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e5720(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
  func_0x00010c122ec0(param_2);
  func_0x00010c1b6d20(puVar1);
  uVar2 = param_2;
  func_0x00010c0faa60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2273c0(puVar1);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c149460(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f52c0(puVar1);
  _objc_release(uVar2);
  uVar2 = param_2;
  func_0x00010c0b6060(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c2200e0(puVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10592a6ec; end: 10592a6ef; -[SCFideliusAckRetryService _keyForArroyoMessage:] */

void FUN_10592a6ec(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be467d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__keyFromMessageEncryptionKeyTabl_11256f390);
  return;
}



/* Entry: 10592a6f0; end: 10592a7f7; -[SCFideliusAckRetryService _keyForArroyoMessageV2:] */

void FUN_10592a6f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfe2ee0();
  uVar3 = uVar1;
  func_0x00010c0b5940(uVar1);
  func_0x000100c4a928(uVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010b704680(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfac2e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0cb5a0(param_3);
  _objc_release(param_3);
  uVar1 = uVar3;
  func_0x00010bfc2780(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10592a7f8; end: 10592a8c3; -[SCFideliusAckRetryService _keyFromMessageEncryptionKeyTable:] */

void FUN_10592a7f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf50280(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010b704680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfac2e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0cb5a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar4 = uVar1;
  func_0x00010c067ec0(uVar1);
  uVar5 = uVar3;
  func_0x00010bfc2780(uVar3,param_2,uVar2,(long)(int)uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 10592a8c4; end: 10592a943; -[SCFideliusAckRetryService .cxx_destruct] */

void FUN_10592a8c4(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10592a944; end: 10592ac63; -[SCFideliusBackupService getUserIdentityWithHashedBeta:Iwek:] */

void FUN_10592a944(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar2 = param_4;
  _objc_retain();
  FUN_10592ac64();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar2;
  func_0x00010bf529e0();
  if (puVar10 == (undefined *)0x0) {
    puVar10 = param_1;
    func_0x00010be86480();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar10;
  }
  _objc_retain(puVar2);
  puVar10 = puVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  puVar7 = puVar2;
  if (puVar10 == (undefined *)0x0) {
    puVar10 = (undefined *)0x0;
  }
  else {
    do {
      puVar9 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(puVar2);
        }
        uVar11 = *(undefined8 *)((long)puVar9 * 8);
        uVar3 = uVar11;
        func_0x00010bfdebe0();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        if ((int)uVar4 != 0) {
          puVar7 = param_4;
          func_0x00010c25eac0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf93b20(uVar11);
          _objc_retainAutoreleasedReturnValue();
          puVar9 = puVar7;
          func_0x00010bcb4460(puVar7,uVar11,0,0);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar11);
          if (puVar9 == (undefined *)0x0) {
            puVar10 = (undefined *)0x0;
          }
          else {
            puVar5 = puVar9;
            func_0x000100408474();
            _objc_retainAutoreleasedReturnValue();
            puVar10 = PTR_PTR_1126c03c8;
            _objc_opt_class(PTR_PTR_1126c03c8);
            puVar6 = puVar5;
            _objc_opt_isKindOfClass(puVar5,puVar10);
            if (((ulong)puVar6 & 1) == 0) {
              puVar10 = (undefined *)0x0;
            }
            else {
              _objc_retain(puVar5);
              puVar10 = puVar5;
            }
            _objc_release(puVar5);
          }
          _objc_release(puVar9);
          _objc_release(puVar7);
          _objc_release(puVar2);
          if (puVar10 != (undefined *)0x0) {
            func_0x00010c11ca00(param_1);
          }
          puVar7 = *(undefined **)(param_1 + 8);
          func_0x00010c269d40(puVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf529e0(puVar2);
          if (puVar10 != (undefined *)0x0) {
            func_0x00010c298be0(puVar10);
          }
          func_0x00010c0a7e20(puVar7);
          goto LAB_10592abf8;
        }
        puVar9 = puVar9 + 1;
      } while (puVar10 != puVar9);
      puVar10 = puVar2;
      func_0x00010bf52a60();
    } while (puVar10 != (undefined *)0x0);
    puVar10 = (undefined *)0x0;
  }
LAB_10592abf8:
  _objc_release(puVar7);
  func_0x00010c220e20(puVar10);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    puVar2 = PTR_PTR_1126aef90;
    puVar10 = PTR_PTR_1126c0438;
    func_0x00010bfe6040(PTR_PTR_1126c0438);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf63b00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar10);
    if (puVar2 == (undefined *)0x0) {
      puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar10 = puVar2;
      func_0x000100408474(puVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10592ac64; end: 10592acf7;  */

void FUN_10592ac64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126aef90;
  puVar1 = PTR_PTR_1126c0438;
  func_0x00010bfe6040(PTR_PTR_1126c0438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf63b00(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = puVar2;
    func_0x000100408474(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10592acf8; end: 10592b057; -[SCFideliusBackupService putUserIdentity:] */

void FUN_10592acf8(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  undefined *puVar12;
  ulong uVar13;
  
  lVar11 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSData_1126ae778;
  _objc_alloc();
  lVar2 = param_3;
  func_0x00010c085320(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff6b20();
  _objc_release(lVar2);
  puVar3 = puVar1;
  func_0x00010c25eac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010b7392a8(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bcb41bc(puVar3,lVar2,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126c0440;
  _objc_alloc();
  lVar6 = param_3;
  func_0x00010bfdebe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c019e40();
  _objc_release(lVar6);
  _objc_release(puVar4);
  _objc_release(lVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar4;
  func_0x00010befa120();
  FUN_10592ac64();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar7;
  func_0x00010bf529e0();
  puVar8 = puVar7;
  if (puVar12 == (undefined *)0x0) {
    puVar8 = param_1;
    func_0x00010be86480();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
  }
  _objc_retain(puVar8);
  puVar7 = puVar8;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (puVar7 != (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(puVar8);
      }
      uVar13 = *(ulong *)((long)puVar12 * 8);
      func_0x00010bfdebe0();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_3;
      func_0x00010bfdebe0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar13;
      func_0x00010c0720c0();
      _objc_release(lVar6);
      _objc_release(uVar13);
      if ((uVar9 & 1) == 0) {
        puVar10 = puVar4;
        func_0x00010bf529e0();
        if (*(undefined **)(param_1 + 0x18) <= puVar10) goto LAB_10592af84;
        func_0x00010befa120(puVar4);
      }
      puVar12 = puVar12 + 1;
    } while (puVar7 != puVar12);
    puVar7 = puVar8;
    func_0x00010bf52a60();
  }
LAB_10592af84:
  _objc_release(puVar8);
  puVar12 = puVar4;
  func_0x00010b7392a8(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126aef90;
  puVar10 = PTR_PTR_1126c0438;
  func_0x00010bfe6040(PTR_PTR_1126c0438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e540(puVar7);
  _objc_release(puVar10);
  _objc_release(puVar12);
  func_0x00010beeb9e0(param_1);
  _objc_release(puVar8);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar11) {
    return;
  }
  ___stack_chk_fail();
  lVar2 = param_3;
  FUN_10592ac64();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010bf529e0();
  if (lVar6 != 0) {
    func_0x00010beeb9e0(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10592b058; end: 10592b09b; -[SCFideliusBackupService writeRecordsForDeviceTransferOnColdStart] */

void FUN_10592b058(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  FUN_10592ac64();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  if (lVar2 != 0) {
    func_0x00010beeb9e0(param_1,param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10592b09c; end: 10592b117; -[SCFideliusBackupService removeAllData] */

void FUN_10592b09c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aef90;
  puVar2 = PTR_PTR_1126c0438;
  func_0x00010bfe6040(PTR_PTR_1126c0438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12bca0(puVar1,param_2,puVar2);
  _objc_release(puVar2);
  puVar1 = PTR_PTR_1126aef90;
  puVar2 = PTR_PTR_1126c0438;
  func_0x00010c27a3e0(PTR_PTR_1126c0438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12bca0(puVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 10592b118; end: 10592b25b; -[SCFideliusBackupService _writeEncryptedRecordsToKeychainNewEntry:] */

void FUN_10592b118(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x00010b7392a8(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126aef90;
  puVar1 = PTR_PTR_1126c0438;
  func_0x00010c27a3e0(PTR_PTR_1126c0438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16eaa0(puVar2,param_2,param_3,puVar1);
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  if ((int)puVar2 == 0) {
    func_0x00010c0a9260(uVar3,param_2,&PTR____CFConstantStringClassReference_110e0e998,
                        &PTR____CFConstantStringClassReference_110e0e918);
  }
  else {
    func_0x00010c0b23e0(uVar3,param_2,&PTR____CFConstantStringClassReference_110e0e8f8,
                        &PTR____CFConstantStringClassReference_110e0e918,(long)(int)puVar2);
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126aef90;
    puVar1 = PTR_PTR_1126c0438;
    func_0x00010bfe6040(PTR_PTR_1126c0438);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12bcc0(puVar2,param_2,puVar1);
    _objc_release(puVar1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b23e0();
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10592b25c; end: 10592b32b; -[SCFideliusBackupService _readEncryptedRecordsFromKeychainNewEntry] */

void FUN_10592b25c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126aef90;
  puVar1 = PTR_PTR_1126c0438;
  func_0x00010c27a3e0(PTR_PTR_1126c0438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf63b00(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a9260();
    _objc_release(uVar3);
    puVar1 = puVar2;
    func_0x000100408474(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10592b32c; end: 10592b32f; -[SCFideliusBackupService readBackupRecordsForKVStore] */

void FUN_10592b32c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126aef90;
  puVar1 = PTR_PTR_1126c0438;
  func_0x00010bfe6040(PTR_PTR_1126c0438);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf63b00(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = puVar2;
    func_0x000100408474(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10592b330; end: 10592b35f; -[SCFideliusBackupService .cxx_destruct] */

void FUN_10592b330(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10592b360; end: 10592b427; -[SCFideliusDeviceGraph initWithDelegate:maxCapacity:] */

undefined1 * FUN_10592b360(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126eaf20;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c0448;
    _objc_alloc(PTR_PTR_1126c0448);
    func_0x00010c028d80();
    func_0x00010c1a4280(puVar1);
    _objc_release(puVar2);
    func_0x00010c220e20(puVar1);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bfcdca0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18b5e0();
    _objc_release(puVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10592b428; end: 10592b4a7; -[SCFideliusDeviceGraph encodeWithCoder:] */

void FUN_10592b428(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfcdca0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e0e9b8);
  _objc_release(uVar1);
  func_0x00010c298be0(param_1);
  func_0x00010bf92fc0(param_3,param_2,param_1,&PTR____CFConstantStringClassReference_110dd8fd8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10592b4a8; end: 10592b4b3; -[SCFideliusDeviceGraph .cxx_destruct] */

void FUN_10592b4a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10592b4b4; end: 10592b4e7; -[SCFideliusDeviceGraphDictionary initWithMaxSize:] */

void FUN_10592b4b4(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eaf28;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithMaxSize__1125e7d48);
  return;
}



/* Entry: 10592b4e8; end: 10592b52f; -[SCFideliusDeviceGraphDictionary onAdd:countBefore:] */

void FUN_10592b4e8(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e26e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10592b530; end: 10592b57f; -[SCFideliusDeviceGraphDictionary onPurge:] */

void FUN_10592b530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e5d20();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10592b580; end: 10592b5af; -[SCFideliusDeviceGraphDictionary onOrderUpdated] */

void FUN_10592b580(undefined8 param_1)

{
  func_0x00010bf6b020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e5640();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10592b5b0; end: 10592b5e3; -[SCFideliusDeviceGraphDictionary encodeWithCoder:] */

void FUN_10592b5b0(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126eaf28;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_encodeWithCoder__1125c2658);
  return;
}



/* Entry: 10592b5e4; end: 10592b603; -[SCFideliusDeviceGraphDictionary delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10592b5e4(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11272c4c4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10592b604; end: 10592b613; -[SCFideliusDeviceGraphDictionary .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10592b604(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272c4c4);
  return;
}



/* Entry: 10592b614; end: 10592b65b; -[SCFideliusDeviceGraphManager deviceIDBytes] */

void FUN_10592b614(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf70640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10592b65c; end: 10592b683; -[SCFideliusDeviceGraphManager _deleteAllDatabases] */

void FUN_10592b65c(undefined8 param_1)

{
  func_0x00010bdfa3c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdf9e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__deleteDatabasesForVersion__11255c130,10);
  return;
}



/* Entry: 10592b684; end: 10592b6fb; -[SCFideliusDeviceGraphManager _deleteOldDatabases] */

void FUN_10592b684(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  func_0x0001000ba800(&UNK_10f30e239);
  lVar2 = 1;
  do {
    func_0x00010bdf9e40(param_1,param_2,lVar2);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 9);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10592b6fc; end: 10592b847; -[SCFideliusDeviceGraphManager _deleteFolderIfExists:version:source:] */

void FUN_10592b6fc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  func_0x00010bfacbe0();
  if ((int)puVar6 != 0) {
    lStack_58 = 0;
    puVar3 = puVar2;
    func_0x00010c12cc40(puVar2,param_2,param_3,&lStack_58);
    lVar1 = lStack_58;
    _objc_retain(lStack_58);
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if (((ulong)puVar3 & 1) == 0) {
      if (lVar1 == 0) {
        puVar6 = (undefined *)0x0;
      }
      else {
        lVar4 = lVar1;
        func_0x00010c09e4e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3ec40();
        func_0x00010c14de00(puVar6,param_2,&PTR____CFConstantStringClassReference_110e0ea58);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
      }
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a7580();
      _objc_release(uVar5);
      _objc_release(puVar6);
    }
    _objc_release(lVar1);
  }
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10592b848; end: 10592b95f; -[SCFideliusDeviceGraphManager _deleteDatabasesForVersion:] */

void FUN_10592b848(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x0001000ba800(&UNK_10f30e272);
  puVar1 = PTR_PTR_1126c0388;
  func_0x00010c291a60(PTR_PTR_1126c0388,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfa0c0(param_1,param_2,puVar2,param_3,
                      &PTR____CFConstantStringClassReference_110e0ea78);
  _objc_release(puVar2);
  if (param_3 < 7) {
    puVar2 = PTR_PTR_1126c0388;
    func_0x00010bf702e0(PTR_PTR_1126c0388,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdfa0c0(param_1,param_2,puVar3,param_3,
                        &PTR____CFConstantStringClassReference_110e0ea98);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x000107c5a9bc(PTR_PTR_1126ae4e8);
  func_0x000107c61180();
  func_0x000107c42888();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10592b960; end: 10592b9cb;  */

void FUN_10592b960(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfac2e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfc5800();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    func_0x00010c11ca00(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x50),param_2,lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10592b9cc; end: 10592bceb; -[SCFideliusDeviceGraphManager _createAndLoadManagerIwek:hashedBeta:identity:] */

void FUN_10592b9cc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = &UNK_10f30e355;
  func_0x0001000ba800();
  puVar8 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar8;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar3 = PTR_PTR_1126c0468;
  _objc_alloc(PTR_PTR_1126c0468);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c0df720(puVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0094a0(puVar3,param_2,puVar2,param_4,puVar8,1);
  _objc_release(puVar8);
  _objc_release(puVar4);
  uVar5 = param_1;
  func_0x00010bf71280(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010bfcdca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(uVar6);
  _objc_release(uVar5);
  uVar5 = param_1;
  func_0x00010be99100();
  if ((uVar5 & 1) == 0) {
    func_0x00010bf71280(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_1;
    func_0x00010bfcdca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0();
    _objc_release(uVar5);
    _objc_release(param_1);
    puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                        &PTR____CFConstantStringClassReference_110e0e9d8,
                        &PTR____CFConstantStringClassReference_110e0ead8,0xfffffffffffff446);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_1126c0470;
    _objc_alloc(PTR_PTR_1126c0470);
    func_0x00010c009620();
  }
  else {
    puVar7 = PTR_PTR_1126c0460;
    _objc_alloc();
    func_0x00010c02d800();
    puVar8 = (undefined *)0x0;
    _objc_retain(0);
    if (puVar7 == (undefined *)0x0) {
      uVar5 = param_1;
      func_0x00010bf71280(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010bfcdca0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12d3e0();
      _objc_release(uVar6);
      _objc_release(uVar5);
      func_0x00010be99100(param_1);
    }
    else {
      func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x48),param_2,puVar7,param_4);
    }
    puVar4 = PTR_PTR_1126c0470;
    _objc_alloc(PTR_PTR_1126c0470);
    func_0x00010c009620();
    _objc_release(puVar7);
  }
  _objc_release(puVar8);
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10592bcec; end: 10592be3b; -[SCFideliusDeviceGraphManager storeNewIdentityWhenReady:iwek:identity:callback:] */

void FUN_10592bcec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = &UNK_10f30e3b0;
  func_0x0001000ba800(&UNK_10f30e3b0);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10592be3c;
  puStack_80 = &UNK_110852488;
  lStack_78 = param_1;
  _objc_retain(param_6);
  uStack_58 = param_6;
  _objc_retain(param_3);
  uStack_70 = param_3;
  _objc_retain(param_4);
  uStack_68 = param_4;
  _objc_retain(param_5);
  uStack_60 = param_5;
  func_0x00010c0f8240(uVar2,param_2,&puStack_98);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  _objc_release(uStack_58);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10592be3c; end: 10592c157;  */

void FUN_10592be3c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  
  puVar9 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar9;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  uVar8 = *(ulong *)(param_1 + 0x20);
  uVar5 = uVar8;
  func_0x00010bf71280(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee78c0();
  _objc_release(uVar5);
  if ((uVar8 & 1) == 0) {
    func_0x00010be4dce0(*(undefined8 *)(param_1 + 0x20));
    puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0,puVar9);
    goto LAB_10592c134;
  }
  puVar2 = PTR_PTR_1126c0468;
  _objc_alloc(PTR_PTR_1126c0468);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar7 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c0df720(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0094a0(puVar2);
  _objc_release(puVar9);
  _objc_release(puVar7);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf71280(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfcdca0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640();
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar5 = *(ulong *)(param_1 + 0x20);
  func_0x00010be99100();
  if ((uVar5 & 1) == 0) {
    puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0,puVar9);
  }
  else {
    lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x48);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 == 0) {
      puVar7 = PTR_PTR_1126c0460;
      _objc_alloc();
      puVar9 = puVar2;
      func_0x00010bf64ce0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c02d800();
      _objc_release(puVar9);
      if (puVar7 == (undefined *)0x0) goto LAB_10592c0e4;
LAB_10592bfc4:
      func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48));
      func_0x00010c11c600(*(undefined8 *)(param_1 + 0x20));
      (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),puVar7,0);
      puVar9 = (undefined *)0x0;
    }
    else {
      puVar7 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x48);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar7 != (undefined *)0x0) goto LAB_10592bfc4;
LAB_10592c0e4:
      puVar9 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99260(PTR__OBJC_CLASS___NSError_1126ae858);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0,puVar9);
    }
    _objc_release(puVar7);
  }
  _objc_release(puVar2);
LAB_10592c134:
  _objc_release(puVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10592c158; end: 10592c273; -[SCFideliusDeviceGraphManager closeUserDatabaseManager:callback:] */

void FUN_10592c158(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = &UNK_10f30e41a;
  func_0x0001000ba800(&UNK_10f30e41a);
  if (param_3 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  func_0x0001000e2a84(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10592c274; end: 10592c2eb;  */

void FUN_10592c274(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48);
  func_0x00010bfdebe0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar3);
  _objc_release(uVar1);
  func_0x00010bf3d9e0(*(undefined8 *)(param_1 + 0x28));
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010592c2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,1);
    return;
  }
  return;
}



/* Entry: 10592c2ec; end: 10592c3ff; -[SCFideliusDeviceGraphManager userDeviceExistsForHashedBeta:] */

undefined1 FUN_10592c2ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  puVar2 = &UNK_10f30e450;
  func_0x0001000ba800(&UNK_10f30e450);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c0f8240(uVar3);
  uVar1 = *(undefined1 *)(puStack_58 + 3);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  func_0x0001000e2a84(puVar2);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 10592c400; end: 10592c633;  */

void FUN_10592c400(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bfcdca0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0e0060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 == 0) {
    uVar5 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x30);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar12 = uVar5;
    func_0x00010c291fa0();
    _objc_release(uVar5);
    if ((uVar12 & 1) == 0) {
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 0;
    }
    else {
      puVar6 = PTR_PTR_1126c0468;
      _objc_alloc(PTR_PTR_1126c0468);
      puVar7 = PTR__OBJC_CLASS___NSUUID_1126b0270;
      func_0x00010bdc3540(PTR__OBJC_CLASS___NSUUID_1126b0270);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      func_0x00010bdc3580();
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar13 = *(undefined8 *)(param_1 + 0x28);
      puVar9 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      func_0x00010c0df720(puVar10);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0094a0(puVar6,param_2,puVar8,uVar13,puVar10,0);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      func_0x00010bf71280(uVar11);
      _objc_retainAutoreleasedReturnValue();
      uVar13 = uVar11;
      func_0x00010bfcdca0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640();
      _objc_release(uVar13);
      _objc_release(uVar11);
      uVar12 = *(ulong *)(param_1 + 0x20);
      func_0x00010be99100();
      bVar1 = (uVar12 & 1) == 0;
      if (bVar1) {
        uVar11 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010bf71280(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar11;
        func_0x00010bfcdca0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d3e0();
        _objc_release(uVar13);
        _objc_release(uVar11);
      }
      *(bool *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = !bVar1;
      _objc_release(puVar6);
    }
  }
  else {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 10592c634; end: 10592c72f; -[SCFideliusDeviceGraphManager deleteDeviceRowForHashedBeta:callback:] */

void FUN_10592c634(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = &UNK_10f30e4c0;
  func_0x0001000ba800(&UNK_10f30e4c0);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10592c730;
  puStack_60 = &UNK_11084a9e8;
  lStack_58 = param_1;
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(param_4);
  uStack_48 = param_4;
  func_0x00010c0f7fc0(uVar2,param_2,&puStack_78);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  func_0x0001000e2a84(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10592c730; end: 10592c87f;  */

void FUN_10592c730(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf71280();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar2;
  func_0x00010bfcdca0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar6;
  func_0x00010c0e0060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar2);
  if (lVar3 == 0) {
    lVar6 = *(long *)(param_1 + 0x30);
    if (lVar6 != 0) {
      (**(code **)(lVar6 + 0x10))(lVar6,0);
    }
  }
  else {
    lVar6 = lVar3;
    func_0x00010bf64ce0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf71280(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bfcdca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d3e0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    func_0x00010be99100(*(undefined8 *)(param_1 + 0x20));
    puVar1 = PTR_PTR_1126c0460;
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6bae0(puVar1);
    _objc_release(uVar5);
    lVar2 = *(long *)(param_1 + 0x30);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,1);
    }
    _objc_release(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 10592c880; end: 10592c8cb; -[SCFideliusDeviceGraphManager onAdd:countBefore:] */

void FUN_10592c880(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2aa0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


