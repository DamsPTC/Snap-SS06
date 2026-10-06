/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104a68f0c; end: 104a68f1b; -[GIDAuthFlow emmSupport] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104a68f0c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11270f874);
}



/* Entry: 104a68f1c; end: 104a68f27; -[GIDAuthFlow setEmmSupport:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a68f1c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 104a68f28; end: 104a68f37; -[GIDAuthFlow profileData] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104a68f28(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11270f878);
}



/* Entry: 104a68f38; end: 104a68f4b; -[GIDAuthFlow setProfileData:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a68f38(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11270f878,param_3);
  return;
}



/* Entry: 104a68f4c; end: 104a68fb3; -[GIDAuthFlow .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a68f4c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11270f878,0);
  _objc_storeStrong(param_1 + _DAT_11270f874,0);
  _objc_storeStrong(param_1 + _DAT_11270f870,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11270f86c,0);
  return;
}



/* Entry: 104a68fb4; end: 104a69087; -[GIDSignIn handleURL:] */

long FUN_104a68fb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar2 = param_3;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c071ae0();
  _objc_release(uVar2);
  if ((int)uVar1 == 0) {
    uVar2 = param_3;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010c071ae0();
    _objc_release(uVar2);
    if ((int)uVar1 != 0) {
      func_0x00010bfd0d40(param_1,param_2,param_3);
      goto LAB_104a6906c;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c13d480(uVar2,param_2,param_3);
    if ((int)uVar2 != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = 0;
      _objc_release(uVar2);
      param_1 = 1;
      goto LAB_104a6906c;
    }
  }
  param_1 = 0;
LAB_104a6906c:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 104a69088; end: 104a69103; -[GIDSignIn hasPreviousSignIn] */

long FUN_104a69088(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  func_0x00010bf109c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c06cac0();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010c09aee0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c06cac0();
    _objc_release(param_1);
  }
  else {
    lVar3 = 1;
  }
  return lVar3;
}



/* Entry: 104a69104; end: 104a69253; -[GIDSignIn restorePreviousSignInWithCompletion:] */

