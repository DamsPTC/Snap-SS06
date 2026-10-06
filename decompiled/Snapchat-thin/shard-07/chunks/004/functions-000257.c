/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1054b537c; end: 1054b558b; -[SCBloopsOnboardingControllerImpl startGenAIPresenterInContainer:sourceType:selfieApprovedCallback:completion:] */

void FUN_1054b537c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfbe880();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126b99e0;
  _objc_alloc_init(PTR_PTR_1126b99e0);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if ((int)uVar3 == 0) {
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_1054b55a4;
    puStack_a0 = &UNK_11088fcb8;
    _objc_retain(param_5);
    uStack_98 = param_5;
    _objc_retain(param_6);
    uStack_90 = param_6;
    func_0x00010c1a2460(puVar4,param_2,&puStack_b8);
    puStack_e0 = puVar1;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_1054b55ec;
    puStack_c8 = &UNK_110849530;
    uStack_c0 = param_6;
    _objc_retain(param_6);
    func_0x00010c1a2440(puVar4,param_2,&puStack_e0);
    func_0x00010bf0c540(uVar5,param_2,puVar4);
    FUN_1054b7e94(param_4);
    func_0x00010c10d4a0(uVar5,param_2,param_3,param_4);
    _objc_release(param_3);
    _objc_release(uStack_c0);
    _objc_release(uStack_90);
    uVar3 = uStack_98;
  }
  else {
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1054b558c;
    puStack_70 = &UNK_110849530;
    uStack_68 = param_6;
    _objc_retain(param_6);
    func_0x00010c1a24c0(puVar4,param_2,&puStack_88);
    func_0x00010bf0c540(uVar5,param_2,puVar4);
    func_0x00010c10c460(uVar5,param_2,param_3);
    _objc_release(param_3);
    uVar3 = uStack_68;
  }
  _objc_release(uVar3);
  _objc_release(param_6);
  _objc_release(puVar4);
  _objc_release(uVar5);
  _objc_release(param_5);
  return;
}



/* Entry: 1054b558c; end: 1054b55a3;  */

void FUN_1054b558c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001054b559c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 1054b55a4; end: 1054b55eb;  */

void FUN_1054b55a4(long param_1)

{
  long lVar1;
  
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001054b55dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 1054b55ec; end: 1054b5603;  */

void FUN_1054b55ec(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001054b55fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0);
    return;
  }
  return;
}



/* Entry: 1054b5604; end: 1054b5637; -[SCBloopsOnboardingControllerImpl dismissViewControllerAnimated:completion:] */

void FUN_1054b5604(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054b5638; end: 1054b5783; -[SCBloopsOnboardingControllerImpl bloopsCTAStartOnViewController:viewLocation:selfieApprovedCallback:completion:] */

void FUN_1054b5638(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_6);
  func_0x00010c24fbc0(param_1);
  _objc_release(param_6);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1054b5784; end: 1054b57cf;  */

void FUN_1054b5784(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1054b57d0; end: 1054b57d3; -[SCBloopsOnboardingControllerImpl bloopsCTADismissViewControllerAnimated:completion:] */

void FUN_1054b57d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68);
  return;
}



/* Entry: 1054b57d4; end: 1054b57eb; -[SCBloopsOnboardingControllerImpl delegate] */

void FUN_1054b57d4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054b57ec; end: 1054b57f7; -[SCBloopsOnboardingControllerImpl setDelegate:] */

