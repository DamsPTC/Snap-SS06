/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106b0a3bc; end: 106b0a3d3;  */

void FUN_106b0a3bc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106b0a3d4; end: 106b0a4cf;  */

void FUN_106b0a3d4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 == 0) {
    return;
  }
  _objc_retain(lVar4);
  func_0x00010c0ec5e0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_2 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a100(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = lVar4;
  func_0x00010bebd7a0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))();
  _objc_release(lVar3);
  func_0x00010bf86d40(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
  lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = 0;
  _objc_release(uVar2);
  _objc_release(lVar4);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b0a4d0; end: 106b0a58f; -[SCLensProcessingURIServiceFriendDataRequestHandler _getAllMutualFriendsWithCompletion:request:] */

void FUN_106b0a4d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebd7a0(param_1,param_2,param_4,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c0d42a0(uVar2,param_2,uVar1,param_1);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106b0a590; end: 106b0a64f; -[SCLensProcessingURIServiceFriendDataRequestHandler _getBestFriendsWithCompletion:request:] */

void FUN_106b0a590(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bebd7a0(param_1,param_2,param_4,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c11f720(uVar2,param_2,uVar1,param_1);
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106b0a650; end: 106b0a80f; -[SCLensProcessingURIServiceFriendDataRequestHandler _getFriendsWhoCanUseMySelfieWithCompletion:request:] */

void FUN_106b0a650(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x00010bebd7a0(param_1,param_2,param_4,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x106b0a728;
  puStack_40 = &UNK_11084e3a0;
  lStack_38 = lVar1;
  _objc_retain(lVar1);
  func_0x00010c0d42a0(uVar2,param_2,uVar3,&puStack_58);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lStack_38);
  _objc_release(lVar1);
  return;
}



/* Entry: 106b0a810; end: 106b0a94b; -[SCLensProcessingURIServiceFriendDataRequestHandler _getFriendsInCurrentContextCompletion:request:] */

void FUN_106b0a810(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x106b0a8e0;
  puStack_50 = &UNK_1108950d8;
  lStack_48 = param_1;
  uStack_40 = param_4;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bf5fda0(uVar1,param_2,&puStack_68);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 106b0a94c; end: 106b0ac9b; -[SCLensProcessingURIServiceFriendDataRequestHandler _getFriendUserLocationWithCompletion:request:] */

void FUN_106b0a94c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_6;
  func_0x00010c069c60(param_6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_6;
  func_0x00010bf4dac0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  if ((int)uVar3 == 0) {
    _objc_release(uVar2);
  }
  else {
    lVar8 = *(long *)(param_3 + 0x18);
    _objc_release(uVar2);
    if (lVar8 != 0) {
      puVar4 = PTR_PTR_1126d0838;
      _objc_alloc();
      uVar2 = param_6;
      func_0x00010bf1e9c0(param_6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c008360();
      _objc_retain(0);
      _objc_release(uVar2);
      if (puVar4 == (undefined *)0x0) {
        (**(code **)(param_5 + 0x10))(param_5,uVar1);
      }
      else {
        lVar5 = *(long *)(param_3 + 0x18);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar4;
        func_0x00010c2923e0(puVar4);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar5;
        func_0x00010c0fa5c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        _objc_release(lVar5);
        if (lVar8 == 0) {
          puVar9 = (undefined *)0x0;
        }
        else {
          puVar6 = PTR_PTR_1126d0840;
          _objc_alloc_init();
          puVar7 = PTR_PTR_1126d0848;
          _objc_alloc_init(PTR_PTR_1126d0848);
          func_0x00010bf51c80(lVar8);
          func_0x00010c1b9120(puVar7);
          func_0x00010bf51c80(lVar8);
          func_0x00010c1be5e0(param_2,puVar7);
          func_0x00010c1b9540(puVar6);
          lVar5 = lVar8;
          func_0x00010c09e300(lVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1bf480(puVar6);
          _objc_release(lVar5);
          lVar5 = lVar8;
          func_0x00010c297f60(lVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2209c0(puVar6);
          _objc_release(lVar5);
          lVar5 = lVar8;
          func_0x00010bf64de0(lVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c26f320();
          puVar9 = puVar6;
          func_0x00010c2709c0(puVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c214d20(param_2);
          _objc_release(puVar9);
          _objc_release(lVar5);
          puVar9 = puVar6;
          func_0x00010bf63640();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar7);
          _objc_release(puVar6);
        }
        puVar6 = PTR_PTR_1126b1ce0;
        _objc_alloc(PTR_PTR_1126b1ce0);
        uVar2 = param_6;
        func_0x00010c28f280(param_6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c059e80(puVar6);
        (**(code **)(param_5 + 0x10))(param_5,puVar6);
        _objc_release(puVar6);
        _objc_release(uVar2);
        _objc_release(puVar9);
        _objc_release(lVar8);
      }
      _objc_release(puVar4);
      _objc_release(0);
      goto LAB_106b0ac60;
    }
  }
  (**(code **)(param_5 + 0x10))(param_5,uVar1);
LAB_106b0ac60:
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  return;
}



/* Entry: 106b0ac9c; end: 106b0aec7; -[SCLensProcessingURIServiceFriendDataRequestHandler _friendInfoFromSnapchatter:] */

void FUN_106b0ac9c(double param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  double dVar7;
  double dVar8;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c261440();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf0a8a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar2);
  _objc_release(lVar1);
  if (lVar3 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    func_0x00010be1f5a0(param_2,param_3,param_4);
    puVar4 = PTR_PTR_1126d0850;
    dVar7 = param_1;
    _objc_alloc_init(PTR_PTR_1126d0850);
    if (0.0 < param_1) {
      puVar6 = puVar4;
      func_0x00010bfba8a0(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c214d20();
      _objc_release(puVar6);
      dVar7 = param_1;
    }
    lVar1 = param_4;
    func_0x00010bfb8280(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0891c0();
    dVar8 = dVar7;
    _objc_release(lVar1);
    if (0.0 < dVar7) {
      lVar1 = param_4;
      func_0x00010bfb8280(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0891c0();
      puVar6 = puVar4;
      func_0x00010c089060(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c214d20(dVar8);
      _objc_release(puVar6);
      _objc_release(lVar1);
    }
    lVar1 = param_4;
    func_0x00010bfb8280();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c261440();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf0a8a0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar3;
    func_0x00010c243560();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if (0 < (int)lVar5) {
      lVar1 = param_4;
      func_0x00010bfb8280(param_4);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010c261440();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bf0a8a0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      func_0x00010c243560();
      func_0x00010c20e260(puVar4,param_3,lVar5);
      _objc_release(lVar3);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
    puVar6 = puVar4;
    func_0x00010bf51e00(puVar4);
    _objc_release(puVar4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 106b0aec8; end: 106b0af87; -[SCLensProcessingURIServiceFriendDataRequestHandler _getFriendshipStartDateForFriend:] */

double FUN_106b0aec8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfb8280(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef89e0();
  dVar4 = param_1;
  _objc_release(uVar1);
  uVar1 = param_4;
  func_0x00010bfb8280(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar2 = uVar1;
  func_0x00010c261440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf0a8a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befcae0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (param_1 <= dVar4) {
    param_1 = dVar4;
  }
  return param_1;
}



/* Entry: 106b0af88; end: 106b0afdb; -[SCLensProcessingURIServiceFriendDataRequestHandler .cxx_destruct] */

void FUN_106b0af88(long param_1)

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



/* Entry: 106b0afdc; end: 106b0b09b; -[SCLensProcessingURIServiceGroupsDataRequestHandler initWithGroupsDataFetcher:topGroupsDataFetcher:] */

undefined1 *
FUN_106b0afdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f4ec0;
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
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b0b09c; end: 106b0b18b; -[SCLensProcessingURIServiceGroupsDataRequestHandler handleWithRequest:completion:] */

void FUN_106b0b09c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_4 == 0) goto LAB_106b0b168;
  lVar1 = param_3;
  func_0x00010c069c60(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c135e00();
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010c28f280();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0720c0();
    _objc_release(lVar3);
    _objc_release(lVar2);
    if ((int)lVar4 == 0) goto LAB_106b0b150;
    func_0x00010be1ce20(param_1);
  }
  else {
LAB_106b0b150:
    (**(code **)(param_4 + 0x10))(param_4,lVar1);
  }
  _objc_release(lVar1);
LAB_106b0b168:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b0b18c; end: 106b0b193; -[SCLensProcessingURIServiceGroupsDataRequestHandler reset] */

void FUN_106b0b18c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_disposeAll_1125bf508)
  ;
  return;
}



/* Entry: 106b0b194; end: 106b0b2b7; -[SCLensProcessingURIServiceGroupsDataRequestHandler _getAllGroupsWithRequest:completion:] */

void FUN_106b0b194(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010bfc2320(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106b0b2b8; end: 106b0b30b;  */

void FUN_106b0b2b8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be1ce40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b0b30c; end: 106b0b483; -[SCLensProcessingURIServiceGroupsDataRequestHandler _getAllGroupsWithWithFillingTopGroups:request:completion:] */

void FUN_106b0b30c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 != 0) {
    lVar1 = param_3;
    func_0x00010bf529e0();
    if (lVar1 == 0) {
      func_0x00010be951e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_5 + 0x10))(param_5,param_1);
      _objc_release(param_1);
    }
    else {
      _objc_initWeak(auStack_48,param_1);
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(param_3);
      _objc_retain(param_5);
      _objc_retain(param_4);
      func_0x00010be23680(param_1);
      _objc_release(param_4);
      _objc_release(param_5);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106b0b484; end: 106b0b51f;  */

void FUN_106b0b484(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010be15e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010be951e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106b0b520; end: 106b0b62b; -[SCLensProcessingURIServiceGroupsDataRequestHandler _getTopGroupIdsWithCompletion:] */

void FUN_106b0b520(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x18));
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0e1160();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c268560();
    _objc_retainAutoreleasedReturnValue();
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_106b0b62c;
    puStack_50 = &UNK_110859310;
    _objc_retain(param_3);
    uVar4 = uVar3;
    lStack_48 = param_3;
    func_0x00010c25ff60(uVar3,param_2,&puStack_68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    _objc_release(lStack_48);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106b0b62c; end: 106b0b637;  */

void FUN_106b0b62c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106b0b634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 106b0b638; end: 106b0b927; -[SCLensProcessingURIServiceGroupsDataRequestHandler _fillUserGroupDataListWithGroups:topGroupIds:] */

void FUN_106b0b638(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined8 *unaff_x21;
  long unaff_x22;
  undefined8 *unaff_x23;
  undefined *puVar13;
  undefined8 unaff_x24;
  undefined8 *unaff_x25;
  undefined *unaff_x26;
  undefined8 unaff_x27;
  long lVar14;
  undefined8 *unaff_x28;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 auStack_240 [128];
  long lStack_1c0;
  undefined8 *puStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  long lStack_180;
  undefined8 *puStack_178;
  undefined1 *puStack_170;
  undefined8 *puStack_168;
  undefined1 *puStack_160;
  code *pcStack_158;
  undefined1 *puStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
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
  puVar3 = param_3;
  puVar10 = param_4;
  uStack_148 = param_1;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = param_3;
  func_0x00010bf529e0();
  if (puVar1 == (undefined8 *)0x0) {
    puStack_138 = (undefined *)0x0;
  }
  else {
    puVar12 = PTR_PTR_1126d0858;
    _objc_alloc_init();
    puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
    puStack_150 = param_4;
    puStack_138 = puVar12;
    func_0x00010c225c20(PTR__OBJC_CLASS___NSSet_1126ae870,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    puStack_140 = puVar2;
    _objc_retain(param_3);
    puVar3 = &uStack_130;
    puVar10 = auStack_f0;
    puVar1 = param_3;
    func_0x00010bf52a60();
    if (puVar1 != (undefined8 *)0x0) {
      unaff_x22 = *plStack_120;
      do {
        unaff_x23 = (undefined8 *)0x0;
        do {
          if (*plStack_120 != unaff_x22) {
            _objc_enumerationMutation(param_3);
          }
          unaff_x27 = *(undefined8 *)(lStack_128 + (long)unaff_x23 * 8);
          unaff_x25 = param_3;
          func_0x00010c0e00e0(param_3,param_2,unaff_x27);
          _objc_retainAutoreleasedReturnValue();
          unaff_x26 = PTR_PTR_1126d0860;
          _objc_opt_new();
          puVar3 = unaff_x25;
          func_0x00010bfceb20(unaff_x25);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1a99c0(unaff_x26,param_2,puVar3);
          _objc_release(puVar3);
          puVar3 = unaff_x25;
          func_0x00010bfcef60(unaff_x25);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1cafa0(unaff_x26,param_2,puVar3);
          _objc_release(puVar3);
          unaff_x28 = unaff_x25;
          func_0x00010c0ecc20();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uStack_148;
          func_0x00010bee6ac0(uStack_148,param_2,unaff_x28);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d9360(unaff_x26,param_2,uVar4);
          _objc_release(uVar4);
          puVar3 = unaff_x25;
          func_0x00010c0891c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar3 != (undefined8 *)0x0) {
            puVar12 = PTR_PTR_1126b0458;
            _objc_alloc(PTR_PTR_1126b0458);
            unaff_x21 = unaff_x25;
            func_0x00010c0891c0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c009500(puVar12,param_2,unaff_x21);
            func_0x00010c1b7ec0(unaff_x26,param_2,puVar12);
            _objc_release(puVar12);
            _objc_release(unaff_x21);
          }
          puVar12 = puStack_140;
          func_0x00010bf4b900(puStack_140,param_2,unaff_x27);
          func_0x00010c1b5120(unaff_x26,param_2,puVar12);
          puVar12 = puStack_138;
          func_0x00010c292280(puStack_138);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120();
          _objc_release(puVar12);
          _objc_release(unaff_x28);
          _objc_release(unaff_x26);
          _objc_release(unaff_x25);
          unaff_x23 = (undefined8 *)((long)unaff_x23 + 1);
        } while (puVar1 != unaff_x23);
        puVar3 = &uStack_130;
        puVar10 = auStack_f0;
        puVar1 = param_3;
        func_0x00010bf52a60();
        unaff_x24 = 0;
      } while (puVar1 != (undefined8 *)0x0);
    }
    _objc_release(param_3);
    _objc_release(puStack_140);
    param_4 = puStack_150;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  puVar12 = puStack_138;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar9 = &uStack_280;
    pcStack_158 = FUN_106b0b928;
    lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puVar11 = puVar3;
    puStack_1b0 = unaff_x28;
    uStack_1a8 = unaff_x27;
    puStack_1a0 = unaff_x26;
    puStack_198 = unaff_x25;
    uStack_190 = unaff_x24;
    puStack_188 = unaff_x23;
    lStack_180 = unaff_x22;
    puStack_178 = unaff_x21;
    puStack_170 = param_4;
    puStack_168 = param_3;
    puStack_160 = &stack0xfffffffffffffff0;
    _objc_retain(puVar3);
    puVar1 = puVar3;
    func_0x00010bf529e0();
    if (puVar1 == (undefined8 *)0x0) {
      puVar12 = (undefined *)0x0;
    }
    else {
      puVar12 = PTR_PTR_1126d0820;
      _objc_alloc_init();
      lStack_278 = 0;
      uStack_280 = 0;
      uStack_268 = 0;
      plStack_270 = (long *)0x0;
      uStack_258 = 0;
      uStack_260 = 0;
      uStack_248 = 0;
      uStack_250 = 0;
      _objc_retain(puVar3);
      puVar10 = auStack_240;
      puVar1 = puVar3;
      func_0x00010bf52a60(puVar3,param_2,&uStack_280,puVar10,0x10);
      if (puVar1 != (undefined8 *)0x0) {
        lVar14 = *plStack_270;
        do {
          puVar11 = (undefined8 *)0x0;
          do {
            if (*plStack_270 != lVar14) {
              _objc_enumerationMutation(puVar3);
            }
            puVar13 = *(undefined **)(lStack_278 + (long)puVar11 * 8);
            puVar2 = PTR_PTR_1126d0828;
            _objc_opt_new();
            puVar5 = puVar13;
            func_0x00010c2923e0(puVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c21e620(puVar2,param_2,puVar5);
            _objc_release(puVar5);
            puVar5 = puVar13;
            func_0x00010c294420(puVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c21f760(puVar2,param_2,puVar5);
            _objc_release(puVar5);
            puVar5 = puVar13;
            func_0x00010bf85d80(puVar13);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c18fca0(puVar2,param_2,puVar5);
            _objc_release(puVar5);
            puVar5 = puVar13;
            func_0x00010bf1acc0();
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar5;
            func_0x00010c08fa60();
            if (puVar6 == (undefined *)0x0) {
LAB_106b0bb1c:
              _objc_release(puVar5);
            }
            else {
              puVar6 = puVar13;
              func_0x00010bf1c0a0();
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar6;
              func_0x00010c08fa60();
              _objc_release(puVar6);
              _objc_release(puVar5);
              if (puVar7 != (undefined *)0x0) {
                puVar5 = PTR_PTR_1126d0830;
                _objc_alloc_init(PTR_PTR_1126d0830);
                puVar6 = puVar13;
                func_0x00010bf1acc0(puVar13);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c16da00(puVar5,param_2,puVar6);
                _objc_release(puVar6);
                func_0x00010bf1c0a0(puVar13);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c1fbc60(puVar5,param_2,puVar13);
                _objc_release(puVar13);
                func_0x00010c171180(puVar2,param_2,puVar5);
                goto LAB_106b0bb1c;
              }
            }
            puVar5 = puVar12;
            func_0x00010c291860(puVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120();
            _objc_release(puVar5);
            _objc_release(puVar2);
            puVar11 = (undefined8 *)((long)puVar11 + 1);
          } while (puVar1 != puVar11);
          puVar10 = auStack_240;
          puVar1 = puVar3;
          puVar9 = &uStack_280;
          func_0x00010bf52a60(puVar3,param_2,&uStack_280,puVar10,0x10);
        } while (puVar1 != (undefined8 *)0x0);
      }
      _objc_release(puVar3);
      puVar11 = puVar9;
    }
    _objc_release(puVar3);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1c0) {
      ___stack_chk_fail();
      puVar12 = PTR_PTR_1126b1ce0;
      _objc_retain(puVar10);
      _objc_retain(puVar11);
      _objc_alloc(puVar12);
      puVar8 = puVar10;
      func_0x00010c28f280(puVar10);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      puVar3 = puVar11;
      func_0x00010bf63640(puVar11);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
      func_0x00010c059e80(puVar12,param_2,puVar8,200,
                          &PTR____CFConstantStringClassReference_110daafd8,
                          PTR____NSDictionary0__struct_11034ab58,puVar3);
      _objc_release(puVar3);
      _objc_release(puVar8);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar12);
  return;
}



/* Entry: 106b0b928; end: 106b0bbcf; -[SCLensProcessingURIServiceGroupsDataRequestHandler _userDataListForParticipants:] */

void FUN_106b0b928(undefined8 param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
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
  
  puVar7 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar8 = param_3;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00010bf529e0();
  if (puVar1 == (undefined1 *)0x0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    puVar9 = PTR_PTR_1126d0820;
    _objc_alloc_init();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_3);
    param_4 = auStack_f0;
    puVar1 = param_3;
    func_0x00010bf52a60(param_3,param_2,&uStack_130,param_4,0x10);
    if (puVar1 != (undefined1 *)0x0) {
      lVar11 = *plStack_120;
      do {
        puVar8 = (undefined1 *)0x0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(param_3);
          }
          puVar10 = *(undefined **)(lStack_128 + (long)puVar8 * 8);
          puVar2 = PTR_PTR_1126d0828;
          _objc_opt_new();
          puVar3 = puVar10;
          func_0x00010c2923e0(puVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c21e620(puVar2,param_2,puVar3);
          _objc_release(puVar3);
          puVar3 = puVar10;
          func_0x00010c294420(puVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c21f760(puVar2,param_2,puVar3);
          _objc_release(puVar3);
          puVar3 = puVar10;
          func_0x00010bf85d80(puVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c18fca0(puVar2,param_2,puVar3);
          _objc_release(puVar3);
          puVar3 = puVar10;
          func_0x00010bf1acc0();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          func_0x00010c08fa60();
          if (puVar4 == (undefined *)0x0) {
LAB_106b0bb1c:
            _objc_release(puVar3);
          }
          else {
            puVar4 = puVar10;
            func_0x00010bf1c0a0();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar4;
            func_0x00010c08fa60();
            _objc_release(puVar4);
            _objc_release(puVar3);
            if (puVar5 != (undefined *)0x0) {
              puVar3 = PTR_PTR_1126d0830;
              _objc_alloc_init(PTR_PTR_1126d0830);
              puVar4 = puVar10;
              func_0x00010bf1acc0(puVar10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c16da00(puVar3,param_2,puVar4);
              _objc_release(puVar4);
              func_0x00010bf1c0a0(puVar10);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c1fbc60(puVar3,param_2,puVar10);
              _objc_release(puVar10);
              func_0x00010c171180(puVar2,param_2,puVar3);
              goto LAB_106b0bb1c;
            }
          }
          puVar3 = puVar9;
          func_0x00010c291860(puVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120();
          _objc_release(puVar3);
          _objc_release(puVar2);
          puVar8 = puVar8 + 1;
        } while (puVar1 != puVar8);
        param_4 = auStack_f0;
        puVar1 = param_3;
        puVar7 = &uStack_130;
        func_0x00010bf52a60(param_3,param_2,&uStack_130,param_4,0x10);
      } while (puVar1 != (undefined1 *)0x0);
    }
    _objc_release(param_3);
    puVar8 = (undefined1 *)puVar7;
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar9 = PTR_PTR_1126b1ce0;
    _objc_retain(param_4);
    _objc_retain(puVar8);
    _objc_alloc(puVar9);
    puVar1 = param_4;
    func_0x00010c28f280(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_4);
    puVar6 = puVar8;
    func_0x00010bf63640(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    func_0x00010c059e80(puVar9,param_2,puVar1,200,&PTR____CFConstantStringClassReference_110daafd8,
                        PTR____NSDictionary0__struct_11034ab58,puVar6);
    _objc_release(puVar6);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 106b0bbd0; end: 106b0bc8f; -[SCLensProcessingURIServiceGroupsDataRequestHandler _responseForGroupDataList:request:] */

void FUN_106b0bbd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b1ce0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  uVar2 = param_4;
  func_0x00010c28f280(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar3 = param_3;
  func_0x00010bf63640(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c059e80(puVar1,param_2,uVar2,200,&PTR____CFConstantStringClassReference_110daafd8,
                      PTR____NSDictionary0__struct_11034ab58,uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106b0bc90; end: 106b0bccb; -[SCLensProcessingURIServiceGroupsDataRequestHandler .cxx_destruct] */

void FUN_106b0bc90(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b0bccc; end: 106b0bd8f; -[SCLensProcessingURIServiceRemoteHttpApiHandler initWithRequestManager:snapTokenProvider:remoteApiRPCHandler:] */

undefined1 *
FUN_106b0bccc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f4ec8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b0bd90; end: 106b0c127; -[SCLensProcessingURIServiceRemoteHttpApiHandler handleWithRequest:completion:] */

void FUN_106b0bd90(ulong param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    uVar5 = param_1;
    func_0x00010c115bc0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c28f280(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010bfe4420();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c0b5ac0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bf4b900();
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar1);
    _objc_release(uVar5);
    if ((uVar8 & 1) == 0) {
      lVar1 = param_3;
      func_0x00010c069c60(param_3);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_4 + 0x10))(param_4,lVar1);
    }
    else {
      lVar6 = param_3;
      func_0x00010c28f280();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010beec820();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar7;
      func_0x00010c0b5ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar7);
      _objc_release(lVar6);
      uVar5 = param_1;
      func_0x00010c243840();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      lVar6 = param_3;
      func_0x00010c0cc0c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010c0d3c80();
      _objc_release(lVar6);
      lVar6 = param_3;
      func_0x00010bf4dac0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(lVar7);
      _objc_release(lVar6);
      func_0x00010c1d0560(lVar7);
      lVar6 = lVar7;
      func_0x00010bf51e00(lVar7);
      if (uVar8 == 0) {
        func_0x00010c0b7740(param_1);
      }
      else {
        func_0x00010c067ec0(uVar8);
        func_0x00010bfaa3e0(param_1);
      }
      _objc_release(lVar6);
      _objc_release(lVar7);
      _objc_release(uVar8);
    }
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3;
    func_0x00010c28f280(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3;
    func_0x00010c0cc940(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_3;
    func_0x00010c0cc0c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010bf1e9c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010bfd13a0(uVar3);
    _objc_release(lVar4);
    _objc_release(lVar7);
    _objc_release(lVar6);
    _objc_release(lVar1);
    _objc_release(uVar3);
    _objc_release(param_3);
    lVar1 = param_4;
  }
  _objc_release(lVar1);
  _objc_release(lVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106b0c128; end: 106b0c233;  */

void FUN_106b0c128(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_6 == 0) {
    puVar1 = PTR_PTR_1126b1ce0;
    _objc_alloc(PTR_PTR_1126b1ce0);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c28f280(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8;
    func_0x00010c09e820(PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c059e80(puVar1);
    _objc_release(puVar3);
    _objc_release(uVar2);
    lVar4 = *(long *)(param_1 + 0x28);
    pcVar5 = *(code **)(lVar4 + 0x10);
  }
  else {
    puVar1 = *(undefined **)(param_1 + 0x20);
    lVar4 = *(long *)(param_1 + 0x28);
    func_0x00010c069560(puVar1);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = *(code **)(lVar4 + 0x10);
  }
  (*pcVar5)(lVar4,puVar1);
  _objc_release(puVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b0c234; end: 106b0c237; -[SCLensProcessingURIServiceRemoteHttpApiHandler reset] */

void FUN_106b0c234(void)

{
  return;
}



/* Entry: 106b0c238; end: 106b0c453; -[SCLensProcessingURIServiceRemoteHttpApiHandler fetchSnapTokenAndMakeRequest:headers:accessType:completion:] */

void FUN_106b0c238(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar2 = PTR_PTR_1126ae790;
  lVar1 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcd0e0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(lVar1);
  _objc_initWeak(auStack_68,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_6);
  _objc_retain(param_6);
  _objc_retain(param_3);
  func_0x00010bfa48e0(uVar4);
  _objc_release(uVar4);
  _objc_release(param_3);
  _objc_release(param_6);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar3);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106b0c454; end: 106b0c547;  */

void FUN_106b0c454(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0d3c80(uVar2);
    func_0x00010c220220();
    func_0x00010c0b7740(lVar1);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b0c548; end: 106b0c9e7; -[SCLensProcessingURIServiceRemoteHttpApiHandler makeRequest:headers:completion:] */

void FUN_106b0c548(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar8 = PTR_PTR_1126b4960;
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c28f280(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010bf1e9c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c08fa60();
  if (lVar3 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_3;
    func_0x00010bf1e9c0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar4 = lVar13;
  func_0x00010011df08();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b19f8;
  func_0x00010bf28e60();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126b19f8;
  puStack_78 = puVar5;
  func_0x00010c08fb40();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_70 = puVar6;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c135e00();
  func_0x00010bf58760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(lVar4);
  if (lVar3 != 0) {
    _objc_release(lVar13);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar5 = PTR_PTR_1126ae790;
  lVar1 = param_1;
  _objc_opt_class(param_1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfcd0e0();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(lVar1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained();
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  uStack_98 = 0x106b0c830;
  puStack_90 = &UNK_110961108;
  lStack_88 = param_3;
  uStack_80 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_3);
  ppuVar12 = &puStack_a8;
  puVar5 = puVar8;
  puVar7 = puVar6;
  func_0x00010c25f5e0(param_1);
  _objc_release(param_1);
  _objc_release(uStack_80);
  _objc_release(lStack_88);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(puVar6);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_2);
  _objc_retain(puVar5);
  _objc_retain(puVar7);
  _objc_retain(ppuVar12);
  _objc_retain(puVar5);
  if (puVar5 == (undefined *)0x0) {
    if (ppuVar12 == (undefined **)0x0) goto LAB_106b0c9a8;
    uVar9 = *(undefined8 *)(puVar8 + 0x20);
    lVar1 = *(long *)(puVar8 + 0x28);
    func_0x00010c252ee0(0);
    ppuVar11 = ppuVar12;
    func_0x00010c09e4e0(ppuVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf98ee0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,uVar9);
    _objc_release(uVar9);
  }
  else {
    ppuVar11 = (undefined **)PTR_PTR_1126b1ce0;
    _objc_alloc(PTR_PTR_1126b1ce0);
    uVar9 = *(undefined8 *)(puVar8 + 0x20);
    func_0x00010c28f280(uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c252ee0(puVar5);
    puVar6 = PTR__OBJC_CLASS___NSHTTPURLResponse_1126bd0d8;
    func_0x00010c252ee0(puVar5);
    func_0x00010c09e820(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar5;
    func_0x00010bf001c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c059e80(ppuVar11);
    _objc_release(puVar10);
    _objc_release(puVar6);
    _objc_release(uVar9);
    (**(code **)(*(long *)(puVar8 + 0x28) + 0x10))(*(long *)(puVar8 + 0x28),ppuVar11);
  }
  _objc_release(ppuVar11);
LAB_106b0c9a8:
  _objc_release(puVar5);
  _objc_release(ppuVar12);
  _objc_release(puVar7);
  _objc_release(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b0c9e8; end: 106b0ca3b; -[SCLensProcessingURIServiceRemoteHttpApiHandler prodHostnameAllowlist] */

void FUN_106b0c9e8(void)

{
  undefined8 uVar1;
  
  if (lRam00000001136c66c0 != -1) {
    func_0x00010002a2fc(0x1136c66c0,&PTR___NSConcreteGlobalBlock_110961138);
  }
  uVar1 = uRam00000001136c66b8;
  _objc_retain(uRam00000001136c66b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106b0ca3c; end: 106b0ca87;  */

void FUN_106b0ca3c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  _objc_alloc();
  func_0x00010c0309a0();
  uVar1 = puRam00000001136c66b8;
  puRam00000001136c66b8 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b0ca88; end: 106b0cacf; -[SCLensProcessingURIServiceRemoteHttpApiHandler snapTokenAccessTypesByUrl] */

void FUN_106b0ca88(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    *(undefined ***)(param_1 + 0x20) = &PTR__OBJC_CLASS___NSConstantDictionary_111174bd0;
    _objc_release(0);
    lVar1 = *(long *)(param_1 + 0x20);
  }
  _objc_retain(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106b0cad0; end: 106b0cb13; -[SCLensProcessingURIServiceRemoteHttpApiHandler .cxx_destruct] */

void FUN_106b0cad0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106b0cb14; end: 106b0cbff; -[SCLensProcessingURIServiceSnapActionHandler initWithLensPreviewAction:] */

undefined8 * FUN_106b0cb14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f4ed0;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_initWeak(auStack_48,puVar1);
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010c297260(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106b0cc00; end: 106b0cc4f;  */

void FUN_106b0cc00(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return;
  }
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1bc660();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b0cc50; end: 106b0cd33; -[SCLensProcessingURIServiceSnapActionHandler handleWithRequest:completion:] */

void FUN_106b0cc50(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c069c60(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c28f280();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf32ee0();
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (lVar4 == 0) {
    func_0x00010bfd2660(param_1);
  }
  else {
    (**(code **)(param_4 + 0x10))(param_4,lVar1);
  }
  _objc_release(param_4);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b0cd34; end: 106b0cd37; -[SCLensProcessingURIServiceSnapActionHandler reset] */

void FUN_106b0cd34(void)

{
  return;
}



/* Entry: 106b0cd38; end: 106b0cf0f; -[SCLensProcessingURIServiceSnapActionHandler handleSetRecipientsRequest:defaultResponse:completion:] */

/* WARNING: Removing unreachable block (ram,0x000106b0cddc) */

void FUN_106b0cd38(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c135e00();
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  if (lVar1 == 1) {
    lVar1 = param_3;
    func_0x00010bf1e9c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    puVar3 = puVar2;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010bf529e0();
    if (puVar4 == (undefined *)0x0) {
      (**(code **)(param_5 + 0x10))(param_5,param_4);
    }
    else {
      func_0x00010c096000(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19ffa0();
      _objc_release(param_1);
      puVar4 = PTR_PTR_1126b1ce0;
      _objc_alloc(PTR_PTR_1126b1ce0);
      lVar1 = param_3;
      func_0x00010c28f280(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c059e80(puVar4);
      _objc_release(lVar1);
      (**(code **)(param_5 + 0x10))(param_5,puVar4);
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  else {
    (**(code **)(param_5 + 0x10))(param_5,param_4);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106b0cf10; end: 106b0cf27; -[SCLensProcessingURIServiceSnapActionHandler lensPreviewAction] */

void FUN_106b0cf10(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106b0cf28; end: 106b0cf33; -[SCLensProcessingURIServiceSnapActionHandler setLensPreviewAction:] */

void FUN_106b0cf28(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 106b0cf34; end: 106b0cf3b; -[SCLensProcessingURIServiceSnapActionHandler .cxx_destruct] */

void FUN_106b0cf34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106b0cf3c; end: 106b0d0cb; -[SCLensProcessingURIServiceSnapchatHandler handleWithRequest:completion:] */

void FUN_106b0cf3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSURLComponents_1126ae5c8;
  _objc_alloc();
  uVar2 = param_3;
  func_0x00010c28f280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c057bc0(puVar1,param_2,uVar2,0);
  _objc_release(uVar2);
  puVar3 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x00010c0b6660(PTR__OBJC_CLASS___NSBundle_1126aea78);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010bfedc40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c296f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  puVar3 = puVar1;
  func_0x00010c1f6900(puVar1,param_2,puVar5);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106b0d0cc;
  puStack_60 = &UNK_11084a9e8;
  puStack_58 = puVar1;
  uStack_50 = param_3;
  uStack_48 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(puVar1);
  func_0x00010c0f7fc0(puVar3,param_2,&puStack_78);
  _objc_release(puVar3);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(puStack_58);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  _objc_release(puVar5);
  return;
}



/* Entry: 106b0d0cc; end: 106b0d257;  */

void FUN_106b0d0cc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bdc2b80(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x106b0d1a8;
  puStack_48 = &UNK_110858070;
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar4);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar4;
  _objc_retain(uVar3);
  uStack_38 = uVar3;
  func_0x00010c0e9b80(puVar1,param_2,uVar2,PTR____NSDictionary0__struct_11034ab58,&puStack_60);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  return;
}



/* Entry: 106b0d258; end: 106b0d25b; -[SCLensProcessingURIServiceSnapchatHandler reset] */

void FUN_106b0d258(void)

{
  return;
}



/* Entry: 106b0d25c; end: 106b0d957; -[SCLensURIKeyboardAccessoryViewProvider initWithStyle:] */

undefined8 * FUN_106b0d25c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  undefined **unaff_x21;
  undefined8 *puVar23;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_b8 = PTR_PTR_1126f4ed8;
  puVar1 = &uStack_c0;
  uStack_c0 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  puVar18 = (undefined *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    if (param_3 == 0) {
      puVar1[3] = 0;
      puVar18 = PTR_PTR_1126d0868;
      _objc_alloc_init();
      _objc_retain();
      uVar20 = puVar1[4];
      puVar1[4] = puVar18;
      _objc_release(uVar20);
      puVar19 = puVar18;
      func_0x00010c26ca80();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = puVar1[1];
      puVar1[1] = puVar19;
      _objc_release(uVar20);
      puVar19 = puVar18;
      func_0x00010c106b80();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = puVar1[2];
      puVar1[2] = puVar19;
      _objc_release(uVar20);
      _objc_initWeak(auStack_c8,puVar1);
      puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_e8 = 0xc2000000;
      pcStack_e0 = FUN_106b0d958;
      puStack_d8 = &UNK_1108434b0;
      unaff_x21 = &puStack_f0;
      _objc_copyWeak(auStack_d0,auStack_c8);
      func_0x00010c260000(puVar18);
      _objc_destroyWeak(auStack_d0);
      _objc_destroyWeak(auStack_c8);
    }
    else {
      puVar18 = PTR_PTR_1126b0ac8;
      _objc_alloc_init();
      puVar23 = puVar1 + 1;
      uVar20 = *puVar23;
      *puVar23 = puVar18;
      _objc_release(uVar20);
      func_0x00010c219b60(*puVar23);
      puVar18 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc_init();
      puVar22 = puVar1 + 4;
      uVar20 = *puVar22;
      *puVar22 = puVar18;
      _objc_release(uVar20);
      func_0x00010c219b60(*puVar22);
      puVar18 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*puVar22);
      _objc_release(puVar18);
      func_0x00010befbb60(*puVar22);
      uVar2 = *puVar22;
      uVar20 = uVar2;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *puVar23;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar20;
      func_0x00010bf493c0(0xc022000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *puVar22;
      uStack_90 = uVar17;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *puVar23;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar4;
      func_0x00010bf493c0(0x4022000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = *puVar22;
      uStack_88 = uVar21;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *puVar23;
      func_0x00010c274200(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar6;
      func_0x00010bf493c0(0xc022000000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *puVar22;
      uStack_80 = uVar8;
      func_0x00010bf1ff80();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *puVar23;
      func_0x00010bf1ff80(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar11 = uVar9;
      func_0x00010bf493c0(0x4022000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
      uStack_78 = uVar11;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef79e0(uVar2);
      _objc_release(puVar18);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar21);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar17);
      _objc_release(uVar3);
      _objc_release(uVar20);
      puVar18 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(*puVar23);
      _objc_release(puVar18);
      uVar20 = *puVar23;
      func_0x00010c08c0e0(uVar20);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1842e0(0x4033800000000000);
      _objc_release(uVar20);
      func_0x00010c2131e0(0x4020000000000000,0x402e000000000000,0x4020000000000000,
                          0x402e000000000000,*puVar23);
      func_0x00010c2026e0(*puVar23);
      func_0x00010c1f7b20(*puVar23);
      puVar18 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_alloc_init();
      puVar19 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16e440(puVar18);
      _objc_release(puVar19);
      func_0x00010c219b60(puVar18);
      func_0x00010befbb60(*puVar22);
      uVar3 = *puVar22;
      uVar20 = uVar3;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar18;
      func_0x00010c08de00();
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar20;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar11 = *puVar22;
      uStack_b0 = uVar17;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = puVar18;
      func_0x00010c2793a0();
      _objc_retainAutoreleasedReturnValue();
      uVar21 = uVar11;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *puVar22;
      uStack_a8 = uVar21;
      func_0x00010c274200();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar18;
      func_0x00010c274200(puVar18);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar2;
      func_0x00010bf493a0();
      _objc_retainAutoreleasedReturnValue();
      puVar14 = puVar18;
      uStack_a0 = uVar8;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar14;
      func_0x00010bf49420(0x3ff0000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_98 = puVar15;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef79e0(uVar3);
      _objc_release(puVar16);
      _objc_release(puVar15);
      _objc_release(puVar14);
      _objc_release(uVar8);
      _objc_release(puVar13);
      _objc_release(uVar2);
      _objc_release(uVar21);
      _objc_release(puVar12);
      _objc_release(uVar11);
      _objc_release(uVar17);
      _objc_release(puVar19);
      _objc_release(uVar20);
      uVar17 = *puVar23;
      func_0x00010bfe0660();
      _objc_retainAutoreleasedReturnValue();
      uVar20 = uVar17;
      func_0x00010bf49420(0x4043800000000000);
      _objc_retainAutoreleasedReturnValue();
      uVar21 = puVar1[2];
      puVar1[2] = uVar20;
      _objc_release(uVar21);
      _objc_release(uVar17);
      func_0x00010bef7980(*puVar23);
      unaff_x21 = (undefined **)PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
      func_0x00010bf68fa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa240();
      _objc_release(unaff_x21);
    }
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x21 + 4);
  _objc_destroyWeak(auStack_c8);
  __Unwind_Resume();
  puVar1 = (undefined8 *)(puVar18 + 0x20);
  _objc_loadWeakRetained();
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c26ca40(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return puVar1;
}



/* Entry: 106b0d958; end: 106b0d98f;  */

void FUN_106b0d958(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c26ca40(param_1,param_2,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b0d990; end: 106b0d99b; -[SCLensURIKeyboardAccessoryViewProvider maximumHeight] */

undefined8 FUN_106b0d990(void)

{
  return 0x4053800000000000;
}



/* Entry: 106b0d99c; end: 106b0daaf; -[SCLensURIKeyboardAccessoryViewProvider textUpdated:] */

void FUN_106b0d99c(undefined8 param_1,double param_2,double param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 uVar7;
  
  lVar1 = param_4;
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_4;
  func_0x00010c26ca80(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb68e0();
  lVar3 = param_4;
  func_0x00010c26ca80(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26ba40();
  lVar4 = param_4;
  dVar6 = param_2;
  func_0x00010c26ca80(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26ba40();
  uVar7 = 0x7fefffffffffffff;
  func_0x00010c23d5a0(param_3 - (param_2 + dVar6),lVar1);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar5 = 0x4055800000000000;
  if (*(long *)(param_4 + 0x18) != 0) {
    uVar5 = 0x404e000000000000;
  }
  dVar6 = (double)NEON_fminnm(uVar7,uVar5);
  if (dVar6 <= 39.0) {
    dVar6 = 39.0;
  }
  func_0x00010c181140(dVar6,*(undefined8 *)(param_4 + 0x10));
  func_0x00010c1f7b20(*(undefined8 *)(param_4 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_4 + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 106b0dab0; end: 106b0dad7; -[SCLensURIKeyboardAccessoryViewProvider textView] */

void FUN_106b0dab0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106b0dad8; end: 106b0dadf; -[SCLensURIKeyboardAccessoryViewProvider placeholderText] */

void FUN_106b0dad8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0fd730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_placeholder_11261cfe8);
  return;
}



/* Entry: 106b0dae0; end: 106b0dae7; -[SCLensURIKeyboardAccessoryViewProvider setPlaceholderText:] */

void FUN_106b0dae0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1dc9d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setPlaceholder__112654c98);
  return;
}



/* Entry: 106b0dae8; end: 106b0daef; -[SCLensURIKeyboardAccessoryViewProvider accessoryView] */

undefined8 FUN_106b0dae8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106b0daf0; end: 106b0db2b; -[SCLensURIKeyboardAccessoryViewProvider .cxx_destruct] */

void FUN_106b0daf0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106b0db2c; end: 106b0dd5f; -[SCLensProcessingURIServiceTextInputHandler initWithParentView:appliedEffectsObservable:cameraVisibilityObservable:circumstanceEngine:] */

undefined8 *
FUN_106b0db2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_78 = PTR_PTR_1126f4ee0;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_88,puVar1);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_106b0dd60;
    puStack_98 = &UNK_110842c58;
    _objc_copyWeak(auStack_90,auStack_88);
    uVar2 = param_4;
    func_0x00010c25ff60(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar2);
    uVar2 = param_5;
    func_0x00010c2b2440(param_5);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_b8,auStack_88);
    uVar4 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106b0dd60; end: 106b0df27;  */

void FUN_106b0dd60(long param_1,undefined *param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar7 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_2;
  _objc_retain(param_2);
  puVar1 = (undefined *)(param_1 + 0x20);
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puVar2;
  func_0x00010c094540();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar1;
  func_0x00010c08fa60();
  _objc_release(puVar1);
  if (puVar9 != (undefined *)0x0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    _objc_retain(param_2);
    puVar1 = param_2;
    func_0x00010bf52a60();
    if (puVar1 != (undefined *)0x0) {
      lVar8 = *plStack_120;
      do {
        puVar9 = (undefined *)0x0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(param_2);
          }
          uVar3 = *(undefined8 *)(lStack_128 + (long)puVar9 * 8);
          func_0x00010c094540();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar2;
          func_0x00010c094540();
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar3;
          puVar7 = (undefined8 *)puVar4;
          func_0x00010c0720c0();
          _objc_release(puVar4);
          _objc_release(uVar3);
          if ((int)uVar5 != 0) {
            param_1 = param_1 + 0x20;
            _objc_loadWeakRetained();
            func_0x00010c137fe0();
            _objc_release(param_1);
            goto LAB_106b0ded4;
          }
          puVar9 = puVar9 + 1;
        } while (puVar1 != puVar9);
        puVar1 = param_2;
        puVar7 = &uStack_130;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined *)0x0);
    }
LAB_106b0ded4:
    _objc_release(param_2);
    param_3 = (undefined *)puVar7;
  }
  _objc_release(puVar2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
  }
  puVar9 = puVar6;
  _objc_retain(puVar1);
  _objc_retain(param_3);
  _objc_retain(puVar6);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(puVar6);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    _objc_retain(puVar9);
    puVar1 = puVar9;
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010bf1f3c0();
    if ((int)puVar2 == 0) {
      puVar2 = param_3 + 0x20;
      _objc_loadWeakRetained(puVar2);
      func_0x00010bfe2160();
    }
    else {
      puVar2 = puVar9;
      func_0x00010c0dfd40(puVar9);
      _objc_retainAutoreleasedReturnValue();
      param_3 = param_3 + 0x20;
      _objc_loadWeakRetained(param_3);
      func_0x00010be95660();
      _objc_release(param_3);
    }
    _objc_release(puVar2);
    _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar9);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106b0df28; end: 106b0e09b;  */

void FUN_106b0df28(undefined8 param_1,undefined *param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = PTR____NSArray0__struct_11034ab48;
  if (param_3 != (undefined *)0x0) {
    puVar2 = param_3;
  }
  puVar3 = param_2;
  _objc_retain(puVar2);
  _objc_retain(param_3);
  _objc_retain(param_2);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(param_2);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar3);
  puVar2 = puVar3;
  func_0x00010c0dfd40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010bf1f3c0();
  if ((int)puVar1 == 0) {
    puVar1 = param_3 + 0x20;
    _objc_loadWeakRetained(puVar1);
    func_0x00010bfe2160();
  }
  else {
    puVar1 = puVar3;
    func_0x00010c0dfd40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    param_3 = param_3 + 0x20;
    _objc_loadWeakRetained(param_3);
    func_0x00010be95660();
    _objc_release(param_3);
  }
  _objc_release(puVar1);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 106b0e09c; end: 106b0e0cb; -[SCLensProcessingURIServiceTextInputHandler resetTextInput] */

void FUN_106b0e09c(undefined8 param_1)

{
  func_0x00010c26c120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c137fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b0e0cc; end: 106b0e113; -[SCLensProcessingURIServiceTextInputHandler hideKeyboard] */

void FUN_106b0e0cc(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c26c120();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c26ca80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13a0e0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106b0e114; end: 106b0e15f; -[SCLensProcessingURIServiceTextInputHandler turnOff] */

void FUN_106b0e114(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010c26c120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6f3e0();
  _objc_release(lVar1);
  func_0x00010c213480(param_1,param_2,0);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106b0e160; end: 106b0e23f; -[SCLensProcessingURIServiceTextInputHandler pointInside:view:] */

undefined8
FUN_106b0e160(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_3 + 0x10);
  func_0x00010beed360();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c074c20();
  _objc_release(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_3 + 0x10);
    func_0x00010beed360(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf51200(param_1,param_2);
    _objc_release(uVar4);
    uVar3 = *(undefined8 *)(param_3 + 0x10);
    func_0x00010beed360(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf20c00();
    _CGRectContainsPoint();
    _objc_release(uVar3);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(param_5);
  return uVar4;
}



/* Entry: 106b0e240; end: 106b0e323; -[SCLensProcessingURIServiceTextInputHandler handleWithRequest:completion:] */

void FUN_106b0e240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_106b0e324;
  puStack_58 = &UNK_110848378;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  _objc_retain(param_4);
  uStack_48 = param_4;
  func_0x000100162d98("APPSTORE",&puStack_70);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106b0e324; end: 106b0e62f;  */

void FUN_106b0e324(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 == 0) goto LAB_106b0e5dc;
  puVar2 = PTR_PTR_1126d0870;
  _objc_alloc(PTR_PTR_1126d0870);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c28f280(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfe5ec0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c094540(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cc940(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dac0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0cc0c0(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1e9c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c059e60(puVar2);
  func_0x00010c1ebac0(lVar1);
  _objc_release(puVar2);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  lVar10 = lVar1;
  func_0x00010c26c120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar10 == 0) {
    lVar10 = *(long *)(lVar1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    if (lVar10 != 0) {
      puVar2 = PTR_PTR_1126d0878;
      _objc_alloc();
      func_0x00010be3c1a0(lVar1);
      func_0x00010c04ea80();
      uVar3 = *(undefined8 *)(lVar1 + 0x10);
      *(undefined **)(lVar1 + 0x10) = puVar2;
      _objc_release(uVar3);
      puVar2 = PTR_PTR_1126d0880;
      _objc_alloc(PTR_PTR_1126d0880);
      func_0x00010c033e80();
      func_0x00010c213480(lVar1);
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
      _objc_retain(lVar10);
      func_0x00010c0f9680(puVar2);
      _objc_release(lVar10);
      _objc_release(lVar10);
      goto LAB_106b0e55c;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar10 = *(long *)(param_1 + 0x28);
    func_0x00010c069c60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar10 + 0x10))(lVar10,uVar3);
  }
  else {
LAB_106b0e55c:
    lVar10 = lVar1;
    func_0x00010c26c120(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar1;
    func_0x00010c134680(lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    func_0x00010bfd2e80(lVar10);
    _objc_release(lVar11);
    _objc_release(lVar10);
  }
  _objc_release(uVar3);
LAB_106b0e5dc:
  _objc_release(lVar1);
  return;
}



/* Entry: 106b0e630; end: 106b0e637;  */

void FUN_106b0e630(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c08cdd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_layoutIfNeeded_112600d80);
  return;
}



/* Entry: 106b0e638; end: 106b0e747;  */

void FUN_106b0e638(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_PTR_1126b1ce0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c28f280(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13b780(param_2);
  uVar3 = param_2;
  func_0x00010bf6e340(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010c0cc0c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010bf63640(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c059e80(puVar1);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar6 = *(long *)(param_1 + 0x20);
  if (lVar6 != 0) {
    (**(code **)(lVar6 + 0x10))(lVar6,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106b0e748; end: 106b0e79f; -[SCLensProcessingURIServiceTextInputHandler reset] */

void FUN_106b0e748(undefined8 param_1)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106b0e7a0;
  puStack_20 = &UNK_110842e18;
  uStack_18 = param_1;
  func_0x000100162d98("APPSTORE",&puStack_38);
  return;
}



/* Entry: 106b0e7a0; end: 106b0e7cf;  */

void FUN_106b0e7a0(long param_1)

{
  func_0x00010c139880(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bfe2160(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010c27d550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_turnOff_11267cf78);
  return;
}



/* Entry: 106b0e7d0; end: 106b0e98b; -[SCLensProcessingURIServiceTextInputHandler _restoreKeyboardWithAppliedEffects:] */

void FUN_106b0e7d0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c094540(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar2 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(param_3);
        }
        uVar3 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        func_0x00010c094540();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        if ((int)uVar4 != 0) {
          lVar5 = param_1;
          func_0x00010c26c120(param_1);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010c26ca80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf179a0();
          _objc_release(lVar6);
          _objc_release(lVar5);
          lVar5 = param_1;
          func_0x00010c26c120(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfd2e80();
          _objc_release(lVar5);
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  return;
}



/* Entry: 106b0e98c; end: 106b0e98f;  */

void FUN_106b0e98c(void)

{
  return;
}



/* Entry: 106b0e990; end: 106b0e9bb; -[SCLensProcessingURIServiceTextInputHandler _roundedInputBarStyleAllowed] */

uint FUN_106b0e990(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf1f440(uVar1,param_2,&PTR____CFConstantStringClassReference_110e72ad8,0,0);
  return (uint)uVar1 ^ 1;
}



/* Entry: 106b0e9bc; end: 106b0eb13; -[SCLensProcessingURIServiceTextInputHandler _inputFieldStyle] */

uint FUN_106b0e9bc(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  lVar2 = param_1;
  func_0x00010be97900();
  if ((int)lVar2 == 0) {
    return 1;
  }
  iVar1 = 2;
  func_0x000100029b9c(2,0x1a,0,0);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (iVar1 != 0) {
    return 0;
  }
  lVar2 = param_1;
  func_0x00010befecc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befed80();
  func_0x00010c0df7c0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar2);
  puVar3 = puVar4;
  func_0x00010c08fa60();
  if (puVar3 != (undefined *)0x0) {
    lVar2 = param_1;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar2;
    func_0x00010c094540();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010c08fa60();
    _objc_release(lVar5);
    _objc_release(lVar2);
    if (lVar6 != 0) {
      func_0x00010c134680(param_1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010c094540();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar2;
      func_0x00010c0720c0();
      _objc_release(lVar2);
      _objc_release(param_1);
      uVar7 = (uint)lVar5 ^ 1;
      goto LAB_106b0eaf4;
    }
  }
  uVar7 = 1;
LAB_106b0eaf4:
  _objc_release(puVar4);
  return uVar7;
}



/* Entry: 106b0eb14; end: 106b0ebfb; -[SCLensProcessingURIServiceTextInputHandler aiModeConfig] */

/* WARNING: Removing unreachable block (ram,0x000106b0eba4) */

void FUN_106b0eb14(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c1195e0(uVar1,param_2,&PTR____CFConstantStringClassReference_110df5bd8,0,0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c296d80();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    puVar3 = PTR_PTR_1126bcd00;
    _objc_alloc();
    func_0x00010c008360();
    _objc_retain(0);
    _objc_retain(puVar3);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    *(undefined **)(param_1 + 0x28) = puVar3;
    _objc_release(uVar1);
    _objc_release(puVar3);
    _objc_release(0);
    _objc_release(uVar2);
    lVar4 = *(long *)(param_1 + 0x28);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 106b0ebfc; end: 106b0ec03; -[SCLensProcessingURIServiceTextInputHandler textInputController] */

undefined8 FUN_106b0ebfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106b0ec04; end: 106b0ec33; -[SCLensProcessingURIServiceTextInputHandler setTextInputController:] */

void FUN_106b0ec04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b0ec34; end: 106b0ec3b; -[SCLensProcessingURIServiceTextInputHandler request] */

undefined8 FUN_106b0ec34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106b0ec3c; end: 106b0ec6b; -[SCLensProcessingURIServiceTextInputHandler setRequest:] */

void FUN_106b0ec3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b0ec6c; end: 106b0ecd7; -[SCLensProcessingURIServiceTextInputHandler .cxx_destruct] */

void FUN_106b0ec6c(long param_1)

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



/* Entry: 106b0ecd8; end: 106b0ed43; -[SCLensProcessingURIServiceUniverseHandler initWithRequestManager:] */

undefined1 * FUN_106b0ecd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f4ee8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b0ed44; end: 106b0ed9b; -[SCLensProcessingURIServiceUniverseHandler handleWithRequest:completion:] */

void FUN_106b0ed44(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_4);
  func_0x00010c069c60(param_3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_4 + 0x10))(param_4,param_3);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b0ed9c; end: 106b0ed9f; -[SCLensProcessingURIServiceUniverseHandler reset] */

void FUN_106b0ed9c(void)

{
  return;
}



/* Entry: 106b0eda0; end: 106b0eda7; -[SCLensProcessingURIServiceUniverseHandler .cxx_destruct] */

void FUN_106b0eda0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 106b0eda8; end: 106b0ee4b; -[SCLensProcessingURIServiceVideoTransformationHandler initWithGRPCService:performer:] */

undefined1 *
FUN_106b0eda8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f4ef0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b0ee4c; end: 106b0ef87; -[SCLensProcessingURIServiceVideoTransformationHandler handleWithRequest:completion:] */

void FUN_106b0ee4c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c28f280();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010beec820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bfda7c0(lVar2,param_2,&PTR____CFConstantStringClassReference_110e72b38);
  if ((int)lVar1 != 0) {
    func_0x00010bf0ae40(*(undefined8 *)(param_1 + 8));
    lVar1 = param_3;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    func_0x00010bfda7c0(lVar2,param_2,&PTR____CFConstantStringClassReference_110e72b58);
    if ((int)lVar1 == 0) {
      lVar1 = lVar3;
      func_0x00010c08fa60();
      if (lVar1 == 0) {
        func_0x00010be6d6e0(param_1,param_2,param_3,param_4);
      }
      else {
        func_0x00010be9fe80(param_1,param_2,param_3,lVar3,param_4);
      }
    }
    else {
      func_0x00010bddade0(param_1,param_2,param_3,lVar3,param_4);
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b0ef88; end: 106b0f06f; -[SCLensProcessingURIServiceVideoTransformationHandler _cancelStreamForRequest:onStream:completion:] */

void FUN_106b0ef88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(long *)(param_1 + 0x20) != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
    func_0x00010c0720c0();
    if (iVar1 != 0) {
      func_0x00010bf3de00(*(undefined8 *)(param_1 + 0x20));
      func_0x00010bde10a0(param_1);
    }
  }
  uVar2 = param_3;
  func_0x00010c28f280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be95200(param_1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_5 + 0x10))(param_5,param_1);
  _objc_release(param_1);
  _objc_release(uVar2);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b0f070; end: 106b0f0c7; -[SCLensProcessingURIServiceVideoTransformationHandler reset] */

void FUN_106b0f070(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_106b0f0c8;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 8),param_2,&puStack_38);
  return;
}



/* Entry: 106b0f0c8; end: 106b0f0f3;  */

void FUN_106b0f0c8(long param_1)

{
  func_0x00010bf3de00(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bde10b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__clearStream_112555dc8);
  return;
}



/* Entry: 106b0f0f4; end: 106b0f47b; -[SCLensProcessingURIServiceVideoTransformationHandler _openStreamForRequest:completion:] */

void FUN_106b0f0f4(undefined **param_1,undefined8 param_2,undefined **param_3,undefined *param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  ppuVar1 = param_3;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = ppuVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar2;
  func_0x00010c08fa60();
  if (ppuVar3 == (undefined **)0x0) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110e72b78;
  }
  else {
    ppuVar6 = param_3;
    func_0x00010c0cc0c0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar6);
  }
  _objc_release(ppuVar2);
  _objc_release(ppuVar1);
  func_0x00010bf3de00(param_1[4]);
  ppuVar1 = param_3;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1[3];
  param_1[3] = (undefined *)ppuVar1;
  _objc_release(puVar8);
  ppuVar1 = param_3;
  func_0x00010c28f280();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1[6];
  param_1[6] = (undefined *)ppuVar1;
  _objc_release(puVar8);
  puVar8 = param_4;
  _objc_retainBlock();
  puVar9 = param_1[5];
  param_1[5] = puVar8;
  _objc_release(puVar9);
  puVar8 = PTR_PTR_1126ae748;
  func_0x00010bf24820(PTR_PTR_1126ae748);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9140(puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar9);
  puVar9 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  ppuVar1 = param_3;
  func_0x00010c0cc0c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(puVar9);
  func_0x00010bf97ce0(ppuVar1);
  _objc_release(ppuVar1);
  puVar4 = puVar9;
  func_0x00010bf529e0();
  if (puVar4 != (undefined *)0x0) {
    func_0x00010bef9140(puVar8);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar5 = param_1[2];
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar5;
  func_0x00010bf19be0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (puVar4 == (undefined *)0x0) {
    func_0x00010bde10a0(param_1);
    ppuVar1 = param_3;
    func_0x00010c28f280();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar1;
    func_0x00010be95200();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = param_1;
    (**(code **)(param_4 + 0x10))(param_4);
    _objc_release(param_1);
  }
  else {
    _objc_retain(puVar4);
    puVar5 = param_1[4];
    param_1[4] = puVar4;
    _objc_release(puVar5);
    ppuVar6 = (undefined **)param_1[6];
    func_0x00010be95200();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = param_1;
    (**(code **)(param_4 + 0x10))(param_4);
    ppuVar1 = param_1;
  }
  _objc_release(ppuVar1);
  _objc_release(puVar4);
  _objc_release(puVar9);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(ppuVar3);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar2);
  _objc_retain(ppuVar6);
  ppuVar1 = ppuVar2;
  func_0x00010bfda7c0();
  if ((((ulong)ppuVar1 & 1) == 0) &&
     (ppuVar1 = ppuVar6, func_0x00010c08fa60(), ppuVar1 != (undefined **)0x0)) {
    puVar8 = param_3[4];
    ppuVar1 = ppuVar2;
    func_0x00010c0b5ac0(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar8);
    _objc_release(ppuVar1);
  }
  _objc_release(ppuVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar2);
  return;
}



/* Entry: 106b0f47c; end: 106b0f513;  */

void FUN_106b0f47c(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = param_2;
  func_0x00010bfda7c0();
  if (((uVar1 & 1) == 0) && (lVar2 = param_3, func_0x00010c08fa60(), lVar2 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    uVar1 = param_2;
    func_0x00010c0b5ac0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106b0f514; end: 106b0f713; -[SCLensProcessingURIServiceVideoTransformationHandler _sendRequest:onStream:completion:] */

void FUN_106b0f514(undefined *param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(long *)(param_1 + 0x20) == 0) {
LAB_106b0f668:
    puVar5 = param_3;
    func_0x00010c28f280(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x18);
    func_0x00010c0720c0();
    if ((uVar1 & 1) == 0) goto LAB_106b0f668;
    puVar2 = param_3;
    func_0x00010bf1e9c0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
    if (puVar2 != (undefined *)0x0) {
      puVar3 = param_3;
      func_0x00010bf1e9c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      puVar4 = param_3;
      func_0x00010bf1e9c0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      func_0x00010bf64a00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      if (puVar5 != (undefined *)0x0) {
        func_0x00010c15b400(*(undefined8 *)(param_1 + 0x20));
        puVar2 = param_3;
        func_0x00010c28f280(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010be95200(param_1);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(param_5 + 0x10))(param_5,param_1);
        _objc_release(param_1);
        param_1 = puVar2;
        goto LAB_106b0f6d4;
      }
    }
    puVar5 = param_3;
    func_0x00010c28f280(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010be95200(param_1);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_5 + 0x10))(param_5,param_1);
LAB_106b0f6d4:
  _objc_release(param_1);
  _objc_release(puVar5);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b0f714; end: 106b0f8a7; -[SCLensProcessingURIServiceVideoTransformationHandler onEvent:response:status:] */

void FUN_106b0f714(long param_1,undefined8 param_2,int param_3,long param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 != 0) {
    if (param_5 == 0) {
      if (param_4 != 0) {
        lVar3 = param_1;
        func_0x00010be95200(param_1);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar4 + 0x10))(lVar4,lVar3);
        _objc_release(lVar3);
      }
      if (param_3 == 0) goto LAB_106b0f880;
      lVar4 = *(long *)(param_1 + 0x28);
      lVar3 = param_1;
      func_0x00010be95200(param_1);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))(lVar4,lVar3);
    }
    else {
      func_0x00010c252ee0();
      lVar3 = param_5;
      func_0x00010bf98fc0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar1);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010be95200(param_1);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))(lVar4,lVar2);
      _objc_release(lVar2);
      _objc_release(puVar1);
    }
    _objc_release(lVar3);
    func_0x00010bde10a0(param_1);
  }
LAB_106b0f880:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106b0f8a8; end: 106b0f9ab; -[SCLensProcessingURIServiceVideoTransformationHandler onRetry:] */

void FUN_106b0f8a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_3);
    func_0x00010bf3de00(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010c252ee0();
    uVar4 = param_3;
    func_0x00010bf98fc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010c14de00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010be95200(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,lVar3);
    _objc_release(lVar3);
    _objc_release(puVar2);
    _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bde10b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__clearStream_112555dc8);
    return;
  }
  return;
}



/* Entry: 106b0f9ac; end: 106b0f9f3; -[SCLensProcessingURIServiceVideoTransformationHandler _clearStream] */

void FUN_106b0f9ac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106b0f9f4; end: 106b0fa8f; -[SCLensProcessingURIServiceVideoTransformationHandler _responseForUri:code:data:description:] */

void FUN_106b0f9f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b1ce0;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c059e80();
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106b0fa90; end: 106b0faef; -[SCLensProcessingURIServiceVideoTransformationHandler .cxx_destruct] */

void FUN_106b0fa90(long param_1)

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



/* Entry: 106b0faf0; end: 106b0fc5b; -[SCLensProcessingURIServiceVoiceMLHandler initWithSnapTokenProvider:] */

undefined1 * FUN_106b0faf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f4ef8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106b0fc5c; end: 106b0fe6b; -[SCLensProcessingURIServiceVoiceMLHandler handleWithRequest:completion:] */

void FUN_106b0fc5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c28f280();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f5800();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0720c0();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if ((int)uVar3 == 0) {
    uVar1 = param_3;
    func_0x00010c28f280();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0f5800();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((int)uVar3 == 0) {
      uVar1 = param_3;
      func_0x00010c28f280();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0f5800();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0720c0();
      _objc_release(uVar2);
      _objc_release(uVar1);
      if ((int)uVar3 == 0) {
        uVar1 = param_3;
        func_0x00010c28f280();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar1;
        func_0x00010c0f5800();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c0720c0();
        _objc_release(uVar2);
        _objc_release(uVar1);
        if ((int)uVar3 == 0) {
          uVar1 = param_3;
          func_0x00010c28f280();
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010c0f5800();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          func_0x00010c0720c0();
          _objc_release(uVar2);
          _objc_release(uVar1);
          if ((int)uVar3 != 0) {
            func_0x00010be2a3c0(param_1,param_2,param_3,param_4);
          }
        }
        else {
          func_0x00010be33420(param_1,param_2,param_3);
        }
      }
      else {
        func_0x00010be333e0(param_1,param_2,param_3);
      }
    }
    else {
      func_0x00010be2a480(param_1,param_2,param_3,param_4);
    }
  }
  else {
    func_0x00010be2a2c0(param_1,param_2,param_3,param_4);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106b0fe6c; end: 106b0fe6f; -[SCLensProcessingURIServiceVoiceMLHandler reset] */

void FUN_106b0fe6c(void)

{
  return;
}



/* Entry: 106b0fe70; end: 106b0ffd7; -[SCLensProcessingURIServiceVoiceMLHandler _handleGetAuthTokenWithRequest:completion:] */

void FUN_106b0fe70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_106b0ffd8;
  puStack_68 = &UNK_11085d1a0;
  _objc_retain(param_3);
  uStack_60 = param_3;
  _objc_retain(param_4);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_106b10140;
  puStack_98 = &UNK_1108538b0;
  uStack_90 = param_3;
  uStack_88 = param_4;
  uStack_58 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfa48e0(uVar2,param_2,6,uVar3,uVar4,&puStack_80,&puStack_b0);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106b0ffd8; end: 106b1013f;  */

void FUN_106b0ffd8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSJSONSerialization_1126ae928;
  func_0x00010bf64b60();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1ce0;
  _objc_alloc(PTR_PTR_1126b1ce0);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c28f280(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c059e80(puVar3);
  _objc_release(uVar4);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar3);
  _objc_release(param_2);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126b1ce0;
  _objc_alloc(PTR_PTR_1126b1ce0);
  uVar4 = *(undefined8 *)(puVar1 + 0x20);
  func_0x00010c28f280(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c059e80(puVar2);
  _objc_release(uVar4);
  (**(code **)(*(long *)(puVar1 + 0x28) + 0x10))(*(long *)(puVar1 + 0x28),puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 106b10140; end: 106b101cb;  */

void FUN_106b10140(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b1ce0;
  _objc_alloc(PTR_PTR_1126b1ce0);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c28f280(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c059e80(puVar1);
  _objc_release(uVar2);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}


