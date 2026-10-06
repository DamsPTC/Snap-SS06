/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b644d88; end: 10b644d8f; -[SCNE2eeCurrentUserIdentityKey cleartextPublicKey] */

undefined8 FUN_10b644d88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b644d90; end: 10b644d97; -[SCNE2eeCurrentUserIdentityKey identityKeyId] */

undefined8 FUN_10b644d90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10b644d98; end: 10b644d9f; -[SCNE2eeCurrentUserIdentityKey version] */

undefined4 FUN_10b644d98(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b644da0; end: 10b644ddb; -[SCNE2eeCurrentUserIdentityKey .cxx_destruct] */

void FUN_10b644da0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b644ddc; end: 10b644e1b;  */

void FUN_10b644ddc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b644e1c; end: 10b644f07; -[SCNE2eeCurrentUserKeyResult initWithPublicKey:privateKey:version:] */

undefined1 *
FUN_10b644e1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1127072e0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 8) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b644f08; end: 10b644f0f; -[SCNE2eeCurrentUserKeyResult publicKey] */

undefined8 FUN_10b644f08(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b644f10; end: 10b644f17; -[SCNE2eeCurrentUserKeyResult privateKey] */

undefined8 FUN_10b644f10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b644f18; end: 10b644f1f; -[SCNE2eeCurrentUserKeyResult version] */

undefined4 FUN_10b644f18(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b644f20; end: 10b644f4f; -[SCNE2eeCurrentUserKeyResult .cxx_destruct] */

void FUN_10b644f20(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b644f50; end: 10b64500f; -[SCNE2eeExistingKeyInfo initWithKeyIdentifier:rwk:] */

undefined1 *
FUN_10b644f50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127072e8;
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



/* Entry: 10b645010; end: 10b645017; -[SCNE2eeExistingKeyInfo keyIdentifier] */

undefined8 FUN_10b645010(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b645018; end: 10b64501f; -[SCNE2eeExistingKeyInfo rwk] */

undefined8 FUN_10b645018(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b645020; end: 10b64504f; -[SCNE2eeExistingKeyInfo .cxx_destruct] */

void FUN_10b645020(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b645050; end: 10b64511b; -[SCNE2eeFriendDeviceKey initWithPublicKey:sharedSecret:version:] */

undefined1 * FUN_10b645050(void)

{
  undefined1 *puVar1;
  undefined8 in_x3;
  undefined4 in_w4;
  undefined8 uVar2;
  undefined8 unaff_x19;
  
  puVar1 = &stack0xffffffffffffffb0;
  func_0x00010b6453bc();
  _objc_retain(in_x3);
  _objc_msgSendSuper2(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(puVar1 + 0x10);
    *(undefined8 *)(puVar1 + 0x10) = unaff_x19;
    _objc_release(uVar2);
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(puVar1 + 0x18);
    *(undefined8 *)(puVar1 + 0x18) = in_x3;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 8) = in_w4;
  }
  func_0x00010b6453ac();
  func_0x00010b6453a4();
  return puVar1;
}



/* Entry: 10b64511c; end: 10b645287; -[SCNE2eeFriendDeviceKey isEqual:] */

bool FUN_10b64511c(void)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong unaff_x19;
  int unaff_w22;
  
  func_0x00010b6453bc();
  _objc_opt_class(PTR_PTR_1126c05b0);
  uVar3 = unaff_x19;
  _objc_opt_isKindOfClass();
  if ((uVar3 & 1) == 0) {
    bVar1 = false;
  }
  else {
    _objc_retain();
    iVar2 = unaff_w22;
    func_0x00010c11a480();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = unaff_x19;
    func_0x00010c11a480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071cc0();
    if (iVar2 == 0) {
      bVar1 = false;
    }
    else {
      iVar2 = unaff_w22;
      func_0x00010c22bf40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = unaff_x19;
      func_0x00010c22bf40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071cc0();
      if (iVar2 == 0) {
        bVar1 = false;
      }
      else {
        func_0x00010c298be0();
        func_0x00010c298be0();
        bVar1 = unaff_w22 == (int)unaff_x19;
      }
      _objc_release(uVar4);
      func_0x00010b6453b4();
    }
    _objc_release(uVar3);
    func_0x00010b6453ac();
    func_0x00010b6453a4();
  }
  func_0x00010b6453a4();
  return bVar1;
}



/* Entry: 10b645288; end: 10b64535b; -[SCNE2eeFriendDeviceKey hash] */

ulong FUN_10b645288(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  uVar2 = param_1;
  func_0x00010c11a480(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  uVar3 = param_1;
  func_0x00010c22bf40(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  func_0x00010c298be0(param_1);
  func_0x00010b6453b4();
  func_0x00010b6453ac();
  func_0x00010b6453a4();
  return uVar2 ^ uVar1 ^ uVar3 ^ (long)(int)param_1;
}



/* Entry: 10b64535c; end: 10b645363; -[SCNE2eeFriendDeviceKey publicKey] */

undefined8 FUN_10b64535c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b645364; end: 10b64536b; -[SCNE2eeFriendDeviceKey sharedSecret] */

undefined8 FUN_10b645364(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b64536c; end: 10b645373; -[SCNE2eeFriendDeviceKey version] */

undefined4 FUN_10b64536c(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b645374; end: 10b6453a3; -[SCNE2eeFriendDeviceKey .cxx_destruct] */

void FUN_10b645374(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b6453a4; end: 10b6453cb;  */

void FUN_10b6453a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b6453cc; end: 10b64546f; -[SCNE2eeFriendKeyRing initWithEligibleForE2EEMessages:keys:] */

undefined1 *
FUN_10b6453cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1127072f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  func_0x00010b6456ec();
  return (undefined1 *)puVar1;
}



/* Entry: 10b645470; end: 10b645633; -[SCNE2eeFriendKeyRing isEqual:] */

ulong FUN_10b645470(ulong param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong unaff_x21;
  ulong uVar4;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c05a8;
  _objc_opt_class(PTR_PTR_1126c05a8);
  uVar4 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar4 & 1) == 0) {
    uVar4 = 0;
    goto LAB_10b6455a8;
  }
  _objc_retain(param_3);
  uVar4 = param_1;
  func_0x00010bf8d3a0();
  uVar2 = param_3;
  func_0x00010bf8d3a0();
  if (uVar4 == uVar2) {
    uVar2 = param_1;
    func_0x00010c086dc0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
      unaff_x21 = param_3;
      func_0x00010c086dc0();
      _objc_retainAutoreleasedReturnValue();
      if (unaff_x21 != 0) goto LAB_10b645508;
      uVar4 = 1;
LAB_10b645598:
      _objc_release(unaff_x21);
    }
    else {
LAB_10b645508:
      uVar3 = param_1;
      func_0x00010c086dc0();
      _objc_retainAutoreleasedReturnValue();
      if (uVar3 == 0) {
        uVar4 = 0;
      }
      else {
        func_0x00010c086dc0(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c086dc0(param_3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = param_1;
        func_0x00010c071ae0(param_1);
        _objc_release(param_3);
        _objc_release(param_1);
        _objc_release(uVar3);
      }
      if (uVar2 == 0) goto LAB_10b645598;
    }
    func_0x00010b6456f4();
  }
  else {
    uVar4 = 0;
  }
  func_0x00010b6456ec();
LAB_10b6455a8:
  func_0x00010b6456ec();
  return uVar4;
}



/* Entry: 10b645634; end: 10b6456cf; -[SCNE2eeFriendKeyRing hash] */

ulong FUN_10b645634(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  uVar2 = param_1;
  func_0x00010bf8d3a0(param_1);
  func_0x00010c086dc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  func_0x00010b6456f4();
  func_0x00010b6456ec();
  return uVar2 ^ uVar1 ^ param_1;
}



/* Entry: 10b6456d0; end: 10b6456d7; -[SCNE2eeFriendKeyRing eligibleForE2EEMessages] */

undefined8 FUN_10b6456d0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6456d8; end: 10b6456df; -[SCNE2eeFriendKeyRing keys] */

undefined8 FUN_10b6456d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6456e0; end: 10b6456fb; -[SCNE2eeFriendKeyRing .cxx_destruct] */

void FUN_10b6456e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b6456fc; end: 10b64578f; -[SCNE2eeFriendPublicKey initWithPublicKey:version:] */

undefined1 * FUN_10b6456fc(void)

{
  undefined1 *puVar1;
  undefined4 in_w3;
  undefined8 uVar2;
  undefined8 unaff_x19;
  
  puVar1 = &stack0xffffffffffffffc0;
  func_0x00010b645954();
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(puVar1 + 0x10);
    *(undefined8 *)(puVar1 + 0x10) = unaff_x19;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 8) = in_w3;
  }
  func_0x00010b64594c();
  return puVar1;
}



/* Entry: 10b645790; end: 10b64588b; -[SCNE2eeFriendPublicKey isEqual:] */

bool FUN_10b645790(void)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  ulong unaff_x19;
  undefined8 unaff_x21;
  
  iVar4 = (int)unaff_x19;
  func_0x00010b645954();
  _objc_opt_class(PTR_PTR_1126dace0);
  _objc_opt_isKindOfClass();
  if ((unaff_x19 & 1) == 0) {
    bVar1 = false;
  }
  else {
    _objc_retain();
    uVar2 = unaff_x21;
    func_0x00010c11a480();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11a480();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c071cc0();
    if ((int)uVar3 == 0) {
      bVar1 = false;
    }
    else {
      func_0x00010c298be0();
      func_0x00010c298be0();
      bVar1 = (int)unaff_x21 == iVar4;
    }
    func_0x00010b645964();
    _objc_release(uVar2);
    func_0x00010b64594c();
  }
  func_0x00010b64594c();
  return bVar1;
}



/* Entry: 10b64588c; end: 10b64592f; -[SCNE2eeFriendPublicKey hash] */

ulong FUN_10b64588c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  uVar2 = param_1;
  func_0x00010c11a480(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfde980();
  func_0x00010c298be0(param_1);
  _objc_release(uVar2);
  func_0x00010b64594c();
  return uVar3 ^ uVar1 ^ (long)(int)param_1;
}



/* Entry: 10b645930; end: 10b645937; -[SCNE2eeFriendPublicKey publicKey] */

undefined8 FUN_10b645930(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b645938; end: 10b64593f; -[SCNE2eeFriendPublicKey version] */

undefined4 FUN_10b645938(long param_1)

{
  return *(undefined4 *)(param_1 + 8);
}



/* Entry: 10b645940; end: 10b64596b; -[SCNE2eeFriendPublicKey .cxx_destruct] */

void FUN_10b645940(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b64596c; end: 10b645a2f; -[SCNE2eeFriendPublicKeys initWithUserId:publicKeys:] */

undefined1 *
FUN_10b64596c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112707308;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  func_0x00010b645c90();
  func_0x00010b645c88();
  return (undefined1 *)puVar1;
}



/* Entry: 10b645a30; end: 10b645b83; -[SCNE2eeFriendPublicKeys isEqual:] */

undefined8 FUN_10b645a30(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126dace8;
  _objc_opt_class(PTR_PTR_1126dace8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    _objc_retain(param_3);
    uVar4 = param_1;
    func_0x00010c2923e0();
    iVar1 = (int)uVar4;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0();
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      func_0x00010c11a500(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11a500(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010c071b60(param_1);
      _objc_release(param_3);
      _objc_release(param_1);
    }
    func_0x00010b645c98();
    func_0x00010b645c90();
    func_0x00010b645c88();
  }
  func_0x00010b645c88();
  return uVar4;
}



/* Entry: 10b645b84; end: 10b645c47; -[SCNE2eeFriendPublicKeys hash] */

ulong FUN_10b645b84(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  uVar2 = param_1;
  func_0x00010c2923e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  func_0x00010c11a500(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  func_0x00010b645c98();
  func_0x00010b645c90();
  func_0x00010b645c88();
  return uVar2 ^ uVar1 ^ param_1;
}



/* Entry: 10b645c48; end: 10b645c4f; -[SCNE2eeFriendPublicKeys userId] */

undefined8 FUN_10b645c48(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b645c50; end: 10b645c57; -[SCNE2eeFriendPublicKeys publicKeys] */

undefined8 FUN_10b645c50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b645c58; end: 10b645c87; -[SCNE2eeFriendPublicKeys .cxx_destruct] */

void FUN_10b645c58(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b645c88; end: 10b645c9f;  */

void FUN_10b645c88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b645ca0; end: 10b645d7b; -[SCNE2eeGrpcParam initWithApiGatewayEndpoint:grpcPathPrefix:] */

undefined1 *
FUN_10b645ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112707310;
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



/* Entry: 10b645d7c; end: 10b645d83; -[SCNE2eeGrpcParam apiGatewayEndpoint] */

undefined8 FUN_10b645d7c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b645d84; end: 10b645d8b; -[SCNE2eeGrpcParam grpcPathPrefix] */

undefined8 FUN_10b645d84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b645d8c; end: 10b645dbb; -[SCNE2eeGrpcParam .cxx_destruct] */

void FUN_10b645d8c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b645dbc; end: 10b645e6b; -[SCNE2eeIdentityKeyAndRwk initWithIdentity:rwk:] */

undefined1 *
FUN_10b645dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112707318;
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
  func_0x00010b6460cc();
  func_0x00010b6460c4();
  return (undefined1 *)puVar1;
}



/* Entry: 10b645e6c; end: 10b645fbf; -[SCNE2eeIdentityKeyAndRwk isEqual:] */

undefined8 FUN_10b645e6c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126dad08;
  _objc_opt_class(PTR_PTR_1126dad08);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    _objc_retain(param_3);
    uVar4 = param_1;
    func_0x00010bfe6000();
    iVar1 = (int)uVar4;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe6000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0();
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      func_0x00010c142ee0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c142ee0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010c071ae0(param_1);
      _objc_release(param_3);
      _objc_release(param_1);
    }
    func_0x00010b6460d4();
    func_0x00010b6460cc();
    func_0x00010b6460c4();
  }
  func_0x00010b6460c4();
  return uVar4;
}



/* Entry: 10b645fc0; end: 10b646083; -[SCNE2eeIdentityKeyAndRwk hash] */

ulong FUN_10b645fc0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  uVar2 = param_1;
  func_0x00010bfe6000(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  func_0x00010c142ee0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  func_0x00010b6460d4();
  func_0x00010b6460cc();
  func_0x00010b6460c4();
  return uVar2 ^ uVar1 ^ param_1;
}



/* Entry: 10b646084; end: 10b64608b; -[SCNE2eeIdentityKeyAndRwk identity] */

undefined8 FUN_10b646084(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b64608c; end: 10b646093; -[SCNE2eeIdentityKeyAndRwk rwk] */

undefined8 FUN_10b64608c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b646094; end: 10b6460c3; -[SCNE2eeIdentityKeyAndRwk .cxx_destruct] */

void FUN_10b646094(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6460c4; end: 10b6460db;  */

void FUN_10b6460c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b6460dc; end: 10b646167; -[SCNE2eeKeyIdentifier initWithData:] */

undefined1 * FUN_10b6460dc(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  
  puVar1 = &stack0xffffffffffffffc0;
  func_0x00010b6462e8();
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(puVar1 + 8);
    *(undefined8 *)(puVar1 + 8) = unaff_x19;
    _objc_release(uVar2);
  }
  func_0x00010b6462e0();
  return puVar1;
}



/* Entry: 10b646168; end: 10b646247; -[SCNE2eeKeyIdentifier isEqual:] */

undefined8 FUN_10b646168(void)

{
  ulong uVar1;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar2;
  
  func_0x00010b6462e8();
  _objc_opt_class(PTR_PTR_1126dad10);
  uVar1 = unaff_x19;
  _objc_opt_isKindOfClass();
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    _objc_retain();
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = unaff_x20;
    func_0x00010c071cc0(unaff_x20);
    _objc_release(unaff_x19);
    _objc_release(unaff_x20);
    func_0x00010b6462e0();
  }
  func_0x00010b6462e0();
  return uVar2;
}



/* Entry: 10b646248; end: 10b6462cb; -[SCNE2eeKeyIdentifier hash] */

ulong FUN_10b646248(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  func_0x00010bf63640(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  func_0x00010b6462f8();
  func_0x00010b6462e0();
  return param_1 ^ uVar1;
}



/* Entry: 10b6462cc; end: 10b6462d3; -[SCNE2eeKeyIdentifier data] */

undefined8 FUN_10b6462cc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6462d4; end: 10b6462ff; -[SCNE2eeKeyIdentifier .cxx_destruct] */

void FUN_10b6462d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b646300; end: 10b6463d3; -[SCNE2eeKeyInitializationRequestInfo initWithKeyInfo:request:] */

undefined1 *
FUN_10b646300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112707328;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
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



/* Entry: 10b6463d4; end: 10b6463db; -[SCNE2eeKeyInitializationRequestInfo keyInfo] */

undefined8 FUN_10b6463d4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6463dc; end: 10b6463e3; -[SCNE2eeKeyInitializationRequestInfo request] */

undefined8 FUN_10b6463dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6463e4; end: 10b646413; -[SCNE2eeKeyInitializationRequestInfo .cxx_destruct] */

void FUN_10b6463e4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b646414; end: 10b64647b; -[SCNE2eeKeyManagerInitializationResultEvent initWithSuccess:freshKey:rwkSouce:keyVersion:] */

void FUN_10b646414(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_112707330;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    *(undefined4 *)((long)puVar1 + 0xc) = param_6;
  }
  return;
}



/* Entry: 10b64647c; end: 10b646577; -[SCNE2eeKeyManagerInitializationResultEvent isEqual:] */

bool FUN_10b64647c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126dad18;
  _objc_opt_class(PTR_PTR_1126dad18);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  if ((uVar3 & 1) == 0) {
    bVar1 = false;
    goto LAB_10b646544;
  }
  _objc_retain(param_3);
  uVar3 = param_1;
  func_0x00010c261740();
  uVar4 = param_3;
  func_0x00010c261740();
  if ((int)uVar3 == (int)uVar4) {
    uVar3 = param_1;
    func_0x00010bfb7820();
    uVar4 = param_3;
    func_0x00010bfb7820();
    if ((int)uVar3 != (int)uVar4) goto LAB_10b64653c;
    uVar3 = param_1;
    func_0x00010c142f00();
    uVar4 = param_3;
    func_0x00010c142f00();
    if (uVar3 != uVar4) goto LAB_10b64653c;
    func_0x00010c086b40(param_1);
    func_0x00010c086b40(param_3);
    bVar1 = (int)param_1 == (int)param_3;
  }
  else {
LAB_10b64653c:
    bVar1 = false;
  }
  func_0x00010b64663c();
LAB_10b646544:
  func_0x00010b64663c();
  return bVar1;
}



/* Entry: 10b646578; end: 10b64661b; -[SCNE2eeKeyManagerInitializationResultEvent hash] */

ulong FUN_10b646578(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  uVar2 = param_1;
  func_0x00010c261740(param_1);
  uVar3 = param_1;
  func_0x00010bfb7820(param_1);
  uVar4 = param_1;
  func_0x00010c142f00(param_1);
  func_0x00010c086b40(param_1);
  func_0x00010b64663c();
  return uVar1 ^ uVar2 & 0xffffffff ^ uVar3 & 0xffffffff ^ uVar4 ^ (long)(int)param_1;
}



/* Entry: 10b64661c; end: 10b646623; -[SCNE2eeKeyManagerInitializationResultEvent success] */

undefined1 FUN_10b64661c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b646624; end: 10b64662b; -[SCNE2eeKeyManagerInitializationResultEvent freshKey] */

undefined1 FUN_10b646624(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b64662c; end: 10b646633; -[SCNE2eeKeyManagerInitializationResultEvent rwkSouce] */

undefined8 FUN_10b64662c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b646634; end: 10b646643; -[SCNE2eeKeyManagerInitializationResultEvent keyVersion] */

undefined4 FUN_10b646634(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



/* Entry: 10b646644; end: 10b6466f3; -[SCNE2eeKeyProviderSyncKeysResult initWithUserId:userKeys:] */

undefined1 *
FUN_10b646644(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112707338;
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
  func_0x00010b646954();
  func_0x00010b64694c();
  return (undefined1 *)puVar1;
}



/* Entry: 10b6466f4; end: 10b646847; -[SCNE2eeKeyProviderSyncKeysResult isEqual:] */

undefined8 FUN_10b6466f4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c0668;
  _objc_opt_class(PTR_PTR_1126c0668);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    _objc_retain(param_3);
    uVar4 = param_1;
    func_0x00010c2923e0();
    iVar1 = (int)uVar4;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0();
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      func_0x00010c292b80(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c292b80(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010c071ae0(param_1);
      _objc_release(param_3);
      _objc_release(param_1);
    }
    func_0x00010b64695c();
    func_0x00010b646954();
    func_0x00010b64694c();
  }
  func_0x00010b64694c();
  return uVar4;
}



/* Entry: 10b646848; end: 10b64690b; -[SCNE2eeKeyProviderSyncKeysResult hash] */

ulong FUN_10b646848(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  uVar2 = param_1;
  func_0x00010c2923e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  func_0x00010c292b80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  func_0x00010b64695c();
  func_0x00010b646954();
  func_0x00010b64694c();
  return uVar2 ^ uVar1 ^ param_1;
}



/* Entry: 10b64690c; end: 10b646913; -[SCNE2eeKeyProviderSyncKeysResult userId] */

undefined8 FUN_10b64690c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b646914; end: 10b64691b; -[SCNE2eeKeyProviderSyncKeysResult userKeys] */

undefined8 FUN_10b646914(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b64691c; end: 10b64694b; -[SCNE2eeKeyProviderSyncKeysResult .cxx_destruct] */

void FUN_10b64691c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b64694c; end: 10b646963;  */

void FUN_10b64694c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b646964; end: 10b646a13; -[SCNE2eeParticipantKey initWithUserId:friendKeys:] */

undefined1 *
FUN_10b646964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112707340;
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
  func_0x00010b646c74();
  func_0x00010b646c6c();
  return (undefined1 *)puVar1;
}



/* Entry: 10b646a14; end: 10b646b67; -[SCNE2eeParticipantKey isEqual:] */

undefined8 FUN_10b646a14(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126c05c8;
  _objc_opt_class(PTR_PTR_1126c05c8);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    _objc_retain(param_3);
    uVar4 = param_1;
    func_0x00010c2923e0();
    iVar1 = (int)uVar4;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0();
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      func_0x00010bfb82e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb82e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010c071ae0(param_1);
      _objc_release(param_3);
      _objc_release(param_1);
    }
    func_0x00010b646c7c();
    func_0x00010b646c74();
    func_0x00010b646c6c();
  }
  func_0x00010b646c6c();
  return uVar4;
}



/* Entry: 10b646b68; end: 10b646c2b; -[SCNE2eeParticipantKey hash] */

ulong FUN_10b646b68(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  uVar2 = param_1;
  func_0x00010c2923e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  func_0x00010bfb82e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  func_0x00010b646c7c();
  func_0x00010b646c74();
  func_0x00010b646c6c();
  return uVar2 ^ uVar1 ^ param_1;
}



/* Entry: 10b646c2c; end: 10b646c33; -[SCNE2eeParticipantKey userId] */

undefined8 FUN_10b646c2c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b646c34; end: 10b646c3b; -[SCNE2eeParticipantKey friendKeys] */

undefined8 FUN_10b646c34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b646c3c; end: 10b646c6b; -[SCNE2eeParticipantKey .cxx_destruct] */

void FUN_10b646c3c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b646c6c; end: 10b646c83;  */

void FUN_10b646c6c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b646c84; end: 10b646d0f; -[SCNE2eeRootWrappingKey initWithData:] */

undefined1 * FUN_10b646c84(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  
  puVar1 = &stack0xffffffffffffffc0;
  func_0x00010b646e90();
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(puVar1 + 8);
    *(undefined8 *)(puVar1 + 8) = unaff_x19;
    _objc_release(uVar2);
  }
  func_0x00010b646e88();
  return puVar1;
}



/* Entry: 10b646d10; end: 10b646def; -[SCNE2eeRootWrappingKey isEqual:] */

undefined8 FUN_10b646d10(void)

{
  ulong uVar1;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar2;
  
  func_0x00010b646e90();
  _objc_opt_class(PTR_PTR_1126dad28);
  uVar1 = unaff_x19;
  _objc_opt_isKindOfClass();
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    _objc_retain();
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = unaff_x20;
    func_0x00010c071cc0(unaff_x20);
    _objc_release(unaff_x19);
    _objc_release(unaff_x20);
    func_0x00010b646e88();
  }
  func_0x00010b646e88();
  return uVar2;
}



/* Entry: 10b646df0; end: 10b646e73; -[SCNE2eeRootWrappingKey hash] */

ulong FUN_10b646df0(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  func_0x00010bf63640(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  func_0x00010b646ea0();
  func_0x00010b646e88();
  return param_1 ^ uVar1;
}



/* Entry: 10b646e74; end: 10b646e7b; -[SCNE2eeRootWrappingKey data] */

undefined8 FUN_10b646e74(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b646e7c; end: 10b646ea7; -[SCNE2eeRootWrappingKey .cxx_destruct] */

void FUN_10b646e7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b646ea8; end: 10b646f33; -[SCNE2eeUUID initWithId:] */

undefined1 * FUN_10b646ea8(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x19;
  
  puVar1 = &stack0xffffffffffffffc0;
  func_0x00010b6470b4();
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(puVar1 + 8);
    *(undefined8 *)(puVar1 + 8) = unaff_x19;
    _objc_release(uVar2);
  }
  func_0x00010b6470ac();
  return puVar1;
}



/* Entry: 10b646f34; end: 10b647013; -[SCNE2eeUUID isEqual:] */

undefined8 FUN_10b646f34(void)

{
  ulong uVar1;
  ulong unaff_x19;
  undefined8 unaff_x20;
  undefined8 uVar2;
  
  func_0x00010b6470b4();
  _objc_opt_class(PTR_PTR_1126c05b8);
  uVar1 = unaff_x19;
  _objc_opt_isKindOfClass();
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    _objc_retain();
    func_0x00010bfe5d80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfe5d80();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = unaff_x20;
    func_0x00010c071cc0(unaff_x20);
    _objc_release(unaff_x19);
    _objc_release(unaff_x20);
    func_0x00010b6470ac();
  }
  func_0x00010b6470ac();
  return uVar2;
}



/* Entry: 10b647014; end: 10b647097; -[SCNE2eeUUID hash] */

ulong FUN_10b647014(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  func_0x00010bfe5d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  func_0x00010b6470c4();
  func_0x00010b6470ac();
  return param_1 ^ uVar1;
}



/* Entry: 10b647098; end: 10b64709f; -[SCNE2eeUUID id] */

undefined8 FUN_10b647098(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6470a0; end: 10b6470cb; -[SCNE2eeUUID .cxx_destruct] */

void FUN_10b6470a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6470cc; end: 10b64718f; -[SCNE2eeWrappedIdentityKey initWithData:lastUpdatedTimestamp:] */

undefined1 *
FUN_10b6470cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112707358;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  func_0x00010b6473f0();
  func_0x00010b6473e8();
  return (undefined1 *)puVar1;
}



/* Entry: 10b647190; end: 10b6472e3; -[SCNE2eeWrappedIdentityKey isEqual:] */

undefined8 FUN_10b647190(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126dad30;
  _objc_opt_class(PTR_PTR_1126dad30);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  if ((uVar3 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    _objc_retain(param_3);
    uVar4 = param_1;
    func_0x00010bf63640();
    iVar1 = (int)uVar4;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf63640(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071cc0();
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      func_0x00010c08a800(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08a800(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_1;
      func_0x00010c071ce0(param_1);
      _objc_release(param_3);
      _objc_release(param_1);
    }
    func_0x00010b6473f8();
    func_0x00010b6473f0();
    func_0x00010b6473e8();
  }
  func_0x00010b6473e8();
  return uVar4;
}



/* Entry: 10b6472e4; end: 10b6473a7; -[SCNE2eeWrappedIdentityKey hash] */

ulong FUN_10b6472e4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  _objc_opt_class();
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  uVar2 = param_1;
  func_0x00010bf63640(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  func_0x00010c08a800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfde980();
  func_0x00010b6473f8();
  func_0x00010b6473f0();
  func_0x00010b6473e8();
  return uVar2 ^ uVar1 ^ param_1;
}



/* Entry: 10b6473a8; end: 10b6473af; -[SCNE2eeWrappedIdentityKey data] */

undefined8 FUN_10b6473a8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10b6473b0; end: 10b6473b7; -[SCNE2eeWrappedIdentityKey lastUpdatedTimestamp] */

undefined8 FUN_10b6473b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b6473b8; end: 10b6473e7; -[SCNE2eeWrappedIdentityKey .cxx_destruct] */

void FUN_10b6473b8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b6473e8; end: 10b6473ff;  */

void FUN_10b6473e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b647400; end: 10b64744f; -[SCNNotificationCenterNotificationCenterBadge initWithHasUnread:unreadCount:] */

void FUN_10b647400(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_112707360;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined4 *)((long)puVar1 + 0xc) = param_4;
  }
  return;
}