void FUN_104a69104(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126ae4a0;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x104a691b4;
  puStack_40 = &UNK_1107c05a0;
  uStack_38 = param_3;
  _objc_retain();
  func_0x00010c23c5e0(puVar1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23bd80(param_1,param_2,puVar1);
  _objc_release(puVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104a69254; end: 104a69363; -[GIDSignIn restorePreviousSignInNoRefresh] */

bool FUN_104a69254(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    lVar2 = param_1;
    func_0x00010c09aee0();
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 != 0;
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126ae3c8;
      _objc_alloc(PTR_PTR_1126ae3c8);
      lVar4 = lVar2;
      func_0x00010c08a500(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bfe5e00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01ae00(puVar3,param_2,lVar5);
      _objc_release(lVar5);
      _objc_release(lVar4);
      lVar4 = param_1;
      func_0x00010c1167e0(param_1,param_2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126ae4a8;
      _objc_alloc(PTR_PTR_1126ae4a8);
      func_0x00010bff58c0();
      func_0x00010c187dc0(param_1,param_2,puVar6);
      _objc_release(puVar6);
      _objc_release(lVar4);
      _objc_release(puVar3);
    }
    _objc_release(lVar2);
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Entry: 104a69364; end: 104a693bb; -[GIDSignIn signInWithPresentingViewController:hint:completion:] */

void FUN_104a69364(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4a0;
  func_0x00010bf69e00(PTR_PTR_1126ae4a0,param_2,*(undefined8 *)(param_1 + 0x38),param_3,param_4,0,
                      param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23bd80(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104a693bc; end: 104a69417; -[GIDSignIn signInWithPresentingViewController:hint:additionalScopes:completion:] */

void FUN_104a693bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ae4a0;
  func_0x00010bf69e20(PTR_PTR_1126ae4a0,param_2,*(undefined8 *)(param_1 + 0x38),param_3,param_4,0,
                      param_5,param_6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23bd80(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104a69418; end: 104a69423; -[GIDSignIn signInWithPresentingViewController:completion:] */

void FUN_104a69418(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23bdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_signInWithPresentingViewControll_11266c998,param_3,0,param_4);
  return;
}



/* Entry: 104a69424; end: 104a696cf; -[GIDSignIn addScopes:presentingViewController:completion:] */

void FUN_104a69424(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf608a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126ae4a0;
  uVar1 = param_1;
  func_0x00010bf608a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c1164a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf8d6c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf69e00(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar7 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  uVar1 = param_1;
  func_0x00010bf608a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfcdc20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c225c20(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
  puVar8 = puVar6;
  func_0x00010c080280();
  if ((int)puVar8 == 0) {
    func_0x00010c280520(puVar7);
    puVar8 = puVar7;
    func_0x00010bf00560(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1f6c60(puVar5);
    _objc_release(puVar8);
    func_0x00010c23bd80(param_1);
  }
  else {
    puVar8 = PTR__OBJC_CLASS___NSError_1126ae858;
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    if (param_5 != 0) {
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      pcStack_80 = FUN_104a696d0;
      puStack_78 = &UNK_11084aaa8;
      lVar9 = param_5;
      _objc_retain();
      puVar10 = puVar8;
      lStack_68 = lVar9;
      _objc_retain();
      puStack_70 = puVar10;
      func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_90);
      _objc_release(puStack_70);
      _objc_release(lStack_68);
    }
    _objc_release(puVar8);
  }
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(param_5);
  return;
}



/* Entry: 104a696d0; end: 104a696e3;  */

void FUN_104a696d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104a696e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104a696e4; end: 104a69717; -[GIDSignIn signOut] */

void FUN_104a696e4(long param_1,undefined8 param_2)

{
  if (*(long *)(param_1 + 0x30) != 0) {
    func_0x00010c187dc0(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010c12ad90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_removeAllKeychainEntries_112628580);
  return;
}



/* Entry: 104a69718; end: 104a699b7; -[GIDSignIn disconnectWithCompletion:] */

void FUN_104a69718(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain();
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010bf109c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar1 = param_1;
    func_0x00010c09aee0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = lVar1;
  func_0x00010c08a500();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010beecce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  if (lVar3 == 0) {
    lVar2 = lVar1;
    func_0x00010c08a500();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c125640();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    if (lVar3 != 0) goto LAB_104a697d4;
    func_0x00010c23bde0(param_1);
    if (param_3 == 0) goto LAB_104a6992c;
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_104a699b8;
    puStack_70 = &UNK_110849530;
    lVar2 = param_3;
    _objc_retain();
    lStack_68 = lVar2;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_88);
    lVar3 = lStack_68;
  }
  else {
LAB_104a697d4:
    puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar4 = PTR_PTR_1126ae4b0;
    func_0x00010bfcd4a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    FUN_104a6dff4();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    FUN_104a6e02c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25d9e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar4);
    puVar5 = PTR__OBJC_CLASS___NSURL_1126ae598;
    func_0x00010bdc3460(PTR__OBJC_CLASS___NSURL_1126ae598);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    _objc_retain();
    func_0x00010c24ebc0(param_1);
    _objc_release(lVar2);
    _objc_release(puVar5);
    _objc_release(puVar7);
  }
  _objc_release(lVar3);
LAB_104a6992c:
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 104a699b8; end: 104a699c7;  */

void FUN_104a699b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104a699c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 104a699c8; end: 104a69a97;  */

void FUN_104a699c8(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain();
  if (param_3 == 0) {
    func_0x00010c23bde0(*(undefined8 *)(param_1 + 0x20));
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_104a69a98;
    puStack_48 = &UNK_11084aaa8;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain();
    lVar2 = param_3;
    uStack_38 = uVar1;
    _objc_retain();
    lStack_40 = lVar2;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_60);
    _objc_release(lStack_40);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 104a69a98; end: 104a69aa7;  */

void FUN_104a69a98(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104a69aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104a69aa8; end: 104a69c9b; -[GIDSignIn signInWithOptions:] */

void FUN_104a69aa8(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  uVar2 = param_3;
  _objc_retain();
  uVar3 = uVar2;
  func_0x00010bf4f9e0();
  if ((uVar3 & 1) == 0) {
    _objc_storeStrong(param_1 + 8,param_3);
  }
  uVar3 = uVar2;
  func_0x00010c068ac0();
  if ((int)uVar3 != 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
      func_0x00010c11f020(PTR__OBJC_CLASS___NSException_1126af520);
      goto LAB_104a69c78;
    }
    func_0x00010bf0ae80(param_1);
    func_0x00010bf0aea0(param_1);
    puVar4 = PTR_PTR_1126ae440;
    _objc_alloc();
    uVar3 = uVar2;
    func_0x00010bf46560(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010bf3cf20();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfff120();
    _objc_release(uVar5);
    _objc_release(uVar3);
    puVar6 = puVar4;
    func_0x00010c282b40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf529e0();
    puVar1 = PTR__OBJC_CLASS___NSException_1126af520;
    if (puVar7 != (undefined *)0x0) {
      puVar7 = puVar6;
      func_0x00010bf446e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11f020(puVar1);
      _objc_release(puVar7);
    }
    _objc_release(puVar6);
    _objc_release(puVar4);
  }
  uVar3 = uVar2;
  func_0x00010c068ac0();
  if (((uVar3 & 1) == 0) && (lVar8 = *(long *)(param_1 + 0x30), lVar8 != 0)) {
    uVar3 = uVar2;
    _objc_retain();
    func_0x00010c125700(lVar8);
    _objc_release(uVar3);
  }
  else {
    func_0x00010bf10b00(param_1);
  }
LAB_104a69c78:
  _objc_release(uVar2);
  return;
}



/* Entry: 104a69c9c; end: 104a69dc3;  */

void FUN_104a69c9c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf10b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_authenticateWithOptions__1125a1c68,
               *(undefined8 *)(param_1 + 0x28));
    return;
  }
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf43fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 8) = 0;
    _objc_release(uVar2);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x104a69d58;
    puStack_38 = &UNK_110841f80;
    uStack_30 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain();
    uStack_28 = uVar2;
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_50);
    _objc_release(uStack_28);
  }
  return;
}



/* Entry: 104a69dc4; end: 104a6a277; -[GIDSignIn authenticateInteractivelyWithOptions:] */

void FUN_104a69dc4(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined **ppuStack_68;
  
  _objc_retain();
  puVar2 = PTR_PTR_1126ae440;
  _objc_alloc();
  lVar3 = param_3;
  func_0x00010bf46560(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf3cf20();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfff120(puVar2,param_2,lVar4);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar7 = PTR__OBJC_CLASS___NSURL_1126ae598;
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = puVar2;
  func_0x00010bf3d060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25d9e0(puVar6,param_2,&PTR____CFConstantStringClassReference_110dc0f98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc3460(puVar7,param_2,puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  _objc_release(puVar5);
  lVar3 = param_1;
  _objc_opt_class();
  iVar1 = (int)lVar3;
  func_0x00010c0793c0();
  ppuVar8 = &PTR____CFConstantStringClassReference_110db2d38;
  if (iVar1 == 0) {
    ppuVar8 = (undefined **)0x0;
  }
  _objc_retain();
  puVar6 = PTR____NSDictionary0__struct_11034ab58;
  func_0x00010c0d3c80(PTR____NSDictionary0__struct_11034ab58);
  func_0x00010c1d0640();
  lVar3 = param_3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c15f020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  if (lVar4 != 0) {
    lVar3 = param_3;
    func_0x00010bf46560(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c15f020();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar6,param_2,lVar4,&PTR____CFConstantStringClassReference_110daa658);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  lVar3 = param_3;
  func_0x00010c0b4000();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = param_3;
    func_0x00010c0b4000(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar6,param_2,lVar3,&PTR____CFConstantStringClassReference_110daa9f8);
    _objc_release(lVar3);
  }
  lVar3 = param_3;
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfe46a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar3);
  if (lVar4 != 0) {
    lVar3 = param_3;
    func_0x00010bf46560(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfe46a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar6,param_2,lVar4,&PTR____CFConstantStringClassReference_110daa618);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  puVar5 = PTR_PTR_1126ae468;
  lVar3 = param_3;
  func_0x00010bf9e9e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f38e0(puVar5,param_2,lVar3,ppuVar8,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7f60(puVar6,param_2,puVar5);
  _objc_release(puVar5);
  _objc_release(lVar3);
  FUN_104a6dff4();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar6,param_2,lVar3,&PTR____CFConstantStringClassReference_110daacb8);
  _objc_release(lVar3);
  FUN_104a6e02c();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar6,param_2,lVar3,&PTR____CFConstantStringClassReference_110daacd8);
  _objc_release(lVar3);
  puVar9 = PTR_PTR_1126ae370;
  _objc_alloc(PTR_PTR_1126ae370);
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  lVar3 = param_3;
  func_0x00010bf46560(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf3cf20();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_3;
  func_0x00010c150b20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c001720(puVar9,param_2,uVar11,lVar4,lVar10,puVar7,
                      &PTR____CFConstantStringClassReference_110db9558,puVar6);
  _objc_release(lVar10);
  _objc_release(lVar4);
  _objc_release(lVar3);
  puVar5 = PTR_PTR_1126ae380;
  lVar3 = param_3;
  func_0x00010c10fd00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_104a6a278;
  puStack_78 = &UNK_1107c0600;
  lStack_70 = param_1;
  ppuStack_68 = ppuVar8;
  _objc_retain(ppuVar8);
  func_0x00010c10b360(puVar5,param_2,puVar9,lVar3,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar5;
  _objc_release(uVar11);
  _objc_release(lVar3);
  _objc_release(ppuStack_68);
  _objc_release(ppuVar8);
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar7);
  _objc_release(puVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 104a6a278; end: 104a6a28b;  */

void FUN_104a6a278(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1145b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_processAuthorizationResponse_err_112622b88,
             param_2,param_3,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 104a6a28c; end: 104a6a573; -[GIDSignIn processAuthorizationResponse:error:emmSupport:] */

void FUN_104a6a28c(long param_1,undefined8 param_2,undefined **param_3,undefined **param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain();
  _objc_retain();
  puVar2 = PTR_PTR_1126ae4c0;
  if (*(char *)(param_1 + 0x20) == '\x01') {
    *(undefined1 *)(param_1 + 0x20) = 0;
    goto LAB_104a6a548;
  }
  _objc_retain(param_5);
  _objc_alloc_init();
  func_0x00010c194440();
  _objc_release(param_5);
  if (param_3 == (undefined **)0x0) {
    ppuVar3 = param_4;
    func_0x00010c09e4e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = param_4;
    func_0x00010bf3ec40();
    if (ppuVar4 == (undefined **)0xfffffffffffffffd) {
      _objc_release(ppuVar3);
      uVar10 = 0xfffffffffffffffb;
      ppuVar3 = &PTR____CFConstantStringClassReference_110daa998;
    }
    else {
      uVar10 = 0xffffffffffffffff;
    }
    lVar8 = param_1;
    func_0x00010bf994c0(param_1,param_2,ppuVar3,uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c196ee0(puVar2,param_2,lVar8);
    _objc_release(lVar8);
LAB_104a6a518:
    _objc_release(ppuVar3);
  }
  else {
    ppuVar3 = param_3;
    func_0x00010bf10e80();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c08fa60();
    _objc_release(ppuVar3);
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar4 = param_3;
      func_0x00010befd300();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      func_0x00010bf8e2a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar5 == (undefined *)0x0) {
        uVar10 = 0xffffffffffffffff;
      }
      else {
        func_0x00010c2a1260(puVar2);
        puVar5 = PTR_PTR_1126ae458;
        func_0x00010c22ba80();
        _objc_retainAutoreleasedReturnValue();
        puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_70 = 0xc2000000;
        pcStack_68 = FUN_104a6a574;
        puStack_60 = &UNK_110842e18;
        puVar6 = puVar2;
        _objc_retain();
        puVar7 = puVar5;
        puStack_58 = puVar6;
        func_0x00010bfd1080(puVar5,param_2,ppuVar4,&puStack_78);
        _objc_release(puVar5);
        uVar10 = 0xfffffffffffffffa;
        if ((int)puVar7 == 0) {
          uVar10 = 0xffffffffffffffff;
        }
        _objc_release(puStack_58);
      }
      ppuVar3 = ppuVar4;
      func_0x00010c0e00e0(ppuVar4,param_2,&PTR____CFConstantStringClassReference_110daeeb8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar9 = ppuVar3;
      func_0x00010c0720c0();
      uVar1 = 0xfffffffffffffffb;
      if ((int)ppuVar9 == 0) {
        uVar1 = uVar10;
      }
      lVar8 = param_1;
      func_0x00010bf994c0(param_1,param_2,ppuVar3,uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c196ee0(puVar2,param_2,lVar8);
      _objc_release(lVar8);
      _objc_release(ppuVar4);
      goto LAB_104a6a518;
    }
    puVar5 = PTR_PTR_1126ae388;
    _objc_alloc(PTR_PTR_1126ae388);
    func_0x00010bff5b00();
    func_0x00010c16c840(puVar2,param_2,puVar5);
    _objc_release(puVar5);
    func_0x00010c0c38e0(param_1,param_2,puVar2);
  }
  func_0x00010bef7c80(param_1,param_2,puVar2);
  func_0x00010befb160(param_1,param_2,puVar2);
  func_0x00010bef7920(param_1,param_2,puVar2);
  _objc_release(puVar2);
LAB_104a6a548:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104a6a574; end: 104a6a57b;  */

void FUN_104a6a574(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_next_112614020);
  return;
}



/* Entry: 104a6a57c; end: 104a6a707; -[GIDSignIn authenticateWithOptions:] */

void FUN_104a6a57c(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain();
  lVar1 = param_3;
  func_0x00010c068ac0();
  if ((int)lVar1 == 0) {
    uVar2 = param_1;
    func_0x00010c09aee0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c06cac0();
    if ((uVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
      func_0x00010bf99240();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010bf43fe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        uVar5 = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)(param_1 + 8) = 0;
        _objc_release(uVar5);
        puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_68 = 0xc2000000;
        pcStack_60 = FUN_104a6a708;
        puStack_58 = &UNK_110841f80;
        lVar1 = param_3;
        _objc_retain();
        puVar6 = puVar4;
        lStack_50 = lVar1;
        _objc_retain();
        puStack_48 = puVar6;
        func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_70);
        _objc_release(puStack_48);
        _objc_release(lStack_50);
      }
    }
    else {
      puVar4 = PTR_PTR_1126ae4c0;
      _objc_alloc_init(PTR_PTR_1126ae4c0);
      func_0x00010c16c840();
      func_0x00010c0c38e0(param_1);
      func_0x00010bef7c80(param_1);
      func_0x00010befb160(param_1);
      func_0x00010bef7920(param_1);
    }
    _objc_release(puVar4);
    _objc_release(uVar2);
  }
  else {
    func_0x00010bf10aa0(param_1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104a6a708; end: 104a6a74b;  */

void FUN_104a6a708(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf43fe0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104a6a74c; end: 104a6ac1b; -[GIDSignIn maybeFetchToken:] */

void FUN_104a6a74c(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  
  _objc_retain();
  lVar1 = param_4;
  func_0x00010bf109c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar2 = lVar1;
    func_0x00010c08a500();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010beecce0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      _objc_release(lVar2);
    }
    else {
      lVar3 = lVar1;
      func_0x00010c08a500(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010beecd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f3a0();
      _objc_release(lVar4);
      _objc_release(lVar3);
      _objc_release(lVar6);
      _objc_release(lVar2);
      if (600.0 < param_1) goto LAB_104a6abec;
    }
    puVar5 = PTR____NSDictionary0__struct_11034ab58;
    func_0x00010c0d3c80(PTR____NSDictionary0__struct_11034ab58);
    lVar6 = *(long *)(param_2 + 8);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010c15f020();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar6);
    if (lVar2 != 0) {
      uVar7 = *(undefined8 *)(param_2 + 8);
      func_0x00010bf46560(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c15f020();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5,param_3,uVar8,&PTR____CFConstantStringClassReference_110daa658);
      _objc_release(uVar8);
      _objc_release(uVar7);
    }
    lVar6 = *(long *)(param_2 + 8);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar6;
    func_0x00010c0e92e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar6);
    if (lVar2 != 0) {
      uVar7 = *(undefined8 *)(param_2 + 8);
      func_0x00010bf46560(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c0e92e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar5,param_3,uVar8,&PTR____CFConstantStringClassReference_110daa678);
      _objc_release(uVar8);
      _objc_release(uVar7);
    }
    lVar2 = lVar1;
    func_0x00010c088360(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
    func_0x00010befd300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar6;
    func_0x00010c0e00e0(lVar6,param_3,&PTR____CFConstantStringClassReference_110daa958);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR_PTR_1126ae468;
    lVar3 = param_4;
    func_0x00010bf8e2a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c08fa60(lVar2);
    func_0x00010c0f38e0(puVar9,param_3,PTR____NSDictionary0__struct_11034ab58,lVar3,lVar4 != 0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7f60(puVar5,param_3,puVar9);
    _objc_release(puVar9);
    _objc_release(lVar3);
    FUN_104a6dff4();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5,param_3,lVar3,&PTR____CFConstantStringClassReference_110daacb8);
    _objc_release(lVar3);
    FUN_104a6e02c();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar5,param_3,lVar3,&PTR____CFConstantStringClassReference_110daacd8);
    _objc_release(lVar3);
    lVar3 = lVar1;
    func_0x00010c08a500();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010beecce0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      lVar4 = lVar1;
      func_0x00010c088360();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar4;
      func_0x00010bf10e80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar4);
      _objc_release(lVar3);
      if (lVar10 == 0) goto LAB_104a6aa78;
      lVar3 = lVar1;
      func_0x00010c088360(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c273040();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
    }
    else {
      _objc_release();
      _objc_release(lVar3);
LAB_104a6aa78:
      lVar3 = lVar1;
      func_0x00010c08a500(lVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar4;
      func_0x00010befd300();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7f60(puVar5,param_3,lVar10);
      _objc_release(lVar10);
      _objc_release(lVar4);
      _objc_release(lVar3);
      lVar4 = lVar1;
      func_0x00010c2731a0(lVar1,param_3,puVar5);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x00010c2a1260(param_4);
    puVar5 = PTR_PTR_1126ae380;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_104a6ac1c;
    puStack_78 = &UNK_1107c0630;
    lVar3 = lVar1;
    _objc_retain();
    lVar10 = param_4;
    lStack_70 = lVar3;
    _objc_retain();
    lStack_68 = lVar10;
    func_0x00010c0f90c0(puVar5,param_3,lVar4,&puStack_90);
    _objc_release(lStack_68);
    _objc_release(lStack_70);
    _objc_release(lVar4);
    _objc_release(lVar2);
    _objc_release(lVar6);
  }
  _objc_release();
LAB_104a6abec:
  _objc_release(lVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 104a6ac1c; end: 104a6acfb;  */

void FUN_104a6ac1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010c28cec0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c196ee0(*(undefined8 *)(param_1 + 0x28));
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010bf8e2a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR_PTR_1126ae468;
  if (lVar2 == 0) {
    func_0x00010c0d9820(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain();
    func_0x00010bfd2ec0(puVar1);
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 104a6acfc; end: 104a6ad27;  */

void FUN_104a6acfc(long param_1,undefined8 param_2)

{
  func_0x00010c196ee0(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0d9830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_next_112614020);
  return;
}



/* Entry: 104a6ad28; end: 104a6adeb; -[GIDSignIn addSaveAuthCallback:] */

void FUN_104a6ad28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bef7400(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104a6adec; end: 104a6af6f;  */

void FUN_104a6adec(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  
  puVar2 = (undefined *)(param_1 + 0x28);
  _objc_loadWeakRetained();
  puVar3 = puVar2;
  func_0x00010bf109c0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar3 != (undefined *)0x0) {
    puVar5 = puVar2;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar5 == (undefined *)0x0) {
      uVar4 = *(ulong *)(param_1 + 0x20);
      func_0x00010c14a020(uVar4,param_2,puVar3);
      puVar5 = *(undefined **)(param_1 + 0x20);
      if ((uVar4 & 1) == 0) {
        func_0x00010bf994c0(puVar5,param_2,&PTR____CFConstantStringClassReference_110daa978,
                            0xfffffffffffffffe);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c196ee0(puVar2,param_2,puVar5);
      }
      else {
        iVar1 = (int)*(undefined8 *)(puVar5 + 8);
        func_0x00010befb1c0();
        if (iVar1 == 0) {
          puVar5 = PTR_PTR_1126ae4a8;
          _objc_alloc(PTR_PTR_1126ae4a8);
          puVar7 = puVar2;
          func_0x00010c1167a0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bff58c0(puVar5,param_2,puVar3,puVar7);
          _objc_release(puVar7);
          func_0x00010c187dc0(*(undefined8 *)(param_1 + 0x20),param_2,puVar5);
        }
        else {
          uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
          puVar5 = puVar3;
          func_0x00010c08a500(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = puVar3;
          func_0x00010c088360(puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar2;
          func_0x00010c1167a0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c28cea0(uVar8,param_2,puVar5,puVar7,puVar6);
          _objc_release(puVar6);
          _objc_release(puVar7);
        }
      }
      _objc_release(puVar5);
    }
  }
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 104a6af70; end: 104a6b033; -[GIDSignIn addDecodeIdTokenCallback:] */

void FUN_104a6af70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bef7400(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104a6b034; end: 104a6b4b3;  */

void FUN_104a6b034(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf109c0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = lVar1;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      puVar4 = PTR_PTR_1126ae3c8;
      _objc_alloc();
      lVar3 = lVar2;
      func_0x00010c08a500(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010bfe5e00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01ae00(puVar4,param_2,lVar5);
      _objc_release(lVar5);
      _objc_release(lVar3);
      if (puVar4 != (undefined *)0x0) {
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010c1167e0(uVar6,param_2,puVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1e4060(lVar1,param_2,uVar6);
        _objc_release(uVar6);
      }
      lVar3 = lVar1;
      func_0x00010c1167a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar3 == 0) {
        func_0x00010c2a1260(lVar1);
        puVar9 = PTR__OBJC_CLASS___NSURL_1126ae598;
        puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        puVar7 = PTR_PTR_1126ae4b0;
        func_0x00010bfcd620();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c08a500();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar3;
        func_0x00010beecce0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25d9e0(puVar8,param_2,&PTR____CFConstantStringClassReference_110daa8b8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bdc3460(puVar9,param_2,puVar8);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(lVar5);
        _objc_release(lVar3);
        _objc_release(puVar7);
        uVar6 = *(undefined8 *)(param_1 + 0x20);
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0xc2000000;
        uStack_80 = 0x104a6b294;
        puStack_78 = &UNK_1108b9050;
        lVar3 = lVar1;
        _objc_retain();
        puVar8 = puVar4;
        lStack_70 = lVar3;
        _objc_retain();
        puStack_68 = puVar8;
        func_0x00010c24ebc0(uVar6,param_2,puVar9,lVar2,
                            &PTR____CFConstantStringClassReference_110daab18,&puStack_90);
        _objc_release(puStack_68);
        _objc_release(lStack_70);
        _objc_release(puVar9);
      }
      _objc_release(puVar4);
    }
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 104a6b4b4; end: 104a6b577; -[GIDSignIn addCompletionCallback:] */

void FUN_104a6b4b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_3);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bef7400(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104a6b578; end: 104a6b673;  */

void FUN_104a6b578(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010bf43fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    func_0x00010bf43fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 8) = 0;
    _objc_release(uVar4);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_104a6b674;
    puStack_50 = &UNK_11084a9e8;
    lVar2 = lVar1;
    _objc_retain();
    uStack_40 = *(undefined8 *)(param_1 + 0x20);
    lStack_48 = lVar2;
    uStack_38 = uVar3;
    _objc_retain(uVar3);
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_68);
    _objc_release(uStack_38);
    _objc_release(lStack_48);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 104a6b674; end: 104a6b79f;  */

void FUN_104a6b674(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf109c0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c08a500();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010befd300();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    func_0x00010bf51e00();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar7 = PTR_PTR_1126ae4b8;
    _objc_alloc(PTR_PTR_1126ae4b8);
    func_0x00010c017dc0();
    (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),puVar7,0);
    _objc_release(puVar7);
    _objc_release(uVar6);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x30);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010bf987e0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,0,uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104a6b7a0; end: 104a6b8d3; -[GIDSignIn startFetchURL:fromAuthState:withComment:withCompletionHandler:] */

void FUN_104a6b7a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableURLRequest_1126aedd8;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c137160(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae478;
  _objc_alloc();
  func_0x00010bff58a0();
  _objc_release(param_4);
  puVar3 = puVar2;
  func_0x00010bfabb40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ae190;
  if (puVar3 != (undefined *)0x0) {
    puVar4 = puVar3;
  }
  func_0x00010bfabbe0(puVar4,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1eda00();
  func_0x00010c1c35e0(0x402e000000000000,puVar4);
  func_0x00010c17ed60(puVar4,param_2,param_5);
  _objc_release(param_5);
  func_0x00010bf18100(puVar4,param_2,param_6);
  _objc_release(param_6);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104a6b8d4; end: 104a6bad7; -[GIDSignIn handleDevicePolicyAppURL:] */

undefined8 FUN_104a6b8d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  long lStack_58;
  
  puVar2 = PTR_PTR_1126ae320;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010c057840();
  _objc_release(param_3);
  puVar3 = puVar2;
  func_0x00010bf71fa0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_opt_isKindOfClass(puVar4,puVar5);
  iVar1 = 0x10daab58;
  func_0x00010c0720c0();
  if (iVar1 != 0) {
    lVar6 = *(long *)(param_1 + 8);
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar8 = 0;
    if (lVar6 == 0) goto LAB_104a6ba84;
    if (*(long *)(param_1 + 0x18) != 0) {
      uVar8 = 1;
      *(undefined1 *)(param_1 + 0x20) = 1;
      func_0x00010bf2dba0();
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = 0;
      _objc_release(uVar7);
      *(undefined1 *)(param_1 + 0x20) = 0;
      ppuStack_68 = &PTR____CFConstantStringClassReference_110daa858;
      ppuStack_60 = &PTR____CFConstantStringClassReference_110db2d38;
      puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
      func_0x00010bf72080();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = 0;
      _dispatch_time(0,1000000000);
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_104a6bad8;
      puStack_80 = &UNK_110841f80;
      lStack_78 = param_1;
      puStack_70 = puVar5;
      _objc_retain(puVar5);
      func_0x00010058c530(uVar7,PTR___dispatch_main_q_11034be20,&puStack_98);
      _objc_release(puStack_70);
      _objc_release(puVar5);
      goto LAB_104a6ba84;
    }
  }
  uVar8 = 0;
LAB_104a6ba84:
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return uVar8;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)(puVar2 + 0x20);
  uVar8 = *(undefined8 *)(lVar6 + 8);
  func_0x00010c0ec8a0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23bd80(lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return uVar8;
}



/* Entry: 104a6bad8; end: 104a6bb1b;  */

void FUN_104a6bad8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(lVar1 + 8);
  func_0x00010c0ec8a0(uVar2,param_2,*(undefined8 *)(param_1 + 0x28),1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23bd80(lVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104a6bb1c; end: 104a6bbfb; -[GIDSignIn errorWithString:code:] */

undefined * FUN_104a6bb1c(undefined8 param_1,undefined8 param_2,undefined **param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuVar1 = &PTR____CFConstantStringClassReference_110db88b8;
  if (param_3 != (undefined **)0x0) {
    ppuVar1 = param_3;
  }
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    return puVar4;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x00010c114d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  _objc_opt_respondsToSelector();
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = puVar2;
    func_0x00010c0793e0(puVar2);
  }
  _objc_release(puVar2);
  return puVar4;
}



/* Entry: 104a6bbfc; end: 104a6bc73; +[GIDSignIn isOperatingSystemAtLeast9] */

undefined * FUN_104a6bbfc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x00010c114d40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_opt_respondsToSelector();
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = puVar1;
    func_0x00010c0793e0(puVar1);
  }
  _objc_release(puVar1);
  return puVar2;
}



/* Entry: 104a6bc74; end: 104a6bcff; -[GIDSignIn assertValidParameters] */

void FUN_104a6bc74(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf3cf20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c11f030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSException_1126af520,PTR_s_raise_format__112625628,
             *(undefined8 *)PTR__NSInvalidArgumentException_11034aa50,
             &PTR____CFConstantStringClassReference_110daab78);
  return;
}



/* Entry: 104a6bd00; end: 104a6bd5b; -[GIDSignIn assertValidPresentingViewController] */

void FUN_104a6bd00(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c11f030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSException_1126af520,PTR_s_raise_format__112625628,
             *(undefined8 *)PTR__NSInvalidArgumentException_11034aa50,
             &PTR____CFConstantStringClassReference_110daab98);
  return;
}



/* Entry: 104a6bd5c; end: 104a6bd67; -[GIDSignIn removeAllKeychainEntries] */

void FUN_104a6bd5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12b410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_removeAuthSessionWithError__112628720,0);
  return;
}



/* Entry: 104a6bd68; end: 104a6bdef; -[GIDSignIn saveAuthState:] */

bool FUN_104a6bd68(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  long lStack_38;
  
  puVar2 = PTR_PTR_1126ae478;
  _objc_retain(param_3);
  _objc_alloc(puVar2);
  func_0x00010bff58a0();
  _objc_release(param_3);
  lStack_38 = 0;
  func_0x00010c14a000(*(undefined8 *)(param_1 + 0x28),param_2,puVar2,&lStack_38);
  bVar1 = lStack_38 == 0;
  _objc_release(puVar2);
  return bVar1;
}



/* Entry: 104a6bdf0; end: 104a6be3b; -[GIDSignIn loadAuthState] */

void FUN_104a6bdf0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c13e200(uVar1,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf109c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104a6be3c; end: 104a6c12b; -[GIDSignIn profileDataWithIDToken:] */

void FUN_104a6be3c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  _objc_retain();
  if (param_3 == 0) {
LAB_104a6c0d4:
    puVar12 = (undefined *)0x0;
  }
  else {
    lVar1 = param_3;
    func_0x00010bf39ba0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      lVar3 = param_3;
      func_0x00010bf39ba0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        puVar12 = (undefined *)0x0;
      }
      else {
        lVar5 = param_3;
        func_0x00010bf39ba0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        puVar12 = (undefined *)0x0;
        if (lVar6 != 0) {
          lVar7 = param_3;
          func_0x00010bf39ba0();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar7);
          _objc_release(lVar6);
          _objc_release(lVar5);
          _objc_release(lVar4);
          _objc_release(lVar3);
          _objc_release(lVar2);
          _objc_release(lVar1);
          if (lVar8 == 0) goto LAB_104a6c0d4;
          puVar12 = PTR_PTR_1126ae488;
          _objc_alloc();
          lVar1 = param_3;
          func_0x00010bf39ba0(param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar2 = lVar1;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar3 = param_3;
          func_0x00010bf39ba0(param_3);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = param_3;
          func_0x00010bf39ba0();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          lVar7 = param_3;
          func_0x00010bf39ba0();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar7;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar11 = PTR__OBJC_CLASS___NSURL_1126ae598;
          lVar9 = param_3;
          func_0x00010bf39ba0();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar9;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdc3460(puVar11,param_2,lVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c00f360(puVar12,param_2,lVar2,lVar4,lVar6,lVar8,puVar11);
          _objc_release(puVar11);
          _objc_release(lVar10);
          _objc_release(lVar9);
          _objc_release(lVar8);
          _objc_release(lVar7);
          _objc_release(lVar6);
        }
        _objc_release(lVar5);
        _objc_release(lVar4);
      }
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 104a6c12c; end: 104a6c133; -[GIDSignIn currentUser] */

undefined8 FUN_104a6c12c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 104a6c134; end: 104a6c13f; -[GIDSignIn setCurrentUser:] */

void FUN_104a6c134(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 104a6c140; end: 104a6c147; -[GIDSignIn configuration] */

undefined8 FUN_104a6c140(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 104a6c148; end: 104a6c153; -[GIDSignIn setConfiguration:] */

void FUN_104a6c148(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 104a6c154; end: 104a6c1b3; -[GIDSignIn .cxx_destruct] */

void FUN_104a6c154(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104a6c1b4; end: 104a6c203; -[GIDSignInButton initWithFrame:] */

undefined1 * FUN_104a6c1b4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3648;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c22ba60(puVar1);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104a6c204; end: 104a6c367; -[GIDSignInButton sharedInit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a6c204(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x00010c17d4c0(param_1,param_2,1);
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(param_1);
  _objc_release(puVar1);
  func_0x00010c1af000(param_1);
  func_0x00010c161080(param_1);
  func_0x00010c160fc0(param_1);
  *(undefined8 *)(param_1 + _DAT_11270f898) = 0;
  *(undefined8 *)(param_1 + _DAT_11270f89c) = 1;
  *(undefined8 *)(param_1 + _DAT_11270f8a0) = 0;
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc();
  func_0x00010c013de0(0x4022000000000000,0x4024000000000000,0x403d000000000000,0x403e000000000000);
  lVar3 = (long)_DAT_11270f8a4;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  _objc_release(uVar2);
  func_0x00010c182220(*(undefined8 *)(param_1 + lVar3));
  func_0x00010c21e900(*(undefined8 *)(param_1 + lVar3));
  func_0x00010befbb60(param_1);
  func_0x00010bfcc880(PTR__OBJC_CLASS___NSBundle_1126aea78);
  func_0x00010befbd60(param_1);
  func_0x00010befbd60(param_1);
  func_0x00010befbd60(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c28b6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateUI_1126807d8);
  return;
}



/* Entry: 104a6c368; end: 104a6c463; -[GIDSignInButton initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_104a6c368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain();
  puStack_28 = PTR_PTR_1126e3648;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_initWithCoder__1125dd730,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c22ba60(puVar1);
    uVar2 = param_3;
    func_0x00010bf4bc00();
    if ((int)uVar2 != 0) {
      uVar2 = param_3;
      func_0x00010bf66f40();
      *(undefined8 *)((long)puVar1 + (long)_DAT_11270f898) = uVar2;
    }
    uVar2 = param_3;
    func_0x00010bf4bc00();
    if ((int)uVar2 != 0) {
      uVar2 = param_3;
      func_0x00010bf66f40();
      *(undefined8 *)((long)puVar1 + (long)_DAT_11270f89c) = uVar2;
    }
    uVar2 = param_3;
    func_0x00010bf4bc00();
    if ((int)uVar2 != 0) {
      uVar2 = param_3;
      func_0x00010bf66f40();
      *(undefined8 *)((long)puVar1 + (long)_DAT_11270f8a0) = uVar2;
    }
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104a6c464; end: 104a6c51b; -[GIDSignInButton encodeWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a6c464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_encodeWithCoder__1125c2658;
  puStack_38 = PTR_PTR_1126e3648;
  uStack_40 = param_1;
  _objc_retain(param_3);
  _objc_msgSendSuper2(&uStack_40,puVar1,param_3);
  func_0x00010bf92fc0(param_3);
  func_0x00010bf92fc0(param_3);
  func_0x00010bf92fc0(param_3);
  _objc_release(param_3);
  return;
}



/* Entry: 104a6c51c; end: 104a6c57f; -[GIDSignInButton updateUI] */

void FUN_104a6c51c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c09b6a0();
  uVar1 = param_1;
  func_0x00010bf259e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020(param_1);
  _objc_release(uVar1);
  func_0x00010bfb68e0(param_1);
  func_0x00010c19f0e0(param_1);
  func_0x00010c1cbf40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c1cbd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsDisplay_112650978);
  return;
}



/* Entry: 104a6c580; end: 104a6c6a3; -[GIDSignInButton loadIcon] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a6c580(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010bfcc840(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0f5960();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe9380(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(param_1 + _DAT_11270f8a0) == 1) {
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fd999999999999a,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    func_0x00010bfcc860(puVar3,param_2,1,puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11270f8a4),param_2,puVar5);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  else {
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11270f8a4),param_2,puVar3);
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104a6c6a4; end: 104a6c6ab; -[GIDSignInButton switchToPressed] */

void FUN_104a6c6a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c174a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setButtonState__11263acb0,2);
  return;
}



/* Entry: 104a6c6ac; end: 104a6c6b3; -[GIDSignInButton switchToNormal] */

void FUN_104a6c6ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c174a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setButtonState__11263acb0,0);
  return;
}



/* Entry: 104a6c6b4; end: 104a6c6bb; -[GIDSignInButton switchToDisabled] */

void FUN_104a6c6b4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c174a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setButtonState__11263acb0,1);
  return;
}



/* Entry: 104a6c6bc; end: 104a6c6db; -[GIDSignInButton setStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a6c6bc(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_11270f898) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_11270f898) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c28b6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateUI_1126807d8);
  return;
}



/* Entry: 104a6c6dc; end: 104a6c6fb; -[GIDSignInButton setColorScheme:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a6c6dc(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_11270f89c) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_11270f89c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c28b6d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_updateUI_1126807d8);
  return;
}



/* Entry: 104a6c6fc; end: 104a6c76b; -[GIDSignInButton setEnabled:] */

void FUN_104a6c6fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  uVar1 = param_1;
  func_0x00010c071800();
  if ((int)uVar1 != (int)param_3) {
    puStack_28 = PTR_PTR_1126e3648;
    uStack_30 = param_1;
    _objc_msgSendSuper2(&uStack_30,PTR_s_setEnabled__112642f38,param_3);
    if ((int)param_3 == 0) {
      func_0x00010c2657a0(param_1);
    }
    else {
      func_0x00010c265800();
    }
    func_0x00010c28b6c0(param_1);
  }
  return;
}



/* Entry: 104a6c76c; end: 104a6c78b; -[GIDSignInButton setButtonState:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a6c76c(long param_1,undefined8 param_2,long param_3)

{
  if (*(long *)(param_1 + _DAT_11270f8a0) == param_3) {
    return;
  }
  *(long *)(param_1 + _DAT_11270f8a0) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1cbd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsDisplay_112650978);
  return;
}



/* Entry: 104a6c78c; end: 104a6c847; -[GIDSignInButton setFrame:] */

void FUN_104a6c78c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uStack_50;
  undefined *puStack_48;
  
  uVar4 = param_3;
  uVar5 = param_4;
  func_0x00010c23d5a0(param_3,param_4);
  uVar1 = param_5;
  uVar2 = param_3;
  uVar3 = param_4;
  func_0x00010bfb68e0();
  _CGRectEqualToRect(param_1,param_2,param_3,param_4,uVar2,uVar3,uVar4,uVar5);
  if ((uVar1 & 1) == 0) {
    puStack_48 = PTR_PTR_1126e3648;
    uStack_50 = param_5;
    _objc_msgSendSuper2(param_1,param_2,param_3,param_4,&uStack_50,PTR_s_setFrame__112645658);
    func_0x00010c1cbf40(param_5);
    func_0x00010c1cbd40(param_5);
  }
  return;
}



/* Entry: 104a6c848; end: 104a6c907; -[GIDSignInButton minWidth] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_104a6c848(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_2 + _DAT_11270f898) == 2) {
    return 0x4048000000000000;
  }
  lVar1 = param_2;
  func_0x00010bf259e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_2;
  _objc_opt_class(param_2);
  _objc_opt_class(param_2);
  func_0x00010bf25a40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26c820(lVar2,param_3,lVar1,param_2);
  _objc_release(param_2);
  _objc_release(lVar1);
  return (long)(param_1 + 68.0 + 8.0);
}



/* Entry: 104a6c908; end: 104a6caaf; -[GIDSignInButton isConstraint:equalToConstraint:] */

bool FUN_104a6c908(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  double dVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  
  uVar11 = (undefined4)((ulong)param_1 >> 0x20);
  fVar9 = (float)param_1;
  _objc_retain();
  _objc_retain();
  func_0x00010c113c80(param_4);
  fVar10 = fVar9;
  func_0x00010c113c80(param_5);
  if (fVar9 != fVar10) {
    bVar2 = false;
    goto LAB_104a6ca68;
  }
  lVar3 = param_4;
  func_0x00010bfb1740();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_5;
  func_0x00010bfb1740();
  _objc_retainAutoreleasedReturnValue();
  if (lVar3 == lVar4) {
    lVar5 = param_4;
    func_0x00010bfb0e00();
    lVar6 = param_5;
    func_0x00010bfb0e00();
    if (lVar5 != lVar6) goto LAB_104a6ca4c;
    lVar5 = param_4;
    func_0x00010c128060();
    lVar6 = param_5;
    func_0x00010c128060();
    if (lVar5 != lVar6) goto LAB_104a6ca4c;
    lVar5 = param_4;
    func_0x00010c154be0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_5;
    func_0x00010c154be0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar5 == lVar6) {
      lVar7 = param_4;
      func_0x00010c154b80();
      lVar8 = param_5;
      func_0x00010c154b80();
      if (lVar7 != lVar8) goto LAB_104a6ca98;
      func_0x00010c0d2860(param_4);
      dVar1 = (double)CONCAT44(uVar11,fVar10);
      func_0x00010c0d2860(param_5);
      if (dVar1 != (double)CONCAT44(uVar11,fVar10)) goto LAB_104a6ca98;
      func_0x00010bf49220(param_4);
      dVar1 = (double)CONCAT44(uVar11,fVar10);
      func_0x00010bf49220(param_5);
      bVar2 = dVar1 == (double)CONCAT44(uVar11,fVar10);
    }
    else {
LAB_104a6ca98:
      bVar2 = false;
    }
    _objc_release(lVar6);
    _objc_release(lVar5);
  }
  else {
LAB_104a6ca4c:
    bVar2 = false;
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
LAB_104a6ca68:
  _objc_release(param_5);
  _objc_release(param_4);
  return bVar2;
}



/* Entry: 104a6cab0; end: 104a6caff; -[GIDSignInButton sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a6cab0(long param_1)

{
  if (*(ulong *)(param_1 + _DAT_11270f898) < 2) {
    func_0x00010c0cde40();
  }
  else if (*(ulong *)(param_1 + _DAT_11270f898) == 2) {
    func_0x00010c0cde40();
  }
  return;
}



/* Entry: 104a6cb00; end: 104a6cddb; -[GIDSignInButton updateConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a6cb00(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined **ppuVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  bool bVar10;
  double dVar11;
  double dVar12;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  ulong uStack_178;
  undefined1 *puStack_170;
  code *pcStack_168;
  long lStack_160;
  uint uStack_154;
  ulong uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_160 = (long)_DAT_11270f898;
  func_0x00010c0cde40();
  func_0x00010bf495a0(0x3ff0000000000000,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99e0();
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x00010bf495a0(0x3ff0000000000000,0x4048000000000000,
                      PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99e0();
  dVar11 = 0.0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uVar3 = param_2;
  func_0x00010bf495c0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf52a60();
  if (uVar4 == 0) {
    _objc_release(uVar3);
    func_0x00010bef7980(param_2);
  }
  else {
    lVar8 = *plStack_130;
    bVar10 = true;
    uStack_154 = 1;
    do {
      uVar9 = 0;
      do {
        dVar12 = dVar11;
        if (*plStack_130 != lVar8) {
          _objc_enumerationMutation(uVar3);
          dVar12 = dVar11;
        }
        uVar7 = *(ulong *)(lStack_138 + uVar9 * 8);
        uVar5 = param_2;
        func_0x00010c06f260();
        if ((uVar5 & 1) == 0) {
          uVar5 = param_2;
          func_0x00010c06f260();
          if ((uVar5 & 1) == 0) {
            uVar5 = uVar7;
            func_0x00010bfb1740();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            dVar11 = dVar12;
            if (uVar5 == param_2) {
              uVar5 = uVar7;
              func_0x00010bfb0e00();
              if (uVar5 == 8) {
                func_0x00010c12b8a0(param_2);
              }
              uVar5 = uVar7;
              func_0x00010bfb0e00();
              dVar11 = dVar12;
              if (uVar5 == 7) {
                func_0x00010bf49220(uVar7);
                dVar11 = dVar12;
                func_0x00010c0cde40(param_2);
                if ((dVar12 < dVar11) || (*(long *)(param_2 + lStack_160) == 2)) {
                  func_0x00010c12b8a0(param_2);
                }
              }
            }
          }
          else {
            uStack_154 = 0;
            dVar11 = dVar12;
          }
        }
        else {
          bVar10 = false;
          dVar11 = dVar12;
        }
        uVar9 = uVar9 + 1;
      } while (uVar4 != uVar9);
      uVar4 = uVar3;
      func_0x00010bf52a60();
    } while (uVar4 != 0);
    _objc_release(uVar3);
    if (bVar10) {
      func_0x00010bef7980(param_2);
    }
    if ((uStack_154 & 1) == 0) goto LAB_104a6cd70;
  }
  func_0x00010bef7980(param_2);
LAB_104a6cd70:
  puStack_148 = PTR_PTR_1126e3648;
  uStack_150 = param_2;
  _objc_msgSendSuper2(&uStack_150,PTR_s_updateConstraints_11267ec30);
  _objc_release(puVar2);
  puVar2 = puVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  ppuVar6 = &puStack_190;
  pcStack_168 = FUN_104a6cddc;
  puStack_188 = PTR_PTR_1126e3648;
  puStack_190 = puVar2;
  puStack_180 = puVar1;
  uStack_178 = param_2;
  puStack_170 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_190,PTR_s_drawRect__1125271c8);
  _UIGraphicsGetCurrentContext();
  _CGContextRetain();
  if (ppuVar6 != (undefined **)0x0) {
    func_0x00010bf89840(puVar2);
    func_0x00010bf89860(puVar2);
    _CGContextRelease(ppuVar6);
  }
  return;
}



/* Entry: 104a6cddc; end: 104a6ce4b; -[GIDSignInButton drawRect:] */

void FUN_104a6cddc(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e3648;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_drawRect__1125271c8);
  _UIGraphicsGetCurrentContext();
  _CGContextRetain();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf89840(param_1);
    func_0x00010bf89860(param_1);
    _CGContextRelease(puVar1);
  }
  return;
}



/* Entry: 104a6ce4c; end: 104a6d0e3; -[GIDSignInButton drawButtonBackground:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a6ce4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  double in_d3;
  
  _CGContextSaveGState(param_3);
  _CGContextScaleCTM(0x3ff0000000000000,0xbff0000000000000,param_3);
  func_0x00010bf20c00(param_1);
  _CGContextTranslateCTM(0,-in_d3,param_3);
  lVar7 = (long)_DAT_11270f89c;
  uVar1 = *(undefined8 *)(param_1 + lVar7);
  lVar6 = (long)_DAT_11270f8a0;
  FUN_104a6d0e4(uVar1,*(undefined8 *)(param_1 + lVar6),0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _CGPathCreateMutable();
  func_0x00010bf20c00(param_1);
  _CGRectInset();
  _CGPathAddRoundedRect(uVar2,0);
  _CGContextSaveGState(param_3);
  _CGContextAddPath(param_3,uVar2);
  uVar3 = uVar1;
  _objc_retainAutorelease(uVar1);
  func_0x00010bdc0fe0();
  _CGContextSetFillColorWithColor(param_3,uVar3);
  if (*(long *)(param_1 + lVar6) != 1) {
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fbeb851eb851eb8,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    _CGContextSetShadowWithColor(0,0,0x4000000000000000,param_3,puVar5);
    _objc_release(puVar4);
  }
  _CGContextFillPath(param_3);
  uVar3 = param_3;
  _CGContextRestoreGState(param_3);
  if (*(long *)(param_1 + lVar6) != 1) {
    _CGContextSaveGState(param_3);
    _CGContextAddPath(param_3,uVar2);
    uVar3 = uVar1;
    _objc_retainAutorelease(uVar1);
    func_0x00010bdc0fe0();
    _CGContextSetFillColorWithColor(param_3,uVar3);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0,0x3fceb851eb851eb8,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    _CGContextSetShadowWithColor(0,0x4000000000000000,0x4000000000000000,param_3,puVar5);
    _objc_release(puVar4);
    _CGContextFillPath(param_3);
    uVar3 = param_3;
    _CGContextRestoreGState(param_3);
  }
  if ((*(long *)(param_1 + lVar7) == 0) && (*(long *)(param_1 + lVar6) != 1)) {
    _CGPathCreateMutable();
    _CGRectInset(0,0,0x4048000000000000,0x4048000000000000,0x4014000000000000,0x4014000000000000);
    _CGPathAddRoundedRect(uVar3,0);
    _CGContextAddPath(param_3,uVar3);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    _CGContextSetFillColorWithColor(param_3,puVar5);
    _objc_release(puVar4);
    _CGContextFillPath(param_3);
    _CGPathRelease(uVar3);
  }
  _CGPathRelease(uVar2);
  _CGContextRestoreGState(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104a6d0e4; end: 104a6d153;  */

void FUN_104a6d0e4(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(&UNK_10dd4dc18 + (param_1 * 6 + param_2 * 2 + param_3) * 8);
                    /* WARNING: Could not recover jumptable at 0x00010bf41630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            ((double)((float)(uVar1 >> 0x18 & 0xff) / 255.0),
             (double)((float)(uVar1 >> 0x10 & 0xff) / 255.0),
             (double)((float)(uVar1 >> 8 & 0xff) / 255.0),(double)((float)(uVar1 & 0xff) / 255.0),
             PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_colorWithRed_green_blue_alpha__1125adf30);
  return;
}



/* Entry: 104a6d154; end: 104a6d2c7; -[GIDSignInButton drawButtonText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a6d154(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_5;
  if (*(long *)(param_5 + _DAT_11270f898) != 2) {
    func_0x00010beecf00();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_5 + _DAT_11270f89c);
    FUN_104a6d0e4(uVar1,*(undefined8 *)(param_5 + _DAT_11270f8a0),1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_5;
    _objc_opt_class();
    func_0x00010bf25a40();
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(param_5);
    func_0x00010c26c820();
    func_0x00010bf20c00(param_5);
    puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf897e0(0x404b000000000000,(long)((param_4 - param_2) * 0.5),lVar5);
    _objc_release(puVar3);
    _objc_release(lVar2);
    _objc_release(uVar1);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  lVar5 = *(long *)(lVar5 + _DAT_11270f898);
  if (lVar5 == 0 || lVar5 == 2) {
    func_0x00010c23bd00(PTR_PTR_1126ae450);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (lVar5 == 1) {
    func_0x00010c23bd40(PTR_PTR_1126ae450);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a6d2c8; end: 104a6d323; -[GIDSignInButton buttonText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a6d2c8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11270f898);
  if (lVar1 == 0 || lVar1 == 2) {
    func_0x00010c23bd00(PTR_PTR_1126ae450);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (lVar1 == 1) {
    func_0x00010c23bd40(PTR_PTR_1126ae450);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a6d324; end: 104a6d373; +[GIDSignInButton buttonTextFont] */

void FUN_104a6d324(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010bfb41a0(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,param_2,
                      &PTR____CFConstantStringClassReference_110daabd8);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    func_0x00010bf1eda0(0x402c000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104a6d374; end: 104a6d46b; +[GIDSignInButton textSize:withFont:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_104a6d374(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  uStack_50 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf72080(puVar1,param_2,&uStack_50,&uStack_58,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bf20ba0(0x7fefffffffffffff,0x7fefffffffffffff,param_3,param_2,0,puVar1,0);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  return *(undefined **)(puVar1 + _DAT_11270f898);
}



/* Entry: 104a6d46c; end: 104a6d47b; -[GIDSignInButton style] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104a6d46c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11270f898);
}



/* Entry: 104a6d47c; end: 104a6d48b; -[GIDSignInButton colorScheme] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104a6d47c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11270f89c);
}



/* Entry: 104a6d48c; end: 104a6d49b; -[GIDSignInButton buttonState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_104a6d48c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11270f8a0);
}



/* Entry: 104a6d49c; end: 104a6d4af; -[GIDSignInButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104a6d49c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11270f8a4,0);
  return;
}



/* Entry: 104a6d4b0; end: 104a6d777;  */

/* WARNING: Removing unreachable block (ram,0x000104a6d66c) */

void FUN_104a6d4b0(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  _objc_retain();
  func_0x00010c23d0a0(param_3);
  uVar1 = 0;
  _UIGraphicsBeginImageContextWithOptions(0);
  _UIGraphicsGetCurrentContext();
  _CGContextSetShouldAntialias();
  _CGContextSetInterpolationQuality(uVar1,3);
  _CGContextScaleCTM(0x3ff0000000000000,0xbff0000000000000,uVar1);
  _CGContextTranslateCTM(0,-param_2,uVar1);
  uVar2 = param_3;
  _objc_retainAutorelease(param_3);
  func_0x00010bdc1020();
  _CGContextClipToMask(0,0,param_1,param_2,uVar1,uVar2);
  uVar2 = param_3;
  _objc_retainAutorelease(param_3);
  func_0x00010bdc1020();
  _CGContextDrawImage(0,0,param_1,param_2,uVar1,uVar2);
  _CGContextSetBlendMode(uVar1,param_5);
  if ((int)param_5 == 1) {
    puVar3 = param_6;
    func_0x00010bfc9760();
    if ((int)puVar3 == 0) {
      puVar3 = param_6;
      func_0x00010bfcc380();
      if ((int)puVar3 == 0) goto LAB_104a6d624;
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41680(uStack_78,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010bf41620(uStack_60,uStack_68,uStack_70,0x3ff0000000000000,
                          PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(param_6);
    param_6 = puVar3;
  }
LAB_104a6d624:
  puVar3 = param_6;
  _objc_retainAutorelease(param_6);
  func_0x00010bdc0fe0();
  _CGContextSetFillColorWithColor(uVar1,puVar3);
  dVar4 = 0.0;
  dVar5 = 0.0;
  _CGContextFillRect(uVar1);
  if ((int)param_5 == 1) {
    dVar4 = 1.0;
  }
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
  func_0x00010bf2f980(param_3);
  uVar2 = uVar1;
  if ((((0.0 < param_1) || (func_0x00010bf2f980(param_3), 0.0 < dVar4)) ||
      (func_0x00010bf2f980(param_3), 0.0 < dVar5)) || (func_0x00010bf2f980(param_3), 0.0 < dVar5)) {
    func_0x00010bf2f980(param_3);
    func_0x00010c13a140(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104a6d778; end: 104a6d977; +[GIDSignInCallbackSchemes relevantURLSchemes] */

undefined1 * FUN_104a6d778(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puStack_230;
  undefined *puStack_228;
  long lStack_220;
  undefined *puStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  undefined *puStack_200;
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
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660();
  _objc_retainAutoreleasedReturnValue();
  puStack_200 = puVar2;
  func_0x00010c0dfec0();
  _objc_retainAutoreleasedReturnValue();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  puVar6 = &uStack_1b0;
  puStack_1f8 = puVar2;
  func_0x00010bf52a60();
  if (puVar2 != (undefined *)0x0) {
    lVar10 = *plStack_1a0;
    do {
      puVar11 = (undefined *)0x0;
      do {
        if (*plStack_1a0 != lVar10) {
          _objc_enumerationMutation(puStack_1f8);
        }
        lVar3 = *(long *)(lStack_1a8 + (long)puVar11 * 8);
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lStack_1e8 = 0;
        uStack_1f0 = 0;
        uStack_1d8 = 0;
        plStack_1e0 = (long *)0x0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        uStack_1b8 = 0;
        uStack_1c0 = 0;
        lVar4 = lVar3;
        func_0x00010bf52a60();
        if (lVar4 != 0) {
          unaff_x20 = *plStack_1e0;
          do {
            lVar9 = 0;
            do {
              if (*plStack_1e0 != unaff_x20) {
                _objc_enumerationMutation(lVar3);
              }
              uVar5 = *(undefined8 *)(lStack_1e8 + lVar9 * 8);
              func_0x00010c0b5ac0(uVar5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar1);
              _objc_release(uVar5);
              lVar9 = lVar9 + 1;
            } while (lVar4 != lVar9);
            lVar4 = lVar3;
            func_0x00010bf52a60();
          } while (lVar4 != 0);
        }
        _objc_release(lVar3);
        puVar11 = puVar11 + 1;
      } while (puVar11 != puVar2);
      puVar6 = &uStack_1b0;
      puVar2 = puStack_1f8;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined *)0x0);
  }
  _objc_release(puStack_1f8);
  puVar2 = puStack_200;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  ppuVar7 = &puStack_230;
  pcStack_208 = FUN_104a6d978;
  lStack_220 = unaff_x20;
  puStack_218 = puVar1;
  puStack_210 = &stack0xfffffffffffffff0;
  _objc_retain();
  puStack_228 = PTR_PTR_1126e3650;
  puStack_230 = puVar2;
  _objc_msgSendSuper2(&puStack_230,PTR_s_init_1125d9248);
  if (ppuVar7 != (undefined **)0x0) {
    puVar8 = puVar6;
    func_0x00010bf51e00();
    uVar5 = *(undefined8 *)((long)ppuVar7 + 8);
    *(undefined8 **)((long)ppuVar7 + 8) = puVar8;
    _objc_release(uVar5);
  }
  _objc_release(puVar6);
  return (undefined1 *)ppuVar7;
}



/* Entry: 104a6d978; end: 104a6d9ef; -[GIDSignInCallbackSchemes initWithClientIdentifier:] */

undefined1 * FUN_104a6d978(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain();
  puStack_28 = PTR_PTR_1126e3650;
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



/* Entry: 104a6d9f0; end: 104a6da9b; -[GIDSignInCallbackSchemes clientIdentifierScheme] */

void FUN_104a6d9f0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf44740(uVar1,param_2,&PTR____CFConstantStringClassReference_110dad1f8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = uVar4;
  func_0x00010c0b5ac0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 104a6da9c; end: 104a6daff; -[GIDSignInCallbackSchemes allSchemes] */

void FUN_104a6da9c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3d060();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010befa120(puVar1,param_2,param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104a6db00; end: 104a6db8b; -[GIDSignInCallbackSchemes unsupportedSchemes] */

void FUN_104a6db00(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar1 = param_1;
  func_0x00010bf00800();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_opt_class(param_1);
  func_0x00010c128820();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d500(puVar2,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104a6db8c; end: 104a6dccb; -[GIDSignInCallbackSchemes URLSchemeIsCallbackScheme:] */

long FUN_104a6db8c(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010c1504a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0b5ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bf00800();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  lVar6 = 0;
  if (lVar3 != 0) {
    do {
      lVar6 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        uVar4 = uVar2;
        func_0x00010c071ae0();
        if ((uVar4 & 1) != 0) {
          lVar6 = 1;
          goto LAB_104a6dc84;
        }
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
      lVar3 = param_1;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
    lVar6 = 0;
  }
LAB_104a6dc84:
  _objc_release(param_1);
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    lVar6 = uVar2 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(lVar6,0);
    return lVar6;
  }
  return lVar6;
}



/* Entry: 104a6dccc; end: 104a6dcd7; -[GIDSignInCallbackSchemes .cxx_destruct] */

void FUN_104a6dccc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104a6dcd8; end: 104a6de13; +[GIDSignInInternalOptions defaultOptionsWithConfiguration:presentingViewController:loginHint:addScopesFlow:scopes:completion:] */

void FUN_104a6dcd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain();
  puVar3 = PTR_PTR_1126ae4a0;
  _objc_alloc_init();
  if (puVar3 != (undefined *)0x0) {
    *(undefined2 *)(puVar3 + 8) = 1;
    puVar3[10] = param_6;
    _objc_storeStrong(puVar3 + 0x18,param_3);
    _objc_storeWeak(puVar3 + 0x20,param_4);
    _objc_storeStrong(puVar3 + 0x38,param_5);
    uVar6 = param_8;
    _objc_retainBlock();
    uVar5 = *(undefined8 *)(puVar3 + 0x28);
    *(undefined8 *)(puVar3 + 0x28) = uVar6;
    _objc_release(uVar5);
    puVar4 = PTR_PTR_1126ae4c8;
    func_0x00010c150c00();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(puVar3 + 0x30);
    *(undefined **)(puVar3 + 0x30) = puVar4;
    _objc_release(uVar6);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 104a6de14; end: 104a6de23; +[GIDSignInInternalOptions defaultOptionsWithConfiguration:presentingViewController:loginHint:addScopesFlow:completion:] */

void FUN_104a6de14(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf69e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_defaultOptionsWithConfiguration__1125b8130);
  return;
}



/* Entry: 104a6de24; end: 104a6de53; +[GIDSignInInternalOptions silentOptionsWithCompletion:] */

void FUN_104a6de24(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf69e00(param_1,param_2,0,0,0,0,param_3);
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 104a6de54; end: 104a6df2f; -[GIDSignInInternalOptions optionsWithExtraParameters:forContinuation:] */

void FUN_104a6de54(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126ae4a0;
  _objc_alloc_init();
  if (puVar1 != (undefined *)0x0) {
    puVar1[8] = *(undefined1 *)(param_1 + 8);
    puVar1[9] = param_4;
    puVar1[10] = *(undefined1 *)(param_1 + 10);
    _objc_storeStrong(puVar1 + 0x18,*(undefined8 *)(param_1 + 0x18));
    lVar2 = param_1 + 0x20;
    _objc_loadWeakRetained(lVar2);
    _objc_storeWeak(puVar1 + 0x20,lVar2);
    _objc_release(lVar2);
    _objc_storeStrong(puVar1 + 0x38,*(undefined8 *)(param_1 + 0x38));
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retainBlock();
    uVar4 = *(undefined8 *)(puVar1 + 0x28);
    *(undefined8 *)(puVar1 + 0x28) = uVar3;
    _objc_release(uVar4);
    _objc_storeStrong(puVar1 + 0x30,*(undefined8 *)(param_1 + 0x30));
    uVar3 = param_3;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)(puVar1 + 0x10);
    *(undefined8 *)(puVar1 + 0x10) = uVar3;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104a6df30; end: 104a6df37; -[GIDSignInInternalOptions interactive] */

undefined1 FUN_104a6df30(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104a6df38; end: 104a6df3f; -[GIDSignInInternalOptions continuation] */

undefined1 FUN_104a6df38(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 104a6df40; end: 104a6df47; -[GIDSignInInternalOptions addScopesFlow] */

undefined1 FUN_104a6df40(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 104a6df48; end: 104a6df4f; -[GIDSignInInternalOptions extraParams] */

undefined8 FUN_104a6df48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104a6df50; end: 104a6df57; -[GIDSignInInternalOptions configuration] */

undefined8 FUN_104a6df50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104a6df58; end: 104a6df6f; -[GIDSignInInternalOptions presentingViewController] */

void FUN_104a6df58(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