void FUN_1054b57ec(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 1054b57f8; end: 1054b582f; -[SCBloopsOnboardingControllerImpl .cxx_destruct] */

void FUN_1054b57f8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054b5830; end: 1054b58a3; -[SCBloopsCTAOnboardingControllerFactoryImpl initWithOnboardingControllerFactory:] */

undefined1 * FUN_1054b5830(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8820;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1054b58a4; end: 1054b5927; -[SCBloopsCTAOnboardingControllerFactoryImpl createBloopsCTAOnboardingController] */

void FUN_1054b58a4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf575c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar1 = PTR_DAT_1126a4f78;
  _objc_retain(uVar3);
  uVar4 = uVar3;
  func_0x00010010fab4(uVar3,puVar1);
  uVar2 = uVar3;
  if ((int)uVar4 == 0) {
    uVar2 = 0;
  }
  _objc_retain(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1054b5928; end: 1054b5933; -[SCBloopsCTAOnboardingControllerFactoryImpl .cxx_destruct] */

void FUN_1054b5928(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054b5934; end: 1054b59b7; -[SCBloopsFriendsPolicyCheckOperation initWithSnapchattersDataFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1054b5934(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126e8828;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_1127241fc;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1054b59b8; end: 1054b5b73; -[SCBloopsFriendsPolicyCheckOperation start] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b59b8(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  ulong uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126e8828;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_start_112671080);
  uVar1 = param_1;
  func_0x00010c06e0e0();
  if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010c072f20(), (uVar1 & 1) == 0)) {
    uVar1 = param_1;
    func_0x00010c2948e0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 != 0) {
      uVar2 = param_1;
      func_0x00010c2948e0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010bf529e0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      if (uVar3 != 0) {
        _objc_initWeak(auStack_58,param_1);
        uVar4 = *(undefined8 *)(param_1 + (long)_DAT_1127241fc);
        func_0x00010c269d40(uVar4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c2948e0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = param_1;
        func_0x000100078e94();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c11de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_copyWeak(auStack_60,auStack_58);
        func_0x00010c244e80(uVar4);
        _objc_release(uVar2);
        _objc_release(uVar1);
        _objc_release(param_1);
        _objc_release(uVar4);
        _objc_destroyWeak(auStack_60);
        _objc_destroyWeak(auStack_58);
        return;
      }
    }
    func_0x00010bfaf680(param_1);
  }
  return;
}



/* Entry: 1054b5b74; end: 1054b5d5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b5b74(long param_1,ulong param_2,long param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_3 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      uVar9 = param_2;
      func_0x00010bf529e0();
      if (uVar9 != 0) {
        uVar9 = 0;
        do {
          uVar4 = param_2;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (uVar5 != 0) {
            uVar5 = uVar4;
            func_0x00010bfb8280();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar5;
            func_0x00010c261440();
            _objc_retainAutoreleasedReturnValue();
            uVar7 = uVar6;
            func_0x00010bf0a8a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar6);
            _objc_release(uVar5);
            if ((uVar9 == 0) && (uVar7 != 0)) {
              uVar5 = uVar7;
              func_0x00010c06dcc0();
              if ((int)uVar5 != 0) {
                *(undefined1 *)(param_1 + _DAT_112724204) = 1;
                goto LAB_1054b5cbc;
              }
              bVar1 = false;
LAB_1054b5cac:
              uVar5 = uVar7;
              func_0x00010c06dcc0();
              if ((bVar1) || ((int)uVar5 != 0)) goto LAB_1054b5cbc;
            }
            else {
              bVar1 = uVar7 == 0;
              if (uVar7 != 0) goto LAB_1054b5cac;
LAB_1054b5cbc:
              uVar5 = uVar4;
              func_0x00010c2923e0(uVar4);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befa120(puVar3);
              _objc_release(uVar5);
            }
            _objc_release(uVar7);
          }
          _objc_release(uVar4);
          uVar9 = uVar9 + 1;
          uVar4 = param_2;
          func_0x00010bf529e0();
        } while (uVar9 < uVar4);
      }
      puVar8 = puVar3;
      func_0x00010bf51e00();
      uVar2 = *(undefined8 *)(param_1 + _DAT_112724200);
      *(undefined **)(param_1 + _DAT_112724200) = puVar8;
      _objc_release(uVar2);
      func_0x00010bfaf680(param_1);
      _objc_release(puVar3);
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + _DAT_112724200);
      *(undefined8 *)(param_1 + _DAT_112724200) = 0;
      _objc_release(uVar2);
      *(undefined1 *)(param_1 + _DAT_112724204) = 0;
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054b5d60; end: 1054b5d6f; -[SCBloopsFriendsPolicyCheckOperation usersIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b5d60(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_112724208,1);
  return;
}



/* Entry: 1054b5d70; end: 1054b5d7b; -[SCBloopsFriendsPolicyCheckOperation setUsersIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b5d70(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1054b5d7c; end: 1054b5d8b; -[SCBloopsFriendsPolicyCheckOperation usersIdsWithCameosSharing] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b5d7c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_112724200,1);
  return;
}



/* Entry: 1054b5d8c; end: 1054b5d9f; -[SCBloopsFriendsPolicyCheckOperation isFirstUserMutualFriendWithTarget] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1054b5d8c(long param_1)

{
  return *(byte *)(param_1 + _DAT_112724204) & 1;
}



/* Entry: 1054b5da0; end: 1054b5def; -[SCBloopsFriendsPolicyCheckOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b5da0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112724200,0);
  _objc_storeStrong(param_1 + _DAT_112724208,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127241fc,0);
  return;
}



/* Entry: 1054b5df0; end: 1054b5ee3; -[SCBloopsObtainGroupUsersOperation initWithGroupsDataFetcher:groupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1054b5df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e8830;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11272420c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    lVar4 = (long)_DAT_112724210;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112724214);
    *(undefined **)((long)puVar1 + (long)_DAT_112724214) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1054b5ee4; end: 1054b60a7; -[SCBloopsObtainGroupUsersOperation start] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b5ee4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  ulong uStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126e8830;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_start_112671080);
  uVar1 = param_1;
  func_0x00010c06e0e0();
  if (((uVar1 & 1) == 0) && (uVar1 = param_1, func_0x00010c072f20(), (uVar1 & 1) == 0)) {
    uVar1 = param_1;
    func_0x00010bfceb20();
    _objc_retainAutoreleasedReturnValue();
    if (uVar1 != 0) {
      uVar2 = param_1;
      func_0x00010c15ace0();
      _objc_retainAutoreleasedReturnValue();
      if (uVar2 == 0) {
        _objc_release(uVar1);
      }
      else {
        uVar3 = param_1;
        func_0x00010c15ad20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar2);
        _objc_release(uVar1);
        if (uVar3 != 0) {
          _objc_initWeak(auStack_48,param_1);
          uVar4 = *(undefined8 *)(param_1 + (long)_DAT_11272420c);
          func_0x00010c269d40(uVar4);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = param_1;
          func_0x00010bfceb20(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_copyWeak(auStack_50,auStack_48);
          uVar5 = *(undefined8 *)(param_1 + (long)_DAT_112724214);
          func_0x00010c11de00(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfc6120(uVar4);
          _objc_release(uVar5);
          _objc_release(uVar1);
          _objc_release(uVar4);
          _objc_destroyWeak(auStack_50);
          _objc_destroyWeak(auStack_48);
          return;
        }
      }
    }
    func_0x00010bfaf680(param_1);
  }
  return;
}



/* Entry: 1054b60a8; end: 1054b6163;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b60a8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    if (param_2 != 0) {
      lVar1 = param_1;
      func_0x00010c15ace0(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_2;
      func_0x000108ef2144(param_2,lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      lVar1 = lVar2;
      func_0x000100504554(lVar2,&PTR___NSConcreteGlobalBlock_11088fce8);
      uVar3 = *(undefined8 *)(param_1 + _DAT_112724218);
      *(long *)(param_1 + _DAT_112724218) = lVar1;
      _objc_release(uVar3);
      _objc_release(lVar2);
    }
    func_0x00010bfaf680(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054b6164; end: 1054b616b;  */

void FUN_1054b6164(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 1054b616c; end: 1054b617b; -[SCBloopsObtainGroupUsersOperation groupId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b616c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_112724210,1);
  return;
}



/* Entry: 1054b617c; end: 1054b6187; -[SCBloopsObtainGroupUsersOperation setGroupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b617c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1054b6188; end: 1054b6197; -[SCBloopsObtainGroupUsersOperation selfId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b6188(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_11272421c,1);
  return;
}



/* Entry: 1054b6198; end: 1054b61a3; -[SCBloopsObtainGroupUsersOperation setSelfId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b6198(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1054b61a4; end: 1054b61b3; -[SCBloopsObtainGroupUsersOperation selfUserName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b61a4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_112724220,1);
  return;
}



/* Entry: 1054b61b4; end: 1054b61bf; -[SCBloopsObtainGroupUsersOperation setSelfUserName:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b61b4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1054b61c0; end: 1054b61cf; -[SCBloopsObtainGroupUsersOperation usersIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b61c0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_112724218,1);
  return;
}



/* Entry: 1054b61d0; end: 1054b624f; -[SCBloopsObtainGroupUsersOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b61d0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112724218,0);
  _objc_storeStrong(param_1 + _DAT_112724220,0);
  _objc_storeStrong(param_1 + _DAT_11272421c,0);
  _objc_storeStrong(param_1 + _DAT_112724210,0);
  _objc_storeStrong(param_1 + _DAT_112724214,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272420c,0);
  return;
}



/* Entry: 1054b6250; end: 1054b636f; -[SCBloopsUserDataModelObtainingOperation initWithTargersService:cacheAnalyticsModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1054b6250(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126e8838;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11272422c;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112724230);
    *(undefined **)((long)puVar1 + (long)_DAT_112724230) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    _objc_alloc_init();
    lVar4 = (long)_DAT_112724234;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined **)((long)puVar1 + lVar4) = puVar3;
    _objc_release(uVar2);
    func_0x00010c1c3080(*(undefined8 *)((long)puVar1 + lVar4));
    lVar4 = (long)_DAT_112724238;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1054b6370; end: 1054b67d3; -[SCBloopsUserDataModelObtainingOperation start] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b6370(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined *puStack_140;
  undefined1 auStack_138 [8];
  undefined1 auStack_130 [8];
  undefined1 *puStack_128;
  undefined *puStack_120;
  undefined1 *puStack_98;
  undefined1 *puStack_90;
  undefined1 *puStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_120 = PTR_PTR_1126e8838;
  puVar11 = PTR_s_start_112671080;
  puStack_128 = param_1;
  _objc_msgSendSuper2(&puStack_128);
  puVar1 = param_1;
  func_0x00010c06e0e0();
  if ((((ulong)puVar1 & 1) == 0) &&
     (puVar1 = param_1, func_0x00010c072f20(), ((ulong)puVar1 & 1) == 0)) {
    puVar1 = param_1;
    func_0x00010c2948e0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 != (undefined1 *)0x0) {
      puVar2 = param_1;
      func_0x00010c2948e0();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x00010bf529e0();
      if (puVar3 == (undefined1 *)0x0) {
        _objc_release(puVar2);
        _objc_release(puVar1);
      }
      else {
        puVar3 = param_1;
        func_0x00010bfceb20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(puVar2);
        _objc_release(puVar1);
        if (puVar3 != (undefined1 *)0x0) {
          _objc_initWeak(auStack_130,param_1);
          puStack_158 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_150 = 0xc2000000;
          pcStack_148 = FUN_1054b67d4;
          puStack_140 = &UNK_11088fd08;
          puVar11 = auStack_130;
          _objc_copyWeak(auStack_138);
          ppuVar4 = &puStack_158;
          _objc_retainBlock();
          puVar1 = param_1;
          func_0x00010c2948e0(param_1);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar1;
          func_0x00010bfb1920();
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(ppuVar4);
          puVar3 = param_1;
          func_0x00010be67240();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar2);
          _objc_release(puVar1);
          puVar1 = param_1;
          func_0x00010bfceb20();
          _objc_retainAutoreleasedReturnValue();
          if (puVar1 == (undefined1 *)0x0) {
            puVar2 = param_1;
            func_0x00010c2948e0();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar2;
            func_0x00010bfb1920();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(puVar2);
          }
          else {
            _objc_retain(puVar1);
            puVar5 = puVar1;
          }
          _objc_release(puVar1);
          puVar1 = param_1;
          func_0x00010c2948e0();
          _objc_retainAutoreleasedReturnValue();
          puVar2 = param_1;
          func_0x00010be67260();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar1);
          if ((puVar3 == (undefined1 *)0x0) || (puVar2 == (undefined1 *)0x0)) {
            puVar11 = (undefined *)0x0;
            (*(code *)ppuVar4[2])(ppuVar4);
          }
          else {
            puVar1 = param_1;
            func_0x00010bf37d60();
            puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
            if ((int)puVar1 == 0) {
              puStack_98 = puVar2;
              func_0x00010bf0a140();
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              puStack_90 = puVar3;
              puStack_88 = puVar2;
              func_0x00010bf0a140();
              _objc_retainAutoreleasedReturnValue();
            }
            _objc_retain();
            puVar7 = puVar6;
            func_0x00010bf52a60();
            lVar8 = lRam0000000000000000;
            lVar14 = 0;
            while (puVar7 != (undefined *)0x0) {
              puVar12 = (undefined *)0x0;
              lVar15 = lVar14;
              do {
                if (lRam0000000000000000 != lVar8) {
                  _objc_enumerationMutation(puVar6);
                }
                lVar14 = *(long *)((long)puVar12 * 8);
                if (lVar15 != 0) {
                  func_0x00010bef7d60(lVar14);
                }
                _objc_retain(lVar14);
                _objc_release(lVar15);
                puVar12 = puVar12 + 1;
                lVar15 = lVar14;
              } while (puVar7 != puVar12);
              puVar7 = puVar6;
              func_0x00010bf52a60();
            }
            _objc_release(puVar6);
            func_0x00010befa3e0(*(undefined8 *)(param_1 + _DAT_112724234));
            _objc_release(lVar14);
            _objc_release(puVar6);
          }
          _objc_release(puVar2);
          _objc_release(puVar5);
          _objc_release(puVar3);
          _objc_release(ppuVar4);
          _objc_release(ppuVar4);
          _objc_destroyWeak(auStack_138);
          puVar1 = auStack_130;
          _objc_destroyWeak();
          goto LAB_1054b6750;
        }
      }
    }
    func_0x00010bfaf680();
    puVar1 = param_1;
  }
LAB_1054b6750:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_138);
  _objc_destroyWeak(auStack_130);
  __Unwind_Resume();
  lVar14 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = puVar11;
  _objc_retain(puVar11);
  puVar1 = puVar1 + 0x20;
  _objc_loadWeakRetained();
  if (puVar1 != (undefined1 *)0x0) {
    lVar8 = *(long *)(puVar1 + _DAT_112724234);
    func_0x00010c0ebbc0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar8;
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar8);
    lVar8 = lVar9;
    func_0x00010bf52a60();
    lVar15 = lRam0000000000000000;
    while (lVar8 != 0) {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar15) {
          _objc_enumerationMutation(lVar9);
        }
        func_0x00010bf2dba0(*(undefined8 *)(lVar13 * 8));
        lVar13 = lVar13 + 1;
      } while (lVar8 != lVar13);
      lVar8 = lVar9;
      func_0x00010bf52a60();
    }
    _objc_release(lVar9);
    lVar8 = (long)_DAT_11272423c;
    _objc_retain(puVar11);
    uVar10 = *(undefined8 *)(puVar1 + lVar8);
    *(undefined **)(puVar1 + lVar8) = puVar11;
    _objc_release(uVar10);
    func_0x00010bfaf680(puVar1);
  }
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar14) {
    return;
  }
  ___stack_chk_fail();
  if (puVar6 != (undefined *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001054b6954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(puVar11 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1054b67d4; end: 1054b6947;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b67d4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + _DAT_112724234);
    func_0x00010c0ebbc0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar2 != 0) {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar3);
        }
        func_0x00010bf2dba0(*(undefined8 *)(lVar7 * 8));
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
    lVar2 = (long)_DAT_11272423c;
    _objc_retain(param_2);
    uVar4 = *(undefined8 *)(param_1 + lVar2);
    *(long *)(param_1 + lVar2) = param_2;
    _objc_release(uVar4);
    func_0x00010bfaf680(param_1);
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  if (lVar5 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001054b6954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_2 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1054b6948; end: 1054b695b;  */

void FUN_1054b6948(long param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001054b6954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1054b695c; end: 1054b6a7b; -[SCBloopsUserDataModelObtainingOperation _obtainBloopsUserDataModelFromCacheOperationWithUserId:completion:] */

void FUN_1054b695c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = (undefined *)0x0;
  if ((param_3 != 0) && (param_4 != 0)) {
    _objc_initWeak(auStack_38,param_1);
    puVar1 = PTR_PTR_1126b99e8;
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010bf0c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054b6a7c; end: 1054b6be7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b6a7c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_11272422c);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar5);
    _objc_retain(param_2);
    func_0x00010bfc5de0(uVar2);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(param_2);
    _objc_release(uVar5);
  }
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  (**(code **)(*(long *)(param_2 + 0x28) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_2 + 0x20),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1054b6be8; end: 1054b6c13;  */

void FUN_1054b6be8(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1054b6c14; end: 1054b6d63; -[SCBloopsUserDataModelObtainingOperation _obtainBloopsUserDataModelOperationWithUsersIds:groupId:completion:] */

void FUN_1054b6c14(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = (undefined *)0x0;
  if ((param_3 != 0) && (param_5 != 0)) {
    _objc_initWeak(auStack_48,param_1);
    puVar1 = PTR_PTR_1126b99e8;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010bf0c0e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1054b6d64; end: 1054b6e83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b6d64(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_11272422c);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb8a20(lVar1);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar3);
    _objc_retain(param_2);
    func_0x00010bfc5ee0(uVar2);
    _objc_release(uVar2);
    _objc_release(param_2);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 1054b6e84; end: 1054b6ecf;  */

void FUN_1054b6e84(long param_1,undefined8 param_2)

{
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2);
  func_0x00010bfaf680(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1054b6ed0; end: 1054b6edf; -[SCBloopsUserDataModelObtainingOperation usersIds] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b6ed0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_112724240,1);
  return;
}



/* Entry: 1054b6ee0; end: 1054b6eeb; -[SCBloopsUserDataModelObtainingOperation setUsersIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b6ee0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1054b6eec; end: 1054b6efb; -[SCBloopsUserDataModelObtainingOperation groupId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b6eec(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_getProperty_11034d258)(param_1,param_2,(long)_DAT_112724244,1);
  return;
}



/* Entry: 1054b6efc; end: 1054b6f07; -[SCBloopsUserDataModelObtainingOperation setGroupId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b6efc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_atomic_11034d310)();
  return;
}



/* Entry: 1054b6f08; end: 1054b6f17; -[SCBloopsUserDataModelObtainingOperation friendRequestSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1054b6f08(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112724224);
}



/* Entry: 1054b6f18; end: 1054b6f27; -[SCBloopsUserDataModelObtainingOperation setFriendRequestSource:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b6f18(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112724224) = param_3;
  return;
}



/* Entry: 1054b6f28; end: 1054b6f3b; -[SCBloopsUserDataModelObtainingOperation checkDiskCacheForFirstUser] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_1054b6f28(long param_1)

{
  return *(byte *)(param_1 + _DAT_112724228) & 1;
}



/* Entry: 1054b6f3c; end: 1054b6f4b; -[SCBloopsUserDataModelObtainingOperation setCheckDiskCacheForFirstUser:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b6f3c(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112724228) = param_3;
  return;
}



/* Entry: 1054b6f4c; end: 1054b6f5b; -[SCBloopsUserDataModelObtainingOperation userDataModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1054b6f4c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11272423c);
}



/* Entry: 1054b6f5c; end: 1054b6f9b; -[SCBloopsUserDataModelObtainingOperation setUserDataModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b6f5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11272423c;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054b6f9c; end: 1054b702b; -[SCBloopsUserDataModelObtainingOperation .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b6f9c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272423c,0);
  _objc_storeStrong(param_1 + _DAT_112724244,0);
  _objc_storeStrong(param_1 + _DAT_112724240,0);
  _objc_storeStrong(param_1 + _DAT_112724238,0);
  _objc_storeStrong(param_1 + _DAT_112724234,0);
  _objc_storeStrong(param_1 + _DAT_112724230,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272422c,0);
  return;
}



/* Entry: 1054b702c; end: 1054b7143; -[SCBloopsUsersDataModelsService initWithTargetsService:snapchattersDataFetching:groupsDataFetcher:selfUsernameProvider:selfId:userDataModelsCountLimit:] */

long FUN_1054b702c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010bfee200();
  if (param_1 != 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = param_3;
    _objc_release(uVar1);
    _objc_retain(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_4;
    _objc_release(uVar1);
    _objc_retain(param_5);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = param_5;
    _objc_release(uVar1);
    _objc_retain(param_6);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = param_6;
    _objc_release(uVar1);
    _objc_retain(param_7);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = param_7;
    _objc_release(uVar1);
    *(undefined8 *)(param_1 + 0x40) = param_8;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1054b7144; end: 1054b71eb; -[SCBloopsUsersDataModelsService init] */

undefined1 * FUN_1054b7144(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8840;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    _objc_alloc_init();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar3);
    func_0x00010c1c3080(*(undefined8 *)((long)puVar1 + 0x28));
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1054b71ec; end: 1054b7533; -[SCBloopsUsersDataModelsService obtainUserDataModelForUserId:friendRequestSource:cacheAnalyticsModel:performer:completion:] */

void FUN_1054b71ec(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_3 == 0) {
    _objc_retain(param_7);
    func_0x00010c0f7fc0(param_6);
    puVar1 = param_7;
  }
  else {
    puVar1 = PTR_PTR_1126b99f0;
    _objc_alloc();
    func_0x00010c0496a0();
    puVar2 = PTR_PTR_1126b99f8;
    _objc_alloc();
    func_0x00010c0508c0();
    func_0x00010c1a0040();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c21f900(puVar1);
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b7040;
    func_0x00010c22be80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar2);
    _objc_retain(param_3);
    _objc_retain(puVar1);
    puVar4 = puVar3;
    func_0x00010bf1d4a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126b7040;
    func_0x00010c22be80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(puVar2);
    puVar5 = puVar3;
    func_0x00010bf1d4a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beae920(param_1);
    func_0x00010befa3e0(*(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(param_7);
    _objc_release(puVar2);
    _objc_release(param_6);
    _objc_release(puVar4);
    _objc_release(param_3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0001054b7540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),0);
  return;
}



/* Entry: 1054b7534; end: 1054b7543;  */

void FUN_1054b7534(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001054b7540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1054b7544; end: 1054b7663;  */

void FUN_1054b7544(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c294900(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4c400(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21f900(*(undefined8 *)(param_1 + 0x28));
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c1a4760(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0730c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c17c010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_setCheckDiskCacheForFirstUser__11263ca20,uVar1);
  return;
}



/* Entry: 1054b7664; end: 1054b76a3;  */

void FUN_1054b7664(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c291960(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1054b76a4; end: 1054b7af3; -[SCBloopsUsersDataModelsService obtainUserDataModelForGroupId:friendRequestSource:cacheAnalyticsModel:performer:completion:] */

void FUN_1054b76a4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if (param_3 == 0) {
    _objc_retain(param_7);
    func_0x00010c0f7fc0(param_6);
    puVar1 = param_7;
  }
  else {
    puVar1 = PTR_PTR_1126b9a00;
    _objc_alloc();
    func_0x00010c019360();
    puVar2 = PTR_PTR_1126b99f0;
    _objc_alloc();
    func_0x00010c0496a0();
    puVar3 = PTR_PTR_1126b99f8;
    _objc_alloc();
    func_0x00010c0508c0();
    func_0x00010c1a0040();
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fbc00(puVar1);
    _objc_release(uVar5);
    _objc_release(uVar4);
    func_0x00010c1fbbe0(puVar1);
    puVar6 = PTR_PTR_1126b7040;
    func_0x00010c22be80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_3);
    _objc_retain(puVar2);
    _objc_retain(puVar1);
    puVar7 = puVar6;
    func_0x00010bf1d4a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126b7040;
    func_0x00010c22be80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(puVar3);
    _objc_retain(param_3);
    _objc_retain(puVar2);
    puVar8 = puVar6;
    func_0x00010bf1d4a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126b7040;
    func_0x00010c22be80();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_6);
    _objc_retain(param_7);
    _objc_retain(puVar3);
    puVar9 = puVar6;
    func_0x00010bf1d4a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beae920(param_1);
    func_0x00010befa3e0(*(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar6);
    _objc_release(puVar9);
    _objc_release(param_7);
    _objc_release(param_6);
    _objc_release(puVar3);
    _objc_release(puVar8);
    _objc_release(param_3);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar7);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(param_3);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x0001054b7b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),0);
  return;
}



/* Entry: 1054b7af4; end: 1054b7b03;  */

void FUN_1054b7af4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001054b7b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1054b7b04; end: 1054b7b43;  */

void FUN_1054b7b04(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2948e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21f900(*(undefined8 *)(param_1 + 0x30),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1054b7b44; end: 1054b7c63;  */

void FUN_1054b7b44(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c294900(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be4c400(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21f900(*(undefined8 *)(param_1 + 0x28));
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010c1a4760(*(undefined8 *)(param_1 + 0x28));
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0730c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c17c010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_setCheckDiskCacheForFirstUser__11263ca20,uVar1);
  return;
}



/* Entry: 1054b7c64; end: 1054b7ca3;  */

void FUN_1054b7c64(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c291960(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1054b7ca4; end: 1054b7dcb; -[SCBloopsUsersDataModelsService _setupOperationsSerialDependencies:] */

void FUN_1054b7ca4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar3 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar5 = 0;
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      lVar6 = lVar5;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        lVar5 = *(long *)(lStack_118 + lVar8 * 8);
        if (lVar6 != 0) {
          func_0x00010bef7d60(lVar5,param_2,lVar6);
        }
        _objc_retain(lVar5);
        _objc_release(lVar6);
        lVar8 = lVar8 + 1;
        lVar6 = lVar5;
      } while (lVar1 != lVar8);
      lVar1 = param_3;
      puVar3 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    _objc_release(lVar5);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = *(undefined1 **)(param_3 + 0x40);
  _objc_retain(puVar3);
  puVar2 = (undefined1 *)puVar3;
  func_0x00010bf529e0();
  if (puVar2 <= puVar4) {
    puVar4 = puVar2;
  }
  puVar2 = (undefined1 *)puVar3;
  func_0x00010c25e980(puVar3,param_2,0,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1054b7dcc; end: 1054b7e27; -[SCBloopsUsersDataModelsService _limitedUsersIdsModelsFromUsersIdsModels:] */

void FUN_1054b7dcc(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x40);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf529e0();
  if (uVar1 <= uVar2) {
    uVar2 = uVar1;
  }
  uVar1 = param_3;
  func_0x00010c25e980(param_3,param_2,0,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1054b7e28; end: 1054b7e93; -[SCBloopsUsersDataModelsService .cxx_destruct] */

void FUN_1054b7e28(long param_1)

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



/* Entry: 1054b7e94; end: 1054b7eb7;  */

undefined8 FUN_1054b7e94(long param_1)

{
  if (param_1 - 1U < 0x11) {
    return *(undefined8 *)(&UNK_10ddb0658 + (param_1 - 1U) * 8);
  }
  return 0xffffffffffffffff;
}



/* Entry: 1054b7eb8; end: 1054b7f83; -[SCBloopsAsyncOperation setExecuting:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b7eb8(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  puVar2 = PTR_s_isExecuting_1125fa2d0;
  lVar3 = (long)_DAT_112724268;
  if (*(byte *)(param_1 + lVar3) != param_3) {
    puVar1 = PTR_s_isExecuting_1125fa2d0;
    _NSStringFromSelector(PTR_s_isExecuting_1125fa2d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a5c20(param_1,param_2,puVar1);
    _objc_release(puVar1);
    *(char *)(param_1 + lVar3) = (char)param_3;
    _NSStringFromSelector(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf73800(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054b7f84; end: 1054b7fcb; -[SCBloopsAsyncOperation isExecuting] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1054b7f84(long param_1)

{
  undefined1 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined1 *)(param_1 + _DAT_112724268);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1054b7fcc; end: 1054b8097; -[SCBloopsAsyncOperation setFinished:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1054b7fcc(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  puVar2 = PTR_s_isFinished_1125fa5d8;
  lVar3 = (long)_DAT_11272426c;
  if (*(byte *)(param_1 + lVar3) != param_3) {
    puVar1 = PTR_s_isFinished_1125fa5d8;
    _NSStringFromSelector(PTR_s_isFinished_1125fa5d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a5c20(param_1,param_2,puVar1);
    _objc_release(puVar1);
    *(char *)(param_1 + lVar3) = (char)param_3;
    _NSStringFromSelector(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf73800(param_1,param_2,puVar2);
    _objc_release(puVar2);
  }
  _objc_sync_exit(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1054b8098; end: 1054b80df; -[SCBloopsAsyncOperation isFinished] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1054b8098(long param_1)

{
  undefined1 uVar1;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  uVar1 = *(undefined1 *)(param_1 + _DAT_11272426c);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1054b80e0; end: 1054b80e7; -[SCBloopsAsyncOperation isAsynchronous] */

undefined8 FUN_1054b80e0(void)

{
  return 1;
}



/* Entry: 1054b80e8; end: 1054b813f; -[SCBloopsAsyncOperation start] */

void FUN_1054b80e8(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  func_0x00010c072300();
  if ((uVar1 & 1) == 0) {
    func_0x00010c1980c0(param_1);
    func_0x00010c19cd00(param_1);
  }
  uVar1 = param_1;
  func_0x00010c06e0e0();
  if ((int)uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
    return;
  }
  return;
}



/* Entry: 1054b8140; end: 1054b8183; -[SCBloopsAsyncOperation finish] */

void FUN_1054b8140(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c072300();
  if ((int)uVar1 != 0) {
    func_0x00010c1980c0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c19cd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setFinished__112644d60,1);
    return;
  }
  return;
}



/* Entry: 1054b8184; end: 1054b81cb;  */

undefined ** FUN_1054b8184(ulong param_1)

{
  if (param_1 < 0xe) {
    return (undefined **)(&PTR_PTR_11088fdf8)[param_1];
  }
  return &PTR____CFConstantStringClassReference_110db8b78;
}



/* Entry: 1054b81cc; end: 1054b823f; -[SCBloopsOnboardingControllerFactoryImpl initWithFeatureSettingsService:] */

undefined1 * FUN_1054b81cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e8848;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1054b8240; end: 1054b826f; -[SCBloopsOnboardingControllerFactoryImpl attachGenAIOnboardingPresenter:] */

void FUN_1054b8240(long param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1054b8270; end: 1054b829f; -[SCBloopsOnboardingControllerFactoryImpl createOnboardingController] */

void FUN_1054b8270(void)

{
  _objc_alloc(PTR_PTR_1126b9a08);
  func_0x00010c012040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054b82a0; end: 1054b82cf; -[SCBloopsOnboardingControllerFactoryImpl .cxx_destruct] */

void FUN_1054b82a0(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1054b82d0; end: 1054b8317; -[SCBloopsFriendBloopsPolicyTypeTitleProviderImpl titleForPolicyType:] */

void FUN_1054b82d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 3) {
    func_0x0001000f6108((&PTR_PTR_11088feb0)[param_3 - 1U],
                        &PTR____CFConstantStringClassReference_110dc98b8,0);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1054b8318; end: 1054b831f; -[SCBloopsFriendBloopsPolicyTypeTitleProviderImpl accessibilityIdentifierForPolicyType:] */

undefined ** FUN_1054b8318(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 3) {
    return (undefined **)(&PTR_PTR_11088fef8)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110de39b8;
}



/* Entry: 1054b8320; end: 1054b8367; -[SCBloopsNoDispatchQueuePerformer initAssertMainThread:] */

void FUN_1054b8320(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e8850;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
  }
  return;
}



/* Entry: 1054b8368; end: 1054b836b; -[SCBloopsNoDispatchQueuePerformer assertNotQueue] */

void FUN_1054b8368(void)

{
  return;
}



/* Entry: 1054b836c; end: 1054b836f; -[SCBloopsNoDispatchQueuePerformer assertQueue] */

void FUN_1054b836c(void)

{
  return;
}



/* Entry: 1054b8370; end: 1054b8377; -[SCBloopsNoDispatchQueuePerformer isCurrentPerformer] */

undefined8 FUN_1054b8370(void)

{
  return 1;
}



/* Entry: 1054b8378; end: 1054b837b; -[SCBloopsNoDispatchQueuePerformer perform:] */

void FUN_1054b8378(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be713b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__perform__112579e88);
  return;
}



/* Entry: 1054b837c; end: 1054b837f; -[SCBloopsNoDispatchQueuePerformer perform:after:] */

void FUN_1054b837c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be713b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__perform__112579e88);
  return;
}



/* Entry: 1054b8380; end: 1054b8383; -[SCBloopsNoDispatchQueuePerformer performAndWait:] */

void FUN_1054b8380(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be713b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__perform__112579e88);
  return;
}



/* Entry: 1054b8384; end: 1054b8387; -[SCBloopsNoDispatchQueuePerformer performImmediatelyIfCurrentPerformer:] */

void FUN_1054b8384(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be713b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__perform__112579e88);
  return;
}



/* Entry: 1054b8388; end: 1054b838f; -[SCBloopsNoDispatchQueuePerformer performOnGroupNotification_DEPRECATED:block:] */

void FUN_1054b8388(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be713b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__perform__112579e88,param_4);
  return;
}



/* Entry: 1054b8390; end: 1054b8393; -[SCBloopsNoDispatchQueuePerformer performWithBarrier:] */

void FUN_1054b8390(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be713b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__perform__112579e88);
  return;
}



/* Entry: 1054b8394; end: 1054b8397; -[SCBloopsNoDispatchQueuePerformer performWithEnforcedBlockQoS:] */

void FUN_1054b8394(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be713b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__perform__112579e88);
  return;
}



/* Entry: 1054b8398; end: 1054b839b; -[SCBloopsNoDispatchQueuePerformer performWithEnforcedInheritedQoS:] */

void FUN_1054b8398(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be713b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__perform__112579e88);
  return;
}



/* Entry: 1054b839c; end: 1054b83a3; -[SCBloopsNoDispatchQueuePerformer performWithQoS:block:] */

void FUN_1054b839c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010be713b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__perform__112579e88,param_4);
  return;
}



/* Entry: 1054b83a4; end: 1054b83af; -[SCBloopsNoDispatchQueuePerformer queue] */

void FUN_1054b83a4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdebc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_get_global_queue_11034c060)(0x15,0);
  return;
}



/* Entry: 1054b83b0; end: 1054b83bb; -[SCBloopsNoDispatchQueuePerformer _perform:] */

void FUN_1054b83b0(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001054b83b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x10))(param_3);
  return;
}



/* Entry: 1054b83bc; end: 1054b8483; -[SCBloopsGrpcConverterImpl statusCodeForCameosStatusReponse:] */

long FUN_1054b83bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
LAB_1054b843c:
    lVar3 = 500;
  }
  else {
    lVar2 = param_3;
    func_0x00010bf987e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c252d60();
    _objc_release(lVar2);
    if (((int)lVar3 == 0) || ((int)lVar3 == -0x4524111)) {
      lVar2 = param_3;
      func_0x00010c252d60();
      lVar3 = 200;
      iVar1 = (int)lVar2;
      if ((iVar1 == -0x4524111) || (iVar1 == 0)) goto LAB_1054b8468;
      if (iVar1 == 1) goto LAB_1054b843c;
    }
    lVar2 = param_3;
    func_0x00010bf987e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c252d60();
    lVar3 = (long)(int)lVar3;
    _objc_release(lVar2);
  }
LAB_1054b8468:
  _objc_release(param_3);
  return lVar3;
}


